typedef struct _CL_HITPOLY_HEAD;
typedef union _anon0;
typedef struct _USXY;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct _SXY;
typedef struct SubCharacter;
typedef struct _anon1;
typedef struct shAnime3d;
typedef struct shSkelton;
typedef union Q_WORDDATA;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon2;
typedef struct _AnimeInfo;
typedef struct sh2gfw_Chara_SyncCid;
typedef struct shCharacterAll;
typedef struct _VbSCREENINFO;
typedef struct shBattleFight;
typedef struct SubCharacterDisp;
typedef struct shBattleShot;
typedef struct shClusterAnime;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct CheckDrawChara_Work;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon3;
typedef struct _anon4;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _CL_VHIT_CHARA;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _CL_VHIT_RESULT;

typedef void(*type_25)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);

typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned short type_3[4];
typedef unsigned char type_4[16];
typedef Q_WORDDATA type_5[4];
typedef int type_6[4];
typedef unsigned short type_7[4];
typedef short type_8[8];
typedef char type_9[16];
typedef unsigned char type_10[13];
typedef unsigned long type_11[2];
typedef unsigned short type_12[2];
typedef float type_13[4];
typedef unsigned short type_14[2];
typedef int type_15[6];
typedef int type_16[6];
typedef void* type_17[6];
typedef unsigned char type_18[34];
typedef float type_19[4];
typedef float type_20[4][4];
typedef int type_21[2];
typedef SubCharacterDisp type_22[32];
typedef unsigned char type_23[10];
typedef float type_24[4];
typedef float type_26[4][4];
typedef shAttackInfo type_27[46];
typedef unsigned char type_29[4];
typedef unsigned short type_30[4];
typedef void* type_31[3];
typedef sh2gfw_ModelDraw_MAN type_32[16];
typedef unsigned char type_33[10];
typedef float type_34[4];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
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

