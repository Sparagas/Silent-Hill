typedef struct _anon0;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_1)(sfObj*);
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(_anon3*, int, int, float*);
typedef void(*type_17)(sfObj*);
typedef sgIKSolveResult(*type_22)();

typedef void* type_0[4];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef sfObj* type_6[30];
typedef unsigned char type_9[4];
typedef _anon2 type_10[256];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef float type_21[4][2];
typedef float type_23[4];

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
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
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

struct _anon1
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
};

union _anon2
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
void(*PhenomShoeMain)(sfObj*);

void PhenomShoeMain(sfObj* obj);
void PhenomSetOne(int n, int mdl, int tex, int fn);
void PhenomShoeInit(int n);

// 
// Start address: 0x2e9ad0
void PhenomShoeMain(sfObj* obj)
{
	_anon0* ppptr;
	_anon1* pptr;
	sfCharacter* chara;
	float last_pos[4];
	int level;
	int stat;
	// Line 23, Address: 0x2e9ad0, Func Offset: 0
	// Line 30, Address: 0x2e9af0, Func Offset: 0x20
	// Line 31, Address: 0x2e9af4, Func Offset: 0x24
	// Line 33, Address: 0x2e9afc, Func Offset: 0x2c
	// Line 34, Address: 0x2e9b00, Func Offset: 0x30
	// Line 31, Address: 0x2e9b04, Func Offset: 0x34
	// Line 32, Address: 0x2e9b08, Func Offset: 0x38
	// Line 37, Address: 0x2e9b0c, Func Offset: 0x3c
	// Line 33, Address: 0x2e9b10, Func Offset: 0x40
	// Line 37, Address: 0x2e9b18, Func Offset: 0x48
	// Line 39, Address: 0x2e9b20, Func Offset: 0x50
	// Line 40, Address: 0x2e9b44, Func Offset: 0x74
	// Line 41, Address: 0x2e9b48, Func Offset: 0x78
	// Line 42, Address: 0x2e9b6c, Func Offset: 0x9c
	// Line 43, Address: 0x2e9b74, Func Offset: 0xa4
	// Line 42, Address: 0x2e9b78, Func Offset: 0xa8
	// Line 44, Address: 0x2e9b7c, Func Offset: 0xac
	// Line 45, Address: 0x2e9b84, Func Offset: 0xb4
	// Line 46, Address: 0x2e9b9c, Func Offset: 0xcc
	// Line 47, Address: 0x2e9ba8, Func Offset: 0xd8
	// Line 50, Address: 0x2e9bb0, Func Offset: 0xe0
	// Line 51, Address: 0x2e9bb8, Func Offset: 0xe8
	// Line 52, Address: 0x2e9bc4, Func Offset: 0xf4
	// Line 53, Address: 0x2e9bd4, Func Offset: 0x104
	// Line 56, Address: 0x2e9c0c, Func Offset: 0x13c
	// Line 57, Address: 0x2e9c14, Func Offset: 0x144
	// Line 58, Address: 0x2e9c18, Func Offset: 0x148
	// Line 59, Address: 0x2e9c1c, Func Offset: 0x14c
	// Line 64, Address: 0x2e9c48, Func Offset: 0x178
	// Line 65, Address: 0x2e9c54, Func Offset: 0x184
	// Line 66, Address: 0x2e9c6c, Func Offset: 0x19c
	// Line 68, Address: 0x2e9c70, Func Offset: 0x1a0
	// Line 71, Address: 0x2e9c7c, Func Offset: 0x1ac
	// Func End, Address: 0x2e9c9c, Func Offset: 0x1cc
}

// 
// Start address: 0x2e9ca0
void PhenomSetOne(int n, int mdl, int tex, int fn)
{
	_anon0* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 76, Address: 0x2e9ca0, Func Offset: 0
	// Line 81, Address: 0x2e9ccc, Func Offset: 0x2c
	// Line 82, Address: 0x2e9cd8, Func Offset: 0x38
	// Line 83, Address: 0x2e9ce8, Func Offset: 0x48
	// Line 85, Address: 0x2e9cf8, Func Offset: 0x58
	// Line 84, Address: 0x2e9cfc, Func Offset: 0x5c
	// Line 85, Address: 0x2e9d00, Func Offset: 0x60
	// Line 87, Address: 0x2e9d0c, Func Offset: 0x6c
	// Line 90, Address: 0x2e9d1c, Func Offset: 0x7c
	// Line 92, Address: 0x2e9d38, Func Offset: 0x98
	// Line 93, Address: 0x2e9d3c, Func Offset: 0x9c
	// Line 95, Address: 0x2e9d54, Func Offset: 0xb4
	// Line 97, Address: 0x2e9d5c, Func Offset: 0xbc
	// Line 98, Address: 0x2e9d68, Func Offset: 0xc8
	// Func End, Address: 0x2e9d8c, Func Offset: 0xec
}

// 
// Start address: 0x2e9d90
void PhenomShoeInit(int n)
{
	// Line 103, Address: 0x2e9d90, Func Offset: 0
	// Line 104, Address: 0x2e9d94, Func Offset: 0x4
	// Line 103, Address: 0x2e9d98, Func Offset: 0x8
	// Line 104, Address: 0x2e9d9c, Func Offset: 0xc
	// Line 103, Address: 0x2e9da0, Func Offset: 0x10
	// Line 104, Address: 0x2e9da4, Func Offset: 0x14
	// Line 106, Address: 0x2e9db8, Func Offset: 0x28
	// Line 107, Address: 0x2e9dd4, Func Offset: 0x44
	// Line 108, Address: 0x2e9df0, Func Offset: 0x60
	// Line 109, Address: 0x2e9e0c, Func Offset: 0x7c
	// Line 110, Address: 0x2e9e28, Func Offset: 0x98
	// Line 111, Address: 0x2e9e44, Func Offset: 0xb4
	// Func End, Address: 0x2e9e54, Func Offset: 0xc4
}

