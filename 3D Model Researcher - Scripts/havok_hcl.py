import mrp
import random

# Get the currently opened file (Little-Endian)
f = mrp.get_bfile(byte_order="<")

# Read Magic
magic = f.readInt()
if magic != 7009:
    print("Error: Not Havok collision data!")
else:
    # Read Vertex Buffer
    vertexBufferCount = f.readInt()
    vertexBufferBytes = f.read(vertexBufferCount * 4)
    
    # Read Index Buffer
    indexBufferCount = f.readInt()
    indexBufferBytes = f.read(indexBufferCount * 2)
    
    # MOPP (Memory Optimized Partial Polytope) collision tree
    f.seek(16, 1) # Skip MoppBounds (4 floats)
    moppCodeSize = f.readInt()
    f.seek(moppCodeSize, 1) # Skip moppCode bytecode
    
    # Read Triangle Properties
    triangleCount = indexBufferCount // 3
    trianglePropertyCount = f.readInt()
    
    createdMaterials = {} 
    materialFaces = {}         
    
    for i in range(triangleCount):
        stringCount = f.readInt()
        props = []
        for _ in range(stringCount):
            stringLength = f.readInt()
            if stringLength > 0:
                textBytes = f.read(stringLength)
                text = textBytes.decode('ascii', errors='ignore').strip('\x00')
                props.append(text)
                
        matName = " | ".join(props) if props else "Collision_Default"
        
        if matName not in createdMaterials:
            mat = mrp.create_material(matName)
            r = random.randint(50, 255)
            g = random.randint(50, 255)
            b = random.randint(50, 255)
            mat.set_color(r, g, b)
            createdMaterials[matName] = mat
            
        materialFaces[i] = createdMaterials[matName]
        
    # --- Construct Mesh ---
    mesh = mrp.create_mesh()
    
    mesh.set_vertices(vertexBufferBytes, fm="XYZ", inv="z", tp="Float")
    mesh.set_faces(indexBufferBytes, fm="Triangles", tp="Short")
    
    # Apply the dictionary of per-face materials
    mesh.set_material_faces(materialFaces)
    
    mrp.render()
