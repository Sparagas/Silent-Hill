import mrp


f = mrp.get_bfile()

magic = f.read(4)
mesh_count = f.readInt()
for m in range(mesh_count):
    mesh_name = f.read(16).decode('utf-8').strip('\x00')
    
    mesh = mrp.create_mesh(mesh_name)
    mat = mrp.create_material(mesh_name)
    mesh.set_material(mat)

    index_count = f.readInt()
    index = []                      #
    for j in range(index_count):    #
        index.append(f.readShort()) #
    # Index
    mesh.set_faces(index)
    position_count = f.readInt()
    position = []                       #
    for j in range(position_count):     #
        position.append(f.read3Float()) #
    # Position
    mesh.set_vertices(position)

    # Color
    unkn_0 = f.read(4)
    color_index_count = f.readInt()
    if color_index_count != 0:
        color_index = []                      #
        for j in range(color_index_count):    #
            color_index.append(f.readShort()) #
        color_count = f.readInt()
        color = []                   #
        for j in range(color_count): #
            color.append(f.read(16)) #
    unkn1 = f.read(154)
    texture_name = f.read(20).decode('utf-8').strip('\x00')
    if texture_name != '':

        mat.set_texture(texture_name[:-3] + 'not.tga', 'RGBA')    # <-

        texcoord_index = []                      #
        for j in range (index_count):            #
            texcoord_index.append(f.readShort()) #
        # Texcoord Index
        mesh.set_uvs_indices(texcoord_index)
        texcoord_count = f.readInt()
        texcoord = []                         #
        for j in range(texcoord_count):       #
            texcoord.append(f.read2Float())   #
        # Texcoord
        mesh.set_uvs(texcoord)

mrp.print_mesh()
mrp.render('All')
mrp.view_uvs()
