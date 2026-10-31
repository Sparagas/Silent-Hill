import mrp


f = mrp.get_bfile()

magic = f.read(4)
num_mesh = f.readInt()
for mesh in range(num_mesh):
    mesh_name = f.read(16).decode('utf-8').strip('\x00')
    
    mesh = mrp.create_mesh(mesh_name)
    mat = mrp.create_material(mesh_name)
    mesh.set_material(mat)

    num_index = f.readInt()
    index = [f.readShort() for _ in range(num_index)]
    # Index
    mesh.set_faces(index)
    num_position = f.readInt()
    position = [f.read3Float() for _ in range(num_position)]
    # Position
    mesh.set_vertices(position)
    # Color
    unkn0 = f.read(4)
    num_color_index = f.readInt()
    if num_color_index != 0:
        color_index = [f.readShort() for _ in range(num_color_index)]
        num_color = f.readInt()
        color = [f.read(16) for _ in range(num_color)]
    unkn1 = f.read(154)
    texture_name = f.read(20).decode('utf-8').strip('\x00')
    if texture_name != '':

        # mat.set_texture(texture_name[:-3] + 'not.tga', 'RGBA')    # <-

        texcoord_index = [f.readShort() for _ in range(num_index)]
        # Texcoord Index
        mesh.set_uvs_indices(texcoord_index)
        num_texcoord = f.readInt()
        texcoord = [f.read2Float() for _ in range(num_texcoord)]
        # Texcoord
        mesh.set_uvs(texcoord)

mrp.print_mesh()
mrp.render('All')
mrp.view_uvs()
