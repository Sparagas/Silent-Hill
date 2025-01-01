typedef struct _GAME_WORK;
typedef struct EventFlag;
typedef struct sfObj;
typedef struct _EventInst;
typedef union _anon0;
typedef struct _EventDriver;

typedef void(*type_9)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_25)(sfObj*);
typedef int(*type_28)(sfObj*);

typedef int type_0[1];
typedef int type_1[1];
typedef int type_2[1];
typedef unsigned char type_3[320];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[2];
typedef int type_7[2][12];
typedef _anon0 type_8[256];
typedef short type_11[2];
typedef float type_14[4];
typedef unsigned short type_15[2];
typedef float type_16[4][4];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef int type_23[1];
typedef int type_26[1];
typedef float type_27[4];
typedef _anon0 type_29[4];

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

_GAME_WORK gamew;
int tunnel_move;
EventFlag event_flag;
_EventDriver ev_tunnel0_gt01_camera_demo;
_EventDriver ev_tunnel0_gt02_camera_demo;
_EventDriver ev_tunnel0_gt03_camera_demo;
_EventDriver ev_tunnel0_gt04_camera_demo;
_EventDriver ev_tunnel0_gt05_camera_demo;
_EventDriver ev_tunnel0_gt06_camera_demo;
_EventDriver ev_tunnel0_gt07_camera_demo;
_EventDriver ev_tunnel0_gt08_camera_demo;
_EventDriver ev_tunnel0_gt09_camera_demo;
_EventDriver ev_tunnel0_gt10_camera_demo;
_EventDriver ev_tunnel0_gt11_camera_demo;

int ev_tunnel0_trgchk_common(sfObj* obj);
int ev_tunnel0_init_common(sfObj* obj);
int ev_tunnel0_exec_common(sfObj* obj);
int ev_tunnel0_draw_common(sfObj* obj);
void ev_tunnel0_set_player_pos();
int ev_tunnel0_end_common(sfObj* obj);
int ev_tunnel0_gt01_trgchk(sfObj* obj);
int ev_tunnel0_gt02_end(sfObj* obj);
int ev_tunnel0_gt03_end(sfObj* obj);
int ev_tunnel0_gt04_end(sfObj* obj);
int ev_tunnel0_gt05_end(sfObj* obj);

// 
// Start address: 0x2a6160
int ev_tunnel0_trgchk_common(sfObj* obj)
{
	// Line 62, Address: 0x2a6160, Func Offset: 0
	// Line 64, Address: 0x2a6164, Func Offset: 0x4
	// Line 62, Address: 0x2a6168, Func Offset: 0x8
	// Line 64, Address: 0x2a616c, Func Offset: 0xc
	// Line 67, Address: 0x2a618c, Func Offset: 0x2c
	// Func End, Address: 0x2a6198, Func Offset: 0x38
}

// 
// Start address: 0x2a61a0
int ev_tunnel0_init_common(sfObj* obj)
{
	_EventInst* inst;
	_anon0 val;
	int demo_no[2][12];
	// Line 69, Address: 0x2a61a0, Func Offset: 0
	// Line 70, Address: 0x2a61ac, Func Offset: 0xc
	// Line 72, Address: 0x2a61b4, Func Offset: 0x14
	// Line 88, Address: 0x2a61c0, Func Offset: 0x20
	// Line 72, Address: 0x2a61c4, Func Offset: 0x24
	// Line 88, Address: 0x2a61c8, Func Offset: 0x28
	// Line 72, Address: 0x2a61cc, Func Offset: 0x2c
	// Line 88, Address: 0x2a61f8, Func Offset: 0x58
	// Line 90, Address: 0x2a6204, Func Offset: 0x64
	// Line 92, Address: 0x2a6210, Func Offset: 0x70
	// Line 94, Address: 0x2a6218, Func Offset: 0x78
	// Line 95, Address: 0x2a622c, Func Offset: 0x8c
	// Line 97, Address: 0x2a6230, Func Offset: 0x90
	// Line 98, Address: 0x2a6238, Func Offset: 0x98
	// Line 97, Address: 0x2a623c, Func Offset: 0x9c
	// Line 98, Address: 0x2a625c, Func Offset: 0xbc
	// Line 100, Address: 0x2a6268, Func Offset: 0xc8
	// Line 101, Address: 0x2a6278, Func Offset: 0xd8
	// Line 103, Address: 0x2a6288, Func Offset: 0xe8
	// Line 104, Address: 0x2a6290, Func Offset: 0xf0
	// Func End, Address: 0x2a62a0, Func Offset: 0x100
}

// 
// Start address: 0x2a62a0
int ev_tunnel0_exec_common(sfObj* obj)
{
	_anon0 val;
	// Line 106, Address: 0x2a62a0, Func Offset: 0
	// Line 107, Address: 0x2a62ac, Func Offset: 0xc
	// Line 109, Address: 0x2a62d4, Func Offset: 0x34
	// Line 112, Address: 0x2a62fc, Func Offset: 0x5c
	// Func End, Address: 0x2a630c, Func Offset: 0x6c
}

// 
// Start address: 0x2a6310
int ev_tunnel0_draw_common(sfObj* obj)
{
	_anon0 val;
	// Line 114, Address: 0x2a6310, Func Offset: 0
	// Line 115, Address: 0x2a631c, Func Offset: 0xc
	// Line 117, Address: 0x2a6344, Func Offset: 0x34
	// Line 120, Address: 0x2a635c, Func Offset: 0x4c
	// Func End, Address: 0x2a636c, Func Offset: 0x5c
}

