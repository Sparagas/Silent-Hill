"""Noesis Python Plugin

      File: arc_sh4_sh4.py
   Authors: Laurynas Zubavičius (Sparagas)
   Purpose: Silent Hill 4: The Room (Microsoft - Xbox)
            Silent Hill 4: The Room (Microsoft - Windows)
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
        ofs_file = [int.from_bytes(f.read(4), byteorder='little') for _ in range(num_files)]
        end_file = [int] * num_files
        for i in range(num_files - 1):
            end_file[i] = ofs_file[i + 1]
        end_file[num_files - 1] = noe_file_len
        if just_checking:
            return 1
        print("Number of files", num_files)
        for i in range(num_files):
            print("Start", ofs_file[i])
            print("End", end_file[i])
            f.seek(ofs_file[i])
            temp0 = int.from_bytes(f.read(2), byteorder='little')
            temp1 = int.from_bytes(f.read(2), byteorder='little')
            rapi.exportArchiveFile(rapi.getInputName() + '_file{}'.format(i), end_file[i] - ofs_file[i])


    return 1
