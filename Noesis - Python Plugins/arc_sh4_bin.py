"""Noesis Python Plugin

      File: arc_sh4_sh4.py
   Authors: Laurynas Zubavičius (Sparagas)
            Hunter Stanton
   Purpose: Silent Hill 4: The Room (Microsoft - Xbox)
            Silent Hill 4: The Room (Microsoft - Windows)
            Silent Hill 4: The Room (Sony - PlayStation 2)
  Category: Archive
 File Mask: *.bin
"""

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: The Room (PS2, Xbox, PC)", ".bin")
    noesis.setHandlerExtractArc(handle, extract_bin_archive)
    return 1


def extract_bin_archive(noe_file_name, noe_file_len, just_checking):
    with open(noe_file_name, "rb") as f:
        if noe_file_len < 4:
            return 0

        num_files = int.from_bytes(f.read(4), byteorder='little')

        if noe_file_len < 4 * (num_files + 1):
            return 0

        if just_checking:
            return 1

        ofs_file = [int.from_bytes(f.read(4), byteorder='little') for _ in range(num_files)]

        end_file = [int] * num_files
        for i in range(num_files - 1):
            end_file[i] = ofs_file[i + 1]
        end_file[num_files - 1] = noe_file_len

        for i in range(num_files):
            f.seek(ofs_file[i])
            temp0 = f.read(2)
            temp1 = f.read(2)
            f.seek(10, 1)
            temp2 = f.read(2)
            f.seek(ofs_file[i])

            name = rapi.getExtensionlessName(rapi.getLocalFileName(noe_file_name))
            name = name + '_{}'.format(i)

            if temp0 == b'\x00\x00' and temp1 == b'\x00\x00':
                name = name + '._unk_0000_0000'

            elif temp0 == b'\xff\xff' and temp1 == b'\xff\xff':
                name = name + '._unk_ffff_ffff'

            elif temp0 == temp1:
                name = name + '._sh4_textures'

            elif temp0 == b'\x00\x00' and temp1 == b'\x01\x00':
                name = name + '._ps2_save_icon'

            elif temp0 == b'\x00\x70' and temp1 == b'\xC0\x0F':
                name = name + '._sh4_shadow_model'

            elif temp0 == b'\x11\xFF':
                name = name + '._sh4_collision_model'

            elif temp0 == b'\x03\x00':
                name = name + '._sh4_skeletal_model'

            elif temp0 == b'\x81\x85':
                name = name + '._sh4_sdb_file'

            elif temp0 == b'\x54\x45':
                name = name + '._sh4_monster_id_list'

            elif temp0 == b'\x53\x4C':
                name = name + '.slgt'

            elif temp0 == b'\x01\x00' and temp1 == b'\x01\xFF':
                name = name + '._sh4_animation'

            elif temp0 == b'\x01\x00' and temp1 == b'\x03\xFC':
                name = name + '._sh4_static_model'

            elif (temp0 != b'\x00\x00' or temp1 != b'\x00\x00') and temp2 == b'\x00\x00':
                name = name + '._sh4_fog'

            else:
                name = name + '.sh4_unknown'

            rapi.exportArchiveFile(name, f.read(end_file[i] - ofs_file[i]))
    return 1
