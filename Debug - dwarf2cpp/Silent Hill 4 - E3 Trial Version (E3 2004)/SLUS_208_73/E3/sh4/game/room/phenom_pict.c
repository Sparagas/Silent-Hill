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
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(_anon2*, int, int, float*);
typedef sgIKSolveResult(*type_20)();

typedef void* type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef sfObj* type_6[30];
typedef unsigned char type_7[4];
typedef _anon1 type_8[256];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef float type_19[4][2];
typedef float type_21[4];

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
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon3
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
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

void(*PhenomPictDraw)(sfObj*);
float PhenomNullPos[4];
void(*PhenomPictMain)(sfObj*);

void PhenomPictDraw(sfObj* obj);
void PhenomPictMain(sfObj* obj);
void PhenomPictInit(int n);

// 
// Start address: 0x2bd270
void PhenomPictDraw(sfObj* obj)
{
	_anon0* ppptr;
	_anon3* pptr;
	sfCharacter* chara;
	int level;
	int alpha;
	// Line 32, Address: 0x2bd270, Func Offset: 0
	// Line 40, Address: 0x2bd28c, Func Offset: 0x1c
	// Line 41, Address: 0x2bd290, Func Offset: 0x20
	// Line 43, Address: 0x2bd298, Func Offset: 0x28
	// Line 46, Address: 0x2bd29c, Func Offset: 0x2c
	// Line 43, Address: 0x2bd2a0, Func Offset: 0x30
	// Line 46, Address: 0x2bd2a4, Func Offset: 0x34
	// Line 43, Address: 0x2bd2a8, Func Offset: 0x38
	// Line 46, Address: 0x2bd2ac, Func Offset: 0x3c
	// Line 50, Address: 0x2bd2b4, Func Offset: 0x44
	// Line 51, Address: 0x2bd2d4, Func Offset: 0x64
	// Line 50, Address: 0x2bd2d8, Func Offset: 0x68
	// Line 51, Address: 0x2bd2e0, Func Offset: 0x70
	// Line 52, Address: 0x2bd2e8, Func Offset: 0x78
	// Line 53, Address: 0x2bd30c, Func Offset: 0x9c
	// Line 54, Address: 0x2bd310, Func Offset: 0xa0
	// Line 55, Address: 0x2bd324, Func Offset: 0xb4
	// Line 56, Address: 0x2bd330, Func Offset: 0xc0
	// Line 57, Address: 0x2bd33c, Func Offset: 0xcc
	// Line 59, Address: 0x2bd364, Func Offset: 0xf4
	// Line 60, Address: 0x2bd36c, Func Offset: 0xfc
	// Line 61, Address: 0x2bd378, Func Offset: 0x108
	// Line 63, Address: 0x2bd384, Func Offset: 0x114
	// Line 64, Address: 0x2bd388, Func Offset: 0x118
	// Line 65, Address: 0x2bd398, Func Offset: 0x128
	// Line 70, Address: 0x2bd3a8, Func Offset: 0x138
	// Line 72, Address: 0x2bd3bc, Func Offset: 0x14c
	// Line 74, Address: 0x2bd3c8, Func Offset: 0x158
	// Line 76, Address: 0x2bd3d0, Func Offset: 0x160
	// Line 77, Address: 0x2bd3d8, Func Offset: 0x168
	// Line 80, Address: 0x2bd3e0, Func Offset: 0x170
	// Line 82, Address: 0x2bd3f0, Func Offset: 0x180
	// Line 84, Address: 0x2bd3f8, Func Offset: 0x188
	// Func End, Address: 0x2bd414, Func Offset: 0x1a4
}

// 
// Start address: 0x2bd420
void PhenomPictMain(sfObj* obj)
{
	_anon0* ppptr;
	_anon3* pptr;
	// Line 89, Address: 0x2bd420, Func Offset: 0
	// Line 95, Address: 0x2bd434, Func Offset: 0x14
	// Line 96, Address: 0x2bd438, Func Offset: 0x18
	// Line 100, Address: 0x2bd440, Func Offset: 0x20
	// Line 104, Address: 0x2bd468, Func Offset: 0x48
	// Line 105, Address: 0x2bd484, Func Offset: 0x64
	// Line 106, Address: 0x2bd488, Func Offset: 0x68
	// Line 107, Address: 0x2bd4a4, Func Offset: 0x84
	// Line 108, Address: 0x2bd4ac, Func Offset: 0x8c
	// Line 109, Address: 0x2bd4b0, Func Offset: 0x90
	// Line 110, Address: 0x2bd4bc, Func Offset: 0x9c
	// Line 111, Address: 0x2bd4c0, Func Offset: 0xa0
	// Line 112, Address: 0x2bd4c8, Func Offset: 0xa8
	// Line 123, Address: 0x2bd4d0, Func Offset: 0xb0
	// Line 125, Address: 0x2bd4d4, Func Offset: 0xb4
	// Line 126, Address: 0x2bd4d8, Func Offset: 0xb8
	// Func End, Address: 0x2bd4ec, Func Offset: 0xcc
}

// 
// Start address: 0x2bd4f0
void PhenomPictInit(int n)
{
	_anon0* ppptr;
	sfObj* optr;
	// Line 131, Address: 0x2bd4f0, Func Offset: 0
	// Line 136, Address: 0x2bd504, Func Offset: 0x14
	// Line 137, Address: 0x2bd510, Func Offset: 0x20
	// Line 138, Address: 0x2bd520, Func Offset: 0x30
	// Line 140, Address: 0x2bd530, Func Offset: 0x40
	// Line 139, Address: 0x2bd534, Func Offset: 0x44
	// Line 140, Address: 0x2bd538, Func Offset: 0x48
	// Line 143, Address: 0x2bd544, Func Offset: 0x54
	// Line 144, Address: 0x2bd554, Func Offset: 0x64
	// Line 147, Address: 0x2bd564, Func Offset: 0x74
	// Line 148, Address: 0x2bd584, Func Offset: 0x94
	// Func End, Address: 0x2bd59c, Func Offset: 0xac
}

