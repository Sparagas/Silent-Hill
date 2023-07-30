typedef struct Light;
typedef struct ktScene;
typedef struct ktLight;
typedef struct LightWork;
typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef union _anon3;

typedef int(*type_7)(void*, void*);
typedef int(*type_17)(void*, void*);
typedef int(*type_22)(void*, void*);

typedef float type_0[4];
typedef float type_1[4][2];
typedef _anon0 type_2[2];
typedef Light* type_3[16];
typedef <unknown fundamental type (0xa510)> type_4[2];
typedef Light* type_5[16];
typedef float type_6[4];
typedef float type_8[4];
typedef Light type_9[16];
typedef float type_10[4][4][2];
typedef float type_11[4][4][2];
typedef float type_12[4][4][2];
typedef Light* type_13[4];
typedef Light* type_14[8];
typedef Light* type_15[16];
typedef float type_16[4];
typedef float type_18[4][4];
typedef Light* type_19[16];
typedef float type_20[4];
typedef float type_21[4][4];
typedef float type_23[4];
typedef float type_24[4][4];
typedef _anon0 type_25[4];
typedef <unknown fundamental type (0xa510)> type_26[4];
typedef float type_27[4];
typedef float type_28[4][2];

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	int fake;
	float shadow_length;
	float shadow_density;
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

