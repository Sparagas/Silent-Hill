typedef struct sgTexArc;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sgCamera;
typedef struct _anon2;
typedef struct _anon3;
typedef struct ModelWork;
typedef struct _anon4;
typedef struct _anon5;

typedef void(*type_3)(_anon0*, int, int, float*);
typedef int(*type_11)(void*, void*, void*);
typedef void(*type_12)(_anon0*, int, int, float*);

typedef float type_0[4][4];
typedef unsigned long type_1[2];
typedef float type_2[4];
typedef float type_4[4];
typedef float type_5[4];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef float type_9[4][8];
typedef float type_10[4][6];
typedef <unknown fundamental type (0xa510)> type_13[256];
typedef <unknown fundamental type (0xa510)> type_14[256][2];
typedef long type_15[2];

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon1
{
	float psm[4][4];
	int screen_zmax;
	int screen_zmin;
	float screen_cx;
	float screen_cy;
	int screen_width;
	int screen_height;
	float pixel_aspect;
	unsigned int dirty;
};

struct sgCamera
{
	float view_world[4][4];
	float view_angle;
	float zoom_factor;
	float aspect;
	float near_z;
	float far_z;
	float vpm[4][4];
	float wvm[4][4];
	_anon3 view_frustum;
	float wpm[4][4];
	unsigned int dirty;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long tex1;
	unsigned long clamp;
	unsigned long alpha;
};

struct _anon3
{
	float v[4][8];
	float plane[4][6];
};

struct ModelWork
{
	unsigned int id;
	float matrices[4][4];
	float* cluster_weights;
	float crops[4];
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
	void(*texture_load_func)(_anon0*, int, int, float*);
};

