typedef enum _enum : unsigned char;
typedef struct _anon0;
typedef struct _GAME_WORK;


typedef float type_0[4];
typedef float type_1[4][4];
typedef int type_2[1];
typedef int type_3[1];
typedef _anon0 type_4[4];
typedef float type_5[4];
typedef int type_6[1];
typedef int type_7[1];
typedef int type_8[1];
typedef int type_9[1];
typedef int type_10[1];

enum _enum : unsigned char
{
	GAME_FILTER_TYPE_NONE,
	GAME_FILTER_TYPE_WHITEOUT,
	GAME_FILTER_TYPE_REDOUT,
	GAME_FILTER_TYPE_BLOODEDGE,
	GAME_FILTER_TYPE_BLUEEDGE,
	GAME_FILTER_TYPE_CONTRAST,
	GAME_FILTER_TYPE_ILLUSTRATE,
	GAME_FILTER_TYPE_SHADE,
	GAME_FILTER_TYPE_SHADE_BL,
	GAME_FILTER_TYPE_GRAYSCALE,
	GAME_FILTER_TYPE_SEPIA,
	GAME_FILTER_TYPE_DMY
};

struct _anon0
{
	_enum type;
	int depth;
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

int filter_data_num;
_anon0 filter_data[4];
_GAME_WORK gamew;

void GameFilterControlClear();
int GameFilterControlSet(_enum type, int depth);
void GameFilterControlDraw();

// 
// Start address: 0x2a5cb0
void GameFilterControlClear()
{
	// Line 35, Address: 0x2a5cb0, Func Offset: 0
	// Line 38, Address: 0x2a5cb4, Func Offset: 0x4
	// Func End, Address: 0x2a5cbc, Func Offset: 0xc
}

// 
// Start address: 0x2a5cc0
int GameFilterControlSet(_enum type, int depth)
{
	// Line 50, Address: 0x2a5cc0, Func Offset: 0
	// Line 52, Address: 0x2a5cc8, Func Offset: 0x8
	// Line 53, Address: 0x2a5cd4, Func Offset: 0x14
	// Line 56, Address: 0x2a5ce0, Func Offset: 0x20
	// Line 57, Address: 0x2a5d00, Func Offset: 0x40
	// Line 59, Address: 0x2a5d10, Func Offset: 0x50
	// Line 60, Address: 0x2a5d14, Func Offset: 0x54
	// Line 59, Address: 0x2a5d18, Func Offset: 0x58
	// Line 60, Address: 0x2a5d1c, Func Offset: 0x5c
	// Line 64, Address: 0x2a5d20, Func Offset: 0x60
	// Line 62, Address: 0x2a5d28, Func Offset: 0x68
	// Line 59, Address: 0x2a5d2c, Func Offset: 0x6c
	// Line 60, Address: 0x2a5d30, Func Offset: 0x70
	// Line 59, Address: 0x2a5d34, Func Offset: 0x74
	// Line 60, Address: 0x2a5d38, Func Offset: 0x78
	// Line 62, Address: 0x2a5d3c, Func Offset: 0x7c
	// Line 64, Address: 0x2a5d4c, Func Offset: 0x8c
	// Line 65, Address: 0x2a5d50, Func Offset: 0x90
	// Func End, Address: 0x2a5d58, Func Offset: 0x98
}

// 
// Start address: 0x2a5d60
void GameFilterControlDraw()
{
	int i;
	// Line 69, Address: 0x2a5d60, Func Offset: 0
	// Line 72, Address: 0x2a5d64, Func Offset: 0x4
	// Line 69, Address: 0x2a5d68, Func Offset: 0x8
	// Line 72, Address: 0x2a5d74, Func Offset: 0x14
	// Line 73, Address: 0x2a5d90, Func Offset: 0x30
	// Line 75, Address: 0x2a5db8, Func Offset: 0x58
	// Line 76, Address: 0x2a5dc4, Func Offset: 0x64
	// Line 77, Address: 0x2a5dcc, Func Offset: 0x6c
	// Line 78, Address: 0x2a5dd4, Func Offset: 0x74
	// Line 79, Address: 0x2a5dd8, Func Offset: 0x78
	// Line 80, Address: 0x2a5de4, Func Offset: 0x84
	// Line 81, Address: 0x2a5dec, Func Offset: 0x8c
	// Line 82, Address: 0x2a5df4, Func Offset: 0x94
	// Line 83, Address: 0x2a5df8, Func Offset: 0x98
	// Line 84, Address: 0x2a5e04, Func Offset: 0xa4
	// Line 85, Address: 0x2a5e0c, Func Offset: 0xac
	// Line 86, Address: 0x2a5e14, Func Offset: 0xb4
	// Line 87, Address: 0x2a5e18, Func Offset: 0xb8
	// Line 88, Address: 0x2a5e24, Func Offset: 0xc4
	// Line 89, Address: 0x2a5e38, Func Offset: 0xd8
	// Line 91, Address: 0x2a5e40, Func Offset: 0xe0
	// Line 92, Address: 0x2a5e4c, Func Offset: 0xec
	// Line 93, Address: 0x2a5e54, Func Offset: 0xf4
	// Line 94, Address: 0x2a5e5c, Func Offset: 0xfc
	// Line 95, Address: 0x2a5e60, Func Offset: 0x100
	// Line 96, Address: 0x2a5e6c, Func Offset: 0x10c
	// Line 97, Address: 0x2a5e80, Func Offset: 0x120
	// Line 99, Address: 0x2a5e88, Func Offset: 0x128
	// Line 100, Address: 0x2a5e94, Func Offset: 0x134
	// Line 101, Address: 0x2a5e9c, Func Offset: 0x13c
	// Line 102, Address: 0x2a5ea4, Func Offset: 0x144
	// Line 103, Address: 0x2a5ea8, Func Offset: 0x148
	// Line 104, Address: 0x2a5eb4, Func Offset: 0x154
	// Line 105, Address: 0x2a5ec0, Func Offset: 0x160
	// Line 107, Address: 0x2a5ec8, Func Offset: 0x168
	// Line 108, Address: 0x2a5ed4, Func Offset: 0x174
	// Line 109, Address: 0x2a5edc, Func Offset: 0x17c
	// Line 110, Address: 0x2a5ee4, Func Offset: 0x184
	// Line 111, Address: 0x2a5ee8, Func Offset: 0x188
	// Line 112, Address: 0x2a5ef4, Func Offset: 0x194
	// Line 117, Address: 0x2a5efc, Func Offset: 0x19c
	// Line 119, Address: 0x2a5f18, Func Offset: 0x1b8
	// Line 122, Address: 0x2a5f20, Func Offset: 0x1c0
	// Func End, Address: 0x2a5f34, Func Offset: 0x1d4
}

