"""Noesis Python Plugin

      File: fmt_she_ios_nom.py
    Author: Laurynas Zubavičius (Sparagas)
   Purpose: Silent Hill: The Escape (Apple - iOS)
  Category: Model
 File Mask: *.nom
  ID Bytes: 
"""

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill: The Escape (iOS)", ".nom")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadModel(handle, load_model)
    return 1


def check_type(data):
    if len(data) < 4:
        return 0
    if data[:4] != b'NOM_':
        return 0
    return 1


def load_model(data, mdlList):
    ctx = rapi.rpgCreateContext()
    bs = NoeBitStream(data)

    bs.seek(4, NOESEEK_REL)
    num_mesh = bs.readUInt()

    class Mesh:
        def __init__(self):
            self.mesh_name = noeStrFromBytes(bs.readBytes(16))
            self.num_index = bs.readUInt()
            self.index = bs.readBytes(self.num_index * 2)
            self.num_position = bs.readUInt()
            self.position = bs.readBytes(self.num_position * 12)
            bs.seek(4, NOESEEK_REL)
            self.num_color_index = bs.readUInt()

            if self.num_color_index != 0:
                self.color_index = bs.readBytes(self.num_color_index * 2)
                self.num_color = bs.readUInt()
                self.color = bs.readBytes(self.num_color * 16)

            bs.seek(154, NOESEEK_REL)
            self.texture_name = noeStrFromBytes(bs.readBytes(20))

            if self.texture_name != '':
                self.texcoord_index = bs.readBytes(self.num_index * 2)
                self.num_texcoord = bs.readUInt()
                self.texcoord = bs.readBytes(self.num_texcoord * 8)

    mesh = [Mesh() for _ in range(num_mesh)]

    for i in range(num_mesh):
        rapi.rpgBindPositionBuffer(mesh[i].position, noesis.RPGEODATA_FLOAT, 12)
        # rapi.rpgBindColorBufferOfs(vcolbuf, noesis.RPGEODATA_UBYTE, 4, 0, 4)
        # rapi.rpgBindUV1Buffer(mesh.texcoord, noesis.RPGEODATA_FLOAT, 8)
        rapi.rpgSetName('{}'.format(mesh[i].mesh_name))
        rapi.rpgSetMaterial('{}'.format(mesh[i].mesh_name))
        rapi.rpgCommitTriangles(mesh[i].index, noesis.RPGEODATA_SHORT, mesh[i].num_index, noesis.RPGEO_TRIANGLE)
        rapi.rpgClearBufferBinds()
    mdl = rapi.rpgConstructModel()
        # mdl.setModelMaterials(NoeModelMaterials([], [NoeMaterial('mat0', '')]))
    mdlList.append(mdl)
    return 1
