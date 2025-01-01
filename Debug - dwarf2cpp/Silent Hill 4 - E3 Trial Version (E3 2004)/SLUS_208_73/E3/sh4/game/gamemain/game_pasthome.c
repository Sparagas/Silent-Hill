typedef enum sgLightType : unsigned char;
typedef struct _anon0;
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

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct _anon0
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
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

_GAME_WORK gamew;
EventFlag event_flag;

void GamePasthomeSceneInit();
void GamePasthomeExec();
void GamePasthomeEnd();

// 
// Start address: 0x1ed3fe0
void GamePasthomeSceneInit()
{
	float pos[4];
	float spd[4];
	_anon0 cm21_light;
	// Line 29, Address: 0x1ed3fe0, Func Offset: 0
	// Line 34, Address: 0x1ed3fe4, Func Offset: 0x4
	// Line 29, Address: 0x1ed3fe8, Func Offset: 0x8
	// Line 34, Address: 0x1ed3fec, Func Offset: 0xc
	// Line 35, Address: 0x1ed3ff0, Func Offset: 0x10
	// Line 34, Address: 0x1ed3ff4, Func Offset: 0x14
	// Line 35, Address: 0x1ed3ff8, Func Offset: 0x18
	// Line 34, Address: 0x1ed3ffc, Func Offset: 0x1c
	// Line 35, Address: 0x1ed4000, Func Offset: 0x20
	// Line 34, Address: 0x1ed4004, Func Offset: 0x24
	// Line 35, Address: 0x1ed4008, Func Offset: 0x28
	// Line 36, Address: 0x1ed4010, Func Offset: 0x30
	// Line 37, Address: 0x1ed4018, Func Offset: 0x38
	// Line 36, Address: 0x1ed401c, Func Offset: 0x3c
	// Line 37, Address: 0x1ed4020, Func Offset: 0x40
	// Line 36, Address: 0x1ed4024, Func Offset: 0x44
	// Line 37, Address: 0x1ed4028, Func Offset: 0x48
	// Line 36, Address: 0x1ed402c, Func Offset: 0x4c
	// Line 37, Address: 0x1ed4030, Func Offset: 0x50
	// Line 38, Address: 0x1ed4038, Func Offset: 0x58
	// Line 39, Address: 0x1ed404c, Func Offset: 0x6c
	// Line 41, Address: 0x1ed405c, Func Offset: 0x7c
	// Line 43, Address: 0x1ed4088, Func Offset: 0xa8
	// Line 44, Address: 0x1ed409c, Func Offset: 0xbc
	// Line 45, Address: 0x1ed40ac, Func Offset: 0xcc
	// Line 47, Address: 0x1ed40b4, Func Offset: 0xd4
	// Line 48, Address: 0x1ed40cc, Func Offset: 0xec
	// Line 49, Address: 0x1ed40dc, Func Offset: 0xfc
	// Line 51, Address: 0x1ed40e4, Func Offset: 0x104
	// Line 52, Address: 0x1ed40fc, Func Offset: 0x11c
	// Line 57, Address: 0x1ed4110, Func Offset: 0x130
	// Line 58, Address: 0x1ed412c, Func Offset: 0x14c
	// Line 60, Address: 0x1ed4130, Func Offset: 0x150
	// Line 61, Address: 0x1ed4140, Func Offset: 0x160
	// Line 63, Address: 0x1ed416c, Func Offset: 0x18c
	// Line 69, Address: 0x1ed4190, Func Offset: 0x1b0
	// Line 70, Address: 0x1ed4198, Func Offset: 0x1b8
	// Line 71, Address: 0x1ed41a0, Func Offset: 0x1c0
	// Line 73, Address: 0x1ed41b4, Func Offset: 0x1d4
	// Line 74, Address: 0x1ed41c0, Func Offset: 0x1e0
	// Line 75, Address: 0x1ed41e0, Func Offset: 0x200
	// Line 76, Address: 0x1ed4200, Func Offset: 0x220
	// Line 77, Address: 0x1ed421c, Func Offset: 0x23c
	// Line 78, Address: 0x1ed4228, Func Offset: 0x248
	// Line 83, Address: 0x1ed4230, Func Offset: 0x250
	// Func End, Address: 0x1ed423c, Func Offset: 0x25c
}

