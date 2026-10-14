"""Noesis Python Plugin

      File: tex_sh2_sh3_ps2_tex_tbn2.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 2 and Silent Hill 3 (Sony - PlayStation 2)
  Category: Image
 File Mask: *.tex,*.tbn2
  ID Bytes: 
"""

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 2 / 3 (PS2) texture", ".tex;.tbn2")
    noesis.setHandlerTypeCheck(handle, noepyCheckType)
    noesis.setHandlerLoadRGBA(handle, noepyLoadRGBA)
    return 1


def noepyCheckType(data):
    bs = NoeBitStream(data)
    areaId = bs.readInt()
    if areaId in (0, -1):
        return 1
    bs.seek(26, NOESEEK_REL)
    check = bs.readUShort()
    if check == 0x9999:
        return 1
    return 0


# GS_PSM
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


class Sh2AreaHead:
    def __init__(self, bs):
        self.areaId                = bs.readInt()
        self.GlobalTexHeadOffset   = bs.readUInt()
        self.GlobalClutsHeadOffset = bs.readUInt()
        self.dummyDate             = bs.readUInt()

        assert self.areaId == 0
        assert self.dummyDate == 0xA7A7A7A7


class Sh3AreaHead:
    def __init__(self, bs):
        self.areaId        = bs.readInt()
        self.unknown_0x04  = bs.readUInt()
        self.contentOffset = bs.readUInt()
        self.lastOffset    = bs.readUInt()  # Goes to last texture, unless it only has one texture. Then it is file size.
        self.unknown_0x10  = bs.readUInt()
        self.texCount      = bs.readUInt()
        self.unknown_0x18  = bs.readUInt()
        self.unknown_0x1C  = bs.readUInt()

        assert self.areaId == -1


class TexHead:  # sh2gfw_TEX_HEAD
    SIZEOF = 48

    def __init__(self, bs):
        self.texId         = bs.readInt()     # texture_no
        self.unkX          = bs.readUShort()  # x
        self.unkY          = bs.readUShort()  # y
        self.width         = bs.readUShort()  # w
        self.height        = bs.readUShort()  # h
        self.colorBpp      = bs.readUByte()   # color
        self.padSize       = bs.readUByte()   # padbyte
        self.unkImportance = bs.readUShort()  # importance
        self.dataSize      = bs.readUInt()    # datasize
        self.allSize       = bs.readUInt()    # allsize
        self.unkSendPsm    = bs.readUByte()   # sendpsm (GS_PSM enum)
        self.drawPsm       = bs.readUByte()   # drawpsm (GS_PSM enum)
        self.unkBitShift   = bs.readUByte()   # bitshift
        self.unkTagPoint   = bs.readUByte()   # tagpoint
        self.bitW          = bs.readUByte()   # bitw
        self.bitH          = bs.readUByte()   # bith
        self.check         = bs.readUShort()  # check
        self.giftag        = bs.readBytes(16) # ???? Q_WORDDATA giftag; ????

        # assert self.allSize != self.dataSize + self.padSize + 48  # 48 = sizeof(TexHead)
        assert (self.width  >= 1 << self.bitW) and (self.width  < 1 << self.bitW + 1)  # Sometimes the actual dimensions are bigger than bit shifts,
        assert (self.height >= 1 << self.bitH) and (self.height < 1 << self.bitH + 1)  # but not bigger than a second shift
        assert self.check == 0x9999 or self.check == 0x0000  # only SH2 `poison.tex` has it as 0x0000


class ClutsHead:  # sh2gfw_CLUTS_HEAD
    def __init__(self, bs):
        self.clutsSize        = bs.readUInt()    # clutssize
        self.unkGsregsOffset  = bs.readUInt()    # toGSREGS
        self.unkRawClutOffset = bs.readUInt()    # toRawClut
        self.clutCount        = bs.readUByte()   # clutamount - some SH2 *.tex has smaller count than the buffer size, so it cant be used to read the buffer size.
        self.unkTransCluts    = bs.readUByte()   # transcluts
        self.clutW            = bs.readUByte()   # CLUT raster width in texels - 64 unless it is poison.tex from SH2
        self.clutH            = bs.readUByte()   # CLUT raster height in texels - 64 unless it is poison.tex from SH2
        self.unkFmt           = bs.readBytes(16) # fmt[16]
        self.unkTrans         = bs.readBytes(16) # transparency[16]

        # assert self.clutsSize >= self.clutCount * 1024  # doesn't work for poison.tex


