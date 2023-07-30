typedef struct _anon0;
typedef struct sgEMDrawBlockBBox;
typedef struct sgEMRenderWork;
typedef struct sgEMDrawBlockParams;
typedef struct sgTexArc;
typedef struct sgCamera;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgEMDrawPart;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgEMDrawBlock;
typedef struct _anon5;
typedef struct _anon6;
typedef enum sgLightType : unsigned char;
typedef union _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct sgBone;
typedef enum _enum : unsigned char;


typedef _anon9 type_0[1];
typedef _anon9 type_1[1];
typedef _anon9 type_2[2];
typedef unsigned long type_3[2];
typedef _anon5 type_4[8];
typedef sgTexArc* type_5[2];
typedef float type_6[4][4];
typedef float type_7[4];
typedef _anon9 type_8[1];
typedef _anon9 type_9[1];
typedef int type_10[2];
typedef float type_11[4][8];
typedef _anon9 type_12[1];
typedef float type_13[4];
typedef float type_14[4][6];
typedef int type_15[1];
typedef int type_16[0];
typedef float type_17[4];
typedef _anon7 type_18[1];
typedef _anon7 type_19[4];
typedef int type_20[3];
typedef float type_21[4];
typedef short type_22[2];
typedef unsigned short type_23[2];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef int type_27[1];
typedef _anon5* type_28[4];
typedef int type_29[2];
typedef unsigned int type_30[2];
typedef void* type_31[2];
typedef <unknown fundamental type (0xa510)> type_32[0];
typedef short type_33[4];
typedef unsigned short type_34[4];
typedef char type_35[8];
typedef unsigned char type_36[8];
typedef float type_37[2];
typedef float type_38[1];
typedef int type_39[1];
typedef _anon8* type_40[8];
typedef float type_41[4];

struct _anon0
{
	_anon9 dmatag[1];
	_anon9 viftag1[1];
	_anon9 giftag[2];
	unsigned long prim;
	unsigned long prim_addr;
	unsigned long tex0;
	unsigned long tex0_addr;
	unsigned long clamp;
	unsigned long clamp_addr;
	unsigned long alpha;
	unsigned long alpha_addr;
	unsigned long tex1;
	unsigned long tex1_addr;
};

struct sgEMDrawBlockBBox
{
	float bmin[4];
	float bmax[4];
};

struct sgEMRenderWork
{
	sgCamera* camera;
	_anon6* screen;
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
	_anon8* lights[8];
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
	_anon5 point_lights[8];
	int n_point_lights;
	sgTexArc* texture_addr[2];
	float matrices[4][4];
	int data_version;
	int z_buffer_offset;
};

struct sgEMDrawBlockParams
{
	<unknown fundamental type (0xa510)> dma_tag;
	<unknown fundamental type (0xa510)> part_giftag;
	unsigned long tex0;
	unsigned long clamp;
	unsigned int tex1;
	unsigned int alpha;
	unsigned int prim;
	unsigned int nb_parts;
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
	_anon3 view_frustum;
	float wpm[4][4];
	unsigned int dirty;
};

struct _anon1
{
	_anon5* valid_points[4];
	int n_valid_points;
};

struct _anon2
{
	_anon9 dmatag[1];
	_anon9 viftag1[1];
	float local_projection[4][4];
	float local_screen[4][4];
	float normal_light_matrix[4][4];
	float light_color_matrix[4][4];
	float light_color_offset[4];
	float light_add_color[4];
	_anon9 viftag2[1];
	int pad_A;
	int pad_B;
	float fog_b;
	float fog_a;
	float xyzw1[4];
	_anon7 viftag3[1];
	_anon7 strow[4];
	int pad[3];
};

struct sgEMDrawPart
{
	unsigned long dma_tag;
	int vif_command[2];
	int nloop;
	int eop;
	int size;
	int pad[1];
	int data[0];
};

struct _anon3
{
	float v[4][8];
	float plane[4][6];
};

