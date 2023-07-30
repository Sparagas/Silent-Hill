typedef struct SubCharacter;
typedef struct shAttackInfo;
typedef struct ModelCommonWork;
typedef union _anon0;
typedef struct _CL_VHIT_WALL;
typedef struct SkeletonPair;
typedef struct _CL_HITPOLY_HEAD;
typedef struct TextPosParam;
typedef struct Model;
typedef struct Model3Junk;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef struct TextPos;
typedef union _anon1;
typedef struct _anon2;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh_Model;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shSkelton;
typedef union Q_WORDDATA;
typedef struct _anon3;
typedef union Q;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct BoxData;
typedef struct shBattleArea;
typedef struct ModelWork;
typedef struct sh2gfw_Env_ctl;
typedef struct shBattleInfo;

typedef int(*type_2)(void*, void*, void*);
typedef void(*type_44)(SubCharacter*);
typedef void(*type_46)(SubCharacter*);

typedef int type_0[6];
typedef float type_1[4];
typedef float type_3[4][2];
typedef float type_4[4];
typedef void* type_5[6];
typedef float type_6[4];
typedef float type_7[4][2];
typedef float type_8[4][4];
typedef float type_9[4][4][128];
typedef float type_10[4][4][256];
typedef float type_11[4][2048];
typedef TextPosParam type_12[64];
typedef int type_13[4];
typedef float type_14[4];
typedef unsigned short type_15[4];
typedef float type_16[4];
typedef float type_17[4];
typedef unsigned long type_18[2];
typedef float type_19[4];
typedef unsigned long type_20[2];
typedef int type_21[4];
typedef float type_22[4];
typedef float type_23[4];
typedef unsigned long type_24[2];
typedef float type_25[4][4];
typedef float type_26[4];
typedef float type_27[4][4];
typedef unsigned int type_28[4];
typedef unsigned short type_29[8];
typedef float type_30[4];
typedef unsigned long type_31[2];
typedef unsigned char type_32[16];
typedef unsigned int type_33[4];
typedef unsigned short type_34[8];
typedef int type_35[4];
typedef unsigned char type_36[16];
typedef short type_37[8];
typedef long type_38[2];
typedef char type_39[16];
typedef int type_40[4];
typedef unsigned long type_41[2];
typedef short type_42[8];
typedef char type_43[16];
typedef shAttackInfo type_45[46];
typedef void* type_47[4];
typedef unsigned short type_48[4];
typedef unsigned short type_49[4];
typedef unsigned char type_50[4];
typedef unsigned short type_51[2];
typedef unsigned short type_52[2];
typedef int type_53[6];
typedef Q type_54[8];

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon2 b_pos;
	_anon2 b_rot;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct SkeletonPair
{
	unsigned char parent_no;
	unsigned char child_no;
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

struct TextPosParam
{
	unsigned long tex0;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct TextPos
{
	unsigned int block_index;
	unsigned int texture_no;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
	_anon2 des_t;
	_anon2 axis;
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

struct _anon3
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct BoxData
{
	Q pos[8];
};

struct shBattleArea
{
	float center;
	float radius;
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
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
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

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
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
};

shAttackInfo sh2_attack_list[46];
Model3Junk model3_junk;
sh2gfw_Env_ctl Env_ctl;
ModelCommonWork* model_common_work;
sh2gfw_ModelDraw_MAN UniModelDW_Man;

void Model3Init();
void sh2_Model3UpdateTextures(sh_Model* model);
void Model3UpdateMatrices(Model* model, ModelWork* work, float mwm[4]);
void Model3UpdateEnvelopeMatrices(Model* model);
void Model3UpdateLightEnv();
void Model3UpdateGlobalAmbient();
int Model3BoxClip(Model* model);

// 
// Start address: 0x131a80
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
	// Line 47, Address: 0x131a80, Func Offset: 0
	// Line 50, Address: 0x131a88, Func Offset: 0x8
	// Line 75, Address: 0x131a98, Func Offset: 0x18
	// Line 76, Address: 0x131aa8, Func Offset: 0x28
	// Line 77, Address: 0x131ac0, Func Offset: 0x40
	// Line 78, Address: 0x131ad0, Func Offset: 0x50
	// Line 82, Address: 0x131ae8, Func Offset: 0x68
	// Line 83, Address: 0x131b00, Func Offset: 0x80
	// Line 84, Address: 0x131b18, Func Offset: 0x98
	// Line 85, Address: 0x131b30, Func Offset: 0xb0
	// Line 86, Address: 0x131b48, Func Offset: 0xc8
	// Line 87, Address: 0x131b60, Func Offset: 0xe0
	// Line 88, Address: 0x131b78, Func Offset: 0xf8
	// Line 89, Address: 0x131b90, Func Offset: 0x110
	// Line 90, Address: 0x131ba8, Func Offset: 0x128
	// Line 91, Address: 0x131bc0, Func Offset: 0x140
	// Line 93, Address: 0x131bcc, Func Offset: 0x14c
	// Line 95, Address: 0x131bd8, Func Offset: 0x158
	// Func End, Address: 0x131be8, Func Offset: 0x168
}

// 
// Start address: 0x131bf0
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
	// Line 119, Address: 0x131bf0, Func Offset: 0
	// Line 121, Address: 0x131c20, Func Offset: 0x30
	// Line 122, Address: 0x131c28, Func Offset: 0x38
	// Line 123, Address: 0x131c38, Func Offset: 0x48
	// Line 124, Address: 0x131c40, Func Offset: 0x50
	// Line 126, Address: 0x131c54, Func Offset: 0x64
	// Line 127, Address: 0x131c94, Func Offset: 0xa4
	// Line 133, Address: 0x131ca8, Func Offset: 0xb8
	// Line 134, Address: 0x131cb4, Func Offset: 0xc4
	// Line 140, Address: 0x131cd0, Func Offset: 0xe0
	// Line 149, Address: 0x131cdc, Func Offset: 0xec
	// Line 150, Address: 0x131ce8, Func Offset: 0xf8
	// Line 157, Address: 0x131d2c, Func Offset: 0x13c
	// Line 163, Address: 0x131d3c, Func Offset: 0x14c
	// Line 166, Address: 0x131d50, Func Offset: 0x160
	// Line 167, Address: 0x131d5c, Func Offset: 0x16c
	// Line 168, Address: 0x131d68, Func Offset: 0x178
	// Line 178, Address: 0x131d74, Func Offset: 0x184
	// Line 185, Address: 0x131d9c, Func Offset: 0x1ac
	// Line 186, Address: 0x131da4, Func Offset: 0x1b4
	// Line 189, Address: 0x131db4, Func Offset: 0x1c4
	// Func End, Address: 0x131de8, Func Offset: 0x1f8
}

// 
// Start address: 0x131df0
void Model3UpdateMatrices(Model* model, ModelWork* work, float mwm[4])
{
	float lmm[4];
	float lvm[4];
	int i;
	float mvm[4][4];
	float wvm[4][4];
	float matrices[4][4];
	int n_skeletons;
	// Line 312, Address: 0x131df0, Func Offset: 0
	// Line 313, Address: 0x131e18, Func Offset: 0x28
	// Line 314, Address: 0x131e20, Func Offset: 0x30
	// Line 319, Address: 0x131e28, Func Offset: 0x38
	// Line 320, Address: 0x131e3c, Func Offset: 0x4c
	// Line 321, Address: 0x131e50, Func Offset: 0x60
	// Line 323, Address: 0x131e70, Func Offset: 0x80
	// Line 324, Address: 0x131e78, Func Offset: 0x88
	// Line 325, Address: 0x131e80, Func Offset: 0x90
	// Line 326, Address: 0x131e88, Func Offset: 0x98
	// Line 328, Address: 0x131e90, Func Offset: 0xa0
	// Line 329, Address: 0x131e9c, Func Offset: 0xac
	// Line 330, Address: 0x131eac, Func Offset: 0xbc
	// Line 332, Address: 0x131eb4, Func Offset: 0xc4
	// Line 333, Address: 0x131ec8, Func Offset: 0xd8
	// Line 334, Address: 0x131edc, Func Offset: 0xec
	// Func End, Address: 0x131f00, Func Offset: 0x110
}

// 
// Start address: 0x131f00
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
	// Line 375, Address: 0x131f00, Func Offset: 0
	// Line 376, Address: 0x131f30, Func Offset: 0x30
	// Line 377, Address: 0x131f38, Func Offset: 0x38
	// Line 378, Address: 0x131f48, Func Offset: 0x48
	// Line 379, Address: 0x131f50, Func Offset: 0x50
	// Line 380, Address: 0x131f64, Func Offset: 0x64
	// Line 383, Address: 0x131f74, Func Offset: 0x74
	// Line 384, Address: 0x131f80, Func Offset: 0x80
	// Line 385, Address: 0x131f8c, Func Offset: 0x8c
	// Line 386, Address: 0x131f98, Func Offset: 0x98
	// Line 387, Address: 0x131fa0, Func Offset: 0xa0
	// Line 388, Address: 0x131fa8, Func Offset: 0xa8
	// Line 391, Address: 0x131fb0, Func Offset: 0xb0
	// Line 392, Address: 0x131fc4, Func Offset: 0xc4
	// Line 393, Address: 0x131fd4, Func Offset: 0xd4
	// Func End, Address: 0x132008, Func Offset: 0x108
}

