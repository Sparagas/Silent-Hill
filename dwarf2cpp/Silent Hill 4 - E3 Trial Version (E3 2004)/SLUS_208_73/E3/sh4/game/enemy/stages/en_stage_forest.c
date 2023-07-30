typedef struct _GAME_WORK;


typedef int type_0[1];
typedef int type_1[1];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4][4];

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

float fr19_start_pos[4];
_GAME_WORK gamew;

int EnemyStageForestGetFloorNumber(int scene);
float EnemyStageForestGetBottomHeightInScene(int scene);
float EnemyStageForestGetAbyssHeightInScene(int scene);
int EnemyStageForestCheckInMovableRangeInScene();
float EnemyStageForestGetWallThickness();
float EnemyStageForestGetPlayerAppearDoorPosAndRot(float* pos, int scene);
int EnemyStageForestCheckUseTexInScene(int texid, int scene);

// 
// Start address: 0x1ed4340
int EnemyStageForestGetFloorNumber(int scene)
{
	int r;
	// Line 20, Address: 0x1ed4340, Func Offset: 0
	// Line 22, Address: 0x1ed4354, Func Offset: 0x14
	// Line 23, Address: 0x1ed4364, Func Offset: 0x24
	// Line 26, Address: 0x1ed438c, Func Offset: 0x4c
	// Line 30, Address: 0x1ed4390, Func Offset: 0x50
	// Line 31, Address: 0x1ed4398, Func Offset: 0x58
	// Line 34, Address: 0x1ed4424, Func Offset: 0xe4
	// Line 36, Address: 0x1ed4428, Func Offset: 0xe8
	// Line 39, Address: 0x1ed4430, Func Offset: 0xf0
	// Line 46, Address: 0x1ed4438, Func Offset: 0xf8
	// Line 51, Address: 0x1ed4440, Func Offset: 0x100
	// Line 54, Address: 0x1ed4444, Func Offset: 0x104
	// Line 55, Address: 0x1ed4448, Func Offset: 0x108
	// Line 56, Address: 0x1ed444c, Func Offset: 0x10c
	// Func End, Address: 0x1ed4460, Func Offset: 0x120
}

// 
// Start address: 0x1ed4460
float EnemyStageForestGetBottomHeightInScene(int scene)
{
	float r;
	// Line 65, Address: 0x1ed4460, Func Offset: 0
	// Line 64, Address: 0x1ed4464, Func Offset: 0x4
	// Line 65, Address: 0x1ed4468, Func Offset: 0x8
	// Line 70, Address: 0x1ed448c, Func Offset: 0x2c
	// Line 71, Address: 0x1ed4490, Func Offset: 0x30
	// Line 72, Address: 0x1ed4498, Func Offset: 0x38
	// Line 74, Address: 0x1ed44a0, Func Offset: 0x40
	// Line 75, Address: 0x1ed44a8, Func Offset: 0x48
	// Line 78, Address: 0x1ed44b0, Func Offset: 0x50
	// Line 79, Address: 0x1ed44b8, Func Offset: 0x58
	// Line 81, Address: 0x1ed44c0, Func Offset: 0x60
	// Line 82, Address: 0x1ed44c8, Func Offset: 0x68
	// Line 86, Address: 0x1ed44d0, Func Offset: 0x70
	// Line 90, Address: 0x1ed44d8, Func Offset: 0x78
	// Func End, Address: 0x1ed44e0, Func Offset: 0x80
}

// 
// Start address: 0x1ed44e0
float EnemyStageForestGetAbyssHeightInScene(int scene)
{
	// Line 51, Address: 0x1ed44e0, Func Offset: 0
	// Line 59, Address: 0x1ed44e4, Func Offset: 0x4
	// Line 51, Address: 0x1ed44e8, Func Offset: 0x8
	// Line 59, Address: 0x1ed44f8, Func Offset: 0x18
	// Line 60, Address: 0x1ed4514, Func Offset: 0x34
	// Line 62, Address: 0x1ed4518, Func Offset: 0x38
	// Line 63, Address: 0x1ed4524, Func Offset: 0x44
	// Line 66, Address: 0x1ed4528, Func Offset: 0x48
	// Line 65, Address: 0x1ed452c, Func Offset: 0x4c
	// Line 66, Address: 0x1ed4530, Func Offset: 0x50
	// Line 67, Address: 0x1ed453c, Func Offset: 0x5c
	// Line 69, Address: 0x1ed4558, Func Offset: 0x78
	// Line 70, Address: 0x1ed4568, Func Offset: 0x88
	// Line 71, Address: 0x1ed4580, Func Offset: 0xa0
	// Line 72, Address: 0x1ed4594, Func Offset: 0xb4
	// Line 95, Address: 0x1ed45a0, Func Offset: 0xc0
	// Func End, Address: 0x1ed45b8, Func Offset: 0xd8
	// Line 98, Address: 0x1ed44e0, Func Offset: 0
	// Func End, Address: 0x1ed44e8, Func Offset: 0x8
}

