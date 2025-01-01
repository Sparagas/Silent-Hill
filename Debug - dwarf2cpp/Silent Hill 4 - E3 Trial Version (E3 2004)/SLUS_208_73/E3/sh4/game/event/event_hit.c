typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _EventHitWork;
typedef struct sgAnime;
typedef struct _ObjHitData;
typedef struct sfObj;
typedef struct _EventDriver;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _EventHitHandler;
typedef enum _cam3Step : unsigned char;
typedef struct _ObjHitCylinder;
typedef struct _cam3Work;
typedef struct _ObjHitCube;
typedef struct _ObjHitSphere;
typedef struct _ObjHitDoor;
typedef enum sgIKSolveResult : unsigned char;
typedef union _anon3;
typedef struct EventFlag;
typedef struct _GAME_WORK;

typedef void(*type_2)(sgAnime*, int);
typedef void(*type_6)(_anon0*, int, int, float*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef sgIKSolveResult(*type_18)();
typedef void(*type_27)(sfObj*);
typedef void(*type_33)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef int type_3[1];
typedef float type_4[4];
typedef unsigned char type_5[4];
typedef _anon3 type_13[4];
typedef int type_14[1];
typedef float type_15[4][2];
typedef int type_16[1];
typedef short type_17[2];
typedef unsigned short type_19[2];
typedef char type_20[4];
typedef float type_21[4];
typedef unsigned char type_22[4];
typedef _anon3 type_23[256];
typedef float type_24[1];
typedef int type_25[1];
typedef int type_26[1];
typedef unsigned char type_28[320];
typedef int type_29[1];
typedef _anon3 type_30[23];
typedef int type_31[1];
typedef int type_32[1];
typedef void* type_34[4];

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

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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
	_anon3 val[4];
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

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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
	_anon3 dmy[23];
};

struct _anon2
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

