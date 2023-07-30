typedef struct _anon0;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _EventInst;
typedef struct sfCharacter;
typedef struct _SubtitleMessageData;
typedef union _anon2;
typedef struct _anon3;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon4;
typedef struct _anon5;

typedef void(*type_0)(_anon4*, int, int, float*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sgAnime*, int);
typedef int(*type_7)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(int);
typedef void(*type_13)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_27)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef void(*type_30)(sfObj*);
typedef sgIKSolveResult(*type_31)();

typedef void* type_1[4];
typedef float type_4[4];
typedef unsigned char type_5[4];
typedef sfObj* type_6[30];
typedef _anon2 type_8[256];
typedef _SubtitleMessageData type_12[2];
typedef float type_14[4];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_19[4];
typedef float type_21[4];
typedef float type_22[4][4];
typedef unsigned char type_23[4];
typedef float type_25[4][2];
typedef float type_26[1];
typedef int type_28[1];
typedef _anon2 type_32[4];
typedef _SubtitleMessageData type_33[2];
typedef _anon3 type_34[0];

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

struct _anon1
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon5 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon2 val[4];
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

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon4*, int, int, float*);
	int equip_flag;
};

int super_flag;
_SubtitleMessageData phenom_phone_message_00[2];
_SubtitleMessageData phenom_phone_message_01[2];
_EventDriver phenom_phone_00;
_EventDriver phenom_phone_01;
int disp_super_stop;
int disp_super;
int sd_phone;
int stream_step;
void(*PhenomPhoneDestruct)(sfObj*);
void(*PhenomDebugDrawFunc)(sfObj*);
_anon3 phenom_data[0];
void(*PhenomPhoneMain)(sfObj*);

int phenom_phone_init(sfObj* obj);
int phenom_phone_exec(sfObj* obj);
void PhenomPhoneMain(sfObj* obj);
void PhenomPhoneDestruct();
void PhenomPhoneInit(int n);

// 
// Start address: 0x3376a0
int phenom_phone_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 59, Address: 0x3376a0, Func Offset: 0
	// Line 60, Address: 0x3376a8, Func Offset: 0x8
	// Line 62, Address: 0x3376b0, Func Offset: 0x10
	// Line 65, Address: 0x3376b8, Func Offset: 0x18
	// Line 68, Address: 0x3376c4, Func Offset: 0x24
	// Line 67, Address: 0x3376c8, Func Offset: 0x28
	// Line 68, Address: 0x3376cc, Func Offset: 0x2c
	// Func End, Address: 0x3376d4, Func Offset: 0x34
}

// 
// Start address: 0x3376e0
int phenom_phone_exec(sfObj* obj)
{
	int ret;
	_EventInst* evinst;
	_anon2 val;
	// Line 72, Address: 0x3376e0, Func Offset: 0
	// Line 75, Address: 0x3376f0, Func Offset: 0x10
	// Line 76, Address: 0x3376f8, Func Offset: 0x18
	// Line 79, Address: 0x337718, Func Offset: 0x38
	// Line 85, Address: 0x337738, Func Offset: 0x58
	// Line 86, Address: 0x337740, Func Offset: 0x60
	// Line 88, Address: 0x337748, Func Offset: 0x68
	// Line 89, Address: 0x337750, Func Offset: 0x70
	// Line 91, Address: 0x337758, Func Offset: 0x78
	// Line 92, Address: 0x33775c, Func Offset: 0x7c
	// Line 93, Address: 0x337768, Func Offset: 0x88
	// Line 95, Address: 0x337774, Func Offset: 0x94
	// Line 97, Address: 0x337778, Func Offset: 0x98
	// Line 98, Address: 0x33777c, Func Offset: 0x9c
	// Func End, Address: 0x337790, Func Offset: 0xb0
}

