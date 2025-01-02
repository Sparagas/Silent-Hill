"""Noesis Python Plugin

      File: arc_sh4_sh4.py
   Authors: Laurynas Zubavičius (Sparagas)
   Purpose: Silent Hill 4: The Room (Microsoft - Xbox)
            Silent Hill 4: The Room (Microsoft - Windows)
  Category: Archive
 File Mask: *.sh4
  ID Bytes: 53 48 34 00
"""

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: The Room (Xbox, PC)", ".sh4")
    noesis.setHandlerExtractArc(handle, extract_sh4_archive)
    return 1


class FileHdr:
    def __init__(self, f):
        self.ofs_file = int.from_bytes(f.read(4), byteorder='little')
        self.len_file = int.from_bytes(f.read(4), byteorder='little')


def extract_sh4_archive(noe_file_name, noe_file_len, just_checking):
    with open(noe_file_name, "rb") as f:
        if noe_file_len < 8:
            return 0
        magic = f.read(4)
        if magic != b'SH4\x00':
            return 0

        if just_checking:
            return 1

        num_files = int.from_bytes(f.read(4), byteorder='little')

        file_hdr = [FileHdr(f) for _ in range(num_files)]

        file_data = []
        for i in range(num_files):
            f.seek(file_hdr[i].ofs_file)
            file_data.append(f.read(file_hdr[i].len_file))

        f.seek(num_files * -16, 2)

        file_name = [f.read(16).split(b'\x00')[0].decode('ascii') for _ in range(num_files)]

        # Extract files
        for i in range(num_files):
            rapi.exportArchiveFile(file_name[i], file_data[i])
 
    return 1
