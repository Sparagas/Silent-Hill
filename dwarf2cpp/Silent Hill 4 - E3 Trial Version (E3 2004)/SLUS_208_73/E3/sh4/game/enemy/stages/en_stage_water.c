typedef struct _GAME_WORK;
typedef enum EnemyKind : unsigned char;


typedef int type_0[1];
typedef int type_1[1];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef int type_6[1];
typedef char type_7[44];
typedef float type_8[4];
typedef int type_9[1];
typedef float type_10[4][4];

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

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

char water_floor_number[44];
_GAME_WORK gamew;

int EnemyStageWaterGetFloorNumber(int scene);
float EnemyStageWaterGetBottomHeightInScene(int scene);
float EnemyStageWaterGetAbyssHeightInScene(int scene);
int EnemyStageWaterCheckInMovableRangeInScene();
int EnemyStageWaterMayBalloon(float* height, int scene);
int EnemyStageWaterMayShowShadowInScene(int scene, EnemyKind kind);
int EnemyStageWaterCanSproutInScene();
float EnemyStageWaterGetGhostWaitTime(int scene);
float EnemyStageWaterGetWallThickness();
float EnemyStageWaterGetPlayerAppearDoorPosAndRot(float* pos, int scene);
int EnemyStageWaterGetCylinderCenterPos(float* pos, int scene);
int EnemyStageWaterCheckUseTexInScene(int texid, int scene);

// 
// Start address: 0x1ed48b0
int EnemyStageWaterGetFloorNumber(int scene)
{
	int r;
	// Line 70, Address: 0x1ed48b0, Func Offset: 0
	// Line 71, Address: 0x1ed48bc, Func Offset: 0xc
	// Line 72, Address: 0x1ed48cc, Func Offset: 0x1c
	// Line 75, Address: 0x1ed48e0, Func Offset: 0x30
	// Line 77, Address: 0x1ed490c, Func Offset: 0x5c
	// Line 79, Address: 0x1ed4910, Func Offset: 0x60
	// Line 85, Address: 0x1ed4918, Func Offset: 0x68
	// Line 87, Address: 0x1ed491c, Func Offset: 0x6c
	// Line 90, Address: 0x1ed4920, Func Offset: 0x70
	// Func End, Address: 0x1ed4930, Func Offset: 0x80
	// Line 301, Address: 0x1ed48b0, Func Offset: 0
	// Line 304, Address: 0x1ed48b4, Func Offset: 0x4
	// Line 301, Address: 0x1ed48b8, Func Offset: 0x8
	// Line 304, Address: 0x1ed48bc, Func Offset: 0xc
	// Line 301, Address: 0x1ed48c0, Func Offset: 0x10
	// Line 304, Address: 0x1ed48c4, Func Offset: 0x14
	// Line 301, Address: 0x1ed48c8, Func Offset: 0x18
	// Line 304, Address: 0x1ed48cc, Func Offset: 0x1c
	// Line 306, Address: 0x1ed48d4, Func Offset: 0x24
	// Line 310, Address: 0x1ed48e8, Func Offset: 0x38
	// Line 311, Address: 0x1ed48ec, Func Offset: 0x3c
	// Line 313, Address: 0x1ed4914, Func Offset: 0x64
	// Line 316, Address: 0x1ed4924, Func Offset: 0x74
	// Line 318, Address: 0x1ed492c, Func Offset: 0x7c
	// Line 319, Address: 0x1ed4938, Func Offset: 0x88
	// Line 323, Address: 0x1ed4960, Func Offset: 0xb0
	// Line 322, Address: 0x1ed4968, Func Offset: 0xb8
	// Line 323, Address: 0x1ed496c, Func Offset: 0xbc
	// Func End, Address: 0x1ed4978, Func Offset: 0xc8
}

