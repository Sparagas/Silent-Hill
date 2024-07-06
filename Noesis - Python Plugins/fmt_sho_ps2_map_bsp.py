"""Noesis Python Plugin

      File: fmt_sho_ps2_map_bsp.py
   Authors: Rodolfo Nuñez (roocker666)
            Laurynas Zubavičius (Sparagas)
   Purpose: Silent Hill Origins / Silent Hill Zero (Sony - PlayStation 2)
  Category: 3D static map models
 File Mask: *.bsp
  ID Bytes: 
"""

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("SHO Map PS2", ".bsp")
    noesis.setHandlerTypeCheck(handle, CheckType)
    noesis.setHandlerLoadModel(handle, LoadModel)
    return 1


HAS_PADDING = b'\x6C'
HAS_NO_PADDING = b'\x68'


def CheckType(data):
    return 1


def LoadModel(data, mdlList):
    bs = NoeBitStream(data)
    ctx = rapi.rpgCreateContext()

    result = [(i + 7) for i in findall(b'\x05\x04\x01\x00\x01\x00', data)]  # Find array and skip to Vert count
    i = 0
    for x in result:
        bs.seek(x)
        vnum = bs.readByte()
        check_pad = bs.read(1)

        if check_pad == HAS_PADDING:
            vbuf = bs.read(vnum * 16)
        elif check_pad == HAS_NO_PADDING:
            vbuf = bs.read(vnum * 12)

        bs.seek(data.find(b'\x05\x04\x01\x00\x01\x01', bs.tell()) + 9)
        uvbuf = bs.read(vnum * 8)

        bs.seek(data.find(b'\x05\x04\x01\x00\x01\x02', bs.tell()) + 9)
        vcolbuf = bs.read(vnum * 4)

        if check_pad == HAS_PADDING:
            rapi.rpgBindPositionBuffer(vbuf, noesis.RPGEODATA_FLOAT, 16)
        elif check_pad == HAS_NO_PADDING:
            rapi.rpgBindPositionBuffer(vbuf, noesis.RPGEODATA_FLOAT, 12)

        rapi.rpgBindUV1Buffer(uvbuf, noesis.RPGEODATA_FLOAT, 8)
        rapi.rpgBindColorBuffer(vcolbuf, noesis.RPGEODATA_UBYTE, 4, 4)

        rapi.rpgCommitTriangles(None, noesis.RPGEODATA_SHORT, vnum, noesis.RPGEO_TRIANGLE_STRIP)

        rapi.rpgSetName('mesh{}'.format(i))
        i += 1

    mdl = rapi.rpgConstructModel()
    mdl.setModelMaterials(NoeModelMaterials([], [NoeMaterial('mat0', '')]))
    mdlList.append(mdl)
    return 1


def findall(p, s):
    i = s.find(p)
    while i != -1:
        yield i
        i = s.find(p, i + 1)
