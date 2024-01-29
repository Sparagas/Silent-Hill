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
            self.num_mipmap = bs.readUInt()
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


    img_buf = [0] * num_img
    for i in range(num_img):
        img_buf[i] = [0] * img_hdr[i].num_mipmap
        for j in range(img_hdr[i].num_mipmap):
            bs.seek(ofs_pal_hdr[i] + ps2_pal[i].ofs + img_hdr[i].ofs_mipmap_dat[j])
            img_buf[i][j] = bs.readBytes(img_hdr[i].len_mipmap[j])
            
            if img_hdr[i].img_fmt == 'RGBA8888':
                img = rapi.imageDecodeRaw(img_buf[i][j], img_hdr[i].w // (2 ** j), img_hdr[i].h // (2 ** j), 'b8g8r8a8')
            elif img_hdr[i].img_fmt == 'DXT1':
                img = rapi.imageDecodeDXT(img_buf[i][j], img_hdr[i].w // (2 ** j), img_hdr[i].h // (2 ** j), noesis.NOESISTEX_DXT1)
            elif img_hdr[i].img_fmt == 'DXT3':
                img = rapi.imageDecodeDXT(img_buf[i][j], img_hdr[i].w // (2 ** j), img_hdr[i].h // (2 ** j), noesis.NOESISTEX_DXT3)
            elif img_hdr[i].img_fmt == 'DXT5':
                img = rapi.imageDecodeDXT(img_buf[i][j], img_hdr[i].w // (2 ** j), img_hdr[i].h // (2 ** j), noesis.NOESISTEX_DXT5)

            img = NoeTexture(rapi.getInputName(), img_hdr[i].w // (2 ** j), img_hdr[i].h // (2 ** j), img, noesis.NOESISTEX_RGBA32)
            img.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
            tex_list.append(img)

