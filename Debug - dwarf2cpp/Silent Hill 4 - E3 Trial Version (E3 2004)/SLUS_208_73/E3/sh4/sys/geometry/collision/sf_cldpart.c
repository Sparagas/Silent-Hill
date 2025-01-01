typedef struct sfCldPart;
typedef union sfCldBody;
typedef struct sgBone;
typedef enum _enum : unsigned char;
typedef struct _anon0;
typedef struct sfOffsetAABB;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;

typedef int(*type_0)(sfCldBody*, sfCldBody*);
typedef int(*type_8)(sfCldBody*, sfCldBody*);

typedef int(*type_1)(sfCldBody*, sfCldBody*)[8];
typedef int(*type_2)(sfCldBody*, sfCldBody*)[8][7];
typedef float type_3[4];
typedef float type_4[4][4];
typedef float type_5[4];
typedef unsigned char type_6[3];
typedef float type_7[4];

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

union sfCldBody
{
	_anon3 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon1 line;
	_anon0 sphere;
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
	SF_CLD_TYPE_NONE,
	SF_CLD_TYPE_LINE,
	SF_CLD_TYPE_SPHERE,
	SF_CLD_TYPE_AABB,
	SF_CLD_TYPE_OFFSET_AABB,
	SF_CLD_TYPE_OBB
};

struct _anon0
{
	float center[4];
	float radius;
};

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
};

struct _anon1
{
	float start[4];
	float end[4];
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
};

float sg_vector_unit_w[4];
int(*judge_func_table)(sfCldBody*, sfCldBody*)[8][7];

void sfCldPartConstruct(sfCldPart* cld_part);
void sfCldPartUpdateByMatrix(sfCldPart* cld_part, float lwm[4]);
void sfCldPartUpdate(sfCldPart* cld_part);
void sfCldPartGetCenter(sfCldPart* cld_part, float* v);
void sfCldPartMakeSphere(sfCldPart* cld_part, _anon0* sphere);
int sfCldLineSphare(sfCldBody* body, sfCldBody* target);
int sfCldLineAABB(sfCldBody* body, sfCldBody* target);
int sfCldLineOBB(sfCldBody* body, sfCldBody* target);
int sfCldSphereSphere(sfCldBody* body, sfCldBody* target);
int sfCldSphereAABB(sfCldBody* body, sfCldBody* target);
int sfCldSphereOBB(sfCldBody* body, sfCldBody* target);
int sfCldAABBAABB(sfCldBody* body, sfCldBody* target);
int sfCldAABBOBB(sfCldBody* body, sfCldBody* target);
int sfCldOBBOBB(sfCldBody* body, sfCldBody* target);
int sfCldPartJudge(sfCldPart* test_part, sfCldPart* target);

// 
// Start address: 0x1b77e0
void sfCldPartConstruct(sfCldPart* cld_part)
{
	// Line 12, Address: 0x1b77e0, Func Offset: 0
	// Line 14, Address: 0x1b77e4, Func Offset: 0x4
	// Line 16, Address: 0x1b77ec, Func Offset: 0xc
	// Line 17, Address: 0x1b77f4, Func Offset: 0x14
	// Func End, Address: 0x1b7804, Func Offset: 0x24
}

// 
// Start address: 0x1b7810
void sfCldPartUpdateByMatrix(sfCldPart* cld_part, float lwm[4])
{
	sfCldBody* local;
	sfCldBody* world;
	float v[4];
	// Line 31, Address: 0x1b7810, Func Offset: 0
	// Line 35, Address: 0x1b7818, Func Offset: 0x8
	// Line 37, Address: 0x1b7878, Func Offset: 0x68
	// Line 38, Address: 0x1b78a4, Func Offset: 0x94
	// Line 39, Address: 0x1b78d4, Func Offset: 0xc4
	// Line 40, Address: 0x1b78dc, Func Offset: 0xcc
	// Line 41, Address: 0x1b78e0, Func Offset: 0xd0
	// Line 42, Address: 0x1b790c, Func Offset: 0xfc
	// Line 43, Address: 0x1b7910, Func Offset: 0x100
	// Line 48, Address: 0x1b7918, Func Offset: 0x108
	// Line 49, Address: 0x1b794c, Func Offset: 0x13c
	// Line 50, Address: 0x1b7964, Func Offset: 0x154
	// Line 51, Address: 0x1b7980, Func Offset: 0x170
	// Line 53, Address: 0x1b7988, Func Offset: 0x178
	// Line 54, Address: 0x1b79f8, Func Offset: 0x1e8
	// Line 59, Address: 0x1b7a08, Func Offset: 0x1f8
	// Func End, Address: 0x1b7a10, Func Offset: 0x200
}

