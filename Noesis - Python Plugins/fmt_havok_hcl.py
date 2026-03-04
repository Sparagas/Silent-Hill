#------------------------------------------------
#--- Noesis Python Plugin
#
#      File: fmt_havok_hcl.py
#   Authors: Laurynas Zubavičius (Sparagas)
#   Purpose: Parse Havok collision data (.hcl)
#------------------------------------------------

from inc_noesis import *
import random

def registerNoesisTypes():
    handle = noesis.register("Havok Collision Data", ".hcl")
    noesis.setHandlerTypeCheck(handle, noepyCheckType)
    noesis.setHandlerLoadModel(handle, noepyLoadModel)
    return 1

def noepyCheckType(data):
    if len(data) < 4:
        return 0
    bs = NoeBitStream(data)
    if bs.readUInt() != 7009:
        return 0
    return 1

def noepyLoadModel(data, mdlList):
    ctx = rapi.rpgCreateContext()

    # Invert Z axis for proper orientation
    invert_z_matrix = NoeMat43((
        NoeVec3((1.0, 0.0, 0.0)),
        NoeVec3((0.0, 1.0, 0.0)),
        NoeVec3((0.0, 0.0, -1.0)),
        NoeVec3((0.0, 0.0, 0.0))
    ))
    rapi.rpgSetTransform(invert_z_matrix)

    bs = NoeBitStream(data)
    bs.seek(4, NOESEEK_ABS) # Skip magic

    # Read Vertices
    vertexBufferCount = bs.readUInt()
    vertexBufferBytes = bs.readBytes(vertexBufferCount * 4)

    # Read Indices
    indexBufferCount = bs.readUInt()
    indexBufferBytes = bs.readBytes(indexBufferCount * 2)

    # MOPP Bounds (4 floats = 16 bytes)
    bs.seek(16, NOESEEK_REL)

    # MOPP Code
    moppCodeSize = bs.readUInt()
    bs.seek(moppCodeSize, NOESEEK_REL) # Skip bytecode

    # Triangle Properties
    triangleCount = indexBufferCount // 3
    trianglePropertyCount = bs.readUInt()

    # Unpack the raw index bytes into a Python tuple of integers so we can group them
    idx_format = "<" + "H" * indexBufferCount
    indices = struct.unpack(idx_format, indexBufferBytes)
    
    # Dictionary to hold triangles grouped by material name
    # Format: {"MaterialName": [idx0, idx1, idx2, idx3...]}
    material_groups = {}
    
    for i in range(triangleCount):
        stringCount = bs.readUInt()
        props = []
        for _ in range(stringCount):
            length = bs.readUInt()
            if length > 0:
                # Read string and remove null terminators if present
                text = bs.readBytes(length).decode('ascii', errors='ignore').strip('\x00')
                props.append(text)
            
        # Combine strings into a material name (e.g. "Stone | Default")
        mat_name = " | ".join(props) if props else "Collision_Default"
        
        if mat_name not in material_groups:
            material_groups[mat_name] = []
            
        # Get the 3 indices for this specific triangle and add to the group
        idx0 = indices[i * 3]
        idx1 = indices[i * 3 + 1]
        idx2 = indices[i * 3 + 2]
        material_groups[mat_name].extend([idx0, idx1, idx2])

    # --- Constructing the Mesh ---
    rapi.rpgBindPositionBuffer(vertexBufferBytes, noesis.RPGEODATA_FLOAT, 12)
    
    materials = []
    
    # Commit triangles by material
    for mat_name, mat_indices in material_groups.items():
        # 1. Create a Noesis material with a random color
        mat = NoeMaterial(mat_name, "")
        r = random.uniform(0.2, 1.0) # Keep colors somewhat bright
        g = random.uniform(0.2, 1.0)
        b = random.uniform(0.2, 1.0)
        mat.setDiffuseColor(NoeVec4((r, g, b, 1.0)))
        materials.append(mat)
        
        # 2. Tell Noesis we are using this material
        rapi.rpgSetMaterial(mat_name)
        
        # 3. Repack the grouped indices into bytes and commit them
        mat_idx_bytes = struct.pack("<" + "H" * len(mat_indices), *mat_indices)
        rapi.rpgCommitTriangles(mat_idx_bytes, noesis.RPGEODATA_USHORT, len(mat_indices), noesis.RPGEO_TRIANGLE, 1)

    rapi.rpgClearBufferBinds()
    
    try:
        mdl = rapi.rpgConstructModel()
    except:
        mdl = NoeModel()
        
    # Apply our generated materials to the model
    mdl.setModelMaterials(NoeModelMaterials([], materials))
    mdlList.append(mdl)
    
    return 1
