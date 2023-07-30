typedef struct _anon0;
typedef struct ModelCommonWork;


typedef float type_0[4];
typedef float type_1[4][2];
typedef float type_2[4];
typedef float type_3[4][2];
typedef float type_4[4][4][128];
typedef float type_5[4];
typedef float type_6[4][4][256];
typedef float type_7[4];
typedef float type_8[4][2048];
typedef float type_9[4][4];
typedef _anon0 type_10[64];
typedef ModelCommonWork type_11[2];

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

ModelCommonWork* model_common_work;
ModelCommonWork model_common_work_db[2];
int model_common_work_page;

void ModelCommonWorkInit();
void ModelCommonWorkFlip();

// 
// Start address: 0x153210
void ModelCommonWorkInit()
{
	int initialized;
	// Line 23, Address: 0x153210, Func Offset: 0
	// Line 25, Address: 0x153220, Func Offset: 0x10
	// Line 24, Address: 0x153224, Func Offset: 0x14
	// Line 25, Address: 0x153228, Func Offset: 0x18
	// Line 27, Address: 0x153234, Func Offset: 0x24
	// Line 29, Address: 0x153240, Func Offset: 0x30
	// Func End, Address: 0x153248, Func Offset: 0x38
}

// 
// Start address: 0x153250
void ModelCommonWorkFlip()
{
	// Line 37, Address: 0x153250, Func Offset: 0
	// Line 38, Address: 0x15327c, Func Offset: 0x2c
	// Func End, Address: 0x153284, Func Offset: 0x34
}

