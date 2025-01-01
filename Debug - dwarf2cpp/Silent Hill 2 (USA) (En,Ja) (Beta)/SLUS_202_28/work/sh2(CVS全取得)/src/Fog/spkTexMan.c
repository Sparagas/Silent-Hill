typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon0;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;
typedef struct spkTexManage;


typedef unsigned short type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef Q_WORDDATA type_4[6];
typedef unsigned int type_5[4];
typedef unsigned short type_6[8];
typedef float type_7[4];
typedef unsigned char type_8[16];
typedef shAttackInfo type_9[66];
typedef int type_10[4];
typedef short type_11[8];
typedef char type_12[16];
typedef unsigned long type_13[2];
typedef int type_14[5];
typedef int type_15[5];
typedef void* type_16[5];

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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct spkTexManage
{
	int Registed_TexNum;
	int Work_Slotid[5];
	int Work_Commandid[5];
	void* pTexMAN[5];
};

shAttackInfo sh2_attack_list[66];
spkTexManage AllUserTexManage;
Q_WORDDATA SyncTexflush[6];
sh2gfw_Env_ctl Env_ctl;

void sh2gfw_Init_spkTexManage();
void sh2gfw_EnQue_spkTexture(void* pTM, int* cid, int* sid);
void sh2gfw_ThrSyncKick_spkDmaKick();

// 
// Start address: 0x1cd0b0
void sh2gfw_Init_spkTexManage()
{
	int i;
	// Line 56, Address: 0x1cd0b0, Func Offset: 0
	// Line 57, Address: 0x1cd0b8, Func Offset: 0x8
	// Line 59, Address: 0x1cd0c4, Func Offset: 0x14
	// Line 61, Address: 0x1cd0dc, Func Offset: 0x2c
	// Line 63, Address: 0x1cd0ec, Func Offset: 0x3c
	// Line 65, Address: 0x1cd0fc, Func Offset: 0x4c
	// Line 67, Address: 0x1cd10c, Func Offset: 0x5c
	// Func End, Address: 0x1cd114, Func Offset: 0x64
}

// 
// Start address: 0x1cd120
void sh2gfw_EnQue_spkTexture(void* pTM, int* cid, int* sid)
{
	int i;
	// Line 80, Address: 0x1cd120, Func Offset: 0
	// Line 84, Address: 0x1cd140, Func Offset: 0x20
	// Line 89, Address: 0x1cd154, Func Offset: 0x34
	// Line 91, Address: 0x1cd168, Func Offset: 0x48
	// Line 93, Address: 0x1cd19c, Func Offset: 0x7c
	// Line 94, Address: 0x1cd1b0, Func Offset: 0x90
	// Line 95, Address: 0x1cd1c4, Func Offset: 0xa4
	// Line 99, Address: 0x1cd1d8, Func Offset: 0xb8
	// Func End, Address: 0x1cd1f4, Func Offset: 0xd4
}

// 
// Start address: 0x1cd200
void sh2gfw_ThrSyncKick_spkDmaKick()
{
	int i;
	void* pTop;
	// Line 121, Address: 0x1cd200, Func Offset: 0
	// Line 127, Address: 0x1cd20c, Func Offset: 0xc
	// Line 128, Address: 0x1cd218, Func Offset: 0x18
	// Line 139, Address: 0x1cd22c, Func Offset: 0x2c
	// Line 143, Address: 0x1cd248, Func Offset: 0x48
	// Line 149, Address: 0x1cd264, Func Offset: 0x64
	// Line 150, Address: 0x1cd270, Func Offset: 0x70
	// Line 151, Address: 0x1cd28c, Func Offset: 0x8c
	// Line 154, Address: 0x1cd2a4, Func Offset: 0xa4
	// Line 157, Address: 0x1cd2b4, Func Offset: 0xb4
	// Line 158, Address: 0x1cd2c8, Func Offset: 0xc8
	// Line 159, Address: 0x1cd2d4, Func Offset: 0xd4
	// Line 162, Address: 0x1cd2e8, Func Offset: 0xe8
	// Line 166, Address: 0x1cd2f4, Func Offset: 0xf4
	// Line 167, Address: 0x1cd300, Func Offset: 0x100
	// Line 168, Address: 0x1cd31c, Func Offset: 0x11c
	// Line 170, Address: 0x1cd334, Func Offset: 0x134
	// Line 172, Address: 0x1cd348, Func Offset: 0x148
	// Func End, Address: 0x1cd35c, Func Offset: 0x15c
}

