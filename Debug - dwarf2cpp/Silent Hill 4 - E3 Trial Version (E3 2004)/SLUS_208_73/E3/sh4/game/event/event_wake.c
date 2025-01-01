typedef struct _EventWakeWork;
typedef union _anon0;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon1;
typedef struct _EtypeGtype;
typedef struct _anon2;
typedef enum _enum : unsigned char;
typedef struct _EventDriver;
typedef enum GameObjType : unsigned char;
typedef struct _EventHitWork;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _EventWakeHandler;

typedef void(*type_0)(sfObj*);
typedef void(*type_4)(sgAnime*, int);
typedef int(*type_14)(sfObj*);
typedef void(*type_15)(_anon1*, int, int, float*);
typedef int(*type_16)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef void(*type_22)(sfObj*);
typedef sgIKSolveResult(*type_23)();
typedef void(*type_25)(sfObj*);

typedef void* type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef short type_5[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef float type_9[4];
typedef float type_10[1];
typedef int type_11[1];
typedef unsigned char type_12[4];
typedef _EtypeGtype type_13[4];
typedef _anon0 type_20[4];
typedef float type_21[4][2];
typedef _anon0 type_24[256];
typedef float type_26[4];

struct _EventWakeWork
{
	int use;
	_enum type;
	_EventDriver* evdrv;
	_EventHitWork* evhit;
	GameObjType gameobj_type;
	int no;
	_EventWakeWork* next;
};

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

struct _EtypeGtype
{
	_enum etype;
	GameObjType gtype;
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

enum _enum : unsigned char
{
	EVENT_TYPE_INVALID,
	EVENT_TYPE_ITEM,
	EVENT_TYPE_MEMO,
	EVENT_TYPE_TEXT,
	EVENT_TYPE_FILELOAD,
	EVENT_TYPE_ETC,
	EVENT_TYPE_MAX
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

enum GameObjType : unsigned char
{
	GAME_OBJ_TYPE_NONE,
	GAME_OBJ_TYPE_PLAYER,
	GAME_OBJ_TYPE_ENEMY,
	GAME_OBJ_TYPE_FIGURE,
	GAME_OBJ_TYPE_ITEM,
	GAME_OBJ_TYPE_SEARCH,
	GAME_OBJ_TYPE_EFFECT,
	GAME_OBJ_TYPE_TEXTEVENT,
	GAME_OBJ_TYPE_MEMOITEM,
	GAME_OBJ_TYPE_EVHIT,
	GAME_OBJ_TYPE_EVENT,
	GAME_OBJ_TYPE_EVCAMERA,
	GAME_OBJ_TYPE_LAST
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _EventWakeHandler
{
	_EventWakeWork* top;
	_EventWakeWork* last;
	int no;
	_EventWakeWork* item_add_pt;
	float item_add_dist;
	_EventWakeWork* text_add_pt;
	float text_add_dist;
};

_EventWakeHandler hndl;
void(*EventAutoDie)(sfObj*);
_EtypeGtype etype_gtype_data[4];

void EventWakeHandlerInit();
void EventAutoDie(sfObj* obj);
void EventWakeListClear();
int EventWakeListAdd(_EventDriver* evdrv, _EventHitWork* evhit, _enum etype);
int EventWakeGetAllNum();
_enum EventWakeGetEventType(int no);
sfObj* EventWakeEventObjCreate(int no);
_enum EventObjtype2Eventtype(GameObjType gtype);
GameObjType EventEventtype2Objtype(_enum etype);

// 
// Start address: 0x2c94f0
void EventWakeHandlerInit()
{
	// Line 96, Address: 0x2c94f0, Func Offset: 0
	// Line 97, Address: 0x2c94f4, Func Offset: 0x4
	// Line 96, Address: 0x2c94f8, Func Offset: 0x8
	// Line 97, Address: 0x2c94fc, Func Offset: 0xc
	// Line 98, Address: 0x2c9508, Func Offset: 0x18
	// Line 99, Address: 0x2c9518, Func Offset: 0x28
	// Line 100, Address: 0x2c9520, Func Offset: 0x30
	// Func End, Address: 0x2c952c, Func Offset: 0x3c
}

// 
// Start address: 0x2c9530
void EventAutoDie(sfObj* obj)
{
	// Line 104, Address: 0x2c9530, Func Offset: 0
	// Line 105, Address: 0x2c9538, Func Offset: 0x8
	// Line 106, Address: 0x2c9544, Func Offset: 0x14
	// Line 107, Address: 0x2c9554, Func Offset: 0x24
	// Line 108, Address: 0x2c9560, Func Offset: 0x30
	// Func End, Address: 0x2c956c, Func Offset: 0x3c
}

// 
// Start address: 0x2c9570
void EventWakeListClear()
{
	_EventWakeWork* ew;
	// Line 121, Address: 0x2c9570, Func Offset: 0
	// Line 124, Address: 0x2c9580, Func Offset: 0x10
	// Line 127, Address: 0x2c95a0, Func Offset: 0x30
	// Func End, Address: 0x2c95a8, Func Offset: 0x38
}

// 
// Start address: 0x2c95b0
int EventWakeListAdd(_EventDriver* evdrv, _EventHitWork* evhit, _enum etype)
{
	_EventWakeWork* ew;
	float ppos[4];
	float dist;
	int nottori;
	GameObjType gameobj_type;
	sfObj* optr;
	// Line 141, Address: 0x2c95b0, Func Offset: 0
	// Line 151, Address: 0x2c95d0, Func Offset: 0x20
	// Line 141, Address: 0x2c95d4, Func Offset: 0x24
	// Line 150, Address: 0x2c95d8, Func Offset: 0x28
	// Line 151, Address: 0x2c95dc, Func Offset: 0x2c
	// Line 162, Address: 0x2c95e4, Func Offset: 0x34
	// Line 163, Address: 0x2c95f8, Func Offset: 0x48
	// Line 168, Address: 0x2c9600, Func Offset: 0x50
	// Line 171, Address: 0x2c962c, Func Offset: 0x7c
	// Line 172, Address: 0x2c9630, Func Offset: 0x80
	// Line 173, Address: 0x2c9644, Func Offset: 0x94
	// Line 189, Address: 0x2c964c, Func Offset: 0x9c
	// Line 194, Address: 0x2c9650, Func Offset: 0xa0
	// Line 195, Address: 0x2c9668, Func Offset: 0xb8
	// Line 197, Address: 0x2c9678, Func Offset: 0xc8
	// Line 200, Address: 0x2c968c, Func Offset: 0xdc
	// Line 199, Address: 0x2c9694, Func Offset: 0xe4
	// Line 200, Address: 0x2c9698, Func Offset: 0xe8
	// Line 201, Address: 0x2c96a4, Func Offset: 0xf4
	// Line 204, Address: 0x2c96e4, Func Offset: 0x134
	// Line 206, Address: 0x2c96e8, Func Offset: 0x138
	// Line 208, Address: 0x2c96fc, Func Offset: 0x14c
	// Line 210, Address: 0x2c9700, Func Offset: 0x150
	// Line 213, Address: 0x2c9708, Func Offset: 0x158
	// Line 217, Address: 0x2c9710, Func Offset: 0x160
	// Line 218, Address: 0x2c971c, Func Offset: 0x16c
	// Line 220, Address: 0x2c9728, Func Offset: 0x178
	// Line 223, Address: 0x2c973c, Func Offset: 0x18c
	// Line 222, Address: 0x2c9744, Func Offset: 0x194
	// Line 223, Address: 0x2c9748, Func Offset: 0x198
	// Line 224, Address: 0x2c9754, Func Offset: 0x1a4
	// Line 227, Address: 0x2c9794, Func Offset: 0x1e4
	// Line 229, Address: 0x2c9798, Func Offset: 0x1e8
	// Line 231, Address: 0x2c97ac, Func Offset: 0x1fc
	// Line 233, Address: 0x2c97b0, Func Offset: 0x200
	// Line 236, Address: 0x2c97b8, Func Offset: 0x208
	// Line 242, Address: 0x2c97c0, Func Offset: 0x210
	// Line 249, Address: 0x2c97c8, Func Offset: 0x218
	// Line 250, Address: 0x2c97d4, Func Offset: 0x224
	// Line 251, Address: 0x2c97dc, Func Offset: 0x22c
	// Line 252, Address: 0x2c97e8, Func Offset: 0x238
	// Line 253, Address: 0x2c97f8, Func Offset: 0x248
	// Line 254, Address: 0x2c97fc, Func Offset: 0x24c
	// Line 257, Address: 0x2c9800, Func Offset: 0x250
	// Line 258, Address: 0x2c9804, Func Offset: 0x254
	// Line 259, Address: 0x2c9814, Func Offset: 0x264
	// Line 261, Address: 0x2c9818, Func Offset: 0x268
	// Line 260, Address: 0x2c9820, Func Offset: 0x270
	// Line 262, Address: 0x2c9824, Func Offset: 0x274
	// Line 263, Address: 0x2c9830, Func Offset: 0x280
	// Line 266, Address: 0x2c983c, Func Offset: 0x28c
	// Line 264, Address: 0x2c9840, Func Offset: 0x290
	// Line 266, Address: 0x2c9844, Func Offset: 0x294
	// Line 265, Address: 0x2c9848, Func Offset: 0x298
	// Line 267, Address: 0x2c984c, Func Offset: 0x29c
	// Line 268, Address: 0x2c9858, Func Offset: 0x2a8
	// Line 271, Address: 0x2c9864, Func Offset: 0x2b4
	// Line 269, Address: 0x2c9868, Func Offset: 0x2b8
	// Line 271, Address: 0x2c986c, Func Offset: 0x2bc
	// Line 270, Address: 0x2c9870, Func Offset: 0x2c0
	// Line 272, Address: 0x2c9874, Func Offset: 0x2c4
	// Line 273, Address: 0x2c9880, Func Offset: 0x2d0
	// Line 275, Address: 0x2c988c, Func Offset: 0x2dc
	// Line 277, Address: 0x2c9898, Func Offset: 0x2e8
	// Line 280, Address: 0x2c98a0, Func Offset: 0x2f0
	// Line 281, Address: 0x2c98a4, Func Offset: 0x2f4
	// Line 285, Address: 0x2c98a8, Func Offset: 0x2f8
	// Line 286, Address: 0x2c98b0, Func Offset: 0x300
	// Line 287, Address: 0x2c98bc, Func Offset: 0x30c
	// Line 289, Address: 0x2c98d0, Func Offset: 0x320
	// Line 292, Address: 0x2c98d4, Func Offset: 0x324
	// Line 293, Address: 0x2c98e4, Func Offset: 0x334
	// Line 294, Address: 0x2c98e8, Func Offset: 0x338
	// Line 295, Address: 0x2c98ec, Func Offset: 0x33c
	// Line 298, Address: 0x2c98f8, Func Offset: 0x348
	// Line 299, Address: 0x2c9904, Func Offset: 0x354
	// Line 301, Address: 0x2c990c, Func Offset: 0x35c
	// Line 303, Address: 0x2c9910, Func Offset: 0x360
	// Line 304, Address: 0x2c9918, Func Offset: 0x368
	// Func End, Address: 0x2c993c, Func Offset: 0x38c
}

// 
// Start address: 0x2c9940
int EventWakeGetAllNum()
{
	// Line 319, Address: 0x2c9940, Func Offset: 0
	// Line 320, Address: 0x2c9944, Func Offset: 0x4
	// Func End, Address: 0x2c994c, Func Offset: 0xc
}

// 
// Start address: 0x2c9950
_enum EventWakeGetEventType(int no)
{
	_EventWakeWork* ew;
	// Line 333, Address: 0x2c9950, Func Offset: 0
	// Line 334, Address: 0x2c9960, Func Offset: 0x10
	// Line 335, Address: 0x2c996c, Func Offset: 0x1c
	// Line 337, Address: 0x2c9974, Func Offset: 0x24
	// Line 340, Address: 0x2c9988, Func Offset: 0x38
	// Line 341, Address: 0x2c9990, Func Offset: 0x40
	// Func End, Address: 0x2c9998, Func Offset: 0x48
}

// 
// Start address: 0x2c99a0
sfObj* EventWakeEventObjCreate(int no)
{
	_EventWakeWork* ew;
	sfObj* obj;
	// Line 352, Address: 0x2c99a0, Func Offset: 0
	// Line 356, Address: 0x2c99a4, Func Offset: 0x4
	// Line 352, Address: 0x2c99a8, Func Offset: 0x8
	// Line 356, Address: 0x2c99ac, Func Offset: 0xc
	// Line 357, Address: 0x2c99b8, Func Offset: 0x18
	// Line 358, Address: 0x2c99c4, Func Offset: 0x24
	// Line 359, Address: 0x2c99d4, Func Offset: 0x34
	// Line 361, Address: 0x2c99dc, Func Offset: 0x3c
	// Line 364, Address: 0x2c99f0, Func Offset: 0x50
	// Line 365, Address: 0x2c99f8, Func Offset: 0x58
	// Func End, Address: 0x2c9a04, Func Offset: 0x64
}

// 
// Start address: 0x2c9a10
_enum EventObjtype2Eventtype(GameObjType gtype)
{
	int i;
	// Line 392, Address: 0x2c9a14, Func Offset: 0x4
	// Line 393, Address: 0x2c9a20, Func Offset: 0x10
	// Line 394, Address: 0x2c9a2c, Func Offset: 0x1c
	// Line 396, Address: 0x2c9a40, Func Offset: 0x30
	// Line 397, Address: 0x2c9a50, Func Offset: 0x40
	// Line 398, Address: 0x2c9a58, Func Offset: 0x48
	// Func End, Address: 0x2c9a60, Func Offset: 0x50
}

// 
// Start address: 0x2c9a60
GameObjType EventEventtype2Objtype(_enum etype)
{
	int i;
	// Line 411, Address: 0x2c9a64, Func Offset: 0x4
	// Line 412, Address: 0x2c9a70, Func Offset: 0x10
	// Line 413, Address: 0x2c9a7c, Func Offset: 0x1c
	// Line 415, Address: 0x2c9a90, Func Offset: 0x30
	// Line 416, Address: 0x2c9aa0, Func Offset: 0x40
	// Line 417, Address: 0x2c9aa8, Func Offset: 0x48
	// Func End, Address: 0x2c9ab0, Func Offset: 0x50
}