// 
// Start address: 0x1ed4930
float EnemyStageWaterGetBottomHeightInScene(int scene)
{
	float r;
	// Line 663, Address: 0x1ed4930, Func Offset: 0
	// Line 664, Address: 0x1ed4938, Func Offset: 0x8
	// Line 665, Address: 0x1ed4948, Func Offset: 0x18
	// Line 668, Address: 0x1ed4950, Func Offset: 0x20
	// Line 669, Address: 0x1ed49a8, Func Offset: 0x78
	// Func End, Address: 0x1ed49b4, Func Offset: 0x84
	// Line 99, Address: 0x1ed4930, Func Offset: 0
	// Line 98, Address: 0x1ed4934, Func Offset: 0x4
	// Line 99, Address: 0x1ed4938, Func Offset: 0x8
	// Line 102, Address: 0x1ed4950, Func Offset: 0x20
	// Line 106, Address: 0x1ed4958, Func Offset: 0x28
	// Func End, Address: 0x1ed4960, Func Offset: 0x30
	// Line 520, Address: 0x1ed4930, Func Offset: 0
	// Line 523, Address: 0x1ed4934, Func Offset: 0x4
	// Line 520, Address: 0x1ed4938, Func Offset: 0x8
	// Line 523, Address: 0x1ed4940, Func Offset: 0x10
	// Line 529, Address: 0x1ed4960, Func Offset: 0x30
	// Line 531, Address: 0x1ed4968, Func Offset: 0x38
	// Line 533, Address: 0x1ed497c, Func Offset: 0x4c
	// Line 537, Address: 0x1ed4980, Func Offset: 0x50
	// Line 538, Address: 0x1ed4984, Func Offset: 0x54
	// Func End, Address: 0x1ed4994, Func Offset: 0x64
}

