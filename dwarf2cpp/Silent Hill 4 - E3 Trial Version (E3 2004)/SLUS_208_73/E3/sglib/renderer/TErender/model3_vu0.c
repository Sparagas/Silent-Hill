typedef struct ELightData;
typedef struct TriangleNormalEnviron;
typedef struct Data_0;
typedef struct AllPacket;
typedef struct TextureParam;
typedef struct Model;
typedef struct _anon0;
typedef struct _anon1;
typedef struct ModelWork;
typedef struct _sceDmaTag;
typedef union Q;
typedef struct Part;
typedef struct Node;
typedef struct PartHeader;
typedef struct ktVif1Ot2;
typedef struct _anon2;
typedef struct Lambert0Data;
typedef struct _anon3;
typedef struct TriangleNormalSpecular;
typedef struct PLightData;
typedef struct TriangleNormal;
typedef struct Light;
typedef struct ClusterData;
typedef struct TriangleSpecularNormal;
typedef struct EMapData;
typedef struct TriangleNormalEnvironSpecular;
typedef struct Lambert1Data;
typedef struct SMapData;
typedef struct Model3Env;
typedef struct PersData;
typedef struct AllData;
typedef struct ModelCommonWork;
typedef struct Data_1;
typedef struct Model3Junk;

typedef void(*type_28)(ktVif1Ot2*, Part*);
typedef int(*type_31)(void*, void*, void*);
typedef void(*type_33)(_anon0*, int, int, float*);

typedef TriangleNormal type_0[2];
typedef <unknown fundamental type (0xa510)> type_1[0];
typedef int type_2[4];
typedef unsigned int type_3[3];
typedef TriangleNormalEnviron type_4[2];
typedef unsigned int type_5[3];
typedef TriangleNormalSpecular type_6[2];
typedef unsigned int type_7[3];
typedef TriangleNormalEnvironSpecular type_8[2];
typedef <unknown fundamental type (0xa510)> type_9[0];
typedef unsigned long type_10[2];
typedef float type_11[4];
typedef TriangleSpecularNormal type_12[2];
typedef unsigned int type_13[3];
typedef unsigned int type_14[4];
typedef unsigned short type_15[8];
typedef unsigned int type_16[3];
typedef unsigned char type_17[16];
typedef <unknown fundamental type (0xa510)> type_18[0];
typedef unsigned int type_19[4];
typedef long type_20[2];
typedef unsigned int type_21[4];
typedef int type_22[4];
typedef short type_23[8];
typedef unsigned int type_24[3];
typedef char type_25[16];
typedef <unknown fundamental type (0xa510)> type_26[0];
typedef <unknown fundamental type (0xa510)> type_27[0];
typedef void(*type_29)(ktVif1Ot2*, Part*)[8];
typedef float type_30[4][4];
typedef <unknown fundamental type (0xa510)> type_32[0];
typedef <unknown fundamental type (0xa510)> type_34[0];
typedef int type_35[4];
typedef float type_36[4];
typedef unsigned char type_37[1];
typedef <unknown fundamental type (0xa510)> type_38[0];
typedef float type_39[4];
typedef unsigned char type_40[2];
typedef float type_41[4][2];
typedef <unknown fundamental type (0xa510)> type_42[4];
typedef <unknown fundamental type (0xa510)> type_43[0];
typedef float type_44[4];
typedef float type_45[4][2];
typedef unsigned int type_46[3];
typedef PLightData type_47[4];
typedef <unknown fundamental type (0xa510)> type_48[0];
typedef ELightData type_49[8];
typedef float type_50[4][4][128];
typedef float type_51[4][4][256];
typedef unsigned int type_52[2];
typedef float type_53[4][2048];
typedef <unknown fundamental type (0xa510)> type_54[0];
typedef _anon0 type_55[64];
typedef <unknown fundamental type (0xa510)> type_56[0];
typedef unsigned int type_57[3];

