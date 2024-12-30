"""Noesis Python Plugin

      File: tex_sh4_bin.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room (Sony - PlayStation 2)
            Silent Hill 4: The Room (Microsoft - Xbox)
            Silent Hill 4: The Room (Microsoft - Windows)
  Category: Image
"""

from inc_noesis import *

from tex_sh4_textures import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: The Room (PS2, Xbox, PC)", ".bin")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadRGBA(handle, load_rgba)
    return 1


def check_type(data):
    if len(data) < 4:
        return 0
    return 1


def load_rgba(data, tex_list):
    # fixes Noesis first image name bug
    rapi.processCommands('-texnorepfn')
    bin = NoeBitStream(data)
    num_block = bin.readUInt()
    ofs_block = [bin.readUInt() for _ in range(num_block)]

    for i in range(num_block):
        bin.seek(ofs_block[i])
        temp0 = bin.readBytes(2)
        temp1 = bin.readBytes(2)
        bin.seek(ofs_block[i])
        
        if temp0 == temp1:
            print(i, "image block")
            sh4_textures(data[ofs_block[i]:], tex_list, i)
    return 1
