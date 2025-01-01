typedef struct Model;



struct Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	unsigned int hits_offset;
	unsigned int reserved_1d;
	unsigned int tanmparams;
	unsigned int textureextras;
};


int sgModel3HasAnimateTexture(Model* model);
int sgModel3NAnimateTextures(Model* model);

// 
// Start address: 0x156400
int sgModel3HasAnimateTexture(Model* model)
{
	// Line 17, Address: 0x156400, Func Offset: 0
	// Line 19, Address: 0x156404, Func Offset: 0x4
	// Func End, Address: 0x15640c, Func Offset: 0xc
}

// 
// Start address: 0x156410
int sgModel3NAnimateTextures(Model* model)
{
	int i;
	int n_textures;
	int n_tanms;
	int* tanm_id;
	// Line 26, Address: 0x156410, Func Offset: 0
	// Line 29, Address: 0x156414, Func Offset: 0x4
	// Line 30, Address: 0x15641c, Func Offset: 0xc
	// Line 33, Address: 0x156428, Func Offset: 0x18
	// Line 32, Address: 0x15642c, Func Offset: 0x1c
	// Line 34, Address: 0x156430, Func Offset: 0x20
	// Line 35, Address: 0x156440, Func Offset: 0x30
	// Line 36, Address: 0x15644c, Func Offset: 0x3c
	// Line 37, Address: 0x156450, Func Offset: 0x40
	// Line 39, Address: 0x156460, Func Offset: 0x50
	// Func End, Address: 0x156468, Func Offset: 0x58
}

