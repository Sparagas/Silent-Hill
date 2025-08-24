from inc_noesis import *


# ------------------------------------------------
# Registration
# ------------------------------------------------
def registerNoesisTypes():
    handle = noesis.register("Silent Hill 1 Model", ".ilm;.plm;.ipd")
    noesis.setHandlerTypeCheck(handle, noesisCheckType)
    noesis.setHandlerLoadModel(handle, noesisLoadModel)
    return 1


# ----------------------------------------------------------
# Type check (BT: magic 0x30 = PLM, 0x14 = IPD)
# ----------------------------------------------------------
def noesisCheckType(data):
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

class FsImageDesc:
    def __init__(self, bs):
        self.tPage = [bs.readUByte(), bs.readUByte()]
        self.u     = bs.readUByte()
        self.v     = bs.readUByte()
        self.clutX = bs.readShort()
        self.clutY = bs.readShort()


class DVECTOR:
    def __init__(self, bs):
        self.vx = bs.readShort()
        self.vy = bs.readShort()


class ObjNormal:
    def __init__(self, bs):
        self.nx    = bs.readByte() 
        self.ny    = bs.readByte()
        self.nz    = bs.readByte()
        self.count = bs.readUByte()


class UFilename:
    def __init__(self, bs):
        raw = bs.readBytes(8)
        self.str = noeStrFromBytes(raw)
        self.u32 = list(noeUnpack("<II", raw))


class ObjPrimitive:
    def __init__(self, bs):
        self.u1   = bs.readUByte()
        self.v1   = bs.readUByte()
        self.bits1 = bs.readUShort()

        self.u2   = bs.readUByte()
        self.v2   = bs.readUByte()
        self.bits2 = bs.readUShort()

        self.u3   = bs.readUByte()
        self.v3   = bs.readUByte()
        self.u4   = bs.readUByte()
        self.v4   = bs.readUByte()

        self.face1 = bs.readUByte()
        self.face2 = bs.readUByte()
        self.face3 = bs.readUByte()
        self.face4 = bs.readUByte()

        self.unk_10 = bs.readBytes(4)


class ObjHeader:
    def __init__(self, bs):
        self.primitiveCount_0 = bs.readUByte()
        self.vertexCount_1    = bs.readUByte()
        self.normalCount_2    = bs.readUByte()
        self.unkCount_3       = bs.readUByte()

        self.primitivesPtr_4  = bs.readUInt()
        self.vertexXyPtr_8    = bs.readUInt()
        self.vertexZPtr_C     = bs.readUInt()
        self.normalsPtr_10    = bs.readUInt()
        self.unkPtr_14        = bs.readUInt()


class ObjList:
    def __init__(self, bs):
        self.objName_0      = noeStrFromBytes(bs.readBytes(8))
        self.meshCount_8    = bs.readUByte()
        self.vertexOffset_9 = bs.readUByte()
        self.normalOffset_A = bs.readUByte()

        # Packed bitfields in one byte (B)
        bf = bs.readUByte()
        self.field_B_0 =  (bf >> 0) & 0x01   # :1
        self.field_B_1 =  (bf >> 1) & 0x07   # :3
        self.field_B_4 =  (bf >> 4) & 0x03   # :2
        self.unk_B_6   =  (bf >> 6) & 0x03   # :2

        self.meshesPtr_C = bs.readUInt()


# -----------------------------
# PLM (texture/model list) structs
# -----------------------------

class PlmTexList8:
    def __init__(self, bs):
        self.imageDesc_0 = FsImageDesc(bs)
        self.unk_8       = bs.readBytes(8)
        self.queueIdx_10 = bs.readUInt()
        self.field_14    = bs.readByte()


