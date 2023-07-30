typedef struct EventFlag;
typedef struct _GAME_WORK;
typedef struct _anon0;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[25];
typedef int type_3[1];
typedef int type_4[1];
typedef unsigned char type_5[320];
typedef int type_6[1];
typedef int type_7[1];
typedef int type_8[1];
typedef float type_9[4];
typedef int type_10[1];
typedef int type_11[1];

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

struct _anon0
{
	int slot;
	int scene;
	char is_se_call;
};

float sound_src_l[4];
_GAME_WORK gamew;
_anon0 game_home_work;
EventFlag event_flag;

void GetSoundSourceW(float* dst);
void GetSoundSourceL(float* dst, int scene);
float GetVolumeRatio(int scene);
float telephone_calc_pan();
void telephone_se_call();
void telephone_se_pos_change();
void GameHomeInit();
void GameHomeSceneInit();
void GameHomeMain();
void GameHomeEnd();

// 
// Start address: 0x1ed3f80
void GetSoundSourceW(float* dst)
{
	float ie14_offset[4];
	// Line 21, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 37, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 42, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 111, Address: 0x1ed3f80, Func Offset: 0
	// Line 114, Address: 0x1ed3fc0, Func Offset: 0x40
	// Line 115, Address: 0x1ed3fcc, Func Offset: 0x4c
	// Line 117, Address: 0x1ed3fd4, Func Offset: 0x54
	// Line 118, Address: 0x1ed3fdc, Func Offset: 0x5c
	// Line 120, Address: 0x1ed3fe0, Func Offset: 0x60
	// Line 121, Address: 0x1ed3ff0, Func Offset: 0x70
	// Line 122, Address: 0x1ed3ffc, Func Offset: 0x7c
	// Line 123, Address: 0x1ed400c, Func Offset: 0x8c
	// Line 124, Address: 0x1ed4014, Func Offset: 0x94
	// Line 125, Address: 0x1ed401c, Func Offset: 0x9c
	// Line 127, Address: 0x1ed4030, Func Offset: 0xb0
	// Line 128, Address: 0x1ed4088, Func Offset: 0x108
	// Line 129, Address: 0x1ed4090, Func Offset: 0x110
	// Line 130, Address: 0x1ed40b0, Func Offset: 0x130
	// Line 129, Address: 0x1ed40b4, Func Offset: 0x134
	// Line 130, Address: 0x1ed40b8, Func Offset: 0x138
	// Line 129, Address: 0x1ed40bc, Func Offset: 0x13c
	// Line 130, Address: 0x1ed40c0, Func Offset: 0x140
	// Line 131, Address: 0x1ed40c4, Func Offset: 0x144
	// Line 132, Address: 0x1ed40ec, Func Offset: 0x16c
	// Line 134, Address: 0x1ed4108, Func Offset: 0x188
	// Line 132, Address: 0x1ed410c, Func Offset: 0x18c
	// Line 134, Address: 0x1ed4114, Func Offset: 0x194
	// Line 132, Address: 0x1ed4118, Func Offset: 0x198
	// Line 134, Address: 0x1ed4120, Func Offset: 0x1a0
	// Line 133, Address: 0x1ed4124, Func Offset: 0x1a4
	// Line 134, Address: 0x1ed4128, Func Offset: 0x1a8
	// Line 135, Address: 0x1ed412c, Func Offset: 0x1ac
	// Line 137, Address: 0x1ed4134, Func Offset: 0x1b4
	// Line 139, Address: 0x1ed414c, Func Offset: 0x1cc
	// Line 140, Address: 0x1ed415c, Func Offset: 0x1dc
	// Line 141, Address: 0x1ed416c, Func Offset: 0x1ec
	// Line 142, Address: 0x1ed417c, Func Offset: 0x1fc
	// Line 143, Address: 0x1ed4180, Func Offset: 0x200
	// Func End, Address: 0x1ed41c4, Func Offset: 0x244
	// Line 38, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 69, Address: 0x1ed3f80, Func Offset: 0
	// Line 72, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 69, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 72, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 69, Address: 0x1ed3f90, Func Offset: 0x10
	// Line 72, Address: 0x1ed3f98, Func Offset: 0x18
	// Line 73, Address: 0x1ed3fa0, Func Offset: 0x20
	// Line 74, Address: 0x1ed3fc0, Func Offset: 0x40
	// Func End, Address: 0x1ed3fd0, Func Offset: 0x50
	// Line 24, Address: 0x1ed3f80, Func Offset: 0
	// Line 25, Address: 0x1ed3f84, Func Offset: 0x4
	// Func End, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 22, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 20, Address: 0x1ed3f80, Func Offset: 0
	// Line 24, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 25, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 26, Address: 0x1ed3f8c, Func Offset: 0xc
	// Func End, Address: 0x1ed3f94, Func Offset: 0x14
}

