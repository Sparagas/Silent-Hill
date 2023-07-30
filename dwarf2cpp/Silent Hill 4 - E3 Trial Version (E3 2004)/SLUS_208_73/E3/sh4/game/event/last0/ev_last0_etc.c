typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct _anon2;
typedef struct _evBgCharData;
typedef struct _anon3;
typedef union _anon4;
typedef struct sgAnime;
typedef struct LastPoolSurface_PoolParam;

typedef sgIKSolveResult(*type_8)();
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(_anon2*, int, int, float*);
typedef void(*type_13)(sfObj*);
typedef void(*type_21)(sgAnime*, int);
typedef void(*type_22)(sfObj*);

typedef float type_0[5];
typedef float type_1[5];
typedef float type_2[4][5];
typedef float type_3[4];
typedef _anon4 type_4[10];
typedef float type_5[4][4];
typedef float type_6[4][2];
typedef float type_7[4];
typedef float type_10[4];
typedef _anon4 type_12[256];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef void* type_16[4];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef unsigned char type_23[4];

struct sfObj
{
	_anon4 fwork[256];
	_anon4* work;
	void(*func)(sfObj*);
	_anon4* work_pt0;
	_anon4* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon4* sys_work;
	_anon4* scene_work;
	_anon4* event_work;
	_anon4* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	float rot[5];
	float r[5];
	float q[4][5];
	LastPoolSurface_PoolParam stPool;
	sfObj* objPool;
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
	_anon4 dmy[10];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct _evBgCharData
{
	int model_id;
	int emt_id;
	int kage_id;
	int anim_id;
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

union _anon4
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

struct LastPoolSurface_PoolParam
{
	float BloodSpreadRate;
	float RingRadius;
	float RingSinkDir;
	float SplashRate;
};

float sg_vector_unit_x[4];
void(*sfObjFuncDummy)(sfObj*);

int ev_last0_ls02_toge_init(sfObj* obj);
int ev_last0_ls02_toge_exec(sfObj* obj);
int ev_last0_ls02_toge_draw(sfObj* obj);
int ev_last0_ls02_toge_end(sfObj* obj);
sfObj* ev_last0_ls02_toge_construct_for_demo();
void ev_last0_ls02_toge_destruct_for_demo(sfObj* obj);

// 
// Start address: 0x2d5780
int ev_last0_ls02_toge_init(sfObj* obj)
{
	int i;
	float s_toge[4];
	sfCharacter* chrToge;
	sgBone* bone;
	_anon0* wk;
	_evBgCharData dat;
	float CenterPos[4];
	int fDemo;
	// Line 101, Address: 0x2d5780, Func Offset: 0
	// Line 103, Address: 0x2d5784, Func Offset: 0x4
	// Line 101, Address: 0x2d5788, Func Offset: 0x8
	// Line 103, Address: 0x2d578c, Func Offset: 0xc
	// Line 101, Address: 0x2d5790, Func Offset: 0x10
	// Line 103, Address: 0x2d5794, Func Offset: 0x14
	// Line 101, Address: 0x2d5798, Func Offset: 0x18
	// Line 107, Address: 0x2d579c, Func Offset: 0x1c
	// Line 101, Address: 0x2d57a0, Func Offset: 0x20
	// Line 108, Address: 0x2d57ac, Func Offset: 0x2c
	// Line 101, Address: 0x2d57b0, Func Offset: 0x30
	// Line 103, Address: 0x2d57bc, Func Offset: 0x3c
	// Line 107, Address: 0x2d57c0, Func Offset: 0x40
	// Line 103, Address: 0x2d57c4, Func Offset: 0x44
	// Line 107, Address: 0x2d57c8, Func Offset: 0x48
	// Line 108, Address: 0x2d57d0, Func Offset: 0x50
	// Line 111, Address: 0x2d57dc, Func Offset: 0x5c
	// Line 109, Address: 0x2d57e0, Func Offset: 0x60
	// Line 111, Address: 0x2d57e4, Func Offset: 0x64
	// Line 113, Address: 0x2d57ec, Func Offset: 0x6c
	// Line 114, Address: 0x2d57f8, Func Offset: 0x78
	// Line 115, Address: 0x2d5808, Func Offset: 0x88
	// Line 116, Address: 0x2d5818, Func Offset: 0x98
	// Line 117, Address: 0x2d5824, Func Offset: 0xa4
	// Line 118, Address: 0x2d5830, Func Offset: 0xb0
	// Line 117, Address: 0x2d5834, Func Offset: 0xb4
	// Line 118, Address: 0x2d5838, Func Offset: 0xb8
	// Line 122, Address: 0x2d5844, Func Offset: 0xc4
	// Line 125, Address: 0x2d5850, Func Offset: 0xd0
	// Line 122, Address: 0x2d5854, Func Offset: 0xd4
	// Line 129, Address: 0x2d5858, Func Offset: 0xd8
	// Line 122, Address: 0x2d585c, Func Offset: 0xdc
	// Line 126, Address: 0x2d5860, Func Offset: 0xe0
	// Line 123, Address: 0x2d5864, Func Offset: 0xe4
	// Line 125, Address: 0x2d5868, Func Offset: 0xe8
	// Line 123, Address: 0x2d586c, Func Offset: 0xec
	// Line 126, Address: 0x2d5870, Func Offset: 0xf0
	// Line 123, Address: 0x2d5874, Func Offset: 0xf4
	// Line 127, Address: 0x2d5878, Func Offset: 0xf8
	// Line 129, Address: 0x2d587c, Func Offset: 0xfc
	// Line 133, Address: 0x2d5888, Func Offset: 0x108
	// Line 132, Address: 0x2d588c, Func Offset: 0x10c
	// Line 133, Address: 0x2d5890, Func Offset: 0x110
	// Func End, Address: 0x2d58b4, Func Offset: 0x134
}

// 
// Start address: 0x2d58c0
int ev_last0_ls02_toge_exec(sfObj* obj)
{
	int i;
	float r[4];
	sgBone* bone;
	sfCharacter* chrToge;
	float spd;
	_anon0* wk;
	// Line 135, Address: 0x2d58c0, Func Offset: 0
	// Line 142, Address: 0x2d58e8, Func Offset: 0x28
	// Line 144, Address: 0x2d58ec, Func Offset: 0x2c
	// Line 148, Address: 0x2d58f8, Func Offset: 0x38
	// Line 149, Address: 0x2d5908, Func Offset: 0x48
	// Line 150, Address: 0x2d5914, Func Offset: 0x54
	// Line 151, Address: 0x2d591c, Func Offset: 0x5c
	// Line 153, Address: 0x2d5928, Func Offset: 0x68
	// Line 154, Address: 0x2d5930, Func Offset: 0x70
	// Line 155, Address: 0x2d5970, Func Offset: 0xb0
	// Line 156, Address: 0x2d598c, Func Offset: 0xcc
	// Line 158, Address: 0x2d5990, Func Offset: 0xd0
	// Line 159, Address: 0x2d59a0, Func Offset: 0xe0
	// Line 160, Address: 0x2d59b4, Func Offset: 0xf4
	// Line 161, Address: 0x2d59c4, Func Offset: 0x104
	// Line 162, Address: 0x2d59d0, Func Offset: 0x110
	// Line 161, Address: 0x2d59d4, Func Offset: 0x114
	// Line 162, Address: 0x2d59d8, Func Offset: 0x118
	// Line 161, Address: 0x2d59dc, Func Offset: 0x11c
	// Line 162, Address: 0x2d59e0, Func Offset: 0x120
	// Line 163, Address: 0x2d59e8, Func Offset: 0x128
	// Line 173, Address: 0x2d59f4, Func Offset: 0x134
	// Line 174, Address: 0x2d5a58, Func Offset: 0x198
	// Line 175, Address: 0x2d5a64, Func Offset: 0x1a4
	// Line 179, Address: 0x2d5a68, Func Offset: 0x1a8
	// Line 178, Address: 0x2d5a70, Func Offset: 0x1b0
	// Line 179, Address: 0x2d5a74, Func Offset: 0x1b4
	// Func End, Address: 0x2d5a98, Func Offset: 0x1d8
}

// 
// Start address: 0x2d5aa0
int ev_last0_ls02_toge_draw(sfObj* obj)
{
	// Line 181, Address: 0x2d5aa0, Func Offset: 0
	// Line 182, Address: 0x2d5aa8, Func Offset: 0x8
	// Line 184, Address: 0x2d5ab0, Func Offset: 0x10
	// Line 183, Address: 0x2d5ab4, Func Offset: 0x14
	// Line 184, Address: 0x2d5ab8, Func Offset: 0x18
	// Func End, Address: 0x2d5ac0, Func Offset: 0x20
}

// 
// Start address: 0x2d5ac0
int ev_last0_ls02_toge_end(sfObj* obj)
{
	// Line 186, Address: 0x2d5ac0, Func Offset: 0
	// Line 187, Address: 0x2d5ac8, Func Offset: 0x8
	// Line 189, Address: 0x2d5ad0, Func Offset: 0x10
	// Line 188, Address: 0x2d5ad4, Func Offset: 0x14
	// Line 189, Address: 0x2d5ad8, Func Offset: 0x18
	// Func End, Address: 0x2d5ae0, Func Offset: 0x20
}

// 
// Start address: 0x2d5ae0
sfObj* ev_last0_ls02_toge_construct_for_demo()
{
	sfObj* obj;
	_anon1* fig;
	// Line 193, Address: 0x2d5ae0, Func Offset: 0
	// Line 196, Address: 0x2d5ae8, Func Offset: 0x8
	// Line 197, Address: 0x2d5af4, Func Offset: 0x14
	// Line 198, Address: 0x2d5b04, Func Offset: 0x24
	// Line 200, Address: 0x2d5b18, Func Offset: 0x38
	// Line 201, Address: 0x2d5b20, Func Offset: 0x40
	// Line 203, Address: 0x2d5b28, Func Offset: 0x48
	// Line 204, Address: 0x2d5b30, Func Offset: 0x50
	// Line 207, Address: 0x2d5b34, Func Offset: 0x54
	// Line 204, Address: 0x2d5b38, Func Offset: 0x58
	// Line 207, Address: 0x2d5b3c, Func Offset: 0x5c
	// Line 208, Address: 0x2d5b48, Func Offset: 0x68
	// Line 209, Address: 0x2d5b50, Func Offset: 0x70
	// Func End, Address: 0x2d5b60, Func Offset: 0x80
}

// 
// Start address: 0x2d5b60
void ev_last0_ls02_toge_destruct_for_demo(sfObj* obj)
{
	// Line 213, Address: 0x2d5b60, Func Offset: 0
	// Line 214, Address: 0x2d5b6c, Func Offset: 0xc
	// Line 215, Address: 0x2d5b74, Func Offset: 0x14
	// Line 217, Address: 0x2d5b7c, Func Offset: 0x1c
	// Func End, Address: 0x2d5b8c, Func Offset: 0x2c
}

