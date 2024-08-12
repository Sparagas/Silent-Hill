"""Noesis Python Plugin

      File: fmt_renderware_ps2_bsp.py
   Authors: Laurynas Zubavičius (Sparagas)
            IWILLCRAFT
   Purpose: RenderWare (Sony - PlayStation 2) but now only works on Silent Hill Origins PS2 version
  Category: 3D static map models
 File Mask: *.bsp
  ID Bytes: 
"""

from inc_noesis import *


class RwPlatformId:
    RW_ID_PC_D3D7  = 1
    RW_ID_PC_OGL   = 2
    RW_ID_MAC      = 3
    RW_ID_PS2      = 4
    RW_ID_XBOX     = 5
    RW_ID_GAMECUBE = 6
    RW_ID_SOFT_RAS = 7
    RW_ID_PC_D3D8  = 8
    RW_ID_PC_D3D9  = 9
    RW_ID_PSP      = 10


class RwDevice:
    DEVICE_UNKNOWN  = 0
    DEVICE_D3D8     = 1
    DEVICE_D3D9     = 2
    DEVICE_GCN      = 3
    DEVICE_NULL     = 4
    DEVICE_OPENGL   = 5
    DEVICE_SKY2     = 6
    DEVICE_SOFT_RAS = 7
    DEVICE_XBOX     = 8
    DEVICE_PSP      = 9