// 
// Start address: 0x1ed4240
void GamePasthomeExec()
{
	// Line 86, Address: 0x1ed4240, Func Offset: 0
	// Line 88, Address: 0x1ed4244, Func Offset: 0x4
	// Line 86, Address: 0x1ed4248, Func Offset: 0x8
	// Line 88, Address: 0x1ed424c, Func Offset: 0xc
	// Line 89, Address: 0x1ed4250, Func Offset: 0x10
	// Line 88, Address: 0x1ed4254, Func Offset: 0x14
	// Line 89, Address: 0x1ed4258, Func Offset: 0x18
	// Line 88, Address: 0x1ed425c, Func Offset: 0x1c
	// Line 89, Address: 0x1ed4260, Func Offset: 0x20
	// Line 88, Address: 0x1ed4264, Func Offset: 0x24
	// Line 89, Address: 0x1ed4268, Func Offset: 0x28
	// Line 90, Address: 0x1ed4270, Func Offset: 0x30
	// Line 91, Address: 0x1ed4278, Func Offset: 0x38
	// Line 90, Address: 0x1ed427c, Func Offset: 0x3c
	// Line 91, Address: 0x1ed4280, Func Offset: 0x40
	// Line 90, Address: 0x1ed4284, Func Offset: 0x44
	// Line 91, Address: 0x1ed4288, Func Offset: 0x48
	// Line 90, Address: 0x1ed428c, Func Offset: 0x4c
	// Line 91, Address: 0x1ed4290, Func Offset: 0x50
	// Line 92, Address: 0x1ed4298, Func Offset: 0x58
	// Line 93, Address: 0x1ed42ac, Func Offset: 0x6c
	// Line 95, Address: 0x1ed42bc, Func Offset: 0x7c
	// Line 97, Address: 0x1ed42e8, Func Offset: 0xa8
	// Line 98, Address: 0x1ed42fc, Func Offset: 0xbc
	// Line 99, Address: 0x1ed430c, Func Offset: 0xcc
	// Line 101, Address: 0x1ed4314, Func Offset: 0xd4
	// Line 102, Address: 0x1ed432c, Func Offset: 0xec
	// Line 103, Address: 0x1ed433c, Func Offset: 0xfc
	// Line 105, Address: 0x1ed4344, Func Offset: 0x104
	// Line 106, Address: 0x1ed435c, Func Offset: 0x11c
	// Line 110, Address: 0x1ed4370, Func Offset: 0x130
	// Line 111, Address: 0x1ed4384, Func Offset: 0x144
	// Line 112, Address: 0x1ed4394, Func Offset: 0x154
	// Line 113, Address: 0x1ed439c, Func Offset: 0x15c
	// Line 114, Address: 0x1ed43a0, Func Offset: 0x160
	// Func End, Address: 0x1ed43ac, Func Offset: 0x16c
}

// 
// Start address: 0x1ed43b0
void GamePasthomeEnd()
{
	// Line 88, Address: 0x1ed43b0, Func Offset: 0
	// Line 91, Address: 0x1ed43d0, Func Offset: 0x20
	// Line 93, Address: 0x1ed43d4, Func Offset: 0x24
	// Line 95, Address: 0x1ed43d8, Func Offset: 0x28
	// Func End, Address: 0x1ed43e0, Func Offset: 0x30
	// Line 117, Address: 0x1ed43b0, Func Offset: 0
	// Line 118, Address: 0x1ed43b4, Func Offset: 0x4
	// Line 117, Address: 0x1ed43b8, Func Offset: 0x8
	// Line 118, Address: 0x1ed43bc, Func Offset: 0xc
	// Line 119, Address: 0x1ed43cc, Func Offset: 0x1c
	// Line 120, Address: 0x1ed43d4, Func Offset: 0x24
	// Line 121, Address: 0x1ed43d8, Func Offset: 0x28
	// Func End, Address: 0x1ed43e4, Func Offset: 0x34
}

