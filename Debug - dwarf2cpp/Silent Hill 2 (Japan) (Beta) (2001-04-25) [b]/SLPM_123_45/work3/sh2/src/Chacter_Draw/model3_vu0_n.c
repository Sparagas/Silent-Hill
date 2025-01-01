typedef struct ktVif1Ot2;
typedef struct Part;
typedef struct SMapData;
typedef struct _anon0;
typedef struct Node;
typedef struct PLightData;
typedef struct TextPosParam;
typedef struct TriangleSpecularNormal;
typedef struct _sceDmaTag;
typedef struct Light;
typedef struct PersData;
typedef struct ModelWork;
typedef struct TextureParam;
typedef struct TriangleNormalEnvironSpecular;
typedef struct PartHeader;
typedef struct TriangleNormalSpecular;
typedef struct TriangleNormalEnviron;
typedef struct TriangleNormal;
typedef struct ELightData;
typedef struct _anon1;
typedef struct Data_0;
typedef struct Model;
typedef struct Model3Junk;
typedef struct Data_1;
typedef struct AllData_Vu0;
typedef struct Lambert0Data;
typedef struct Lambert1Data;
typedef struct AllPacket;
typedef struct ClusterData;
typedef union Q;
typedef struct EMapData;
typedef struct ModelCommonWork;
typedef struct _anon2;

typedef int(*type_14)(void*, void*, void*);
typedef void(*type_21)(ktVif1Ot2*, Part*);

typedef <unknown fundamental type (0xa510)> type_0[0];
typedef unsigned int type_1[3];
typedef unsigned int type_2[3];
typedef unsigned int type_3[3];
typedef unsigned int type_4[3];
typedef <unknown fundamental type (0xa510)> type_5[0];
typedef AllData_Vu0 type_6[2];
typedef unsigned int type_7[3];
typedef unsigned int type_8[3];
typedef unsigned int type_9[4];
typedef <unknown fundamental type (0xa510)> type_10[0];
typedef unsigned int type_11[4];
typedef float type_12[4][4];
typedef unsigned int type_13[3];
typedef <unknown fundamental type (0xa510)> type_15[0];
typedef int type_16[4];
typedef float type_17[4];
typedef <unknown fundamental type (0xa510)> type_18[0];
typedef float type_19[4];
typedef float type_20[4];
typedef void(*type_22)(ktVif1Ot2*, Part*)[8];
typedef <unknown fundamental type (0xa510)> type_23[0];
typedef int type_24[4];
typedef <unknown fundamental type (0xa510)> type_25[4];
typedef unsigned char type_26[2];
typedef <unknown fundamental type (0xa510)> type_27[0];
typedef unsigned int type_28[3];
typedef TriangleNormal type_29[2];
typedef float type_30[4];
typedef float type_31[4][2];
typedef TriangleNormalEnviron type_32[2];
typedef TriangleNormalSpecular type_33[2];
typedef TriangleNormalEnvironSpecular type_34[2];
typedef float type_35[4];
typedef float type_36[4][2];
typedef <unknown fundamental type (0xa510)> type_37[0];
typedef TriangleSpecularNormal type_38[2];
typedef unsigned long type_39[2];
typedef unsigned int type_40[4];
typedef float type_41[4][4][128];
typedef unsigned short type_42[8];
typedef <unknown fundamental type (0xa510)> type_43[0];
typedef unsigned char type_44[16];
typedef float type_45[4][4][256];
typedef long type_46[2];
typedef unsigned int type_47[2];
typedef float type_48[4][2048];
typedef int type_49[4];
typedef short type_50[8];
typedef char type_51[16];
typedef <unknown fundamental type (0xa510)> type_52[0];
typedef <unknown fundamental type (0xa510)> type_53[0];
typedef TextPosParam type_54[64];
typedef PLightData type_55[4];
typedef ELightData type_56[8];

struct ktVif1Ot2
{
	_sceDmaTag* top_1;
	_sceDmaTag* top_2;
	unsigned int n_bits_1;
	unsigned int n_bits_2;
	unsigned int length_1;
	unsigned int length_2;
	unsigned int mask_1;
	unsigned int mask_2;
};

struct Part
{
	unsigned int size;
	unsigned int type;
	unsigned int packet_offset;
	unsigned int packet_qwc;
	unsigned int xtop;
	unsigned int n_cluster_data;
	unsigned int cluster_data_offset;
	unsigned int n_skeletons;
	unsigned int skeletons_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int data_skeletons_offset;
	unsigned int data_skeleton_pairs_offset;
	unsigned int n_textures;
	unsigned int text_pos_indices_offset;
	unsigned int texture_params_offset;
	unsigned char shading_type;
	unsigned char specular_pos;
	unsigned char equipment_id;
	unsigned char hoge;
	unsigned char backclip;
	unsigned char envmap_param;
	unsigned char reserved[2];
	float phong_param_a;
	float phong_param_b;
	float blinn_param;
	unsigned int padding[3];
	float diffuse[4];
	float ambient[4];
	float specular[4];
};

