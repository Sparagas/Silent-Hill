typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_0)(sfObj*);
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_6)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(_anon2*, int, int, float*);
typedef void(*type_14)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef sgIKSolveResult(*type_23)();

typedef void* type_1[4];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_7[4];
typedef _anon1 type_8[256];
typedef sfObj* type_11[30];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[4];
typedef float type_20[1];
typedef int type_21[1];
typedef float type_22[4][2];
typedef float type_24[4];

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

struct _anon0
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
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
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon3
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

struct _anon4
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

void(*PhenomResetAlpha)(sfObj*);
void(*PhenomSetAlpha)(sfObj*);
void(*PhenomDebugDrawFunc)(sfObj*);
float PhenomNullPos[4];
void(*PhenomEntMain)(sfObj*);
void(*PhenomSinkMain)(sfObj*);

void PhenomEntMain(sfObj* obj);
void PhenomEntInit(int n);
void PhenomSinkMain(sfObj* obj);
void PhenomSinkInit(int n);

// 
// Start address: 0x2e9e60
void PhenomEntMain(sfObj* obj)
{
	_anon3* ppptr;
	_anon0* pptr;
	float last_pos[4];
	int level;
	int stat;
	sfCharacter* chara;
	// Line 26, Address: 0x2e9e60, Func Offset: 0
	// Line 33, Address: 0x2e9e7c, Func Offset: 0x1c
	// Line 34, Address: 0x2e9e80, Func Offset: 0x20
	// Line 35, Address: 0x2e9e88, Func Offset: 0x28
	// Line 36, Address: 0x2e9e8c, Func Offset: 0x2c
	// Line 38, Address: 0x2e9e90, Func Offset: 0x30
	// Line 40, Address: 0x2e9e94, Func Offset: 0x34
	// Line 35, Address: 0x2e9e98, Func Offset: 0x38
	// Line 40, Address: 0x2e9ea0, Func Offset: 0x40
	// Line 42, Address: 0x2e9ea8, Func Offset: 0x48
	// Line 44, Address: 0x2e9ed0, Func Offset: 0x70
	// Line 45, Address: 0x2e9ee8, Func Offset: 0x88
	// Line 47, Address: 0x2e9ef0, Func Offset: 0x90
	// Line 48, Address: 0x2e9efc, Func Offset: 0x9c
	// Line 49, Address: 0x2e9f08, Func Offset: 0xa8
	// Line 50, Address: 0x2e9f18, Func Offset: 0xb8
	// Line 52, Address: 0x2e9f40, Func Offset: 0xe0
	// Line 54, Address: 0x2e9f48, Func Offset: 0xe8
	// Line 55, Address: 0x2e9f4c, Func Offset: 0xec
	// Line 59, Address: 0x2e9f68, Func Offset: 0x108
	// Line 60, Address: 0x2e9f74, Func Offset: 0x114
	// Func End, Address: 0x2e9f90, Func Offset: 0x130
}

// 
// Start address: 0x2e9f90
void PhenomEntInit(int n)
{
	_anon3* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 64, Address: 0x2e9f90, Func Offset: 0
	// Line 69, Address: 0x2e9fa4, Func Offset: 0x14
	// Line 70, Address: 0x2e9fb0, Func Offset: 0x20
	// Line 71, Address: 0x2e9fc0, Func Offset: 0x30
	// Line 73, Address: 0x2e9fd0, Func Offset: 0x40
	// Line 72, Address: 0x2e9fd4, Func Offset: 0x44
	// Line 73, Address: 0x2e9fd8, Func Offset: 0x48
	// Line 76, Address: 0x2e9fe4, Func Offset: 0x54
	// Line 77, Address: 0x2e9ff4, Func Offset: 0x64
	// Line 79, Address: 0x2ea004, Func Offset: 0x74
	// Line 80, Address: 0x2ea008, Func Offset: 0x78
	// Line 82, Address: 0x2ea028, Func Offset: 0x98
	// Line 84, Address: 0x2ea034, Func Offset: 0xa4
	// Line 85, Address: 0x2ea03c, Func Offset: 0xac
	// Func End, Address: 0x2ea054, Func Offset: 0xc4
}

