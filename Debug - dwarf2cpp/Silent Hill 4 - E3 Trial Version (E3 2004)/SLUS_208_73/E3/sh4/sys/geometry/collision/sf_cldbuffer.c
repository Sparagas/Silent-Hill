typedef struct _anon0;
typedef struct sgBone;
typedef struct sfCldPart;
typedef struct sfCldPartList;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;


typedef float type_0[4];
typedef float type_1[4][4];
typedef sfCldPartList type_2[100];
typedef float type_3[4];
typedef unsigned char type_4[3];
typedef float type_5[4];

struct _anon0
{
	float mat[4][4];
	float half_w[4];
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

struct sfCldPartList
{
	sfCldPart cld_part;
	sfCldPartList* next;
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon0 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon1 line;
	_anon2 sphere;
};

struct _anon1
{
	float start[4];
	float end[4];
};

struct _anon2
{
	float center[4];
	float radius;
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
};

sfCldPartList* free_head;
sfCldPartList cld_parts[100];

void sfCldPartBufferReset();
void sfCldBufferInit();
sfCldPart* sfCldBufferPartAllocate();
void sfCldBufferPartFree(sfCldPart* cld_part);

// 
// Start address: 0x1f8b50
void sfCldPartBufferReset()
{
	int i;
	sfCldPartList* part;
	// Line 46, Address: 0x1f8b50, Func Offset: 0
	// Line 47, Address: 0x1f8b54, Func Offset: 0x4
	// Line 46, Address: 0x1f8b58, Func Offset: 0x8
	// Line 49, Address: 0x1f8b60, Func Offset: 0x10
	// Line 50, Address: 0x1f8b68, Func Offset: 0x18
	// Line 49, Address: 0x1f8b6c, Func Offset: 0x1c
	// Line 50, Address: 0x1f8b74, Func Offset: 0x24
	// Line 49, Address: 0x1f8b7c, Func Offset: 0x2c
	// Line 50, Address: 0x1f8b84, Func Offset: 0x34
	// Line 49, Address: 0x1f8b90, Func Offset: 0x40
	// Line 50, Address: 0x1f8b98, Func Offset: 0x48
	// Line 49, Address: 0x1f8ba4, Func Offset: 0x54
	// Line 50, Address: 0x1f8bac, Func Offset: 0x5c
	// Line 49, Address: 0x1f8bbc, Func Offset: 0x6c
	// Line 50, Address: 0x1f8bc4, Func Offset: 0x74
	// Line 53, Address: 0x1f8bc8, Func Offset: 0x78
	// Line 50, Address: 0x1f8bcc, Func Offset: 0x7c
	// Line 53, Address: 0x1f8bd0, Func Offset: 0x80
	// Line 50, Address: 0x1f8bd4, Func Offset: 0x84
	// Line 53, Address: 0x1f8bd8, Func Offset: 0x88
	// Line 49, Address: 0x1f8bdc, Func Offset: 0x8c
	// Line 50, Address: 0x1f8be0, Func Offset: 0x90
	// Line 51, Address: 0x1f8be4, Func Offset: 0x94
	// Line 54, Address: 0x1f8be8, Func Offset: 0x98
	// Func End, Address: 0x1f8bf0, Func Offset: 0xa0
}

// 
// Start address: 0x1f8bf0
void sfCldBufferInit()
{
	// Line 57, Address: 0x1f8bf0, Func Offset: 0
	// Line 58, Address: 0x1f8bf4, Func Offset: 0x4
	// Line 57, Address: 0x1f8bf8, Func Offset: 0x8
	// Line 58, Address: 0x1f8bfc, Func Offset: 0xc
	// Line 59, Address: 0x1f8c0c, Func Offset: 0x1c
	// Line 60, Address: 0x1f8c14, Func Offset: 0x24
	// Func End, Address: 0x1f8c20, Func Offset: 0x30
}

// 
// Start address: 0x1f8c20
sfCldPart* sfCldBufferPartAllocate()
{
	// Line 63, Address: 0x1f8c20, Func Offset: 0
	// Line 64, Address: 0x1f8c28, Func Offset: 0x8
	// Line 65, Address: 0x1f8c40, Func Offset: 0x20
	// Line 66, Address: 0x1f8c48, Func Offset: 0x28
	// Line 67, Address: 0x1f8c50, Func Offset: 0x30
	// Line 68, Address: 0x1f8c5c, Func Offset: 0x3c
	// Line 69, Address: 0x1f8c60, Func Offset: 0x40
	// Func End, Address: 0x1f8c68, Func Offset: 0x48
}

// 
// Start address: 0x1f8c70
void sfCldBufferPartFree(sfCldPart* cld_part)
{
	sfCldPartList* part;
	// Line 75, Address: 0x1f8c70, Func Offset: 0
	// Line 77, Address: 0x1f8c84, Func Offset: 0x14
	// Line 78, Address: 0x1f8c94, Func Offset: 0x24
	// Func End, Address: 0x1f8ca0, Func Offset: 0x30
}

