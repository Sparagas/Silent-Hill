typedef struct sfObj;
typedef union _anon0;
typedef enum LDOOR_TYPE : unsigned char;
typedef struct EventFlag;
typedef struct _GAME_WORK;
typedef struct LockDoor;
typedef struct _EventDriver;

typedef int(*type_0)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef int(*type_30)(sfObj*);

typedef int type_1[3];
typedef int type_3[3][2];
typedef _anon0 type_4[4];
typedef _anon0 type_5[0];
typedef LockDoor type_6[44];
typedef float type_7[4];
typedef float type_8[4][4];
typedef _anon0 type_9[256];
typedef int type_10[1];
typedef int type_12[1];
typedef float type_13[4];
typedef int type_14[1];
typedef int type_16[1];
typedef unsigned char type_17[320];
typedef int type_18[1];
typedef int type_19[1];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef char type_22[4];
typedef unsigned char type_23[4];
typedef float type_24[1];
typedef int type_25[1];
typedef int type_26[1];
typedef _anon0 type_27[0];

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

LockDoor bd_stg_ld[44];
_EventDriver message_door;
_GAME_WORK gamew;
_anon0 MsgCommon_HardClose[0];
EventFlag event_flag;
int ev_building0_elvflag[3][2];
_anon0 MsgBuilding0_elv_notopen[0];

int ElvDoorCheckBD(int scene_no, int next_scene_no);
int DoorPassClockDoor();

// 
// Start address: 0x2b5030
int ElvDoorCheckBD(int scene_no, int next_scene_no)
{
	int ret;
	_anon0 MsgClose;
	// Line 285, Address: 0x2b5030, Func Offset: 0
	// Line 289, Address: 0x2b5034, Func Offset: 0x4
	// Line 285, Address: 0x2b5038, Func Offset: 0x8
	// Line 289, Address: 0x2b5044, Func Offset: 0x14
	// Line 285, Address: 0x2b5048, Func Offset: 0x18
	// Line 291, Address: 0x2b504c, Func Offset: 0x1c
	// Line 292, Address: 0x2b5068, Func Offset: 0x38
	// Line 294, Address: 0x2b50f0, Func Offset: 0xc0
	// Line 295, Address: 0x2b5124, Func Offset: 0xf4
	// Line 298, Address: 0x2b512c, Func Offset: 0xfc
	// Line 295, Address: 0x2b5130, Func Offset: 0x100
	// Line 299, Address: 0x2b5138, Func Offset: 0x108
	// Line 300, Address: 0x2b516c, Func Offset: 0x13c
	// Line 308, Address: 0x2b5174, Func Offset: 0x144
	// Line 300, Address: 0x2b5178, Func Offset: 0x148
	// Line 309, Address: 0x2b5180, Func Offset: 0x150
	// Line 310, Address: 0x2b51b4, Func Offset: 0x184
	// Line 311, Address: 0x2b51bc, Func Offset: 0x18c
	// Line 310, Address: 0x2b51c0, Func Offset: 0x190
	// Line 312, Address: 0x2b51c8, Func Offset: 0x198
	// Line 313, Address: 0x2b51fc, Func Offset: 0x1cc
	// Line 314, Address: 0x2b5204, Func Offset: 0x1d4
	// Line 313, Address: 0x2b5208, Func Offset: 0x1d8
	// Line 315, Address: 0x2b5210, Func Offset: 0x1e0
	// Line 316, Address: 0x2b5244, Func Offset: 0x214
	// Line 318, Address: 0x2b524c, Func Offset: 0x21c
	// Line 319, Address: 0x2b5250, Func Offset: 0x220
	// Line 321, Address: 0x2b5260, Func Offset: 0x230
	// Line 328, Address: 0x2b5270, Func Offset: 0x240
	// Line 329, Address: 0x2b5278, Func Offset: 0x248
	// Line 328, Address: 0x2b527c, Func Offset: 0x24c
	// Line 332, Address: 0x2b5280, Func Offset: 0x250
	// Line 334, Address: 0x2b528c, Func Offset: 0x25c
	// Line 336, Address: 0x2b52a0, Func Offset: 0x270
	// Line 337, Address: 0x2b52b0, Func Offset: 0x280
	// Line 338, Address: 0x2b52c8, Func Offset: 0x298
	// Line 339, Address: 0x2b52d0, Func Offset: 0x2a0
	// Line 340, Address: 0x2b52e4, Func Offset: 0x2b4
	// Line 341, Address: 0x2b52e8, Func Offset: 0x2b8
	// Line 342, Address: 0x2b52f0, Func Offset: 0x2c0
	// Func End, Address: 0x2b5300, Func Offset: 0x2d0
}

// 
// Start address: 0x2b5300
int DoorPassClockDoor()
{
	// Line 349, Address: 0x2b5300, Func Offset: 0
	// Line 350, Address: 0x2b5304, Func Offset: 0x4
	// Line 349, Address: 0x2b5308, Func Offset: 0x8
	// Line 351, Address: 0x2b5314, Func Offset: 0x14
	// Func End, Address: 0x2b531c, Func Offset: 0x1c
}

