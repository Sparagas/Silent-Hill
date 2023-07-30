typedef struct _EventInst;
typedef struct _StNextStage;
typedef struct sfObj;
typedef union _anon0;
typedef struct _EventDriver;
typedef enum _enum_0 : unsigned char;
typedef struct _GAME_WORK;
typedef enum _enum_1 : unsigned char;
typedef struct EventFlag;

typedef void(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_29)(sfObj*);

typedef _anon0 type_0[0];
typedef int type_1[1];
typedef _anon0 type_2[0];
typedef _anon0 type_3[256];
typedef int type_4[1];
typedef _StNextStage type_7[14];
typedef int type_9[1];
typedef float type_11[4];
typedef float type_12[4][4];
typedef int type_14[1];
typedef _anon0 type_17[4];
typedef int type_18[1];
typedef int type_19[1];
typedef float type_20[4];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef int type_23[1];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef int type_27[1];
typedef _anon0 type_30[0];
typedef unsigned char type_31[320];

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _StNextStage
{
	_enum_0 stage;
	int scene;
	float pos[4];
	float rot_y;
	int spiral_scene;
	float spiral_pos[4];
	float spiral_rot_y;
	_enum_1 door_mat;
	int flag;
	int flag2;
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

enum _enum_0 : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
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

enum _enum_1 : unsigned char
{
	DOOR_MAT_NONE,
	DOOR_MAT_STEEL,
	DOOR_MAT_WOOD,
	DOOR_MAT_ELEVATOR,
	DOOR_MAT_KOSHI,
	DOOR_MAT_LARGE,
	DOOR_MAT_TRAIN,
	DOOR_MAT_MAX
};

struct EventFlag
{
	unsigned char flag[320];
};

_StNextStage st_next_stage[14];
_anon0 MsgCommon_EileenCantPlaced[0];
EventFlag event_flag;
_GAME_WORK gamew;
_EventDriver ev_spiral0_door;
_anon0 MsgSpiral0_st07_SealDoor[0];
_EventDriver ev_spiral0_door_boss;
_anon0 MsgCommon_QustionEnterHole[0];
_EventDriver ev_spiral0_elevator;
_EventDriver ev_spiral0_elevator_non_eileen;
_EventDriver ev_spiral0_st02_under_unlock;
_EventDriver ev_spiral0_st02_under_door;
_EventDriver ev_spiral0_1400;
_EventDriver ev_spiral0_st07_door_open;

void EvSpiralDoorSeOpenClose(_enum_1 mat);
int ev_spiral0_door_init(sfObj* obj);
int ev_spiral0_door_exec(sfObj* obj);
int ev_spiral0_door_boss_init(sfObj* obj);
int ev_spiral0_st02_under_unlock_exec(sfObj* obj);
void EvGotoSpiral();
int ev_spiral0_st07_door_open_exec(sfObj* obj);

// 
// Start address: 0x2ca4a0
void EvSpiralDoorSeOpenClose(_enum_1 mat)
{
	// Line 58, Address: 0x2ca4a0, Func Offset: 0
	// Line 59, Address: 0x2ca4a4, Func Offset: 0x4
	// Line 58, Address: 0x2ca4a8, Func Offset: 0x8
	// Line 59, Address: 0x2ca4b0, Func Offset: 0x10
	// Line 64, Address: 0x2ca4b8, Func Offset: 0x18
	// Line 66, Address: 0x2ca4c0, Func Offset: 0x20
	// Line 67, Address: 0x2ca4c8, Func Offset: 0x28
	// Func End, Address: 0x2ca4d8, Func Offset: 0x38
}

// 
// Start address: 0x2ca4e0
int ev_spiral0_door_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 212, Address: 0x2ca4e0, Func Offset: 0
	// Line 213, Address: 0x2ca4ec, Func Offset: 0xc
	// Line 214, Address: 0x2ca4fc, Func Offset: 0x1c
	// Line 215, Address: 0x2ca504, Func Offset: 0x24
	// Line 216, Address: 0x2ca510, Func Offset: 0x30
	// Line 218, Address: 0x2ca518, Func Offset: 0x38
	// Line 221, Address: 0x2ca520, Func Offset: 0x40
	// Line 222, Address: 0x2ca52c, Func Offset: 0x4c
	// Line 223, Address: 0x2ca534, Func Offset: 0x54
	// Line 225, Address: 0x2ca538, Func Offset: 0x58
	// Line 224, Address: 0x2ca540, Func Offset: 0x60
	// Line 225, Address: 0x2ca544, Func Offset: 0x64
	// Func End, Address: 0x2ca54c, Func Offset: 0x6c
}