class RwId:
    # CORE
    RW_ID_NA_OBJECT           = 0x00  # Not Applicable Object
    RW_ID_STRUCT              = 0x01
    RW_ID_STRING              = 0x02
    RW_ID_EXTENSION           = 0x03
    RW_ID_CAMERA              = 0x05
    RW_ID_TEXTURE             = 0x06
    RW_ID_MATERIAL            = 0x07
    RW_ID_MAT_LIST            = 0x08  # Material List
    RW_ID_ATOMIC_SECT         = 0x09  # Atomic Section
    RW_ID_PLANE_SECT          = 0x0A  # Plane Section
    RW_ID_WORLD               = 0x0B
    RW_ID_SPLINE              = 0x0C
    RW_ID_MATRIX              = 0x0D
    RW_ID_FRAME_LIST          = 0x0E
    RW_ID_GEOMETRY            = 0x0F
    RW_ID_CLUMP               = 0x10
    RW_ID_LIGHT               = 0x12
    RW_ID_UNICODE_STRING      = 0x13
    RW_ID_ATOMIC              = 0x14
    RW_ID_TEXTURE_NATIVE      = 0x15  # a.k.a. Raster
    RW_ID_TEX_DICTIONARY      = 0x16  # Texture Dictionary
    RW_ID_ANIM_DATABASE       = 0x17  # Animation Database
    RW_ID_IMAGE               = 0x18
    RW_ID_SKIN_ANIMATION      = 0x19
    RW_ID_GEOMETRY_LIST       = 0x1A
    RW_ID_ANIM_ANIMATION      = 0x1B
    RW_ID_TEAM                = 0x1C
    RW_ID_CROWD               = 0x1D
    RW_ID_D_MORPH_ANIMATION   = 0x1E  # Delta Morph Animation
    RW_ID_RIGHT_TO_RENDER     = 0x1F
    RW_ID_MT_EFFECT_NATIVE    = 0x20  # MultiTexture Effect Native
    RW_ID_MT_EFFECT_DICT      = 0x21  # MultiTexture Effect Dictionary
    RW_ID_TEAM_DICTIONARY     = 0x22
    RW_ID_P_I_TEX_DICTIONARY  = 0x23  # Platform Independent Texture Dictionary
    RW_ID_TOC                 = 0x24  # Table of Contents
    RW_ID_PRT_STD_GLOBAL_DATA = 0x25  # Particle Standard Global Data
    RW_ID_ALTPIPE             = 0x26  # AltPipe
    RW_ID_P_I_PEDS            = 0x27  # Platform Independent Peds
    RW_ID_PATCH_MESH          = 0x28
    RW_ID_CHUNK_GROUP_START   = 0x29
    RW_ID_CHUNK_GROUP_END     = 0x2A
    RW_ID_UV_ANIM_DICT        = 0x2B  # UV Animation Dictionary
    RW_ID_COLL_TREE           = 0x2
    RW_ID_ENVIRONMENT         = 0x2D
    RW_ID_CORE_PLUGIN_ID_MAX  = 0x2E

    # CRITERION_TK a.k.a. Toolkit
    PVS_PLG           = 0x0106
    SKY_MIPMAP_VAL    = 0x0110
    COLLISION_PLG     = 0x011D
    USER_DATA_PLG     = 0x011F
    GEOMETRIC_PVS_PLG = 0x012A

    # REDLINE_RACER
    # CSLRD

    # CRITERION_INT
    RW_ID_NA_CORE_ID         = 0x0400
    RW_ID_VECTOR_MODULE      = 0x0401
    RW_ID_MATRIX_MODULE      = 0x0402
    RW_ID_FRAME_MODULE       = 0x0403
    RW_ID_STREAM_MODULE      = 0x0404
    RW_ID_CAMERA_MODULE      = 0x0405
    RW_ID_IMAGE_MODULE       = 0x0406
    RW_ID_RASTER_MODULE      = 0x0407
    RW_ID_TEXTURE_MODULE     = 0x0408
    RW_ID_PIPE_MODULE        = 0x0409
    RW_ID_IMMEDIATE_MODULE   = 0x040A
    RW_ID_RESOURCES_MODULE   = 0x040B
    RW_ID_DEVICE_MODULE      = 0x040C
    RW_ID_COLOR_MODULE       = 0x040D
    RW_ID_POLY_PIPE_MODULE   = 0x040E
    RW_ID_ERROR_MODULE       = 0x040F
    RW_ID_METRICS_MODULE     = 0x0410
    RW_ID_DRIVER_MODULE      = 0x0411
    RW_ID_CHUNK_GROUP_MODULE = 0x0412

    # CRITERION_WORLD
    RW_ID_NA_WORLD_ID            = 0x0500
    RW_ID_MATERIAL_MODULE        = 0x0501
    RW_ID_MESH_MODULE            = 0x0502
    RW_ID_GEOMETRY_MODULE        = 0x0503
    RW_ID_CLUMP_MODULE           = 0x0504
    RW_ID_LIGHT_MODULE           = 0x0505
    RW_ID_COLLISION_MODULE       = 0x0506
    RW_ID_WORLD_MODULE           = 0x0507
    RW_ID_RANDOM_MODULE          = 0x0508
    RW_ID_WORLD_OBJ_MODULE       = 0x0509
    RW_ID_SECTOR_MODULE          = 0x050A
    RW_ID_BIN_WORLD_MODULE       = 0x050B
    RW_ID_WORLD_PIPE_MODULE      = 0x050D
    RW_ID_BIN_MESH_PLUGIN        = 0x050E
    RW_ID_RX_WORLD_DEVICE_MODULE = 0x050F
    RW_ID_NATIVE_DATA_PLUGIN     = 0x0510
    RW_ID_VERTEX_FMT_PLUGIN      = 0x0511

    # BETA
    # CRITERION_RM
    # CRITERION_RW_A a.k.a. RenderWare Audio
    # CRITERION_RW_P a.k.a. RenderWare Physics


class RwTextureFilterMode:
    FILTER_NA_FILTER_MODE     = 0
    FILTER_NEAREST            = 1  # Point sampled
    FILTER_LINEAR             = 2  # Bilinear
    FILTER_MIP_NEAREST        = 3  # Point sampled per pixel mip map
    FILTER_MIP_LINEAR         = 4  # Bilinear per pixel mipmap
    FILTER_LINEAR_MIP_NEAREST = 5  # MipMap interp point sampled
    FILTER_LINEAR_MIP_LINEAR  = 6  # Trilinear


