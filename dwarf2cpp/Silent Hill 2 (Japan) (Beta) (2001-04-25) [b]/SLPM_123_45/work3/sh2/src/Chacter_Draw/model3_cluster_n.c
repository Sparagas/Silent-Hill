typedef struct _anon0;
typedef union Q;
typedef struct _sceDmaTag;
typedef struct ClusterElement;
typedef struct _anon1;
typedef struct DefaultClusterNode;
typedef struct Model;
typedef struct Cluster;
typedef struct ModelWork;
typedef struct TextPosParam;
typedef struct ModelCommonWork;
typedef struct Model3Junk;
typedef struct _anon2;

typedef int(*type_27)(void*, void*, void*);

typedef unsigned int type_0[3];
typedef unsigned int type_1[3];
typedef unsigned int type_2[3];
typedef unsigned long type_3[2];
typedef float type_4[4];
typedef unsigned int type_5[4];
typedef unsigned int type_6[3];
typedef unsigned short type_7[8];
typedef unsigned char type_8[16];
typedef unsigned int type_9[3];
typedef long type_10[2];
typedef <unknown fundamental type (0xa510)> type_11[4];
typedef int type_12[4];
typedef unsigned int type_13[3];
typedef short type_14[8];
typedef unsigned int type_15[4];
typedef char type_16[16];
typedef unsigned int type_17[4];
typedef unsigned int type_18[3];
typedef int type_19[4];
typedef float type_20[4];
typedef float type_21[4][4];
typedef float type_22[4];
typedef float type_23[4][2];
typedef float type_24[4];
typedef float type_25[4][2];
typedef int type_26[4];
typedef float type_28[4][4][128];
typedef float type_29[4][4][256];
typedef float type_30[4][2048];
typedef TextPosParam type_31[64];
typedef unsigned int type_32[2];
typedef <unknown fundamental type (0xa510)> type_33[0];

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

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct ClusterElement
{
	short x;
	short y;
	short z;
	short index;
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

struct DefaultClusterNode
{
	short x;
	short y;
	short z;
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
// Start address: 0x130540
void LoadProgram()
{
	_anon1* pk;
	_anon1 packet;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 44, Address: 0x130540, Func Offset: 0
	// Line 47, Address: 0x130550, Func Offset: 0x10
	// Line 49, Address: 0x130560, Func Offset: 0x20
	// Line 50, Address: 0x130564, Func Offset: 0x24
	// Line 51, Address: 0x13058c, Func Offset: 0x4c
	// Line 52, Address: 0x1305a4, Func Offset: 0x64
	// Line 53, Address: 0x1305b4, Func Offset: 0x74
	// Line 54, Address: 0x1305c0, Func Offset: 0x80
	// Line 56, Address: 0x1305cc, Func Offset: 0x8c
	// Line 57, Address: 0x1305e0, Func Offset: 0xa0
	// Func End, Address: 0x1305f8, Func Offset: 0xb8
}

// 
// Start address: 0x130600
void MakeTransferDefaultClusterNodesPacket(<unknown fundamental type (0xa510)>* packet_buffer, DefaultClusterNode* nodes_top, int n_nodes)
{
	int qwc;
	_anon1* pk;
	_anon1 packet;
	// Line 65, Address: 0x130600, Func Offset: 0
	// Line 67, Address: 0x130624, Func Offset: 0x24
	// Line 68, Address: 0x130628, Func Offset: 0x28
	// Line 70, Address: 0x130644, Func Offset: 0x44
	// Line 71, Address: 0x130668, Func Offset: 0x68
	// Line 74, Address: 0x1306a4, Func Offset: 0xa4
	// Line 75, Address: 0x1306b4, Func Offset: 0xb4
	// Line 76, Address: 0x1306c4, Func Offset: 0xc4
	// Line 77, Address: 0x1306d4, Func Offset: 0xd4
	// Line 78, Address: 0x1306e0, Func Offset: 0xe0
	// Func End, Address: 0x130700, Func Offset: 0x100
}

// 
// Start address: 0x130700
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
	// Line 85, Address: 0x130700, Func Offset: 0
	// Line 86, Address: 0x130730, Func Offset: 0x30
	// Line 87, Address: 0x13073c, Func Offset: 0x3c
	// Line 88, Address: 0x130748, Func Offset: 0x48
	// Line 89, Address: 0x13075c, Func Offset: 0x5c
	// Line 91, Address: 0x130760, Func Offset: 0x60
	// Line 92, Address: 0x130768, Func Offset: 0x68
	// Line 93, Address: 0x130770, Func Offset: 0x70
	// Line 94, Address: 0x130794, Func Offset: 0x94
	// Line 98, Address: 0x1307b4, Func Offset: 0xb4
	// Line 99, Address: 0x1307c0, Func Offset: 0xc0
	// Line 100, Address: 0x1307e4, Func Offset: 0xe4
	// Line 101, Address: 0x1307f4, Func Offset: 0xf4
	// Line 106, Address: 0x1307fc, Func Offset: 0xfc
	// Line 107, Address: 0x13080c, Func Offset: 0x10c
	// Line 108, Address: 0x130810, Func Offset: 0x110
	// Line 110, Address: 0x130828, Func Offset: 0x128
	// Line 114, Address: 0x130848, Func Offset: 0x148
	// Line 117, Address: 0x130854, Func Offset: 0x154
	// Line 118, Address: 0x130864, Func Offset: 0x164
	// Line 119, Address: 0x130868, Func Offset: 0x168
	// Line 120, Address: 0x130884, Func Offset: 0x184
	// Line 121, Address: 0x130888, Func Offset: 0x188
	// Line 124, Address: 0x1308a8, Func Offset: 0x1a8
	// Line 125, Address: 0x1308ac, Func Offset: 0x1ac
	// Line 126, Address: 0x1308c0, Func Offset: 0x1c0
	// Func End, Address: 0x1308f4, Func Offset: 0x1f4
}

// 
// Start address: 0x130900
void MakeApplyClusterPacket(<unknown fundamental type (0xa510)>* packet_buffer, ClusterElement* top, int n, float weight)
{
	int qwc;
	_anon1* pk;
	_anon1 packet;
	// Line 133, Address: 0x130900, Func Offset: 0
	// Line 135, Address: 0x130930, Func Offset: 0x30
	// Line 136, Address: 0x130934, Func Offset: 0x34
	// Line 138, Address: 0x130948, Func Offset: 0x48
	// Line 139, Address: 0x13096c, Func Offset: 0x6c
	// Line 142, Address: 0x1309a4, Func Offset: 0xa4
	// Line 143, Address: 0x1309b4, Func Offset: 0xb4
	// Line 144, Address: 0x1309d4, Func Offset: 0xd4
	// Line 145, Address: 0x1309f8, Func Offset: 0xf8
	// Line 146, Address: 0x130a0c, Func Offset: 0x10c
	// Line 147, Address: 0x130a1c, Func Offset: 0x11c
	// Line 148, Address: 0x130a28, Func Offset: 0x128
	// Func End, Address: 0x130a50, Func Offset: 0x150
}

// 
// Start address: 0x130a50
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
	// Line 157, Address: 0x130a50, Func Offset: 0
	// Line 158, Address: 0x130a88, Func Offset: 0x38
	// Line 159, Address: 0x130a90, Func Offset: 0x40
	// Line 160, Address: 0x130a9c, Func Offset: 0x4c
	// Line 161, Address: 0x130ab0, Func Offset: 0x60
	// Line 163, Address: 0x130ab4, Func Offset: 0x64
	// Line 164, Address: 0x130abc, Func Offset: 0x6c
	// Line 165, Address: 0x130acc, Func Offset: 0x7c
	// Line 166, Address: 0x130afc, Func Offset: 0xac
	// Line 170, Address: 0x130b00, Func Offset: 0xb0
	// Line 171, Address: 0x130b0c, Func Offset: 0xbc
	// Line 172, Address: 0x130b30, Func Offset: 0xe0
	// Line 173, Address: 0x130b40, Func Offset: 0xf0
	// Line 178, Address: 0x130b48, Func Offset: 0xf8
	// Line 179, Address: 0x130b58, Func Offset: 0x108
	// Line 180, Address: 0x130b60, Func Offset: 0x110
	// Line 182, Address: 0x130b78, Func Offset: 0x128
	// Line 188, Address: 0x130b98, Func Offset: 0x148
	// Line 189, Address: 0x130b9c, Func Offset: 0x14c
	// Line 190, Address: 0x130ba8, Func Offset: 0x158
	// Line 192, Address: 0x130bbc, Func Offset: 0x16c
	// Line 193, Address: 0x130bc8, Func Offset: 0x178
	// Line 194, Address: 0x130bcc, Func Offset: 0x17c
	// Line 195, Address: 0x130bf4, Func Offset: 0x1a4
	// Line 196, Address: 0x130c08, Func Offset: 0x1b8
	// Line 199, Address: 0x130c1c, Func Offset: 0x1cc
	// Line 200, Address: 0x130c28, Func Offset: 0x1d8
	// Line 201, Address: 0x130c3c, Func Offset: 0x1ec
	// Func End, Address: 0x130c70, Func Offset: 0x220
}

