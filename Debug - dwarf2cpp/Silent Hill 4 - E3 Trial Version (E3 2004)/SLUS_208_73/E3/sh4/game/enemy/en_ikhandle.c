typedef struct sgBone;
typedef union _anon0;
typedef struct sfObj;
typedef struct EnemyIKHandle;
typedef struct sgIKHandle;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_1)(sfObj*);
typedef sgIKSolveResult(*type_4)();
typedef void(*type_13)(sfObj*);

typedef float type_0[4];
typedef float type_2[4][2];
typedef float type_3[3];
typedef float type_5[4];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef float type_10[1];
typedef int type_11[1];
typedef _anon0 type_12[256];

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

struct EnemyIKHandle
{
	float goal[3];
	sgIKHandle* IKHandle;
	int free_flag;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

float sg_vector_unit_y[4];

EnemyIKHandle* EnemyIKHandleWorkAllocate(sfObj* obj);
void EnemyIKHandleConstruct(EnemyIKHandle* eih, sfObj* obj, int bone_no);
void EnemyIKHandleReconstruct(EnemyIKHandle* eih, sfObj* obj, int bone_no);
void EnemyIKHandleRestore(EnemyIKHandle* eih, sgBone* goal);
void EnemyIKHandleRelease(EnemyIKHandle* eih);
void EnemyIKHandleUse(EnemyIKHandle* eih);
void EnemyIKHandleSetPos(EnemyIKHandle* eih, float* pos);
void EnemyIKHandleGetPos(EnemyIKHandle* eih, float* pos);
void EnemyIKHandleCoordinate(EnemyIKHandle* eih, float limit);

// 
// Start address: 0x19b600
EnemyIKHandle* EnemyIKHandleWorkAllocate(sfObj* obj)
{
	// Line 37, Address: 0x19b600, Func Offset: 0
	// Func End, Address: 0x19b608, Func Offset: 0x8
}

// 
// Start address: 0x19b610
void EnemyIKHandleConstruct(EnemyIKHandle* eih, sfObj* obj, int bone_no)
{
	sgIKHandle* handle;
	sgBone* bone;
	float pos[4];
	// Line 46, Address: 0x19b610, Func Offset: 0
	// Line 50, Address: 0x19b628, Func Offset: 0x18
	// Line 52, Address: 0x19b640, Func Offset: 0x30
	// Line 51, Address: 0x19b644, Func Offset: 0x34
	// Line 53, Address: 0x19b648, Func Offset: 0x38
	// Line 54, Address: 0x19b654, Func Offset: 0x44
	// Line 55, Address: 0x19b660, Func Offset: 0x50
	// Line 57, Address: 0x19b664, Func Offset: 0x54
	// Line 55, Address: 0x19b674, Func Offset: 0x64
	// Line 57, Address: 0x19b684, Func Offset: 0x74
	// Line 58, Address: 0x19b68c, Func Offset: 0x7c
	// Line 59, Address: 0x19b69c, Func Offset: 0x8c
	// Func End, Address: 0x19b6b0, Func Offset: 0xa0
}

// 
// Start address: 0x19b6b0
void EnemyIKHandleReconstruct(EnemyIKHandle* eih, sfObj* obj, int bone_no)
{
	sgIKHandle* handle;
	sgBone* bone;
	float pos[4];
	// Line 67, Address: 0x19b6b0, Func Offset: 0
	// Line 71, Address: 0x19b6c8, Func Offset: 0x18
	// Line 72, Address: 0x19b6e0, Func Offset: 0x30
	// Line 74, Address: 0x19b6e8, Func Offset: 0x38
	// Line 75, Address: 0x19b6f0, Func Offset: 0x40
	// Line 76, Address: 0x19b6fc, Func Offset: 0x4c
	// Line 77, Address: 0x19b704, Func Offset: 0x54
	// Line 79, Address: 0x19b710, Func Offset: 0x60
	// Line 78, Address: 0x19b714, Func Offset: 0x64
	// Line 79, Address: 0x19b718, Func Offset: 0x68
	// Line 78, Address: 0x19b71c, Func Offset: 0x6c
	// Line 79, Address: 0x19b730, Func Offset: 0x80
	// Line 82, Address: 0x19b738, Func Offset: 0x88
	// Line 83, Address: 0x19b74c, Func Offset: 0x9c
	// Line 84, Address: 0x19b75c, Func Offset: 0xac
	// Func End, Address: 0x19b774, Func Offset: 0xc4
}

// 
// Start address: 0x19b780
void EnemyIKHandleRestore(EnemyIKHandle* eih, sgBone* goal)
{
	float pos[4];
	// Line 114, Address: 0x19b780, Func Offset: 0
	// Line 116, Address: 0x19b788, Func Offset: 0x8
	// Line 117, Address: 0x19b794, Func Offset: 0x14
	// Line 118, Address: 0x19b7a8, Func Offset: 0x28
	// Line 117, Address: 0x19b7ac, Func Offset: 0x2c
	// Line 118, Address: 0x19b7b0, Func Offset: 0x30
	// Line 120, Address: 0x19b7b8, Func Offset: 0x38
	// Func End, Address: 0x19b7c4, Func Offset: 0x44
}

// 
// Start address: 0x19b7d0
void EnemyIKHandleRelease(EnemyIKHandle* eih)
{
	sgBone* bone;
	sgBone* bone2;
	float pos[4];
	// Line 152, Address: 0x19b7d0, Func Offset: 0
	// Line 155, Address: 0x19b7d4, Func Offset: 0x4
	// Line 152, Address: 0x19b7d8, Func Offset: 0x8
	// Line 155, Address: 0x19b7e8, Func Offset: 0x18
	// Line 156, Address: 0x19b7ec, Func Offset: 0x1c
	// Line 157, Address: 0x19b804, Func Offset: 0x34
	// Line 158, Address: 0x19b80c, Func Offset: 0x3c
	// Line 159, Address: 0x19b814, Func Offset: 0x44
	// Line 160, Address: 0x19b820, Func Offset: 0x50
	// Line 161, Address: 0x19b82c, Func Offset: 0x5c
	// Line 162, Address: 0x19b834, Func Offset: 0x64
	// Line 163, Address: 0x19b83c, Func Offset: 0x6c
	// Line 164, Address: 0x19b844, Func Offset: 0x74
	// Line 165, Address: 0x19b850, Func Offset: 0x80
	// Line 166, Address: 0x19b85c, Func Offset: 0x8c
	// Line 167, Address: 0x19b864, Func Offset: 0x94
	// Func End, Address: 0x19b87c, Func Offset: 0xac
}

// 
// Start address: 0x19b880
void EnemyIKHandleUse(EnemyIKHandle* eih)
{
	sgBone* bone;
	float pos[4];
	// Line 173, Address: 0x19b880, Func Offset: 0
	// Line 176, Address: 0x19b88c, Func Offset: 0xc
	// Line 177, Address: 0x19b894, Func Offset: 0x14
	// Line 178, Address: 0x19b89c, Func Offset: 0x1c
	// Line 179, Address: 0x19b8a8, Func Offset: 0x28
	// Line 180, Address: 0x19b8c0, Func Offset: 0x40
	// Func End, Address: 0x19b8d0, Func Offset: 0x50
}

// 
// Start address: 0x19b8d0
void EnemyIKHandleSetPos(EnemyIKHandle* eih, float* pos)
{
	sgBone* bone;
	// Line 196, Address: 0x19b8d0, Func Offset: 0
	// Line 198, Address: 0x19b8e4, Func Offset: 0x14
	// Line 199, Address: 0x19b8fc, Func Offset: 0x2c
	// Line 200, Address: 0x19b908, Func Offset: 0x38
	// Line 201, Address: 0x19b914, Func Offset: 0x44
	// Line 202, Address: 0x19b918, Func Offset: 0x48
	// Func End, Address: 0x19b92c, Func Offset: 0x5c
}

// 
// Start address: 0x19b930
void EnemyIKHandleGetPos(EnemyIKHandle* eih, float* pos)
{
	// Line 210, Address: 0x19b930, Func Offset: 0
	// Func End, Address: 0x19b938, Func Offset: 0x8
}

// 
// Start address: 0x19b940
void EnemyIKHandleCoordinate(EnemyIKHandle* eih, float limit)
{
	sgBone* bone;
	sgBone* bone2;
	float rot[4];
	float trot[4];
	float trot2[4];
	float vec[4];
	float d;
	// Line 331, Address: 0x19b940, Func Offset: 0
	// Line 336, Address: 0x19b954, Func Offset: 0x14
	// Line 337, Address: 0x19b964, Func Offset: 0x24
	// Line 338, Address: 0x19b970, Func Offset: 0x30
	// Line 339, Address: 0x19b97c, Func Offset: 0x3c
	// Line 340, Address: 0x19b988, Func Offset: 0x48
	// Line 341, Address: 0x19b994, Func Offset: 0x54
	// Line 342, Address: 0x19b9a4, Func Offset: 0x64
	// Line 343, Address: 0x19b9b0, Func Offset: 0x70
	// Line 344, Address: 0x19b9b8, Func Offset: 0x78
	// Line 346, Address: 0x19b9c8, Func Offset: 0x88
	// Line 348, Address: 0x19b9dc, Func Offset: 0x9c
	// Line 349, Address: 0x19b9e8, Func Offset: 0xa8
	// Line 350, Address: 0x19b9ec, Func Offset: 0xac
	// Line 351, Address: 0x19b9f0, Func Offset: 0xb0
	// Line 352, Address: 0x19ba0c, Func Offset: 0xcc
	// Line 353, Address: 0x19ba1c, Func Offset: 0xdc
	// Line 354, Address: 0x19ba2c, Func Offset: 0xec
	// Line 356, Address: 0x19ba38, Func Offset: 0xf8
	// Func End, Address: 0x19ba50, Func Offset: 0x110
}

