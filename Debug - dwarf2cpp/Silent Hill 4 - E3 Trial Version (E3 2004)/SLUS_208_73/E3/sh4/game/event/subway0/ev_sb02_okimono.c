typedef union _anon0;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct _anon1;
typedef struct sgSVModel;
typedef struct OkimonoWork;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon3;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct sgTexArc;
typedef struct sfCharacter;

typedef void(*type_0)(sfObj*);
typedef void(*type_8)(_anon2*, int, int, float*);
typedef sgIKSolveResult(*type_9)();
typedef void(*type_19)(sgAnime*, int);
typedef void(*type_22)(sfObj*);

typedef float type_1[4][2];
typedef float type_2[4][4];
typedef _anon0 type_3[10];
typedef float type_4[4];
typedef int type_5[2];
typedef float type_6[4][2];
typedef float type_7[4];
typedef float type_10[4];
typedef short type_11[2];
typedef unsigned short type_12[2];
typedef void* type_13[4];
typedef char type_14[4];
typedef float type_15[4][2];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef _anon0 type_20[256];
typedef unsigned char type_21[4];

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

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
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

struct _anon1
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon0 dmy[10];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct OkimonoWork
{
	sfCharacter character;
	sgTexArc* local_texture;
	sgTexArc* global_texture;
	void* model_data;
	float rot_y;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon3
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon3 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

int models[2];
float positions[4][2];
float rotations[4][2];

void SB02ToiletDoor(sfObj* obj);
void SB02ToiletDoorDraw(sfObj* obj);
void SB02ToiletDoorDestruct(sfObj* obj);
void SB02FanInit(sfObj* obj);
void SB02FanExec(sfObj* obj);
void SB02FanEnd(sfObj* obj);

// 
// Start address: 0x1ed44e0
void SB02ToiletDoor(sfObj* obj)
{
	int type;
	// Line 51, Address: 0x1ed44e0, Func Offset: 0
	// Line 59, Address: 0x1ed44e4, Func Offset: 0x4
	// Line 51, Address: 0x1ed44e8, Func Offset: 0x8
	// Line 59, Address: 0x1ed44f8, Func Offset: 0x18
	// Line 60, Address: 0x1ed4514, Func Offset: 0x34
	// Line 62, Address: 0x1ed4518, Func Offset: 0x38
	// Line 63, Address: 0x1ed4524, Func Offset: 0x44
	// Line 66, Address: 0x1ed4528, Func Offset: 0x48
	// Line 65, Address: 0x1ed452c, Func Offset: 0x4c
	// Line 66, Address: 0x1ed4530, Func Offset: 0x50
	// Line 67, Address: 0x1ed453c, Func Offset: 0x5c
	// Line 69, Address: 0x1ed4558, Func Offset: 0x78
	// Line 70, Address: 0x1ed4568, Func Offset: 0x88
	// Line 71, Address: 0x1ed4580, Func Offset: 0xa0
	// Line 72, Address: 0x1ed4594, Func Offset: 0xb4
	// Line 95, Address: 0x1ed45a0, Func Offset: 0xc0
	// Func End, Address: 0x1ed45b8, Func Offset: 0xd8
	// Line 98, Address: 0x1ed44e0, Func Offset: 0
	// Func End, Address: 0x1ed44e8, Func Offset: 0x8
}

// 
// Start address: 0x1ed45c0
void SB02ToiletDoorDraw(sfObj* obj)
{
	// Line 452, Address: 0x1ed45c0, Func Offset: 0
	// Line 453, Address: 0x1ed45d0, Func Offset: 0x10
	// Func End, Address: 0x1ed45d8, Func Offset: 0x18
	// Line 99, Address: 0x1ed45c0, Func Offset: 0
	// Line 103, Address: 0x1ed45c8, Func Offset: 0x8
	// Line 106, Address: 0x1ed45d4, Func Offset: 0x14
	// Line 108, Address: 0x1ed45dc, Func Offset: 0x1c
	// Func End, Address: 0x1ed45ec, Func Offset: 0x2c
	// Line 247, Address: 0x1ed45c0, Func Offset: 0
	// Func End, Address: 0x1ed45cc, Func Offset: 0xc
}

// 
// Start address: 0x1ed45f0
void SB02ToiletDoorDestruct(sfObj* obj)
{
	// Line 112, Address: 0x1ed45f0, Func Offset: 0
	// Line 116, Address: 0x1ed45f8, Func Offset: 0x8
	// Line 119, Address: 0x1ed4604, Func Offset: 0x14
	// Line 120, Address: 0x1ed460c, Func Offset: 0x1c
	// Func End, Address: 0x1ed461c, Func Offset: 0x2c
	// Line 262, Address: 0x1ed45f0, Func Offset: 0
	// Func End, Address: 0x1ed45fc, Func Offset: 0xc
}

// 
// Start address: 0x1ed4620
void SB02FanInit(sfObj* obj)
{
	OkimonoWork* wk;
	_anon1* fig_wk;
	sgAnime* anm;
	float pos[4];
	// Line 129, Address: 0x1ed4620, Func Offset: 0
	// Line 130, Address: 0x1ed4624, Func Offset: 0x4
	// Line 129, Address: 0x1ed4628, Func Offset: 0x8
	// Line 130, Address: 0x1ed4638, Func Offset: 0x18
	// Line 131, Address: 0x1ed4648, Func Offset: 0x28
	// Line 133, Address: 0x1ed4650, Func Offset: 0x30
	// Line 136, Address: 0x1ed465c, Func Offset: 0x3c
	// Line 139, Address: 0x1ed4688, Func Offset: 0x68
	// Line 140, Address: 0x1ed4694, Func Offset: 0x74
	// Line 141, Address: 0x1ed469c, Func Offset: 0x7c
	// Line 142, Address: 0x1ed46b4, Func Offset: 0x94
	// Line 144, Address: 0x1ed46b8, Func Offset: 0x98
	// Line 146, Address: 0x1ed46c0, Func Offset: 0xa0
	// Line 150, Address: 0x1ed46c4, Func Offset: 0xa4
	// Line 146, Address: 0x1ed46cc, Func Offset: 0xac
	// Line 147, Address: 0x1ed46d0, Func Offset: 0xb0
	// Line 148, Address: 0x1ed46d8, Func Offset: 0xb8
	// Line 150, Address: 0x1ed46e0, Func Offset: 0xc0
	// Line 153, Address: 0x1ed46e8, Func Offset: 0xc8
	// Func End, Address: 0x1ed4700, Func Offset: 0xe0
}

// 
// Start address: 0x1ed4700
void SB02FanExec(sfObj* obj)
{
	sgAnime* anm;
	// Line 156, Address: 0x1ed4700, Func Offset: 0
	// Line 157, Address: 0x1ed470c, Func Offset: 0xc
	// Line 159, Address: 0x1ed4714, Func Offset: 0x14
	// Line 161, Address: 0x1ed471c, Func Offset: 0x1c
	// Line 162, Address: 0x1ed4724, Func Offset: 0x24
	// Line 163, Address: 0x1ed4728, Func Offset: 0x28
	// Func End, Address: 0x1ed4734, Func Offset: 0x34
	// Line 399, Address: 0x1ed4700, Func Offset: 0
	// Line 400, Address: 0x1ed4708, Func Offset: 0x8
	// Line 401, Address: 0x1ed4710, Func Offset: 0x10
	// Line 403, Address: 0x1ed4714, Func Offset: 0x14
	// Line 401, Address: 0x1ed4718, Func Offset: 0x18
	// Line 404, Address: 0x1ed4728, Func Offset: 0x28
	// Func End, Address: 0x1ed4734, Func Offset: 0x34
}

// 
// Start address: 0x1ed4740
void SB02FanEnd(sfObj* obj)
{
	// Line 166, Address: 0x1ed4740, Func Offset: 0
	// Line 167, Address: 0x1ed474c, Func Offset: 0xc
	// Line 170, Address: 0x1ed4754, Func Offset: 0x14
	// Line 171, Address: 0x1ed475c, Func Offset: 0x1c
	// Line 172, Address: 0x1ed4760, Func Offset: 0x20
	// Func End, Address: 0x1ed476c, Func Offset: 0x2c
	// Line 227, Address: 0x1ed4740, Func Offset: 0
	// Line 229, Address: 0x1ed4744, Func Offset: 0x4
	// Line 227, Address: 0x1ed4748, Func Offset: 0x8
	// Line 229, Address: 0x1ed474c, Func Offset: 0xc
	// Line 227, Address: 0x1ed4750, Func Offset: 0x10
	// Line 229, Address: 0x1ed4754, Func Offset: 0x14
	// Line 227, Address: 0x1ed4758, Func Offset: 0x18
	// Line 229, Address: 0x1ed4760, Func Offset: 0x20
	// Line 228, Address: 0x1ed4764, Func Offset: 0x24
	// Line 230, Address: 0x1ed4768, Func Offset: 0x28
	// Line 229, Address: 0x1ed476c, Func Offset: 0x2c
	// Line 230, Address: 0x1ed4770, Func Offset: 0x30
	// Line 232, Address: 0x1ed47a0, Func Offset: 0x60
	// Line 235, Address: 0x1ed47b4, Func Offset: 0x74
	// Line 233, Address: 0x1ed47b8, Func Offset: 0x78
	// Line 235, Address: 0x1ed47bc, Func Offset: 0x7c
	// Line 236, Address: 0x1ed47c4, Func Offset: 0x84
	// Line 238, Address: 0x1ed47d0, Func Offset: 0x90
	// Line 241, Address: 0x1ed47d8, Func Offset: 0x98
	// Line 242, Address: 0x1ed47fc, Func Offset: 0xbc
	// Line 244, Address: 0x1ed4804, Func Offset: 0xc4
	// Line 245, Address: 0x1ed480c, Func Offset: 0xcc
	// Line 246, Address: 0x1ed4810, Func Offset: 0xd0
	// Line 253, Address: 0x1ed4824, Func Offset: 0xe4
	// Line 247, Address: 0x1ed4828, Func Offset: 0xe8
	// Line 253, Address: 0x1ed4834, Func Offset: 0xf4
	// Line 247, Address: 0x1ed4838, Func Offset: 0xf8
	// Line 253, Address: 0x1ed483c, Func Offset: 0xfc
	// Line 251, Address: 0x1ed4840, Func Offset: 0x100
	// Line 253, Address: 0x1ed4844, Func Offset: 0x104
	// Line 254, Address: 0x1ed4850, Func Offset: 0x110
	// Line 257, Address: 0x1ed485c, Func Offset: 0x11c
	// Line 259, Address: 0x1ed4874, Func Offset: 0x134
	// Line 261, Address: 0x1ed4888, Func Offset: 0x148
	// Line 263, Address: 0x1ed4894, Func Offset: 0x154
	// Line 264, Address: 0x1ed4898, Func Offset: 0x158
	// Line 268, Address: 0x1ed48c0, Func Offset: 0x180
	// Line 267, Address: 0x1ed48c8, Func Offset: 0x188
	// Line 268, Address: 0x1ed48cc, Func Offset: 0x18c
	// Func End, Address: 0x1ed48dc, Func Offset: 0x19c
	// Line 407, Address: 0x1ed4740, Func Offset: 0
	// Line 408, Address: 0x1ed4748, Func Offset: 0x8
	// Line 410, Address: 0x1ed4750, Func Offset: 0x10
	// Line 409, Address: 0x1ed4754, Func Offset: 0x14
	// Line 410, Address: 0x1ed4758, Func Offset: 0x18
	// Func End, Address: 0x1ed4760, Func Offset: 0x20
}

