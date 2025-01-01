typedef struct _Hr3ldkAnotherData;
typedef struct _GAME_WORK;
typedef struct EventFlag;


typedef int type_0[1];
typedef int type_1[1];
typedef int type_2[1];
typedef float type_3[4];
typedef float type_4[4][4];
typedef int type_5[1];
typedef int type_6[1];
typedef int type_7[1];
typedef float type_8[4];
typedef int type_9[1];
typedef unsigned char type_10[320];

struct _Hr3ldkAnotherData
{
	short stage;
	short scene;
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

_Hr3ldkAnotherData hr3ldk_another_data;
_GAME_WORK gamew;
EventFlag event_flag;

void ev_3ldk0_stage_init();
void ev_3ldk0_stage_main();
void ev_3ldk0_stage_end();

// 
// Start address: 0x1ee4850
void ev_3ldk0_stage_init()
{
	// Line 53, Address: 0x1ee4850, Func Offset: 0
	// Line 55, Address: 0x1ee4858, Func Offset: 0x8
	// Line 56, Address: 0x1ee4860, Func Offset: 0x10
	// Line 59, Address: 0x1ee4868, Func Offset: 0x18
	// Line 61, Address: 0x1ee4870, Func Offset: 0x20
	// Line 59, Address: 0x1ee4874, Func Offset: 0x24
	// Line 61, Address: 0x1ee4878, Func Offset: 0x28
	// Line 59, Address: 0x1ee487c, Func Offset: 0x2c
	// Line 61, Address: 0x1ee4880, Func Offset: 0x30
	// Line 59, Address: 0x1ee4884, Func Offset: 0x34
	// Line 61, Address: 0x1ee4888, Func Offset: 0x38
	// Line 60, Address: 0x1ee4890, Func Offset: 0x40
	// Line 64, Address: 0x1ee48a0, Func Offset: 0x50
	// Line 67, Address: 0x1ee48b0, Func Offset: 0x60
	// Line 70, Address: 0x1ee48b8, Func Offset: 0x68
	// Line 71, Address: 0x1ee48c0, Func Offset: 0x70
	// Line 72, Address: 0x1ee48c4, Func Offset: 0x74
	// Line 73, Address: 0x1ee48d4, Func Offset: 0x84
	// Line 76, Address: 0x1ee48d8, Func Offset: 0x88
	// Line 77, Address: 0x1ee48e0, Func Offset: 0x90
	// Func End, Address: 0x1ee48ec, Func Offset: 0x9c
}

// 
// Start address: 0x1ee48f0
void ev_3ldk0_stage_main()
{
	// Line 84, Address: 0x1ee48f0, Func Offset: 0
	// Func End, Address: 0x1ee48f8, Func Offset: 0x8
}

// 
// Start address: 0x1ee4900
void ev_3ldk0_stage_end()
{
	// Line 93, Address: 0x1ee4900, Func Offset: 0
	// Line 94, Address: 0x1ee4910, Func Offset: 0x10
	// Func End, Address: 0x1ee4918, Func Offset: 0x18
}