struct _anon4
{
	_anon1 scr;
	sgCamera cam;
	float view_screen[4][4];
	float view_world[4][4];
	float world_view[4][4];
	float world_screen[4][4];
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

_anon4 render_state;
<unknown fundamental type (0xa510)> vif0_pk_buf_db[256][2];
float sg_matrix_unit[4][4];

void sgTERenderInit();
void sgTERenderStateSetGlobalTexture(sgTexArc* tex_data);
void sgTERenderStateSetScreen(_anon1* scr);
void sgTERenderStateSetCamera(sgCamera* cam);
void sgTERenderStateSetGS_ALPHA(unsigned long alpha);
void sgTERenderStateResetGS_ALPHA();
void sgTERenderStateSetGS_TEST(unsigned long test);
void sgTERenderStateResetGS_TEST();
void sgTERenderStateSetGS_FBA(unsigned long fba);
void sgTERenderStateResetGS_FBA();
void sgTERenderStateSetNormalNormalize(int val);
void sgTERenderStateResetNormalNormalize();
void sgTERenderStateSetMultiMap(unsigned int maptexture_bit);
void sgTERenderStateSetMultiMapParams(_anon2* mparams);
void sgTERenderDraw(_anon5* model);
float[4] sgTERenderWorldViewMatrix();
float[4] sgTERenderViewScreenMatrix();
float* sgTERenderCameraPosition();

// 
// Start address: 0x153df0
void sgTERenderInit()
{
	sgCamera cam;
	_anon1 scr;
	// Line 71, Address: 0x153df0, Func Offset: 0
	// Line 75, Address: 0x153df8, Func Offset: 0x8
	// Line 76, Address: 0x153e00, Func Offset: 0x10
	// Line 77, Address: 0x153e08, Func Offset: 0x18
	// Line 78, Address: 0x153e10, Func Offset: 0x20
	// Line 81, Address: 0x153e18, Func Offset: 0x28
	// Line 82, Address: 0x153e20, Func Offset: 0x30
	// Line 83, Address: 0x153e28, Func Offset: 0x38
	// Line 95, Address: 0x153e30, Func Offset: 0x40
	// Line 99, Address: 0x153e48, Func Offset: 0x58
	// Line 100, Address: 0x153e5c, Func Offset: 0x6c
	// Line 105, Address: 0x153e64, Func Offset: 0x74
	// Line 106, Address: 0x153e6c, Func Offset: 0x7c
	// Line 107, Address: 0x153e74, Func Offset: 0x84
	// Line 108, Address: 0x153e7c, Func Offset: 0x8c
	// Line 112, Address: 0x153e84, Func Offset: 0x94
	// Line 113, Address: 0x153e8c, Func Offset: 0x9c
	// Line 115, Address: 0x153e94, Func Offset: 0xa4
	// Line 116, Address: 0x153ea8, Func Offset: 0xb8
	// Line 118, Address: 0x153eb4, Func Offset: 0xc4
	// Func End, Address: 0x153ec0, Func Offset: 0xd0
}

// 
// Start address: 0x153ec0
void sgTERenderStateSetGlobalTexture(sgTexArc* tex_data)
{
	// Line 130, Address: 0x153ec0, Func Offset: 0
	// Func End, Address: 0x153ec8, Func Offset: 0x8
}

// 
// Start address: 0x153ed0
void sgTERenderStateSetScreen(_anon1* scr)
{
	// Line 137, Address: 0x153ed0, Func Offset: 0
	// Line 138, Address: 0x153f04, Func Offset: 0x34
	// Func End, Address: 0x153f0c, Func Offset: 0x3c
}

// 
// Start address: 0x153f10
void sgTERenderStateSetCamera(sgCamera* cam)
{
	float vsm[4][4];
	_anon1* scr;
	// Line 142, Address: 0x153f10, Func Offset: 0
	// Line 145, Address: 0x153f14, Func Offset: 0x4
	// Line 142, Address: 0x153f18, Func Offset: 0x8
	// Line 145, Address: 0x153f1c, Func Offset: 0xc
	// Line 142, Address: 0x153f20, Func Offset: 0x10
	// Line 144, Address: 0x153f30, Func Offset: 0x20
	// Line 145, Address: 0x153f34, Func Offset: 0x24
	// Line 146, Address: 0x153f3c, Func Offset: 0x2c
	// Line 149, Address: 0x153fc4, Func Offset: 0xb4
	// Line 150, Address: 0x153ff0, Func Offset: 0xe0
	// Line 157, Address: 0x154078, Func Offset: 0x168
	// Line 158, Address: 0x154090, Func Offset: 0x180
	// Line 159, Address: 0x1540a8, Func Offset: 0x198
	// Line 164, Address: 0x1540b4, Func Offset: 0x1a4
	// Line 165, Address: 0x1540d4, Func Offset: 0x1c4
	// Line 169, Address: 0x1540f4, Func Offset: 0x1e4
	// Line 170, Address: 0x1540fc, Func Offset: 0x1ec
	// Func End, Address: 0x154114, Func Offset: 0x204
}

// 
// Start address: 0x154120
void sgTERenderStateSetGS_ALPHA(unsigned long alpha)
{
	// Line 176, Address: 0x154120, Func Offset: 0
	// Func End, Address: 0x154128, Func Offset: 0x8
}

// 
// Start address: 0x154130
void sgTERenderStateResetGS_ALPHA()
{
	// Line 190, Address: 0x154130, Func Offset: 0
	// Func End, Address: 0x154138, Func Offset: 0x8
}

// 
// Start address: 0x154140
void sgTERenderStateSetGS_TEST(unsigned long test)
{
	// Line 197, Address: 0x154140, Func Offset: 0
	// Func End, Address: 0x154148, Func Offset: 0x8
}

// 
// Start address: 0x154150
void sgTERenderStateResetGS_TEST()
{
	// Line 204, Address: 0x154150, Func Offset: 0
	// Func End, Address: 0x154158, Func Offset: 0x8
}

// 
// Start address: 0x154160
void sgTERenderStateSetGS_FBA(unsigned long fba)
{
	// Line 211, Address: 0x154160, Func Offset: 0
	// Func End, Address: 0x154168, Func Offset: 0x8
}

// 
// Start address: 0x154170
void sgTERenderStateResetGS_FBA()
{
	// Line 218, Address: 0x154170, Func Offset: 0
	// Func End, Address: 0x154178, Func Offset: 0x8
}

// 
// Start address: 0x154180
void sgTERenderStateSetNormalNormalize(int val)
{
	// Line 232, Address: 0x154180, Func Offset: 0
	// Func End, Address: 0x154188, Func Offset: 0x8
}

// 
// Start address: 0x154190
void sgTERenderStateResetNormalNormalize()
{
	// Line 239, Address: 0x154190, Func Offset: 0
	// Func End, Address: 0x154198, Func Offset: 0x8
}

// 
// Start address: 0x1541a0
void sgTERenderStateSetMultiMap(unsigned int maptexture_bit)
{
	// Line 252, Address: 0x1541a0, Func Offset: 0
	// Func End, Address: 0x1541a8, Func Offset: 0x8
}

// 
// Start address: 0x1541b0
void sgTERenderStateSetMultiMapParams(_anon2* mparams)
{
	// Line 261, Address: 0x1541b0, Func Offset: 0
	// Func End, Address: 0x1541b8, Func Offset: 0x8
}

// 
// Start address: 0x1541c0
void sgTERenderDraw(_anon5* model)
{
	ModelWork work;
	unsigned long flag[2];
	long mask[2];
	// Line 273, Address: 0x1541c0, Func Offset: 0
	// Line 277, Address: 0x1541d0, Func Offset: 0x10
	// Line 278, Address: 0x1541d8, Func Offset: 0x18
	// Line 284, Address: 0x1541e4, Func Offset: 0x24
	// Line 287, Address: 0x1541f0, Func Offset: 0x30
	// Line 290, Address: 0x1541fc, Func Offset: 0x3c
	// Line 291, Address: 0x154208, Func Offset: 0x48
	// Line 292, Address: 0x154214, Func Offset: 0x54
	// Line 293, Address: 0x15421c, Func Offset: 0x5c
	// Line 294, Address: 0x154224, Func Offset: 0x64
	// Line 295, Address: 0x15422c, Func Offset: 0x6c
	// Line 296, Address: 0x154234, Func Offset: 0x74
	// Line 297, Address: 0x154240, Func Offset: 0x80
	// Line 298, Address: 0x154264, Func Offset: 0xa4
	// Line 299, Address: 0x154268, Func Offset: 0xa8
	// Line 298, Address: 0x154270, Func Offset: 0xb0
	// Line 299, Address: 0x154274, Func Offset: 0xb4
	// Line 301, Address: 0x154280, Func Offset: 0xc0
	// Line 302, Address: 0x15428c, Func Offset: 0xcc
	// Line 303, Address: 0x154294, Func Offset: 0xd4
	// Line 304, Address: 0x15429c, Func Offset: 0xdc
	// Line 305, Address: 0x1542a0, Func Offset: 0xe0
	// Line 307, Address: 0x1542a8, Func Offset: 0xe8
	// Line 308, Address: 0x1542b0, Func Offset: 0xf0
	// Line 310, Address: 0x1542d0, Func Offset: 0x110
	// Line 313, Address: 0x1542d8, Func Offset: 0x118
	// Func End, Address: 0x1542e8, Func Offset: 0x128
}

// 
// Start address: 0x1542f0
float[4] sgTERenderWorldViewMatrix()
{
	// Line 321, Address: 0x1542f0, Func Offset: 0
	// Line 322, Address: 0x1542f4, Func Offset: 0x4
	// Func End, Address: 0x1542fc, Func Offset: 0xc
}

// 
// Start address: 0x154300
float[4] sgTERenderViewScreenMatrix()
{
	// Line 333, Address: 0x154300, Func Offset: 0
	// Line 334, Address: 0x154304, Func Offset: 0x4
	// Func End, Address: 0x15430c, Func Offset: 0xc
}

// 
// Start address: 0x154310
float* sgTERenderCameraPosition()
{
	// Line 339, Address: 0x154310, Func Offset: 0
	// Line 340, Address: 0x154314, Func Offset: 0x4
	// Func End, Address: 0x15431c, Func Offset: 0xc
}