// 
// Start address: 0x2ca550
int ev_spiral0_door_exec(sfObj* obj)
{
	_StNextStage* next;
	int i;
	int ret;
	// Line 227, Address: 0x2ca550, Func Offset: 0
	// Line 234, Address: 0x2ca554, Func Offset: 0x4
	// Line 227, Address: 0x2ca558, Func Offset: 0x8
	// Line 234, Address: 0x2ca568, Func Offset: 0x18
	// Line 235, Address: 0x2ca584, Func Offset: 0x34
	// Line 237, Address: 0x2ca588, Func Offset: 0x38
	// Line 239, Address: 0x2ca5a4, Func Offset: 0x54
	// Line 240, Address: 0x2ca5a8, Func Offset: 0x58
	// Line 241, Address: 0x2ca5b8, Func Offset: 0x68
	// Line 243, Address: 0x2ca5c8, Func Offset: 0x78
	// Line 248, Address: 0x2ca5d0, Func Offset: 0x80
	// Line 255, Address: 0x2ca5dc, Func Offset: 0x8c
	// Line 256, Address: 0x2ca5e8, Func Offset: 0x98
	// Line 257, Address: 0x2ca5ec, Func Offset: 0x9c
	// Line 259, Address: 0x2ca5f0, Func Offset: 0xa0
	// Line 262, Address: 0x2ca5f8, Func Offset: 0xa8
	// Line 259, Address: 0x2ca5fc, Func Offset: 0xac
	// Line 262, Address: 0x2ca600, Func Offset: 0xb0
	// Line 259, Address: 0x2ca604, Func Offset: 0xb4
	// Line 262, Address: 0x2ca60c, Func Offset: 0xbc
	// Line 263, Address: 0x2ca618, Func Offset: 0xc8
	// Line 265, Address: 0x2ca63c, Func Offset: 0xec
	// Line 268, Address: 0x2ca644, Func Offset: 0xf4
	// Line 271, Address: 0x2ca650, Func Offset: 0x100
	// Line 273, Address: 0x2ca658, Func Offset: 0x108
	// Line 275, Address: 0x2ca660, Func Offset: 0x110
	// Line 276, Address: 0x2ca674, Func Offset: 0x124
	// Line 277, Address: 0x2ca67c, Func Offset: 0x12c
	// Line 279, Address: 0x2ca688, Func Offset: 0x138
	// Line 280, Address: 0x2ca694, Func Offset: 0x144
	// Line 281, Address: 0x2ca698, Func Offset: 0x148
	// Line 282, Address: 0x2ca6a4, Func Offset: 0x154
	// Line 283, Address: 0x2ca6ac, Func Offset: 0x15c
	// Line 282, Address: 0x2ca6b0, Func Offset: 0x160
	// Line 286, Address: 0x2ca6b4, Func Offset: 0x164
	// Line 287, Address: 0x2ca6bc, Func Offset: 0x16c
	// Line 289, Address: 0x2ca6f4, Func Offset: 0x1a4
	// Line 290, Address: 0x2ca6fc, Func Offset: 0x1ac
	// Line 296, Address: 0x2ca730, Func Offset: 0x1e0
	// Line 300, Address: 0x2ca738, Func Offset: 0x1e8
	// Line 301, Address: 0x2ca748, Func Offset: 0x1f8
	// Line 304, Address: 0x2ca74c, Func Offset: 0x1fc
	// Line 306, Address: 0x2ca750, Func Offset: 0x200
	// Line 307, Address: 0x2ca754, Func Offset: 0x204
	// Func End, Address: 0x2ca768, Func Offset: 0x218
}