// 
// Start address: 0x1ed4960
float EnemyStageWaterGetAbyssHeightInScene(int scene)
{
	float r;
	// Line 301, Address: 0x1ed4960, Func Offset: 0
	// Line 307, Address: 0x1ed4964, Func Offset: 0x4
	// Line 301, Address: 0x1ed4968, Func Offset: 0x8
	// Line 307, Address: 0x1ed4974, Func Offset: 0x14
	// Line 308, Address: 0x1ed4984, Func Offset: 0x24
	// Line 315, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 316, Address: 0x1ed4994, Func Offset: 0x34
	// Line 317, Address: 0x1ed49ac, Func Offset: 0x4c
	// Line 318, Address: 0x1ed49c4, Func Offset: 0x64
	// Line 320, Address: 0x1ed49dc, Func Offset: 0x7c
	// Line 321, Address: 0x1ed49e4, Func Offset: 0x84
	// Line 320, Address: 0x1ed49e8, Func Offset: 0x88
	// Line 327, Address: 0x1ed49ec, Func Offset: 0x8c
	// Line 321, Address: 0x1ed49f0, Func Offset: 0x90
	// Line 322, Address: 0x1ed49f4, Func Offset: 0x94
	// Line 323, Address: 0x1ed49fc, Func Offset: 0x9c
	// Line 327, Address: 0x1ed4a04, Func Offset: 0xa4
	// Line 328, Address: 0x1ed4a0c, Func Offset: 0xac
	// Line 329, Address: 0x1ed4a20, Func Offset: 0xc0
	// Line 330, Address: 0x1ed4a2c, Func Offset: 0xcc
	// Line 331, Address: 0x1ed4a38, Func Offset: 0xd8
	// Line 335, Address: 0x1ed4a40, Func Offset: 0xe0
	// Line 334, Address: 0x1ed4a48, Func Offset: 0xe8
	// Line 335, Address: 0x1ed4a4c, Func Offset: 0xec
	// Func End, Address: 0x1ed4a58, Func Offset: 0xf8
	// Line 115, Address: 0x1ed4960, Func Offset: 0
	// Line 114, Address: 0x1ed4964, Func Offset: 0x4
	// Line 115, Address: 0x1ed4968, Func Offset: 0x8
	// Line 116, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 117, Address: 0x1ed4990, Func Offset: 0x30
	// Line 118, Address: 0x1ed4998, Func Offset: 0x38
	// Line 120, Address: 0x1ed49a0, Func Offset: 0x40
	// Line 121, Address: 0x1ed49a8, Func Offset: 0x48
	// Line 123, Address: 0x1ed49b0, Func Offset: 0x50
	// Line 127, Address: 0x1ed49b8, Func Offset: 0x58
	// Func End, Address: 0x1ed49c0, Func Offset: 0x60
	// Line 428, Address: 0x1ed4960, Func Offset: 0
	// Line 434, Address: 0x1ed4964, Func Offset: 0x4
	// Line 428, Address: 0x1ed4968, Func Offset: 0x8
	// Line 434, Address: 0x1ed496c, Func Offset: 0xc
	// Line 428, Address: 0x1ed4970, Func Offset: 0x10
	// Line 434, Address: 0x1ed4974, Func Offset: 0x14
	// Line 428, Address: 0x1ed4978, Func Offset: 0x18
	// Line 434, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 439, Address: 0x1ed4994, Func Offset: 0x34
	// Line 440, Address: 0x1ed49a4, Func Offset: 0x44
	// Line 441, Address: 0x1ed49a8, Func Offset: 0x48
	// Line 442, Address: 0x1ed49ac, Func Offset: 0x4c
	// Line 446, Address: 0x1ed49b0, Func Offset: 0x50
	// Line 447, Address: 0x1ed49e4, Func Offset: 0x84
	// Line 448, Address: 0x1ed49e8, Func Offset: 0x88
	// Line 449, Address: 0x1ed49f0, Func Offset: 0x90
	// Line 450, Address: 0x1ed49f8, Func Offset: 0x98
	// Line 452, Address: 0x1ed4a04, Func Offset: 0xa4
	// Line 455, Address: 0x1ed4a30, Func Offset: 0xd0
	// Line 456, Address: 0x1ed4a3c, Func Offset: 0xdc
	// Line 457, Address: 0x1ed4a48, Func Offset: 0xe8
	// Line 458, Address: 0x1ed4a54, Func Offset: 0xf4
	// Line 459, Address: 0x1ed4a60, Func Offset: 0x100
	// Line 460, Address: 0x1ed4a68, Func Offset: 0x108
	// Line 461, Address: 0x1ed4a70, Func Offset: 0x110
	// Line 463, Address: 0x1ed4a78, Func Offset: 0x118
	// Line 464, Address: 0x1ed4a88, Func Offset: 0x128
	// Line 465, Address: 0x1ed4a90, Func Offset: 0x130
	// Line 466, Address: 0x1ed4a98, Func Offset: 0x138
	// Line 467, Address: 0x1ed4aa4, Func Offset: 0x144
	// Line 468, Address: 0x1ed4aa8, Func Offset: 0x148
	// Line 469, Address: 0x1ed4ab8, Func Offset: 0x158
	// Line 471, Address: 0x1ed4ac0, Func Offset: 0x160
	// Line 472, Address: 0x1ed4ad4, Func Offset: 0x174
	// Line 473, Address: 0x1ed4af4, Func Offset: 0x194
	// Line 474, Address: 0x1ed4b1c, Func Offset: 0x1bc
	// Line 475, Address: 0x1ed4b40, Func Offset: 0x1e0
	// Line 476, Address: 0x1ed4b44, Func Offset: 0x1e4
	// Line 477, Address: 0x1ed4b48, Func Offset: 0x1e8
	// Line 478, Address: 0x1ed4b60, Func Offset: 0x200
	// Line 479, Address: 0x1ed4b68, Func Offset: 0x208
	// Line 480, Address: 0x1ed4b74, Func Offset: 0x214
	// Line 481, Address: 0x1ed4b78, Func Offset: 0x218
	// Line 482, Address: 0x1ed4b9c, Func Offset: 0x23c
	// Line 483, Address: 0x1ed4bc4, Func Offset: 0x264
	// Line 484, Address: 0x1ed4be0, Func Offset: 0x280
	// Line 485, Address: 0x1ed4bf0, Func Offset: 0x290
	// Line 487, Address: 0x1ed4c00, Func Offset: 0x2a0
	// Line 489, Address: 0x1ed4c0c, Func Offset: 0x2ac
	// Line 490, Address: 0x1ed4c20, Func Offset: 0x2c0
	// Line 491, Address: 0x1ed4c2c, Func Offset: 0x2cc
	// Line 499, Address: 0x1ed4c34, Func Offset: 0x2d4
	// Line 501, Address: 0x1ed4c38, Func Offset: 0x2d8
	// Line 502, Address: 0x1ed4c3c, Func Offset: 0x2dc
	// Func End, Address: 0x1ed4c5c, Func Offset: 0x2fc
}

