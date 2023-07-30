typedef struct _anon0;
typedef struct _GAME_WORK;
typedef struct EventFlag;


typedef _anon0 type_0[13];
typedef float type_1[4];
typedef float type_2[4][4];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef int type_6[1];
typedef int type_7[1];
typedef _anon0 type_8[13];
typedef int type_9[1];
typedef int type_10[1];
typedef unsigned char type_11[320];
typedef int type_12[1];

struct _anon0
{
	short whitenoise;
	short filmnoise;
	short flash;
	short slide;
	short sharp;
	short dmy;
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

_anon0 def_tbl[13];
_anon0 def_tbl_latter[13];
_anon0 target;
_anon0 current;
_GAME_WORK gamew;
EventFlag event_flag;

void GameFilterNoiseSetTarget(int whitenoise, int filmnoise, int flash, int slide, int sharp);
void GameFilterNoiseInit();
void noise_draw();
void GameFilterNoiseDraw();
void GameFilterNoiseDrawForce(int depth);

// 
// Start address: 0x2493e0
void GameFilterNoiseSetTarget(int whitenoise, int filmnoise, int flash, int slide, int sharp)
{
	// Line 115, Address: 0x2493e0, Func Offset: 0
	// Line 116, Address: 0x2493e8, Func Offset: 0x8
	// Line 117, Address: 0x2493f0, Func Offset: 0x10
	// Line 118, Address: 0x2493f8, Func Offset: 0x18
	// Line 119, Address: 0x249400, Func Offset: 0x20
	// Line 122, Address: 0x249404, Func Offset: 0x24
	// Func End, Address: 0x24940c, Func Offset: 0x2c
}

// 
// Start address: 0x249410
void GameFilterNoiseInit()
{
	// Line 127, Address: 0x249410, Func Offset: 0
	// Line 128, Address: 0x249418, Func Offset: 0x8
	// Line 129, Address: 0x249420, Func Offset: 0x10
	// Line 130, Address: 0x249428, Func Offset: 0x18
	// Line 131, Address: 0x249430, Func Offset: 0x20
	// Line 133, Address: 0x249438, Func Offset: 0x28
	// Line 134, Address: 0x249440, Func Offset: 0x30
	// Line 135, Address: 0x249448, Func Offset: 0x38
	// Line 136, Address: 0x249450, Func Offset: 0x40
	// Line 137, Address: 0x249458, Func Offset: 0x48
	// Line 140, Address: 0x24945c, Func Offset: 0x4c
	// Func End, Address: 0x249464, Func Offset: 0x54
}

// 
// Start address: 0x249470
void noise_draw()
{
	// Line 144, Address: 0x249470, Func Offset: 0
	// Line 147, Address: 0x249474, Func Offset: 0x4
	// Line 144, Address: 0x249478, Func Offset: 0x8
	// Line 147, Address: 0x24947c, Func Offset: 0xc
	// Line 151, Address: 0x249488, Func Offset: 0x18
	// Line 152, Address: 0x249490, Func Offset: 0x20
	// Line 153, Address: 0x24949c, Func Offset: 0x2c
	// Line 157, Address: 0x2494b0, Func Offset: 0x40
	// Line 162, Address: 0x2494b8, Func Offset: 0x48
	// Line 165, Address: 0x2494c8, Func Offset: 0x58
	// Line 170, Address: 0x2494d0, Func Offset: 0x60
	// Line 171, Address: 0x2494dc, Func Offset: 0x6c
	// Line 170, Address: 0x2494e0, Func Offset: 0x70
	// Line 173, Address: 0x2494e8, Func Offset: 0x78
	// Line 178, Address: 0x2494f0, Func Offset: 0x80
	// Line 179, Address: 0x2494fc, Func Offset: 0x8c
	// Line 181, Address: 0x249500, Func Offset: 0x90
	// Line 185, Address: 0x249510, Func Offset: 0xa0
	// Line 186, Address: 0x249518, Func Offset: 0xa8
	// Line 191, Address: 0x249520, Func Offset: 0xb0
	// Func End, Address: 0x24952c, Func Offset: 0xbc
}

// 
// Start address: 0x249530
void GameFilterNoiseDraw()
{
	int noise_ct;
	// Line 195, Address: 0x249530, Func Offset: 0
	// Line 204, Address: 0x249548, Func Offset: 0x18
	// Line 205, Address: 0x2495a0, Func Offset: 0x70
	// Line 206, Address: 0x249608, Func Offset: 0xd8
	// Line 207, Address: 0x249670, Func Offset: 0x140
	// Line 208, Address: 0x2496d8, Func Offset: 0x1a8
	// Line 210, Address: 0x2496e4, Func Offset: 0x1b4
	// Line 213, Address: 0x2496ec, Func Offset: 0x1bc
	// Line 215, Address: 0x249700, Func Offset: 0x1d0
	// Line 216, Address: 0x249704, Func Offset: 0x1d4
	// Line 217, Address: 0x24970c, Func Offset: 0x1dc
	// Line 218, Address: 0x249714, Func Offset: 0x1e4
	// Line 219, Address: 0x24971c, Func Offset: 0x1ec
	// Line 220, Address: 0x249720, Func Offset: 0x1f0
	// Line 221, Address: 0x249728, Func Offset: 0x1f8
	// Line 223, Address: 0x24973c, Func Offset: 0x20c
	// Line 221, Address: 0x249740, Func Offset: 0x210
	// Line 224, Address: 0x249744, Func Offset: 0x214
	// Line 225, Address: 0x249748, Func Offset: 0x218
	// Line 226, Address: 0x24974c, Func Offset: 0x21c
	// Line 227, Address: 0x249750, Func Offset: 0x220
	// Line 223, Address: 0x249754, Func Offset: 0x224
	// Line 224, Address: 0x249758, Func Offset: 0x228
	// Line 225, Address: 0x24975c, Func Offset: 0x22c
	// Line 226, Address: 0x249760, Func Offset: 0x230
	// Line 227, Address: 0x249764, Func Offset: 0x234
	// Line 223, Address: 0x24976c, Func Offset: 0x23c
	// Line 221, Address: 0x249770, Func Offset: 0x240
	// Line 223, Address: 0x249778, Func Offset: 0x248
	// Line 224, Address: 0x24977c, Func Offset: 0x24c
	// Line 223, Address: 0x249780, Func Offset: 0x250
	// Line 225, Address: 0x249784, Func Offset: 0x254
	// Line 226, Address: 0x249788, Func Offset: 0x258
	// Line 227, Address: 0x24978c, Func Offset: 0x25c
	// Line 223, Address: 0x249790, Func Offset: 0x260
	// Line 224, Address: 0x249794, Func Offset: 0x264
	// Line 225, Address: 0x2497a0, Func Offset: 0x270
	// Line 226, Address: 0x2497ac, Func Offset: 0x27c
	// Line 227, Address: 0x2497b8, Func Offset: 0x288
	// Line 228, Address: 0x2497c0, Func Offset: 0x290
	// Line 231, Address: 0x2497d0, Func Offset: 0x2a0
	// Line 232, Address: 0x2497d4, Func Offset: 0x2a4
	// Line 233, Address: 0x2497d8, Func Offset: 0x2a8
	// Line 234, Address: 0x2497dc, Func Offset: 0x2ac
	// Line 235, Address: 0x2497e0, Func Offset: 0x2b0
	// Line 231, Address: 0x2497e4, Func Offset: 0x2b4
	// Line 232, Address: 0x2497e8, Func Offset: 0x2b8
	// Line 233, Address: 0x2497ec, Func Offset: 0x2bc
	// Line 234, Address: 0x2497f0, Func Offset: 0x2c0
	// Line 235, Address: 0x2497f4, Func Offset: 0x2c4
	// Line 231, Address: 0x2497fc, Func Offset: 0x2cc
	// Line 228, Address: 0x249800, Func Offset: 0x2d0
	// Line 231, Address: 0x249808, Func Offset: 0x2d8
	// Line 232, Address: 0x24980c, Func Offset: 0x2dc
	// Line 231, Address: 0x249810, Func Offset: 0x2e0
	// Line 233, Address: 0x249814, Func Offset: 0x2e4
	// Line 234, Address: 0x249818, Func Offset: 0x2e8
	// Line 235, Address: 0x24981c, Func Offset: 0x2ec
	// Line 231, Address: 0x249820, Func Offset: 0x2f0
	// Line 232, Address: 0x249824, Func Offset: 0x2f4
	// Line 233, Address: 0x249830, Func Offset: 0x300
	// Line 234, Address: 0x24983c, Func Offset: 0x30c
	// Line 235, Address: 0x249848, Func Offset: 0x318
	// Line 236, Address: 0x249854, Func Offset: 0x324
	// Line 241, Address: 0x249858, Func Offset: 0x328
	// Line 242, Address: 0x24986c, Func Offset: 0x33c
	// Line 243, Address: 0x249888, Func Offset: 0x358
	// Line 245, Address: 0x24989c, Func Offset: 0x36c
	// Line 247, Address: 0x2498a8, Func Offset: 0x378
	// Line 252, Address: 0x2498b0, Func Offset: 0x380
	// Func End, Address: 0x2498bc, Func Offset: 0x38c
}

// 
// Start address: 0x2498c0
void GameFilterNoiseDrawForce(int depth)
{
	// Line 276, Address: 0x2498c0, Func Offset: 0
	// Line 279, Address: 0x2498c4, Func Offset: 0x4
	// Line 276, Address: 0x2498c8, Func Offset: 0x8
	// Line 279, Address: 0x2498d4, Func Offset: 0x14
	// Line 280, Address: 0x2498dc, Func Offset: 0x1c
	// Line 281, Address: 0x249904, Func Offset: 0x44
	// Line 287, Address: 0x249910, Func Offset: 0x50
	// Line 290, Address: 0x24991c, Func Offset: 0x5c
	// Line 293, Address: 0x249928, Func Offset: 0x68
	// Line 294, Address: 0x249934, Func Offset: 0x74
	// Line 295, Address: 0x24993c, Func Offset: 0x7c
	// Line 296, Address: 0x249944, Func Offset: 0x84
	// Line 299, Address: 0x249948, Func Offset: 0x88
	// Func End, Address: 0x249958, Func Offset: 0x98
}

