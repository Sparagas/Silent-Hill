typedef struct _anon0;
typedef struct _anon1;
typedef struct Light;
typedef struct _anon2;
typedef enum sgLightType : unsigned char;
typedef struct _anon3;

typedef void(*type_6)(_anon2*, int, int, float*);

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef int type_3[8];
typedef int type_4[2];
typedef _anon1 type_5[8];
typedef float type_7[4];

struct _anon0
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct _anon1
{
	int render_id[2];
	int vacancy;
	int type;
};

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

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
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

_anon1 light_hold[8];
float sg_vector_unit_y[4];

int LightHoldGet();
void LightHoldSetType(int no, int type);
int LightHoldType(int no);
int LightHoldAcquireTEID();
void sgTERenderLightInit();
int sgTERenderLightAdd(_anon3* light);
void sgTERenderLightUpdateByScene();
void sgTERenderLightUpdateByPos(_anon0* model);
void sgTERenderLightRemove(int lignt_id);
void sgTERenderLightRemoveAll();

// 
// Start address: 0x154320
int LightHoldGet()
{
	int i;
	// Line 57, Address: 0x154320, Func Offset: 0
	// Line 58, Address: 0x15432c, Func Offset: 0xc
	// Line 59, Address: 0x154340, Func Offset: 0x20
	// Line 60, Address: 0x15436c, Func Offset: 0x4c
	// Line 62, Address: 0x154374, Func Offset: 0x54
	// Line 63, Address: 0x154388, Func Offset: 0x68
	// Line 64, Address: 0x154390, Func Offset: 0x70
	// Func End, Address: 0x154398, Func Offset: 0x78
}

// 
// Start address: 0x1543a0
void LightHoldSetType(int no, int type)
{
	// Line 105, Address: 0x1543a0, Func Offset: 0
	// Line 106, Address: 0x1543b0, Func Offset: 0x10
	// Func End, Address: 0x1543b8, Func Offset: 0x18
}

// 
// Start address: 0x1543c0
int LightHoldType(int no)
{
	// Line 110, Address: 0x1543c0, Func Offset: 0
	// Line 111, Address: 0x1543d0, Func Offset: 0x10
	// Func End, Address: 0x1543d8, Func Offset: 0x18
}

// 
// Start address: 0x1543e0
int LightHoldAcquireTEID()
{
	int i;
	int chk[8];
	int j;
	// Line 117, Address: 0x1543e0, Func Offset: 0
	// Line 125, Address: 0x1543e4, Func Offset: 0x4
	// Line 117, Address: 0x1543e8, Func Offset: 0x8
	// Line 123, Address: 0x1543ec, Func Offset: 0xc
	// Line 125, Address: 0x1543f4, Func Offset: 0x14
	// Line 123, Address: 0x1543f8, Func Offset: 0x18
	// Line 125, Address: 0x1543fc, Func Offset: 0x1c
	// Line 123, Address: 0x154400, Func Offset: 0x20
	// Line 127, Address: 0x154418, Func Offset: 0x38
	// Line 125, Address: 0x15441c, Func Offset: 0x3c
	// Line 127, Address: 0x154420, Func Offset: 0x40
	// Line 128, Address: 0x154430, Func Offset: 0x50
	// Line 131, Address: 0x154434, Func Offset: 0x54
	// Line 130, Address: 0x154438, Func Offset: 0x58
	// Line 131, Address: 0x154448, Func Offset: 0x68
	// Line 132, Address: 0x15448c, Func Offset: 0xac
	// Line 134, Address: 0x15449c, Func Offset: 0xbc
	// Line 135, Address: 0x1544a0, Func Offset: 0xc0
	// Line 136, Address: 0x1544ac, Func Offset: 0xcc
	// Line 137, Address: 0x1544b4, Func Offset: 0xd4
	// Line 139, Address: 0x1544c8, Func Offset: 0xe8
	// Line 140, Address: 0x1544d0, Func Offset: 0xf0
	// Func End, Address: 0x1544d8, Func Offset: 0xf8
}