// 
// Start address: 0x1ed49c0
int EnemyStageWaterCheckInMovableRangeInScene()
{
	// Line 671, Address: 0x1ed49c0, Func Offset: 0
	// Line 674, Address: 0x1ed49c4, Func Offset: 0x4
	// Line 671, Address: 0x1ed49c8, Func Offset: 0x8
	// Line 674, Address: 0x1ed49cc, Func Offset: 0xc
	// Line 675, Address: 0x1ed49dc, Func Offset: 0x1c
	// Line 676, Address: 0x1ed49e4, Func Offset: 0x24
	// Line 678, Address: 0x1ed49e8, Func Offset: 0x28
	// Line 682, Address: 0x1ed49f0, Func Offset: 0x30
	// Line 683, Address: 0x1ed49f8, Func Offset: 0x38
	// Func End, Address: 0x1ed4a04, Func Offset: 0x44
	// Line 137, Address: 0x1ed49c0, Func Offset: 0
	// Func End, Address: 0x1ed49c8, Func Offset: 0x8
}

// 
// Start address: 0x1ed49d0
int EnemyStageWaterMayBalloon(float* height, int scene)
{
	int r;
	// Line 148, Address: 0x1ed49d0, Func Offset: 0
	// Line 149, Address: 0x1ed49e4, Func Offset: 0x14
	// Line 150, Address: 0x1ed49e8, Func Offset: 0x18
	// Line 151, Address: 0x1ed49f0, Func Offset: 0x20
	// Line 153, Address: 0x1ed49f4, Func Offset: 0x24
	// Line 155, Address: 0x1ed49f8, Func Offset: 0x28
	// Func End, Address: 0x1ed4a00, Func Offset: 0x30
}

// 
// Start address: 0x1ed4a00
int EnemyStageWaterMayShowShadowInScene(int scene, EnemyKind kind)
{
	int r;
	// Line 165, Address: 0x1ed4a00, Func Offset: 0
	// Line 170, Address: 0x1ed4a30, Func Offset: 0x30
	// Line 171, Address: 0x1ed4a40, Func Offset: 0x40
	// Line 173, Address: 0x1ed4a44, Func Offset: 0x44
	// Line 175, Address: 0x1ed4a48, Func Offset: 0x48
	// Func End, Address: 0x1ed4a50, Func Offset: 0x50
	// Line 353, Address: 0x1ed4a00, Func Offset: 0
	// Line 359, Address: 0x1ed4a04, Func Offset: 0x4
	// Line 353, Address: 0x1ed4a08, Func Offset: 0x8
	// Line 359, Address: 0x1ed4a10, Func Offset: 0x10
	// Line 360, Address: 0x1ed4a20, Func Offset: 0x20
	// Line 364, Address: 0x1ed4a28, Func Offset: 0x28
	// Line 365, Address: 0x1ed4a30, Func Offset: 0x30
	// Line 366, Address: 0x1ed4a48, Func Offset: 0x48
	// Line 367, Address: 0x1ed4a60, Func Offset: 0x60
	// Line 369, Address: 0x1ed4a78, Func Offset: 0x78
	// Line 370, Address: 0x1ed4a80, Func Offset: 0x80
	// Line 374, Address: 0x1ed4a88, Func Offset: 0x88
	// Line 373, Address: 0x1ed4a90, Func Offset: 0x90
	// Line 374, Address: 0x1ed4a94, Func Offset: 0x94
	// Func End, Address: 0x1ed4a9c, Func Offset: 0x9c
}

// 
// Start address: 0x1ed4a50
int EnemyStageWaterCanSproutInScene()
{
	// Line 186, Address: 0x1ed4a50, Func Offset: 0
	// Func End, Address: 0x1ed4a58, Func Offset: 0x8
}

// 
// Start address: 0x1ed4a60
float EnemyStageWaterGetGhostWaitTime(int scene)
{
	float r;
	// Line 780, Address: 0x1ed4a60, Func Offset: 0
	// Line 781, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 782, Address: 0x1ed4a7c, Func Offset: 0x1c
	// Line 783, Address: 0x1ed4a80, Func Offset: 0x20
	// Func End, Address: 0x1ed4a88, Func Offset: 0x28
	// Line 293, Address: 0x1ed4a60, Func Offset: 0
	// Line 294, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 297, Address: 0x1ed4a6c, Func Offset: 0xc
	// Line 299, Address: 0x1ed4a78, Func Offset: 0x18
	// Func End, Address: 0x1ed4a84, Func Offset: 0x24
	// Line 340, Address: 0x1ed4a60, Func Offset: 0
	// Func End, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 193, Address: 0x1ed4a60, Func Offset: 0
	// Line 196, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 193, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 195, Address: 0x1ed4a70, Func Offset: 0x10
	// Line 196, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 201, Address: 0x1ed4a98, Func Offset: 0x38
	// Line 202, Address: 0x1ed4aac, Func Offset: 0x4c
	// Line 205, Address: 0x1ed4ab4, Func Offset: 0x54
	// Line 207, Address: 0x1ed4ab8, Func Offset: 0x58
	// Line 206, Address: 0x1ed4abc, Func Offset: 0x5c
	// Line 207, Address: 0x1ed4ac0, Func Offset: 0x60
	// Func End, Address: 0x1ed4acc, Func Offset: 0x6c
}

