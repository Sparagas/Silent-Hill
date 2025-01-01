typedef struct _anon0;
typedef struct sfCharacter;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sgSVModel;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon5;

typedef void(*type_4)(sgAnime*, int);
typedef void(*type_8)(int);
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(_anon3*, int, int, float*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef sgIKSolveResult(*type_21)();

typedef void* type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef sfObj* type_5[30];
typedef unsigned char type_6[4];
typedef _anon2 type_7[256];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef float type_20[4][2];
typedef float type_22[4];
typedef _anon1 type_23[0];

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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon4 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon1
{
	void(*func)(int);
	float pos0[4];
	float spot[4];
	int para0;
	int para1;
	int rad;
	int room_no;
	int timing;
	char* name;
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

struct _anon5
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
};

float PhenomNullPos[4];
void(*PhenomDebugDrawFunc)(sfObj*);
_anon1 phenom_data[0];
void(*PhenomTvMain)(sfObj*);

void PhenomTvMain(sfObj* obj);
void PhenomTvInit(int n);

// 
// Start address: 0x2b1a70
void PhenomTvMain(sfObj* obj)
{
	_anon0* ppptr;
	_anon5* pptr;
	float last_pos[4];
	int level;
	int stat;
	sfCharacter* chara;
	sgAnime* anm;
	// Line 58, Address: 0x2b1a70, Func Offset: 0
	// Line 66, Address: 0x2b1a98, Func Offset: 0x28
	// Line 67, Address: 0x2b1a9c, Func Offset: 0x2c
	// Line 68, Address: 0x2b1aa4, Func Offset: 0x34
	// Line 69, Address: 0x2b1aa8, Func Offset: 0x38
	// Line 71, Address: 0x2b1aac, Func Offset: 0x3c
	// Line 73, Address: 0x2b1ab0, Func Offset: 0x40
	// Line 68, Address: 0x2b1ab4, Func Offset: 0x44
	// Line 73, Address: 0x2b1ab8, Func Offset: 0x48
	// Line 68, Address: 0x2b1ac0, Func Offset: 0x50
	// Line 73, Address: 0x2b1ac4, Func Offset: 0x54
	// Line 74, Address: 0x2b1acc, Func Offset: 0x5c
	// Line 76, Address: 0x2b1ad8, Func Offset: 0x68
	// Line 78, Address: 0x2b1b00, Func Offset: 0x90
	// Line 79, Address: 0x2b1b18, Func Offset: 0xa8
	// Line 81, Address: 0x2b1b20, Func Offset: 0xb0
	// Line 82, Address: 0x2b1b30, Func Offset: 0xc0
	// Line 83, Address: 0x2b1b38, Func Offset: 0xc8
	// Line 85, Address: 0x2b1b60, Func Offset: 0xf0
	// Line 86, Address: 0x2b1b8c, Func Offset: 0x11c
	// Line 87, Address: 0x2b1b9c, Func Offset: 0x12c
	// Line 88, Address: 0x2b1ba0, Func Offset: 0x130
	// Line 89, Address: 0x2b1bb4, Func Offset: 0x144
	// Line 90, Address: 0x2b1bbc, Func Offset: 0x14c
	// Line 98, Address: 0x2b1bc4, Func Offset: 0x154
	// Line 99, Address: 0x2b1bc8, Func Offset: 0x158
	// Line 100, Address: 0x2b1c14, Func Offset: 0x1a4
	// Line 101, Address: 0x2b1c18, Func Offset: 0x1a8
	// Line 102, Address: 0x2b1c28, Func Offset: 0x1b8
	// Line 104, Address: 0x2b1c30, Func Offset: 0x1c0
	// Line 105, Address: 0x2b1c40, Func Offset: 0x1d0
	// Line 107, Address: 0x2b1c48, Func Offset: 0x1d8
	// Line 108, Address: 0x2b1c58, Func Offset: 0x1e8
	// Line 110, Address: 0x2b1c60, Func Offset: 0x1f0
	// Line 113, Address: 0x2b1c70, Func Offset: 0x200
	// Line 114, Address: 0x2b1c78, Func Offset: 0x208
	// Line 116, Address: 0x2b1c80, Func Offset: 0x210
	// Line 117, Address: 0x2b1cac, Func Offset: 0x23c
	// Line 118, Address: 0x2b1cbc, Func Offset: 0x24c
	// Line 122, Address: 0x2b1cc0, Func Offset: 0x250
	// Line 123, Address: 0x2b1ccc, Func Offset: 0x25c
	// Line 125, Address: 0x2b1d0c, Func Offset: 0x29c
	// Line 126, Address: 0x2b1d14, Func Offset: 0x2a4
	// Line 128, Address: 0x2b1d18, Func Offset: 0x2a8
	// Line 129, Address: 0x2b1d24, Func Offset: 0x2b4
	// Line 133, Address: 0x2b1d40, Func Offset: 0x2d0
	// Line 134, Address: 0x2b1d4c, Func Offset: 0x2dc
	// Line 139, Address: 0x2b1d5c, Func Offset: 0x2ec
	// Func End, Address: 0x2b1d84, Func Offset: 0x314
}

// 
// Start address: 0x2b1d90
void PhenomTvInit(int n)
{
	_anon0* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 144, Address: 0x2b1d90, Func Offset: 0
	// Line 149, Address: 0x2b1da4, Func Offset: 0x14
	// Line 150, Address: 0x2b1db0, Func Offset: 0x20
	// Line 151, Address: 0x2b1dc0, Func Offset: 0x30
	// Line 153, Address: 0x2b1dd0, Func Offset: 0x40
	// Line 152, Address: 0x2b1dd4, Func Offset: 0x44
	// Line 153, Address: 0x2b1dd8, Func Offset: 0x48
	// Line 156, Address: 0x2b1df4, Func Offset: 0x64
	// Line 157, Address: 0x2b1e04, Func Offset: 0x74
	// Line 160, Address: 0x2b1e14, Func Offset: 0x84
	// Line 159, Address: 0x2b1e18, Func Offset: 0x88
	// Line 160, Address: 0x2b1e1c, Func Offset: 0x8c
	// Line 161, Address: 0x2b1e3c, Func Offset: 0xac
	// Line 163, Address: 0x2b1e48, Func Offset: 0xb8
	// Line 164, Address: 0x2b1e58, Func Offset: 0xc8
	// Func End, Address: 0x2b1e70, Func Offset: 0xe0
}