// 
// Start address: 0x2ca770
int ev_spiral0_door_boss_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 322, Address: 0x2ca770, Func Offset: 0
	// Line 323, Address: 0x2ca774, Func Offset: 0x4
	// Line 322, Address: 0x2ca778, Func Offset: 0x8
	// Line 323, Address: 0x2ca780, Func Offset: 0x10
	// Line 325, Address: 0x2ca790, Func Offset: 0x20
	// Line 326, Address: 0x2ca79c, Func Offset: 0x2c
	// Line 327, Address: 0x2ca7a0, Func Offset: 0x30
	// Line 328, Address: 0x2ca7a8, Func Offset: 0x38
	// Line 329, Address: 0x2ca7b8, Func Offset: 0x48
	// Line 330, Address: 0x2ca7c0, Func Offset: 0x50
	// Line 331, Address: 0x2ca7cc, Func Offset: 0x5c
	// Line 333, Address: 0x2ca7d4, Func Offset: 0x64
	// Line 336, Address: 0x2ca7e0, Func Offset: 0x70
	// Line 337, Address: 0x2ca7ec, Func Offset: 0x7c
	// Line 338, Address: 0x2ca7f4, Func Offset: 0x84
	// Line 340, Address: 0x2ca7f8, Func Offset: 0x88
	// Line 339, Address: 0x2ca800, Func Offset: 0x90
	// Line 340, Address: 0x2ca804, Func Offset: 0x94
	// Func End, Address: 0x2ca80c, Func Offset: 0x9c
}

// 
// Start address: 0x2ca810
int ev_spiral0_st02_under_unlock_exec(sfObj* obj)
{
	int ret;
	// Line 397, Address: 0x2ca810, Func Offset: 0
	// Line 401, Address: 0x2ca814, Func Offset: 0x4
	// Line 397, Address: 0x2ca818, Func Offset: 0x8
	// Line 401, Address: 0x2ca828, Func Offset: 0x18
	// Line 402, Address: 0x2ca844, Func Offset: 0x34
	// Line 403, Address: 0x2ca848, Func Offset: 0x38
	// Line 404, Address: 0x2ca860, Func Offset: 0x50
	// Line 406, Address: 0x2ca86c, Func Offset: 0x5c
	// Line 407, Address: 0x2ca870, Func Offset: 0x60
	// Line 408, Address: 0x2ca880, Func Offset: 0x70
	// Line 411, Address: 0x2ca884, Func Offset: 0x74
	// Line 412, Address: 0x2ca888, Func Offset: 0x78
	// Line 413, Address: 0x2ca88c, Func Offset: 0x7c
	// Func End, Address: 0x2ca8a0, Func Offset: 0x90
}

