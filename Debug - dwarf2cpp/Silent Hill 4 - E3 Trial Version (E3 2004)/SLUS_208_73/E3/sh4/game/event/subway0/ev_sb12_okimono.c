typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct sgAnime;
typedef union _anon0;
typedef struct _anon1;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon2;
typedef struct _anon3;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_0)();
typedef void(*type_4)(sgAnime*, int);
typedef void(*type_5)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(_anon2*, int, int, float*);

typedef float type_1[4];
typedef void* type_2[4];
typedef _anon0 type_3[256];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned char type_8[4];
typedef short type_10[2];
typedef float type_12[4];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef float type_16[1];
typedef int type_17[1];
typedef float type_18[4][2];

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

struct _anon1
{
	sfCharacter chara;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};


void Sb12WallConstruct(sfObj* obj);
void Sb12WallExec(sfObj* obj);
void Sb12WallDestruct(sfObj* obj);
void Sb12WallDraw(sfObj* obj);

// 
// Start address: 0x1ed4770
void Sb12WallConstruct(sfObj* obj)
{
	_anon1* wk;
	sgAnime* anm;
	// Line 543, Address: 0x1ed4770, Func Offset: 0
	// Line 546, Address: 0x1ed4774, Func Offset: 0x4
	// Line 543, Address: 0x1ed4778, Func Offset: 0x8
	// Line 546, Address: 0x1ed477c, Func Offset: 0xc
	// Line 547, Address: 0x1ed478c, Func Offset: 0x1c
	// Line 548, Address: 0x1ed4794, Func Offset: 0x24
	// Line 551, Address: 0x1ed4798, Func Offset: 0x28
	// Line 552, Address: 0x1ed47a4, Func Offset: 0x34
	// Line 553, Address: 0x1ed47bc, Func Offset: 0x4c
	// Line 556, Address: 0x1ed47c8, Func Offset: 0x58
	// Line 560, Address: 0x1ed47d0, Func Offset: 0x60
	// Line 561, Address: 0x1ed47d8, Func Offset: 0x68
	// Func End, Address: 0x1ed47e4, Func Offset: 0x74
	// Line 68, Address: 0x1ed4770, Func Offset: 0
	// Line 69, Address: 0x1ed4784, Func Offset: 0x14
	// Line 70, Address: 0x1ed478c, Func Offset: 0x1c
	// Line 72, Address: 0x1ed479c, Func Offset: 0x2c
	// Line 76, Address: 0x1ed47a4, Func Offset: 0x34
	// Line 80, Address: 0x1ed47d0, Func Offset: 0x60
	// Line 81, Address: 0x1ed47dc, Func Offset: 0x6c
	// Line 83, Address: 0x1ed47f4, Func Offset: 0x84
	// Line 89, Address: 0x1ed4804, Func Offset: 0x94
	// Line 90, Address: 0x1ed4808, Func Offset: 0x98
	// Func End, Address: 0x1ed481c, Func Offset: 0xac
	// Line 246, Address: 0x1ed4770, Func Offset: 0
	// Line 247, Address: 0x1ed4784, Func Offset: 0x14
	// Line 248, Address: 0x1ed4788, Func Offset: 0x18
	// Line 250, Address: 0x1ed4790, Func Offset: 0x20
	// Line 251, Address: 0x1ed4798, Func Offset: 0x28
	// Line 252, Address: 0x1ed47a0, Func Offset: 0x30
	// Line 254, Address: 0x1ed47a8, Func Offset: 0x38
	// Line 253, Address: 0x1ed47ac, Func Offset: 0x3c
	// Line 254, Address: 0x1ed47b0, Func Offset: 0x40
	// Func End, Address: 0x1ed47c0, Func Offset: 0x50
}

