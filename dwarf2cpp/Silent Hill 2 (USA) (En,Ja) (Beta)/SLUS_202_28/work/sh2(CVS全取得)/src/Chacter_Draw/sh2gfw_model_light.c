typedef struct DrawEnvData;
typedef struct shBattleShot;
typedef struct Light;
typedef struct shBattleArea;
typedef struct shShadingParams;
typedef struct shBattleInfo;
typedef struct PointLightData;
typedef struct SpotLightData;
typedef struct sh2gfw_Model_Header;
typedef struct SubCharacter;
typedef struct _CL_VHIT_WALL;
typedef struct Item;
typedef struct shAttackInfo;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct shSkelton;
typedef struct ShadowLight_Data;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct ParallelLightData;
typedef struct _anon3;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;
typedef struct ShadowLight_Work;
typedef struct FakeLight_Work;
typedef struct shBattleFight;

typedef void(*type_29)(SubCharacter*);
typedef void(*type_30)(SubCharacter*);

typedef unsigned short type_0[4];
typedef unsigned short type_1[4];
typedef unsigned short type_2[2];
typedef unsigned short type_3[2];
typedef int type_4[6];
typedef int type_5[6];
typedef void* type_6[6];
typedef unsigned char type_7[3];
typedef unsigned short type_8[4];
typedef unsigned int type_9[2];
typedef void* type_10[8];
typedef float type_11[4];
typedef unsigned short type_12[11];
typedef float type_13[4];
typedef float type_14[4];
typedef float type_15[4][4];
typedef unsigned short type_16[3];
typedef float type_17[4];
typedef shAttackInfo type_18[66];
typedef unsigned int type_19[4];
typedef unsigned short type_20[8];
typedef float type_21[4];
typedef float type_22[4][4];
typedef float type_23[4];
typedef unsigned char type_24[16];
typedef int type_25[4];
typedef short type_26[8];
typedef char type_27[16];
typedef unsigned long type_28[2];
typedef unsigned char type_31[4];
typedef int type_32[2];
typedef ShadowLight_Data type_33[32];