// 
// Start address: 0x132010
void Model3UpdateLightEnv()
{
	float wpos[4];
	float radius;
	float base[4];
	// Line 401, Address: 0x132010, Func Offset: 0
	// Line 408, Address: 0x132018, Func Offset: 0x8
	// Line 409, Address: 0x13203c, Func Offset: 0x2c
	// Line 411, Address: 0x132054, Func Offset: 0x44
	// Line 412, Address: 0x132068, Func Offset: 0x58
	// Func End, Address: 0x132078, Func Offset: 0x68
}

// 
// Start address: 0x132080
void Model3UpdateGlobalAmbient()
{
	// Line 419, Address: 0x132080, Func Offset: 0
	// Line 442, Address: 0x132088, Func Offset: 0x8
	// Line 445, Address: 0x1320a8, Func Offset: 0x28
	// Line 469, Address: 0x1320c4, Func Offset: 0x44
	// Func End, Address: 0x1320d4, Func Offset: 0x54
}

// 
// Start address: 0x1320e0
int Model3BoxClip(Model* model)
{
	unsigned int fc;
	float* lpos;
	int i;
	unsigned int fc_or;
	unsigned int fc_and;
	float vcp_gs[4];
	float vcp[4];
	float lvm[4];
	BoxData* box;
	// Line 534, Address: 0x1320e0, Func Offset: 0
	// Line 538, Address: 0x1320e8, Func Offset: 0x8
	// Line 539, Address: 0x1320f0, Func Offset: 0x10
	// Line 540, Address: 0x1320fc, Func Offset: 0x1c
	// Line 541, Address: 0x132104, Func Offset: 0x24
	// Line 543, Address: 0x132110, Func Offset: 0x30
	// Line 544, Address: 0x13211c, Func Offset: 0x3c
	// Line 547, Address: 0x132128, Func Offset: 0x48
	// Line 548, Address: 0x132134, Func Offset: 0x54
	// Line 552, Address: 0x132140, Func Offset: 0x60
	// Line 553, Address: 0x132148, Func Offset: 0x68
	// Line 554, Address: 0x132158, Func Offset: 0x78
	// Line 555, Address: 0x132168, Func Offset: 0x88
	// Line 556, Address: 0x13216c, Func Offset: 0x8c
	// Line 561, Address: 0x132170, Func Offset: 0x90
	// Line 562, Address: 0x132174, Func Offset: 0x94
	// Line 563, Address: 0x132178, Func Offset: 0x98
	// Line 564, Address: 0x13217c, Func Offset: 0x9c
	// Line 565, Address: 0x132180, Func Offset: 0xa0
	// Line 566, Address: 0x132184, Func Offset: 0xa4
	// Line 567, Address: 0x132188, Func Offset: 0xa8
	// Line 568, Address: 0x13218c, Func Offset: 0xac
	// Line 570, Address: 0x132190, Func Offset: 0xb0
	// Line 571, Address: 0x13219c, Func Offset: 0xbc
	// Line 574, Address: 0x1321a4, Func Offset: 0xc4
	// Line 575, Address: 0x1321a8, Func Offset: 0xc8
	// Line 576, Address: 0x1321ac, Func Offset: 0xcc
	// Line 577, Address: 0x1321b0, Func Offset: 0xd0
	// Line 578, Address: 0x1321b4, Func Offset: 0xd4
	// Line 579, Address: 0x1321b8, Func Offset: 0xd8
	// Line 580, Address: 0x1321bc, Func Offset: 0xdc
	// Line 581, Address: 0x1321c0, Func Offset: 0xe0
	// Line 582, Address: 0x1321c4, Func Offset: 0xe4
	// Line 583, Address: 0x1321c8, Func Offset: 0xe8
	// Line 584, Address: 0x1321cc, Func Offset: 0xec
	// Line 585, Address: 0x1321d0, Func Offset: 0xf0
	// Line 586, Address: 0x1321d4, Func Offset: 0xf4
	// Line 587, Address: 0x1321d8, Func Offset: 0xf8
	// Line 588, Address: 0x1321dc, Func Offset: 0xfc
	// Line 589, Address: 0x1321e0, Func Offset: 0x100
	// Line 590, Address: 0x1321e4, Func Offset: 0x104
	// Line 593, Address: 0x1321e8, Func Offset: 0x108
	// Line 594, Address: 0x1321ec, Func Offset: 0x10c
	// Line 595, Address: 0x1321f0, Func Offset: 0x110
	// Line 596, Address: 0x132204, Func Offset: 0x124
	// Line 597, Address: 0x132210, Func Offset: 0x130
	// Line 598, Address: 0x13221c, Func Offset: 0x13c
	// Line 599, Address: 0x132230, Func Offset: 0x150
	// Line 601, Address: 0x132244, Func Offset: 0x164
	// Line 602, Address: 0x132254, Func Offset: 0x174
	// Line 606, Address: 0x132260, Func Offset: 0x180
	// Line 607, Address: 0x132264, Func Offset: 0x184
	// Func End, Address: 0x13226c, Func Offset: 0x18c
}

