typedef union DB_WATCH_POINT;
typedef struct _SH2_SYS;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;


typedef unsigned short type_0[4];
typedef char type_1[1];
typedef char type_2[2];
typedef char type_3[4];
typedef char type_4[8];
typedef char type_5[16];
typedef unsigned int type_6[8];
typedef char type_7[32];
typedef char type_8[64];
typedef char type_9[128];
typedef char type_10[256];
typedef char type_11[512];
typedef char type_12[1024];
typedef char type_13[2048];
typedef char type_14[4096];
typedef char type_15[8192];
typedef char type_16[16384];
typedef char type_17[32768];
typedef float type_18[4];
typedef char type_19[65536];
typedef float type_20[4];
typedef char type_21[131072];
typedef float type_22[4][4];
typedef unsigned int type_23[4];
typedef char type_24[262144];
typedef unsigned short type_25[8];
typedef char type_26[524288];
typedef float type_27[4];
typedef unsigned char type_28[16];
typedef char type_29[1048576];
typedef int type_30[4];
typedef char type_31[2097152];
typedef short type_32[8];
typedef char type_33[4194304];
typedef char type_34[16];
typedef char type_35[8388608];
typedef unsigned long type_36[2];
typedef char type_37[16777216];
typedef char type_38[33554432];
typedef char type_39[67108864];

union DB_WATCH_POINT
{
	char code0x00000001[1];
	char code0x00000002[2];
	char code0x00000004[4];
	char code0x00000008[8];
	char code0x00000010[16];
	char code0x00000020[32];
	char code0x00000040[64];
	char code0x00000080[128];
	char code0x00000100[256];
	char code0x00000200[512];
	char code0x00000400[1024];
	char code0x00000800[2048];
	char code0x00001000[4096];
	char code0x00002000[8192];
	char code0x00004000[16384];
	char code0x00008000[32768];
	char code0x00010000[65536];
	char code0x00020000[131072];
	char code0x00040000[262144];
	char code0x00080000[524288];
	char code0x00100000[1048576];
	char code0x00200000[2097152];
	char code0x00400000[4194304];
	char code0x00800000[8388608];
	char code0x01000000[16777216];
	char code0x02000000[33554432];
	char code0x04000000[67108864];
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

_SH2_SYS Sh2sys;
DB_WATCH_POINT* db_watch_point;
sh2gfw_Env_ctl Env_ctl;

int main(int argc, char** argv);
void GameKeyCheck();

// 
// Start address: 0x19f2f0
int main(int argc, char** argv)
{
	int step;
	int db_test_dvd;
	// Line 85, Address: 0x19f2f0, Func Offset: 0
	// Line 90, Address: 0x19f308, Func Offset: 0x18
	// Line 91, Address: 0x19f314, Func Offset: 0x24
	// Line 92, Address: 0x19f320, Func Offset: 0x30
	// Line 93, Address: 0x19f328, Func Offset: 0x38
	// Line 94, Address: 0x19f33c, Func Offset: 0x4c
	// Line 95, Address: 0x19f344, Func Offset: 0x54
	// Line 96, Address: 0x19f348, Func Offset: 0x58
	// Line 97, Address: 0x19f34c, Func Offset: 0x5c
	// Line 98, Address: 0x19f358, Func Offset: 0x68
	// Line 99, Address: 0x19f360, Func Offset: 0x70
	// Line 109, Address: 0x19f368, Func Offset: 0x78
	// Line 111, Address: 0x19f378, Func Offset: 0x88
	// Line 113, Address: 0x19f384, Func Offset: 0x94
	// Line 118, Address: 0x19f394, Func Offset: 0xa4
	// Line 123, Address: 0x19f3ac, Func Offset: 0xbc
	// Line 127, Address: 0x19f3b4, Func Offset: 0xc4
	// Line 139, Address: 0x19f3c0, Func Offset: 0xd0
	// Line 145, Address: 0x19f400, Func Offset: 0x110
	// Line 148, Address: 0x19f40c, Func Offset: 0x11c
	// Line 149, Address: 0x19f414, Func Offset: 0x124
	// Line 150, Address: 0x19f424, Func Offset: 0x134
	// Line 154, Address: 0x19f458, Func Offset: 0x168
	// Line 155, Address: 0x19f468, Func Offset: 0x178
	// Line 156, Address: 0x19f478, Func Offset: 0x188
	// Line 157, Address: 0x19f484, Func Offset: 0x194
	// Line 158, Address: 0x19f4c8, Func Offset: 0x1d8
	// Line 160, Address: 0x19f4f0, Func Offset: 0x200
	// Line 161, Address: 0x19f528, Func Offset: 0x238
	// Line 169, Address: 0x19f530, Func Offset: 0x240
	// Line 172, Address: 0x19f56c, Func Offset: 0x27c
	// Line 173, Address: 0x19f570, Func Offset: 0x280
	// Line 174, Address: 0x19f580, Func Offset: 0x290
	// Line 178, Address: 0x19f588, Func Offset: 0x298
	// Line 179, Address: 0x19f590, Func Offset: 0x2a0
	// Line 180, Address: 0x19f598, Func Offset: 0x2a8
	// Line 181, Address: 0x19f5a8, Func Offset: 0x2b8
	// Line 182, Address: 0x19f5b0, Func Offset: 0x2c0
	// Line 183, Address: 0x19f5c0, Func Offset: 0x2d0
	// Line 184, Address: 0x19f5c8, Func Offset: 0x2d8
	// Line 185, Address: 0x19f5d0, Func Offset: 0x2e0
	// Line 189, Address: 0x19f5d8, Func Offset: 0x2e8
	// Line 190, Address: 0x19f5e8, Func Offset: 0x2f8
	// Line 192, Address: 0x19f5fc, Func Offset: 0x30c
	// Line 193, Address: 0x19f60c, Func Offset: 0x31c
	// Func End, Address: 0x19f614, Func Offset: 0x324
}

// 
// Start address: 0x19f620
void GameKeyCheck()
{
	// Line 197, Address: 0x19f620, Func Offset: 0
	// Line 198, Address: 0x19f628, Func Offset: 0x8
	// Line 202, Address: 0x19f638, Func Offset: 0x18
	// Line 206, Address: 0x19f698, Func Offset: 0x78
	// Line 207, Address: 0x19f6a8, Func Offset: 0x88
	// Line 215, Address: 0x19f6b8, Func Offset: 0x98
	// Line 217, Address: 0x19f6fc, Func Offset: 0xdc
	// Line 218, Address: 0x19f710, Func Offset: 0xf0
	// Line 220, Address: 0x19f718, Func Offset: 0xf8
	// Func End, Address: 0x19f728, Func Offset: 0x108
}

