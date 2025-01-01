typedef struct Node;
typedef struct TextureParam;
typedef struct TextPosParam;
typedef struct TriangleSpecularNormal;
typedef struct PartHeader;
typedef struct EMapData;
typedef struct TriangleNormalEnvironSpecular;
typedef struct Part;
typedef struct Light;
typedef struct _anon0;
typedef struct _anon1;
typedef struct ModelWork;
typedef struct ELightData;
typedef struct TriangleNormal;
typedef struct TriangleNormalEnviron;
typedef struct TriangleNormalSpecular;
typedef struct SMapData;
typedef struct ktVif1Ot2;
typedef struct _sceDmaTag;
typedef struct PersData;
typedef struct PLightData;
typedef struct Lambert0Data;
typedef struct AllData_Vu0;
typedef struct Lambert1Data;
typedef struct Model;
typedef struct Model3Junk;
typedef struct AllPacket;
typedef struct Data_0;
typedef struct ClusterData;
typedef struct _anon2;
typedef struct Data_1;
typedef union Q;
typedef struct ModelCommonWork;

typedef int(*type_4)(void*, void*, void*);
typedef void(*type_35)(ktVif1Ot2*, Part*);

typedef <unknown fundamental type (0xa510)> type_0[0];
typedef <unknown fundamental type (0xa510)> type_1[0];
typedef float type_2[4][4];
typedef float type_3[4];
typedef <unknown fundamental type (0xa510)> type_5[0];
typedef <unknown fundamental type (0xa510)> type_6[4];
typedef int type_7[4];
typedef <unknown fundamental type (0xa510)> type_8[0];
typedef int type_9[4];
typedef float type_10[4];
typedef float type_11[4];
typedef TriangleNormal type_12[2];
typedef unsigned char type_13[2];
typedef TriangleNormalEnviron type_14[2];
typedef <unknown fundamental type (0xa510)> type_15[0];
typedef TriangleNormalSpecular type_16[2];
typedef TriangleNormalEnvironSpecular type_17[2];
typedef unsigned int type_18[3];
typedef TriangleSpecularNormal type_19[2];
typedef <unknown fundamental type (0xa510)> type_20[0];
typedef unsigned int type_21[2];
typedef float type_22[4];
typedef float type_23[4][2];
typedef <unknown fundamental type (0xa510)> type_24[0];
typedef <unknown fundamental type (0xa510)> type_25[0];
typedef float type_26[4];
typedef float type_27[4][2];
typedef unsigned long type_28[2];
typedef unsigned int type_29[4];
typedef float type_30[4][4][128];
typedef unsigned short type_31[8];
typedef unsigned char type_32[16];
typedef unsigned int type_33[3];
typedef float type_34[4][4][256];
typedef void(*type_36)(ktVif1Ot2*, Part*)[8];
typedef long type_37[2];
typedef <unknown fundamental type (0xa510)> type_38[0];
typedef float type_39[4][2048];
typedef int type_40[4];
typedef unsigned int type_41[3];
typedef PLightData type_42[4];
typedef short type_43[8];
typedef unsigned int type_44[3];
typedef ELightData type_45[8];
typedef char type_46[16];
typedef unsigned int type_47[3];
typedef TextPosParam type_48[64];
typedef <unknown fundamental type (0xa510)> type_49[0];
typedef unsigned int type_50[3];
typedef unsigned int type_51[3];
typedef unsigned int type_52[4];
typedef AllData_Vu0 type_53[2];
typedef unsigned int type_54[4];
typedef <unknown fundamental type (0xa510)> type_55[0];
typedef unsigned int type_56[3];

struct Node
{
	Q d0;
	Q d1;
	Q d2;
	Q d3;
};

