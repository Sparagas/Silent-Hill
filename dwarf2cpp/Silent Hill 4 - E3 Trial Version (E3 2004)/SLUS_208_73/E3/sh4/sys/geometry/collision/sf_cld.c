typedef struct sfCldObject;
typedef struct sgQTObject;
typedef struct sfCldPart;
typedef union sfCldBody;
typedef struct _anon0;
typedef struct sgQTNode;
typedef struct sgBone;
typedef struct _anon1;
typedef struct sfOffsetAABB;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;

typedef int(*type_0)(sgQTObject*, sgQTObject*);
typedef int(*type_2)(_anon0*, sgQTObject*);
typedef int(*type_3)(sgQTObject*, sgQTObject*);
typedef void*(*type_9)(unsigned int);

typedef float type_1[4];
typedef float type_4[4];
typedef float type_5[4][4];
typedef sfCldPart* type_6[6];
typedef unsigned char type_7[3];
typedef float type_8[4];
typedef unsigned char type_10[3];
typedef sfCldPart* type_11[256];
typedef sfCldObject* type_12[224];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

union sfCldBody
{
	_anon3 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
};

struct _anon0
{
	float start[4];
	float end[4];
};

struct sgQTNode
{
	int dummy;
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

struct _anon1
{
	float center[4];
	float radius;
};

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
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

struct _anon4
{
	sfCldPart* hit_parts[256];
	sfCldObject* hit_objects[224];
	int n_hits;
	int n_hitobjects;
	int part_idx;
	int check_kind;
};

_anon4 hit_work;
int cld_init_ok;
int tree_build;
void*(*sfMemoryStackAlloc)(unsigned int);
int(*JudgeFunc)(sgQTObject*, sgQTObject*);
int(*JudgeFunc_Part)(sgQTObject*, sgQTObject*);
int(*LineJudgeFunc)(_anon0*, sgQTObject*);

void MakeBoundingBall(_anon1* ab, _anon1* a, _anon1* b);
void sfCldObjectConstruct(sfCldObject* cld_object);
void sfCldObjectDestruct(sfCldObject* cld_object);
void sfCldObjectSetNParts(sfCldObject* cld_object, int n_parts);
sfCldObject* sfCldObjectFromPart(sfCldPart* cld_part);
void sfCldObjectUpdate(sfCldObject* cld_object);
void sfCldObjectUpdateBoundingVolume(sfCldObject* cld_object);
sfCldPart* HitWorkPart(int idx);
sfCldObject* HitWorkObject(int idx);
int JudgePartKindAND(sfCldPart* test_part, sfCldObject* target, int kind);
int JudgeFunc(sgQTObject* test_object_, sgQTObject* target_);
int JudgeFunc_Part(sgQTObject* test_object_, sgQTObject* target_);
void sfCldInit();
void sfCldQuit();
void sfCldBuild(float* bmin, float* bmax, unsigned int depth);
void sfCldDestroy();
void sfCldEntryObject(sfCldObject* cld_object);
void sfCldRemoveObject(sfCldObject* cld_object);
int sfCldTestObject(sfCldObject* cld_test_object);
int sfCldTestObjectByKindAND(sfCldObject* cld_test_object, unsigned int kind);
int sfCldTestObjectPartByKindAND(sfCldObject* cld_test_object, int part_idx, unsigned int kind);
int sfCldTestResultNObjects();
sfCldObject* sfCldTestResultObject(int idx);
int sfCldTestResultNParts();
sfCldPart* sfCldTestResultPart(int idx);

// 
// Start address: 0x1b6c90
void MakeBoundingBall(_anon1* ab, _anon1* a, _anon1* b)
{
	float v0[4];
	float v1[4];
	float v[4];
	float h[4];
	float r;
	_anon1* b_s;
	_anon1* b_b;
	// Line 26, Address: 0x1b6c90, Func Offset: 0
	// Line 29, Address: 0x1b6ca4, Func Offset: 0x14
	// Line 30, Address: 0x1b6cb0, Func Offset: 0x20
	// Line 31, Address: 0x1b6cb4, Func Offset: 0x24
	// Line 34, Address: 0x1b6cb8, Func Offset: 0x28
	// Line 35, Address: 0x1b6cd0, Func Offset: 0x40
	// Line 36, Address: 0x1b6cf4, Func Offset: 0x64
	// Line 37, Address: 0x1b6d10, Func Offset: 0x80
	// Line 38, Address: 0x1b6d1c, Func Offset: 0x8c
	// Line 39, Address: 0x1b6d24, Func Offset: 0x94
	// Line 40, Address: 0x1b6d28, Func Offset: 0x98
	// Line 42, Address: 0x1b6d54, Func Offset: 0xc4
	// Line 43, Address: 0x1b6d7c, Func Offset: 0xec
	// Line 44, Address: 0x1b6d98, Func Offset: 0x108
	// Line 45, Address: 0x1b6dc0, Func Offset: 0x130
	// Line 48, Address: 0x1b6ddc, Func Offset: 0x14c
	// Line 49, Address: 0x1b6df8, Func Offset: 0x168
	// Line 50, Address: 0x1b6e1c, Func Offset: 0x18c
	// Line 51, Address: 0x1b6e34, Func Offset: 0x1a4
	// Line 52, Address: 0x1b6e40, Func Offset: 0x1b0
	// Line 55, Address: 0x1b6e48, Func Offset: 0x1b8
	// Line 56, Address: 0x1b6e68, Func Offset: 0x1d8
	// Line 57, Address: 0x1b6e90, Func Offset: 0x200
	// Line 58, Address: 0x1b6eb0, Func Offset: 0x220
	// Line 59, Address: 0x1b6ed4, Func Offset: 0x244
	// Line 60, Address: 0x1b6ee8, Func Offset: 0x258
	// Func End, Address: 0x1b6ef0, Func Offset: 0x260
}

// 
// Start address: 0x1b6ef0
void sfCldObjectConstruct(sfCldObject* cld_object)
{
	// Line 71, Address: 0x1b6ef0, Func Offset: 0
	// Func End, Address: 0x1b6ef8, Func Offset: 0x8
}

// 
// Start address: 0x1b6f00
void sfCldObjectDestruct(sfCldObject* cld_object)
{
	// Line 81, Address: 0x1b6f00, Func Offset: 0
	// Line 82, Address: 0x1b6f0c, Func Offset: 0xc
	// Line 83, Address: 0x1b6f14, Func Offset: 0x14
	// Line 84, Address: 0x1b6f20, Func Offset: 0x20
	// Func End, Address: 0x1b6f30, Func Offset: 0x30
}

// 
// Start address: 0x1b6f30
void sfCldObjectSetNParts(sfCldObject* cld_object, int n_parts)
{
	int i;
	sfCldPart* part;
	// Line 98, Address: 0x1b6f30, Func Offset: 0
	// Line 101, Address: 0x1b6f54, Func Offset: 0x24
	// Line 102, Address: 0x1b6f60, Func Offset: 0x30
	// Line 103, Address: 0x1b6f78, Func Offset: 0x48
	// Line 104, Address: 0x1b6f80, Func Offset: 0x50
	// Line 105, Address: 0x1b6f88, Func Offset: 0x58
	// Line 106, Address: 0x1b6f8c, Func Offset: 0x5c
	// Line 107, Address: 0x1b6fa0, Func Offset: 0x70
	// Line 108, Address: 0x1b6fa8, Func Offset: 0x78
	// Line 109, Address: 0x1b6fc0, Func Offset: 0x90
	// Line 110, Address: 0x1b6fcc, Func Offset: 0x9c
	// Line 115, Address: 0x1b6fd4, Func Offset: 0xa4
	// Line 116, Address: 0x1b6fdc, Func Offset: 0xac
	// Line 117, Address: 0x1b6fe0, Func Offset: 0xb0
	// Line 120, Address: 0x1b6fe8, Func Offset: 0xb8
	// Line 118, Address: 0x1b6fec, Func Offset: 0xbc
	// Line 120, Address: 0x1b6ff0, Func Offset: 0xc0
	// Line 119, Address: 0x1b6ff4, Func Offset: 0xc4
	// Line 120, Address: 0x1b6ff8, Func Offset: 0xc8
	// Line 122, Address: 0x1b7000, Func Offset: 0xd0
	// Line 123, Address: 0x1b7004, Func Offset: 0xd4
	// Func End, Address: 0x1b7024, Func Offset: 0xf4
}

// 
// Start address: 0x1b7030
sfCldObject* sfCldObjectFromPart(sfCldPart* cld_part)
{
	// Line 132, Address: 0x1b7030, Func Offset: 0
	// Line 134, Address: 0x1b703c, Func Offset: 0xc
	// Func End, Address: 0x1b7044, Func Offset: 0x14
}

// 
// Start address: 0x1b7050
void sfCldObjectUpdate(sfCldObject* cld_object)
{
	int i;
	// Line 165, Address: 0x1b7050, Func Offset: 0
	// Line 168, Address: 0x1b7060, Func Offset: 0x10
	// Line 169, Address: 0x1b7078, Func Offset: 0x28
	// Line 170, Address: 0x1b709c, Func Offset: 0x4c
	// Line 172, Address: 0x1b70b0, Func Offset: 0x60
	// Line 173, Address: 0x1b70b8, Func Offset: 0x68
	// Line 174, Address: 0x1b70c4, Func Offset: 0x74
	// Line 175, Address: 0x1b70cc, Func Offset: 0x7c
	// Line 176, Address: 0x1b70d4, Func Offset: 0x84
	// Line 177, Address: 0x1b70d8, Func Offset: 0x88
	// Func End, Address: 0x1b70ec, Func Offset: 0x9c
}

// 
// Start address: 0x1b70f0
void sfCldObjectUpdateBoundingVolume(sfCldObject* cld_object)
{
	int i;
	_anon1 ball;
	// Line 189, Address: 0x1b70f0, Func Offset: 0
	// Line 192, Address: 0x1b7104, Func Offset: 0x14
	// Line 195, Address: 0x1b710c, Func Offset: 0x1c
	// Line 198, Address: 0x1b7130, Func Offset: 0x40
	// Line 199, Address: 0x1b7140, Func Offset: 0x50
	// Line 201, Address: 0x1b7164, Func Offset: 0x74
	// Line 204, Address: 0x1b7174, Func Offset: 0x84
	// Line 205, Address: 0x1b7188, Func Offset: 0x98
	// Func End, Address: 0x1b719c, Func Offset: 0xac
}

// 
// Start address: 0x1b71a0
sfCldPart* HitWorkPart(int idx)
{
	// Line 248, Address: 0x1b71a0, Func Offset: 0
	// Line 249, Address: 0x1b71b0, Func Offset: 0x10
	// Func End, Address: 0x1b71b8, Func Offset: 0x18
}

// 
// Start address: 0x1b71c0
sfCldObject* HitWorkObject(int idx)
{
	// Line 255, Address: 0x1b71c0, Func Offset: 0
	// Line 256, Address: 0x1b71d0, Func Offset: 0x10
	// Func End, Address: 0x1b71d8, Func Offset: 0x18
}

// 
// Start address: 0x1b71e0
int JudgePartKindAND(sfCldPart* test_part, sfCldObject* target, int kind)
{
	int j;
	int hit;
	// Line 307, Address: 0x1b71e0, Func Offset: 0
	// Line 310, Address: 0x1b7208, Func Offset: 0x28
	// Line 307, Address: 0x1b720c, Func Offset: 0x2c
	// Line 310, Address: 0x1b7210, Func Offset: 0x30
	// Line 311, Address: 0x1b7220, Func Offset: 0x40
	// Line 312, Address: 0x1b723c, Func Offset: 0x5c
	// Line 314, Address: 0x1b725c, Func Offset: 0x7c
	// Line 315, Address: 0x1b7270, Func Offset: 0x90
	// Line 316, Address: 0x1b72a0, Func Offset: 0xc0
	// Line 318, Address: 0x1b72a4, Func Offset: 0xc4
	// Line 319, Address: 0x1b72c0, Func Offset: 0xe0
	// Line 320, Address: 0x1b72c4, Func Offset: 0xe4
	// Func End, Address: 0x1b72e8, Func Offset: 0x108
}

// 
// Start address: 0x1b72f0
int JudgeFunc(sgQTObject* test_object_, sgQTObject* target_)
{
	sfCldObject* test_object;
	sfCldObject* target;
	int hit;
	int i;
	// Line 327, Address: 0x1b72f0, Func Offset: 0
	// Line 328, Address: 0x1b7300, Func Offset: 0x10
	// Line 327, Address: 0x1b7304, Func Offset: 0x14
	// Line 329, Address: 0x1b7308, Func Offset: 0x18
	// Line 327, Address: 0x1b730c, Func Offset: 0x1c
	// Line 330, Address: 0x1b7310, Func Offset: 0x20
	// Line 333, Address: 0x1b7314, Func Offset: 0x24
	// Line 335, Address: 0x1b7328, Func Offset: 0x38
	// Line 336, Address: 0x1b7354, Func Offset: 0x64
	// Line 335, Address: 0x1b7358, Func Offset: 0x68
	// Line 336, Address: 0x1b735c, Func Offset: 0x6c
	// Line 337, Address: 0x1b7370, Func Offset: 0x80
	// Line 338, Address: 0x1b737c, Func Offset: 0x8c
	// Line 340, Address: 0x1b73b0, Func Offset: 0xc0
	// Line 339, Address: 0x1b73b8, Func Offset: 0xc8
	// Line 340, Address: 0x1b73bc, Func Offset: 0xcc
	// Func End, Address: 0x1b73d0, Func Offset: 0xe0
}

// 
// Start address: 0x1b73d0
int JudgeFunc_Part(sgQTObject* test_object_, sgQTObject* target_)
{
	sfCldObject* test_object;
	sfCldObject* target;
	int hit;
	// Line 348, Address: 0x1b73d0, Func Offset: 0
	// Line 351, Address: 0x1b73d4, Func Offset: 0x4
	// Line 348, Address: 0x1b73d8, Func Offset: 0x8
	// Line 351, Address: 0x1b73e0, Func Offset: 0x10
	// Line 354, Address: 0x1b73e4, Func Offset: 0x14
	// Line 355, Address: 0x1b7418, Func Offset: 0x48
	// Line 356, Address: 0x1b7424, Func Offset: 0x54
	// Line 358, Address: 0x1b7458, Func Offset: 0x88
	// Line 357, Address: 0x1b7460, Func Offset: 0x90
	// Line 358, Address: 0x1b7464, Func Offset: 0x94
	// Func End, Address: 0x1b746c, Func Offset: 0x9c
}

// 
// Start address: 0x1b7470
void sfCldInit()
{
	// Line 389, Address: 0x1b7470, Func Offset: 0
	// Line 390, Address: 0x1b7478, Func Offset: 0x8
	// Line 391, Address: 0x1b7480, Func Offset: 0x10
	// Line 392, Address: 0x1b7490, Func Offset: 0x20
	// Line 394, Address: 0x1b7498, Func Offset: 0x28
	// Line 395, Address: 0x1b74a4, Func Offset: 0x34
	// Func End, Address: 0x1b74b0, Func Offset: 0x40
}

// 
// Start address: 0x1b74b0
void sfCldQuit()
{
	// Line 403, Address: 0x1b74b0, Func Offset: 0
	// Line 404, Address: 0x1b74b4, Func Offset: 0x4
	// Line 403, Address: 0x1b74b8, Func Offset: 0x8
	// Line 404, Address: 0x1b74bc, Func Offset: 0xc
	// Line 405, Address: 0x1b74c8, Func Offset: 0x18
	// Line 406, Address: 0x1b74d0, Func Offset: 0x20
	// Line 409, Address: 0x1b74d8, Func Offset: 0x28
	// Line 410, Address: 0x1b74e0, Func Offset: 0x30
	// Func End, Address: 0x1b74ec, Func Offset: 0x3c
}

// 
// Start address: 0x1b74f0
void sfCldBuild(float* bmin, float* bmax, unsigned int depth)
{
	// Line 426, Address: 0x1b74f0, Func Offset: 0
	// Line 427, Address: 0x1b74f4, Func Offset: 0x4
	// Line 426, Address: 0x1b74f8, Func Offset: 0x8
	// Line 427, Address: 0x1b7510, Func Offset: 0x20
	// Line 429, Address: 0x1b751c, Func Offset: 0x2c
	// Line 430, Address: 0x1b7524, Func Offset: 0x34
	// Line 431, Address: 0x1b752c, Func Offset: 0x3c
	// Line 432, Address: 0x1b753c, Func Offset: 0x4c
	// Line 433, Address: 0x1b7540, Func Offset: 0x50
	// Line 434, Address: 0x1b7548, Func Offset: 0x58
	// Line 435, Address: 0x1b755c, Func Offset: 0x6c
	// Func End, Address: 0x1b7574, Func Offset: 0x84
}

// 
// Start address: 0x1b7580
void sfCldDestroy()
{
	// Line 447, Address: 0x1b7580, Func Offset: 0
	// Line 448, Address: 0x1b7584, Func Offset: 0x4
	// Line 447, Address: 0x1b7588, Func Offset: 0x8
	// Line 448, Address: 0x1b758c, Func Offset: 0xc
	// Line 452, Address: 0x1b7598, Func Offset: 0x18
	// Line 453, Address: 0x1b75a0, Func Offset: 0x20
	// Line 454, Address: 0x1b75a8, Func Offset: 0x28
	// Line 455, Address: 0x1b75b8, Func Offset: 0x38
	// Func End, Address: 0x1b75c4, Func Offset: 0x44
}

// 
// Start address: 0x1b75d0
void sfCldEntryObject(sfCldObject* cld_object)
{
	// Line 468, Address: 0x1b75d0, Func Offset: 0
	// Line 477, Address: 0x1b75e4, Func Offset: 0x14
	// Line 478, Address: 0x1b75ec, Func Offset: 0x1c
	// Line 479, Address: 0x1b75f4, Func Offset: 0x24
	// Line 481, Address: 0x1b75f8, Func Offset: 0x28
	// Line 482, Address: 0x1b7600, Func Offset: 0x30
	// Line 483, Address: 0x1b760c, Func Offset: 0x3c
	// Func End, Address: 0x1b761c, Func Offset: 0x4c
}

// 
// Start address: 0x1b7620
void sfCldRemoveObject(sfCldObject* cld_object)
{
	// Line 494, Address: 0x1b7620, Func Offset: 0
	// Line 495, Address: 0x1b7634, Func Offset: 0x14
	// Line 496, Address: 0x1b763c, Func Offset: 0x1c
	// Line 497, Address: 0x1b7644, Func Offset: 0x24
	// Line 499, Address: 0x1b7648, Func Offset: 0x28
	// Func End, Address: 0x1b7658, Func Offset: 0x38
}

// 
// Start address: 0x1b7660
int sfCldTestObject(sfCldObject* cld_test_object)
{
	// Line 520, Address: 0x1b7660, Func Offset: 0
	// Line 521, Address: 0x1b7664, Func Offset: 0x4
	// Line 520, Address: 0x1b7668, Func Offset: 0x8
	// Line 521, Address: 0x1b7670, Func Offset: 0x10
	// Line 522, Address: 0x1b767c, Func Offset: 0x1c
	// Line 523, Address: 0x1b768c, Func Offset: 0x2c
	// Line 526, Address: 0x1b7698, Func Offset: 0x38
	// Line 525, Address: 0x1b769c, Func Offset: 0x3c
	// Line 526, Address: 0x1b76a8, Func Offset: 0x48
	// Line 527, Address: 0x1b76b0, Func Offset: 0x50
	// Line 528, Address: 0x1b76b8, Func Offset: 0x58
	// Line 529, Address: 0x1b76c0, Func Offset: 0x60
	// Func End, Address: 0x1b76d0, Func Offset: 0x70
}

// 
// Start address: 0x1b76d0
int sfCldTestObjectByKindAND(sfCldObject* cld_test_object, unsigned int kind)
{
	// Line 541, Address: 0x1b76d0, Func Offset: 0
	// Line 542, Address: 0x1b76d4, Func Offset: 0x4
	// Line 541, Address: 0x1b76d8, Func Offset: 0x8
	// Line 542, Address: 0x1b76e0, Func Offset: 0x10
	// Line 543, Address: 0x1b76ec, Func Offset: 0x1c
	// Line 544, Address: 0x1b76fc, Func Offset: 0x2c
	// Line 546, Address: 0x1b7708, Func Offset: 0x38
	// Line 547, Address: 0x1b770c, Func Offset: 0x3c
	// Line 546, Address: 0x1b7710, Func Offset: 0x40
	// Line 547, Address: 0x1b7714, Func Offset: 0x44
	// Line 548, Address: 0x1b771c, Func Offset: 0x4c
	// Line 549, Address: 0x1b7724, Func Offset: 0x54
	// Line 550, Address: 0x1b7730, Func Offset: 0x60
	// Func End, Address: 0x1b7740, Func Offset: 0x70
}

// 
// Start address: 0x1b7740
int sfCldTestObjectPartByKindAND(sfCldObject* cld_test_object, int part_idx, unsigned int kind)
{
	// Line 586, Address: 0x1b7740, Func Offset: 0
	// Line 588, Address: 0x1b7744, Func Offset: 0x4
	// Line 586, Address: 0x1b7748, Func Offset: 0x8
	// Line 588, Address: 0x1b7750, Func Offset: 0x10
	// Line 589, Address: 0x1b7758, Func Offset: 0x18
	// Line 590, Address: 0x1b775c, Func Offset: 0x1c
	// Line 589, Address: 0x1b7760, Func Offset: 0x20
	// Line 590, Address: 0x1b7764, Func Offset: 0x24
	// Line 587, Address: 0x1b7768, Func Offset: 0x28
	// Line 590, Address: 0x1b7774, Func Offset: 0x34
	// Line 591, Address: 0x1b777c, Func Offset: 0x3c
	// Line 592, Address: 0x1b7784, Func Offset: 0x44
	// Line 594, Address: 0x1b7788, Func Offset: 0x48
	// Line 592, Address: 0x1b7790, Func Offset: 0x50
	// Line 594, Address: 0x1b7794, Func Offset: 0x54
	// Func End, Address: 0x1b779c, Func Offset: 0x5c
}

// 
// Start address: 0x1b77a0
int sfCldTestResultNObjects()
{
	// Line 668, Address: 0x1b77a0, Func Offset: 0
	// Line 669, Address: 0x1b77a4, Func Offset: 0x4
	// Func End, Address: 0x1b77ac, Func Offset: 0xc
}

// 
// Start address: 0x1b77b0
sfCldObject* sfCldTestResultObject(int idx)
{
	// Line 680, Address: 0x1b77b0, Func Offset: 0
	// Func End, Address: 0x1b77b8, Func Offset: 0x8
}

// 
// Start address: 0x1b77c0
int sfCldTestResultNParts()
{
	// Line 691, Address: 0x1b77c0, Func Offset: 0
	// Line 692, Address: 0x1b77c4, Func Offset: 0x4
	// Func End, Address: 0x1b77cc, Func Offset: 0xc
}

// 
// Start address: 0x1b77d0
sfCldPart* sfCldTestResultPart(int idx)
{
	// Line 706, Address: 0x1b77d0, Func Offset: 0
	// Func End, Address: 0x1b77d8, Func Offset: 0x8
}