// 
// Start address: 0x1544e0
void sgTERenderLightInit()
{
	// Line 149, Address: 0x1544e0, Func Offset: 0
	// Line 152, Address: 0x1544e8, Func Offset: 0x8
	// Line 154, Address: 0x1544f0, Func Offset: 0x10
	// Line 156, Address: 0x154504, Func Offset: 0x24
	// Line 158, Address: 0x154608, Func Offset: 0x128
	// Func End, Address: 0x154614, Func Offset: 0x134
}

// 
// Start address: 0x154620
int sgTERenderLightAdd(_anon3* light)
{
	int no;
	int te_id;
	float color[4];
	float dir[4];
	float pos[4];
	// Line 165, Address: 0x154620, Func Offset: 0
	// Line 172, Address: 0x15463c, Func Offset: 0x1c
	// Line 173, Address: 0x154648, Func Offset: 0x28
	// Line 174, Address: 0x154650, Func Offset: 0x30
	// Line 176, Address: 0x154658, Func Offset: 0x38
	// Line 178, Address: 0x154664, Func Offset: 0x44
	// Line 182, Address: 0x154694, Func Offset: 0x74
	// Line 183, Address: 0x154698, Func Offset: 0x78
	// Line 184, Address: 0x1546a8, Func Offset: 0x88
	// Line 187, Address: 0x1546b0, Func Offset: 0x90
	// Line 188, Address: 0x1546bc, Func Offset: 0x9c
	// Line 189, Address: 0x1546c4, Func Offset: 0xa4
	// Line 190, Address: 0x154708, Func Offset: 0xe8
	// Line 192, Address: 0x154720, Func Offset: 0x100
	// Line 194, Address: 0x154748, Func Offset: 0x128
	// Line 195, Address: 0x154754, Func Offset: 0x134
	// Line 196, Address: 0x154764, Func Offset: 0x144
	// Line 199, Address: 0x154770, Func Offset: 0x150
	// Line 200, Address: 0x154780, Func Offset: 0x160
	// Line 201, Address: 0x154788, Func Offset: 0x168
	// Line 202, Address: 0x154790, Func Offset: 0x170
	// Line 203, Address: 0x1547c8, Func Offset: 0x1a8
	// Line 205, Address: 0x1547d0, Func Offset: 0x1b0
	// Line 206, Address: 0x1547f8, Func Offset: 0x1d8
	// Line 208, Address: 0x154808, Func Offset: 0x1e8
	// Line 211, Address: 0x154810, Func Offset: 0x1f0
	// Line 212, Address: 0x15481c, Func Offset: 0x1fc
	// Line 213, Address: 0x154824, Func Offset: 0x204
	// Line 214, Address: 0x154868, Func Offset: 0x248
	// Line 216, Address: 0x154880, Func Offset: 0x260
	// Line 218, Address: 0x1548a8, Func Offset: 0x288
	// Line 219, Address: 0x1548b4, Func Offset: 0x294
	// Line 220, Address: 0x1548c4, Func Offset: 0x2a4
	// Line 221, Address: 0x1548d0, Func Offset: 0x2b0
	// Line 224, Address: 0x1548d8, Func Offset: 0x2b8
	// Line 225, Address: 0x1548e4, Func Offset: 0x2c4
	// Line 226, Address: 0x1548ec, Func Offset: 0x2cc
	// Line 227, Address: 0x154930, Func Offset: 0x310
	// Line 229, Address: 0x154948, Func Offset: 0x328
	// Line 230, Address: 0x154970, Func Offset: 0x350
	// Line 231, Address: 0x15497c, Func Offset: 0x35c
	// Line 232, Address: 0x154994, Func Offset: 0x374
	// Line 235, Address: 0x1549a0, Func Offset: 0x380
	// Line 236, Address: 0x1549b0, Func Offset: 0x390
	// Line 237, Address: 0x1549b8, Func Offset: 0x398
	// Line 238, Address: 0x1549c0, Func Offset: 0x3a0
	// Line 239, Address: 0x1549f8, Func Offset: 0x3d8
	// Line 241, Address: 0x154a00, Func Offset: 0x3e0
	// Line 242, Address: 0x154a28, Func Offset: 0x408
	// Line 244, Address: 0x154a3c, Func Offset: 0x41c
	// Line 246, Address: 0x154a44, Func Offset: 0x424
	// Line 247, Address: 0x154a48, Func Offset: 0x428
	// Line 248, Address: 0x154a54, Func Offset: 0x434
	// Line 249, Address: 0x154a5c, Func Offset: 0x43c
	// Line 250, Address: 0x154aa0, Func Offset: 0x480
	// Line 252, Address: 0x154ab8, Func Offset: 0x498
	// Line 253, Address: 0x154ae0, Func Offset: 0x4c0
	// Line 254, Address: 0x154aec, Func Offset: 0x4cc
	// Line 255, Address: 0x154b00, Func Offset: 0x4e0
	// Line 256, Address: 0x154b0c, Func Offset: 0x4ec
	// Line 257, Address: 0x154b18, Func Offset: 0x4f8
	// Line 260, Address: 0x154b20, Func Offset: 0x500
	// Line 261, Address: 0x154b2c, Func Offset: 0x50c
	// Line 262, Address: 0x154b34, Func Offset: 0x514
	// Line 263, Address: 0x154b78, Func Offset: 0x558
	// Line 265, Address: 0x154b80, Func Offset: 0x560
	// Line 266, Address: 0x154b8c, Func Offset: 0x56c
	// Line 273, Address: 0x154bac, Func Offset: 0x58c
	// Line 277, Address: 0x154bec, Func Offset: 0x5cc
	// Line 280, Address: 0x154bf8, Func Offset: 0x5d8
	// Line 281, Address: 0x154c08, Func Offset: 0x5e8
	// Line 282, Address: 0x154c10, Func Offset: 0x5f0
	// Line 283, Address: 0x154c18, Func Offset: 0x5f8
	// Line 284, Address: 0x154c5c, Func Offset: 0x63c
	// Line 285, Address: 0x154c64, Func Offset: 0x644
	// Line 284, Address: 0x154c68, Func Offset: 0x648
	// Line 286, Address: 0x154c78, Func Offset: 0x658
	// Line 287, Address: 0x154ca0, Func Offset: 0x680
	// Line 296, Address: 0x154cb0, Func Offset: 0x690
	// Line 297, Address: 0x154cb8, Func Offset: 0x698
	// Line 298, Address: 0x154cc0, Func Offset: 0x6a0
	// Func End, Address: 0x154ce0, Func Offset: 0x6c0
}

