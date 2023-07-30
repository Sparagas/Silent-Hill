typedef struct _anon0;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;


typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned long type_7[2];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[4][4];
typedef unsigned short type_11[4];

struct _anon0
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

sh2gfw_Env_ctl Env_ctl;

void SetVu0ViewScreenClipMatrix(float view_screen[4], float view_clip[4], float clip_screen[4], float* clip_vol, float scrz, float ax, float ay, float cx, float cy, float zmin, float zmax, float nearz, float farz);

// 
// Start address: 0x1726e0
void SetVu0ViewScreenClipMatrix(float view_screen[4], float view_clip[4], float clip_screen[4], float* clip_vol, float scrz, float ax, float ay, float cx, float cy, float zmin, float zmax, float nearz, float farz)
{
	float mt[4][4];
	float gsy;
	float gsx;
	float cz;
	float az;
	// Line 166, Address: 0x1726e0, Func Offset: 0
	// Line 171, Address: 0x172754, Func Offset: 0x74
	// Line 172, Address: 0x172760, Func Offset: 0x80
	// Line 174, Address: 0x17276c, Func Offset: 0x8c
	// Line 175, Address: 0x172788, Func Offset: 0xa8
	// Line 181, Address: 0x1727b0, Func Offset: 0xd0
	// Line 182, Address: 0x1727b8, Func Offset: 0xd8
	// Line 183, Address: 0x1727c0, Func Offset: 0xe0
	// Line 184, Address: 0x1727c8, Func Offset: 0xe8
	// Line 190, Address: 0x1727d4, Func Offset: 0xf4
	// Line 191, Address: 0x1727e0, Func Offset: 0x100
	// Line 192, Address: 0x1727f0, Func Offset: 0x110
	// Line 193, Address: 0x172800, Func Offset: 0x120
	// Line 200, Address: 0x172814, Func Offset: 0x134
	// Line 201, Address: 0x172820, Func Offset: 0x140
	// Line 202, Address: 0x17283c, Func Offset: 0x15c
	// Line 203, Address: 0x172848, Func Offset: 0x168
	// Line 204, Address: 0x172858, Func Offset: 0x178
	// Line 205, Address: 0x172870, Func Offset: 0x190
	// Line 211, Address: 0x17287c, Func Offset: 0x19c
	// Line 212, Address: 0x172888, Func Offset: 0x1a8
	// Line 213, Address: 0x172898, Func Offset: 0x1b8
	// Line 214, Address: 0x1728a8, Func Offset: 0x1c8
	// Line 215, Address: 0x1728c0, Func Offset: 0x1e0
	// Line 216, Address: 0x1728cc, Func Offset: 0x1ec
	// Line 218, Address: 0x1728d4, Func Offset: 0x1f4
	// Line 221, Address: 0x1728dc, Func Offset: 0x1fc
	// Func End, Address: 0x172928, Func Offset: 0x248
}

