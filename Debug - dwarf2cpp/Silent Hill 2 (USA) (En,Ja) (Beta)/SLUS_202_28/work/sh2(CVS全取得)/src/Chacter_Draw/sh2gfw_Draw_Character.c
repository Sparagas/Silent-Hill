typedef struct SortSubCharacter;
typedef struct _anon0;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct shBattleFight;
typedef struct sh2gfw_Model_Header;
typedef union Q_WORDDATA;
typedef struct shBattleShot;
typedef struct shCharacterAll;
typedef struct shBattleArea;
typedef struct SubCharacterDisp;
typedef struct SubCharacter;
typedef struct shBattleInfo;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct shSkelton;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;
typedef struct _CL_VHIT_WALL;
typedef struct sh2gfw_Chara_SyncCid;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _VbSCREENINFO;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _USXY;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef struct _SXY;
typedef union _anon2;
typedef struct _IXY;
typedef struct _anon3;
typedef struct shAnime3d;
typedef struct _AnimeInfo;
typedef struct CheckDrawChara_Work;
typedef struct shClusterAnime;

typedef void(*type_26)(SubCharacter*);
typedef void(*type_29)(SubCharacter*);

typedef SubCharacterDisp type_0[32];
typedef unsigned char type_1[14];
typedef unsigned int type_2[4];
typedef unsigned short type_3[8];
typedef float type_4[4];
typedef unsigned char type_5[16];
typedef int type_6[4];
typedef short type_7[8];
typedef unsigned char type_8[97];
typedef char type_9[16];
typedef unsigned long type_10[2];
typedef int type_11[2];
typedef float type_12[4];
typedef float type_13[4];
typedef float type_14[4][4];
typedef unsigned char type_15[3];
typedef unsigned char type_16[20];
typedef void* type_17[8];
typedef shAttackInfo type_18[66];
typedef float type_19[4];
typedef unsigned short type_20[4];
typedef float type_21[4];
typedef float type_22[4][4];
typedef Q_WORDDATA type_23[0];
typedef unsigned char type_24[14];
typedef unsigned short type_25[4];
typedef unsigned short type_27[4];
typedef Q_WORDDATA type_28[4];
typedef unsigned short type_30[2];
typedef sh2gfw_ModelDraw_MAN type_31[32];
typedef unsigned short type_32[2];
typedef int type_33[6];
typedef unsigned char type_34[4];
typedef int type_35[6];
typedef unsigned char type_36[69];
typedef void* type_37[6];
typedef void* type_38[3];

struct SortSubCharacter
{
	SubCharacter* scp;
	short kind;
};