class RwTextureAddressMode:
    TEXTURE_ADDRESS_NA_TEXTURE_ADDRESS = 0
    TEXTURE_ADDRESS_WRAP               = 1  # UV wraps (tiles)
    TEXTURE_ADDRESS_MIRROR             = 2  # Alternate UV is flipped
    TEXTURE_ADDRESS_CLAMP              = 3  # UV is clamped to 0-1
    TEXTURE_ADDRESS_BORDER             = 4  # Border color takes effect outside of 0-1


class RwHeader:   
    def __init__(self, bs):
        self.id = bs.readUInt()
        self.len = bs.readUInt()
        self.ver = bs.readUInt()


# generic and should be replaced
class RwStruct:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        bs.seek(self.rw_header.len, NOESEEK_REL)


class RWString:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.str = noeStrFromBytes(bs.readBytes(self.rw_header.len))
        

class RwExtension:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        # bs.seek(self.rw_header.len, NOESEEK_REL)  # temporal solution by skipping extension
        len = self.rw_header.len;
        while len:
            len -= self.RwStructExtension(bs)

    def RwStructExtension(self, bs):
        local_id = bs.readUInt()
        local_len = bs.readUInt()
        bs.seek(-8, NOESEEK_REL)
        if local_id == RwId.RW_ID_RIGHT_TO_RENDER:
            self.right_to_render = RwStruct(bs)
        elif local_id == RwId.PVS_PLG:
            self.pvs_plg = RwStruct(bs)
        elif local_id == RwId.SKY_MIPMAP_VAL:
            self.sky_mipmap_val = RwStruct(bs)
        elif local_id == RwId.COLLISION_PLG:
            self.collision_plg = RwStruct(bs)
        elif local_id == RwId.USER_DATA_PLG:
            self.user_data_plg = RwStruct(bs)
        elif local_id == RwId.GEOMETRIC_PVS_PLG:
            self.geometric_pvs_plg = RwStruct(bs)
        elif local_id == RwId.RW_ID_BIN_MESH_PLUGIN:
            self.bin_mesh_plg = RwStruct(bs)
        elif local_id == RwId.RW_ID_NATIVE_DATA_PLUGIN:
            self.native_data_plugin = RwStruct(bs)
        elif local_id == RwId.RW_ID_VERTEX_FMT_PLUGIN:
            self.vertex_fmt_plugin = RwStruct(bs)
        else:
            self.unk_extension = RwStruct(bs)
        return 12 + local_len


class RwStructTexture:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.filtering_mode = bs.readByte()
        self.uv_addressing_mode = bs.readByte()  # need to split to nimbles?
        self.has_mipmaps = bs.readShort()
        

class RwTexture:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.rw_struct = RwStructTexture(bs)
        self.rw_tex_name = RWString(bs)
        self.rw_tex_alpha_name = RWString(bs)
        self.rw_extension = RwExtension(bs)

        # print(self.rw_tex_name.str)
        # print(self.rw_tex_alpha_name.str)


class RwStructMaterial:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.pad_flg = bs.readInt()
        self.rgba = bs.readInt()  # need to add to material
        self.unk = bs.readInt()  # could be used
        self.has_texture = bs.readInt()

        self.ambient = bs.readFloat()
        self.specular = bs.readFloat()
        self.diffuse = bs.readFloat()


class RwMaterial:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.rw_struct = RwStructMaterial(bs)
        if self.rw_struct.has_texture:
            self.rw_texture = RwTexture(bs)
        self.rw_extension = RwExtension(bs)


class RwStructMatList:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.num_material = bs.readUInt()
        self.material_idx = [bs.readInt() for _ in range(self.num_material)]


class RwMatList:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.rw_struct = RwStructMatList(bs)

        num_unique_material = 0
        for i in range(self.rw_struct.num_material):
            if self.rw_struct.material_idx[i] == -1:
                num_unique_material += 1

        self.rw_material = [RwMaterial(bs) for _ in range(num_unique_material)]

        # I want to extract this to seperate function or place
        # also need to understant that are alpha mask textures and what to do with them if they are found
        self.texList = []
        self.matList = []
        for i in range(num_unique_material):
            if self.rw_material[i].rw_struct.has_texture:
                name = self.rw_material[i].rw_texture.rw_tex_name.str
            else:
                name = ""
            self.texList.append(name)
            material = NoeMaterial(name, name)  # mat_name and tex_name
            # material.setDefaultBlend(0)  # disables alpha channel for the texture from showing
            self.matList.append(material)  # DOTO - apply mat colors before appending


