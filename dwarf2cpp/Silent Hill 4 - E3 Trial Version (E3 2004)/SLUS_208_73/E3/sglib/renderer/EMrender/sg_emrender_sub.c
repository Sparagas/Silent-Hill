typedef struct sgBone;
typedef struct sgTexArc;
typedef struct sgCamera;
typedef struct _anon0;
typedef struct sgEMDrawBlockBBox;
typedef struct _anon1;
typedef enum sgLightType : unsigned char;
typedef struct _anon2;
typedef struct sgEMRenderWork;
typedef enum _enum_0 : unsigned char;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef enum _enum_1 : unsigned char;


typedef float type_0[4][4];
typedef _anon6 type_1[8];
typedef sgTexArc* type_2[2];
typedef float type_3[4];
typedef float type_4[4][8];
typedef float type_5[4][6];
typedef unsigned char type_6[6];
typedef _anon6* type_7[4];
typedef float type_8[4];
typedef _anon4* type_9[8];
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

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
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
	_anon1 view_frustum;
	float wpm[4][4];
	unsigned int dirty;
};

struct _anon0
{
	_anon6* valid_points[4];
	int n_valid_points;
};

struct sgEMDrawBlockBBox
{
	float bmin[4];
	float bmax[4];
};

struct _anon1
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

struct _anon2
{
	float center[4];
	float radius;
};

struct sgEMRenderWork
{
	sgCamera* camera;
	_anon5* screen;
	unsigned long gs_test;
	unsigned long gs_alpha;
	int gs_test_alter;
	int gs_alpha_alter;
	unsigned long fog_col;
	float fog_a;
	float fog_b;
	int fog_enable;
	sgBone* parent;
	_enum_1 light_mode_set;
	_enum_1 light_mode;
	int light_alpha_enable;
	_anon4* lights[8];
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
	_anon6 point_lights[8];
	int n_point_lights;
	sgTexArc* texture_addr[2];
	float matrices[4][4];
	int data_version;
	int z_buffer_offset;
};

enum _enum_0 : unsigned char
{
	NEGATIVE = 0xff,
	ZERO = 0,
	POSITIVE
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
};

struct _anon4
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

struct _anon5
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

struct _anon6
{
	float light_pos[4];
	float light_color[4];
	float params[4];
	float linear_a;
	float linear_b;
	float radius;
	int valid;
};

enum _enum_1 : unsigned char
{
	SG_EM_LIGHTING_OFF,
	SG_EM_LIGHTING_MUL,
	SG_EM_LIGHTING_OFFSET_MUL,
	SG_EM_LIGHTING_ADD
};

sgEMRenderWork em_render_work;
float sg_vector_unit_w[4];

int sgEMRenderViewClipAABB(float* bmin, float* bmax);
void sgEMRenderCheckValidPointLight(_anon0* stat, sgEMDrawBlockBBox* bbox);

// 
// Start address: 0x1d12c0
int sgEMRenderViewClipAABB(float* bmin, float* bmax)
{
	int n;
	unsigned int fc_and;
	unsigned int fc_or;
	float s[4];
	float v[4];
	unsigned int fc;
	// Line 147, Address: 0x1d12c0, Func Offset: 0
	// Line 139, Address: 0x1d12c4, Func Offset: 0x4
	// Line 141, Address: 0x1d12c8, Func Offset: 0x8
	// Line 142, Address: 0x1d12cc, Func Offset: 0xc
	// Line 147, Address: 0x1d12d0, Func Offset: 0x10
	// Line 149, Address: 0x1d12e4, Func Offset: 0x24
	// Line 150, Address: 0x1d12f8, Func Offset: 0x38
	// Line 152, Address: 0x1d1318, Func Offset: 0x58
	// Line 153, Address: 0x1d1320, Func Offset: 0x60
	// Line 154, Address: 0x1d132c, Func Offset: 0x6c
	// Line 155, Address: 0x1d1338, Func Offset: 0x78
	// Line 156, Address: 0x1d1344, Func Offset: 0x84
	// Line 157, Address: 0x1d1350, Func Offset: 0x90
	// Line 158, Address: 0x1d135c, Func Offset: 0x9c
	// Line 159, Address: 0x1d1368, Func Offset: 0xa8
	// Line 160, Address: 0x1d137c, Func Offset: 0xbc
	// Line 163, Address: 0x1d13b8, Func Offset: 0xf8
	// Line 161, Address: 0x1d13bc, Func Offset: 0xfc
	// Line 162, Address: 0x1d13c0, Func Offset: 0x100
	// Line 163, Address: 0x1d13c4, Func Offset: 0x104
	// Line 165, Address: 0x1d13d4, Func Offset: 0x114
	// Line 166, Address: 0x1d13dc, Func Offset: 0x11c
	// Line 167, Address: 0x1d13e4, Func Offset: 0x124
	// Line 169, Address: 0x1d13e8, Func Offset: 0x128
	// Line 170, Address: 0x1d13f0, Func Offset: 0x130
	// Func End, Address: 0x1d13f8, Func Offset: 0x138
}

// 
// Start address: 0x1d1400
void sgEMRenderCheckValidPointLight(_anon0* stat, sgEMDrawBlockBBox* bbox)
{
	int i;
	int n_point_lights;
	int n_valid;
	sgEMRenderWork* work;
	_anon2 ball;
	_anon3* aabb;
	_anon6* pdata;
	// Line 174, Address: 0x1d1400, Func Offset: 0
	// Line 182, Address: 0x1d1404, Func Offset: 0x4
	// Line 174, Address: 0x1d1408, Func Offset: 0x8
	// Line 180, Address: 0x1d1418, Func Offset: 0x18
	// Line 174, Address: 0x1d141c, Func Offset: 0x1c
	// Line 177, Address: 0x1d1430, Func Offset: 0x30
	// Line 174, Address: 0x1d1434, Func Offset: 0x34
	// Line 178, Address: 0x1d1438, Func Offset: 0x38
	// Line 182, Address: 0x1d143c, Func Offset: 0x3c
	// Line 184, Address: 0x1d1448, Func Offset: 0x48
	// Line 187, Address: 0x1d1450, Func Offset: 0x50
	// Line 188, Address: 0x1d1454, Func Offset: 0x54
	// Line 189, Address: 0x1d1468, Func Offset: 0x68
	// Line 190, Address: 0x1d1470, Func Offset: 0x70
	// Line 189, Address: 0x1d1474, Func Offset: 0x74
	// Line 190, Address: 0x1d1478, Func Offset: 0x78
	// Line 192, Address: 0x1d1480, Func Offset: 0x80
	// Line 191, Address: 0x1d1484, Func Offset: 0x84
	// Line 192, Address: 0x1d1488, Func Offset: 0x88
	// Line 194, Address: 0x1d1498, Func Offset: 0x98
	// Line 193, Address: 0x1d149c, Func Offset: 0x9c
	// Line 195, Address: 0x1d14a0, Func Offset: 0xa0
	// Line 198, Address: 0x1d14ac, Func Offset: 0xac
	// Line 199, Address: 0x1d14c0, Func Offset: 0xc0
	// Line 200, Address: 0x1d14c4, Func Offset: 0xc4
	// Func End, Address: 0x1d14f4, Func Offset: 0xf4
}