// 
// Start address: 0x1b7a10
void sfCldPartUpdate(sfCldPart* cld_part)
{
	float lwm[4][4];
	float q[4];
	float t[4];
	// Line 72, Address: 0x1b7a10, Func Offset: 0
	// Line 77, Address: 0x1b7a20, Func Offset: 0x10
	// Line 78, Address: 0x1b7a2c, Func Offset: 0x1c
	// Line 87, Address: 0x1b7a34, Func Offset: 0x24
	// Line 88, Address: 0x1b7a3c, Func Offset: 0x2c
	// Line 89, Address: 0x1b7a48, Func Offset: 0x38
	// Line 90, Address: 0x1b7a54, Func Offset: 0x44
	// Line 93, Address: 0x1b7a64, Func Offset: 0x54
	// Line 91, Address: 0x1b7a68, Func Offset: 0x58
	// Line 93, Address: 0x1b7a6c, Func Offset: 0x5c
	// Line 94, Address: 0x1b7a78, Func Offset: 0x68
	// Func End, Address: 0x1b7a88, Func Offset: 0x78
}

// 
// Start address: 0x1b7a90
void sfCldPartGetCenter(sfCldPart* cld_part, float* v)
{
	sfCldBody* world;
	// Line 103, Address: 0x1b7a90, Func Offset: 0
	// Line 105, Address: 0x1b7a98, Func Offset: 0x8
	// Line 107, Address: 0x1b7af8, Func Offset: 0x68
	// Line 108, Address: 0x1b7b10, Func Offset: 0x80
	// Line 109, Address: 0x1b7b30, Func Offset: 0xa0
	// Line 112, Address: 0x1b7b38, Func Offset: 0xa8
	// Line 113, Address: 0x1b7b50, Func Offset: 0xc0
	// Line 114, Address: 0x1b7b70, Func Offset: 0xe0
	// Line 116, Address: 0x1b7b78, Func Offset: 0xe8
	// Line 117, Address: 0x1b7b7c, Func Offset: 0xec
	// Line 118, Address: 0x1b7b84, Func Offset: 0xf4
	// Line 119, Address: 0x1b7b88, Func Offset: 0xf8
	// Line 123, Address: 0x1b7b94, Func Offset: 0x104
	// Line 124, Address: 0x1b7b98, Func Offset: 0x108
	// Func End, Address: 0x1b7ba0, Func Offset: 0x110
}

// 
// Start address: 0x1b7ba0
void sfCldPartMakeSphere(sfCldPart* cld_part, _anon0* sphere)
{
	sfCldBody* world;
	float v[4];
	// Line 139, Address: 0x1b7ba0, Func Offset: 0
	// Line 142, Address: 0x1b7ba8, Func Offset: 0x8
	// Line 144, Address: 0x1b7c08, Func Offset: 0x68
	// Line 145, Address: 0x1b7c24, Func Offset: 0x84
	// Line 146, Address: 0x1b7c4c, Func Offset: 0xac
	// Line 147, Address: 0x1b7c68, Func Offset: 0xc8
	// Line 148, Address: 0x1b7c94, Func Offset: 0xf4
	// Line 150, Address: 0x1b7c9c, Func Offset: 0xfc
	// Line 151, Address: 0x1b7ca0, Func Offset: 0x100
	// Line 152, Address: 0x1b7cbc, Func Offset: 0x11c
	// Line 153, Address: 0x1b7ce4, Func Offset: 0x144
	// Line 154, Address: 0x1b7d00, Func Offset: 0x160
	// Line 155, Address: 0x1b7d2c, Func Offset: 0x18c
	// Line 156, Address: 0x1b7d34, Func Offset: 0x194
	// Line 157, Address: 0x1b7d38, Func Offset: 0x198
	// Line 158, Address: 0x1b7d40, Func Offset: 0x1a0
	// Line 159, Address: 0x1b7d44, Func Offset: 0x1a4
	// Line 160, Address: 0x1b7d4c, Func Offset: 0x1ac
	// Line 161, Address: 0x1b7d50, Func Offset: 0x1b0
	// Line 162, Address: 0x1b7d5c, Func Offset: 0x1bc
	// Line 163, Address: 0x1b7d88, Func Offset: 0x1e8
	// Line 165, Address: 0x1b7d90, Func Offset: 0x1f0
	// Line 166, Address: 0x1b7da0, Func Offset: 0x200
	// Line 168, Address: 0x1b7dac, Func Offset: 0x20c
	// Line 170, Address: 0x1b7db0, Func Offset: 0x210
	// Func End, Address: 0x1b7db8, Func Offset: 0x218
}