class RwStructAtomicSect:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        bs.seek(self.rw_header.len, NOESEEK_REL)  # skip for now


class RwAtomicSect:
    def __init__(self, bs, rw_material_list):
        tmp = bs.tell()  # temporal solutuion
        self.rw_header = RwHeader(bs)
        self.rw_struct = RwStructAtomicSect(bs)
        # RwExtension
        self.rw_extension_head = RwHeader(bs)
        self.bin_mesh_plg = BinMeshPlg(bs)

        self.native_data_plg_ps2 = NativeDataPlgPs2(bs, self.bin_mesh_plg, rw_material_list)

        bs.seek(tmp + 12 + self.rw_header.len)  # skip for now



class RwStructPlaneSect:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.unk_type = bs.readUInt()
        self.unk_value = bs.readFloat()
        self.is_left_atomic_sect = bs.readInt()
        self.is_right_atomic_sect = bs.readInt()
        self.unk_left_value = bs.readFloat()
        self.unk_right_value = bs.readFloat()


class RwPlaneSect:
    def __init__(self, bs, rw_mat_list):
        # print("plane")
        self.rw_header = RwHeader(bs)
        self.rw_struct = RwStructPlaneSect(bs)
        
        if self.rw_struct.is_left_atomic_sect:
            # print("atomic")
            self.left_atomic_sect = RwAtomicSect(bs, rw_mat_list)
        else:
            self.left_plane_sect = RwPlaneSect(bs, rw_mat_list)
        if self.rw_struct.is_right_atomic_sect:
            # print("atomic")
            self.right_atomic_sect = RwAtomicSect(bs, rw_mat_list)
        else:
            self.right_plane_sect = RwPlaneSect(bs, rw_mat_list)


class RwStructWorld:
    def __init__(self, bs):
        self.rw_header = RwHeader(bs)
        self.is_root_atomic_sect = bs.readUInt()
        bs.seek(self.rw_header.len - 4, NOESEEK_REL)  # TODO


class RwWorld:
    def __init__(self, bs):
        self.mdlList = []
        # rapi.rpgReset()  # does it really need to exist?

        self.rw_header = RwHeader(bs)
        self.rw_struct = RwStructWorld(bs)
        self.rw_mat_list = RwMatList(bs)

        if self.rw_struct.is_root_atomic_sect:
            self.rw_atomic_section = RwAtomicSect(bs, self.rw_mat_list)
        else:
            self.rw_root_plane_sect = RwPlaneSect(bs, self.rw_mat_list)

        self.extension = RwExtension(bs)

        # I want to extract this to seperate function or place
        mdl = rapi.rpgConstructModel()

        texList = []  
        rw_tex_nameList = []
        existrw_tex_nameList = []
        path = rapi.getDirForFilePath(rapi.getInputName())
        for m in range(len(self.rw_mat_list.matList)):
            rw_tex_name = self.rw_mat_list.matList[m].name
            if rw_tex_name not in rw_tex_nameList:
                rw_tex_nameList.append(rw_tex_name)                        
                fullrw_tex_name = path+"/Textures/"+rw_tex_name+".png"
                if rapi.checkFileExists(fullrw_tex_name):            
                    texture = noesis.loadImageRGBA(fullrw_tex_name)
                    texList.append(texture)
                    existrw_tex_nameList.append(rw_tex_name)

        matList = []
        for i in range(len(texList)):
            matName = existrw_tex_nameList[i]
            material = NoeMaterial(matName, texList[i].name)
            matList.append(material)
        mdl.setModelMaterials(NoeModelMaterials(texList,matList))

        self.mdlList.append(mdl)
        # up until here ^


