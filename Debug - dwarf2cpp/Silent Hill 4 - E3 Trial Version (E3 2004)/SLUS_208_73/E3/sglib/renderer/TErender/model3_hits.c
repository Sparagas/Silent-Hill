typedef struct _anon0;
typedef struct Model3HitEntryData;
typedef struct Model3HitAabb0;
typedef struct Model3HitEntry;
typedef struct Model3HitObb;
typedef struct ModelCommonWork;
typedef struct Model;
typedef struct Model3Junk;
typedef union Q;
typedef struct Model3HitCylinder;
typedef struct Model3HitSphere;
typedef struct _anon1;
typedef struct Model3HitAabb1;
typedef struct ModelWork;

typedef void(*type_37)(float[4], float[4], void*);
typedef int(*type_47)(void*, void*, void*);
typedef void(*type_53)(_anon1*, int, int, float*);
typedef void(*type_54)(float[4], float[4], void*);

typedef float type_0[4][4][256];
typedef int type_1[4];
typedef float type_2[4][2048];
typedef float type_3[4];
typedef Model3HitEntryData type_4[0];
typedef _anon1 type_5[64];
typedef float type_6[4][8];
typedef Q type_7[8];
typedef float type_8[4];
typedef int type_9[4][8];
typedef unsigned long type_10[2];
typedef unsigned long type_11[2];
typedef unsigned long type_12[2];
typedef unsigned long type_13[2];
typedef unsigned long type_14[2];
typedef unsigned long type_15[2];
typedef <unknown fundamental type (0xa510)> type_16[64];
typedef <unknown fundamental type (0xa510)> type_17[64];
typedef unsigned long type_18[2];
typedef int type_19[2];
typedef int type_20[2][12];
typedef float type_21[9];
typedef unsigned long type_22[2];
typedef float type_23[4];
typedef <unknown fundamental type (0xa510)> type_24[64];
typedef Q type_25[9];
typedef unsigned int type_26[4];
typedef float type_27[9];
typedef int type_28[4];
typedef Q type_29[9][2];
typedef unsigned short type_30[8];
typedef unsigned char type_31[16];
typedef long type_32[2];
typedef float type_33[4][4];
typedef int type_34[4];
typedef short type_35[8];
typedef char type_36[16];
typedef unsigned long type_38[2];
typedef Q type_39[8];
typedef unsigned long type_40[2];
typedef unsigned long type_41[2];
typedef unsigned long type_42[2];
typedef float type_43[4];
typedef int type_44[2];
typedef float type_45[4][2];
typedef int type_46[2][12];
typedef int type_48[2];
typedef int type_49[2][12];
typedef float type_50[4];
typedef float type_51[4][2];
typedef <unknown fundamental type (0xa510)> type_52[64];
typedef void(*type_55)(float[4], float[4], void*)[6];
typedef <unknown fundamental type (0xa510)> type_56[64];
typedef float type_57[4][4][128];

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned long* pGifTag;
};

struct Model3HitEntryData
{
	unsigned short kind;
	unsigned short id;
	unsigned short offset;
};

struct Model3HitAabb0
{
	float min_x;
	float min_y;
	float min_z;
	float d0;
	float max_x;
	float max_y;
	float max_z;
	float d1;
};

struct Model3HitEntry
{
	unsigned short n_data;
	Model3HitEntryData data[0];
};

struct Model3HitObb
{
	float m00;
	float m10;
	float m20;
	float sx;
	float m01;
	float m11;
	float m21;
	float sy;
	float m02;
	float m12;
	float m22;
	float sz;
	float m03;
	float m13;
	float m23;
	float d0;
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

struct Model3HitCylinder
{
	float bx;
	float by;
	float bz;
	float radius;
	float dx;
	float dy;
	float dz;
	float length;
};

struct Model3HitSphere
{
	float cx;
	float cy;
	float cz;
	float radius;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct Model3HitAabb1
{
	float min_x;
	float min_y;
	float min_z;
	float d0;
	float max_x;
	float max_y;
	float max_z;
	float d1;
	float cx;
	float cy;
	float cz;
	float d2;
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

Model3Junk model3_junk;
float unit_fvector_x[4];
float unit_fvector_z[4];
float unit_fvector_w[4];
void(*func_list)(float[4], float[4], void*)[6];
ModelCommonWork* model_common_work;

void* Model3SkeletonHitEntry(void* model_, int skeleton_no);
int Model3HitEntryNData(void* entry_);
int Model3HitEntryNthKind(void* entry_, int n);
int Model3HitEntryNthId(void* entry_, int n);
void* Model3HitEntryNthBody(void* entry_, int n);

// 
// Start address: 0x14dae0
void* Model3SkeletonHitEntry(void* model_, int skeleton_no)
{
	Model* model;
	unsigned int* hits;
	// Line 46, Address: 0x14dae0, Func Offset: 0
	// Line 50, Address: 0x14dae4, Func Offset: 0x4
	// Line 51, Address: 0x14daec, Func Offset: 0xc
	// Line 52, Address: 0x14daf4, Func Offset: 0x14
	// Line 54, Address: 0x14daf8, Func Offset: 0x18
	// Line 55, Address: 0x14db08, Func Offset: 0x28
	// Line 58, Address: 0x14db10, Func Offset: 0x30
	// Line 60, Address: 0x14db20, Func Offset: 0x40
	// Line 64, Address: 0x14db38, Func Offset: 0x58
	// Func End, Address: 0x14db40, Func Offset: 0x60
}

// 
// Start address: 0x14db40
int Model3HitEntryNData(void* entry_)
{
	Model3HitEntry* entry;
	// Line 73, Address: 0x14db40, Func Offset: 0
	// Line 74, Address: 0x14db4c, Func Offset: 0xc
	// Func End, Address: 0x14db54, Func Offset: 0x14
}

// 
// Start address: 0x14db60
int Model3HitEntryNthKind(void* entry_, int n)
{
	Model3HitEntry* entry;
	// Line 85, Address: 0x14db60, Func Offset: 0
	// Line 88, Address: 0x14db84, Func Offset: 0x24
	// Func End, Address: 0x14db8c, Func Offset: 0x2c
}

// 
// Start address: 0x14db90
int Model3HitEntryNthId(void* entry_, int n)
{
	Model3HitEntry* entry;
	// Line 99, Address: 0x14db90, Func Offset: 0
	// Line 102, Address: 0x14dbb4, Func Offset: 0x24
	// Func End, Address: 0x14dbbc, Func Offset: 0x2c
}

// 
// Start address: 0x14dbc0
void* Model3HitEntryNthBody(void* entry_, int n)
{
	Model3HitEntry* entry;
	// Line 113, Address: 0x14dbc0, Func Offset: 0
	// Line 116, Address: 0x14dbe8, Func Offset: 0x28
	// Func End, Address: 0x14dbf0, Func Offset: 0x30
}