// 
// Start address: 0x130c70
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
	// Line 208, Address: 0x130c70, Func Offset: 0
	// Line 209, Address: 0x130ca4, Func Offset: 0x34
	// Line 212, Address: 0x130cac, Func Offset: 0x3c
	// Line 217, Address: 0x130cb4, Func Offset: 0x44
	// Line 239, Address: 0x130cbc, Func Offset: 0x4c
	// Line 241, Address: 0x130cd0, Func Offset: 0x60
	// Line 244, Address: 0x130cd8, Func Offset: 0x68
	// Line 248, Address: 0x130ce4, Func Offset: 0x74
	// Line 249, Address: 0x130cf8, Func Offset: 0x88
	// Line 251, Address: 0x130d04, Func Offset: 0x94
	// Line 252, Address: 0x130d10, Func Offset: 0xa0
	// Line 253, Address: 0x130d28, Func Offset: 0xb8
	// Line 254, Address: 0x130d44, Func Offset: 0xd4
	// Line 255, Address: 0x130d50, Func Offset: 0xe0
	// Line 256, Address: 0x130d64, Func Offset: 0xf4
	// Line 257, Address: 0x130d68, Func Offset: 0xf8
	// Line 263, Address: 0x130d80, Func Offset: 0x110
	// Line 264, Address: 0x130d90, Func Offset: 0x120
	// Line 265, Address: 0x130d98, Func Offset: 0x128
	// Line 269, Address: 0x130dbc, Func Offset: 0x14c
	// Line 270, Address: 0x130dc8, Func Offset: 0x158
	// Line 271, Address: 0x130dd4, Func Offset: 0x164
	// Line 272, Address: 0x130de4, Func Offset: 0x174
	// Line 275, Address: 0x130df4, Func Offset: 0x184
	// Line 276, Address: 0x130df8, Func Offset: 0x188
	// Line 279, Address: 0x130e0c, Func Offset: 0x19c
	// Line 280, Address: 0x130e14, Func Offset: 0x1a4
	// Line 281, Address: 0x130e1c, Func Offset: 0x1ac
	// Line 282, Address: 0x130e2c, Func Offset: 0x1bc
	// Line 285, Address: 0x130e3c, Func Offset: 0x1cc
	// Line 286, Address: 0x130e40, Func Offset: 0x1d0
	// Line 290, Address: 0x130e60, Func Offset: 0x1f0
	// Line 291, Address: 0x130e74, Func Offset: 0x204
	// Func End, Address: 0x130ea8, Func Offset: 0x238
}