// 
// Start address: 0x1ed3fd0
void GetSoundSourceL(float* dst, int scene)
{
	float sound_src_w[4];
	float offset[4];
	// Line 78, Address: 0x1ed3fd0, Func Offset: 0
	// Line 82, Address: 0x1ed3fdc, Func Offset: 0xc
	// Line 78, Address: 0x1ed3fe0, Func Offset: 0x10
	// Line 82, Address: 0x1ed3fe8, Func Offset: 0x18
	// Line 83, Address: 0x1ed3ff0, Func Offset: 0x20
	// Line 84, Address: 0x1ed3ff8, Func Offset: 0x28
	// Line 85, Address: 0x1ed4014, Func Offset: 0x44
	// Func End, Address: 0x1ed4024, Func Offset: 0x54
}

// 
// Start address: 0x1ed4030
float GetVolumeRatio(int scene)
{
	float rtv;
	float tbl[25];
	// Line 93, Address: 0x1ed4030, Func Offset: 0
	// Line 123, Address: 0x1ed4034, Func Offset: 0x4
	// Line 124, Address: 0x1ed4044, Func Offset: 0x14
	// Line 125, Address: 0x1ed4054, Func Offset: 0x24
	// Line 134, Address: 0x1ed4058, Func Offset: 0x28
	// Func End, Address: 0x1ed4060, Func Offset: 0x30
}

// 
// Start address: 0x1ed4060
float telephone_calc_pan()
{
	float pan;
	int scene;
	float vol_ratio;
	float src[4];
	float cam_pos[4];
	float cam_dir[4];
	float dir[4];
	float r0;
	float r1;
	// Line 137, Address: 0x1ed4060, Func Offset: 0
	// Line 139, Address: 0x1ed4064, Func Offset: 0x4
	// Line 137, Address: 0x1ed4068, Func Offset: 0x8
	// Line 139, Address: 0x1ed4070, Func Offset: 0x10
	// Line 140, Address: 0x1ed4074, Func Offset: 0x14
	// Line 148, Address: 0x1ed407c, Func Offset: 0x1c
	// Line 149, Address: 0x1ed4084, Func Offset: 0x24
	// Line 150, Address: 0x1ed408c, Func Offset: 0x2c
	// Line 151, Address: 0x1ed4094, Func Offset: 0x34
	// Line 152, Address: 0x1ed40b4, Func Offset: 0x54
	// Line 153, Address: 0x1ed40c0, Func Offset: 0x60
	// Line 154, Address: 0x1ed40d0, Func Offset: 0x70
	// Line 157, Address: 0x1ed40d8, Func Offset: 0x78
	// Func End, Address: 0x1ed40e8, Func Offset: 0x88
}

// 
// Start address: 0x1ed40f0
void telephone_se_call()
{
	float vol_ratio;
	// Line 162, Address: 0x1ed40f0, Func Offset: 0
	// Line 163, Address: 0x1ed40f4, Func Offset: 0x4
	// Line 162, Address: 0x1ed40f8, Func Offset: 0x8
	// Line 164, Address: 0x1ed4100, Func Offset: 0x10
	// Line 177, Address: 0x1ed4108, Func Offset: 0x18
	// Line 179, Address: 0x1ed4128, Func Offset: 0x38
	// Func End, Address: 0x1ed4138, Func Offset: 0x48
	// Line 58, Address: 0x1ed40f0, Func Offset: 0
	// Func End, Address: 0x1ed40f8, Func Offset: 0x8
}

// 
// Start address: 0x1ed4140
void telephone_se_pos_change()
{
	float vol_ratio;
	// Line 183, Address: 0x1ed4140, Func Offset: 0
	// Line 184, Address: 0x1ed4144, Func Offset: 0x4
	// Line 183, Address: 0x1ed4148, Func Offset: 0x8
	// Line 185, Address: 0x1ed4150, Func Offset: 0x10
	// Line 197, Address: 0x1ed4158, Func Offset: 0x18
	// Line 199, Address: 0x1ed417c, Func Offset: 0x3c
	// Func End, Address: 0x1ed418c, Func Offset: 0x4c
}

