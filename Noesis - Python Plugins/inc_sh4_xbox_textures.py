"""Noesis Python Plugin

      File: inc_sh4_xbox_textures.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room (Microsoft - Xbox)
  Category: Include file
"""

from inc_noesis import *

from inc_sh4_textures import *


def sh4_xbox_textures(data, tex_list, block_num = None):
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