// 
// Start address: 0x2a6370
void ev_tunnel0_set_player_pos()
{
	// Line 123, Address: 0x2a6370, Func Offset: 0
	// Line 124, Address: 0x2a6374, Func Offset: 0x4
	// Line 123, Address: 0x2a6378, Func Offset: 0x8
	// Line 124, Address: 0x2a637c, Func Offset: 0xc
	// Line 125, Address: 0x2a6388, Func Offset: 0x18
	// Line 126, Address: 0x2a6390, Func Offset: 0x20
	// Line 128, Address: 0x2a6398, Func Offset: 0x28
	// Line 130, Address: 0x2a63a0, Func Offset: 0x30
	// Func End, Address: 0x2a63ac, Func Offset: 0x3c
}

// 
// Start address: 0x2a63b0
int ev_tunnel0_end_common(sfObj* obj)
{
	// Line 133, Address: 0x2a63b0, Func Offset: 0
	// Line 134, Address: 0x2a63c0, Func Offset: 0x10
	// Line 135, Address: 0x2a63dc, Func Offset: 0x2c
	// Line 136, Address: 0x2a63e4, Func Offset: 0x34
	// Line 137, Address: 0x2a63ec, Func Offset: 0x3c
	// Func End, Address: 0x2a6400, Func Offset: 0x50
}

// 
// Start address: 0x2a6400
int ev_tunnel0_gt01_trgchk(sfObj* obj)
{
	// Line 143, Address: 0x2a6400, Func Offset: 0
	// Line 144, Address: 0x2a6404, Func Offset: 0x4
	// Line 143, Address: 0x2a6408, Func Offset: 0x8
	// Line 144, Address: 0x2a640c, Func Offset: 0xc
	// Line 145, Address: 0x2a642c, Func Offset: 0x2c
	// Line 146, Address: 0x2a643c, Func Offset: 0x3c
	// Line 147, Address: 0x2a6440, Func Offset: 0x40
	// Line 148, Address: 0x2a6448, Func Offset: 0x48
	// Func End, Address: 0x2a6454, Func Offset: 0x54
}

// 
// Start address: 0x2a6460
int ev_tunnel0_gt02_end(sfObj* obj)
{
	float start_pos[4];
	// Line 163, Address: 0x2a6460, Func Offset: 0
	// Line 164, Address: 0x2a6470, Func Offset: 0x10
	// Line 165, Address: 0x2a648c, Func Offset: 0x2c
	// Line 166, Address: 0x2a64ac, Func Offset: 0x4c
	// Line 167, Address: 0x2a64b8, Func Offset: 0x58
	// Line 168, Address: 0x2a64cc, Func Offset: 0x6c
	// Line 170, Address: 0x2a64d8, Func Offset: 0x78
	// Line 172, Address: 0x2a64e0, Func Offset: 0x80
	// Line 174, Address: 0x2a64e8, Func Offset: 0x88
	// Func End, Address: 0x2a64fc, Func Offset: 0x9c
}

// 
// Start address: 0x2a6500
int ev_tunnel0_gt03_end(sfObj* obj)
{
	float start_pos[4];
	// Line 189, Address: 0x2a6500, Func Offset: 0
	// Line 190, Address: 0x2a6510, Func Offset: 0x10
	// Line 191, Address: 0x2a652c, Func Offset: 0x2c
	// Line 192, Address: 0x2a654c, Func Offset: 0x4c
	// Line 193, Address: 0x2a6558, Func Offset: 0x58
	// Line 194, Address: 0x2a656c, Func Offset: 0x6c
	// Line 196, Address: 0x2a6578, Func Offset: 0x78
	// Line 198, Address: 0x2a6580, Func Offset: 0x80
	// Line 199, Address: 0x2a6588, Func Offset: 0x88
	// Func End, Address: 0x2a659c, Func Offset: 0x9c
}

// 
// Start address: 0x2a65a0
int ev_tunnel0_gt04_end(sfObj* obj)
{
	float start_pos[4];
	// Line 214, Address: 0x2a65a0, Func Offset: 0
	// Line 215, Address: 0x2a65b0, Func Offset: 0x10
	// Line 216, Address: 0x2a65cc, Func Offset: 0x2c
	// Line 217, Address: 0x2a65ec, Func Offset: 0x4c
	// Line 218, Address: 0x2a65f8, Func Offset: 0x58
	// Line 219, Address: 0x2a660c, Func Offset: 0x6c
	// Line 221, Address: 0x2a6618, Func Offset: 0x78
	// Line 223, Address: 0x2a6620, Func Offset: 0x80
	// Line 225, Address: 0x2a6628, Func Offset: 0x88
	// Func End, Address: 0x2a663c, Func Offset: 0x9c
}

// 
// Start address: 0x2a6640
int ev_tunnel0_gt05_end(sfObj* obj)
{
	float start_pos[4];
	// Line 240, Address: 0x2a6640, Func Offset: 0
	// Line 241, Address: 0x2a6650, Func Offset: 0x10
	// Line 242, Address: 0x2a666c, Func Offset: 0x2c
	// Line 243, Address: 0x2a668c, Func Offset: 0x4c
	// Line 244, Address: 0x2a6698, Func Offset: 0x58
	// Line 245, Address: 0x2a66ac, Func Offset: 0x6c
	// Line 247, Address: 0x2a66b8, Func Offset: 0x78
	// Line 249, Address: 0x2a66c0, Func Offset: 0x80
	// Line 250, Address: 0x2a66c8, Func Offset: 0x88
	// Func End, Address: 0x2a66dc, Func Offset: 0x9c
}