struct _EventHitHandler
{
	_EventHitWork* first_evhit;
	_EventHitWork* last_evhit;
	short enforce_itemset;
	_EventHitWork* lastconst_item;
	void* lastconst_enforce_item;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct _ObjHitCylinder
{
	float r;
	float h;
};

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct _ObjHitCube
{
	float w;
	float h;
	float d;
};

struct _ObjHitSphere
{
	float r;
};

struct _ObjHitDoor
{
	int num;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

union _anon3
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

struct EventFlag
{
	unsigned char flag[320];
};

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
};

_EventHitHandler evhit_handler;
int(*ev_cmn_objhit_checkfunc_item)(sfObj*);
float sg_vector_unit_y[4];
EventFlag event_flag;
_GAME_WORK gamew;
_cam3Work cam3_work;

int EventLevelSetCheck(int level_id);
int EventHitGameobjTriggerItem(sfObj* obj);
int EventHitGameobjFlagCheck(sfObj* obj);
int EventHitGameobjFlagOffCheck(sfObj* obj);
_EventHitWork* eventhit_get_work(sfObj* obj);
void eventhit_delete_work(_EventHitWork* evhit);
void EventHitHandlerInit();
void EventHitSceneInit();
void EventHitConstruct(sfObj* obj);
void EventHitDestruct(sfObj* obj);
int EventExistenceCheck(sfObj* obj);
void EventExistenceSet(sfObj* obj);
void EventHitExec(sfObj* obj);
void EventHitDraw(sfObj* obj);
void EventHitAfSearchListAdd();
void* EventHitEnforceItem(_EventHitWork* evhit);

// 
// Start address: 0x2766e0
int EventLevelSetCheck(int level_id)
{
	// Line 106, Address: 0x2766e0, Func Offset: 0
	// Line 107, Address: 0x2766e4, Func Offset: 0x4
	// Line 106, Address: 0x2766e8, Func Offset: 0x8
	// Line 107, Address: 0x2766f4, Func Offset: 0x14
	// Line 108, Address: 0x2766fc, Func Offset: 0x1c
	// Line 109, Address: 0x276704, Func Offset: 0x24
	// Line 110, Address: 0x276708, Func Offset: 0x28
	// Line 111, Address: 0x276728, Func Offset: 0x48
	// Line 113, Address: 0x276730, Func Offset: 0x50
	// Line 114, Address: 0x276750, Func Offset: 0x70
	// Line 116, Address: 0x276758, Func Offset: 0x78
	// Line 117, Address: 0x276778, Func Offset: 0x98
	// Line 119, Address: 0x276780, Func Offset: 0xa0
	// Line 120, Address: 0x2767a0, Func Offset: 0xc0
	// Line 122, Address: 0x2767a8, Func Offset: 0xc8
	// Line 123, Address: 0x2767c8, Func Offset: 0xe8
	// Line 125, Address: 0x2767d0, Func Offset: 0xf0
	// Line 126, Address: 0x2767f0, Func Offset: 0x110
	// Line 128, Address: 0x2767f8, Func Offset: 0x118
	// Line 129, Address: 0x276818, Func Offset: 0x138
	// Line 131, Address: 0x276820, Func Offset: 0x140
	// Line 132, Address: 0x276840, Func Offset: 0x160
	// Line 135, Address: 0x276848, Func Offset: 0x168
	// Line 136, Address: 0x276850, Func Offset: 0x170
	// Func End, Address: 0x276860, Func Offset: 0x180
}

// 
// Start address: 0x276860
int EventHitGameobjTriggerItem(sfObj* obj)
{
	// Line 146, Address: 0x276860, Func Offset: 0
	// Line 147, Address: 0x276868, Func Offset: 0x8
	// Line 148, Address: 0x276870, Func Offset: 0x10
	// Line 147, Address: 0x276874, Func Offset: 0x14
	// Line 148, Address: 0x276878, Func Offset: 0x18
	// Func End, Address: 0x276880, Func Offset: 0x20
}

// 
// Start address: 0x276880
int EventHitGameobjFlagCheck(sfObj* obj)
{
	// Line 158, Address: 0x276880, Func Offset: 0
	// Line 159, Address: 0x276888, Func Offset: 0x8
	// Line 160, Address: 0x276890, Func Offset: 0x10
	// Line 159, Address: 0x276894, Func Offset: 0x14
	// Line 160, Address: 0x276898, Func Offset: 0x18
	// Func End, Address: 0x2768a0, Func Offset: 0x20
}

// 
// Start address: 0x2768a0
int EventHitGameobjFlagOffCheck(sfObj* obj)
{
	// Line 170, Address: 0x2768a0, Func Offset: 0
	// Line 171, Address: 0x2768a8, Func Offset: 0x8
	// Line 172, Address: 0x2768b0, Func Offset: 0x10
	// Line 171, Address: 0x2768b4, Func Offset: 0x14
	// Line 172, Address: 0x2768b8, Func Offset: 0x18
	// Func End, Address: 0x2768c0, Func Offset: 0x20
}

// 
// Start address: 0x2768c0
_EventHitWork* eventhit_get_work(sfObj* obj)
{
	_EventHitWork* evhit;
	// Line 201, Address: 0x2768c0, Func Offset: 0
	// Line 204, Address: 0x2768c4, Func Offset: 0x4
	// Line 201, Address: 0x2768c8, Func Offset: 0x8
	// Line 204, Address: 0x2768d0, Func Offset: 0x10
	// Line 208, Address: 0x2768dc, Func Offset: 0x1c
	// Line 209, Address: 0x2768ec, Func Offset: 0x2c
	// Line 210, Address: 0x2768f4, Func Offset: 0x34
	// Line 212, Address: 0x2768f8, Func Offset: 0x38
	// Line 215, Address: 0x276900, Func Offset: 0x40
	// Line 216, Address: 0x27690c, Func Offset: 0x4c
	// Line 217, Address: 0x276918, Func Offset: 0x58
	// Line 218, Address: 0x27691c, Func Offset: 0x5c
	// Line 219, Address: 0x276920, Func Offset: 0x60
	// Line 222, Address: 0x276928, Func Offset: 0x68
	// Func End, Address: 0x276938, Func Offset: 0x78
}

// 
// Start address: 0x276940
void eventhit_delete_work(_EventHitWork* evhit)
{
	_EventHitWork* prev;
	_EventHitWork* next;
	// Line 239, Address: 0x276940, Func Offset: 0
	// Line 236, Address: 0x276948, Func Offset: 0x8
	// Line 239, Address: 0x27694c, Func Offset: 0xc
	// Line 240, Address: 0x276954, Func Offset: 0x14
	// Line 241, Address: 0x27695c, Func Offset: 0x1c
	// Line 244, Address: 0x276960, Func Offset: 0x20
	// Line 245, Address: 0x276970, Func Offset: 0x30
	// Line 246, Address: 0x276974, Func Offset: 0x34
	// Line 249, Address: 0x276978, Func Offset: 0x38
	// Line 250, Address: 0x276980, Func Offset: 0x40
	// Line 251, Address: 0x276984, Func Offset: 0x44
	// Line 252, Address: 0x276988, Func Offset: 0x48
	// Line 253, Address: 0x276990, Func Offset: 0x50
	// Line 254, Address: 0x276994, Func Offset: 0x54
	// Line 255, Address: 0x276998, Func Offset: 0x58
	// Func End, Address: 0x2769a0, Func Offset: 0x60
}

// 
// Start address: 0x2769a0
void EventHitHandlerInit()
{
	// Line 264, Address: 0x2769a0, Func Offset: 0
	// Func End, Address: 0x2769b0, Func Offset: 0x10
}

// 
// Start address: 0x2769b0
void EventHitSceneInit()
{
	// Line 274, Address: 0x2769b0, Func Offset: 0
	// Func End, Address: 0x2769b8, Func Offset: 0x8
}

// 
// Start address: 0x2769c0
void EventHitConstruct(sfObj* obj)
{
	_anon1* info;
	float trans[4];
	_EventHitWork* evhit;
	int model_id;
	int tex_id;
	_ObjHitData* hitdt;
	// Line 287, Address: 0x2769c0, Func Offset: 0
	// Line 288, Address: 0x2769dc, Func Offset: 0x1c
	// Line 289, Address: 0x2769e4, Func Offset: 0x24
	// Line 288, Address: 0x2769f0, Func Offset: 0x30
	// Line 289, Address: 0x2769f4, Func Offset: 0x34
	// Line 293, Address: 0x2769f8, Func Offset: 0x38
	// Line 289, Address: 0x2769fc, Func Offset: 0x3c
	// Line 293, Address: 0x276a14, Func Offset: 0x54
	// Line 294, Address: 0x276a1c, Func Offset: 0x5c
	// Line 293, Address: 0x276a20, Func Offset: 0x60
	// Line 295, Address: 0x276a24, Func Offset: 0x64
	// Line 296, Address: 0x276a30, Func Offset: 0x70
	// Line 297, Address: 0x276a38, Func Offset: 0x78
	// Line 301, Address: 0x276a48, Func Offset: 0x88
	// Line 300, Address: 0x276a4c, Func Offset: 0x8c
	// Line 301, Address: 0x276a50, Func Offset: 0x90
	// Line 303, Address: 0x276a74, Func Offset: 0xb4
	// Line 304, Address: 0x276a7c, Func Offset: 0xbc
	// Line 308, Address: 0x276a80, Func Offset: 0xc0
	// Line 310, Address: 0x276ab0, Func Offset: 0xf0
	// Line 313, Address: 0x276abc, Func Offset: 0xfc
	// Line 317, Address: 0x276ac4, Func Offset: 0x104
	// Line 321, Address: 0x276ac8, Func Offset: 0x108
	// Line 323, Address: 0x276adc, Func Offset: 0x11c
	// Line 324, Address: 0x276ae4, Func Offset: 0x124
	// Line 326, Address: 0x276af0, Func Offset: 0x130
	// Line 327, Address: 0x276af8, Func Offset: 0x138
	// Line 328, Address: 0x276b04, Func Offset: 0x144
	// Line 330, Address: 0x276b08, Func Offset: 0x148
	// Line 332, Address: 0x276b18, Func Offset: 0x158
	// Line 333, Address: 0x276b40, Func Offset: 0x180
	// Line 336, Address: 0x276b44, Func Offset: 0x184
	// Line 333, Address: 0x276b48, Func Offset: 0x188
	// Line 336, Address: 0x276b54, Func Offset: 0x194
	// Line 337, Address: 0x276b90, Func Offset: 0x1d0
	// Line 338, Address: 0x276b94, Func Offset: 0x1d4
	// Line 339, Address: 0x276b9c, Func Offset: 0x1dc
	// Line 340, Address: 0x276ba4, Func Offset: 0x1e4
	// Line 341, Address: 0x276ba8, Func Offset: 0x1e8
	// Line 344, Address: 0x276bb0, Func Offset: 0x1f0
	// Line 345, Address: 0x276bc4, Func Offset: 0x204
	// Line 348, Address: 0x276bc8, Func Offset: 0x208
	// Line 349, Address: 0x276bd4, Func Offset: 0x214
	// Line 356, Address: 0x276be0, Func Offset: 0x220
	// Line 357, Address: 0x276be4, Func Offset: 0x224
	// Line 358, Address: 0x276bec, Func Offset: 0x22c
	// Line 359, Address: 0x276bf8, Func Offset: 0x238
	// Line 367, Address: 0x276c00, Func Offset: 0x240
	// Line 369, Address: 0x276c18, Func Offset: 0x258
	// Line 370, Address: 0x276c24, Func Offset: 0x264
	// Line 371, Address: 0x276c2c, Func Offset: 0x26c
	// Line 372, Address: 0x276c30, Func Offset: 0x270
	// Line 378, Address: 0x276c34, Func Offset: 0x274
	// Line 381, Address: 0x276c40, Func Offset: 0x280
	// Line 383, Address: 0x276c48, Func Offset: 0x288
	// Line 382, Address: 0x276c4c, Func Offset: 0x28c
	// Line 383, Address: 0x276c54, Func Offset: 0x294
	// Line 384, Address: 0x276c5c, Func Offset: 0x29c
	// Line 388, Address: 0x276c68, Func Offset: 0x2a8
	// Line 393, Address: 0x276c70, Func Offset: 0x2b0
	// Line 397, Address: 0x276c78, Func Offset: 0x2b8
	// Func End, Address: 0x276c98, Func Offset: 0x2d8
}

// 
// Start address: 0x276ca0
void EventHitDestruct(sfObj* obj)
{
	_EventHitWork* evhit;
	// Line 406, Address: 0x276ca0, Func Offset: 0
	// Line 407, Address: 0x276cb4, Func Offset: 0x14
	// Line 410, Address: 0x276cbc, Func Offset: 0x1c
	// Line 411, Address: 0x276cc4, Func Offset: 0x24
	// Line 412, Address: 0x276ccc, Func Offset: 0x2c
	// Line 415, Address: 0x276cd0, Func Offset: 0x30
	// Line 419, Address: 0x276cd8, Func Offset: 0x38
	// Line 420, Address: 0x276ce4, Func Offset: 0x44
	// Line 421, Address: 0x276cec, Func Offset: 0x4c
	// Func End, Address: 0x276d00, Func Offset: 0x60
}

// 
// Start address: 0x276d00
int EventExistenceCheck(sfObj* obj)
{
	_EventHitWork* evhit;
	_anon1* info;
	// Line 430, Address: 0x276d00, Func Offset: 0
	// Line 431, Address: 0x276d14, Func Offset: 0x14
	// Line 432, Address: 0x276d18, Func Offset: 0x18
	// Line 435, Address: 0x276d20, Func Offset: 0x20
	// Line 436, Address: 0x276d28, Func Offset: 0x28
	// Line 440, Address: 0x276d30, Func Offset: 0x30
	// Line 441, Address: 0x276d40, Func Offset: 0x40
	// Line 442, Address: 0x276d88, Func Offset: 0x88
	// Line 447, Address: 0x276d90, Func Offset: 0x90
	// Line 448, Address: 0x276da0, Func Offset: 0xa0
	// Line 449, Address: 0x276de8, Func Offset: 0xe8
	// Line 455, Address: 0x276df0, Func Offset: 0xf0
	// Line 456, Address: 0x276e00, Func Offset: 0x100
	// Line 461, Address: 0x276e08, Func Offset: 0x108
	// Line 463, Address: 0x276e20, Func Offset: 0x120
	// Line 465, Address: 0x276e30, Func Offset: 0x130
	// Line 467, Address: 0x276e38, Func Offset: 0x138
	// Line 469, Address: 0x276e48, Func Offset: 0x148
	// Line 470, Address: 0x276e58, Func Offset: 0x158
	// Line 476, Address: 0x276e60, Func Offset: 0x160
	// Line 477, Address: 0x276e8c, Func Offset: 0x18c
	// Line 479, Address: 0x276e94, Func Offset: 0x194
	// Line 477, Address: 0x276e98, Func Offset: 0x198
	// Line 483, Address: 0x276e9c, Func Offset: 0x19c
	// Line 484, Address: 0x276eb0, Func Offset: 0x1b0
	// Line 488, Address: 0x276eb8, Func Offset: 0x1b8
	// Line 489, Address: 0x276ec8, Func Offset: 0x1c8
	// Line 496, Address: 0x276ed0, Func Offset: 0x1d0
	// Line 497, Address: 0x276ee8, Func Offset: 0x1e8
	// Line 499, Address: 0x276f40, Func Offset: 0x240
	// Line 505, Address: 0x276f58, Func Offset: 0x258
	// Line 507, Address: 0x276f60, Func Offset: 0x260
	// Line 508, Address: 0x276f68, Func Offset: 0x268
	// Line 512, Address: 0x276f70, Func Offset: 0x270
	// Line 513, Address: 0x276f80, Func Offset: 0x280
	// Line 517, Address: 0x276f88, Func Offset: 0x288
	// Line 518, Address: 0x276f98, Func Offset: 0x298
	// Line 522, Address: 0x276fa0, Func Offset: 0x2a0
	// Line 523, Address: 0x276fb8, Func Offset: 0x2b8
	// Line 528, Address: 0x276fc0, Func Offset: 0x2c0
	// Line 529, Address: 0x276fc8, Func Offset: 0x2c8
	// Func End, Address: 0x276fe0, Func Offset: 0x2e0
}

// 
// Start address: 0x276fe0
void EventExistenceSet(sfObj* obj)
{
	// Line 538, Address: 0x276fe0, Func Offset: 0
	// Line 540, Address: 0x276fec, Func Offset: 0xc
	// Line 542, Address: 0x276ff4, Func Offset: 0x14
	// Line 547, Address: 0x277004, Func Offset: 0x24
	// Line 548, Address: 0x27700c, Func Offset: 0x2c
	// Func End, Address: 0x277020, Func Offset: 0x40
}

// 
// Start address: 0x277020
void EventHitExec(sfObj* obj)
{
	_EventHitWork* evhit;
	// Line 557, Address: 0x277020, Func Offset: 0
	// Line 558, Address: 0x277028, Func Offset: 0x8
	// Line 620, Address: 0x277030, Func Offset: 0x10
	// Line 622, Address: 0x277038, Func Offset: 0x18
	// Line 624, Address: 0x277040, Func Offset: 0x20
	// Func End, Address: 0x27704c, Func Offset: 0x2c
}

// 
// Start address: 0x277050
void EventHitDraw(sfObj* obj)
{
	_EventHitWork* evhit;
	float s[4];
	// Line 705, Address: 0x277050, Func Offset: 0
	// Line 711, Address: 0x27705c, Func Offset: 0xc
	// Line 717, Address: 0x27706c, Func Offset: 0x1c
	// Line 718, Address: 0x2770a0, Func Offset: 0x50
	// Line 721, Address: 0x2770a4, Func Offset: 0x54
	// Line 722, Address: 0x2770b0, Func Offset: 0x60
	// Line 729, Address: 0x2770d0, Func Offset: 0x80
	// Line 730, Address: 0x2770dc, Func Offset: 0x8c
	// Line 731, Address: 0x2770e8, Func Offset: 0x98
	// Line 733, Address: 0x2770f4, Func Offset: 0xa4
	// Line 754, Address: 0x277110, Func Offset: 0xc0
	// Line 755, Address: 0x27711c, Func Offset: 0xcc
	// Line 758, Address: 0x277124, Func Offset: 0xd4
	// Line 759, Address: 0x277128, Func Offset: 0xd8
	// Func End, Address: 0x277138, Func Offset: 0xe8
}

// 
// Start address: 0x277140
void EventHitAfSearchListAdd()
{
	_EventHitWork* evhit;
	sfObj* obj;
	// Line 767, Address: 0x277140, Func Offset: 0
	// Line 777, Address: 0x277144, Func Offset: 0x4
	// Line 767, Address: 0x277148, Func Offset: 0x8
	// Line 777, Address: 0x277154, Func Offset: 0x14
	// Line 778, Address: 0x277160, Func Offset: 0x20
	// Line 779, Address: 0x277164, Func Offset: 0x24
	// Line 780, Address: 0x27716c, Func Offset: 0x2c
	// Line 785, Address: 0x277180, Func Offset: 0x40
	// Line 801, Address: 0x277190, Func Offset: 0x50
	// Line 802, Address: 0x2771a4, Func Offset: 0x64
	// Line 815, Address: 0x2771c0, Func Offset: 0x80
	// Line 817, Address: 0x2771c8, Func Offset: 0x88
	// Line 818, Address: 0x2771d8, Func Offset: 0x98
	// Func End, Address: 0x2771ec, Func Offset: 0xac
}

// 
// Start address: 0x2771f0
void* EventHitEnforceItem(_EventHitWork* evhit)
{
	// Line 829, Address: 0x2771f0, Func Offset: 0
	// Line 833, Address: 0x2771fc, Func Offset: 0xc
	// Func End, Address: 0x277204, Func Offset: 0x14
}

