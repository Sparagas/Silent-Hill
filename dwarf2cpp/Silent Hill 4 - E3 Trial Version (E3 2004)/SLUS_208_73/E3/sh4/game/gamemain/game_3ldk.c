typedef struct _anon0;
typedef enum Game3LDKTime : unsigned char;
typedef struct _GAME_WORK;
typedef struct EventFlag;

typedef void(*type_8)();
typedef void(*type_12)();

typedef int type_0[1];
typedef _anon0 type_1[8];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef float type_6[4];
typedef float type_7[4][4];
typedef int type_9[1];
typedef float type_10[4];
typedef unsigned char type_11[320];
typedef void(*type_13)()[8];
typedef int type_14[1];

struct _anon0
{
	Game3LDKTime time;
	int flag;
};

enum Game3LDKTime : unsigned char
{
	GAME_3LDK_TIME_DAYTIME,
	GAME_3LDK_TIME_EVENING,
	GAME_3LDK_TIME_NIGHT,
	GAME_3LDK_TIME_MAX
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

_anon0 time_table[8];
EventFlag event_flag;
_GAME_WORK gamew;
void(*g3ldk_funcs)()[8];

int ev_3ldk_get_peep_level();
void Peep3ldkInit();
void Peep3ldkExec();
Game3LDKTime GameGet3LDKTime();
void g3ldkInit();
void g3ldkSceneInit();
void g3ldkLoad();
void g3ldkSceneSet();
void g3ldkStageMain();
void g3ldkSceneEnd();
void g3ldkEnd();
void Game3ldkMain();

// 
// Start address: 0x2bbe50
int ev_3ldk_get_peep_level()
{
	int rtv;
	// Line 107, Address: 0x2bbe50, Func Offset: 0
	// Line 110, Address: 0x2bbe64, Func Offset: 0x14
	// Line 111, Address: 0x2bbe70, Func Offset: 0x20
	// Line 113, Address: 0x2bbe84, Func Offset: 0x34
	// Line 118, Address: 0x2bbe88, Func Offset: 0x38
	// Func End, Address: 0x2bbe90, Func Offset: 0x40
}

// 
// Start address: 0x2bbe90
void Peep3ldkInit()
{
	// Line 123, Address: 0x2bbe90, Func Offset: 0
	// Line 126, Address: 0x2bbe94, Func Offset: 0x4
	// Line 123, Address: 0x2bbe98, Func Offset: 0x8
	// Line 125, Address: 0x2bbe9c, Func Offset: 0xc
	// Line 126, Address: 0x2bbea0, Func Offset: 0x10
	// Line 125, Address: 0x2bbea4, Func Offset: 0x14
	// Line 127, Address: 0x2bbea8, Func Offset: 0x18
	// Line 130, Address: 0x2bbed8, Func Offset: 0x48
	// Line 132, Address: 0x2bbeec, Func Offset: 0x5c
	// Line 134, Address: 0x2bbef8, Func Offset: 0x68
	// Line 136, Address: 0x2bbf00, Func Offset: 0x70
	// Line 138, Address: 0x2bbf08, Func Offset: 0x78
	// Line 143, Address: 0x2bbf10, Func Offset: 0x80
	// Line 144, Address: 0x2bbf18, Func Offset: 0x88
	// Line 145, Address: 0x2bbf20, Func Offset: 0x90
	// Func End, Address: 0x2bbf2c, Func Offset: 0x9c
}

// 
// Start address: 0x2bbf30
void Peep3ldkExec()
{
	// Line 150, Address: 0x2bbf30, Func Offset: 0
	// Func End, Address: 0x2bbf38, Func Offset: 0x8
}

// 
// Start address: 0x2bbf40
Game3LDKTime GameGet3LDKTime()
{
	int i;
	Game3LDKTime ret;
	// Line 158, Address: 0x2bbf40, Func Offset: 0
	// Line 164, Address: 0x2bbf4c, Func Offset: 0xc
	// Line 158, Address: 0x2bbf58, Func Offset: 0x18
	// Line 160, Address: 0x2bbf5c, Func Offset: 0x1c
	// Line 161, Address: 0x2bbf64, Func Offset: 0x24
	// Line 162, Address: 0x2bbf70, Func Offset: 0x30
	// Line 164, Address: 0x2bbf78, Func Offset: 0x38
	// Line 165, Address: 0x2bbfa4, Func Offset: 0x64
	// Line 166, Address: 0x2bbfb4, Func Offset: 0x74
	// Line 167, Address: 0x2bbfbc, Func Offset: 0x7c
	// Line 166, Address: 0x2bbfc0, Func Offset: 0x80
	// Line 169, Address: 0x2bbfc4, Func Offset: 0x84
	// Line 172, Address: 0x2bbfd0, Func Offset: 0x90
	// Func End, Address: 0x2bbfd8, Func Offset: 0x98
}

// 
// Start address: 0x2bbfe0
void g3ldkInit()
{
	// Line 177, Address: 0x2bbfe0, Func Offset: 0
	// Line 178, Address: 0x2bbfe8, Func Offset: 0x8
	// Line 182, Address: 0x2bbff0, Func Offset: 0x10
	// Line 183, Address: 0x2bc004, Func Offset: 0x24
	// Line 184, Address: 0x2bc00c, Func Offset: 0x2c
	// Line 185, Address: 0x2bc014, Func Offset: 0x34
	// Line 188, Address: 0x2bc018, Func Offset: 0x38
	// Line 191, Address: 0x2bc020, Func Offset: 0x40
	// Line 194, Address: 0x2bc028, Func Offset: 0x48
	// Line 195, Address: 0x2bc030, Func Offset: 0x50
	// Line 198, Address: 0x2bc038, Func Offset: 0x58
	// Line 202, Address: 0x2bc040, Func Offset: 0x60
	// Line 203, Address: 0x2bc054, Func Offset: 0x74
	// Line 204, Address: 0x2bc064, Func Offset: 0x84
	// Line 206, Address: 0x2bc06c, Func Offset: 0x8c
	// Line 208, Address: 0x2bc070, Func Offset: 0x90
	// Line 209, Address: 0x2bc078, Func Offset: 0x98
	// Func End, Address: 0x2bc084, Func Offset: 0xa4
}

// 
// Start address: 0x2bc090
void g3ldkSceneInit()
{
	// Line 215, Address: 0x2bc090, Func Offset: 0
	// Line 216, Address: 0x2bc098, Func Offset: 0x8
	// Line 218, Address: 0x2bc0a0, Func Offset: 0x10
	// Line 220, Address: 0x2bc0b4, Func Offset: 0x24
	// Line 222, Address: 0x2bc0bc, Func Offset: 0x2c
	// Line 223, Address: 0x2bc0c0, Func Offset: 0x30
	// Line 224, Address: 0x2bc0c8, Func Offset: 0x38
	// Func End, Address: 0x2bc0d4, Func Offset: 0x44
}

// 
// Start address: 0x2bc0e0
void g3ldkLoad()
{
	// Line 230, Address: 0x2bc0e0, Func Offset: 0
	// Line 231, Address: 0x2bc0e8, Func Offset: 0x8
	// Line 233, Address: 0x2bc0f0, Func Offset: 0x10
	// Line 234, Address: 0x2bc11c, Func Offset: 0x3c
	// Line 235, Address: 0x2bc120, Func Offset: 0x40
	// Line 236, Address: 0x2bc128, Func Offset: 0x48
	// Line 237, Address: 0x2bc13c, Func Offset: 0x5c
	// Line 238, Address: 0x2bc144, Func Offset: 0x64
	// Line 239, Address: 0x2bc14c, Func Offset: 0x6c
	// Line 240, Address: 0x2bc150, Func Offset: 0x70
	// Line 243, Address: 0x2bc160, Func Offset: 0x80
	// Line 244, Address: 0x2bc168, Func Offset: 0x88
	// Line 247, Address: 0x2bc170, Func Offset: 0x90
	// Line 248, Address: 0x2bc180, Func Offset: 0xa0
	// Line 249, Address: 0x2bc188, Func Offset: 0xa8
	// Line 250, Address: 0x2bc190, Func Offset: 0xb0
	// Line 255, Address: 0x2bc198, Func Offset: 0xb8
	// Line 257, Address: 0x2bc1a0, Func Offset: 0xc0
	// Func End, Address: 0x2bc1ac, Func Offset: 0xcc
}

// 
// Start address: 0x2bc1b0
void g3ldkSceneSet()
{
	// Line 263, Address: 0x2bc1b0, Func Offset: 0
	// Line 264, Address: 0x2bc1b8, Func Offset: 0x8
	// Line 267, Address: 0x2bc1c0, Func Offset: 0x10
	// Line 269, Address: 0x2bc1c8, Func Offset: 0x18
	// Line 270, Address: 0x2bc1d0, Func Offset: 0x20
	// Func End, Address: 0x2bc1dc, Func Offset: 0x2c
}

// 
// Start address: 0x2bc1e0
void g3ldkStageMain()
{
	// Line 278, Address: 0x2bc1e0, Func Offset: 0
	// Line 279, Address: 0x2bc1e8, Func Offset: 0x8
	// Line 283, Address: 0x2bc1f0, Func Offset: 0x10
	// Line 284, Address: 0x2bc204, Func Offset: 0x24
	// Line 285, Address: 0x2bc20c, Func Offset: 0x2c
	// Line 288, Address: 0x2bc210, Func Offset: 0x30
	// Line 289, Address: 0x2bc220, Func Offset: 0x40
	// Line 290, Address: 0x2bc228, Func Offset: 0x48
	// Line 294, Address: 0x2bc230, Func Offset: 0x50
	// Line 296, Address: 0x2bc240, Func Offset: 0x60
	// Line 295, Address: 0x2bc244, Func Offset: 0x64
	// Line 297, Address: 0x2bc250, Func Offset: 0x70
	// Line 298, Address: 0x2bc258, Func Offset: 0x78
	// Line 302, Address: 0x2bc260, Func Offset: 0x80
	// Func End, Address: 0x2bc26c, Func Offset: 0x8c
}

// 
// Start address: 0x2bc270
void g3ldkSceneEnd()
{
	int fade_timer;
	// Line 307, Address: 0x2bc270, Func Offset: 0
	// Line 311, Address: 0x2bc278, Func Offset: 0x8
	// Line 313, Address: 0x2bc280, Func Offset: 0x10
	// Line 316, Address: 0x2bc2b8, Func Offset: 0x48
	// Line 319, Address: 0x2bc2c0, Func Offset: 0x50
	// Line 320, Address: 0x2bc2cc, Func Offset: 0x5c
	// Line 323, Address: 0x2bc2d0, Func Offset: 0x60
	// Line 325, Address: 0x2bc2d8, Func Offset: 0x68
	// Line 326, Address: 0x2bc2e0, Func Offset: 0x70
	// Line 328, Address: 0x2bc2e8, Func Offset: 0x78
	// Line 330, Address: 0x2bc304, Func Offset: 0x94
	// Line 331, Address: 0x2bc30c, Func Offset: 0x9c
	// Line 332, Address: 0x2bc314, Func Offset: 0xa4
	// Line 333, Address: 0x2bc318, Func Offset: 0xa8
	// Line 334, Address: 0x2bc320, Func Offset: 0xb0
	// Line 335, Address: 0x2bc328, Func Offset: 0xb8
	// Line 340, Address: 0x2bc330, Func Offset: 0xc0
	// Line 343, Address: 0x2bc340, Func Offset: 0xd0
	// Line 347, Address: 0x2bc348, Func Offset: 0xd8
	// Line 348, Address: 0x2bc358, Func Offset: 0xe8
	// Line 351, Address: 0x2bc360, Func Offset: 0xf0
	// Line 353, Address: 0x2bc378, Func Offset: 0x108
	// Line 356, Address: 0x2bc380, Func Offset: 0x110
	// Line 357, Address: 0x2bc388, Func Offset: 0x118
	// Line 359, Address: 0x2bc390, Func Offset: 0x120
	// Line 362, Address: 0x2bc398, Func Offset: 0x128
	// Line 364, Address: 0x2bc3a0, Func Offset: 0x130
	// Func End, Address: 0x2bc3ac, Func Offset: 0x13c
}

// 
// Start address: 0x2bc3b0
void g3ldkEnd()
{
	// Line 368, Address: 0x2bc3b0, Func Offset: 0
	// Line 369, Address: 0x2bc3b8, Func Offset: 0x8
	// Line 373, Address: 0x2bc3c0, Func Offset: 0x10
	// Line 374, Address: 0x2bc3d4, Func Offset: 0x24
	// Line 375, Address: 0x2bc3dc, Func Offset: 0x2c
	// Line 377, Address: 0x2bc3e0, Func Offset: 0x30
	// Line 379, Address: 0x2bc3e8, Func Offset: 0x38
	// Func End, Address: 0x2bc3f4, Func Offset: 0x44
}

// 
// Start address: 0x2bc400
void Game3ldkMain()
{
	int step;
	void(*func)();
	// Line 397, Address: 0x2bc400, Func Offset: 0
	// Line 400, Address: 0x2bc408, Func Offset: 0x8
	// Line 402, Address: 0x2bc410, Func Offset: 0x10
	// Line 404, Address: 0x2bc418, Func Offset: 0x18
	// Line 406, Address: 0x2bc42c, Func Offset: 0x2c
	// Line 407, Address: 0x2bc434, Func Offset: 0x34
	// Line 408, Address: 0x2bc43c, Func Offset: 0x3c
	// Line 409, Address: 0x2bc448, Func Offset: 0x48
	// Line 412, Address: 0x2bc450, Func Offset: 0x50
	// Line 413, Address: 0x2bc458, Func Offset: 0x58
	// Func End, Address: 0x2bc464, Func Offset: 0x64
}

