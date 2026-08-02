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
# Type check (magic 0x30 = PLM, 0x14 = IPD)
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


class Primitive:
    def __init__(self, bs):
        self.u1            = bs.readUByte()
        self.v1            = bs.readUByte()
        self.bits          = bs.readUShort()
        self.u2            = bs.readUByte()
        self.v2            = bs.readUByte()
        self.field_6       = bs.readUByte()
        bf                 = bs.readUByte()
        self.materialIdx   = (bf >> 1) & 0x7F  # :7
        self.isTransparent = (bf >> 0) & 0x01  # :1
        self.u3            = bs.readUByte()
        self.v3            = bs.readUByte()
        self.u4            = bs.readUByte()
        self.v4            = bs.readUByte()
        self.face1         = bs.readUByte()
        self.face2         = bs.readUByte()
        self.face3         = bs.readUByte()
        self.face4         = bs.readUByte()
        self.unk_10        = bs.readBytes(4)


class MeshHeader:
    def __init__(self, bs):
        self.primitiveCount = bs.readUByte()
        self.vertexCount    = bs.readUByte()
        self.normalCount    = bs.readUByte()
        self.unkCount_3     = bs.readUByte()
        self.ptr_primitives = bs.readUInt()
        self.ptr_vertexXy   = bs.readUInt()
        self.ptr_vertexZ    = bs.readUInt()
        self.ptr_normals    = bs.readUInt()
        self.ptr_unkptr_subcells  = bs.readUInt()


class ModelHeader:
    def __init__(self, bs):
        self.name         = noeStrFromBytes(bs.readBytes(8))
        self.meshCount    = bs.readUByte()
        self.vertexOffset = bs.readUByte()
        self.normalOffset = bs.readUByte()
        bf                = bs.readUByte()
        self.field_B_0    = (bf >> 0) & 0x01  # :1
        self.field_B_1    = (bf >> 1) & 0x07  # :3
        self.field_B_4    = (bf >> 4) & 0x03  # :2
        self.unk_B_6      = (bf >> 6) & 0x03  # :2
        self.ptr_meshHdrs = bs.readUInt()


class Texture:
    def __init__(self, bs):
        self.imageDesc = FsImageDesc(bs)
        self.name      = noeStrFromBytes(bs.readBytes(8))
        self.queueIdx  = bs.readUInt()
        self.refCount  = bs.readByte()


class Material:
    def __init__(self, bs):
        self.name           = noeStrFromBytes(bs.readBytes(8))
        self.ptr_texture = bs.readUInt()
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
        self.magic          = bs.readUByte()  # expect 0x30
        self.version        = bs.readUByte()  # expect 6
        self.isLoaded       = bs.readUByte()
        self.materialCount  = bs.readUByte()
        self.ptr_materials  = bs.readUInt()
        self.modelCount     = bs.readUByte()
        bs.seek(3, NOESEEK_REL)
        self.ptr_modelHdrs  = bs.readUInt()
        self.ptr_modelOrder = bs.readUInt()


# -----------------------------
# IPD (instance/placement/level) structs
# -----------------------------

class IpdCollSurface:
    def __init__(self, bs):
        self.field_0          = bs.readShort()
        self.baseGroundHeight = bs.readShort()
        self.field_4          = bs.readShort()
        bf                    = bs.readUShort()
        self.groundType       = (bf >> 0) & 0x1F   # :5
        self.disableHeight    = (bf >> 5) & 0x07   # :3
        self.field_6_8        = (bf >> 8) & 0x07   # :3
        self.field_6_11       = (bf >> 11) & 0x0F  # :4
        self.field_6_15       = (bf >> 15) & 0x01  # :1
        self.tiltAngleX       = bs.readShort()
        self.tiltAngleZ       = bs.readShort()


class IpdCollSubcell:
    def __init__(self, bs):
        bf                   = bs.readUShort()
        self.field_0_0       = (bf >> 0) & 0x3FFF  # :14
        self.field_0_14      = (bf >> 14) & 0x03   # :2
        bf                   = bs.readUShort()
        self.field_2_0       = (bf >> 0) & 0x3FFF  # :14
        self.field_2_14      = (bf >> 14) & 0x03   # :2
        self.splitVertexIdx0 = bs.readUByte()
        self.splitVertexIdx1 = bs.readUByte()
        self.surfaceIdx0     = bs.readUByte()
        self.surfaceIdx1     = bs.readUByte()


