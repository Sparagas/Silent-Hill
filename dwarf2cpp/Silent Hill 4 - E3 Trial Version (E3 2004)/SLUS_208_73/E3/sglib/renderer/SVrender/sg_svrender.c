typedef struct _anon0;
typedef struct sgCamera;
typedef struct _anon1;
typedef struct sgSVModelDataTop;
typedef struct sgSVRenderWork;
typedef struct _anon2;
typedef enum sgLightType : unsigned char;
typedef struct sgSVModel;


typedef float type_0[4][4];
typedef _anon0* type_1[4];
typedef float type_2[4][8];
typedef float type_3[4][6];
typedef float type_4[4];
typedef float type_5[4];
typedef float type_6[4];
typedef float type_7[4][4][95];

struct _anon0
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
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
	_anon2 view_frustum;
	float wpm[4][4];
	unsigned int dirty;
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

struct sgSVModelDataTop
{
	unsigned int type_id;
	int version;
	int type;
	unsigned int n_meshes;
	unsigned int mesh_table_offset;
	unsigned int n_bones;
	unsigned int matrices_offset;
};

struct sgSVRenderWork
{
	float wpm[4][4];
	float psm[4][4];
	float wsm[4][4];
	float pushed_matirices[4][4][95];
	float matrices[4][4];
	_anon0* current_light;
	sgCamera* current_camera;
	_anon1* current_screen;
	_anon0* lights[4];
	int itop_flip;
	int use_zfail;
	int auto_pushin;
	float volume_length;
	float pushin_length;
};