struct DrawEnvData
{
	int map_id_name;
	char parallelLNum;
	char FakeSpotNum;
	char FakePointNum;
	char pointLNum;
	char spotLNum;
	char NightOrDay;
	short ShadowColor;
	short ShadowForceLightNo;
	short ShadowDarkNess;
	float pLight_Dir0[4];
	float pLight_Col0[4];
	float pLight_Dir1[4];
	float pLight_Col1[4];
	float pLight_Dir2[4];
	float pLight_Col2[4];
	float SpotCol0[4];
	float SpotDecayParm0[4];
	float SpotParm[4];
	float FogParm[4];
	float Ld_0[4];
	float Ld_1[4];
	float Ld_2[4];
	float Ld_3[4];
	float Ld_4[4];
	float Ld_5[4];
	float Ld_6[4];
	float Ld_7[4];
	float Ld_8[4];
	float Ld_9[4];
	float Ld_A[4];
	float Ld_B[4];
	float Ld_C[4];
	float Ld_D[4];
	float Ld_E[4];
	float MoveFogCol[4];
	float Ambient[4];
	float BaseAmbient[4];
	float BaseColor[4];
	float VertexAmbient[4];
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleArea
{
	float center;
	float radius;
};

struct shShadingParams
{
	float m3_rgbamax_vu0[4];
	float m3_rgbamax_vu1[4];
	float m3_global_ambient_vu0[4];
	float m3_global_ambient_vu1[4];
	float m3_camdir[4];
	float m3_mono_vector[4];
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

struct PointLightData
{
	float Col[4];
	float DecayParm[4];
	float Pos[4];
};

struct SpotLightData
{
	float Col[4];
	float DecayParm[4];
	float Pos[4];
	float Dir[4];
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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon1 src_t;
	_anon3 des_m;
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

struct ShadowLight_Data
{
	void* SubChara;
	void* pDed;
	short lightKind;
	char visible_flg;
	char force_flg;
	float influence_factor;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct ParallelLightData
{
	float Dir[4];
	float Col[4];
};

struct _anon3
{
	float d[4][4];
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

struct ShadowLight_Work
{
	int Store_Num;
	ShadowLight_Data ShadowLd[32];
};

struct FakeLight_Work
{
	int UniFakeLightNo[2];
	int FakeLightNum;
	int pad;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
shShadingParams shLambertEnv;
int Reverse_Draw;
FakeLight_Work FakeLightWork;
sh2gfw_ModelDraw_MAN UniModelDW_Man;
ShadowLight_Work ShadowLightWork;
ShadowLight_Work ShadowParallel_LightWork;
Item item;
sh2gfw_Env_ctl Env_ctl;
float NormalColor[4];
int OtherLightFlg;
int Chr_ID_Buf;
float SpotHilightPos[4];

void Init_FakeLightWork();
void Set_FakeLight(int nn);
int Get_FakeLightNum();
int Get_FakeLightId(int n);
void UpdateFake_DirandColor(int no);
int sh2gfw_Check_CharaDarkOrBright(void* SubChara);
void sh2gfw_Init_ShadowLight();
void sh2gfw_Store_ShadowParallelLight(void* pald, int pnum);
void sh2gfw_Store_ShadowLight(void* pl);
int sh2gfw_Get_ShadowLight(int mode, float* pos, float* dir, float* svt, void* pScp);
int sh2gfw_Get_ShadowLightKind();
void* sh2gfw_Get_ShadowLightPointer();
void Draw_Jms_Shadow(int mode, void* pm, SubCharacter* scp);
void Reverse_Light();
void sh2gfw_set_JmsLIGHT();
void sh2gfw_set_OtherOtherLIGHT();
void sh2gfw_set_OtherLIGHT();
void sh2gfw_clear_LightChr();
int sh2gfw_check_LightChr(int cid);
int sh2gfw_change_lights(void* pmh);
void sh2gfw_set_CommonCharacterLight();

// 
// Start address: 0x12f3d0
void Init_FakeLightWork()
{
	// Line 147, Address: 0x12f3d0, Func Offset: 0
	// Line 148, Address: 0x12f3d8, Func Offset: 0x8
	// Func End, Address: 0x12f3e0, Func Offset: 0x10
}

// 
// Start address: 0x12f3e0
void Set_FakeLight(int nn)
{
	// Line 152, Address: 0x12f3e0, Func Offset: 0
	// Line 153, Address: 0x12f3f4, Func Offset: 0x14
	// Line 154, Address: 0x12f414, Func Offset: 0x34
	// Func End, Address: 0x12f41c, Func Offset: 0x3c
}

// 
// Start address: 0x12f420
int Get_FakeLightNum()
{
	// Line 158, Address: 0x12f420, Func Offset: 0
	// Line 159, Address: 0x12f428, Func Offset: 0x8
	// Func End, Address: 0x12f430, Func Offset: 0x10
}

// 
// Start address: 0x12f430
int Get_FakeLightId(int n)
{
	// Line 163, Address: 0x12f430, Func Offset: 0
	// Line 164, Address: 0x12f444, Func Offset: 0x14
	// Func End, Address: 0x12f44c, Func Offset: 0x1c
}

// 
// Start address: 0x12f450
void UpdateFake_DirandColor(int no)
{
	SpotLightData* sld;
	float dirfac;
	PointLightData* pld;
	float fvt[4];
	int flg;
	float sc;
	float DirVec[4];
	float color[4];
	float tmp[4];
	SubCharacter* scp;
	Light* pl;
	// Line 172, Address: 0x12f450, Func Offset: 0
	// Line 174, Address: 0x12f468, Func Offset: 0x18
	// Line 180, Address: 0x12f474, Func Offset: 0x24
	// Line 182, Address: 0x12f478, Func Offset: 0x28
	// Line 184, Address: 0x12f480, Func Offset: 0x30
	// Line 185, Address: 0x12f494, Func Offset: 0x44
	// Line 187, Address: 0x12f4a4, Func Offset: 0x54
	// Line 189, Address: 0x12f4b4, Func Offset: 0x64
	// Line 191, Address: 0x12f4cc, Func Offset: 0x7c
	// Line 192, Address: 0x12f4f8, Func Offset: 0xa8
	// Line 194, Address: 0x12f4fc, Func Offset: 0xac
	// Line 195, Address: 0x12f50c, Func Offset: 0xbc
	// Line 196, Address: 0x12f514, Func Offset: 0xc4
	// Line 198, Address: 0x12f518, Func Offset: 0xc8
	// Line 199, Address: 0x12f524, Func Offset: 0xd4
	// Line 206, Address: 0x12f528, Func Offset: 0xd8
	// Line 208, Address: 0x12f55c, Func Offset: 0x10c
	// Line 209, Address: 0x12f56c, Func Offset: 0x11c
	// Line 211, Address: 0x12f588, Func Offset: 0x138
	// Line 214, Address: 0x12f5ac, Func Offset: 0x15c
	// Line 216, Address: 0x12f5b0, Func Offset: 0x160
	// Line 218, Address: 0x12f5bc, Func Offset: 0x16c
	// Line 223, Address: 0x12f5c4, Func Offset: 0x174
	// Line 224, Address: 0x12f5c8, Func Offset: 0x178
	// Line 226, Address: 0x12f5d8, Func Offset: 0x188
	// Line 227, Address: 0x12f5e0, Func Offset: 0x190
	// Line 228, Address: 0x12f5e4, Func Offset: 0x194
	// Line 229, Address: 0x12f5ec, Func Offset: 0x19c
	// Line 231, Address: 0x12f5f0, Func Offset: 0x1a0
	// Line 233, Address: 0x12f600, Func Offset: 0x1b0
	// Line 234, Address: 0x12f610, Func Offset: 0x1c0
	// Line 235, Address: 0x12f640, Func Offset: 0x1f0
	// Line 236, Address: 0x12f644, Func Offset: 0x1f4
	// Line 238, Address: 0x12f650, Func Offset: 0x200
	// Line 241, Address: 0x12f658, Func Offset: 0x208
	// Line 245, Address: 0x12f65c, Func Offset: 0x20c
	// Line 247, Address: 0x12f688, Func Offset: 0x238
	// Line 248, Address: 0x12f690, Func Offset: 0x240
	// Line 251, Address: 0x12f6ac, Func Offset: 0x25c
	// Func End, Address: 0x12f6cc, Func Offset: 0x27c
}

// 
// Start address: 0x12f6d0
int sh2gfw_Check_CharaDarkOrBright(void* SubChara)
{
	int i;
	float inf_hosei;
	// Line 376, Address: 0x12f6d0, Func Offset: 0
	// Line 378, Address: 0x12f6dc, Func Offset: 0xc
	// Line 381, Address: 0x12f6f8, Func Offset: 0x28
	// Line 384, Address: 0x12f738, Func Offset: 0x68
	// Line 385, Address: 0x12f754, Func Offset: 0x84
	// Line 386, Address: 0x12f758, Func Offset: 0x88
	// Func End, Address: 0x12f760, Func Offset: 0x90
}

// 
// Start address: 0x12f760
void sh2gfw_Init_ShadowLight()
{
	// Line 396, Address: 0x12f760, Func Offset: 0
	// Line 397, Address: 0x12f768, Func Offset: 0x8
	// Line 399, Address: 0x12f770, Func Offset: 0x10
	// Func End, Address: 0x12f778, Func Offset: 0x18
}

// 
// Start address: 0x12f780
void sh2gfw_Store_ShadowParallelLight(void* pald, int pnum)
{
	int i;
	Light* pL;
	// Line 426, Address: 0x12f780, Func Offset: 0
	// Line 428, Address: 0x12f794, Func Offset: 0x14
	// Line 431, Address: 0x12f7a4, Func Offset: 0x24
	// Line 432, Address: 0x12f7bc, Func Offset: 0x3c
	// Line 434, Address: 0x12f7d0, Func Offset: 0x50
	// Line 435, Address: 0x12f7d4, Func Offset: 0x54
	// Line 436, Address: 0x12f7e4, Func Offset: 0x64
	// Func End, Address: 0x12f7ec, Func Offset: 0x6c
}

// 
// Start address: 0x12f7f0
void sh2gfw_Store_ShadowLight(void* pl)
{
	Light* pL;
	int sn;
	void* pldata;
	int ltype;
	// Line 444, Address: 0x12f7f0, Func Offset: 0
	// Line 449, Address: 0x12f800, Func Offset: 0x10
	// Line 452, Address: 0x12f80c, Func Offset: 0x1c
	// Line 454, Address: 0x12f820, Func Offset: 0x30
	// Line 467, Address: 0x12f838, Func Offset: 0x48
	// Line 472, Address: 0x12f850, Func Offset: 0x60
	// Line 474, Address: 0x12f864, Func Offset: 0x74
	// Line 476, Address: 0x12f878, Func Offset: 0x88
	// Line 479, Address: 0x12f88c, Func Offset: 0x9c
	// Line 481, Address: 0x12f8a0, Func Offset: 0xb0
	// Line 484, Address: 0x12f8b0, Func Offset: 0xc0
	// Line 488, Address: 0x12f8b8, Func Offset: 0xc8
	// Line 489, Address: 0x12f8cc, Func Offset: 0xdc
	// Line 491, Address: 0x12f8dc, Func Offset: 0xec
	// Line 492, Address: 0x12f8ec, Func Offset: 0xfc
	// Line 494, Address: 0x12f900, Func Offset: 0x110
	// Line 505, Address: 0x12f914, Func Offset: 0x124
	// Line 508, Address: 0x12f928, Func Offset: 0x138
	// Line 510, Address: 0x12f964, Func Offset: 0x174
	// Func End, Address: 0x12f978, Func Offset: 0x188
}

// 
// Start address: 0x12f980
int sh2gfw_Get_ShadowLight(int mode, float* pos, float* dir, float* svt, void* pScp)
{
	float dummy[4];
	float sv[4];
	SubCharacter* scp;
	void* tmp;
	ParallelLightData* pald;
	SpotLightData* sld;
	PointLightData* pld;
	int lt;
	int sn;
	// Line 524, Address: 0x12f980, Func Offset: 0
	// Line 533, Address: 0x12f9b4, Func Offset: 0x34
	// Line 534, Address: 0x12f9bc, Func Offset: 0x3c
	// Line 535, Address: 0x12f9c8, Func Offset: 0x48
	// Line 536, Address: 0x12f9e4, Func Offset: 0x64
	// Line 537, Address: 0x12f9f8, Func Offset: 0x78
	// Line 539, Address: 0x12fa10, Func Offset: 0x90
	// Line 542, Address: 0x12fa1c, Func Offset: 0x9c
	// Line 543, Address: 0x12fa2c, Func Offset: 0xac
	// Line 545, Address: 0x12fa34, Func Offset: 0xb4
	// Line 546, Address: 0x12fa50, Func Offset: 0xd0
	// Line 549, Address: 0x12fa5c, Func Offset: 0xdc
	// Line 554, Address: 0x12fa68, Func Offset: 0xe8
	// Line 557, Address: 0x12fa90, Func Offset: 0x110
	// Line 559, Address: 0x12fa9c, Func Offset: 0x11c
	// Line 562, Address: 0x12faac, Func Offset: 0x12c
	// Line 563, Address: 0x12fabc, Func Offset: 0x13c
	// Line 565, Address: 0x12fac8, Func Offset: 0x148
	// Line 568, Address: 0x12fadc, Func Offset: 0x15c
	// Line 572, Address: 0x12faf4, Func Offset: 0x174
	// Line 574, Address: 0x12fb10, Func Offset: 0x190
	// Line 575, Address: 0x12fb20, Func Offset: 0x1a0
	// Line 580, Address: 0x12fb2c, Func Offset: 0x1ac
	// Line 584, Address: 0x12fb64, Func Offset: 0x1e4
	// Line 585, Address: 0x12fb74, Func Offset: 0x1f4
	// Line 588, Address: 0x12fb80, Func Offset: 0x200
	// Line 589, Address: 0x12fb84, Func Offset: 0x204
	// Line 590, Address: 0x12fb88, Func Offset: 0x208
	// Line 592, Address: 0x12fb98, Func Offset: 0x218
	// Line 593, Address: 0x12fbac, Func Offset: 0x22c
	// Line 599, Address: 0x12fbbc, Func Offset: 0x23c
	// Line 600, Address: 0x12fbc8, Func Offset: 0x248
	// Line 601, Address: 0x12fbd0, Func Offset: 0x250
	// Line 604, Address: 0x12fbe8, Func Offset: 0x268
	// Line 610, Address: 0x12fbf4, Func Offset: 0x274
	// Line 611, Address: 0x12fbf8, Func Offset: 0x278
	// Line 612, Address: 0x12fc08, Func Offset: 0x288
	// Line 616, Address: 0x12fc18, Func Offset: 0x298
	// Line 617, Address: 0x12fc20, Func Offset: 0x2a0
	// Line 618, Address: 0x12fc28, Func Offset: 0x2a8
	// Line 624, Address: 0x12fc40, Func Offset: 0x2c0
	// Line 630, Address: 0x12fc4c, Func Offset: 0x2cc
	// Line 632, Address: 0x12fc50, Func Offset: 0x2d0
	// Func End, Address: 0x12fc7c, Func Offset: 0x2fc
}

// 
// Start address: 0x12fc80
int sh2gfw_Get_ShadowLightKind()
{
	int sn;
	// Line 640, Address: 0x12fc80, Func Offset: 0
	// Line 641, Address: 0x12fc8c, Func Offset: 0xc
	// Line 644, Address: 0x12fcb8, Func Offset: 0x38
	// Func End, Address: 0x12fcc0, Func Offset: 0x40
}

// 
// Start address: 0x12fcc0
void* sh2gfw_Get_ShadowLightPointer()
{
	int sn;
	// Line 652, Address: 0x12fcc0, Func Offset: 0
	// Line 653, Address: 0x12fccc, Func Offset: 0xc
	// Line 656, Address: 0x12fcf4, Func Offset: 0x34
	// Func End, Address: 0x12fcfc, Func Offset: 0x3c
}

// 
// Start address: 0x12fd00
void Draw_Jms_Shadow(int mode, void* pm, SubCharacter* scp)
{
	float inpro;
	Light* pL;
	ShadowLight_Data* pShadow;
	float spot_pam[4];
	float spot_dir[4];
	float spot_pos[4];
	sh2gfw_ModelDraw_MAN* pMD;
	int sn;
	int LightInfo;
	int ShadowLightInfo;
	// Line 766, Address: 0x12fd00, Func Offset: 0
	// Line 769, Address: 0x12fd2c, Func Offset: 0x2c
	// Line 776, Address: 0x12fd30, Func Offset: 0x30
	// Line 778, Address: 0x12fd3c, Func Offset: 0x3c
	// Line 779, Address: 0x12fd48, Func Offset: 0x48
	// Line 780, Address: 0x12fd64, Func Offset: 0x64
	// Line 785, Address: 0x12fd70, Func Offset: 0x70
	// Line 787, Address: 0x12fd80, Func Offset: 0x80
	// Line 791, Address: 0x12fda8, Func Offset: 0xa8
	// Line 795, Address: 0x12fdb0, Func Offset: 0xb0
	// Line 796, Address: 0x12fdbc, Func Offset: 0xbc
	// Line 799, Address: 0x12fdc8, Func Offset: 0xc8
	// Line 802, Address: 0x12fdf4, Func Offset: 0xf4
	// Line 804, Address: 0x12fdf8, Func Offset: 0xf8
	// Line 811, Address: 0x12fe00, Func Offset: 0x100
	// Line 823, Address: 0x12fe14, Func Offset: 0x114
	// Line 825, Address: 0x12fe1c, Func Offset: 0x11c
	// Line 827, Address: 0x12fe20, Func Offset: 0x120
	// Line 830, Address: 0x12fe28, Func Offset: 0x128
	// Line 838, Address: 0x12fe38, Func Offset: 0x138
	// Line 839, Address: 0x12fe4c, Func Offset: 0x14c
	// Line 840, Address: 0x12fe64, Func Offset: 0x164
	// Line 841, Address: 0x12fe68, Func Offset: 0x168
	// Line 844, Address: 0x12fe70, Func Offset: 0x170
	// Line 847, Address: 0x12fe78, Func Offset: 0x178
	// Line 850, Address: 0x12fe7c, Func Offset: 0x17c
	// Line 853, Address: 0x12fe84, Func Offset: 0x184
	// Line 854, Address: 0x12fe88, Func Offset: 0x188
	// Line 855, Address: 0x12fea0, Func Offset: 0x1a0
	// Line 857, Address: 0x12feb8, Func Offset: 0x1b8
	// Line 862, Address: 0x12fec0, Func Offset: 0x1c0
	// Line 872, Address: 0x12fec8, Func Offset: 0x1c8
	// Line 874, Address: 0x12fed0, Func Offset: 0x1d0
	// Line 882, Address: 0x12fed4, Func Offset: 0x1d4
	// Line 888, Address: 0x12ff00, Func Offset: 0x200
	// Func End, Address: 0x12ff2c, Func Offset: 0x22c
}

// 
// Start address: 0x12ff30
void Reverse_Light()
{
	Light* pL;
	int i;
	// Line 900, Address: 0x12ff30, Func Offset: 0
	// Line 905, Address: 0x12ff3c, Func Offset: 0xc
	// Line 907, Address: 0x12ff50, Func Offset: 0x20
	// Line 908, Address: 0x12ff5c, Func Offset: 0x2c
	// Line 909, Address: 0x12ff68, Func Offset: 0x38
	// Line 911, Address: 0x12ff74, Func Offset: 0x44
	// Line 913, Address: 0x12ff88, Func Offset: 0x58
	// Line 914, Address: 0x12ffa4, Func Offset: 0x74
	// Line 916, Address: 0x12ffbc, Func Offset: 0x8c
	// Line 919, Address: 0x12ffc4, Func Offset: 0x94
	// Line 920, Address: 0x12ffd0, Func Offset: 0xa0
	// Line 921, Address: 0x12ffdc, Func Offset: 0xac
	// Line 924, Address: 0x12ffe8, Func Offset: 0xb8
	// Line 926, Address: 0x12fffc, Func Offset: 0xcc
	// Line 927, Address: 0x130018, Func Offset: 0xe8
	// Line 929, Address: 0x13002c, Func Offset: 0xfc
	// Line 931, Address: 0x130030, Func Offset: 0x100
	// Func End, Address: 0x130044, Func Offset: 0x114
}

// 
// Start address: 0x130050
void sh2gfw_set_JmsLIGHT()
{
	float svt[4];
	float svt[4];
	unsigned int l_mode;
	SubCharacter* scp;
	float decayparms[4];
	float spotcol[4];
	float spotdir[4];
	float spotpos[4];
	float coltmp[4];
	// Line 939, Address: 0x130050, Func Offset: 0
	// Line 947, Address: 0x13005c, Func Offset: 0xc
	// Line 951, Address: 0x130064, Func Offset: 0x14
	// Line 952, Address: 0x130080, Func Offset: 0x30
	// Line 953, Address: 0x130088, Func Offset: 0x38
	// Line 957, Address: 0x130098, Func Offset: 0x48
	// Line 959, Address: 0x1300b0, Func Offset: 0x60
	// Line 963, Address: 0x1300d0, Func Offset: 0x80
	// Line 964, Address: 0x1300dc, Func Offset: 0x8c
	// Line 967, Address: 0x130104, Func Offset: 0xb4
	// Line 968, Address: 0x13011c, Func Offset: 0xcc
	// Line 970, Address: 0x130138, Func Offset: 0xe8
	// Line 971, Address: 0x13014c, Func Offset: 0xfc
	// Line 972, Address: 0x130178, Func Offset: 0x128
	// Line 975, Address: 0x13018c, Func Offset: 0x13c
	// Line 976, Address: 0x130194, Func Offset: 0x144
	// Line 977, Address: 0x13019c, Func Offset: 0x14c
	// Line 978, Address: 0x1301b0, Func Offset: 0x160
	// Line 981, Address: 0x1301b8, Func Offset: 0x168
	// Line 982, Address: 0x1301f4, Func Offset: 0x1a4
	// Line 983, Address: 0x130200, Func Offset: 0x1b0
	// Line 985, Address: 0x130208, Func Offset: 0x1b8
	// Line 986, Address: 0x130220, Func Offset: 0x1d0
	// Line 988, Address: 0x13023c, Func Offset: 0x1ec
	// Line 989, Address: 0x130250, Func Offset: 0x200
	// Line 990, Address: 0x13027c, Func Offset: 0x22c
	// Line 993, Address: 0x130290, Func Offset: 0x240
	// Line 994, Address: 0x130298, Func Offset: 0x248
	// Line 995, Address: 0x1302a0, Func Offset: 0x250
	// Line 999, Address: 0x1302b4, Func Offset: 0x264
	// Line 1000, Address: 0x1302c4, Func Offset: 0x274
	// Line 1004, Address: 0x1302f4, Func Offset: 0x2a4
	// Line 1007, Address: 0x13030c, Func Offset: 0x2bc
	// Line 1008, Address: 0x130328, Func Offset: 0x2d8
	// Line 1010, Address: 0x130344, Func Offset: 0x2f4
	// Line 1019, Address: 0x130354, Func Offset: 0x304
	// Line 1020, Address: 0x13035c, Func Offset: 0x30c
	// Line 1021, Address: 0x130364, Func Offset: 0x314
	// Line 1022, Address: 0x130374, Func Offset: 0x324
	// Line 1023, Address: 0x13037c, Func Offset: 0x32c
	// Line 1027, Address: 0x130388, Func Offset: 0x338
	// Line 1031, Address: 0x130390, Func Offset: 0x340
	// Func End, Address: 0x1303a4, Func Offset: 0x354
}

// 
// Start address: 0x1303b0
void sh2gfw_set_OtherOtherLIGHT()
{
	float svt[4];
	int flg;
	void* lp;
	float decayparms[4];
	float spotcol[4];
	float spotdir[4];
	float spotpos[4];
	float coltmp[4];
	float spotdir[4];
	float decayparms2[4];
	float spotcol2[4];
	float spotdir2[4];
	float spotpos2[4];
	SubCharacter* scp;
	unsigned int l_mode;
	// Line 1038, Address: 0x1303b0, Func Offset: 0
	// Line 1040, Address: 0x1303c0, Func Offset: 0x10
	// Line 1043, Address: 0x1303c8, Func Offset: 0x18
	// Line 1046, Address: 0x1303d0, Func Offset: 0x20
	// Line 1049, Address: 0x1303f0, Func Offset: 0x40
	// Line 1055, Address: 0x130410, Func Offset: 0x60
	// Line 1056, Address: 0x13042c, Func Offset: 0x7c
	// Line 1062, Address: 0x130448, Func Offset: 0x98
	// Line 1064, Address: 0x130458, Func Offset: 0xa8
	// Line 1069, Address: 0x130460, Func Offset: 0xb0
	// Line 1071, Address: 0x130468, Func Offset: 0xb8
	// Line 1086, Address: 0x130470, Func Offset: 0xc0
	// Line 1090, Address: 0x130490, Func Offset: 0xe0
	// Line 1091, Address: 0x1304b4, Func Offset: 0x104
	// Line 1092, Address: 0x1304cc, Func Offset: 0x11c
	// Line 1093, Address: 0x1304d8, Func Offset: 0x128
	// Line 1094, Address: 0x1304e0, Func Offset: 0x130
	// Line 1095, Address: 0x1304f4, Func Offset: 0x144
	// Line 1097, Address: 0x130508, Func Offset: 0x158
	// Line 1106, Address: 0x130514, Func Offset: 0x164
	// Line 1108, Address: 0x130518, Func Offset: 0x168
	// Line 1110, Address: 0x130534, Func Offset: 0x184
	// Line 1112, Address: 0x130544, Func Offset: 0x194
	// Line 1114, Address: 0x130580, Func Offset: 0x1d0
	// Line 1115, Address: 0x130594, Func Offset: 0x1e4
	// Line 1116, Address: 0x1305c0, Func Offset: 0x210
	// Line 1117, Address: 0x1305d4, Func Offset: 0x224
	// Line 1118, Address: 0x1305dc, Func Offset: 0x22c
	// Line 1120, Address: 0x1305e0, Func Offset: 0x230
	// Line 1121, Address: 0x1305e4, Func Offset: 0x234
	// Line 1123, Address: 0x1305ec, Func Offset: 0x23c
	// Line 1124, Address: 0x130604, Func Offset: 0x254
	// Line 1125, Address: 0x13061c, Func Offset: 0x26c
	// Line 1129, Address: 0x130628, Func Offset: 0x278
	// Line 1131, Address: 0x130650, Func Offset: 0x2a0
	// Line 1137, Address: 0x13066c, Func Offset: 0x2bc
	// Line 1138, Address: 0x13067c, Func Offset: 0x2cc
	// Line 1139, Address: 0x130694, Func Offset: 0x2e4
	// Line 1145, Address: 0x1306b0, Func Offset: 0x300
	// Line 1146, Address: 0x1306c0, Func Offset: 0x310
	// Line 1148, Address: 0x1306d4, Func Offset: 0x324
	// Line 1160, Address: 0x1306dc, Func Offset: 0x32c
	// Line 1179, Address: 0x1306e4, Func Offset: 0x334
	// Line 1180, Address: 0x1306f8, Func Offset: 0x348
	// Func End, Address: 0x130710, Func Offset: 0x360
}

// 
// Start address: 0x130710
void sh2gfw_set_OtherLIGHT()
{
	float svt[4];
	void* lp;
	float decayparms[4];
	float spotcol[4];
	float spotdir[4];
	float spotpos[4];
	float coltmp[4];
	float spotdir[4];
	float decayparms2[4];
	float spotcol2[4];
	float spotdir2[4];
	float spotpos2[4];
	SubCharacter* scp;
	int flg;
	int ckind;
	unsigned int l_mode;
	// Line 1182, Address: 0x130710, Func Offset: 0
	// Line 1184, Address: 0x130724, Func Offset: 0x14
	// Line 1185, Address: 0x13072c, Func Offset: 0x1c
	// Line 1187, Address: 0x130730, Func Offset: 0x20
	// Line 1188, Address: 0x130738, Func Offset: 0x28
	// Line 1191, Address: 0x13073c, Func Offset: 0x2c
	// Line 1198, Address: 0x130778, Func Offset: 0x68
	// Line 1200, Address: 0x130790, Func Offset: 0x80
	// Line 1202, Address: 0x1307b0, Func Offset: 0xa0
	// Line 1208, Address: 0x1307c0, Func Offset: 0xb0
	// Line 1209, Address: 0x1307dc, Func Offset: 0xcc
	// Line 1215, Address: 0x1307f8, Func Offset: 0xe8
	// Line 1216, Address: 0x130808, Func Offset: 0xf8
	// Line 1218, Address: 0x130810, Func Offset: 0x100
	// Line 1222, Address: 0x130818, Func Offset: 0x108
	// Line 1223, Address: 0x13083c, Func Offset: 0x12c
	// Line 1224, Address: 0x130854, Func Offset: 0x144
	// Line 1225, Address: 0x130860, Func Offset: 0x150
	// Line 1226, Address: 0x130868, Func Offset: 0x158
	// Line 1227, Address: 0x13087c, Func Offset: 0x16c
	// Line 1229, Address: 0x130890, Func Offset: 0x180
	// Line 1239, Address: 0x13089c, Func Offset: 0x18c
	// Line 1241, Address: 0x1308b8, Func Offset: 0x1a8
	// Line 1243, Address: 0x1308c8, Func Offset: 0x1b8
	// Line 1245, Address: 0x130904, Func Offset: 0x1f4
	// Line 1246, Address: 0x130918, Func Offset: 0x208
	// Line 1247, Address: 0x130944, Func Offset: 0x234
	// Line 1248, Address: 0x130958, Func Offset: 0x248
	// Line 1249, Address: 0x130960, Func Offset: 0x250
	// Line 1251, Address: 0x130964, Func Offset: 0x254
	// Line 1252, Address: 0x130968, Func Offset: 0x258
	// Line 1254, Address: 0x130970, Func Offset: 0x260
	// Line 1255, Address: 0x130988, Func Offset: 0x278
	// Line 1256, Address: 0x1309a0, Func Offset: 0x290
	// Line 1259, Address: 0x1309ac, Func Offset: 0x29c
	// Line 1262, Address: 0x1309d4, Func Offset: 0x2c4
	// Line 1268, Address: 0x1309f0, Func Offset: 0x2e0
	// Line 1270, Address: 0x130a00, Func Offset: 0x2f0
	// Line 1271, Address: 0x130a18, Func Offset: 0x308
	// Line 1277, Address: 0x130a34, Func Offset: 0x324
	// Line 1278, Address: 0x130a44, Func Offset: 0x334
	// Line 1280, Address: 0x130a58, Func Offset: 0x348
	// Line 1298, Address: 0x130a60, Func Offset: 0x350
	// Line 1299, Address: 0x130a68, Func Offset: 0x358
	// Line 1300, Address: 0x130a70, Func Offset: 0x360
	// Line 1301, Address: 0x130a80, Func Offset: 0x370
	// Line 1302, Address: 0x130a88, Func Offset: 0x378
	// Line 1307, Address: 0x130a94, Func Offset: 0x384
	// Line 1308, Address: 0x130a9c, Func Offset: 0x38c
	// Line 1309, Address: 0x130aa8, Func Offset: 0x398
	// Func End, Address: 0x130ac4, Func Offset: 0x3b4
}

// 
// Start address: 0x130ad0
void sh2gfw_clear_LightChr()
{
	// Line 1313, Address: 0x130ad0, Func Offset: 0
	// Line 1314, Address: 0x130ad8, Func Offset: 0x8
	// Func End, Address: 0x130ae0, Func Offset: 0x10
}

// 
// Start address: 0x130ae0
int sh2gfw_check_LightChr(int cid)
{
	int id;
	// Line 1322, Address: 0x130ae0, Func Offset: 0
	// Line 1327, Address: 0x130b30, Func Offset: 0x50
	// Line 1331, Address: 0x130b78, Func Offset: 0x98
	// Line 1332, Address: 0x130b7c, Func Offset: 0x9c
	// Line 1334, Address: 0x130b84, Func Offset: 0xa4
	// Line 1337, Address: 0x130b88, Func Offset: 0xa8
	// Line 1340, Address: 0x130b90, Func Offset: 0xb0
	// Line 1344, Address: 0x130bd8, Func Offset: 0xf8
	// Line 1345, Address: 0x130bdc, Func Offset: 0xfc
	// Line 1347, Address: 0x130be4, Func Offset: 0x104
	// Line 1352, Address: 0x130be8, Func Offset: 0x108
	// Line 1354, Address: 0x130bf0, Func Offset: 0x110
	// Func End, Address: 0x130bf8, Func Offset: 0x118
}

// 
// Start address: 0x130c00
int sh2gfw_change_lights(void* pmh)
{
	int iu;
	sh2gfw_Model_Header* pMH;
	int ih;
	// Line 1366, Address: 0x130c00, Func Offset: 0
	// Line 1372, Address: 0x130c10, Func Offset: 0x10
	// Line 1376, Address: 0x130c20, Func Offset: 0x20
	// Line 1378, Address: 0x130c40, Func Offset: 0x40
	// Line 1379, Address: 0x130c4c, Func Offset: 0x4c
	// Line 1382, Address: 0x130c7c, Func Offset: 0x7c
	// Line 1385, Address: 0x130c84, Func Offset: 0x84
	// Line 1388, Address: 0x130cb8, Func Offset: 0xb8
	// Line 1389, Address: 0x130cc4, Func Offset: 0xc4
	// Line 1392, Address: 0x130ccc, Func Offset: 0xcc
	// Line 1393, Address: 0x130cd8, Func Offset: 0xd8
	// Line 1396, Address: 0x130ce0, Func Offset: 0xe0
	// Line 1397, Address: 0x130cec, Func Offset: 0xec
	// Line 1401, Address: 0x130cf4, Func Offset: 0xf4
	// Line 1413, Address: 0x130d00, Func Offset: 0x100
	// Line 1415, Address: 0x130d04, Func Offset: 0x104
	// Func End, Address: 0x130d1c, Func Offset: 0x11c
}

// 
// Start address: 0x130d20
void sh2gfw_set_CommonCharacterLight()
{
	float pdecay[4];
	float pcol[4];
	float ppos[4];
	float coltmp[4];
	SpotLightData* sld;
	PointLightData* pld;
	DrawEnvData* ded;
	Light* pl;
	float ddir[4];
	int ik;
	float ddir[4];
	int ik;
	float dir[4];
	float coltmp[4];
	int i;
	int lno;
	// Line 1577, Address: 0x130d20, Func Offset: 0
	// Line 1580, Address: 0x130d3c, Func Offset: 0x1c
	// Line 1581, Address: 0x130d44, Func Offset: 0x24
	// Line 1582, Address: 0x130d4c, Func Offset: 0x2c
	// Line 1583, Address: 0x130d54, Func Offset: 0x34
	// Line 1585, Address: 0x130d5c, Func Offset: 0x3c
	// Line 1586, Address: 0x130d64, Func Offset: 0x44
	// Line 1587, Address: 0x130d6c, Func Offset: 0x4c
	// Line 1592, Address: 0x130d74, Func Offset: 0x54
	// Line 1594, Address: 0x130d8c, Func Offset: 0x6c
	// Line 1597, Address: 0x130d94, Func Offset: 0x74
	// Line 1599, Address: 0x130da4, Func Offset: 0x84
	// Line 1600, Address: 0x130db0, Func Offset: 0x90
	// Line 1603, Address: 0x130dd8, Func Offset: 0xb8
	// Line 1604, Address: 0x130df4, Func Offset: 0xd4
	// Line 1606, Address: 0x130e0c, Func Offset: 0xec
	// Line 1607, Address: 0x130e28, Func Offset: 0x108
	// Line 1608, Address: 0x130e40, Func Offset: 0x120
	// Line 1611, Address: 0x130e48, Func Offset: 0x128
	// Line 1612, Address: 0x130e64, Func Offset: 0x144
	// Line 1614, Address: 0x130e7c, Func Offset: 0x15c
	// Line 1615, Address: 0x130e90, Func Offset: 0x170
	// Line 1616, Address: 0x130ea8, Func Offset: 0x188
	// Line 1619, Address: 0x130eb0, Func Offset: 0x190
	// Line 1620, Address: 0x130ecc, Func Offset: 0x1ac
	// Line 1622, Address: 0x130ee4, Func Offset: 0x1c4
	// Line 1623, Address: 0x130ef8, Func Offset: 0x1d8
	// Line 1627, Address: 0x130f10, Func Offset: 0x1f0
	// Line 1632, Address: 0x130f20, Func Offset: 0x200
	// Line 1639, Address: 0x130f34, Func Offset: 0x214
	// Line 1641, Address: 0x130f4c, Func Offset: 0x22c
	// Line 1643, Address: 0x130f54, Func Offset: 0x234
	// Line 1644, Address: 0x130f64, Func Offset: 0x244
	// Line 1647, Address: 0x130f78, Func Offset: 0x258
	// Line 1648, Address: 0x130f80, Func Offset: 0x260
	// Line 1650, Address: 0x130f8c, Func Offset: 0x26c
	// Line 1653, Address: 0x130fb4, Func Offset: 0x294
	// Line 1654, Address: 0x130fd0, Func Offset: 0x2b0
	// Line 1656, Address: 0x130fe8, Func Offset: 0x2c8
	// Line 1657, Address: 0x131004, Func Offset: 0x2e4
	// Line 1658, Address: 0x13101c, Func Offset: 0x2fc
	// Line 1661, Address: 0x131024, Func Offset: 0x304
	// Line 1662, Address: 0x131040, Func Offset: 0x320
	// Line 1664, Address: 0x131058, Func Offset: 0x338
	// Line 1665, Address: 0x13106c, Func Offset: 0x34c
	// Line 1666, Address: 0x131084, Func Offset: 0x364
	// Line 1669, Address: 0x13108c, Func Offset: 0x36c
	// Line 1670, Address: 0x1310a8, Func Offset: 0x388
	// Line 1672, Address: 0x1310c0, Func Offset: 0x3a0
	// Line 1673, Address: 0x1310d4, Func Offset: 0x3b4
	// Line 1678, Address: 0x1310ec, Func Offset: 0x3cc
	// Line 1679, Address: 0x131100, Func Offset: 0x3e0
	// Line 1680, Address: 0x13111c, Func Offset: 0x3fc
	// Line 1685, Address: 0x131134, Func Offset: 0x414
	// Line 1687, Address: 0x131144, Func Offset: 0x424
	// Line 1689, Address: 0x131154, Func Offset: 0x434
	// Line 1691, Address: 0x13116c, Func Offset: 0x44c
	// Line 1693, Address: 0x131174, Func Offset: 0x454
	// Line 1694, Address: 0x131184, Func Offset: 0x464
	// Line 1701, Address: 0x131198, Func Offset: 0x478
	// Line 1702, Address: 0x1311a4, Func Offset: 0x484
	// Line 1703, Address: 0x1311b0, Func Offset: 0x490
	// Line 1704, Address: 0x1311c4, Func Offset: 0x4a4
	// Line 1709, Address: 0x1311d4, Func Offset: 0x4b4
	// Line 1716, Address: 0x1311d8, Func Offset: 0x4b8
	// Line 1717, Address: 0x1311e4, Func Offset: 0x4c4
	// Line 1721, Address: 0x1311e8, Func Offset: 0x4c8
	// Line 1722, Address: 0x1311f4, Func Offset: 0x4d4
	// Line 1723, Address: 0x13120c, Func Offset: 0x4ec
	// Line 1725, Address: 0x131214, Func Offset: 0x4f4
	// Line 1727, Address: 0x131230, Func Offset: 0x510
	// Line 1728, Address: 0x131248, Func Offset: 0x528
	// Line 1731, Address: 0x131260, Func Offset: 0x540
	// Line 1732, Address: 0x131264, Func Offset: 0x544
	// Line 1733, Address: 0x131270, Func Offset: 0x550
	// Line 1735, Address: 0x131288, Func Offset: 0x568
	// Line 1738, Address: 0x1312a4, Func Offset: 0x584
	// Line 1740, Address: 0x1312bc, Func Offset: 0x59c
	// Line 1744, Address: 0x1312d0, Func Offset: 0x5b0
	// Line 1745, Address: 0x1312d4, Func Offset: 0x5b4
	// Line 1747, Address: 0x1312e0, Func Offset: 0x5c0
	// Line 1750, Address: 0x1312f8, Func Offset: 0x5d8
	// Line 1753, Address: 0x131314, Func Offset: 0x5f4
	// Line 1754, Address: 0x131320, Func Offset: 0x600
	// Line 1756, Address: 0x131334, Func Offset: 0x614
	// Line 1758, Address: 0x131348, Func Offset: 0x628
	// Line 1759, Address: 0x13134c, Func Offset: 0x62c
	// Line 1760, Address: 0x131358, Func Offset: 0x638
	// Line 1762, Address: 0x131370, Func Offset: 0x650
	// Line 1764, Address: 0x13139c, Func Offset: 0x67c
	// Line 1765, Address: 0x1313a8, Func Offset: 0x688
	// Line 1766, Address: 0x1313bc, Func Offset: 0x69c
	// Line 1768, Address: 0x1313d0, Func Offset: 0x6b0
	// Line 1769, Address: 0x1313dc, Func Offset: 0x6bc
	// Line 1770, Address: 0x1313f0, Func Offset: 0x6d0
	// Line 1772, Address: 0x13141c, Func Offset: 0x6fc
	// Line 1773, Address: 0x131428, Func Offset: 0x708
	// Line 1776, Address: 0x131438, Func Offset: 0x718
	// Line 1778, Address: 0x131448, Func Offset: 0x728
	// Line 1779, Address: 0x131454, Func Offset: 0x734
	// Line 1780, Address: 0x131474, Func Offset: 0x754
	// Line 1781, Address: 0x131494, Func Offset: 0x774
	// Line 1782, Address: 0x131498, Func Offset: 0x778
	// Line 1784, Address: 0x1314ac, Func Offset: 0x78c
	// Line 1786, Address: 0x1314b0, Func Offset: 0x790
	// Line 1792, Address: 0x1314e4, Func Offset: 0x7c4
	// Line 1794, Address: 0x1314ec, Func Offset: 0x7cc
	// Func End, Address: 0x131510, Func Offset: 0x7f0
}

