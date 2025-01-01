typedef struct _GAME_WORK;
typedef struct sfObj;
typedef struct _EventInst;
typedef struct EventFlag;
typedef struct _EventDriver;
typedef union _anon0;
typedef enum LDOOR_TYPE : unsigned char;
typedef struct LockDoor;

typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef int(*type_27)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef int(*type_30)(sfObj*);

typedef int type_0[1];
typedef int type_1[1];
typedef float type_2[4];
typedef int type_3[1];
typedef unsigned char type_4[320];
typedef _anon0 type_9[0];
typedef _anon0 type_11[0];
typedef _anon0 type_12[4];
typedef _anon0 type_13[0];
typedef LockDoor type_14[37];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef _anon0 type_17[256];
typedef char type_18[4];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];
typedef int type_23[1];
typedef float type_24[4];
typedef float type_25[4][4];
typedef int type_26[1];
typedef int type_29[1];
typedef int type_31[1];

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

struct EventFlag
{
	unsigned char flag[320];
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

LockDoor ie_stg_ld[37];
_GAME_WORK gamew;
_anon0 MsgHome0_118[0];
_anon0 MsgHome0_118_red[0];
_anon0 MsgHome0_118_master_key[0];
_EventDriver locked_door_21_first;
_EventDriver locked_door_20_first;
_EventDriver locked_door_20_first_addition;
_EventDriver locked_door_20;
_EventDriver unlock_door_20;
EventFlag event_flag;

int ev_home0_ie24_Msg_118_init(sfObj* obj);
int DoorCheckAtIe24Door21();
int DoorCheckAtIe24Door20(int scene_no);

// 
// Start address: 0x2cafc0
int ev_home0_ie24_Msg_118_init(sfObj* obj)
{
	_EventInst* inst;
	int i;
	int is_paper;
	// Line 325, Address: 0x2cafc0, Func Offset: 0
	// Line 326, Address: 0x2cafd8, Func Offset: 0x18
	// Line 328, Address: 0x2cafe4, Func Offset: 0x24
	// Line 332, Address: 0x2cafec, Func Offset: 0x2c
	// Line 333, Address: 0x2caff0, Func Offset: 0x30
	// Line 335, Address: 0x2cb008, Func Offset: 0x48
	// Line 337, Address: 0x2cb010, Func Offset: 0x50
	// Line 339, Address: 0x2cb020, Func Offset: 0x60
	// Line 341, Address: 0x2cb030, Func Offset: 0x70
	// Line 342, Address: 0x2cb040, Func Offset: 0x80
	// Line 344, Address: 0x2cb048, Func Offset: 0x88
	// Line 346, Address: 0x2cb050, Func Offset: 0x90
	// Line 347, Address: 0x2cb060, Func Offset: 0xa0
	// Line 350, Address: 0x2cb068, Func Offset: 0xa8
	// Line 352, Address: 0x2cb07c, Func Offset: 0xbc
	// Line 354, Address: 0x2cb080, Func Offset: 0xc0
	// Line 355, Address: 0x2cb094, Func Offset: 0xd4
	// Line 356, Address: 0x2cb098, Func Offset: 0xd8
	// Line 359, Address: 0x2cb0a0, Func Offset: 0xe0
	// Line 358, Address: 0x2cb0a4, Func Offset: 0xe4
	// Line 359, Address: 0x2cb0a8, Func Offset: 0xe8
	// Func End, Address: 0x2cb0c0, Func Offset: 0x100
}

// 
// Start address: 0x2cb0c0
int DoorCheckAtIe24Door21()
{
	// Line 376, Address: 0x2cb0c0, Func Offset: 0
	// Line 377, Address: 0x2cb0c4, Func Offset: 0x4
	// Line 376, Address: 0x2cb0c8, Func Offset: 0x8
	// Line 377, Address: 0x2cb0cc, Func Offset: 0xc
	// Line 380, Address: 0x2cb0d8, Func Offset: 0x18
	// Line 386, Address: 0x2cb0f0, Func Offset: 0x30
	// Line 385, Address: 0x2cb0f4, Func Offset: 0x34
	// Line 386, Address: 0x2cb0f8, Func Offset: 0x38
	// Func End, Address: 0x2cb100, Func Offset: 0x40
}

// 
// Start address: 0x2cb100
int DoorCheckAtIe24Door20(int scene_no)
{
	int rtv;
	// Line 474, Address: 0x2cb100, Func Offset: 0
	// Line 479, Address: 0x2cb104, Func Offset: 0x4
	// Line 474, Address: 0x2cb108, Func Offset: 0x8
	// Line 479, Address: 0x2cb118, Func Offset: 0x18
	// Line 481, Address: 0x2cb120, Func Offset: 0x20
	// Line 484, Address: 0x2cb134, Func Offset: 0x34
	// Line 487, Address: 0x2cb140, Func Offset: 0x40
	// Line 490, Address: 0x2cb150, Func Offset: 0x50
	// Line 492, Address: 0x2cb15c, Func Offset: 0x5c
	// Line 495, Address: 0x2cb16c, Func Offset: 0x6c
	// Line 498, Address: 0x2cb184, Func Offset: 0x84
	// Line 502, Address: 0x2cb190, Func Offset: 0x90
	// Line 505, Address: 0x2cb1a0, Func Offset: 0xa0
	// Line 527, Address: 0x2cb1b8, Func Offset: 0xb8
	// Line 529, Address: 0x2cb1cc, Func Offset: 0xcc
	// Line 530, Address: 0x2cb1d8, Func Offset: 0xd8
	// Line 532, Address: 0x2cb1e0, Func Offset: 0xe0
	// Line 537, Address: 0x2cb1f0, Func Offset: 0xf0
	// Line 541, Address: 0x2cb1f8, Func Offset: 0xf8
	// Line 542, Address: 0x2cb20c, Func Offset: 0x10c
	// Line 546, Address: 0x2cb210, Func Offset: 0x110
	// Line 548, Address: 0x2cb21c, Func Offset: 0x11c
	// Line 551, Address: 0x2cb22c, Func Offset: 0x12c
	// Line 553, Address: 0x2cb230, Func Offset: 0x130
	// Line 554, Address: 0x2cb234, Func Offset: 0x134
	// Func End, Address: 0x2cb248, Func Offset: 0x148
}