class Texture:
    def __init__(self, bs):
        self.texHead = TexHead(bs)

        self.pad   = bs.readBytes(self.texHead.allSize - self.texHead.dataSize - 48)
        self.index = bs.readBytes(self.texHead.dataSize)

        if self.texHead.colorBpp != 24:
            self.clutsHead = ClutsHead(bs)
            self.clutData  = bs.readBytes(self.clutsHead.clutsSize)
            # self.palPage = [PalPage(bs) for _ in range(self.clutsHead.clutsSize // 1024)]  # some SH2 *.tex has smaller count than the buffer size, so it cant be used to read the buffer size.


def noepyLoadRGBA(data, tex_list):
    bs = NoeBitStream(data)

    # parseRGBA()
    textures = []

    # for SH2 it is usualy like this, but some Sh3 files still have this header as a leftover
    areaId = bs.readInt()
    bs.seek(-4, NOESEEK_REL)
    if areaId == 0:
        sh2AreaHead = Sh2AreaHead(bs)
        bs.seek(sh2AreaHead.GlobalTexHeadOffset, NOESEEK_ABS)

    # for SH3 it is usualy like this. SH2 doesn't have this part
    if not bs.checkEOF():
        areaId = bs.readInt()
        bs.seek(-4, NOESEEK_REL)
        if areaId == -1:
            sh3AreaHead = Sh3AreaHead(bs)
            for _ in range(sh3AreaHead.texCount):
                textures.append(Texture(bs))

    # usualy this is for SH2, but some SH3 `sh3AreaHead.texCount` is 0, but there are still 1 texture.
    # SH2 `*.tbn2` are headerless
    if not bs.checkEOF():
        textures.append(Texture(bs))

    assert bs.checkEOF()

    # buildRGBA()
    for texIndex, tex in enumerate(textures):
        texHead = tex.texHead
        tex_buf = tex.index

        if texHead.colorBpp == 24:
            # img_buf = rapi.imageDecodeRaw(tex_buf, texHead.width, texHead.height, 'r8g8b8a8')
            img_buf = rapi.imageScaleRGBA32(tex_buf, (1.0, 1.0, 1.0, 2.0), texHead.width, texHead.height)
            img_buf = NoeTexture('tex%d' % texIndex, texHead.width, texHead.height, img_buf, noesis.NOESISTEX_RGBA32)
            img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
            tex_list.append(img_buf)

        if texHead.colorBpp in (4, 8):
            clutsHead = tex.clutsHead
            cluts_buf = tex.clutData

            idx_buf = rapi.imageUntwiddlePS2(tex_buf, texHead.width, texHead.height, texHead.colorBpp)
            blockSize = 64
            groupCount = 4
            clutSize = len(cluts_buf) // clutsHead.clutCount
            dummyClut_0xCC = b'\xcc' * clutSize  # SH3 uses 0xCC for empty CLUT
            dummyClut_0x00 = b'\x00' * clutSize  # SH2 uses 0x00 for empty CLUT

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
                if pal_buf[i] not in (dummyClut_0xCC, dummyClut_0x00):
                    img_buf = rapi.imageDecodeRawPal(idx_buf, pal_buf[i], texHead.width, texHead.height, texHead.colorBpp, 'r8g8b8a8', noesis.DECODEFLAG_PS2SHIFT)
                    img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), texHead.width, texHead.height)
                    img_buf = NoeTexture('tex%d_clut%d' % (texIndex, i), texHead.width, texHead.height, img_buf, noesis.NOESISTEX_RGBA32)
                    img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
                    tex_list.append(img_buf)

            # debug
            img_buf = rapi.imageDecodeRaw(cluts_buf, clutsHead.clutW, clutsHead.clutH, 'r8g8b8a8')
            img_buf = rapi.imageScaleRGBA32(img_buf, (1.0, 1.0, 1.0, 2.0), clutsHead.clutW, clutsHead.clutH)
            img_buf = NoeTexture('tex%d_cluts' % texIndex, clutsHead.clutW, clutsHead.clutH, img_buf, noesis.NOESISTEX_RGBA32)
            img_buf.setFlags(noesis.NTEXFLAG_FILTER_NEAREST)
            tex_list.append(img_buf)
    print([noesis.morton2D(0, x) for x in range(4)])
    print([noesis.morton2D(y, x) for x in range(4) for y in range(2)])
    return 1