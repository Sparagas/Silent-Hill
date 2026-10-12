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
    handle = noesis.register("Silent Hill 3 (PS2) texture", ".tex")
    noesis.setHandlerTypeCheck(handle, noepyCheckType)
    noesis.setHandlerLoadRGBA(handle, noepyLoadRGBA)
    return 1


def noepyCheckType(data):
    bs = NoeBitStream(data)
    magic = bs.readInt()
    if magic == -1:
        return 1
    else:
        return 0


PAGE_BLOCKS = [
     0,  1,  4,  5, 16, 17, 20, 21,
     2,  3,  6,  7, 18, 19, 22, 23,
     8,  9, 12, 13, 24, 25, 28, 29,
    10, 11, 14, 15, 26, 27, 30, 31,

    32, 33, 36, 37, 48, 49, 52, 53,
    34, 35, 38, 39, 50, 51, 54, 55,
    40, 41, 44, 45, 56, 57, 60, 61,
    42, 43, 46, 47, 58, 59, 62, 63,
]


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
        self.magic         = bs.readInt()
        self.version       = bs.readUInt()  # Could be not version
        self.contentOffset = bs.readUInt()
        self.lastOffset    = bs.readUInt()  # Goes to last texture, unless it only has one texture. Then it is file size.
        self.padding_0x10  = bs.readUInt()  # Could be not padding
        self.texCount      = bs.readUInt()
        self.padding_0x18  = bs.readUInt()
        self.padding_0x1C  = bs.readUInt()

        assert self.magic == -1


class TexHead:
    SIZEOF = 48  # asserted in original struct

    def __init__(self, bs):
        self.texId         = bs.readInt()
        self.unkX          = bs.readUShort()
        self.unkY          = bs.readUShort()
        self.width         = bs.readUShort()
        self.height        = bs.readUShort()
        self.colorBpp      = bs.readUByte()
        self.padSize       = bs.readUByte()
        self.unkImportance = bs.readUShort()
        self.dataSize      = bs.readUInt()
        self.allSize       = bs.readUInt()
        self.unkSendPsm    = bs.readUByte()  # GS_PSM enum
        self.drawPsm       = bs.readUByte()  # GS_PSM enum
        self.unkBitShift   = bs.readUByte()
        self.unkTagPoint   = bs.readUByte()
        self.bitW          = bs.readUByte()
        self.bitH          = bs.readUByte()
        self.check         = bs.readUShort()
        self.giftag        = bs.readBytes(16)

        # assert self.allSize != self.dataSize + self.padSize + TexHead.SIZEOF:
        assert self.width == 1 << self.bitW
        assert self.height == 1 << self.bitH
        assert self.check == 0x9999


class ClutsHead:
    def __init__(self, bs):
        self.clutsSize        = bs.readUInt()
        self.unkGsregsOffset  = bs.readUInt()
        self.unkRawClutOffset = bs.readUInt()
        self.clutCount        = bs.readUByte()
        self.unkTransCluts    = bs.readUByte()
        self.clutW            = bs.readUByte()
        self.clutH            = bs.readUByte()
        self.unkFmt           = bs.readBytes(16)
        self.unkTrans         = bs.readBytes(16)

        assert self.clutCount in (4, 8, 16)


def noepyLoadRGBA(data, tex_list):
    bs = NoeBitStream(data)

    # parseRGBA()
    fileHead = FileHead(bs)

    for _ in range(fileHead.texCount):
        texHead = TexHead(bs)

        bs.seek(texHead.allSize - texHead.dataSize - 48, NOESEEK_REL)
        tex_buf = bs.readBytes(texHead.dataSize)

        if texHead.colorBpp in (4, 8):
            clutsHead = ClutsHead(bs)
            cluts_buf = bs.readBytes(clutsHead.clutsSize)

    # buildRGBA()
        if texHead.colorBpp == 24:
            # img_buf = rapi.imageDecodeRaw(tex_buf, texHead.width, texHead.height, 'r8g8b8a8')
            img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), texHead.width, texHead.height)
            img_buf = NoeTexture('tex%d' % _, texHead.width, texHead.height, img_buf, noesis.NOESISTEX_RGBA32)
            img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
            tex_list.append(img_buf)

        if texHead.colorBpp in (4, 8):
            idx_buf = rapi.imageUntwiddlePS2(tex_buf, texHead.width, texHead.height, texHead.colorBpp)
            blockSize = 64
            groupCount = 4
            clutSize = len(cluts_buf) // clutsHead.clutCount
            dummyClut = b'\xcc' * clutSize
            
            pal_buf = [bytearray() for _ in range(clutsHead.clutCount)]
            
            # 1. De-interleave raw memory stripes (rows and columns)
            for g in range(0, clutsHead.clutCount, groupCount):
                chunk = cluts_buf[g * clutSize : (g + groupCount) * clutSize]

                for row in range(0, len(chunk), blockSize * groupCount):
                    for col in range(groupCount):
                        pal_buf[g + col] += chunk[row + col * blockSize : row + (col + 1) * blockSize]

            # 2. Reorder from Morton (Z-order) to linear raster index
            MORTON_MAPS = {
                8:  (0, 1, 4, 5, 2, 3, 6, 7),
                16: (0, 1, 4, 5, 2, 3, 6, 7, 8, 9, 12, 13, 10, 11, 14, 15)
            }
            
            if clutsHead.clutCount in MORTON_MAPS:
                remap = MORTON_MAPS[clutsHead.clutCount]
                pal_buf = [pal_buf[src] for src in remap]
            
            for i in range(clutsHead.clutCount):
                if pal_buf[i] != dummyClut:
                    img_buf = rapi.imageDecodeRawPal(idx_buf, pal_buf[i], texHead.width, texHead.height, texHead.colorBpp, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
                    img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), texHead.width, texHead.height)
                    img_buf = NoeTexture('tex%d_clut%d' % (_, i), texHead.width, texHead.height, img_buf, noesis.NOESISTEX_RGBA32)
                    img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                    tex_list.append(img_buf)

        # debug
        img_buf = rapi.imageDecodeRaw(cluts_buf, clutsHead.clutW, clutsHead.clutH, 'r8g8b8a8')
        img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), clutsHead.clutW, clutsHead.clutH)
        img_buf = NoeTexture('tex%d_cluts' % _, clutsHead.clutW, clutsHead.clutH, img_buf, noesis.NOESISTEX_RGBA32)
        img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
        tex_list.append(img_buf)

    return 1