struct SMapData
{
	float nhm[4][4];
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

struct Node
{
	Q d0;
	Q d1;
	Q d2;
	Q d3;
};

struct PLightData
{
	float nlm[4][4];
	float lcm[4][4];
};

struct TextPosParam
{
	unsigned long tex0;
};

struct TriangleSpecularNormal
{
	Q dmatag;
	Q s_giftag;
	Q s_tex0;
	Q s_clamp;
	Q s_alpha;
	Q s_fogcol;
	Q s_rgba;
	Q s_stq2;
	Q s_xyzf2;
	Q s_stq1;
	Q s_xyzf1;
	Q s_stq0;
	Q s_xyzf0;
	Q S_alpha;
	Q S_fogcol;
	Q n_giftag;
	Q n_tex0;
	Q n_clamp;
	Q n_stq2;
	Q n_rgba2;
	Q n_xyzf2;
	Q n_stq1;
	Q n_rgba1;
	Q n_xyzf1;
	Q n_stq0;
	Q n_rgba0;
	Q n_xyzf0;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	int fake;
	float shadow_length;
	float shadow_density;
	float pos[4];
	float vpos[4];
	float dir[4];
	float vdir[4];
	float color[4];
	float f_start;
	float f_end;
	float s_start;
	float s_end;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
	float f_ra;
	float f_rb;
};

struct PersData
{
	float vsp[4][2];
	float vcp[4][2];
	float xyz_min[4];
	float xyz_max[4];
	float rgba_max[4];
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

struct TextureParam
{
	unsigned long clamp;
	unsigned long tex1;
};

struct TriangleNormalEnvironSpecular
{
	Q dmatag;
	Q n_giftag;
	Q n_tex0;
	Q n_clamp;
	Q n_stq2;
	Q n_rgba2;
	Q n_xyzf2;
	Q n_stq1;
	Q n_rgba1;
	Q n_xyzf1;
	Q n_stq0;
	Q n_rgba0;
	Q n_xyzf0;
	Q e_giftag;
	Q e_tex0;
	Q e_clamp;
	Q e_rgba;
	Q e_stq2;
	Q e_xyzf2;
	Q e_stq1;
	Q e_xyzf1;
	Q e_stq0;
	Q e_xyzf0;
	Q s_giftag;
	Q s_tex0;
	Q s_clamp;
	Q s_alpha;
	Q s_fogcol;
	Q s_rgba;
	Q s_stq2;
	Q s_xyzf2;
	Q s_stq1;
	Q s_xyzf1;
	Q s_stq0;
	Q s_xyzf0;
	Q S_alpha;
	Q S_fogcol;
};

struct PartHeader
{
	unsigned int n_node_groups;
	unsigned int _skeletons_offset;
	unsigned int nodes_top_offset;
	unsigned int nodes_end_offset;
	unsigned int _draw_env_top_offset;
	unsigned int _draw_env_end_offset;
	unsigned int strip_top_offset;
	unsigned int strip_end_offset;
};

struct TriangleNormalSpecular
{
	Q dmatag;
	Q n_giftag;
	Q n_tex0;
	Q n_clamp;
	Q n_stq2;
	Q n_rgba2;
	Q n_xyzf2;
	Q n_stq1;
	Q n_rgba1;
	Q n_xyzf1;
	Q n_stq0;
	Q n_rgba0;
	Q n_xyzf0;
	Q s_giftag;
	Q s_tex0;
	Q s_clamp;
	Q s_alpha;
	Q s_fogcol;
	Q s_rgba;
	Q s_stq2;
	Q s_xyzf2;
	Q s_stq1;
	Q s_xyzf1;
	Q s_stq0;
	Q s_xyzf0;
	Q S_alpha;
	Q S_fogcol;
};

struct TriangleNormalEnviron
{
	Q dmatag;
	Q n_giftag;
	Q n_tex0;
	Q n_clamp;
	Q n_stq2;
	Q n_rgba2;
	Q n_xyzf2;
	Q n_stq1;
	Q n_rgba1;
	Q n_xyzf1;
	Q n_stq0;
	Q n_rgba0;
	Q n_xyzf0;
	Q e_giftag;
	Q e_tex0;
	Q e_clamp;
	Q e_rgba;
	Q e_stq2;
	Q e_xyzf2;
	Q e_stq1;
	Q e_xyzf1;
	Q e_stq0;
	Q e_xyzf0;
};

struct TriangleNormal
{
	Q dmatag;
	Q n_giftag;
	Q n_tex0;
	Q n_clamp;
	Q n_stq2;
	Q n_rgba2;
	Q n_xyzf2;
	Q n_stq1;
	Q n_rgba1;
	Q n_xyzf1;
	Q n_stq0;
	Q n_rgba0;
	Q n_xyzf0;
};

struct ELightData
{
	float pos[4];
	float dir[4];
	float col[4];
	float param[4];
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

struct Data_0
{
	float diffuse[4];
	float ambient[4];
	float param[4];
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

struct Data_1
{
	float param[4];
};

struct AllData_Vu0
{
	PLightData plight[4];
	ELightData elight[8];
	Lambert0Data lambert0;
	Lambert1Data lambert1;
	EMapData emap;
	SMapData smap;
	PersData pers;
};

struct Lambert0Data
{
	float nlm[4][4];
	float lcm[4][4];
};

struct Lambert1Data
{
	float global_ambient[4];
};

struct AllPacket
{
	TriangleNormal normal[2];
	TriangleNormalEnviron normal_environ[2];
	TriangleNormalSpecular normal_specular[2];
	TriangleNormalEnvironSpecular normal_environ_specular[2];
	TriangleSpecularNormal specular_normal[2];
};

struct ClusterData
{
	unsigned short src;
	unsigned short dst;
	unsigned short n;
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

struct EMapData
{
	float vwm[4][4];
	float mag[4];
	float offset[4];
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

int hogehoge;
int fugahoge;
int alldata_Vu0_page;
AllPacket* all_packet;
ModelCommonWork* model_common_work;
<unknown fundamental type (0xa510)> model3_mpg0_skel_load[0];
Model3Junk model3_junk;
AllData_Vu0* pAllData_Vu0;
AllData_Vu0 alldata_Vu0_Dblbuffer[2];
unsigned int xitop;
unsigned int xmtop;
int model3_mpg0_lambert_size;
<unknown fundamental type (0xa510)> model3_mpg0_lambert[0];
int model3_mpg0_spot_size;
<unknown fundamental type (0xa510)> model3_mpg0_spot[0];
int model3_mpg0_point_size;
<unknown fundamental type (0xa510)> model3_mpg0_point[0];
int model3_mpg0_para_size;
<unknown fundamental type (0xa510)> model3_mpg0_para[0];
int model3_mpg0_clipv_size;
<unknown fundamental type (0xa510)> model3_mpg0_clipv[0];
int model3_mpg0_clip1_size;
<unknown fundamental type (0xa510)> model3_mpg0_clip1[0];
int model3_mpg0_clip0v_size;
<unknown fundamental type (0xa510)> model3_mpg0_clip0v[0];
int model3_mpg0_persfvg_size;
<unknown fundamental type (0xa510)> model3_mpg0_persfvg[0];
int model3_mpg0_specular_size;
<unknown fundamental type (0xa510)> model3_mpg0_specular[0];
int model3_mpg0_venvmap_size;
<unknown fundamental type (0xa510)> model3_mpg0_venvmap[0];
int calc_base;
int n_bad_depths;
void(*sort_functions)(ktVif1Ot2*, Part*)[8];
int draw_base;
int chr_flg;

void InitTriangleNormal(TriangleNormal* p);
void InitTriangleNormalEnviron(TriangleNormalEnviron* p);
void InitTriangleNormalSpecular(TriangleNormalSpecular* p);
void InitTriangleNormalEnvironSpecular(TriangleNormalEnvironSpecular* p);
void InitTriangleSpecularNormal(TriangleSpecularNormal* p);
void InitAllPacket0(AllPacket* p);
void LoadProgram_Vu0();
void MakeData0();
void MakePartTransferPacket_Vu0(Part* part, _anon1* pk);
void MakeLambertShadingPacket(Part* part, _anon1* pk);
void MakeClipPacket(Part* part, _anon1* pk);
void FlipXMTOP();
void MakeCalcPartPacket(Part* part);
void KickCalcPartPacket();
void TransferToSPR();
void PrepareSort();
void SortTriangleNormal(ktVif1Ot2* ot, Part* part);
void SortTriangleNormalEnviron(ktVif1Ot2* ot, Part* part);
void SortTriangleNormalSpecular(ktVif1Ot2* ot, Part* part);
void SortTriangleNormalEnvironSpecular(ktVif1Ot2* ot, Part* part);
void SortTriangleSpecularNormal(ktVif1Ot2* ot, Part* part);
void DrawPart0(ktVif1Ot2* ot, Part* part, ModelWork* work);
void DrawParts0(ktVif1Ot2* ot, Model* model, ModelWork* work);
void Model3DrawVu0Parts(Model* model, ModelWork* work);

// 
// Start address: 0x132270
void InitTriangleNormal(TriangleNormal* p)
{
	int qwc;
	// Line 341, Address: 0x132270, Func Offset: 0
	// Line 342, Address: 0x13227c, Func Offset: 0xc
	// Line 343, Address: 0x132280, Func Offset: 0x10
	// Line 344, Address: 0x13229c, Func Offset: 0x2c
	// Line 345, Address: 0x1322a4, Func Offset: 0x34
	// Line 347, Address: 0x1322b8, Func Offset: 0x48
	// Line 355, Address: 0x1322d0, Func Offset: 0x60
	// Line 359, Address: 0x1322ec, Func Offset: 0x7c
	// Line 360, Address: 0x1322f8, Func Offset: 0x88
	// Line 361, Address: 0x132304, Func Offset: 0x94
	// Func End, Address: 0x132314, Func Offset: 0xa4
}

// 
// Start address: 0x132320
void InitTriangleNormalEnviron(TriangleNormalEnviron* p)
{
	int qwc;
	// Line 365, Address: 0x132320, Func Offset: 0
	// Line 366, Address: 0x132334, Func Offset: 0x14
	// Line 367, Address: 0x132338, Func Offset: 0x18
	// Line 368, Address: 0x132354, Func Offset: 0x34
	// Line 369, Address: 0x13235c, Func Offset: 0x3c
	// Line 372, Address: 0x132370, Func Offset: 0x50
	// Line 374, Address: 0x132388, Func Offset: 0x68
	// Line 378, Address: 0x1323a4, Func Offset: 0x84
	// Line 379, Address: 0x1323b0, Func Offset: 0x90
	// Line 382, Address: 0x1323bc, Func Offset: 0x9c
	// Line 384, Address: 0x1323d4, Func Offset: 0xb4
	// Line 388, Address: 0x1323f0, Func Offset: 0xd0
	// Line 389, Address: 0x1323fc, Func Offset: 0xdc
	// Line 390, Address: 0x132408, Func Offset: 0xe8
	// Line 391, Address: 0x132414, Func Offset: 0xf4
	// Line 392, Address: 0x132454, Func Offset: 0x134
	// Line 393, Address: 0x132460, Func Offset: 0x140
	// Line 394, Address: 0x132470, Func Offset: 0x150
	// Line 395, Address: 0x132480, Func Offset: 0x160
	// Line 396, Address: 0x132490, Func Offset: 0x170
	// Func End, Address: 0x1324a8, Func Offset: 0x188
}

// 
// Start address: 0x1324b0
void InitTriangleNormalSpecular(TriangleNormalSpecular* p)
{
	int qwc;
	// Line 400, Address: 0x1324b0, Func Offset: 0
	// Line 401, Address: 0x1324bc, Func Offset: 0xc
	// Line 402, Address: 0x1324c0, Func Offset: 0x10
	// Line 403, Address: 0x1324dc, Func Offset: 0x2c
	// Line 404, Address: 0x1324e4, Func Offset: 0x34
	// Line 407, Address: 0x1324f8, Func Offset: 0x48
	// Line 409, Address: 0x132510, Func Offset: 0x60
	// Line 413, Address: 0x13252c, Func Offset: 0x7c
	// Line 414, Address: 0x132538, Func Offset: 0x88
	// Line 417, Address: 0x132544, Func Offset: 0x94
	// Line 419, Address: 0x13255c, Func Offset: 0xac
	// Line 424, Address: 0x13257c, Func Offset: 0xcc
	// Line 425, Address: 0x132598, Func Offset: 0xe8
	// Line 426, Address: 0x1325a4, Func Offset: 0xf4
	// Line 427, Address: 0x1325b0, Func Offset: 0x100
	// Line 429, Address: 0x1325bc, Func Offset: 0x10c
	// Line 430, Address: 0x1325c8, Func Offset: 0x118
	// Line 432, Address: 0x1325d4, Func Offset: 0x124
	// Line 433, Address: 0x1325dc, Func Offset: 0x12c
	// Line 434, Address: 0x1325e8, Func Offset: 0x138
	// Line 435, Address: 0x1325f8, Func Offset: 0x148
	// Line 436, Address: 0x132608, Func Offset: 0x158
	// Line 438, Address: 0x132618, Func Offset: 0x168
	// Line 439, Address: 0x132624, Func Offset: 0x174
	// Line 441, Address: 0x132630, Func Offset: 0x180
	// Line 442, Address: 0x13263c, Func Offset: 0x18c
	// Func End, Address: 0x13264c, Func Offset: 0x19c
}

// 
// Start address: 0x132650
void InitTriangleNormalEnvironSpecular(TriangleNormalEnvironSpecular* p)
{
	int qwc;
	// Line 446, Address: 0x132650, Func Offset: 0
	// Line 447, Address: 0x132664, Func Offset: 0x14
	// Line 448, Address: 0x132668, Func Offset: 0x18
	// Line 449, Address: 0x132684, Func Offset: 0x34
	// Line 450, Address: 0x13268c, Func Offset: 0x3c
	// Line 453, Address: 0x1326a0, Func Offset: 0x50
	// Line 455, Address: 0x1326b8, Func Offset: 0x68
	// Line 459, Address: 0x1326d4, Func Offset: 0x84
	// Line 460, Address: 0x1326e0, Func Offset: 0x90
	// Line 463, Address: 0x1326ec, Func Offset: 0x9c
	// Line 465, Address: 0x132704, Func Offset: 0xb4
	// Line 469, Address: 0x132720, Func Offset: 0xd0
	// Line 470, Address: 0x13272c, Func Offset: 0xdc
	// Line 471, Address: 0x132738, Func Offset: 0xe8
	// Line 472, Address: 0x132744, Func Offset: 0xf4
	// Line 473, Address: 0x132784, Func Offset: 0x134
	// Line 474, Address: 0x132790, Func Offset: 0x140
	// Line 475, Address: 0x1327a0, Func Offset: 0x150
	// Line 476, Address: 0x1327b0, Func Offset: 0x160
	// Line 479, Address: 0x1327c0, Func Offset: 0x170
	// Line 481, Address: 0x1327d8, Func Offset: 0x188
	// Line 486, Address: 0x1327f8, Func Offset: 0x1a8
	// Line 487, Address: 0x132814, Func Offset: 0x1c4
	// Line 488, Address: 0x132820, Func Offset: 0x1d0
	// Line 489, Address: 0x13282c, Func Offset: 0x1dc
	// Line 490, Address: 0x132838, Func Offset: 0x1e8
	// Line 491, Address: 0x132844, Func Offset: 0x1f4
	// Line 492, Address: 0x132850, Func Offset: 0x200
	// Line 493, Address: 0x132858, Func Offset: 0x208
	// Line 494, Address: 0x132864, Func Offset: 0x214
	// Line 495, Address: 0x132874, Func Offset: 0x224
	// Line 496, Address: 0x132884, Func Offset: 0x234
	// Line 497, Address: 0x132894, Func Offset: 0x244
	// Line 498, Address: 0x1328a0, Func Offset: 0x250
	// Line 499, Address: 0x1328ac, Func Offset: 0x25c
	// Line 500, Address: 0x1328b8, Func Offset: 0x268
	// Func End, Address: 0x1328d0, Func Offset: 0x280
}

// 
// Start address: 0x1328d0
void InitTriangleSpecularNormal(TriangleSpecularNormal* p)
{
	int qwc;
	// Line 504, Address: 0x1328d0, Func Offset: 0
	// Line 505, Address: 0x1328dc, Func Offset: 0xc
	// Line 506, Address: 0x1328e0, Func Offset: 0x10
	// Line 507, Address: 0x1328fc, Func Offset: 0x2c
	// Line 508, Address: 0x132904, Func Offset: 0x34
	// Line 511, Address: 0x132918, Func Offset: 0x48
	// Line 513, Address: 0x132930, Func Offset: 0x60
	// Line 519, Address: 0x132950, Func Offset: 0x80
	// Line 521, Address: 0x13296c, Func Offset: 0x9c
	// Line 522, Address: 0x132978, Func Offset: 0xa8
	// Line 523, Address: 0x132984, Func Offset: 0xb4
	// Line 525, Address: 0x132990, Func Offset: 0xc0
	// Line 526, Address: 0x13299c, Func Offset: 0xcc
	// Line 528, Address: 0x1329a8, Func Offset: 0xd8
	// Line 529, Address: 0x1329b0, Func Offset: 0xe0
	// Line 530, Address: 0x1329bc, Func Offset: 0xec
	// Line 531, Address: 0x1329cc, Func Offset: 0xfc
	// Line 532, Address: 0x1329dc, Func Offset: 0x10c
	// Line 534, Address: 0x1329ec, Func Offset: 0x11c
	// Line 535, Address: 0x1329f8, Func Offset: 0x128
	// Line 537, Address: 0x132a04, Func Offset: 0x134
	// Line 540, Address: 0x132a10, Func Offset: 0x140
	// Line 542, Address: 0x132a28, Func Offset: 0x158
	// Line 546, Address: 0x132a44, Func Offset: 0x174
	// Line 547, Address: 0x132a50, Func Offset: 0x180
	// Line 548, Address: 0x132a5c, Func Offset: 0x18c
	// Func End, Address: 0x132a6c, Func Offset: 0x19c
}

// 
// Start address: 0x132a70
void InitAllPacket0(AllPacket* p)
{
	// Line 552, Address: 0x132a70, Func Offset: 0
	// Line 553, Address: 0x132a7c, Func Offset: 0xc
	// Line 554, Address: 0x132a88, Func Offset: 0x18
	// Line 556, Address: 0x132a98, Func Offset: 0x28
	// Line 557, Address: 0x132aa8, Func Offset: 0x38
	// Line 559, Address: 0x132ab8, Func Offset: 0x48
	// Line 560, Address: 0x132ac8, Func Offset: 0x58
	// Line 562, Address: 0x132ad8, Func Offset: 0x68
	// Line 563, Address: 0x132ae8, Func Offset: 0x78
	// Line 565, Address: 0x132af8, Func Offset: 0x88
	// Line 566, Address: 0x132b08, Func Offset: 0x98
	// Line 567, Address: 0x132b18, Func Offset: 0xa8
	// Func End, Address: 0x132b28, Func Offset: 0xb8
}

// 
// Start address: 0x132b30
void LoadProgram_Vu0()
{
	_anon1* pk;
	_anon1 packet;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 575, Address: 0x132b30, Func Offset: 0
	// Line 578, Address: 0x132b40, Func Offset: 0x10
	// Line 580, Address: 0x132b50, Func Offset: 0x20
	// Line 582, Address: 0x132b54, Func Offset: 0x24
	// Line 586, Address: 0x132b7c, Func Offset: 0x4c
	// Line 588, Address: 0x132b94, Func Offset: 0x64
	// Line 589, Address: 0x132ba4, Func Offset: 0x74
	// Line 591, Address: 0x132bb0, Func Offset: 0x80
	// Line 597, Address: 0x132bbc, Func Offset: 0x8c
	// Line 598, Address: 0x132bd8, Func Offset: 0xa8
	// Line 599, Address: 0x132be4, Func Offset: 0xb4
	// Line 600, Address: 0x132bf8, Func Offset: 0xc8
	// Line 601, Address: 0x132c08, Func Offset: 0xd8
	// Line 605, Address: 0x132c24, Func Offset: 0xf4
	// Func End, Address: 0x132c3c, Func Offset: 0x10c
}

// 
// Start address: 0x132c40
void MakeData0()
{
	PersData* psdata;
	SMapData* smdata;
	EMapData* emdata;
	Lambert1Data* lm1data;
	Lambert0Data* lmdata;
	ELightData* eldata;
	Light* light;
	int i;
	int n_extras;
	PLightData* pldata;
	int i;
	int n_parallels;
	float offset[4];
	float mag[4];
	// Line 618, Address: 0x132c40, Func Offset: 0
	// Line 625, Address: 0x132c6c, Func Offset: 0x2c
	// Line 631, Address: 0x132ca0, Func Offset: 0x60
	// Line 633, Address: 0x132cac, Func Offset: 0x6c
	// Line 634, Address: 0x132cb8, Func Offset: 0x78
	// Line 638, Address: 0x132ce0, Func Offset: 0xa0
	// Line 640, Address: 0x132cf0, Func Offset: 0xb0
	// Line 641, Address: 0x132d00, Func Offset: 0xc0
	// Line 646, Address: 0x132d18, Func Offset: 0xd8
	// Line 648, Address: 0x132d24, Func Offset: 0xe4
	// Line 649, Address: 0x132d30, Func Offset: 0xf0
	// Line 650, Address: 0x132d40, Func Offset: 0x100
	// Line 655, Address: 0x132d7c, Func Offset: 0x13c
	// Line 656, Address: 0x132d8c, Func Offset: 0x14c
	// Line 658, Address: 0x132d9c, Func Offset: 0x15c
	// Line 659, Address: 0x132dac, Func Offset: 0x16c
	// Line 660, Address: 0x132db4, Func Offset: 0x174
	// Line 661, Address: 0x132dbc, Func Offset: 0x17c
	// Line 662, Address: 0x132dc4, Func Offset: 0x184
	// Line 663, Address: 0x132dcc, Func Offset: 0x18c
	// Line 668, Address: 0x132de0, Func Offset: 0x1a0
	// Line 672, Address: 0x132e20, Func Offset: 0x1e0
	// Line 674, Address: 0x132e30, Func Offset: 0x1f0
	// Line 679, Address: 0x132e44, Func Offset: 0x204
	// Line 681, Address: 0x132e84, Func Offset: 0x244
	// Line 684, Address: 0x132e98, Func Offset: 0x258
	// Line 693, Address: 0x132ea8, Func Offset: 0x268
	// Line 697, Address: 0x132ee8, Func Offset: 0x2a8
	// Line 699, Address: 0x132efc, Func Offset: 0x2bc
	// Line 700, Address: 0x132f14, Func Offset: 0x2d4
	// Line 705, Address: 0x132f2c, Func Offset: 0x2ec
	// Line 709, Address: 0x132f6c, Func Offset: 0x32c
	// Line 715, Address: 0x132f7c, Func Offset: 0x33c
	// Line 726, Address: 0x132fbc, Func Offset: 0x37c
	// Line 727, Address: 0x132fd8, Func Offset: 0x398
	// Line 729, Address: 0x132ff8, Func Offset: 0x3b8
	// Line 730, Address: 0x133018, Func Offset: 0x3d8
	// Line 734, Address: 0x133038, Func Offset: 0x3f8
	// Line 735, Address: 0x133050, Func Offset: 0x410
	// Line 736, Address: 0x133068, Func Offset: 0x428
	// Line 743, Address: 0x133080, Func Offset: 0x440
	// Func End, Address: 0x1330b4, Func Offset: 0x474
}

// 
// Start address: 0x1330c0
void MakePartTransferPacket_Vu0(Part* part, _anon1* pk)
{
	float src[4];
	int pair_no;
	int i;
	int dst_top;
	unsigned short* pairs;
	float src[4];
	int skeleton_no;
	int i;
	int dst_top;
	unsigned short* skeletons;
	float matrices[4][4];
	unsigned int n;
	unsigned int dst;
	unsigned int src;
	ClusterData* cluster_data;
	int i;
	float cluster_nodes[4];
	ClusterData* cluster_data_top;
	int n_cluster_data;
	// Line 750, Address: 0x1330c0, Func Offset: 0
	// Line 752, Address: 0x1330f4, Func Offset: 0x34
	// Line 756, Address: 0x133124, Func Offset: 0x64
	// Line 757, Address: 0x133130, Func Offset: 0x70
	// Line 758, Address: 0x133144, Func Offset: 0x84
	// Line 760, Address: 0x133150, Func Offset: 0x90
	// Line 761, Address: 0x13315c, Func Offset: 0x9c
	// Line 762, Address: 0x133170, Func Offset: 0xb0
	// Line 763, Address: 0x133178, Func Offset: 0xb8
	// Line 764, Address: 0x133180, Func Offset: 0xc0
	// Line 765, Address: 0x133188, Func Offset: 0xc8
	// Line 768, Address: 0x1331c0, Func Offset: 0x100
	// Line 773, Address: 0x1331d8, Func Offset: 0x118
	// Line 774, Address: 0x1331e4, Func Offset: 0x124
	// Line 775, Address: 0x1331f8, Func Offset: 0x138
	// Line 777, Address: 0x133204, Func Offset: 0x144
	// Line 778, Address: 0x133210, Func Offset: 0x150
	// Line 779, Address: 0x133224, Func Offset: 0x164
	// Line 781, Address: 0x133230, Func Offset: 0x170
	// Line 784, Address: 0x13326c, Func Offset: 0x1ac
	// Line 789, Address: 0x133284, Func Offset: 0x1c4
	// Line 790, Address: 0x133298, Func Offset: 0x1d8
	// Line 792, Address: 0x1332a4, Func Offset: 0x1e4
	// Line 793, Address: 0x1332b0, Func Offset: 0x1f0
	// Line 794, Address: 0x1332c8, Func Offset: 0x208
	// Line 796, Address: 0x1332e4, Func Offset: 0x224
	// Line 799, Address: 0x133320, Func Offset: 0x260
	// Line 801, Address: 0x13333c, Func Offset: 0x27c
	// Func End, Address: 0x133370, Func Offset: 0x2b0
}

// 
// Start address: 0x133370
void MakeLambertShadingPacket(Part* part, _anon1* pk)
{
	Data_0* data;
	float brightness;
	Light* light;
	int i;
	int n_extras;
	int n_parallels;
	// Line 808, Address: 0x133370, Func Offset: 0
	// Line 809, Address: 0x133394, Func Offset: 0x24
	// Line 810, Address: 0x1333a0, Func Offset: 0x30
	// Line 814, Address: 0x1333ac, Func Offset: 0x3c
	// Line 815, Address: 0x1333b8, Func Offset: 0x48
	// Line 816, Address: 0x1333cc, Func Offset: 0x5c
	// Line 818, Address: 0x1333f8, Func Offset: 0x88
	// Line 819, Address: 0x133404, Func Offset: 0x94
	// Line 822, Address: 0x133448, Func Offset: 0xd8
	// Line 823, Address: 0x133458, Func Offset: 0xe8
	// Line 824, Address: 0x133474, Func Offset: 0x104
	// Line 825, Address: 0x133490, Func Offset: 0x120
	// Line 826, Address: 0x1334a4, Func Offset: 0x134
	// Line 829, Address: 0x1334b4, Func Offset: 0x144
	// Line 830, Address: 0x1334c0, Func Offset: 0x150
	// Line 831, Address: 0x1334d0, Func Offset: 0x160
	// Line 832, Address: 0x1334e4, Func Offset: 0x174
	// Line 834, Address: 0x133508, Func Offset: 0x198
	// Line 835, Address: 0x133534, Func Offset: 0x1c4
	// Line 837, Address: 0x13353c, Func Offset: 0x1cc
	// Line 838, Address: 0x133568, Func Offset: 0x1f8
	// Line 840, Address: 0x133570, Func Offset: 0x200
	// Line 841, Address: 0x13358c, Func Offset: 0x21c
	// Line 842, Address: 0x133590, Func Offset: 0x220
	// Line 845, Address: 0x1335d8, Func Offset: 0x268
	// Line 846, Address: 0x1335e8, Func Offset: 0x278
	// Line 847, Address: 0x133604, Func Offset: 0x294
	// Line 848, Address: 0x133620, Func Offset: 0x2b0
	// Line 849, Address: 0x133634, Func Offset: 0x2c4
	// Line 853, Address: 0x133644, Func Offset: 0x2d4
	// Line 854, Address: 0x133658, Func Offset: 0x2e8
	// Line 856, Address: 0x133684, Func Offset: 0x314
	// Line 859, Address: 0x1336c4, Func Offset: 0x354
	// Line 860, Address: 0x1336d4, Func Offset: 0x364
	// Line 861, Address: 0x1336f0, Func Offset: 0x380
	// Line 862, Address: 0x13370c, Func Offset: 0x39c
	// Line 872, Address: 0x133720, Func Offset: 0x3b0
	// Line 874, Address: 0x13372c, Func Offset: 0x3bc
	// Line 877, Address: 0x13376c, Func Offset: 0x3fc
	// Line 878, Address: 0x13377c, Func Offset: 0x40c
	// Line 879, Address: 0x133790, Func Offset: 0x420
	// Line 880, Address: 0x1337b8, Func Offset: 0x448
	// Line 881, Address: 0x1337cc, Func Offset: 0x45c
	// Line 883, Address: 0x1337fc, Func Offset: 0x48c
	// Line 885, Address: 0x133810, Func Offset: 0x4a0
	// Line 886, Address: 0x133820, Func Offset: 0x4b0
	// Line 896, Address: 0x133834, Func Offset: 0x4c4
	// Line 899, Address: 0x133844, Func Offset: 0x4d4
	// Line 900, Address: 0x133858, Func Offset: 0x4e8
	// Line 901, Address: 0x13386c, Func Offset: 0x4fc
	// Line 902, Address: 0x133888, Func Offset: 0x518
	// Line 903, Address: 0x1338a8, Func Offset: 0x538
	// Line 905, Address: 0x1338bc, Func Offset: 0x54c
	// Func End, Address: 0x1338e0, Func Offset: 0x570
}

// 
// Start address: 0x1338e0
void MakeClipPacket(Part* part, _anon1* pk)
{
	// Line 913, Address: 0x1338e0, Func Offset: 0
	// Line 916, Address: 0x1338f0, Func Offset: 0x10
	// Line 917, Address: 0x133904, Func Offset: 0x24
	// Line 924, Address: 0x133918, Func Offset: 0x38
	// Line 925, Address: 0x13392c, Func Offset: 0x4c
	// Line 930, Address: 0x133940, Func Offset: 0x60
	// Line 931, Address: 0x133948, Func Offset: 0x68
	// Line 932, Address: 0x133974, Func Offset: 0x94
	// Line 933, Address: 0x133984, Func Offset: 0xa4
	// Line 937, Address: 0x1339a0, Func Offset: 0xc0
	// Line 941, Address: 0x1339a8, Func Offset: 0xc8
	// Line 942, Address: 0x1339b0, Func Offset: 0xd0
	// Line 943, Address: 0x1339dc, Func Offset: 0xfc
	// Line 944, Address: 0x1339ec, Func Offset: 0x10c
	// Line 946, Address: 0x133a08, Func Offset: 0x128
	// Line 949, Address: 0x133a1c, Func Offset: 0x13c
	// Line 950, Address: 0x133a24, Func Offset: 0x144
	// Line 951, Address: 0x133a50, Func Offset: 0x170
	// Line 952, Address: 0x133a60, Func Offset: 0x180
	// Line 970, Address: 0x133a7c, Func Offset: 0x19c
	// Func End, Address: 0x133a8c, Func Offset: 0x1ac
}

// 
// Start address: 0x133a90
void FlipXMTOP()
{
	// Line 63, Address: 0x133a90, Func Offset: 0
	// Line 64, Address: 0x133aa4, Func Offset: 0x14
	// Func End, Address: 0x133aac, Func Offset: 0x1c
}

// 
// Start address: 0x133ab0
void MakeCalcPartPacket(Part* part)
{
	Data_1* data;
	_anon1* pk;
	_anon1 packet;
	<unknown fundamental type (0xa510)>* packet_buffer;
	// Line 977, Address: 0x133ab0, Func Offset: 0
	// Line 978, Address: 0x133ae0, Func Offset: 0x30
	// Line 980, Address: 0x133aec, Func Offset: 0x3c
	// Line 985, Address: 0x133af0, Func Offset: 0x40
	// Line 994, Address: 0x133b10, Func Offset: 0x60
	// Line 995, Address: 0x133b1c, Func Offset: 0x6c
	// Line 997, Address: 0x133b28, Func Offset: 0x78
	// Line 1000, Address: 0x133b44, Func Offset: 0x94
	// Line 1003, Address: 0x133b54, Func Offset: 0xa4
	// Line 1004, Address: 0x133b64, Func Offset: 0xb4
	// Line 1005, Address: 0x133b80, Func Offset: 0xd0
	// Line 1006, Address: 0x133ba4, Func Offset: 0xf4
	// Line 1007, Address: 0x133bbc, Func Offset: 0x10c
	// Line 1008, Address: 0x133be4, Func Offset: 0x134
	// Line 1009, Address: 0x133c0c, Func Offset: 0x15c
	// Line 1010, Address: 0x133c3c, Func Offset: 0x18c
	// Line 1011, Address: 0x133c44, Func Offset: 0x194
	// Line 1012, Address: 0x133c54, Func Offset: 0x1a4
	// Line 1013, Address: 0x133c64, Func Offset: 0x1b4
	// Line 1015, Address: 0x133c74, Func Offset: 0x1c4
	// Line 1019, Address: 0x133c84, Func Offset: 0x1d4
	// Line 1021, Address: 0x133c98, Func Offset: 0x1e8
	// Line 1024, Address: 0x133cac, Func Offset: 0x1fc
	// Line 1031, Address: 0x133cf0, Func Offset: 0x240
	// Line 1032, Address: 0x133d00, Func Offset: 0x250
	// Line 1034, Address: 0x133d08, Func Offset: 0x258
	// Line 1038, Address: 0x133d24, Func Offset: 0x274
	// Line 1039, Address: 0x133d34, Func Offset: 0x284
	// Line 1043, Address: 0x133d48, Func Offset: 0x298
	// Line 1045, Address: 0x133d74, Func Offset: 0x2c4
	// Line 1048, Address: 0x133db4, Func Offset: 0x304
	// Line 1049, Address: 0x133dc4, Func Offset: 0x314
	// Line 1050, Address: 0x133de0, Func Offset: 0x330
	// Line 1051, Address: 0x133dfc, Func Offset: 0x34c
	// Line 1055, Address: 0x133e10, Func Offset: 0x360
	// Line 1061, Address: 0x133e28, Func Offset: 0x378
	// Line 1062, Address: 0x133e3c, Func Offset: 0x38c
	// Line 1063, Address: 0x133e68, Func Offset: 0x3b8
	// Line 1066, Address: 0x133ea8, Func Offset: 0x3f8
	// Line 1067, Address: 0x133eb8, Func Offset: 0x408
	// Line 1068, Address: 0x133ecc, Func Offset: 0x41c
	// Line 1069, Address: 0x133ef4, Func Offset: 0x444
	// Line 1070, Address: 0x133f08, Func Offset: 0x458
	// Line 1071, Address: 0x133f38, Func Offset: 0x488
	// Line 1072, Address: 0x133f44, Func Offset: 0x494
	// Line 1073, Address: 0x133f60, Func Offset: 0x4b0
	// Line 1074, Address: 0x133f7c, Func Offset: 0x4cc
	// Line 1079, Address: 0x133f90, Func Offset: 0x4e0
	// Line 1083, Address: 0x133fa4, Func Offset: 0x4f4
	// Line 1085, Address: 0x133fd0, Func Offset: 0x520
	// Line 1088, Address: 0x134010, Func Offset: 0x560
	// Line 1089, Address: 0x134020, Func Offset: 0x570
	// Line 1090, Address: 0x13403c, Func Offset: 0x58c
	// Line 1091, Address: 0x134058, Func Offset: 0x5a8
	// Line 1092, Address: 0x134068, Func Offset: 0x5b8
	// Line 1096, Address: 0x13407c, Func Offset: 0x5cc
	// Line 1099, Address: 0x13408c, Func Offset: 0x5dc
	// Line 1100, Address: 0x13409c, Func Offset: 0x5ec
	// Line 1102, Address: 0x1340ac, Func Offset: 0x5fc
	// Line 1103, Address: 0x1340bc, Func Offset: 0x60c
	// Line 1104, Address: 0x1340c8, Func Offset: 0x618
	// Func End, Address: 0x1340fc, Func Offset: 0x64c
}

// 
// Start address: 0x134100
void KickCalcPartPacket()
{
	// Line 1111, Address: 0x134100, Func Offset: 0
	// Line 1112, Address: 0x134108, Func Offset: 0x8
	// Line 1113, Address: 0x134120, Func Offset: 0x20
	// Func End, Address: 0x134130, Func Offset: 0x30
}

// 
// Start address: 0x134130
void TransferToSPR()
{
	_anon0* toSPR;
	// Line 1130, Address: 0x134130, Func Offset: 0
	// Line 1131, Address: 0x13413c, Func Offset: 0xc
	// Line 1133, Address: 0x13414c, Func Offset: 0x1c
	// Line 1135, Address: 0x134154, Func Offset: 0x24
	// Line 1136, Address: 0x134160, Func Offset: 0x30
	// Line 1137, Address: 0x134178, Func Offset: 0x48
	// Line 1138, Address: 0x13418c, Func Offset: 0x5c
	// Func End, Address: 0x1341a0, Func Offset: 0x70
}

// 
// Start address: 0x1341a0
void PrepareSort()
{
	// Line 1145, Address: 0x1341a0, Func Offset: 0
	// Line 1146, Address: 0x1341a8, Func Offset: 0x8
	// Line 1147, Address: 0x1341b8, Func Offset: 0x18
	// Func End, Address: 0x1341c8, Func Offset: 0x28
}

// 
// Start address: 0x1341d0
void SortTriangleNormal(ktVif1Ot2* ot, Part* part)
{
	int z;
	Q min;
	<unknown fundamental type (0xa510)>* pPacket;
	int adc;
	Node* n0;
	unsigned int n;
	unsigned int n_;
	int i;
	Node* n1;
	Node* n2;
	int strip_length;
	unsigned int* strip_end;
	unsigned int* strip;
	PartHeader* part_header;
	TextureParam* texture_param;
	TextureParam* texture_params;
	TextPosParam* text_pos_param;
	TextPosParam* text_pos_params;
	int text_pos_index;
	unsigned short* text_pos_indices;
	int pk_page;
	TriangleNormal* pSprPacket;
	TriangleNormal* pk_base;
	_anon0* fromSPR;
	// Line 1154, Address: 0x1341d0, Func Offset: 0
	// Line 1155, Address: 0x134204, Func Offset: 0x34
	// Line 1156, Address: 0x134214, Func Offset: 0x44
	// Line 1158, Address: 0x13421c, Func Offset: 0x4c
	// Line 1159, Address: 0x134220, Func Offset: 0x50
	// Line 1160, Address: 0x134228, Func Offset: 0x58
	// Line 1161, Address: 0x134230, Func Offset: 0x60
	// Line 1162, Address: 0x134240, Func Offset: 0x70
	// Line 1163, Address: 0x134248, Func Offset: 0x78
	// Line 1168, Address: 0x134250, Func Offset: 0x80
	// Line 1170, Address: 0x134258, Func Offset: 0x88
	// Line 1171, Address: 0x134270, Func Offset: 0xa0
	// Line 1172, Address: 0x134284, Func Offset: 0xb4
	// Line 1173, Address: 0x1342ac, Func Offset: 0xdc
	// Line 1174, Address: 0x1342b0, Func Offset: 0xe0
	// Line 1180, Address: 0x1342b4, Func Offset: 0xe4
	// Line 1181, Address: 0x1342c0, Func Offset: 0xf0
	// Line 1183, Address: 0x1342cc, Func Offset: 0xfc
	// Line 1184, Address: 0x1342d8, Func Offset: 0x108
	// Line 1185, Address: 0x1342e8, Func Offset: 0x118
	// Line 1186, Address: 0x1342ec, Func Offset: 0x11c
	// Line 1187, Address: 0x1342fc, Func Offset: 0x12c
	// Line 1188, Address: 0x134300, Func Offset: 0x130
	// Line 1189, Address: 0x134314, Func Offset: 0x144
	// Line 1190, Address: 0x13431c, Func Offset: 0x14c
	// Line 1194, Address: 0x13432c, Func Offset: 0x15c
	// Line 1198, Address: 0x134334, Func Offset: 0x164
	// Line 1200, Address: 0x134350, Func Offset: 0x180
	// Line 1201, Address: 0x134358, Func Offset: 0x188
	// Line 1202, Address: 0x134360, Func Offset: 0x190
	// Line 1207, Address: 0x134368, Func Offset: 0x198
	// Line 1208, Address: 0x134370, Func Offset: 0x1a0
	// Line 1209, Address: 0x134378, Func Offset: 0x1a8
	// Line 1214, Address: 0x134380, Func Offset: 0x1b0
	// Line 1215, Address: 0x134388, Func Offset: 0x1b8
	// Line 1216, Address: 0x134390, Func Offset: 0x1c0
	// Line 1249, Address: 0x134398, Func Offset: 0x1c8
	// Line 1250, Address: 0x1343a8, Func Offset: 0x1d8
	// Line 1251, Address: 0x1343b8, Func Offset: 0x1e8
	// Line 1252, Address: 0x1343c0, Func Offset: 0x1f0
	// Line 1253, Address: 0x1343d8, Func Offset: 0x208
	// Line 1255, Address: 0x1343ec, Func Offset: 0x21c
	// Line 1260, Address: 0x1343f4, Func Offset: 0x224
	// Line 1261, Address: 0x134414, Func Offset: 0x244
	// Line 1262, Address: 0x13442c, Func Offset: 0x25c
	// Line 1263, Address: 0x134444, Func Offset: 0x274
	// Line 1267, Address: 0x134458, Func Offset: 0x288
	// Line 1268, Address: 0x13445c, Func Offset: 0x28c
	// Line 1271, Address: 0x134460, Func Offset: 0x290
	// Line 1274, Address: 0x134478, Func Offset: 0x2a8
	// Line 1275, Address: 0x134498, Func Offset: 0x2c8
	// Func End, Address: 0x1344cc, Func Offset: 0x2fc
}

// 
// Start address: 0x1344d0
void SortTriangleNormalEnviron(ktVif1Ot2* ot, Part* part)
{
	int z;
	Q min;
	<unknown fundamental type (0xa510)>* pp;
	int adc;
	Node* n0;
	unsigned int n;
	unsigned int n_;
	int i;
	Node* n1;
	Node* n2;
	int strip_length;
	unsigned int* strip_end;
	unsigned int* strip;
	PartHeader* part_header;
	TextureParam* texture_param;
	TextureParam* texture_params;
	TextPosParam* text_pos_param;
	TextPosParam* text_pos_params;
	int text_pos_index;
	unsigned short* text_pos_indices;
	int pk_page;
	TriangleNormalEnviron* pk;
	TriangleNormalEnviron* pk_base;
	_anon0* fromSPR;
	// Line 1282, Address: 0x1344d0, Func Offset: 0
	// Line 1283, Address: 0x134504, Func Offset: 0x34
	// Line 1284, Address: 0x134514, Func Offset: 0x44
	// Line 1286, Address: 0x134520, Func Offset: 0x50
	// Line 1287, Address: 0x134524, Func Offset: 0x54
	// Line 1288, Address: 0x13452c, Func Offset: 0x5c
	// Line 1289, Address: 0x134534, Func Offset: 0x64
	// Line 1290, Address: 0x134544, Func Offset: 0x74
	// Line 1291, Address: 0x13454c, Func Offset: 0x7c
	// Line 1296, Address: 0x134554, Func Offset: 0x84
	// Line 1298, Address: 0x13455c, Func Offset: 0x8c
	// Line 1299, Address: 0x134574, Func Offset: 0xa4
	// Line 1300, Address: 0x134588, Func Offset: 0xb8
	// Line 1301, Address: 0x1345b0, Func Offset: 0xe0
	// Line 1302, Address: 0x1345b4, Func Offset: 0xe4
	// Line 1305, Address: 0x1345b8, Func Offset: 0xe8
	// Line 1306, Address: 0x1345c4, Func Offset: 0xf4
	// Line 1307, Address: 0x1345d0, Func Offset: 0x100
	// Line 1308, Address: 0x1345ec, Func Offset: 0x11c
	// Line 1311, Address: 0x134634, Func Offset: 0x164
	// Line 1312, Address: 0x134640, Func Offset: 0x170
	// Line 1313, Address: 0x134650, Func Offset: 0x180
	// Line 1314, Address: 0x134654, Func Offset: 0x184
	// Line 1315, Address: 0x134664, Func Offset: 0x194
	// Line 1317, Address: 0x134668, Func Offset: 0x198
	// Line 1318, Address: 0x134670, Func Offset: 0x1a0
	// Line 1322, Address: 0x134680, Func Offset: 0x1b0
	// Line 1326, Address: 0x134688, Func Offset: 0x1b8
	// Line 1328, Address: 0x1346a4, Func Offset: 0x1d4
	// Line 1329, Address: 0x1346ac, Func Offset: 0x1dc
	// Line 1330, Address: 0x1346b4, Func Offset: 0x1e4
	// Line 1331, Address: 0x1346bc, Func Offset: 0x1ec
	// Line 1332, Address: 0x1346c4, Func Offset: 0x1f4
	// Line 1333, Address: 0x1346cc, Func Offset: 0x1fc
	// Line 1335, Address: 0x1346d4, Func Offset: 0x204
	// Line 1336, Address: 0x1346dc, Func Offset: 0x20c
	// Line 1337, Address: 0x1346e4, Func Offset: 0x214
	// Line 1338, Address: 0x1346ec, Func Offset: 0x21c
	// Line 1339, Address: 0x1346f4, Func Offset: 0x224
	// Line 1340, Address: 0x1346fc, Func Offset: 0x22c
	// Line 1341, Address: 0x134704, Func Offset: 0x234
	// Line 1342, Address: 0x134750, Func Offset: 0x280
	// Line 1344, Address: 0x134798, Func Offset: 0x2c8
	// Line 1345, Address: 0x1347a0, Func Offset: 0x2d0
	// Line 1346, Address: 0x1347a8, Func Offset: 0x2d8
	// Line 1347, Address: 0x1347b0, Func Offset: 0x2e0
	// Line 1348, Address: 0x1347b8, Func Offset: 0x2e8
	// Line 1349, Address: 0x1347c0, Func Offset: 0x2f0
	// Line 1350, Address: 0x1347c8, Func Offset: 0x2f8
	// Line 1351, Address: 0x134810, Func Offset: 0x340
	// Line 1354, Address: 0x134858, Func Offset: 0x388
	// Line 1355, Address: 0x134868, Func Offset: 0x398
	// Line 1356, Address: 0x134878, Func Offset: 0x3a8
	// Line 1357, Address: 0x134880, Func Offset: 0x3b0
	// Line 1358, Address: 0x134898, Func Offset: 0x3c8
	// Line 1360, Address: 0x1348ac, Func Offset: 0x3dc
	// Line 1365, Address: 0x1348b4, Func Offset: 0x3e4
	// Line 1366, Address: 0x1348d4, Func Offset: 0x404
	// Line 1367, Address: 0x1348ec, Func Offset: 0x41c
	// Line 1368, Address: 0x134904, Func Offset: 0x434
	// Line 1370, Address: 0x134908, Func Offset: 0x438
	// Line 1371, Address: 0x13490c, Func Offset: 0x43c
	// Line 1372, Address: 0x134910, Func Offset: 0x440
	// Line 1375, Address: 0x134928, Func Offset: 0x458
	// Line 1376, Address: 0x134948, Func Offset: 0x478
	// Func End, Address: 0x13497c, Func Offset: 0x4ac
}

// 
// Start address: 0x134980
void SortTriangleNormalSpecular(ktVif1Ot2* ot, Part* part)
{
	int z;
	Q min;
	<unknown fundamental type (0xa510)>* pp;
	int adc;
	Node* n0;
	unsigned int n;
	unsigned int n_;
	int i;
	Node* n1;
	Node* n2;
	int strip_length;
	unsigned int* strip_end;
	unsigned int* strip;
	PartHeader* part_header;
	float* reflection_color;
	TextureParam* texture_param;
	TextureParam* texture_params;
	TextPosParam* text_pos_param;
	TextPosParam* text_pos_params;
	int text_pos_index;
	unsigned short* text_pos_indices;
	int pk_page;
	TriangleNormalSpecular* pk;
	TriangleNormalSpecular* pk_base;
	_anon0* fromSPR;
	// Line 1383, Address: 0x134980, Func Offset: 0
	// Line 1384, Address: 0x1349b4, Func Offset: 0x34
	// Line 1385, Address: 0x1349c4, Func Offset: 0x44
	// Line 1387, Address: 0x1349d0, Func Offset: 0x50
	// Line 1388, Address: 0x1349d4, Func Offset: 0x54
	// Line 1389, Address: 0x1349dc, Func Offset: 0x5c
	// Line 1390, Address: 0x1349e4, Func Offset: 0x64
	// Line 1391, Address: 0x1349f4, Func Offset: 0x74
	// Line 1392, Address: 0x1349fc, Func Offset: 0x7c
	// Line 1394, Address: 0x134a04, Func Offset: 0x84
	// Line 1398, Address: 0x134a10, Func Offset: 0x90
	// Line 1400, Address: 0x134a18, Func Offset: 0x98
	// Line 1401, Address: 0x134a30, Func Offset: 0xb0
	// Line 1402, Address: 0x134a44, Func Offset: 0xc4
	// Line 1403, Address: 0x134a6c, Func Offset: 0xec
	// Line 1404, Address: 0x134a70, Func Offset: 0xf0
	// Line 1407, Address: 0x134a74, Func Offset: 0xf4
	// Line 1408, Address: 0x134a80, Func Offset: 0x100
	// Line 1409, Address: 0x134a8c, Func Offset: 0x10c
	// Line 1410, Address: 0x134aa8, Func Offset: 0x128
	// Line 1411, Address: 0x134ac4, Func Offset: 0x144
	// Line 1412, Address: 0x134ae0, Func Offset: 0x160
	// Line 1413, Address: 0x134aec, Func Offset: 0x16c
	// Line 1415, Address: 0x134afc, Func Offset: 0x17c
	// Line 1416, Address: 0x134b08, Func Offset: 0x188
	// Line 1417, Address: 0x134b18, Func Offset: 0x198
	// Line 1418, Address: 0x134b1c, Func Offset: 0x19c
	// Line 1419, Address: 0x134b2c, Func Offset: 0x1ac
	// Line 1421, Address: 0x134b30, Func Offset: 0x1b0
	// Line 1422, Address: 0x134b38, Func Offset: 0x1b8
	// Line 1426, Address: 0x134b48, Func Offset: 0x1c8
	// Line 1430, Address: 0x134b50, Func Offset: 0x1d0
	// Line 1432, Address: 0x134b6c, Func Offset: 0x1ec
	// Line 1433, Address: 0x134b74, Func Offset: 0x1f4
	// Line 1434, Address: 0x134b7c, Func Offset: 0x1fc
	// Line 1435, Address: 0x134b84, Func Offset: 0x204
	// Line 1436, Address: 0x134b8c, Func Offset: 0x20c
	// Line 1438, Address: 0x134b94, Func Offset: 0x214
	// Line 1439, Address: 0x134b9c, Func Offset: 0x21c
	// Line 1440, Address: 0x134ba4, Func Offset: 0x224
	// Line 1441, Address: 0x134bac, Func Offset: 0x22c
	// Line 1442, Address: 0x134bb4, Func Offset: 0x234
	// Line 1444, Address: 0x134bbc, Func Offset: 0x23c
	// Line 1445, Address: 0x134bc4, Func Offset: 0x244
	// Line 1446, Address: 0x134bcc, Func Offset: 0x24c
	// Line 1447, Address: 0x134bd4, Func Offset: 0x254
	// Line 1448, Address: 0x134bdc, Func Offset: 0x25c
	// Line 1452, Address: 0x134be4, Func Offset: 0x264
	// Line 1453, Address: 0x134bf4, Func Offset: 0x274
	// Line 1454, Address: 0x134c04, Func Offset: 0x284
	// Line 1455, Address: 0x134c0c, Func Offset: 0x28c
	// Line 1456, Address: 0x134c20, Func Offset: 0x2a0
	// Line 1458, Address: 0x134c34, Func Offset: 0x2b4
	// Line 1463, Address: 0x134c3c, Func Offset: 0x2bc
	// Line 1464, Address: 0x134c5c, Func Offset: 0x2dc
	// Line 1465, Address: 0x134c74, Func Offset: 0x2f4
	// Line 1466, Address: 0x134c8c, Func Offset: 0x30c
	// Line 1468, Address: 0x134c90, Func Offset: 0x310
	// Line 1469, Address: 0x134c94, Func Offset: 0x314
	// Line 1470, Address: 0x134c98, Func Offset: 0x318
	// Line 1473, Address: 0x134cb0, Func Offset: 0x330
	// Line 1474, Address: 0x134cd0, Func Offset: 0x350
	// Func End, Address: 0x134d04, Func Offset: 0x384
}

// 
// Start address: 0x134d10
void SortTriangleNormalEnvironSpecular(ktVif1Ot2* ot, Part* part)
{
	int z;
	Q min;
	<unknown fundamental type (0xa510)>* pp;
	int adc;
	Node* n0;
	unsigned int n;
	unsigned int n_;
	int i;
	Node* n1;
	Node* n2;
	int strip_length;
	unsigned int* strip_end;
	unsigned int* strip;
	PartHeader* part_header;
	float* reflection_color;
	TextureParam* texture_param;
	TextureParam* texture_params;
	TextPosParam* text_pos_param;
	TextPosParam* text_pos_params;
	int text_pos_index;
	unsigned short* text_pos_indices;
	int pk_page;
	TriangleNormalEnvironSpecular* pk;
	TriangleNormalEnvironSpecular* pk_base;
	_anon0* fromSPR;
	// Line 1481, Address: 0x134d10, Func Offset: 0
	// Line 1482, Address: 0x134d44, Func Offset: 0x34
	// Line 1483, Address: 0x134d54, Func Offset: 0x44
	// Line 1485, Address: 0x134d60, Func Offset: 0x50
	// Line 1486, Address: 0x134d64, Func Offset: 0x54
	// Line 1487, Address: 0x134d6c, Func Offset: 0x5c
	// Line 1488, Address: 0x134d74, Func Offset: 0x64
	// Line 1489, Address: 0x134d84, Func Offset: 0x74
	// Line 1490, Address: 0x134d8c, Func Offset: 0x7c
	// Line 1492, Address: 0x134d94, Func Offset: 0x84
	// Line 1496, Address: 0x134da0, Func Offset: 0x90
	// Line 1498, Address: 0x134da8, Func Offset: 0x98
	// Line 1499, Address: 0x134dc0, Func Offset: 0xb0
	// Line 1500, Address: 0x134dd4, Func Offset: 0xc4
	// Line 1501, Address: 0x134dfc, Func Offset: 0xec
	// Line 1502, Address: 0x134e00, Func Offset: 0xf0
	// Line 1505, Address: 0x134e04, Func Offset: 0xf4
	// Line 1506, Address: 0x134e10, Func Offset: 0x100
	// Line 1507, Address: 0x134e1c, Func Offset: 0x10c
	// Line 1508, Address: 0x134e38, Func Offset: 0x128
	// Line 1510, Address: 0x134e80, Func Offset: 0x170
	// Line 1511, Address: 0x134e9c, Func Offset: 0x18c
	// Line 1512, Address: 0x134eb8, Func Offset: 0x1a8
	// Line 1513, Address: 0x134ed4, Func Offset: 0x1c4
	// Line 1514, Address: 0x134ee0, Func Offset: 0x1d0
	// Line 1516, Address: 0x134ef0, Func Offset: 0x1e0
	// Line 1517, Address: 0x134efc, Func Offset: 0x1ec
	// Line 1518, Address: 0x134f0c, Func Offset: 0x1fc
	// Line 1519, Address: 0x134f10, Func Offset: 0x200
	// Line 1520, Address: 0x134f20, Func Offset: 0x210
	// Line 1522, Address: 0x134f24, Func Offset: 0x214
	// Line 1523, Address: 0x134f2c, Func Offset: 0x21c
	// Line 1527, Address: 0x134f3c, Func Offset: 0x22c
	// Line 1531, Address: 0x134f44, Func Offset: 0x234
	// Line 1533, Address: 0x134f60, Func Offset: 0x250
	// Line 1534, Address: 0x134f68, Func Offset: 0x258
	// Line 1535, Address: 0x134f70, Func Offset: 0x260
	// Line 1536, Address: 0x134f78, Func Offset: 0x268
	// Line 1537, Address: 0x134f80, Func Offset: 0x270
	// Line 1538, Address: 0x134f88, Func Offset: 0x278
	// Line 1539, Address: 0x134f90, Func Offset: 0x280
	// Line 1540, Address: 0x134f98, Func Offset: 0x288
	// Line 1542, Address: 0x134fa0, Func Offset: 0x290
	// Line 1543, Address: 0x134fa8, Func Offset: 0x298
	// Line 1544, Address: 0x134fb0, Func Offset: 0x2a0
	// Line 1545, Address: 0x134fb8, Func Offset: 0x2a8
	// Line 1546, Address: 0x134fc0, Func Offset: 0x2b0
	// Line 1547, Address: 0x134fc8, Func Offset: 0x2b8
	// Line 1548, Address: 0x134fd0, Func Offset: 0x2c0
	// Line 1549, Address: 0x134fd8, Func Offset: 0x2c8
	// Line 1550, Address: 0x134fe0, Func Offset: 0x2d0
	// Line 1551, Address: 0x135028, Func Offset: 0x318
	// Line 1553, Address: 0x135070, Func Offset: 0x360
	// Line 1554, Address: 0x135078, Func Offset: 0x368
	// Line 1555, Address: 0x135080, Func Offset: 0x370
	// Line 1556, Address: 0x135088, Func Offset: 0x378
	// Line 1557, Address: 0x135090, Func Offset: 0x380
	// Line 1558, Address: 0x135098, Func Offset: 0x388
	// Line 1559, Address: 0x1350a0, Func Offset: 0x390
	// Line 1560, Address: 0x1350a8, Func Offset: 0x398
	// Line 1561, Address: 0x1350b0, Func Offset: 0x3a0
	// Line 1562, Address: 0x1350f8, Func Offset: 0x3e8
	// Line 1565, Address: 0x135140, Func Offset: 0x430
	// Line 1566, Address: 0x135150, Func Offset: 0x440
	// Line 1567, Address: 0x135160, Func Offset: 0x450
	// Line 1568, Address: 0x135168, Func Offset: 0x458
	// Line 1569, Address: 0x135180, Func Offset: 0x470
	// Line 1571, Address: 0x135194, Func Offset: 0x484
	// Line 1576, Address: 0x13519c, Func Offset: 0x48c
	// Line 1577, Address: 0x1351bc, Func Offset: 0x4ac
	// Line 1578, Address: 0x1351d4, Func Offset: 0x4c4
	// Line 1579, Address: 0x1351ec, Func Offset: 0x4dc
	// Line 1581, Address: 0x1351f0, Func Offset: 0x4e0
	// Line 1582, Address: 0x1351f4, Func Offset: 0x4e4
	// Line 1583, Address: 0x1351f8, Func Offset: 0x4e8
	// Line 1586, Address: 0x135210, Func Offset: 0x500
	// Line 1587, Address: 0x135230, Func Offset: 0x520
	// Func End, Address: 0x135264, Func Offset: 0x554
}

// 
// Start address: 0x135270
void SortTriangleSpecularNormal(ktVif1Ot2* ot, Part* part)
{
	int z;
	Q min;
	<unknown fundamental type (0xa510)>* pp;
	int adc;
	Node* n0;
	unsigned int n;
	unsigned int n_;
	int i;
	Node* n1;
	Node* n2;
	int strip_length;
	unsigned int* strip_end;
	unsigned int* strip;
	PartHeader* part_header;
	float* reflection_color;
	TextureParam* texture_param;
	TextureParam* texture_params;
	TextPosParam* text_pos_param;
	TextPosParam* text_pos_params;
	int text_pos_index;
	unsigned short* text_pos_indices;
	int pk_page;
	TriangleSpecularNormal* pk;
	TriangleSpecularNormal* pk_base;
	_anon0* fromSPR;
	// Line 1594, Address: 0x135270, Func Offset: 0
	// Line 1595, Address: 0x1352a4, Func Offset: 0x34
	// Line 1596, Address: 0x1352b4, Func Offset: 0x44
	// Line 1598, Address: 0x1352c0, Func Offset: 0x50
	// Line 1599, Address: 0x1352c4, Func Offset: 0x54
	// Line 1600, Address: 0x1352cc, Func Offset: 0x5c
	// Line 1601, Address: 0x1352d4, Func Offset: 0x64
	// Line 1602, Address: 0x1352e4, Func Offset: 0x74
	// Line 1603, Address: 0x1352ec, Func Offset: 0x7c
	// Line 1605, Address: 0x1352f4, Func Offset: 0x84
	// Line 1609, Address: 0x135300, Func Offset: 0x90
	// Line 1611, Address: 0x135308, Func Offset: 0x98
	// Line 1612, Address: 0x135320, Func Offset: 0xb0
	// Line 1613, Address: 0x135334, Func Offset: 0xc4
	// Line 1614, Address: 0x13535c, Func Offset: 0xec
	// Line 1615, Address: 0x135360, Func Offset: 0xf0
	// Line 1618, Address: 0x135364, Func Offset: 0xf4
	// Line 1619, Address: 0x135380, Func Offset: 0x110
	// Line 1620, Address: 0x13539c, Func Offset: 0x12c
	// Line 1621, Address: 0x1353b8, Func Offset: 0x148
	// Line 1622, Address: 0x1353c4, Func Offset: 0x154
	// Line 1623, Address: 0x1353d4, Func Offset: 0x164
	// Line 1624, Address: 0x1353e0, Func Offset: 0x170
	// Line 1626, Address: 0x1353ec, Func Offset: 0x17c
	// Line 1627, Address: 0x1353f8, Func Offset: 0x188
	// Line 1628, Address: 0x135408, Func Offset: 0x198
	// Line 1629, Address: 0x13540c, Func Offset: 0x19c
	// Line 1630, Address: 0x13541c, Func Offset: 0x1ac
	// Line 1632, Address: 0x135420, Func Offset: 0x1b0
	// Line 1633, Address: 0x135428, Func Offset: 0x1b8
	// Line 1637, Address: 0x135438, Func Offset: 0x1c8
	// Line 1641, Address: 0x135440, Func Offset: 0x1d0
	// Line 1643, Address: 0x13545c, Func Offset: 0x1ec
	// Line 1644, Address: 0x135464, Func Offset: 0x1f4
	// Line 1645, Address: 0x13546c, Func Offset: 0x1fc
	// Line 1646, Address: 0x135474, Func Offset: 0x204
	// Line 1647, Address: 0x13547c, Func Offset: 0x20c
	// Line 1649, Address: 0x135484, Func Offset: 0x214
	// Line 1650, Address: 0x13548c, Func Offset: 0x21c
	// Line 1651, Address: 0x135494, Func Offset: 0x224
	// Line 1652, Address: 0x13549c, Func Offset: 0x22c
	// Line 1653, Address: 0x1354a4, Func Offset: 0x234
	// Line 1655, Address: 0x1354ac, Func Offset: 0x23c
	// Line 1656, Address: 0x1354b4, Func Offset: 0x244
	// Line 1657, Address: 0x1354bc, Func Offset: 0x24c
	// Line 1658, Address: 0x1354c4, Func Offset: 0x254
	// Line 1659, Address: 0x1354cc, Func Offset: 0x25c
	// Line 1662, Address: 0x1354d4, Func Offset: 0x264
	// Line 1663, Address: 0x1354e4, Func Offset: 0x274
	// Line 1664, Address: 0x1354f4, Func Offset: 0x284
	// Line 1665, Address: 0x1354fc, Func Offset: 0x28c
	// Line 1666, Address: 0x135510, Func Offset: 0x2a0
	// Line 1668, Address: 0x135524, Func Offset: 0x2b4
	// Line 1673, Address: 0x13552c, Func Offset: 0x2bc
	// Line 1674, Address: 0x13554c, Func Offset: 0x2dc
	// Line 1675, Address: 0x135564, Func Offset: 0x2f4
	// Line 1676, Address: 0x13557c, Func Offset: 0x30c
	// Line 1678, Address: 0x135580, Func Offset: 0x310
	// Line 1679, Address: 0x135584, Func Offset: 0x314
	// Line 1680, Address: 0x135588, Func Offset: 0x318
	// Line 1683, Address: 0x1355a0, Func Offset: 0x330
	// Line 1684, Address: 0x1355c0, Func Offset: 0x350
	// Func End, Address: 0x1355f4, Func Offset: 0x384
}

// 
// Start address: 0x135600
void DrawPart0(ktVif1Ot2* ot, Part* part, ModelWork* work)
{
	_anon0* toSPR;
	int func_no;
	// Line 1709, Address: 0x135600, Func Offset: 0
	// Line 1710, Address: 0x13561c, Func Offset: 0x1c
	// Line 1713, Address: 0x135620, Func Offset: 0x20
	// Line 1714, Address: 0x135640, Func Offset: 0x40
	// Line 1715, Address: 0x135644, Func Offset: 0x44
	// Line 1720, Address: 0x13564c, Func Offset: 0x4c
	// Line 1722, Address: 0x135664, Func Offset: 0x64
	// Line 1723, Address: 0x135674, Func Offset: 0x74
	// Line 1725, Address: 0x135678, Func Offset: 0x78
	// Line 1726, Address: 0x135690, Func Offset: 0x90
	// Line 1727, Address: 0x135694, Func Offset: 0x94
	// Line 1728, Address: 0x1356a4, Func Offset: 0xa4
	// Line 1732, Address: 0x1356a8, Func Offset: 0xa8
	// Line 1733, Address: 0x1356c4, Func Offset: 0xc4
	// Line 1735, Address: 0x1356d4, Func Offset: 0xd4
	// Line 1736, Address: 0x1356f4, Func Offset: 0xf4
	// Line 1741, Address: 0x135718, Func Offset: 0x118
	// Line 1742, Address: 0x13572c, Func Offset: 0x12c
	// Func End, Address: 0x135744, Func Offset: 0x144
}

// 
// Start address: 0x135750
void DrawParts0(ktVif1Ot2* ot, Model* model, ModelWork* work)
{
	Part* next;
	int i;
	Part* part;
	Part* parts_top;
	int n_parts;
	// Line 1750, Address: 0x135750, Func Offset: 0
	// Line 1754, Address: 0x135778, Func Offset: 0x28
	// Line 1755, Address: 0x135780, Func Offset: 0x30
	// Line 1759, Address: 0x135790, Func Offset: 0x40
	// Line 1764, Address: 0x135798, Func Offset: 0x48
	// Line 1767, Address: 0x1357a0, Func Offset: 0x50
	// Line 1769, Address: 0x1357a8, Func Offset: 0x58
	// Line 1771, Address: 0x1357ac, Func Offset: 0x5c
	// Line 1772, Address: 0x1357b8, Func Offset: 0x68
	// Line 1773, Address: 0x1357c0, Func Offset: 0x70
	// Line 1774, Address: 0x1357c8, Func Offset: 0x78
	// Line 1775, Address: 0x1357d4, Func Offset: 0x84
	// Line 1776, Address: 0x1357dc, Func Offset: 0x8c
	// Line 1777, Address: 0x1357e8, Func Offset: 0x98
	// Line 1778, Address: 0x1357f0, Func Offset: 0xa0
	// Line 1779, Address: 0x1357f8, Func Offset: 0xa8
	// Line 1780, Address: 0x13580c, Func Offset: 0xbc
	// Line 1781, Address: 0x135810, Func Offset: 0xc0
	// Line 1782, Address: 0x135824, Func Offset: 0xd4
	// Line 1783, Address: 0x13582c, Func Offset: 0xdc
	// Line 1784, Address: 0x135840, Func Offset: 0xf0
	// Func End, Address: 0x135864, Func Offset: 0x114
}

// 
// Start address: 0x135870
void Model3DrawVu0Parts(Model* model, ModelWork* work)
{
	ktVif1Ot2* ot;
	// Line 1801, Address: 0x135870, Func Offset: 0
	// Line 1805, Address: 0x135884, Func Offset: 0x14
	// Line 1807, Address: 0x135890, Func Offset: 0x20
	// Line 1808, Address: 0x135898, Func Offset: 0x28
	// Line 1809, Address: 0x1358a0, Func Offset: 0x30
	// Line 1811, Address: 0x1358a8, Func Offset: 0x38
	// Line 1812, Address: 0x1358b0, Func Offset: 0x40
	// Line 1816, Address: 0x1358b8, Func Offset: 0x48
	// Line 1822, Address: 0x1358cc, Func Offset: 0x5c
	// Line 1823, Address: 0x1358dc, Func Offset: 0x6c
	// Line 1836, Address: 0x1358f4, Func Offset: 0x84
	// Line 1837, Address: 0x135908, Func Offset: 0x98
	// Func End, Address: 0x13591c, Func Offset: 0xac
}

