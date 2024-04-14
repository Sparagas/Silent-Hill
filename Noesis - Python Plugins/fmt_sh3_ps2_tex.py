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
    bs = NoeBitStream(data)
    bs.seek(96)
    tex_id = bs.readUInt()
    if tex_id == 4294967295:
        return 1
    else:
        return 0

def load_rgba(data, tex_list):
    bs = NoeBitStream(data)
    bs.seek(104)
    width = bs.readUShort()
    height = bs.readUShort()
    clr_bpp = bs.readUByte()
    len_pad = bs.readUByte()
    bs.seek(2, NOESEEK_REL)
    body_size = bs.readUInt()
    bs.seek(144)
    bs.seek(len_pad, NOESEEK_REL)
    
    if clr_bpp == 24:
        img_buf = bs.readBytes(body_size)
        img_buf = rapi.imageDecodeRaw(img_buf, width, height, 'r8g8b8a8')
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), width, height)
        img_buf = NoeTexture('va', width, height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)

    elif clr_bpp == 8:
        idx_buf = bs.readBytes(body_size)
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
        
        idx_buf = rapi.imageUntwiddlePS2(idx_buf, width, height, 8)
        img_buf = rapi.imageDecodeRawPal(idx_buf, pal_buf, width, height, 8, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), width, height)
        img_buf = NoeTexture('va', width, height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)
        
    elif clr_bpp == 4:
        idx_buf = bs.readBytes(body_size)
        bs.seek(48, NOESEEK_REL)
        
        pal_buf = bs.readBytes(32)
        bs.seek(224, NOESEEK_REL)
        pal_buf += bs.readBytes(32)

        idx_buf = rapi.imageUntwiddlePS2(idx_buf, width, height, 4)
        img_buf = rapi.imageDecodeRawPal(idx_buf, pal_buf, width, height, 4, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), width, height)
        img_buf = NoeTexture('va', width, height, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)
    return 1
