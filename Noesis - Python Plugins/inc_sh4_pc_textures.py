"""Noesis Python Plugin

      File: inc_sh4_pc_textures.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room (Microsoft - Windows)
  Category: Include file
"""

from inc_noesis import *


def sh4_pc_textures(data, tex_list):
    bs = NoeBitStream(data)
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

    class ImgHdr:
        def __init__(self):
            bs.seek(32, NOESEEK_REL)
            self.w = bs.readUInt()
            self.h = bs.readUInt()
            self.img_fmt = bs.readUInt()
            if self.img_fmt == 21:
                self.img_fmt = 'RGBA8888'
            elif self.img_fmt == 827611204:
                self.img_fmt = 'DXT1'
            elif self.img_fmt == 861165636:
                self.img_fmt = 'DXT3'
            elif self.img_fmt == 894720068:
                self.img_fmt = 'DXT5'
            bs.seek(4, NOESEEK_REL)
            self.len_mipmap = [bs.readUInt() for _ in range(7)]
            bs.seek(4, NOESEEK_REL)
            self.ofs_mipmap_dat = [bs.readUInt() for _ in range(7)]
            bs.seek(4, NOESEEK_REL)
    img_hdr = [ImgHdr()] * num_img
    for i in range(num_img):
        bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs)
        # img_hdr[i] = [ImgHdr()] * ps2_pal[i].num_pal
        # for j in range(ps2_pal[i].num_pal):
            # img_hdr[i][j] = ImgHdr()
            # print(img_hdr[i][j].w, img_hdr[i][j].h)
        img_hdr[i] = ImgHdr()
        print(img_hdr[i].w, img_hdr[i].h)


#---------------------
    img_buf = [0] * num_img
    for i in range(num_img):
        bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs + img_hdr[i].ofs_mipmap_dat[0])
        img_buf[i] = bs.readBytes(img_hdr[i].len_mipmap[0])

    for i in range(num_img):
        if img_hdr[i].img_fmt == 'RGBA8888':
            img = rapi.imageDecodeRaw(img_buf[i], img_hdr[i].w, img_hdr[i].h, 'b8g8r8a8')
        elif img_hdr[i].img_fmt == 'DXT1':
            img = rapi.imageDecodeDXT(img_buf[i], img_hdr[i].w, img_hdr[i].h, noesis.NOESISTEX_DXT1)
        elif img_hdr[i].img_fmt == 'DXT3':
            img = rapi.imageDecodeDXT(img_buf[i], img_hdr[i].w, img_hdr[i].h, noesis.NOESISTEX_DXT3)
        elif img_hdr[i].img_fmt == 'DXT5':
            img = rapi.imageDecodeDXT(img_buf[i], img_hdr[i].w, img_hdr[i].h, noesis.NOESISTEX_DXT5)

        img = NoeTexture(rapi.getInputName(), img_hdr[i].w, img_hdr[i].h, img, noesis.NOESISTEX_RGBA32)
        img.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img)

    # pal_buf = [0] * num_img
    # for i in range(num_img):
        # bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs)
        # if ps2_idx[i].idx_fmt == 8:
            # pal_buf[i] = [0] * ps2_pal[i].num_pal
            # for j in range(ps2_pal[i].num_pal):
                # pal_buf[i][j] = bs.readBytes(4 * 256)
        # elif ps2_idx[i].idx_fmt == 4:
            # pal_buf[i] = [0] * ps2_pal[i].num_pal * 16
            # for j in range(0, ps2_pal[i].num_pal * 16, 2):
                # pal_buf_pt1 = bs.readBytes(4 * 8)
                # bs.seek(4 * 8, NOESEEK_REL)
                # pal_buf_pt2 = bs.readBytes(4 * 8)
                # pal_buf[i][j] = pal_buf_pt1 + pal_buf_pt2
                # bs.seek(4 * -16, NOESEEK_REL)
                # pal_buf_pt1 = bs.readBytes(4 * 8)
                # bs.seek(4 * 8, NOESEEK_REL)
                # pal_buf_pt2 = bs.readBytes(4 * 8)
                # pal_buf[i][j + 1] = pal_buf_pt1 + pal_buf_pt2

    # for i in range(num_img):
        # if ps2_idx[i].swz_flg == 0:
            # img_buf[i] = rapi.imageUntwiddlePS2(img_buf[i], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt)
        # if ps2_idx[i].idx_fmt == 8:
            # for j in range(ps2_pal[i].num_pal):
                # img_buf = rapi.imageDecodeRawPal(img_buf[i], pal_buf[i][j], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
                # img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), ps2_idx[i].w, ps2_idx[i].h)
                # img_buf = NoeTexture(rapi.getInputName() + '_' + str(i) + '_' + str(j), ps2_idx[i].w, ps2_idx[i].h, img_buf, noesis.NOESISTEX_RGBA32)
                # img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                # tex_list.append(img_buf)

        # elif ps2_idx[i].idx_fmt == 4:
            # for j in range(ps2_pal[i].num_pal * 16):
                # if pal_buf[i][j][:8] != b'\x00\x00\x00\x00\x00\x00\x00\x00':
                    # img_buf = rapi.imageDecodeRawPal(img_buf[i], pal_buf[i][j], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt, 'r8g8b8a8')
                    # img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), ps2_idx[i].w, ps2_idx[i].h)
                    # img_buf = NoeTexture(rapi.getInputName() + '_' + str(i) + '_' + str(j), ps2_idx[i].w, ps2_idx[i].h, img_buf, noesis.NOESISTEX_RGBA32)
                    # img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                    # tex_list.append(img_buf)
