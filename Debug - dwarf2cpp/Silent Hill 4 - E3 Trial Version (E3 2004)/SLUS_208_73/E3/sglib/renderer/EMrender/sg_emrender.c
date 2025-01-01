typedef struct sgBone;
typedef struct sgEMRenderModelTop;
typedef struct sgEMDrawGroup;
typedef struct _anon0;
typedef struct sgEMRenderWork;
typedef struct sgCamera;
typedef struct _anon1;
typedef struct _anon2;
typedef enum _enum : unsigned char;
typedef struct _anon3;
typedef struct sgTexArc;
typedef struct _anon4;
typedef enum sgLightType : unsigned char;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef unsigned int type_3[0];
typedef _anon3* type_4[8];
typedef _anon0 type_5[8];
typedef sgTexArc* type_6[2];
typedef float type_7[4][8];
typedef float type_8[4][6];
typedef _anon3* type_9[3];
typedef float type_10[4];

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct sgEMRenderModelTop
{
	unsigned int type_id;
	unsigned int version;
	unsigned int normal_group_offset;
	unsigned int overdraw_group_offset;
	unsigned int transparency_group_offset;
	unsigned int matrices_offset;
	unsigned int n_matrices;
	unsigned int additional_data;
	unsigned int reserved_08;
	unsigned int reserved_09;
	unsigned int reserved_0a;
	unsigned int reserved_0b;
	unsigned int reserved_0c;
	unsigned int reserved_0d;
	unsigned int reserved_0e;
	unsigned int reserved_0f;
};

struct sgEMDrawGroup
{
	unsigned int n_blocks;
	unsigned int block_offsets[0];
};

struct _anon0
{
	float light_pos[4];
	float light_color[4];
	float params[4];
	float linear_a;
	float linear_b;
	float radius;
	int valid;
};

