typedef struct Model3Junk;
typedef struct ktScene;
typedef struct Model;
typedef struct ModelWork;
typedef struct ktLight;
typedef struct BoxData;
typedef union Q;
typedef struct _anon0;
typedef struct SkeletonPair;
typedef struct ModelCommonWork;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef union _anon4;

typedef int(*type_22)(void*, void*, void*);
typedef void(*type_27)(_anon0*, int, int, float*);

typedef float type_0[4][2];
typedef int type_1[4];
typedef _anon1 type_2[2];
typedef <unknown fundamental type (0xa510)> type_3[2];
typedef unsigned long type_4[2];
typedef float type_5[4];
typedef float type_6[4];
typedef unsigned int type_7[4];
typedef unsigned short type_8[8];
typedef unsigned long type_9[2];
typedef unsigned char type_10[16];
typedef float type_11[4];
typedef long type_12[2];
typedef int type_13[4];
typedef short type_14[8];
typedef unsigned long type_15[2];
typedef char type_16[16];
typedef unsigned long type_17[2];
typedef float type_18[4][4];
typedef float type_19[4];
typedef Q type_20[8];
typedef float type_21[4][2];
typedef float type_23[4];
typedef int type_24[4];
typedef float type_25[4];
typedef float type_26[4][2];
typedef float type_28[4][4][128];
typedef float type_29[4][4][256];
typedef float type_30[4][2048];
typedef _anon0 type_31[64];
typedef float type_32[4];
typedef float type_33[4][4];
typedef float type_34[4];
typedef float type_35[4][4];
typedef _anon1 type_36[4];
typedef <unknown fundamental type (0xa510)> type_37[4];
typedef float type_38[4];
typedef float type_39[4][2];
typedef float type_40[4];

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

