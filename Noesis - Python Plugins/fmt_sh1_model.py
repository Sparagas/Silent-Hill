from inc_noesis import *


Q8 = 1.0 / 256.0   # PS1 fixed-point

# ------------------------------------------------
# Registration
# ------------------------------------------------
def registerNoesisTypes():
    handle = noesis.register("Silent Hill 1 Model", ".ilm;.plm;.ipd")
    noesis.setHandlerTypeCheck(handle, sh1CheckType)
    noesis.setHandlerLoadModel(handle, sh1LoadModel)
    return 1


# ----------------------------------------------------------
# Type check (BT: magic 0x30 = PLM, 0x14 = IPD)
# ----------------------------------------------------------
def sh1CheckType(data):
    if len(data) < 1:
        return 0
    bs = NoeBitStream(data)
    magic = bs.readUByte()
    return 1 if magic in (0x30, 0x14) else 0


# -----------------------------
# Helpers
# -----------------------------

def _u16_from_bytes(b2):
    # b2 is a 2-byte object
    return noeUnpack("<H", b2)[0]

# ------------------------------------------------
# Structs
# ------------------------------------------------

class MATRIX:
    def __init__(self, bs):
        self.m = [bs.readShort() for _ in range(3 * 3)]
        bs.seek(2, NOESEEK_REL)
        self.t = [bs.readInt() for _ in range(3)]


class DVECTOR:
    def __init__(self, bs):
        self.vx = bs.readShort()
        self.vy = bs.readShort()


class FsImageDesc:
    def __init__(self, bs):
        self.tPage = [bs.readUByte() for _ in range(2)]
        self.u     = bs.readUByte()
        self.v     = bs.readUByte()
        self.clutX = bs.readShort()
        self.clutY = bs.readShort()


class SVECTOR3:
    def __init__(self, bs):
        self.vx = bs.readShort()
        self.vy = bs.readShort()
        self.vz = bs.readShort()


class Normal:
    def __init__(self, bs):
        self.nx    = bs.readByte() 
        self.ny    = bs.readByte()
        self.nz    = bs.readByte()
        self.count = bs.readUByte()


class Filename:
    def __init__(self, bs):
        union = bs.readBytes(8)
        self.str = noeStrFromBytes(union)
        self.u32 = noeUnpack("<II", union)


class Primitive:
    def __init__(self, bs):
        self.u1    = bs.readUByte()
        self.v1    = bs.readUByte()
        self.bits1 = bs.readUShort()

        self.u2    = bs.readUByte()
        self.v2    = bs.readUByte()
        self.bits2 = bs.readUShort()

        self.u3    = bs.readUByte()
        self.v3    = bs.readUByte()
        self.u4    = bs.readUByte()
        self.v4    = bs.readUByte()

        self.face1 = bs.readUByte()
        self.face2 = bs.readUByte()
        self.face3 = bs.readUByte()
        self.face4 = bs.readUByte()

        self.unk_10 = bs.readBytes(4)


class MeshHeader:
    def __init__(self, bs):
        self.primitiveCount_0 = bs.readUByte()
        self.vertexCount_1    = bs.readUByte()
        self.normalCount_2    = bs.readUByte()
        self.unkCount_3       = bs.readUByte()

        self.primitives_4_Offset = bs.readUInt()
        self.vertexXy_8_Offset   = bs.readUInt()
        self.vertexZ_C_Offset    = bs.readUInt()
        self.normals_10_Offset   = bs.readUInt()
        self.unkPtr_14_Offset    = bs.readUInt()


class ModelHeader:
    def __init__(self, bs):
        self.name_0         = noeStrFromBytes(bs.readBytes(8))
        self.meshCount_8    = bs.readUByte()
        self.vertexOffset_9 = bs.readUByte()
        self.normalOffset_A = bs.readUByte()

        # Packed bitfields in one byte (B)
        bf = bs.readUByte()
        self.field_B_0 = (bf >> 0) & 0x01  # :1
        self.field_B_1 = (bf >> 1) & 0x07  # :3
        self.field_B_4 = (bf >> 4) & 0x03  # :2
        self.unk_B_6   = (bf >> 6) & 0x03  # :2

        self.meshHeaders_C_Offset = bs.readUInt()


# -----------------------------
# PLM (texture/model list) structs
# -----------------------------

class Texture:
    def __init__(self, bs):
        self.imageDesc_0 = FsImageDesc(bs)
        self.name_8      = noeStrFromBytes(bs.readBytes(8))
        self.queueIdx_10 = bs.readUInt()
        self.refCount_14 = bs.readByte()


