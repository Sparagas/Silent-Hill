"""Noesis Python Plugin

      File: inc_sh4_textures.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room (Sony - PlayStation 2)
            Silent Hill 4: The Room (Microsoft - Xbox)
            Silent Hill 4: The Room (Microsoft - Windows)
  Category: Image
"""

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: The Room (PS2, Xbox, PC)", ".textures")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadRGBA(handle, sh4_textures)
    return 1


def check_type(data):
    if len(data) < 4:
        return 0
    if data[:2] != data[2:4]:
        return 0
    return 1


def sh4_textures(data, tex_list, block_num=None):

    # common part ------------------------------------------------------
    class Ps2Idx:
        def __init__(self, bs):
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


    class Ps2Pal:
        def __init__(self, bs):
            bs.seek(4, NOESEEK_REL)
            self.num_pal = bs.readUInt()
            bs.seek(4, NOESEEK_REL)
            self.ofs = bs.readUInt()

    bs = NoeBitStream(data)

    num_img = bs.readUShort()
    bs.seek(14, NOESEEK_REL)
    ofs_idx_hdr = [bs.readUInt() for _ in range(num_img)]
    ofs_pal_hdr = [bs.readUInt() for _ in range(num_img)]

    ps2_idx = [Ps2Idx] * num_img
    for i in range(num_img):
        bs.seek(ofs_idx_hdr[i])
        ps2_idx[i] = Ps2Idx(bs)

    ps2_pal = [Ps2Pal] * num_img
    for i in range(num_img):
        bs.seek(ofs_pal_hdr[i])
        ps2_pal[i] = Ps2Pal(bs)
    # common part end ------------------------------------------------------

    if ps2_idx[0].ofs == 0:
        print("PC detected")

    # pc part ------------------------------------------------------
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
                self.num_mip = bs.readUInt()
                self.len_mip = [bs.readUInt() for _ in range(7)]
                bs.seek(4, NOESEEK_REL)
                self.ofs_mip_dat = [bs.readUInt() for _ in range(7)]
                bs.seek(4, NOESEEK_REL)
        img_hdr = [ImgHdr] * num_img
        for i in range(num_img):
            bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs)
            img_hdr[i] = [ImgHdr] * ps2_pal[i].num_pal
            for j in range(ps2_pal[i].num_pal):
                img_hdr[i][j] = ImgHdr()

        img_buf = [0] * num_img
        for i in range(num_img):
            img_buf[i] = [0] * ps2_pal[i].num_pal
            for j in range(ps2_pal[i].num_pal):
                img_buf[i][j] = [0] * img_hdr[i][j].num_mip
                for k in range(img_hdr[i][j].num_mip):
                    bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs + img_hdr[i][j].ofs_mip_dat[k] + j * 112)  # hack
                    img_buf[i][j][k] = bs.readBytes(img_hdr[i][j].len_mip[k])

                    w = img_hdr[i][j].w // (2 ** k)
                    if w < 4 and img_hdr[i][j].img_fmt != 'RGBA8888':
                        w = 4
                    h = img_hdr[i][j].h // (2 ** k)
                    if h < 4 and img_hdr[i][j].img_fmt != 'RGBA8888':
                        h = 4

                    if block_num is None:
                        name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}_{}'.format(i, j, k)
                    else:
                        name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}_{}_{}'.format(block_num, i, j, k)

                    img = img_buf[i][j][k]

                    if img_hdr[i][j].img_fmt == 'RGBA8888':
                        img = rapi.imageDecodeRaw(img, w, h, 'b8g8r8a8')
                        img = NoeTexture(name, w, h, img, noesis.NOESISTEX_RGBA32)

                    elif img_hdr[i][j].img_fmt == 'DXT1':
                        img = NoeTexture(name, w, h, img, noesis.NOESISTEX_DXT1)

                    elif img_hdr[i][j].img_fmt == 'DXT3':
                        img = NoeTexture(name, w, h, img, noesis.NOESISTEX_DXT3)

                    img.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                    tex_list.append(img)
    # pc part end ------------------------------------------------------

    else:
        bs.seek(ofs_idx_hdr[0] + ps2_idx[0].ofs)
        bs.seek(4, NOESEEK_REL)
        tmp1 = bs.readUInt()
        bs.seek(36, NOESEEK_REL)
        tmp2 = bs.readUInt()
        if tmp1 == tmp2:
            print("Xbox detected")
            # xbox part ------------------------------------------------------
            class IdxHdr:
                def __init__(self):
                    bs.seek(4, NOESEEK_REL)
                    self.ofs_idx_dat = bs.readUInt()
                    bs.seek(24, NOESEEK_REL)
                    self.w = bs.readUInt()
                    self.h = bs.readUInt()
                    bs.seek(4, NOESEEK_REL)
                    self.ofs_idx_dat = bs.readUInt()
            idx_hdr = [IdxHdr] * num_img
            for i in range(num_img):
                bs.seek(ofs_idx_hdr[i] + ps2_idx[i].ofs)
                idx_hdr[i] = IdxHdr()

            class PalHdr:
                def __init__(self):
                    bs.seek(4, NOESEEK_REL)
                    self.ofs_pal_dat = bs.readUInt()
                    bs.seek(36, NOESEEK_REL)
                    self.ofs_pal_dat = bs.readUInt()
            pal_hdr = [PalHdr] * num_img
            for i in range(num_img):
                bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs)
                pal_hdr[i] = PalHdr()

            idx_buf = [0] * num_img
            for i in range(num_img):
                bs.seek(ofs_idx_hdr[i] + ps2_idx[i].ofs + idx_hdr[i].ofs_idx_dat)
                idx_buf[i] = bs.readBytes(idx_hdr[i].w * idx_hdr[i].h)

            pal_buf = [0] * num_img
            for i in range(num_img):
                bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs + pal_hdr[i].ofs_pal_dat)
                pal_buf[i] = [0] * ps2_pal[i].num_pal
                for j in range(ps2_pal[i].num_pal):
                    pal_buf[i][j] = bs.readBytes(4 * 256)

            for i in range(num_img):
                for j in range(ps2_pal[i].num_pal):
                    if ps2_idx[i].idx_fmt == 8:
                        img_buf = rapi.imageDecodeRawPal(idx_buf[i], pal_buf[i][j], idx_hdr[i].w, idx_hdr[i].h, 8, 'b8g8r8a8')
                        img_buf = rapi.imageFromMortonOrder(img_buf, idx_hdr[i].w, idx_hdr[i].h, 4)

                        if block_num is None:
                            name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}'.format(i, j)
                        else:
                            name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}_{}'.format(block_num, i, j)

                        img_buf = NoeTexture(name, idx_hdr[i].w, idx_hdr[i].h, img_buf, noesis.NOESISTEX_RGBA32)
                        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                        tex_list.append(img_buf)
                    else:
                        for k in range(16):
                            if pal_buf[i][j][k * 64: k * 64 + 63][:8] != b'\x00\x00\x00\x00\x00\x00\x00\x00':
                                img_buf = rapi.imageDecodeRawPal(idx_buf[i], pal_buf[i][j][k * 64: k * 64 + 63], idx_hdr[i].w, idx_hdr[i].h, 8, 'b8g8r8a8')
                                img_buf = rapi.imageFromMortonOrder(img_buf, idx_hdr[i].w, idx_hdr[i].h, 4)

                                if block_num is None:
                                    name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}'.format(i, j)
                                else:
                                    name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}_{}'.format(block_num, i, j)

                                img_buf = NoeTexture(name, idx_hdr[i].w, idx_hdr[i].h, img_buf, noesis.NOESISTEX_RGBA32)
                                img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                                tex_list.append(img_buf)
            # xbox part end ------------------------------------------------------
        else:
            print("PS2 detected")
            # ps2 part ------------------------------------------------------
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
                if ps2_idx[i].idx_fmt == 8:
                    pal_buf[i] = [0] * ps2_pal[i].num_pal
                    for j in range(ps2_pal[i].num_pal):
                        pal_buf[i][j] = bs.readBytes(4 * 256)
                elif ps2_idx[i].idx_fmt == 4:
                    pal_buf[i] = [0] * ps2_pal[i].num_pal * 16
                    for j in range(0, ps2_pal[i].num_pal * 16, 2):
                        pal_buf_pt1 = bs.readBytes(4 * 8)
                        bs.seek(4 * 8, NOESEEK_REL)
                        pal_buf_pt2 = bs.readBytes(4 * 8)
                        pal_buf[i][j] = pal_buf_pt1 + pal_buf_pt2
                        bs.seek(4 * -16, NOESEEK_REL)
                        pal_buf_pt1 = bs.readBytes(4 * 8)
                        bs.seek(4 * 8, NOESEEK_REL)
                        pal_buf_pt2 = bs.readBytes(4 * 8)
                        pal_buf[i][j + 1] = pal_buf_pt1 + pal_buf_pt2

            for i in range(num_img):
                if ps2_idx[i].swz_flg == 0:
                    idx_buf[i] = rapi.imageUntwiddlePS2(idx_buf[i], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt)
                if ps2_idx[i].idx_fmt == 8:
                    for j in range(ps2_pal[i].num_pal):
                        img_buf = rapi.imageDecodeRawPal(idx_buf[i], pal_buf[i][j], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
                        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), ps2_idx[i].w, ps2_idx[i].h)
                        
                        if block_num is None:
                            name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}'.format(i, j)
                        else:
                            name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}_{}'.format(block_num, i, j)

                        img_buf = NoeTexture(name, ps2_idx[i].w, ps2_idx[i].h, img_buf, noesis.NOESISTEX_RGBA32)
                        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                        tex_list.append(img_buf)

                elif ps2_idx[i].idx_fmt == 4:
                    for j in range(ps2_pal[i].num_pal * 16):
                        if pal_buf[i][j][:8] != b'\x00\x00\x00\x00\x00\x00\x00\x00':
                            img_buf = rapi.imageDecodeRawPal(idx_buf[i], pal_buf[i][j], ps2_idx[i].w, ps2_idx[i].h, ps2_idx[i].idx_fmt, 'r8g8b8a8')
                            img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), ps2_idx[i].w, ps2_idx[i].h)

                            if block_num is None:
                                name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}'.format(i, j)
                            else:
                                name = rapi.getExtensionlessName(rapi.getInputName()) + '_{}_{}_{}'.format(block_num, i, j)

                            img_buf = NoeTexture(name, ps2_idx[i].w, ps2_idx[i].h, img_buf, noesis.NOESISTEX_RGBA32)
                            img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                            tex_list.append(img_buf)
            # ps2 part end ------------------------------------------------------
    return 1
