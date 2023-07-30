typedef struct sfCharacter;
typedef struct _anon0;
typedef struct sfObj;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _EventObjWorkMemoItem;
typedef struct _EventInst;
typedef struct _EventObjWorkAutoAction;
typedef struct sgAnime;
typedef struct _EventDriver;
typedef union _anon2;
typedef struct sgSVModel;
typedef struct _EventCtrlLink;
typedef struct _EventController;
typedef struct _EventHitWork;
typedef struct _anon3;

typedef void(*type_1)(_anon0*, int, int, float*);
typedef int(*type_2)(sfObj*);
typedef sgIKSolveResult(*type_5)();
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef void(*type_14)(sgAnime*, int);
typedef int(*type_15)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef int(*type_23)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef void(*type_30)(sfObj*);
typedef void(*type_33)(sfObj*);

typedef float type_0[4];
typedef int(*type_3)(sfObj*)[4];
typedef float type_4[4][2];
typedef float type_6[4];
typedef void* type_10[4];
typedef _anon2 type_12[23];
typedef short type_17[2];
typedef unsigned short type_18[2];
typedef char type_20[4];
typedef unsigned char type_21[4];
typedef _anon2 type_22[256];
typedef _anon2 type_24[4];
typedef int(*type_25)(sfObj*)[2];
typedef float type_26[4];
typedef float type_27[4][4];
typedef float type_29[1];
typedef unsigned char type_31[4];
typedef int type_32[1];

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon3 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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
	_anon2 dmy[23];
};

