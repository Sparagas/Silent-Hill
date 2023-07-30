typedef struct EventFlag;
typedef struct _GAME_WORK;


typedef unsigned char type_0[320];
typedef int type_1[1];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef float type_6[4][4];
typedef int type_7[1];
typedef int type_8[1];
typedef int type_9[1];
typedef float type_10[4];

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

EventFlag event_flag;
_GAME_WORK gamew;

void GameTunnelSceneInit();
void GameTunnelExec();
void GameTunnelSceneEnd();

// 
// Start address: 0x289600
void GameTunnelSceneInit()
{
	// Line 26, Address: 0x289600, Func Offset: 0
	// Line 27, Address: 0x289608, Func Offset: 0x8
	// Line 29, Address: 0x289610, Func Offset: 0x10
	// Line 30, Address: 0x289618, Func Offset: 0x18
	// Func End, Address: 0x289624, Func Offset: 0x24
}

// 
// Start address: 0x289630
void GameTunnelExec()
{
	// Line 33, Address: 0x289630, Func Offset: 0
	// Line 34, Address: 0x289638, Func Offset: 0x8
	// Line 36, Address: 0x289640, Func Offset: 0x10
	// Line 39, Address: 0x289678, Func Offset: 0x48
	// Line 40, Address: 0x289688, Func Offset: 0x58
	// Line 42, Address: 0x289690, Func Offset: 0x60
	// Line 45, Address: 0x2896a0, Func Offset: 0x70
	// Line 48, Address: 0x2896a8, Func Offset: 0x78
	// Line 49, Address: 0x2896cc, Func Offset: 0x9c
	// Line 50, Address: 0x2896e4, Func Offset: 0xb4
	// Line 52, Address: 0x2896e8, Func Offset: 0xb8
	// Line 53, Address: 0x2896f0, Func Offset: 0xc0
	// Line 56, Address: 0x2896f8, Func Offset: 0xc8
	// Line 57, Address: 0x289708, Func Offset: 0xd8
	// Line 62, Address: 0x289710, Func Offset: 0xe0
	// Line 63, Address: 0x289718, Func Offset: 0xe8
	// Func End, Address: 0x289724, Func Offset: 0xf4
}

// 
// Start address: 0x289730
void GameTunnelSceneEnd()
{
	// Line 66, Address: 0x289730, Func Offset: 0
	// Line 68, Address: 0x289738, Func Offset: 0x8
	// Line 69, Address: 0x289740, Func Offset: 0x10
	// Line 71, Address: 0x289748, Func Offset: 0x18
	// Line 72, Address: 0x289760, Func Offset: 0x30
	// Line 73, Address: 0x289768, Func Offset: 0x38
	// Func End, Address: 0x289774, Func Offset: 0x44
}

