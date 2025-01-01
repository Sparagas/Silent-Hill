typedef struct EventFlag;
typedef struct _GAME_WORK;


typedef int type_0[1];
typedef int type_1[1];
typedef unsigned char type_2[320];
typedef int type_3[1];
typedef float type_4[4];
typedef float type_5[4][4];
typedef int type_6[1];
typedef int type_7[1];
typedef int type_8[1];
typedef float type_9[4];
typedef int type_10[1];

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

_GAME_WORK gamew;
EventFlag event_flag;

int StageInfoSubjectivity();
int StageInfoGetStageGroup();
int StageInfoIsLatterHalf();
int StageInfoIsAfterPrologue();

// 
// Start address: 0x279060
int StageInfoSubjectivity()
{
	// Line 54, Address: 0x279060, Func Offset: 0
	// Line 55, Address: 0x279064, Func Offset: 0x4
	// Line 54, Address: 0x279068, Func Offset: 0x8
	// Line 55, Address: 0x27906c, Func Offset: 0xc
	// Line 56, Address: 0x279090, Func Offset: 0x30
	// Line 58, Address: 0x279098, Func Offset: 0x38
	// Line 59, Address: 0x2790a0, Func Offset: 0x40
	// Func End, Address: 0x2790a8, Func Offset: 0x48
}

// 
// Start address: 0x2790b0
int StageInfoGetStageGroup()
{
	// Line 72, Address: 0x2790b0, Func Offset: 0
	// Func End, Address: 0x2790b8, Func Offset: 0x8
}

// 
// Start address: 0x2790c0
int StageInfoIsLatterHalf()
{
	// Line 84, Address: 0x2790c0, Func Offset: 0
	// Line 85, Address: 0x2790cc, Func Offset: 0xc
	// Func End, Address: 0x2790d4, Func Offset: 0x14
}

// 
// Start address: 0x2790e0
int StageInfoIsAfterPrologue()
{
	// Line 98, Address: 0x2790e0, Func Offset: 0
	// Line 99, Address: 0x2790ec, Func Offset: 0xc
	// Func End, Address: 0x2790f4, Func Offset: 0x14
}