struct _anon0
{
	float d[4][4];
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

struct sh2gfw_Model_Header
{
	unsigned char NoTextureID;
	unsigned char padc[3];
	unsigned int chara_id;
	unsigned int texnum;
	unsigned int toTexHead_offset;
	unsigned int toClutsHead_offset;
	unsigned int toModel_offset;
	int toKg1_offset;
	int padi;
	void* pTexMAN[8];
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct SubCharacterDisp
{
	SubCharacter sc;
	shAnime3d anime2;
	shAnime3d anime;
	shClusterAnime* cluster_anime;
	void* models[3];
	void* work;
	void* data;
	unsigned int model_adr;
	unsigned int anime_adr;
	unsigned int clani_adr;
	void* anime_list;
	void* clani_list;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct sh2gfw_Chara_SyncCid
{
	int page_id;
	int counter;
	int SyncCid[2];
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

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
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

struct _SXY
{
	short x;
	short y;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _IXY
{
	int x;
	int y;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon3 rot_neck;
	_anon3 rot_arms;
	_anon3 rot_body_neck;
	_anon3 rot_body;
	float scale;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct CheckDrawChara_Work
{
	float camera_pos[4];
	float camera_dir[4];
	float farz;
	float scz;
	float hsx;
	float clip_cs;
};

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
CheckDrawChara_Work CheckCD_W;
_VbSCREENINFO VbScreenInfo;
sh2gfw_Env_ctl Env_ctl;
float chr_clip_cos;
sh2gfw_Chara_SyncCid Chr_SyncCid;
sh2gfw_ModelDraw_MAN UniModelDW_Man;
sh2gfw_ModelDraw_MAN ModelDW_Man[32];
shCharacterAll sh2chara;
int kkkkk;
Q_WORDDATA dummy_OTFake_packet[4];
Q_WORDDATA CalcTex_buffer[0];

void Init_CheckDrawChara_Work();
int Check_Draw_Chara(SubCharacter* scp);
void sh2gfw_init_Chara_SyncCid();
void sh2gfw_set_d1cid();
void sh2gfw_sync_d1cid();
void sh2gfw_Draw_Character_Pre();
void sh2_CharacterDrawOne(void* vscp, _anon0* ws_mat);
void sh2gfw_Character_DrawOne(void* subchar, sh2gfw_ModelDraw_MAN* pMD, float wld_scr[4]);
void sh2gfw_Exec_AnimeAndCollision();
void sh2gfw_Exec_Character_Draw(float wld_scr[4], int comm);
void sh2gfw_Exec_Character_Draw_ShadowOnly();
int sh2_Model_SyncOT(void* pktop);
int sh2_Model_DummySyncOT();
int sh2gfw_get_ModelChangeTB(int texno);
int sh2gfw_get_ModelIndexTB(int texno);
void sh2gfw_Thr_Chracter_d1d2SyncKick(void* pktop, int index);
int sh2gfw_get_Charaid();
int sh2gfw_get_TBChangeVU1num();
void sh2gfw_set_CharaD1CID(int cid);
void sh2gfw_SetNoise_CharaTexture(int charaid);
void sh2gfw_RemoveNoise_CharaTexture(int charaid);

// 
// Start address: 0x12e1d0
void Init_CheckDrawChara_Work()
{
	// Line 88, Address: 0x12e1d0, Func Offset: 0
	// Line 90, Address: 0x12e1d8, Func Offset: 0x8
	// Line 91, Address: 0x12e1e8, Func Offset: 0x18
	// Line 92, Address: 0x12e1f8, Func Offset: 0x28
	// Line 93, Address: 0x12e208, Func Offset: 0x38
	// Line 94, Address: 0x12e218, Func Offset: 0x48
	// Line 95, Address: 0x12e228, Func Offset: 0x58
	// Line 98, Address: 0x12e25c, Func Offset: 0x8c
	// Func End, Address: 0x12e26c, Func Offset: 0x9c
}

// 
// Start address: 0x12e270
int Check_Draw_Chara(SubCharacter* scp)
{
	float inp;
	float len;
	float dir[4];
	float vec[4];
	// Line 112, Address: 0x12e270, Func Offset: 0
	// Line 119, Address: 0x12e280, Func Offset: 0x10
	// Line 123, Address: 0x12e29c, Func Offset: 0x2c
	// Line 125, Address: 0x12e2bc, Func Offset: 0x4c
	// Line 131, Address: 0x12e2dc, Func Offset: 0x6c
	// Line 133, Address: 0x12e2f8, Func Offset: 0x88
	// Line 135, Address: 0x12e31c, Func Offset: 0xac
	// Line 136, Address: 0x12e328, Func Offset: 0xb8
	// Line 138, Address: 0x12e344, Func Offset: 0xd4
	// Line 140, Address: 0x12e354, Func Offset: 0xe4
	// Line 142, Address: 0x12e378, Func Offset: 0x108
	// Line 145, Address: 0x12e3a8, Func Offset: 0x138
	// Line 146, Address: 0x12e3c0, Func Offset: 0x150
	// Line 147, Address: 0x12e3e0, Func Offset: 0x170
	// Line 149, Address: 0x12e3ec, Func Offset: 0x17c
	// Line 151, Address: 0x12e3f8, Func Offset: 0x188
	// Line 156, Address: 0x12e404, Func Offset: 0x194
	// Line 158, Address: 0x12e428, Func Offset: 0x1b8
	// Line 160, Address: 0x12e454, Func Offset: 0x1e4
	// Line 162, Address: 0x12e46c, Func Offset: 0x1fc
	// Line 165, Address: 0x12e478, Func Offset: 0x208
	// Line 168, Address: 0x12e47c, Func Offset: 0x20c
	// Func End, Address: 0x12e490, Func Offset: 0x220
}

// 
// Start address: 0x12e490
void sh2gfw_init_Chara_SyncCid()
{
	// Line 199, Address: 0x12e490, Func Offset: 0
	// Line 201, Address: 0x12e498, Func Offset: 0x8
	// Line 202, Address: 0x12e4b0, Func Offset: 0x20
	// Func End, Address: 0x12e4c0, Func Offset: 0x30
}

// 
// Start address: 0x12e4c0
void sh2gfw_set_d1cid()
{
	// Line 216, Address: 0x12e4c0, Func Offset: 0
	// Line 218, Address: 0x12e4e4, Func Offset: 0x24
	// Line 220, Address: 0x12e4f8, Func Offset: 0x38
	// Line 221, Address: 0x12e50c, Func Offset: 0x4c
	// Func End, Address: 0x12e514, Func Offset: 0x54
}

// 
// Start address: 0x12e520
void sh2gfw_sync_d1cid()
{
	// Line 228, Address: 0x12e520, Func Offset: 0
	// Line 230, Address: 0x12e528, Func Offset: 0x8
	// Line 232, Address: 0x12e53c, Func Offset: 0x1c
	// Line 235, Address: 0x12e564, Func Offset: 0x44
	// Line 240, Address: 0x12e56c, Func Offset: 0x4c
	// Func End, Address: 0x12e57c, Func Offset: 0x5c
}

// 
// Start address: 0x12e580
void sh2gfw_Draw_Character_Pre()
{
	// Line 251, Address: 0x12e580, Func Offset: 0
	// Line 253, Address: 0x12e588, Func Offset: 0x8
	// Line 259, Address: 0x12e590, Func Offset: 0x10
	// Line 264, Address: 0x12e598, Func Offset: 0x18
	// Line 270, Address: 0x12e5a0, Func Offset: 0x20
	// Line 276, Address: 0x12e5a8, Func Offset: 0x28
	// Line 277, Address: 0x12e5b0, Func Offset: 0x30
	// Func End, Address: 0x12e5c0, Func Offset: 0x40
}

// 
// Start address: 0x12e5c0
void sh2_CharacterDrawOne(void* vscp, _anon0* ws_mat)
{
	shSkelton* sp;
	_anon0* mat;
	int n_skeletons;
	int i;
	_anon0* mwm;
	SubCharacter* scp;
	SubCharacterDisp* scp_d;
	// Line 318, Address: 0x12e5c0, Func Offset: 0
	// Line 331, Address: 0x12e5e0, Func Offset: 0x20
	// Line 332, Address: 0x12e5e4, Func Offset: 0x24
	// Line 334, Address: 0x12e5e8, Func Offset: 0x28
	// Line 335, Address: 0x12e600, Func Offset: 0x40
	// Line 337, Address: 0x12e608, Func Offset: 0x48
	// Line 338, Address: 0x12e60c, Func Offset: 0x4c
	// Line 343, Address: 0x12e614, Func Offset: 0x54
	// Line 344, Address: 0x12e620, Func Offset: 0x60
	// Line 345, Address: 0x12e62c, Func Offset: 0x6c
	// Line 346, Address: 0x12e638, Func Offset: 0x78
	// Line 347, Address: 0x12e66c, Func Offset: 0xac
	// Line 348, Address: 0x12e670, Func Offset: 0xb0
	// Line 351, Address: 0x12e684, Func Offset: 0xc4
	// Line 352, Address: 0x12e6a4, Func Offset: 0xe4
	// Func End, Address: 0x12e6c8, Func Offset: 0x108
}

// 
// Start address: 0x12e6d0
void sh2gfw_Character_DrawOne(void* subchar, sh2gfw_ModelDraw_MAN* pMD, float wld_scr[4])
{
	SubCharacter* pSubc;
	// Line 369, Address: 0x12e6d0, Func Offset: 0
	// Line 374, Address: 0x12e6e4, Func Offset: 0x14
	// Line 391, Address: 0x12e6e8, Func Offset: 0x18
	// Line 392, Address: 0x12e710, Func Offset: 0x40
	// Line 393, Address: 0x12e718, Func Offset: 0x48
	// Line 399, Address: 0x12e720, Func Offset: 0x50
	// Line 401, Address: 0x12e730, Func Offset: 0x60
	// Line 403, Address: 0x12e738, Func Offset: 0x68
	// Line 406, Address: 0x12e748, Func Offset: 0x78
	// Func End, Address: 0x12e760, Func Offset: 0x90
}

// 
// Start address: 0x12e760
void sh2gfw_Exec_AnimeAndCollision()
{
	// Line 444, Address: 0x12e760, Func Offset: 0
	// Line 450, Address: 0x12e768, Func Offset: 0x8
	// Line 452, Address: 0x12e770, Func Offset: 0x10
	// Line 454, Address: 0x12e778, Func Offset: 0x18
	// Line 456, Address: 0x12e780, Func Offset: 0x20
	// Line 458, Address: 0x12e788, Func Offset: 0x28
	// Line 459, Address: 0x12e790, Func Offset: 0x30
	// Line 461, Address: 0x12e7a4, Func Offset: 0x44
	// Line 462, Address: 0x12e7ac, Func Offset: 0x4c
	// Line 464, Address: 0x12e7c0, Func Offset: 0x60
	// Line 466, Address: 0x12e7c8, Func Offset: 0x68
	// Line 468, Address: 0x12e7d0, Func Offset: 0x70
	// Line 470, Address: 0x12e7e4, Func Offset: 0x84
	// Func End, Address: 0x12e7f4, Func Offset: 0x94
}

// 
// Start address: 0x12e800
void sh2gfw_Exec_Character_Draw(float wld_scr[4], int comm)
{
	int ix;
	SubCharacter* scp;
	float spot_pam[4];
	float spot_dir[4];
	float spot_pos[4];
	int imax;
	int i;
	// Line 473, Address: 0x12e800, Func Offset: 0
	// Line 483, Address: 0x12e830, Func Offset: 0x30
	// Line 498, Address: 0x12e838, Func Offset: 0x38
	// Line 500, Address: 0x12e848, Func Offset: 0x48
	// Line 504, Address: 0x12e858, Func Offset: 0x58
	// Line 507, Address: 0x12e864, Func Offset: 0x64
	// Line 510, Address: 0x12e894, Func Offset: 0x94
	// Line 511, Address: 0x12e8a8, Func Offset: 0xa8
	// Line 522, Address: 0x12e8bc, Func Offset: 0xbc
	// Line 533, Address: 0x12e958, Func Offset: 0x158
	// Line 536, Address: 0x12e970, Func Offset: 0x170
	// Line 537, Address: 0x12e98c, Func Offset: 0x18c
	// Line 538, Address: 0x12e994, Func Offset: 0x194
	// Line 546, Address: 0x12e9c0, Func Offset: 0x1c0
	// Line 547, Address: 0x12ea20, Func Offset: 0x220
	// Line 552, Address: 0x12ea34, Func Offset: 0x234
	// Line 554, Address: 0x12ea38, Func Offset: 0x238
	// Line 555, Address: 0x12ea4c, Func Offset: 0x24c
	// Line 560, Address: 0x12ea60, Func Offset: 0x260
	// Line 562, Address: 0x12ea68, Func Offset: 0x268
	// Line 563, Address: 0x12ea7c, Func Offset: 0x27c
	// Func End, Address: 0x12eaac, Func Offset: 0x2ac
}

// 
// Start address: 0x12eab0
void sh2gfw_Exec_Character_Draw_ShadowOnly()
{
	int ix;
	SubCharacter* scp;
	float spot_pam[4];
	float spot_dir[4];
	float spot_pos[4];
	int imax;
	int i;
	// Line 566, Address: 0x12eab0, Func Offset: 0
	// Line 585, Address: 0x12ead0, Func Offset: 0x20
	// Line 587, Address: 0x12eae0, Func Offset: 0x30
	// Line 591, Address: 0x12eaf0, Func Offset: 0x40
	// Line 594, Address: 0x12eafc, Func Offset: 0x4c
	// Line 597, Address: 0x12eb2c, Func Offset: 0x7c
	// Line 598, Address: 0x12eb40, Func Offset: 0x90
	// Line 602, Address: 0x12ebd8, Func Offset: 0x128
	// Line 604, Address: 0x12ebf0, Func Offset: 0x140
	// Line 605, Address: 0x12ec0c, Func Offset: 0x15c
	// Line 606, Address: 0x12ec14, Func Offset: 0x164
	// Line 614, Address: 0x12ec40, Func Offset: 0x190
	// Line 615, Address: 0x12ec98, Func Offset: 0x1e8
	// Line 621, Address: 0x12ecac, Func Offset: 0x1fc
	// Line 623, Address: 0x12ecb0, Func Offset: 0x200
	// Line 625, Address: 0x12ecc4, Func Offset: 0x214
	// Line 631, Address: 0x12ecd8, Func Offset: 0x228
	// Func End, Address: 0x12ed00, Func Offset: 0x250
}

// 
// Start address: 0x12ed00
int sh2_Model_SyncOT(void* pktop)
{
	int id;
	int i;
	int d1cid;
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 803, Address: 0x12ed00, Func Offset: 0
	// Line 805, Address: 0x12ed18, Func Offset: 0x18
	// Line 808, Address: 0x12ed20, Func Offset: 0x20
	// Line 812, Address: 0x12ed30, Func Offset: 0x30
	// Line 815, Address: 0x12ed3c, Func Offset: 0x3c
	// Line 817, Address: 0x12ed48, Func Offset: 0x48
	// Line 822, Address: 0x12ed68, Func Offset: 0x68
	// Line 824, Address: 0x12ed84, Func Offset: 0x84
	// Line 826, Address: 0x12ed8c, Func Offset: 0x8c
	// Line 829, Address: 0x12ed9c, Func Offset: 0x9c
	// Line 832, Address: 0x12eda0, Func Offset: 0xa0
	// Func End, Address: 0x12edbc, Func Offset: 0xbc
}

// 
// Start address: 0x12edc0
int sh2_Model_DummySyncOT()
{
	int id;
	int i;
	Q_WORDDATA* qwd;
	sh2gfw_ModelDraw_MAN* pMD;
	int d1cid;
	// Line 847, Address: 0x12edc0, Func Offset: 0
	// Line 849, Address: 0x12edd0, Func Offset: 0x10
	// Line 850, Address: 0x12edd8, Func Offset: 0x18
	// Line 852, Address: 0x12edf0, Func Offset: 0x30
	// Line 853, Address: 0x12ee14, Func Offset: 0x54
	// Line 854, Address: 0x12ee2c, Func Offset: 0x6c
	// Line 855, Address: 0x12ee38, Func Offset: 0x78
	// Line 860, Address: 0x12ee48, Func Offset: 0x88
	// Line 864, Address: 0x12ee58, Func Offset: 0x98
	// Line 867, Address: 0x12ee64, Func Offset: 0xa4
	// Line 870, Address: 0x12ee70, Func Offset: 0xb0
	// Line 875, Address: 0x12ee90, Func Offset: 0xd0
	// Line 876, Address: 0x12eeac, Func Offset: 0xec
	// Line 879, Address: 0x12eeb0, Func Offset: 0xf0
	// Line 880, Address: 0x12eeb4, Func Offset: 0xf4
	// Func End, Address: 0x12eecc, Func Offset: 0x10c
}

// 
// Start address: 0x12eed0
int sh2gfw_get_ModelChangeTB(int texno)
{
	// Line 889, Address: 0x12eed0, Func Offset: 0
	// Line 890, Address: 0x12eee4, Func Offset: 0x14
	// Func End, Address: 0x12eeec, Func Offset: 0x1c
}

// 
// Start address: 0x12eef0
int sh2gfw_get_ModelIndexTB(int texno)
{
	// Line 899, Address: 0x12eef0, Func Offset: 0
	// Line 900, Address: 0x12ef04, Func Offset: 0x14
	// Func End, Address: 0x12ef0c, Func Offset: 0x1c
}

// 
// Start address: 0x12ef10
void sh2gfw_Thr_Chracter_d1d2SyncKick(void* pktop, int index)
{
	// Line 909, Address: 0x12ef10, Func Offset: 0
	// Line 910, Address: 0x12ef18, Func Offset: 0x8
	// Line 915, Address: 0x12ef4c, Func Offset: 0x3c
	// Func End, Address: 0x12ef5c, Func Offset: 0x4c
}

// 
// Start address: 0x12ef60
int sh2gfw_get_Charaid()
{
	// Line 924, Address: 0x12ef60, Func Offset: 0
	// Line 926, Address: 0x12ef68, Func Offset: 0x8
	// Func End, Address: 0x12ef70, Func Offset: 0x10
}

// 
// Start address: 0x12ef70
int sh2gfw_get_TBChangeVU1num()
{
	// Line 934, Address: 0x12ef70, Func Offset: 0
	// Line 936, Address: 0x12ef78, Func Offset: 0x8
	// Func End, Address: 0x12ef80, Func Offset: 0x10
}

// 
// Start address: 0x12ef80
void sh2gfw_set_CharaD1CID(int cid)
{
	// Line 944, Address: 0x12ef80, Func Offset: 0
	// Line 946, Address: 0x12ef88, Func Offset: 0x8
	// Func End, Address: 0x12ef90, Func Offset: 0x10
}

// 
// Start address: 0x12ef90
void sh2gfw_SetNoise_CharaTexture(int charaid)
{
	sh2gfw_ModelDraw_MAN* pMD;
	sh2gfw_Model_Header* sMH;
	int i;
	// Line 979, Address: 0x12ef90, Func Offset: 0
	// Line 982, Address: 0x12efa4, Func Offset: 0x14
	// Line 984, Address: 0x12efb0, Func Offset: 0x20
	// Line 985, Address: 0x12efb8, Func Offset: 0x28
	// Line 986, Address: 0x12efbc, Func Offset: 0x2c
	// Line 988, Address: 0x12efc8, Func Offset: 0x38
	// Line 989, Address: 0x12efe4, Func Offset: 0x54
	// Line 990, Address: 0x12eff8, Func Offset: 0x68
	// Func End, Address: 0x12f014, Func Offset: 0x84
}

// 
// Start address: 0x12f020
void sh2gfw_RemoveNoise_CharaTexture(int charaid)
{
	sh2gfw_ModelDraw_MAN* pMD;
	sh2gfw_Model_Header* sMH;
	int i;
	// Line 997, Address: 0x12f020, Func Offset: 0
	// Line 1000, Address: 0x12f034, Func Offset: 0x14
	// Line 1002, Address: 0x12f040, Func Offset: 0x20
	// Line 1003, Address: 0x12f048, Func Offset: 0x28
	// Line 1005, Address: 0x12f04c, Func Offset: 0x2c
	// Line 1007, Address: 0x12f058, Func Offset: 0x38
	// Line 1008, Address: 0x12f06c, Func Offset: 0x4c
	// Line 1009, Address: 0x12f080, Func Offset: 0x60
	// Func End, Address: 0x12f09c, Func Offset: 0x7c
}

