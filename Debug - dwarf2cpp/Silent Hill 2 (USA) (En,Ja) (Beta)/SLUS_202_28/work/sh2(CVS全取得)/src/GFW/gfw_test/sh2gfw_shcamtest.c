typedef struct shBattleFight;
typedef struct sh2gfw_Env_ctl;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon0;
typedef union Q_WORDDATA;
typedef struct _VbSCREENINFO;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;


typedef unsigned char type_0[69];
typedef unsigned char type_1[14];
typedef unsigned char type_2[97];
typedef unsigned short type_3[4];
typedef unsigned char type_4[20];
typedef shAttackInfo type_5[66];
typedef unsigned int type_6[4];
typedef unsigned short type_7[8];
typedef float type_8[4];
typedef unsigned char type_9[16];
typedef int type_10[4];
typedef short type_11[8];
typedef char type_12[16];
typedef unsigned long type_13[2];
typedef unsigned char type_14[14];
typedef float type_15[4];
typedef float type_16[4];
typedef float type_17[4][4];

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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_VbSCREENINFO VbScreenInfo;
sh2gfw_Env_ctl Env_ctl;

void sh2gfw_set_ViewScreenM();
void sh2gfw_init_shcamera();
void sh2gfw_test_shcamera_main();

// 
// Start address: 0x1741b0
void sh2gfw_set_ViewScreenM()
{
	// Line 48, Address: 0x1741b0, Func Offset: 0
	// Line 50, Address: 0x1741b8, Func Offset: 0x8
	// Line 51, Address: 0x1741f0, Func Offset: 0x40
	// Line 52, Address: 0x174204, Func Offset: 0x54
	// Line 53, Address: 0x174220, Func Offset: 0x70
	// Line 54, Address: 0x174240, Func Offset: 0x90
	// Line 56, Address: 0x174250, Func Offset: 0xa0
	// Line 57, Address: 0x174258, Func Offset: 0xa8
	// Func End, Address: 0x174268, Func Offset: 0xb8
}

// 
// Start address: 0x174270
void sh2gfw_init_shcamera()
{
	// Line 65, Address: 0x174270, Func Offset: 0
	// Line 67, Address: 0x174278, Func Offset: 0x8
	// Line 70, Address: 0x174280, Func Offset: 0x10
	// Func End, Address: 0x174290, Func Offset: 0x20
}

// 
// Start address: 0x174290
void sh2gfw_test_shcamera_main()
{
	// Line 81, Address: 0x174290, Func Offset: 0
	// Line 98, Address: 0x174298, Func Offset: 0x8
	// Line 102, Address: 0x1742ac, Func Offset: 0x1c
	// Line 103, Address: 0x1742c8, Func Offset: 0x38
	// Line 104, Address: 0x1742e8, Func Offset: 0x58
	// Line 107, Address: 0x1742f0, Func Offset: 0x60
	// Line 108, Address: 0x17430c, Func Offset: 0x7c
	// Line 112, Address: 0x17432c, Func Offset: 0x9c
	// Line 116, Address: 0x174334, Func Offset: 0xa4
	// Line 119, Address: 0x17435c, Func Offset: 0xcc
	// Line 121, Address: 0x174374, Func Offset: 0xe4
	// Line 123, Address: 0x174384, Func Offset: 0xf4
	// Line 124, Address: 0x174394, Func Offset: 0x104
	// Line 125, Address: 0x1743ac, Func Offset: 0x11c
	// Func End, Address: 0x1743bc, Func Offset: 0x12c
}

