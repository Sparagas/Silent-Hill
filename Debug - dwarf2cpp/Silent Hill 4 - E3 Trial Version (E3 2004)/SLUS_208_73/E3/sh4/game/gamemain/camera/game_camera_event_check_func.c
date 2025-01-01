typedef struct _GAME_WORK;


typedef float type_0[4];
typedef int type_1[1];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef float type_6[4][4];
typedef int type_7[1];
typedef int type_8[1];
typedef int type_9[1];

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

_GAME_WORK gamew;

int MzRoomBrightChkFunc();

// 
// Start address: 0x2e2210
int MzRoomBrightChkFunc()
{
	// Line 27, Address: 0x2e2210, Func Offset: 0
	// Line 28, Address: 0x2e2214, Func Offset: 0x4
	// Line 27, Address: 0x2e2218, Func Offset: 0x8
	// Line 29, Address: 0x2e221c, Func Offset: 0xc
	// Line 32, Address: 0x2e2224, Func Offset: 0x14
	// Line 29, Address: 0x2e2228, Func Offset: 0x18
	// Line 32, Address: 0x2e222c, Func Offset: 0x1c
	// Func End, Address: 0x2e2234, Func Offset: 0x24
}

