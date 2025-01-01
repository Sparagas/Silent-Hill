typedef struct _anon0;
typedef struct EnemyMeasureResult;
typedef union _anon1;
typedef struct EnemyClHitResult;
typedef struct EnemyAreaBox;
typedef struct _GAME_WORK;
typedef enum EnemyKind : unsigned char;
typedef enum _enum : unsigned char;
typedef struct _anon2;


typedef int type_0[1];
typedef _anon2 type_1[4];
typedef _anon1 type_2[0];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef int type_7[1];
typedef unsigned char type_8[13];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4][4];
typedef int type_12[2];
typedef int type_13[2][7];
typedef unsigned char type_14[357];
typedef int type_15[1];

struct _anon0
{
	_anon1 vertex[0];
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

union _anon1
{
	float node[4];
	_anon2 data[4];
};

struct EnemyClHitResult
{
};

struct EnemyAreaBox
{
	float x_mini;
	float y_mini;
	float z_mini;
	float x_max;
	float y_max;
	float z_max;
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

enum _enum : unsigned char
{
	DOOR_MAT_NONE,
	DOOR_MAT_STEEL,
	DOOR_MAT_WOOD,
	DOOR_MAT_ELEVATOR,
	DOOR_MAT_KOSHI,
	DOOR_MAT_LARGE,
	DOOR_MAT_TRAIN,
	DOOR_MAT_MAX
};

struct _anon2
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

unsigned char scene_in_stage[13];
unsigned char object_in_scene[357];
_GAME_WORK gamew;
int door_sound[2][7];

void EnemyStageDataInit();
int EnemyNowStage();
int EnemyNowScene();
int EnemyGetFloorNumber(int scene);
int EnemyGetPartitionInScene(float* pos);
float EnemyGetBottomHeightInScene();
float EnemyGetAbyssHeightInScene();
int EnemyCheckInMovableRange(float* pos);
int EnemyCheckDoNotEnterAreaInScene(float* pos);
EnemyAreaBox* EnemyGetDoNotEnterAreaInScene(int index);
int EnemyMayBalloon(float* pos, float* height);
int EnemyMayShowShadowInScene(EnemyKind kind);
int EnemyCanSproutInScene();
float EnemyGetGhostWaitTime();
int EnemyCheckGhostTrap(float* dst, float* pos);
float EnemyGetWallThickness(float* pos);
int EnemyGetCylinderCenterPos(float* pos);
int EnemyGetDrumCenterPos();
int EnemyGetDoorNumber();
void EnemyGetDoorPos(int num, float* pos);
void EnemyDoorOpen(int num);
void EnemyDoorClose(int num);
int EnemyIsDoorOpen(int num);
int EnemyIsDoorClose(int num);
float EnemyGetPlayerAppearDoorPosAndRot(float* pos);
int EnemyGetPlayerAppearDoorSound(int type);
int EnemyGetLostItemPosNum();
void EnemyGetLostItemPos(int num, float* pos);
void EnemyTransToGlobalPos(float* global_pos, float* local_pos);
void EnemyTransToLocalPos(float* local_pos, float* global_pos);
int EnemyCheckUseTexInStage(int texid);
int EnemyStageTestCheckUseTex(int texid);

// 
// Start address: 0x1a6080
void EnemyStageDataInit()
{
	// Line 28, Address: 0x1a6080, Func Offset: 0
	// Func End, Address: 0x1a6088, Func Offset: 0x8
}

// 
// Start address: 0x1a6090
int EnemyNowStage()
{
	// Line 35, Address: 0x1a6090, Func Offset: 0
	// Line 36, Address: 0x1a6094, Func Offset: 0x4
	// Func End, Address: 0x1a609c, Func Offset: 0xc
}

// 
// Start address: 0x1a60a0
int EnemyNowScene()
{
	// Line 43, Address: 0x1a60a0, Func Offset: 0
	// Line 44, Address: 0x1a60a4, Func Offset: 0x4
	// Func End, Address: 0x1a60ac, Func Offset: 0xc
}

// 
// Start address: 0x1a60b0
int EnemyGetFloorNumber(int scene)
{
	int stage;
	int r;
	// Line 95, Address: 0x1a60b0, Func Offset: 0
	// Line 96, Address: 0x1a60bc, Func Offset: 0xc
	// Line 99, Address: 0x1a60c4, Func Offset: 0x14
	// Line 100, Address: 0x1a60ec, Func Offset: 0x3c
	// Line 101, Address: 0x1a60f0, Func Offset: 0x40
	// Line 102, Address: 0x1a60f8, Func Offset: 0x48
	// Line 104, Address: 0x1a6100, Func Offset: 0x50
	// Line 105, Address: 0x1a6108, Func Offset: 0x58
	// Line 107, Address: 0x1a6110, Func Offset: 0x60
	// Line 108, Address: 0x1a6118, Func Offset: 0x68
	// Line 110, Address: 0x1a6120, Func Offset: 0x70
	// Line 111, Address: 0x1a6128, Func Offset: 0x78
	// Line 113, Address: 0x1a6130, Func Offset: 0x80
	// Line 114, Address: 0x1a6138, Func Offset: 0x88
	// Line 116, Address: 0x1a6140, Func Offset: 0x90
	// Line 117, Address: 0x1a6148, Func Offset: 0x98
	// Line 119, Address: 0x1a6150, Func Offset: 0xa0
	// Line 121, Address: 0x1a6154, Func Offset: 0xa4
	// Line 123, Address: 0x1a6158, Func Offset: 0xa8
	// Line 122, Address: 0x1a6160, Func Offset: 0xb0
	// Line 123, Address: 0x1a6164, Func Offset: 0xb4
	// Func End, Address: 0x1a616c, Func Offset: 0xbc
}

// 
// Start address: 0x1a6170
int EnemyGetPartitionInScene(float* pos)
{
	int stage;
	int scene;
	int r;
	// Line 130, Address: 0x1a6170, Func Offset: 0
	// Line 131, Address: 0x1a6180, Func Offset: 0x10
	// Line 132, Address: 0x1a6188, Func Offset: 0x18
	// Line 135, Address: 0x1a6190, Func Offset: 0x20
	// Line 137, Address: 0x1a61b0, Func Offset: 0x40
	// Line 138, Address: 0x1a61bc, Func Offset: 0x4c
	// Line 139, Address: 0x1a61c4, Func Offset: 0x54
	// Line 140, Address: 0x1a61c8, Func Offset: 0x58
	// Line 144, Address: 0x1a61d8, Func Offset: 0x68
	// Line 143, Address: 0x1a61e0, Func Offset: 0x70
	// Line 144, Address: 0x1a61e4, Func Offset: 0x74
	// Func End, Address: 0x1a61f0, Func Offset: 0x80
}

// 
// Start address: 0x1a61f0
float EnemyGetBottomHeightInScene()
{
	int stage;
	int scene;
	int f;
	// Line 150, Address: 0x1a61f0, Func Offset: 0
	// Line 151, Address: 0x1a61f8, Func Offset: 0x8
	// Line 152, Address: 0x1a6200, Func Offset: 0x10
	// Line 154, Address: 0x1a6208, Func Offset: 0x18
	// Line 156, Address: 0x1a6230, Func Offset: 0x40
	// Line 157, Address: 0x1a6240, Func Offset: 0x50
	// Line 159, Address: 0x1a6248, Func Offset: 0x58
	// Line 160, Address: 0x1a6258, Func Offset: 0x68
	// Line 162, Address: 0x1a6260, Func Offset: 0x70
	// Line 163, Address: 0x1a6270, Func Offset: 0x80
	// Line 165, Address: 0x1a6278, Func Offset: 0x88
	// Line 166, Address: 0x1a6288, Func Offset: 0x98
	// Line 168, Address: 0x1a6290, Func Offset: 0xa0
	// Line 169, Address: 0x1a62a0, Func Offset: 0xb0
	// Line 171, Address: 0x1a62a8, Func Offset: 0xb8
	// Line 172, Address: 0x1a62b8, Func Offset: 0xc8
	// Line 174, Address: 0x1a62c0, Func Offset: 0xd0
	// Line 178, Address: 0x1a62d0, Func Offset: 0xe0
	// Line 177, Address: 0x1a62d4, Func Offset: 0xe4
	// Line 178, Address: 0x1a62d8, Func Offset: 0xe8
	// Line 177, Address: 0x1a62dc, Func Offset: 0xec
	// Line 178, Address: 0x1a62e0, Func Offset: 0xf0
	// Func End, Address: 0x1a62e8, Func Offset: 0xf8
}

// 
// Start address: 0x1a62f0
float EnemyGetAbyssHeightInScene()
{
	int stage;
	int scene;
	int f;
	// Line 184, Address: 0x1a62f0, Func Offset: 0
	// Line 185, Address: 0x1a62f8, Func Offset: 0x8
	// Line 186, Address: 0x1a6300, Func Offset: 0x10
	// Line 188, Address: 0x1a6308, Func Offset: 0x18
	// Line 190, Address: 0x1a6330, Func Offset: 0x40
	// Line 191, Address: 0x1a6340, Func Offset: 0x50
	// Line 193, Address: 0x1a6348, Func Offset: 0x58
	// Line 194, Address: 0x1a6358, Func Offset: 0x68
	// Line 196, Address: 0x1a6360, Func Offset: 0x70
	// Line 197, Address: 0x1a6370, Func Offset: 0x80
	// Line 199, Address: 0x1a6378, Func Offset: 0x88
	// Line 200, Address: 0x1a6388, Func Offset: 0x98
	// Line 202, Address: 0x1a6390, Func Offset: 0xa0
	// Line 203, Address: 0x1a63a0, Func Offset: 0xb0
	// Line 205, Address: 0x1a63a8, Func Offset: 0xb8
	// Line 206, Address: 0x1a63b8, Func Offset: 0xc8
	// Line 208, Address: 0x1a63c0, Func Offset: 0xd0
	// Line 212, Address: 0x1a63d0, Func Offset: 0xe0
	// Line 211, Address: 0x1a63d4, Func Offset: 0xe4
	// Line 212, Address: 0x1a63d8, Func Offset: 0xe8
	// Line 211, Address: 0x1a63dc, Func Offset: 0xec
	// Line 212, Address: 0x1a63e0, Func Offset: 0xf0
	// Func End, Address: 0x1a63e8, Func Offset: 0xf8
}

// 
// Start address: 0x1a63f0
int EnemyCheckInMovableRange(float* pos)
{
	int stage;
	int scene;
	// Line 219, Address: 0x1a63f0, Func Offset: 0
	// Line 220, Address: 0x1a6404, Func Offset: 0x14
	// Line 221, Address: 0x1a640c, Func Offset: 0x1c
	// Line 223, Address: 0x1a6418, Func Offset: 0x28
	// Line 224, Address: 0x1a6430, Func Offset: 0x40
	// Line 225, Address: 0x1a6454, Func Offset: 0x64
	// Line 226, Address: 0x1a6458, Func Offset: 0x68
	// Line 227, Address: 0x1a6464, Func Offset: 0x74
	// Line 228, Address: 0x1a646c, Func Offset: 0x7c
	// Line 229, Address: 0x1a6470, Func Offset: 0x80
	// Line 230, Address: 0x1a647c, Func Offset: 0x8c
	// Line 231, Address: 0x1a6484, Func Offset: 0x94
	// Line 232, Address: 0x1a6488, Func Offset: 0x98
	// Line 233, Address: 0x1a6494, Func Offset: 0xa4
	// Line 234, Address: 0x1a649c, Func Offset: 0xac
	// Line 235, Address: 0x1a64a0, Func Offset: 0xb0
	// Line 236, Address: 0x1a64ac, Func Offset: 0xbc
	// Line 237, Address: 0x1a64b4, Func Offset: 0xc4
	// Line 238, Address: 0x1a64b8, Func Offset: 0xc8
	// Line 239, Address: 0x1a64c4, Func Offset: 0xd4
	// Line 240, Address: 0x1a64cc, Func Offset: 0xdc
	// Line 241, Address: 0x1a64d0, Func Offset: 0xe0
	// Line 242, Address: 0x1a64dc, Func Offset: 0xec
	// Line 243, Address: 0x1a64e4, Func Offset: 0xf4
	// Line 244, Address: 0x1a64e8, Func Offset: 0xf8
	// Line 245, Address: 0x1a64f4, Func Offset: 0x104
	// Line 246, Address: 0x1a64fc, Func Offset: 0x10c
	// Line 247, Address: 0x1a6500, Func Offset: 0x110
	// Line 249, Address: 0x1a650c, Func Offset: 0x11c
	// Line 250, Address: 0x1a6510, Func Offset: 0x120
	// Line 251, Address: 0x1a6518, Func Offset: 0x128
	// Func End, Address: 0x1a6530, Func Offset: 0x140
}

// 
// Start address: 0x1a6530
int EnemyCheckDoNotEnterAreaInScene(float* pos)
{
	EnemyAreaBox* pa;
	int n;
	// Line 258, Address: 0x1a6530, Func Offset: 0
	// Line 261, Address: 0x1a6544, Func Offset: 0x14
	// Line 263, Address: 0x1a6548, Func Offset: 0x18
	// Line 264, Address: 0x1a6550, Func Offset: 0x20
	// Line 265, Address: 0x1a655c, Func Offset: 0x2c
	// Line 268, Address: 0x1a65c4, Func Offset: 0x94
	// Line 269, Address: 0x1a65cc, Func Offset: 0x9c
	// Line 271, Address: 0x1a65d0, Func Offset: 0xa0
	// Line 272, Address: 0x1a65d8, Func Offset: 0xa8
	// Line 273, Address: 0x1a65e0, Func Offset: 0xb0
	// Func End, Address: 0x1a65f4, Func Offset: 0xc4
}

// 
// Start address: 0x1a6600
EnemyAreaBox* EnemyGetDoNotEnterAreaInScene(int index)
{
	int stage;
	int scene;
	EnemyAreaBox* pa;
	// Line 280, Address: 0x1a6600, Func Offset: 0
	// Line 281, Address: 0x1a6610, Func Offset: 0x10
	// Line 282, Address: 0x1a6618, Func Offset: 0x18
	// Line 285, Address: 0x1a6620, Func Offset: 0x20
	// Line 286, Address: 0x1a6654, Func Offset: 0x54
	// Line 287, Address: 0x1a6658, Func Offset: 0x58
	// Line 288, Address: 0x1a6664, Func Offset: 0x64
	// Line 289, Address: 0x1a666c, Func Offset: 0x6c
	// Line 290, Address: 0x1a6670, Func Offset: 0x70
	// Line 291, Address: 0x1a667c, Func Offset: 0x7c
	// Line 292, Address: 0x1a6684, Func Offset: 0x84
	// Line 293, Address: 0x1a6688, Func Offset: 0x88
	// Line 294, Address: 0x1a6694, Func Offset: 0x94
	// Line 295, Address: 0x1a669c, Func Offset: 0x9c
	// Line 296, Address: 0x1a66a0, Func Offset: 0xa0
	// Line 300, Address: 0x1a66b0, Func Offset: 0xb0
	// Line 299, Address: 0x1a66b8, Func Offset: 0xb8
	// Line 300, Address: 0x1a66bc, Func Offset: 0xbc
	// Func End, Address: 0x1a66c8, Func Offset: 0xc8
}

// 
// Start address: 0x1a66d0
int EnemyMayBalloon(float* pos, float* height)
{
	int stage;
	int scene;
	int r;
	float dummy;
	float* outp;
	EnemyClHitResult* cres;
	float tpos[4];
	// Line 308, Address: 0x1a66d0, Func Offset: 0
	// Line 309, Address: 0x1a66ec, Func Offset: 0x1c
	// Line 310, Address: 0x1a66f4, Func Offset: 0x24
	// Line 316, Address: 0x1a66fc, Func Offset: 0x2c
	// Line 318, Address: 0x1a6710, Func Offset: 0x40
	// Line 319, Address: 0x1a6724, Func Offset: 0x54
	// Line 320, Address: 0x1a6728, Func Offset: 0x58
	// Line 322, Address: 0x1a673c, Func Offset: 0x6c
	// Line 323, Address: 0x1a6740, Func Offset: 0x70
	// Line 327, Address: 0x1a674c, Func Offset: 0x7c
	// Line 328, Address: 0x1a6758, Func Offset: 0x88
	// Line 329, Address: 0x1a6768, Func Offset: 0x98
	// Line 330, Address: 0x1a6774, Func Offset: 0xa4
	// Line 329, Address: 0x1a677c, Func Offset: 0xac
	// Line 330, Address: 0x1a6780, Func Offset: 0xb0
	// Line 331, Address: 0x1a6790, Func Offset: 0xc0
	// Line 332, Address: 0x1a67a4, Func Offset: 0xd4
	// Line 334, Address: 0x1a67b8, Func Offset: 0xe8
	// Line 335, Address: 0x1a67bc, Func Offset: 0xec
	// Line 338, Address: 0x1a67c8, Func Offset: 0xf8
	// Line 340, Address: 0x1a67d0, Func Offset: 0x100
	// Line 339, Address: 0x1a67d8, Func Offset: 0x108
	// Line 340, Address: 0x1a67dc, Func Offset: 0x10c
	// Line 341, Address: 0x1a67ec, Func Offset: 0x11c
	// Line 342, Address: 0x1a67f0, Func Offset: 0x120
	// Line 344, Address: 0x1a67f8, Func Offset: 0x128
	// Line 345, Address: 0x1a67fc, Func Offset: 0x12c
	// Func End, Address: 0x1a6818, Func Offset: 0x148
}

// 
// Start address: 0x1a6820
int EnemyMayShowShadowInScene(EnemyKind kind)
{
	int stage;
	int scene;
	int r;
	// Line 352, Address: 0x1a6820, Func Offset: 0
	// Line 353, Address: 0x1a6830, Func Offset: 0x10
	// Line 354, Address: 0x1a6838, Func Offset: 0x18
	// Line 356, Address: 0x1a6840, Func Offset: 0x20
	// Line 358, Address: 0x1a6868, Func Offset: 0x48
	// Line 359, Address: 0x1a6874, Func Offset: 0x54
	// Line 360, Address: 0x1a687c, Func Offset: 0x5c
	// Line 361, Address: 0x1a6880, Func Offset: 0x60
	// Line 362, Address: 0x1a688c, Func Offset: 0x6c
	// Line 363, Address: 0x1a6894, Func Offset: 0x74
	// Line 364, Address: 0x1a6898, Func Offset: 0x78
	// Line 368, Address: 0x1a68a8, Func Offset: 0x88
	// Line 367, Address: 0x1a68b0, Func Offset: 0x90
	// Line 368, Address: 0x1a68b4, Func Offset: 0x94
	// Func End, Address: 0x1a68c0, Func Offset: 0xa0
}

// 
// Start address: 0x1a68c0
int EnemyCanSproutInScene()
{
	int stage;
	int scene;
	int r;
	// Line 374, Address: 0x1a68c0, Func Offset: 0
	// Line 375, Address: 0x1a68c8, Func Offset: 0x8
	// Line 376, Address: 0x1a68d0, Func Offset: 0x10
	// Line 378, Address: 0x1a68d8, Func Offset: 0x18
	// Line 379, Address: 0x1a68ec, Func Offset: 0x2c
	// Line 380, Address: 0x1a68f0, Func Offset: 0x30
	// Line 382, Address: 0x1a68fc, Func Offset: 0x3c
	// Line 384, Address: 0x1a6900, Func Offset: 0x40
	// Line 383, Address: 0x1a6908, Func Offset: 0x48
	// Line 384, Address: 0x1a690c, Func Offset: 0x4c
	// Func End, Address: 0x1a6914, Func Offset: 0x54
}

// 
// Start address: 0x1a6920
float EnemyGetGhostWaitTime()
{
	int stage;
	int scene;
	float r;
	// Line 390, Address: 0x1a6920, Func Offset: 0
	// Line 391, Address: 0x1a6928, Func Offset: 0x8
	// Line 392, Address: 0x1a6930, Func Offset: 0x10
	// Line 394, Address: 0x1a6938, Func Offset: 0x18
	// Line 395, Address: 0x1a693c, Func Offset: 0x1c
	// Line 397, Address: 0x1a6958, Func Offset: 0x38
	// Line 398, Address: 0x1a6960, Func Offset: 0x40
	// Line 400, Address: 0x1a6968, Func Offset: 0x48
	// Line 403, Address: 0x1a6970, Func Offset: 0x50
	// Line 404, Address: 0x1a6984, Func Offset: 0x64
	// Line 407, Address: 0x1a6988, Func Offset: 0x68
	// Func End, Address: 0x1a6998, Func Offset: 0x78
}

// 
// Start address: 0x1a69a0
int EnemyCheckGhostTrap(float* dst, float* pos)
{
	int stage;
	int scene;
	int r;
	// Line 415, Address: 0x1a69a0, Func Offset: 0
	// Line 416, Address: 0x1a69b8, Func Offset: 0x18
	// Line 417, Address: 0x1a69c0, Func Offset: 0x20
	// Line 420, Address: 0x1a69c8, Func Offset: 0x28
	// Line 421, Address: 0x1a69dc, Func Offset: 0x3c
	// Line 422, Address: 0x1a69e0, Func Offset: 0x40
	// Line 424, Address: 0x1a69f4, Func Offset: 0x54
	// Line 426, Address: 0x1a69f8, Func Offset: 0x58
	// Line 425, Address: 0x1a6a00, Func Offset: 0x60
	// Line 426, Address: 0x1a6a04, Func Offset: 0x64
	// Func End, Address: 0x1a6a14, Func Offset: 0x74
}

// 
// Start address: 0x1a6a20
float EnemyGetWallThickness(float* pos)
{
	int stage;
	int scene;
	float r;
	// Line 435, Address: 0x1a6a20, Func Offset: 0
	// Line 436, Address: 0x1a6a30, Func Offset: 0x10
	// Line 437, Address: 0x1a6a38, Func Offset: 0x18
	// Line 438, Address: 0x1a6a40, Func Offset: 0x20
	// Line 439, Address: 0x1a6a44, Func Offset: 0x24
	// Line 441, Address: 0x1a6a68, Func Offset: 0x48
	// Line 442, Address: 0x1a6a74, Func Offset: 0x54
	// Line 443, Address: 0x1a6a7c, Func Offset: 0x5c
	// Line 444, Address: 0x1a6a80, Func Offset: 0x60
	// Line 445, Address: 0x1a6a8c, Func Offset: 0x6c
	// Line 446, Address: 0x1a6a94, Func Offset: 0x74
	// Line 447, Address: 0x1a6a98, Func Offset: 0x78
	// Line 448, Address: 0x1a6aa4, Func Offset: 0x84
	// Line 449, Address: 0x1a6aac, Func Offset: 0x8c
	// Line 450, Address: 0x1a6ab0, Func Offset: 0x90
	// Line 451, Address: 0x1a6abc, Func Offset: 0x9c
	// Line 452, Address: 0x1a6ac4, Func Offset: 0xa4
	// Line 453, Address: 0x1a6ac8, Func Offset: 0xa8
	// Line 454, Address: 0x1a6ad4, Func Offset: 0xb4
	// Line 455, Address: 0x1a6adc, Func Offset: 0xbc
	// Line 456, Address: 0x1a6ae0, Func Offset: 0xc0
	// Line 458, Address: 0x1a6aec, Func Offset: 0xcc
	// Line 460, Address: 0x1a6af0, Func Offset: 0xd0
	// Func End, Address: 0x1a6b04, Func Offset: 0xe4
}

// 
// Start address: 0x1a6b10
int EnemyGetCylinderCenterPos(float* pos)
{
	int stage;
	int scene;
	int r;
	// Line 467, Address: 0x1a6b10, Func Offset: 0
	// Line 468, Address: 0x1a6b20, Func Offset: 0x10
	// Line 469, Address: 0x1a6b28, Func Offset: 0x18
	// Line 470, Address: 0x1a6b30, Func Offset: 0x20
	// Line 471, Address: 0x1a6b34, Func Offset: 0x24
	// Line 472, Address: 0x1a6b38, Func Offset: 0x28
	// Line 473, Address: 0x1a6b4c, Func Offset: 0x3c
	// Line 474, Address: 0x1a6b50, Func Offset: 0x40
	// Line 478, Address: 0x1a6b60, Func Offset: 0x50
	// Line 477, Address: 0x1a6b68, Func Offset: 0x58
	// Line 478, Address: 0x1a6b6c, Func Offset: 0x5c
	// Func End, Address: 0x1a6b78, Func Offset: 0x68
}

// 
// Start address: 0x1a6b80
int EnemyGetDrumCenterPos()
{
	// Line 489, Address: 0x1a6b80, Func Offset: 0
	// Func End, Address: 0x1a6b88, Func Offset: 0x8
}

// 
// Start address: 0x1a6b90
int EnemyGetDoorNumber()
{
	int stage;
	int scene;
	int r;
	// Line 495, Address: 0x1a6b90, Func Offset: 0
	// Line 496, Address: 0x1a6b98, Func Offset: 0x8
	// Line 497, Address: 0x1a6ba0, Func Offset: 0x10
	// Line 499, Address: 0x1a6ba8, Func Offset: 0x18
	// Line 500, Address: 0x1a6bbc, Func Offset: 0x2c
	// Line 501, Address: 0x1a6bc0, Func Offset: 0x30
	// Line 503, Address: 0x1a6bcc, Func Offset: 0x3c
	// Line 505, Address: 0x1a6bd0, Func Offset: 0x40
	// Line 504, Address: 0x1a6bd8, Func Offset: 0x48
	// Line 505, Address: 0x1a6bdc, Func Offset: 0x4c
	// Func End, Address: 0x1a6be4, Func Offset: 0x54
}

// 
// Start address: 0x1a6bf0
void EnemyGetDoorPos(int num, float* pos)
{
	int* door;
	float tpos[4];
	float vec[4];
	EnemyClHitResult* cres;
	EnemyMeasureResult mres;
	float dir;
	// Line 512, Address: 0x1a6bf0, Func Offset: 0
	// Line 518, Address: 0x1a6c08, Func Offset: 0x18
	// Line 519, Address: 0x1a6c20, Func Offset: 0x30
	// Line 520, Address: 0x1a6c2c, Func Offset: 0x3c
	// Line 522, Address: 0x1a6c38, Func Offset: 0x48
	// Line 521, Address: 0x1a6c3c, Func Offset: 0x4c
	// Line 522, Address: 0x1a6c50, Func Offset: 0x60
	// Line 523, Address: 0x1a6c60, Func Offset: 0x70
	// Line 524, Address: 0x1a6c6c, Func Offset: 0x7c
	// Line 525, Address: 0x1a6c78, Func Offset: 0x88
	// Line 527, Address: 0x1a6c90, Func Offset: 0xa0
	// Line 528, Address: 0x1a6c98, Func Offset: 0xa8
	// Line 529, Address: 0x1a6ca4, Func Offset: 0xb4
	// Line 530, Address: 0x1a6cb0, Func Offset: 0xc0
	// Line 531, Address: 0x1a6cd8, Func Offset: 0xe8
	// Line 532, Address: 0x1a6cf8, Func Offset: 0x108
	// Line 533, Address: 0x1a6d10, Func Offset: 0x120
	// Line 534, Address: 0x1a6d18, Func Offset: 0x128
	// Line 535, Address: 0x1a6d20, Func Offset: 0x130
	// Line 537, Address: 0x1a6d28, Func Offset: 0x138
	// Line 538, Address: 0x1a6d30, Func Offset: 0x140
	// Line 539, Address: 0x1a6d34, Func Offset: 0x144
	// Func End, Address: 0x1a6d4c, Func Offset: 0x15c
}

// 
// Start address: 0x1a6d50
void EnemyDoorOpen(int num)
{
	int stage;
	int scene;
	// Line 545, Address: 0x1a6d50, Func Offset: 0
	// Line 546, Address: 0x1a6d60, Func Offset: 0x10
	// Line 547, Address: 0x1a6d68, Func Offset: 0x18
	// Line 548, Address: 0x1a6d70, Func Offset: 0x20
	// Line 549, Address: 0x1a6d84, Func Offset: 0x34
	// Line 550, Address: 0x1a6d88, Func Offset: 0x38
	// Line 553, Address: 0x1a6d90, Func Offset: 0x40
	// Func End, Address: 0x1a6da4, Func Offset: 0x54
}

// 
// Start address: 0x1a6db0
void EnemyDoorClose(int num)
{
	int stage;
	int scene;
	// Line 559, Address: 0x1a6db0, Func Offset: 0
	// Line 560, Address: 0x1a6dc0, Func Offset: 0x10
	// Line 561, Address: 0x1a6dc8, Func Offset: 0x18
	// Line 562, Address: 0x1a6dd0, Func Offset: 0x20
	// Line 563, Address: 0x1a6de4, Func Offset: 0x34
	// Line 564, Address: 0x1a6de8, Func Offset: 0x38
	// Line 567, Address: 0x1a6df0, Func Offset: 0x40
	// Func End, Address: 0x1a6e04, Func Offset: 0x54
}

// 
// Start address: 0x1a6e10
int EnemyIsDoorOpen(int num)
{
	int stage;
	int scene;
	int r;
	// Line 574, Address: 0x1a6e10, Func Offset: 0
	// Line 575, Address: 0x1a6e20, Func Offset: 0x10
	// Line 576, Address: 0x1a6e28, Func Offset: 0x18
	// Line 578, Address: 0x1a6e30, Func Offset: 0x20
	// Line 579, Address: 0x1a6e44, Func Offset: 0x34
	// Line 580, Address: 0x1a6e48, Func Offset: 0x38
	// Line 584, Address: 0x1a6e58, Func Offset: 0x48
	// Line 583, Address: 0x1a6e60, Func Offset: 0x50
	// Line 584, Address: 0x1a6e64, Func Offset: 0x54
	// Func End, Address: 0x1a6e70, Func Offset: 0x60
}

// 
// Start address: 0x1a6e70
int EnemyIsDoorClose(int num)
{
	int stage;
	int scene;
	int r;
	// Line 591, Address: 0x1a6e70, Func Offset: 0
	// Line 592, Address: 0x1a6e80, Func Offset: 0x10
	// Line 593, Address: 0x1a6e88, Func Offset: 0x18
	// Line 595, Address: 0x1a6e90, Func Offset: 0x20
	// Line 596, Address: 0x1a6ea4, Func Offset: 0x34
	// Line 597, Address: 0x1a6ea8, Func Offset: 0x38
	// Line 601, Address: 0x1a6eb8, Func Offset: 0x48
	// Line 600, Address: 0x1a6ec0, Func Offset: 0x50
	// Line 601, Address: 0x1a6ec4, Func Offset: 0x54
	// Func End, Address: 0x1a6ed0, Func Offset: 0x60
}

// 
// Start address: 0x1a6ed0
float EnemyGetPlayerAppearDoorPosAndRot(float* pos)
{
	int stage;
	int scene;
	float r;
	// Line 608, Address: 0x1a6ed0, Func Offset: 0
	// Line 609, Address: 0x1a6ee0, Func Offset: 0x10
	// Line 610, Address: 0x1a6ee8, Func Offset: 0x18
	// Line 611, Address: 0x1a6ef0, Func Offset: 0x20
	// Line 612, Address: 0x1a6ef4, Func Offset: 0x24
	// Line 614, Address: 0x1a6f10, Func Offset: 0x40
	// Line 615, Address: 0x1a6f1c, Func Offset: 0x4c
	// Line 616, Address: 0x1a6f24, Func Offset: 0x54
	// Line 617, Address: 0x1a6f28, Func Offset: 0x58
	// Line 621, Address: 0x1a6f34, Func Offset: 0x64
	// Line 623, Address: 0x1a6f38, Func Offset: 0x68
	// Func End, Address: 0x1a6f4c, Func Offset: 0x7c
}

// 
// Start address: 0x1a6f50
int EnemyGetPlayerAppearDoorSound(int type)
{
	int* door;
	_enum mat;
	// Line 641, Address: 0x1a6f50, Func Offset: 0
	// Line 646, Address: 0x1a6f5c, Func Offset: 0xc
	// Line 647, Address: 0x1a6f74, Func Offset: 0x24
	// Line 648, Address: 0x1a6f88, Func Offset: 0x38
	// Line 649, Address: 0x1a6f90, Func Offset: 0x40
	// Line 650, Address: 0x1a6fb0, Func Offset: 0x60
	// Func End, Address: 0x1a6fc0, Func Offset: 0x70
}

// 
// Start address: 0x1a6fc0
int EnemyGetLostItemPosNum()
{
	int stage;
	int scene;
	int r;
	// Line 656, Address: 0x1a6fc0, Func Offset: 0
	// Line 657, Address: 0x1a6fc8, Func Offset: 0x8
	// Line 658, Address: 0x1a6fd0, Func Offset: 0x10
	// Line 660, Address: 0x1a6fd8, Func Offset: 0x18
	// Line 661, Address: 0x1a6fec, Func Offset: 0x2c
	// Line 662, Address: 0x1a6ff0, Func Offset: 0x30
	// Line 664, Address: 0x1a6ffc, Func Offset: 0x3c
	// Line 666, Address: 0x1a7000, Func Offset: 0x40
	// Line 665, Address: 0x1a7008, Func Offset: 0x48
	// Line 666, Address: 0x1a700c, Func Offset: 0x4c
	// Func End, Address: 0x1a7014, Func Offset: 0x54
}

// 
// Start address: 0x1a7020
void EnemyGetLostItemPos(int num, float* pos)
{
	int stage;
	int scene;
	// Line 673, Address: 0x1a7020, Func Offset: 0
	// Line 674, Address: 0x1a7038, Func Offset: 0x18
	// Line 675, Address: 0x1a7040, Func Offset: 0x20
	// Line 676, Address: 0x1a7048, Func Offset: 0x28
	// Line 677, Address: 0x1a705c, Func Offset: 0x3c
	// Line 678, Address: 0x1a7060, Func Offset: 0x40
	// Line 680, Address: 0x1a706c, Func Offset: 0x4c
	// Line 681, Address: 0x1a7070, Func Offset: 0x50
	// Func End, Address: 0x1a7088, Func Offset: 0x68
}

// 
// Start address: 0x1a7090
void EnemyTransToGlobalPos(float* global_pos, float* local_pos)
{
	float ofs[4];
	// Line 690, Address: 0x1a7090, Func Offset: 0
	// Line 692, Address: 0x1a70a8, Func Offset: 0x18
	// Line 693, Address: 0x1a70b0, Func Offset: 0x20
	// Line 694, Address: 0x1a70c8, Func Offset: 0x38
	// Func End, Address: 0x1a70dc, Func Offset: 0x4c
}

// 
// Start address: 0x1a70e0
void EnemyTransToLocalPos(float* local_pos, float* global_pos)
{
	float ofs[4];
	// Line 703, Address: 0x1a70e0, Func Offset: 0
	// Line 705, Address: 0x1a70f8, Func Offset: 0x18
	// Line 706, Address: 0x1a7100, Func Offset: 0x20
	// Line 707, Address: 0x1a7118, Func Offset: 0x38
	// Func End, Address: 0x1a712c, Func Offset: 0x4c
}

// 
// Start address: 0x1a7130
int EnemyCheckUseTexInStage(int texid)
{
	int stage;
	int scene;
	int r;
	// Line 714, Address: 0x1a7130, Func Offset: 0
	// Line 715, Address: 0x1a7140, Func Offset: 0x10
	// Line 716, Address: 0x1a7148, Func Offset: 0x18
	// Line 718, Address: 0x1a7150, Func Offset: 0x20
	// Line 721, Address: 0x1a7174, Func Offset: 0x44
	// Line 723, Address: 0x1a7178, Func Offset: 0x48
	// Line 725, Address: 0x1a7180, Func Offset: 0x50
	// Line 726, Address: 0x1a71a4, Func Offset: 0x74
	// Line 727, Address: 0x1a71a8, Func Offset: 0x78
	// Line 728, Address: 0x1a71b4, Func Offset: 0x84
	// Line 729, Address: 0x1a71bc, Func Offset: 0x8c
	// Line 730, Address: 0x1a71c0, Func Offset: 0x90
	// Line 731, Address: 0x1a71cc, Func Offset: 0x9c
	// Line 732, Address: 0x1a71d4, Func Offset: 0xa4
	// Line 733, Address: 0x1a71d8, Func Offset: 0xa8
	// Line 734, Address: 0x1a71e4, Func Offset: 0xb4
	// Line 735, Address: 0x1a71ec, Func Offset: 0xbc
	// Line 736, Address: 0x1a71f0, Func Offset: 0xc0
	// Line 737, Address: 0x1a71fc, Func Offset: 0xcc
	// Line 738, Address: 0x1a7204, Func Offset: 0xd4
	// Line 739, Address: 0x1a7208, Func Offset: 0xd8
	// Line 740, Address: 0x1a7214, Func Offset: 0xe4
	// Line 741, Address: 0x1a721c, Func Offset: 0xec
	// Line 742, Address: 0x1a7220, Func Offset: 0xf0
	// Line 743, Address: 0x1a722c, Func Offset: 0xfc
	// Line 744, Address: 0x1a7234, Func Offset: 0x104
	// Line 745, Address: 0x1a7238, Func Offset: 0x108
	// Line 746, Address: 0x1a7244, Func Offset: 0x114
	// Line 747, Address: 0x1a724c, Func Offset: 0x11c
	// Line 748, Address: 0x1a7250, Func Offset: 0x120
	// Line 749, Address: 0x1a725c, Func Offset: 0x12c
	// Line 750, Address: 0x1a7264, Func Offset: 0x134
	// Line 751, Address: 0x1a7268, Func Offset: 0x138
	// Line 754, Address: 0x1a7270, Func Offset: 0x140
	// Func End, Address: 0x1a7284, Func Offset: 0x154
}

// 
// Start address: 0x1a7290
int EnemyStageTestCheckUseTex(int texid)
{
	int r;
	// Line 763, Address: 0x1a7290, Func Offset: 0
	// Line 765, Address: 0x1a72ec, Func Offset: 0x5c
	// Line 767, Address: 0x1a72f0, Func Offset: 0x60
	// Line 773, Address: 0x1a72f8, Func Offset: 0x68
	// Line 776, Address: 0x1a7300, Func Offset: 0x70
	// Line 778, Address: 0x1a7304, Func Offset: 0x74
	// Line 780, Address: 0x1a7308, Func Offset: 0x78
	// Func End, Address: 0x1a7310, Func Offset: 0x80
}

