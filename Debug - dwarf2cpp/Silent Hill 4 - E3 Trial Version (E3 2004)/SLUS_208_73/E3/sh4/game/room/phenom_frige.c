typedef struct sgAnime;
typedef struct sgBone;
typedef struct _anon0;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_14)(_anon3*, int, int, float*);
typedef void(*type_21)(sfObj*);
typedef sgIKSolveResult(*type_23)();

typedef void* type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef sfObj* type_6[30];
typedef unsigned char type_8[4];
typedef _anon1 type_9[256];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef float type_22[4][2];
typedef float type_24[4];

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

struct _anon0
{
	float pos0[4];
	float power;
	float rot_y;
	int n;
	int kind;
	int timer;
	int id;
	int alpha;
	int se;
	int se_slot;
	sfCharacter chara;
	sfObj* sptr[30];
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
	_anon4 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _anon2
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
};

struct _anon3
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon4
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon3*, int, int, float*);
	int equip_flag;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

void(*PhenomResetAlpha)(sfObj*);
void(*PhenomSetAlpha)(sfObj*);
void(*PhenomDebugDrawFunc)(sfObj*);
float PhenomNullPos[4];
void(*PhenomMeatMain)(sfObj*);
void(*PhenomFrigeMain)(sfObj*);

void PhenomMeatMain(sfObj* obj);
void PhenomFrigeMain(sfObj* obj);
void PhenomFrigeInit(int n);

// 
// Start address: 0x2bd5a0
void PhenomMeatMain(sfObj* obj)
{
	_anon0* ppptr;
	_anon2* pptr;
	sfCharacter* chara;
	float last_pos[4];
	int level;
	int stat;
	sgAnime* anm;
	sgBone* ptr;
	float sv[4];
	float scale;
	int i;
	// Line 27, Address: 0x2bd5a0, Func Offset: 0
	// Line 35, Address: 0x2bd5cc, Func Offset: 0x2c
	// Line 37, Address: 0x2bd5d0, Func Offset: 0x30
	// Line 38, Address: 0x2bd5dc, Func Offset: 0x3c
	// Line 39, Address: 0x2bd5e0, Func Offset: 0x40
	// Line 37, Address: 0x2bd5e4, Func Offset: 0x44
	// Line 41, Address: 0x2bd5e8, Func Offset: 0x48
	// Line 38, Address: 0x2bd5ec, Func Offset: 0x4c
	// Line 41, Address: 0x2bd5f4, Func Offset: 0x54
	// Line 42, Address: 0x2bd5fc, Func Offset: 0x5c
	// Line 44, Address: 0x2bd604, Func Offset: 0x64
	// Line 45, Address: 0x2bd62c, Func Offset: 0x8c
	// Line 46, Address: 0x2bd630, Func Offset: 0x90
	// Line 47, Address: 0x2bd648, Func Offset: 0xa8
	// Line 49, Address: 0x2bd650, Func Offset: 0xb0
	// Line 50, Address: 0x2bd674, Func Offset: 0xd4
	// Line 51, Address: 0x2bd678, Func Offset: 0xd8
	// Line 52, Address: 0x2bd68c, Func Offset: 0xec
	// Line 53, Address: 0x2bd694, Func Offset: 0xf4
	// Line 61, Address: 0x2bd69c, Func Offset: 0xfc
	// Line 62, Address: 0x2bd6a0, Func Offset: 0x100
	// Line 64, Address: 0x2bd6d8, Func Offset: 0x138
	// Line 65, Address: 0x2bd6e8, Func Offset: 0x148
	// Line 67, Address: 0x2bd6f0, Func Offset: 0x150
	// Line 68, Address: 0x2bd700, Func Offset: 0x160
	// Line 70, Address: 0x2bd70c, Func Offset: 0x16c
	// Line 71, Address: 0x2bd710, Func Offset: 0x170
	// Line 72, Address: 0x2bd718, Func Offset: 0x178
	// Line 74, Address: 0x2bd720, Func Offset: 0x180
	// Line 75, Address: 0x2bd74c, Func Offset: 0x1ac
	// Line 76, Address: 0x2bd75c, Func Offset: 0x1bc
	// Line 86, Address: 0x2bd760, Func Offset: 0x1c0
	// Line 87, Address: 0x2bd768, Func Offset: 0x1c8
	// Line 89, Address: 0x2bd774, Func Offset: 0x1d4
	// Line 94, Address: 0x2bd790, Func Offset: 0x1f0
	// Line 92, Address: 0x2bd794, Func Offset: 0x1f4
	// Line 93, Address: 0x2bd798, Func Offset: 0x1f8
	// Line 92, Address: 0x2bd79c, Func Offset: 0x1fc
	// Line 94, Address: 0x2bd7a4, Func Offset: 0x204
	// Line 95, Address: 0x2bd7a8, Func Offset: 0x208
	// Line 97, Address: 0x2bd7b4, Func Offset: 0x214
	// Line 98, Address: 0x2bd7c0, Func Offset: 0x220
	// Line 100, Address: 0x2bd7d0, Func Offset: 0x230
	// Line 101, Address: 0x2bd7d8, Func Offset: 0x238
	// Line 102, Address: 0x2bd7e4, Func Offset: 0x244
	// Line 103, Address: 0x2bd7f4, Func Offset: 0x254
	// Line 105, Address: 0x2bd81c, Func Offset: 0x27c
	// Line 106, Address: 0x2bd824, Func Offset: 0x284
	// Line 107, Address: 0x2bd828, Func Offset: 0x288
	// Line 108, Address: 0x2bd82c, Func Offset: 0x28c
	// Line 112, Address: 0x2bd848, Func Offset: 0x2a8
	// Line 113, Address: 0x2bd854, Func Offset: 0x2b4
	// Line 114, Address: 0x2bd86c, Func Offset: 0x2cc
	// Line 116, Address: 0x2bd870, Func Offset: 0x2d0
	// Line 117, Address: 0x2bd87c, Func Offset: 0x2dc
	// Line 124, Address: 0x2bd88c, Func Offset: 0x2ec
	// Func End, Address: 0x2bd8b8, Func Offset: 0x318
}

