# Author:
# Laurynas Zubavičius (Sparagas)

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: The Room (PS2)", ".bin")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadRGBA(handle, load_rgba)
    return 1


def check_type(data):
    if len(data) < 4:
        return 0
    return 1


def load_rgba(data, tex_list):
    bin = NoeBitStream(data)
    num_block = bin.readUInt()
    ofs_block = [bin.readUInt() for _ in range(num_block)]

    for k in range(num_block):
        bin.seek(ofs_block[k])
        temp0 = bin.readUShort()
        temp1 = bin.readUShort()
        bin.seek(ofs_block[k])
        if temp0 == temp1:
            print(k, "image block")

            bs = NoeBitStream(data[ofs_block[k]:])
            num_img = bs.readUShort()
            bs.seek(14, NOESEEK_REL)
            ofs_idx_hdr = [bs.readUInt() for _ in range(num_img)]
            ofs_pal_hdr = [bs.readUInt() for _ in range(num_img)]

            class Ps2Idx:
                def __init__(self):
                    self.w = bs.readUInt()
                    self.h = bs.readUInt()
                    self.idx_fmt = bs.readUByte()
                    if self.idx_fmt == 19:
                        self.idx_fmt = 8
                    elif self.idx_fmt == 20:
                        self.idx_fmt = 4
                    self.swz_flg = bs.readUByte()
                    bs.seek(2, NOESEEK_REL)
                    self.ofs = bs.readUInt()
            ps2_idx = [Ps2Idx()] * num_img
            for i in range(num_img):
                bs.seek(ofs_idx_hdr[i])
                ps2_idx[i] = Ps2Idx()

            class Ps2Pal:
                def __init__(self):
                    bs.seek(4, NOESEEK_REL)
                    self.num_pal = bs.readUInt()
                    bs.seek(4, NOESEEK_REL)
                    self.ofs = bs.readUInt()
            ps2_pal = [Ps2Pal()] * num_img
            for i in range(num_img):
                bs.seek(ofs_pal_hdr[i])
                ps2_pal[i] = Ps2Pal()

            idx_buf = [0] * num_img
            for i in range(num_img):
                bs.seek(ofs_idx_hdr[i] + ps2_idx[i].ofs)
                if ps2_idx[i].idx_fmt == 8:
                    idx_buf[i] = bs.readBytes(ps2_idx[i].w * ps2_idx[i].h)
                elif ps2_idx[i].idx_fmt == 4:
                    idx_buf[i] = bs.readBytes(ps2_idx[i].w * ps2_idx[i].h // 2)

            pal_buf = [0] * num_img
            for i in range(num_img):
                bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs)
                pal_buf[i] = [0] * ps2_pal[i].num_pal
                for j in range(ps2_pal[i].num_pal):
                    if ps2_idx[i].idx_fmt == 8:
                        pal_buf[i][j] = bs.readBytes(4 * 256)
                    elif ps2_idx[i].idx_fmt == 4:
                        pal_buf_pt1 = bs.readBytes(4 * 8)
                        bs.seek(4 * 8, NOESEEK_REL)
                        pal_buf_pt2 = bs.readBytes(4 * 8)
                        pal_buf[i][j] = pal_buf_pt1 + pal_buf_pt2

            for i in range(num_img):
                if ps2_idx[i].swz_flg == 0:
                    idx_buf[i] = rapi.imageUntwiddlePS2(idx_buf[i], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt)
                for j in range(ps2_pal[i].num_pal):
                    if ps2_idx[i].idx_fmt == 4:
                        img_buf = rapi.imageDecodeRawPal(idx_buf[i], pal_buf[i][j], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt, 'r8g8b8a8')
                    elif ps2_idx[i].idx_fmt == 8:
                        img_buf = rapi.imageDecodeRawPal(idx_buf[i], pal_buf[i][j], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
                    img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), ps2_idx[i].w, ps2_idx[i].h)
                    img_buf = NoeTexture(rapi.getInputName() + '_' + str(i) + '_' + str(j), ps2_idx[i].w, ps2_idx[i].h, img_buf, noesis.NOESISTEX_RGBA32)
                    img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                    tex_list.append(img_buf)

        else:
            print(k, "other block")
    return 1
