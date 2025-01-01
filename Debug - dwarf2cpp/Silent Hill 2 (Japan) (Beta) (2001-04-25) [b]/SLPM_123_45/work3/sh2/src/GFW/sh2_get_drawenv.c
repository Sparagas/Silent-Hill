typedef struct sh2gfw_SPOTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct shBattleFight;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shBattleShot;
typedef struct sh2gfw_Env_ctl;
typedef struct shAttackInfo;
typedef union _anon0;


typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef shAttackInfo type_7[46];
typedef unsigned long type_8[2];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4][4];
typedef unsigned short type_12[4];

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shBattleShot
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

shAttackInfo sh2_attack_list[46];
float shEyeDirVec[4];
sh2gfw_Env_ctl Env_ctl;

void sh2gfw_Set_EyeDir();
void sh2gde_Get_EyeDir(float svt[4]);
void kari_sh2gde_getspotParams(float spotpos[4], float spotdir[4], float decayparms[4]);
void sh2gde_getspotKTParams(float spotpos[4], float spotdir[4], float spotcol[4], float decayparms[4]);
void sh2gde_getCameraDir(float cameradir[4]);
void sh2gde_get_spotposdir(float* pos, float* dir);

// 
// Start address: 0x17e470
void sh2gfw_Set_EyeDir()
{
	float tmp[4];
	// Line 44, Address: 0x17e470, Func Offset: 0
	// Line 46, Address: 0x17e478, Func Offset: 0x8
	// Line 47, Address: 0x17e484, Func Offset: 0x14
	// Line 48, Address: 0x17e494, Func Offset: 0x24
	// Line 49, Address: 0x17e4b0, Func Offset: 0x40
	// Line 50, Address: 0x17e4c8, Func Offset: 0x58
	// Func End, Address: 0x17e4d8, Func Offset: 0x68
}

// 
// Start address: 0x17e4e0
void sh2gde_Get_EyeDir(float svt[4])
{
	// Line 55, Address: 0x17e4e0, Func Offset: 0
	// Line 57, Address: 0x17e4ec, Func Offset: 0xc
	// Line 58, Address: 0x17e500, Func Offset: 0x20
	// Func End, Address: 0x17e510, Func Offset: 0x30
}

// 
// Start address: 0x17e510
void kari_sh2gde_getspotParams(float spotpos[4], float spotdir[4], float decayparms[4])
{
	float tmp[4];
	// Line 70, Address: 0x17e510, Func Offset: 0
	// Line 75, Address: 0x17e524, Func Offset: 0x14
	// Line 88, Address: 0x17e534, Func Offset: 0x24
	// Line 89, Address: 0x17e548, Func Offset: 0x38
	// Line 92, Address: 0x17e554, Func Offset: 0x44
	// Line 95, Address: 0x17e584, Func Offset: 0x74
	// Line 97, Address: 0x17e590, Func Offset: 0x80
	// Line 99, Address: 0x17e5a0, Func Offset: 0x90
	// Func End, Address: 0x17e5b0, Func Offset: 0xa0
}

// 
// Start address: 0x17e5b0
void sh2gde_getspotKTParams(float spotpos[4], float spotdir[4], float spotcol[4], float decayparms[4])
{
	float tmp[4];
	float dir_vec[4];
	// Line 112, Address: 0x17e5b0, Func Offset: 0
	// Line 115, Address: 0x17e5c8, Func Offset: 0x18
	// Line 118, Address: 0x17e5dc, Func Offset: 0x2c
	// Line 119, Address: 0x17e5f0, Func Offset: 0x40
	// Line 123, Address: 0x17e600, Func Offset: 0x50
	// Line 124, Address: 0x17e614, Func Offset: 0x64
	// Line 125, Address: 0x17e620, Func Offset: 0x70
	// Line 126, Address: 0x17e62c, Func Offset: 0x7c
	// Line 134, Address: 0x17e638, Func Offset: 0x88
	// Line 135, Address: 0x17e648, Func Offset: 0x98
	// Line 136, Address: 0x17e65c, Func Offset: 0xac
	// Func End, Address: 0x17e66c, Func Offset: 0xbc
}

// 
// Start address: 0x17e670
void sh2gde_getCameraDir(float cameradir[4])
{
	// Line 147, Address: 0x17e670, Func Offset: 0
	// Line 163, Address: 0x17e67c, Func Offset: 0xc
	// Line 164, Address: 0x17e688, Func Offset: 0x18
	// Func End, Address: 0x17e698, Func Offset: 0x28
}

// 
// Start address: 0x17e6a0
void sh2gde_get_spotposdir(float* pos, float* dir)
{
	// Line 173, Address: 0x17e6a0, Func Offset: 0
	// Line 198, Address: 0x17e6b0, Func Offset: 0x10
	// Line 203, Address: 0x17e6c0, Func Offset: 0x20
	// Func End, Address: 0x17e6d0, Func Offset: 0x30
}

