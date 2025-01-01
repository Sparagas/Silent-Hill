typedef struct _cam3Work;
typedef struct _GAME_WORK;
typedef enum GamePauseStatus : unsigned char;
typedef struct _anon0;
typedef struct _anon1;
typedef enum _cam3Step : unsigned char;

typedef void(*type_10)();
typedef void(*type_11)();
typedef void(*type_12)();

typedef float type_0[4];
typedef float type_1[4][4];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef int type_7[1];
typedef float type_8[4];
typedef int type_9[1];

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
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

enum GamePauseStatus : unsigned char
{
	PAUSE_STATUS_NONE,
	PAUSE_STATUS_NEXT_ENTER = 0xff,
	PAUSE_STATUS_NORMAL = 0x1,
	PAUSE_STATUS_USER,
	PAUSE_STATUS_MAP,
	PAUSE_STATUS_MESSAGE,
	PAUSE_STATUS_ITEM,
	PAUSE_STATUS_OPTION,
	PAUSE_STATUS_FUNC,
	PAUSE_STATUS_EXIT,
	PAUSE_STATUS_MAX
};

struct _anon0
{
	int enable;
	int status;
	int enter_mode;
	void(*mfunc)();
};

struct _anon1
{
	unsigned char flag;
	unsigned char menu_id;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

_anon1 force_item_info;
_GAME_WORK gamew;
_anon0 pause_work;
void(*mfunc)();
GamePauseStatus GamePauseStatus;
_cam3Work cam3_work;

void GamePauseForceItemInfoSet(int menu_id);
void GamePauseCancel();
int GamePauseSet();
void GamePauseEnable();
void GamePauseDisable();
int GamePauseIsPausing();
int GamePauseShiftNextLoop();
int GamePauseEnter();
int GamePauseSetExecuteFunc(void(*func)());
int GamePauseExit();
void GamePauseMain();

// 
// Start address: 0x15e720
void GamePauseForceItemInfoSet(int menu_id)
{
	// Line 100, Address: 0x15e720, Func Offset: 0
	// Line 102, Address: 0x15e730, Func Offset: 0x10
	// Line 101, Address: 0x15e734, Func Offset: 0x14
	// Line 102, Address: 0x15e738, Func Offset: 0x18
	// Line 101, Address: 0x15e73c, Func Offset: 0x1c
	// Line 103, Address: 0x15e744, Func Offset: 0x24
	// Line 104, Address: 0x15e748, Func Offset: 0x28
	// Func End, Address: 0x15e750, Func Offset: 0x30
}

// 
// Start address: 0x15e750
void GamePauseCancel()
{
	// Line 200, Address: 0x15e750, Func Offset: 0
	// Line 201, Address: 0x15e76c, Func Offset: 0x1c
	// Func End, Address: 0x15e774, Func Offset: 0x24
}

// 
// Start address: 0x15e780
int GamePauseSet()
{
	// Line 217, Address: 0x15e780, Func Offset: 0
	// Line 219, Address: 0x15e784, Func Offset: 0x4
	// Line 217, Address: 0x15e788, Func Offset: 0x8
	// Line 219, Address: 0x15e78c, Func Offset: 0xc
	// Line 220, Address: 0x15e7e0, Func Offset: 0x60
	// Line 223, Address: 0x15e7e8, Func Offset: 0x68
	// Line 224, Address: 0x15e7f8, Func Offset: 0x78
	// Line 225, Address: 0x15e838, Func Offset: 0xb8
	// Line 230, Address: 0x15e840, Func Offset: 0xc0
	// Line 231, Address: 0x15e854, Func Offset: 0xd4
	// Line 232, Address: 0x15e894, Func Offset: 0x114
	// Line 233, Address: 0x15e89c, Func Offset: 0x11c
	// Line 236, Address: 0x15e8a0, Func Offset: 0x120
	// Line 238, Address: 0x15e8b4, Func Offset: 0x134
	// Line 240, Address: 0x15e8bc, Func Offset: 0x13c
	// Line 241, Address: 0x15e8fc, Func Offset: 0x17c
	// Line 242, Address: 0x15e904, Func Offset: 0x184
	// Line 245, Address: 0x15e908, Func Offset: 0x188
	// Line 246, Address: 0x15e928, Func Offset: 0x1a8
	// Line 248, Address: 0x15e93c, Func Offset: 0x1bc
	// Line 249, Address: 0x15e944, Func Offset: 0x1c4
	// Line 252, Address: 0x15e948, Func Offset: 0x1c8
	// Line 253, Address: 0x15e950, Func Offset: 0x1d0
	// Line 256, Address: 0x15e958, Func Offset: 0x1d8
	// Line 258, Address: 0x15e960, Func Offset: 0x1e0
	// Line 260, Address: 0x15e9a0, Func Offset: 0x220
	// Line 261, Address: 0x15e9b0, Func Offset: 0x230
	// Line 263, Address: 0x15e9b8, Func Offset: 0x238
	// Line 265, Address: 0x15e9c0, Func Offset: 0x240
	// Line 268, Address: 0x15e9c8, Func Offset: 0x248
	// Line 270, Address: 0x15e9d0, Func Offset: 0x250
	// Line 271, Address: 0x15e9d8, Func Offset: 0x258
	// Func End, Address: 0x15e9e4, Func Offset: 0x264
}

// 
// Start address: 0x15e9f0
void GamePauseEnable()
{
	// Line 291, Address: 0x15e9f0, Func Offset: 0
	// Line 294, Address: 0x15e9f8, Func Offset: 0x8
	// Func End, Address: 0x15ea00, Func Offset: 0x10
}

// 
// Start address: 0x15ea00
void GamePauseDisable()
{
	// Line 309, Address: 0x15ea00, Func Offset: 0
	// Line 312, Address: 0x15ea04, Func Offset: 0x4
	// Func End, Address: 0x15ea0c, Func Offset: 0xc
}

// 
// Start address: 0x15ea10
int GamePauseIsPausing()
{
	// Line 321, Address: 0x15ea10, Func Offset: 0
	// Line 323, Address: 0x15ea18, Func Offset: 0x8
	// Func End, Address: 0x15ea20, Func Offset: 0x10
}

// 
// Start address: 0x15ea20
int GamePauseShiftNextLoop()
{
	// Line 335, Address: 0x15ea20, Func Offset: 0
	// Line 337, Address: 0x15ea28, Func Offset: 0x8
	// Func End, Address: 0x15ea30, Func Offset: 0x10
}

// 
// Start address: 0x15ea30
int GamePauseEnter()
{
	// Line 363, Address: 0x15ea30, Func Offset: 0
	// Line 364, Address: 0x15ea34, Func Offset: 0x4
	// Line 363, Address: 0x15ea38, Func Offset: 0x8
	// Line 364, Address: 0x15ea3c, Func Offset: 0xc
	// Line 365, Address: 0x15ea90, Func Offset: 0x60
	// Line 366, Address: 0x15ea98, Func Offset: 0x68
	// Line 367, Address: 0x15ead4, Func Offset: 0xa4
	// Line 368, Address: 0x15ead8, Func Offset: 0xa8
	// Func End, Address: 0x15eae4, Func Offset: 0xb4
}

// 
// Start address: 0x15eaf0
int GamePauseSetExecuteFunc(void(*func)())
{
	// Line 382, Address: 0x15eaf0, Func Offset: 0
	// Line 384, Address: 0x15eb00, Func Offset: 0x10
	// Line 385, Address: 0x15eb0c, Func Offset: 0x1c
	// Line 386, Address: 0x15eb10, Func Offset: 0x20
	// Line 387, Address: 0x15eb18, Func Offset: 0x28
	// Func End, Address: 0x15eb20, Func Offset: 0x30
}

// 
// Start address: 0x15eb20
int GamePauseExit()
{
	// Line 395, Address: 0x15eb20, Func Offset: 0
	// Line 396, Address: 0x15eb28, Func Offset: 0x8
	// Line 397, Address: 0x15eb44, Func Offset: 0x24
	// Line 398, Address: 0x15eb48, Func Offset: 0x28
	// Func End, Address: 0x15eb54, Func Offset: 0x34
}

// 
// Start address: 0x15eb60
void GamePauseMain()
{
	// Line 402, Address: 0x15eb60, Func Offset: 0
	// Line 403, Address: 0x15eb74, Func Offset: 0x14
	// Line 406, Address: 0x15eb94, Func Offset: 0x34
	// Line 407, Address: 0x15eb98, Func Offset: 0x38
	// Line 410, Address: 0x15eb9c, Func Offset: 0x3c
	// Line 415, Address: 0x15eba4, Func Offset: 0x44
	// Line 418, Address: 0x15eba8, Func Offset: 0x48
	// Line 427, Address: 0x15ebd8, Func Offset: 0x78
	// Line 428, Address: 0x15ebdc, Func Offset: 0x7c
	// Line 429, Address: 0x15ebe8, Func Offset: 0x88
	// Line 432, Address: 0x15ebf0, Func Offset: 0x90
	// Line 434, Address: 0x15ebf8, Func Offset: 0x98
	// Line 435, Address: 0x15ec14, Func Offset: 0xb4
	// Line 439, Address: 0x15ec1c, Func Offset: 0xbc
	// Line 440, Address: 0x15ec24, Func Offset: 0xc4
	// Line 442, Address: 0x15ec2c, Func Offset: 0xcc
	// Line 445, Address: 0x15ec34, Func Offset: 0xd4
	// Line 447, Address: 0x15ec38, Func Offset: 0xd8
	// Line 478, Address: 0x15ec7c, Func Offset: 0x11c
	// Line 494, Address: 0x15ec84, Func Offset: 0x124
	// Line 495, Address: 0x15ec98, Func Offset: 0x138
	// Line 498, Address: 0x15ecb0, Func Offset: 0x150
	// Line 500, Address: 0x15ecb8, Func Offset: 0x158
	// Line 501, Address: 0x15ecc8, Func Offset: 0x168
	// Line 503, Address: 0x15ece0, Func Offset: 0x180
	// Line 505, Address: 0x15ece8, Func Offset: 0x188
	// Line 506, Address: 0x15ecf0, Func Offset: 0x190
	// Line 508, Address: 0x15ecf8, Func Offset: 0x198
	// Line 509, Address: 0x15ed0c, Func Offset: 0x1ac
	// Line 510, Address: 0x15ed14, Func Offset: 0x1b4
	// Line 511, Address: 0x15ed1c, Func Offset: 0x1bc
	// Line 512, Address: 0x15ed24, Func Offset: 0x1c4
	// Line 514, Address: 0x15ed2c, Func Offset: 0x1cc
	// Line 515, Address: 0x15ed34, Func Offset: 0x1d4
	// Line 516, Address: 0x15ed4c, Func Offset: 0x1ec
	// Line 518, Address: 0x15ed58, Func Offset: 0x1f8
	// Line 519, Address: 0x15ed60, Func Offset: 0x200
	// Line 520, Address: 0x15ed68, Func Offset: 0x208
	// Line 522, Address: 0x15ed70, Func Offset: 0x210
	// Line 524, Address: 0x15ed78, Func Offset: 0x218
	// Line 525, Address: 0x15ed80, Func Offset: 0x220
	// Line 526, Address: 0x15ed90, Func Offset: 0x230
	// Line 527, Address: 0x15ed98, Func Offset: 0x238
	// Line 529, Address: 0x15eda0, Func Offset: 0x240
	// Line 532, Address: 0x15eda8, Func Offset: 0x248
	// Line 536, Address: 0x15edb0, Func Offset: 0x250
	// Line 537, Address: 0x15edcc, Func Offset: 0x26c
	// Line 538, Address: 0x15edd4, Func Offset: 0x274
	// Line 541, Address: 0x15edd8, Func Offset: 0x278
	// Line 542, Address: 0x15ede8, Func Offset: 0x288
	// Line 543, Address: 0x15ee08, Func Offset: 0x2a8
	// Line 546, Address: 0x15ee10, Func Offset: 0x2b0
	// Line 548, Address: 0x15ee24, Func Offset: 0x2c4
	// Line 550, Address: 0x15ee2c, Func Offset: 0x2cc
	// Line 553, Address: 0x15ee30, Func Offset: 0x2d0
	// Func End, Address: 0x15ee40, Func Offset: 0x2e0
}

