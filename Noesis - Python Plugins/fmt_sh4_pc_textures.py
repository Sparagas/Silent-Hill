"""Noesis Python Plugin

      File: fmt_sh4_ps2_textures.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room (Microsoft - Windows)
  Category: Image
 File Mask: *.textures
  ID Bytes: 
"""

from inc_noesis import *

from inc_sh4_pc_textures import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: The Room (PC)", ".textures")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadRGBA(handle, load_rgba)
    return 1


def check_type(data):
    if len(data) < 4:
        return 0
    if data[:2] != data[2:4]:
        return 0
    return 1


def load_rgba(data, tex_list):
    sh4_pc_textures(data, tex_list)
    return 1
