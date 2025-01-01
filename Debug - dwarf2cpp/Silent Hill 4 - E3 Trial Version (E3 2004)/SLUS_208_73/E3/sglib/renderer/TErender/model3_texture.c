typedef struct sgTexArc;
typedef struct sgTexData;
typedef struct ModelWork;
typedef struct Model;
typedef struct sgClutData;
typedef struct _anon0;
typedef struct ModelCommonWork;
typedef struct TextPos;
typedef struct _anon1;

typedef int(*type_3)(void*, void*, void*);
typedef void(*type_7)(_anon0*, int, int, float*);

typedef float type_0[4][4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_4[4][2];
typedef float type_5[4];
typedef float type_6[4][2];
typedef float type_8[4][4][128];
typedef float type_9[4][4][256];
typedef float type_10[4][2048];
typedef _anon0 type_11[64];
typedef int type_12[16];
typedef float type_13[4];

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct ModelWork
{
	unsigned int id;
	float matrices[4][4];
	float* cluster_weights;
	float crops[4];
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
	void(*texture_load_func)(_anon0*, int, int, float*);
};

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

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct ModelCommonWork
{
	float skeleton_matrices[4][4][128];
	float envelope_matrices[4][4][256];
	float cluster_nodes[4][2048];
	float top_skeleton_matrix[4][4];
	float vsp[4][2];
	float vcp[4][2];
	float vcp_gs[4][2];
	_anon0 text_pos_params[64];
	unsigned long specular_mapping_tex0;
	unsigned long latitude_mapping_tex0;
};

struct TextPos
{
	int block_index;
	int texture_no;
};

struct _anon1
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

void* tex_data_addr;
void* global_tex_data_addr;
ModelCommonWork* model_common_work;

void sgModel3SetTextureDataAddr(void* addr);
void sgModel3SetGlobalTextureDataAddr(void* addr);
sgTexArc* sgModel3TextureData();
sgTexArc* sgModel3GlobalTextureData();
void sgModelDefaultTextureLoad(_anon0* param, int texture_no, int clut_no, float* crop);
void sgModel3UpdateTextures(Model* model, ModelWork* work);
void Model3UpdateTextures(Model* model, ModelWork* work);

// 
// Start address: 0x14e0b0
void sgModel3SetTextureDataAddr(void* addr)
{
	// Line 45, Address: 0x14e0b0, Func Offset: 0
	// Line 46, Address: 0x14e0b4, Func Offset: 0x4
	// Func End, Address: 0x14e0bc, Func Offset: 0xc
}

// 
// Start address: 0x14e0c0
void sgModel3SetGlobalTextureDataAddr(void* addr)
{
	// Line 51, Address: 0x14e0c0, Func Offset: 0
	// Line 52, Address: 0x14e0c4, Func Offset: 0x4
	// Func End, Address: 0x14e0cc, Func Offset: 0xc
}

// 
// Start address: 0x14e0d0
sgTexArc* sgModel3TextureData()
{
	// Line 57, Address: 0x14e0d0, Func Offset: 0
	// Line 58, Address: 0x14e0d4, Func Offset: 0x4
	// Func End, Address: 0x14e0dc, Func Offset: 0xc
}

// 
// Start address: 0x14e0e0
sgTexArc* sgModel3GlobalTextureData()
{
	// Line 63, Address: 0x14e0e0, Func Offset: 0
	// Line 64, Address: 0x14e0e4, Func Offset: 0x4
	// Func End, Address: 0x14e0ec, Func Offset: 0xc
}

// 
// Start address: 0x14e0f0
void sgModelDefaultTextureLoad(_anon0* param, int texture_no, int clut_no, float* crop)
{
	sgTexArc* tdata_addr;
	unsigned long tex0;
	unsigned int id;
	int cbp;
	_anon1* tex;
	sgTexData* tex_head;
	sgClutData* clut_head;
	// Line 68, Address: 0x14e0f0, Func Offset: 0
	// Line 69, Address: 0x14e114, Func Offset: 0x24
	// Line 77, Address: 0x14e11c, Func Offset: 0x2c
	// Line 78, Address: 0x14e128, Func Offset: 0x38
	// Line 79, Address: 0x14e134, Func Offset: 0x44
	// Line 81, Address: 0x14e138, Func Offset: 0x48
	// Line 84, Address: 0x14e140, Func Offset: 0x50
	// Line 85, Address: 0x14e148, Func Offset: 0x58
	// Line 86, Address: 0x14e150, Func Offset: 0x60
	// Line 88, Address: 0x14e158, Func Offset: 0x68
	// Line 93, Address: 0x14e160, Func Offset: 0x70
	// Line 94, Address: 0x14e16c, Func Offset: 0x7c
	// Line 95, Address: 0x14e174, Func Offset: 0x84
	// Line 96, Address: 0x14e184, Func Offset: 0x94
	// Line 95, Address: 0x14e188, Func Offset: 0x98
	// Line 96, Address: 0x14e18c, Func Offset: 0x9c
	// Line 97, Address: 0x14e1a0, Func Offset: 0xb0
	// Line 98, Address: 0x14e1a8, Func Offset: 0xb8
	// Line 100, Address: 0x14e1b8, Func Offset: 0xc8
	// Line 103, Address: 0x14e1bc, Func Offset: 0xcc
	// Line 104, Address: 0x14e1c8, Func Offset: 0xd8
	// Line 110, Address: 0x14e1e0, Func Offset: 0xf0
	// Line 104, Address: 0x14e1e4, Func Offset: 0xf4
	// Line 110, Address: 0x14e1e8, Func Offset: 0xf8
	// Line 113, Address: 0x14e280, Func Offset: 0x190
	// Func End, Address: 0x14e2a0, Func Offset: 0x1b0
}

// 
// Start address: 0x14e2a0
void sgModel3UpdateTextures(Model* model, ModelWork* work)
{
	int n_texture_blocks;
	int* texture_blocks;
	int n_text_poses;
	TextPos* text_poses;
	int texture_ids[16];
	int* tanm_ids;
	int i;
	_anon0* params;
	int i;
	int tex_id;
	int clut_id;
	float* crop;
	// Line 120, Address: 0x14e2a0, Func Offset: 0
	// Line 125, Address: 0x14e2b0, Func Offset: 0x10
	// Line 120, Address: 0x14e2b4, Func Offset: 0x14
	// Line 125, Address: 0x14e2d0, Func Offset: 0x30
	// Line 122, Address: 0x14e2d8, Func Offset: 0x38
	// Line 124, Address: 0x14e2dc, Func Offset: 0x3c
	// Line 121, Address: 0x14e2e0, Func Offset: 0x40
	// Line 123, Address: 0x14e2e4, Func Offset: 0x44
	// Line 125, Address: 0x14e2e8, Func Offset: 0x48
	// Line 122, Address: 0x14e2ec, Func Offset: 0x4c
	// Line 125, Address: 0x14e2f0, Func Offset: 0x50
	// Line 131, Address: 0x14e310, Func Offset: 0x70
	// Line 127, Address: 0x14e314, Func Offset: 0x74
	// Line 131, Address: 0x14e318, Func Offset: 0x78
	// Line 132, Address: 0x14e338, Func Offset: 0x98
	// Line 133, Address: 0x14e3ac, Func Offset: 0x10c
	// Line 132, Address: 0x14e3b4, Func Offset: 0x114
	// Line 133, Address: 0x14e3bc, Func Offset: 0x11c
	// Line 135, Address: 0x14e3c8, Func Offset: 0x128
	// Line 136, Address: 0x14e3d8, Func Offset: 0x138
	// Line 141, Address: 0x14e3e0, Func Offset: 0x140
	// Line 143, Address: 0x14e3e8, Func Offset: 0x148
	// Line 144, Address: 0x14e3f8, Func Offset: 0x158
	// Line 147, Address: 0x14e404, Func Offset: 0x164
	// Line 148, Address: 0x14e418, Func Offset: 0x178
	// Line 156, Address: 0x14e420, Func Offset: 0x180
	// Line 154, Address: 0x14e424, Func Offset: 0x184
	// Line 158, Address: 0x14e428, Func Offset: 0x188
	// Line 156, Address: 0x14e42c, Func Offset: 0x18c
	// Line 161, Address: 0x14e438, Func Offset: 0x198
	// Line 163, Address: 0x14e44c, Func Offset: 0x1ac
	// Line 165, Address: 0x14e45c, Func Offset: 0x1bc
	// Line 166, Address: 0x14e464, Func Offset: 0x1c4
	// Line 168, Address: 0x14e478, Func Offset: 0x1d8
	// Line 169, Address: 0x14e484, Func Offset: 0x1e4
	// Line 168, Address: 0x14e490, Func Offset: 0x1f0
	// Line 169, Address: 0x14e498, Func Offset: 0x1f8
	// Line 171, Address: 0x14e4a0, Func Offset: 0x200
	// Line 172, Address: 0x14e4a8, Func Offset: 0x208
	// Line 174, Address: 0x14e4c4, Func Offset: 0x224
	// Line 180, Address: 0x14e4c8, Func Offset: 0x228
	// Func End, Address: 0x14e4f4, Func Offset: 0x254
}

// 
// Start address: 0x14e500
void Model3UpdateTextures(Model* model, ModelWork* work)
{
	// Line 193, Address: 0x14e500, Func Offset: 0
	// Func End, Address: 0x14e508, Func Offset: 0x8
}

