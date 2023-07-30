typedef struct _GAME_WORK;
typedef struct EventFlag;


typedef int type_0[1];
typedef int type_1[1];
typedef float type_2[4];
typedef float type_3[4][4];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef float type_7[4];
typedef int type_8[1];
typedef unsigned char type_9[320];
typedef int type_10[1];

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

int left_enemy_check_step;
EventFlag event_flag;
_GAME_WORK gamew;

void GameSpiralSceneInit();
void GameSpiralMain();

// 
// Start address: 0x289540
void GameSpiralSceneInit()
{
	// Line 28, Address: 0x289540, Func Offset: 0
	// Line 30, Address: 0x289544, Func Offset: 0x4
	// Func End, Address: 0x28954c, Func Offset: 0xc
}

// 
// Start address: 0x289550
void GameSpiralMain()
{
	// Line 33, Address: 0x289550, Func Offset: 0
	// Line 34, Address: 0x289554, Func Offset: 0x4
	// Line 33, Address: 0x289558, Func Offset: 0x8
	// Line 34, Address: 0x28955c, Func Offset: 0xc
	// Line 35, Address: 0x28956c, Func Offset: 0x1c
	// Line 36, Address: 0x28958c, Func Offset: 0x3c
	// Line 37, Address: 0x289590, Func Offset: 0x40
	// Line 38, Address: 0x289598, Func Offset: 0x48
	// Line 41, Address: 0x2895a0, Func Offset: 0x50
	// Line 43, Address: 0x2895b0, Func Offset: 0x60
	// Line 44, Address: 0x2895c4, Func Offset: 0x74
	// Line 47, Address: 0x2895d0, Func Offset: 0x80
	// Line 52, Address: 0x2895e4, Func Offset: 0x94
	// Line 53, Address: 0x2895e8, Func Offset: 0x98
	// Func End, Address: 0x2895f4, Func Offset: 0xa4
}

