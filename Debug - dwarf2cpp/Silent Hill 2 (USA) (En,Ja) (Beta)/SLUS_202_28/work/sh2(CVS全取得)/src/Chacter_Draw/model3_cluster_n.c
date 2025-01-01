typedef struct Model3Junk;
typedef struct _anon0;
typedef struct Model;
typedef struct Cluster;
typedef struct ClusterElement;
typedef union Q;
typedef struct DefaultClusterNode;
typedef struct _anon1;
typedef struct ModelWork;
typedef struct TextPosParam;
typedef struct _sceDmaTag;
typedef struct _anon2;
typedef struct ModelCommonWork;

typedef int(*type_21)(void*, void*, void*);

typedef unsigned int type_0[3];
typedef float type_1[4];
typedef <unknown fundamental type (0xa510)> type_2[0];
typedef unsigned long type_3[2];
typedef unsigned int type_4[4];
typedef unsigned short type_5[8];
typedef unsigned char type_6[16];
typedef long type_7[2];
typedef int type_8[4];
typedef <unknown fundamental type (0xa510)> type_9[4];
typedef int type_10[4];
typedef short type_11[8];
typedef char type_12[16];
typedef int type_13[4];
typedef float type_14[4];
typedef float type_15[4][4];
typedef float type_16[4];
typedef float type_17[4][2];
typedef unsigned int type_18[2];
typedef float type_19[4];
typedef float type_20[4][2];
typedef float type_22[4][4][128];
typedef float type_23[4][4][256];
typedef float type_24[4][2048];
typedef unsigned int type_25[3];
typedef unsigned int type_26[3];
typedef TextPosParam type_27[64];
typedef unsigned int type_28[3];
typedef unsigned int type_29[3];
typedef unsigned int type_30[3];
typedef unsigned int type_31[3];
typedef unsigned int type_32[4];
typedef unsigned int type_33[4];

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

struct _anon0
{
	_anon2 chcr;
	unsigned int p0[3];
	void* madr;
	unsigned int p1[3];
	unsigned int qwc;
	unsigned int p2[3];
	_sceDmaTag* tadr;
	unsigned int p3[3];
	void* as0;
	unsigned int p4[3];
	void* as1;
	unsigned int p5[3];
	unsigned int p6[4];
	unsigned int p7[4];
	void* sadr;
	unsigned int p8[3];
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
	unsigned int reserved_1c;
	unsigned int reserved_1d;
	unsigned int reserved_1e;
	unsigned int reserved_1f;
};

struct Cluster
{
	unsigned int n_nodes;
	unsigned int element_offset;
};

struct ClusterElement
{
	short x;
	short y;
	short z;
	short index;
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

struct DefaultClusterNode
{
	short x;
	short y;
	short z;
};

struct _anon1
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned int pad11;
	unsigned int pad12;
	unsigned int pad13;
};

struct ModelWork
{
	unsigned int id;
	float relatives[4][4];
	float matrices[4][4];
	float* cluster_weights;
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
};

