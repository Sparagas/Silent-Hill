typedef struct TextPosParam;
typedef struct BoxData;
typedef struct SkeletonPair;
typedef struct shSkelton;
typedef struct Model3Junk;
typedef struct ModelCommonWork;
typedef struct _anon0;
typedef struct SubCharacter;
typedef struct Model;
typedef struct TextPos;
typedef struct ModelWork;
typedef struct shBattleFight;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shBattleInfo;
typedef union Q;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct _CL_VHIT_WALL;
typedef struct sh_Model;
typedef struct sh2gfw_Env_ctl;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;

typedef int(*type_2)(void*, void*, void*);
typedef void(*type_21)(SubCharacter*);
typedef void(*type_24)(SubCharacter*);

typedef void* type_0[4];
typedef unsigned short type_1[4];
typedef Q type_3[8];
typedef float type_4[4];
typedef unsigned short type_5[2];
typedef float type_6[4];
typedef float type_7[4][2];
typedef unsigned short type_8[2];
typedef shAttackInfo type_9[66];
typedef int type_10[6];
typedef int type_11[6];
typedef float type_12[4];
typedef float type_13[4][2];
typedef float type_14[4];
typedef void* type_15[6];
typedef float type_16[4];
typedef float type_17[4][4][128];
typedef float type_18[4];
typedef float type_19[4][4];
typedef float type_20[4][4][256];
typedef unsigned short type_22[4];
typedef float type_23[4][2048];
typedef float type_25[4];
typedef TextPosParam type_26[64];
typedef unsigned char type_27[4];
typedef float type_28[4];
typedef int type_29[4];
typedef float type_30[4];
typedef float type_31[4];
typedef float type_32[4][4];
typedef int type_33[4];
typedef float type_34[4][4];
typedef unsigned int type_35[4];
typedef unsigned long type_36[2];
typedef unsigned short type_37[8];
typedef float type_38[4];
typedef unsigned char type_39[16];
typedef int type_40[4];
typedef short type_41[8];
typedef unsigned long type_42[2];
typedef char type_43[16];
typedef unsigned long type_44[2];
typedef unsigned long type_45[2];
typedef unsigned long type_46[2];
typedef unsigned int type_47[4];
typedef unsigned short type_48[8];
typedef unsigned char type_49[16];
typedef long type_50[2];
typedef int type_51[4];
typedef short type_52[8];
typedef char type_53[16];
typedef unsigned short type_54[4];

struct TextPosParam
{
	unsigned long tex0;
};

struct BoxData
{
	Q pos[8];
};

