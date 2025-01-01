typedef struct _anon0;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon5;

typedef void(*type_4)(sgAnime*, int);
typedef void(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(_anon3*, int, int, float*);
typedef void(*type_11)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef sgIKSolveResult(*type_20)();

typedef void* type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef sfObj* type_5[30];
typedef unsigned char type_6[4];
typedef _anon2 type_7[256];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef float type_17[1];
typedef int type_18[1];
typedef float type_19[4][2];
typedef float type_21[4];

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
	float l_hand;
	float s_hand;
	int frame;
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

int clock_last_frame;
float clock_last_short;
float clock_last_long;
float cloakc_first_short[4];
float cloakc_first_long[4];
float sg_vector_unit_x[4];
void(*PhenomDebugDrawFunc)(sfObj*);
float PhenomNullPos[4];
void(*PhenomClockMain)(sfObj*);

void PhenomClockTimeWhenSave(_anon1* sc);
void PhenomClockTimeWhenLoad(_anon1* sc);
void PhenomClockGetFirstHand(sfCharacter* chara);
void PhenomClockHand(sfCharacter* chara, int n, float r);
void PhenomClockSpeed(sfCharacter* chara, float s);
void PhenomClockMain(sfObj* obj);
void PhenomClockInit(int n);

// 
// Start address: 0x2b3c10
void PhenomClockTimeWhenSave(_anon1* sc)
{
	// Line 44, Address: 0x2b3c10, Func Offset: 0
	// Line 45, Address: 0x2b3c1c, Func Offset: 0xc
	// Line 46, Address: 0x2b3c28, Func Offset: 0x18
	// Line 47, Address: 0x2b3c30, Func Offset: 0x20
	// Func End, Address: 0x2b3c38, Func Offset: 0x28
}

// 
// Start address: 0x2b3c40
void PhenomClockTimeWhenLoad(_anon1* sc)
{
	// Line 53, Address: 0x2b3c40, Func Offset: 0
	// Line 54, Address: 0x2b3c4c, Func Offset: 0xc
	// Line 55, Address: 0x2b3c58, Func Offset: 0x18
	// Line 56, Address: 0x2b3c60, Func Offset: 0x20
	// Func End, Address: 0x2b3c68, Func Offset: 0x28
}

// 
// Start address: 0x2b3c70
void PhenomClockGetFirstHand(sfCharacter* chara)
{
	sgBone* bone;
	// Line 61, Address: 0x2b3c70, Func Offset: 0
	// Line 64, Address: 0x2b3c7c, Func Offset: 0xc
	// Line 65, Address: 0x2b3c90, Func Offset: 0x20
	// Line 66, Address: 0x2b3ca0, Func Offset: 0x30
	// Line 67, Address: 0x2b3cb4, Func Offset: 0x44
	// Line 68, Address: 0x2b3cc4, Func Offset: 0x54
	// Func End, Address: 0x2b3cd4, Func Offset: 0x64
}

// 
// Start address: 0x2b3ce0
void PhenomClockHand(sfCharacter* chara, int n, float r)
{
	sgBone* bone;
	float rot[4];
	float rot1[4];
	// Line 73, Address: 0x2b3ce0, Func Offset: 0
	// Line 78, Address: 0x2b3cf8, Func Offset: 0x18
	// Line 81, Address: 0x2b3d10, Func Offset: 0x30
	// Line 82, Address: 0x2b3d1c, Func Offset: 0x3c
	// Line 83, Address: 0x2b3d28, Func Offset: 0x48
	// Line 85, Address: 0x2b3d30, Func Offset: 0x50
	// Line 88, Address: 0x2b3d40, Func Offset: 0x60
	// Line 89, Address: 0x2b3d54, Func Offset: 0x74
	// Line 91, Address: 0x2b3d64, Func Offset: 0x84
	// Line 92, Address: 0x2b3d70, Func Offset: 0x90
	// Func End, Address: 0x2b3d88, Func Offset: 0xa8
}

// 
// Start address: 0x2b3d90
void PhenomClockSpeed(sfCharacter* chara, float s)
{
	sgAnime* anm;
	// Line 97, Address: 0x2b3d90, Func Offset: 0
	// Line 100, Address: 0x2b3d9c, Func Offset: 0xc
	// Line 101, Address: 0x2b3da4, Func Offset: 0x14
	// Line 102, Address: 0x2b3db0, Func Offset: 0x20
	// Func End, Address: 0x2b3dc0, Func Offset: 0x30
}

// 
// Start address: 0x2b3dc0
void PhenomClockMain(sfObj* obj)
{
	_anon0* ppptr;
	_anon5* pptr;
	int level;
	sfCharacter* chara;
	float speed;
	float speed2;
	// Line 107, Address: 0x2b3dc0, Func Offset: 0
	// Line 114, Address: 0x2b3de4, Func Offset: 0x24
	// Line 115, Address: 0x2b3de8, Func Offset: 0x28
	// Line 116, Address: 0x2b3df0, Func Offset: 0x30
	// Line 121, Address: 0x2b3df4, Func Offset: 0x34
	// Line 116, Address: 0x2b3df8, Func Offset: 0x38
	// Line 121, Address: 0x2b3dfc, Func Offset: 0x3c
	// Line 116, Address: 0x2b3e00, Func Offset: 0x40
	// Line 121, Address: 0x2b3e04, Func Offset: 0x44
	// Line 123, Address: 0x2b3e28, Func Offset: 0x68
	// Line 124, Address: 0x2b3e30, Func Offset: 0x70
	// Line 126, Address: 0x2b3e38, Func Offset: 0x78
	// Line 124, Address: 0x2b3e3c, Func Offset: 0x7c
	// Line 125, Address: 0x2b3e40, Func Offset: 0x80
	// Line 126, Address: 0x2b3e44, Func Offset: 0x84
	// Line 127, Address: 0x2b3e4c, Func Offset: 0x8c
	// Line 128, Address: 0x2b3e5c, Func Offset: 0x9c
	// Line 129, Address: 0x2b3e6c, Func Offset: 0xac
	// Line 130, Address: 0x2b3e74, Func Offset: 0xb4
	// Line 131, Address: 0x2b3e78, Func Offset: 0xb8
	// Line 132, Address: 0x2b3e88, Func Offset: 0xc8
	// Line 133, Address: 0x2b3e90, Func Offset: 0xd0
	// Line 134, Address: 0x2b3eb0, Func Offset: 0xf0
	// Line 137, Address: 0x2b3ebc, Func Offset: 0xfc
	// Line 138, Address: 0x2b3edc, Func Offset: 0x11c
	// Line 139, Address: 0x2b3efc, Func Offset: 0x13c
	// Line 144, Address: 0x2b3f08, Func Offset: 0x148
	// Line 143, Address: 0x2b3f10, Func Offset: 0x150
	// Line 144, Address: 0x2b3f14, Func Offset: 0x154
	// Line 145, Address: 0x2b3f1c, Func Offset: 0x15c
	// Line 144, Address: 0x2b3f20, Func Offset: 0x160
	// Line 145, Address: 0x2b3f24, Func Offset: 0x164
	// Line 144, Address: 0x2b3f2c, Func Offset: 0x16c
	// Line 145, Address: 0x2b3f30, Func Offset: 0x170
	// Line 146, Address: 0x2b3f34, Func Offset: 0x174
	// Line 145, Address: 0x2b3f3c, Func Offset: 0x17c
	// Line 146, Address: 0x2b3f44, Func Offset: 0x184
	// Line 147, Address: 0x2b3f54, Func Offset: 0x194
	// Line 148, Address: 0x2b3f58, Func Offset: 0x198
	// Line 149, Address: 0x2b3f64, Func Offset: 0x1a4
	// Line 150, Address: 0x2b3f78, Func Offset: 0x1b8
	// Line 151, Address: 0x2b3f8c, Func Offset: 0x1cc
	// Line 152, Address: 0x2b3f94, Func Offset: 0x1d4
	// Line 154, Address: 0x2b3f98, Func Offset: 0x1d8
	// Line 155, Address: 0x2b3fa4, Func Offset: 0x1e4
	// Line 156, Address: 0x2b3fbc, Func Offset: 0x1fc
	// Line 157, Address: 0x2b3fc8, Func Offset: 0x208
	// Line 158, Address: 0x2b3fdc, Func Offset: 0x21c
	// Line 162, Address: 0x2b3ff0, Func Offset: 0x230
	// Line 164, Address: 0x2b4000, Func Offset: 0x240
	// Line 170, Address: 0x2b4018, Func Offset: 0x258
	// Func End, Address: 0x2b403c, Func Offset: 0x27c
}

// 
// Start address: 0x2b4040
void PhenomClockInit(int n)
{
	_anon0* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 174, Address: 0x2b4040, Func Offset: 0
	// Line 179, Address: 0x2b4054, Func Offset: 0x14
	// Line 180, Address: 0x2b4060, Func Offset: 0x20
	// Line 181, Address: 0x2b4070, Func Offset: 0x30
	// Line 184, Address: 0x2b4080, Func Offset: 0x40
	// Line 182, Address: 0x2b4084, Func Offset: 0x44
	// Line 184, Address: 0x2b4088, Func Offset: 0x48
	// Line 187, Address: 0x2b4094, Func Offset: 0x54
	// Line 188, Address: 0x2b40a4, Func Offset: 0x64
	// Line 190, Address: 0x2b40b4, Func Offset: 0x74
	// Line 191, Address: 0x2b40b8, Func Offset: 0x78
	// Line 193, Address: 0x2b40d8, Func Offset: 0x98
	// Line 195, Address: 0x2b40e4, Func Offset: 0xa4
	// Line 196, Address: 0x2b40ec, Func Offset: 0xac
	// Line 198, Address: 0x2b40fc, Func Offset: 0xbc
	// Line 199, Address: 0x2b4104, Func Offset: 0xc4
	// Func End, Address: 0x2b411c, Func Offset: 0xdc
}

