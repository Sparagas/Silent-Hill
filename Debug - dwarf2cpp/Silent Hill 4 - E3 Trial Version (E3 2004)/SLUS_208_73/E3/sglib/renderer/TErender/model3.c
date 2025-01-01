typedef struct HitData;
typedef struct ModelCommonWork;
typedef union _anon0;
typedef struct Model;
typedef struct Model3Junk;
typedef struct FuncData;
typedef struct ktScene;
typedef struct ktLight;
typedef struct ModelWork;
typedef struct Packet;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct Model3Env;
typedef union _anon4;

typedef int(*type_21)(void*, void*, int, void*);
typedef int(*type_24)(void*, void*, void*);
typedef int(*type_25)(void*, void*, void*);
typedef void(*type_26)(_anon1*, int, int, float*);

typedef float type_0[4];
typedef float type_1[4][2];
typedef float type_2[4];
typedef float type_3[4][4];
typedef _anon2 type_4[4];
typedef float type_5[4];
typedef <unknown fundamental type (0xa510)> type_6[4];
typedef float type_7[4][4];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4][4][128];
typedef float type_12[4][2];
typedef float type_13[4];
typedef float type_14[4];
typedef float type_15[4][2];
typedef float type_16[4][4][256];
typedef _anon2 type_17[2];
typedef float type_18[4][2048];
typedef <unknown fundamental type (0xa510)> type_19[2];
typedef _anon1 type_20[64];
typedef float type_22[4];
typedef int type_23[4];
typedef unsigned char type_27[10];
typedef unsigned char type_28[5];
typedef float type_29[4];
typedef float type_30[4][2];
typedef float type_31[4];
typedef float type_32[4][4];

struct HitData
{
	unsigned int flag;
	float radius;
	float y_min;
	float y_max;
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
	_anon1 text_pos_params[64];
	unsigned long specular_mapping_tex0;
	unsigned long latitude_mapping_tex0;
};

