# Authors:
# Laurynas Zubavičius (Sparagas)
# Rodolfo Nuñez (roocker666)
#
# Buffer reading idea:
# Murugo - https://github.com/Murugo/Misc-Game-Research/blob/main/PS2/Silent%20Hill%202%2B3/Blender/addons/io_sh2_sh3/import_map.py
#
# Original scripts:
# Durik256 - https://forum.xentax.com/viewtopic.php?f=16&t=25765

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 2 (PS2)", ".map")
    noesis.setHandlerTypeCheck(handle, CheckType)
    noesis.setHandlerLoadModel(handle, LoadModel)
    # noesis.logPopup()
    return 1


def CheckType(data):
    if data[:4] != b'wwww':
        return 0
    return 1


def LoadModel(data, mdlList):
    bs = NoeBitStream(data)
    ctx = rapi.rpgCreateContext()

    def array(type, len):
        data = []
        for i in range(len):
            data.append(type())
        return data

    class FileHead:
        def __init__(self):
            self.magic = bs.readBytes(4)
            self.global_block_offs = bs.readUInt()
            self.local_block_offs = bs.readUInt()
            self.unk_raw_block_data_parms_offs = bs.readUInt()
            self.local_tex_index_offs = array(bs.readUInt, 3)
            self.local_tex_pal_offs = array(bs.readUInt, 3)
            self.local_tex_count = bs.readUInt()
            self.global_tex_count = bs.readUByte()
            self.trans_tex_count = bs.readUByte()
            self.unk_div_flg = bs.readUByte()
            self.unk_padc = bs.readUByte()

    class UnkRawBlockDataParms:
        def __init__(self):
            self.matrix_TRS_maybe = array(bs.readFloat, 12)
            self.unk = array(bs.readFloat, 12)

    class GlobalBlockHead:
        def __init__(self):
            self.unk_gsregsamount = bs.readUInt()
            self.unk_transamount = bs.readUInt()
            self.unk_gtexnum = bs.readUByte()
            self.unk_gtransnum = bs.readUByte()
            self.pad = array(bs.readUByte, 6)

    class LocalBlockHead:
        def __init__(self):
            self.unk_gsregsamount = array(bs.readUShort, 3)
            self.unk_transamount = array(bs.readUShort, 3)
            self.main_mesh_count = bs.readUShort()
            self.pad = array(bs.readUByte, 2)

    class MainMeshHead:
        def __init__(self):
            self.mesh_size = bs.readUInt()
            self.next_mesh_offs = bs.readUInt()
            self.tex_data_offs = bs.readUInt()
            self.sub_mesh_count = bs.readUByte()
            self.trans_count = bs.readUByte()
            self.unk_eop_flg = bs.readUByte()
            self.unk_tr_flg = bs.readUByte()
            self.unk_fmt = array(bs.readUByte, 16)
            self.unk_trans = array(bs.readUByte, 16)

    class SubMeshHead:
        def __init__(self):
            self.unk_gsregs_count = bs.readUShort()
            self.unk_trans_flg = bs.readUByte()
            self.unk_eop_flg = bs.readUByte()
            self.next_submesh_offs = bs.readUInt()
            self.sub_mesh_index = bs.readUShort()
            self.unk_tcc = bs.readUByte()
            self.unk_tfx = bs.readUByte()
            self.unk_abe = bs.readUByte()
            self.pad = array(bs.readUByte, 3)
            # it ends here in debug
            self.unkF = bs.readFloat()
            self.unkF = bs.readFloat()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUByte()
            self.unk = bs.readUByte()
            self.unk = bs.readUByte()
            self.unk = bs.readUByte()
            self.size_plus144 = bs.readUInt()
            self.unk = bs.readUInt()
            self.vert_count = bs.readUShort()
            self.unk = bs.readUShort()
            self.size_plus112 = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUShort()
            self.unk = bs.readUShort()
            self.pad_zero = array(bs.readUByte, 96)

    class VertAttr:
        def __init__(self):
            self.vp_x = bs.readUShort()
            self.vp_y = bs.readUShort()
            self.vp_z = bs.readUShort()
            self.vn_vcol_x = bs.readUShort()
            self.vt_u = bs.readUShort()
            self.vt_v = bs.readUShort()
            self.vn_vcol_y = bs.readUShort()
            self.vn_vcol_z = bs.readUShort()

    file_head = FileHead()
    bs.seek(file_head.unk_raw_block_data_parms_offs)
    unk_raw_block_data_parms = UnkRawBlockDataParms()

    if file_head.global_block_offs:

        bs.seek(file_head.global_block_offs)
        global_block_head = GlobalBlockHead()
        main_mesh_head = MainMeshHead()

        for s in range(main_mesh_head.sub_mesh_count):

            sub_mesh_head = SubMeshHead()

            rapi.rpgSetName('global_{}'.format(s))
            vbuf = b''
            ibuf = b''
            vnbuf = b''
            uvbuf = b''
            vcolbuf = b''
            reverse = False

            # vert_attr = array(VertAttr, sub_mesh_head.vert_count)

            for i in range(sub_mesh_head.vert_count):

                # vp_x = bs.readUShort()
                # vp_y = bs.readUShort()
                # vp_z = bs.readUShort()
                vbuf += bs.readBytes(6)
                vn_vcol_x = bs.readUShort()
                vt_u = bs.readUShort()  # uv_flag[]
                vt_v = bs.readUShort()  # uv_flag[]
                vn_vcol_y = bs.readUShort()
                vn_vcol_z = bs.readUShort()

                uv_flag = [vt_u, vt_v]
                vn_vcol = (vn_vcol_x, vn_vcol_y, vn_vcol_z)

                uvbuf += NoeVec3([uv_flag[0] / 0x8000, 1.0 - uv_flag[1] / 0x8000, 0]).toBytes()
                vnbuf += NoeVec3([(v & ~0x3F) / -0x8000 for v in vn_vcol]).normalize().toBytes()
                vcolbuf += NoeVec3([(v & 0x3F) / 0x20 for v in vn_vcol]).toBytes()

                flag = uv_flag[0] & 0x1
                if not flag:
                    if reverse:
                        ibuf += struct.pack('3H', i, i - 1, i - 2)
                    else:
                        ibuf += struct.pack('3H', i - 2, i - 1, i)
                reverse = not reverse
            rapi.rpgBindPositionBuffer(vbuf, noesis.RPGEODATA_SHORT, 6)
            rapi.rpgBindNormalBuffer(vnbuf, noesis.RPGEODATA_FLOAT, 12)
            rapi.rpgBindUV1Buffer(uvbuf, noesis.RPGEODATA_FLOAT, 12)
            rapi.rpgBindColorBuffer(vcolbuf, noesis.RPGEODATA_FLOAT, 12, 3)
            rapi.rpgCommitTriangles(ibuf, noesis.RPGEODATA_USHORT, len(ibuf) // 2, noesis.RPGEO_TRIANGLE)

            mdl = rapi.rpgConstructModel()
            bs.seek(sub_mesh_head.next_submesh_offs)

    if file_head.local_block_offs:

        bs.seek(file_head.local_block_offs)
        local_block_head = LocalBlockHead()

        for i in range(local_block_head.main_mesh_count):

            main_mesh_head = MainMeshHead()

            next_submesh_offs = bs.getOffset()
            for j in range(main_mesh_head.sub_mesh_count):
                sub_mesh_head = SubMeshHead()

                rapi.rpgSetName('local_{}_{}'.format(i, j))
                vbuf = b''
                ibuf = b''
                vnbuf = b''
                uvbuf = b''
                vcolbuf = b''
                reverse = False
                for i in range(sub_mesh_head.vert_count):
                    vbuf += bs.readBytes(6)
                    vn_vcol_x = bs.readShort()
                    uv_flag = [bs.readShort(), bs.readShort()]
                    vn_vcol = (vn_vcol_x, bs.readShort(), bs.readShort())
                    uvbuf += NoeVec3([uv_flag[0] / 0x8000, 1.0 - uv_flag[1] / 0x8000, 0]).toBytes()
                    vnbuf += NoeVec3([(v & ~0x3F) / -0x8000 for v in vn_vcol]).normalize().toBytes()
                    vcolbuf += NoeVec3([(v & 0x3F) / 0x20 for v in vn_vcol]).toBytes()
                    flag = uv_flag[0] & 0x1
                    if not flag:
                        if reverse:
                            ibuf += struct.pack('3H', i, i - 1, i - 2)
                        else:
                            ibuf += struct.pack('3H', i - 2, i - 1, i)
                    reverse = not reverse
                rapi.rpgBindPositionBuffer(vbuf, noesis.RPGEODATA_SHORT, 6)
                rapi.rpgBindNormalBuffer(vnbuf, noesis.RPGEODATA_FLOAT, 12)
                rapi.rpgBindUV1Buffer(uvbuf, noesis.RPGEODATA_FLOAT, 12)
                rapi.rpgBindColorBuffer(vcolbuf, noesis.RPGEODATA_FLOAT, 12, 3)
                rapi.rpgCommitTriangles(ibuf, noesis.RPGEODATA_USHORT, len(ibuf) // 2, noesis.RPGEO_TRIANGLE)

                mdl = rapi.rpgConstructModel()
                bs.seek(sub_mesh_head.next_submesh_offs)
            bs.seek(main_mesh_head.next_mesh_offs)
    mdlList.append(mdl)
    return 1
