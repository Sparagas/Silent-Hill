typedef struct LockDoor;
typedef struct LockDoorHandler;
typedef struct sfObj;
typedef struct _EventInst;
typedef union _anon0;
typedef struct _EventDriver;
typedef enum LDOOR_TYPE : unsigned char;
typedef struct _GAME_WORK;
typedef struct EventFlag;

typedef void(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef int(*type_15)(sfObj*);

typedef LockDoor* type_0[13];
typedef _anon0 type_1[256];
typedef float type_5[4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef int type_9[1];
typedef int type_12[1];
typedef _anon0 type_16[4];
typedef int type_17[1];
typedef short type_18[2];
typedef unsigned short type_19[2];
typedef char type_20[4];
typedef unsigned char type_21[4];
typedef int type_22[1];
typedef float type_23[1];
typedef int type_24[1];
typedef int type_25[1];
typedef int type_26[1];
typedef unsigned char type_27[320];
typedef int type_28[1];

struct LockDoor
{
	int door;
	LDOOR_TYPE type;
	_anon0 v0;
	_anon0 v1;
	_anon0 v2;
	_anon0 v3;
	_anon0 v4;
	_anon0 v5;
};

struct LockDoorHandler
{
	int door_msg_id;
	int door_msg_disp;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

enum LDOOR_TYPE : unsigned char
{
	LDOOR_UNLOCK_ONESIDE_TOUCH,
	LDOOR_UNLOCK_ITEM_USE,
	LDOOR_UNLOCK_ITEM_USE_NOT_ERASE,
	LDOOR_BROKEN,
	LDOOR_HARD_CLOSE,
	LDOOR_CONDITION,
	LDOOR_LOCK_MESSAGE
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

struct EventFlag
{
	unsigned char flag[320];
};

_EventDriver message_door;
_EventDriver unlock_door;
EventFlag event_flag;
_EventDriver unlock_door_not_erase;
_GAME_WORK gamew;
LockDoor* stage_lockdoor[13];
LockDoorHandler ldoor_handler;

int unlock_door_not_erase_exec(sfObj* obj);
int LockDoorUnlockOnesideTouch(LockDoor* ldoor, int scene_no);
int LockDoorUnlockItemUse(LockDoor* ldoor, int scene_no, int erase_flag);
int LockDoorBroken(LockDoor* ldoor, int scene_no);
int LockDoorHardClose(LockDoor* ldoor, int scene_no);
int LockDoorCondition(LockDoor* ldoor);
int LockDoorLockMessage(LockDoor* ldoor);
int LockDoorDataProcess(LockDoor* ldoor, int scene_no);
int LockDoorDataMain();
int LockDoorCheckPath();
int LockDoorCheckThrough(int door_no);
int LockDoorCheckThroughAndWakeUpEvent(int door_no);

// 
// Start address: 0x290510
int unlock_door_not_erase_exec(sfObj* obj)
{
	_EventInst* evinst;
	_anon0 val;
	// Line 118, Address: 0x290510, Func Offset: 0
	// Line 119, Address: 0x29051c, Func Offset: 0xc
	// Line 120, Address: 0x29052c, Func Offset: 0x1c
	// Line 123, Address: 0x290534, Func Offset: 0x24
	// Line 124, Address: 0x290548, Func Offset: 0x38
	// Line 125, Address: 0x290550, Func Offset: 0x40
	// Line 126, Address: 0x290584, Func Offset: 0x74
	// Line 127, Address: 0x290588, Func Offset: 0x78
	// Line 129, Address: 0x290590, Func Offset: 0x80
	// Line 130, Address: 0x290598, Func Offset: 0x88
	// Func End, Address: 0x2905a8, Func Offset: 0x98
}

// 
// Start address: 0x2905b0
int LockDoorUnlockOnesideTouch(LockDoor* ldoor, int scene_no)
{
	int ret;
	int lock_flag;
	// Line 154, Address: 0x2905b0, Func Offset: 0
	// Line 161, Address: 0x2905c4, Func Offset: 0x14
	// Line 158, Address: 0x2905c8, Func Offset: 0x18
	// Line 161, Address: 0x2905cc, Func Offset: 0x1c
	// Line 162, Address: 0x2905fc, Func Offset: 0x4c
	// Line 164, Address: 0x29060c, Func Offset: 0x5c
	// Line 167, Address: 0x290614, Func Offset: 0x64
	// Line 170, Address: 0x290620, Func Offset: 0x70
	// Line 167, Address: 0x290624, Func Offset: 0x74
	// Line 170, Address: 0x290628, Func Offset: 0x78
	// Line 172, Address: 0x290634, Func Offset: 0x84
	// Line 174, Address: 0x290648, Func Offset: 0x98
	// Line 176, Address: 0x290658, Func Offset: 0xa8
	// Line 178, Address: 0x290670, Func Offset: 0xc0
	// Line 182, Address: 0x290678, Func Offset: 0xc8
	// Line 184, Address: 0x2906b0, Func Offset: 0x100
	// Line 187, Address: 0x2906b8, Func Offset: 0x108
	// Line 189, Address: 0x2906c8, Func Offset: 0x118
	// Line 191, Address: 0x2906dc, Func Offset: 0x12c
	// Line 193, Address: 0x2906ec, Func Offset: 0x13c
	// Line 195, Address: 0x290704, Func Offset: 0x154
	// Line 197, Address: 0x290708, Func Offset: 0x158
	// Line 198, Address: 0x29070c, Func Offset: 0x15c
	// Func End, Address: 0x290720, Func Offset: 0x170
}

// 
// Start address: 0x290720
int LockDoorUnlockItemUse(LockDoor* ldoor, int scene_no, int erase_flag)
{
	int ret;
	int lock_flag;
	int index;
	_EventDriver* ed;
	// Line 211, Address: 0x290720, Func Offset: 0
	// Line 218, Address: 0x29074c, Func Offset: 0x2c
	// Line 215, Address: 0x290750, Func Offset: 0x30
	// Line 218, Address: 0x290754, Func Offset: 0x34
	// Line 220, Address: 0x29075c, Func Offset: 0x3c
	// Line 222, Address: 0x290794, Func Offset: 0x74
	// Line 233, Address: 0x2907bc, Func Offset: 0x9c
	// Line 242, Address: 0x2907d4, Func Offset: 0xb4
	// Line 244, Address: 0x2907e4, Func Offset: 0xc4
	// Line 245, Address: 0x2907f8, Func Offset: 0xd8
	// Line 247, Address: 0x290800, Func Offset: 0xe0
	// Line 248, Address: 0x290814, Func Offset: 0xf4
	// Line 250, Address: 0x290818, Func Offset: 0xf8
	// Line 252, Address: 0x290828, Func Offset: 0x108
	// Line 254, Address: 0x290834, Func Offset: 0x114
	// Line 256, Address: 0x29084c, Func Offset: 0x12c
	// Line 259, Address: 0x290858, Func Offset: 0x138
	// Line 261, Address: 0x290868, Func Offset: 0x148
	// Line 263, Address: 0x29087c, Func Offset: 0x15c
	// Line 265, Address: 0x29088c, Func Offset: 0x16c
	// Line 267, Address: 0x2908a4, Func Offset: 0x184
	// Line 271, Address: 0x2908b0, Func Offset: 0x190
	// Line 273, Address: 0x2908e8, Func Offset: 0x1c8
	// Line 276, Address: 0x2908f0, Func Offset: 0x1d0
	// Line 278, Address: 0x290900, Func Offset: 0x1e0
	// Line 280, Address: 0x290914, Func Offset: 0x1f4
	// Line 282, Address: 0x290924, Func Offset: 0x204
	// Line 284, Address: 0x29093c, Func Offset: 0x21c
	// Line 286, Address: 0x290940, Func Offset: 0x220
	// Line 287, Address: 0x290944, Func Offset: 0x224
	// Func End, Address: 0x290968, Func Offset: 0x248
}

// 
// Start address: 0x290970
int LockDoorBroken(LockDoor* ldoor, int scene_no)
{
	// Line 297, Address: 0x290970, Func Offset: 0
	// Line 299, Address: 0x290974, Func Offset: 0x4
	// Line 297, Address: 0x290978, Func Offset: 0x8
	// Line 299, Address: 0x290984, Func Offset: 0x14
	// Line 300, Address: 0x290990, Func Offset: 0x20
	// Line 301, Address: 0x2909a4, Func Offset: 0x34
	// Line 303, Address: 0x2909b4, Func Offset: 0x44
	// Line 305, Address: 0x2909cc, Func Offset: 0x5c
	// Line 304, Address: 0x2909d0, Func Offset: 0x60
	// Line 305, Address: 0x2909d4, Func Offset: 0x64
	// Func End, Address: 0x2909e0, Func Offset: 0x70
}

// 
// Start address: 0x2909e0
int LockDoorHardClose(LockDoor* ldoor, int scene_no)
{
	// Line 315, Address: 0x2909e0, Func Offset: 0
	// Line 317, Address: 0x2909e4, Func Offset: 0x4
	// Line 315, Address: 0x2909e8, Func Offset: 0x8
	// Line 317, Address: 0x2909f4, Func Offset: 0x14
	// Line 318, Address: 0x290a00, Func Offset: 0x20
	// Line 319, Address: 0x290a14, Func Offset: 0x34
	// Line 321, Address: 0x290a24, Func Offset: 0x44
	// Line 323, Address: 0x290a3c, Func Offset: 0x5c
	// Line 322, Address: 0x290a40, Func Offset: 0x60
	// Line 323, Address: 0x290a44, Func Offset: 0x64
	// Func End, Address: 0x290a50, Func Offset: 0x70
}

// 
// Start address: 0x290a50
int LockDoorCondition(LockDoor* ldoor)
{
	// Line 332, Address: 0x290a50, Func Offset: 0
	// Line 333, Address: 0x290a54, Func Offset: 0x4
	// Line 334, Address: 0x290a9c, Func Offset: 0x4c
	// Line 336, Address: 0x290aac, Func Offset: 0x5c
	// Line 337, Address: 0x290af4, Func Offset: 0xa4
	// Line 338, Address: 0x290b04, Func Offset: 0xb4
	// Line 339, Address: 0x290b4c, Func Offset: 0xfc
	// Line 341, Address: 0x290b58, Func Offset: 0x108
	// Line 342, Address: 0x290b60, Func Offset: 0x110
	// Func End, Address: 0x290b68, Func Offset: 0x118
}

// 
// Start address: 0x290b70
int LockDoorLockMessage(LockDoor* ldoor)
{
	int ret;
	int lock_flag;
	// Line 351, Address: 0x290b70, Func Offset: 0
	// Line 354, Address: 0x290b7c, Func Offset: 0xc
	// Line 352, Address: 0x290b80, Func Offset: 0x10
	// Line 357, Address: 0x290b84, Func Offset: 0x14
	// Line 359, Address: 0x290bbc, Func Offset: 0x4c
	// Line 363, Address: 0x290bc8, Func Offset: 0x58
	// Line 365, Address: 0x290bdc, Func Offset: 0x6c
	// Line 367, Address: 0x290bec, Func Offset: 0x7c
	// Line 369, Address: 0x290c00, Func Offset: 0x90
	// Line 372, Address: 0x290c18, Func Offset: 0xa8
	// Line 373, Address: 0x290c1c, Func Offset: 0xac
	// Func End, Address: 0x290c2c, Func Offset: 0xbc
}

// 
// Start address: 0x290c30
int LockDoorDataProcess(LockDoor* ldoor, int scene_no)
{
	int ret;
	// Line 386, Address: 0x290c30, Func Offset: 0
	// Line 389, Address: 0x290c38, Func Offset: 0x8
	// Line 390, Address: 0x290c64, Func Offset: 0x34
	// Line 391, Address: 0x290c68, Func Offset: 0x38
	// Line 392, Address: 0x290c70, Func Offset: 0x40
	// Line 394, Address: 0x290c78, Func Offset: 0x48
	// Line 395, Address: 0x290c80, Func Offset: 0x50
	// Line 397, Address: 0x290c88, Func Offset: 0x58
	// Line 398, Address: 0x290c90, Func Offset: 0x60
	// Line 400, Address: 0x290c98, Func Offset: 0x68
	// Line 401, Address: 0x290ca0, Func Offset: 0x70
	// Line 403, Address: 0x290ca8, Func Offset: 0x78
	// Line 404, Address: 0x290cb0, Func Offset: 0x80
	// Line 406, Address: 0x290cb8, Func Offset: 0x88
	// Line 407, Address: 0x290cc0, Func Offset: 0x90
	// Line 409, Address: 0x290cc8, Func Offset: 0x98
	// Line 413, Address: 0x290cd0, Func Offset: 0xa0
	// Func End, Address: 0x290cdc, Func Offset: 0xac
}

// 
// Start address: 0x290ce0
int LockDoorDataMain()
{
	// Line 475, Address: 0x290ce0, Func Offset: 0
	// Func End, Address: 0x290ce8, Func Offset: 0x8
}

// 
// Start address: 0x290cf0
int LockDoorCheckPath()
{
	// Line 516, Address: 0x290cf0, Func Offset: 0
	// Func End, Address: 0x290cf8, Func Offset: 0x8
}

// 
// Start address: 0x290d00
int LockDoorCheckThrough(int door_no)
{
	LockDoor* stg_list;
	int ret;
	// Line 521, Address: 0x290d00, Func Offset: 0
	// Line 527, Address: 0x290d08, Func Offset: 0x8
	// Line 528, Address: 0x290d14, Func Offset: 0x14
	// Line 530, Address: 0x290d20, Func Offset: 0x20
	// Line 531, Address: 0x290d3c, Func Offset: 0x3c
	// Line 532, Address: 0x290d44, Func Offset: 0x44
	// Line 533, Address: 0x290d4c, Func Offset: 0x4c
	// Line 532, Address: 0x290d50, Func Offset: 0x50
	// Line 535, Address: 0x290d54, Func Offset: 0x54
	// Line 536, Address: 0x290d60, Func Offset: 0x60
	// Line 538, Address: 0x290d68, Func Offset: 0x68
	// Line 539, Address: 0x290d70, Func Offset: 0x70
	// Line 540, Address: 0x290d84, Func Offset: 0x84
	// Line 541, Address: 0x290d88, Func Offset: 0x88
	// Line 542, Address: 0x290d90, Func Offset: 0x90
	// Line 543, Address: 0x290da0, Func Offset: 0xa0
	// Line 544, Address: 0x290da8, Func Offset: 0xa8
	// Func End, Address: 0x290db4, Func Offset: 0xb4
}

// 
// Start address: 0x290dc0
int LockDoorCheckThroughAndWakeUpEvent(int door_no)
{
	LockDoor* stg_list;
	int ret;
	// Line 550, Address: 0x290dc0, Func Offset: 0
	// Line 556, Address: 0x290dc4, Func Offset: 0x4
	// Line 550, Address: 0x290dc8, Func Offset: 0x8
	// Line 556, Address: 0x290dd8, Func Offset: 0x18
	// Line 557, Address: 0x290de0, Func Offset: 0x20
	// Line 559, Address: 0x290de8, Func Offset: 0x28
	// Line 560, Address: 0x290e04, Func Offset: 0x44
	// Line 561, Address: 0x290e0c, Func Offset: 0x4c
	// Line 562, Address: 0x290e14, Func Offset: 0x54
	// Line 561, Address: 0x290e18, Func Offset: 0x58
	// Line 564, Address: 0x290e1c, Func Offset: 0x5c
	// Line 565, Address: 0x290e28, Func Offset: 0x68
	// Line 567, Address: 0x290e30, Func Offset: 0x70
	// Line 568, Address: 0x290e3c, Func Offset: 0x7c
	// Line 570, Address: 0x290e50, Func Offset: 0x90
	// Line 571, Address: 0x290e58, Func Offset: 0x98
	// Line 572, Address: 0x290e68, Func Offset: 0xa8
	// Line 573, Address: 0x290e70, Func Offset: 0xb0
	// Func End, Address: 0x290e84, Func Offset: 0xc4
}