struct ktScene
{
	_anon1 fog_col;
	int fog_near;
	int fog_far;
	float fog_a;
	float fog_b;
	unsigned char fog_pow;
	_anon1 ambi;
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
	_anon3 para_mat;
	_anon3 para_col;
	_anon3 vs;
	_anon3 vs0;
	_anon3 wv;
	_anon3 r_wv;
	_anon3 vw;
	_anon3 ws;
	_anon3 ws0;
	_anon3 vc;
	_anon3 cs;
	_anon3 vd;
	_anon3 vg;
	_anon4 vd24;
	_anon4 vg24;
	_anon4 vs24;
	_anon1 rev;
	char is_link_change;
	char is_para_change;
	char is_change;
	char is_rev;
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

struct ktLight
{
	ktLight* next;
	ktLight* link;
	float r;
	float g;
	float b;
	unsigned int type;
	_anon1 pos;
	_anon1 vec;
	float f_start;
	float f_end;
	float cone;
	float spread;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
};

struct BoxData
{
	Q pos[8];
};

union Q
{
	<unknown fundamental type (0xa510)> u128;
	unsigned long u64[2];
	unsigned int u32[4];
	unsigned short u16[8];
	unsigned char u8[16];
	long s64[2];
	int s32[4];
	short s16[8];
	char s8[16];
	int q[4];
	float fv[4];
	int iv[4];
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct SkeletonPair
{
	unsigned char parent_no;
	unsigned char child_no;
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon2
{
	ktScene current;
};

union _anon3
{
	float d[4][4];
	float i[4][4];
	_anon1 v[4];
	<unknown fundamental type (0xa510)> u128[4];
};

union _anon4
{
	float d[4][2];
	float i[4][2];
	_anon1 v[2];
	<unknown fundamental type (0xa510)> u128[2];
};

Model3Junk model3_junk;
ModelCommonWork* model_common_work;
_anon2 kt_scene_global_work;

void Model3Init();
void Model3UpdateMatrices(Model* model, ModelWork* work, float mwm[4]);
void Model3UpdateEnvelopeMatrices(Model* model);
void Model3UpdateLightEnv();
void Model3UpdateGlobalAmbient();
int Model3BoxClip(Model* model);
int Model3ExecDrawHook(Model* model, ModelWork* work);

// 
// Start address: 0x14dbf0
void Model3Init()
{
	int initialized;
	unsigned long giftag_2[2];
	unsigned long giftag_1[2];
	unsigned long giftag_0[2];
	float global_ambient[4];
	float rgba_max[4];
	float xyz_max[4];
	float xyz_min[4];
	float xyz_max_wide[4];
	float xyz_min_wide[4];
	// Line 44, Address: 0x14dbf0, Func Offset: 0
	// Line 47, Address: 0x14dbf4, Func Offset: 0x4
	// Line 44, Address: 0x14dbf8, Func Offset: 0x8
	// Line 47, Address: 0x14dbfc, Func Offset: 0xc
	// Line 74, Address: 0x14dc08, Func Offset: 0x18
	// Line 75, Address: 0x14dc18, Func Offset: 0x28
	// Line 76, Address: 0x14dc2c, Func Offset: 0x3c
	// Line 77, Address: 0x14dc40, Func Offset: 0x50
	// Line 78, Address: 0x14dc54, Func Offset: 0x64
	// Line 79, Address: 0x14dc68, Func Offset: 0x78
	// Line 80, Address: 0x14dc7c, Func Offset: 0x8c
	// Line 81, Address: 0x14dc90, Func Offset: 0xa0
	// Line 82, Address: 0x14dca4, Func Offset: 0xb4
	// Line 83, Address: 0x14dcb8, Func Offset: 0xc8
	// Line 85, Address: 0x14dcc4, Func Offset: 0xd4
	// Line 87, Address: 0x14dcd0, Func Offset: 0xe0
	// Line 88, Address: 0x14dcd8, Func Offset: 0xe8
	// Func End, Address: 0x14dce4, Func Offset: 0xf4
}

// 
// Start address: 0x14dcf0
void Model3UpdateMatrices(Model* model, ModelWork* work, float mwm[4])
{
	int n_skeletons;
	float matrices[4][4];
	float wvm[4][4];
	float mvm[4][4];
	int i;
	// Line 114, Address: 0x14dcf0, Func Offset: 0
	// Line 116, Address: 0x14dd0c, Func Offset: 0x1c
	// Line 115, Address: 0x14dd10, Func Offset: 0x20
	// Line 121, Address: 0x14dd14, Func Offset: 0x24
	// Line 122, Address: 0x14dd24, Func Offset: 0x34
	// Line 123, Address: 0x14dd34, Func Offset: 0x44
	// Line 125, Address: 0x14dd50, Func Offset: 0x60
	// Line 130, Address: 0x14dd54, Func Offset: 0x64
	// Line 126, Address: 0x14dd58, Func Offset: 0x68
	// Line 130, Address: 0x14dd5c, Func Offset: 0x6c
	// Line 127, Address: 0x14dd60, Func Offset: 0x70
	// Line 128, Address: 0x14dd64, Func Offset: 0x74
	// Line 125, Address: 0x14dd68, Func Offset: 0x78
	// Line 126, Address: 0x14dd6c, Func Offset: 0x7c
	// Line 127, Address: 0x14dd70, Func Offset: 0x80
	// Line 130, Address: 0x14dd74, Func Offset: 0x84
	// Line 133, Address: 0x14dd80, Func Offset: 0x90
	// Line 134, Address: 0x14dd98, Func Offset: 0xa8
	// Line 133, Address: 0x14dd9c, Func Offset: 0xac
	// Line 134, Address: 0x14dda0, Func Offset: 0xb0
	// Line 135, Address: 0x14ddb0, Func Offset: 0xc0
	// Func End, Address: 0x14ddcc, Func Offset: 0xdc
}

// 
// Start address: 0x14ddd0
void Model3UpdateEnvelopeMatrices(Model* model)
{
	int n_pairs;
	float default_pcms[4][4];
	float skeleton_matrices[4][4];
	SkeletonPair* pairs;
	float envelope_matrices[4][4];
	int i;
	// Line 173, Address: 0x14ddd0, Func Offset: 0
	// Line 175, Address: 0x14ddd4, Func Offset: 0x4
	// Line 173, Address: 0x14ddd8, Func Offset: 0x8
	// Line 175, Address: 0x14ddf4, Func Offset: 0x24
	// Line 181, Address: 0x14ddf8, Func Offset: 0x28
	// Line 174, Address: 0x14ddfc, Func Offset: 0x2c
	// Line 175, Address: 0x14de00, Func Offset: 0x30
	// Line 177, Address: 0x14de04, Func Offset: 0x34
	// Line 178, Address: 0x14de08, Func Offset: 0x38
	// Line 181, Address: 0x14de0c, Func Offset: 0x3c
	// Line 175, Address: 0x14de10, Func Offset: 0x40
	// Line 181, Address: 0x14de14, Func Offset: 0x44
	// Line 188, Address: 0x14de20, Func Offset: 0x50
	// Line 189, Address: 0x14de38, Func Offset: 0x68
	// Line 188, Address: 0x14de3c, Func Offset: 0x6c
	// Line 189, Address: 0x14de40, Func Offset: 0x70
	// Line 188, Address: 0x14de44, Func Offset: 0x74
	// Line 189, Address: 0x14de48, Func Offset: 0x78
	// Line 190, Address: 0x14de50, Func Offset: 0x80
	// Func End, Address: 0x14de74, Func Offset: 0xa4
}

// 
// Start address: 0x14de80
void Model3UpdateLightEnv()
{
	float wpos[4];
	float radius;
	float base[4];
	// Line 198, Address: 0x14de80, Func Offset: 0
	// Line 205, Address: 0x14de84, Func Offset: 0x4
	// Line 198, Address: 0x14de88, Func Offset: 0x8
	// Line 205, Address: 0x14de8c, Func Offset: 0xc
	// Line 206, Address: 0x14dea8, Func Offset: 0x28
	// Line 208, Address: 0x14debc, Func Offset: 0x3c
	// Line 209, Address: 0x14decc, Func Offset: 0x4c
	// Func End, Address: 0x14ded8, Func Offset: 0x58
}

// 
// Start address: 0x14dee0
void Model3UpdateGlobalAmbient()
{
	// Line 219, Address: 0x14dee0, Func Offset: 0
	// Line 234, Address: 0x14def4, Func Offset: 0x14
	// Line 219, Address: 0x14defc, Func Offset: 0x1c
	// Line 235, Address: 0x14df00, Func Offset: 0x20
	// Func End, Address: 0x14df08, Func Offset: 0x28
}

// 
// Start address: 0x14df10
int Model3BoxClip(Model* model)
{
	BoxData* box;
	float lvm[4];
	float vcp[4];
	float vcp_gs[4];
	unsigned int fc_and;
	unsigned int fc_or;
	int i;
	float* lpos;
	unsigned int fc;
	// Line 300, Address: 0x14df10, Func Offset: 0
	// Line 304, Address: 0x14df14, Func Offset: 0x4
	// Line 305, Address: 0x14df18, Func Offset: 0x8
	// Line 304, Address: 0x14df1c, Func Offset: 0xc
	// Line 305, Address: 0x14df20, Func Offset: 0x10
	// Line 307, Address: 0x14df28, Func Offset: 0x18
	// Line 306, Address: 0x14df30, Func Offset: 0x20
	// Line 309, Address: 0x14df38, Func Offset: 0x28
	// Line 310, Address: 0x14df44, Func Offset: 0x34
	// Line 311, Address: 0x14df4c, Func Offset: 0x3c
	// Line 313, Address: 0x14df50, Func Offset: 0x40
	// Line 314, Address: 0x14df5c, Func Offset: 0x4c
	// Line 315, Address: 0x14df64, Func Offset: 0x54
	// Line 318, Address: 0x14df68, Func Offset: 0x58
	// Line 321, Address: 0x14df70, Func Offset: 0x60
	// Line 322, Address: 0x14df74, Func Offset: 0x64
	// Line 319, Address: 0x14df78, Func Offset: 0x68
	// Line 320, Address: 0x14df80, Func Offset: 0x70
	// Line 327, Address: 0x14df88, Func Offset: 0x78
	// Line 328, Address: 0x14df8c, Func Offset: 0x7c
	// Line 329, Address: 0x14df90, Func Offset: 0x80
	// Line 330, Address: 0x14df94, Func Offset: 0x84
	// Line 331, Address: 0x14df98, Func Offset: 0x88
	// Line 332, Address: 0x14df9c, Func Offset: 0x8c
	// Line 333, Address: 0x14dfa0, Func Offset: 0x90
	// Line 334, Address: 0x14dfa4, Func Offset: 0x94
	// Line 336, Address: 0x14dfa8, Func Offset: 0x98
	// Line 337, Address: 0x14dfb0, Func Offset: 0xa0
	// Line 340, Address: 0x14dfb8, Func Offset: 0xa8
	// Line 341, Address: 0x14dfbc, Func Offset: 0xac
	// Line 342, Address: 0x14dfc0, Func Offset: 0xb0
	// Line 343, Address: 0x14dfc4, Func Offset: 0xb4
	// Line 344, Address: 0x14dfc8, Func Offset: 0xb8
	// Line 345, Address: 0x14dfcc, Func Offset: 0xbc
	// Line 346, Address: 0x14dfd0, Func Offset: 0xc0
	// Line 347, Address: 0x14dfd4, Func Offset: 0xc4
	// Line 348, Address: 0x14dfd8, Func Offset: 0xc8
	// Line 349, Address: 0x14dfdc, Func Offset: 0xcc
	// Line 350, Address: 0x14dfe0, Func Offset: 0xd0
	// Line 351, Address: 0x14dfe4, Func Offset: 0xd4
	// Line 352, Address: 0x14dfe8, Func Offset: 0xd8
	// Line 353, Address: 0x14dfec, Func Offset: 0xdc
	// Line 354, Address: 0x14dff0, Func Offset: 0xe0
	// Line 355, Address: 0x14dff4, Func Offset: 0xe4
	// Line 356, Address: 0x14dff8, Func Offset: 0xe8
	// Line 361, Address: 0x14dffc, Func Offset: 0xec
	// Line 359, Address: 0x14e000, Func Offset: 0xf0
	// Line 360, Address: 0x14e004, Func Offset: 0xf4
	// Line 361, Address: 0x14e008, Func Offset: 0xf8
	// Line 362, Address: 0x14e014, Func Offset: 0x104
	// Line 364, Address: 0x14e01c, Func Offset: 0x10c
	// Line 362, Address: 0x14e020, Func Offset: 0x110
	// Line 364, Address: 0x14e024, Func Offset: 0x114
	// Line 363, Address: 0x14e030, Func Offset: 0x120
	// Line 365, Address: 0x14e03c, Func Offset: 0x12c
	// Line 370, Address: 0x14e040, Func Offset: 0x130
	// Line 365, Address: 0x14e044, Func Offset: 0x134
	// Line 370, Address: 0x14e048, Func Offset: 0x138
	// Line 365, Address: 0x14e04c, Func Offset: 0x13c
	// Line 370, Address: 0x14e050, Func Offset: 0x140
	// Line 371, Address: 0x14e058, Func Offset: 0x148
	// Line 375, Address: 0x14e060, Func Offset: 0x150
	// Line 376, Address: 0x14e068, Func Offset: 0x158
	// Func End, Address: 0x14e070, Func Offset: 0x160
}

// 
// Start address: 0x14e070
int Model3ExecDrawHook(Model* model, ModelWork* work)
{
	// Line 383, Address: 0x14e070, Func Offset: 0
	// Line 385, Address: 0x14e07c, Func Offset: 0xc
	// Line 388, Address: 0x14e098, Func Offset: 0x28
	// Func End, Address: 0x14e0a4, Func Offset: 0x34
}