// 
// Start address: 0x1ed4190
void GameHomeInit()
{
	// Line 203, Address: 0x1ed4190, Func Offset: 0
	// Line 204, Address: 0x1ed4194, Func Offset: 0x4
	// Line 203, Address: 0x1ed4198, Func Offset: 0x8
	// Line 204, Address: 0x1ed419c, Func Offset: 0xc
	// Line 205, Address: 0x1ed41ac, Func Offset: 0x1c
	// Line 206, Address: 0x1ed41bc, Func Offset: 0x2c
	// Func End, Address: 0x1ed41c8, Func Offset: 0x38
	// Line 124, Address: 0x1ed4190, Func Offset: 0
	// Line 125, Address: 0x1ed4198, Func Offset: 0x8
	// Func End, Address: 0x1ed41a0, Func Offset: 0x10
}

// 
// Start address: 0x1ed41d0
void GameHomeSceneInit()
{
	// Line 79, Address: 0x1ed41d0, Func Offset: 0
	// Line 81, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 85, Address: 0x1ed4210, Func Offset: 0x40
	// Func End, Address: 0x1ed4220, Func Offset: 0x50
	// Line 153, Address: 0x1ed41d0, Func Offset: 0
	// Line 158, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 153, Address: 0x1ed41d8, Func Offset: 0x8
	// Line 158, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 153, Address: 0x1ed41e0, Func Offset: 0x10
	// Line 158, Address: 0x1ed41f4, Func Offset: 0x24
	// Line 160, Address: 0x1ed41f8, Func Offset: 0x28
	// Line 162, Address: 0x1ed4200, Func Offset: 0x30
	// Line 164, Address: 0x1ed4208, Func Offset: 0x38
	// Line 169, Address: 0x1ed4224, Func Offset: 0x54
	// Line 164, Address: 0x1ed4228, Func Offset: 0x58
	// Line 169, Address: 0x1ed4234, Func Offset: 0x64
	// Line 171, Address: 0x1ed423c, Func Offset: 0x6c
	// Line 172, Address: 0x1ed4244, Func Offset: 0x74
	// Line 174, Address: 0x1ed4248, Func Offset: 0x78
	// Line 175, Address: 0x1ed4254, Func Offset: 0x84
	// Line 178, Address: 0x1ed4258, Func Offset: 0x88
	// Line 179, Address: 0x1ed4260, Func Offset: 0x90
	// Line 180, Address: 0x1ed4264, Func Offset: 0x94
	// Line 181, Address: 0x1ed4268, Func Offset: 0x98
	// Line 182, Address: 0x1ed4274, Func Offset: 0xa4
	// Line 185, Address: 0x1ed4278, Func Offset: 0xa8
	// Line 186, Address: 0x1ed42a4, Func Offset: 0xd4
	// Line 185, Address: 0x1ed42a8, Func Offset: 0xd8
	// Line 186, Address: 0x1ed42b4, Func Offset: 0xe4
	// Line 188, Address: 0x1ed42c8, Func Offset: 0xf8
	// Line 189, Address: 0x1ed42ec, Func Offset: 0x11c
	// Line 191, Address: 0x1ed4300, Func Offset: 0x130
	// Line 192, Address: 0x1ed4314, Func Offset: 0x144
	// Line 193, Address: 0x1ed433c, Func Offset: 0x16c
	// Line 195, Address: 0x1ed4358, Func Offset: 0x188
	// Line 196, Address: 0x1ed435c, Func Offset: 0x18c
	// Line 197, Address: 0x1ed4368, Func Offset: 0x198
	// Line 200, Address: 0x1ed436c, Func Offset: 0x19c
	// Line 201, Address: 0x1ed4384, Func Offset: 0x1b4
	// Line 204, Address: 0x1ed4394, Func Offset: 0x1c4
	// Line 203, Address: 0x1ed4398, Func Offset: 0x1c8
	// Line 204, Address: 0x1ed439c, Func Offset: 0x1cc
	// Line 203, Address: 0x1ed43a4, Func Offset: 0x1d4
	// Line 204, Address: 0x1ed43b0, Func Offset: 0x1e0
	// Line 205, Address: 0x1ed43b8, Func Offset: 0x1e8
	// Line 206, Address: 0x1ed43d0, Func Offset: 0x200
	// Line 208, Address: 0x1ed43dc, Func Offset: 0x20c
	// Line 206, Address: 0x1ed43e0, Func Offset: 0x210
	// Line 207, Address: 0x1ed43e4, Func Offset: 0x214
	// Line 208, Address: 0x1ed43f0, Func Offset: 0x220
	// Line 209, Address: 0x1ed43fc, Func Offset: 0x22c
	// Line 211, Address: 0x1ed440c, Func Offset: 0x23c
	// Func End, Address: 0x1ed442c, Func Offset: 0x25c
	// Line 210, Address: 0x1ed41d0, Func Offset: 0
	// Line 211, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 210, Address: 0x1ed41d8, Func Offset: 0x8
	// Line 211, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 213, Address: 0x1ed41e8, Func Offset: 0x18
	// Line 215, Address: 0x1ed41f0, Func Offset: 0x20
	// Func End, Address: 0x1ed41fc, Func Offset: 0x2c
	// Line 147, Address: 0x1ed41d0, Func Offset: 0
	// Line 148, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 150, Address: 0x1ed41e8, Func Offset: 0x18
	// Line 153, Address: 0x1ed41f8, Func Offset: 0x28
	// Func End, Address: 0x1ed4204, Func Offset: 0x34
}

