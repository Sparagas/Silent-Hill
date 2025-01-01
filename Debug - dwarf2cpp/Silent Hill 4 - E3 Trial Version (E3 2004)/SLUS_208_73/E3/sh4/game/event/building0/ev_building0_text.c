typedef struct EventFlag;
typedef struct sfObj;
typedef union _anon0;
typedef struct _EventDriver;
typedef struct _GAME_WORK;

typedef void(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef int(*type_10)(sfObj*);

typedef unsigned char type_0[320];
typedef _anon0 type_1[256];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_11[4];
typedef _anon0 type_12[4];
typedef int type_13[1];
typedef int type_14[1];
typedef int type_15[1];
typedef int type_16[1];
typedef _anon0 type_17[0];
typedef _anon0 type_18[0];
typedef int type_19[1];
typedef int type_20[1];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_25[1];
typedef int type_26[1];
typedef int type_27[1];
typedef int type_28[3];
typedef int type_29[3][2];

struct EventFlag
{
	unsigned char flag[320];
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

_anon0 MsgBuilding0_elv_notmove[0];
EventFlag event_flag;
int ev_building0_elvflag[3][2];
_EventDriver ev_building0_bd12_036;
_anon0 MsgBuilding0_elv[0];
_EventDriver ev_building0_bd12_elv;
_EventDriver ev_building0_bd16_251_01;
_EventDriver ev_building0_bd27_251_02;
_EventDriver ev_building0_bd27_251_03;
_GAME_WORK gamew;
_EventDriver ev_building0_bd24_2230;
_EventDriver ev_building0_bd07_2241;
_EventDriver ev_building0_bd08_2242;
_EventDriver ev_building0_bd23_2243;
_EventDriver ev_building0_bd14_2244;
_EventDriver ev_building0_msg_2564;
_EventDriver ev_building0_bd20_2249_04;
_EventDriver ev_building0_bd16_2252;
_EventDriver ev_building0_msg_1006_01;
_EventDriver ev_building0_msg_1006_02;
_EventDriver ev_building0_msg_1006_03;
_EventDriver ev_building0_msg_1006_04;
_EventDriver ev_building0_msg_1006_05;
_EventDriver ev_building0_msg_1006_06;
_EventDriver ev_building0_msg_1006_07;
_EventDriver ev_building0_msg_1007_01;
_EventDriver ev_building0_msg_1007_02;
_EventDriver ev_building0_msg_1007_03;
_EventDriver ev_building0_msg_1007_04;
_EventDriver ev_building0_msg_1007_05;
_EventDriver ev_building0_msg_1007_06;
_EventDriver ev_building0_msg_1015_01;
_EventDriver ev_building0_msg_1015_02;
_EventDriver ev_building0_msg_1015_03;
_EventDriver ev_building0_msg_1015_04;
_EventDriver ev_building0_msg_1016_01;
_EventDriver ev_building0_msg_1016_02;
_EventDriver ev_building0_msg_1016_03;
_EventDriver ev_building0_msg_1016_04;
_EventDriver ev_building0_msg_1016_05;
_EventDriver ev_building0_msg_1016_06;
_EventDriver ev_building0_msg_1016_07;
_EventDriver ev_building0_msg_1016_08;
_EventDriver ev_building0_msg_LockedKey;

int ev_building0_bd12_elv_init();
int ev_building0_bd12_elv_exec(sfObj* obj);
int ev_building0_bd12_elv_trgchk(sfObj* obj);
int ev_building0_bd24_2230_end();

// 
// Start address: 0x1ed7ff0
int ev_building0_bd12_elv_init()
{
	// Line 1119, Address: 0x1ed7ff0, Func Offset: 0
	// Line 1120, Address: 0x1ed7ffc, Func Offset: 0xc
	// Line 1122, Address: 0x1ed8000, Func Offset: 0x10
	// Line 1123, Address: 0x1ed8008, Func Offset: 0x18
	// Line 1124, Address: 0x1ed8010, Func Offset: 0x20
	// Line 1125, Address: 0x1ed8018, Func Offset: 0x28
	// Line 1126, Address: 0x1ed8020, Func Offset: 0x30
	// Line 1127, Address: 0x1ed8028, Func Offset: 0x38
	// Line 1130, Address: 0x1ed8030, Func Offset: 0x40
	// Line 1129, Address: 0x1ed8034, Func Offset: 0x44
	// Line 1130, Address: 0x1ed8038, Func Offset: 0x48
	// Func End, Address: 0x1ed8044, Func Offset: 0x54
	// Line 255, Address: 0x1ed7ff0, Func Offset: 0
	// Line 257, Address: 0x1ed7ff4, Func Offset: 0x4
	// Line 255, Address: 0x1ed7ff8, Func Offset: 0x8
	// Line 257, Address: 0x1ed7ffc, Func Offset: 0xc
	// Line 260, Address: 0x1ed8014, Func Offset: 0x24
	// Func End, Address: 0x1ed8020, Func Offset: 0x30
	// Line 74, Address: 0x1ed7ff0, Func Offset: 0
	// Func End, Address: 0x1ed7ff8, Func Offset: 0x8
}

// 
// Start address: 0x1ed8000
int ev_building0_bd12_elv_exec(sfObj* obj)
{
	int ret;
	int no;
	// Line 81, Address: 0x1ed8000, Func Offset: 0
	// Line 83, Address: 0x1ed8004, Func Offset: 0x4
	// Line 81, Address: 0x1ed8008, Func Offset: 0x8
	// Line 83, Address: 0x1ed801c, Func Offset: 0x1c
	// Line 84, Address: 0x1ed804c, Func Offset: 0x4c
	// Line 85, Address: 0x1ed8050, Func Offset: 0x50
	// Line 86, Address: 0x1ed805c, Func Offset: 0x5c
	// Line 87, Address: 0x1ed8064, Func Offset: 0x64
	// Line 88, Address: 0x1ed806c, Func Offset: 0x6c
	// Line 89, Address: 0x1ed8070, Func Offset: 0x70
	// Line 91, Address: 0x1ed8080, Func Offset: 0x80
	// Line 93, Address: 0x1ed80d4, Func Offset: 0xd4
	// Line 94, Address: 0x1ed810c, Func Offset: 0x10c
	// Line 95, Address: 0x1ed811c, Func Offset: 0x11c
	// Line 96, Address: 0x1ed8124, Func Offset: 0x124
	// Line 100, Address: 0x1ed8130, Func Offset: 0x130
	// Line 103, Address: 0x1ed8140, Func Offset: 0x140
	// Line 104, Address: 0x1ed8148, Func Offset: 0x148
	// Line 105, Address: 0x1ed8154, Func Offset: 0x154
	// Line 107, Address: 0x1ed8158, Func Offset: 0x158
	// Line 110, Address: 0x1ed817c, Func Offset: 0x17c
	// Line 111, Address: 0x1ed81b4, Func Offset: 0x1b4
	// Line 112, Address: 0x1ed81c4, Func Offset: 0x1c4
	// Line 114, Address: 0x1ed81cc, Func Offset: 0x1cc
	// Line 117, Address: 0x1ed81d8, Func Offset: 0x1d8
	// Line 118, Address: 0x1ed81e4, Func Offset: 0x1e4
	// Line 120, Address: 0x1ed81e8, Func Offset: 0x1e8
	// Line 121, Address: 0x1ed81f0, Func Offset: 0x1f0
	// Line 122, Address: 0x1ed81fc, Func Offset: 0x1fc
	// Line 124, Address: 0x1ed8200, Func Offset: 0x200
	// Line 136, Address: 0x1ed8208, Func Offset: 0x208
	// Line 137, Address: 0x1ed8214, Func Offset: 0x214
	// Line 139, Address: 0x1ed8218, Func Offset: 0x218
	// Line 145, Address: 0x1ed8220, Func Offset: 0x220
	// Line 147, Address: 0x1ed8228, Func Offset: 0x228
	// Line 151, Address: 0x1ed8234, Func Offset: 0x234
	// Line 153, Address: 0x1ed8238, Func Offset: 0x238
	// Line 154, Address: 0x1ed823c, Func Offset: 0x23c
	// Func End, Address: 0x1ed8254, Func Offset: 0x254
}

// 
// Start address: 0x1ed8260
int ev_building0_bd12_elv_trgchk(sfObj* obj)
{
	// Line 156, Address: 0x1ed8260, Func Offset: 0
	// Line 159, Address: 0x1ed8264, Func Offset: 0x4
	// Line 156, Address: 0x1ed8268, Func Offset: 0x8
	// Line 159, Address: 0x1ed826c, Func Offset: 0xc
	// Line 161, Address: 0x1ed828c, Func Offset: 0x2c
	// Func End, Address: 0x1ed8298, Func Offset: 0x38
}

// 
// Start address: 0x1ed82a0
int ev_building0_bd24_2230_end()
{
	// Line 190, Address: 0x1ed82a0, Func Offset: 0
	// Line 191, Address: 0x1ed82a4, Func Offset: 0x4
	// Line 190, Address: 0x1ed82a8, Func Offset: 0x8
	// Line 191, Address: 0x1ed82ac, Func Offset: 0xc
	// Line 193, Address: 0x1ed82bc, Func Offset: 0x1c
	// Line 192, Address: 0x1ed82c0, Func Offset: 0x20
	// Line 193, Address: 0x1ed82c4, Func Offset: 0x24
	// Func End, Address: 0x1ed82cc, Func Offset: 0x2c
}

