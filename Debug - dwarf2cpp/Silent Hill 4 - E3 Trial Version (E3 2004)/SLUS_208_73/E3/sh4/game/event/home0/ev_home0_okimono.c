typedef struct _anon0;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef union _anon1;
typedef struct sgSVModel;
typedef struct _anon2;
typedef struct _anon3;
typedef struct EventFlag;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_0)();
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_6)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_12)(_anon2*, int, int, float*);

typedef float type_1[4];
typedef _anon1 type_2[10];
typedef void* type_3[4];
typedef _anon1 type_4[256];
typedef float type_7[4];
typedef float type_8[4][4];
typedef unsigned char type_9[4];
typedef short type_11[2];
typedef float type_13[4];
typedef unsigned char type_14[320];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef float type_18[1];
typedef int type_19[1];
typedef float type_20[4][2];

struct _anon0
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
	_anon1 dmy[10];
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
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

union _anon1
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct EventFlag
{
	unsigned char flag[320];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

EventFlag event_flag;

void ie14_tel_init(sfObj* obj);
void ie14_tel_exec(sfObj* obj);
void ie14_tel_draw(sfObj* obj);
void ie14_tel_end(sfObj* obj);

// 
// Start address: 0x1ed59b0
void ie14_tel_init(sfObj* obj)
{
	sfCharacter* chara;
	_anon0* fig;
	float pos[4];
	// Line 551, Address: 0x1ed59b0, Func Offset: 0
	// Line 552, Address: 0x1ed59b4, Func Offset: 0x4
	// Line 551, Address: 0x1ed59b8, Func Offset: 0x8
	// Line 552, Address: 0x1ed59bc, Func Offset: 0xc
	// Line 551, Address: 0x1ed59c0, Func Offset: 0x10
	// Line 555, Address: 0x1ed59c4, Func Offset: 0x14
	// Line 552, Address: 0x1ed59c8, Func Offset: 0x18
	// Line 555, Address: 0x1ed59d4, Func Offset: 0x24
	// Line 556, Address: 0x1ed59dc, Func Offset: 0x2c
	// Line 558, Address: 0x1ed59f0, Func Offset: 0x40
	// Line 559, Address: 0x1ed59f8, Func Offset: 0x48
	// Line 560, Address: 0x1ed5a00, Func Offset: 0x50
	// Func End, Address: 0x1ed5a10, Func Offset: 0x60
	// Line 680, Address: 0x1ed59b0, Func Offset: 0
	// Line 681, Address: 0x1ed59b4, Func Offset: 0x4
	// Line 680, Address: 0x1ed59b8, Func Offset: 0x8
	// Line 681, Address: 0x1ed59cc, Func Offset: 0x1c
	// Line 682, Address: 0x1ed59dc, Func Offset: 0x2c
	// Line 685, Address: 0x1ed59e4, Func Offset: 0x34
	// Line 688, Address: 0x1ed59f0, Func Offset: 0x40
	// Line 691, Address: 0x1ed5a1c, Func Offset: 0x6c
	// Line 692, Address: 0x1ed5a24, Func Offset: 0x74
	// Line 697, Address: 0x1ed5a28, Func Offset: 0x78
	// Line 692, Address: 0x1ed5a30, Func Offset: 0x80
	// Line 693, Address: 0x1ed5a34, Func Offset: 0x84
	// Line 694, Address: 0x1ed5a3c, Func Offset: 0x8c
	// Line 697, Address: 0x1ed5a44, Func Offset: 0x94
	// Line 699, Address: 0x1ed5a4c, Func Offset: 0x9c
	// Line 700, Address: 0x1ed5a50, Func Offset: 0xa0
	// Line 701, Address: 0x1ed5a64, Func Offset: 0xb4
	// Line 704, Address: 0x1ed5a6c, Func Offset: 0xbc
	// Line 706, Address: 0x1ed5a70, Func Offset: 0xc0
	// Func End, Address: 0x1ed5a8c, Func Offset: 0xdc
}

// 
// Start address: 0x1ed5a90
void ie14_tel_exec(sfObj* obj)
{
	// Line 649, Address: 0x1ed5a90, Func Offset: 0
	// Line 650, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 649, Address: 0x1ed5a98, Func Offset: 0x8
	// Line 650, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 649, Address: 0x1ed5aa0, Func Offset: 0x10
	// Line 651, Address: 0x1ed5aa4, Func Offset: 0x14
	// Line 650, Address: 0x1ed5aa8, Func Offset: 0x18
	// Line 655, Address: 0x1ed5ab4, Func Offset: 0x24
	// Line 651, Address: 0x1ed5ab8, Func Offset: 0x28
	// Line 650, Address: 0x1ed5abc, Func Offset: 0x2c
	// Line 651, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 655, Address: 0x1ed5ac8, Func Offset: 0x38
	// Line 656, Address: 0x1ed5ad0, Func Offset: 0x40
	// Line 657, Address: 0x1ed5aec, Func Offset: 0x5c
	// Line 659, Address: 0x1ed5b00, Func Offset: 0x70
	// Line 660, Address: 0x1ed5b08, Func Offset: 0x78
	// Func End, Address: 0x1ed5b18, Func Offset: 0x88
	// Line 709, Address: 0x1ed5a90, Func Offset: 0
	// Line 710, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 713, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 715, Address: 0x1ed5aa8, Func Offset: 0x18
	// Func End, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 1015, Address: 0x1ed5a90, Func Offset: 0
	// Line 1016, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 1018, Address: 0x1ed5aa4, Func Offset: 0x14
	// Line 1019, Address: 0x1ed5aac, Func Offset: 0x1c
	// Line 1021, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 1020, Address: 0x1ed5ab4, Func Offset: 0x24
	// Line 1021, Address: 0x1ed5ab8, Func Offset: 0x28
	// Func End, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 684, Address: 0x1ed5a90, Func Offset: 0
	// Line 685, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 684, Address: 0x1ed5a98, Func Offset: 0x8
	// Line 685, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 686, Address: 0x1ed5aa8, Func Offset: 0x18
	// Line 690, Address: 0x1ed5aac, Func Offset: 0x1c
	// Line 686, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 690, Address: 0x1ed5ab8, Func Offset: 0x28
	// Line 685, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 690, Address: 0x1ed5ac4, Func Offset: 0x34
	// Line 686, Address: 0x1ed5ac8, Func Offset: 0x38
	// Line 690, Address: 0x1ed5acc, Func Offset: 0x3c
	// Line 693, Address: 0x1ed5ad4, Func Offset: 0x44
	// Line 692, Address: 0x1ed5ad8, Func Offset: 0x48
	// Line 693, Address: 0x1ed5adc, Func Offset: 0x4c
	// Func End, Address: 0x1ed5ae4, Func Offset: 0x54
}

// 
// Start address: 0x1ed5ab0
void ie14_tel_draw(sfObj* obj)
{
	// Line 1540, Address: 0x1ed5ab0, Func Offset: 0
	// Line 1543, Address: 0x1ed5ab8, Func Offset: 0x8
	// Line 1545, Address: 0x1ed5ac0, Func Offset: 0x10
	// Line 1544, Address: 0x1ed5ac4, Func Offset: 0x14
	// Line 1545, Address: 0x1ed5ac8, Func Offset: 0x18
	// Func End, Address: 0x1ed5ad0, Func Offset: 0x20
	// Line 833, Address: 0x1ed5ab0, Func Offset: 0
	// Line 835, Address: 0x1ed5ac4, Func Offset: 0x14
	// Line 838, Address: 0x1ed5acc, Func Offset: 0x1c
	// Line 839, Address: 0x1ed5ad4, Func Offset: 0x24
	// Line 840, Address: 0x1ed5ad8, Func Offset: 0x28
	// Line 841, Address: 0x1ed5af4, Func Offset: 0x44
	// Line 871, Address: 0x1ed5af8, Func Offset: 0x48
	// Line 870, Address: 0x1ed5b00, Func Offset: 0x50
	// Line 871, Address: 0x1ed5b04, Func Offset: 0x54
	// Func End, Address: 0x1ed5b10, Func Offset: 0x60
	// Line 718, Address: 0x1ed5ab0, Func Offset: 0
	// Line 719, Address: 0x1ed5ac0, Func Offset: 0x10
	// Line 723, Address: 0x1ed5ad8, Func Offset: 0x28
	// Line 727, Address: 0x1ed5ae0, Func Offset: 0x30
	// Line 734, Address: 0x1ed5b04, Func Offset: 0x54
	// Line 737, Address: 0x1ed5b0c, Func Offset: 0x5c
	// Line 738, Address: 0x1ed5b14, Func Offset: 0x64
	// Line 739, Address: 0x1ed5b18, Func Offset: 0x68
	// Func End, Address: 0x1ed5b24, Func Offset: 0x74
}

// 
// Start address: 0x1ed5b30
void ie14_tel_end(sfObj* obj)
{
	// Line 742, Address: 0x1ed5b30, Func Offset: 0
	// Line 743, Address: 0x1ed5b3c, Func Offset: 0xc
	// Line 746, Address: 0x1ed5b44, Func Offset: 0x14
	// Line 747, Address: 0x1ed5b4c, Func Offset: 0x1c
	// Line 748, Address: 0x1ed5b50, Func Offset: 0x20
	// Func End, Address: 0x1ed5b5c, Func Offset: 0x2c
	// Line 705, Address: 0x1ed5b30, Func Offset: 0
	// Line 706, Address: 0x1ed5b38, Func Offset: 0x8
	// Line 708, Address: 0x1ed5b40, Func Offset: 0x10
	// Line 707, Address: 0x1ed5b44, Func Offset: 0x14
	// Line 708, Address: 0x1ed5b48, Func Offset: 0x18
	// Func End, Address: 0x1ed5b50, Func Offset: 0x20
}

