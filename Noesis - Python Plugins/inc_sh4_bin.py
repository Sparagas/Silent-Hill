"""Noesis Python Plugin

      File: inc_sh4_bin.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room
  Category: Include file
"""

from inc_noesis import *

from inc_sh4_ps2_textures import *
from inc_sh4_xbox_textures import *
# from inc_sh4_pc_textures import *

def sh4_bin(data, tex_list, platform):
    bin = NoeBitStream(data)
    num_block = bin.readUInt()
    ofs_block = [bin.readUInt() for _ in range(num_block)]

    for i in range(num_block):
        bin.seek(ofs_block[i])
        temp0 = bin.readBytes(2)
        temp1 = bin.readBytes(2)
        bin.seek(ofs_block[i])
        
        if temp0 == b'\x00\x00' and temp1 == b'\x00\x00':
            print(i, "empty block")
        
        elif temp0 == b'\xFF\xFF' and temp1 == b'\xFF\xFF':
            print(i, "other block")

        elif temp0 == temp1:
            print(i, "image block")
            if platform == 'PS2':
                sh4_ps2_textures(data[ofs_block[i]:], tex_list)
            elif platform == 'Xbox':
                sh4_xbox_textures(data[ofs_block[i]:], tex_list)
            elif platform == 'PC':
                sh4_pc_textures(data[ofs_block[i]:], tex_list)

        else:
            print(i, "other block")