class Material:
    def __init__(self, bs):
        self.name_0           = noeStrFromBytes(bs.readBytes(8))
        self.texture_8_Offset = bs.readUInt()
        self.field_C          = bs.readUByte()
        self.unk_D            = bs.readUByte()
        self.field_E          = bs.readUByte()
        self.field_F          = bs.readUByte()
        self.field_10         = bs.readUShort()
        self.field_12         = bs.readUShort()

        # union field_14: read 2 bytes, provide both views
        b2 = bs.readBytes(2)
        self.field_14_u8  = list(b2)                # [u8,u8]
        self.field_14_u16 = _u16_from_bytes(b2)     # u16

        # union field_16: same approach
        b2 = bs.readBytes(2)
        self.field_16_u8  = list(b2)
        self.field_16_u16 = _u16_from_bytes(b2)


class LmHeader:
    def __init__(self, bs):
        self.magic_0               = bs.readUByte()  # expect 0x30
        self.version_1             = bs.readUByte()  # expect 6
        self.isLoaded_2            = bs.readUByte()
        self.materialCount_3       = bs.readUByte()
        self.materials_4_Offset    = bs.readUInt()
        self.modelCount_8          = bs.readUByte()
        self.unk_9                 = bs.readBytes(3)
        self.modelHeaders_C_Offset = bs.readUInt()
        self.modelOrder_10_Offset  = bs.readUInt()


# -----------------------------
# IPD (instance/placement/level) structs
# -----------------------------

class IpdCollisionData_10:
    def __init__(self, bs):
        self.field_0    = bs.readShort()
        self.field_2    = bs.readShort()
        self.field_4    = bs.readShort()

        # bitfield at offset +6 (uint16)
        bf              = bs.readUShort()
        self.field_6_0  = (bf >> 0) & 0x1F   # :5
        self.field_6_5  = (bf >> 5) & 0x07   # :3
        self.field_6_8  = (bf >> 8) & 0x07   # :3
        self.field_6_11 = (bf >> 11) & 0x0F  # :4
        self.field_6_15 = (bf >> 15) & 0x01  # :1

        self.field_8  = bs.readShort()
        self.field_A  = bs.readShort()


class IpdCollisionData_14:
    def __init__(self, bs):
        bf              = bs.readUShort()
        self.field_0_0  = (bf >> 0) & 0x3FFF  # :14
        self.field_0_14 = (bf >> 14) & 0x03   # :2
        
        bf              = bs.readUShort()
        self.field_2_0  = (bf >> 0) & 0x3FFF  # :14
        self.field_2_14 = (bf >> 14) & 0x03   # :2

        self.unk_2 = bs.readBytes(2)
        self.unk_4 = bs.readBytes(6)


class IpdCollisionData_20:
    def __init__(self, bs):
        self.field_0 = bs.readShort()
        self.unk_2   = bs.readBytes(2)


class IpdCollisionData_18:
    def __init__(self, bs):
        # first uint16 is all bitfields
        bf              = bs.readUShort()
        self.field_0_0  = (bf >> 0) & 0x1F   # :5
        self.field_0_5  = (bf >> 5) & 0x07   # :3
        self.field_0_8  = (bf >> 8) & 0x07   # :3
        self.field_0_12 = (bf >> 12) & 0x07  # :3
        self.field_0_15 = (bf >> 15) & 0x01  # :1

        self.vec_2 = SVECTOR3(bs)
        self.field_8 = bs.readUShort()


class IpdCollisionData:
    def __init__(self, bs):
        self.positionX_0 = bs.readInt()
        self.positionZ_4 = bs.readInt()
        # 32-bit packed into 4 x 8-bit fields
        bf32 = bs.readUInt()
        self.field_8_0  = (bf32 >>  0) & 0xFF  # :8
        self.field_8_8  = (bf32 >>  8) & 0xFF  # :8
        self.field_8_16 = (bf32 >> 16) & 0xFF  # :8
        self.field_8_24 = (bf32 >> 24) & 0xFF  # :8

        self.ptr_C  = bs.readUInt()
        self.ptr_10 = bs.readUInt()
        self.ptr_14 = bs.readUInt()
        self.ptr_18 = bs.readUInt()

        self.field_1C = bs.readShort()
        self.field_1E = bs.readUByte()
        self.field_1F = bs.readUByte()
        self.ptr_20   = bs.readUInt()
        self.field_24 = bs.readUShort()
        self.field_26 = bs.readUShort()
        self.ptr_28   = bs.readUInt()
        self.ptr_2C   = bs.readUInt()
        self.field_30 = bs.readUByte()
        self.unk_31   = bs.readBytes(3)
        self.field_34 = bs.readBytes(256)


