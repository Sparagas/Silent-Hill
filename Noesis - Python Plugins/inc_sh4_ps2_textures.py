"""Noesis Python Plugin

      File: inc_sh4_ps2_textures.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room (Sony - PlayStation 2)
  Category: Include file
"""

from inc_noesis import *

from inc_sh4_textures import *


def sh4_ps2_textures(data, tex_list, block_num = None):
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