// 
// Start address: 0x2ea060
void PhenomSinkMain(sfObj* obj)
{
	_anon3* ppptr;
	_anon0* pptr;
	float last_pos[4];
	int level;
	int stat;
	sfCharacter* chara;
	// Line 95, Address: 0x2ea060, Func Offset: 0
	// Line 102, Address: 0x2ea07c, Func Offset: 0x1c
	// Line 103, Address: 0x2ea080, Func Offset: 0x20
	// Line 104, Address: 0x2ea088, Func Offset: 0x28
	// Line 105, Address: 0x2ea08c, Func Offset: 0x2c
	// Line 107, Address: 0x2ea090, Func Offset: 0x30
	// Line 110, Address: 0x2ea094, Func Offset: 0x34
	// Line 104, Address: 0x2ea098, Func Offset: 0x38
	// Line 110, Address: 0x2ea0a0, Func Offset: 0x40
	// Line 112, Address: 0x2ea0a8, Func Offset: 0x48
	// Line 113, Address: 0x2ea0cc, Func Offset: 0x6c
	// Line 114, Address: 0x2ea0d0, Func Offset: 0x70
	// Line 115, Address: 0x2ea0e8, Func Offset: 0x88
	// Line 117, Address: 0x2ea0f0, Func Offset: 0x90
	// Line 118, Address: 0x2ea0fc, Func Offset: 0x9c
	// Line 119, Address: 0x2ea10c, Func Offset: 0xac
	// Line 121, Address: 0x2ea114, Func Offset: 0xb4
	// Line 122, Address: 0x2ea120, Func Offset: 0xc0
	// Line 123, Address: 0x2ea12c, Func Offset: 0xcc
	// Line 124, Address: 0x2ea13c, Func Offset: 0xdc
	// Line 125, Address: 0x2ea150, Func Offset: 0xf0
	// Line 127, Address: 0x2ea17c, Func Offset: 0x11c
	// Line 129, Address: 0x2ea188, Func Offset: 0x128
	// Line 130, Address: 0x2ea194, Func Offset: 0x134
	// Line 131, Address: 0x2ea1a0, Func Offset: 0x140
	// Line 132, Address: 0x2ea1b0, Func Offset: 0x150
	// Line 135, Address: 0x2ea1d8, Func Offset: 0x178
	// Line 137, Address: 0x2ea1e0, Func Offset: 0x180
	// Line 138, Address: 0x2ea1e4, Func Offset: 0x184
	// Line 139, Address: 0x2ea1f4, Func Offset: 0x194
	// Line 140, Address: 0x2ea1fc, Func Offset: 0x19c
	// Line 141, Address: 0x2ea200, Func Offset: 0x1a0
	// Line 143, Address: 0x2ea21c, Func Offset: 0x1bc
	// Line 145, Address: 0x2ea220, Func Offset: 0x1c0
	// Line 146, Address: 0x2ea22c, Func Offset: 0x1cc
	// Line 148, Address: 0x2ea23c, Func Offset: 0x1dc
	// Func End, Address: 0x2ea258, Func Offset: 0x1f8
}

// 
// Start address: 0x2ea260
void PhenomSinkInit(int n)
{
	_anon3* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 152, Address: 0x2ea260, Func Offset: 0
	// Line 157, Address: 0x2ea278, Func Offset: 0x18
	// Line 158, Address: 0x2ea284, Func Offset: 0x24
	// Line 159, Address: 0x2ea294, Func Offset: 0x34
	// Line 162, Address: 0x2ea2a4, Func Offset: 0x44
	// Line 160, Address: 0x2ea2a8, Func Offset: 0x48
	// Line 162, Address: 0x2ea2ac, Func Offset: 0x4c
	// Line 166, Address: 0x2ea2b8, Func Offset: 0x58
	// Line 163, Address: 0x2ea2bc, Func Offset: 0x5c
	// Line 166, Address: 0x2ea2c0, Func Offset: 0x60
	// Line 167, Address: 0x2ea2cc, Func Offset: 0x6c
	// Line 169, Address: 0x2ea2dc, Func Offset: 0x7c
	// Line 170, Address: 0x2ea2e0, Func Offset: 0x80
	// Line 172, Address: 0x2ea300, Func Offset: 0xa0
	// Line 174, Address: 0x2ea30c, Func Offset: 0xac
	// Line 177, Address: 0x2ea31c, Func Offset: 0xbc
	// Line 178, Address: 0x2ea328, Func Offset: 0xc8
	// Line 179, Address: 0x2ea338, Func Offset: 0xd8
	// Line 182, Address: 0x2ea348, Func Offset: 0xe8
	// Line 180, Address: 0x2ea34c, Func Offset: 0xec
	// Line 182, Address: 0x2ea350, Func Offset: 0xf0
	// Line 186, Address: 0x2ea35c, Func Offset: 0xfc
	// Line 184, Address: 0x2ea360, Func Offset: 0x100
	// Line 183, Address: 0x2ea364, Func Offset: 0x104
	// Line 184, Address: 0x2ea368, Func Offset: 0x108
	// Line 186, Address: 0x2ea36c, Func Offset: 0x10c
	// Line 188, Address: 0x2ea374, Func Offset: 0x114
	// Line 190, Address: 0x2ea378, Func Offset: 0x118
	// Line 192, Address: 0x2ea398, Func Offset: 0x138
	// Line 194, Address: 0x2ea3a4, Func Offset: 0x144
	// Line 195, Address: 0x2ea3b4, Func Offset: 0x154
	// Func End, Address: 0x2ea3d0, Func Offset: 0x170
}