// 
// Start address: 0x1b7dc0
int sfCldLineSphare(sfCldBody* body, sfCldBody* target)
{
	// Line 174, Address: 0x1b7dc0, Func Offset: 0
	// Func End, Address: 0x1b7dc8, Func Offset: 0x8
}

// 
// Start address: 0x1b7dd0
int sfCldLineAABB(sfCldBody* body, sfCldBody* target)
{
	// Line 179, Address: 0x1b7dd0, Func Offset: 0
	// Func End, Address: 0x1b7dd8, Func Offset: 0x8
}

// 
// Start address: 0x1b7de0
int sfCldLineOBB(sfCldBody* body, sfCldBody* target)
{
	// Line 184, Address: 0x1b7de0, Func Offset: 0
	// Func End, Address: 0x1b7de8, Func Offset: 0x8
}

// 
// Start address: 0x1b7df0
int sfCldSphereSphere(sfCldBody* body, sfCldBody* target)
{
	// Line 189, Address: 0x1b7df0, Func Offset: 0
	// Func End, Address: 0x1b7df8, Func Offset: 0x8
}

// 
// Start address: 0x1b7e00
int sfCldSphereAABB(sfCldBody* body, sfCldBody* target)
{
	// Line 194, Address: 0x1b7e00, Func Offset: 0
	// Func End, Address: 0x1b7e08, Func Offset: 0x8
}

// 
// Start address: 0x1b7e10
int sfCldSphereOBB(sfCldBody* body, sfCldBody* target)
{
	// Line 199, Address: 0x1b7e10, Func Offset: 0
	// Func End, Address: 0x1b7e18, Func Offset: 0x8
}

// 
// Start address: 0x1b7e20
int sfCldAABBAABB(sfCldBody* body, sfCldBody* target)
{
	// Line 204, Address: 0x1b7e20, Func Offset: 0
	// Func End, Address: 0x1b7e28, Func Offset: 0x8
}

// 
// Start address: 0x1b7e30
int sfCldAABBOBB(sfCldBody* body, sfCldBody* target)
{
	// Line 209, Address: 0x1b7e30, Func Offset: 0
	// Func End, Address: 0x1b7e38, Func Offset: 0x8
}

// 
// Start address: 0x1b7e40
int sfCldOBBOBB(sfCldBody* body, sfCldBody* target)
{
	// Line 214, Address: 0x1b7e40, Func Offset: 0
	// Func End, Address: 0x1b7e48, Func Offset: 0x8
}

// 
// Start address: 0x1b7e50
int sfCldPartJudge(sfCldPart* test_part, sfCldPart* target)
{
	_enum type_a;
	_enum type_b;
	int(*judge)(sfCldBody*, sfCldBody*);
	int ret;
	// Line 306, Address: 0x1b7e50, Func Offset: 0
	// Line 312, Address: 0x1b7e58, Func Offset: 0x8
	// Line 313, Address: 0x1b7e68, Func Offset: 0x18
	// Line 315, Address: 0x1b7e78, Func Offset: 0x28
	// Line 316, Address: 0x1b7e84, Func Offset: 0x34
	// Line 317, Address: 0x1b7e90, Func Offset: 0x40
	// Line 318, Address: 0x1b7ea4, Func Offset: 0x54
	// Line 319, Address: 0x1b7ebc, Func Offset: 0x6c
	// Line 320, Address: 0x1b7ec4, Func Offset: 0x74
	// Line 321, Address: 0x1b7ed0, Func Offset: 0x80
	// Line 322, Address: 0x1b7ed8, Func Offset: 0x88
	// Line 323, Address: 0x1b7ee0, Func Offset: 0x90
	// Line 324, Address: 0x1b7efc, Func Offset: 0xac
	// Line 325, Address: 0x1b7f04, Func Offset: 0xb4
	// Line 326, Address: 0x1b7f10, Func Offset: 0xc0
	// Line 327, Address: 0x1b7f1c, Func Offset: 0xcc
	// Line 329, Address: 0x1b7f20, Func Offset: 0xd0
	// Func End, Address: 0x1b7f2c, Func Offset: 0xdc
}