struct _anon4
{
	float light_pos[4];
	float light_color[4];
	float params[4];
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

struct _anon5
{
	float light_pos[4];
	float light_color[4];
	float params[4];
	float linear_a;
	float linear_b;
	float radius;
	int valid;
};

struct _anon6
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

union _anon7
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct _anon8
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

union _anon9
{
	long sl;
	unsigned long ul;
	int si[2];
	unsigned int ui[2];
	void* pt[2];
	short ss[4];
	unsigned short us[4];
	char sc[8];
	unsigned char uc[8];
	float f[2];
	float fv[1];
	int iv[1];
};

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

enum _enum : unsigned char
{
	SG_EM_LIGHTING_OFF,
	SG_EM_LIGHTING_MUL,
	SG_EM_LIGHTING_OFFSET_MUL,
	SG_EM_LIGHTING_ADD
};

<unknown fundamental type (0xa510)> sg_emrender_vu1_load[0];
_anon2 vu1_vu_env;
_anon0 vu1_gs_env;
sgEMRenderWork em_render_work;
unsigned long* sg_packet_cur;
int vu_current_block_matrix;
_anon1 block_lighting_status;

void sgEMRenderLoadVU1MicroProgram();
void InitVUEnv();
void InitGSEnv();
void UpdateVUEnv();
void UpdateTexture(sgEMDrawBlock* block);
void UpdateGSEnv(sgEMDrawBlock* block);
void UpdateLightVU(sgEMDrawBlock* block);
void UpdateBlockVU(sgEMDrawBlock* block);
void SendPartsVU1_Default(sgEMDrawBlock* block);
void SendPartsVU1_Arrange(sgEMDrawBlock* block);
void sgEMRenderInitVU1Part();
void sgEMRenderPreVU1Draw();
void sgEMRenderBlockVU1Draw(sgEMDrawBlock* block_);

// 
// Start address: 0x1d02a0
void sgEMRenderLoadVU1MicroProgram()
{
	unsigned long* pk;
	// Line 101, Address: 0x1d02a0, Func Offset: 0
	// Line 103, Address: 0x1d02a4, Func Offset: 0x4
	// Line 101, Address: 0x1d02a8, Func Offset: 0x8
	// Line 103, Address: 0x1d02ac, Func Offset: 0xc
	// Line 105, Address: 0x1d02c4, Func Offset: 0x24
	// Line 106, Address: 0x1d02cc, Func Offset: 0x2c
	// Line 107, Address: 0x1d02fc, Func Offset: 0x5c
	// Line 108, Address: 0x1d0304, Func Offset: 0x64
	// Line 110, Address: 0x1d0314, Func Offset: 0x74
	// Line 111, Address: 0x1d0320, Func Offset: 0x80
	// Line 112, Address: 0x1d0338, Func Offset: 0x98
	// Func End, Address: 0x1d0348, Func Offset: 0xa8
}

// 
// Start address: 0x1d0350
void InitVUEnv()
{
	_anon2* ptr;
	// Line 119, Address: 0x1d0350, Func Offset: 0
	// Line 118, Address: 0x1d0354, Func Offset: 0x4
	// Line 119, Address: 0x1d0358, Func Offset: 0x8
	// Line 118, Address: 0x1d035c, Func Offset: 0xc
	// Line 119, Address: 0x1d0360, Func Offset: 0x10
	// Line 118, Address: 0x1d0364, Func Offset: 0x14
	// Line 119, Address: 0x1d0368, Func Offset: 0x18
	// Line 121, Address: 0x1d0374, Func Offset: 0x24
	// Line 123, Address: 0x1d0380, Func Offset: 0x30
	// Line 122, Address: 0x1d0384, Func Offset: 0x34
	// Line 123, Address: 0x1d0388, Func Offset: 0x38
	// Line 124, Address: 0x1d038c, Func Offset: 0x3c
	// Line 123, Address: 0x1d0390, Func Offset: 0x40
	// Line 124, Address: 0x1d0394, Func Offset: 0x44
	// Line 125, Address: 0x1d0398, Func Offset: 0x48
	// Line 124, Address: 0x1d039c, Func Offset: 0x4c
	// Line 125, Address: 0x1d03a0, Func Offset: 0x50
	// Line 128, Address: 0x1d03a8, Func Offset: 0x58
	// Line 127, Address: 0x1d03ac, Func Offset: 0x5c
	// Line 128, Address: 0x1d03b0, Func Offset: 0x60
	// Line 130, Address: 0x1d03b8, Func Offset: 0x68
	// Line 135, Address: 0x1d03c0, Func Offset: 0x70
	// Line 131, Address: 0x1d03c4, Func Offset: 0x74
	// Line 136, Address: 0x1d03c8, Func Offset: 0x78
	// Line 132, Address: 0x1d03cc, Func Offset: 0x7c
	// Line 133, Address: 0x1d03d0, Func Offset: 0x80
	// Line 135, Address: 0x1d03d4, Func Offset: 0x84
	// Line 136, Address: 0x1d03d8, Func Offset: 0x88
	// Line 137, Address: 0x1d03dc, Func Offset: 0x8c
	// Line 138, Address: 0x1d03e0, Func Offset: 0x90
	// Line 139, Address: 0x1d03e4, Func Offset: 0x94
	// Line 140, Address: 0x1d03e8, Func Offset: 0x98
	// Func End, Address: 0x1d03f8, Func Offset: 0xa8
}

// 
// Start address: 0x1d0400
void InitGSEnv()
{
	_anon0* ptr;
	unsigned long material_giftag[2];
	// Line 151, Address: 0x1d0400, Func Offset: 0
	// Line 146, Address: 0x1d0404, Func Offset: 0x4
	// Line 151, Address: 0x1d0408, Func Offset: 0x8
	// Line 146, Address: 0x1d040c, Func Offset: 0xc
	// Line 151, Address: 0x1d0410, Func Offset: 0x10
	// Line 146, Address: 0x1d0414, Func Offset: 0x14
	// Line 151, Address: 0x1d0418, Func Offset: 0x18
	// Line 153, Address: 0x1d0424, Func Offset: 0x24
	// Line 155, Address: 0x1d0430, Func Offset: 0x30
	// Line 154, Address: 0x1d0434, Func Offset: 0x34
	// Line 155, Address: 0x1d0438, Func Offset: 0x38
	// Line 162, Address: 0x1d043c, Func Offset: 0x3c
	// Line 155, Address: 0x1d0440, Func Offset: 0x40
	// Line 170, Address: 0x1d0444, Func Offset: 0x44
	// Line 163, Address: 0x1d0448, Func Offset: 0x48
	// Line 162, Address: 0x1d044c, Func Offset: 0x4c
	// Line 163, Address: 0x1d0450, Func Offset: 0x50
	// Line 173, Address: 0x1d0454, Func Offset: 0x54
	// Line 163, Address: 0x1d0458, Func Offset: 0x58
	// Line 174, Address: 0x1d045c, Func Offset: 0x5c
	// Line 170, Address: 0x1d0460, Func Offset: 0x60
	// Line 175, Address: 0x1d0464, Func Offset: 0x64
	// Line 176, Address: 0x1d0468, Func Offset: 0x68
	// Line 170, Address: 0x1d046c, Func Offset: 0x6c
	// Line 171, Address: 0x1d0470, Func Offset: 0x70
	// Line 172, Address: 0x1d047c, Func Offset: 0x7c
	// Line 173, Address: 0x1d0480, Func Offset: 0x80
	// Line 174, Address: 0x1d0484, Func Offset: 0x84
	// Line 175, Address: 0x1d0488, Func Offset: 0x88
	// Line 176, Address: 0x1d048c, Func Offset: 0x8c
	// Line 178, Address: 0x1d0490, Func Offset: 0x90
	// Line 179, Address: 0x1d0494, Func Offset: 0x94
	// Func End, Address: 0x1d04a4, Func Offset: 0xa4
}

// 
// Start address: 0x1d04b0
void UpdateVUEnv()
{
	_anon2* ptr;
	unsigned long* pk;
	// Line 187, Address: 0x1d04b0, Func Offset: 0
	// Line 186, Address: 0x1d04b4, Func Offset: 0x4
	// Line 187, Address: 0x1d04b8, Func Offset: 0x8
	// Line 186, Address: 0x1d04bc, Func Offset: 0xc
	// Line 187, Address: 0x1d04c0, Func Offset: 0x10
	// Line 186, Address: 0x1d04c4, Func Offset: 0x14
	// Line 187, Address: 0x1d04c8, Func Offset: 0x18
	// Line 192, Address: 0x1d04d4, Func Offset: 0x24
	// Line 193, Address: 0x1d0500, Func Offset: 0x50
	// Line 194, Address: 0x1d052c, Func Offset: 0x7c
	// Line 195, Address: 0x1d0558, Func Offset: 0xa8
	// Line 196, Address: 0x1d0584, Func Offset: 0xd4
	// Line 197, Address: 0x1d0598, Func Offset: 0xe8
	// Line 199, Address: 0x1d05ac, Func Offset: 0xfc
	// Line 200, Address: 0x1d05b8, Func Offset: 0x108
	// Line 202, Address: 0x1d05c4, Func Offset: 0x114
	// Line 203, Address: 0x1d05d8, Func Offset: 0x128
	// Line 204, Address: 0x1d05e0, Func Offset: 0x130
	// Line 205, Address: 0x1d05e4, Func Offset: 0x134
	// Line 207, Address: 0x1d05e8, Func Offset: 0x138
	// Line 208, Address: 0x1d05f0, Func Offset: 0x140
	// Line 209, Address: 0x1d05f8, Func Offset: 0x148
	// Line 210, Address: 0x1d05fc, Func Offset: 0x14c
	// Line 211, Address: 0x1d0600, Func Offset: 0x150
	// Line 212, Address: 0x1d0604, Func Offset: 0x154
	// Line 215, Address: 0x1d0608, Func Offset: 0x158
	// Line 216, Address: 0x1d0614, Func Offset: 0x164
	// Line 215, Address: 0x1d0618, Func Offset: 0x168
	// Line 216, Address: 0x1d0624, Func Offset: 0x174
	// Line 219, Address: 0x1d0630, Func Offset: 0x180
	// Line 221, Address: 0x1d063c, Func Offset: 0x18c
	// Line 223, Address: 0x1d064c, Func Offset: 0x19c
	// Func End, Address: 0x1d065c, Func Offset: 0x1ac
}

// 
// Start address: 0x1d0660
void UpdateTexture(sgEMDrawBlock* block)
{
	// Line 227, Address: 0x1d0660, Func Offset: 0
	// Line 230, Address: 0x1d0668, Func Offset: 0x8
	// Line 231, Address: 0x1d068c, Func Offset: 0x2c
	// Func End, Address: 0x1d0698, Func Offset: 0x38
}

// 
// Start address: 0x1d06a0
void UpdateGSEnv(sgEMDrawBlock* block)
{
	_anon0* ptr;
	sgEMDrawBlockParams* params;
	unsigned int prim;
	unsigned long* pk;
	// Line 241, Address: 0x1d06a0, Func Offset: 0
	// Line 242, Address: 0x1d06a4, Func Offset: 0x4
	// Line 241, Address: 0x1d06a8, Func Offset: 0x8
	// Line 242, Address: 0x1d06ac, Func Offset: 0xc
	// Line 241, Address: 0x1d06b0, Func Offset: 0x10
	// Line 242, Address: 0x1d06b4, Func Offset: 0x14
	// Line 241, Address: 0x1d06b8, Func Offset: 0x18
	// Line 242, Address: 0x1d06bc, Func Offset: 0x1c
	// Line 241, Address: 0x1d06c0, Func Offset: 0x20
	// Line 242, Address: 0x1d06c4, Func Offset: 0x24
	// Line 252, Address: 0x1d06cc, Func Offset: 0x2c
	// Line 243, Address: 0x1d06d0, Func Offset: 0x30
	// Line 250, Address: 0x1d06d4, Func Offset: 0x34
	// Line 252, Address: 0x1d06d8, Func Offset: 0x38
	// Line 253, Address: 0x1d06e4, Func Offset: 0x44
	// Line 255, Address: 0x1d06e8, Func Offset: 0x48
	// Line 256, Address: 0x1d06f8, Func Offset: 0x58
	// Line 259, Address: 0x1d0700, Func Offset: 0x60
	// Line 260, Address: 0x1d070c, Func Offset: 0x6c
	// Line 259, Address: 0x1d0710, Func Offset: 0x70
	// Line 260, Address: 0x1d071c, Func Offset: 0x7c
	// Line 263, Address: 0x1d0728, Func Offset: 0x88
	// Line 265, Address: 0x1d072c, Func Offset: 0x8c
	// Line 263, Address: 0x1d0730, Func Offset: 0x90
	// Line 264, Address: 0x1d0740, Func Offset: 0xa0
	// Line 265, Address: 0x1d0748, Func Offset: 0xa8
	// Line 266, Address: 0x1d0754, Func Offset: 0xb4
	// Line 268, Address: 0x1d0760, Func Offset: 0xc0
	// Line 269, Address: 0x1d0770, Func Offset: 0xd0
	// Line 270, Address: 0x1d0774, Func Offset: 0xd4
	// Line 272, Address: 0x1d0784, Func Offset: 0xe4
	// Line 274, Address: 0x1d0794, Func Offset: 0xf4
	// Func End, Address: 0x1d07ac, Func Offset: 0x10c
}

// 
// Start address: 0x1d07b0
void UpdateLightVU(sgEMDrawBlock* block)
{
	sgEMRenderWork* work;
	_anon1* block_stat;
	int matrix_index;
	float block_mat[4][4];
	float block_local[4][4];
	float mat[4];
	_anon4* vu_pdata;
	_anon5* pdata;
	int qwc;
	int i;
	unsigned int* p;
	// Line 279, Address: 0x1d07b0, Func Offset: 0
	// Line 291, Address: 0x1d07b4, Func Offset: 0x4
	// Line 279, Address: 0x1d07b8, Func Offset: 0x8
	// Line 280, Address: 0x1d07c4, Func Offset: 0x14
	// Line 279, Address: 0x1d07c8, Func Offset: 0x18
	// Line 281, Address: 0x1d07cc, Func Offset: 0x1c
	// Line 279, Address: 0x1d07d0, Func Offset: 0x20
	// Line 280, Address: 0x1d07d4, Func Offset: 0x24
	// Line 282, Address: 0x1d07d8, Func Offset: 0x28
	// Line 281, Address: 0x1d07dc, Func Offset: 0x2c
	// Line 291, Address: 0x1d07e0, Func Offset: 0x30
	// Line 293, Address: 0x1d07e8, Func Offset: 0x38
	// Line 296, Address: 0x1d07f4, Func Offset: 0x44
	// Line 298, Address: 0x1d0804, Func Offset: 0x54
	// Line 300, Address: 0x1d081c, Func Offset: 0x6c
	// Line 302, Address: 0x1d0824, Func Offset: 0x74
	// Line 305, Address: 0x1d0898, Func Offset: 0xe8
	// Line 303, Address: 0x1d089c, Func Offset: 0xec
	// Line 305, Address: 0x1d08a0, Func Offset: 0xf0
	// Line 306, Address: 0x1d08c0, Func Offset: 0x110
	// Line 315, Address: 0x1d08c4, Func Offset: 0x114
	// Line 316, Address: 0x1d08cc, Func Offset: 0x11c
	// Line 319, Address: 0x1d08d0, Func Offset: 0x120
	// Line 320, Address: 0x1d08dc, Func Offset: 0x12c
	// Line 321, Address: 0x1d08e4, Func Offset: 0x134
	// Line 324, Address: 0x1d08e8, Func Offset: 0x138
	// Line 321, Address: 0x1d0900, Func Offset: 0x150
	// Line 324, Address: 0x1d0908, Func Offset: 0x158
	// Line 326, Address: 0x1d0934, Func Offset: 0x184
	// Line 327, Address: 0x1d0940, Func Offset: 0x190
	// Line 328, Address: 0x1d0950, Func Offset: 0x1a0
	// Line 330, Address: 0x1d0958, Func Offset: 0x1a8
	// Line 328, Address: 0x1d095c, Func Offset: 0x1ac
	// Line 330, Address: 0x1d0960, Func Offset: 0x1b0
	// Line 331, Address: 0x1d096c, Func Offset: 0x1bc
	// Line 332, Address: 0x1d097c, Func Offset: 0x1cc
	// Line 334, Address: 0x1d09a8, Func Offset: 0x1f8
	// Line 333, Address: 0x1d09ac, Func Offset: 0x1fc
	// Line 334, Address: 0x1d09b0, Func Offset: 0x200
	// Line 335, Address: 0x1d09c0, Func Offset: 0x210
	// Line 338, Address: 0x1d09c8, Func Offset: 0x218
	// Line 339, Address: 0x1d09d0, Func Offset: 0x220
	// Func End, Address: 0x1d09ec, Func Offset: 0x23c
}

// 
// Start address: 0x1d09f0
void UpdateBlockVU(sgEMDrawBlock* block)
{
	unsigned long* pk;
	sgEMDrawBlockParams* params;
	sgEMRenderWork* work;
	int itop;
	int matrix_index;
	int draw_mpg;
	float block_mat[4][4];
	float mat[4];
	int qwc;
	unsigned int* p;
	unsigned int* p;
	// Line 347, Address: 0x1d09f0, Func Offset: 0
	// Line 350, Address: 0x1d0a10, Func Offset: 0x20
	// Line 347, Address: 0x1d0a14, Func Offset: 0x24
	// Line 350, Address: 0x1d0a18, Func Offset: 0x28
	// Line 349, Address: 0x1d0a1c, Func Offset: 0x2c
	// Line 351, Address: 0x1d0a20, Func Offset: 0x30
	// Line 352, Address: 0x1d0a24, Func Offset: 0x34
	// Line 349, Address: 0x1d0a28, Func Offset: 0x38
	// Line 358, Address: 0x1d0a2c, Func Offset: 0x3c
	// Line 359, Address: 0x1d0a44, Func Offset: 0x54
	// Line 362, Address: 0x1d0a4c, Func Offset: 0x5c
	// Line 363, Address: 0x1d0a7c, Func Offset: 0x8c
	// Line 367, Address: 0x1d0a90, Func Offset: 0xa0
	// Line 371, Address: 0x1d0aa0, Func Offset: 0xb0
	// Line 374, Address: 0x1d0aa8, Func Offset: 0xb8
	// Line 376, Address: 0x1d0ac4, Func Offset: 0xd4
	// Line 377, Address: 0x1d0acc, Func Offset: 0xdc
	// Line 379, Address: 0x1d0ad8, Func Offset: 0xe8
	// Line 377, Address: 0x1d0adc, Func Offset: 0xec
	// Line 379, Address: 0x1d0ae0, Func Offset: 0xf0
	// Line 382, Address: 0x1d0b50, Func Offset: 0x160
	// Line 380, Address: 0x1d0b54, Func Offset: 0x164
	// Line 382, Address: 0x1d0b58, Func Offset: 0x168
	// Line 383, Address: 0x1d0bc8, Func Offset: 0x1d8
	// Line 384, Address: 0x1d0bcc, Func Offset: 0x1dc
	// Line 385, Address: 0x1d0bd4, Func Offset: 0x1e4
	// Line 386, Address: 0x1d0bdc, Func Offset: 0x1ec
	// Line 388, Address: 0x1d0be0, Func Offset: 0x1f0
	// Line 394, Address: 0x1d0be8, Func Offset: 0x1f8
	// Line 396, Address: 0x1d0c34, Func Offset: 0x244
	// Line 397, Address: 0x1d0c40, Func Offset: 0x250
	// Line 399, Address: 0x1d0c48, Func Offset: 0x258
	// Line 400, Address: 0x1d0c50, Func Offset: 0x260
	// Line 401, Address: 0x1d0c64, Func Offset: 0x274
	// Line 408, Address: 0x1d0c68, Func Offset: 0x278
	// Line 409, Address: 0x1d0c9c, Func Offset: 0x2ac
	// Line 411, Address: 0x1d0ca4, Func Offset: 0x2b4
	// Line 412, Address: 0x1d0cb0, Func Offset: 0x2c0
	// Line 415, Address: 0x1d0cc8, Func Offset: 0x2d8
	// Line 416, Address: 0x1d0cd0, Func Offset: 0x2e0
	// Func End, Address: 0x1d0cf4, Func Offset: 0x304
}

// 
// Start address: 0x1d0d00
void SendPartsVU1_Default(sgEMDrawBlock* block)
{
	// Line 430, Address: 0x1d0d00, Func Offset: 0
	// Func End, Address: 0x1d0d10, Func Offset: 0x10
}

// 
// Start address: 0x1d0d10
void SendPartsVU1_Arrange(sgEMDrawBlock* block)
{
	sgEMDrawPart* part;
	sgEMDrawBlockParams* params;
	unsigned long* pk;
	unsigned int* exec_table;
	int light_finish_mpg;
	int i;
	unsigned int* p;
	unsigned int* p;
	// Line 438, Address: 0x1d0d10, Func Offset: 0
	// Line 440, Address: 0x1d0d28, Func Offset: 0x18
	// Line 447, Address: 0x1d0d30, Func Offset: 0x20
	// Line 440, Address: 0x1d0d34, Func Offset: 0x24
	// Line 447, Address: 0x1d0d38, Func Offset: 0x28
	// Line 449, Address: 0x1d0d3c, Func Offset: 0x2c
	// Line 450, Address: 0x1d0d54, Func Offset: 0x44
	// Line 453, Address: 0x1d0d5c, Func Offset: 0x4c
	// Line 456, Address: 0x1d0d64, Func Offset: 0x54
	// Line 457, Address: 0x1d0d6c, Func Offset: 0x5c
	// Line 459, Address: 0x1d0d80, Func Offset: 0x70
	// Line 461, Address: 0x1d0d88, Func Offset: 0x78
	// Line 462, Address: 0x1d0da0, Func Offset: 0x90
	// Line 461, Address: 0x1d0da4, Func Offset: 0x94
	// Line 462, Address: 0x1d0db4, Func Offset: 0xa4
	// Line 465, Address: 0x1d0dc8, Func Offset: 0xb8
	// Line 462, Address: 0x1d0dcc, Func Offset: 0xbc
	// Line 465, Address: 0x1d0ddc, Func Offset: 0xcc
	// Line 466, Address: 0x1d0de8, Func Offset: 0xd8
	// Line 468, Address: 0x1d0df8, Func Offset: 0xe8
	// Line 471, Address: 0x1d0e08, Func Offset: 0xf8
	// Line 472, Address: 0x1d0e20, Func Offset: 0x110
	// Line 473, Address: 0x1d0e24, Func Offset: 0x114
	// Line 472, Address: 0x1d0e30, Func Offset: 0x120
	// Line 473, Address: 0x1d0e34, Func Offset: 0x124
	// Line 477, Address: 0x1d0e40, Func Offset: 0x130
	// Line 476, Address: 0x1d0e48, Func Offset: 0x138
	// Line 478, Address: 0x1d0e4c, Func Offset: 0x13c
	// Line 477, Address: 0x1d0e50, Func Offset: 0x140
	// Line 478, Address: 0x1d0e54, Func Offset: 0x144
	// Line 477, Address: 0x1d0e58, Func Offset: 0x148
	// Line 478, Address: 0x1d0e5c, Func Offset: 0x14c
	// Line 479, Address: 0x1d0e64, Func Offset: 0x154
	// Line 480, Address: 0x1d0e68, Func Offset: 0x158
	// Line 483, Address: 0x1d0e6c, Func Offset: 0x15c
	// Line 489, Address: 0x1d0e70, Func Offset: 0x160
	// Line 483, Address: 0x1d0e74, Func Offset: 0x164
	// Line 489, Address: 0x1d0e78, Func Offset: 0x168
	// Line 483, Address: 0x1d0e80, Func Offset: 0x170
	// Line 489, Address: 0x1d0e84, Func Offset: 0x174
	// Line 493, Address: 0x1d0e8c, Func Offset: 0x17c
	// Line 495, Address: 0x1d0e94, Func Offset: 0x184
	// Line 496, Address: 0x1d0ea8, Func Offset: 0x198
	// Line 499, Address: 0x1d0eb4, Func Offset: 0x1a4
	// Line 501, Address: 0x1d0f00, Func Offset: 0x1f0
	// Line 505, Address: 0x1d0f14, Func Offset: 0x204
	// Line 509, Address: 0x1d0f1c, Func Offset: 0x20c
	// Line 511, Address: 0x1d0f2c, Func Offset: 0x21c
	// Line 513, Address: 0x1d0f34, Func Offset: 0x224
	// Line 512, Address: 0x1d0f3c, Func Offset: 0x22c
	// Line 513, Address: 0x1d0f40, Func Offset: 0x230
	// Line 515, Address: 0x1d0f50, Func Offset: 0x240
	// Line 516, Address: 0x1d0f58, Func Offset: 0x248
	// Line 517, Address: 0x1d0f60, Func Offset: 0x250
	// Line 518, Address: 0x1d0f6c, Func Offset: 0x25c
	// Line 519, Address: 0x1d0f84, Func Offset: 0x274
	// Func End, Address: 0x1d0fa0, Func Offset: 0x290
}

// 
// Start address: 0x1d0fa0
void sgEMRenderInitVU1Part()
{
	// Line 526, Address: 0x1d0fa0, Func Offset: 0
	// Line 527, Address: 0x1d0fa8, Func Offset: 0x8
	// Line 528, Address: 0x1d0fb0, Func Offset: 0x10
	// Line 529, Address: 0x1d0fb8, Func Offset: 0x18
	// Func End, Address: 0x1d0fc4, Func Offset: 0x24
}

// 
// Start address: 0x1d0fd0
void sgEMRenderPreVU1Draw()
{
	// Line 533, Address: 0x1d0fd0, Func Offset: 0
	// Line 535, Address: 0x1d0fd8, Func Offset: 0x8
	// Line 537, Address: 0x1d0fe0, Func Offset: 0x10
	// Line 539, Address: 0x1d0fe8, Func Offset: 0x18
	// Func End, Address: 0x1d0ff4, Func Offset: 0x24
}

// 
// Start address: 0x1d1000
void sgEMRenderBlockVU1Draw(sgEMDrawBlock* block_)
{
	sgEMDrawBlock* block;
	sgEMDrawBlockBBox* bbox;
	// Line 549, Address: 0x1d1000, Func Offset: 0
	// Line 553, Address: 0x1d100c, Func Offset: 0xc
	// Line 556, Address: 0x1d1014, Func Offset: 0x14
	// Line 558, Address: 0x1d1024, Func Offset: 0x24
	// Line 563, Address: 0x1d102c, Func Offset: 0x2c
	// Line 566, Address: 0x1d1040, Func Offset: 0x40
	// Line 567, Address: 0x1d104c, Func Offset: 0x4c
	// Line 570, Address: 0x1d1050, Func Offset: 0x50
	// Line 573, Address: 0x1d1058, Func Offset: 0x58
	// Line 576, Address: 0x1d1060, Func Offset: 0x60
	// Line 578, Address: 0x1d1068, Func Offset: 0x68
	// Line 579, Address: 0x1d1078, Func Offset: 0x78
	// Line 580, Address: 0x1d1080, Func Offset: 0x80
	// Line 581, Address: 0x1d1088, Func Offset: 0x88
	// Line 585, Address: 0x1d1094, Func Offset: 0x94
	// Line 587, Address: 0x1d109c, Func Offset: 0x9c
	// Line 588, Address: 0x1d10a0, Func Offset: 0xa0
	// Line 589, Address: 0x1d10a8, Func Offset: 0xa8
	// Func End, Address: 0x1d10bc, Func Offset: 0xbc
}