struct _SXY
{
	short x;
	short y;
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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon2 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon1 b_pos;
	_anon1 b_rot;
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

struct _anon1
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
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon1 rot_neck;
	_anon1 rot_arms;
	_anon1 rot_body_neck;
	_anon1 rot_body;
	float scale;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
	_anon1 des_t;
	_anon1 axis;
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

struct _anon2
{
	float d[4][4];
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
};

struct sh2gfw_Chara_SyncCid
{
	int page_id;
	int counter;
	int SyncCid[2];
};

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleArea
{
	float center;
	float radius;
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

struct CheckDrawChara_Work
{
	float camera_pos[4];
	float camera_dir[4];
	float farz;
	float scz;
	float hsx;
	float clip_cs;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon3 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon4
{
	SubCharacter* scp;
	float z;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
CheckDrawChara_Work CheckCD_W;
_VbSCREENINFO VbScreenInfo;
sh2gfw_Env_ctl Env_ctl;
sh2gfw_Chara_SyncCid Chr_SyncCid;
sh2gfw_ModelDraw_MAN UniModelDW_Man;
sh2gfw_ModelDraw_MAN ModelDW_Man[16];
shCharacterAll sh2chara;
Q_WORDDATA dummy_OTFake_packet[4];

void Init_CheckDrawChara_Work();
int Check_Draw_Chara(SubCharacter* scp);
void sh2gfw_init_Chara_SyncCid();
void sh2gfw_set_d1cid();
void sh2gfw_sync_d1cid();
void sh2gfw_Draw_Character_Pre();
void sh2_CharacterDrawOne(void* vscp, _anon2* ws_mat);
void sh2gfw_Character_DrawOne(void* subchar, sh2gfw_ModelDraw_MAN* pMD, float wld_scr[4]);
void sh2gfw_Character_Draw(float wld_scr[4]);
int sh2_Model_SyncOT(void* pktop);
int sh2_Model_DummySyncOT();
int sh2gfw_get_ModelChangeTB(int texno);
int sh2gfw_get_ModelIndexTB(int texno);
void sh2gfw_Thr_Chracter_d1d2SyncKick(void* pktop, int index);
int sh2gfw_get_Charaid();
int sh2gfw_get_TBChangeVU1num();
void sh2gfw_set_CharaD1CID(int cid);

// 
// Start address: 0x138540
void Init_CheckDrawChara_Work()
{
	// Line 71, Address: 0x138540, Func Offset: 0
	// Line 73, Address: 0x138548, Func Offset: 0x8
	// Line 74, Address: 0x138558, Func Offset: 0x18
	// Line 75, Address: 0x138568, Func Offset: 0x28
	// Line 76, Address: 0x138578, Func Offset: 0x38
	// Line 77, Address: 0x138588, Func Offset: 0x48
	// Line 78, Address: 0x138598, Func Offset: 0x58
	// Line 81, Address: 0x1385e8, Func Offset: 0xa8
	// Func End, Address: 0x1385f8, Func Offset: 0xb8
}

// 
// Start address: 0x138600
int Check_Draw_Chara(SubCharacter* scp)
{
	float inp;
	float len;
	float dir[4];
	float vec[4];
	// Line 94, Address: 0x138600, Func Offset: 0
	// Line 101, Address: 0x138604, Func Offset: 0x4
	// Line 108, Address: 0x138624, Func Offset: 0x24
	// Line 121, Address: 0x138644, Func Offset: 0x44
	// Line 123, Address: 0x138668, Func Offset: 0x68
	// Line 124, Address: 0x138674, Func Offset: 0x74
	// Line 126, Address: 0x138690, Func Offset: 0x90
	// Line 130, Address: 0x13869c, Func Offset: 0x9c
	// Line 132, Address: 0x1386c4, Func Offset: 0xc4
	// Line 134, Address: 0x1386f4, Func Offset: 0xf4
	// Line 136, Address: 0x13870c, Func Offset: 0x10c
	// Line 139, Address: 0x138718, Func Offset: 0x118
	// Line 142, Address: 0x13871c, Func Offset: 0x11c
	// Func End, Address: 0x138728, Func Offset: 0x128
}

// 
// Start address: 0x138730
void sh2gfw_init_Chara_SyncCid()
{
	// Line 173, Address: 0x138730, Func Offset: 0
	// Line 175, Address: 0x138738, Func Offset: 0x8
	// Line 176, Address: 0x138750, Func Offset: 0x20
	// Func End, Address: 0x138760, Func Offset: 0x30
}

// 
// Start address: 0x138760
void sh2gfw_set_d1cid()
{
	// Line 190, Address: 0x138760, Func Offset: 0
	// Line 192, Address: 0x138784, Func Offset: 0x24
	// Line 194, Address: 0x138798, Func Offset: 0x38
	// Line 195, Address: 0x1387ac, Func Offset: 0x4c
	// Func End, Address: 0x1387b4, Func Offset: 0x54
}

// 
// Start address: 0x1387c0
void sh2gfw_sync_d1cid()
{
	// Line 202, Address: 0x1387c0, Func Offset: 0
	// Line 204, Address: 0x1387c8, Func Offset: 0x8
	// Line 206, Address: 0x1387dc, Func Offset: 0x1c
	// Line 209, Address: 0x138804, Func Offset: 0x44
	// Line 214, Address: 0x13880c, Func Offset: 0x4c
	// Func End, Address: 0x13881c, Func Offset: 0x5c
}

// 
// Start address: 0x138820
void sh2gfw_Draw_Character_Pre()
{
	// Line 225, Address: 0x138820, Func Offset: 0
	// Line 227, Address: 0x138828, Func Offset: 0x8
	// Line 233, Address: 0x138830, Func Offset: 0x10
	// Line 238, Address: 0x138838, Func Offset: 0x18
	// Line 242, Address: 0x138840, Func Offset: 0x20
	// Line 243, Address: 0x13884c, Func Offset: 0x2c
	// Line 246, Address: 0x138858, Func Offset: 0x38
	// Line 247, Address: 0x138860, Func Offset: 0x40
	// Func End, Address: 0x138870, Func Offset: 0x50
}

// 
// Start address: 0x138870
void sh2_CharacterDrawOne(void* vscp, _anon2* ws_mat)
{
	shSkelton* sp;
	_anon2* mat;
	int n_skeletons;
	int i;
	_anon2* mwm;
	SubCharacter* scp;
	SubCharacterDisp* scp_d;
	// Line 288, Address: 0x138870, Func Offset: 0
	// Line 299, Address: 0x13889c, Func Offset: 0x2c
	// Line 301, Address: 0x1388a0, Func Offset: 0x30
	// Line 302, Address: 0x1388a4, Func Offset: 0x34
	// Line 304, Address: 0x1388a8, Func Offset: 0x38
	// Line 305, Address: 0x1388c0, Func Offset: 0x50
	// Line 307, Address: 0x1388c8, Func Offset: 0x58
	// Line 308, Address: 0x1388cc, Func Offset: 0x5c
	// Line 313, Address: 0x1388d4, Func Offset: 0x64
	// Line 314, Address: 0x1388e4, Func Offset: 0x74
	// Line 315, Address: 0x1388f4, Func Offset: 0x84
	// Line 316, Address: 0x138900, Func Offset: 0x90
	// Line 317, Address: 0x138934, Func Offset: 0xc4
	// Line 318, Address: 0x138938, Func Offset: 0xc8
	// Line 321, Address: 0x13894c, Func Offset: 0xdc
	// Line 322, Address: 0x13896c, Func Offset: 0xfc
	// Func End, Address: 0x138998, Func Offset: 0x128
}

// 
// Start address: 0x1389a0
void sh2gfw_Character_DrawOne(void* subchar, sh2gfw_ModelDraw_MAN* pMD, float wld_scr[4])
{
	SubCharacter* pSubc;
	// Line 339, Address: 0x1389a0, Func Offset: 0
	// Line 344, Address: 0x1389b8, Func Offset: 0x18
	// Line 361, Address: 0x1389bc, Func Offset: 0x1c
	// Line 362, Address: 0x1389e8, Func Offset: 0x48
	// Line 363, Address: 0x1389f0, Func Offset: 0x50
	// Line 369, Address: 0x1389f8, Func Offset: 0x58
	// Line 371, Address: 0x138a08, Func Offset: 0x68
	// Line 373, Address: 0x138a10, Func Offset: 0x70
	// Line 376, Address: 0x138a20, Func Offset: 0x80
	// Func End, Address: 0x138a34, Func Offset: 0x94
}

// 
// Start address: 0x138a40
void sh2gfw_Character_Draw(float wld_scr[4])
{
	SubCharacter* scp;
	int imax;
	int i;
	// Line 400, Address: 0x138a40, Func Offset: 0
	// Line 412, Address: 0x138a60, Func Offset: 0x20
	// Line 415, Address: 0x138a64, Func Offset: 0x24
	// Line 421, Address: 0x138a78, Func Offset: 0x38
	// Line 423, Address: 0x138a80, Func Offset: 0x40
	// Line 425, Address: 0x138a88, Func Offset: 0x48
	// Line 427, Address: 0x138a90, Func Offset: 0x50
	// Line 430, Address: 0x138a98, Func Offset: 0x58
	// Line 432, Address: 0x138aa0, Func Offset: 0x60
	// Line 434, Address: 0x138ab4, Func Offset: 0x74
	// Line 435, Address: 0x138abc, Func Offset: 0x7c
	// Line 438, Address: 0x138ad0, Func Offset: 0x90
	// Line 440, Address: 0x138ad8, Func Offset: 0x98
	// Line 442, Address: 0x138ae0, Func Offset: 0xa0
	// Line 447, Address: 0x138af4, Func Offset: 0xb4
	// Line 450, Address: 0x138afc, Func Offset: 0xbc
	// Line 460, Address: 0x138b04, Func Offset: 0xc4
	// Line 462, Address: 0x138b14, Func Offset: 0xd4
	// Line 466, Address: 0x138b24, Func Offset: 0xe4
	// Line 469, Address: 0x138b30, Func Offset: 0xf0
	// Line 473, Address: 0x138b68, Func Offset: 0x128
	// Line 475, Address: 0x138b7c, Func Offset: 0x13c
	// Line 485, Address: 0x138bac, Func Offset: 0x16c
	// Line 487, Address: 0x138be8, Func Offset: 0x1a8
	// Line 489, Address: 0x138c14, Func Offset: 0x1d4
	// Line 492, Address: 0x138c5c, Func Offset: 0x21c
	// Line 497, Address: 0x138cc8, Func Offset: 0x288
	// Line 499, Address: 0x138cf4, Func Offset: 0x2b4
	// Line 500, Address: 0x138d3c, Func Offset: 0x2fc
	// Line 509, Address: 0x138d40, Func Offset: 0x300
	// Line 510, Address: 0x138d54, Func Offset: 0x314
	// Line 516, Address: 0x138d68, Func Offset: 0x328
	// Line 518, Address: 0x138d70, Func Offset: 0x330
	// Line 519, Address: 0x138d84, Func Offset: 0x344
	// Func End, Address: 0x138da8, Func Offset: 0x368
}

// 
// Start address: 0x138db0
int sh2_Model_SyncOT(void* pktop)
{
	int id;
	int i;
	int d1cid;
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 622, Address: 0x138db0, Func Offset: 0
	// Line 624, Address: 0x138dd4, Func Offset: 0x24
	// Line 627, Address: 0x138ddc, Func Offset: 0x2c
	// Line 631, Address: 0x138de8, Func Offset: 0x38
	// Line 634, Address: 0x138df4, Func Offset: 0x44
	// Line 636, Address: 0x138e0c, Func Offset: 0x5c
	// Line 641, Address: 0x138e40, Func Offset: 0x90
	// Line 643, Address: 0x138e60, Func Offset: 0xb0
	// Line 645, Address: 0x138e68, Func Offset: 0xb8
	// Line 648, Address: 0x138e84, Func Offset: 0xd4
	// Line 650, Address: 0x138e88, Func Offset: 0xd8
	// Line 651, Address: 0x138e8c, Func Offset: 0xdc
	// Func End, Address: 0x138eb4, Func Offset: 0x104
}

// 
// Start address: 0x138ec0
int sh2_Model_DummySyncOT()
{
	int id;
	int i;
	Q_WORDDATA* qwd;
	sh2gfw_ModelDraw_MAN* pMD;
	int d1cid;
	// Line 666, Address: 0x138ec0, Func Offset: 0
	// Line 668, Address: 0x138ee0, Func Offset: 0x20
	// Line 669, Address: 0x138ee8, Func Offset: 0x28
	// Line 671, Address: 0x138f04, Func Offset: 0x44
	// Line 672, Address: 0x138f28, Func Offset: 0x68
	// Line 673, Address: 0x138f44, Func Offset: 0x84
	// Line 674, Address: 0x138f50, Func Offset: 0x90
	// Line 679, Address: 0x138f60, Func Offset: 0xa0
	// Line 683, Address: 0x138f6c, Func Offset: 0xac
	// Line 686, Address: 0x138f78, Func Offset: 0xb8
	// Line 689, Address: 0x138f90, Func Offset: 0xd0
	// Line 694, Address: 0x138fbc, Func Offset: 0xfc
	// Line 695, Address: 0x138fd8, Func Offset: 0x118
	// Line 698, Address: 0x138fdc, Func Offset: 0x11c
	// Line 699, Address: 0x138fe0, Func Offset: 0x120
	// Func End, Address: 0x139008, Func Offset: 0x148
}

// 
// Start address: 0x139010
int sh2gfw_get_ModelChangeTB(int texno)
{
	// Line 707, Address: 0x139010, Func Offset: 0
	// Line 708, Address: 0x139018, Func Offset: 0x8
	// Line 709, Address: 0x139034, Func Offset: 0x24
	// Func End, Address: 0x139040, Func Offset: 0x30
}

// 
// Start address: 0x139040
int sh2gfw_get_ModelIndexTB(int texno)
{
	// Line 717, Address: 0x139040, Func Offset: 0
	// Line 718, Address: 0x139048, Func Offset: 0x8
	// Line 719, Address: 0x139064, Func Offset: 0x24
	// Func End, Address: 0x139070, Func Offset: 0x30
}

// 
// Start address: 0x139070
void sh2gfw_Thr_Chracter_d1d2SyncKick(void* pktop, int index)
{
	// Line 728, Address: 0x139070, Func Offset: 0
	// Line 729, Address: 0x139084, Func Offset: 0x14
	// Line 734, Address: 0x1390cc, Func Offset: 0x5c
	// Func End, Address: 0x1390e0, Func Offset: 0x70
}

// 
// Start address: 0x1390e0
int sh2gfw_get_Charaid()
{
	// Line 743, Address: 0x1390e0, Func Offset: 0
	// Line 745, Address: 0x1390e8, Func Offset: 0x8
	// Func End, Address: 0x1390f0, Func Offset: 0x10
}

// 
// Start address: 0x1390f0
int sh2gfw_get_TBChangeVU1num()
{
	// Line 753, Address: 0x1390f0, Func Offset: 0
	// Line 755, Address: 0x1390fc, Func Offset: 0xc
	// Func End, Address: 0x139104, Func Offset: 0x14
}

// 
// Start address: 0x139110
void sh2gfw_set_CharaD1CID(int cid)
{
	// Line 762, Address: 0x139110, Func Offset: 0
	// Line 763, Address: 0x139118, Func Offset: 0x8
	// Line 765, Address: 0x139124, Func Offset: 0x14
	// Func End, Address: 0x139130, Func Offset: 0x20
}