struct TextureParam
{
	unsigned long clamp;
	unsigned long tex1;
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

struct EMapData
{
	float vwm[4][4];
	float mag[4];
	float offset[4];
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

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	short cid;
	short fakekind;
	float inf_fac;
	void* DrawEnv_LightData;
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

struct _anon0
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

struct _anon1
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

struct ELightData
{
	float pos[4];
	float dir[4];
	float col[4];
	float param[4];
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

struct SMapData
{
	float nhm[4][4];
};

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

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct PersData
{
	float vsp[4][2];
	float vcp[4][2];
	float xyz_min[4];
	float xyz_max[4];
	float rgba_max[4];
};

struct PLightData
{
	float nlm[4][4];
	float lcm[4][4];
};

struct Lambert0Data
{
	float nlm[4][4];
	float lcm[4][4];
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

struct Lambert1Data
{
	float global_ambient[4];
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

struct AllPacket
{
	TriangleNormal normal[2];
	TriangleNormalEnviron normal_environ[2];
	TriangleNormalSpecular normal_specular[2];
	TriangleNormalEnvironSpecular normal_environ_specular[2];
	TriangleSpecularNormal specular_normal[2];
};

struct Data_0
{
	float diffuse[4];
	float ambient[4];
	float param[4];
};

struct ClusterData
{
	unsigned short src;
	unsigned short dst;
	unsigned short n;
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

struct Data_1
{
	float param[4];
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
void MakePartTransferPacket_Vu0(Part* part, _anon0* pk);
void MakeLambertShadingPacket(Part* part, _anon0* pk);
void MakeClipPacket(Part* part, _anon0* pk);
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
// Start address: 0x128ef0
void InitTriangleNormal(TriangleNormal* p)
{
	int qwc;
	// Line 343, Address: 0x128ef0, Func Offset: 0
	// Line 344, Address: 0x128efc, Func Offset: 0xc
	// Line 345, Address: 0x128f00, Func Offset: 0x10
	// Line 347, Address: 0x128f0c, Func Offset: 0x1c
	// Line 355, Address: 0x128f20, Func Offset: 0x30
	// Line 359, Address: 0x128f38, Func Offset: 0x48
	// Line 360, Address: 0x128f40, Func Offset: 0x50
	// Line 361, Address: 0x128f48, Func Offset: 0x58
	// Func End, Address: 0x128f50, Func Offset: 0x60
}

// 
// Start address: 0x128f50
void InitTriangleNormalEnviron(TriangleNormalEnviron* p)
{
	int qwc;
	// Line 365, Address: 0x128f50, Func Offset: 0
	// Line 367, Address: 0x128f54, Func Offset: 0x4
	// Line 368, Address: 0x128f60, Func Offset: 0x10
	// Line 369, Address: 0x128f64, Func Offset: 0x14
	// Line 372, Address: 0x128f70, Func Offset: 0x20
	// Line 374, Address: 0x128f84, Func Offset: 0x34
	// Line 378, Address: 0x128f9c, Func Offset: 0x4c
	// Line 379, Address: 0x128fa4, Func Offset: 0x54
	// Line 382, Address: 0x128fac, Func Offset: 0x5c
	// Line 384, Address: 0x128fc0, Func Offset: 0x70
	// Line 388, Address: 0x128fd8, Func Offset: 0x88
	// Line 389, Address: 0x128fdc, Func Offset: 0x8c
	// Line 390, Address: 0x128fe4, Func Offset: 0x94
	// Line 391, Address: 0x128fe8, Func Offset: 0x98
	// Line 392, Address: 0x129010, Func Offset: 0xc0
	// Line 393, Address: 0x129018, Func Offset: 0xc8
	// Line 394, Address: 0x12901c, Func Offset: 0xcc
	// Line 395, Address: 0x129020, Func Offset: 0xd0
	// Line 396, Address: 0x129024, Func Offset: 0xd4
	// Func End, Address: 0x129030, Func Offset: 0xe0
}

// 
// Start address: 0x129030
void InitTriangleNormalSpecular(TriangleNormalSpecular* p)
{
	int qwc;
	// Line 402, Address: 0x129030, Func Offset: 0
	// Line 403, Address: 0x12903c, Func Offset: 0xc
	// Line 404, Address: 0x129040, Func Offset: 0x10
	// Line 407, Address: 0x12904c, Func Offset: 0x1c
	// Line 409, Address: 0x129060, Func Offset: 0x30
	// Line 413, Address: 0x129078, Func Offset: 0x48
	// Line 414, Address: 0x129080, Func Offset: 0x50
	// Line 417, Address: 0x129088, Func Offset: 0x58
	// Line 419, Address: 0x12909c, Func Offset: 0x6c
	// Line 424, Address: 0x1290b8, Func Offset: 0x88
	// Line 425, Address: 0x1290d0, Func Offset: 0xa0
	// Line 426, Address: 0x1290d4, Func Offset: 0xa4
	// Line 427, Address: 0x1290dc, Func Offset: 0xac
	// Line 429, Address: 0x1290e0, Func Offset: 0xb0
	// Line 430, Address: 0x1290e8, Func Offset: 0xb8
	// Line 432, Address: 0x1290f0, Func Offset: 0xc0
	// Line 433, Address: 0x1290f4, Func Offset: 0xc4
	// Line 434, Address: 0x1290fc, Func Offset: 0xcc
	// Line 435, Address: 0x129104, Func Offset: 0xd4
	// Line 436, Address: 0x129108, Func Offset: 0xd8
	// Line 438, Address: 0x12910c, Func Offset: 0xdc
	// Line 439, Address: 0x129114, Func Offset: 0xe4
	// Line 441, Address: 0x129118, Func Offset: 0xe8
	// Line 442, Address: 0x12911c, Func Offset: 0xec
	// Func End, Address: 0x129124, Func Offset: 0xf4
}

// 
// Start address: 0x129130
void InitTriangleNormalEnvironSpecular(TriangleNormalEnvironSpecular* p)
{
	int qwc;
	// Line 446, Address: 0x129130, Func Offset: 0
	// Line 448, Address: 0x129134, Func Offset: 0x4
	// Line 449, Address: 0x129140, Func Offset: 0x10
	// Line 450, Address: 0x129144, Func Offset: 0x14
	// Line 453, Address: 0x129150, Func Offset: 0x20
	// Line 455, Address: 0x129164, Func Offset: 0x34
	// Line 459, Address: 0x12917c, Func Offset: 0x4c
	// Line 460, Address: 0x129184, Func Offset: 0x54
	// Line 463, Address: 0x12918c, Func Offset: 0x5c
	// Line 465, Address: 0x1291a0, Func Offset: 0x70
	// Line 469, Address: 0x1291b8, Func Offset: 0x88
	// Line 470, Address: 0x1291bc, Func Offset: 0x8c
	// Line 471, Address: 0x1291c4, Func Offset: 0x94
	// Line 472, Address: 0x1291c8, Func Offset: 0x98
	// Line 473, Address: 0x1291f0, Func Offset: 0xc0
	// Line 474, Address: 0x1291f8, Func Offset: 0xc8
	// Line 475, Address: 0x1291fc, Func Offset: 0xcc
	// Line 476, Address: 0x129200, Func Offset: 0xd0
	// Line 479, Address: 0x129204, Func Offset: 0xd4
	// Line 481, Address: 0x129218, Func Offset: 0xe8
	// Line 486, Address: 0x129234, Func Offset: 0x104
	// Line 487, Address: 0x12924c, Func Offset: 0x11c
	// Line 488, Address: 0x129250, Func Offset: 0x120
	// Line 489, Address: 0x129258, Func Offset: 0x128
	// Line 490, Address: 0x12925c, Func Offset: 0x12c
	// Line 491, Address: 0x129264, Func Offset: 0x134
	// Line 492, Address: 0x12926c, Func Offset: 0x13c
	// Line 493, Address: 0x129270, Func Offset: 0x140
	// Line 494, Address: 0x129278, Func Offset: 0x148
	// Line 495, Address: 0x12927c, Func Offset: 0x14c
	// Line 496, Address: 0x129280, Func Offset: 0x150
	// Line 497, Address: 0x129284, Func Offset: 0x154
	// Line 498, Address: 0x12928c, Func Offset: 0x15c
	// Line 499, Address: 0x129290, Func Offset: 0x160
	// Line 500, Address: 0x129294, Func Offset: 0x164
	// Func End, Address: 0x1292a0, Func Offset: 0x170
}

// 
// Start address: 0x1292a0
void InitTriangleSpecularNormal(TriangleSpecularNormal* p)
{
	int qwc;
	// Line 506, Address: 0x1292a0, Func Offset: 0
	// Line 507, Address: 0x1292ac, Func Offset: 0xc
	// Line 508, Address: 0x1292b0, Func Offset: 0x10
	// Line 511, Address: 0x1292bc, Func Offset: 0x1c
	// Line 513, Address: 0x1292d0, Func Offset: 0x30
	// Line 519, Address: 0x1292ec, Func Offset: 0x4c
	// Line 521, Address: 0x129304, Func Offset: 0x64
	// Line 522, Address: 0x12930c, Func Offset: 0x6c
	// Line 523, Address: 0x129314, Func Offset: 0x74
	// Line 525, Address: 0x12931c, Func Offset: 0x7c
	// Line 526, Address: 0x129324, Func Offset: 0x84
	// Line 528, Address: 0x12932c, Func Offset: 0x8c
	// Line 529, Address: 0x129330, Func Offset: 0x90
	// Line 530, Address: 0x129338, Func Offset: 0x98
	// Line 531, Address: 0x129340, Func Offset: 0xa0
	// Line 532, Address: 0x129344, Func Offset: 0xa4
	// Line 534, Address: 0x129348, Func Offset: 0xa8
	// Line 535, Address: 0x129350, Func Offset: 0xb0
	// Line 537, Address: 0x129354, Func Offset: 0xb4
	// Line 540, Address: 0x129358, Func Offset: 0xb8
	// Line 542, Address: 0x12936c, Func Offset: 0xcc
	// Line 546, Address: 0x129384, Func Offset: 0xe4
	// Line 547, Address: 0x129388, Func Offset: 0xe8
	// Line 548, Address: 0x12938c, Func Offset: 0xec
	// Func End, Address: 0x129394, Func Offset: 0xf4
}

// 
// Start address: 0x1293a0
void InitAllPacket0(AllPacket* p)
{
	// Line 552, Address: 0x1293a0, Func Offset: 0
	// Line 553, Address: 0x1293ac, Func Offset: 0xc
	// Line 554, Address: 0x1293b4, Func Offset: 0x14
	// Line 556, Address: 0x1293c0, Func Offset: 0x20
	// Line 557, Address: 0x1293cc, Func Offset: 0x2c
	// Line 559, Address: 0x1293d8, Func Offset: 0x38
	// Line 560, Address: 0x1293e4, Func Offset: 0x44
	// Line 562, Address: 0x1293f0, Func Offset: 0x50
	// Line 563, Address: 0x1293fc, Func Offset: 0x5c
	// Line 565, Address: 0x129408, Func Offset: 0x68
	// Line 566, Address: 0x129414, Func Offset: 0x74
	// Line 567, Address: 0x129420, Func Offset: 0x80
	// Func End, Address: 0x129430, Func Offset: 0x90
}

// 
// Start address: 0x129430
void LoadProgram_Vu0()
{
	_anon0* pk;
	_anon0 packet;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 575, Address: 0x129430, Func Offset: 0
	// Line 578, Address: 0x129438, Func Offset: 0x8
	// Line 582, Address: 0x129448, Func Offset: 0x18
	// Line 586, Address: 0x12946c, Func Offset: 0x3c
	// Line 588, Address: 0x129484, Func Offset: 0x54
	// Line 589, Address: 0x129494, Func Offset: 0x64
	// Line 591, Address: 0x1294a0, Func Offset: 0x70
	// Line 597, Address: 0x1294ac, Func Offset: 0x7c
	// Line 598, Address: 0x1294c8, Func Offset: 0x98
	// Line 599, Address: 0x1294d0, Func Offset: 0xa0
	// Line 600, Address: 0x1294e0, Func Offset: 0xb0
	// Line 601, Address: 0x1294ec, Func Offset: 0xbc
	// Line 605, Address: 0x129508, Func Offset: 0xd8
	// Func End, Address: 0x129518, Func Offset: 0xe8
}

// 
// Start address: 0x129520
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
	// Line 618, Address: 0x129520, Func Offset: 0
	// Line 625, Address: 0x129538, Func Offset: 0x18
	// Line 631, Address: 0x12956c, Func Offset: 0x4c
	// Line 633, Address: 0x129578, Func Offset: 0x58
	// Line 634, Address: 0x129584, Func Offset: 0x64
	// Line 638, Address: 0x1295a4, Func Offset: 0x84
	// Line 640, Address: 0x1295b4, Func Offset: 0x94
	// Line 641, Address: 0x1295c4, Func Offset: 0xa4
	// Line 646, Address: 0x1295d4, Func Offset: 0xb4
	// Line 648, Address: 0x1295e0, Func Offset: 0xc0
	// Line 649, Address: 0x1295ec, Func Offset: 0xcc
	// Line 650, Address: 0x1295fc, Func Offset: 0xdc
	// Line 655, Address: 0x129620, Func Offset: 0x100
	// Line 656, Address: 0x129630, Func Offset: 0x110
	// Line 658, Address: 0x129640, Func Offset: 0x120
	// Line 659, Address: 0x129650, Func Offset: 0x130
	// Line 660, Address: 0x129658, Func Offset: 0x138
	// Line 661, Address: 0x129660, Func Offset: 0x140
	// Line 662, Address: 0x129668, Func Offset: 0x148
	// Line 663, Address: 0x129670, Func Offset: 0x150
	// Line 668, Address: 0x129684, Func Offset: 0x164
	// Line 672, Address: 0x1296a4, Func Offset: 0x184
	// Line 674, Address: 0x1296b4, Func Offset: 0x194
	// Line 679, Address: 0x1296c4, Func Offset: 0x1a4
	// Line 681, Address: 0x1296e0, Func Offset: 0x1c0
	// Line 684, Address: 0x1296f4, Func Offset: 0x1d4
	// Line 693, Address: 0x1296fc, Func Offset: 0x1dc
	// Line 697, Address: 0x129718, Func Offset: 0x1f8
	// Line 699, Address: 0x12972c, Func Offset: 0x20c
	// Line 700, Address: 0x129740, Func Offset: 0x220
	// Line 705, Address: 0x129754, Func Offset: 0x234
	// Line 709, Address: 0x129770, Func Offset: 0x250
	// Line 715, Address: 0x12977c, Func Offset: 0x25c
	// Line 726, Address: 0x129798, Func Offset: 0x278
	// Line 727, Address: 0x1297b4, Func Offset: 0x294
	// Line 729, Address: 0x1297d0, Func Offset: 0x2b0
	// Line 730, Address: 0x1297ec, Func Offset: 0x2cc
	// Line 734, Address: 0x129808, Func Offset: 0x2e8
	// Line 735, Address: 0x12981c, Func Offset: 0x2fc
	// Line 736, Address: 0x129830, Func Offset: 0x310
	// Line 743, Address: 0x129844, Func Offset: 0x324
	// Func End, Address: 0x129864, Func Offset: 0x344
}

// 
// Start address: 0x129870
void MakePartTransferPacket_Vu0(Part* part, _anon0* pk)
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
	// Line 750, Address: 0x129870, Func Offset: 0
	// Line 752, Address: 0x129898, Func Offset: 0x28
	// Line 756, Address: 0x1298bc, Func Offset: 0x4c
	// Line 757, Address: 0x1298c0, Func Offset: 0x50
	// Line 758, Address: 0x1298c8, Func Offset: 0x58
	// Line 760, Address: 0x1298d0, Func Offset: 0x60
	// Line 761, Address: 0x1298dc, Func Offset: 0x6c
	// Line 762, Address: 0x1298ec, Func Offset: 0x7c
	// Line 763, Address: 0x1298f0, Func Offset: 0x80
	// Line 764, Address: 0x1298f4, Func Offset: 0x84
	// Line 765, Address: 0x1298f8, Func Offset: 0x88
	// Line 768, Address: 0x129928, Func Offset: 0xb8
	// Line 773, Address: 0x12993c, Func Offset: 0xcc
	// Line 774, Address: 0x129944, Func Offset: 0xd4
	// Line 775, Address: 0x12994c, Func Offset: 0xdc
	// Line 777, Address: 0x129950, Func Offset: 0xe0
	// Line 778, Address: 0x12995c, Func Offset: 0xec
	// Line 779, Address: 0x129968, Func Offset: 0xf8
	// Line 781, Address: 0x129970, Func Offset: 0x100
	// Line 784, Address: 0x12999c, Func Offset: 0x12c
	// Line 789, Address: 0x1299b0, Func Offset: 0x140
	// Line 790, Address: 0x1299b8, Func Offset: 0x148
	// Line 792, Address: 0x1299bc, Func Offset: 0x14c
	// Line 793, Address: 0x1299c8, Func Offset: 0x158
	// Line 794, Address: 0x1299d4, Func Offset: 0x164
	// Line 796, Address: 0x1299e8, Func Offset: 0x178
	// Line 799, Address: 0x129a14, Func Offset: 0x1a4
	// Line 801, Address: 0x129a28, Func Offset: 0x1b8
	// Func End, Address: 0x129a50, Func Offset: 0x1e0
}

// 
// Start address: 0x129a50
void MakeLambertShadingPacket(Part* part, _anon0* pk)
{
	Data_0* data;
	float brightness;
	Light* light;
	int i;
	int n_extras;
	int n_parallels;
	// Line 808, Address: 0x129a50, Func Offset: 0
	// Line 809, Address: 0x129a78, Func Offset: 0x28
	// Line 810, Address: 0x129a84, Func Offset: 0x34
	// Line 814, Address: 0x129a90, Func Offset: 0x40
	// Line 815, Address: 0x129a9c, Func Offset: 0x4c
	// Line 816, Address: 0x129ab0, Func Offset: 0x60
	// Line 818, Address: 0x129ad8, Func Offset: 0x88
	// Line 819, Address: 0x129ae4, Func Offset: 0x94
	// Line 822, Address: 0x129b20, Func Offset: 0xd0
	// Line 823, Address: 0x129b30, Func Offset: 0xe0
	// Line 824, Address: 0x129b4c, Func Offset: 0xfc
	// Line 825, Address: 0x129b68, Func Offset: 0x118
	// Line 826, Address: 0x129b7c, Func Offset: 0x12c
	// Line 829, Address: 0x129b8c, Func Offset: 0x13c
	// Line 830, Address: 0x129b98, Func Offset: 0x148
	// Line 831, Address: 0x129ba4, Func Offset: 0x154
	// Line 832, Address: 0x129bb8, Func Offset: 0x168
	// Line 834, Address: 0x129bdc, Func Offset: 0x18c
	// Line 835, Address: 0x129c04, Func Offset: 0x1b4
	// Line 837, Address: 0x129c0c, Func Offset: 0x1bc
	// Line 838, Address: 0x129c34, Func Offset: 0x1e4
	// Line 840, Address: 0x129c3c, Func Offset: 0x1ec
	// Line 842, Address: 0x129c64, Func Offset: 0x214
	// Line 845, Address: 0x129ca4, Func Offset: 0x254
	// Line 846, Address: 0x129cb4, Func Offset: 0x264
	// Line 847, Address: 0x129cd0, Func Offset: 0x280
	// Line 848, Address: 0x129cec, Func Offset: 0x29c
	// Line 849, Address: 0x129d00, Func Offset: 0x2b0
	// Line 853, Address: 0x129d14, Func Offset: 0x2c4
	// Line 854, Address: 0x129d28, Func Offset: 0x2d8
	// Line 856, Address: 0x129d50, Func Offset: 0x300
	// Line 859, Address: 0x129d88, Func Offset: 0x338
	// Line 860, Address: 0x129d98, Func Offset: 0x348
	// Line 861, Address: 0x129db4, Func Offset: 0x364
	// Line 862, Address: 0x129dd0, Func Offset: 0x380
	// Line 872, Address: 0x129de4, Func Offset: 0x394
	// Line 874, Address: 0x129df0, Func Offset: 0x3a0
	// Line 877, Address: 0x129e28, Func Offset: 0x3d8
	// Line 878, Address: 0x129e38, Func Offset: 0x3e8
	// Line 879, Address: 0x129e4c, Func Offset: 0x3fc
	// Line 880, Address: 0x129e6c, Func Offset: 0x41c
	// Line 881, Address: 0x129e80, Func Offset: 0x430
	// Line 883, Address: 0x129eb4, Func Offset: 0x464
	// Line 885, Address: 0x129ec4, Func Offset: 0x474
	// Line 886, Address: 0x129ecc, Func Offset: 0x47c
	// Line 896, Address: 0x129edc, Func Offset: 0x48c
	// Line 899, Address: 0x129ee4, Func Offset: 0x494
	// Line 900, Address: 0x129ef0, Func Offset: 0x4a0
	// Line 901, Address: 0x129efc, Func Offset: 0x4ac
	// Line 902, Address: 0x129f18, Func Offset: 0x4c8
	// Line 903, Address: 0x129f38, Func Offset: 0x4e8
	// Line 905, Address: 0x129f4c, Func Offset: 0x4fc
	// Func End, Address: 0x129f74, Func Offset: 0x524
}

// 
// Start address: 0x129f80
void MakeClipPacket(Part* part, _anon0* pk)
{
	// Line 913, Address: 0x129f80, Func Offset: 0
	// Line 916, Address: 0x129f90, Func Offset: 0x10
	// Line 917, Address: 0x129f9c, Func Offset: 0x1c
	// Line 924, Address: 0x129fac, Func Offset: 0x2c
	// Line 925, Address: 0x129fb4, Func Offset: 0x34
	// Line 930, Address: 0x129fc4, Func Offset: 0x44
	// Line 931, Address: 0x129fcc, Func Offset: 0x4c
	// Line 932, Address: 0x129ff4, Func Offset: 0x74
	// Line 933, Address: 0x12a004, Func Offset: 0x84
	// Line 937, Address: 0x12a020, Func Offset: 0xa0
	// Line 941, Address: 0x12a028, Func Offset: 0xa8
	// Line 942, Address: 0x12a030, Func Offset: 0xb0
	// Line 943, Address: 0x12a058, Func Offset: 0xd8
	// Line 944, Address: 0x12a068, Func Offset: 0xe8
	// Line 946, Address: 0x12a084, Func Offset: 0x104
	// Line 949, Address: 0x12a094, Func Offset: 0x114
	// Line 950, Address: 0x12a09c, Func Offset: 0x11c
	// Line 951, Address: 0x12a0c4, Func Offset: 0x144
	// Line 952, Address: 0x12a0d4, Func Offset: 0x154
	// Line 970, Address: 0x12a0f0, Func Offset: 0x170
	// Func End, Address: 0x12a104, Func Offset: 0x184
}

// 
// Start address: 0x12a110
void FlipXMTOP()
{
	// Line 63, Address: 0x12a110, Func Offset: 0
	// Line 64, Address: 0x12a124, Func Offset: 0x14
	// Func End, Address: 0x12a12c, Func Offset: 0x1c
}

// 
// Start address: 0x12a130
void MakeCalcPartPacket(Part* part)
{
	Data_1* data;
	_anon0* pk;
	_anon0 packet;
	<unknown fundamental type (0xa510)>* packet_buffer;
	// Line 977, Address: 0x12a130, Func Offset: 0
	// Line 978, Address: 0x12a144, Func Offset: 0x14
	// Line 980, Address: 0x12a14c, Func Offset: 0x1c
	// Line 985, Address: 0x12a150, Func Offset: 0x20
	// Line 994, Address: 0x12a16c, Func Offset: 0x3c
	// Line 995, Address: 0x12a178, Func Offset: 0x48
	// Line 997, Address: 0x12a184, Func Offset: 0x54
	// Line 1000, Address: 0x12a19c, Func Offset: 0x6c
	// Line 1003, Address: 0x12a1ac, Func Offset: 0x7c
	// Line 1004, Address: 0x12a1bc, Func Offset: 0x8c
	// Line 1005, Address: 0x12a1d4, Func Offset: 0xa4
	// Line 1006, Address: 0x12a1f0, Func Offset: 0xc0
	// Line 1007, Address: 0x12a200, Func Offset: 0xd0
	// Line 1008, Address: 0x12a21c, Func Offset: 0xec
	// Line 1009, Address: 0x12a238, Func Offset: 0x108
	// Line 1010, Address: 0x12a254, Func Offset: 0x124
	// Line 1011, Address: 0x12a25c, Func Offset: 0x12c
	// Line 1012, Address: 0x12a26c, Func Offset: 0x13c
	// Line 1013, Address: 0x12a27c, Func Offset: 0x14c
	// Line 1015, Address: 0x12a28c, Func Offset: 0x15c
	// Line 1019, Address: 0x12a29c, Func Offset: 0x16c
	// Line 1021, Address: 0x12a2b0, Func Offset: 0x180
	// Line 1024, Address: 0x12a2c4, Func Offset: 0x194
	// Line 1031, Address: 0x12a300, Func Offset: 0x1d0
	// Line 1032, Address: 0x12a310, Func Offset: 0x1e0
	// Line 1034, Address: 0x12a318, Func Offset: 0x1e8
	// Line 1038, Address: 0x12a33c, Func Offset: 0x20c
	// Line 1039, Address: 0x12a348, Func Offset: 0x218
	// Line 1043, Address: 0x12a35c, Func Offset: 0x22c
	// Line 1045, Address: 0x12a384, Func Offset: 0x254
	// Line 1048, Address: 0x12a3bc, Func Offset: 0x28c
	// Line 1049, Address: 0x12a3cc, Func Offset: 0x29c
	// Line 1050, Address: 0x12a3e8, Func Offset: 0x2b8
	// Line 1051, Address: 0x12a404, Func Offset: 0x2d4
	// Line 1055, Address: 0x12a418, Func Offset: 0x2e8
	// Line 1061, Address: 0x12a428, Func Offset: 0x2f8
	// Line 1062, Address: 0x12a43c, Func Offset: 0x30c
	// Line 1063, Address: 0x12a464, Func Offset: 0x334
	// Line 1066, Address: 0x12a49c, Func Offset: 0x36c
	// Line 1067, Address: 0x12a4ac, Func Offset: 0x37c
	// Line 1068, Address: 0x12a4c0, Func Offset: 0x390
	// Line 1069, Address: 0x12a4e0, Func Offset: 0x3b0
	// Line 1070, Address: 0x12a4f0, Func Offset: 0x3c0
	// Line 1071, Address: 0x12a524, Func Offset: 0x3f4
	// Line 1072, Address: 0x12a52c, Func Offset: 0x3fc
	// Line 1073, Address: 0x12a548, Func Offset: 0x418
	// Line 1074, Address: 0x12a564, Func Offset: 0x434
	// Line 1079, Address: 0x12a578, Func Offset: 0x448
	// Line 1083, Address: 0x12a58c, Func Offset: 0x45c
	// Line 1085, Address: 0x12a5b4, Func Offset: 0x484
	// Line 1088, Address: 0x12a5ec, Func Offset: 0x4bc
	// Line 1089, Address: 0x12a5fc, Func Offset: 0x4cc
	// Line 1090, Address: 0x12a618, Func Offset: 0x4e8
	// Line 1091, Address: 0x12a634, Func Offset: 0x504
	// Line 1092, Address: 0x12a644, Func Offset: 0x514
	// Line 1096, Address: 0x12a658, Func Offset: 0x528
	// Line 1099, Address: 0x12a668, Func Offset: 0x538
	// Line 1100, Address: 0x12a678, Func Offset: 0x548
	// Line 1102, Address: 0x12a688, Func Offset: 0x558
	// Line 1103, Address: 0x12a698, Func Offset: 0x568
	// Line 1104, Address: 0x12a6a4, Func Offset: 0x574
	// Func End, Address: 0x12a6bc, Func Offset: 0x58c
}

// 
// Start address: 0x12a6c0
void KickCalcPartPacket()
{
	// Line 1111, Address: 0x12a6c0, Func Offset: 0
	// Line 1112, Address: 0x12a6c8, Func Offset: 0x8
	// Line 1113, Address: 0x12a6e0, Func Offset: 0x20
	// Func End, Address: 0x12a6f0, Func Offset: 0x30
}

// 
// Start address: 0x12a6f0
void TransferToSPR()
{
	_anon1* toSPR;
	// Line 1130, Address: 0x12a6f0, Func Offset: 0
	// Line 1131, Address: 0x12a6fc, Func Offset: 0xc
	// Line 1133, Address: 0x12a70c, Func Offset: 0x1c
	// Line 1135, Address: 0x12a714, Func Offset: 0x24
	// Line 1136, Address: 0x12a720, Func Offset: 0x30
	// Line 1137, Address: 0x12a738, Func Offset: 0x48
	// Line 1138, Address: 0x12a74c, Func Offset: 0x5c
	// Func End, Address: 0x12a760, Func Offset: 0x70
}

// 
// Start address: 0x12a760
void PrepareSort()
{
	// Line 1145, Address: 0x12a760, Func Offset: 0
	// Line 1146, Address: 0x12a768, Func Offset: 0x8
	// Line 1147, Address: 0x12a778, Func Offset: 0x18
	// Func End, Address: 0x12a788, Func Offset: 0x28
}

// 
// Start address: 0x12a790
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
	_anon1* fromSPR;
	// Line 1154, Address: 0x12a790, Func Offset: 0
	// Line 1155, Address: 0x12a7c4, Func Offset: 0x34
	// Line 1156, Address: 0x12a7d4, Func Offset: 0x44
	// Line 1158, Address: 0x12a7dc, Func Offset: 0x4c
	// Line 1159, Address: 0x12a7e0, Func Offset: 0x50
	// Line 1160, Address: 0x12a7e8, Func Offset: 0x58
	// Line 1161, Address: 0x12a7ec, Func Offset: 0x5c
	// Line 1162, Address: 0x12a7fc, Func Offset: 0x6c
	// Line 1163, Address: 0x12a804, Func Offset: 0x74
	// Line 1168, Address: 0x12a80c, Func Offset: 0x7c
	// Line 1170, Address: 0x12a814, Func Offset: 0x84
	// Line 1171, Address: 0x12a824, Func Offset: 0x94
	// Line 1172, Address: 0x12a830, Func Offset: 0xa0
	// Line 1173, Address: 0x12a854, Func Offset: 0xc4
	// Line 1174, Address: 0x12a858, Func Offset: 0xc8
	// Line 1180, Address: 0x12a85c, Func Offset: 0xcc
	// Line 1181, Address: 0x12a868, Func Offset: 0xd8
	// Line 1183, Address: 0x12a874, Func Offset: 0xe4
	// Line 1184, Address: 0x12a880, Func Offset: 0xf0
	// Line 1185, Address: 0x12a890, Func Offset: 0x100
	// Line 1186, Address: 0x12a894, Func Offset: 0x104
	// Line 1187, Address: 0x12a8a4, Func Offset: 0x114
	// Line 1188, Address: 0x12a8a8, Func Offset: 0x118
	// Line 1189, Address: 0x12a8bc, Func Offset: 0x12c
	// Line 1190, Address: 0x12a8c4, Func Offset: 0x134
	// Line 1194, Address: 0x12a8d4, Func Offset: 0x144
	// Line 1198, Address: 0x12a8dc, Func Offset: 0x14c
	// Line 1200, Address: 0x12a8f8, Func Offset: 0x168
	// Line 1201, Address: 0x12a900, Func Offset: 0x170
	// Line 1202, Address: 0x12a908, Func Offset: 0x178
	// Line 1207, Address: 0x12a910, Func Offset: 0x180
	// Line 1208, Address: 0x12a918, Func Offset: 0x188
	// Line 1209, Address: 0x12a920, Func Offset: 0x190
	// Line 1214, Address: 0x12a928, Func Offset: 0x198
	// Line 1215, Address: 0x12a930, Func Offset: 0x1a0
	// Line 1216, Address: 0x12a938, Func Offset: 0x1a8
	// Line 1249, Address: 0x12a940, Func Offset: 0x1b0
	// Line 1250, Address: 0x12a950, Func Offset: 0x1c0
	// Line 1251, Address: 0x12a960, Func Offset: 0x1d0
	// Line 1252, Address: 0x12a968, Func Offset: 0x1d8
	// Line 1253, Address: 0x12a980, Func Offset: 0x1f0
	// Line 1255, Address: 0x12a994, Func Offset: 0x204
	// Line 1260, Address: 0x12a99c, Func Offset: 0x20c
	// Line 1261, Address: 0x12a9bc, Func Offset: 0x22c
	// Line 1262, Address: 0x12a9d4, Func Offset: 0x244
	// Line 1263, Address: 0x12a9ec, Func Offset: 0x25c
	// Line 1267, Address: 0x12aa00, Func Offset: 0x270
	// Line 1268, Address: 0x12aa04, Func Offset: 0x274
	// Line 1271, Address: 0x12aa08, Func Offset: 0x278
	// Line 1274, Address: 0x12aa20, Func Offset: 0x290
	// Line 1275, Address: 0x12aa40, Func Offset: 0x2b0
	// Func End, Address: 0x12aa74, Func Offset: 0x2e4
}

// 
// Start address: 0x12aa80
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
	_anon1* fromSPR;
	// Line 1282, Address: 0x12aa80, Func Offset: 0
	// Line 1283, Address: 0x12aab4, Func Offset: 0x34
	// Line 1284, Address: 0x12aac4, Func Offset: 0x44
	// Line 1286, Address: 0x12aad0, Func Offset: 0x50
	// Line 1287, Address: 0x12aad4, Func Offset: 0x54
	// Line 1288, Address: 0x12aadc, Func Offset: 0x5c
	// Line 1289, Address: 0x12aae0, Func Offset: 0x60
	// Line 1290, Address: 0x12aaf0, Func Offset: 0x70
	// Line 1291, Address: 0x12aaf8, Func Offset: 0x78
	// Line 1296, Address: 0x12ab00, Func Offset: 0x80
	// Line 1298, Address: 0x12ab08, Func Offset: 0x88
	// Line 1299, Address: 0x12ab18, Func Offset: 0x98
	// Line 1300, Address: 0x12ab24, Func Offset: 0xa4
	// Line 1301, Address: 0x12ab48, Func Offset: 0xc8
	// Line 1302, Address: 0x12ab4c, Func Offset: 0xcc
	// Line 1305, Address: 0x12ab50, Func Offset: 0xd0
	// Line 1306, Address: 0x12ab5c, Func Offset: 0xdc
	// Line 1307, Address: 0x12ab68, Func Offset: 0xe8
	// Line 1308, Address: 0x12ab84, Func Offset: 0x104
	// Line 1311, Address: 0x12abb8, Func Offset: 0x138
	// Line 1312, Address: 0x12abc4, Func Offset: 0x144
	// Line 1313, Address: 0x12abd4, Func Offset: 0x154
	// Line 1314, Address: 0x12abd8, Func Offset: 0x158
	// Line 1315, Address: 0x12abe8, Func Offset: 0x168
	// Line 1317, Address: 0x12abec, Func Offset: 0x16c
	// Line 1318, Address: 0x12abf4, Func Offset: 0x174
	// Line 1322, Address: 0x12ac04, Func Offset: 0x184
	// Line 1326, Address: 0x12ac0c, Func Offset: 0x18c
	// Line 1328, Address: 0x12ac28, Func Offset: 0x1a8
	// Line 1329, Address: 0x12ac30, Func Offset: 0x1b0
	// Line 1330, Address: 0x12ac38, Func Offset: 0x1b8
	// Line 1331, Address: 0x12ac40, Func Offset: 0x1c0
	// Line 1332, Address: 0x12ac48, Func Offset: 0x1c8
	// Line 1333, Address: 0x12ac50, Func Offset: 0x1d0
	// Line 1335, Address: 0x12ac58, Func Offset: 0x1d8
	// Line 1336, Address: 0x12ac60, Func Offset: 0x1e0
	// Line 1337, Address: 0x12ac68, Func Offset: 0x1e8
	// Line 1338, Address: 0x12ac70, Func Offset: 0x1f0
	// Line 1339, Address: 0x12ac78, Func Offset: 0x1f8
	// Line 1340, Address: 0x12ac80, Func Offset: 0x200
	// Line 1341, Address: 0x12ac88, Func Offset: 0x208
	// Line 1342, Address: 0x12acd0, Func Offset: 0x250
	// Line 1344, Address: 0x12ad18, Func Offset: 0x298
	// Line 1345, Address: 0x12ad20, Func Offset: 0x2a0
	// Line 1346, Address: 0x12ad28, Func Offset: 0x2a8
	// Line 1347, Address: 0x12ad30, Func Offset: 0x2b0
	// Line 1348, Address: 0x12ad38, Func Offset: 0x2b8
	// Line 1349, Address: 0x12ad40, Func Offset: 0x2c0
	// Line 1350, Address: 0x12ad48, Func Offset: 0x2c8
	// Line 1351, Address: 0x12ad90, Func Offset: 0x310
	// Line 1354, Address: 0x12add8, Func Offset: 0x358
	// Line 1355, Address: 0x12ade8, Func Offset: 0x368
	// Line 1356, Address: 0x12adf8, Func Offset: 0x378
	// Line 1357, Address: 0x12ae00, Func Offset: 0x380
	// Line 1358, Address: 0x12ae18, Func Offset: 0x398
	// Line 1360, Address: 0x12ae2c, Func Offset: 0x3ac
	// Line 1365, Address: 0x12ae34, Func Offset: 0x3b4
	// Line 1366, Address: 0x12ae54, Func Offset: 0x3d4
	// Line 1367, Address: 0x12ae6c, Func Offset: 0x3ec
	// Line 1368, Address: 0x12ae84, Func Offset: 0x404
	// Line 1370, Address: 0x12ae88, Func Offset: 0x408
	// Line 1371, Address: 0x12ae8c, Func Offset: 0x40c
	// Line 1372, Address: 0x12ae90, Func Offset: 0x410
	// Line 1375, Address: 0x12aea8, Func Offset: 0x428
	// Line 1376, Address: 0x12aec8, Func Offset: 0x448
	// Func End, Address: 0x12aefc, Func Offset: 0x47c
}

// 
// Start address: 0x12af00
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
	_anon1* fromSPR;
	// Line 1383, Address: 0x12af00, Func Offset: 0
	// Line 1384, Address: 0x12af34, Func Offset: 0x34
	// Line 1385, Address: 0x12af44, Func Offset: 0x44
	// Line 1387, Address: 0x12af50, Func Offset: 0x50
	// Line 1388, Address: 0x12af54, Func Offset: 0x54
	// Line 1389, Address: 0x12af5c, Func Offset: 0x5c
	// Line 1390, Address: 0x12af60, Func Offset: 0x60
	// Line 1391, Address: 0x12af70, Func Offset: 0x70
	// Line 1392, Address: 0x12af78, Func Offset: 0x78
	// Line 1394, Address: 0x12af80, Func Offset: 0x80
	// Line 1398, Address: 0x12af8c, Func Offset: 0x8c
	// Line 1400, Address: 0x12af94, Func Offset: 0x94
	// Line 1401, Address: 0x12afa4, Func Offset: 0xa4
	// Line 1402, Address: 0x12afb0, Func Offset: 0xb0
	// Line 1403, Address: 0x12afd4, Func Offset: 0xd4
	// Line 1404, Address: 0x12afd8, Func Offset: 0xd8
	// Line 1407, Address: 0x12afdc, Func Offset: 0xdc
	// Line 1408, Address: 0x12afe8, Func Offset: 0xe8
	// Line 1409, Address: 0x12aff4, Func Offset: 0xf4
	// Line 1410, Address: 0x12b010, Func Offset: 0x110
	// Line 1411, Address: 0x12b02c, Func Offset: 0x12c
	// Line 1412, Address: 0x12b048, Func Offset: 0x148
	// Line 1413, Address: 0x12b054, Func Offset: 0x154
	// Line 1415, Address: 0x12b064, Func Offset: 0x164
	// Line 1416, Address: 0x12b070, Func Offset: 0x170
	// Line 1417, Address: 0x12b080, Func Offset: 0x180
	// Line 1418, Address: 0x12b084, Func Offset: 0x184
	// Line 1419, Address: 0x12b094, Func Offset: 0x194
	// Line 1421, Address: 0x12b098, Func Offset: 0x198
	// Line 1422, Address: 0x12b0a0, Func Offset: 0x1a0
	// Line 1426, Address: 0x12b0b0, Func Offset: 0x1b0
	// Line 1430, Address: 0x12b0b8, Func Offset: 0x1b8
	// Line 1432, Address: 0x12b0d4, Func Offset: 0x1d4
	// Line 1433, Address: 0x12b0dc, Func Offset: 0x1dc
	// Line 1434, Address: 0x12b0e4, Func Offset: 0x1e4
	// Line 1435, Address: 0x12b0ec, Func Offset: 0x1ec
	// Line 1436, Address: 0x12b0f4, Func Offset: 0x1f4
	// Line 1438, Address: 0x12b0fc, Func Offset: 0x1fc
	// Line 1439, Address: 0x12b104, Func Offset: 0x204
	// Line 1440, Address: 0x12b10c, Func Offset: 0x20c
	// Line 1441, Address: 0x12b114, Func Offset: 0x214
	// Line 1442, Address: 0x12b11c, Func Offset: 0x21c
	// Line 1444, Address: 0x12b124, Func Offset: 0x224
	// Line 1445, Address: 0x12b12c, Func Offset: 0x22c
	// Line 1446, Address: 0x12b134, Func Offset: 0x234
	// Line 1447, Address: 0x12b13c, Func Offset: 0x23c
	// Line 1448, Address: 0x12b144, Func Offset: 0x244
	// Line 1452, Address: 0x12b14c, Func Offset: 0x24c
	// Line 1453, Address: 0x12b15c, Func Offset: 0x25c
	// Line 1454, Address: 0x12b16c, Func Offset: 0x26c
	// Line 1455, Address: 0x12b174, Func Offset: 0x274
	// Line 1456, Address: 0x12b188, Func Offset: 0x288
	// Line 1458, Address: 0x12b19c, Func Offset: 0x29c
	// Line 1463, Address: 0x12b1a4, Func Offset: 0x2a4
	// Line 1464, Address: 0x12b1c4, Func Offset: 0x2c4
	// Line 1465, Address: 0x12b1dc, Func Offset: 0x2dc
	// Line 1466, Address: 0x12b1f4, Func Offset: 0x2f4
	// Line 1468, Address: 0x12b1f8, Func Offset: 0x2f8
	// Line 1469, Address: 0x12b1fc, Func Offset: 0x2fc
	// Line 1470, Address: 0x12b200, Func Offset: 0x300
	// Line 1473, Address: 0x12b218, Func Offset: 0x318
	// Line 1474, Address: 0x12b238, Func Offset: 0x338
	// Func End, Address: 0x12b26c, Func Offset: 0x36c
}

// 
// Start address: 0x12b270
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
	_anon1* fromSPR;
	// Line 1481, Address: 0x12b270, Func Offset: 0
	// Line 1482, Address: 0x12b2a4, Func Offset: 0x34
	// Line 1483, Address: 0x12b2b4, Func Offset: 0x44
	// Line 1485, Address: 0x12b2c0, Func Offset: 0x50
	// Line 1486, Address: 0x12b2c4, Func Offset: 0x54
	// Line 1487, Address: 0x12b2cc, Func Offset: 0x5c
	// Line 1488, Address: 0x12b2d0, Func Offset: 0x60
	// Line 1489, Address: 0x12b2e0, Func Offset: 0x70
	// Line 1490, Address: 0x12b2e8, Func Offset: 0x78
	// Line 1492, Address: 0x12b2f0, Func Offset: 0x80
	// Line 1496, Address: 0x12b2fc, Func Offset: 0x8c
	// Line 1498, Address: 0x12b304, Func Offset: 0x94
	// Line 1499, Address: 0x12b314, Func Offset: 0xa4
	// Line 1500, Address: 0x12b320, Func Offset: 0xb0
	// Line 1501, Address: 0x12b344, Func Offset: 0xd4
	// Line 1502, Address: 0x12b348, Func Offset: 0xd8
	// Line 1505, Address: 0x12b34c, Func Offset: 0xdc
	// Line 1506, Address: 0x12b358, Func Offset: 0xe8
	// Line 1507, Address: 0x12b364, Func Offset: 0xf4
	// Line 1508, Address: 0x12b380, Func Offset: 0x110
	// Line 1510, Address: 0x12b3b4, Func Offset: 0x144
	// Line 1511, Address: 0x12b3d0, Func Offset: 0x160
	// Line 1512, Address: 0x12b3ec, Func Offset: 0x17c
	// Line 1513, Address: 0x12b408, Func Offset: 0x198
	// Line 1514, Address: 0x12b414, Func Offset: 0x1a4
	// Line 1516, Address: 0x12b424, Func Offset: 0x1b4
	// Line 1517, Address: 0x12b430, Func Offset: 0x1c0
	// Line 1518, Address: 0x12b440, Func Offset: 0x1d0
	// Line 1519, Address: 0x12b444, Func Offset: 0x1d4
	// Line 1520, Address: 0x12b454, Func Offset: 0x1e4
	// Line 1522, Address: 0x12b458, Func Offset: 0x1e8
	// Line 1523, Address: 0x12b460, Func Offset: 0x1f0
	// Line 1527, Address: 0x12b470, Func Offset: 0x200
	// Line 1531, Address: 0x12b478, Func Offset: 0x208
	// Line 1533, Address: 0x12b494, Func Offset: 0x224
	// Line 1534, Address: 0x12b49c, Func Offset: 0x22c
	// Line 1535, Address: 0x12b4a4, Func Offset: 0x234
	// Line 1536, Address: 0x12b4ac, Func Offset: 0x23c
	// Line 1537, Address: 0x12b4b4, Func Offset: 0x244
	// Line 1538, Address: 0x12b4bc, Func Offset: 0x24c
	// Line 1539, Address: 0x12b4c4, Func Offset: 0x254
	// Line 1540, Address: 0x12b4cc, Func Offset: 0x25c
	// Line 1542, Address: 0x12b4d4, Func Offset: 0x264
	// Line 1543, Address: 0x12b4dc, Func Offset: 0x26c
	// Line 1544, Address: 0x12b4e4, Func Offset: 0x274
	// Line 1545, Address: 0x12b4ec, Func Offset: 0x27c
	// Line 1546, Address: 0x12b4f4, Func Offset: 0x284
	// Line 1547, Address: 0x12b4fc, Func Offset: 0x28c
	// Line 1548, Address: 0x12b504, Func Offset: 0x294
	// Line 1549, Address: 0x12b50c, Func Offset: 0x29c
	// Line 1550, Address: 0x12b514, Func Offset: 0x2a4
	// Line 1551, Address: 0x12b560, Func Offset: 0x2f0
	// Line 1553, Address: 0x12b5a8, Func Offset: 0x338
	// Line 1554, Address: 0x12b5b0, Func Offset: 0x340
	// Line 1555, Address: 0x12b5b8, Func Offset: 0x348
	// Line 1556, Address: 0x12b5c0, Func Offset: 0x350
	// Line 1557, Address: 0x12b5c8, Func Offset: 0x358
	// Line 1558, Address: 0x12b5d0, Func Offset: 0x360
	// Line 1559, Address: 0x12b5d8, Func Offset: 0x368
	// Line 1560, Address: 0x12b5e0, Func Offset: 0x370
	// Line 1561, Address: 0x12b5e8, Func Offset: 0x378
	// Line 1562, Address: 0x12b630, Func Offset: 0x3c0
	// Line 1565, Address: 0x12b678, Func Offset: 0x408
	// Line 1566, Address: 0x12b688, Func Offset: 0x418
	// Line 1567, Address: 0x12b698, Func Offset: 0x428
	// Line 1568, Address: 0x12b6a0, Func Offset: 0x430
	// Line 1569, Address: 0x12b6b8, Func Offset: 0x448
	// Line 1571, Address: 0x12b6cc, Func Offset: 0x45c
	// Line 1576, Address: 0x12b6d4, Func Offset: 0x464
	// Line 1577, Address: 0x12b6f4, Func Offset: 0x484
	// Line 1578, Address: 0x12b70c, Func Offset: 0x49c
	// Line 1579, Address: 0x12b724, Func Offset: 0x4b4
	// Line 1581, Address: 0x12b728, Func Offset: 0x4b8
	// Line 1582, Address: 0x12b72c, Func Offset: 0x4bc
	// Line 1583, Address: 0x12b730, Func Offset: 0x4c0
	// Line 1586, Address: 0x12b748, Func Offset: 0x4d8
	// Line 1587, Address: 0x12b768, Func Offset: 0x4f8
	// Func End, Address: 0x12b79c, Func Offset: 0x52c
}

// 
// Start address: 0x12b7a0
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
	_anon1* fromSPR;
	// Line 1594, Address: 0x12b7a0, Func Offset: 0
	// Line 1595, Address: 0x12b7d4, Func Offset: 0x34
	// Line 1596, Address: 0x12b7e4, Func Offset: 0x44
	// Line 1598, Address: 0x12b7f0, Func Offset: 0x50
	// Line 1599, Address: 0x12b7f4, Func Offset: 0x54
	// Line 1600, Address: 0x12b7fc, Func Offset: 0x5c
	// Line 1601, Address: 0x12b800, Func Offset: 0x60
	// Line 1602, Address: 0x12b810, Func Offset: 0x70
	// Line 1603, Address: 0x12b818, Func Offset: 0x78
	// Line 1605, Address: 0x12b820, Func Offset: 0x80
	// Line 1609, Address: 0x12b82c, Func Offset: 0x8c
	// Line 1611, Address: 0x12b834, Func Offset: 0x94
	// Line 1612, Address: 0x12b844, Func Offset: 0xa4
	// Line 1613, Address: 0x12b850, Func Offset: 0xb0
	// Line 1614, Address: 0x12b874, Func Offset: 0xd4
	// Line 1615, Address: 0x12b878, Func Offset: 0xd8
	// Line 1618, Address: 0x12b87c, Func Offset: 0xdc
	// Line 1619, Address: 0x12b898, Func Offset: 0xf8
	// Line 1620, Address: 0x12b8b4, Func Offset: 0x114
	// Line 1621, Address: 0x12b8d0, Func Offset: 0x130
	// Line 1622, Address: 0x12b8dc, Func Offset: 0x13c
	// Line 1623, Address: 0x12b8ec, Func Offset: 0x14c
	// Line 1624, Address: 0x12b8f8, Func Offset: 0x158
	// Line 1626, Address: 0x12b904, Func Offset: 0x164
	// Line 1627, Address: 0x12b910, Func Offset: 0x170
	// Line 1628, Address: 0x12b920, Func Offset: 0x180
	// Line 1629, Address: 0x12b924, Func Offset: 0x184
	// Line 1630, Address: 0x12b934, Func Offset: 0x194
	// Line 1632, Address: 0x12b938, Func Offset: 0x198
	// Line 1633, Address: 0x12b940, Func Offset: 0x1a0
	// Line 1637, Address: 0x12b950, Func Offset: 0x1b0
	// Line 1641, Address: 0x12b958, Func Offset: 0x1b8
	// Line 1643, Address: 0x12b974, Func Offset: 0x1d4
	// Line 1644, Address: 0x12b97c, Func Offset: 0x1dc
	// Line 1645, Address: 0x12b984, Func Offset: 0x1e4
	// Line 1646, Address: 0x12b98c, Func Offset: 0x1ec
	// Line 1647, Address: 0x12b994, Func Offset: 0x1f4
	// Line 1649, Address: 0x12b99c, Func Offset: 0x1fc
	// Line 1650, Address: 0x12b9a4, Func Offset: 0x204
	// Line 1651, Address: 0x12b9ac, Func Offset: 0x20c
	// Line 1652, Address: 0x12b9b4, Func Offset: 0x214
	// Line 1653, Address: 0x12b9bc, Func Offset: 0x21c
	// Line 1655, Address: 0x12b9c4, Func Offset: 0x224
	// Line 1656, Address: 0x12b9cc, Func Offset: 0x22c
	// Line 1657, Address: 0x12b9d4, Func Offset: 0x234
	// Line 1658, Address: 0x12b9dc, Func Offset: 0x23c
	// Line 1659, Address: 0x12b9e4, Func Offset: 0x244
	// Line 1662, Address: 0x12b9ec, Func Offset: 0x24c
	// Line 1663, Address: 0x12b9fc, Func Offset: 0x25c
	// Line 1664, Address: 0x12ba0c, Func Offset: 0x26c
	// Line 1665, Address: 0x12ba14, Func Offset: 0x274
	// Line 1666, Address: 0x12ba28, Func Offset: 0x288
	// Line 1668, Address: 0x12ba3c, Func Offset: 0x29c
	// Line 1673, Address: 0x12ba44, Func Offset: 0x2a4
	// Line 1674, Address: 0x12ba64, Func Offset: 0x2c4
	// Line 1675, Address: 0x12ba7c, Func Offset: 0x2dc
	// Line 1676, Address: 0x12ba94, Func Offset: 0x2f4
	// Line 1678, Address: 0x12ba98, Func Offset: 0x2f8
	// Line 1679, Address: 0x12ba9c, Func Offset: 0x2fc
	// Line 1680, Address: 0x12baa0, Func Offset: 0x300
	// Line 1683, Address: 0x12bab8, Func Offset: 0x318
	// Line 1684, Address: 0x12bad8, Func Offset: 0x338
	// Func End, Address: 0x12bb0c, Func Offset: 0x36c
}

