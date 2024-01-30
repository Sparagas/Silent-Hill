# Authors:
# Laurynas Zubavičius (Sparagas)
# Rodolfo Nuñez (roocker666)
#
# Search idea:
# Durik256 - https://forum.xentax.com/viewtopic.php?t=26090

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: THe Room (Win) map", ".bin")
    noesis.setHandlerTypeCheck(handle, CheckType)
    noesis.setHandlerLoadModel(handle, LoadModel)
    # noesis.logPopup()
    return 1


def CheckType(data):
    if len(data) < 4:
        return 0
    bs = NoeBitStream(data)
    num_block = bs.readUInt()
    if len(data) < 4 + 4 * num_block:
        return 0
    block = [0] * num_block
    for i in range(num_block):
        block[i] = bs.readUInt()
        if len(data) < block[i]:
            return 0
    return 1


def LoadModel(data, mdlList):
    bs = NoeBitStream(data)
    ctx = rapi.rpgCreateContext()

    result = [(i + 74) for i in findall(b'\x00\x30\x12\x04\x00\x00', data)]
    i = 0
    for x in result:
        bs.seek(x)
        fnum = bs.readUInt()
        vnum = bs.readUInt()
        bs.seek(88, 1)
        fbuf = bs.read(fnum * 2)
        vbuf = bs.read(vnum * 24)
        rapi.rpgBindPositionBuffer(vbuf, noesis.RPGEODATA_FLOAT, 24)

        vbuf_format = 'fffBBBBff'
        vbuf_size = struct.calcsize(vbuf_format)
        r_offset = struct.calcsize('fff')
        b_offset = r_offset + struct.calcsize('BB')
        vbuf_array = bytearray(vbuf)
        for j in range(0, len(vbuf_array), vbuf_size):
            vbuf_array[j + r_offset], vbuf_array[j + b_offset] = vbuf_array[j + b_offset], vbuf_array[j + r_offset]
        vbuf = bytes(vbuf_array)

        rapi.rpgBindColorBufferOfs(vbuf, noesis.RPGEODATA_UBYTE, 24, 12, 4)
        rapi.rpgBindUV1BufferOfs(vbuf, noesis.RPGEODATA_FLOAT, 24, 16)
        rapi.rpgSetName('mesh{}'.format(i))
        i += 1

        rapi.rpgCommitTriangles(fbuf, noesis.RPGEODATA_USHORT, fnum, noesis.RPGEO_TRIANGLE_STRIP)
    mdl = rapi.rpgConstructModel()
    mdlList.append(mdl)
    return 1


def findall(p, s):
    i = s.find(p)
    while i != -1:
        yield i
        i = s.find(p, i + 1)