struct SkeletonPair
{
	unsigned char parent_no;
	unsigned char child_no;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon3 src_t;
	_anon0 des_m;
	_anon3 des_t;
	_anon3 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
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

struct _anon0
{
	float d[4][4];
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon0 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
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

struct TextPos
{
	unsigned int block_index;
	unsigned int texture_no;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
	unsigned char se;
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

struct sh2gfw_ModelDraw_MAN
{
	unsigned int chara_id;
	SubCharacter* testSubChar;
	void* Model_Head;
	void* pModel_Header;
	void* sh_Model;
	void* pAnime;
	void* pCluster;
	void* pKg1Work;
	short allnum;
	short nowtex;
	unsigned short TB_change_VU1num;
	unsigned short TB_change_VU1now;
	unsigned short TB_change_VU1[4];
	unsigned short TB_index_VU1[4];
	unsigned short TB_change_VU0num;
	unsigned short TB_change_VU0now;
	unsigned short TB_change_VU0[2];
	unsigned short TB_index_VU0[2];
	int chr_slotid[6];
	int chr_cid[6];
	int d1cid;
	int d2c1d;
	void* pTexMAN[6];
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct sh_Model
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
	void* pTexMAN[4];
};

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA MoveFogColor;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

shAttackInfo sh2_attack_list[66];
Model3Junk model3_junk;
sh2gfw_Env_ctl Env_ctl;
ModelCommonWork* model_common_work;
sh2gfw_ModelDraw_MAN UniModelDW_Man;
float ambient_factor;

void Model3Init();
void sh2_Model3UpdateTextures(sh_Model* model);
void Model3UpdateMatrices(Model* model, ModelWork* work, float mwm[4], int model_type);
void Model3UpdateEnvelopeMatrices(Model* model);
void Model3UpdateLightEnv();
void Model3UpdateGlobalAmbient();

// 
// Start address: 0x128900
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
	// Line 47, Address: 0x128900, Func Offset: 0
	// Line 50, Address: 0x128908, Func Offset: 0x8
	// Line 75, Address: 0x128918, Func Offset: 0x18
	// Line 76, Address: 0x128924, Func Offset: 0x24
	// Line 77, Address: 0x128934, Func Offset: 0x34
	// Line 78, Address: 0x12893c, Func Offset: 0x3c
	// Line 82, Address: 0x128944, Func Offset: 0x44
	// Line 83, Address: 0x12895c, Func Offset: 0x5c
	// Line 84, Address: 0x128974, Func Offset: 0x74
	// Line 85, Address: 0x12898c, Func Offset: 0x8c
	// Line 86, Address: 0x1289a4, Func Offset: 0xa4
	// Line 87, Address: 0x1289bc, Func Offset: 0xbc
	// Line 88, Address: 0x1289d4, Func Offset: 0xd4
	// Line 89, Address: 0x1289ec, Func Offset: 0xec
	// Line 90, Address: 0x128a04, Func Offset: 0x104
	// Line 91, Address: 0x128a1c, Func Offset: 0x11c
	// Line 93, Address: 0x128a28, Func Offset: 0x128
	// Line 95, Address: 0x128a34, Func Offset: 0x134
	// Func End, Address: 0x128a44, Func Offset: 0x144
}

// 
// Start address: 0x128a50
void sh2_Model3UpdateTextures(sh_Model* model)
{
	<unknown fundamental type (0xa510)>* tmp_tex0;
	TextPosParam* param;
	TextPos* text_pos;
	int i;
	TextPosParam* params;
	int id;
	int i;
	int envmap;
	int spemap;
	TextPos* text_poses;
	int n_text_poses;
	int* texture_blocks;
	int n_texture_blocks;
	// Line 119, Address: 0x128a50, Func Offset: 0
	// Line 121, Address: 0x128a74, Func Offset: 0x24
	// Line 122, Address: 0x128a78, Func Offset: 0x28
	// Line 123, Address: 0x128a80, Func Offset: 0x30
	// Line 124, Address: 0x128a84, Func Offset: 0x34
	// Line 126, Address: 0x128a8c, Func Offset: 0x3c
	// Line 133, Address: 0x128aac, Func Offset: 0x5c
	// Line 134, Address: 0x128ab4, Func Offset: 0x64
	// Line 140, Address: 0x128ad0, Func Offset: 0x80
	// Line 149, Address: 0x128adc, Func Offset: 0x8c
	// Line 150, Address: 0x128af8, Func Offset: 0xa8
	// Line 157, Address: 0x128b14, Func Offset: 0xc4
	// Line 163, Address: 0x128b24, Func Offset: 0xd4
	// Line 166, Address: 0x128b34, Func Offset: 0xe4
	// Line 167, Address: 0x128b40, Func Offset: 0xf0
	// Line 168, Address: 0x128b48, Func Offset: 0xf8
	// Line 178, Address: 0x128b4c, Func Offset: 0xfc
	// Line 185, Address: 0x128b6c, Func Offset: 0x11c
	// Line 186, Address: 0x128b74, Func Offset: 0x124
	// Line 189, Address: 0x128b84, Func Offset: 0x134
	// Func End, Address: 0x128bac, Func Offset: 0x15c
}

// 
// Start address: 0x128bb0
void Model3UpdateMatrices(Model* model, ModelWork* work, float mwm[4], int model_type)
{
	float lmm[4];
	float lvm[4];
	float lmm[4];
	float lvm[4];
	int i;
	float xsin[4][4];
	float mvm[4][4];
	float wvm[4][4];
	float matrices[4][4];
	int n_skeletons;
	// Line 312, Address: 0x128bb0, Func Offset: 0
	// Line 313, Address: 0x128bd4, Func Offset: 0x24
	// Line 314, Address: 0x128bd8, Func Offset: 0x28
	// Line 318, Address: 0x128bdc, Func Offset: 0x2c
	// Line 326, Address: 0x128c08, Func Offset: 0x58
	// Line 327, Address: 0x128c1c, Func Offset: 0x6c
	// Line 328, Address: 0x128c30, Func Offset: 0x80
	// Line 330, Address: 0x128c50, Func Offset: 0xa0
	// Line 331, Address: 0x128c58, Func Offset: 0xa8
	// Line 332, Address: 0x128c60, Func Offset: 0xb0
	// Line 333, Address: 0x128c68, Func Offset: 0xb8
	// Line 336, Address: 0x128c70, Func Offset: 0xc0
	// Line 337, Address: 0x128c78, Func Offset: 0xc8
	// Line 338, Address: 0x128c84, Func Offset: 0xd4
	// Line 339, Address: 0x128c94, Func Offset: 0xe4
	// Line 341, Address: 0x128c98, Func Offset: 0xe8
	// Line 342, Address: 0x128cac, Func Offset: 0xfc
	// Line 343, Address: 0x128cc0, Func Offset: 0x110
	// Line 344, Address: 0x128cd4, Func Offset: 0x124
	// Line 345, Address: 0x128cdc, Func Offset: 0x12c
	// Line 346, Address: 0x128ce8, Func Offset: 0x138
	// Line 347, Address: 0x128cf8, Func Offset: 0x148
	// Line 349, Address: 0x128cfc, Func Offset: 0x14c
	// Line 350, Address: 0x128d08, Func Offset: 0x158
	// Line 351, Address: 0x128d1c, Func Offset: 0x16c
	// Line 352, Address: 0x128d20, Func Offset: 0x170
	// Func End, Address: 0x128d44, Func Offset: 0x194
}

// 
// Start address: 0x128d50
void Model3UpdateEnvelopeMatrices(Model* model)
{
	float cvm[4];
	float pcm[4];
	int child_no;
	float em[4];
	SkeletonPair* pair;
	int i;
	float envelope_matrices[4][4];
	SkeletonPair* pairs;
	float skeleton_matrices[4][4];
	float default_pcms[4][4];
	int n_pairs;
	// Line 393, Address: 0x128d50, Func Offset: 0
	// Line 394, Address: 0x128d70, Func Offset: 0x20
	// Line 395, Address: 0x128d74, Func Offset: 0x24
	// Line 396, Address: 0x128d7c, Func Offset: 0x2c
	// Line 397, Address: 0x128d84, Func Offset: 0x34
	// Line 398, Address: 0x128d8c, Func Offset: 0x3c
	// Line 401, Address: 0x128d90, Func Offset: 0x40
	// Line 402, Address: 0x128d9c, Func Offset: 0x4c
	// Line 403, Address: 0x128da4, Func Offset: 0x54
	// Line 404, Address: 0x128dac, Func Offset: 0x5c
	// Line 405, Address: 0x128db0, Func Offset: 0x60
	// Line 406, Address: 0x128db4, Func Offset: 0x64
	// Line 409, Address: 0x128dbc, Func Offset: 0x6c
	// Line 410, Address: 0x128dc4, Func Offset: 0x74
	// Line 411, Address: 0x128dd4, Func Offset: 0x84
	// Func End, Address: 0x128dfc, Func Offset: 0xac
}

// 
// Start address: 0x128e00
void Model3UpdateLightEnv()
{
	float wpos[4];
	float radius;
	float base[4];
	// Line 419, Address: 0x128e00, Func Offset: 0
	// Line 426, Address: 0x128e08, Func Offset: 0x8
	// Line 427, Address: 0x128e2c, Func Offset: 0x2c
	// Line 429, Address: 0x128e44, Func Offset: 0x44
	// Line 430, Address: 0x128e58, Func Offset: 0x58
	// Func End, Address: 0x128e68, Func Offset: 0x68
}

// 
// Start address: 0x128e70
void Model3UpdateGlobalAmbient()
{
	// Line 438, Address: 0x128e70, Func Offset: 0
	// Line 442, Address: 0x128e78, Func Offset: 0x8
	// Line 447, Address: 0x128e98, Func Offset: 0x28
	// Line 450, Address: 0x128eb8, Func Offset: 0x48
	// Line 476, Address: 0x128ed4, Func Offset: 0x64
	// Func End, Address: 0x128ee4, Func Offset: 0x74
}