// 
// Start address: 0x12bb10
void DrawPart0(ktVif1Ot2* ot, Part* part, ModelWork* work)
{
	_anon1* toSPR;
	int func_no;
	// Line 1709, Address: 0x12bb10, Func Offset: 0
	// Line 1710, Address: 0x12bb30, Func Offset: 0x20
	// Line 1713, Address: 0x12bb34, Func Offset: 0x24
	// Line 1715, Address: 0x12bb4c, Func Offset: 0x3c
	// Line 1720, Address: 0x12bb54, Func Offset: 0x44
	// Line 1722, Address: 0x12bb6c, Func Offset: 0x5c
	// Line 1723, Address: 0x12bb78, Func Offset: 0x68
	// Line 1725, Address: 0x12bb7c, Func Offset: 0x6c
	// Line 1726, Address: 0x12bb8c, Func Offset: 0x7c
	// Line 1727, Address: 0x12bb90, Func Offset: 0x80
	// Line 1728, Address: 0x12bb9c, Func Offset: 0x8c
	// Line 1732, Address: 0x12bba0, Func Offset: 0x90
	// Line 1733, Address: 0x12bbbc, Func Offset: 0xac
	// Line 1735, Address: 0x12bbcc, Func Offset: 0xbc
	// Line 1736, Address: 0x12bbec, Func Offset: 0xdc
	// Line 1741, Address: 0x12bc00, Func Offset: 0xf0
	// Line 1742, Address: 0x12bc14, Func Offset: 0x104
	// Func End, Address: 0x12bc34, Func Offset: 0x124
}

