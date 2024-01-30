"""Noesis Python Plugin

      File: inc_sh4_textures.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room
  Category: Include file
"""

from inc_noesis import *


class Ps2Idx:
    def __init__(self, bs):
        self.w = bs.readUInt()
        self.h = bs.readUInt()
        self.idx_fmt = bs.readUByte()
        if self.idx_fmt == 19:
            self.idx_fmt = 8
        elif self.idx_fmt == 20:
            self.idx_fmt = 4
        self.swz_flg = bs.readUByte()
        bs.seek(2, NOESEEK_REL)
        self.ofs = bs.readUInt()


class Ps2Pal:
    def __init__(self, bs):
        bs.seek(4, NOESEEK_REL)
        self.num_pal = bs.readUInt()
        bs.seek(4, NOESEEK_REL)
        self.ofs = bs.readUInt()
