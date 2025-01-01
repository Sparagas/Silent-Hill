typedef struct _GAME_WORK;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct EventFlag;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;

typedef int(*type_4)(int);
typedef int(*type_13)(int);

typedef unsigned char type_0[8];
typedef int type_1[1];
typedef int type_2[1];
typedef _anon0 type_3[8];
typedef int(*type_5)(int)[6];
typedef _anon1 type_6[8];
typedef int type_7[1];
typedef unsigned char type_8[320];
typedef float type_9[4];
typedef unsigned char type_10[8];
typedef unsigned char* type_11[3];
typedef float type_12[4][8];
typedef int(*type_14)(int)[6];
typedef float type_15[4];
typedef float type_16[4][4];
typedef unsigned char type_17[8];
typedef int type_18[1];
typedef float type_19[4][4];
typedef int type_20[1];
typedef _anon5 type_21[4];
typedef int type_22[1];
typedef unsigned char* type_23[3];
typedef int type_24[1];
typedef unsigned int type_25[44];

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
	unsigned char scene_no;
	unsigned char is_hole;
	unsigned char door_no;
	unsigned char is_locked;
};

struct _anon1
{
	unsigned char is_exist;
	unsigned char is_broken;
};

struct _anon2
{
	int floor;
	_anon0 room[8];
	_anon1 pipe[8];
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon3
{
	_anon2 b1;
	_anon2 f1;
	_anon2 f2;
	_anon2 f3;
};

struct _anon4
{
	int b1_rot_n;
	int f1_rot_n;
	int f2_rot_n;
	int f3_rot_n;
};

struct _anon5
{
	int pipe_no;
	int slot;
};

unsigned char door_3f[8];
unsigned char door_2f[8];
unsigned char door_1f[8];
float pipe_pos[4][8];
float water_fall_pos[4][4];
_anon3 WaterStage;
int peeping;
float sg_vector_zero[4];
EventFlag event_flag;
int mz33_set_continue;
_GAME_WORK gamew;
_anon5 pipe_se[4];

_anon2* GetMzFloor(int floor);
void SetMzRot(int floor, int dir);
int GetMzRot(int floor);
_anon0* GetMzRoom(int floor, int pos_no);
_anon1* GetMzPipe(int floor, int pos_no);
int GameWaterPrisonSceneToFloor(int scene);
int GameWaterPosToDoor(int floor, int pos_no);
int GameWaterDoorToPos(int door_index);
int GameWaterPosToScene(int floor, int pos_no);
int GameWaterSceneToPos(int floor, int scene_no);
int GameWaterSceneToDoor(int scene);
int GameWaterIsWaterTurbineOk();
int IsBright3F();
int IsBright2F(int pos_no);
int IsBright1F(int pos_no);
int IsBrightB1(int pos_no);
int IsBrightDummy();
int GameWaterIsBright(int scene_no);
int GameWaterIsHole(int scene);
int GameWaterIsRotScene(int scene);
int GameWaterGetDefaultRotScene(int floor, int pos_no);
int GameWaterIsExistPipe(int floor, int pos_no);
int GameWaterIsBrokenPipe(int floor, int pos_no);
int IsWaterFlow3F(int pos_no);
int IsWaterFlow2F(int pos_no);
int IsWaterFlow1F(int pos_no);
int IsWaterFlowB1(int pos_no);
int IsWaterFlowDummy();
int GameWaterIsWaterFlow(int floor, int pos_no);
int GameWaterIsWaterLeakage(int floor, int pos_no);
void GameWaterGetPipePos(float* dst, int pipe_no);
int GameWaterGetFloorRot(int floor);
void GameWaterInit();
void GameWaterRotateFloor(int floor, int dir);
int GameWaterGetNextSceneToRoom(int door_index);
int GameWaterIsLocked(int scene);
int GameWaterGetNextSceneUnderHole(int scene);
int GameWaterIsFloorWet(int scene);
void GameWaterEffectFallWater(int floor);
void GameWaterFallWaterSeUpdate(int floor);
void GameWaterEffectFallWaterFromCeiling();
void GameWaterEffectFallWaterFromCeilingSeUpdate();
void GameWaterEffectDropLiquid(int is_ripple_ok);
void GameWaterPeepingFlagOn();
void GameWaterPeepingFlagOff();
int GameWaterIsPeeping();
void GameWaterSceneInit();
int fallwater_effect_check();
void fallwater_effect_set();
void GameWaterMain();

// 
// Start address: 0x334000
_anon2* GetMzFloor(int floor)
{
	_anon2* rtv;
	// Line 205, Address: 0x334000, Func Offset: 0
	// Line 206, Address: 0x334028, Func Offset: 0x28
	// Line 207, Address: 0x334034, Func Offset: 0x34
	// Line 208, Address: 0x334044, Func Offset: 0x44
	// Line 209, Address: 0x334054, Func Offset: 0x54
	// Line 217, Address: 0x334060, Func Offset: 0x60
	// Func End, Address: 0x334068, Func Offset: 0x68
}

// 
// Start address: 0x334070
void SetMzRot(int floor, int dir)
{
	int* rot_n;
	_anon4* info;
	// Line 220, Address: 0x334070, Func Offset: 0
	// Line 222, Address: 0x33408c, Func Offset: 0x1c
	// Line 224, Address: 0x334094, Func Offset: 0x24
	// Line 225, Address: 0x3340b8, Func Offset: 0x48
	// Line 226, Address: 0x3340c0, Func Offset: 0x50
	// Line 234, Address: 0x3340c4, Func Offset: 0x54
	// Line 235, Address: 0x3340c8, Func Offset: 0x58
	// Line 236, Address: 0x3340d0, Func Offset: 0x60
	// Line 237, Address: 0x3340dc, Func Offset: 0x6c
	// Line 238, Address: 0x3340fc, Func Offset: 0x8c
	// Line 239, Address: 0x334100, Func Offset: 0x90
	// Func End, Address: 0x334118, Func Offset: 0xa8
}

// 
// Start address: 0x334120
int GetMzRot(int floor)
{
	int rtv;
	_anon4* info;
	// Line 242, Address: 0x334120, Func Offset: 0
	// Line 244, Address: 0x334134, Func Offset: 0x14
	// Line 246, Address: 0x33413c, Func Offset: 0x1c
	// Line 247, Address: 0x334160, Func Offset: 0x40
	// Line 248, Address: 0x334168, Func Offset: 0x48
	// Line 249, Address: 0x334170, Func Offset: 0x50
	// Line 250, Address: 0x334178, Func Offset: 0x58
	// Line 256, Address: 0x33417c, Func Offset: 0x5c
	// Line 258, Address: 0x334180, Func Offset: 0x60
	// Line 259, Address: 0x334184, Func Offset: 0x64
	// Func End, Address: 0x334198, Func Offset: 0x78
}

// 
// Start address: 0x3341a0
_anon0* GetMzRoom(int floor, int pos_no)
{
	_anon2* f;
	int rot_n;
	// Line 262, Address: 0x3341a0, Func Offset: 0
	// Line 263, Address: 0x3341b4, Func Offset: 0x14
	// Line 264, Address: 0x3341bc, Func Offset: 0x1c
	// Line 266, Address: 0x3341c8, Func Offset: 0x28
	// Line 267, Address: 0x3341d8, Func Offset: 0x38
	// Line 270, Address: 0x3341e0, Func Offset: 0x40
	// Line 272, Address: 0x334204, Func Offset: 0x64
	// Line 274, Address: 0x334208, Func Offset: 0x68
	// Line 275, Address: 0x334210, Func Offset: 0x70
	// Func End, Address: 0x334224, Func Offset: 0x84
}

// 
// Start address: 0x334230
_anon1* GetMzPipe(int floor, int pos_no)
{
	_anon2* f;
	int rot_n;
	// Line 278, Address: 0x334230, Func Offset: 0
	// Line 279, Address: 0x334244, Func Offset: 0x14
	// Line 280, Address: 0x33424c, Func Offset: 0x1c
	// Line 282, Address: 0x334258, Func Offset: 0x28
	// Line 283, Address: 0x334268, Func Offset: 0x38
	// Line 286, Address: 0x334270, Func Offset: 0x40
	// Line 288, Address: 0x334294, Func Offset: 0x64
	// Line 289, Address: 0x334298, Func Offset: 0x68
	// Line 290, Address: 0x3342a0, Func Offset: 0x70
	// Func End, Address: 0x3342b4, Func Offset: 0x84
}

// 
// Start address: 0x3342c0
int GameWaterPrisonSceneToFloor(int scene)
{
	// Line 298, Address: 0x3342c0, Func Offset: 0
	// Func End, Address: 0x3342cc, Func Offset: 0xc
}

// 
// Start address: 0x3342d0
int GameWaterPosToDoor(int floor, int pos_no)
{
	int rtv;
	unsigned char* d[3];
	// Line 307, Address: 0x3342d0, Func Offset: 0
	// Line 310, Address: 0x3342d4, Func Offset: 0x4
	// Line 311, Address: 0x3342e8, Func Offset: 0x18
	// Line 317, Address: 0x3342f0, Func Offset: 0x20
	// Line 311, Address: 0x3342f4, Func Offset: 0x24
	// Line 317, Address: 0x334300, Func Offset: 0x30
	// Line 319, Address: 0x334314, Func Offset: 0x44
	// Line 321, Address: 0x33432c, Func Offset: 0x5c
	// Line 324, Address: 0x334330, Func Offset: 0x60
	// Func End, Address: 0x334338, Func Offset: 0x68
}

// 
// Start address: 0x334340
int GameWaterDoorToPos(int door_index)
{
	int rtv;
	unsigned char* d[3];
	int i;
	int j;
	// Line 333, Address: 0x334340, Func Offset: 0
	// Line 331, Address: 0x334344, Func Offset: 0x4
	// Line 333, Address: 0x334348, Func Offset: 0x8
	// Line 332, Address: 0x334358, Func Offset: 0x18
	// Line 340, Address: 0x33435c, Func Offset: 0x1c
	// Line 333, Address: 0x334360, Func Offset: 0x20
	// Line 341, Address: 0x334368, Func Offset: 0x28
	// Line 342, Address: 0x334370, Func Offset: 0x30
	// Line 344, Address: 0x334388, Func Offset: 0x48
	// Line 346, Address: 0x334390, Func Offset: 0x50
	// Line 347, Address: 0x3343a0, Func Offset: 0x60
	// Line 350, Address: 0x3343b0, Func Offset: 0x70
	// Func End, Address: 0x3343b8, Func Offset: 0x78
}

// 
// Start address: 0x3343c0
int GameWaterPosToScene(int floor, int pos_no)
{
	int scene_no;
	_anon0* room;
	// Line 354, Address: 0x3343c0, Func Offset: 0
	// Line 356, Address: 0x3343cc, Func Offset: 0xc
	// Line 358, Address: 0x3343d4, Func Offset: 0x14
	// Line 359, Address: 0x3343dc, Func Offset: 0x1c
	// Line 362, Address: 0x3343e0, Func Offset: 0x20
	// Line 363, Address: 0x3343e4, Func Offset: 0x24
	// Func End, Address: 0x3343f4, Func Offset: 0x34
}

// 
// Start address: 0x334400
int GameWaterSceneToPos(int floor, int scene_no)
{
	int pos_no;
	_anon2* f;
	int rot_n;
	int i;
	// Line 367, Address: 0x334400, Func Offset: 0
	// Line 369, Address: 0x33441c, Func Offset: 0x1c
	// Line 370, Address: 0x334424, Func Offset: 0x24
	// Line 372, Address: 0x334430, Func Offset: 0x30
	// Line 379, Address: 0x334438, Func Offset: 0x38
	// Line 381, Address: 0x334464, Func Offset: 0x64
	// Line 383, Address: 0x33446c, Func Offset: 0x6c
	// Line 386, Address: 0x334480, Func Offset: 0x80
	// Line 387, Address: 0x334484, Func Offset: 0x84
	// Func End, Address: 0x33449c, Func Offset: 0x9c
}

// 
// Start address: 0x3344a0
int GameWaterSceneToDoor(int scene)
{
	int door_no;
	int floor;
	int i;
	_anon0* r;
	// Line 394, Address: 0x3344a0, Func Offset: 0
	// Line 395, Address: 0x3344b8, Func Offset: 0x18
	// Line 396, Address: 0x3344bc, Func Offset: 0x1c
	// Line 399, Address: 0x3344c8, Func Offset: 0x28
	// Line 400, Address: 0x3344d0, Func Offset: 0x30
	// Line 402, Address: 0x3344dc, Func Offset: 0x3c
	// Line 404, Address: 0x3344e8, Func Offset: 0x48
	// Line 406, Address: 0x3344f0, Func Offset: 0x50
	// Line 408, Address: 0x334500, Func Offset: 0x60
	// Line 409, Address: 0x334504, Func Offset: 0x64
	// Func End, Address: 0x334520, Func Offset: 0x80
}

// 
// Start address: 0x334520
int GameWaterIsWaterTurbineOk()
{
	int is_pos0_ok;
	int is_pos2_ok;
	// Line 416, Address: 0x334520, Func Offset: 0
	// Line 418, Address: 0x334524, Func Offset: 0x4
	// Line 416, Address: 0x334528, Func Offset: 0x8
	// Line 418, Address: 0x33452c, Func Offset: 0xc
	// Line 419, Address: 0x33453c, Func Offset: 0x1c
	// Line 423, Address: 0x334548, Func Offset: 0x28
	// Line 424, Address: 0x33454c, Func Offset: 0x2c
	// Func End, Address: 0x33455c, Func Offset: 0x3c
}

// 
// Start address: 0x334560
int IsBright3F()
{
	// Line 431, Address: 0x334560, Func Offset: 0
	// Func End, Address: 0x334568, Func Offset: 0x8
}

// 
// Start address: 0x334570
int IsBright2F(int pos_no)
{
	_anon0* room_f3;
	// Line 435, Address: 0x334570, Func Offset: 0
	// Line 437, Address: 0x334580, Func Offset: 0x10
	// Line 440, Address: 0x33458c, Func Offset: 0x1c
	// Line 443, Address: 0x3345bc, Func Offset: 0x4c
	// Func End, Address: 0x3345cc, Func Offset: 0x5c
}

// 
// Start address: 0x3345d0
int IsBright1F(int pos_no)
{
	_anon0* room_f2;
	// Line 447, Address: 0x3345d0, Func Offset: 0
	// Line 449, Address: 0x3345e0, Func Offset: 0x10
	// Line 452, Address: 0x3345ec, Func Offset: 0x1c
	// Line 455, Address: 0x33461c, Func Offset: 0x4c
	// Func End, Address: 0x33462c, Func Offset: 0x5c
}

// 
// Start address: 0x334630
int IsBrightB1(int pos_no)
{
	int rtv;
	// Line 459, Address: 0x334630, Func Offset: 0
	// Line 462, Address: 0x334634, Func Offset: 0x4
	// Line 459, Address: 0x334638, Func Offset: 0x8
	// Line 462, Address: 0x33463c, Func Offset: 0xc
	// Line 463, Address: 0x334668, Func Offset: 0x38
	// Line 464, Address: 0x334678, Func Offset: 0x48
	// Line 465, Address: 0x334688, Func Offset: 0x58
	// Line 466, Address: 0x334698, Func Offset: 0x68
	// Line 470, Address: 0x3346a0, Func Offset: 0x70
	// Func End, Address: 0x3346ac, Func Offset: 0x7c
}

// 
// Start address: 0x3346b0
int IsBrightDummy()
{
	// Line 475, Address: 0x3346b0, Func Offset: 0
	// Func End, Address: 0x3346b8, Func Offset: 0x8
}

// 
// Start address: 0x3346c0
int GameWaterIsBright(int scene_no)
{
	int rtv;
	int floor;
	int pos_no;
	int(*is_bright)(int)[6];
	// Line 483, Address: 0x3346c0, Func Offset: 0
	// Line 484, Address: 0x3346d0, Func Offset: 0x10
	// Line 506, Address: 0x3346d4, Func Offset: 0x14
	// Line 508, Address: 0x3346e4, Func Offset: 0x24
	// Line 509, Address: 0x3346ec, Func Offset: 0x2c
	// Line 508, Address: 0x3346f0, Func Offset: 0x30
	// Line 509, Address: 0x3346f4, Func Offset: 0x34
	// Line 511, Address: 0x3346fc, Func Offset: 0x3c
	// Line 512, Address: 0x334708, Func Offset: 0x48
	// Line 516, Address: 0x334728, Func Offset: 0x68
	// Line 517, Address: 0x33472c, Func Offset: 0x6c
	// Func End, Address: 0x334740, Func Offset: 0x80
}

// 
// Start address: 0x334740
int GameWaterIsHole(int scene)
{
	int rtv;
	int floor;
	int pos_no;
	_anon0* r;
	// Line 521, Address: 0x334740, Func Offset: 0
	// Line 522, Address: 0x334750, Func Offset: 0x10
	// Line 523, Address: 0x334754, Func Offset: 0x14
	// Line 524, Address: 0x33475c, Func Offset: 0x1c
	// Line 523, Address: 0x334760, Func Offset: 0x20
	// Line 524, Address: 0x334764, Func Offset: 0x24
	// Line 526, Address: 0x33476c, Func Offset: 0x2c
	// Line 527, Address: 0x334778, Func Offset: 0x38
	// Line 528, Address: 0x334780, Func Offset: 0x40
	// Line 529, Address: 0x334788, Func Offset: 0x48
	// Line 531, Address: 0x33478c, Func Offset: 0x4c
	// Line 533, Address: 0x334790, Func Offset: 0x50
	// Line 534, Address: 0x334794, Func Offset: 0x54
	// Func End, Address: 0x3347a8, Func Offset: 0x68
}

// 
// Start address: 0x3347b0
int GameWaterIsRotScene(int scene)
{
	int rtv;
	int floor;
	int pos_no;
	// Line 538, Address: 0x3347b0, Func Offset: 0
	// Line 540, Address: 0x3347c4, Func Offset: 0x14
	// Line 542, Address: 0x3347cc, Func Offset: 0x1c
	// Line 543, Address: 0x3347e0, Func Offset: 0x30
	// Line 545, Address: 0x3347ec, Func Offset: 0x3c
	// Line 546, Address: 0x3347f8, Func Offset: 0x48
	// Line 548, Address: 0x3347fc, Func Offset: 0x4c
	// Line 550, Address: 0x334800, Func Offset: 0x50
	// Line 551, Address: 0x334804, Func Offset: 0x54
	// Func End, Address: 0x334818, Func Offset: 0x68
}

// 
// Start address: 0x334820
int GameWaterGetDefaultRotScene(int floor, int pos_no)
{
	int rtv;
	_anon2* f;
	// Line 555, Address: 0x334820, Func Offset: 0
	// Line 557, Address: 0x334828, Func Offset: 0x8
	// Line 559, Address: 0x334830, Func Offset: 0x10
	// Line 560, Address: 0x334840, Func Offset: 0x20
	// Line 561, Address: 0x334848, Func Offset: 0x28
	// Line 566, Address: 0x334850, Func Offset: 0x30
	// Line 565, Address: 0x334854, Func Offset: 0x34
	// Line 566, Address: 0x334858, Func Offset: 0x38
	// Func End, Address: 0x334860, Func Offset: 0x40
}

// 
// Start address: 0x334860
int GameWaterIsExistPipe(int floor, int pos_no)
{
	_anon1* p;
	// Line 571, Address: 0x334860, Func Offset: 0
	// Line 572, Address: 0x334868, Func Offset: 0x8
	// Line 575, Address: 0x334870, Func Offset: 0x10
	// Line 578, Address: 0x334884, Func Offset: 0x24
	// Func End, Address: 0x334890, Func Offset: 0x30
}

// 
// Start address: 0x334890
int GameWaterIsBrokenPipe(int floor, int pos_no)
{
	_anon1* p;
	// Line 582, Address: 0x334890, Func Offset: 0
	// Line 583, Address: 0x334898, Func Offset: 0x8
	// Line 586, Address: 0x3348a0, Func Offset: 0x10
	// Line 589, Address: 0x3348b4, Func Offset: 0x24
	// Func End, Address: 0x3348c0, Func Offset: 0x30
}

// 
// Start address: 0x3348c0
int IsWaterFlow3F(int pos_no)
{
	int rtv;
	// Line 594, Address: 0x3348c0, Func Offset: 0
	// Line 597, Address: 0x3348d4, Func Offset: 0x14
	// Line 599, Address: 0x3348ec, Func Offset: 0x2c
	// Line 600, Address: 0x3348f4, Func Offset: 0x34
	// Line 601, Address: 0x3348f8, Func Offset: 0x38
	// Line 603, Address: 0x33490c, Func Offset: 0x4c
	// Line 604, Address: 0x334914, Func Offset: 0x54
	// Line 606, Address: 0x334918, Func Offset: 0x58
	// Line 611, Address: 0x334948, Func Offset: 0x88
	// Line 613, Address: 0x33494c, Func Offset: 0x8c
	// Line 615, Address: 0x334950, Func Offset: 0x90
	// Line 616, Address: 0x334958, Func Offset: 0x98
	// Func End, Address: 0x33496c, Func Offset: 0xac
}

// 
// Start address: 0x334970
int IsWaterFlow2F(int pos_no)
{
	int rtv;
	// Line 621, Address: 0x334970, Func Offset: 0
	// Line 624, Address: 0x334984, Func Offset: 0x14
	// Line 626, Address: 0x33499c, Func Offset: 0x2c
	// Line 627, Address: 0x3349a4, Func Offset: 0x34
	// Line 628, Address: 0x3349a8, Func Offset: 0x38
	// Line 630, Address: 0x3349bc, Func Offset: 0x4c
	// Line 631, Address: 0x3349c4, Func Offset: 0x54
	// Line 633, Address: 0x3349c8, Func Offset: 0x58
	// Line 639, Address: 0x3349f8, Func Offset: 0x88
	// Line 640, Address: 0x334a08, Func Offset: 0x98
	// Line 643, Address: 0x334a0c, Func Offset: 0x9c
	// Line 645, Address: 0x334a10, Func Offset: 0xa0
	// Line 646, Address: 0x334a18, Func Offset: 0xa8
	// Func End, Address: 0x334a2c, Func Offset: 0xbc
}

// 
// Start address: 0x334a30
int IsWaterFlow1F(int pos_no)
{
	int rtv;
	// Line 651, Address: 0x334a30, Func Offset: 0
	// Line 654, Address: 0x334a44, Func Offset: 0x14
	// Line 656, Address: 0x334a5c, Func Offset: 0x2c
	// Line 657, Address: 0x334a64, Func Offset: 0x34
	// Line 658, Address: 0x334a68, Func Offset: 0x38
	// Line 660, Address: 0x334a7c, Func Offset: 0x4c
	// Line 661, Address: 0x334a84, Func Offset: 0x54
	// Line 663, Address: 0x334a88, Func Offset: 0x58
	// Line 669, Address: 0x334ab8, Func Offset: 0x88
	// Line 670, Address: 0x334ac8, Func Offset: 0x98
	// Line 673, Address: 0x334acc, Func Offset: 0x9c
	// Line 675, Address: 0x334ad0, Func Offset: 0xa0
	// Line 676, Address: 0x334ad8, Func Offset: 0xa8
	// Func End, Address: 0x334aec, Func Offset: 0xbc
}

// 
// Start address: 0x334af0
int IsWaterFlowB1(int pos_no)
{
	int rtv;
	int f1_pos_no;
	// Line 681, Address: 0x334af0, Func Offset: 0
	// Line 687, Address: 0x334af4, Func Offset: 0x4
	// Line 681, Address: 0x334af8, Func Offset: 0x8
	// Line 683, Address: 0x334afc, Func Offset: 0xc
	// Line 681, Address: 0x334b00, Func Offset: 0x10
	// Line 687, Address: 0x334b04, Func Offset: 0x14
	// Line 688, Address: 0x334b30, Func Offset: 0x40
	// Line 689, Address: 0x334b38, Func Offset: 0x48
	// Line 690, Address: 0x334b40, Func Offset: 0x50
	// Line 691, Address: 0x334b48, Func Offset: 0x58
	// Line 692, Address: 0x334b4c, Func Offset: 0x5c
	// Line 695, Address: 0x334b50, Func Offset: 0x60
	// Line 696, Address: 0x334b60, Func Offset: 0x70
	// Line 697, Address: 0x334b64, Func Offset: 0x74
	// Line 699, Address: 0x334b68, Func Offset: 0x78
	// Line 700, Address: 0x334b6c, Func Offset: 0x7c
	// Func End, Address: 0x334b7c, Func Offset: 0x8c
}

// 
// Start address: 0x334b80
int IsWaterFlowDummy()
{
	// Line 705, Address: 0x334b80, Func Offset: 0
	// Func End, Address: 0x334b88, Func Offset: 0x8
}

// 
// Start address: 0x334b90
int GameWaterIsWaterFlow(int floor, int pos_no)
{
	int rtv;
	int(*is_water_flow)(int)[6];
	// Line 713, Address: 0x334b90, Func Offset: 0
	// Line 725, Address: 0x334b94, Func Offset: 0x4
	// Line 713, Address: 0x334b98, Func Offset: 0x8
	// Line 725, Address: 0x334ba0, Func Offset: 0x10
	// Line 726, Address: 0x334bb0, Func Offset: 0x20
	// Line 728, Address: 0x334bc8, Func Offset: 0x38
	// Line 730, Address: 0x334be4, Func Offset: 0x54
	// Line 732, Address: 0x334be8, Func Offset: 0x58
	// Func End, Address: 0x334bf4, Func Offset: 0x64
}

// 
// Start address: 0x334c00
int GameWaterIsWaterLeakage(int floor, int pos_no)
{
	int rtv;
	int upstairs_water;
	// Line 738, Address: 0x334c00, Func Offset: 0
	// Line 743, Address: 0x334c04, Func Offset: 0x4
	// Line 738, Address: 0x334c08, Func Offset: 0x8
	// Line 740, Address: 0x334c0c, Func Offset: 0xc
	// Line 738, Address: 0x334c10, Func Offset: 0x10
	// Line 743, Address: 0x334c24, Func Offset: 0x24
	// Line 746, Address: 0x334c34, Func Offset: 0x34
	// Line 747, Address: 0x334c5c, Func Offset: 0x5c
	// Line 748, Address: 0x334c60, Func Offset: 0x60
	// Line 749, Address: 0x334c68, Func Offset: 0x68
	// Line 751, Address: 0x334c70, Func Offset: 0x70
	// Line 752, Address: 0x334c78, Func Offset: 0x78
	// Line 754, Address: 0x334c80, Func Offset: 0x80
	// Line 759, Address: 0x334cb0, Func Offset: 0xb0
	// Line 764, Address: 0x334cb4, Func Offset: 0xb4
	// Line 765, Address: 0x334cb8, Func Offset: 0xb8
	// Line 766, Address: 0x334cc0, Func Offset: 0xc0
	// Line 769, Address: 0x334ce8, Func Offset: 0xe8
	// Line 771, Address: 0x334cec, Func Offset: 0xec
	// Line 773, Address: 0x334cf0, Func Offset: 0xf0
	// Line 774, Address: 0x334cf4, Func Offset: 0xf4
	// Func End, Address: 0x334d0c, Func Offset: 0x10c
}

// 
// Start address: 0x334d10
void GameWaterGetPipePos(float* dst, int pipe_no)
{
	// Line 783, Address: 0x334d10, Func Offset: 0
	// Line 784, Address: 0x334d20, Func Offset: 0x10
	// Line 786, Address: 0x334d38, Func Offset: 0x28
	// Func End, Address: 0x334d40, Func Offset: 0x30
}

// 
// Start address: 0x334d40
int GameWaterGetFloorRot(int floor)
{
	// Line 796, Address: 0x334d40, Func Offset: 0
	// Func End, Address: 0x334d48, Func Offset: 0x8
}

// 
// Start address: 0x334d50
void GameWaterInit()
{
	// Line 804, Address: 0x334d50, Func Offset: 0
	// Line 805, Address: 0x334d54, Func Offset: 0x4
	// Line 804, Address: 0x334d58, Func Offset: 0x8
	// Line 805, Address: 0x334d5c, Func Offset: 0xc
	// Line 807, Address: 0x334d60, Func Offset: 0x10
	// Line 810, Address: 0x334d74, Func Offset: 0x24
	// Line 811, Address: 0x334d7c, Func Offset: 0x2c
	// Line 812, Address: 0x334d88, Func Offset: 0x38
	// Line 813, Address: 0x334d94, Func Offset: 0x44
	// Line 815, Address: 0x334da0, Func Offset: 0x50
	// Line 816, Address: 0x334dac, Func Offset: 0x5c
	// Line 818, Address: 0x334db8, Func Offset: 0x68
	// Line 819, Address: 0x334dcc, Func Offset: 0x7c
	// Line 820, Address: 0x334dd0, Func Offset: 0x80
	// Func End, Address: 0x334ddc, Func Offset: 0x8c
}

// 
// Start address: 0x334de0
void GameWaterRotateFloor(int floor, int dir)
{
	// Line 829, Address: 0x334de0, Func Offset: 0
	// Func End, Address: 0x334de8, Func Offset: 0x8
}

// 
// Start address: 0x334df0
int GameWaterGetNextSceneToRoom(int door_index)
{
	int pos_no;
	int floor;
	// Line 834, Address: 0x334df0, Func Offset: 0
	// Line 835, Address: 0x334df4, Func Offset: 0x4
	// Line 834, Address: 0x334df8, Func Offset: 0x8
	// Line 836, Address: 0x334e00, Func Offset: 0x10
	// Line 837, Address: 0x334e08, Func Offset: 0x18
	// Line 839, Address: 0x334e14, Func Offset: 0x24
	// Line 840, Address: 0x334e20, Func Offset: 0x30
	// Func End, Address: 0x334e30, Func Offset: 0x40
}

// 
// Start address: 0x334e30
int GameWaterIsLocked(int scene)
{
	int floor;
	int pos_no;
	_anon0* r;
	// Line 847, Address: 0x334e30, Func Offset: 0
	// Line 848, Address: 0x334e3c, Func Offset: 0xc
	// Line 849, Address: 0x334e44, Func Offset: 0x14
	// Line 848, Address: 0x334e48, Func Offset: 0x18
	// Line 849, Address: 0x334e4c, Func Offset: 0x1c
	// Line 850, Address: 0x334e54, Func Offset: 0x24
	// Line 853, Address: 0x334e60, Func Offset: 0x30
	// Line 857, Address: 0x334e74, Func Offset: 0x44
	// Func End, Address: 0x334e84, Func Offset: 0x54
}

// 
// Start address: 0x334e90
int GameWaterGetNextSceneUnderHole(int scene)
{
	int next_scene;
	int floor;
	int under_floor;
	int pos_no;
	// Line 864, Address: 0x334e90, Func Offset: 0
	// Line 866, Address: 0x334e9c, Func Offset: 0xc
	// Line 864, Address: 0x334ea0, Func Offset: 0x10
	// Line 869, Address: 0x334ea4, Func Offset: 0x14
	// Line 864, Address: 0x334ea8, Func Offset: 0x18
	// Line 865, Address: 0x334eac, Func Offset: 0x1c
	// Line 869, Address: 0x334eb0, Func Offset: 0x20
	// Line 872, Address: 0x334f24, Func Offset: 0x94
	// Line 873, Address: 0x334f28, Func Offset: 0x98
	// Line 875, Address: 0x334f2c, Func Offset: 0x9c
	// Line 881, Address: 0x334f34, Func Offset: 0xa4
	// Line 882, Address: 0x334f38, Func Offset: 0xa8
	// Line 884, Address: 0x334f3c, Func Offset: 0xac
	// Line 886, Address: 0x334f44, Func Offset: 0xb4
	// Line 888, Address: 0x334f48, Func Offset: 0xb8
	// Line 891, Address: 0x334f50, Func Offset: 0xc0
	// Line 893, Address: 0x334f58, Func Offset: 0xc8
	// Line 895, Address: 0x334f5c, Func Offset: 0xcc
	// Line 897, Address: 0x334f60, Func Offset: 0xd0
	// Line 898, Address: 0x334f68, Func Offset: 0xd8
	// Line 899, Address: 0x334f70, Func Offset: 0xe0
	// Line 900, Address: 0x334f7c, Func Offset: 0xec
	// Line 904, Address: 0x334f88, Func Offset: 0xf8
	// Line 905, Address: 0x334f8c, Func Offset: 0xfc
	// Func End, Address: 0x334fa0, Func Offset: 0x110
}

// 
// Start address: 0x334fa0
int GameWaterIsFloorWet(int scene)
{
	int rtv;
	int i;
	int floor;
	// Line 913, Address: 0x334fa0, Func Offset: 0
	// Line 918, Address: 0x334fa4, Func Offset: 0x4
	// Line 913, Address: 0x334fa8, Func Offset: 0x8
	// Line 918, Address: 0x334fb8, Func Offset: 0x18
	// Line 921, Address: 0x334fc8, Func Offset: 0x28
	// Line 925, Address: 0x334ff0, Func Offset: 0x50
	// Line 926, Address: 0x334ffc, Func Offset: 0x5c
	// Line 927, Address: 0x335000, Func Offset: 0x60
	// Line 928, Address: 0x335010, Func Offset: 0x70
	// Line 933, Address: 0x335020, Func Offset: 0x80
	// Line 934, Address: 0x335024, Func Offset: 0x84
	// Func End, Address: 0x33503c, Func Offset: 0x9c
}

// 
// Start address: 0x335040
void GameWaterEffectFallWater(int floor)
{
	int i;
	int cnt;
	int eff_num;
	float pipe_pos[4];
	// Line 1123, Address: 0x335040, Func Offset: 0
	// Line 1127, Address: 0x335044, Func Offset: 0x4
	// Line 1123, Address: 0x335048, Func Offset: 0x8
	// Line 1127, Address: 0x33505c, Func Offset: 0x1c
	// Line 1123, Address: 0x335060, Func Offset: 0x20
	// Line 1125, Address: 0x335064, Func Offset: 0x24
	// Line 1123, Address: 0x335068, Func Offset: 0x28
	// Line 1127, Address: 0x33506c, Func Offset: 0x2c
	// Line 1123, Address: 0x335070, Func Offset: 0x30
	// Line 1128, Address: 0x335074, Func Offset: 0x34
	// Line 1130, Address: 0x33507c, Func Offset: 0x3c
	// Line 1129, Address: 0x335080, Func Offset: 0x40
	// Line 1130, Address: 0x335084, Func Offset: 0x44
	// Line 1129, Address: 0x335088, Func Offset: 0x48
	// Line 1130, Address: 0x33508c, Func Offset: 0x4c
	// Line 1132, Address: 0x335094, Func Offset: 0x54
	// Line 1133, Address: 0x3350a8, Func Offset: 0x68
	// Line 1139, Address: 0x3350bc, Func Offset: 0x7c
	// Line 1142, Address: 0x3350c4, Func Offset: 0x84
	// Line 1145, Address: 0x3350d0, Func Offset: 0x90
	// Line 1142, Address: 0x3350d4, Func Offset: 0x94
	// Line 1145, Address: 0x3350dc, Func Offset: 0x9c
	// Line 1146, Address: 0x3350e0, Func Offset: 0xa0
	// Line 1148, Address: 0x3350f8, Func Offset: 0xb8
	// Line 1151, Address: 0x335108, Func Offset: 0xc8
	// Line 1154, Address: 0x335110, Func Offset: 0xd0
	// Line 1156, Address: 0x335144, Func Offset: 0x104
	// Line 1158, Address: 0x335148, Func Offset: 0x108
	// Line 1159, Address: 0x335158, Func Offset: 0x118
	// Func End, Address: 0x33517c, Func Offset: 0x13c
}

// 
// Start address: 0x335180
void GameWaterFallWaterSeUpdate(int floor)
{
	int i;
	int cnt;
	float pipe_pos[4];
	// Line 1163, Address: 0x335180, Func Offset: 0
	// Line 1167, Address: 0x335198, Func Offset: 0x18
	// Line 1163, Address: 0x33519c, Func Offset: 0x1c
	// Line 1165, Address: 0x3351a0, Func Offset: 0x20
	// Line 1163, Address: 0x3351a4, Func Offset: 0x24
	// Line 1167, Address: 0x3351a8, Func Offset: 0x28
	// Line 1168, Address: 0x3351b8, Func Offset: 0x38
	// Line 1174, Address: 0x3351cc, Func Offset: 0x4c
	// Line 1177, Address: 0x3351d4, Func Offset: 0x54
	// Line 1180, Address: 0x3351e0, Func Offset: 0x60
	// Line 1177, Address: 0x3351e4, Func Offset: 0x64
	// Line 1180, Address: 0x3351e8, Func Offset: 0x68
	// Line 1182, Address: 0x3351f0, Func Offset: 0x70
	// Line 1186, Address: 0x3351fc, Func Offset: 0x7c
	// Line 1188, Address: 0x335224, Func Offset: 0xa4
	// Line 1186, Address: 0x335228, Func Offset: 0xa8
	// Line 1189, Address: 0x33522c, Func Offset: 0xac
	// Line 1191, Address: 0x335230, Func Offset: 0xb0
	// Line 1192, Address: 0x335240, Func Offset: 0xc0
	// Func End, Address: 0x335260, Func Offset: 0xe0
}

// 
// Start address: 0x335260
void GameWaterEffectFallWaterFromCeiling()
{
	int i;
	int cnt;
	int eff_num;
	float pos[4];
	// Line 1196, Address: 0x335260, Func Offset: 0
	// Line 1201, Address: 0x335264, Func Offset: 0x4
	// Line 1196, Address: 0x335268, Func Offset: 0x8
	// Line 1201, Address: 0x33526c, Func Offset: 0xc
	// Line 1196, Address: 0x335270, Func Offset: 0x10
	// Line 1201, Address: 0x335274, Func Offset: 0x14
	// Line 1196, Address: 0x335278, Func Offset: 0x18
	// Line 1198, Address: 0x335280, Func Offset: 0x20
	// Line 1196, Address: 0x335284, Func Offset: 0x24
	// Line 1202, Address: 0x3352a4, Func Offset: 0x44
	// Line 1204, Address: 0x3352ac, Func Offset: 0x4c
	// Line 1203, Address: 0x3352b0, Func Offset: 0x50
	// Line 1204, Address: 0x3352b4, Func Offset: 0x54
	// Line 1203, Address: 0x3352b8, Func Offset: 0x58
	// Line 1204, Address: 0x3352bc, Func Offset: 0x5c
	// Line 1206, Address: 0x3352d0, Func Offset: 0x70
	// Line 1207, Address: 0x335308, Func Offset: 0xa8
	// Line 1210, Address: 0x33531c, Func Offset: 0xbc
	// Line 1214, Address: 0x335338, Func Offset: 0xd8
	// Line 1211, Address: 0x33533c, Func Offset: 0xdc
	// Line 1215, Address: 0x335348, Func Offset: 0xe8
	// Line 1217, Address: 0x335358, Func Offset: 0xf8
	// Line 1222, Address: 0x335368, Func Offset: 0x108
	// Line 1225, Address: 0x33537c, Func Offset: 0x11c
	// Line 1222, Address: 0x335380, Func Offset: 0x120
	// Line 1225, Address: 0x335384, Func Offset: 0x124
	// Line 1227, Address: 0x3353a8, Func Offset: 0x148
	// Line 1229, Address: 0x3353ac, Func Offset: 0x14c
	// Line 1230, Address: 0x3353c0, Func Offset: 0x160
	// Func End, Address: 0x3353f8, Func Offset: 0x198
}

// 
// Start address: 0x335400
void GameWaterEffectFallWaterFromCeilingSeUpdate()
{
	int i;
	int cnt;
	float pos[4];
	// Line 1234, Address: 0x335400, Func Offset: 0
	// Line 1238, Address: 0x335418, Func Offset: 0x18
	// Line 1234, Address: 0x33541c, Func Offset: 0x1c
	// Line 1236, Address: 0x335420, Func Offset: 0x20
	// Line 1234, Address: 0x335424, Func Offset: 0x24
	// Line 1238, Address: 0x335428, Func Offset: 0x28
	// Line 1234, Address: 0x33542c, Func Offset: 0x2c
	// Line 1238, Address: 0x33544c, Func Offset: 0x4c
	// Line 1239, Address: 0x335450, Func Offset: 0x50
	// Line 1242, Address: 0x335464, Func Offset: 0x64
	// Line 1245, Address: 0x335480, Func Offset: 0x80
	// Line 1247, Address: 0x33549c, Func Offset: 0x9c
	// Line 1251, Address: 0x3354a8, Func Offset: 0xa8
	// Line 1253, Address: 0x3354c4, Func Offset: 0xc4
	// Line 1254, Address: 0x3354c8, Func Offset: 0xc8
	// Line 1256, Address: 0x3354cc, Func Offset: 0xcc
	// Line 1257, Address: 0x3354e0, Func Offset: 0xe0
	// Func End, Address: 0x335508, Func Offset: 0x108
}

// 
// Start address: 0x335510
void GameWaterEffectDropLiquid(int is_ripple_ok)
{
	int num;
	int ripple;
	int eff_num;
	// Line 1261, Address: 0x335510, Func Offset: 0
	// Line 1267, Address: 0x335514, Func Offset: 0x4
	// Line 1261, Address: 0x335518, Func Offset: 0x8
	// Line 1262, Address: 0x335524, Func Offset: 0x14
	// Line 1261, Address: 0x335528, Func Offset: 0x18
	// Line 1267, Address: 0x33552c, Func Offset: 0x1c
	// Line 1271, Address: 0x33553c, Func Offset: 0x2c
	// Line 1272, Address: 0x335544, Func Offset: 0x34
	// Line 1275, Address: 0x335548, Func Offset: 0x38
	// Line 1276, Address: 0x335558, Func Offset: 0x48
	// Line 1277, Address: 0x335560, Func Offset: 0x50
	// Line 1278, Address: 0x335578, Func Offset: 0x68
	// Func End, Address: 0x335590, Func Offset: 0x80
}

// 
// Start address: 0x335590
void GameWaterPeepingFlagOn()
{
	// Line 1285, Address: 0x335590, Func Offset: 0
	// Line 1286, Address: 0x335598, Func Offset: 0x8
	// Func End, Address: 0x3355a0, Func Offset: 0x10
}

// 
// Start address: 0x3355a0
void GameWaterPeepingFlagOff()
{
	// Line 1291, Address: 0x3355a0, Func Offset: 0
	// Line 1292, Address: 0x3355a4, Func Offset: 0x4
	// Func End, Address: 0x3355ac, Func Offset: 0xc
}

// 
// Start address: 0x3355b0
int GameWaterIsPeeping()
{
	// Line 1300, Address: 0x3355b0, Func Offset: 0
	// Line 1301, Address: 0x3355b4, Func Offset: 0x4
	// Func End, Address: 0x3355bc, Func Offset: 0xc
}

// 
// Start address: 0x3355c0
void GameWaterSceneInit()
{
	int floor;
	void* data;
	float pos[4];
	unsigned int mz_bright_scene[44];
	// Line 1304, Address: 0x3355c0, Func Offset: 0
	// Line 1318, Address: 0x3355c4, Func Offset: 0x4
	// Line 1304, Address: 0x3355c8, Func Offset: 0x8
	// Line 1318, Address: 0x3355d0, Func Offset: 0x10
	// Line 1324, Address: 0x3355d4, Func Offset: 0x14
	// Line 1325, Address: 0x3355e4, Func Offset: 0x24
	// Line 1326, Address: 0x3355fc, Func Offset: 0x3c
	// Line 1327, Address: 0x335604, Func Offset: 0x44
	// Line 1329, Address: 0x33560c, Func Offset: 0x4c
	// Line 1332, Address: 0x335610, Func Offset: 0x50
	// Line 1337, Address: 0x335690, Func Offset: 0xd0
	// Line 1338, Address: 0x335698, Func Offset: 0xd8
	// Line 1340, Address: 0x3356a0, Func Offset: 0xe0
	// Line 1341, Address: 0x3356a8, Func Offset: 0xe8
	// Line 1345, Address: 0x3356b0, Func Offset: 0xf0
	// Line 1346, Address: 0x3356b8, Func Offset: 0xf8
	// Line 1348, Address: 0x3356c0, Func Offset: 0x100
	// Line 1349, Address: 0x3356c8, Func Offset: 0x108
	// Line 1352, Address: 0x3356d0, Func Offset: 0x110
	// Line 1353, Address: 0x3356d8, Func Offset: 0x118
	// Line 1356, Address: 0x3356e0, Func Offset: 0x120
	// Line 1358, Address: 0x3356f4, Func Offset: 0x134
	// Line 1360, Address: 0x3356fc, Func Offset: 0x13c
	// Line 1358, Address: 0x335700, Func Offset: 0x140
	// Line 1360, Address: 0x335704, Func Offset: 0x144
	// Line 1361, Address: 0x33570c, Func Offset: 0x14c
	// Line 1362, Address: 0x335720, Func Offset: 0x160
	// Line 1363, Address: 0x335728, Func Offset: 0x168
	// Line 1365, Address: 0x335738, Func Offset: 0x178
	// Line 1370, Address: 0x335740, Func Offset: 0x180
	// Line 1371, Address: 0x335748, Func Offset: 0x188
	// Line 1375, Address: 0x335750, Func Offset: 0x190
	// Line 1376, Address: 0x335758, Func Offset: 0x198
	// Line 1379, Address: 0x335760, Func Offset: 0x1a0
	// Line 1381, Address: 0x335768, Func Offset: 0x1a8
	// Line 1385, Address: 0x335770, Func Offset: 0x1b0
	// Line 1386, Address: 0x335774, Func Offset: 0x1b4
	// Line 1387, Address: 0x335780, Func Offset: 0x1c0
	// Line 1388, Address: 0x33578c, Func Offset: 0x1cc
	// Line 1389, Address: 0x335790, Func Offset: 0x1d0
	// Line 1390, Address: 0x3357a0, Func Offset: 0x1e0
	// Line 1391, Address: 0x3357c0, Func Offset: 0x200
	// Line 1392, Address: 0x3357cc, Func Offset: 0x20c
	// Line 1395, Address: 0x3357d0, Func Offset: 0x210
	// Line 1402, Address: 0x3357d8, Func Offset: 0x218
	// Line 1404, Address: 0x3357f8, Func Offset: 0x238
	// Line 1405, Address: 0x335800, Func Offset: 0x240
	// Line 1407, Address: 0x335808, Func Offset: 0x248
	// Func End, Address: 0x335818, Func Offset: 0x258
}

// 
// Start address: 0x335820
int fallwater_effect_check()
{
	// Line 1412, Address: 0x335820, Func Offset: 0
	// Line 1414, Address: 0x335844, Func Offset: 0x24
	// Func End, Address: 0x33584c, Func Offset: 0x2c
}

// 
// Start address: 0x335850
void fallwater_effect_set()
{
	// Line 1418, Address: 0x335850, Func Offset: 0
	// Line 1421, Address: 0x335858, Func Offset: 0x8
	// Line 1422, Address: 0x335860, Func Offset: 0x10
	// Line 1423, Address: 0x335868, Func Offset: 0x18
	// Line 1425, Address: 0x335870, Func Offset: 0x20
	// Line 1426, Address: 0x33588c, Func Offset: 0x3c
	// Func End, Address: 0x335898, Func Offset: 0x48
}

// 
// Start address: 0x3358a0
void GameWaterMain()
{
	int floor;
	// Line 1429, Address: 0x3358a0, Func Offset: 0
	// Line 1430, Address: 0x3358a4, Func Offset: 0x4
	// Line 1429, Address: 0x3358a8, Func Offset: 0x8
	// Line 1438, Address: 0x3358b0, Func Offset: 0x10
	// Line 1439, Address: 0x3358b8, Func Offset: 0x18
	// Line 1441, Address: 0x3358d0, Func Offset: 0x30
	// Line 1442, Address: 0x3358e0, Func Offset: 0x40
	// Line 1443, Address: 0x3358e8, Func Offset: 0x48
	// Line 1449, Address: 0x3358f0, Func Offset: 0x50
	// Line 1453, Address: 0x3358f8, Func Offset: 0x58
	// Line 1458, Address: 0x335928, Func Offset: 0x88
	// Line 1459, Address: 0x335930, Func Offset: 0x90
	// Line 1460, Address: 0x335938, Func Offset: 0x98
	// Line 1462, Address: 0x335940, Func Offset: 0xa0
	// Line 1467, Address: 0x335948, Func Offset: 0xa8
	// Func End, Address: 0x335958, Func Offset: 0xb8
}