// 
// Start address: 0x1ed4ad0
float EnemyStageWaterGetWallThickness()
{
	// Line 218, Address: 0x1ed4ad0, Func Offset: 0
	// Line 219, Address: 0x1ed4ad8, Func Offset: 0x8
	// Func End, Address: 0x1ed4ae0, Func Offset: 0x10
}

// 
// Start address: 0x1ed4ae0
float EnemyStageWaterGetPlayerAppearDoorPosAndRot(float* pos, int scene)
{
	int door_no;
	int* door;
	// Line 227, Address: 0x1ed4ae0, Func Offset: 0
	// Line 229, Address: 0x1ed4ae4, Func Offset: 0x4
	// Line 227, Address: 0x1ed4ae8, Func Offset: 0x8
	// Line 231, Address: 0x1ed4aec, Func Offset: 0xc
	// Line 227, Address: 0x1ed4af0, Func Offset: 0x10
	// Line 229, Address: 0x1ed4af8, Func Offset: 0x18
	// Line 231, Address: 0x1ed4afc, Func Offset: 0x1c
	// Line 232, Address: 0x1ed4b0c, Func Offset: 0x2c
	// Line 233, Address: 0x1ed4b10, Func Offset: 0x30
	// Line 234, Address: 0x1ed4b20, Func Offset: 0x40
	// Line 235, Address: 0x1ed4b2c, Func Offset: 0x4c
	// Line 236, Address: 0x1ed4b3c, Func Offset: 0x5c
	// Line 237, Address: 0x1ed4b40, Func Offset: 0x60
	// Line 238, Address: 0x1ed4b48, Func Offset: 0x68
	// Func End, Address: 0x1ed4b5c, Func Offset: 0x7c
}

// 
// Start address: 0x1ed4b60
int EnemyStageWaterGetCylinderCenterPos(float* pos, int scene)
{
	int r;
	// Line 247, Address: 0x1ed4b60, Func Offset: 0
	// Line 248, Address: 0x1ed4b64, Func Offset: 0x4
	// Line 249, Address: 0x1ed4b68, Func Offset: 0x8
	// Line 252, Address: 0x1ed4b90, Func Offset: 0x30
	// Line 255, Address: 0x1ed4b98, Func Offset: 0x38
	// Line 254, Address: 0x1ed4b9c, Func Offset: 0x3c
	// Line 256, Address: 0x1ed4ba0, Func Offset: 0x40
	// Line 259, Address: 0x1ed4ba8, Func Offset: 0x48
	// Line 258, Address: 0x1ed4bac, Func Offset: 0x4c
	// Line 259, Address: 0x1ed4bb0, Func Offset: 0x50
	// Line 261, Address: 0x1ed4bb4, Func Offset: 0x54
	// Line 263, Address: 0x1ed4bb8, Func Offset: 0x58
	// Func End, Address: 0x1ed4bc0, Func Offset: 0x60
}

// 
// Start address: 0x1ed4bc0
int EnemyStageWaterCheckUseTexInScene(int texid, int scene)
{
	int r;
	// Line 273, Address: 0x1ed4bc0, Func Offset: 0
	// Line 279, Address: 0x1ed4c08, Func Offset: 0x48
	// Line 281, Address: 0x1ed4c10, Func Offset: 0x50
	// Line 282, Address: 0x1ed4c1c, Func Offset: 0x5c
	// Line 287, Address: 0x1ed4c20, Func Offset: 0x60
	// Func End, Address: 0x1ed4c28, Func Offset: 0x68
}