// 
// Start address: 0x1ed44f0
int EnemyStageForestCheckInMovableRangeInScene()
{
	// Line 410, Address: 0x1ed44f0, Func Offset: 0
	// Line 411, Address: 0x1ed4500, Func Offset: 0x10
	// Func End, Address: 0x1ed4508, Func Offset: 0x18
	// Line 109, Address: 0x1ed44f0, Func Offset: 0
	// Func End, Address: 0x1ed44f8, Func Offset: 0x8
}

// 
// Start address: 0x1ed4500
float EnemyStageForestGetWallThickness()
{
	// Line 120, Address: 0x1ed4500, Func Offset: 0
	// Line 121, Address: 0x1ed4508, Func Offset: 0x8
	// Func End, Address: 0x1ed4510, Func Offset: 0x10
	// Line 390, Address: 0x1ed4500, Func Offset: 0
	// Line 395, Address: 0x1ed4504, Func Offset: 0x4
	// Line 397, Address: 0x1ed450c, Func Offset: 0xc
	// Line 399, Address: 0x1ed4510, Func Offset: 0x10
	// Line 400, Address: 0x1ed4524, Func Offset: 0x24
	// Line 401, Address: 0x1ed4528, Func Offset: 0x28
	// Line 402, Address: 0x1ed4530, Func Offset: 0x30
	// Line 403, Address: 0x1ed453c, Func Offset: 0x3c
	// Line 404, Address: 0x1ed4540, Func Offset: 0x40
	// Line 405, Address: 0x1ed4548, Func Offset: 0x48
	// Func End, Address: 0x1ed4554, Func Offset: 0x54
}

// 
// Start address: 0x1ed4510
float EnemyStageForestGetPlayerAppearDoorPosAndRot(float* pos, int scene)
{
	float r;
	int door_no;
	int* door;
	// Line 413, Address: 0x1ed4510, Func Offset: 0
	// Line 415, Address: 0x1ed4518, Func Offset: 0x8
	// Line 419, Address: 0x1ed4560, Func Offset: 0x50
	// Func End, Address: 0x1ed456c, Func Offset: 0x5c
	// Line 131, Address: 0x1ed4510, Func Offset: 0
	// Line 133, Address: 0x1ed4514, Func Offset: 0x4
	// Line 131, Address: 0x1ed4518, Func Offset: 0x8
	// Line 132, Address: 0x1ed451c, Func Offset: 0xc
	// Line 131, Address: 0x1ed4520, Func Offset: 0x10
	// Line 135, Address: 0x1ed4524, Func Offset: 0x14
	// Line 131, Address: 0x1ed4528, Func Offset: 0x18
	// Line 133, Address: 0x1ed452c, Func Offset: 0x1c
	// Line 135, Address: 0x1ed4530, Func Offset: 0x20
	// Line 138, Address: 0x1ed4560, Func Offset: 0x50
	// Line 141, Address: 0x1ed4564, Func Offset: 0x54
	// Line 142, Address: 0x1ed4568, Func Offset: 0x58
	// Line 143, Address: 0x1ed4578, Func Offset: 0x68
	// Line 144, Address: 0x1ed4584, Func Offset: 0x74
	// Line 145, Address: 0x1ed4594, Func Offset: 0x84
	// Line 146, Address: 0x1ed4598, Func Offset: 0x88
	// Line 147, Address: 0x1ed45ac, Func Offset: 0x9c
	// Line 148, Address: 0x1ed45b0, Func Offset: 0xa0
	// Line 149, Address: 0x1ed45c0, Func Offset: 0xb0
	// Line 153, Address: 0x1ed45c8, Func Offset: 0xb8
	// Func End, Address: 0x1ed45dc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed45e0
int EnemyStageForestCheckUseTexInScene(int texid, int scene)
{
	int r;
	// Line 469, Address: 0x1ed45e0, Func Offset: 0
	// Line 470, Address: 0x1ed45f0, Func Offset: 0x10
	// Func End, Address: 0x1ed45f8, Func Offset: 0x18
	// Line 163, Address: 0x1ed45e0, Func Offset: 0
	// Line 167, Address: 0x1ed460c, Func Offset: 0x2c
	// Line 168, Address: 0x1ed4610, Func Offset: 0x30
	// Line 171, Address: 0x1ed461c, Func Offset: 0x3c
	// Line 173, Address: 0x1ed4624, Func Offset: 0x44
	// Line 174, Address: 0x1ed4628, Func Offset: 0x48
	// Line 176, Address: 0x1ed462c, Func Offset: 0x4c
	// Line 178, Address: 0x1ed4630, Func Offset: 0x50
	// Func End, Address: 0x1ed4638, Func Offset: 0x58
	// Line 257, Address: 0x1ed45e0, Func Offset: 0
	// Func End, Address: 0x1ed45ec, Func Offset: 0xc
}

