"""Noesis Python Plugin

      File: fmt_sh3_ps2_tex.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 3 (Sony - PlayStation 2)
  Category: Image
 File Mask: *.tex
  ID Bytes: 
"""

from inc_noesis import *

def registerNoesisTypes():
    handle = noesis.register("Silent Hill 3 (PS2)", ".tex")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadRGBA(handle, load_rgba)
    return 1


def check_type(data):
    return 1
    bs = NoeBitStream(data)
    bs.seek(96)
    tex_id = bs.readUInt()
    if tex_id == 4294967295:
        return 1
    else:
        return 0


class FileHead:
    def __init__(self, bs):
        self.magic        = bs.readInt()
        self.ver          = bs.readUInt()
        self.content_ofs  = bs.readUInt()
        self.content_size = bs.readUInt()
        self.pad0         = bs.readUInt()
        self.num_tex      = bs.readUInt()
        self.pad1         = bs.readUInt()
        self.pad2         = bs.readUInt()


class TexHead:
    SIZEOF = 48  # asserted in original struct

    def __init__(self, bs):
        self.tex_id         = bs.readInt()
        self.unk_x          = bs.readUShort()
        self.unk_y          = bs.readUShort()
        self.width          = bs.readUShort()
        self.height         = bs.readUShort()
        self.clr_bpp        = bs.readUByte()
        self.pad_len        = bs.readUByte()
        self.unk_importance = bs.readUShort()
        self.data_len       = bs.readUInt()
        self.all_len        = bs.readUInt()
        self.unk_send_psm   = bs.readUByte()
        self.draw_psm       = bs.readUByte()  # GS_PSM enum
        self.unk_bit_shift  = bs.readUByte()
        self.unk_tag_point  = bs.readUByte()
        self.bit_w          = bs.readUByte()
        self.bit_h          = bs.readUByte()
        self.unk_check      = bs.readUShort()
        self.unk_giftag     = bs.readBytes(16)

    def validate(self):
        # Optional runtime validation
        if self.all_len != self.data_len + self.pad_len + TexHead.SIZEOF:
            print("Warning: TexHead size mismatch")

        if self.tex_head.width != (1 << self.bit_w):
            print("Warning: tex_head.width != 1 << bit_w")

        if self.tex_head.height != (1 << self.bit_h):
            print("Warning: tex_head.height != 1 << bit_h")


def load_rgba(data, tex_list):
    bs = NoeBitStream(data)

    bs.seek(32)
    tex_head = TexHead(bs)

    bs.seek(tex_head.pad_len, NOESEEK_REL)
    
    if tex_head.clr_bpp == 24:
        img_buf = bs.readBytes(tex_head.data_len)
        img_buf = rapi.imageDecodeRaw(img_buf, tex_head.tex_head.width, tex_head.height, 'r8g8b8a8')
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), tex_head.tex_head.width, tex_head.height)
        img_buf = NoeTexture('va', tex_head.tex_head.width, tex_head.height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)

    elif tex_head.clr_bpp == 8:
        idx_buf = bs.readBytes(tex_head.data_len)
        bs.seek(48, NOESEEK_REL)
        
        pal_buf = bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        bs.seek(192, NOESEEK_REL)
        pal_buf += bs.readBytes(64)
        
        idx_buf = rapi.imageUntwiddlePS2(idx_buf, tex_head.width, tex_head.height, 8)
        img_buf = rapi.imageDecodeRawPal(idx_buf, pal_buf, tex_head.width, tex_head.height, 8, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), tex_head.width, tex_head.height)
        img_buf = NoeTexture('va', tex_head.width, tex_head.height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)
        
    elif tex_head.clr_bpp == 4:
        idx_buf = bs.readBytes(tex_head.data_len)
        bs.seek(48, NOESEEK_REL)
        
        pal_buf = bs.readBytes(32)
        bs.seek(224, NOESEEK_REL)
        pal_buf += bs.readBytes(32)

        idx_buf = rapi.imageUntwiddlePS2(idx_buf, tex_head.width, tex_head.height, 4)
        img_buf = rapi.imageDecodeRawPal(idx_buf, pal_buf, tex_head.width, tex_head.height, 4, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), tex_head.width, tex_head.height)
        img_buf = NoeTexture('va', tex_head.width, tex_head.height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)
    return 1