class BinMeshPlg:
    def __init__(self, bs):
        self.matIdList = []
        self.matIdNumFaceList = []

        self.bin_mesh_plg_head = RwHeader(bs)
        self.is_tri_strip = bs.readInt()
        self.numSplitMatID = bs.readUInt()
        self.num_indices = bs.readUInt()
        for i in range(self.numSplitMatID):  # need to check if it is uint16 or uint32 and fix looping
            self.faceIndices = bs.readUInt()
            self.matID = bs.readUInt()

            # also to seperate this part
            self.matIdList.append(self.matID)
            self.matIdNumFaceList.append(self.faceIndices)

# needs a lot of fixing and refactoring
class NativeDataPlgPs2:
    def __init__(self, bs, bin_mesh_plg, rw_material_list):
        self.matIdList = bin_mesh_plg.matIdList
        self.matList = rw_material_list.matList

        nativeMesh = RwHeader(bs)
        nativeMeshStruct = RwHeader(bs)
        platform_id = bs.readUInt()  # now only works for ps2
        splitCount = len(self.matIdList)
        for i in range(splitCount):
            size = bs.readUInt()
            mesh_type = bs.readUInt()
            vif_data = bs.readBytes(size)
            vif_data = vif_data[16:].rstrip(b'\xe5')  # dirty hack
            vert_buf = []
            uv_buf = []
            color_buf = []
            normal_buf = []
            size = 0
            unpackData = rapi.unpackPS2VIF(vif_data)                    
            for up in unpackData:
                if up.numElems == 4 and up.elemBits == 32:
                    vert_buf.append(up.data) 
                    size = 16
                elif up.numElems == 3 and up.elemBits == 32:
                    vert_buf.append(up.data)  
                    size = 12                    
                elif up.numElems == 2 and up.elemBits == 32:
                    uv_buf.append(up.data)
                elif up.numElems == 4 and up.elemBits == 8:
                    color_buf.append(up.data) 
                elif up.numElems == 3 and up.elemBits == 8:
                    normals = int_to_float(up.data)
                    normal_buf.append(normals)

            for v in range(len(vert_buf)):
                vertBuffer = vert_buf[v]
                rapi.rpgBindPositionBuffer(vertBuffer, noesis.RPGEODATA_FLOAT, size)
                
                normalData = normal_buf[v]
                rapi.rpgBindNormalBuffer(normalData, noesis.RPGEODATA_FLOAT, 12)

                UVData = uv_buf[v]
                checkLODUV = noeUnpack("I",UVData[0:4])[0]                    
                if checkLODUV != 0xE5E5E5E5:
                    rapi.rpgBindUV1Buffer(UVData, noesis.RPGEODATA_FLOAT, 8)                    

                colorData = color_buf[v]
                rapi.rpgBindColorBuffer(colorData, noesis.RPGEODATA_UBYTE, 4, 4)
                
                matID = self.matIdList[i]
                matName = self.matList[matID].name
                rapi.rpgSetMaterial(matName)
                rapi.rpgCommitTriangles(None, -1, len(vertBuffer) // size, noesis.RPGEO_TRIANGLE_STRIP)
                    
                rapi.rpgClearBufferBinds()


def registerNoesisTypes():
	handle = noesis.register("RenderWare 3D maps", ".bsp")
	noesis.setHandlerTypeCheck(handle, bsp_check_type)
	noesis.setHandlerLoadModel(handle, bsp_load_model)
	return 1


def bsp_check_type(data):
    bs = NoeBitStream(data)
    rw_header = RwHeader(bs)
    if rw_header.id != RwId.RW_ID_WORLD:
            return 0
    return 1


def bsp_load_model(data, mdlList):
    rapi.rpgCreateContext()
    bs = NoeBitStream(data)
    tex_list = []
    mat_list = []
    rw_world = RwWorld(bs)
    if len(rw_world.mdlList) > 0:
        mdlList.append(rw_world.mdlList[0])
    return 1


def int_to_float(data):
    int_in = NoeBitStream(data)
    float_out = NoeBitStream()
    for int in range(len(data)):
        float = int_in.readByte() / 128.0
        float_out.writeFloat(float)
    return float_out.getBuffer()