class PlmTexList:
    def __init__(self, bs):
        self.texName_0  = noeStrFromBytes(bs.readBytes(8))
        self.fieldPtr_8 = bs.readUInt()
        self.field_C    = bs.readUByte()
        self.unk_D      = bs.readUByte()
        self.field_E    = bs.readUByte()
        self.field_F    = bs.readUByte()
        self.field_10   = bs.readUShort()
        self.field_12   = bs.readUShort()

        # union field_14: read 2 bytes, provide both views
        b2 = bs.readBytes(2)
        self.field_14_u8  = list(b2)                # [u8,u8]
        self.field_14_u16 = _u16_from_bytes(b2)     # u16

        # union field_16: same approach
        b2 = bs.readBytes(2)
        self.field_16_u8  = list(b2)
        self.field_16_u16 = _u16_from_bytes(b2)


class PlmHeader:
    def __init__(self, bs):
        self.magic_0         = bs.readUByte()  # expect 0x30
        self.version_1       = bs.readUByte()  # expect 6
        self.isLoaded_2      = bs.readUByte()
        self.textureCount_3  = bs.readUByte()
        self.textureListPtr_4 = bs.readUInt()
        self.objectCount_8   = bs.readUByte()
        self.unk_9           = bs.readBytes(3)
        self.objectListPtr_C = bs.readUInt()
        self.objectOrdsPtr_10 = bs.readUInt()


# -----------------------------
# IPD (instance/placement/level) structs
# -----------------------------

class IpdCollisionData10:
    def __init__(self, bs):
        self.field_0  = bs.readShort()
        self.field_2  = bs.readShort()
        self.field_4  = bs.readShort()

        # bitfield at offset +6 (uint16)
        bf             = bs.readUShort()
        self.field_6_0  =  (bf >> 0) & 0x1F   # :5
        self.field_6_5  =  (bf >> 5) & 0x07   # :3
        self.field_6_8  =  (bf >> 8) & 0x07   # :3
        self.field_6_11 =  (bf >> 11) & 0x0F  # :4
        self.field_6_15 =  (bf >> 15) & 0x01  # :1

        self.field_8  = bs.readShort()
        self.field_A  = bs.readShort()


class IpdCollisionData18:
    def __init__(self, bs):
        # first uint16 is all bitfields
        bf              = bs.readUShort()
        self.field_0_0  =  (bf >> 0) & 0x1F   # :5
        self.field_0_5  =  (bf >> 5) & 0x07   # :3
        self.field_0_8  =  (bf >> 8) & 0x07   # :3
        self.field_0_11 =  (bf >> 11) & 0x0F  # :4
        self.field_0_15 =  (bf >> 15) & 0x01  # :1

        self.unk_2 = bs.readBytes(2)
        self.unk_4 = bs.readBytes(6)


class IpdCollisionData:
    def __init__(self, bs):
        self.posX_0 = bs.readInt()
        self.posZ_4 = bs.readInt()
        # 32-bit packed into 4 x 8-bit fields
        bf32 = bs.readUInt()
        self.field_8_0  = (bf32 >>  0) & 0xFF
        self.field_8_8  = (bf32 >>  8) & 0xFF
        self.field_8_16 = (bf32 >> 16) & 0xFF
        self.field_8_24 = (bf32 >> 24) & 0xFF

        self.ptr_C   = bs.readUInt()
        self.ptr_10  = bs.readUInt()
        self.ptr_14  = bs.readUInt()
        self.ptr_18  = bs.readUInt()

        self.unk_1C   = bs.readBytes(2)
        self.field_1E = bs.readUByte()
        self.unk_1F   = bs.readBytes(1)
        self.ptr_20   = bs.readUInt()
        self.field_24 = bs.readUShort()
        self.field_26 = bs.readUShort()
        self.ptr_28   = bs.readUInt()
        self.ptr_2C   = bs.readUInt()


class IpdModelBuffer:
    def __init__(self, bs):
        self.unk_0        = bs.readBytes(12)
        self.fieldPtr_C   = bs.readUInt()
        self.fieldPtr_10  = bs.readUInt()
        self.fieldPtr_14  = bs.readUInt()


