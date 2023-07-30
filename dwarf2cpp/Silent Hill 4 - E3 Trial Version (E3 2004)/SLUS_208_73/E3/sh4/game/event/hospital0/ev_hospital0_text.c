typedef struct _EventDriver;
typedef union _anon0;
typedef struct sfObj;
typedef struct _GAME_WORK;

typedef void(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef void(*type_11)(sfObj*);

typedef _anon0 type_0[256];
typedef float type_3[4];
typedef float type_4[4][4];
typedef int type_9[1];
typedef _anon0 type_10[4];
typedef int type_12[1];
typedef int type_13[1];
typedef int type_14[1];
typedef int type_15[1];
typedef int type_16[1];
typedef float type_17[4];
typedef int type_18[1];
typedef short type_19[2];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef unsigned char type_22[4];
typedef float type_23[1];
typedef int type_24[1];

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

_EventDriver ev_hospital0_hs07_157;
_EventDriver ev_hospital0_hs09_158;
_EventDriver ev_hospital0_fr32_open_eileen_room;
_EventDriver ev_hospital0_hs04_170;
_EventDriver ev_hospital0_hs34_1201;
_GAME_WORK gamew;
_EventDriver ev_hospital0_msg_1202_01;
_EventDriver ev_hospital0_msg_1202_03;
_EventDriver ev_hospital0_msg_1203_01;
_EventDriver ev_hospital0_msg_1203_02;
_EventDriver ev_hospital0_msg_1203_03;
_EventDriver ev_hospital0_msg_1204_01;
_EventDriver ev_hospital0_msg_1204_02;
_EventDriver ev_hospital0_msg_1205_01;
_EventDriver ev_hospital0_msg_1206_01;
_EventDriver ev_hospital0_msg_1206_02;
_EventDriver ev_hospital0_msg_1206_03;
_EventDriver ev_hospital0_msg_1206_04;
_EventDriver ev_hospital0_msg_1207_01;
_EventDriver ev_hospital0_msg_1207_02;
_EventDriver ev_hospital0_msg_1207_03;
_EventDriver ev_hospital0_msg_1207_04;
_EventDriver ev_hospital0_msg_1207_05;
_EventDriver ev_hospital0_msg_1207_06;
_EventDriver ev_hospital0_msg_1207_07;
_EventDriver ev_hospital0_msg_1207_08;
_EventDriver ev_hospital0_msg_1207_09;
_EventDriver ev_hospital0_msg_1207_10;
_EventDriver ev_hospital0_msg_1207_11;
_EventDriver ev_hospital0_msg_1207_12;
_EventDriver ev_hospital0_msg_1207_13;
_EventDriver ev_hospital0_msg_1207_14;
_EventDriver ev_hospital0_msg_1207_15;
_EventDriver ev_hospital0_msg_1207_16;
_EventDriver ev_hospital0_msg_1207_17;
_EventDriver ev_hospital0_msg_1207_18;
_EventDriver ev_hospital0_msg_1207_19;
_EventDriver ev_hospital0_msg_1207_20;
_EventDriver ev_hospital0_msg_1207_21;
_EventDriver ev_hospital0_msg_1207_22;
_EventDriver ev_hospital0_msg_1207_23;

int ev_hospital0_msg_1202_01_end();

// 
// Start address: 0x1ed67b0
int ev_hospital0_msg_1202_01_end()
{
	// Line 1292, Address: 0x1ed67b0, Func Offset: 0
	// Line 1293, Address: 0x1ed67b4, Func Offset: 0x4
	// Line 1292, Address: 0x1ed67b8, Func Offset: 0x8
	// Line 1293, Address: 0x1ed67c0, Func Offset: 0x10
	// Line 1294, Address: 0x1ed67d4, Func Offset: 0x24
	// Line 1296, Address: 0x1ed67dc, Func Offset: 0x2c
	// Line 1295, Address: 0x1ed67e0, Func Offset: 0x30
	// Line 1296, Address: 0x1ed67e4, Func Offset: 0x34
	// Func End, Address: 0x1ed67f0, Func Offset: 0x40
	// Line 137, Address: 0x1ed67b0, Func Offset: 0
	// Line 139, Address: 0x1ed67b4, Func Offset: 0x4
	// Line 137, Address: 0x1ed67b8, Func Offset: 0x8
	// Line 139, Address: 0x1ed67bc, Func Offset: 0xc
	// Line 141, Address: 0x1ed67cc, Func Offset: 0x1c
	// Line 140, Address: 0x1ed67d0, Func Offset: 0x20
	// Line 141, Address: 0x1ed67d4, Func Offset: 0x24
	// Func End, Address: 0x1ed67dc, Func Offset: 0x2c
}