// 
// Start address: 0x154ce0
void sgTERenderLightUpdateByScene()
{
	// Line 304, Address: 0x154ce0, Func Offset: 0
	// Func End, Address: 0x154ce8, Func Offset: 0x8
}

// 
// Start address: 0x154cf0
void sgTERenderLightUpdateByPos(_anon0* model)
{
	int lno;
	float pos[4];
	float l_pos[4];
	float v[4];
	int type;
	float r;
	float d;
	float rt;
	Light* l;
	Light* l_base;
	int teid;
	// Line 311, Address: 0x154cf0, Func Offset: 0
	// Line 317, Address: 0x154cf8, Func Offset: 0x8
	// Line 311, Address: 0x154cfc, Func Offset: 0xc
	// Line 317, Address: 0x154d10, Func Offset: 0x20
	// Line 319, Address: 0x154d1c, Func Offset: 0x2c
	// Line 320, Address: 0x154d28, Func Offset: 0x38
	// Line 328, Address: 0x154d34, Func Offset: 0x44
	// Line 329, Address: 0x154d50, Func Offset: 0x60
	// Line 330, Address: 0x154d64, Func Offset: 0x74
	// Line 332, Address: 0x154d6c, Func Offset: 0x7c
	// Line 333, Address: 0x154d78, Func Offset: 0x88
	// Line 334, Address: 0x154d94, Func Offset: 0xa4
	// Line 335, Address: 0x154d98, Func Offset: 0xa8
	// Line 336, Address: 0x154da4, Func Offset: 0xb4
	// Line 337, Address: 0x154db4, Func Offset: 0xc4
	// Line 339, Address: 0x154dbc, Func Offset: 0xcc
	// Line 340, Address: 0x154dc4, Func Offset: 0xd4
	// Line 341, Address: 0x154dd4, Func Offset: 0xe4
	// Line 342, Address: 0x154dd8, Func Offset: 0xe8
	// Line 345, Address: 0x154de0, Func Offset: 0xf0
	// Line 347, Address: 0x154df4, Func Offset: 0x104
	// Line 348, Address: 0x154e10, Func Offset: 0x120
	// Line 349, Address: 0x154e34, Func Offset: 0x144
	// Line 350, Address: 0x154e60, Func Offset: 0x170
	// Line 351, Address: 0x154e64, Func Offset: 0x174
	// Line 356, Address: 0x154e80, Func Offset: 0x190
	// Line 355, Address: 0x154e84, Func Offset: 0x194
	// Line 356, Address: 0x154e88, Func Offset: 0x198
	// Line 355, Address: 0x154e94, Func Offset: 0x1a4
	// Line 356, Address: 0x154e98, Func Offset: 0x1a8
	// Line 357, Address: 0x154ea0, Func Offset: 0x1b0
	// Line 360, Address: 0x154ea8, Func Offset: 0x1b8
	// Line 357, Address: 0x154eb0, Func Offset: 0x1c0
	// Line 358, Address: 0x154eb4, Func Offset: 0x1c4
	// Line 360, Address: 0x154eb8, Func Offset: 0x1c8
	// Line 361, Address: 0x154ed0, Func Offset: 0x1e0
	// Line 362, Address: 0x154ee4, Func Offset: 0x1f4
	// Line 363, Address: 0x154eec, Func Offset: 0x1fc
	// Func End, Address: 0x154f0c, Func Offset: 0x21c
}