// 
// Start address: 0x2bd8c0
void PhenomFrigeMain(sfObj* obj)
{
	_anon0* ppptr;
	_anon2* pptr;
	sfCharacter* chara;
	float last_pos[4];
	int level;
	int stat;
	// Line 127, Address: 0x2bd8c0, Func Offset: 0
	// Line 134, Address: 0x2bd8e0, Func Offset: 0x20
	// Line 136, Address: 0x2bd8e4, Func Offset: 0x24
	// Line 137, Address: 0x2bd8f0, Func Offset: 0x30
	// Line 138, Address: 0x2bd8f4, Func Offset: 0x34
	// Line 136, Address: 0x2bd8f8, Func Offset: 0x38
	// Line 140, Address: 0x2bd8fc, Func Offset: 0x3c
	// Line 137, Address: 0x2bd900, Func Offset: 0x40
	// Line 140, Address: 0x2bd908, Func Offset: 0x48
	// Line 142, Address: 0x2bd910, Func Offset: 0x50
	// Line 144, Address: 0x2bd938, Func Offset: 0x78
	// Line 145, Address: 0x2bd950, Func Offset: 0x90
	// Line 150, Address: 0x2bd958, Func Offset: 0x98
	// Line 151, Address: 0x2bd964, Func Offset: 0xa4
	// Line 152, Address: 0x2bd970, Func Offset: 0xb0
	// Line 153, Address: 0x2bd980, Func Offset: 0xc0
	// Line 155, Address: 0x2bd9a8, Func Offset: 0xe8
	// Line 157, Address: 0x2bd9b0, Func Offset: 0xf0
	// Line 158, Address: 0x2bd9b4, Func Offset: 0xf4
	// Line 162, Address: 0x2bd9d0, Func Offset: 0x110
	// Line 163, Address: 0x2bd9dc, Func Offset: 0x11c
	// Line 164, Address: 0x2bd9f4, Func Offset: 0x134
	// Line 166, Address: 0x2bd9f8, Func Offset: 0x138
	// Line 169, Address: 0x2bda04, Func Offset: 0x144
	// Func End, Address: 0x2bda24, Func Offset: 0x164
}

// 
// Start address: 0x2bda30
void PhenomFrigeInit(int n)
{
	_anon0* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 172, Address: 0x2bda30, Func Offset: 0
	// Line 177, Address: 0x2bda48, Func Offset: 0x18
	// Line 178, Address: 0x2bda54, Func Offset: 0x24
	// Line 179, Address: 0x2bda64, Func Offset: 0x34
	// Line 181, Address: 0x2bda74, Func Offset: 0x44
	// Line 180, Address: 0x2bda78, Func Offset: 0x48
	// Line 181, Address: 0x2bda7c, Func Offset: 0x4c
	// Line 183, Address: 0x2bda88, Func Offset: 0x58
	// Line 184, Address: 0x2bda98, Func Offset: 0x68
	// Line 186, Address: 0x2bdaa8, Func Offset: 0x78
	// Line 187, Address: 0x2bdaac, Func Offset: 0x7c
	// Line 189, Address: 0x2bdacc, Func Offset: 0x9c
	// Line 190, Address: 0x2bdad4, Func Offset: 0xa4
	// Line 193, Address: 0x2bdae0, Func Offset: 0xb0
	// Line 194, Address: 0x2bdaec, Func Offset: 0xbc
	// Line 195, Address: 0x2bdafc, Func Offset: 0xcc
	// Line 197, Address: 0x2bdb0c, Func Offset: 0xdc
	// Line 196, Address: 0x2bdb10, Func Offset: 0xe0
	// Line 197, Address: 0x2bdb14, Func Offset: 0xe4
	// Line 199, Address: 0x2bdb20, Func Offset: 0xf0
	// Line 200, Address: 0x2bdb30, Func Offset: 0x100
	// Line 202, Address: 0x2bdb40, Func Offset: 0x110
	// Line 203, Address: 0x2bdb44, Func Offset: 0x114
	// Line 205, Address: 0x2bdb64, Func Offset: 0x134
	// Line 206, Address: 0x2bdb6c, Func Offset: 0x13c
	// Line 208, Address: 0x2bdb78, Func Offset: 0x148
	// Line 209, Address: 0x2bdb88, Func Offset: 0x158
	// Func End, Address: 0x2bdba4, Func Offset: 0x174
}

