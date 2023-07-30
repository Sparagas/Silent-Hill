typedef struct _SH2_SYS;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct sh2gfw_Env_ctl;


typedef unsigned short type_0[4];
typedef unsigned int type_1[8];
typedef unsigned int type_2[4];
typedef unsigned short type_3[8];
typedef float type_4[4];
typedef unsigned char type_5[16];
typedef int type_6[4];
typedef short type_7[8];
typedef char type_8[16];
typedef unsigned long type_9[2];
typedef float type_10[4];
typedef float type_11[4];
typedef float type_12[4][4];

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
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

_SH2_SYS Sh2sys;
sh2gfw_Env_ctl Env_ctl;

int main(int argc, char** argv);
void GameKeyCheck();

// 
// Start address: 0x1a39d0
int main(int argc, char** argv)
{
	// Line 44, Address: 0x1a39d0, Func Offset: 0
	// Line 46, Address: 0x1a39e0, Func Offset: 0x10
	// Line 47, Address: 0x1a39f0, Func Offset: 0x20
	// Line 48, Address: 0x1a39fc, Func Offset: 0x2c
	// Line 49, Address: 0x1a3a04, Func Offset: 0x34
	// Line 51, Address: 0x1a3a0c, Func Offset: 0x3c
	// Line 53, Address: 0x1a3a1c, Func Offset: 0x4c
	// Line 55, Address: 0x1a3a24, Func Offset: 0x54
	// Line 58, Address: 0x1a3a64, Func Offset: 0x94
	// Line 62, Address: 0x1a3a7c, Func Offset: 0xac
	// Line 64, Address: 0x1a3aa0, Func Offset: 0xd0
	// Line 65, Address: 0x1a3aa8, Func Offset: 0xd8
	// Line 66, Address: 0x1a3aec, Func Offset: 0x11c
	// Line 67, Address: 0x1a3afc, Func Offset: 0x12c
	// Line 68, Address: 0x1a3b38, Func Offset: 0x168
	// Line 72, Address: 0x1a3b40, Func Offset: 0x170
	// Line 73, Address: 0x1a3b48, Func Offset: 0x178
	// Line 74, Address: 0x1a3b50, Func Offset: 0x180
	// Line 75, Address: 0x1a3b58, Func Offset: 0x188
	// Line 76, Address: 0x1a3b60, Func Offset: 0x190
	// Line 77, Address: 0x1a3b68, Func Offset: 0x198
	// Line 81, Address: 0x1a3b70, Func Offset: 0x1a0
	// Line 82, Address: 0x1a3b84, Func Offset: 0x1b4
	// Line 83, Address: 0x1a3b8c, Func Offset: 0x1bc
	// Func End, Address: 0x1a3b94, Func Offset: 0x1c4
}

// 
// Start address: 0x1a3ba0
void GameKeyCheck()
{
	// Line 87, Address: 0x1a3ba0, Func Offset: 0
	// Line 88, Address: 0x1a3ba8, Func Offset: 0x8
	// Line 92, Address: 0x1a3bb8, Func Offset: 0x18
	// Line 96, Address: 0x1a3c18, Func Offset: 0x78
	// Line 97, Address: 0x1a3c28, Func Offset: 0x88
	// Line 99, Address: 0x1a3c38, Func Offset: 0x98
	// Line 100, Address: 0x1a3c78, Func Offset: 0xd8
	// Line 101, Address: 0x1a3c8c, Func Offset: 0xec
	// Line 103, Address: 0x1a3c94, Func Offset: 0xf4
	// Func End, Address: 0x1a3ca4, Func Offset: 0x104
}

