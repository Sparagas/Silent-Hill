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


PSMCT32  = 0x00
PSMCT24  = 0x01
PSMCT16  = 0x02
PSMCT16S = 0x0A
PSMT8    = 0x13
PSMT4    = 0x14
PSMT8H   = 0x1B
PSMT4HL  = 0x24
PSMT4HH  = 0x2C
PSMZ32   = 0x30
PSMZ24   = 0x31
PSMZ16   = 0x32
PSMZ16S  = 0x3A


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


class ClutsHead:
    def __init__(self, bs):
        self.cluts_len        = bs.readUInt()
        self.unk_GSREGS_ofs   = bs.readUInt()
        self.unk_Raw_clut_ofs = bs.readUInt()

        self.clut_count       = bs.readUByte()
        self.unk_trans_cluts  = bs.readUByte()
        self.clw              = bs.readUByte()
        self.clh              = bs.readUByte()

        self.unk_fmt          = bs.readBytes(16)
        self.unk_trans        = bs.readBytes(16)


def load_rgba(data, tex_list):
    bs = NoeBitStream(data)

    file_head = FileHead(bs)
    tex_head  = TexHead(bs)

    bs.seek(tex_head.pad_len, NOESEEK_REL)
    tex_buf = bs.readBytes(tex_head.data_len)

    if tex_head.clr_bpp == 24:
        img_buf = rapi.imageDecodeRaw(tex_buf, tex_head.width, tex_head.height, 'r8g8b8a8')
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), tex_head.width, tex_head.height)
        img_buf = NoeTexture('va', tex_head.width, tex_head.height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)

    elif tex_head.clr_bpp == 8:
        cluts_head = ClutsHead(bs)
        
        cluts_buf = bs.readBytes(cluts_head.cluts_len)
        
        # pal0_buf += bs.readBytes(64)
        # pal1_buf += bs.readBytes(64)
        # pal2_buf += bs.readBytes(64)
        # pal3_buf += bs.readBytes(64)
        # ...
        block = 64

        pal0_buf = bytearray()
        pal1_buf = bytearray()
        pal2_buf = bytearray()
        pal3_buf = bytearray()

        for i in range(0, len(cluts_buf), block * 4):
            pal0_buf += cluts_buf[i + 0*block : i + 1*block]
            pal1_buf += cluts_buf[i + 1*block : i + 2*block]
            pal2_buf += cluts_buf[i + 2*block : i + 3*block]
            pal3_buf += cluts_buf[i + 3*block : i + 4*block]
        
        idx_buf = rapi.imageUntwiddlePS2(tex_buf, tex_head.width, tex_head.height, 8)
        img_buf = rapi.imageDecodeRawPal(idx_buf, pal0_buf, tex_head.width, tex_head.height, 8, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), tex_head.width, tex_head.height)
        img_buf = NoeTexture('va', tex_head.width, tex_head.height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)
        
        # DEBUG INFO
        # cluts_buf = rapi.imageDecodeRaw(cluts_buf, 64, 64, 'r8g8b8a8')
        # cluts_buf = rapi.imageUntwiddlePS2(cluts_buf, 32, 32, 16)

        test_buf = pal0_buf + pal1_buf + pal2_buf + pal3_buf
        
        test_buf = rapi.imageDecodeRaw(test_buf, 64, 64, 'r8g8b8a8')

        clutLine = NoeTexture('CLUTS', 256, cluts_head.clut_count, test_buf, noesis.NOESISTEX_RGBA32)
        clutLine.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(clutLine)
        
        clutLine = NoeTexture('CLUTS', 256, cluts_head.clut_count, cluts_buf, noesis.NOESISTEX_RGBA32)
        clutLine.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(clutLine)
        
        clutLine = NoeTexture('CLUTS', 16, 16 * cluts_head.clut_count, test_buf, noesis.NOESISTEX_RGBA32)
        clutLine.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(clutLine)
        
        clutLine = NoeTexture('CLUTS', 16, 16 * cluts_head.clut_count, cluts_buf, noesis.NOESISTEX_RGBA32)
        clutLine.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(clutLine)
        
        clutLine = NoeTexture('CLUTS', 64, 4 * cluts_head.clut_count, test_buf, noesis.NOESISTEX_RGBA32)
        clutLine.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(clutLine)
        
        clutLine = NoeTexture('CLUTS', 64, 4 * cluts_head.clut_count, cluts_buf, noesis.NOESISTEX_RGBA32)
        clutLine.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(clutLine)


        # indices = bytearray(range(256))
        # indices = rapi.imageUntwiddlePS2(indices, 64, 4 * cluts_head.clut_count, 8)
        # palRGBA = rapi.imageDecodeRawPal(indices, tex_head.width, tex_head.height, 8, "r8g8b8a8", noesis.DECODEFLAG_PS2SHIFT)

        # clutLine = NoeTexture('CLUTS', 256, cluts_head.clut_count, palRGBA, noesis.NOESISTEX_RGBA32)
        # clutLine.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        # tex_list.append(clutLine)

    elif tex_head.clr_bpp == 4:
        cluts_head = ClutsHead(bs)
        
        pal0_buf = bs.readBytes(32)
        bs.seek(224, NOESEEK_REL)
        pal0_buf += bs.readBytes(32)

        idx_buf = rapi.imageUntwiddlePS2(tex_buf, tex_head.width, tex_head.height, 4)
        img_buf = rapi.imageDecodeRawPal(idx_buf, pal0_buf, tex_head.width, tex_head.height, 4, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), tex_head.width, tex_head.height)
        img_buf = NoeTexture('va', tex_head.width, tex_head.height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)
    return 1