class IpdModelBuffer_C:
    def __init__(self, bs):
        self.modelHdr_0_Offset = bs.readUInt()
        self.field_14          = MATRIX(bs)


class IpdModelBuffer:
    def __init__(self, bs):
        self.field_0             = bs.readUByte()
        self.field_1             = bs.readUByte()
        self.field_2             = bs.readUByte()
        self.unk_3               = bs.readBytes(1)
        self.field_4             = bs.readShort()
        self.field_6             = bs.readShort()
        self.field_8             = bs.readShort()
        self.field_A             = bs.readShort()
        self.fieldPtr_C_Offset   = bs.readUInt()
        self.fieldPtr_10_Offset  = bs.readUInt()
        self.fieldPtr_14_Offset  = bs.readUInt()


class IpdModelInfo:
    def __init__(self, bs):
        self.isGlobalPlm_0     = bs.readUByte()
        self.unk_1             = bs.readBytes(3)
        self.modelName_4       = noeStrFromBytes(bs.readBytes(8))
        self.modelHdr_C_Offset = bs.readUInt()


class IpdHeader:
    def __init__(self, bs):
        self.magic_0                 = bs.readUByte()  # expect 0x14
        self.isLoaded_1              = bs.readUByte()
        self.levelGridX_2            = bs.readByte()
        self.levelGridY_3            = bs.readByte()
        self.lmHdr_4_Offset          = bs.readUInt()
        self.modelCount_8            = bs.readUByte()
        self.modelBufferCount_9      = bs.readUByte()
        self.modelOrderCount_A       = bs.readUByte()
        self.unk_B                   = bs.readBytes(1)
        self.unk_C                   = bs.readBytes(8)
        self.modelInfo_14_Offset     = bs.readUInt()
        self.modelBuffers_18_Offset  = bs.readUInt()
        self.textureCount_1C         = bs.readUByte()
        self.unk_1D                  = bs.readBytes(3)
        self.unk_20                  = bs.readBytes(48)
        self.modelOrderPtr_50_Offset = bs.readUInt()
        self.collisionData_54        = IpdCollisionData(bs)


# ------------------------------------------------
'''
class MeshHeader_Data:
    def __init__(self, bs, lmHeader_Data):
        bs.seek(OffsetStart + meshHeaders_C[j].primitives_4_Offset)
        self.primitives = [Primitive(bs) for _ in range(meshHeaders_C[j].primitiveCount_0)]

        bs.seek(OffsetStart + meshHeaders_C[j].vertexXy_8_Offset)
        self.verticesXy = [DVECTOR(bs) for _ in range(meshHeaders_C[j].vertexCount_1)]

        bs.seek(OffsetStart + meshHeaders_C[j].vertexZ_C_Offset)
        self.verticesZ = [bs.readShort() for _ in range(meshHeaders_C[j].vertexCount_1)]

        bs.seek(OffsetStart + meshHeaders_C[j].normals_10_Offset)
        self.normals = [Normal(bs) for _ in range(meshHeaders_C[j].normalCount_2)]

        bs.seek(OffsetStart + meshHeaders_C[j].unkPtr_14_Offset)
        self.unkIdx = [bs.readUByte() for _ in range(meshHeaders_C[j].unkCount_3)]


class MeshHeader_DataArray:
    def __init__(self, bs, lmHeader_Data, i):
        self.meshHeaders_C_Data = [] * lmHeader_Data.modelHeaders[i].meshCount_8
        for j in range(lmHeader_Data.modelHeaders[i].meshCount_8):
            bs.seek(OffsetStart + meshHeaders_C[j].primitives_4_Offset)
            self.meshHeaders_C_Data[j] = MeshHeader_Data(bs)


class ModelHeader_Data:
    def __init__(self, bs, lmHeader_Data, i):
        bs.seek(OffsetStart + lmHeader_Data.modelHeaders[i].meshHeaders_C_Offset)
        self.meshHeaders_C = [s_MeshHeader(bs) for _ in range(lmHeader_Data.modelHeaders[i].meshCount_8)]

        bs.seek(OffsetStart + meshHeaders_C.primitives_4_Offset)
        self.meshHeaders_C_DataArray = MeshHeader_DataArray(bs)


class ModelHeader_DataArray:
    def __init__(self, bs, lmHeader, lmHeader_Data):
        self.modelHeaders_C = [] * lmHeader.modelCount_8
        for i in range(lmHeader.modelCount_8):
            bs.seek(OffsetStart + lmHeader_Data.modelHeaders[i].meshHeaders_C_Offset);
            self.modelHeaders_C[i] = ModelHeader_Data(bs)
'''

