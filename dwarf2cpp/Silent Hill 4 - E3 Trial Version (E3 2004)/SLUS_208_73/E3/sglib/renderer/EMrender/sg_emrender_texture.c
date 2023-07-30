typedef struct sgBone;
typedef struct sgTexArc;
typedef enum sgLightType : unsigned char;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sgEMDrawBlock;
typedef struct sgCamera;
typedef struct _anon2;
typedef struct sgTexData;
typedef struct sgClutData;
typedef enum _enum : unsigned char;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgEMRenderWork;


typedef _anon2 type_0[8];
typedef sgTexArc* type_1[2];
typedef float type_2[4][4];
typedef float type_3[4];
typedef float type_4[4][8];
typedef float type_5[4][6];
typedef float type_6[4];
typedef _anon1* type_7[8];
typedef float type_8[4];

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

struct _anon0
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

struct _anon1
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

struct sgEMDrawBlock
{
	int next_block_offset;
	int params_offset;
	int parts_offset;
	short texture_id;
	short texture_bank;
	short clut_id;
	short palette_idx;
	int bounding_box_offset;
	short matrix_index;
	unsigned char backclip;
	unsigned char pad0;
	int pad1;
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
	float light_pos[4];
	float light_color[4];
	float params[4];
	float linear_a;
	float linear_b;
	float radius;
	int valid;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
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
	float v[4][8];
	float plane[4][6];
};

struct _anon4
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct sgEMRenderWork
{
	sgCamera* camera;
	_anon0* screen;
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
	_anon1* lights[8];
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
	_anon2 point_lights[8];
	int n_point_lights;
	sgTexArc* texture_addr[2];
	float matrices[4][4];
	int data_version;
	int z_buffer_offset;
};

sgEMRenderWork em_render_work;

unsigned long sgEMRenderTextureSetup(sgEMDrawBlock* block);

// 
// Start address: 0x1d1130
unsigned long sgEMRenderTextureSetup(sgEMDrawBlock* block)
{
	sgTexData* texdata;
	_anon4* tpage;
	unsigned int id;
	unsigned long tex0;
	sgClutData* clutdata;
	int cbp;
	unsigned int id;
	int clut_idx;
	int palette_idx;
	// Line 17, Address: 0x1d1130, Func Offset: 0
	// Line 21, Address: 0x1d1150, Func Offset: 0x20
	// Line 23, Address: 0x1d1154, Func Offset: 0x24
	// Line 25, Address: 0x1d115c, Func Offset: 0x2c
	// Line 26, Address: 0x1d1174, Func Offset: 0x44
	// Line 27, Address: 0x1d117c, Func Offset: 0x4c
	// Line 28, Address: 0x1d1188, Func Offset: 0x58
	// Line 30, Address: 0x1d1190, Func Offset: 0x60
	// Line 31, Address: 0x1d119c, Func Offset: 0x6c
	// Line 32, Address: 0x1d11a4, Func Offset: 0x74
	// Line 33, Address: 0x1d11b0, Func Offset: 0x80
	// Line 34, Address: 0x1d11bc, Func Offset: 0x8c
	// Line 39, Address: 0x1d11c4, Func Offset: 0x94
	// Line 38, Address: 0x1d11c8, Func Offset: 0x98
	// Line 40, Address: 0x1d11d0, Func Offset: 0xa0
	// Line 42, Address: 0x1d11e4, Func Offset: 0xb4
	// Line 45, Address: 0x1d11fc, Func Offset: 0xcc
	// Line 47, Address: 0x1d1200, Func Offset: 0xd0
	// Line 48, Address: 0x1d1210, Func Offset: 0xe0
	// Line 50, Address: 0x1d1224, Func Offset: 0xf4
	// Line 53, Address: 0x1d123c, Func Offset: 0x10c
	// Line 56, Address: 0x1d1240, Func Offset: 0x110
	// Line 57, Address: 0x1d1248, Func Offset: 0x118
	// Line 59, Address: 0x1d1258, Func Offset: 0x128
	// Line 57, Address: 0x1d1260, Func Offset: 0x130
	// Line 59, Address: 0x1d1264, Func Offset: 0x134
	// Line 60, Address: 0x1d1274, Func Offset: 0x144
	// Line 61, Address: 0x1d1280, Func Offset: 0x150
	// Line 64, Address: 0x1d1294, Func Offset: 0x164
	// Line 65, Address: 0x1d1298, Func Offset: 0x168
	// Line 66, Address: 0x1d12a0, Func Offset: 0x170
	// Func End, Address: 0x1d12c0, Func Offset: 0x190
}