class IpdModelInfo:
    def __init__(self, bs):
        self.isGlobalPlm_0 = bs.readUByte()   # 0=from IPD, 1=from *_GLB.PLM
        self.unk_1         = bs.readBytes(3)
        self.modelName_4   = noeStrFromBytes(bs.readBytes(8))
        self.objListPtr_C  = bs.readUInt()


class IpdHeader:
    def __init__(self, bs):
        self.magic_0              = bs.readUByte()  # expect 0x14
        self.isLoaded_1           = bs.readUByte()
        self.levelGridX_2         = bs.readByte()
        self.levelGridY_3         = bs.readByte()
        self.plmHeaderPtr_4       = bs.readUInt()
        self.modelCount_8         = bs.readUByte()
        self.modelBufferCount_9   = bs.readUByte()
        self.modelOrderCount_A    = bs.readUByte()
        self.unk_B                = bs.readBytes(1)
        self.unk_C                = bs.readBytes(8)
        self.modelInfoPtr_14      = bs.readUInt()
        self.modelBuffersPtr_18   = bs.readUInt()
        self.textureCount_1C      = bs.readUByte()
        self.unk_1D               = bs.readBytes(3)
        self.unk_20               = bs.readBytes(48)
        self.modelOrderListPtr_50 = bs.readUInt()
        self.collisionData_54     = IpdCollisionData(bs)


def noesisLoadModel(data, mdlList):
    bs = NoeBitStream(data)
    isIpd = bs.readUByte()
    bs.seek(0, NOESEEK_ABS)

    parsed = None
    if isIpd == 0x14:  # IPD
        ipdHeader = IpdHeader(bs)

        bs.seek(ipdHeader.modelInfoPtr_14, NOESEEK_ABS)
        modelInfo = [IpdModelInfo(bs) for _ in range(ipdHeader.modelCount_8)]

        bs.seek(ipdHeader.modelBuffersPtr_18, NOESEEK_ABS)
        modelBuffer = [IpdModelBuffer(bs) for _ in range(ipdHeader.modelBufferCount_9)]

        bs.seek(ipdHeader.plmHeaderPtr_4, NOESEEK_ABS)
        plm_base = bs.tell()
    else:
        # Plain PLM at file start
        plm_base = 0
        bs.seek(plm_base, NOESEEK_ABS)

    plmHeader = PlmHeader(bs)

    bs.seek(plm_base + plmHeader.textureListPtr_4, NOESEEK_ABS)
    textureList = [PlmTexList(bs) for _ in range(plmHeader.textureCount_3)]

    bs.seek(plm_base + plmHeader.objectListPtr_C, NOESEEK_ABS)
    objectList = [ObjList(bs) for _ in range(plmHeader.objectCount_8)]

    bs.seek(plm_base + plmHeader.objectOrdsPtr_10, NOESEEK_ABS)
    obj_order = list(bs.readBytes(plmHeader.objectCount_8))

    for i in range(plmHeader.objectCount_8):
        bs.seek(plm_base + objectList[i].meshesPtr_C, NOESEEK_ABS)
        meshes = [ObjHeader(bs) for _ in range(objectList[i].meshCount_8)]

        for j in range(objectList[i].meshCount_8):
            mh = meshes[j]

            bs.seek(plm_base + mh.primitivesPtr_4, NOESEEK_ABS)
            prim = [ObjPrimitive(bs) for _ in range(mh.primitiveCount_0)]

            bs.seek(plm_base + mh.vertexXyPtr_8, NOESEEK_ABS)
            pos_xy = [DVECTOR(bs) for _ in range(mh.vertexCount_1)]

            bs.seek(plm_base + mh.vertexZPtr_C, NOESEEK_ABS)
            pos_z = [bs.readShort() for _ in range(mh.vertexCount_1)]

            bs.seek(plm_base + mh.normalsPtr_10, NOESEEK_ABS)
            norm = [ObjNormal(bs) for _ in range(mh.normalCount_2)]

            bs.seek(plm_base + mh.unkPtr_14, NOESEEK_ABS)
            unkn_index = list(bs.readBytes(mh.unkCount_3))

    return 1