class IpdCollSubcellRange:
    def __init__(self, bs):
        self.field_0 = bs.readShort()
        self.field_2   = bs.readByte()


class IpdCollisionData_18:
    def __init__(self, bs):
        bf                  = bs.readUShort()
        self.groundType     = (bf >> 0) & 0x1F   # :5
        self.disableHeight  = (bf >> 5) & 0x07   # :3
        self.field_0_8      = (bf >> 8) & 0x07   # :3
        self.field_0_12     = (bf >> 12) & 0x07  # :3
        self.field_0_15     = (bf >> 15) & 0x01  # :1
        self.offset         = SVECTOR3(bs)
        self.field_8        = bs.readUShort()


class IpdCollisionData:
    def __init__(self, bs):
        self.positionX         = bs.readInt()
        self.positionZ         = bs.readInt()
        bf32                   = bs.readUInt()
        self.splitVertexCount  = (bf32 >>  0) & 0xFF  # :8
        self.surfaceCount      = (bf32 >>  8) & 0xFF  # :8
        self.subcellCount      = (bf32 >> 16) & 0xFF  # :8
        self.field_8_24        = (bf32 >> 24) & 0xFF  # :8
        self.ptr_splitVertices = bs.readUInt()
        self.ptr_surfaces      = bs.readUInt()
        self.ptr_subcells      = bs.readUInt()
        self.ptr_18            = bs.readUInt()
        self.subcellSize       = bs.readShort()
        self.subcellCountX     = bs.readUByte()
        self.subcellCountZ     = bs.readUByte()
        self.ptr_subcellRanges = bs.readUInt()
        self.field_24          = bs.readUShort()
        self.field_26          = bs.readUShort()
        self.ptr_28            = bs.readUInt()
        self.ptr_2C            = bs.readUInt()
        self.subcellCheckCount = bs.readUByte()
        bs.seek(3, NOESEEK_REL)
        self.subcellCheckIdxs  = bs.readBytes(256)


class IpdModelInstance:
    def __init__(self, bs):
        self.ptr_modelHdr = bs.readUInt()
        self.mat          = MATRIX(bs)


class IpdModelBuffer:
    def __init__(self, bs):
        self.modelInstanceCount   = bs.readUByte()
        self.field_1              = bs.readUByte()
        self.subcellCount         = bs.readUByte()
        bs.seek(1, NOESEEK_REL)
        self.minX                 = bs.readShort()
        self.maxX                 = bs.readShort()
        self.minZ                 = bs.readShort()
        self.maxZ                 = bs.readShort()
        self.ptr_modelInstances   = bs.readUInt()
        self.ptr_field_10         = bs.readUInt()
        self.ptr_subcellPositions = bs.readUInt()


class IpdModelInfo:
    def __init__(self, bs):
        self.isGlobalPlm  = bs.readUByte()
        bs.seek(3, NOESEEK_REL)
        self.name         = noeStrFromBytes(bs.readBytes(8))
        self.ptr_modelHdr = bs.readUInt()


class IpdHeader:
    def __init__(self, bs):
        self.magic              = bs.readUByte()  # expect 0x14
        self.isLoaded           = bs.readUByte()
        self.cellX              = bs.readByte()
        self.cellY              = bs.readByte()
        self.ptr_lmHdr          = bs.readUInt()
        self.modelCount         = bs.readUByte()
        self.modelBufferCount   = bs.readUByte()
        self.modelOrderCount    = bs.readUByte()
        bs.seek(9, NOESEEK_REL)
        self.ptr_modelInfos     = bs.readUInt()
        self.ptr_modelBuffers   = bs.readUInt()
        self.textureCount       = bs.readUByte()
        self.unk_1D             = bs.readBytes(51)
        self.ptr_modelOrderList = bs.readUInt()
        self.collisionData      = IpdCollisionData(bs)


