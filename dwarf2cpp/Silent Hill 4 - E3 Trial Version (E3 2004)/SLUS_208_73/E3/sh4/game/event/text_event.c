typedef struct _anon0;
typedef struct sfObj;
typedef struct _anon1;
typedef struct _EventObjWorkTextEvent;
typedef struct _EventObjWorkAutoAction;
typedef struct _EventCtrlLink;
typedef struct _EventController;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _EventHitWork;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct _EventInst;
typedef struct sgAnime;
typedef union _anon2;
typedef struct sgSVModel;
typedef struct _anon3;

typedef int(*type_0)(sfObj*);
typedef void(*type_2)(_anon1*, int, int, float*);
typedef sgIKSolveResult(*type_5)();
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef void(*type_11)(sgAnime*, int);
typedef int(*type_18)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_25)(sfObj*);
typedef int(*type_26)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_30)(sfObj*);
typedef void(*type_31)(sfObj*);
typedef int(*type_32)(sfObj*);
typedef int(*type_33)(sfObj*);

typedef float type_1[4];
typedef _anon2 type_3[4];
typedef float type_4[4][2];
typedef float type_6[4];
typedef int(*type_9)(sfObj*)[2];
typedef void* type_10[4];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef _anon2 type_16[256];
typedef float type_17[4];
typedef float type_19[4][4];
typedef float type_20[1];
typedef int type_22[1];
typedef unsigned char type_23[4];
typedef int(*type_27)(sfObj*)[4];
typedef _anon2 type_29[23];