union _anon0
{
	float d[4][2];
	float i[4][2];
	_anon2 v[2];
	<unknown fundamental type (0xa510)> u128[2];
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

struct Model3Junk
{
	float xyz_min[4];
	float xyz_max[4];
	float xyz_min_wide[4];
	float xyz_max_wide[4];
	float rgba_max[4];
	float global_ambient[4];
	<unknown fundamental type (0xa510)> giftag_0;
	<unknown fundamental type (0xa510)> giftag_1;
	<unknown fundamental type (0xa510)> giftag_2;
	float camera[4];
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
	float vwm[4][4];
	void* vi00;
	void* xtop;
	float cluster_nodes[4];
	unsigned int fogcol;
	unsigned char view_clip_and;
	unsigned char view_clip_or;
	unsigned char gs_clip_and;
	unsigned char gs_clip_or;
};

struct FuncData
{
	short skeleton_no;
	short func_id;
};

struct ktScene
{
	_anon2 fog_col;
	int fog_near;
	int fog_far;
	float fog_a;
	float fog_b;
	unsigned char fog_pow;
	_anon2 ambi;
	int projection;
	int width;
	int height;
	int clip_width;
	int clip_height;
	int near_clip;
	int far_clip;
	int z_min;
	int z_max;
	int light_n;
	ktLight* light;
	_anon4 para_mat;
	_anon4 para_col;
	_anon4 vs;
	_anon4 vs0;
	_anon4 wv;
	_anon4 r_wv;
	_anon4 vw;
	_anon4 ws;
	_anon4 ws0;
	_anon4 vc;
	_anon4 cs;
	_anon4 vd;
	_anon4 vg;
	_anon0 vd24;
	_anon0 vg24;
	_anon0 vs24;
	_anon2 rev;
	char is_link_change;
	char is_para_change;
	char is_change;
	char is_rev;
};

struct ktLight
{
	ktLight* next;
	ktLight* link;
	float r;
	float g;
	float b;
	unsigned int type;
	_anon2 pos;
	_anon2 vec;
	float f_start;
	float f_end;
	float cone;
	float spread;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
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
	void(*texture_load_func)(_anon1*, int, int, float*);
};

struct Packet
{
	unsigned long dmatag_tag;
	unsigned int vifcode_0;
	unsigned int vifcode_1;
	unsigned long giftag_tag;
	unsigned long giftag_reg;
	unsigned long test_d;
	unsigned long test_a;
	unsigned long texa_d;
	unsigned long texa_a;
	unsigned long fba_d;
	unsigned long fba_a;
	unsigned long alpha_d;
	unsigned long alpha_a;
	unsigned long fogcol_d;
	unsigned long fogcol_a;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon3
{
	ktScene current;
};

struct Model3Env
{
	unsigned long vu1_test;
	unsigned long vu0_test;
	unsigned long vu1_alpha;
	unsigned long vu0_alpha;
	unsigned long vu1_fba;
	unsigned long vu0_fba;
	unsigned long vu1_tfx;
	unsigned long vu0_tfx;
	unsigned char vu1_backclip_force;
	unsigned char vu1_backclip_value;
	unsigned char vu0_backclip_force;
	unsigned char vu0_backclip_value;
	unsigned char normalize_normal;
	unsigned char update_z_first;
};

union _anon4
{
	float d[4][4];
	float i[4][4];
	_anon2 v[4];
	<unknown fundamental type (0xa510)> u128[4];
};

_anon3 kt_scene_global_work;
unsigned char dmac_disable_list[5];
unsigned char dmac_status_changed[10];
ModelCommonWork* model_common_work;
Model3Junk model3_junk;
Model3Env model3_env;
unsigned int d_ctrl_rele_save;

unsigned int UIntFogcol();
int Model3NSkeletons(void* model_);
char* Model3SkeletonStructure(void* model_);
void Model3DrawPre();
void Model3DrawPost();
void MakeParams();
void SortEnvPrim();
void Model3Draw(void* model_, void* work_, float mwm[4], float wsm[4], void* func_data);
void Model3Wait();
int Model3ExecFunc(void* model_, void* work_, void* data);

// 
// Start address: 0x14cb90
unsigned int UIntFogcol()
{
	float f[4];
	int i[4];
	// Line 42, Address: 0x14cb90, Func Offset: 0
	// Line 47, Address: 0x14cb94, Func Offset: 0x4
	// Line 42, Address: 0x14cb98, Func Offset: 0x8
	// Line 47, Address: 0x14cb9c, Func Offset: 0xc
	// Line 48, Address: 0x14cba8, Func Offset: 0x18
	// Line 51, Address: 0x14cbb4, Func Offset: 0x24
	// Line 52, Address: 0x14cbc0, Func Offset: 0x30
	// Line 51, Address: 0x14cbc4, Func Offset: 0x34
	// Line 52, Address: 0x14cbd4, Func Offset: 0x44
	// Func End, Address: 0x14cbdc, Func Offset: 0x4c
}

// 
// Start address: 0x14cbe0
int Model3NSkeletons(void* model_)
{
	// Line 153, Address: 0x14cbe0, Func Offset: 0
	// Func End, Address: 0x14cbe8, Func Offset: 0x8
}

// 
// Start address: 0x14cbf0
char* Model3SkeletonStructure(void* model_)
{
	Model* model;
	char* structure;
	int i;
	unsigned char d;
	// Line 165, Address: 0x14cbf0, Func Offset: 0
	// Line 163, Address: 0x14cbf4, Func Offset: 0x4
	// Line 165, Address: 0x14cbf8, Func Offset: 0x8
	// Line 168, Address: 0x14cc04, Func Offset: 0x14
	// Line 169, Address: 0x14cc1c, Func Offset: 0x2c
	// Line 170, Address: 0x14cc20, Func Offset: 0x30
	// Line 171, Address: 0x14cc2c, Func Offset: 0x3c
	// Line 172, Address: 0x14cc34, Func Offset: 0x44
	// Line 173, Address: 0x14cc38, Func Offset: 0x48
	// Line 174, Address: 0x14cc3c, Func Offset: 0x4c
	// Line 175, Address: 0x14cc50, Func Offset: 0x60
	// Line 176, Address: 0x14cc5c, Func Offset: 0x6c
	// Line 178, Address: 0x14cc60, Func Offset: 0x70
	// Func End, Address: 0x14cc68, Func Offset: 0x78
}

// 
// Start address: 0x14cc70
void Model3DrawPre()
{
	// Line 263, Address: 0x14cc70, Func Offset: 0
	// Line 271, Address: 0x14cc78, Func Offset: 0x8
	// Line 272, Address: 0x14cc80, Func Offset: 0x10
	// Line 273, Address: 0x14cc8c, Func Offset: 0x1c
	// Line 293, Address: 0x14cc94, Func Offset: 0x24
	// Func End, Address: 0x14cca0, Func Offset: 0x30
}

// 
// Start address: 0x14cca0
void Model3DrawPost()
{
	// Line 350, Address: 0x14cca0, Func Offset: 0
	// Func End, Address: 0x14cca8, Func Offset: 0x8
}

// 
// Start address: 0x14ccb0
void MakeParams()
{
	float vsm[4];
	float nearz;
	float farz;
	float vsp[4];
	float p[4];
	float p[4];
	// Line 359, Address: 0x14ccb0, Func Offset: 0
	// Line 358, Address: 0x14ccb4, Func Offset: 0x4
	// Line 359, Address: 0x14ccb8, Func Offset: 0x8
	// Line 358, Address: 0x14ccbc, Func Offset: 0xc
	// Line 381, Address: 0x14ccc0, Func Offset: 0x10
	// Line 388, Address: 0x14cccc, Func Offset: 0x1c
	// Line 366, Address: 0x14ccd0, Func Offset: 0x20
	// Line 381, Address: 0x14ccd4, Func Offset: 0x24
	// Line 360, Address: 0x14ccdc, Func Offset: 0x2c
	// Line 382, Address: 0x14cce4, Func Offset: 0x34
	// Line 359, Address: 0x14ccec, Func Offset: 0x3c
	// Line 399, Address: 0x14ccf0, Func Offset: 0x40
	// Line 364, Address: 0x14ccf4, Func Offset: 0x44
	// Line 360, Address: 0x14ccfc, Func Offset: 0x4c
	// Line 364, Address: 0x14cd00, Func Offset: 0x50
	// Line 366, Address: 0x14cd08, Func Offset: 0x58
	// Line 369, Address: 0x14cd0c, Func Offset: 0x5c
	// Line 367, Address: 0x14cd10, Func Offset: 0x60
	// Line 368, Address: 0x14cd20, Func Offset: 0x70
	// Line 369, Address: 0x14cd2c, Func Offset: 0x7c
	// Line 399, Address: 0x14cd34, Func Offset: 0x84
	// Line 373, Address: 0x14cd40, Func Offset: 0x90
	// Line 369, Address: 0x14cd44, Func Offset: 0x94
	// Line 370, Address: 0x14cd48, Func Offset: 0x98
	// Line 371, Address: 0x14cd54, Func Offset: 0xa4
	// Line 372, Address: 0x14cd60, Func Offset: 0xb0
	// Line 373, Address: 0x14cd68, Func Offset: 0xb8
	// Line 378, Address: 0x14cd70, Func Offset: 0xc0
	// Line 381, Address: 0x14cd74, Func Offset: 0xc4
	// Line 378, Address: 0x14cd78, Func Offset: 0xc8
	// Line 381, Address: 0x14cd7c, Func Offset: 0xcc
	// Line 378, Address: 0x14cd80, Func Offset: 0xd0
	// Line 397, Address: 0x14cd88, Func Offset: 0xd8
	// Line 381, Address: 0x14cd8c, Func Offset: 0xdc
	// Line 382, Address: 0x14cd94, Func Offset: 0xe4
	// Line 387, Address: 0x14cda4, Func Offset: 0xf4
	// Line 388, Address: 0x14cda8, Func Offset: 0xf8
	// Line 389, Address: 0x14cdac, Func Offset: 0xfc
	// Line 390, Address: 0x14cdb0, Func Offset: 0x100
	// Line 391, Address: 0x14cdb4, Func Offset: 0x104
	// Line 392, Address: 0x14cdb8, Func Offset: 0x108
	// Line 399, Address: 0x14cdbc, Func Offset: 0x10c
	// Line 397, Address: 0x14cdc0, Func Offset: 0x110
	// Line 399, Address: 0x14cdc4, Func Offset: 0x114
	// Line 397, Address: 0x14cdc8, Func Offset: 0x118
	// Line 399, Address: 0x14cdd0, Func Offset: 0x120
	// Line 400, Address: 0x14cdd8, Func Offset: 0x128
	// Line 401, Address: 0x14cde8, Func Offset: 0x138
	// Line 402, Address: 0x14cdec, Func Offset: 0x13c
	// Line 403, Address: 0x14cdf0, Func Offset: 0x140
	// Line 404, Address: 0x14cdf4, Func Offset: 0x144
	// Line 405, Address: 0x14cdf8, Func Offset: 0x148
	// Line 408, Address: 0x14cdfc, Func Offset: 0x14c
	// Func End, Address: 0x14ce04, Func Offset: 0x154
}

// 
// Start address: 0x14ce10
void SortEnvPrim()
{
	Packet* p;
	Packet packet;
	// Line 415, Address: 0x14ce10, Func Offset: 0
	// Line 458, Address: 0x14ce18, Func Offset: 0x8
	// Line 459, Address: 0x14ce24, Func Offset: 0x14
	// Line 462, Address: 0x14ce2c, Func Offset: 0x1c
	// Line 463, Address: 0x14ce54, Func Offset: 0x44
	// Line 467, Address: 0x14ce58, Func Offset: 0x48
	// Line 463, Address: 0x14ce5c, Func Offset: 0x4c
	// Line 464, Address: 0x14ce64, Func Offset: 0x54
	// Line 465, Address: 0x14ce70, Func Offset: 0x60
	// Line 466, Address: 0x14ce7c, Func Offset: 0x6c
	// Line 467, Address: 0x14ce84, Func Offset: 0x74
	// Line 468, Address: 0x14ce8c, Func Offset: 0x7c
	// Func End, Address: 0x14ce9c, Func Offset: 0x8c
}

// 
// Start address: 0x14cea0
void Model3Draw(void* model_, void* work_, float mwm[4], float wsm[4], void* func_data)
{
	Model* model;
	ModelWork* work;
	// Line 475, Address: 0x14cea0, Func Offset: 0
	// Line 481, Address: 0x14cea4, Func Offset: 0x4
	// Line 475, Address: 0x14cea8, Func Offset: 0x8
	// Line 481, Address: 0x14ceac, Func Offset: 0xc
	// Line 475, Address: 0x14ceb0, Func Offset: 0x10
	// Line 476, Address: 0x14ced0, Func Offset: 0x30
	// Line 481, Address: 0x14ced4, Func Offset: 0x34
	// Line 484, Address: 0x14cee0, Func Offset: 0x40
	// Line 485, Address: 0x14cef4, Func Offset: 0x54
	// Line 486, Address: 0x14cf20, Func Offset: 0x80
	// Line 488, Address: 0x14cf50, Func Offset: 0xb0
	// Line 489, Address: 0x14cf60, Func Offset: 0xc0
	// Line 492, Address: 0x14cf74, Func Offset: 0xd4
	// Line 498, Address: 0x14cf80, Func Offset: 0xe0
	// Line 499, Address: 0x14cf88, Func Offset: 0xe8
	// Line 501, Address: 0x14cf90, Func Offset: 0xf0
	// Line 508, Address: 0x14cfa0, Func Offset: 0x100
	// Line 509, Address: 0x14cfb0, Func Offset: 0x110
	// Line 510, Address: 0x14cfb8, Func Offset: 0x118
	// Line 513, Address: 0x14cfc0, Func Offset: 0x120
	// Line 515, Address: 0x14cfcc, Func Offset: 0x12c
	// Line 516, Address: 0x14cfd8, Func Offset: 0x138
	// Line 517, Address: 0x14cfe4, Func Offset: 0x144
	// Line 519, Address: 0x14cfec, Func Offset: 0x14c
	// Line 521, Address: 0x14cff8, Func Offset: 0x158
	// Line 523, Address: 0x14d000, Func Offset: 0x160
	// Line 529, Address: 0x14d008, Func Offset: 0x168
	// Line 533, Address: 0x14d014, Func Offset: 0x174
	// Line 537, Address: 0x14d01c, Func Offset: 0x17c
	// Line 539, Address: 0x14d028, Func Offset: 0x188
	// Line 540, Address: 0x14d038, Func Offset: 0x198
	// Line 542, Address: 0x14d044, Func Offset: 0x1a4
	// Line 543, Address: 0x14d054, Func Offset: 0x1b4
	// Line 544, Address: 0x14d05c, Func Offset: 0x1bc
	// Line 545, Address: 0x14d064, Func Offset: 0x1c4
	// Line 546, Address: 0x14d068, Func Offset: 0x1c8
	// Line 550, Address: 0x14d070, Func Offset: 0x1d0
	// Line 552, Address: 0x14d078, Func Offset: 0x1d8
	// Line 554, Address: 0x14d084, Func Offset: 0x1e4
	// Line 559, Address: 0x14d08c, Func Offset: 0x1ec
	// Line 561, Address: 0x14d090, Func Offset: 0x1f0
	// Func End, Address: 0x14d0b0, Func Offset: 0x210
}

// 
// Start address: 0x14d0b0
void Model3Wait()
{
	// Line 725, Address: 0x14d0b0, Func Offset: 0
	// Line 727, Address: 0x14d0b8, Func Offset: 0x8
	// Line 728, Address: 0x14d0d4, Func Offset: 0x24
	// Func End, Address: 0x14d0e0, Func Offset: 0x30
}

// 
// Start address: 0x14d0e0
int Model3ExecFunc(void* model_, void* work_, void* data)
{
	Model* model;
	ModelWork* work;
	int n_funcs;
	FuncData* func_data_top;
	int i;
	int(*func)(void*, void*, int, void*);
	// Line 756, Address: 0x14d0e0, Func Offset: 0
	// Line 762, Address: 0x14d0f4, Func Offset: 0x14
	// Line 756, Address: 0x14d0f8, Func Offset: 0x18
	// Line 757, Address: 0x14d104, Func Offset: 0x24
	// Line 756, Address: 0x14d108, Func Offset: 0x28
	// Line 758, Address: 0x14d10c, Func Offset: 0x2c
	// Line 759, Address: 0x14d110, Func Offset: 0x30
	// Line 760, Address: 0x14d114, Func Offset: 0x34
	// Line 762, Address: 0x14d118, Func Offset: 0x38
	// Line 765, Address: 0x14d128, Func Offset: 0x48
	// Line 766, Address: 0x14d130, Func Offset: 0x50
	// Line 768, Address: 0x14d138, Func Offset: 0x58
	// Line 770, Address: 0x14d14c, Func Offset: 0x6c
	// Line 772, Address: 0x14d160, Func Offset: 0x80
	// Line 771, Address: 0x14d168, Func Offset: 0x88
	// Line 772, Address: 0x14d16c, Func Offset: 0x8c
	// Func End, Address: 0x14d188, Func Offset: 0xa8
}