// 
// Start address: 0x12bc40
void DrawParts0(ktVif1Ot2* ot, Model* model, ModelWork* work)
{
	Part* next;
	int i;
	Part* part;
	Part* parts_top;
	int n_parts;
	// Line 1750, Address: 0x12bc40, Func Offset: 0
	// Line 1754, Address: 0x12bc68, Func Offset: 0x28
	// Line 1755, Address: 0x12bc6c, Func Offset: 0x2c
	// Line 1759, Address: 0x12bc74, Func Offset: 0x34
	// Line 1764, Address: 0x12bc7c, Func Offset: 0x3c
	// Line 1767, Address: 0x12bc84, Func Offset: 0x44
	// Line 1771, Address: 0x12bc8c, Func Offset: 0x4c
	// Line 1772, Address: 0x12bc98, Func Offset: 0x58
	// Line 1773, Address: 0x12bca0, Func Offset: 0x60
	// Line 1774, Address: 0x12bca8, Func Offset: 0x68
	// Line 1775, Address: 0x12bcb4, Func Offset: 0x74
	// Line 1776, Address: 0x12bcbc, Func Offset: 0x7c
	// Line 1777, Address: 0x12bcc8, Func Offset: 0x88
	// Line 1778, Address: 0x12bcd0, Func Offset: 0x90
	// Line 1779, Address: 0x12bcd8, Func Offset: 0x98
	// Line 1780, Address: 0x12bcec, Func Offset: 0xac
	// Line 1781, Address: 0x12bcf0, Func Offset: 0xb0
	// Line 1782, Address: 0x12bd04, Func Offset: 0xc4
	// Line 1783, Address: 0x12bd0c, Func Offset: 0xcc
	// Line 1784, Address: 0x12bd20, Func Offset: 0xe0
	// Func End, Address: 0x12bd48, Func Offset: 0x108
}

// 
// Start address: 0x12bd50
void Model3DrawVu0Parts(Model* model, ModelWork* work)
{
	ktVif1Ot2* ot;
	// Line 1801, Address: 0x12bd50, Func Offset: 0
	// Line 1805, Address: 0x12bd68, Func Offset: 0x18
	// Line 1807, Address: 0x12bd70, Func Offset: 0x20
	// Line 1808, Address: 0x12bd78, Func Offset: 0x28
	// Line 1809, Address: 0x12bd80, Func Offset: 0x30
	// Line 1811, Address: 0x12bd88, Func Offset: 0x38
	// Line 1812, Address: 0x12bd90, Func Offset: 0x40
	// Line 1816, Address: 0x12bd98, Func Offset: 0x48
	// Line 1839, Address: 0x12bdac, Func Offset: 0x5c
	// Line 1840, Address: 0x12bdc0, Func Offset: 0x70
	// Func End, Address: 0x12bdd8, Func Offset: 0x88
}