// 
// Start address: 0x1ed4820
void Sb12WallExec(sfObj* obj)
{
	sgAnime* anm;
	// Line 93, Address: 0x1ed4820, Func Offset: 0
	// Line 94, Address: 0x1ed4828, Func Offset: 0x8
	// Line 96, Address: 0x1ed4830, Func Offset: 0x10
	// Line 98, Address: 0x1ed4838, Func Offset: 0x18
	// Line 100, Address: 0x1ed4848, Func Offset: 0x28
	// Line 103, Address: 0x1ed4850, Func Offset: 0x30
	// Func End, Address: 0x1ed4860, Func Offset: 0x40
	// Line 384, Address: 0x1ed4820, Func Offset: 0
	// Line 385, Address: 0x1ed4828, Func Offset: 0x8
	// Line 386, Address: 0x1ed4830, Func Offset: 0x10
	// Line 387, Address: 0x1ed4838, Func Offset: 0x18
	// Func End, Address: 0x1ed4844, Func Offset: 0x24
}

// 
// Start address: 0x1ed4860
void Sb12WallDestruct(sfObj* obj)
{
	// Line 106, Address: 0x1ed4860, Func Offset: 0
	// Line 107, Address: 0x1ed4864, Func Offset: 0x4
	// Line 110, Address: 0x1ed486c, Func Offset: 0xc
	// Line 111, Address: 0x1ed4874, Func Offset: 0x14
	// Line 112, Address: 0x1ed4878, Func Offset: 0x18
	// Func End, Address: 0x1ed4884, Func Offset: 0x24
	// Line 401, Address: 0x1ed4860, Func Offset: 0
	// Line 403, Address: 0x1ed4864, Func Offset: 0x4
	// Line 401, Address: 0x1ed4868, Func Offset: 0x8
	// Line 403, Address: 0x1ed486c, Func Offset: 0xc
	// Line 401, Address: 0x1ed4870, Func Offset: 0x10
	// Line 403, Address: 0x1ed4874, Func Offset: 0x14
	// Line 408, Address: 0x1ed4880, Func Offset: 0x20
	// Line 409, Address: 0x1ed4894, Func Offset: 0x34
	// Line 410, Address: 0x1ed48b4, Func Offset: 0x54
	// Line 411, Address: 0x1ed48dc, Func Offset: 0x7c
	// Line 412, Address: 0x1ed48f4, Func Offset: 0x94
	// Line 413, Address: 0x1ed48f8, Func Offset: 0x98
	// Line 414, Address: 0x1ed4904, Func Offset: 0xa4
	// Line 416, Address: 0x1ed4908, Func Offset: 0xa8
	// Line 419, Address: 0x1ed4918, Func Offset: 0xb8
	// Line 420, Address: 0x1ed4924, Func Offset: 0xc4
	// Line 421, Address: 0x1ed4934, Func Offset: 0xd4
	// Line 424, Address: 0x1ed4948, Func Offset: 0xe8
	// Line 425, Address: 0x1ed4950, Func Offset: 0xf0
	// Func End, Address: 0x1ed4960, Func Offset: 0x100
}

// 
// Start address: 0x1ed4890
void Sb12WallDraw(sfObj* obj)
{
	// Line 608, Address: 0x1ed4890, Func Offset: 0
	// Line 612, Address: 0x1ed4894, Func Offset: 0x4
	// Line 608, Address: 0x1ed4898, Func Offset: 0x8
	// Line 612, Address: 0x1ed489c, Func Offset: 0xc
	// Line 613, Address: 0x1ed48ac, Func Offset: 0x1c
	// Line 614, Address: 0x1ed48b4, Func Offset: 0x24
	// Line 615, Address: 0x1ed48bc, Func Offset: 0x2c
	// Line 617, Address: 0x1ed48c0, Func Offset: 0x30
	// Line 621, Address: 0x1ed48c8, Func Offset: 0x38
	// Line 622, Address: 0x1ed48d0, Func Offset: 0x40
	// Func End, Address: 0x1ed48dc, Func Offset: 0x4c
	// Line 115, Address: 0x1ed4890, Func Offset: 0
	// Line 116, Address: 0x1ed4894, Func Offset: 0x4
	// Line 119, Address: 0x1ed489c, Func Offset: 0xc
	// Line 120, Address: 0x1ed48a4, Func Offset: 0x14
	// Line 121, Address: 0x1ed48a8, Func Offset: 0x18
	// Func End, Address: 0x1ed48b4, Func Offset: 0x24
}

