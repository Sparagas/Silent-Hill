from inc_noesis import *

def registerNoesisTypes():
    handle = noesis.register("Silent Hill 3 (PS2)", ".map")
    noesis.setHandlerTypeCheck(handle, CheckType)
    noesis.setHandlerLoadModel(handle, LoadModel)
    noesis.logPopup()
    return 1

def CheckType(data):
    if data[:4] != b'\xff\xff\xff\xff':
        return 0
    return 1

def LoadModel(data, mdlList):
    bs = NoeBitStream(data)
    ctx = rapi.rpgCreateContext()

    class Head:
        def __init__(self):
            self.next_ofs = bs.readUInt()
            self.data_start_ofs = bs.readUInt()
            self.total_size = bs.readUInt()
            self.pad = bs.readUInt()

    class MeshGroup:
        def __init__(self):
            self.mesh_group_h = MeshGroupH()
            self.mesh_group_b = MeshGroupB()

    class MeshGroupH:
        def __init__(self):
            self.head = Head()

            self.unk = bs.readUInt()
            self.arr_id = bs.readUInt()
            self.num_mesh = bs.readUShort()
            self.unk = bs.readUShort()
            self.unk = bs.readUInt()

            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()

    class MeshGroupB:
        def __init__(self):
            self.i = 0
            self.mesh = Mesh(self.i)
            while self.mesh.mesh_h.head.next_ofs > 0:
                bs.seek(self.mesh.mesh_h.head.next_ofs)
                self.i += 1
                self.mesh = Mesh(self.i)

    class Mesh:
        def __init__(self, i):
            self.i = i
            self.mesh_h = MeshH()
            self.mesh_b = MeshB(self.i)

    class MeshH:
        def __init__(self):
            self.head = Head()

            self.clut_index = bs.readUShort()
            self.unk = bs.readUShort()
            self.unk = bs.readUShort()
            self.flag = bs.readUShort()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()

            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()

    class MeshB:
        def __init__(self, i):
            self.i = i
            self.j = 0
            self.sub_mesh = SubMesh(self.i, self.j)
            while self.sub_mesh.sub_mesh_h.head.next_ofs > 0:
                bs.seek(self.sub_mesh.sub_mesh_h.head.next_ofs)
                self.j += 1
                self.sub_mesh = SubMesh(self.i, self.j)

    class SubMesh:
        def __init__(self, i, j):
            self.i = i
            self.j = j
            self.sub_mesh_h = SubMeshH()
            self.sub_mesh_b = SubMeshB(self.i, self.j)

    class SubMeshH:
        def __init__(self):
            self.head = Head()

            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()

            self.unk = bs.readFloat()
            self.unk = bs.readFloat()
            self.unk = bs.readFloat()
            self.unk = bs.readFloat()

    class SubMeshB:
        def __init__(self, i, j):
            self.i = i
            self.j = j
            self.k = 0
            self.shape = Shape()
            rapi.rpgSetName('mesh{}_{}_{}'.format(self.i, self.j, self.k))
            while self.shape.shape_h.head.next_ofs > 0:
                bs.seek(self.shape.shape_h.head.next_ofs)
                self.k += 1
                self.shape = Shape()
                rapi.rpgSetName('mesh{}_{}_{}'.format(self.i, self.j, self.k))

    class Shape:
        def __init__(self):
            self.vbuf = bytearray()
            
            self.shape_h = ShapeH()
            for _ in range(self.shape_h.num_vertex):
                self.shape_b = ShapeB()
                self.vbuf.extend(self.shape_b.vpos)
            
            rapi.rpgBindPositionBuffer(self.vbuf, noesis.RPGEODATA_SHORT, 6)
            rapi.rpgCommitTriangles(None, noesis.RPGEODATA_UINT, self.shape_h.num_vertex, noesis.RPGEO_POINTS) # for point cloud
            # rapi.rpgCommitTriangles(None, noesis.RPGEODATA_UINT, self.shape_h.num_vertex, noesis.RPGEO_TRIANGLE_STRIP) # for triangles

    class ShapeH:
        def __init__(self):
            self.head = Head()

            self.num_vertex = bs.readUInt()
            self.transform_index = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUShort()
            self.unk = bs.readUShort()

            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()
            self.unk = bs.readUInt()

            self.pad = bs.readUInt()
            self.pad = bs.readUInt()
            self.pad = bs.readUInt()
            self.pad = bs.readUInt()

    class ShapeB:
        def __init__(self):
            self.vpos = bs.readBytes(3*2)
            self.vn_vcol_x = bs.readBytes(2)
            self.tri_flag = bs.readUByte()
            self.uv_u = bs.readBytes(1)
            self.pad = bs.readByte()
            self.uv_v = bs.readBytes(1)
            self.vn_vcol = bs.readBytes(2*2)

    bs.seek(7*4)
    mesh_group_ofs0 = bs.readUInt()
    mesh_group_ofs1 = bs.readUInt()
    mesh_group_ofs2 = bs.readUInt()


    if mesh_group_ofs0 > 0:
        bs.seek(mesh_group_ofs0)
        mesh_group0 = MeshGroup()

    if mesh_group_ofs1 > 0:
        bs.seek(mesh_group_ofs1)
        mesh_group1 = MeshGroup()

    if mesh_group_ofs2 > 0:
        bs.seek(mesh_group_ofs2)
        mesh_group2 = MeshGroup()
        
    mdl = rapi.rpgConstructModel()
    # mdl.setModelMaterials(NoeModelMaterials([], [NoeMaterial('mat0','')]))
    mdlList.append(mdl)
    
    # rapi.rpgBindPositionBuffer(vbuf, noesis.RPGEODATA_FLOAT, 32)
    # rapi.rpgBindUV1BufferOfs(vbuf, noesis.RPGEODATA_FLOAT, 32, 24)
    # rapi.rpgCommitTriangles(None, noesis.RPGEODATA_UINT, num, noesis.RPGEO_TRIANGLE_STRIP)
    
    # mdl = rapi.rpgConstructModel()
    # mdl.setModelMaterials(NoeModelMaterials([], [NoeMaterial('mat0','')]))
    # mdlList.append(mdl)
    return 1