struct _EventObjWorkMemoItem
{
	_EventController evctrl;
	_EventHitWork* evhit;
	_EventObjWorkAutoAction aact;
	short item_id;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _EventObjWorkAutoAction
{
	float pos[4];
	short step;
	short cancel;
	float now_rot;
	float trg_rot;
	float rot_spd;
	short matchless;
	short sitdown;
	short timer;
	char end;
	char subject;
	char rot_msg;
	char sit_msg;
	char after_event_exec;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _EventCtrlLink
{
	_EventCtrlLink* prev;
	_EventCtrlLink* next;
	void* evctrl;
};

struct _EventController
{
	_EventDriver* evdriver;
	_EventInst evinst;
	sfObj* obj;
	_EventCtrlLink evlink;
	short step;
	short loadstep;
	unsigned int* loadfile;
	unsigned char active;
	unsigned char loadend;
	unsigned char exec_enable;
	short fd_obj_type;
};

struct _EventHitWork
{
	_EventDriver* evdriver;
	sfObj* obj;
	_EventHitWork* prev;
	_EventHitWork* next;
	float pos[4];
	short setlevel;
	short item_id;
	short item_serial_no;
	float item_quat[4];
	sfCharacter* item_character;
	short is_enforce_item;
	void* enforce_item_work;
};

struct _anon3
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

int(*memo_func)(sfObj*)[4];
int(*memo_subject_func)(sfObj*)[2];
int(*functbl)(sfObj*);
int end_ret;
sfObj* now_obj;
int(*textevent_func_event_exec)(sfObj*);

int memo_func_rot(sfObj* obj);
void MemoItemInit(sfObj* obj);
void MemoItemMainSub();
int MemoItemMain(sfObj* obj);

// 
// Start address: 0x281630
int memo_func_rot(sfObj* obj)
{
	// Line 67, Address: 0x281630, Func Offset: 0
	// Line 72, Address: 0x281634, Func Offset: 0x4
	// Line 67, Address: 0x281638, Func Offset: 0x8
	// Line 72, Address: 0x28163c, Func Offset: 0xc
	// Line 76, Address: 0x28165c, Func Offset: 0x2c
	// Func End, Address: 0x281668, Func Offset: 0x38
}

// 
// Start address: 0x281670
void MemoItemInit(sfObj* obj)
{
	_anon1* soeve;
	_EventObjWorkMemoItem* work;
	_EventObjWorkAutoAction* aact;
	float trans[4];
	// Line 96, Address: 0x281670, Func Offset: 0
	// Line 98, Address: 0x281684, Func Offset: 0x14
	// Line 101, Address: 0x28168c, Func Offset: 0x1c
	// Line 99, Address: 0x281690, Func Offset: 0x20
	// Line 101, Address: 0x281694, Func Offset: 0x24
	// Line 98, Address: 0x2816a0, Func Offset: 0x30
	// Line 100, Address: 0x2816a4, Func Offset: 0x34
	// Line 101, Address: 0x2816a8, Func Offset: 0x38
	// Line 103, Address: 0x2816c4, Func Offset: 0x54
	// Line 104, Address: 0x2816c8, Func Offset: 0x58
	// Line 105, Address: 0x2816d4, Func Offset: 0x64
	// Line 104, Address: 0x2816e0, Func Offset: 0x70
	// Line 105, Address: 0x281700, Func Offset: 0x90
	// Line 106, Address: 0x281708, Func Offset: 0x98
	// Line 108, Address: 0x28170c, Func Offset: 0x9c
	// Line 112, Address: 0x281710, Func Offset: 0xa0
	// Line 114, Address: 0x281720, Func Offset: 0xb0
	// Line 113, Address: 0x281728, Func Offset: 0xb8
	// Line 114, Address: 0x28172c, Func Offset: 0xbc
	// Line 115, Address: 0x281730, Func Offset: 0xc0
	// Line 117, Address: 0x281738, Func Offset: 0xc8
	// Line 120, Address: 0x281740, Func Offset: 0xd0
	// Line 118, Address: 0x281744, Func Offset: 0xd4
	// Line 120, Address: 0x281748, Func Offset: 0xd8
	// Line 119, Address: 0x28174c, Func Offset: 0xdc
	// Line 120, Address: 0x281750, Func Offset: 0xe0
	// Line 123, Address: 0x281758, Func Offset: 0xe8
	// Func End, Address: 0x281770, Func Offset: 0x100
}

// 
// Start address: 0x281770
void MemoItemMainSub()
{
	_EventObjWorkAutoAction* aact;
	// Line 135, Address: 0x281770, Func Offset: 0
	// Line 148, Address: 0x281774, Func Offset: 0x4
	// Line 135, Address: 0x281778, Func Offset: 0x8
	// Line 137, Address: 0x28177c, Func Offset: 0xc
	// Line 135, Address: 0x281780, Func Offset: 0x10
	// Line 148, Address: 0x281784, Func Offset: 0x14
	// Line 137, Address: 0x281788, Func Offset: 0x18
	// Line 143, Address: 0x281790, Func Offset: 0x20
	// Line 137, Address: 0x281798, Func Offset: 0x28
	// Line 144, Address: 0x28179c, Func Offset: 0x2c
	// Line 148, Address: 0x2817a0, Func Offset: 0x30
	// Line 144, Address: 0x2817a4, Func Offset: 0x34
	// Line 148, Address: 0x2817ac, Func Offset: 0x3c
	// Line 149, Address: 0x2817c8, Func Offset: 0x58
	// Line 150, Address: 0x2817d8, Func Offset: 0x68
	// Line 155, Address: 0x2817e0, Func Offset: 0x70
	// Line 156, Address: 0x2817ec, Func Offset: 0x7c
	// Line 157, Address: 0x2817f4, Func Offset: 0x84
	// Line 158, Address: 0x2817fc, Func Offset: 0x8c
	// Line 159, Address: 0x281804, Func Offset: 0x94
	// Line 161, Address: 0x281808, Func Offset: 0x98
	// Line 163, Address: 0x281838, Func Offset: 0xc8
	// Line 164, Address: 0x281844, Func Offset: 0xd4
	// Line 165, Address: 0x281848, Func Offset: 0xd8
	// Line 168, Address: 0x281850, Func Offset: 0xe0
	// Line 170, Address: 0x28185c, Func Offset: 0xec
	// Line 171, Address: 0x281860, Func Offset: 0xf0
	// Func End, Address: 0x281870, Func Offset: 0x100
}

// 
// Start address: 0x281870
int MemoItemMain(sfObj* obj)
{
	// Line 174, Address: 0x281870, Func Offset: 0
	// Line 175, Address: 0x281874, Func Offset: 0x4
	// Line 174, Address: 0x281878, Func Offset: 0x8
	// Line 177, Address: 0x28187c, Func Offset: 0xc
	// Line 178, Address: 0x281884, Func Offset: 0x14
	// Line 179, Address: 0x281888, Func Offset: 0x18
	// Line 178, Address: 0x28188c, Func Offset: 0x1c
	// Line 179, Address: 0x281890, Func Offset: 0x20
	// Func End, Address: 0x281898, Func Offset: 0x28
}

