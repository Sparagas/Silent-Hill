typedef struct _anon0;
typedef struct _sceDmaTag;
typedef struct _anon1;
typedef struct _anon2;
typedef struct Cluster;
typedef struct Model;
typedef union Q;
typedef struct ClusterElement;
typedef struct Model3Junk;
typedef struct _anon3;
typedef struct DefaultClusterNode;
typedef struct ModelWork;

typedef int(*type_6)(void*, void*, void*);
typedef void(*type_10)(_anon1*, int, int, float*);

typedef unsigned int type_0[3];
typedef float type_1[4][4];
typedef int type_2[4];
typedef unsigned int type_3[3];
typedef float type_4[4];
typedef unsigned int type_5[3];
typedef unsigned int type_7[3];
typedef unsigned int type_8[3];
typedef unsigned int type_9[3];
typedef unsigned int type_11[4];
typedef unsigned int type_12[4];
typedef unsigned int type_13[3];
typedef <unknown fundamental type (0xa510)> type_14[0];
typedef unsigned long type_15[2];
typedef unsigned int type_16[4];
typedef unsigned short type_17[8];
typedef unsigned char type_18[16];
typedef int type_19[4];
typedef long type_20[2];
typedef int type_21[4];
typedef short type_22[8];
typedef float type_23[4];
typedef char type_24[16];
typedef unsigned int type_25[2];
typedef <unknown fundamental type (0xa510)> type_26[4];