struct _anon2
{
	float v[4][8];
	float plane[4][6];
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

_anon0 default_light;
sgSVRenderWork sv_work;
float sg_matrix_unit[4][4];

void sgSVRenderInit();
void sgSVRenderStateSetZFail(int use_zfail);
void sgSVRenderStateSetVolumeLength(float length);
void sgSVRenderStateSetVolumePushIn(float length);
void sgSVRenderStateSetAutoVolumePushIn(int val);
void sgSVRenderStateSetCamera(sgCamera* camera);
void sgSVRenderStateSetScreen(_anon1* screen);
void sgSVRenderStateSetLight(_anon0* light);
void GetProjectionScreenMatrix(_anon1* scr, float psm[4]);
int sgSVRenderUpdateMatrices(sgSVModel* model);
void sgSVRenderUpdateLights();
void sgSVRenderDraw(sgSVModel* model);

// 
// Start address: 0x207700
void sgSVRenderInit()
{
	float v[4];
	// Line 25, Address: 0x207700, Func Offset: 0
	// Line 28, Address: 0x207704, Func Offset: 0x4
	// Line 25, Address: 0x207708, Func Offset: 0x8
	// Line 28, Address: 0x20770c, Func Offset: 0xc
	// Line 29, Address: 0x207718, Func Offset: 0x18
	// Line 30, Address: 0x20771c, Func Offset: 0x1c
	// Line 29, Address: 0x207720, Func Offset: 0x20
	// Line 30, Address: 0x207724, Func Offset: 0x24
	// Line 31, Address: 0x20772c, Func Offset: 0x2c
	// Line 32, Address: 0x207730, Func Offset: 0x30
	// Line 34, Address: 0x207738, Func Offset: 0x38
	// Line 35, Address: 0x207744, Func Offset: 0x44
	// Line 36, Address: 0x207754, Func Offset: 0x54
	// Line 37, Address: 0x207774, Func Offset: 0x74
	// Line 38, Address: 0x207798, Func Offset: 0x98
	// Line 39, Address: 0x2077a8, Func Offset: 0xa8
	// Line 40, Address: 0x2077b4, Func Offset: 0xb4
	// Func End, Address: 0x2077c0, Func Offset: 0xc0
}

// 
// Start address: 0x2077c0
void sgSVRenderStateSetZFail(int use_zfail)
{
	// Line 48, Address: 0x2077c0, Func Offset: 0
	// Line 49, Address: 0x2077c4, Func Offset: 0x4
	// Func End, Address: 0x2077cc, Func Offset: 0xc
}

// 
// Start address: 0x2077d0
void sgSVRenderStateSetVolumeLength(float length)
{
	// Line 55, Address: 0x2077d0, Func Offset: 0
	// Line 56, Address: 0x2077d4, Func Offset: 0x4
	// Func End, Address: 0x2077dc, Func Offset: 0xc
}

// 
// Start address: 0x2077e0
void sgSVRenderStateSetVolumePushIn(float length)
{
	// Line 62, Address: 0x2077e0, Func Offset: 0
	// Line 63, Address: 0x2077e4, Func Offset: 0x4
	// Func End, Address: 0x2077ec, Func Offset: 0xc
}

// 
// Start address: 0x2077f0
void sgSVRenderStateSetAutoVolumePushIn(int val)
{
	// Line 72, Address: 0x2077f0, Func Offset: 0
	// Line 73, Address: 0x2077f4, Func Offset: 0x4
	// Func End, Address: 0x2077fc, Func Offset: 0xc
}

// 
// Start address: 0x207800
void sgSVRenderStateSetCamera(sgCamera* camera)
{
	// Line 82, Address: 0x207800, Func Offset: 0
	// Line 83, Address: 0x207804, Func Offset: 0x4
	// Func End, Address: 0x20780c, Func Offset: 0xc
}

// 
// Start address: 0x207810
void sgSVRenderStateSetScreen(_anon1* screen)
{
	// Line 92, Address: 0x207810, Func Offset: 0
	// Line 93, Address: 0x207814, Func Offset: 0x4
	// Func End, Address: 0x20781c, Func Offset: 0xc
}

// 
// Start address: 0x207820
void sgSVRenderStateSetLight(_anon0* light)
{
	// Line 102, Address: 0x207820, Func Offset: 0
	// Line 103, Address: 0x207824, Func Offset: 0x4
	// Func End, Address: 0x20782c, Func Offset: 0xc
}

// 
// Start address: 0x207830
void GetProjectionScreenMatrix(_anon1* scr, float psm[4])
{
	// Line 110, Address: 0x207830, Func Offset: 0
	// Line 111, Address: 0x207858, Func Offset: 0x28
	// Line 112, Address: 0x207894, Func Offset: 0x64
	// Line 114, Address: 0x20789c, Func Offset: 0x6c
	// Line 119, Address: 0x2078b4, Func Offset: 0x84
	// Line 114, Address: 0x2078b8, Func Offset: 0x88
	// Line 117, Address: 0x2078c4, Func Offset: 0x94
	// Line 114, Address: 0x2078c8, Func Offset: 0x98
	// Line 117, Address: 0x2078cc, Func Offset: 0x9c
	// Line 114, Address: 0x2078d4, Func Offset: 0xa4
	// Line 115, Address: 0x2078dc, Func Offset: 0xac
	// Line 117, Address: 0x2078e4, Func Offset: 0xb4
	// Line 118, Address: 0x207908, Func Offset: 0xd8
	// Line 119, Address: 0x207928, Func Offset: 0xf8
	// Line 120, Address: 0x207934, Func Offset: 0x104
	// Line 121, Address: 0x207938, Func Offset: 0x108
	// Line 120, Address: 0x207948, Func Offset: 0x118
	// Line 121, Address: 0x207950, Func Offset: 0x120
	// Line 122, Address: 0x20795c, Func Offset: 0x12c
	// Line 123, Address: 0x207960, Func Offset: 0x130
	// Func End, Address: 0x207968, Func Offset: 0x138
}

// 
// Start address: 0x207970
int sgSVRenderUpdateMatrices(sgSVModel* model)
{
	sgSVRenderWork* work;
	sgSVModelDataTop* data_top;
	float wvm[4][4];
	float vpm[4][4];
	float init_mp[4][4];
	float dv[4];
	float v2[4];
	int i;
	float lw_mp[4];
	int i;
	float v[4];
	_anon0* light;
	sgLightType ltype;
	float l;
	float pos[4];
	// Line 126, Address: 0x207970, Func Offset: 0
	// Line 127, Address: 0x207990, Func Offset: 0x20
	// Line 126, Address: 0x207994, Func Offset: 0x24
	// Line 128, Address: 0x207998, Func Offset: 0x28
	// Line 137, Address: 0x20799c, Func Offset: 0x2c
	// Line 138, Address: 0x2079b8, Func Offset: 0x48
	// Line 139, Address: 0x2079c8, Func Offset: 0x58
	// Line 140, Address: 0x2079d0, Func Offset: 0x60
	// Line 142, Address: 0x2079f0, Func Offset: 0x80
	// Line 143, Address: 0x2079f8, Func Offset: 0x88
	// Line 144, Address: 0x2079fc, Func Offset: 0x8c
	// Line 145, Address: 0x207a08, Func Offset: 0x98
	// Line 146, Address: 0x207a88, Func Offset: 0x118
	// Line 147, Address: 0x207aa0, Func Offset: 0x130
	// Line 149, Address: 0x207aa8, Func Offset: 0x138
	// Line 152, Address: 0x207ab0, Func Offset: 0x140
	// Line 153, Address: 0x207abc, Func Offset: 0x14c
	// Line 154, Address: 0x207ad4, Func Offset: 0x164
	// Line 156, Address: 0x207b4c, Func Offset: 0x1dc
	// Line 157, Address: 0x207b58, Func Offset: 0x1e8
	// Line 160, Address: 0x207bd0, Func Offset: 0x260
	// Line 164, Address: 0x207bf0, Func Offset: 0x280
	// Line 165, Address: 0x207bf8, Func Offset: 0x288
	// Line 167, Address: 0x207c04, Func Offset: 0x294
	// Line 169, Address: 0x207c10, Func Offset: 0x2a0
	// Line 168, Address: 0x207c14, Func Offset: 0x2a4
	// Line 169, Address: 0x207c1c, Func Offset: 0x2ac
	// Line 170, Address: 0x207c24, Func Offset: 0x2b4
	// Line 173, Address: 0x207c50, Func Offset: 0x2e0
	// Line 174, Address: 0x207c60, Func Offset: 0x2f0
	// Line 175, Address: 0x207c6c, Func Offset: 0x2fc
	// Line 176, Address: 0x207c80, Func Offset: 0x310
	// Line 177, Address: 0x207ca0, Func Offset: 0x330
	// Line 178, Address: 0x207ccc, Func Offset: 0x35c
	// Line 179, Address: 0x207cec, Func Offset: 0x37c
	// Line 180, Address: 0x207cf8, Func Offset: 0x388
	// Line 181, Address: 0x207d1c, Func Offset: 0x3ac
	// Line 182, Address: 0x207d20, Func Offset: 0x3b0
	// Line 183, Address: 0x207d24, Func Offset: 0x3b4
	// Line 184, Address: 0x207d30, Func Offset: 0x3c0
	// Line 185, Address: 0x207d68, Func Offset: 0x3f8
	// Line 186, Address: 0x207d90, Func Offset: 0x420
	// Line 187, Address: 0x207db0, Func Offset: 0x440
	// Line 189, Address: 0x207db8, Func Offset: 0x448
	// Line 190, Address: 0x207dcc, Func Offset: 0x45c
	// Line 191, Address: 0x207e08, Func Offset: 0x498
	// Line 192, Address: 0x207e24, Func Offset: 0x4b4
	// Line 193, Address: 0x207e48, Func Offset: 0x4d8
	// Line 194, Address: 0x207e54, Func Offset: 0x4e4
	// Line 195, Address: 0x207e68, Func Offset: 0x4f8
	// Line 196, Address: 0x207e8c, Func Offset: 0x51c
	// Line 197, Address: 0x207e90, Func Offset: 0x520
	// Line 199, Address: 0x207eac, Func Offset: 0x53c
	// Line 198, Address: 0x207ebc, Func Offset: 0x54c
	// Line 199, Address: 0x207ec0, Func Offset: 0x550
	// Line 200, Address: 0x207ee8, Func Offset: 0x578
	// Line 201, Address: 0x207f10, Func Offset: 0x5a0
	// Line 203, Address: 0x207f30, Func Offset: 0x5c0
	// Line 205, Address: 0x207f38, Func Offset: 0x5c8
	// Line 206, Address: 0x207f40, Func Offset: 0x5d0
	// Func End, Address: 0x207f64, Func Offset: 0x5f4
}

// 
// Start address: 0x207f70
void sgSVRenderUpdateLights()
{
	// Line 212, Address: 0x207f70, Func Offset: 0
	// Line 213, Address: 0x207f7c, Func Offset: 0xc
	// Func End, Address: 0x207f84, Func Offset: 0x14
}

// 
// Start address: 0x207f90
void sgSVRenderDraw(sgSVModel* model)
{
	sgSVModelDataTop* data_top;
	sgSVRenderWork* work;
	// Line 220, Address: 0x207f90, Func Offset: 0
	// Line 226, Address: 0x207f94, Func Offset: 0x4
	// Line 220, Address: 0x207f98, Func Offset: 0x8
	// Line 226, Address: 0x207f9c, Func Offset: 0xc
	// Line 220, Address: 0x207fa0, Func Offset: 0x10
	// Line 221, Address: 0x207fb0, Func Offset: 0x20
	// Line 222, Address: 0x207fb4, Func Offset: 0x24
	// Line 226, Address: 0x207fb8, Func Offset: 0x28
	// Line 230, Address: 0x207fc4, Func Offset: 0x34
	// Line 232, Address: 0x207fcc, Func Offset: 0x3c
	// Line 236, Address: 0x207fd8, Func Offset: 0x48
	// Line 242, Address: 0x207fe8, Func Offset: 0x58
	// Line 243, Address: 0x207ff0, Func Offset: 0x60
	// Func End, Address: 0x208008, Func Offset: 0x78
}