struct ELightData
{
	float pos[4];
	float dir[4];
	float col[4];
	float param[4];
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

struct Data_0
{
	float param[4];
};

struct AllPacket
{
	TriangleNormal normal[2];
	TriangleNormalEnviron normal_environ[2];
	TriangleNormalSpecular normal_specular[2];
	TriangleNormalEnvironSpecular normal_environ_specular[2];
	TriangleSpecularNormal specular_normal[2];
};

struct TextureParam
{
	unsigned long clamp;
	unsigned long tex1;
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

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon1
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

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
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
	unsigned char hoge[1];
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

struct Node
{
	Q d0;
	Q d1;
	Q d2;
	Q d3;
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

struct _anon2
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

struct Lambert0Data
{
	float nlm[4][4];
	float lcm[4][4];
};

struct _anon3
{
	_anon1 chcr;
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

struct PLightData
{
	float nlm[4][4];
	float lcm[4][4];
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

struct ClusterData
{
	unsigned short src;
	unsigned short dst;
	unsigned short n;
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

struct Lambert1Data
{
	float global_ambient[4];
};

struct SMapData
{
	float nhm[4][4];
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

struct PersData
{
	float vsp[4][2];
	float vcp[4][2];
	float xyz_min[4];
	float xyz_max[4];
	float rgba_max[4];
};

struct AllData
{
	PLightData plight[4];
	ELightData elight[8];
	Lambert0Data lambert0;
	Lambert1Data lambert1;
	EMapData emap;
	SMapData smap;
	PersData pers;
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

struct Data_1
{
	float diffuse[4];
	float ambient[4];
	float param[4];
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

AllPacket* all_packet;
Model3Env model3_env;
ModelCommonWork* model_common_work;
<unknown fundamental type (0xa510)> model3_mpg0_skel_load[0];
Model3Junk model3_junk;
AllData all_data;
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
int model3_mpg0_nnorm_size;
<unknown fundamental type (0xa510)> model3_mpg0_nnorm[0];
int calc_base;
int n_bad_depths;
void(*sort_functions)(ktVif1Ot2*, Part*)[8];
int draw_base;

void InitTriangleNormal(TriangleNormal* p);
void InitTriangleNormalEnviron(TriangleNormalEnviron* p);
void InitTriangleNormalSpecular(TriangleNormalSpecular* p);
void InitTriangleNormalEnvironSpecular(TriangleNormalEnvironSpecular* p);
void InitTriangleSpecularNormal(TriangleSpecularNormal* p);
void InitAllPacket(AllPacket* p);
void LoadProgram();
void MakeData();
void MakePartTransferPacket(Part* part, _anon2* pk);
void MakeLambertShadingPacket(Part* part, _anon2* pk);
void MakeClipPacket(Part* part, _anon2* pk);
void MakeCalcPartPacket(Part* part);
void KickCalcPartPacket();
void CalcPart(Part* part);
void TransferToSPR();
void PrepareSort();
void SortTriangleNormal(ktVif1Ot2* ot, Part* part);
void SortTriangleNormalEnviron(ktVif1Ot2* ot, Part* part);
void SortTriangleNormalSpecular(ktVif1Ot2* ot, Part* part);
void SortTriangleNormalEnvironSpecular(ktVif1Ot2* ot, Part* part);
void SortTriangleSpecularNormal(ktVif1Ot2* ot, Part* part);
void DrawPart(ktVif1Ot2* ot, Part* part, ModelWork* work);
void DrawParts(ktVif1Ot2* ot, Model* model, ModelWork* work);
void Model3DrawVu0Parts(Model* model, ModelWork* work);

// 
// Start address: 0x14e510
void InitTriangleNormal(TriangleNormal* p)
{
	// Line 326, Address: 0x14e510, Func Offset: 0
	// Line 328, Address: 0x14e51c, Func Offset: 0xc
	// Line 327, Address: 0x14e524, Func Offset: 0x14
	// Line 330, Address: 0x14e528, Func Offset: 0x18
	// Line 328, Address: 0x14e52c, Func Offset: 0x1c
	// Line 330, Address: 0x14e530, Func Offset: 0x20
	// Line 332, Address: 0x14e540, Func Offset: 0x30
	// Line 330, Address: 0x14e550, Func Offset: 0x40
	// Line 332, Address: 0x14e558, Func Offset: 0x48
	// Line 336, Address: 0x14e55c, Func Offset: 0x4c
	// Line 332, Address: 0x14e560, Func Offset: 0x50
	// Line 337, Address: 0x14e564, Func Offset: 0x54
	// Line 336, Address: 0x14e568, Func Offset: 0x58
	// Line 338, Address: 0x14e56c, Func Offset: 0x5c
	// Func End, Address: 0x14e574, Func Offset: 0x64
}

// 
// Start address: 0x14e580
void InitTriangleNormalEnviron(TriangleNormalEnviron* p)
{
	// Line 344, Address: 0x14e580, Func Offset: 0
	// Line 349, Address: 0x14e584, Func Offset: 0x4
	// Line 344, Address: 0x14e588, Func Offset: 0x8
	// Line 355, Address: 0x14e58c, Func Offset: 0xc
	// Line 344, Address: 0x14e590, Func Offset: 0x10
	// Line 346, Address: 0x14e594, Func Offset: 0x14
	// Line 345, Address: 0x14e59c, Func Offset: 0x1c
	// Line 349, Address: 0x14e5a0, Func Offset: 0x20
	// Line 346, Address: 0x14e5a4, Func Offset: 0x24
	// Line 349, Address: 0x14e5a8, Func Offset: 0x28
	// Line 356, Address: 0x14e5ac, Func Offset: 0x2c
	// Line 349, Address: 0x14e5b0, Func Offset: 0x30
	// Line 342, Address: 0x14e5b4, Func Offset: 0x34
	// Line 349, Address: 0x14e5b8, Func Offset: 0x38
	// Line 368, Address: 0x14e5bc, Func Offset: 0x3c
	// Line 349, Address: 0x14e5c0, Func Offset: 0x40
	// Line 351, Address: 0x14e5c4, Func Offset: 0x44
	// Line 349, Address: 0x14e5c8, Func Offset: 0x48
	// Line 351, Address: 0x14e5cc, Func Offset: 0x4c
	// Line 359, Address: 0x14e5dc, Func Offset: 0x5c
	// Line 351, Address: 0x14e5e0, Func Offset: 0x60
	// Line 359, Address: 0x14e5e4, Func Offset: 0x64
	// Line 355, Address: 0x14e5e8, Func Offset: 0x68
	// Line 359, Address: 0x14e5ec, Func Offset: 0x6c
	// Line 356, Address: 0x14e5f0, Func Offset: 0x70
	// Line 359, Address: 0x14e5f4, Func Offset: 0x74
	// Line 361, Address: 0x14e600, Func Offset: 0x80
	// Line 368, Address: 0x14e618, Func Offset: 0x98
	// Line 365, Address: 0x14e61c, Func Offset: 0x9c
	// Line 368, Address: 0x14e620, Func Offset: 0xa0
	// Line 366, Address: 0x14e624, Func Offset: 0xa4
	// Line 368, Address: 0x14e628, Func Offset: 0xa8
	// Line 367, Address: 0x14e62c, Func Offset: 0xac
	// Line 369, Address: 0x14e630, Func Offset: 0xb0
	// Line 368, Address: 0x14e634, Func Offset: 0xb4
	// Line 369, Address: 0x14e648, Func Offset: 0xc8
	// Line 370, Address: 0x14e64c, Func Offset: 0xcc
	// Line 371, Address: 0x14e650, Func Offset: 0xd0
	// Line 372, Address: 0x14e654, Func Offset: 0xd4
	// Line 373, Address: 0x14e658, Func Offset: 0xd8
	// Func End, Address: 0x14e660, Func Offset: 0xe0
}

// 
// Start address: 0x14e660
void InitTriangleNormalSpecular(TriangleNormalSpecular* p)
{
	// Line 379, Address: 0x14e660, Func Offset: 0
	// Line 384, Address: 0x14e664, Func Offset: 0x4
	// Line 379, Address: 0x14e668, Func Offset: 0x8
	// Line 390, Address: 0x14e66c, Func Offset: 0xc
	// Line 379, Address: 0x14e670, Func Offset: 0x10
	// Line 381, Address: 0x14e674, Func Offset: 0x14
	// Line 380, Address: 0x14e67c, Func Offset: 0x1c
	// Line 384, Address: 0x14e680, Func Offset: 0x20
	// Line 381, Address: 0x14e684, Func Offset: 0x24
	// Line 384, Address: 0x14e688, Func Offset: 0x28
	// Line 391, Address: 0x14e68c, Func Offset: 0x2c
	// Line 384, Address: 0x14e690, Func Offset: 0x30
	// Line 401, Address: 0x14e694, Func Offset: 0x34
	// Line 384, Address: 0x14e698, Func Offset: 0x38
	// Line 403, Address: 0x14e69c, Func Offset: 0x3c
	// Line 384, Address: 0x14e6a0, Func Offset: 0x40
	// Line 386, Address: 0x14e6a4, Func Offset: 0x44
	// Line 384, Address: 0x14e6a8, Func Offset: 0x48
	// Line 386, Address: 0x14e6ac, Func Offset: 0x4c
	// Line 405, Address: 0x14e6b0, Func Offset: 0x50
	// Line 386, Address: 0x14e6b4, Func Offset: 0x54
	// Line 394, Address: 0x14e6c0, Func Offset: 0x60
	// Line 386, Address: 0x14e6c4, Func Offset: 0x64
	// Line 394, Address: 0x14e6c8, Func Offset: 0x68
	// Line 390, Address: 0x14e6cc, Func Offset: 0x6c
	// Line 394, Address: 0x14e6d0, Func Offset: 0x70
	// Line 391, Address: 0x14e6d4, Func Offset: 0x74
	// Line 394, Address: 0x14e6d8, Func Offset: 0x78
	// Line 406, Address: 0x14e6e4, Func Offset: 0x84
	// Line 396, Address: 0x14e6e8, Func Offset: 0x88
	// Line 408, Address: 0x14e704, Func Offset: 0xa4
	// Line 401, Address: 0x14e708, Func Offset: 0xa8
	// Line 409, Address: 0x14e70c, Func Offset: 0xac
	// Line 401, Address: 0x14e710, Func Offset: 0xb0
	// Line 412, Address: 0x14e720, Func Offset: 0xc0
	// Line 402, Address: 0x14e724, Func Offset: 0xc4
	// Line 403, Address: 0x14e728, Func Offset: 0xc8
	// Line 404, Address: 0x14e72c, Func Offset: 0xcc
	// Line 405, Address: 0x14e730, Func Offset: 0xd0
	// Line 406, Address: 0x14e734, Func Offset: 0xd4
	// Line 407, Address: 0x14e738, Func Offset: 0xd8
	// Line 408, Address: 0x14e73c, Func Offset: 0xdc
	// Line 409, Address: 0x14e740, Func Offset: 0xe0
	// Line 410, Address: 0x14e744, Func Offset: 0xe4
	// Line 411, Address: 0x14e748, Func Offset: 0xe8
	// Line 412, Address: 0x14e74c, Func Offset: 0xec
	// Line 413, Address: 0x14e754, Func Offset: 0xf4
	// Line 415, Address: 0x14e758, Func Offset: 0xf8
	// Func End, Address: 0x14e760, Func Offset: 0x100
}

// 
// Start address: 0x14e760
void InitTriangleNormalEnvironSpecular(TriangleNormalEnvironSpecular* p)
{
	// Line 421, Address: 0x14e760, Func Offset: 0
	// Line 438, Address: 0x14e764, Func Offset: 0x4
	// Line 421, Address: 0x14e768, Func Offset: 0x8
	// Line 426, Address: 0x14e76c, Func Offset: 0xc
	// Line 421, Address: 0x14e770, Func Offset: 0x10
	// Line 423, Address: 0x14e774, Func Offset: 0x14
	// Line 422, Address: 0x14e77c, Func Offset: 0x1c
	// Line 426, Address: 0x14e780, Func Offset: 0x20
	// Line 423, Address: 0x14e784, Func Offset: 0x24
	// Line 426, Address: 0x14e788, Func Offset: 0x28
	// Line 432, Address: 0x14e78c, Func Offset: 0x2c
	// Line 426, Address: 0x14e790, Func Offset: 0x30
	// Line 438, Address: 0x14e794, Func Offset: 0x34
	// Line 426, Address: 0x14e798, Func Offset: 0x38
	// Line 419, Address: 0x14e79c, Func Offset: 0x3c
	// Line 428, Address: 0x14e7a0, Func Offset: 0x40
	// Line 446, Address: 0x14e7a4, Func Offset: 0x44
	// Line 428, Address: 0x14e7a8, Func Offset: 0x48
	// Line 459, Address: 0x14e7ac, Func Offset: 0x4c
	// Line 428, Address: 0x14e7b0, Func Offset: 0x50
	// Line 426, Address: 0x14e7bc, Func Offset: 0x5c
	// Line 436, Address: 0x14e7c4, Func Offset: 0x64
	// Line 428, Address: 0x14e7cc, Func Offset: 0x6c
	// Line 436, Address: 0x14e7d0, Func Offset: 0x70
	// Line 433, Address: 0x14e7d4, Func Offset: 0x74
	// Line 432, Address: 0x14e7d8, Func Offset: 0x78
	// Line 436, Address: 0x14e7dc, Func Offset: 0x7c
	// Line 433, Address: 0x14e7e0, Func Offset: 0x80
	// Line 436, Address: 0x14e7e4, Func Offset: 0x84
	// Line 438, Address: 0x14e7ec, Func Offset: 0x8c
	// Line 445, Address: 0x14e7f8, Func Offset: 0x98
	// Line 438, Address: 0x14e800, Func Offset: 0xa0
	// Line 445, Address: 0x14e804, Func Offset: 0xa4
	// Line 442, Address: 0x14e808, Func Offset: 0xa8
	// Line 443, Address: 0x14e80c, Func Offset: 0xac
	// Line 445, Address: 0x14e810, Func Offset: 0xb0
	// Line 452, Address: 0x14e814, Func Offset: 0xb4
	// Line 444, Address: 0x14e818, Func Offset: 0xb8
	// Line 452, Address: 0x14e81c, Func Offset: 0xbc
	// Line 445, Address: 0x14e820, Func Offset: 0xc0
	// Line 452, Address: 0x14e824, Func Offset: 0xc4
	// Line 445, Address: 0x14e828, Func Offset: 0xc8
	// Line 452, Address: 0x14e82c, Func Offset: 0xcc
	// Line 461, Address: 0x14e830, Func Offset: 0xd0
	// Line 454, Address: 0x14e834, Func Offset: 0xd4
	// Line 452, Address: 0x14e838, Func Offset: 0xd8
	// Line 454, Address: 0x14e83c, Func Offset: 0xdc
	// Line 445, Address: 0x14e850, Func Offset: 0xf0
	// Line 464, Address: 0x14e854, Func Offset: 0xf4
	// Line 445, Address: 0x14e858, Func Offset: 0xf8
	// Line 463, Address: 0x14e85c, Func Offset: 0xfc
	// Line 445, Address: 0x14e860, Func Offset: 0x100
	// Line 446, Address: 0x14e864, Func Offset: 0x104
	// Line 466, Address: 0x14e868, Func Offset: 0x108
	// Line 447, Address: 0x14e86c, Func Offset: 0x10c
	// Line 448, Address: 0x14e870, Func Offset: 0x110
	// Line 449, Address: 0x14e874, Func Offset: 0x114
	// Line 452, Address: 0x14e878, Func Offset: 0x118
	// Line 454, Address: 0x14e87c, Func Offset: 0x11c
	// Line 459, Address: 0x14e880, Func Offset: 0x120
	// Line 470, Address: 0x14e894, Func Offset: 0x134
	// Line 460, Address: 0x14e898, Func Offset: 0x138
	// Line 461, Address: 0x14e89c, Func Offset: 0x13c
	// Line 462, Address: 0x14e8a0, Func Offset: 0x140
	// Line 463, Address: 0x14e8a4, Func Offset: 0x144
	// Line 464, Address: 0x14e8a8, Func Offset: 0x148
	// Line 465, Address: 0x14e8ac, Func Offset: 0x14c
	// Line 466, Address: 0x14e8b0, Func Offset: 0x150
	// Line 467, Address: 0x14e8b4, Func Offset: 0x154
	// Line 468, Address: 0x14e8b8, Func Offset: 0x158
	// Line 469, Address: 0x14e8bc, Func Offset: 0x15c
	// Line 470, Address: 0x14e8c0, Func Offset: 0x160
	// Line 471, Address: 0x14e8c8, Func Offset: 0x168
	// Line 472, Address: 0x14e8cc, Func Offset: 0x16c
	// Line 473, Address: 0x14e8d0, Func Offset: 0x170
	// Func End, Address: 0x14e8d8, Func Offset: 0x178
}

// 
// Start address: 0x14e8e0
void InitTriangleSpecularNormal(TriangleSpecularNormal* p)
{
	// Line 479, Address: 0x14e8e0, Func Offset: 0
	// Line 484, Address: 0x14e8e4, Func Offset: 0x4
	// Line 479, Address: 0x14e8e8, Func Offset: 0x8
	// Line 491, Address: 0x14e8ec, Func Offset: 0xc
	// Line 479, Address: 0x14e8f0, Func Offset: 0x10
	// Line 481, Address: 0x14e8f4, Func Offset: 0x14
	// Line 480, Address: 0x14e8fc, Func Offset: 0x1c
	// Line 484, Address: 0x14e900, Func Offset: 0x20
	// Line 481, Address: 0x14e904, Func Offset: 0x24
	// Line 484, Address: 0x14e908, Func Offset: 0x28
	// Line 492, Address: 0x14e90c, Func Offset: 0x2c
	// Line 484, Address: 0x14e910, Func Offset: 0x30
	// Line 493, Address: 0x14e914, Func Offset: 0x34
	// Line 484, Address: 0x14e918, Func Offset: 0x38
	// Line 494, Address: 0x14e91c, Func Offset: 0x3c
	// Line 486, Address: 0x14e920, Func Offset: 0x40
	// Line 495, Address: 0x14e924, Func Offset: 0x44
	// Line 484, Address: 0x14e928, Func Offset: 0x48
	// Line 486, Address: 0x14e930, Func Offset: 0x50
	// Line 496, Address: 0x14e938, Func Offset: 0x58
	// Line 486, Address: 0x14e93c, Func Offset: 0x5c
	// Line 498, Address: 0x14e940, Func Offset: 0x60
	// Line 486, Address: 0x14e944, Func Offset: 0x64
	// Line 499, Address: 0x14e948, Func Offset: 0x68
	// Line 486, Address: 0x14e94c, Func Offset: 0x6c
	// Line 491, Address: 0x14e954, Func Offset: 0x74
	// Line 507, Address: 0x14e958, Func Offset: 0x78
	// Line 509, Address: 0x14e964, Func Offset: 0x84
	// Line 507, Address: 0x14e96c, Func Offset: 0x8c
	// Line 509, Address: 0x14e970, Func Offset: 0x90
	// Line 491, Address: 0x14e978, Func Offset: 0x98
	// Line 509, Address: 0x14e97c, Func Offset: 0x9c
	// Line 491, Address: 0x14e980, Func Offset: 0xa0
	// Line 507, Address: 0x14e988, Func Offset: 0xa8
	// Line 491, Address: 0x14e98c, Func Offset: 0xac
	// Line 502, Address: 0x14e990, Func Offset: 0xb0
	// Line 492, Address: 0x14e994, Func Offset: 0xb4
	// Line 493, Address: 0x14e998, Func Offset: 0xb8
	// Line 494, Address: 0x14e99c, Func Offset: 0xbc
	// Line 495, Address: 0x14e9a0, Func Offset: 0xc0
	// Line 496, Address: 0x14e9a4, Func Offset: 0xc4
	// Line 497, Address: 0x14e9a8, Func Offset: 0xc8
	// Line 498, Address: 0x14e9ac, Func Offset: 0xcc
	// Line 499, Address: 0x14e9b0, Func Offset: 0xd0
	// Line 500, Address: 0x14e9b4, Func Offset: 0xd4
	// Line 501, Address: 0x14e9b8, Func Offset: 0xd8
	// Line 502, Address: 0x14e9bc, Func Offset: 0xdc
	// Line 503, Address: 0x14e9c4, Func Offset: 0xe4
	// Line 504, Address: 0x14e9c8, Func Offset: 0xe8
	// Line 507, Address: 0x14e9cc, Func Offset: 0xec
	// Line 509, Address: 0x14e9d0, Func Offset: 0xf0
	// Line 513, Address: 0x14e9d4, Func Offset: 0xf4
	// Line 515, Address: 0x14e9d8, Func Offset: 0xf8
	// Func End, Address: 0x14e9e0, Func Offset: 0x100
}

// 
// Start address: 0x14e9e0
void InitAllPacket(AllPacket* p)
{
	// Line 519, Address: 0x14e9e0, Func Offset: 0
	// Line 520, Address: 0x14e9e8, Func Offset: 0x8
	// Line 521, Address: 0x14e9f0, Func Offset: 0x10
	// Line 523, Address: 0x14e9f8, Func Offset: 0x18
	// Line 524, Address: 0x14ea00, Func Offset: 0x20
	// Line 526, Address: 0x14ea08, Func Offset: 0x28
	// Line 527, Address: 0x14ea10, Func Offset: 0x30
	// Line 529, Address: 0x14ea18, Func Offset: 0x38
	// Line 530, Address: 0x14ea20, Func Offset: 0x40
	// Line 532, Address: 0x14ea28, Func Offset: 0x48
	// Line 533, Address: 0x14ea30, Func Offset: 0x50
	// Line 534, Address: 0x14ea38, Func Offset: 0x58
	// Func End, Address: 0x14ea44, Func Offset: 0x64
}

// 
// Start address: 0x14ea50
void LoadProgram()
{
	_anon2 packet;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 541, Address: 0x14ea50, Func Offset: 0
	// Line 544, Address: 0x14ea54, Func Offset: 0x4
	// Line 541, Address: 0x14ea58, Func Offset: 0x8
	// Line 544, Address: 0x14ea5c, Func Offset: 0xc
	// Line 548, Address: 0x14ea68, Func Offset: 0x18
	// Line 552, Address: 0x14ea84, Func Offset: 0x34
	// Line 554, Address: 0x14ea98, Func Offset: 0x48
	// Line 555, Address: 0x14eaa4, Func Offset: 0x54
	// Line 557, Address: 0x14eaac, Func Offset: 0x5c
	// Line 559, Address: 0x14eab8, Func Offset: 0x68
	// Line 560, Address: 0x14eac8, Func Offset: 0x78
	// Func End, Address: 0x14ead4, Func Offset: 0x84
}

// 
// Start address: 0x14eae0
void MakeData()
{
	int n_parallels;
	int i;
	PLightData* data;
	int n_extras;
	int i;
	Light* light;
	ELightData* data;
	Lambert0Data* data;
	EMapData* data;
	PersData* data;
	float offset[4];
	float mag[4];
	// Line 567, Address: 0x14eae0, Func Offset: 0
	// Line 570, Address: 0x14eaf8, Func Offset: 0x18
	// Line 572, Address: 0x14eb04, Func Offset: 0x24
	// Line 573, Address: 0x14eb18, Func Offset: 0x38
	// Line 577, Address: 0x14eb28, Func Offset: 0x48
	// Line 579, Address: 0x14eb34, Func Offset: 0x54
	// Line 580, Address: 0x14eb40, Func Offset: 0x60
	// Line 585, Address: 0x14eb50, Func Offset: 0x70
	// Line 587, Address: 0x14eb5c, Func Offset: 0x7c
	// Line 588, Address: 0x14eb70, Func Offset: 0x90
	// Line 589, Address: 0x14eb7c, Func Offset: 0x9c
	// Line 594, Address: 0x14eb80, Func Offset: 0xa0
	// Line 589, Address: 0x14eb84, Func Offset: 0xa4
	// Line 594, Address: 0x14eb94, Func Offset: 0xb4
	// Line 595, Address: 0x14eb9c, Func Offset: 0xbc
	// Line 597, Address: 0x14eba8, Func Offset: 0xc8
	// Line 598, Address: 0x14ebb4, Func Offset: 0xd4
	// Line 602, Address: 0x14ebb8, Func Offset: 0xd8
	// Line 601, Address: 0x14ebc0, Func Offset: 0xe0
	// Line 598, Address: 0x14ebc4, Func Offset: 0xe4
	// Line 599, Address: 0x14ebc8, Func Offset: 0xe8
	// Line 600, Address: 0x14ebd0, Func Offset: 0xf0
	// Line 601, Address: 0x14ebd8, Func Offset: 0xf8
	// Line 602, Address: 0x14ebdc, Func Offset: 0xfc
	// Line 607, Address: 0x14ebe8, Func Offset: 0x108
	// Line 611, Address: 0x14ebf0, Func Offset: 0x110
	// Line 607, Address: 0x14ebf4, Func Offset: 0x114
	// Line 611, Address: 0x14ec04, Func Offset: 0x124
	// Line 613, Address: 0x14ec0c, Func Offset: 0x12c
	// Line 619, Address: 0x14ec18, Func Offset: 0x138
	// Line 626, Address: 0x14ec3c, Func Offset: 0x15c
	// Line 630, Address: 0x14ec40, Func Offset: 0x160
	// Line 626, Address: 0x14ec44, Func Offset: 0x164
	// Line 630, Address: 0x14ec50, Func Offset: 0x170
	// Line 626, Address: 0x14ec54, Func Offset: 0x174
	// Line 630, Address: 0x14ec5c, Func Offset: 0x17c
	// Line 632, Address: 0x14ec64, Func Offset: 0x184
	// Line 633, Address: 0x14ec74, Func Offset: 0x194
	// Line 642, Address: 0x14ec84, Func Offset: 0x1a4
	// Line 648, Address: 0x14eca4, Func Offset: 0x1c4
	// Line 657, Address: 0x14eca8, Func Offset: 0x1c8
	// Line 648, Address: 0x14ecac, Func Offset: 0x1cc
	// Line 657, Address: 0x14ecb8, Func Offset: 0x1d8
	// Line 648, Address: 0x14ecbc, Func Offset: 0x1dc
	// Line 657, Address: 0x14ecc4, Func Offset: 0x1e4
	// Line 658, Address: 0x14ecd4, Func Offset: 0x1f4
	// Line 659, Address: 0x14ecec, Func Offset: 0x20c
	// Line 660, Address: 0x14ed04, Func Offset: 0x224
	// Line 661, Address: 0x14ed1c, Func Offset: 0x23c
	// Line 662, Address: 0x14ed2c, Func Offset: 0x24c
	// Line 663, Address: 0x14ed3c, Func Offset: 0x25c
	// Line 666, Address: 0x14ed4c, Func Offset: 0x26c
	// Func End, Address: 0x14ed6c, Func Offset: 0x28c
}

// 
// Start address: 0x14ed70
void MakePartTransferPacket(Part* part, _anon2* pk)
{
	int n_cluster_data;
	ClusterData* cluster_data_top;
	float cluster_nodes[4];
	int i;
	unsigned int n;
	float matrices[4][4];
	unsigned short* skeletons;
	int dst_top;
	int i;
	unsigned short* pairs;
	int dst_top;
	int i;
	// Line 673, Address: 0x14ed70, Func Offset: 0
	// Line 675, Address: 0x14ed74, Func Offset: 0x4
	// Line 673, Address: 0x14ed78, Func Offset: 0x8
	// Line 675, Address: 0x14ed7c, Func Offset: 0xc
	// Line 673, Address: 0x14ed80, Func Offset: 0x10
	// Line 675, Address: 0x14ed84, Func Offset: 0x14
	// Line 673, Address: 0x14ed88, Func Offset: 0x18
	// Line 675, Address: 0x14eda0, Func Offset: 0x30
	// Line 681, Address: 0x14edb8, Func Offset: 0x48
	// Line 680, Address: 0x14edbc, Func Offset: 0x4c
	// Line 679, Address: 0x14edc0, Func Offset: 0x50
	// Line 683, Address: 0x14edc4, Func Offset: 0x54
	// Line 681, Address: 0x14edc8, Func Offset: 0x58
	// Line 683, Address: 0x14edcc, Func Offset: 0x5c
	// Line 687, Address: 0x14edd8, Func Offset: 0x68
	// Line 688, Address: 0x14eddc, Func Offset: 0x6c
	// Line 691, Address: 0x14ee10, Func Offset: 0xa0
	// Line 696, Address: 0x14ee20, Func Offset: 0xb0
	// Line 700, Address: 0x14ee28, Func Offset: 0xb8
	// Line 697, Address: 0x14ee30, Func Offset: 0xc0
	// Line 698, Address: 0x14ee34, Func Offset: 0xc4
	// Line 700, Address: 0x14ee38, Func Offset: 0xc8
	// Line 704, Address: 0x14ee48, Func Offset: 0xd8
	// Line 707, Address: 0x14ee74, Func Offset: 0x104
	// Line 704, Address: 0x14ee7c, Func Offset: 0x10c
	// Line 707, Address: 0x14ee80, Func Offset: 0x110
	// Line 715, Address: 0x14ee90, Func Offset: 0x120
	// Line 712, Address: 0x14ee94, Func Offset: 0x124
	// Line 715, Address: 0x14ee98, Func Offset: 0x128
	// Line 713, Address: 0x14ee9c, Func Offset: 0x12c
	// Line 715, Address: 0x14eea0, Func Offset: 0x130
	// Line 719, Address: 0x14eeb0, Func Offset: 0x140
	// Line 722, Address: 0x14eee8, Func Offset: 0x178
	// Line 719, Address: 0x14eef0, Func Offset: 0x180
	// Line 722, Address: 0x14eef4, Func Offset: 0x184
	// Line 724, Address: 0x14ef00, Func Offset: 0x190
	// Func End, Address: 0x14ef24, Func Offset: 0x1b4
}

// 
// Start address: 0x14ef30
void MakeLambertShadingPacket(Part* part, _anon2* pk)
{
	int n_parallels;
	int n_extras;
	int i;
	Light* light;
	float brightness;
	Data_1* data;
	// Line 731, Address: 0x14ef30, Func Offset: 0
	// Line 732, Address: 0x14ef58, Func Offset: 0x28
	// Line 733, Address: 0x14ef60, Func Offset: 0x30
	// Line 737, Address: 0x14ef68, Func Offset: 0x38
	// Line 738, Address: 0x14ef74, Func Offset: 0x44
	// Line 739, Address: 0x14ef78, Func Offset: 0x48
	// Line 738, Address: 0x14ef7c, Func Offset: 0x4c
	// Line 739, Address: 0x14ef80, Func Offset: 0x50
	// Line 738, Address: 0x14ef8c, Func Offset: 0x5c
	// Line 739, Address: 0x14ef90, Func Offset: 0x60
	// Line 738, Address: 0x14ef94, Func Offset: 0x64
	// Line 739, Address: 0x14ef9c, Func Offset: 0x6c
	// Line 740, Address: 0x14efac, Func Offset: 0x7c
	// Line 741, Address: 0x14efb0, Func Offset: 0x80
	// Line 742, Address: 0x14efc8, Func Offset: 0x98
	// Line 745, Address: 0x14eff4, Func Offset: 0xc4
	// Line 746, Address: 0x14f000, Func Offset: 0xd0
	// Line 747, Address: 0x14f018, Func Offset: 0xe8
	// Line 748, Address: 0x14f030, Func Offset: 0x100
	// Line 749, Address: 0x14f034, Func Offset: 0x104
	// Line 748, Address: 0x14f038, Func Offset: 0x108
	// Line 749, Address: 0x14f03c, Func Offset: 0x10c
	// Line 748, Address: 0x14f040, Func Offset: 0x110
	// Line 749, Address: 0x14f04c, Func Offset: 0x11c
	// Line 752, Address: 0x14f058, Func Offset: 0x128
	// Line 753, Address: 0x14f070, Func Offset: 0x140
	// Line 754, Address: 0x14f078, Func Offset: 0x148
	// Line 755, Address: 0x14f07c, Func Offset: 0x14c
	// Line 754, Address: 0x14f080, Func Offset: 0x150
	// Line 755, Address: 0x14f090, Func Offset: 0x160
	// Line 757, Address: 0x14f0b0, Func Offset: 0x180
	// Line 758, Address: 0x14f0d4, Func Offset: 0x1a4
	// Line 759, Address: 0x14f0dc, Func Offset: 0x1ac
	// Line 760, Address: 0x14f0e0, Func Offset: 0x1b0
	// Line 764, Address: 0x14f104, Func Offset: 0x1d4
	// Line 765, Address: 0x14f108, Func Offset: 0x1d8
	// Line 768, Address: 0x14f134, Func Offset: 0x204
	// Line 769, Address: 0x14f140, Func Offset: 0x210
	// Line 770, Address: 0x14f158, Func Offset: 0x228
	// Line 771, Address: 0x14f170, Func Offset: 0x240
	// Line 772, Address: 0x14f174, Func Offset: 0x244
	// Line 771, Address: 0x14f178, Func Offset: 0x248
	// Line 772, Address: 0x14f17c, Func Offset: 0x24c
	// Line 771, Address: 0x14f180, Func Offset: 0x250
	// Line 772, Address: 0x14f18c, Func Offset: 0x25c
	// Line 776, Address: 0x14f198, Func Offset: 0x268
	// Line 777, Address: 0x14f1a0, Func Offset: 0x270
	// Line 776, Address: 0x14f1b0, Func Offset: 0x280
	// Line 777, Address: 0x14f1b4, Func Offset: 0x284
	// Line 776, Address: 0x14f1b8, Func Offset: 0x288
	// Line 777, Address: 0x14f1c0, Func Offset: 0x290
	// Line 779, Address: 0x14f1d0, Func Offset: 0x2a0
	// Line 782, Address: 0x14f200, Func Offset: 0x2d0
	// Line 783, Address: 0x14f20c, Func Offset: 0x2dc
	// Line 784, Address: 0x14f224, Func Offset: 0x2f4
	// Line 785, Address: 0x14f23c, Func Offset: 0x30c
	// Line 795, Address: 0x14f24c, Func Offset: 0x31c
	// Line 797, Address: 0x14f254, Func Offset: 0x324
	// Line 795, Address: 0x14f26c, Func Offset: 0x33c
	// Line 797, Address: 0x14f270, Func Offset: 0x340
	// Line 800, Address: 0x14f288, Func Offset: 0x358
	// Line 801, Address: 0x14f294, Func Offset: 0x364
	// Line 802, Address: 0x14f2a4, Func Offset: 0x374
	// Line 803, Address: 0x14f2c0, Func Offset: 0x390
	// Line 805, Address: 0x14f2d0, Func Offset: 0x3a0
	// Line 806, Address: 0x14f2dc, Func Offset: 0x3ac
	// Line 807, Address: 0x14f2e0, Func Offset: 0x3b0
	// Line 806, Address: 0x14f2e4, Func Offset: 0x3b4
	// Line 807, Address: 0x14f2e8, Func Offset: 0x3b8
	// Line 808, Address: 0x14f2f0, Func Offset: 0x3c0
	// Line 811, Address: 0x14f2fc, Func Offset: 0x3cc
	// Line 808, Address: 0x14f308, Func Offset: 0x3d8
	// Line 809, Address: 0x14f310, Func Offset: 0x3e0
	// Line 810, Address: 0x14f31c, Func Offset: 0x3ec
	// Line 811, Address: 0x14f328, Func Offset: 0x3f8
	// Line 812, Address: 0x14f334, Func Offset: 0x404
	// Line 813, Address: 0x14f350, Func Offset: 0x420
	// Line 815, Address: 0x14f364, Func Offset: 0x434
	// Func End, Address: 0x14f38c, Func Offset: 0x45c
}

// 
// Start address: 0x14f390
void MakeClipPacket(Part* part, _anon2* pk)
{
	// Line 822, Address: 0x14f390, Func Offset: 0
	// Line 825, Address: 0x14f394, Func Offset: 0x4
	// Line 822, Address: 0x14f398, Func Offset: 0x8
	// Line 825, Address: 0x14f3a0, Func Offset: 0x10
	// Line 826, Address: 0x14f3c8, Func Offset: 0x38
	// Line 829, Address: 0x14f3d4, Func Offset: 0x44
	// Line 830, Address: 0x14f3d8, Func Offset: 0x48
	// Line 829, Address: 0x14f3dc, Func Offset: 0x4c
	// Line 830, Address: 0x14f3e0, Func Offset: 0x50
	// Line 829, Address: 0x14f3ec, Func Offset: 0x5c
	// Line 830, Address: 0x14f3f0, Func Offset: 0x60
	// Line 829, Address: 0x14f3f4, Func Offset: 0x64
	// Line 830, Address: 0x14f3fc, Func Offset: 0x6c
	// Line 831, Address: 0x14f40c, Func Offset: 0x7c
	// Line 832, Address: 0x14f418, Func Offset: 0x88
	// Line 834, Address: 0x14f430, Func Offset: 0xa0
	// Line 836, Address: 0x14f438, Func Offset: 0xa8
	// Line 837, Address: 0x14f440, Func Offset: 0xb0
	// Line 836, Address: 0x14f450, Func Offset: 0xc0
	// Line 837, Address: 0x14f454, Func Offset: 0xc4
	// Line 836, Address: 0x14f458, Func Offset: 0xc8
	// Line 837, Address: 0x14f460, Func Offset: 0xd0
	// Line 838, Address: 0x14f470, Func Offset: 0xe0
	// Line 839, Address: 0x14f47c, Func Offset: 0xec
	// Line 841, Address: 0x14f494, Func Offset: 0x104
	// Line 845, Address: 0x14f4a4, Func Offset: 0x114
	// Line 844, Address: 0x14f4a8, Func Offset: 0x118
	// Line 845, Address: 0x14f4ac, Func Offset: 0x11c
	// Line 844, Address: 0x14f4b8, Func Offset: 0x128
	// Line 845, Address: 0x14f4bc, Func Offset: 0x12c
	// Line 844, Address: 0x14f4c0, Func Offset: 0x130
	// Line 845, Address: 0x14f4c8, Func Offset: 0x138
	// Line 846, Address: 0x14f4d8, Func Offset: 0x148
	// Line 847, Address: 0x14f4e4, Func Offset: 0x154
	// Line 849, Address: 0x14f4fc, Func Offset: 0x16c
	// Line 860, Address: 0x14f500, Func Offset: 0x170
	// Func End, Address: 0x14f510, Func Offset: 0x180
}

// 
// Start address: 0x14f510
void MakeCalcPartPacket(Part* part)
{
	<unknown fundamental type (0xa510)>* packet_buffer;
	_anon2 packet;
	_anon2* pk;
	Data_0* data;
	// Line 867, Address: 0x14f510, Func Offset: 0
	// Line 868, Address: 0x14f520, Func Offset: 0x10
	// Line 871, Address: 0x14f528, Func Offset: 0x18
	// Line 870, Address: 0x14f52c, Func Offset: 0x1c
	// Line 871, Address: 0x14f530, Func Offset: 0x20
	// Line 873, Address: 0x14f544, Func Offset: 0x34
	// Line 874, Address: 0x14f550, Func Offset: 0x40
	// Line 876, Address: 0x14f558, Func Offset: 0x48
	// Line 874, Address: 0x14f55c, Func Offset: 0x4c
	// Line 879, Address: 0x14f560, Func Offset: 0x50
	// Line 876, Address: 0x14f564, Func Offset: 0x54
	// Line 879, Address: 0x14f56c, Func Offset: 0x5c
	// Line 876, Address: 0x14f570, Func Offset: 0x60
	// Line 879, Address: 0x14f578, Func Offset: 0x68
	// Line 882, Address: 0x14f580, Func Offset: 0x70
	// Line 883, Address: 0x14f58c, Func Offset: 0x7c
	// Line 884, Address: 0x14f5a0, Func Offset: 0x90
	// Line 885, Address: 0x14f5b8, Func Offset: 0xa8
	// Line 886, Address: 0x14f5c8, Func Offset: 0xb8
	// Line 887, Address: 0x14f5dc, Func Offset: 0xcc
	// Line 888, Address: 0x14f5f0, Func Offset: 0xe0
	// Line 889, Address: 0x14f604, Func Offset: 0xf4
	// Line 890, Address: 0x14f610, Func Offset: 0x100
	// Line 891, Address: 0x14f61c, Func Offset: 0x10c
	// Line 892, Address: 0x14f628, Func Offset: 0x118
	// Line 893, Address: 0x14f634, Func Offset: 0x124
	// Line 894, Address: 0x14f638, Func Offset: 0x128
	// Line 898, Address: 0x14f644, Func Offset: 0x134
	// Line 899, Address: 0x14f654, Func Offset: 0x144
	// Line 901, Address: 0x14f664, Func Offset: 0x154
	// Line 900, Address: 0x14f668, Func Offset: 0x158
	// Line 901, Address: 0x14f66c, Func Offset: 0x15c
	// Line 900, Address: 0x14f678, Func Offset: 0x168
	// Line 901, Address: 0x14f67c, Func Offset: 0x16c
	// Line 900, Address: 0x14f680, Func Offset: 0x170
	// Line 901, Address: 0x14f688, Func Offset: 0x178
	// Line 902, Address: 0x14f698, Func Offset: 0x188
	// Line 903, Address: 0x14f6a4, Func Offset: 0x194
	// Line 904, Address: 0x14f6bc, Func Offset: 0x1ac
	// Line 906, Address: 0x14f6c0, Func Offset: 0x1b0
	// Line 909, Address: 0x14f6c8, Func Offset: 0x1b8
	// Line 906, Address: 0x14f6cc, Func Offset: 0x1bc
	// Line 909, Address: 0x14f6d8, Func Offset: 0x1c8
	// Line 916, Address: 0x14f708, Func Offset: 0x1f8
	// Line 920, Address: 0x14f714, Func Offset: 0x204
	// Line 923, Address: 0x14f718, Func Offset: 0x208
	// Line 928, Address: 0x14f724, Func Offset: 0x214
	// Line 924, Address: 0x14f728, Func Offset: 0x218
	// Line 928, Address: 0x14f72c, Func Offset: 0x21c
	// Line 924, Address: 0x14f738, Func Offset: 0x228
	// Line 928, Address: 0x14f73c, Func Offset: 0x22c
	// Line 924, Address: 0x14f740, Func Offset: 0x230
	// Line 928, Address: 0x14f748, Func Offset: 0x238
	// Line 930, Address: 0x14f758, Func Offset: 0x248
	// Line 933, Address: 0x14f788, Func Offset: 0x278
	// Line 934, Address: 0x14f794, Func Offset: 0x284
	// Line 935, Address: 0x14f7ac, Func Offset: 0x29c
	// Line 936, Address: 0x14f7c4, Func Offset: 0x2b4
	// Line 940, Address: 0x14f7d8, Func Offset: 0x2c8
	// Line 947, Address: 0x14f7e8, Func Offset: 0x2d8
	// Line 946, Address: 0x14f7ec, Func Offset: 0x2dc
	// Line 947, Address: 0x14f7f0, Func Offset: 0x2e0
	// Line 946, Address: 0x14f7fc, Func Offset: 0x2ec
	// Line 947, Address: 0x14f800, Func Offset: 0x2f0
	// Line 946, Address: 0x14f804, Func Offset: 0x2f4
	// Line 947, Address: 0x14f80c, Func Offset: 0x2fc
	// Line 948, Address: 0x14f81c, Func Offset: 0x30c
	// Line 951, Address: 0x14f84c, Func Offset: 0x33c
	// Line 952, Address: 0x14f858, Func Offset: 0x348
	// Line 953, Address: 0x14f868, Func Offset: 0x358
	// Line 954, Address: 0x14f884, Func Offset: 0x374
	// Line 956, Address: 0x14f890, Func Offset: 0x380
	// Line 957, Address: 0x14f894, Func Offset: 0x384
	// Line 956, Address: 0x14f8a0, Func Offset: 0x390
	// Line 957, Address: 0x14f8a4, Func Offset: 0x394
	// Line 958, Address: 0x14f8b0, Func Offset: 0x3a0
	// Line 959, Address: 0x14f8c8, Func Offset: 0x3b8
	// Line 960, Address: 0x14f8dc, Func Offset: 0x3cc
	// Line 964, Address: 0x14f8e0, Func Offset: 0x3d0
	// Line 968, Address: 0x14f8e8, Func Offset: 0x3d8
	// Line 964, Address: 0x14f8f8, Func Offset: 0x3e8
	// Line 968, Address: 0x14f8fc, Func Offset: 0x3ec
	// Line 964, Address: 0x14f900, Func Offset: 0x3f0
	// Line 968, Address: 0x14f908, Func Offset: 0x3f8
	// Line 970, Address: 0x14f918, Func Offset: 0x408
	// Line 973, Address: 0x14f948, Func Offset: 0x438
	// Line 974, Address: 0x14f954, Func Offset: 0x444
	// Line 975, Address: 0x14f96c, Func Offset: 0x45c
	// Line 977, Address: 0x14f984, Func Offset: 0x474
	// Line 981, Address: 0x14f988, Func Offset: 0x478
	// Line 977, Address: 0x14f98c, Func Offset: 0x47c
	// Line 981, Address: 0x14f990, Func Offset: 0x480
	// Line 977, Address: 0x14f994, Func Offset: 0x484
	// Line 981, Address: 0x14f99c, Func Offset: 0x48c
	// Line 984, Address: 0x14f9a4, Func Offset: 0x494
	// Line 985, Address: 0x14f9b0, Func Offset: 0x4a0
	// Line 987, Address: 0x14f9bc, Func Offset: 0x4ac
	// Line 988, Address: 0x14f9c8, Func Offset: 0x4b8
	// Line 989, Address: 0x14f9d0, Func Offset: 0x4c0
	// Func End, Address: 0x14f9e4, Func Offset: 0x4d4
}

// 
// Start address: 0x14f9f0
void KickCalcPartPacket()
{
	// Line 996, Address: 0x14f9f0, Func Offset: 0
	// Line 997, Address: 0x14f9f8, Func Offset: 0x8
	// Line 998, Address: 0x14fa0c, Func Offset: 0x1c
	// Func End, Address: 0x14fa18, Func Offset: 0x28
}

// 
// Start address: 0x14fa20
void CalcPart(Part* part)
{
	// Line 1005, Address: 0x14fa20, Func Offset: 0
	// Line 1006, Address: 0x14fa28, Func Offset: 0x8
	// Line 1007, Address: 0x14fa30, Func Offset: 0x10
	// Line 1008, Address: 0x14fa38, Func Offset: 0x18
	// Func End, Address: 0x14fa44, Func Offset: 0x24
}

// 
// Start address: 0x14fa50
void TransferToSPR()
{
	_anon3* toSPR;
	// Line 1015, Address: 0x14fa50, Func Offset: 0
	// Line 1016, Address: 0x14fa54, Func Offset: 0x4
	// Line 1015, Address: 0x14fa58, Func Offset: 0x8
	// Line 1016, Address: 0x14fa5c, Func Offset: 0xc
	// Line 1018, Address: 0x14fa64, Func Offset: 0x14
	// Line 1020, Address: 0x14fa6c, Func Offset: 0x1c
	// Line 1021, Address: 0x14fa70, Func Offset: 0x20
	// Line 1020, Address: 0x14fa74, Func Offset: 0x24
	// Line 1021, Address: 0x14fa78, Func Offset: 0x28
	// Line 1022, Address: 0x14fa8c, Func Offset: 0x3c
	// Line 1024, Address: 0x14faa0, Func Offset: 0x50
	// Line 1025, Address: 0x14fabc, Func Offset: 0x6c
	// Func End, Address: 0x14facc, Func Offset: 0x7c
}

// 
// Start address: 0x14fad0
void PrepareSort()
{
	// Line 1033, Address: 0x14fad0, Func Offset: 0
	// Func End, Address: 0x14fadc, Func Offset: 0xc
}

// 
// Start address: 0x14fae0
void SortTriangleNormal(ktVif1Ot2* ot, Part* part)
{
	_anon3* fromSPR;
	TriangleNormal* pk_base;
	TriangleNormal* pk;
	int pk_page;
	_anon0* text_pos_param;
	TextureParam* texture_params;
	PartHeader* part_header;
	unsigned int* strip;
	int strip_length;
	Node* n2;
	Node* n1;
	int i;
	unsigned int n_;
	Node* n0;
	<unknown fundamental type (0xa510)>* pp;
	Q min;
	int z;
	// Line 1041, Address: 0x14fae0, Func Offset: 0
	// Line 1042, Address: 0x14fb14, Func Offset: 0x34
	// Line 1049, Address: 0x14fb20, Func Offset: 0x40
	// Line 1042, Address: 0x14fb24, Func Offset: 0x44
	// Line 1050, Address: 0x14fb2c, Func Offset: 0x4c
	// Line 1045, Address: 0x14fb30, Func Offset: 0x50
	// Line 1049, Address: 0x14fb34, Func Offset: 0x54
	// Line 1050, Address: 0x14fb44, Func Offset: 0x64
	// Line 1049, Address: 0x14fb48, Func Offset: 0x68
	// Line 1050, Address: 0x14fb4c, Func Offset: 0x6c
	// Line 1049, Address: 0x14fb50, Func Offset: 0x70
	// Line 1050, Address: 0x14fb54, Func Offset: 0x74
	// Line 1057, Address: 0x14fb58, Func Offset: 0x78
	// Line 1049, Address: 0x14fb5c, Func Offset: 0x7c
	// Line 1059, Address: 0x14fb60, Func Offset: 0x80
	// Line 1049, Address: 0x14fb64, Func Offset: 0x84
	// Line 1057, Address: 0x14fb68, Func Offset: 0x88
	// Line 1059, Address: 0x14fb74, Func Offset: 0x94
	// Line 1064, Address: 0x14fb9c, Func Offset: 0xbc
	// Line 1060, Address: 0x14fba8, Func Offset: 0xc8
	// Line 1064, Address: 0x14fbac, Func Offset: 0xcc
	// Line 1065, Address: 0x14fbbc, Func Offset: 0xdc
	// Line 1066, Address: 0x14fbc4, Func Offset: 0xe4
	// Line 1068, Address: 0x14fbd0, Func Offset: 0xf0
	// Line 1070, Address: 0x14fbe0, Func Offset: 0x100
	// Line 1071, Address: 0x14fbf0, Func Offset: 0x110
	// Line 1073, Address: 0x14fbf4, Func Offset: 0x114
	// Line 1071, Address: 0x14fbfc, Func Offset: 0x11c
	// Line 1073, Address: 0x14fc00, Func Offset: 0x120
	// Line 1076, Address: 0x14fc08, Func Offset: 0x128
	// Line 1077, Address: 0x14fc14, Func Offset: 0x134
	// Line 1081, Address: 0x14fc20, Func Offset: 0x140
	// Line 1085, Address: 0x14fc28, Func Offset: 0x148
	// Line 1087, Address: 0x14fc2c, Func Offset: 0x14c
	// Line 1085, Address: 0x14fc30, Func Offset: 0x150
	// Line 1087, Address: 0x14fc48, Func Offset: 0x168
	// Line 1088, Address: 0x14fc4c, Func Offset: 0x16c
	// Line 1089, Address: 0x14fc54, Func Offset: 0x174
	// Line 1091, Address: 0x14fc5c, Func Offset: 0x17c
	// Line 1092, Address: 0x14fc64, Func Offset: 0x184
	// Line 1093, Address: 0x14fc6c, Func Offset: 0x18c
	// Line 1095, Address: 0x14fc74, Func Offset: 0x194
	// Line 1096, Address: 0x14fc7c, Func Offset: 0x19c
	// Line 1097, Address: 0x14fc84, Func Offset: 0x1a4
	// Line 1100, Address: 0x14fc8c, Func Offset: 0x1ac
	// Line 1101, Address: 0x14fc94, Func Offset: 0x1b4
	// Line 1100, Address: 0x14fc98, Func Offset: 0x1b8
	// Line 1101, Address: 0x14fc9c, Func Offset: 0x1bc
	// Line 1102, Address: 0x14fca4, Func Offset: 0x1c4
	// Line 1103, Address: 0x14fcb0, Func Offset: 0x1d0
	// Line 1104, Address: 0x14fcc0, Func Offset: 0x1e0
	// Line 1106, Address: 0x14fcd0, Func Offset: 0x1f0
	// Line 1111, Address: 0x14fcd8, Func Offset: 0x1f8
	// Line 1112, Address: 0x14fcf4, Func Offset: 0x214
	// Line 1113, Address: 0x14fd10, Func Offset: 0x230
	// Line 1115, Address: 0x14fd8c, Func Offset: 0x2ac
	// Line 1117, Address: 0x14fd90, Func Offset: 0x2b0
	// Line 1116, Address: 0x14fd94, Func Offset: 0x2b4
	// Line 1118, Address: 0x14fd98, Func Offset: 0x2b8
	// Line 1117, Address: 0x14fd9c, Func Offset: 0x2bc
	// Line 1118, Address: 0x14fda4, Func Offset: 0x2c4
	// Line 1121, Address: 0x14fdb4, Func Offset: 0x2d4
	// Line 1122, Address: 0x14fdd4, Func Offset: 0x2f4
	// Func End, Address: 0x14fe04, Func Offset: 0x324
}

// 
// Start address: 0x14fe10
void SortTriangleNormalEnviron(ktVif1Ot2* ot, Part* part)
{
	_anon3* fromSPR;
	TriangleNormalEnviron* pk_base;
	TriangleNormalEnviron* pk;
	int pk_page;
	_anon0* text_pos_param;
	TextureParam* texture_params;
	PartHeader* part_header;
	unsigned int* strip;
	int strip_length;
	Node* n2;
	Node* n1;
	int i;
	unsigned int n_;
	Node* n0;
	<unknown fundamental type (0xa510)>* pp;
	Q min;
	int z;
	// Line 1129, Address: 0x14fe10, Func Offset: 0
	// Line 1130, Address: 0x14fe44, Func Offset: 0x34
	// Line 1131, Address: 0x14fe4c, Func Offset: 0x3c
	// Line 1137, Address: 0x14fe50, Func Offset: 0x40
	// Line 1131, Address: 0x14fe54, Func Offset: 0x44
	// Line 1130, Address: 0x14fe58, Func Offset: 0x48
	// Line 1138, Address: 0x14fe5c, Func Offset: 0x4c
	// Line 1133, Address: 0x14fe60, Func Offset: 0x50
	// Line 1131, Address: 0x14fe68, Func Offset: 0x58
	// Line 1133, Address: 0x14fe6c, Func Offset: 0x5c
	// Line 1131, Address: 0x14fe70, Func Offset: 0x60
	// Line 1137, Address: 0x14fe74, Func Offset: 0x64
	// Line 1138, Address: 0x14fe7c, Func Offset: 0x6c
	// Line 1137, Address: 0x14fe88, Func Offset: 0x78
	// Line 1145, Address: 0x14fe90, Func Offset: 0x80
	// Line 1137, Address: 0x14fe94, Func Offset: 0x84
	// Line 1147, Address: 0x14fe98, Func Offset: 0x88
	// Line 1145, Address: 0x14fe9c, Func Offset: 0x8c
	// Line 1137, Address: 0x14fea4, Func Offset: 0x94
	// Line 1145, Address: 0x14fea8, Func Offset: 0x98
	// Line 1147, Address: 0x14feac, Func Offset: 0x9c
	// Line 1152, Address: 0x14fed4, Func Offset: 0xc4
	// Line 1148, Address: 0x14fee0, Func Offset: 0xd0
	// Line 1152, Address: 0x14fee4, Func Offset: 0xd4
	// Line 1153, Address: 0x14fefc, Func Offset: 0xec
	// Line 1154, Address: 0x14ff04, Func Offset: 0xf4
	// Line 1156, Address: 0x14ff18, Func Offset: 0x108
	// Line 1157, Address: 0x14ff30, Func Offset: 0x120
	// Line 1158, Address: 0x14ff38, Func Offset: 0x128
	// Line 1157, Address: 0x14ff40, Func Offset: 0x130
	// Line 1158, Address: 0x14ff44, Func Offset: 0x134
	// Line 1157, Address: 0x14ff48, Func Offset: 0x138
	// Line 1158, Address: 0x14ff58, Func Offset: 0x148
	// Line 1161, Address: 0x14ff84, Func Offset: 0x174
	// Line 1162, Address: 0x14ff98, Func Offset: 0x188
	// Line 1164, Address: 0x14ff9c, Func Offset: 0x18c
	// Line 1162, Address: 0x14ffa4, Func Offset: 0x194
	// Line 1164, Address: 0x14ffa8, Func Offset: 0x198
	// Line 1167, Address: 0x14ffb0, Func Offset: 0x1a0
	// Line 1168, Address: 0x14ffbc, Func Offset: 0x1ac
	// Line 1172, Address: 0x14ffc8, Func Offset: 0x1b8
	// Line 1176, Address: 0x14ffd0, Func Offset: 0x1c0
	// Line 1191, Address: 0x14ffd4, Func Offset: 0x1c4
	// Line 1176, Address: 0x14ffd8, Func Offset: 0x1c8
	// Line 1178, Address: 0x14ffdc, Func Offset: 0x1cc
	// Line 1176, Address: 0x14ffe0, Func Offset: 0x1d0
	// Line 1191, Address: 0x14fff4, Func Offset: 0x1e4
	// Line 1176, Address: 0x14fff8, Func Offset: 0x1e8
	// Line 1178, Address: 0x14fffc, Func Offset: 0x1ec
	// Line 1179, Address: 0x150000, Func Offset: 0x1f0
	// Line 1180, Address: 0x150008, Func Offset: 0x1f8
	// Line 1181, Address: 0x150010, Func Offset: 0x200
	// Line 1182, Address: 0x150018, Func Offset: 0x208
	// Line 1183, Address: 0x150020, Func Offset: 0x210
	// Line 1185, Address: 0x150028, Func Offset: 0x218
	// Line 1186, Address: 0x150030, Func Offset: 0x220
	// Line 1187, Address: 0x150038, Func Offset: 0x228
	// Line 1188, Address: 0x150040, Func Offset: 0x230
	// Line 1189, Address: 0x150048, Func Offset: 0x238
	// Line 1190, Address: 0x150050, Func Offset: 0x240
	// Line 1191, Address: 0x150060, Func Offset: 0x250
	// Line 1192, Address: 0x1500a0, Func Offset: 0x290
	// Line 1194, Address: 0x1500e0, Func Offset: 0x2d0
	// Line 1200, Address: 0x1500e4, Func Offset: 0x2d4
	// Line 1194, Address: 0x1500ec, Func Offset: 0x2dc
	// Line 1195, Address: 0x1500f0, Func Offset: 0x2e0
	// Line 1196, Address: 0x1500f8, Func Offset: 0x2e8
	// Line 1197, Address: 0x150100, Func Offset: 0x2f0
	// Line 1198, Address: 0x150108, Func Offset: 0x2f8
	// Line 1199, Address: 0x150110, Func Offset: 0x300
	// Line 1200, Address: 0x150120, Func Offset: 0x310
	// Line 1201, Address: 0x150160, Func Offset: 0x350
	// Line 1204, Address: 0x1501a0, Func Offset: 0x390
	// Line 1205, Address: 0x1501a8, Func Offset: 0x398
	// Line 1204, Address: 0x1501ac, Func Offset: 0x39c
	// Line 1205, Address: 0x1501b0, Func Offset: 0x3a0
	// Line 1206, Address: 0x1501b8, Func Offset: 0x3a8
	// Line 1207, Address: 0x1501c0, Func Offset: 0x3b0
	// Line 1208, Address: 0x1501d0, Func Offset: 0x3c0
	// Line 1210, Address: 0x1501e0, Func Offset: 0x3d0
	// Line 1215, Address: 0x1501e8, Func Offset: 0x3d8
	// Line 1216, Address: 0x150204, Func Offset: 0x3f4
	// Line 1217, Address: 0x150220, Func Offset: 0x410
	// Line 1219, Address: 0x15029c, Func Offset: 0x48c
	// Line 1221, Address: 0x1502a0, Func Offset: 0x490
	// Line 1220, Address: 0x1502a4, Func Offset: 0x494
	// Line 1222, Address: 0x1502a8, Func Offset: 0x498
	// Line 1221, Address: 0x1502ac, Func Offset: 0x49c
	// Line 1222, Address: 0x1502b4, Func Offset: 0x4a4
	// Line 1225, Address: 0x1502c4, Func Offset: 0x4b4
	// Line 1226, Address: 0x1502e4, Func Offset: 0x4d4
	// Func End, Address: 0x150314, Func Offset: 0x504
}

// 
// Start address: 0x150320
void SortTriangleNormalSpecular(ktVif1Ot2* ot, Part* part)
{
	_anon3* fromSPR;
	TriangleNormalSpecular* pk_base;
	TriangleNormalSpecular* pk;
	int pk_page;
	_anon0* text_pos_param;
	TextureParam* texture_params;
	float* reflection_color;
	PartHeader* part_header;
	unsigned int* strip;
	int strip_length;
	Node* n2;
	Node* n1;
	int i;
	unsigned int n_;
	Node* n0;
	<unknown fundamental type (0xa510)>* pp;
	Q min;
	int z;
	// Line 1233, Address: 0x150320, Func Offset: 0
	// Line 1234, Address: 0x150354, Func Offset: 0x34
	// Line 1235, Address: 0x15035c, Func Offset: 0x3c
	// Line 1241, Address: 0x150360, Func Offset: 0x40
	// Line 1235, Address: 0x150364, Func Offset: 0x44
	// Line 1234, Address: 0x150368, Func Offset: 0x48
	// Line 1242, Address: 0x15036c, Func Offset: 0x4c
	// Line 1237, Address: 0x150370, Func Offset: 0x50
	// Line 1241, Address: 0x150374, Func Offset: 0x54
	// Line 1242, Address: 0x150384, Func Offset: 0x64
	// Line 1235, Address: 0x150388, Func Offset: 0x68
	// Line 1241, Address: 0x15038c, Func Offset: 0x6c
	// Line 1244, Address: 0x150398, Func Offset: 0x78
	// Line 1250, Address: 0x1503a8, Func Offset: 0x88
	// Line 1252, Address: 0x1503ac, Func Offset: 0x8c
	// Line 1250, Address: 0x1503b0, Func Offset: 0x90
	// Line 1252, Address: 0x1503bc, Func Offset: 0x9c
	// Line 1257, Address: 0x1503e4, Func Offset: 0xc4
	// Line 1253, Address: 0x1503f0, Func Offset: 0xd0
	// Line 1257, Address: 0x1503f4, Func Offset: 0xd4
	// Line 1258, Address: 0x150404, Func Offset: 0xe4
	// Line 1259, Address: 0x15040c, Func Offset: 0xec
	// Line 1261, Address: 0x150418, Func Offset: 0xf8
	// Line 1265, Address: 0x150428, Func Offset: 0x108
	// Line 1262, Address: 0x15042c, Func Offset: 0x10c
	// Line 1266, Address: 0x150430, Func Offset: 0x110
	// Line 1262, Address: 0x150434, Func Offset: 0x114
	// Line 1263, Address: 0x150450, Func Offset: 0x130
	// Line 1264, Address: 0x150470, Func Offset: 0x150
	// Line 1265, Address: 0x150490, Func Offset: 0x170
	// Line 1266, Address: 0x150498, Func Offset: 0x178
	// Line 1268, Address: 0x1504a4, Func Offset: 0x184
	// Line 1269, Address: 0x1504b8, Func Offset: 0x198
	// Line 1271, Address: 0x1504bc, Func Offset: 0x19c
	// Line 1269, Address: 0x1504c4, Func Offset: 0x1a4
	// Line 1271, Address: 0x1504c8, Func Offset: 0x1a8
	// Line 1274, Address: 0x1504d0, Func Offset: 0x1b0
	// Line 1275, Address: 0x1504dc, Func Offset: 0x1bc
	// Line 1279, Address: 0x1504e8, Func Offset: 0x1c8
	// Line 1283, Address: 0x1504f0, Func Offset: 0x1d0
	// Line 1285, Address: 0x1504f4, Func Offset: 0x1d4
	// Line 1283, Address: 0x1504f8, Func Offset: 0x1d8
	// Line 1285, Address: 0x150510, Func Offset: 0x1f0
	// Line 1286, Address: 0x150514, Func Offset: 0x1f4
	// Line 1287, Address: 0x15051c, Func Offset: 0x1fc
	// Line 1288, Address: 0x150524, Func Offset: 0x204
	// Line 1289, Address: 0x15052c, Func Offset: 0x20c
	// Line 1291, Address: 0x150534, Func Offset: 0x214
	// Line 1292, Address: 0x15053c, Func Offset: 0x21c
	// Line 1293, Address: 0x150544, Func Offset: 0x224
	// Line 1294, Address: 0x15054c, Func Offset: 0x22c
	// Line 1295, Address: 0x150554, Func Offset: 0x234
	// Line 1297, Address: 0x15055c, Func Offset: 0x23c
	// Line 1298, Address: 0x150564, Func Offset: 0x244
	// Line 1299, Address: 0x15056c, Func Offset: 0x24c
	// Line 1300, Address: 0x150574, Func Offset: 0x254
	// Line 1301, Address: 0x15057c, Func Offset: 0x25c
	// Line 1304, Address: 0x150584, Func Offset: 0x264
	// Line 1305, Address: 0x15058c, Func Offset: 0x26c
	// Line 1304, Address: 0x150590, Func Offset: 0x270
	// Line 1305, Address: 0x150594, Func Offset: 0x274
	// Line 1306, Address: 0x15059c, Func Offset: 0x27c
	// Line 1307, Address: 0x1505a8, Func Offset: 0x288
	// Line 1308, Address: 0x1505b8, Func Offset: 0x298
	// Line 1310, Address: 0x1505c8, Func Offset: 0x2a8
	// Line 1315, Address: 0x1505d0, Func Offset: 0x2b0
	// Line 1316, Address: 0x1505ec, Func Offset: 0x2cc
	// Line 1317, Address: 0x150608, Func Offset: 0x2e8
	// Line 1319, Address: 0x150684, Func Offset: 0x364
	// Line 1321, Address: 0x150688, Func Offset: 0x368
	// Line 1320, Address: 0x15068c, Func Offset: 0x36c
	// Line 1322, Address: 0x150690, Func Offset: 0x370
	// Line 1321, Address: 0x150694, Func Offset: 0x374
	// Line 1322, Address: 0x15069c, Func Offset: 0x37c
	// Line 1325, Address: 0x1506ac, Func Offset: 0x38c
	// Line 1326, Address: 0x1506cc, Func Offset: 0x3ac
	// Func End, Address: 0x1506fc, Func Offset: 0x3dc
}

// 
// Start address: 0x150700
void SortTriangleNormalEnvironSpecular(ktVif1Ot2* ot, Part* part)
{
	_anon3* fromSPR;
	TriangleNormalEnvironSpecular* pk_base;
	TriangleNormalEnvironSpecular* pk;
	int pk_page;
	_anon0* text_pos_param;
	TextureParam* texture_params;
	float* reflection_color;
	PartHeader* part_header;
	unsigned int* strip;
	int strip_length;
	Node* n2;
	Node* n1;
	int i;
	unsigned int n_;
	Node* n0;
	<unknown fundamental type (0xa510)>* pp;
	Q min;
	int z;
	// Line 1333, Address: 0x150700, Func Offset: 0
	// Line 1334, Address: 0x150734, Func Offset: 0x34
	// Line 1335, Address: 0x15073c, Func Offset: 0x3c
	// Line 1341, Address: 0x150740, Func Offset: 0x40
	// Line 1335, Address: 0x150744, Func Offset: 0x44
	// Line 1334, Address: 0x150748, Func Offset: 0x48
	// Line 1342, Address: 0x15074c, Func Offset: 0x4c
	// Line 1337, Address: 0x150750, Func Offset: 0x50
	// Line 1341, Address: 0x150754, Func Offset: 0x54
	// Line 1342, Address: 0x150764, Func Offset: 0x64
	// Line 1335, Address: 0x150768, Func Offset: 0x68
	// Line 1341, Address: 0x15076c, Func Offset: 0x6c
	// Line 1344, Address: 0x150778, Func Offset: 0x78
	// Line 1350, Address: 0x150788, Func Offset: 0x88
	// Line 1352, Address: 0x15078c, Func Offset: 0x8c
	// Line 1350, Address: 0x150790, Func Offset: 0x90
	// Line 1352, Address: 0x15079c, Func Offset: 0x9c
	// Line 1357, Address: 0x1507c4, Func Offset: 0xc4
	// Line 1353, Address: 0x1507d0, Func Offset: 0xd0
	// Line 1357, Address: 0x1507d4, Func Offset: 0xd4
	// Line 1358, Address: 0x1507e4, Func Offset: 0xe4
	// Line 1359, Address: 0x1507ec, Func Offset: 0xec
	// Line 1361, Address: 0x1507f8, Func Offset: 0xf8
	// Line 1362, Address: 0x150808, Func Offset: 0x108
	// Line 1363, Address: 0x150810, Func Offset: 0x110
	// Line 1371, Address: 0x150818, Func Offset: 0x118
	// Line 1363, Address: 0x15081c, Func Offset: 0x11c
	// Line 1368, Address: 0x150820, Func Offset: 0x120
	// Line 1362, Address: 0x150824, Func Offset: 0x124
	// Line 1369, Address: 0x150834, Func Offset: 0x134
	// Line 1362, Address: 0x150838, Func Offset: 0x138
	// Line 1363, Address: 0x15083c, Func Offset: 0x13c
	// Line 1365, Address: 0x150860, Func Offset: 0x160
	// Line 1366, Address: 0x150880, Func Offset: 0x180
	// Line 1367, Address: 0x1508a0, Func Offset: 0x1a0
	// Line 1368, Address: 0x1508c0, Func Offset: 0x1c0
	// Line 1369, Address: 0x1508c8, Func Offset: 0x1c8
	// Line 1371, Address: 0x1508d4, Func Offset: 0x1d4
	// Line 1372, Address: 0x1508e8, Func Offset: 0x1e8
	// Line 1374, Address: 0x1508ec, Func Offset: 0x1ec
	// Line 1372, Address: 0x1508f4, Func Offset: 0x1f4
	// Line 1374, Address: 0x1508f8, Func Offset: 0x1f8
	// Line 1377, Address: 0x150900, Func Offset: 0x200
	// Line 1378, Address: 0x15090c, Func Offset: 0x20c
	// Line 1382, Address: 0x150918, Func Offset: 0x218
	// Line 1386, Address: 0x150920, Func Offset: 0x220
	// Line 1405, Address: 0x150924, Func Offset: 0x224
	// Line 1386, Address: 0x150928, Func Offset: 0x228
	// Line 1388, Address: 0x15092c, Func Offset: 0x22c
	// Line 1386, Address: 0x150930, Func Offset: 0x230
	// Line 1405, Address: 0x150944, Func Offset: 0x244
	// Line 1388, Address: 0x150948, Func Offset: 0x248
	// Line 1389, Address: 0x15094c, Func Offset: 0x24c
	// Line 1390, Address: 0x150954, Func Offset: 0x254
	// Line 1391, Address: 0x15095c, Func Offset: 0x25c
	// Line 1392, Address: 0x150964, Func Offset: 0x264
	// Line 1393, Address: 0x15096c, Func Offset: 0x26c
	// Line 1394, Address: 0x150974, Func Offset: 0x274
	// Line 1395, Address: 0x15097c, Func Offset: 0x27c
	// Line 1397, Address: 0x150984, Func Offset: 0x284
	// Line 1398, Address: 0x15098c, Func Offset: 0x28c
	// Line 1399, Address: 0x150994, Func Offset: 0x294
	// Line 1400, Address: 0x15099c, Func Offset: 0x29c
	// Line 1401, Address: 0x1509a4, Func Offset: 0x2a4
	// Line 1402, Address: 0x1509ac, Func Offset: 0x2ac
	// Line 1403, Address: 0x1509b4, Func Offset: 0x2b4
	// Line 1404, Address: 0x1509bc, Func Offset: 0x2bc
	// Line 1405, Address: 0x1509cc, Func Offset: 0x2cc
	// Line 1406, Address: 0x150a08, Func Offset: 0x308
	// Line 1408, Address: 0x150a48, Func Offset: 0x348
	// Line 1416, Address: 0x150a4c, Func Offset: 0x34c
	// Line 1408, Address: 0x150a54, Func Offset: 0x354
	// Line 1409, Address: 0x150a58, Func Offset: 0x358
	// Line 1410, Address: 0x150a60, Func Offset: 0x360
	// Line 1411, Address: 0x150a68, Func Offset: 0x368
	// Line 1412, Address: 0x150a70, Func Offset: 0x370
	// Line 1413, Address: 0x150a78, Func Offset: 0x378
	// Line 1414, Address: 0x150a80, Func Offset: 0x380
	// Line 1415, Address: 0x150a88, Func Offset: 0x388
	// Line 1416, Address: 0x150a98, Func Offset: 0x398
	// Line 1417, Address: 0x150ad8, Func Offset: 0x3d8
	// Line 1420, Address: 0x150b18, Func Offset: 0x418
	// Line 1421, Address: 0x150b20, Func Offset: 0x420
	// Line 1420, Address: 0x150b24, Func Offset: 0x424
	// Line 1421, Address: 0x150b28, Func Offset: 0x428
	// Line 1422, Address: 0x150b30, Func Offset: 0x430
	// Line 1423, Address: 0x150b38, Func Offset: 0x438
	// Line 1424, Address: 0x150b48, Func Offset: 0x448
	// Line 1426, Address: 0x150b58, Func Offset: 0x458
	// Line 1431, Address: 0x150b60, Func Offset: 0x460
	// Line 1432, Address: 0x150b7c, Func Offset: 0x47c
	// Line 1433, Address: 0x150b98, Func Offset: 0x498
	// Line 1435, Address: 0x150c14, Func Offset: 0x514
	// Line 1437, Address: 0x150c18, Func Offset: 0x518
	// Line 1436, Address: 0x150c1c, Func Offset: 0x51c
	// Line 1437, Address: 0x150c20, Func Offset: 0x520
	// Line 1438, Address: 0x150c28, Func Offset: 0x528
	// Line 1441, Address: 0x150c48, Func Offset: 0x548
	// Line 1442, Address: 0x150c64, Func Offset: 0x564
	// Func End, Address: 0x150c94, Func Offset: 0x594
}

// 
// Start address: 0x150ca0
void SortTriangleSpecularNormal(ktVif1Ot2* ot, Part* part)
{
	_anon3* fromSPR;
	TriangleSpecularNormal* pk_base;
	TriangleSpecularNormal* pk;
	int pk_page;
	_anon0* text_pos_param;
	TextureParam* texture_params;
	float* reflection_color;
	PartHeader* part_header;
	unsigned int* strip;
	int strip_length;
	Node* n2;
	Node* n1;
	int i;
	unsigned int n_;
	Node* n0;
	<unknown fundamental type (0xa510)>* pp;
	Q min;
	int z;
	// Line 1449, Address: 0x150ca0, Func Offset: 0
	// Line 1450, Address: 0x150cd4, Func Offset: 0x34
	// Line 1451, Address: 0x150cdc, Func Offset: 0x3c
	// Line 1457, Address: 0x150ce0, Func Offset: 0x40
	// Line 1451, Address: 0x150ce4, Func Offset: 0x44
	// Line 1450, Address: 0x150ce8, Func Offset: 0x48
	// Line 1458, Address: 0x150cec, Func Offset: 0x4c
	// Line 1453, Address: 0x150cf0, Func Offset: 0x50
	// Line 1457, Address: 0x150cf4, Func Offset: 0x54
	// Line 1458, Address: 0x150d04, Func Offset: 0x64
	// Line 1451, Address: 0x150d08, Func Offset: 0x68
	// Line 1457, Address: 0x150d0c, Func Offset: 0x6c
	// Line 1460, Address: 0x150d18, Func Offset: 0x78
	// Line 1466, Address: 0x150d28, Func Offset: 0x88
	// Line 1468, Address: 0x150d2c, Func Offset: 0x8c
	// Line 1466, Address: 0x150d30, Func Offset: 0x90
	// Line 1468, Address: 0x150d3c, Func Offset: 0x9c
	// Line 1473, Address: 0x150d64, Func Offset: 0xc4
	// Line 1476, Address: 0x150d68, Func Offset: 0xc8
	// Line 1473, Address: 0x150d6c, Func Offset: 0xcc
	// Line 1477, Address: 0x150d70, Func Offset: 0xd0
	// Line 1469, Address: 0x150d74, Func Offset: 0xd4
	// Line 1473, Address: 0x150d78, Func Offset: 0xd8
	// Line 1474, Address: 0x150d90, Func Offset: 0xf0
	// Line 1475, Address: 0x150db0, Func Offset: 0x110
	// Line 1476, Address: 0x150dd0, Func Offset: 0x130
	// Line 1477, Address: 0x150dd8, Func Offset: 0x138
	// Line 1478, Address: 0x150de0, Func Offset: 0x140
	// Line 1477, Address: 0x150de4, Func Offset: 0x144
	// Line 1478, Address: 0x150de8, Func Offset: 0x148
	// Line 1479, Address: 0x150e00, Func Offset: 0x160
	// Line 1480, Address: 0x150e08, Func Offset: 0x168
	// Line 1482, Address: 0x150e18, Func Offset: 0x178
	// Line 1484, Address: 0x150e28, Func Offset: 0x188
	// Line 1485, Address: 0x150e38, Func Offset: 0x198
	// Line 1487, Address: 0x150e3c, Func Offset: 0x19c
	// Line 1485, Address: 0x150e44, Func Offset: 0x1a4
	// Line 1487, Address: 0x150e48, Func Offset: 0x1a8
	// Line 1490, Address: 0x150e50, Func Offset: 0x1b0
	// Line 1491, Address: 0x150e5c, Func Offset: 0x1bc
	// Line 1495, Address: 0x150e68, Func Offset: 0x1c8
	// Line 1499, Address: 0x150e70, Func Offset: 0x1d0
	// Line 1501, Address: 0x150e74, Func Offset: 0x1d4
	// Line 1499, Address: 0x150e78, Func Offset: 0x1d8
	// Line 1501, Address: 0x150e90, Func Offset: 0x1f0
	// Line 1502, Address: 0x150e94, Func Offset: 0x1f4
	// Line 1503, Address: 0x150e9c, Func Offset: 0x1fc
	// Line 1504, Address: 0x150ea4, Func Offset: 0x204
	// Line 1505, Address: 0x150eac, Func Offset: 0x20c
	// Line 1507, Address: 0x150eb4, Func Offset: 0x214
	// Line 1508, Address: 0x150ebc, Func Offset: 0x21c
	// Line 1509, Address: 0x150ec4, Func Offset: 0x224
	// Line 1510, Address: 0x150ecc, Func Offset: 0x22c
	// Line 1511, Address: 0x150ed4, Func Offset: 0x234
	// Line 1513, Address: 0x150edc, Func Offset: 0x23c
	// Line 1514, Address: 0x150ee4, Func Offset: 0x244
	// Line 1515, Address: 0x150eec, Func Offset: 0x24c
	// Line 1516, Address: 0x150ef4, Func Offset: 0x254
	// Line 1517, Address: 0x150efc, Func Offset: 0x25c
	// Line 1520, Address: 0x150f04, Func Offset: 0x264
	// Line 1521, Address: 0x150f0c, Func Offset: 0x26c
	// Line 1520, Address: 0x150f10, Func Offset: 0x270
	// Line 1521, Address: 0x150f14, Func Offset: 0x274
	// Line 1522, Address: 0x150f1c, Func Offset: 0x27c
	// Line 1523, Address: 0x150f28, Func Offset: 0x288
	// Line 1524, Address: 0x150f38, Func Offset: 0x298
	// Line 1526, Address: 0x150f48, Func Offset: 0x2a8
	// Line 1531, Address: 0x150f50, Func Offset: 0x2b0
	// Line 1532, Address: 0x150f6c, Func Offset: 0x2cc
	// Line 1533, Address: 0x150f88, Func Offset: 0x2e8
	// Line 1535, Address: 0x151004, Func Offset: 0x364
	// Line 1537, Address: 0x151008, Func Offset: 0x368
	// Line 1536, Address: 0x15100c, Func Offset: 0x36c
	// Line 1538, Address: 0x151010, Func Offset: 0x370
	// Line 1537, Address: 0x151014, Func Offset: 0x374
	// Line 1538, Address: 0x15101c, Func Offset: 0x37c
	// Line 1541, Address: 0x15102c, Func Offset: 0x38c
	// Line 1542, Address: 0x15104c, Func Offset: 0x3ac
	// Func End, Address: 0x15107c, Func Offset: 0x3dc
}

// 
// Start address: 0x151080
void DrawPart(ktVif1Ot2* ot, Part* part, ModelWork* work)
{
	int func_no;
	// Line 1567, Address: 0x151080, Func Offset: 0
	// Line 1571, Address: 0x15109c, Func Offset: 0x1c
	// Line 1576, Address: 0x1510b4, Func Offset: 0x34
	// Line 1578, Address: 0x1510c8, Func Offset: 0x48
	// Line 1579, Address: 0x1510d4, Func Offset: 0x54
	// Line 1581, Address: 0x1510d8, Func Offset: 0x58
	// Line 1583, Address: 0x1510e8, Func Offset: 0x68
	// Line 1584, Address: 0x1510f4, Func Offset: 0x74
	// Line 1588, Address: 0x15110c, Func Offset: 0x8c
	// Line 1589, Address: 0x151114, Func Offset: 0x94
	// Line 1594, Address: 0x15111c, Func Offset: 0x9c
	// Line 1596, Address: 0x151120, Func Offset: 0xa0
	// Line 1597, Address: 0x151134, Func Offset: 0xb4
	// Func End, Address: 0x151150, Func Offset: 0xd0
}

// 
// Start address: 0x151150
void DrawParts(ktVif1Ot2* ot, Model* model, ModelWork* work)
{
	int n_parts;
	Part* parts_top;
	Part* part;
	int i;
	Part* next;
	// Line 1604, Address: 0x151150, Func Offset: 0
	// Line 1609, Address: 0x151178, Func Offset: 0x28
	// Line 1608, Address: 0x15117c, Func Offset: 0x2c
	// Line 1613, Address: 0x151180, Func Offset: 0x30
	// Line 1618, Address: 0x151188, Func Offset: 0x38
	// Line 1631, Address: 0x151190, Func Offset: 0x40
	// Line 1646, Address: 0x151198, Func Offset: 0x48
	// Line 1647, Address: 0x1511a0, Func Offset: 0x50
	// Line 1648, Address: 0x1511a8, Func Offset: 0x58
	// Line 1649, Address: 0x1511b8, Func Offset: 0x68
	// Line 1650, Address: 0x1511c0, Func Offset: 0x70
	// Line 1651, Address: 0x1511c8, Func Offset: 0x78
	// Line 1652, Address: 0x1511d0, Func Offset: 0x80
	// Line 1653, Address: 0x1511d8, Func Offset: 0x88
	// Line 1655, Address: 0x1511e8, Func Offset: 0x98
	// Line 1656, Address: 0x1511f8, Func Offset: 0xa8
	// Line 1657, Address: 0x151200, Func Offset: 0xb0
	// Line 1659, Address: 0x151210, Func Offset: 0xc0
	// Func End, Address: 0x151234, Func Offset: 0xe4
}

// 
// Start address: 0x151240
void Model3DrawVu0Parts(Model* model, ModelWork* work)
{
	ktVif1Ot2* ot;
	// Line 1667, Address: 0x151240, Func Offset: 0
	// Line 1668, Address: 0x151254, Func Offset: 0x14
	// Line 1696, Address: 0x15125c, Func Offset: 0x1c
	// Line 1701, Address: 0x151260, Func Offset: 0x20
	// Line 1696, Address: 0x151264, Func Offset: 0x24
	// Line 1701, Address: 0x151268, Func Offset: 0x28
	// Line 1697, Address: 0x15126c, Func Offset: 0x2c
	// Line 1701, Address: 0x151270, Func Offset: 0x30
	// Line 1697, Address: 0x151274, Func Offset: 0x34
	// Line 1698, Address: 0x151278, Func Offset: 0x38
	// Line 1701, Address: 0x15127c, Func Offset: 0x3c
	// Line 1709, Address: 0x151284, Func Offset: 0x44
	// Func End, Address: 0x151298, Func Offset: 0x58
}