struct sgEMRenderWork
{
	sgCamera* camera;
	_anon1* screen;
	unsigned long gs_test;
	unsigned long gs_alpha;
	int gs_test_alter;
	int gs_alpha_alter;
	unsigned long fog_col;
	float fog_a;
	float fog_b;
	int fog_enable;
	sgBone* parent;
	_enum light_mode_set;
	_enum light_mode;
	int light_alpha_enable;
	_anon3* lights[8];
	float light_color_offset[4];
	float light_add_color[4];
	float aabb_clip_local_projection[4][4];
	float local_world[4][4];
	float local_projection[4][4];
	float local_screen[4][4];
	float projection_screen[4][4];
	float normal_light_matrix[4][4];
	float light_color_matrix[4][4];
	int light_matrix_enable;
	_anon0 point_lights[8];
	int n_point_lights;
	sgTexArc* texture_addr[2];
	float matrices[4][4];
	int data_version;
	int z_buffer_offset;
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
	_anon4 view_frustum;
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

struct _anon2
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

enum _enum : unsigned char
{
	SG_EM_LIGHTING_OFF,
	SG_EM_LIGHTING_MUL,
	SG_EM_LIGHTING_OFFSET_MUL,
	SG_EM_LIGHTING_ADD
};

struct _anon3
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

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon4
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

sgEMRenderWork em_render_work;
unsigned long* sg_packet_cur;
float sg_matrix_zero[4][4];

void sgEMRenderStateSetCamera(sgCamera* camera_);
void sgEMRenderStateSetScreen(_anon1* screen_);
void sgEMRenderStateSetFogEnable(int use_fog);
void sgEMRenderStateSetFogParam(float near, unsigned char near_pow, float far, unsigned char far_pow);
void sgEMRenderStateSetFogColor(unsigned char* fog_color);
void sgEMRenderStateSetGS_ALPHA(unsigned long alpha);
void sgEMRenderStateResetGS_ALPHA();
void sgEMRenderStateSetGS_TEST(unsigned long test);
void sgEMRenderStateResetGS_TEST();
void sgEMRenderStateSetLightingMode(_enum val);
void sgEMRenderStateAddLight(_anon3* light);
void sgEMRenderStateRemoveLight(_anon3* light);
void sgEMRenderStateRemoveLightAll();
void sgEMRenderStateSetZValueOffset(int d);
void SetNormalGSEnv();
void SetOverDrawGSEnv();
void SetSortDrawGSEnv();
void sgEMRenderInit();
void PointLightDataCreate(_anon0* pdata, _anon3* light);
void UpdateLightStatus();
void UpdateRenderWork(_anon2* em_model);
void DrawNormalGroupBlocks(sgEMDrawGroup* group);
void DrawSortGroupBlocks(sgEMDrawGroup* group);
void sgEMRenderDraw(_anon2* em_model);
void sgEMRenderDrawVU1PartPrepare();
void sgEMRenderDrawVU1Part(_anon2* em_model);
void sgEMRenderDrawVU1PartWait();
void sgEMRenderDrawVU0Part(_anon2* em_model);

// 
// Start address: 0x1cdef0
void sgEMRenderStateSetCamera(sgCamera* camera_)
{
	// Line 32, Address: 0x1cdef0, Func Offset: 0
	// Line 33, Address: 0x1cdef4, Func Offset: 0x4
	// Func End, Address: 0x1cdefc, Func Offset: 0xc
}

// 
// Start address: 0x1cdf00
void sgEMRenderStateSetScreen(_anon1* screen_)
{
	// Line 40, Address: 0x1cdf00, Func Offset: 0
	// Line 41, Address: 0x1cdf04, Func Offset: 0x4
	// Func End, Address: 0x1cdf0c, Func Offset: 0xc
}

// 
// Start address: 0x1cdf10
void sgEMRenderStateSetFogEnable(int use_fog)
{
	// Line 50, Address: 0x1cdf10, Func Offset: 0
	// Line 51, Address: 0x1cdf14, Func Offset: 0x4
	// Func End, Address: 0x1cdf1c, Func Offset: 0xc
}

// 
// Start address: 0x1cdf20
void sgEMRenderStateSetFogParam(float near, unsigned char near_pow, float far, unsigned char far_pow)
{
	float min;
	float max;
	// Line 82, Address: 0x1cdf20, Func Offset: 0
	// Line 84, Address: 0x1cdf2c, Func Offset: 0xc
	// Line 86, Address: 0x1cdf34, Func Offset: 0x14
	// Line 84, Address: 0x1cdf38, Func Offset: 0x18
	// Line 85, Address: 0x1cdf3c, Func Offset: 0x1c
	// Line 84, Address: 0x1cdf40, Func Offset: 0x20
	// Line 85, Address: 0x1cdf44, Func Offset: 0x24
	// Line 84, Address: 0x1cdf4c, Func Offset: 0x2c
	// Line 85, Address: 0x1cdf50, Func Offset: 0x30
	// Line 87, Address: 0x1cdf58, Func Offset: 0x38
	// Line 86, Address: 0x1cdf5c, Func Offset: 0x3c
	// Line 87, Address: 0x1cdf68, Func Offset: 0x48
	// Line 86, Address: 0x1cdf6c, Func Offset: 0x4c
	// Line 87, Address: 0x1cdf74, Func Offset: 0x54
	// Line 88, Address: 0x1cdf80, Func Offset: 0x60
	// Func End, Address: 0x1cdf88, Func Offset: 0x68
}

// 
// Start address: 0x1cdf90
void sgEMRenderStateSetFogColor(unsigned char* fog_color)
{
	// Line 96, Address: 0x1cdf90, Func Offset: 0
	// Line 97, Address: 0x1cdfb0, Func Offset: 0x20
	// Func End, Address: 0x1cdfb8, Func Offset: 0x28
}

// 
// Start address: 0x1cdfc0
void sgEMRenderStateSetGS_ALPHA(unsigned long alpha)
{
	// Line 110, Address: 0x1cdfc0, Func Offset: 0
	// Line 109, Address: 0x1cdfc4, Func Offset: 0x4
	// Line 110, Address: 0x1cdfc8, Func Offset: 0x8
	// Line 109, Address: 0x1cdfcc, Func Offset: 0xc
	// Line 111, Address: 0x1cdfd0, Func Offset: 0x10
	// Func End, Address: 0x1cdfd8, Func Offset: 0x18
}

// 
// Start address: 0x1cdfe0
void sgEMRenderStateResetGS_ALPHA()
{
	// Line 120, Address: 0x1cdfe0, Func Offset: 0
	// Line 121, Address: 0x1cdfe4, Func Offset: 0x4
	// Func End, Address: 0x1cdfec, Func Offset: 0xc
}

// 
// Start address: 0x1cdff0
void sgEMRenderStateSetGS_TEST(unsigned long test)
{
	// Line 132, Address: 0x1cdff0, Func Offset: 0
	// Line 131, Address: 0x1cdff4, Func Offset: 0x4
	// Line 132, Address: 0x1cdff8, Func Offset: 0x8
	// Line 131, Address: 0x1cdffc, Func Offset: 0xc
	// Line 133, Address: 0x1ce000, Func Offset: 0x10
	// Func End, Address: 0x1ce008, Func Offset: 0x18
}

// 
// Start address: 0x1ce010
void sgEMRenderStateResetGS_TEST()
{
	// Line 142, Address: 0x1ce010, Func Offset: 0
	// Line 143, Address: 0x1ce014, Func Offset: 0x4
	// Func End, Address: 0x1ce01c, Func Offset: 0xc
}

// 
// Start address: 0x1ce020
void sgEMRenderStateSetLightingMode(_enum val)
{
	// Line 174, Address: 0x1ce020, Func Offset: 0
	// Line 175, Address: 0x1ce024, Func Offset: 0x4
	// Func End, Address: 0x1ce02c, Func Offset: 0xc
}

// 
// Start address: 0x1ce030
void sgEMRenderStateAddLight(_anon3* light)
{
	sgEMRenderWork* w;
	int i;
	// Line 222, Address: 0x1ce030, Func Offset: 0
	// Line 225, Address: 0x1ce034, Func Offset: 0x4
	// Line 222, Address: 0x1ce038, Func Offset: 0x8
	// Line 226, Address: 0x1ce040, Func Offset: 0x10
	// Line 227, Address: 0x1ce04c, Func Offset: 0x1c
	// Line 228, Address: 0x1ce054, Func Offset: 0x24
	// Line 230, Address: 0x1ce05c, Func Offset: 0x2c
	// Line 231, Address: 0x1ce070, Func Offset: 0x40
	// Func End, Address: 0x1ce078, Func Offset: 0x48
}

// 
// Start address: 0x1ce080
void sgEMRenderStateRemoveLight(_anon3* light)
{
	sgEMRenderWork* w;
	int i;
	// Line 240, Address: 0x1ce080, Func Offset: 0
	// Line 243, Address: 0x1ce084, Func Offset: 0x4
	// Line 240, Address: 0x1ce088, Func Offset: 0x8
	// Line 244, Address: 0x1ce090, Func Offset: 0x10
	// Line 245, Address: 0x1ce09c, Func Offset: 0x1c
	// Line 246, Address: 0x1ce0a4, Func Offset: 0x24
	// Line 248, Address: 0x1ce0ac, Func Offset: 0x2c
	// Line 249, Address: 0x1ce0c0, Func Offset: 0x40
	// Func End, Address: 0x1ce0c8, Func Offset: 0x48
}

// 
// Start address: 0x1ce0d0
void sgEMRenderStateRemoveLightAll()
{
	sgEMRenderWork* w;
	// Line 257, Address: 0x1ce0d0, Func Offset: 0
	// Line 260, Address: 0x1ce0d8, Func Offset: 0x8
	// Line 262, Address: 0x1ce0f4, Func Offset: 0x24
	// Func End, Address: 0x1ce0fc, Func Offset: 0x2c
}

// 
// Start address: 0x1ce100
void sgEMRenderStateSetZValueOffset(int d)
{
	// Line 269, Address: 0x1ce100, Func Offset: 0
	// Line 270, Address: 0x1ce104, Func Offset: 0x4
	// Func End, Address: 0x1ce10c, Func Offset: 0xc
}

// 
// Start address: 0x1ce110
void SetNormalGSEnv()
{
	unsigned long* pk;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 278, Address: 0x1ce110, Func Offset: 0
	// Line 282, Address: 0x1ce114, Func Offset: 0x4
	// Line 278, Address: 0x1ce118, Func Offset: 0x8
	// Line 282, Address: 0x1ce11c, Func Offset: 0xc
	// Line 283, Address: 0x1ce134, Func Offset: 0x24
	// Line 284, Address: 0x1ce13c, Func Offset: 0x2c
	// Line 285, Address: 0x1ce144, Func Offset: 0x34
	// Line 286, Address: 0x1ce150, Func Offset: 0x40
	// Line 287, Address: 0x1ce160, Func Offset: 0x50
	// Line 288, Address: 0x1ce180, Func Offset: 0x70
	// Line 289, Address: 0x1ce188, Func Offset: 0x78
	// Line 291, Address: 0x1ce1b0, Func Offset: 0xa0
	// Line 294, Address: 0x1ce1cc, Func Offset: 0xbc
	// Line 295, Address: 0x1ce1d4, Func Offset: 0xc4
	// Line 296, Address: 0x1ce1d8, Func Offset: 0xc8
	// Line 291, Address: 0x1ce1dc, Func Offset: 0xcc
	// Line 294, Address: 0x1ce1ec, Func Offset: 0xdc
	// Line 291, Address: 0x1ce1f0, Func Offset: 0xe0
	// Line 294, Address: 0x1ce1f4, Func Offset: 0xe4
	// Line 295, Address: 0x1ce208, Func Offset: 0xf8
	// Line 294, Address: 0x1ce20c, Func Offset: 0xfc
	// Line 295, Address: 0x1ce210, Func Offset: 0x100
	// Line 296, Address: 0x1ce224, Func Offset: 0x114
	// Line 295, Address: 0x1ce228, Func Offset: 0x118
	// Line 296, Address: 0x1ce22c, Func Offset: 0x11c
	// Line 297, Address: 0x1ce248, Func Offset: 0x138
	// Line 298, Address: 0x1ce250, Func Offset: 0x140
	// Line 299, Address: 0x1ce268, Func Offset: 0x158
	// Line 300, Address: 0x1ce280, Func Offset: 0x170
	// Func End, Address: 0x1ce290, Func Offset: 0x180
}

// 
// Start address: 0x1ce290
void SetOverDrawGSEnv()
{
	unsigned long* pk;
	unsigned long* p;
	unsigned long* p;
	// Line 304, Address: 0x1ce290, Func Offset: 0
	// Line 305, Address: 0x1ce294, Func Offset: 0x4
	// Line 304, Address: 0x1ce298, Func Offset: 0x8
	// Line 305, Address: 0x1ce29c, Func Offset: 0xc
	// Line 307, Address: 0x1ce2b4, Func Offset: 0x24
	// Line 308, Address: 0x1ce2bc, Func Offset: 0x2c
	// Line 309, Address: 0x1ce2c4, Func Offset: 0x34
	// Line 311, Address: 0x1ce2d4, Func Offset: 0x44
	// Line 312, Address: 0x1ce2dc, Func Offset: 0x4c
	// Line 313, Address: 0x1ce2e8, Func Offset: 0x58
	// Line 314, Address: 0x1ce2f8, Func Offset: 0x68
	// Line 315, Address: 0x1ce318, Func Offset: 0x88
	// Line 316, Address: 0x1ce320, Func Offset: 0x90
	// Line 318, Address: 0x1ce348, Func Offset: 0xb8
	// Line 319, Address: 0x1ce350, Func Offset: 0xc0
	// Line 320, Address: 0x1ce358, Func Offset: 0xc8
	// Line 321, Address: 0x1ce360, Func Offset: 0xd0
	// Line 322, Address: 0x1ce36c, Func Offset: 0xdc
	// Line 323, Address: 0x1ce384, Func Offset: 0xf4
	// Func End, Address: 0x1ce394, Func Offset: 0x104
}

// 
// Start address: 0x1ce3a0
void SetSortDrawGSEnv()
{
	unsigned long* pk;
	unsigned long* p;
	unsigned long* p;
	// Line 327, Address: 0x1ce3a0, Func Offset: 0
	// Line 328, Address: 0x1ce3a4, Func Offset: 0x4
	// Line 327, Address: 0x1ce3a8, Func Offset: 0x8
	// Line 328, Address: 0x1ce3ac, Func Offset: 0xc
	// Line 330, Address: 0x1ce3c4, Func Offset: 0x24
	// Line 331, Address: 0x1ce3cc, Func Offset: 0x2c
	// Line 332, Address: 0x1ce3d4, Func Offset: 0x34
	// Line 334, Address: 0x1ce3e4, Func Offset: 0x44
	// Line 335, Address: 0x1ce3ec, Func Offset: 0x4c
	// Line 336, Address: 0x1ce3f8, Func Offset: 0x58
	// Line 337, Address: 0x1ce408, Func Offset: 0x68
	// Line 338, Address: 0x1ce428, Func Offset: 0x88
	// Line 339, Address: 0x1ce430, Func Offset: 0x90
	// Line 341, Address: 0x1ce458, Func Offset: 0xb8
	// Line 342, Address: 0x1ce460, Func Offset: 0xc0
	// Line 343, Address: 0x1ce468, Func Offset: 0xc8
	// Line 344, Address: 0x1ce470, Func Offset: 0xd0
	// Line 345, Address: 0x1ce47c, Func Offset: 0xdc
	// Line 346, Address: 0x1ce494, Func Offset: 0xf4
	// Func End, Address: 0x1ce4a4, Func Offset: 0x104
}

// 
// Start address: 0x1ce4b0
void sgEMRenderInit()
{
	// Line 355, Address: 0x1ce4b0, Func Offset: 0
	// Line 356, Address: 0x1ce4b4, Func Offset: 0x4
	// Line 355, Address: 0x1ce4b8, Func Offset: 0x8
	// Line 356, Address: 0x1ce4bc, Func Offset: 0xc
	// Line 357, Address: 0x1ce4c8, Func Offset: 0x18
	// Line 359, Address: 0x1ce4e8, Func Offset: 0x38
	// Line 360, Address: 0x1ce4f0, Func Offset: 0x40
	// Line 361, Address: 0x1ce4f8, Func Offset: 0x48
	// Func End, Address: 0x1ce504, Func Offset: 0x54
}

// 
// Start address: 0x1ce510
void PointLightDataCreate(_anon0* pdata, _anon3* light)
{
	float a;
	float b;
	// Line 369, Address: 0x1ce510, Func Offset: 0
	// Line 374, Address: 0x1ce528, Func Offset: 0x18
	// Line 375, Address: 0x1ce538, Func Offset: 0x28
	// Line 378, Address: 0x1ce548, Func Offset: 0x38
	// Line 376, Address: 0x1ce54c, Func Offset: 0x3c
	// Line 377, Address: 0x1ce550, Func Offset: 0x40
	// Line 378, Address: 0x1ce554, Func Offset: 0x44
	// Line 383, Address: 0x1ce560, Func Offset: 0x50
	// Line 380, Address: 0x1ce564, Func Offset: 0x54
	// Line 379, Address: 0x1ce568, Func Offset: 0x58
	// Line 381, Address: 0x1ce570, Func Offset: 0x60
	// Line 387, Address: 0x1ce574, Func Offset: 0x64
	// Line 388, Address: 0x1ce580, Func Offset: 0x70
	// Line 389, Address: 0x1ce584, Func Offset: 0x74
	// Line 390, Address: 0x1ce588, Func Offset: 0x78
	// Line 391, Address: 0x1ce58c, Func Offset: 0x7c
	// Func End, Address: 0x1ce5a0, Func Offset: 0x90
}

// 
// Start address: 0x1ce5a0
void UpdateLightStatus()
{
	_anon3* light;
	_anon3* directionals[3];
	int n_directionals;
	_anon3* ambient;
	sgEMRenderWork* w;
	int i;
	_anon0* pdata;
	// Line 397, Address: 0x1ce5a0, Func Offset: 0
	// Line 409, Address: 0x1ce5a4, Func Offset: 0x4
	// Line 397, Address: 0x1ce5a8, Func Offset: 0x8
	// Line 400, Address: 0x1ce5b8, Func Offset: 0x18
	// Line 397, Address: 0x1ce5bc, Func Offset: 0x1c
	// Line 402, Address: 0x1ce5c0, Func Offset: 0x20
	// Line 397, Address: 0x1ce5c4, Func Offset: 0x24
	// Line 402, Address: 0x1ce5c8, Func Offset: 0x28
	// Line 406, Address: 0x1ce5cc, Func Offset: 0x2c
	// Line 407, Address: 0x1ce5d0, Func Offset: 0x30
	// Line 409, Address: 0x1ce5d4, Func Offset: 0x34
	// Line 413, Address: 0x1ce5e0, Func Offset: 0x40
	// Line 414, Address: 0x1ce5e8, Func Offset: 0x48
	// Line 415, Address: 0x1ce5f4, Func Offset: 0x54
	// Line 417, Address: 0x1ce5fc, Func Offset: 0x5c
	// Line 418, Address: 0x1ce614, Func Offset: 0x74
	// Line 419, Address: 0x1ce618, Func Offset: 0x78
	// Line 420, Address: 0x1ce630, Func Offset: 0x90
	// Line 421, Address: 0x1ce638, Func Offset: 0x98
	// Line 422, Address: 0x1ce63c, Func Offset: 0x9c
	// Line 421, Address: 0x1ce640, Func Offset: 0xa0
	// Line 424, Address: 0x1ce644, Func Offset: 0xa4
	// Line 426, Address: 0x1ce648, Func Offset: 0xa8
	// Line 428, Address: 0x1ce660, Func Offset: 0xc0
	// Line 430, Address: 0x1ce670, Func Offset: 0xd0
	// Line 431, Address: 0x1ce674, Func Offset: 0xd4
	// Line 430, Address: 0x1ce678, Func Offset: 0xd8
	// Line 431, Address: 0x1ce67c, Func Offset: 0xdc
	// Line 432, Address: 0x1ce684, Func Offset: 0xe4
	// Line 434, Address: 0x1ce690, Func Offset: 0xf0
	// Line 436, Address: 0x1ce6a4, Func Offset: 0x104
	// Line 437, Address: 0x1ce6cc, Func Offset: 0x12c
	// Line 439, Address: 0x1ce6f4, Func Offset: 0x154
	// Line 440, Address: 0x1ce708, Func Offset: 0x168
	// Line 443, Address: 0x1ce710, Func Offset: 0x170
	// Line 444, Address: 0x1ce718, Func Offset: 0x178
	// Line 445, Address: 0x1ce724, Func Offset: 0x184
	// Line 446, Address: 0x1ce730, Func Offset: 0x190
	// Line 445, Address: 0x1ce734, Func Offset: 0x194
	// Line 446, Address: 0x1ce740, Func Offset: 0x1a0
	// Line 447, Address: 0x1ce74c, Func Offset: 0x1ac
	// Line 446, Address: 0x1ce750, Func Offset: 0x1b0
	// Line 447, Address: 0x1ce75c, Func Offset: 0x1bc
	// Line 448, Address: 0x1ce768, Func Offset: 0x1c8
	// Line 447, Address: 0x1ce76c, Func Offset: 0x1cc
	// Line 448, Address: 0x1ce778, Func Offset: 0x1d8
	// Line 449, Address: 0x1ce794, Func Offset: 0x1f4
	// Line 450, Address: 0x1ce7a4, Func Offset: 0x204
	// Line 451, Address: 0x1ce7ac, Func Offset: 0x20c
	// Line 453, Address: 0x1ce7c0, Func Offset: 0x220
	// Func End, Address: 0x1ce7e0, Func Offset: 0x240
}

// 
// Start address: 0x1ce7e0
void UpdateRenderWork(_anon2* em_model)
{
	sgEMRenderModelTop* model_top;
	float wvm[4][4];
	float vpm[4][4];
	float wpm[4][4];
	float aabb_wpm[4][4];
	float psm[4][4];
	sgBone* parent;
	int i;
	float wlm[4][4];
	_anon0* pdata;
	// Line 460, Address: 0x1ce7e0, Func Offset: 0
	// Line 473, Address: 0x1ce7e4, Func Offset: 0x4
	// Line 460, Address: 0x1ce7e8, Func Offset: 0x8
	// Line 469, Address: 0x1ce7f4, Func Offset: 0x14
	// Line 473, Address: 0x1ce7f8, Func Offset: 0x18
	// Line 472, Address: 0x1ce7fc, Func Offset: 0x1c
	// Line 473, Address: 0x1ce808, Func Offset: 0x28
	// Line 474, Address: 0x1ce810, Func Offset: 0x30
	// Line 475, Address: 0x1ce820, Func Offset: 0x40
	// Line 478, Address: 0x1ce828, Func Offset: 0x48
	// Line 485, Address: 0x1ce830, Func Offset: 0x50
	// Line 490, Address: 0x1ce840, Func Offset: 0x60
	// Line 492, Address: 0x1ce850, Func Offset: 0x70
	// Line 493, Address: 0x1ce868, Func Offset: 0x88
	// Line 494, Address: 0x1ce880, Func Offset: 0xa0
	// Line 495, Address: 0x1ce884, Func Offset: 0xa4
	// Line 494, Address: 0x1ce888, Func Offset: 0xa8
	// Line 495, Address: 0x1ce88c, Func Offset: 0xac
	// Line 494, Address: 0x1ce890, Func Offset: 0xb0
	// Line 495, Address: 0x1ce894, Func Offset: 0xb4
	// Line 494, Address: 0x1ce898, Func Offset: 0xb8
	// Line 495, Address: 0x1ce8a4, Func Offset: 0xc4
	// Line 498, Address: 0x1ce914, Func Offset: 0x134
	// Line 497, Address: 0x1ce918, Func Offset: 0x138
	// Line 499, Address: 0x1ce91c, Func Offset: 0x13c
	// Line 500, Address: 0x1ce924, Func Offset: 0x144
	// Line 502, Address: 0x1ce930, Func Offset: 0x150
	// Line 503, Address: 0x1ce9b0, Func Offset: 0x1d0
	// Line 506, Address: 0x1cea30, Func Offset: 0x250
	// Line 505, Address: 0x1cea38, Func Offset: 0x258
	// Line 506, Address: 0x1cea40, Func Offset: 0x260
	// Line 505, Address: 0x1cea50, Func Offset: 0x270
	// Line 506, Address: 0x1cea54, Func Offset: 0x274
	// Line 510, Address: 0x1ceac4, Func Offset: 0x2e4
	// Line 513, Address: 0x1cead4, Func Offset: 0x2f4
	// Line 514, Address: 0x1ceadc, Func Offset: 0x2fc
	// Line 515, Address: 0x1ceaf0, Func Offset: 0x310
	// Line 516, Address: 0x1ceafc, Func Offset: 0x31c
	// Line 517, Address: 0x1ceb28, Func Offset: 0x348
	// Line 519, Address: 0x1ceb44, Func Offset: 0x364
	// Line 521, Address: 0x1ceb48, Func Offset: 0x368
	// Line 522, Address: 0x1ceb74, Func Offset: 0x394
	// Line 523, Address: 0x1ceba0, Func Offset: 0x3c0
	// Line 524, Address: 0x1cebcc, Func Offset: 0x3ec
	// Line 527, Address: 0x1cec4c, Func Offset: 0x46c
	// Line 530, Address: 0x1cec5c, Func Offset: 0x47c
	// Line 531, Address: 0x1cec68, Func Offset: 0x488
	// Line 532, Address: 0x1cec74, Func Offset: 0x494
	// Line 533, Address: 0x1cec78, Func Offset: 0x498
	// Func End, Address: 0x1cec8c, Func Offset: 0x4ac
}

// 
// Start address: 0x1cec90
void DrawNormalGroupBlocks(sgEMDrawGroup* group)
{
	// Line 537, Address: 0x1cec90, Func Offset: 0
	// Line 549, Address: 0x1cec98, Func Offset: 0x8
	// Line 552, Address: 0x1ceca4, Func Offset: 0x14
	// Line 554, Address: 0x1cecb0, Func Offset: 0x20
	// Func End, Address: 0x1cecbc, Func Offset: 0x2c
}

// 
// Start address: 0x1cecc0
void DrawSortGroupBlocks(sgEMDrawGroup* group)
{
	// Line 558, Address: 0x1cecc0, Func Offset: 0
	// Line 561, Address: 0x1cecc8, Func Offset: 0x8
	// Line 564, Address: 0x1cecd4, Func Offset: 0x14
	// Line 566, Address: 0x1cece0, Func Offset: 0x20
	// Func End, Address: 0x1cecec, Func Offset: 0x2c
}

// 
// Start address: 0x1cecf0
void sgEMRenderDraw(_anon2* em_model)
{
	sgEMRenderModelTop* model_top;
	sgEMDrawGroup* group;
	// Line 576, Address: 0x1cecf0, Func Offset: 0
	// Line 580, Address: 0x1cecfc, Func Offset: 0xc
	// Line 581, Address: 0x1ced00, Func Offset: 0x10
	// Line 583, Address: 0x1ced08, Func Offset: 0x18
	// Line 584, Address: 0x1ced1c, Func Offset: 0x2c
	// Line 585, Address: 0x1ced28, Func Offset: 0x38
	// Line 588, Address: 0x1ced30, Func Offset: 0x40
	// Line 590, Address: 0x1ced38, Func Offset: 0x48
	// Line 591, Address: 0x1ced40, Func Offset: 0x50
	// Line 592, Address: 0x1ced54, Func Offset: 0x64
	// Line 594, Address: 0x1ced68, Func Offset: 0x78
	// Line 595, Address: 0x1ced70, Func Offset: 0x80
	// Line 596, Address: 0x1ced78, Func Offset: 0x88
	// Line 597, Address: 0x1ced80, Func Offset: 0x90
	// Line 600, Address: 0x1ced8c, Func Offset: 0x9c
	// Line 602, Address: 0x1ced94, Func Offset: 0xa4
	// Line 603, Address: 0x1ced9c, Func Offset: 0xac
	// Line 606, Address: 0x1ceda0, Func Offset: 0xb0
	// Line 607, Address: 0x1cedac, Func Offset: 0xbc
	// Line 608, Address: 0x1cedb4, Func Offset: 0xc4
	// Line 609, Address: 0x1cedb8, Func Offset: 0xc8
	// Line 613, Address: 0x1cedc0, Func Offset: 0xd0
	// Line 614, Address: 0x1cedcc, Func Offset: 0xdc
	// Line 615, Address: 0x1cedd4, Func Offset: 0xe4
	// Line 616, Address: 0x1ceddc, Func Offset: 0xec
	// Line 617, Address: 0x1cede0, Func Offset: 0xf0
	// Line 618, Address: 0x1cede8, Func Offset: 0xf8
	// Line 621, Address: 0x1cedf0, Func Offset: 0x100
	// Func End, Address: 0x1cee00, Func Offset: 0x110
}

// 
// Start address: 0x1cee00
void sgEMRenderDrawVU1PartPrepare()
{
	// Line 631, Address: 0x1cee00, Func Offset: 0
	// Line 632, Address: 0x1cee08, Func Offset: 0x8
	// Line 634, Address: 0x1cee10, Func Offset: 0x10
	// Line 635, Address: 0x1cee18, Func Offset: 0x18
	// Line 637, Address: 0x1cee20, Func Offset: 0x20
	// Line 638, Address: 0x1cee34, Func Offset: 0x34
	// Line 641, Address: 0x1cee3c, Func Offset: 0x3c
	// Line 642, Address: 0x1cee44, Func Offset: 0x44
	// Line 645, Address: 0x1cee4c, Func Offset: 0x4c
	// Func End, Address: 0x1cee58, Func Offset: 0x58
}

// 
// Start address: 0x1cee60
void sgEMRenderDrawVU1Part(_anon2* em_model)
{
	sgEMRenderModelTop* model_top;
	sgEMDrawGroup* group;
	// Line 659, Address: 0x1cee60, Func Offset: 0
	// Line 663, Address: 0x1cee6c, Func Offset: 0xc
	// Line 664, Address: 0x1cee70, Func Offset: 0x10
	// Line 666, Address: 0x1cee78, Func Offset: 0x18
	// Line 667, Address: 0x1cee8c, Func Offset: 0x2c
	// Line 668, Address: 0x1cee98, Func Offset: 0x38
	// Line 671, Address: 0x1ceea0, Func Offset: 0x40
	// Line 673, Address: 0x1ceea8, Func Offset: 0x48
	// Line 676, Address: 0x1ceeb4, Func Offset: 0x54
	// Line 678, Address: 0x1ceebc, Func Offset: 0x5c
	// Line 679, Address: 0x1ceec4, Func Offset: 0x64
	// Line 682, Address: 0x1ceec8, Func Offset: 0x68
	// Line 683, Address: 0x1ceed4, Func Offset: 0x74
	// Line 684, Address: 0x1ceedc, Func Offset: 0x7c
	// Line 685, Address: 0x1ceee0, Func Offset: 0x80
	// Line 691, Address: 0x1ceee8, Func Offset: 0x88
	// Func End, Address: 0x1ceef8, Func Offset: 0x98
}

// 
// Start address: 0x1cef00
void sgEMRenderDrawVU1PartWait()
{
	// Line 700, Address: 0x1cef00, Func Offset: 0
	// Line 702, Address: 0x1cef08, Func Offset: 0x8
	// Line 703, Address: 0x1cef10, Func Offset: 0x10
	// Line 705, Address: 0x1cef18, Func Offset: 0x18
	// Line 706, Address: 0x1cef20, Func Offset: 0x20
	// Func End, Address: 0x1cef2c, Func Offset: 0x2c
}

// 
// Start address: 0x1cef30
void sgEMRenderDrawVU0Part(_anon2* em_model)
{
	sgEMRenderModelTop* model_top;
	// Line 719, Address: 0x1cef30, Func Offset: 0
	// Line 723, Address: 0x1cef3c, Func Offset: 0xc
	// Line 724, Address: 0x1cef40, Func Offset: 0x10
	// Line 726, Address: 0x1cef48, Func Offset: 0x18
	// Line 727, Address: 0x1cef5c, Func Offset: 0x2c
	// Line 728, Address: 0x1cef68, Func Offset: 0x38
	// Line 731, Address: 0x1cef70, Func Offset: 0x40
	// Line 734, Address: 0x1cef78, Func Offset: 0x48
	// Line 735, Address: 0x1cef84, Func Offset: 0x54
	// Line 736, Address: 0x1cef94, Func Offset: 0x64
	// Line 738, Address: 0x1cef9c, Func Offset: 0x6c
	// Line 739, Address: 0x1cefa4, Func Offset: 0x74
	// Line 741, Address: 0x1cefac, Func Offset: 0x7c
	// Line 743, Address: 0x1cefb8, Func Offset: 0x88
	// Func End, Address: 0x1cefc8, Func Offset: 0x98
}

