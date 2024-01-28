"""Noesis Python Plugin

      File: fmt_she_ios_pvr.py
    Author: Laurynas Zubavičius (Sparagas)
   Purpose: Silent Hill: The Escape (Apple - iOS)
  Category: Image
 File Mask: *.pvr
  ID Bytes: 
"""

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill: The Escape (iOS)", ".pvr")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadRGBA(handle, load_rgba)
    return 1


def check_type(data):
    if len(data) < 4:
        return 0
    if data[:4] != b'PVR4':
        return 0
    return 1


def load_rgba(data, tex_list):
    bs = NoeBitStream(data)
    bs.seek(5)
    dim_pwr = bs.readUByte()
    dim = 2 ** dim_pwr
    img_buf = data[8:]
    img_buf = rapi.imageDecodePVRTC(img_buf, dim, dim, 4)
    img_buf = rapi.imageFlipRGBA32(img_buf, dim, dim, 0, 1)
    img_buf = NoeTexture(rapi.getInputName(), dim, dim, img_buf, noesis.NOESISTEX_RGBA32)
    img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
    tex_list.append(img_buf)
    return 1