struct TextPosParam
{
	unsigned long tex0;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct _anon2
{
	struct
	{
		unsigned int DIR : 1;
		unsigned int p0 : 1;
		unsigned int MOD : 2;
		unsigned int ASP : 2;
		unsigned int TTE : 1;
		unsigned int TIE : 1;
		unsigned int STR : 1;
		unsigned int p1 : 7;
		unsigned int TAG : 16;
	};
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
	TextPosParam text_pos_params[64];
	unsigned long specular_mapping_tex0;
	unsigned long latitude_mapping_tex0;
};

<unknown fundamental type (0xa510)> model3_mpg0_cluster_load[0];
Model3Junk model3_junk;
ModelCommonWork* model_common_work;

void LoadProgram();
void MakeTransferDefaultClusterNodesPacket(<unknown fundamental type (0xa510)>* packet_buffer, DefaultClusterNode* nodes_top, int n_nodes);
void TransferDefaultClusterNodes(Model* model);
void MakeApplyClusterPacket(<unknown fundamental type (0xa510)>* packet_buffer, ClusterElement* top, int n, float weight);
void ApplyCluster(Model* model, Cluster* cluster, float weight);
void Model3UpdateClusters(Model* model, ModelWork* work);

// 
// Start address: 0x127880
void LoadProgram()
{
	_anon1* pk;
	_anon1 packet;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 44, Address: 0x127880, Func Offset: 0
	// Line 47, Address: 0x127888, Func Offset: 0x8
	// Line 50, Address: 0x127898, Func Offset: 0x18
	// Line 51, Address: 0x1278bc, Func Offset: 0x3c
	// Line 52, Address: 0x1278d4, Func Offset: 0x54
	// Line 53, Address: 0x1278e4, Func Offset: 0x64
	// Line 54, Address: 0x1278f0, Func Offset: 0x70
	// Line 56, Address: 0x1278fc, Func Offset: 0x7c
	// Line 57, Address: 0x127910, Func Offset: 0x90
	// Func End, Address: 0x127920, Func Offset: 0xa0
}

// 
// Start address: 0x127920
void MakeTransferDefaultClusterNodesPacket(<unknown fundamental type (0xa510)>* packet_buffer, DefaultClusterNode* nodes_top, int n_nodes)
{
	int qwc;
	_anon1* pk;
	_anon1 packet;
	// Line 65, Address: 0x127920, Func Offset: 0
	// Line 68, Address: 0x12793c, Func Offset: 0x1c
	// Line 70, Address: 0x127950, Func Offset: 0x30
	// Line 71, Address: 0x12796c, Func Offset: 0x4c
	// Line 74, Address: 0x1279a0, Func Offset: 0x80
	// Line 75, Address: 0x1279b0, Func Offset: 0x90
	// Line 76, Address: 0x1279c0, Func Offset: 0xa0
	// Line 77, Address: 0x1279d0, Func Offset: 0xb0
	// Line 78, Address: 0x1279dc, Func Offset: 0xbc
	// Func End, Address: 0x1279f8, Func Offset: 0xd8
}

// 
// Start address: 0x127a00
void TransferDefaultClusterNodes(Model* model)
{
	_anon0* fromSPR;
	_anon0* toSPR;
	<unknown fundamental type (0xa510)>* packet_buffer;
	int sadr;
	int n_nodes;
	int n_rest_nodes;
	int i;
	DefaultClusterNode* default_cluster_nodes;
	float cluster_nodes[4];
	int n_cluster_nodes;
	// Line 85, Address: 0x127a00, Func Offset: 0
	// Line 86, Address: 0x127a24, Func Offset: 0x24
	// Line 87, Address: 0x127a28, Func Offset: 0x28
	// Line 88, Address: 0x127a30, Func Offset: 0x30
	// Line 89, Address: 0x127a38, Func Offset: 0x38
	// Line 91, Address: 0x127a3c, Func Offset: 0x3c
	// Line 92, Address: 0x127a44, Func Offset: 0x44
	// Line 93, Address: 0x127a48, Func Offset: 0x48
	// Line 94, Address: 0x127a60, Func Offset: 0x60
	// Line 98, Address: 0x127a70, Func Offset: 0x70
	// Line 99, Address: 0x127a7c, Func Offset: 0x7c
	// Line 100, Address: 0x127a9c, Func Offset: 0x9c
	// Line 101, Address: 0x127aac, Func Offset: 0xac
	// Line 106, Address: 0x127ab4, Func Offset: 0xb4
	// Line 107, Address: 0x127ac4, Func Offset: 0xc4
	// Line 108, Address: 0x127ac8, Func Offset: 0xc8
	// Line 110, Address: 0x127ae0, Func Offset: 0xe0
	// Line 114, Address: 0x127b00, Func Offset: 0x100
	// Line 117, Address: 0x127b0c, Func Offset: 0x10c
	// Line 118, Address: 0x127b1c, Func Offset: 0x11c
	// Line 119, Address: 0x127b20, Func Offset: 0x120
	// Line 121, Address: 0x127b38, Func Offset: 0x138
	// Line 124, Address: 0x127b58, Func Offset: 0x158
	// Line 125, Address: 0x127b5c, Func Offset: 0x15c
	// Line 126, Address: 0x127b6c, Func Offset: 0x16c
	// Func End, Address: 0x127b98, Func Offset: 0x198
}

// 
// Start address: 0x127ba0
void MakeApplyClusterPacket(<unknown fundamental type (0xa510)>* packet_buffer, ClusterElement* top, int n, float weight)
{
	int qwc;
	_anon1* pk;
	_anon1 packet;
	// Line 133, Address: 0x127ba0, Func Offset: 0
	// Line 136, Address: 0x127bc4, Func Offset: 0x24
	// Line 138, Address: 0x127bd0, Func Offset: 0x30
	// Line 139, Address: 0x127bec, Func Offset: 0x4c
	// Line 142, Address: 0x127c1c, Func Offset: 0x7c
	// Line 143, Address: 0x127c2c, Func Offset: 0x8c
	// Line 144, Address: 0x127c40, Func Offset: 0xa0
	// Line 145, Address: 0x127c58, Func Offset: 0xb8
	// Line 146, Address: 0x127c6c, Func Offset: 0xcc
	// Line 147, Address: 0x127c7c, Func Offset: 0xdc
	// Line 148, Address: 0x127c88, Func Offset: 0xe8
	// Func End, Address: 0x127ca8, Func Offset: 0x108
}

// 
// Start address: 0x127cb0
void ApplyCluster(Model* model, Cluster* cluster, float weight)
{
	float* v;
	int index;
	Q* p;
	Q* end;
	Q* top;
	float spr[4];
	_anon0* toSPR;
	<unknown fundamental type (0xa510)>* packet_buffer;
	int itop;
	int n;
	int n_rest_nodes;
	int i;
	ClusterElement* elements;
	int n_nodes;
	float cluster_nodes[4];
	// Line 157, Address: 0x127cb0, Func Offset: 0
	// Line 158, Address: 0x127cdc, Func Offset: 0x2c
	// Line 159, Address: 0x127ce4, Func Offset: 0x34
	// Line 160, Address: 0x127ce8, Func Offset: 0x38
	// Line 161, Address: 0x127cf0, Func Offset: 0x40
	// Line 163, Address: 0x127cf4, Func Offset: 0x44
	// Line 164, Address: 0x127cfc, Func Offset: 0x4c
	// Line 165, Address: 0x127d00, Func Offset: 0x50
	// Line 170, Address: 0x127d18, Func Offset: 0x68
	// Line 171, Address: 0x127d24, Func Offset: 0x74
	// Line 172, Address: 0x127d40, Func Offset: 0x90
	// Line 173, Address: 0x127d50, Func Offset: 0xa0
	// Line 178, Address: 0x127d58, Func Offset: 0xa8
	// Line 179, Address: 0x127d68, Func Offset: 0xb8
	// Line 180, Address: 0x127d70, Func Offset: 0xc0
	// Line 182, Address: 0x127d88, Func Offset: 0xd8
	// Line 190, Address: 0x127da8, Func Offset: 0xf8
	// Line 192, Address: 0x127db8, Func Offset: 0x108
	// Line 193, Address: 0x127dc0, Func Offset: 0x110
	// Line 194, Address: 0x127dc4, Func Offset: 0x114
	// Line 195, Address: 0x127df0, Func Offset: 0x140
	// Line 196, Address: 0x127e00, Func Offset: 0x150
	// Line 199, Address: 0x127e14, Func Offset: 0x164
	// Line 200, Address: 0x127e18, Func Offset: 0x168
	// Line 201, Address: 0x127e24, Func Offset: 0x174
	// Func End, Address: 0x127e54, Func Offset: 0x1a4
}

// 
// Start address: 0x127e60
void Model3UpdateClusters(Model* model, ModelWork* work)
{
	void* p;
	void* p;
	int i;
	int n;
	float spr[4];
	_anon0* fromSPR;
	Cluster* cluster;
	float weight;
	int i;
	int n_clusters;
	Cluster* clusters;
	float cluster_nodes[4];
	int n_cluster_nodes;
	// Line 208, Address: 0x127e60, Func Offset: 0
	// Line 209, Address: 0x127e8c, Func Offset: 0x2c
	// Line 212, Address: 0x127e90, Func Offset: 0x30
	// Line 217, Address: 0x127e98, Func Offset: 0x38
	// Line 239, Address: 0x127ea0, Func Offset: 0x40
	// Line 241, Address: 0x127eb4, Func Offset: 0x54
	// Line 244, Address: 0x127ebc, Func Offset: 0x5c
	// Line 248, Address: 0x127ec8, Func Offset: 0x68
	// Line 249, Address: 0x127ed0, Func Offset: 0x70
	// Line 251, Address: 0x127ed4, Func Offset: 0x74
	// Line 252, Address: 0x127ee0, Func Offset: 0x80
	// Line 253, Address: 0x127ef0, Func Offset: 0x90
	// Line 254, Address: 0x127f08, Func Offset: 0xa8
	// Line 255, Address: 0x127f10, Func Offset: 0xb0
	// Line 256, Address: 0x127f1c, Func Offset: 0xbc
	// Line 257, Address: 0x127f20, Func Offset: 0xc0
	// Line 263, Address: 0x127f34, Func Offset: 0xd4
	// Line 265, Address: 0x127f44, Func Offset: 0xe4
	// Line 269, Address: 0x127f50, Func Offset: 0xf0
	// Line 270, Address: 0x127f5c, Func Offset: 0xfc
	// Line 271, Address: 0x127f68, Func Offset: 0x108
	// Line 272, Address: 0x127f74, Func Offset: 0x114
	// Line 275, Address: 0x127f84, Func Offset: 0x124
	// Line 276, Address: 0x127f88, Func Offset: 0x128
	// Line 279, Address: 0x127f9c, Func Offset: 0x13c
	// Line 280, Address: 0x127fa4, Func Offset: 0x144
	// Line 281, Address: 0x127fac, Func Offset: 0x14c
	// Line 282, Address: 0x127fb8, Func Offset: 0x158
	// Line 285, Address: 0x127fcc, Func Offset: 0x16c
	// Line 286, Address: 0x127fd0, Func Offset: 0x170
	// Line 290, Address: 0x127ff0, Func Offset: 0x190
	// Line 291, Address: 0x128004, Func Offset: 0x1a4
	// Func End, Address: 0x128030, Func Offset: 0x1d0
}