struct _anon0
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

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _EventObjWorkTextEvent
{
	_EventController evctrl;
	_EventHitWork* evhit;
	_EventObjWorkAutoAction aact;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct _anon3
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

int(*textevent_func)(sfObj*)[4];
int(*textevent_subject_func)(sfObj*)[2];
int(*functbl)(sfObj*);
int end_ret;
sfObj* now_obj;
int(*textevent_func_event_exec)(sfObj*);

int textevent_func_init();
int textevent_func_matchless_enable(sfObj* obj);
int textevent_func_matchless_disable(sfObj* obj);
int textevent_func_rot(sfObj* obj);
int textevent_func_event_exec(sfObj* obj);
int textevent_func_sitdown(sfObj* obj);
int textevent_func_standup(sfObj* obj);
int textevent_func_end(sfObj* obj);
int textevent_func_cancel(sfObj* obj);
int textevent_subject_func_init(sfObj* obj);
int textevent_detect_cancel();
void TextEventInit(sfObj* obj);
void TextEventMainSub();
int TextEventMain(sfObj* obj);

// 
// Start address: 0x278990
int textevent_func_init()
{
	// Line 84, Address: 0x278990, Func Offset: 0
	// Line 86, Address: 0x278998, Func Offset: 0x8
	// Line 90, Address: 0x2789a0, Func Offset: 0x10
	// Line 89, Address: 0x2789a4, Func Offset: 0x14
	// Line 90, Address: 0x2789a8, Func Offset: 0x18
	// Func End, Address: 0x2789b0, Func Offset: 0x20
}

// 
// Start address: 0x2789b0
int textevent_func_matchless_enable(sfObj* obj)
{
	_EventObjWorkAutoAction* aact;
	// Line 96, Address: 0x2789b0, Func Offset: 0
	// Line 98, Address: 0x2789bc, Func Offset: 0xc
	// Line 101, Address: 0x2789c0, Func Offset: 0x10
	// Line 102, Address: 0x2789c8, Func Offset: 0x18
	// Line 103, Address: 0x2789d0, Func Offset: 0x20
	// Line 106, Address: 0x2789d8, Func Offset: 0x28
	// Func End, Address: 0x2789e8, Func Offset: 0x38
}

// 
// Start address: 0x2789f0
int textevent_func_matchless_disable(sfObj* obj)
{
	_EventObjWorkAutoAction* aact;
	// Line 112, Address: 0x2789f0, Func Offset: 0
	// Line 114, Address: 0x2789fc, Func Offset: 0xc
	// Line 117, Address: 0x278a04, Func Offset: 0x14
	// Line 118, Address: 0x278a10, Func Offset: 0x20
	// Line 119, Address: 0x278a18, Func Offset: 0x28
	// Line 120, Address: 0x278a20, Func Offset: 0x30
	// Line 121, Address: 0x278a24, Func Offset: 0x34
	// Line 124, Address: 0x278a28, Func Offset: 0x38
	// Line 123, Address: 0x278a30, Func Offset: 0x40
	// Line 124, Address: 0x278a34, Func Offset: 0x44
	// Func End, Address: 0x278a3c, Func Offset: 0x4c
}

// 
// Start address: 0x278a40
int textevent_func_rot(sfObj* obj)
{
	_EventObjWorkAutoAction* aact;
	int ret;
	int rot_finish;
	// Line 130, Address: 0x278a40, Func Offset: 0
	// Line 132, Address: 0x278a58, Func Offset: 0x18
	// Line 133, Address: 0x278a5c, Func Offset: 0x1c
	// Line 137, Address: 0x278a64, Func Offset: 0x24
	// Line 134, Address: 0x278a68, Func Offset: 0x28
	// Line 137, Address: 0x278a6c, Func Offset: 0x2c
	// Line 140, Address: 0x278a7c, Func Offset: 0x3c
	// Line 141, Address: 0x278a88, Func Offset: 0x48
	// Line 142, Address: 0x278a94, Func Offset: 0x54
	// Line 145, Address: 0x278aa8, Func Offset: 0x68
	// Line 147, Address: 0x278ab0, Func Offset: 0x70
	// Line 148, Address: 0x278abc, Func Offset: 0x7c
	// Line 149, Address: 0x278ac8, Func Offset: 0x88
	// Line 152, Address: 0x278adc, Func Offset: 0x9c
	// Line 156, Address: 0x278ae8, Func Offset: 0xa8
	// Line 158, Address: 0x278af0, Func Offset: 0xb0
	// Line 159, Address: 0x278af4, Func Offset: 0xb4
	// Line 161, Address: 0x278af8, Func Offset: 0xb8
	// Line 162, Address: 0x278b00, Func Offset: 0xc0
	// Line 163, Address: 0x278b0c, Func Offset: 0xcc
	// Line 164, Address: 0x278b14, Func Offset: 0xd4
	// Line 166, Address: 0x278b18, Func Offset: 0xd8
	// Line 168, Address: 0x278b24, Func Offset: 0xe4
	// Line 169, Address: 0x278b3c, Func Offset: 0xfc
	// Line 172, Address: 0x278b44, Func Offset: 0x104
	// Line 174, Address: 0x278b50, Func Offset: 0x110
	// Line 175, Address: 0x278b58, Func Offset: 0x118
	// Line 177, Address: 0x278b5c, Func Offset: 0x11c
	// Line 179, Address: 0x278b60, Func Offset: 0x120
	// Line 180, Address: 0x278b6c, Func Offset: 0x12c
	// Line 181, Address: 0x278b70, Func Offset: 0x130
	// Func End, Address: 0x278b88, Func Offset: 0x148
}

// 
// Start address: 0x278b90
int textevent_func_event_exec(sfObj* obj)
{
	_EventObjWorkAutoAction* aact;
	// Line 187, Address: 0x278b90, Func Offset: 0
	// Line 191, Address: 0x278ba8, Func Offset: 0x18
	// Line 192, Address: 0x278bb8, Func Offset: 0x28
	// Line 193, Address: 0x278bc8, Func Offset: 0x38
	// Line 194, Address: 0x278bd4, Func Offset: 0x44
	// Line 195, Address: 0x278bdc, Func Offset: 0x4c
	// Line 196, Address: 0x278be0, Func Offset: 0x50
	// Line 197, Address: 0x278be8, Func Offset: 0x58
	// Line 199, Address: 0x278bf0, Func Offset: 0x60
	// Line 202, Address: 0x278bf8, Func Offset: 0x68
	// Line 203, Address: 0x278c00, Func Offset: 0x70
	// Func End, Address: 0x278c14, Func Offset: 0x84
}

// 
// Start address: 0x278c20
int textevent_func_sitdown(sfObj* obj)
{
	_EventObjWorkTextEvent* work;
	_EventObjWorkAutoAction* aact;
	float ppos[4];
	// Line 209, Address: 0x278c20, Func Offset: 0
	// Line 211, Address: 0x278c30, Func Offset: 0x10
	// Line 215, Address: 0x278c34, Func Offset: 0x14
	// Line 216, Address: 0x278c40, Func Offset: 0x20
	// Line 219, Address: 0x278c54, Func Offset: 0x34
	// Line 221, Address: 0x278c74, Func Offset: 0x54
	// Line 222, Address: 0x278c84, Func Offset: 0x64
	// Line 223, Address: 0x278c8c, Func Offset: 0x6c
	// Line 225, Address: 0x278c98, Func Offset: 0x78
	// Line 227, Address: 0x278ca0, Func Offset: 0x80
	// Line 231, Address: 0x278ca8, Func Offset: 0x88
	// Line 230, Address: 0x278cb0, Func Offset: 0x90
	// Line 231, Address: 0x278cb4, Func Offset: 0x94
	// Func End, Address: 0x278cc0, Func Offset: 0xa0
}

// 
// Start address: 0x278cc0
int textevent_func_standup(sfObj* obj)
{
	// Line 237, Address: 0x278cc0, Func Offset: 0
	// Line 241, Address: 0x278cc8, Func Offset: 0x8
	// Line 243, Address: 0x278cd8, Func Offset: 0x18
	// Line 246, Address: 0x278cec, Func Offset: 0x2c
	// Line 247, Address: 0x278cf0, Func Offset: 0x30
	// Line 248, Address: 0x278cf8, Func Offset: 0x38
	// Func End, Address: 0x278d04, Func Offset: 0x44
}

// 
// Start address: 0x278d10
int textevent_func_end(sfObj* obj)
{
	// Line 254, Address: 0x278d10, Func Offset: 0
	// Line 256, Address: 0x278d1c, Func Offset: 0xc
	// Line 259, Address: 0x278d24, Func Offset: 0x14
	// Line 263, Address: 0x278d2c, Func Offset: 0x1c
	// Line 262, Address: 0x278d30, Func Offset: 0x20
	// Line 263, Address: 0x278d34, Func Offset: 0x24
	// Func End, Address: 0x278d40, Func Offset: 0x30
}

// 
// Start address: 0x278d40
int textevent_func_cancel(sfObj* obj)
{
	// Line 269, Address: 0x278d40, Func Offset: 0
	// Line 271, Address: 0x278d48, Func Offset: 0x8
	// Line 273, Address: 0x278d50, Func Offset: 0x10
	// Line 276, Address: 0x278d58, Func Offset: 0x18
	// Line 275, Address: 0x278d5c, Func Offset: 0x1c
	// Line 276, Address: 0x278d60, Func Offset: 0x20
	// Func End, Address: 0x278d68, Func Offset: 0x28
}

// 
// Start address: 0x278d70
int textevent_subject_func_init(sfObj* obj)
{
	// Line 281, Address: 0x278d70, Func Offset: 0
	// Line 283, Address: 0x278d7c, Func Offset: 0xc
	// Line 286, Address: 0x278d84, Func Offset: 0x14
	// Line 289, Address: 0x278d8c, Func Offset: 0x1c
	// Line 288, Address: 0x278d90, Func Offset: 0x20
	// Line 289, Address: 0x278d94, Func Offset: 0x24
	// Func End, Address: 0x278da0, Func Offset: 0x30
}

// 
// Start address: 0x278da0
int textevent_detect_cancel()
{
	// Line 294, Address: 0x278da0, Func Offset: 0
	// Line 297, Address: 0x278da8, Func Offset: 0x8
	// Line 331, Address: 0x278db4, Func Offset: 0x14
	// Line 297, Address: 0x278db8, Func Offset: 0x18
	// Line 331, Address: 0x278dbc, Func Offset: 0x1c
	// Func End, Address: 0x278dc4, Func Offset: 0x24
}

// 
// Start address: 0x278dd0
void TextEventInit(sfObj* obj)
{
	_anon0* soeve;
	_EventObjWorkTextEvent* work;
	_EventObjWorkAutoAction* aact;
	float trans[4];
	_EventInst* evinst;
	// Line 337, Address: 0x278dd0, Func Offset: 0
	// Line 339, Address: 0x278de0, Func Offset: 0x10
	// Line 342, Address: 0x278de8, Func Offset: 0x18
	// Line 339, Address: 0x278dec, Func Offset: 0x1c
	// Line 342, Address: 0x278df0, Func Offset: 0x20
	// Line 341, Address: 0x278dfc, Func Offset: 0x2c
	// Line 342, Address: 0x278e00, Func Offset: 0x30
	// Line 344, Address: 0x278e1c, Func Offset: 0x4c
	// Line 345, Address: 0x278e20, Func Offset: 0x50
	// Line 346, Address: 0x278e2c, Func Offset: 0x5c
	// Line 345, Address: 0x278e38, Func Offset: 0x68
	// Line 346, Address: 0x278e58, Func Offset: 0x88
	// Line 383, Address: 0x278e60, Func Offset: 0x90
	// Line 385, Address: 0x278e70, Func Offset: 0xa0
	// Line 384, Address: 0x278e78, Func Offset: 0xa8
	// Line 385, Address: 0x278e7c, Func Offset: 0xac
	// Line 386, Address: 0x278e80, Func Offset: 0xb0
	// Line 390, Address: 0x278e88, Func Offset: 0xb8
	// Line 392, Address: 0x278e94, Func Offset: 0xc4
	// Line 396, Address: 0x278ea8, Func Offset: 0xd8
	// Line 393, Address: 0x278eac, Func Offset: 0xdc
	// Line 396, Address: 0x278eb0, Func Offset: 0xe0
	// Line 394, Address: 0x278eb4, Func Offset: 0xe4
	// Line 396, Address: 0x278eb8, Func Offset: 0xe8
	// Line 395, Address: 0x278ebc, Func Offset: 0xec
	// Line 397, Address: 0x278ec0, Func Offset: 0xf0
	// Line 398, Address: 0x278ec8, Func Offset: 0xf8
	// Line 399, Address: 0x278edc, Func Offset: 0x10c
	// Line 400, Address: 0x278ee0, Func Offset: 0x110
	// Line 402, Address: 0x278ee8, Func Offset: 0x118
	// Line 401, Address: 0x278ef0, Func Offset: 0x120
	// Line 402, Address: 0x278ef4, Func Offset: 0x124
	// Line 403, Address: 0x278ef8, Func Offset: 0x128
	// Line 405, Address: 0x278f00, Func Offset: 0x130
	// Line 406, Address: 0x278f08, Func Offset: 0x138
	// Line 411, Address: 0x278f18, Func Offset: 0x148
	// Func End, Address: 0x278f2c, Func Offset: 0x15c
}

// 
// Start address: 0x278f30
void TextEventMainSub()
{
	_EventObjWorkAutoAction* aact;
	// Line 423, Address: 0x278f30, Func Offset: 0
	// Line 436, Address: 0x278f34, Func Offset: 0x4
	// Line 423, Address: 0x278f38, Func Offset: 0x8
	// Line 425, Address: 0x278f3c, Func Offset: 0xc
	// Line 423, Address: 0x278f40, Func Offset: 0x10
	// Line 436, Address: 0x278f44, Func Offset: 0x14
	// Line 425, Address: 0x278f48, Func Offset: 0x18
	// Line 431, Address: 0x278f50, Func Offset: 0x20
	// Line 425, Address: 0x278f58, Func Offset: 0x28
	// Line 432, Address: 0x278f5c, Func Offset: 0x2c
	// Line 436, Address: 0x278f60, Func Offset: 0x30
	// Line 432, Address: 0x278f64, Func Offset: 0x34
	// Line 436, Address: 0x278f6c, Func Offset: 0x3c
	// Line 437, Address: 0x278f88, Func Offset: 0x58
	// Line 438, Address: 0x278f98, Func Offset: 0x68
	// Line 443, Address: 0x278fa0, Func Offset: 0x70
	// Line 444, Address: 0x278fac, Func Offset: 0x7c
	// Line 445, Address: 0x278fb4, Func Offset: 0x84
	// Line 446, Address: 0x278fbc, Func Offset: 0x8c
	// Line 447, Address: 0x278fc4, Func Offset: 0x94
	// Line 449, Address: 0x278fc8, Func Offset: 0x98
	// Line 451, Address: 0x278ff8, Func Offset: 0xc8
	// Line 452, Address: 0x279004, Func Offset: 0xd4
	// Line 453, Address: 0x279008, Func Offset: 0xd8
	// Line 456, Address: 0x279010, Func Offset: 0xe0
	// Line 458, Address: 0x27901c, Func Offset: 0xec
	// Line 459, Address: 0x279020, Func Offset: 0xf0
	// Func End, Address: 0x279030, Func Offset: 0x100
}

// 
// Start address: 0x279030
int TextEventMain(sfObj* obj)
{
	// Line 462, Address: 0x279030, Func Offset: 0
	// Line 463, Address: 0x279034, Func Offset: 0x4
	// Line 462, Address: 0x279038, Func Offset: 0x8
	// Line 465, Address: 0x27903c, Func Offset: 0xc
	// Line 466, Address: 0x279044, Func Offset: 0x14
	// Line 467, Address: 0x279048, Func Offset: 0x18
	// Line 466, Address: 0x27904c, Func Offset: 0x1c
	// Line 467, Address: 0x279050, Func Offset: 0x20
	// Func End, Address: 0x279058, Func Offset: 0x28
}

