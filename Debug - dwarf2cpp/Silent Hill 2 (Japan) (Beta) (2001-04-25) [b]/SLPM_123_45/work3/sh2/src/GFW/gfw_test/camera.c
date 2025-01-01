typedef struct _anon0;
typedef struct sh2gfw_Env_ctl;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union Q_WORDDATA;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef unsigned short type_3[4];
typedef unsigned int type_4[4];
typedef unsigned short type_5[8];
typedef float type_6[4];
typedef unsigned char type_7[16];
typedef int type_8[4];
typedef short type_9[8];
typedef char type_10[16];
typedef unsigned long type_11[2];

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

sh2gfw_Env_ctl Env_ctl;

void sceVu0RotCameraMatrix(float world_view[4], float* roty, float* rotz);
void sh_Vu0CameraMatrix(float wvm[4], float* p, float* zd, float* yd);
void SetVu0ViewScreenClipMatrix(float view_screen[4], float view_clip[4], float clip_screen[4], float* clip_vol, float scrz, float ax, float ay, float cx, float cy, float zmin, float zmax, float nearz, float farz);
void Set_CameraScreenMatrixPams(_anon0* cam, float scrz, float ax, float ay, float cx, float cy, float zmin, float zmax, float nearz, float farz);

// 
// Start address: 0x177110
void sceVu0RotCameraMatrix(float world_view[4], float* roty, float* rotz)
{
	float position[4];
	float vertical[4];
	float direction[4];
	float work[4][4];
	// Line 38, Address: 0x177110, Func Offset: 0
	// Line 44, Address: 0x177124, Func Offset: 0x14
	// Line 45, Address: 0x177130, Func Offset: 0x20
	// Line 46, Address: 0x177148, Func Offset: 0x38
	// Line 47, Address: 0x177160, Func Offset: 0x50
	// Line 49, Address: 0x177178, Func Offset: 0x68
	// Line 50, Address: 0x177190, Func Offset: 0x80
	// Line 52, Address: 0x1771a8, Func Offset: 0x98
	// Line 54, Address: 0x1771c8, Func Offset: 0xb8
	// Line 55, Address: 0x1771d4, Func Offset: 0xc4
	// Line 56, Address: 0x1771f4, Func Offset: 0xe4
	// Line 57, Address: 0x1771fc, Func Offset: 0xec
	// Line 58, Address: 0x177214, Func Offset: 0x104
	// Line 61, Address: 0x177230, Func Offset: 0x120
	// Line 63, Address: 0x177254, Func Offset: 0x144
	// Line 90, Address: 0x177268, Func Offset: 0x158
	// Func End, Address: 0x177278, Func Offset: 0x168
}

// 
// Start address: 0x177280
void sh_Vu0CameraMatrix(float wvm[4], float* p, float* zd, float* yd)
{
	float xd[4];
	float m0[4][4];
	// Line 111, Address: 0x177280, Func Offset: 0
	// Line 115, Address: 0x177298, Func Offset: 0x18
	// Line 117, Address: 0x1772a4, Func Offset: 0x24
	// Line 118, Address: 0x1772b8, Func Offset: 0x38
	// Line 119, Address: 0x1772c8, Func Offset: 0x48
	// Line 121, Address: 0x1772d8, Func Offset: 0x58
	// Line 122, Address: 0x1772ec, Func Offset: 0x6c
	// Line 123, Address: 0x177300, Func Offset: 0x80
	// Line 129, Address: 0x177310, Func Offset: 0x90
	// Func End, Address: 0x177320, Func Offset: 0xa0
}

// 
// Start address: 0x177320
void SetVu0ViewScreenClipMatrix(float view_screen[4], float view_clip[4], float clip_screen[4], float* clip_vol, float scrz, float ax, float ay, float cx, float cy, float zmin, float zmax, float nearz, float farz)
{
	float mt[4][4];
	float gsy;
	float gsx;
	float cz;
	float az;
	// Line 166, Address: 0x177320, Func Offset: 0
	// Line 171, Address: 0x177358, Func Offset: 0x38
	// Line 172, Address: 0x177374, Func Offset: 0x54
	// Line 174, Address: 0x177390, Func Offset: 0x70
	// Line 175, Address: 0x1773c8, Func Offset: 0xa8
	// Line 181, Address: 0x177404, Func Offset: 0xe4
	// Line 182, Address: 0x177410, Func Offset: 0xf0
	// Line 183, Address: 0x177428, Func Offset: 0x108
	// Line 184, Address: 0x177440, Func Offset: 0x120
	// Line 190, Address: 0x177460, Func Offset: 0x140
	// Line 191, Address: 0x17746c, Func Offset: 0x14c
	// Line 192, Address: 0x177484, Func Offset: 0x164
	// Line 193, Address: 0x17749c, Func Offset: 0x17c
	// Line 200, Address: 0x1774b0, Func Offset: 0x190
	// Line 201, Address: 0x1774bc, Func Offset: 0x19c
	// Line 202, Address: 0x1774e8, Func Offset: 0x1c8
	// Line 203, Address: 0x177514, Func Offset: 0x1f4
	// Line 204, Address: 0x177538, Func Offset: 0x218
	// Line 205, Address: 0x17756c, Func Offset: 0x24c
	// Line 211, Address: 0x177588, Func Offset: 0x268
	// Line 212, Address: 0x177594, Func Offset: 0x274
	// Line 213, Address: 0x1775b8, Func Offset: 0x298
	// Line 214, Address: 0x1775dc, Func Offset: 0x2bc
	// Line 215, Address: 0x177604, Func Offset: 0x2e4
	// Line 216, Address: 0x177628, Func Offset: 0x308
	// Line 218, Address: 0x177640, Func Offset: 0x320
	// Line 221, Address: 0x177650, Func Offset: 0x330
	// Func End, Address: 0x177660, Func Offset: 0x340
}

// 
// Start address: 0x177660
void Set_CameraScreenMatrixPams(_anon0* cam, float scrz, float ax, float ay, float cx, float cy, float zmin, float zmax, float nearz, float farz)
{
	float cz;
	float az;
	// Line 228, Address: 0x177660, Func Offset: 0
	// Line 230, Address: 0x177688, Func Offset: 0x28
	// Line 231, Address: 0x1776c0, Func Offset: 0x60
	// Line 234, Address: 0x1776f8, Func Offset: 0x98
	// Line 235, Address: 0x177704, Func Offset: 0xa4
	// Line 236, Address: 0x177710, Func Offset: 0xb0
	// Line 238, Address: 0x17771c, Func Offset: 0xbc
	// Line 239, Address: 0x177728, Func Offset: 0xc8
	// Line 240, Address: 0x177734, Func Offset: 0xd4
	// Line 241, Address: 0x177740, Func Offset: 0xe0
	// Line 244, Address: 0x17774c, Func Offset: 0xec
	// Line 245, Address: 0x177758, Func Offset: 0xf8
	// Line 246, Address: 0x177764, Func Offset: 0x104
	// Line 247, Address: 0x177770, Func Offset: 0x110
	// Line 251, Address: 0x17777c, Func Offset: 0x11c
	// Func End, Address: 0x177788, Func Offset: 0x128
}