// 
// Start address: 0x2ca8a0
void EvGotoSpiral()
{
	int i;
	// Line 442, Address: 0x2ca8a0, Func Offset: 0
	// Line 446, Address: 0x2ca8a4, Func Offset: 0x4
	// Line 442, Address: 0x2ca8a8, Func Offset: 0x8
	// Line 446, Address: 0x2ca8ac, Func Offset: 0xc
	// Line 442, Address: 0x2ca8b0, Func Offset: 0x10
	// Line 446, Address: 0x2ca8b4, Func Offset: 0x14
	// Line 448, Address: 0x2ca8d0, Func Offset: 0x30
	// Line 449, Address: 0x2ca8e8, Func Offset: 0x48
	// Line 450, Address: 0x2ca8f8, Func Offset: 0x58
	// Line 451, Address: 0x2ca900, Func Offset: 0x60
	// Line 453, Address: 0x2ca908, Func Offset: 0x68
	// Line 455, Address: 0x2ca910, Func Offset: 0x70
	// Line 456, Address: 0x2ca91c, Func Offset: 0x7c
	// Line 459, Address: 0x2ca928, Func Offset: 0x88
	// Line 460, Address: 0x2ca930, Func Offset: 0x90
	// Line 461, Address: 0x2ca964, Func Offset: 0xc4
	// Line 460, Address: 0x2ca968, Func Offset: 0xc8
	// Line 462, Address: 0x2ca96c, Func Offset: 0xcc
	// Line 463, Address: 0x2ca974, Func Offset: 0xd4
	// Line 467, Address: 0x2ca9b0, Func Offset: 0x110
	// Line 469, Address: 0x2ca9e0, Func Offset: 0x140
	// Line 470, Address: 0x2ca9ec, Func Offset: 0x14c
	// Line 471, Address: 0x2ca9f4, Func Offset: 0x154
	// Line 472, Address: 0x2ca9f8, Func Offset: 0x158
	// Line 473, Address: 0x2caa04, Func Offset: 0x164
	// Line 474, Address: 0x2caa0c, Func Offset: 0x16c
	// Line 475, Address: 0x2caa10, Func Offset: 0x170
	// Line 476, Address: 0x2caa1c, Func Offset: 0x17c
	// Line 479, Address: 0x2caa24, Func Offset: 0x184
	// Line 480, Address: 0x2caa28, Func Offset: 0x188
	// Line 484, Address: 0x2caa30, Func Offset: 0x190
	// Line 486, Address: 0x2caa38, Func Offset: 0x198
	// Line 489, Address: 0x2caa48, Func Offset: 0x1a8
	// Func End, Address: 0x2caa58, Func Offset: 0x1b8
}

// 
// Start address: 0x2caa60
int ev_spiral0_st07_door_open_exec(sfObj* obj)
{
	float view_angle;
	float cam_pos[4];
	int ret;
	// Line 523, Address: 0x2caa60, Func Offset: 0
	// Line 525, Address: 0x2caa64, Func Offset: 0x4
	// Line 523, Address: 0x2caa68, Func Offset: 0x8
	// Line 525, Address: 0x2caa6c, Func Offset: 0xc
	// Line 523, Address: 0x2caa70, Func Offset: 0x10
	// Line 525, Address: 0x2caa74, Func Offset: 0x14
	// Line 523, Address: 0x2caa78, Func Offset: 0x18
	// Line 525, Address: 0x2caa80, Func Offset: 0x20
	// Line 531, Address: 0x2caa88, Func Offset: 0x28
	// Line 534, Address: 0x2caaa8, Func Offset: 0x48
	// Line 535, Address: 0x2caab0, Func Offset: 0x50
	// Line 536, Address: 0x2caacc, Func Offset: 0x6c
	// Line 537, Address: 0x2caad4, Func Offset: 0x74
	// Line 538, Address: 0x2caadc, Func Offset: 0x7c
	// Line 539, Address: 0x2caae0, Func Offset: 0x80
	// Line 540, Address: 0x2caae8, Func Offset: 0x88
	// Line 541, Address: 0x2cab04, Func Offset: 0xa4
	// Line 542, Address: 0x2cab14, Func Offset: 0xb4
	// Line 543, Address: 0x2cab18, Func Offset: 0xb8
	// Line 542, Address: 0x2cab1c, Func Offset: 0xbc
	// Line 546, Address: 0x2cab24, Func Offset: 0xc4
	// Line 547, Address: 0x2cab28, Func Offset: 0xc8
	// Line 548, Address: 0x2cab2c, Func Offset: 0xcc
	// Func End, Address: 0x2cab40, Func Offset: 0xe0
}