class LmHeader_Data:
    def __init__(self, bs, lmHeader):
        bs.seek(OffsetStart + lmHeader.materials_4_Offset)
        self.materials = [Material(bs) for _ in range(lmHeader.materialCount_3)]

        bs.seek(OffsetStart + lmHeader.modelHeaders_C_Offset)
        self.modelHeaders = [ModelHeader(bs) for _ in range(lmHeader.modelCount_8)]
        
        bs.seek(OffsetStart + lmHeader.modelOrder_10_Offset)
        self.modelsOrder = [bs.readUByte() for _ in range(lmHeader.modelCount_8)]

'''
class LM_PART:
    def __init__(self, bs):
        self.lmHeader       = LmHeader(bs)
        self.LmHeader_Data  = lmHeader_Data(bs)
        self.modelHeaders_C = ModelHeader_DataArray(bs)
'''
# ------------------------------------------------

def sh1LoadModel(data, mdlList):
    bs = NoeBitStream(data)
    rapi.rpgCreateContext()

    isIpd = bs.readUByte()
    bs.seek(0)
    global OffsetStart
    OffsetStart = 0
    if isIpd == 0x14:  # IPD
        ipdHeader = IpdHeader(bs)

        bs.seek(ipdHeader.modelInfo_14_Offset)
        modelInfo = [IpdModelInfo(bs) for _ in range(ipdHeader.modelCount_8)]

        bs.seek(ipdHeader.modelBuffers_18_Offset)
        modelBuffer = [IpdModelBuffer(bs) for _ in range(ipdHeader.modelBufferCount_9)]

        OffsetStart = ipdHeader.lmHdr_4_Offset
        bs.seek(OffsetStart)

    lmHeader      = LmHeader(bs)
    lmHeader_Data = LmHeader_Data(bs, lmHeader)

    for oi, obj in enumerate(lmHeader_Data.modelHeaders):
        bs.seek(OffsetStart + obj.meshHeaders_C_Offset)
        meshHeaders_C = [MeshHeader(bs) for _ in range(obj.meshCount_8)]

        for j in range(obj.meshCount_8):
            bs.seek(OffsetStart + meshHeaders_C[j].primitives_4_Offset)
            primitives = [Primitive(bs) for _ in range(meshHeaders_C[j].primitiveCount_0)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].vertexXy_8_Offset)
            verticesXy = [DVECTOR(bs) for _ in range(meshHeaders_C[j].vertexCount_1)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].vertexZ_C_Offset)
            verticesZ = [bs.readShort() for _ in range(meshHeaders_C[j].vertexCount_1)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].normals_10_Offset)
            normals = [Normal(bs) for _ in range(meshHeaders_C[j].normalCount_2)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].unkPtr_14_Offset)
            unkIdx = [bs.readUByte() for _ in range(meshHeaders_C[j].unkCount_3)]

# ------------------------------------------------

            rapi.rpgSetName("%s" %obj.name_0)

            # Merge verts
            verts = []
            for i in range(meshHeaders_C[j].vertexCount_1):
                x = float(verticesXy[i].vx) * Q8
                y = -float(verticesXy[i].vy) * Q8
                z = float(verticesZ[i]) * Q8
                verts.extend([x, y, z])

            vbuf = noePack("f"*len(verts), *verts)
            rapi.rpgBindPositionBuffer(vbuf, noesis.RPGEODATA_FLOAT, 12)

            # Merge uvs
            uvs = []
            for p in primitives:
                u1 = p.u1
                v1 = p.v1
                u2 = p.u1
                v2 = p.v1
                u3 = p.u1
                v3 = p.v1
                u4 = p.u1
                v4 = p.v1
                uvs.extend([u1, v1, u2, v2, u3, v3, u4, v4])

            tbuf = noePack("f"*len(uvs), *uvs)
            rapi.rpgBindUV1Buffer(tbuf, noesis.RPGEODATA_FLOAT, 8)

            indices = []
            for p in primitives:
                indices.extend([p.face1, p.face2, p.face3, p.face4])

            ibuf = noePack("H"*len(indices), *indices)
            rapi.rpgCommitTriangles(ibuf, noesis.RPGEODATA_USHORT, len(indices), noesis.RPGEO_QUAD)

            # Clear binds for next mesh
            rapi.rpgClearBufferBinds()
        
            # After all objects/meshes → one combined model with multiple mesh groups
        mdl = rapi.rpgConstructModel()
        mdlList.append(mdl)
        rapi.rpgClearBufferBinds()
        rapi.rpgReset()

    return 1
