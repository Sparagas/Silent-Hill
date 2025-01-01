typedef struct _CL_HITPOLY_HEAD;
typedef struct _shTskTASK;
typedef struct SPACK_OT_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SPACK_ENV_DATA;
typedef struct SubCharacter;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef struct SPACK_STATIC_DATA;
typedef union _anon1;
typedef struct _anon2;
typedef struct _shTskEXECUTE;
typedef struct shSkelton;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon3;
typedef union Q_WORDDATA;
typedef struct _EF_CARTDISCH_TASK;
typedef struct _EF_CD_F4;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shBattleFight;
typedef struct sh2gfw_Env_ctl;
typedef struct _EF_CARTDISCH_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SPACK_DATA;
typedef struct _VbWVSMATRIX;
typedef struct _CL_VHIT_WALL;

typedef void(*type_0)(_shTskTASK*);
typedef void(*type_4)(void*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);

typedef unsigned char type_1[20];
typedef unsigned short type_2[4];
typedef int type_3[4];
typedef float type_5[4];
typedef unsigned char type_6[4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef shAttackInfo type_9[66];
typedef unsigned char type_10[492];
typedef unsigned char type_11[14];
typedef float type_12[4];
typedef float type_13[4][4];
typedef unsigned int type_14[4];
typedef unsigned short type_15[8];
typedef float type_17[4];
typedef float type_18[4][2];
typedef unsigned char type_19[16];
typedef unsigned char type_20[69];
typedef int type_21[4];
typedef short type_23[8];
typedef char type_24[16];
typedef float type_25[4];
typedef unsigned long type_26[2];
typedef float type_27[4];
typedef unsigned char type_28[4];
typedef float type_29[4][4];
typedef int type_30[4][4];
typedef unsigned char type_31[14];
typedef unsigned char type_32[97];
typedef float type_33[4][4];
typedef unsigned char type_34[364];
typedef float type_35[4][4];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
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

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

struct _anon3
{
	float d[4][4];
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

struct _EF_CARTDISCH_TASK
{
	_shTskEXECUTE exe;
	_EF_CARTDISCH_DATA data;
	unsigned char freemem[364];
};

struct _EF_CD_F4
{
	float v[4][4];
	unsigned char rgba[4];
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon4
{
	int spoton;
	float ambcol[4];
	float lightpos[4];
	float lightdir[4];
	float lightcol[4];
	float lightpar[4];
	float wcm[4][4];
};

struct _anon5
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct _EF_CARTDISCH_DATA
{
	float pos[4];
	float mvec[4];
	float rot[4];
	float vrot[4];
	int kind;
	int life;
	int move;
	int reflect;
	float refsurf[4];
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

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
void(*EFCTCartridgeDischarge)(_shTskTASK*);
SPACK_DATA spack;
_VbWVSMATRIX VbWvsMatrix;
_anon4 efCartDrawData;
_anon5 cam0;
sh2gfw_Env_ctl Env_ctl;

void EFCTSetDischargeCartridge(int kind);
void EFCTSetDischargeCartridgeEddie(float* pos);
void EFCTCartridgeDischarge(_shTskTASK* ptr);
void efCartridgeDischargeDisp(_EF_CARTDISCH_TASK* ptr);
void efCartridgeDischargeDel(_EF_CARTDISCH_TASK* ptr);
void efCartridgeDrawCart(_EF_CARTDISCH_DATA* cart);
void efCartridgeDischargeDrawPolyF4(_EF_CD_F4* p);

// 
// Start address: 0x222420
void EFCTSetDischargeCartridge(int kind)
{
	int room;
	float svec[4];
	float pos1[4];
	float vec[4];
	float pos0[4];
	float m0[4][4];
	float rot0[4];
	_EF_CARTDISCH_TASK* ptr;
	// Line 96, Address: 0x222420, Func Offset: 0
	// Line 104, Address: 0x222434, Func Offset: 0x14
	// Line 109, Address: 0x222458, Func Offset: 0x38
	// Line 110, Address: 0x222470, Func Offset: 0x50
	// Line 112, Address: 0x222478, Func Offset: 0x58
	// Line 113, Address: 0x222480, Func Offset: 0x60
	// Line 116, Address: 0x222484, Func Offset: 0x64
	// Line 117, Address: 0x222494, Func Offset: 0x74
	// Line 118, Address: 0x2224a4, Func Offset: 0x84
	// Line 121, Address: 0x2224d0, Func Offset: 0xb0
	// Line 122, Address: 0x2224f8, Func Offset: 0xd8
	// Line 123, Address: 0x222520, Func Offset: 0x100
	// Line 124, Address: 0x222530, Func Offset: 0x110
	// Line 125, Address: 0x222538, Func Offset: 0x118
	// Line 128, Address: 0x222540, Func Offset: 0x120
	// Line 129, Address: 0x222558, Func Offset: 0x138
	// Line 130, Address: 0x22257c, Func Offset: 0x15c
	// Line 131, Address: 0x22258c, Func Offset: 0x16c
	// Line 132, Address: 0x222594, Func Offset: 0x174
	// Line 135, Address: 0x22259c, Func Offset: 0x17c
	// Line 136, Address: 0x2225b4, Func Offset: 0x194
	// Line 137, Address: 0x2225d8, Func Offset: 0x1b8
	// Line 138, Address: 0x2225e8, Func Offset: 0x1c8
	// Line 143, Address: 0x2225f0, Func Offset: 0x1d0
	// Line 144, Address: 0x222600, Func Offset: 0x1e0
	// Line 147, Address: 0x22260c, Func Offset: 0x1ec
	// Line 148, Address: 0x22262c, Func Offset: 0x20c
	// Line 149, Address: 0x222630, Func Offset: 0x210
	// Line 150, Address: 0x222650, Func Offset: 0x230
	// Line 153, Address: 0x222658, Func Offset: 0x238
	// Line 155, Address: 0x222664, Func Offset: 0x244
	// Line 156, Address: 0x2226b4, Func Offset: 0x294
	// Line 157, Address: 0x222700, Func Offset: 0x2e0
	// Line 158, Address: 0x22274c, Func Offset: 0x32c
	// Line 161, Address: 0x222754, Func Offset: 0x334
	// Line 162, Address: 0x222794, Func Offset: 0x374
	// Line 163, Address: 0x222798, Func Offset: 0x378
	// Line 164, Address: 0x2227dc, Func Offset: 0x3bc
	// Line 167, Address: 0x222820, Func Offset: 0x400
	// Line 168, Address: 0x222828, Func Offset: 0x408
	// Line 169, Address: 0x222850, Func Offset: 0x430
	// Line 170, Address: 0x22285c, Func Offset: 0x43c
	// Line 172, Address: 0x222890, Func Offset: 0x470
	// Line 173, Address: 0x2228b4, Func Offset: 0x494
	// Line 174, Address: 0x2228bc, Func Offset: 0x49c
	// Line 179, Address: 0x2228c0, Func Offset: 0x4a0
	// Line 180, Address: 0x2228c8, Func Offset: 0x4a8
	// Line 181, Address: 0x2228cc, Func Offset: 0x4ac
	// Line 184, Address: 0x2228e4, Func Offset: 0x4c4
	// Line 185, Address: 0x2228e8, Func Offset: 0x4c8
	// Line 187, Address: 0x2228f0, Func Offset: 0x4d0
	// Line 188, Address: 0x2228f4, Func Offset: 0x4d4
	// Line 189, Address: 0x222900, Func Offset: 0x4e0
	// Line 191, Address: 0x222908, Func Offset: 0x4e8
	// Line 192, Address: 0x222910, Func Offset: 0x4f0
	// Line 197, Address: 0x22291c, Func Offset: 0x4fc
	// Func End, Address: 0x222934, Func Offset: 0x514
}

// 
// Start address: 0x222940
void EFCTSetDischargeCartridgeEddie(float* pos)
{
	int i;
	float svec[4];
	float vec[4];
	float m0[4][4];
	float rot0[4];
	_EF_CARTDISCH_TASK* ptr;
	// Line 214, Address: 0x222940, Func Offset: 0
	// Line 222, Address: 0x222958, Func Offset: 0x18
	// Line 224, Address: 0x222964, Func Offset: 0x24
	// Line 225, Address: 0x22297c, Func Offset: 0x3c
	// Line 227, Address: 0x222984, Func Offset: 0x44
	// Line 228, Address: 0x22298c, Func Offset: 0x4c
	// Line 230, Address: 0x222990, Func Offset: 0x50
	// Line 231, Address: 0x222998, Func Offset: 0x58
	// Line 235, Address: 0x2229dc, Func Offset: 0x9c
	// Line 236, Address: 0x2229ec, Func Offset: 0xac
	// Line 239, Address: 0x2229f8, Func Offset: 0xb8
	// Line 240, Address: 0x222a18, Func Offset: 0xd8
	// Line 241, Address: 0x222a1c, Func Offset: 0xdc
	// Line 242, Address: 0x222a3c, Func Offset: 0xfc
	// Line 244, Address: 0x222a44, Func Offset: 0x104
	// Line 245, Address: 0x222a84, Func Offset: 0x144
	// Line 246, Address: 0x222a88, Func Offset: 0x148
	// Line 247, Address: 0x222ac4, Func Offset: 0x184
	// Line 248, Address: 0x222acc, Func Offset: 0x18c
	// Line 249, Address: 0x222af4, Func Offset: 0x1b4
	// Line 250, Address: 0x222b00, Func Offset: 0x1c0
	// Line 252, Address: 0x222b34, Func Offset: 0x1f4
	// Line 253, Address: 0x222b58, Func Offset: 0x218
	// Line 254, Address: 0x222b60, Func Offset: 0x220
	// Line 255, Address: 0x222b64, Func Offset: 0x224
	// Line 257, Address: 0x222b68, Func Offset: 0x228
	// Line 258, Address: 0x222b7c, Func Offset: 0x23c
	// Func End, Address: 0x222b98, Func Offset: 0x258
}

// 
// Start address: 0x222ba0
void EFCTCartridgeDischarge(_shTskTASK* ptr)
{
	// Line 275, Address: 0x222ba0, Func Offset: 0
	// Line 276, Address: 0x222ba8, Func Offset: 0x8
	// Line 279, Address: 0x222bc8, Func Offset: 0x28
	// Line 280, Address: 0x222bd0, Func Offset: 0x30
	// Line 283, Address: 0x222bd8, Func Offset: 0x38
	// Line 286, Address: 0x222be0, Func Offset: 0x40
	// Func End, Address: 0x222bf0, Func Offset: 0x50
}

// 
// Start address: 0x222bf0
void efCartridgeDischargeDisp(_EF_CARTDISCH_TASK* ptr)
{
	_CL_HITPOLY_COLUMN* col;
	float m0[4][4];
	float vec[4];
	float ang;
	float m0[4][4];
	float npos[4];
	float ang;
	float nml[4];
	_CL_VHIT_RESULT res;
	float oldpos[4];
	float mv[4];
	// Line 303, Address: 0x222bf0, Func Offset: 0
	// Line 308, Address: 0x222c00, Func Offset: 0x10
	// Line 311, Address: 0x222c10, Func Offset: 0x20
	// Line 312, Address: 0x222c1c, Func Offset: 0x2c
	// Line 313, Address: 0x222c40, Func Offset: 0x50
	// Line 316, Address: 0x222c54, Func Offset: 0x64
	// Line 319, Address: 0x222c78, Func Offset: 0x88
	// Line 320, Address: 0x222c9c, Func Offset: 0xac
	// Line 324, Address: 0x222cb0, Func Offset: 0xc0
	// Line 325, Address: 0x222cc8, Func Offset: 0xd8
	// Line 327, Address: 0x222cd8, Func Offset: 0xe8
	// Line 329, Address: 0x222d00, Func Offset: 0x110
	// Line 330, Address: 0x222d0c, Func Offset: 0x11c
	// Line 331, Address: 0x222d24, Func Offset: 0x134
	// Line 332, Address: 0x222d3c, Func Offset: 0x14c
	// Line 335, Address: 0x222d48, Func Offset: 0x158
	// Line 343, Address: 0x222d98, Func Offset: 0x1a8
	// Line 349, Address: 0x222db4, Func Offset: 0x1c4
	// Line 352, Address: 0x222dbc, Func Offset: 0x1cc
	// Line 353, Address: 0x222dc0, Func Offset: 0x1d0
	// Line 354, Address: 0x222dc4, Func Offset: 0x1d4
	// Line 355, Address: 0x222dc8, Func Offset: 0x1d8
	// Line 356, Address: 0x222dcc, Func Offset: 0x1dc
	// Line 360, Address: 0x222dd0, Func Offset: 0x1e0
	// Line 361, Address: 0x222de4, Func Offset: 0x1f4
	// Line 365, Address: 0x222df4, Func Offset: 0x204
	// Line 367, Address: 0x222e1c, Func Offset: 0x22c
	// Line 369, Address: 0x222e3c, Func Offset: 0x24c
	// Line 371, Address: 0x222e64, Func Offset: 0x274
	// Line 372, Address: 0x222e70, Func Offset: 0x280
	// Line 373, Address: 0x222e88, Func Offset: 0x298
	// Line 374, Address: 0x222ea0, Func Offset: 0x2b0
	// Line 375, Address: 0x222eac, Func Offset: 0x2bc
	// Line 376, Address: 0x222ec4, Func Offset: 0x2d4
	// Line 379, Address: 0x222ecc, Func Offset: 0x2dc
	// Line 380, Address: 0x222ed0, Func Offset: 0x2e0
	// Line 381, Address: 0x222ed4, Func Offset: 0x2e4
	// Line 382, Address: 0x222ed8, Func Offset: 0x2e8
	// Line 383, Address: 0x222edc, Func Offset: 0x2ec
	// Line 385, Address: 0x222ee0, Func Offset: 0x2f0
	// Line 392, Address: 0x222ee8, Func Offset: 0x2f8
	// Line 393, Address: 0x222ef0, Func Offset: 0x300
	// Line 394, Address: 0x222ef8, Func Offset: 0x308
	// Line 397, Address: 0x222f10, Func Offset: 0x320
	// Line 398, Address: 0x222f38, Func Offset: 0x348
	// Line 399, Address: 0x222f48, Func Offset: 0x358
	// Line 400, Address: 0x222f78, Func Offset: 0x388
	// Line 401, Address: 0x222f80, Func Offset: 0x390
	// Line 402, Address: 0x222f88, Func Offset: 0x398
	// Line 404, Address: 0x222f94, Func Offset: 0x3a4
	// Line 405, Address: 0x222f9c, Func Offset: 0x3ac
	// Line 412, Address: 0x222fa8, Func Offset: 0x3b8
	// Line 413, Address: 0x222fac, Func Offset: 0x3bc
	// Line 414, Address: 0x222fc8, Func Offset: 0x3d8
	// Line 415, Address: 0x222fd0, Func Offset: 0x3e0
	// Line 418, Address: 0x222fe8, Func Offset: 0x3f8
	// Line 419, Address: 0x223010, Func Offset: 0x420
	// Line 420, Address: 0x223020, Func Offset: 0x430
	// Line 421, Address: 0x223050, Func Offset: 0x460
	// Line 422, Address: 0x223058, Func Offset: 0x468
	// Line 424, Address: 0x223060, Func Offset: 0x470
	// Line 429, Address: 0x22307c, Func Offset: 0x48c
	// Line 430, Address: 0x223088, Func Offset: 0x498
	// Line 431, Address: 0x223094, Func Offset: 0x4a4
	// Line 434, Address: 0x2230a0, Func Offset: 0x4b0
	// Line 435, Address: 0x2230ac, Func Offset: 0x4bc
	// Func End, Address: 0x2230c0, Func Offset: 0x4d0
}

// 
// Start address: 0x2230c0
void efCartridgeDischargeDel(_EF_CARTDISCH_TASK* ptr)
{
	// Line 452, Address: 0x2230c0, Func Offset: 0
	// Line 454, Address: 0x2230c8, Func Offset: 0x8
	// Line 455, Address: 0x2230d0, Func Offset: 0x10
	// Func End, Address: 0x2230e0, Func Offset: 0x20
}

// 
// Start address: 0x2230e0
void efCartridgeDrawCart(_EF_CARTDISCH_DATA* cart)
{
	float rl;
	float br;
	float m2[4][4];
	float m1[4][4];
	float m0[4][4];
	float v1[4];
	float v0[4];
	int dang;
	float v[4][4];
	_EF_CD_F4 f4;
	// Line 472, Address: 0x2230e0, Func Offset: 0
	// Line 481, Address: 0x2230fc, Func Offset: 0x1c
	// Line 482, Address: 0x22310c, Func Offset: 0x2c
	// Line 483, Address: 0x22311c, Func Offset: 0x3c
	// Line 485, Address: 0x22313c, Func Offset: 0x5c
	// Line 493, Address: 0x223164, Func Offset: 0x84
	// Line 494, Address: 0x22317c, Func Offset: 0x9c
	// Line 497, Address: 0x22319c, Func Offset: 0xbc
	// Line 498, Address: 0x2231bc, Func Offset: 0xdc
	// Line 499, Address: 0x2231fc, Func Offset: 0x11c
	// Line 502, Address: 0x223238, Func Offset: 0x158
	// Line 504, Address: 0x223254, Func Offset: 0x174
	// Line 507, Address: 0x223284, Func Offset: 0x1a4
	// Line 508, Address: 0x22328c, Func Offset: 0x1ac
	// Line 509, Address: 0x223294, Func Offset: 0x1b4
	// Line 512, Address: 0x22329c, Func Offset: 0x1bc
	// Line 513, Address: 0x2232a4, Func Offset: 0x1c4
	// Line 514, Address: 0x2232ac, Func Offset: 0x1cc
	// Line 517, Address: 0x2232b4, Func Offset: 0x1d4
	// Line 518, Address: 0x2232bc, Func Offset: 0x1dc
	// Line 522, Address: 0x2232c4, Func Offset: 0x1e4
	// Line 523, Address: 0x2232cc, Func Offset: 0x1ec
	// Line 524, Address: 0x2232d0, Func Offset: 0x1f0
	// Line 525, Address: 0x2232d4, Func Offset: 0x1f4
	// Line 527, Address: 0x2232d8, Func Offset: 0x1f8
	// Line 528, Address: 0x2232dc, Func Offset: 0x1fc
	// Line 529, Address: 0x2232e0, Func Offset: 0x200
	// Line 530, Address: 0x2232e4, Func Offset: 0x204
	// Line 532, Address: 0x2232e8, Func Offset: 0x208
	// Line 533, Address: 0x2232ec, Func Offset: 0x20c
	// Line 534, Address: 0x2232f0, Func Offset: 0x210
	// Line 535, Address: 0x2232f4, Func Offset: 0x214
	// Line 537, Address: 0x2232f8, Func Offset: 0x218
	// Line 538, Address: 0x223300, Func Offset: 0x220
	// Line 539, Address: 0x223308, Func Offset: 0x228
	// Line 540, Address: 0x223310, Func Offset: 0x230
	// Line 541, Address: 0x223318, Func Offset: 0x238
	// Line 542, Address: 0x223340, Func Offset: 0x260
	// Line 543, Address: 0x223378, Func Offset: 0x298
	// Line 546, Address: 0x2233a4, Func Offset: 0x2c4
	// Line 548, Address: 0x2233b0, Func Offset: 0x2d0
	// Line 549, Address: 0x2233d4, Func Offset: 0x2f4
	// Line 550, Address: 0x223408, Func Offset: 0x328
	// Line 555, Address: 0x223430, Func Offset: 0x350
	// Line 556, Address: 0x223434, Func Offset: 0x354
	// Line 557, Address: 0x223438, Func Offset: 0x358
	// Line 558, Address: 0x223440, Func Offset: 0x360
	// Line 559, Address: 0x223444, Func Offset: 0x364
	// Line 561, Address: 0x223450, Func Offset: 0x370
	// Line 562, Address: 0x223478, Func Offset: 0x398
	// Line 563, Address: 0x2234b0, Func Offset: 0x3d0
	// Line 564, Address: 0x2234e4, Func Offset: 0x404
	// Line 565, Address: 0x2234ec, Func Offset: 0x40c
	// Line 566, Address: 0x2234f4, Func Offset: 0x414
	// Line 567, Address: 0x2234f8, Func Offset: 0x418
	// Line 569, Address: 0x2234fc, Func Offset: 0x41c
	// Line 570, Address: 0x223520, Func Offset: 0x440
	// Line 571, Address: 0x223560, Func Offset: 0x480
	// Line 572, Address: 0x223594, Func Offset: 0x4b4
	// Line 573, Address: 0x22359c, Func Offset: 0x4bc
	// Line 574, Address: 0x2235a4, Func Offset: 0x4c4
	// Line 575, Address: 0x2235a8, Func Offset: 0x4c8
	// Line 577, Address: 0x2235ac, Func Offset: 0x4cc
	// Line 578, Address: 0x2235e0, Func Offset: 0x500
	// Line 579, Address: 0x223610, Func Offset: 0x530
	// Line 580, Address: 0x223640, Func Offset: 0x560
	// Line 582, Address: 0x223670, Func Offset: 0x590
	// Line 584, Address: 0x223678, Func Offset: 0x598
	// Line 586, Address: 0x223684, Func Offset: 0x5a4
	// Line 587, Address: 0x2236b8, Func Offset: 0x5d8
	// Line 588, Address: 0x2236e8, Func Offset: 0x608
	// Line 589, Address: 0x223718, Func Offset: 0x638
	// Line 591, Address: 0x223748, Func Offset: 0x668
	// Line 594, Address: 0x223750, Func Offset: 0x670
	// Line 595, Address: 0x22375c, Func Offset: 0x67c
	// Line 596, Address: 0x223768, Func Offset: 0x688
	// Line 597, Address: 0x223774, Func Offset: 0x694
	// Line 599, Address: 0x223784, Func Offset: 0x6a4
	// Line 600, Address: 0x22378c, Func Offset: 0x6ac
	// Func End, Address: 0x2237ac, Func Offset: 0x6cc
}

// 
// Start address: 0x2237b0
void efCartridgeDischargeDrawPolyF4(_EF_CD_F4* p)
{
	float perc;
	float para;
	float perc;
	float w;
	unsigned char rgba[4];
	unsigned char fog;
	int i;
	int sp[4][4];
	float z;
	float q;
	// Line 603, Address: 0x2237b0, Func Offset: 0
	// Line 604, Address: 0x2237cc, Func Offset: 0x1c
	// Line 613, Address: 0x2237d4, Func Offset: 0x24
	// Line 615, Address: 0x2237e0, Func Offset: 0x30
	// Line 622, Address: 0x223814, Func Offset: 0x64
	// Line 624, Address: 0x223824, Func Offset: 0x74
	// Line 626, Address: 0x223894, Func Offset: 0xe4
	// Line 631, Address: 0x2238b4, Func Offset: 0x104
	// Line 638, Address: 0x2238e4, Func Offset: 0x134
	// Line 640, Address: 0x2238f0, Func Offset: 0x140
	// Line 641, Address: 0x22394c, Func Offset: 0x19c
	// Line 642, Address: 0x223978, Func Offset: 0x1c8
	// Line 643, Address: 0x223988, Func Offset: 0x1d8
	// Line 644, Address: 0x22399c, Func Offset: 0x1ec
	// Line 649, Address: 0x2239a4, Func Offset: 0x1f4
	// Line 651, Address: 0x2239b0, Func Offset: 0x200
	// Line 652, Address: 0x2239d4, Func Offset: 0x224
	// Line 653, Address: 0x223a34, Func Offset: 0x284
	// Line 654, Address: 0x223a44, Func Offset: 0x294
	// Line 655, Address: 0x223a54, Func Offset: 0x2a4
	// Line 659, Address: 0x223a58, Func Offset: 0x2a8
	// Line 660, Address: 0x223a74, Func Offset: 0x2c4
	// Line 661, Address: 0x223ac4, Func Offset: 0x314
	// Line 662, Address: 0x223b04, Func Offset: 0x354
	// Line 663, Address: 0x223b3c, Func Offset: 0x38c
	// Line 664, Address: 0x223b74, Func Offset: 0x3c4
	// Line 665, Address: 0x223bac, Func Offset: 0x3fc
	// Func End, Address: 0x223bcc, Func Offset: 0x41c
}