struct LightWork
{
	Light lights[16];
	int n_valid_parallels;
	int n_valid_parallel_matrices;
	int n_valid_extras;
	int n_valid_shadows;
	float nlms[4][4][2];
	float vnlms[4][4][2];
	float lcms[4][4][2];
	Light* valid_extras[4];
	Light* valid_shadows[8];
	float reflection_brightness;
	float reflection_color[4];
	float nhm[4][4];
	float vnhm[4][4];
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

float monochrome_vector[4];
LightWork light_work;
_anon1 kt_scene_global_work;
float unit_fvector_z[4];
float zero_fvector[4];
int(*CompareByIntensity)(void*, void*);
float zero_fmatrix[4][4];
float unit_fvector_w[4];
float unit_fvector_y[4];
int(*CompareByShadowDensity)(void*, void*);
int(*CompareByInfluence)(void*, void*);

Light* LightPointer(int n);
float* LightPos(Light* l);
float* LightDir(Light* l);
void UpdateIntensity(Light* l);
void UpdateFParam(Light* l);
void UpdateSParam(Light* l);
void LightDelete(int n);
void LightSetParallel(int n, float* dir, float* color);
void LightSetPoint(int n, float* pos, float* color, float f_start, float f_end);
void LightSetSpot(int n, float* pos, float* dir, float* color, float f_start, float f_end, float s_start, float s_end);
void LightSetReflection(int n, float* dir, float* color);
void LightSetPos(int n, float* pos);
void LightSetDir(int n, float* dir);
void LightSetColor(int n, float* color);
void LightSetFalloff(int n, float f_start, float f_end);
void LightSetSpread(int n, float s_start, float s_end);
void CalcInfluence(Light* l, float* center, float radius);
int CompareByIntensity(void* xx, void* yy);
int CompareByInfluence(void* xx, void* yy);
int CompareByShadowDensity(void* xx, void* yy);
void UpdateViewParams();
void UpdateParallels();
void UpdateReflections();
void UpdateShadows();
void UpdateExtras(float* center, float radius);
void LightUpdateInfoByScene();
void LightUpdateInfoByPos(float* center, float radius);
int LightNValidParallelMatrices();
void LightGetNthViewNLM(float nlm[4], int n);
void LightGetNthLCM(float lcm[4], int n);
float LightReflectionBrightness();
void LightGetReflectionColor(float* color);
float* LightReflectionColor();
void LightGetNthViewNHM(float nhm[4]);
int LightNValidExtras();
Light* LightNthValidExtra(int n);
void LightInit();

// 
// Start address: 0x155260
Light* LightPointer(int n)
{
	// Line 71, Address: 0x155260, Func Offset: 0
	// Line 72, Address: 0x155274, Func Offset: 0x14
	// Func End, Address: 0x15527c, Func Offset: 0x1c
}

// 
// Start address: 0x155280
float* LightPos(Light* l)
{
	// Line 90, Address: 0x155280, Func Offset: 0
	// Func End, Address: 0x155288, Func Offset: 0x8
}

// 
// Start address: 0x155290
float* LightDir(Light* l)
{
	// Line 99, Address: 0x155290, Func Offset: 0
	// Func End, Address: 0x155298, Func Offset: 0x8
}

// 
// Start address: 0x1552a0
void UpdateIntensity(Light* l)
{
	// Line 204, Address: 0x1552a0, Func Offset: 0
	// Line 206, Address: 0x1552a4, Func Offset: 0x4
	// Line 204, Address: 0x1552a8, Func Offset: 0x8
	// Line 206, Address: 0x1552ac, Func Offset: 0xc
	// Line 204, Address: 0x1552b0, Func Offset: 0x10
	// Line 206, Address: 0x1552b8, Func Offset: 0x18
	// Line 207, Address: 0x1552c4, Func Offset: 0x24
	// Line 208, Address: 0x1552d0, Func Offset: 0x30
	// Func End, Address: 0x1552e0, Func Offset: 0x40
}

// 
// Start address: 0x1552e0
void UpdateFParam(Light* l)
{
	float a;
	float b;
	// Line 215, Address: 0x1552e0, Func Offset: 0
	// Line 223, Address: 0x1552e4, Func Offset: 0x4
	// Line 224, Address: 0x1552fc, Func Offset: 0x1c
	// Line 225, Address: 0x155300, Func Offset: 0x20
	// Line 224, Address: 0x155304, Func Offset: 0x24
	// Line 226, Address: 0x155308, Func Offset: 0x28
	// Line 236, Address: 0x155310, Func Offset: 0x30
	// Line 237, Address: 0x155320, Func Offset: 0x40
	// Line 238, Address: 0x15532c, Func Offset: 0x4c
	// Func End, Address: 0x155334, Func Offset: 0x54
}

// 
// Start address: 0x155340
void UpdateSParam(Light* l)
{
	float a;
	float b;
	// Line 245, Address: 0x155340, Func Offset: 0
	// Line 253, Address: 0x155344, Func Offset: 0x4
	// Line 254, Address: 0x15535c, Func Offset: 0x1c
	// Line 255, Address: 0x155360, Func Offset: 0x20
	// Line 254, Address: 0x155364, Func Offset: 0x24
	// Line 257, Address: 0x155368, Func Offset: 0x28
	// Func End, Address: 0x155370, Func Offset: 0x30
}

// 
// Start address: 0x155370
void LightDelete(int n)
{
	Light* l;
	// Line 264, Address: 0x155370, Func Offset: 0
	// Line 265, Address: 0x155378, Func Offset: 0x8
	// Line 266, Address: 0x155380, Func Offset: 0x10
	// Line 267, Address: 0x155384, Func Offset: 0x14
	// Func End, Address: 0x155390, Func Offset: 0x20
}

// 
// Start address: 0x155390
void LightSetParallel(int n, float* dir, float* color)
{
	Light* l;
	// Line 286, Address: 0x155390, Func Offset: 0
	// Line 287, Address: 0x1553b0, Func Offset: 0x20
	// Line 288, Address: 0x1553bc, Func Offset: 0x2c
	// Line 289, Address: 0x1553cc, Func Offset: 0x3c
	// Line 290, Address: 0x1553d0, Func Offset: 0x40
	// Line 289, Address: 0x1553d4, Func Offset: 0x44
	// Line 290, Address: 0x1553d8, Func Offset: 0x48
	// Line 291, Address: 0x1553e0, Func Offset: 0x50
	// Line 292, Address: 0x1553ec, Func Offset: 0x5c
	// Func End, Address: 0x155408, Func Offset: 0x78
}

// 
// Start address: 0x155410
void LightSetPoint(int n, float* pos, float* color, float f_start, float f_end)
{
	Light* l;
	// Line 299, Address: 0x155410, Func Offset: 0
	// Line 300, Address: 0x155440, Func Offset: 0x30
	// Line 301, Address: 0x15544c, Func Offset: 0x3c
	// Line 302, Address: 0x15545c, Func Offset: 0x4c
	// Line 303, Address: 0x155460, Func Offset: 0x50
	// Line 302, Address: 0x155464, Func Offset: 0x54
	// Line 303, Address: 0x155468, Func Offset: 0x58
	// Line 304, Address: 0x155470, Func Offset: 0x60
	// Line 305, Address: 0x155480, Func Offset: 0x70
	// Line 306, Address: 0x15548c, Func Offset: 0x7c
	// Line 307, Address: 0x15549c, Func Offset: 0x8c
	// Func End, Address: 0x1554c0, Func Offset: 0xb0
}

// 
// Start address: 0x1554c0
void LightSetSpot(int n, float* pos, float* dir, float* color, float f_start, float f_end, float s_start, float s_end)
{
	Light* l;
	// Line 315, Address: 0x1554c0, Func Offset: 0
	// Line 316, Address: 0x155508, Func Offset: 0x48
	// Line 317, Address: 0x155514, Func Offset: 0x54
	// Line 318, Address: 0x155524, Func Offset: 0x64
	// Line 319, Address: 0x155528, Func Offset: 0x68
	// Line 318, Address: 0x15552c, Func Offset: 0x6c
	// Line 319, Address: 0x155530, Func Offset: 0x70
	// Line 320, Address: 0x155538, Func Offset: 0x78
	// Line 321, Address: 0x155544, Func Offset: 0x84
	// Line 322, Address: 0x155550, Func Offset: 0x90
	// Line 323, Address: 0x155560, Func Offset: 0xa0
	// Line 324, Address: 0x155570, Func Offset: 0xb0
	// Func End, Address: 0x1555a0, Func Offset: 0xe0
}

// 
// Start address: 0x1555a0
void LightSetReflection(int n, float* dir, float* color)
{
	Light* l;
	// Line 331, Address: 0x1555a0, Func Offset: 0
	// Line 333, Address: 0x1555c0, Func Offset: 0x20
	// Line 334, Address: 0x1555cc, Func Offset: 0x2c
	// Line 335, Address: 0x1555dc, Func Offset: 0x3c
	// Line 336, Address: 0x1555e0, Func Offset: 0x40
	// Line 335, Address: 0x1555e4, Func Offset: 0x44
	// Line 336, Address: 0x1555e8, Func Offset: 0x48
	// Line 337, Address: 0x1555f0, Func Offset: 0x50
	// Line 338, Address: 0x1555fc, Func Offset: 0x5c
	// Func End, Address: 0x155618, Func Offset: 0x78
}

// 
// Start address: 0x155620
void LightSetPos(int n, float* pos)
{
	Light* l;
	// Line 393, Address: 0x155620, Func Offset: 0
	// Line 394, Address: 0x15562c, Func Offset: 0xc
	// Line 395, Address: 0x155634, Func Offset: 0x14
	// Line 396, Address: 0x155640, Func Offset: 0x20
	// Func End, Address: 0x155650, Func Offset: 0x30
}

// 
// Start address: 0x155650
void LightSetDir(int n, float* dir)
{
	Light* l;
	// Line 403, Address: 0x155650, Func Offset: 0
	// Line 404, Address: 0x155660, Func Offset: 0x10
	// Line 405, Address: 0x155668, Func Offset: 0x18
	// Line 406, Address: 0x1556a0, Func Offset: 0x50
	// Line 407, Address: 0x1556ac, Func Offset: 0x5c
	// Line 408, Address: 0x1556b8, Func Offset: 0x68
	// Line 409, Address: 0x1556c4, Func Offset: 0x74
	// Line 411, Address: 0x1556c8, Func Offset: 0x78
	// Func End, Address: 0x1556dc, Func Offset: 0x8c
}

// 
// Start address: 0x1556e0
void LightSetColor(int n, float* color)
{
	Light* l;
	// Line 418, Address: 0x1556e0, Func Offset: 0
	// Line 419, Address: 0x1556f0, Func Offset: 0x10
	// Line 420, Address: 0x1556fc, Func Offset: 0x1c
	// Line 421, Address: 0x155708, Func Offset: 0x28
	// Line 422, Address: 0x155710, Func Offset: 0x30
	// Line 423, Address: 0x155744, Func Offset: 0x64
	// Line 425, Address: 0x155748, Func Offset: 0x68
	// Line 428, Address: 0x155750, Func Offset: 0x70
	// Line 435, Address: 0x155758, Func Offset: 0x78
	// Func End, Address: 0x15576c, Func Offset: 0x8c
}

// 
// Start address: 0x155770
void LightSetFalloff(int n, float f_start, float f_end)
{
	Light* l;
	// Line 442, Address: 0x155770, Func Offset: 0
	// Line 443, Address: 0x155784, Func Offset: 0x14
	// Line 444, Address: 0x15578c, Func Offset: 0x1c
	// Line 443, Address: 0x155790, Func Offset: 0x20
	// Line 446, Address: 0x155794, Func Offset: 0x24
	// Line 447, Address: 0x15579c, Func Offset: 0x2c
	// Func End, Address: 0x1557b0, Func Offset: 0x40
}

// 
// Start address: 0x1557b0
void LightSetSpread(int n, float s_start, float s_end)
{
	Light* l;
	// Line 454, Address: 0x1557b0, Func Offset: 0
	// Line 455, Address: 0x1557c4, Func Offset: 0x14
	// Line 456, Address: 0x1557cc, Func Offset: 0x1c
	// Line 455, Address: 0x1557d0, Func Offset: 0x20
	// Line 458, Address: 0x1557d4, Func Offset: 0x24
	// Line 459, Address: 0x1557dc, Func Offset: 0x2c
	// Func End, Address: 0x1557f0, Func Offset: 0x40
}

// 
// Start address: 0x1557f0
void CalcInfluence(Light* l, float* center, float radius)
{
	float diff[4];
	float dist;
	float f_inf;
	// Line 492, Address: 0x1557f0, Func Offset: 0
	// Line 493, Address: 0x1557f4, Func Offset: 0x4
	// Line 492, Address: 0x1557f8, Func Offset: 0x8
	// Line 493, Address: 0x155808, Func Offset: 0x18
	// Line 494, Address: 0x155844, Func Offset: 0x54
	// Line 495, Address: 0x155848, Func Offset: 0x58
	// Line 497, Address: 0x15584c, Func Offset: 0x5c
	// Line 499, Address: 0x155854, Func Offset: 0x64
	// Line 500, Address: 0x155858, Func Offset: 0x68
	// Line 501, Address: 0x155860, Func Offset: 0x70
	// Line 502, Address: 0x155864, Func Offset: 0x74
	// Line 504, Address: 0x15586c, Func Offset: 0x7c
	// Line 509, Address: 0x155870, Func Offset: 0x80
	// Line 510, Address: 0x15587c, Func Offset: 0x8c
	// Line 511, Address: 0x155894, Func Offset: 0xa4
	// Line 510, Address: 0x15589c, Func Offset: 0xac
	// Line 511, Address: 0x1558a0, Func Offset: 0xb0
	// Line 512, Address: 0x1558b8, Func Offset: 0xc8
	// Line 513, Address: 0x1558c4, Func Offset: 0xd4
	// Line 517, Address: 0x1558d0, Func Offset: 0xe0
	// Func End, Address: 0x1558e4, Func Offset: 0xf4
}

// 
// Start address: 0x1558f0
int CompareByIntensity(void* xx, void* yy)
{
	Light* x;
	Light* y;
	// Line 527, Address: 0x1558f0, Func Offset: 0
	// Line 528, Address: 0x1558f4, Func Offset: 0x4
	// Line 529, Address: 0x155900, Func Offset: 0x10
	// Line 530, Address: 0x155928, Func Offset: 0x38
	// Func End, Address: 0x155930, Func Offset: 0x40
}

// 
// Start address: 0x155930
int CompareByInfluence(void* xx, void* yy)
{
	Light* x;
	Light* y;
	// Line 540, Address: 0x155930, Func Offset: 0
	// Line 541, Address: 0x155934, Func Offset: 0x4
	// Line 542, Address: 0x155940, Func Offset: 0x10
	// Line 543, Address: 0x155968, Func Offset: 0x38
	// Func End, Address: 0x155970, Func Offset: 0x40
}

// 
// Start address: 0x155970
int CompareByShadowDensity(void* xx, void* yy)
{
	Light* x;
	Light* y;
	// Line 553, Address: 0x155970, Func Offset: 0
	// Line 554, Address: 0x155974, Func Offset: 0x4
	// Line 555, Address: 0x155980, Func Offset: 0x10
	// Line 556, Address: 0x1559a8, Func Offset: 0x38
	// Func End, Address: 0x1559b0, Func Offset: 0x40
}

// 
// Start address: 0x1559b0
void UpdateViewParams()
{
	float wvm[4][4];
	int i;
	Light* l;
	// Line 563, Address: 0x1559b0, Func Offset: 0
	// Line 568, Address: 0x1559bc, Func Offset: 0xc
	// Line 569, Address: 0x1559d0, Func Offset: 0x20
	// Line 570, Address: 0x1559d8, Func Offset: 0x28
	// Line 572, Address: 0x1559e0, Func Offset: 0x30
	// Line 578, Address: 0x155a0c, Func Offset: 0x5c
	// Line 579, Address: 0x155a10, Func Offset: 0x60
	// Line 580, Address: 0x155a20, Func Offset: 0x70
	// Line 583, Address: 0x155a30, Func Offset: 0x80
	// Line 584, Address: 0x155a40, Func Offset: 0x90
	// Func End, Address: 0x155a54, Func Offset: 0xa4
}

// 
// Start address: 0x155a60
void UpdateParallels()
{
	Light* a[16];
	int n_parallels;
	int matrix_no;
	int offset;
	int i;
	Light* l;
	Light* l;
	float nlm[4];
	float vnlm[4];
	float lcm[4];
	// Line 591, Address: 0x155a60, Func Offset: 0
	// Line 598, Address: 0x155a64, Func Offset: 0x4
	// Line 591, Address: 0x155a68, Func Offset: 0x8
	// Line 593, Address: 0x155a74, Func Offset: 0x14
	// Line 591, Address: 0x155a78, Func Offset: 0x18
	// Line 600, Address: 0x155a80, Func Offset: 0x20
	// Line 598, Address: 0x155a84, Func Offset: 0x24
	// Line 600, Address: 0x155a88, Func Offset: 0x28
	// Line 599, Address: 0x155a8c, Func Offset: 0x2c
	// Line 600, Address: 0x155a90, Func Offset: 0x30
	// Line 599, Address: 0x155a94, Func Offset: 0x34
	// Line 601, Address: 0x155a98, Func Offset: 0x38
	// Line 602, Address: 0x155aa8, Func Offset: 0x48
	// Line 603, Address: 0x155ab8, Func Offset: 0x58
	// Line 604, Address: 0x155ac8, Func Offset: 0x68
	// Line 607, Address: 0x155ad8, Func Offset: 0x78
	// Line 608, Address: 0x155ae8, Func Offset: 0x88
	// Line 609, Address: 0x155af0, Func Offset: 0x90
	// Line 611, Address: 0x155b08, Func Offset: 0xa8
	// Line 615, Address: 0x155b20, Func Offset: 0xc0
	// Line 618, Address: 0x155b2c, Func Offset: 0xcc
	// Line 621, Address: 0x155b40, Func Offset: 0xe0
	// Line 626, Address: 0x155b54, Func Offset: 0xf4
	// Line 624, Address: 0x155b58, Func Offset: 0xf8
	// Line 625, Address: 0x155b5c, Func Offset: 0xfc
	// Line 626, Address: 0x155b60, Func Offset: 0x100
	// Line 644, Address: 0x155b70, Func Offset: 0x110
	// Line 628, Address: 0x155b78, Func Offset: 0x118
	// Line 626, Address: 0x155b7c, Func Offset: 0x11c
	// Line 627, Address: 0x155b80, Func Offset: 0x120
	// Line 628, Address: 0x155b84, Func Offset: 0x124
	// Line 630, Address: 0x155b98, Func Offset: 0x138
	// Line 634, Address: 0x155ba4, Func Offset: 0x144
	// Line 631, Address: 0x155ba8, Func Offset: 0x148
	// Line 632, Address: 0x155bb0, Func Offset: 0x150
	// Line 633, Address: 0x155bb4, Func Offset: 0x154
	// Line 636, Address: 0x155bb8, Func Offset: 0x158
	// Line 633, Address: 0x155bc0, Func Offset: 0x160
	// Line 639, Address: 0x155bc4, Func Offset: 0x164
	// Line 643, Address: 0x155bc8, Func Offset: 0x168
	// Line 634, Address: 0x155bcc, Func Offset: 0x16c
	// Line 635, Address: 0x155bd0, Func Offset: 0x170
	// Line 636, Address: 0x155bd8, Func Offset: 0x178
	// Line 637, Address: 0x155be0, Func Offset: 0x180
	// Line 638, Address: 0x155be8, Func Offset: 0x188
	// Line 639, Address: 0x155bf0, Func Offset: 0x190
	// Line 640, Address: 0x155bf8, Func Offset: 0x198
	// Line 641, Address: 0x155c00, Func Offset: 0x1a0
	// Line 642, Address: 0x155c08, Func Offset: 0x1a8
	// Line 644, Address: 0x155c0c, Func Offset: 0x1ac
	// Line 645, Address: 0x155c2c, Func Offset: 0x1cc
	// Line 646, Address: 0x155c30, Func Offset: 0x1d0
	// Line 647, Address: 0x155c34, Func Offset: 0x1d4
	// Line 648, Address: 0x155c38, Func Offset: 0x1d8
	// Line 652, Address: 0x155c4c, Func Offset: 0x1ec
	// Line 655, Address: 0x155c60, Func Offset: 0x200
	// Line 656, Address: 0x155c84, Func Offset: 0x224
	// Func End, Address: 0x155ca0, Func Offset: 0x240
}

// 
// Start address: 0x155ca0
void UpdateReflections()
{
	Light* a[16];
	int n_reflections;
	float wvm[4][4];
	float vwm[4][4];
	int i;
	Light* l;
	float hv[4];
	float vhv[4];
	float nlm[4];
	float vnlm[4];
	float nhm[4];
	float vnhm[4];
	float* dir_y;
	float nhm3[4];
	// Line 664, Address: 0x155ca0, Func Offset: 0
	// Line 673, Address: 0x155ca4, Func Offset: 0x4
	// Line 664, Address: 0x155ca8, Func Offset: 0x8
	// Line 673, Address: 0x155cac, Func Offset: 0xc
	// Line 664, Address: 0x155cb0, Func Offset: 0x10
	// Line 672, Address: 0x155cb4, Func Offset: 0x14
	// Line 664, Address: 0x155cb8, Func Offset: 0x18
	// Line 673, Address: 0x155cbc, Func Offset: 0x1c
	// Line 664, Address: 0x155cc0, Func Offset: 0x20
	// Line 673, Address: 0x155cc4, Func Offset: 0x24
	// Line 664, Address: 0x155cc8, Func Offset: 0x28
	// Line 666, Address: 0x155cd4, Func Offset: 0x34
	// Line 664, Address: 0x155cd8, Func Offset: 0x38
	// Line 673, Address: 0x155cdc, Func Offset: 0x3c
	// Line 674, Address: 0x155ce4, Func Offset: 0x44
	// Line 677, Address: 0x155cf8, Func Offset: 0x58
	// Line 678, Address: 0x155d00, Func Offset: 0x60
	// Line 679, Address: 0x155d08, Func Offset: 0x68
	// Line 681, Address: 0x155d20, Func Offset: 0x80
	// Line 684, Address: 0x155d2c, Func Offset: 0x8c
	// Line 685, Address: 0x155d40, Func Offset: 0xa0
	// Line 689, Address: 0x155d48, Func Offset: 0xa8
	// Line 691, Address: 0x155d5c, Func Offset: 0xbc
	// Line 696, Address: 0x155d68, Func Offset: 0xc8
	// Line 692, Address: 0x155d7c, Func Offset: 0xdc
	// Line 696, Address: 0x155d80, Func Offset: 0xe0
	// Line 710, Address: 0x155d8c, Func Offset: 0xec
	// Line 711, Address: 0x155d9c, Func Offset: 0xfc
	// Line 712, Address: 0x155da8, Func Offset: 0x108
	// Line 713, Address: 0x155dbc, Func Offset: 0x11c
	// Line 719, Address: 0x155dc8, Func Offset: 0x128
	// Line 717, Address: 0x155dcc, Func Offset: 0x12c
	// Line 718, Address: 0x155dd4, Func Offset: 0x134
	// Line 725, Address: 0x155dd8, Func Offset: 0x138
	// Line 719, Address: 0x155ddc, Func Offset: 0x13c
	// Line 720, Address: 0x155de0, Func Offset: 0x140
	// Line 718, Address: 0x155de4, Func Offset: 0x144
	// Line 722, Address: 0x155de8, Func Offset: 0x148
	// Line 723, Address: 0x155dec, Func Offset: 0x14c
	// Line 725, Address: 0x155df0, Func Offset: 0x150
	// Line 719, Address: 0x155df8, Func Offset: 0x158
	// Line 720, Address: 0x155dfc, Func Offset: 0x15c
	// Line 721, Address: 0x155e04, Func Offset: 0x164
	// Line 722, Address: 0x155e0c, Func Offset: 0x16c
	// Line 723, Address: 0x155e14, Func Offset: 0x174
	// Line 724, Address: 0x155e1c, Func Offset: 0x17c
	// Line 725, Address: 0x155e20, Func Offset: 0x180
	// Line 731, Address: 0x155e2c, Func Offset: 0x18c
	// Line 725, Address: 0x155e30, Func Offset: 0x190
	// Line 732, Address: 0x155e34, Func Offset: 0x194
	// Line 735, Address: 0x155e38, Func Offset: 0x198
	// Line 731, Address: 0x155e3c, Func Offset: 0x19c
	// Line 735, Address: 0x155e40, Func Offset: 0x1a0
	// Line 732, Address: 0x155e44, Func Offset: 0x1a4
	// Line 735, Address: 0x155e48, Func Offset: 0x1a8
	// Line 736, Address: 0x155e74, Func Offset: 0x1d4
	// Line 738, Address: 0x155e78, Func Offset: 0x1d8
	// Line 739, Address: 0x155e84, Func Offset: 0x1e4
	// Line 740, Address: 0x155e94, Func Offset: 0x1f4
	// Line 741, Address: 0x155ea0, Func Offset: 0x200
	// Line 742, Address: 0x155eac, Func Offset: 0x20c
	// Line 743, Address: 0x155eb8, Func Offset: 0x218
	// Line 744, Address: 0x155ec8, Func Offset: 0x228
	// Line 745, Address: 0x155ed4, Func Offset: 0x234
	// Line 747, Address: 0x155ee4, Func Offset: 0x244
	// Line 748, Address: 0x155f1c, Func Offset: 0x27c
	// Line 750, Address: 0x155f20, Func Offset: 0x280
	// Line 751, Address: 0x155f34, Func Offset: 0x294
	// Line 752, Address: 0x155f44, Func Offset: 0x2a4
	// Line 753, Address: 0x155f50, Func Offset: 0x2b0
	// Line 754, Address: 0x155f5c, Func Offset: 0x2bc
	// Line 755, Address: 0x155f68, Func Offset: 0x2c8
	// Line 756, Address: 0x155f78, Func Offset: 0x2d8
	// Line 757, Address: 0x155f84, Func Offset: 0x2e4
	// Line 759, Address: 0x155f94, Func Offset: 0x2f4
	// Line 762, Address: 0x155fa4, Func Offset: 0x304
	// Func End, Address: 0x155fd0, Func Offset: 0x330
}

// 
// Start address: 0x155fd0
void UpdateShadows()
{
	Light* a[16];
	int n_shadows;
	int i;
	Light* l;
	Light* l;
	// Line 821, Address: 0x155fd0, Func Offset: 0
	// Line 827, Address: 0x155fd4, Func Offset: 0x4
	// Line 821, Address: 0x155fd8, Func Offset: 0x8
	// Line 823, Address: 0x155fe4, Func Offset: 0x14
	// Line 821, Address: 0x155fe8, Func Offset: 0x18
	// Line 830, Address: 0x155fec, Func Offset: 0x1c
	// Line 821, Address: 0x155ff0, Func Offset: 0x20
	// Line 830, Address: 0x155ff4, Func Offset: 0x24
	// Line 827, Address: 0x155ff8, Func Offset: 0x28
	// Line 831, Address: 0x156000, Func Offset: 0x30
	// Line 832, Address: 0x156008, Func Offset: 0x38
	// Line 835, Address: 0x156028, Func Offset: 0x58
	// Line 839, Address: 0x156040, Func Offset: 0x70
	// Line 842, Address: 0x15604c, Func Offset: 0x7c
	// Line 843, Address: 0x156060, Func Offset: 0x90
	// Line 848, Address: 0x156068, Func Offset: 0x98
	// Line 849, Address: 0x15607c, Func Offset: 0xac
	// Line 852, Address: 0x15609c, Func Offset: 0xcc
	// Line 854, Address: 0x1560b8, Func Offset: 0xe8
	// Line 853, Address: 0x1560c0, Func Offset: 0xf0
	// Line 854, Address: 0x1560c4, Func Offset: 0xf4
	// Line 857, Address: 0x1560e0, Func Offset: 0x110
	// Line 860, Address: 0x1560e4, Func Offset: 0x114
	// Line 857, Address: 0x1560f4, Func Offset: 0x124
	// Line 860, Address: 0x1560f8, Func Offset: 0x128
	// Line 861, Address: 0x156108, Func Offset: 0x138
	// Func End, Address: 0x156124, Func Offset: 0x154
}

// 
// Start address: 0x156130
void UpdateExtras(float* center, float radius)
{
	Light* a[16];
	int n_extras;
	int i;
	Light* l;
	// Line 868, Address: 0x156130, Func Offset: 0
	// Line 874, Address: 0x156134, Func Offset: 0x4
	// Line 868, Address: 0x156138, Func Offset: 0x8
	// Line 870, Address: 0x15614c, Func Offset: 0x1c
	// Line 868, Address: 0x156150, Func Offset: 0x20
	// Line 878, Address: 0x156154, Func Offset: 0x24
	// Line 868, Address: 0x156158, Func Offset: 0x28
	// Line 878, Address: 0x156160, Func Offset: 0x30
	// Line 868, Address: 0x156164, Func Offset: 0x34
	// Line 874, Address: 0x156170, Func Offset: 0x40
	// Line 878, Address: 0x156174, Func Offset: 0x44
	// Line 879, Address: 0x156178, Func Offset: 0x48
	// Line 880, Address: 0x156180, Func Offset: 0x50
	// Line 882, Address: 0x1561a4, Func Offset: 0x74
	// Line 883, Address: 0x1561a8, Func Offset: 0x78
	// Line 884, Address: 0x1561b8, Func Offset: 0x88
	// Line 888, Address: 0x1561d0, Func Offset: 0xa0
	// Line 891, Address: 0x1561dc, Func Offset: 0xac
	// Line 892, Address: 0x1561f0, Func Offset: 0xc0
	// Line 897, Address: 0x1561f8, Func Offset: 0xc8
	// Line 898, Address: 0x15620c, Func Offset: 0xdc
	// Line 900, Address: 0x15622c, Func Offset: 0xfc
	// Line 902, Address: 0x156248, Func Offset: 0x118
	// Line 903, Address: 0x15624c, Func Offset: 0x11c
	// Line 902, Address: 0x156254, Func Offset: 0x124
	// Line 903, Address: 0x15625c, Func Offset: 0x12c
	// Line 904, Address: 0x156270, Func Offset: 0x140
	// Func End, Address: 0x156298, Func Offset: 0x168
}

// 
// Start address: 0x1562a0
void LightUpdateInfoByScene()
{
	// Line 911, Address: 0x1562a0, Func Offset: 0
	// Line 912, Address: 0x1562a8, Func Offset: 0x8
	// Line 914, Address: 0x1562b0, Func Offset: 0x10
	// Line 915, Address: 0x1562b8, Func Offset: 0x18
	// Line 916, Address: 0x1562c0, Func Offset: 0x20
	// Line 923, Address: 0x1562c8, Func Offset: 0x28
	// Func End, Address: 0x1562d4, Func Offset: 0x34
}

// 
// Start address: 0x1562e0
void LightUpdateInfoByPos(float* center, float radius)
{
	// Line 931, Address: 0x1562e0, Func Offset: 0
	// Func End, Address: 0x1562e8, Func Offset: 0x8
}

// 
// Start address: 0x1562f0
int LightNValidParallelMatrices()
{
	// Line 963, Address: 0x1562f0, Func Offset: 0
	// Line 964, Address: 0x15630c, Func Offset: 0x1c
	// Func End, Address: 0x156314, Func Offset: 0x24
}

// 
// Start address: 0x156320
void LightGetNthViewNLM(float nlm[4], int n)
{
	// Line 979, Address: 0x156320, Func Offset: 0
	// Func End, Address: 0x156338, Func Offset: 0x18
}

// 
// Start address: 0x156340
void LightGetNthLCM(float lcm[4], int n)
{
	// Line 989, Address: 0x156340, Func Offset: 0
	// Func End, Address: 0x156358, Func Offset: 0x18
}

// 
// Start address: 0x156360
float LightReflectionBrightness()
{
	// Line 998, Address: 0x156360, Func Offset: 0
	// Line 999, Address: 0x156364, Func Offset: 0x4
	// Func End, Address: 0x15636c, Func Offset: 0xc
}

// 
// Start address: 0x156370
void LightGetReflectionColor(float* color)
{
	// Line 1007, Address: 0x156370, Func Offset: 0
	// Func End, Address: 0x15637c, Func Offset: 0xc
}

// 
// Start address: 0x156380
float* LightReflectionColor()
{
	// Line 1016, Address: 0x156380, Func Offset: 0
	// Line 1017, Address: 0x156384, Func Offset: 0x4
	// Func End, Address: 0x15638c, Func Offset: 0xc
}

// 
// Start address: 0x156390
void LightGetNthViewNHM(float nhm[4])
{
	// Line 1030, Address: 0x156390, Func Offset: 0
	// Func End, Address: 0x15639c, Func Offset: 0xc
}

// 
// Start address: 0x1563a0
int LightNValidExtras()
{
	// Line 1039, Address: 0x1563a0, Func Offset: 0
	// Line 1040, Address: 0x1563a4, Func Offset: 0x4
	// Func End, Address: 0x1563ac, Func Offset: 0xc
}

// 
// Start address: 0x1563b0
Light* LightNthValidExtra(int n)
{
	// Line 1050, Address: 0x1563b0, Func Offset: 0
	// Line 1054, Address: 0x1563d8, Func Offset: 0x28
	// Func End, Address: 0x1563e0, Func Offset: 0x30
}

// 
// Start address: 0x1563e0
void LightInit()
{
	// Line 1206, Address: 0x1563e0, Func Offset: 0
	// Func End, Address: 0x1563f4, Func Offset: 0x14
}