// 
// Start address: 0x1ed4200
void GameHomeMain()
{
	// Line 219, Address: 0x1ed4200, Func Offset: 0
	// Line 221, Address: 0x1ed4210, Func Offset: 0x10
	// Line 224, Address: 0x1ed4224, Func Offset: 0x24
	// Line 225, Address: 0x1ed4230, Func Offset: 0x30
	// Line 226, Address: 0x1ed4238, Func Offset: 0x38
	// Line 228, Address: 0x1ed4244, Func Offset: 0x44
	// Line 230, Address: 0x1ed4248, Func Offset: 0x48
	// Line 231, Address: 0x1ed4258, Func Offset: 0x58
	// Line 232, Address: 0x1ed4268, Func Offset: 0x68
	// Line 233, Address: 0x1ed4278, Func Offset: 0x78
	// Line 234, Address: 0x1ed427c, Func Offset: 0x7c
	// Line 236, Address: 0x1ed4288, Func Offset: 0x88
	// Line 239, Address: 0x1ed4290, Func Offset: 0x90
	// Func End, Address: 0x1ed429c, Func Offset: 0x9c
	// Line 265, Address: 0x1ed4200, Func Offset: 0
	// Line 268, Address: 0x1ed4220, Func Offset: 0x20
	// Line 269, Address: 0x1ed422c, Func Offset: 0x2c
	// Line 271, Address: 0x1ed4234, Func Offset: 0x34
	// Line 272, Address: 0x1ed423c, Func Offset: 0x3c
	// Line 274, Address: 0x1ed4240, Func Offset: 0x40
	// Line 275, Address: 0x1ed4250, Func Offset: 0x50
	// Line 276, Address: 0x1ed425c, Func Offset: 0x5c
	// Line 277, Address: 0x1ed426c, Func Offset: 0x6c
	// Line 278, Address: 0x1ed4274, Func Offset: 0x74
	// Line 279, Address: 0x1ed427c, Func Offset: 0x7c
	// Line 280, Address: 0x1ed4280, Func Offset: 0x80
	// Line 282, Address: 0x1ed428c, Func Offset: 0x8c
	// Line 280, Address: 0x1ed4290, Func Offset: 0x90
	// Line 282, Address: 0x1ed4298, Func Offset: 0x98
	// Line 283, Address: 0x1ed42a4, Func Offset: 0xa4
	// Line 285, Address: 0x1ed42b8, Func Offset: 0xb8
	// Line 283, Address: 0x1ed42c0, Func Offset: 0xc0
	// Line 285, Address: 0x1ed42c8, Func Offset: 0xc8
	// Line 286, Address: 0x1ed42d4, Func Offset: 0xd4
	// Line 287, Address: 0x1ed42d8, Func Offset: 0xd8
	// Func End, Address: 0x1ed42f4, Func Offset: 0xf4
}

// 
// Start address: 0x1ed42a0
void GameHomeEnd()
{
	// Line 120, Address: 0x1ed42a0, Func Offset: 0
	// Line 119, Address: 0x1ed42a4, Func Offset: 0x4
	// Line 120, Address: 0x1ed42a8, Func Offset: 0x8
	// Line 122, Address: 0x1ed42b8, Func Offset: 0x18
	// Line 124, Address: 0x1ed42c4, Func Offset: 0x24
	// Line 126, Address: 0x1ed42c8, Func Offset: 0x28
	// Func End, Address: 0x1ed42d0, Func Offset: 0x30
	// Line 243, Address: 0x1ed42a0, Func Offset: 0
	// Line 244, Address: 0x1ed42a4, Func Offset: 0x4
	// Line 243, Address: 0x1ed42a8, Func Offset: 0x8
	// Line 244, Address: 0x1ed42ac, Func Offset: 0xc
	// Line 245, Address: 0x1ed42b8, Func Offset: 0x18
	// Line 246, Address: 0x1ed42c4, Func Offset: 0x24
	// Line 247, Address: 0x1ed42cc, Func Offset: 0x2c
	// Line 248, Address: 0x1ed42d0, Func Offset: 0x30
	// Func End, Address: 0x1ed42dc, Func Offset: 0x3c
}

