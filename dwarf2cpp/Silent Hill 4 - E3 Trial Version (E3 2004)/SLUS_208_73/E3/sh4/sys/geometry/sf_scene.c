typedef struct sfFogParams;
typedef struct ktLight;
typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct ktScene;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef _anon0 type_4[4];
typedef <unknown fundamental type (0xa510)> type_5[4];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_8[4][2];
typedef float type_9[4];
typedef float type_10[4][2];
typedef _anon0 type_11[2];
typedef <unknown fundamental type (0xa510)> type_12[2];
typedef unsigned char type_13[4];

struct sfFogParams
{
	float near;
	float far;
	unsigned char near_pow;
	unsigned char far_pow;
};

struct ktLight
{
	ktLight* next;
	ktLight* link;
	float r;
	float g;
	float b;
	unsigned int type;
	_anon0 pos;
	_anon0 vec;
	float f_start;
	float f_end;
	float cone;
	float spread;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon1
{
	ktScene current;
};

union _anon2
{
	float d[4][4];
	float i[4][4];
	_anon0 v[4];
	<unknown fundamental type (0xa510)> u128[4];
};

union _anon3
{
	float d[4][2];
	float i[4][2];
	_anon0 v[2];
	<unknown fundamental type (0xa510)> u128[2];
};

struct _anon4
{
	unsigned char fog_color[4];
	float fog_near;
	float fog_far;
	unsigned char fog_near_pow;
	unsigned char fog_far_pow;
	int fog_enable;
	float fog_a;
	float fog_b;
};

struct ktScene
{
	_anon0 fog_col;
	int fog_near;
	int fog_far;
	float fog_a;
	float fog_b;
	unsigned char fog_pow;
	_anon0 ambi;
	int projection;
	int width;
	int height;
	int clip_width;
	int clip_height;
	int near_clip;
	int far_clip;
	int z_min;
	int z_max;
	int light_n;
	ktLight* light;
	_anon2 para_mat;
	_anon2 para_col;
	_anon2 vs;
	_anon2 vs0;
	_anon2 wv;
	_anon2 r_wv;
	_anon2 vw;
	_anon2 ws;
	_anon2 ws0;
	_anon2 vc;
	_anon2 cs;
	_anon2 vd;
	_anon2 vg;
	_anon3 vd24;
	_anon3 vg24;
	_anon3 vs24;
	_anon0 rev;
	char is_link_change;
	char is_para_change;
	char is_change;
	char is_rev;
};

_anon4 scene_work;
_anon1 kt_scene_global_work;

void sfSceneInit();
void sfSceneSetFogEnable(int use_fog);
int sfSceneFogIsEnable();
void sfSceneSetFogColor(unsigned char* fog_color);
void sfSceneGetFogColor(unsigned char* fog_color);
void sfSceneSetFogPower(float near, unsigned char near_pow, float far, unsigned char far_pow);
void sfSceneSetFogParams(sfFogParams* fog_params);
void sfSceneGetFogParams(sfFogParams* fog_params);
int sfSceneFogValue(float* pos);

// 
// Start address: 0x1f4a30
void sfSceneInit()
{
	// Line 47, Address: 0x1f4a30, Func Offset: 0
	// Line 48, Address: 0x1f4a34, Func Offset: 0x4
	// Line 47, Address: 0x1f4a38, Func Offset: 0x8
	// Line 48, Address: 0x1f4a3c, Func Offset: 0xc
	// Line 49, Address: 0x1f4a48, Func Offset: 0x18
	// Line 50, Address: 0x1f4a50, Func Offset: 0x20
	// Line 51, Address: 0x1f4a5c, Func Offset: 0x2c
	// Func End, Address: 0x1f4a68, Func Offset: 0x38
}

// 
// Start address: 0x1f4a70
void sfSceneSetFogEnable(int use_fog)
{
	// Line 57, Address: 0x1f4a70, Func Offset: 0
	// Line 58, Address: 0x1f4a80, Func Offset: 0x10
	// Line 59, Address: 0x1f4a88, Func Offset: 0x18
	// Line 60, Address: 0x1f4a90, Func Offset: 0x20
	// Line 61, Address: 0x1f4aa8, Func Offset: 0x38
	// Line 62, Address: 0x1f4ab0, Func Offset: 0x40
	// Line 63, Address: 0x1f4ab8, Func Offset: 0x48
	// Line 65, Address: 0x1f4adc, Func Offset: 0x6c
	// Line 66, Address: 0x1f4ae0, Func Offset: 0x70
	// Line 67, Address: 0x1f4ae8, Func Offset: 0x78
	// Func End, Address: 0x1f4af8, Func Offset: 0x88
}

// 
// Start address: 0x1f4b00
int sfSceneFogIsEnable()
{
	// Line 72, Address: 0x1f4b00, Func Offset: 0
	// Line 73, Address: 0x1f4b04, Func Offset: 0x4
	// Func End, Address: 0x1f4b0c, Func Offset: 0xc
}

// 
// Start address: 0x1f4b10
void sfSceneSetFogColor(unsigned char* fog_color)
{
	// Line 79, Address: 0x1f4b10, Func Offset: 0
	// Line 80, Address: 0x1f4b1c, Func Offset: 0xc
	// Line 82, Address: 0x1f4b24, Func Offset: 0x14
	// Line 83, Address: 0x1f4bbc, Func Offset: 0xac
	// Line 84, Address: 0x1f4bc8, Func Offset: 0xb8
	// Line 85, Address: 0x1f4bd4, Func Offset: 0xc4
	// Line 86, Address: 0x1f4be0, Func Offset: 0xd0
	// Func End, Address: 0x1f4bf0, Func Offset: 0xe0
}

// 
// Start address: 0x1f4bf0
void sfSceneGetFogColor(unsigned char* fog_color)
{
	// Line 93, Address: 0x1f4bf0, Func Offset: 0
	// Line 94, Address: 0x1f4bfc, Func Offset: 0xc
	// Line 95, Address: 0x1f4c08, Func Offset: 0x18
	// Line 96, Address: 0x1f4c10, Func Offset: 0x20
	// Func End, Address: 0x1f4c18, Func Offset: 0x28
}

// 
// Start address: 0x1f4c20
void sfSceneSetFogPower(float near, unsigned char near_pow, float far, unsigned char far_pow)
{
	float min;
	float max;
	// Line 110, Address: 0x1f4c20, Func Offset: 0
	// Line 115, Address: 0x1f4c24, Func Offset: 0x4
	// Line 110, Address: 0x1f4c28, Func Offset: 0x8
	// Line 115, Address: 0x1f4c4c, Func Offset: 0x2c
	// Line 116, Address: 0x1f4c50, Func Offset: 0x30
	// Line 117, Address: 0x1f4c58, Func Offset: 0x38
	// Line 118, Address: 0x1f4c64, Func Offset: 0x44
	// Line 120, Address: 0x1f4c6c, Func Offset: 0x4c
	// Line 123, Address: 0x1f4c74, Func Offset: 0x54
	// Line 124, Address: 0x1f4cac, Func Offset: 0x8c
	// Line 125, Address: 0x1f4ce4, Func Offset: 0xc4
	// Line 128, Address: 0x1f4d00, Func Offset: 0xe0
	// Line 126, Address: 0x1f4d04, Func Offset: 0xe4
	// Line 127, Address: 0x1f4d0c, Func Offset: 0xec
	// Line 126, Address: 0x1f4d10, Func Offset: 0xf0
	// Line 127, Address: 0x1f4d14, Func Offset: 0xf4
	// Line 126, Address: 0x1f4d18, Func Offset: 0xf8
	// Line 128, Address: 0x1f4d1c, Func Offset: 0xfc
	// Line 130, Address: 0x1f4d20, Func Offset: 0x100
	// Line 127, Address: 0x1f4d28, Func Offset: 0x108
	// Line 129, Address: 0x1f4d2c, Func Offset: 0x10c
	// Line 131, Address: 0x1f4d34, Func Offset: 0x114
	// Line 132, Address: 0x1f4d3c, Func Offset: 0x11c
	// Func End, Address: 0x1f4d60, Func Offset: 0x140
}

// 
// Start address: 0x1f4d60
void sfSceneSetFogParams(sfFogParams* fog_params)
{
	// Line 141, Address: 0x1f4d60, Func Offset: 0
	// Func End, Address: 0x1f4d74, Func Offset: 0x14
}

// 
// Start address: 0x1f4d80
void sfSceneGetFogParams(sfFogParams* fog_params)
{
	// Line 151, Address: 0x1f4d80, Func Offset: 0
	// Line 152, Address: 0x1f4d8c, Func Offset: 0xc
	// Line 153, Address: 0x1f4d98, Func Offset: 0x18
	// Line 154, Address: 0x1f4da4, Func Offset: 0x24
	// Line 155, Address: 0x1f4dac, Func Offset: 0x2c
	// Func End, Address: 0x1f4db4, Func Offset: 0x34
}

// 
// Start address: 0x1f4dc0
int sfSceneFogValue(float* pos)
{
	float v[4];
	float z;
	float ff;
	int fi;
	// Line 159, Address: 0x1f4dc0, Func Offset: 0
	// Line 165, Address: 0x1f4dcc, Func Offset: 0xc
	// Line 166, Address: 0x1f4ddc, Func Offset: 0x1c
	// Line 168, Address: 0x1f4de8, Func Offset: 0x28
	// Line 170, Address: 0x1f4e20, Func Offset: 0x60
	// Line 172, Address: 0x1f4e24, Func Offset: 0x64
	// Line 170, Address: 0x1f4e28, Func Offset: 0x68
	// Line 172, Address: 0x1f4e2c, Func Offset: 0x6c
	// Line 169, Address: 0x1f4e30, Func Offset: 0x70
	// Line 170, Address: 0x1f4e34, Func Offset: 0x74
	// Line 171, Address: 0x1f4e44, Func Offset: 0x84
	// Line 172, Address: 0x1f4e50, Func Offset: 0x90
	// Line 174, Address: 0x1f4e60, Func Offset: 0xa0
	// Func End, Address: 0x1f4e70, Func Offset: 0xb0
}