# ------------------------------------------------
'''
class MeshHeader_Data:
    def __init__(self, bs, lmHeader_Data):
        bs.seek(OffsetStart + meshHeaders_C[j].ptr_primitives)
        self.primitives = [Primitive(bs) for _ in range(meshHeaders_C[j].primitiveCount_0)]

        bs.seek(OffsetStart + meshHeaders_C[j].ptr_vertexXy)
        self.verticesXy = [DVECTOR(bs) for _ in range(meshHeaders_C[j].vertexCount_1)]

        bs.seek(OffsetStart + meshHeaders_C[j].ptr_vertexZ)
        self.verticesZ = [bs.readShort() for _ in range(meshHeaders_C[j].vertexCount_1)]

        bs.seek(OffsetStart + meshHeaders_C[j].ptr_normals)
        self.normals = [Normal(bs) for _ in range(meshHeaders_C[j].normalCount_2)]

        bs.seek(OffsetStart + meshHeaders_C[j].ptr_unkptr_subcells)
        self.unkIdx = [bs.readUByte() for _ in range(meshHeaders_C[j].unkCount_3_3)]


class MeshHeader_DataArray:
    def __init__(self, bs, lmHeader_Data, i):
        self.meshHeaders_C_Data = [] * lmHeader_Data.modelHeaders[i].meshCount
        for j in range(lmHeader_Data.modelHeaders[i].meshCount):
            bs.seek(OffsetStart + meshHeaders_C[j].ptr_primitives)
            self.meshHeaders_C_Data[j] = MeshHeader_Data(bs)


class ModelHeader_Data:
    def __init__(self, bs, lmHeader_Data, i):
        bs.seek(OffsetStart + lmHeader_Data.modelHeaders[i].ptr_meshHdrs)
        self.meshHeaders_C = [s_MeshHeader(bs) for _ in range(lmHeader_Data.modelHeaders[i].meshCount)]

        bs.seek(OffsetStart + meshHeaders_C.ptr_primitives)
        self.meshHeaders_C_DataArray = MeshHeader_DataArray(bs)


class ModelHeader_DataArray:
    def __init__(self, bs, lmHeader, lmHeader_Data):
        self.modelHeaders_C = [] * lmHeader.modelCount
        for i in range(lmHeader.modelCount):
            bs.seek(OffsetStart + lmHeader_Data.modelHeaders[i].ptr_meshHdrs);
            self.modelHeaders_C[i] = ModelHeader_Data(bs)
'''

class LmHeader_Data:
    def __init__(self, bs, lmHeader):
        bs.seek(OffsetStart + lmHeader.ptr_materials)
        self.materials = [Material(bs) for _ in range(lmHeader.materialCount)]

        bs.seek(OffsetStart + lmHeader.ptr_modelHdrs)
        self.modelHeaders = [ModelHeader(bs) for _ in range(lmHeader.modelCount)]
        
        bs.seek(OffsetStart + lmHeader.ptr_modelOrder)
        self.modelsOrder = [bs.readUByte() for _ in range(lmHeader.modelCount)]

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

        bs.seek(ipdHeader.ptr_modelInfos)
        modelInfo = [IpdModelInfo(bs) for _ in range(ipdHeader.modelCount)]

        bs.seek(ipdHeader.ptr_modelBuffers)
        modelBuffer = [IpdModelBuffer(bs) for _ in range(ipdHeader.modelBufferCount)]

        OffsetStart = ipdHeader.ptr_lmHdr
        bs.seek(OffsetStart)

    lmHeader      = LmHeader(bs)
    lmHeader_Data = LmHeader_Data(bs, lmHeader)

    for oi, obj in enumerate(lmHeader_Data.modelHeaders):
        bs.seek(OffsetStart + obj.ptr_meshHdrs)
        meshHeaders_C = [MeshHeader(bs) for _ in range(obj.meshCount)]

        for j in range(obj.meshCount):
            bs.seek(OffsetStart + meshHeaders_C[j].ptr_primitives)
            primitives = [Primitive(bs) for _ in range(meshHeaders_C[j].primitiveCount)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].ptr_vertexXy)
            verticesXy = [DVECTOR(bs) for _ in range(meshHeaders_C[j].vertexCount)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].ptr_vertexZ)
            verticesZ = [bs.readShort() for _ in range(meshHeaders_C[j].vertexCount)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].ptr_normals)
            normals = [Normal(bs) for _ in range(meshHeaders_C[j].normalCount)]
            
            bs.seek(OffsetStart + meshHeaders_C[j].ptr_unkptr_subcells)
            unkIdx = [bs.readUByte() for _ in range(meshHeaders_C[j].unkCount_3)]

# ------------------------------------------------

            rapi.rpgSetName("%s" %obj.name)

            # Merge verts
            verts = []
            for i in range(meshHeaders_C[j].vertexCount):
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