struct _anon0
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

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon2
{
	_anon0 chcr;
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

struct Cluster
{
	unsigned int n_nodes;
	unsigned int element_offset;
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

struct ClusterElement
{
	short x;
	short y;
	short z;
	short index;
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

struct _anon3
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

<unknown fundamental type (0xa510)> model3_mpg0_cluster_load[0];
Model3Junk model3_junk;

void LoadProgram();
void MakeTransferDefaultClusterNodesPacket(<unknown fundamental type (0xa510)>* packet_buffer, DefaultClusterNode* nodes_top, int n_nodes);
void TransferDefaultClusterNodes(Model* model);
void MakeApplyClusterPacket(<unknown fundamental type (0xa510)>* packet_buffer, ClusterElement* top, int n, float weight);
void ApplyCluster(Model* model, Cluster* cluster, float weight);
void Model3UpdateClusters(Model* model, ModelWork* work);

// 
// Start address: 0x14d190
void LoadProgram()
{
	_anon3 packet;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 39, Address: 0x14d190, Func Offset: 0
	// Line 42, Address: 0x14d194, Func Offset: 0x4
	// Line 39, Address: 0x14d198, Func Offset: 0x8
	// Line 42, Address: 0x14d19c, Func Offset: 0xc
	// Line 45, Address: 0x14d1a8, Func Offset: 0x18
	// Line 46, Address: 0x14d1c4, Func Offset: 0x34
	// Line 47, Address: 0x14d1d8, Func Offset: 0x48
	// Line 52, Address: 0x14d1e4, Func Offset: 0x54
	// Line 53, Address: 0x14d1f4, Func Offset: 0x64
	// Line 54, Address: 0x14d1fc, Func Offset: 0x6c
	// Line 56, Address: 0x14d208, Func Offset: 0x78
	// Line 57, Address: 0x14d218, Func Offset: 0x88
	// Func End, Address: 0x14d224, Func Offset: 0x94
}

// 
// Start address: 0x14d230
void MakeTransferDefaultClusterNodesPacket(<unknown fundamental type (0xa510)>* packet_buffer, DefaultClusterNode* nodes_top, int n_nodes)
{
	_anon3 packet;
	// Line 65, Address: 0x14d230, Func Offset: 0
	// Line 70, Address: 0x14d234, Func Offset: 0x4
	// Line 65, Address: 0x14d238, Func Offset: 0x8
	// Line 70, Address: 0x14d23c, Func Offset: 0xc
	// Line 65, Address: 0x14d240, Func Offset: 0x10
	// Line 70, Address: 0x14d244, Func Offset: 0x14
	// Line 65, Address: 0x14d248, Func Offset: 0x18
	// Line 70, Address: 0x14d254, Func Offset: 0x24
	// Line 71, Address: 0x14d260, Func Offset: 0x30
	// Line 74, Address: 0x14d2a0, Func Offset: 0x70
	// Line 75, Address: 0x14d2ac, Func Offset: 0x7c
	// Line 76, Address: 0x14d2b8, Func Offset: 0x88
	// Line 77, Address: 0x14d2c4, Func Offset: 0x94
	// Line 78, Address: 0x14d2cc, Func Offset: 0x9c
	// Func End, Address: 0x14d2e0, Func Offset: 0xb0
}

// 
// Start address: 0x14d2e0
void TransferDefaultClusterNodes(Model* model)
{
	int n_cluster_nodes;
	float cluster_nodes[4];
	DefaultClusterNode* default_cluster_nodes;
	int i;
	int n_rest_nodes;
	int sadr;
	<unknown fundamental type (0xa510)>* packet_buffer;
	_anon2* toSPR;
	_anon2* fromSPR;
	// Line 85, Address: 0x14d2e0, Func Offset: 0
	// Line 87, Address: 0x14d2e4, Func Offset: 0x4
	// Line 85, Address: 0x14d2e8, Func Offset: 0x8
	// Line 89, Address: 0x14d304, Func Offset: 0x24
	// Line 85, Address: 0x14d308, Func Offset: 0x28
	// Line 86, Address: 0x14d30c, Func Offset: 0x2c
	// Line 87, Address: 0x14d310, Func Offset: 0x30
	// Line 88, Address: 0x14d314, Func Offset: 0x34
	// Line 91, Address: 0x14d318, Func Offset: 0x38
	// Line 92, Address: 0x14d328, Func Offset: 0x48
	// Line 93, Address: 0x14d32c, Func Offset: 0x4c
	// Line 94, Address: 0x14d344, Func Offset: 0x64
	// Line 98, Address: 0x14d358, Func Offset: 0x78
	// Line 99, Address: 0x14d364, Func Offset: 0x84
	// Line 100, Address: 0x14d380, Func Offset: 0xa0
	// Line 101, Address: 0x14d38c, Func Offset: 0xac
	// Line 106, Address: 0x14d394, Func Offset: 0xb4
	// Line 107, Address: 0x14d3a0, Func Offset: 0xc0
	// Line 108, Address: 0x14d3a4, Func Offset: 0xc4
	// Line 110, Address: 0x14d3b8, Func Offset: 0xd8
	// Line 114, Address: 0x14d3d4, Func Offset: 0xf4
	// Line 117, Address: 0x14d3e0, Func Offset: 0x100
	// Line 118, Address: 0x14d3e8, Func Offset: 0x108
	// Line 119, Address: 0x14d3ec, Func Offset: 0x10c
	// Line 117, Address: 0x14d3f0, Func Offset: 0x110
	// Line 119, Address: 0x14d3f4, Func Offset: 0x114
	// Line 121, Address: 0x14d404, Func Offset: 0x124
	// Line 122, Address: 0x14d424, Func Offset: 0x144
	// Line 124, Address: 0x14d428, Func Offset: 0x148
	// Line 125, Address: 0x14d42c, Func Offset: 0x14c
	// Line 126, Address: 0x14d438, Func Offset: 0x158
	// Func End, Address: 0x14d460, Func Offset: 0x180
}

// 
// Start address: 0x14d460
void MakeApplyClusterPacket(<unknown fundamental type (0xa510)>* packet_buffer, ClusterElement* top, int n, float weight)
{
	_anon3 packet;
	// Line 133, Address: 0x14d460, Func Offset: 0
	// Line 138, Address: 0x14d464, Func Offset: 0x4
	// Line 133, Address: 0x14d468, Func Offset: 0x8
	// Line 138, Address: 0x14d46c, Func Offset: 0xc
	// Line 133, Address: 0x14d470, Func Offset: 0x10
	// Line 138, Address: 0x14d474, Func Offset: 0x14
	// Line 133, Address: 0x14d478, Func Offset: 0x18
	// Line 138, Address: 0x14d48c, Func Offset: 0x2c
	// Line 139, Address: 0x14d498, Func Offset: 0x38
	// Line 142, Address: 0x14d4cc, Func Offset: 0x6c
	// Line 143, Address: 0x14d4d8, Func Offset: 0x78
	// Line 144, Address: 0x14d4e8, Func Offset: 0x88
	// Line 145, Address: 0x14d4f8, Func Offset: 0x98
	// Line 146, Address: 0x14d508, Func Offset: 0xa8
	// Line 147, Address: 0x14d514, Func Offset: 0xb4
	// Line 148, Address: 0x14d51c, Func Offset: 0xbc
	// Func End, Address: 0x14d534, Func Offset: 0xd4
}

// 
// Start address: 0x14d540
void ApplyCluster(Model* model, Cluster* cluster, float weight)
{
	float cluster_nodes[4];
	int n_nodes;
	ClusterElement* elements;
	int i;
	int n_rest_nodes;
	<unknown fundamental type (0xa510)>* packet_buffer;
	_anon2* toSPR;
	Q* end;
	Q* p;
	int index;
	// Line 157, Address: 0x14d540, Func Offset: 0
	// Line 158, Address: 0x14d544, Func Offset: 0x4
	// Line 157, Address: 0x14d548, Func Offset: 0x8
	// Line 161, Address: 0x14d568, Func Offset: 0x28
	// Line 157, Address: 0x14d56c, Func Offset: 0x2c
	// Line 160, Address: 0x14d570, Func Offset: 0x30
	// Line 158, Address: 0x14d578, Func Offset: 0x38
	// Line 159, Address: 0x14d57c, Func Offset: 0x3c
	// Line 163, Address: 0x14d580, Func Offset: 0x40
	// Line 164, Address: 0x14d588, Func Offset: 0x48
	// Line 165, Address: 0x14d58c, Func Offset: 0x4c
	// Line 170, Address: 0x14d5a8, Func Offset: 0x68
	// Line 171, Address: 0x14d5b4, Func Offset: 0x74
	// Line 172, Address: 0x14d5cc, Func Offset: 0x8c
	// Line 173, Address: 0x14d5d8, Func Offset: 0x98
	// Line 178, Address: 0x14d5e0, Func Offset: 0xa0
	// Line 179, Address: 0x14d5e8, Func Offset: 0xa8
	// Line 178, Address: 0x14d5ec, Func Offset: 0xac
	// Line 179, Address: 0x14d5f0, Func Offset: 0xb0
	// Line 180, Address: 0x14d5f4, Func Offset: 0xb4
	// Line 182, Address: 0x14d608, Func Offset: 0xc8
	// Line 190, Address: 0x14d624, Func Offset: 0xe4
	// Line 192, Address: 0x14d628, Func Offset: 0xe8
	// Line 190, Address: 0x14d62c, Func Offset: 0xec
	// Line 192, Address: 0x14d638, Func Offset: 0xf8
	// Line 193, Address: 0x14d648, Func Offset: 0x108
	// Line 194, Address: 0x14d64c, Func Offset: 0x10c
	// Line 195, Address: 0x14d670, Func Offset: 0x130
	// Line 196, Address: 0x14d67c, Func Offset: 0x13c
	// Line 199, Address: 0x14d690, Func Offset: 0x150
	// Line 200, Address: 0x14d694, Func Offset: 0x154
	// Line 201, Address: 0x14d6a8, Func Offset: 0x168
	// Func End, Address: 0x14d6f4, Func Offset: 0x1b4
}

// 
// Start address: 0x14d700
void Model3UpdateClusters(Model* model, ModelWork* work)
{
	int n_cluster_nodes;
	float cluster_nodes[4];
	void* buffer_top;
	Cluster* clusters;
	int n_clusters;
	int i;
	float weight;
	_anon2* fromSPR;
	int n;
	int i;
	void* p;
	void* p;
	// Line 208, Address: 0x14d700, Func Offset: 0
	// Line 209, Address: 0x14d730, Func Offset: 0x30
	// Line 213, Address: 0x14d734, Func Offset: 0x34
	// Line 218, Address: 0x14d73c, Func Offset: 0x3c
	// Line 234, Address: 0x14d744, Func Offset: 0x44
	// Line 235, Address: 0x14d750, Func Offset: 0x50
	// Line 237, Address: 0x14d758, Func Offset: 0x58
	// Line 241, Address: 0x14d76c, Func Offset: 0x6c
	// Line 244, Address: 0x14d774, Func Offset: 0x74
	// Line 249, Address: 0x14d77c, Func Offset: 0x7c
	// Line 251, Address: 0x14d780, Func Offset: 0x80
	// Line 248, Address: 0x14d784, Func Offset: 0x84
	// Line 251, Address: 0x14d788, Func Offset: 0x88
	// Line 252, Address: 0x14d798, Func Offset: 0x98
	// Line 253, Address: 0x14d79c, Func Offset: 0x9c
	// Line 252, Address: 0x14d7a0, Func Offset: 0xa0
	// Line 253, Address: 0x14d7a8, Func Offset: 0xa8
	// Line 255, Address: 0x14d7b4, Func Offset: 0xb4
	// Line 257, Address: 0x14d7bc, Func Offset: 0xbc
	// Line 255, Address: 0x14d7c8, Func Offset: 0xc8
	// Line 257, Address: 0x14d7cc, Func Offset: 0xcc
	// Line 263, Address: 0x14d7d8, Func Offset: 0xd8
	// Line 265, Address: 0x14d7e0, Func Offset: 0xe0
	// Line 269, Address: 0x14d7f8, Func Offset: 0xf8
	// Line 271, Address: 0x14d808, Func Offset: 0x108
	// Line 272, Address: 0x14d814, Func Offset: 0x114
	// Line 276, Address: 0x14d828, Func Offset: 0x128
	// Line 279, Address: 0x14d83c, Func Offset: 0x13c
	// Line 281, Address: 0x14d850, Func Offset: 0x150
	// Line 282, Address: 0x14d85c, Func Offset: 0x15c
	// Line 286, Address: 0x14d86c, Func Offset: 0x16c
	// Line 290, Address: 0x14d890, Func Offset: 0x190
	// Line 286, Address: 0x14d894, Func Offset: 0x194
	// Line 290, Address: 0x14d898, Func Offset: 0x198
	// Line 291, Address: 0x14d8a0, Func Offset: 0x1a0
	// Line 293, Address: 0x14d8b0, Func Offset: 0x1b0
	// Func End, Address: 0x14d8e0, Func Offset: 0x1e0
}

