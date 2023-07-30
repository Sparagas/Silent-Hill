typedef struct ModelCommonWork;
typedef struct TextPosParam;


typedef float type_0[4];
typedef float type_1[4][2];
typedef float type_2[4][4][128];
typedef float type_3[4][4][256];
typedef float type_4[4][2048];
typedef TextPosParam type_5[64];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef ModelCommonWork type_9[2];
typedef float type_10[4];
typedef float type_11[4][2];

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

struct TextPosParam
{
	unsigned long tex0;
};

ModelCommonWork* model_common_work;
ModelCommonWork model_common_work_db[2];
int model_common_work_page;

void ModelCommonWorkInit();
void ModelCommonWorkFlip();

// 
// Start address: 0x137fe0
void ModelCommonWorkInit()
{
	int initialized;
	// Line 23, Address: 0x137fe0, Func Offset: 0
	// Line 24, Address: 0x137ff0, Func Offset: 0x10
	// Line 25, Address: 0x137ff8, Func Offset: 0x18
	// Line 27, Address: 0x13801c, Func Offset: 0x3c
	// Line 29, Address: 0x138028, Func Offset: 0x48
	// Func End, Address: 0x138030, Func Offset: 0x50
}

// 
// Start address: 0x138030
void ModelCommonWorkFlip()
{
	// Line 37, Address: 0x138030, Func Offset: 0
	// Line 38, Address: 0x138060, Func Offset: 0x30
	// Func End, Address: 0x138068, Func Offset: 0x38
}