// 
// Start address: 0x337790
void PhenomPhoneMain(sfObj* obj)
{
	_anon1* ppptr;
	_anon0* pptr;
	float angle;
	// Line 164, Address: 0x337790, Func Offset: 0
	// Line 169, Address: 0x3377a8, Func Offset: 0x18
	// Line 170, Address: 0x3377ac, Func Offset: 0x1c
	// Line 174, Address: 0x3377b4, Func Offset: 0x24
	// Line 178, Address: 0x3377e0, Func Offset: 0x50
	// Line 180, Address: 0x337808, Func Offset: 0x78
	// Line 181, Address: 0x337824, Func Offset: 0x94
	// Line 182, Address: 0x33782c, Func Offset: 0x9c
	// Line 186, Address: 0x337830, Func Offset: 0xa0
	// Line 187, Address: 0x337838, Func Offset: 0xa8
	// Line 188, Address: 0x337840, Func Offset: 0xb0
	// Line 190, Address: 0x337848, Func Offset: 0xb8
	// Line 191, Address: 0x337854, Func Offset: 0xc4
	// Line 192, Address: 0x337860, Func Offset: 0xd0
	// Line 193, Address: 0x33786c, Func Offset: 0xdc
	// Line 194, Address: 0x337878, Func Offset: 0xe8
	// Line 195, Address: 0x337880, Func Offset: 0xf0
	// Line 209, Address: 0x337888, Func Offset: 0xf8
	// Line 211, Address: 0x337898, Func Offset: 0x108
	// Line 213, Address: 0x3378a0, Func Offset: 0x110
	// Line 215, Address: 0x3378a8, Func Offset: 0x118
	// Line 216, Address: 0x3378b8, Func Offset: 0x128
	// Line 217, Address: 0x3378bc, Func Offset: 0x12c
	// Line 219, Address: 0x3378c4, Func Offset: 0x134
	// Line 220, Address: 0x3378cc, Func Offset: 0x13c
	// Line 221, Address: 0x3378d0, Func Offset: 0x140
	// Line 222, Address: 0x3378d8, Func Offset: 0x148
	// Line 223, Address: 0x3378e4, Func Offset: 0x154
	// Line 224, Address: 0x3378f0, Func Offset: 0x160
	// Line 225, Address: 0x3378fc, Func Offset: 0x16c
	// Line 226, Address: 0x337908, Func Offset: 0x178
	// Line 227, Address: 0x337910, Func Offset: 0x180
	// Line 253, Address: 0x337918, Func Offset: 0x188
	// Line 255, Address: 0x337928, Func Offset: 0x198
	// Line 257, Address: 0x337930, Func Offset: 0x1a0
	// Line 259, Address: 0x337938, Func Offset: 0x1a8
	// Line 260, Address: 0x337948, Func Offset: 0x1b8
	// Line 261, Address: 0x33794c, Func Offset: 0x1bc
	// Line 273, Address: 0x337950, Func Offset: 0x1c0
	// Line 274, Address: 0x33795c, Func Offset: 0x1cc
	// Line 275, Address: 0x337984, Func Offset: 0x1f4
	// Line 276, Address: 0x337988, Func Offset: 0x1f8
	// Line 277, Address: 0x33798c, Func Offset: 0x1fc
	// Line 278, Address: 0x33799c, Func Offset: 0x20c
	// Line 279, Address: 0x3379ac, Func Offset: 0x21c
	// Line 280, Address: 0x3379b4, Func Offset: 0x224
	// Line 281, Address: 0x3379b8, Func Offset: 0x228
	// Line 282, Address: 0x3379c8, Func Offset: 0x238
	// Line 283, Address: 0x3379d0, Func Offset: 0x240
	// Line 284, Address: 0x3379d8, Func Offset: 0x248
	// Line 285, Address: 0x3379e8, Func Offset: 0x258
	// Line 291, Address: 0x3379f0, Func Offset: 0x260
	// Line 296, Address: 0x337a00, Func Offset: 0x270
	// Line 299, Address: 0x337a08, Func Offset: 0x278
	// Line 301, Address: 0x337a10, Func Offset: 0x280
	// Line 302, Address: 0x337a1c, Func Offset: 0x28c
	// Line 324, Address: 0x337a2c, Func Offset: 0x29c
	// Line 325, Address: 0x337a34, Func Offset: 0x2a4
	// Line 326, Address: 0x337a38, Func Offset: 0x2a8
	// Line 327, Address: 0x337a3c, Func Offset: 0x2ac
	// Line 330, Address: 0x337a4c, Func Offset: 0x2bc
	// Line 334, Address: 0x337a58, Func Offset: 0x2c8
	// Func End, Address: 0x337a70, Func Offset: 0x2e0
}

// 
// Start address: 0x337a70
void PhenomPhoneDestruct()
{
	// Line 339, Address: 0x337a70, Func Offset: 0
	// Line 340, Address: 0x337a74, Func Offset: 0x4
	// Line 339, Address: 0x337a78, Func Offset: 0x8
	// Line 340, Address: 0x337a7c, Func Offset: 0xc
	// Line 342, Address: 0x337a88, Func Offset: 0x18
	// Line 345, Address: 0x337a94, Func Offset: 0x24
	// Line 346, Address: 0x337a98, Func Offset: 0x28
	// Func End, Address: 0x337aa4, Func Offset: 0x34
}

// 
// Start address: 0x337ab0
void PhenomPhoneInit(int n)
{
	_anon1* ppptr;
	sfObj* optr;
	// Line 351, Address: 0x337ab0, Func Offset: 0
	// Line 356, Address: 0x337ab4, Func Offset: 0x4
	// Line 351, Address: 0x337ab8, Func Offset: 0x8
	// Line 356, Address: 0x337ac4, Func Offset: 0x14
	// Line 357, Address: 0x337acc, Func Offset: 0x1c
	// Line 358, Address: 0x337ad4, Func Offset: 0x24
	// Line 359, Address: 0x337adc, Func Offset: 0x2c
	// Line 360, Address: 0x337ae4, Func Offset: 0x34
	// Line 362, Address: 0x337ae8, Func Offset: 0x38
	// Line 363, Address: 0x337af4, Func Offset: 0x44
	// Line 364, Address: 0x337b04, Func Offset: 0x54
	// Line 366, Address: 0x337b14, Func Offset: 0x64
	// Line 365, Address: 0x337b18, Func Offset: 0x68
	// Line 366, Address: 0x337b1c, Func Offset: 0x6c
	// Line 369, Address: 0x337b38, Func Offset: 0x88
	// Line 367, Address: 0x337b3c, Func Offset: 0x8c
	// Line 369, Address: 0x337b40, Func Offset: 0x90
	// Line 370, Address: 0x337b48, Func Offset: 0x98
	// Line 372, Address: 0x337b58, Func Offset: 0xa8
	// Line 373, Address: 0x337b68, Func Offset: 0xb8
	// Func End, Address: 0x337b7c, Func Offset: 0xcc
}

