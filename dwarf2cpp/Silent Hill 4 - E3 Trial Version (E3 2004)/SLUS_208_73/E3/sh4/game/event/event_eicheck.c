typedef union _anon0;
typedef struct _EitalkCheck;
typedef struct sfObj;
typedef struct _EventHitWork;
typedef struct _EventDriver;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon1;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _EventHitHandler;
typedef struct _anon2;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct EventFlag;
typedef struct sgAnime;

typedef void(*type_2)(sfObj*);
typedef int(*type_3)();
typedef int(*type_9)(sfObj*);
typedef void(*type_10)(_anon1*, int, int, float*);
typedef int(*type_11)(sfObj*);
typedef sgIKSolveResult(*type_13)();
typedef int(*type_15)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef void(*type_27)(sgAnime*, int);
typedef void(*type_33)(sfObj*);

typedef float type_0[4];
typedef _EitalkCheck* type_1[12];
typedef float type_4[4][4];
typedef _EitalkCheck type_5[1];
typedef _EitalkCheck type_6[11];
typedef float type_7[4][2];
typedef float type_8[4];
typedef _EitalkCheck type_12[4];
typedef float type_14[4];
typedef unsigned char type_18[320];
typedef _anon0 type_19[4];
typedef _EitalkCheck type_20[3];
typedef _EitalkCheck type_21[1];
typedef void* type_22[4];
typedef short type_23[2];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef float type_28[1];
typedef int type_29[1];
typedef _EitalkCheck type_30[2];
typedef _anon0 type_31[256];
typedef unsigned char type_32[4];
typedef _EitalkCheck type_34[5];

union _anon0
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

struct _EitalkCheck
{
	short sn;
	short on_flag;
	int(*func)();
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
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
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _EventHitHandler
{
	_EventHitWork* first_evhit;
	_EventHitWork* last_evhit;
	short enforce_itemset;
	_EventHitWork* lastconst_item;
	void* lastconst_enforce_item;
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
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

struct EventFlag
{
	unsigned char flag[320];
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

EventFlag event_flag;
_EitalkCheck eitalk_check_sb[4];
_EitalkCheck eitalk_check_fr[2];
_EitalkCheck eitalk_check_mz[1];
_EitalkCheck eitalk_check_bd[3];
_EitalkCheck eitalk_check_hs[5];
_EitalkCheck eitalk_check_cm[11];
_EitalkCheck eitalk_check_st[1];
_EitalkCheck* eitalk_check[12];
_EventHitHandler evhit_handler;

int EventEileenCheckTalkingPossible();

// 
// Start address: 0x2e4460
int EventEileenCheckTalkingPossible()
{
	_EventHitWork* evhit;
	// Line 196, Address: 0x2e4460, Func Offset: 0
	// Line 199, Address: 0x2e4464, Func Offset: 0x4
	// Line 196, Address: 0x2e4468, Func Offset: 0x8
	// Line 199, Address: 0x2e4470, Func Offset: 0x10
	// Line 201, Address: 0x2e4484, Func Offset: 0x24
	// Line 202, Address: 0x2e4498, Func Offset: 0x38
	// Line 204, Address: 0x2e44a4, Func Offset: 0x44
	// Line 206, Address: 0x2e44b4, Func Offset: 0x54
	// Line 210, Address: 0x2e44bc, Func Offset: 0x5c
	// Line 212, Address: 0x2e44d0, Func Offset: 0x70
	// Line 213, Address: 0x2e44d8, Func Offset: 0x78
	// Func End, Address: 0x2e44e8, Func Offset: 0x88
}

