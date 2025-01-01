typedef struct EnemyEffectFlameData;
typedef struct sfObj;
typedef struct sgBone;
typedef struct EnemyParticle;
typedef union _anon0;
typedef struct EnemyParticleList;

typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);

typedef float type_0[4];
typedef _anon0 type_1[256];
typedef float type_4[4];
typedef short type_5[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef float type_9[1];
typedef int type_10[1];

struct EnemyEffectFlameData
{
	sgBone local_bone;
	float local_pos[4];
	EnemyParticleList plist;
	float target_force;
	float now_force;
	float force_rise;
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct EnemyParticle
{
};

union _anon0
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

struct EnemyParticleList
{
	EnemyParticle* top;
	sgBone* parent;
};

float flame_width;
float flame_height;
float sg_vector_unit_w[4];
float sg_vector_zero[4];

void set_target_pos(sfObj* obj);
void EnemyEffectFlameConstruct(sfObj* obj);
void EnemyEffectFlameDestruct(sfObj* obj);
void EnemyEffectFlameHandle(sfObj* obj);
void EnemyEffectFlameDraw(sfObj* obj);
sfObj* EnemyEffectSetToach(sgBone* parent, float* local_pos, float width, float height);
void EnemyEffectToachChangeParent(sfObj* obj, sgBone* parent);
void EnemyEffectToachChangePos(sfObj* obj, float* local_pos);
void EnemyEffectToachChangeForce(sfObj* obj, float force);
void EnemyEffectToachConstruct(sfObj* obj);
void EnemyEffectToachDestruct(sfObj* obj);
void EnemyEffectToachHandle(sfObj* obj);
void EnemyEffectToachDraw(sfObj* obj);

// 
// Start address: 0x2e8aa0
void set_target_pos(sfObj* obj)
{
	EnemyEffectFlameData* pd;
	// Line 55, Address: 0x2e8aa0, Func Offset: 0
	// Line 57, Address: 0x2e8ab4, Func Offset: 0x14
	// Line 58, Address: 0x2e8ab8, Func Offset: 0x18
	// Line 59, Address: 0x2e8ac4, Func Offset: 0x24
	// Line 60, Address: 0x2e8ad4, Func Offset: 0x34
	// Line 61, Address: 0x2e8ae8, Func Offset: 0x48
	// Func End, Address: 0x2e8afc, Func Offset: 0x5c
}

// 
// Start address: 0x2e8b00
void EnemyEffectFlameConstruct(sfObj* obj)
{
	EnemyEffectFlameData* pd;
	EnemyParticle* pp;
	int i;
	// Line 123, Address: 0x2e8b00, Func Offset: 0
	// Line 128, Address: 0x2e8b04, Func Offset: 0x4
	// Line 123, Address: 0x2e8b08, Func Offset: 0x8
	// Line 128, Address: 0x2e8b0c, Func Offset: 0xc
	// Line 123, Address: 0x2e8b10, Func Offset: 0x10
	// Line 128, Address: 0x2e8b18, Func Offset: 0x18
	// Line 129, Address: 0x2e8b20, Func Offset: 0x20
	// Line 130, Address: 0x2e8b30, Func Offset: 0x30
	// Line 131, Address: 0x2e8b38, Func Offset: 0x38
	// Line 132, Address: 0x2e8b44, Func Offset: 0x44
	// Line 133, Address: 0x2e8b50, Func Offset: 0x50
	// Line 134, Address: 0x2e8b60, Func Offset: 0x60
	// Line 135, Address: 0x2e8b6c, Func Offset: 0x6c
	// Line 136, Address: 0x2e8b78, Func Offset: 0x78
	// Line 137, Address: 0x2e8b80, Func Offset: 0x80
	// Line 138, Address: 0x2e8b88, Func Offset: 0x88
	// Line 144, Address: 0x2e8be8, Func Offset: 0xe8
	// Line 145, Address: 0x2e8bfc, Func Offset: 0xfc
	// Line 146, Address: 0x2e8c08, Func Offset: 0x108
	// Line 147, Address: 0x2e8c14, Func Offset: 0x114
	// Line 148, Address: 0x2e8c18, Func Offset: 0x118
	// Func End, Address: 0x2e8c2c, Func Offset: 0x12c
}

// 
// Start address: 0x2e8c30
void EnemyEffectFlameDestruct(sfObj* obj)
{
	// Line 152, Address: 0x2e8c30, Func Offset: 0
	// Line 154, Address: 0x2e8c40, Func Offset: 0x10
	// Line 156, Address: 0x2e8c48, Func Offset: 0x18
	// Line 157, Address: 0x2e8c54, Func Offset: 0x24
	// Line 158, Address: 0x2e8c5c, Func Offset: 0x2c
	// Func End, Address: 0x2e8c70, Func Offset: 0x40
}

// 
// Start address: 0x2e8c70
void EnemyEffectFlameHandle(sfObj* obj)
{
	EnemyEffectFlameData* pd;
	// Line 162, Address: 0x2e8c70, Func Offset: 0
	// Line 164, Address: 0x2e8c80, Func Offset: 0x10
	// Line 165, Address: 0x2e8c88, Func Offset: 0x18
	// Line 166, Address: 0x2e8c90, Func Offset: 0x20
	// Line 167, Address: 0x2e8c94, Func Offset: 0x24
	// Line 169, Address: 0x2e8cc4, Func Offset: 0x54
	// Line 170, Address: 0x2e8ce8, Func Offset: 0x78
	// Line 171, Address: 0x2e8cf4, Func Offset: 0x84
	// Line 172, Address: 0x2e8cfc, Func Offset: 0x8c
	// Line 173, Address: 0x2e8d04, Func Offset: 0x94
	// Func End, Address: 0x2e8d18, Func Offset: 0xa8
}

// 
// Start address: 0x2e8d20
void EnemyEffectFlameDraw(sfObj* obj)
{
	// Line 177, Address: 0x2e8d20, Func Offset: 0
	// Line 179, Address: 0x2e8d30, Func Offset: 0x10
	// Line 180, Address: 0x2e8d38, Func Offset: 0x18
	// Line 182, Address: 0x2e8d40, Func Offset: 0x20
	// Line 183, Address: 0x2e8d4c, Func Offset: 0x2c
	// Line 184, Address: 0x2e8d54, Func Offset: 0x34
	// Func End, Address: 0x2e8d68, Func Offset: 0x48
}

// 
// Start address: 0x2e8d70
sfObj* EnemyEffectSetToach(sgBone* parent, float* local_pos, float width, float height)
{
	sfObj* obj;
	// Line 193, Address: 0x2e8d70, Func Offset: 0
	// Line 196, Address: 0x2e8d74, Func Offset: 0x4
	// Line 193, Address: 0x2e8d78, Func Offset: 0x8
	// Line 197, Address: 0x2e8d7c, Func Offset: 0xc
	// Line 193, Address: 0x2e8d80, Func Offset: 0x10
	// Line 196, Address: 0x2e8d94, Func Offset: 0x24
	// Line 197, Address: 0x2e8d98, Func Offset: 0x28
	// Line 195, Address: 0x2e8d9c, Func Offset: 0x2c
	// Line 197, Address: 0x2e8da0, Func Offset: 0x30
	// Line 195, Address: 0x2e8da4, Func Offset: 0x34
	// Line 197, Address: 0x2e8da8, Func Offset: 0x38
	// Line 198, Address: 0x2e8db8, Func Offset: 0x48
	// Line 199, Address: 0x2e8dc4, Func Offset: 0x54
	// Line 200, Address: 0x2e8dcc, Func Offset: 0x5c
	// Line 201, Address: 0x2e8de0, Func Offset: 0x70
	// Line 202, Address: 0x2e8dec, Func Offset: 0x7c
	// Line 203, Address: 0x2e8df8, Func Offset: 0x88
	// Line 204, Address: 0x2e8e00, Func Offset: 0x90
	// Func End, Address: 0x2e8e18, Func Offset: 0xa8
}

// 
// Start address: 0x2e8e20
void EnemyEffectToachChangeParent(sfObj* obj, sgBone* parent)
{
	// Line 211, Address: 0x2e8e20, Func Offset: 0
	// Line 213, Address: 0x2e8e30, Func Offset: 0x10
	// Line 215, Address: 0x2e8e38, Func Offset: 0x18
	// Line 216, Address: 0x2e8e40, Func Offset: 0x20
	// Line 217, Address: 0x2e8e48, Func Offset: 0x28
	// Func End, Address: 0x2e8e58, Func Offset: 0x38
}

// 
// Start address: 0x2e8e60
void EnemyEffectToachChangePos(sfObj* obj, float* local_pos)
{
	EnemyEffectFlameData* pd;
	// Line 224, Address: 0x2e8e60, Func Offset: 0
	// Line 226, Address: 0x2e8e64, Func Offset: 0x4
	// Line 228, Address: 0x2e8e70, Func Offset: 0x10
	// Line 229, Address: 0x2e8e74, Func Offset: 0x14
	// Line 230, Address: 0x2e8e7c, Func Offset: 0x1c
	// Func End, Address: 0x2e8e8c, Func Offset: 0x2c
}

// 
// Start address: 0x2e8e90
void EnemyEffectToachChangeForce(sfObj* obj, float force)
{
	// Line 239, Address: 0x2e8e90, Func Offset: 0
	// Line 241, Address: 0x2e8e98, Func Offset: 0x8
	// Line 242, Address: 0x2e8ea0, Func Offset: 0x10
	// Func End, Address: 0x2e8ea8, Func Offset: 0x18
}

// 
// Start address: 0x2e8eb0
void EnemyEffectToachConstruct(sfObj* obj)
{
	EnemyEffectFlameData* pd;
	EnemyParticle* pp;
	int i;
	// Line 246, Address: 0x2e8eb0, Func Offset: 0
	// Line 251, Address: 0x2e8eb4, Func Offset: 0x4
	// Line 246, Address: 0x2e8eb8, Func Offset: 0x8
	// Line 251, Address: 0x2e8ebc, Func Offset: 0xc
	// Line 246, Address: 0x2e8ec0, Func Offset: 0x10
	// Line 251, Address: 0x2e8ec8, Func Offset: 0x18
	// Line 252, Address: 0x2e8ed0, Func Offset: 0x20
	// Line 253, Address: 0x2e8ee0, Func Offset: 0x30
	// Line 254, Address: 0x2e8ee8, Func Offset: 0x38
	// Line 255, Address: 0x2e8ef4, Func Offset: 0x44
	// Line 256, Address: 0x2e8f00, Func Offset: 0x50
	// Line 257, Address: 0x2e8f10, Func Offset: 0x60
	// Line 258, Address: 0x2e8f1c, Func Offset: 0x6c
	// Line 259, Address: 0x2e8f28, Func Offset: 0x78
	// Line 260, Address: 0x2e8f30, Func Offset: 0x80
	// Line 261, Address: 0x2e8f38, Func Offset: 0x88
	// Line 267, Address: 0x2e8f90, Func Offset: 0xe0
	// Line 268, Address: 0x2e8fa4, Func Offset: 0xf4
	// Line 269, Address: 0x2e8fb0, Func Offset: 0x100
	// Line 270, Address: 0x2e8fbc, Func Offset: 0x10c
	// Line 271, Address: 0x2e8fc0, Func Offset: 0x110
	// Func End, Address: 0x2e8fd4, Func Offset: 0x124
}

// 
// Start address: 0x2e8fe0
void EnemyEffectToachDestruct(sfObj* obj)
{
	// Line 275, Address: 0x2e8fe0, Func Offset: 0
	// Line 277, Address: 0x2e8ff0, Func Offset: 0x10
	// Line 279, Address: 0x2e8ff8, Func Offset: 0x18
	// Line 280, Address: 0x2e9004, Func Offset: 0x24
	// Line 281, Address: 0x2e900c, Func Offset: 0x2c
	// Func End, Address: 0x2e9020, Func Offset: 0x40
}

// 
// Start address: 0x2e9020
void EnemyEffectToachHandle(sfObj* obj)
{
	EnemyEffectFlameData* pd;
	// Line 285, Address: 0x2e9020, Func Offset: 0
	// Line 287, Address: 0x2e9030, Func Offset: 0x10
	// Line 288, Address: 0x2e9038, Func Offset: 0x18
	// Line 289, Address: 0x2e9040, Func Offset: 0x20
	// Line 290, Address: 0x2e9044, Func Offset: 0x24
	// Line 292, Address: 0x2e9074, Func Offset: 0x54
	// Line 293, Address: 0x2e9098, Func Offset: 0x78
	// Line 294, Address: 0x2e90a4, Func Offset: 0x84
	// Line 295, Address: 0x2e90ac, Func Offset: 0x8c
	// Line 296, Address: 0x2e90b4, Func Offset: 0x94
	// Func End, Address: 0x2e90c8, Func Offset: 0xa8
}

// 
// Start address: 0x2e90d0
void EnemyEffectToachDraw(sfObj* obj)
{
	// Line 300, Address: 0x2e90d0, Func Offset: 0
	// Line 302, Address: 0x2e90e0, Func Offset: 0x10
	// Line 303, Address: 0x2e90e8, Func Offset: 0x18
	// Line 305, Address: 0x2e90f0, Func Offset: 0x20
	// Line 306, Address: 0x2e90fc, Func Offset: 0x2c
	// Line 307, Address: 0x2e9104, Func Offset: 0x34
	// Func End, Address: 0x2e9118, Func Offset: 0x48
}