// 
// Start address: 0x154f10
void sgTERenderLightRemove(int lignt_id)
{
	int i;
	// Line 370, Address: 0x154f10, Func Offset: 0
	// Line 372, Address: 0x154f14, Func Offset: 0x4
	// Line 370, Address: 0x154f18, Func Offset: 0x8
	// Line 372, Address: 0x154f24, Func Offset: 0x14
	// Line 370, Address: 0x154f28, Func Offset: 0x18
	// Line 372, Address: 0x154f34, Func Offset: 0x24
	// Line 370, Address: 0x154f38, Func Offset: 0x28
	// Line 372, Address: 0x154f3c, Func Offset: 0x2c
	// Line 370, Address: 0x154f40, Func Offset: 0x30
	// Line 372, Address: 0x154f44, Func Offset: 0x34
	// Line 373, Address: 0x154f50, Func Offset: 0x40
	// Line 374, Address: 0x154f54, Func Offset: 0x44
	// Line 375, Address: 0x154f5c, Func Offset: 0x4c
	// Line 376, Address: 0x154f64, Func Offset: 0x54
	// Line 375, Address: 0x154f68, Func Offset: 0x58
	// Line 376, Address: 0x154f6c, Func Offset: 0x5c
	// Line 377, Address: 0x154fb4, Func Offset: 0xa4
	// Line 378, Address: 0x154ff8, Func Offset: 0xe8
	// Line 379, Address: 0x155000, Func Offset: 0xf0
	// Func End, Address: 0x155020, Func Offset: 0x110
}

// 
// Start address: 0x155020
void sgTERenderLightRemoveAll()
{
	int i;
	// Line 385, Address: 0x155020, Func Offset: 0
	// Line 387, Address: 0x155030, Func Offset: 0x10
	// Line 388, Address: 0x155040, Func Offset: 0x20
	// Line 389, Address: 0x155050, Func Offset: 0x30
	// Line 390, Address: 0x155058, Func Offset: 0x38
	// Line 391, Address: 0x155068, Func Offset: 0x48
	// Func End, Address: 0x15507c, Func Offset: 0x5c
}

