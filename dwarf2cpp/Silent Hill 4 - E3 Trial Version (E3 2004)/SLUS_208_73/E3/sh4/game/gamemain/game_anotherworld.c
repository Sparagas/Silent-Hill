typedef union _anon0;
typedef struct sfObj;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef struct _GAME_WORK;

typedef void(*type_0)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_6)();
typedef void(*type_8)(sfObj*);
typedef void(*type_10)();
typedef void(*type_21)(sfObj*);
typedef void(*type_36)(sfObj*);
typedef void(*type_37)(sfObj*);
typedef void(*type_39)(sfObj*);
typedef void(*type_40)();

typedef float type_1[4][45];
typedef float type_2[4][36];
typedef float type_5[4][7];
typedef void(*type_7)()[8];
typedef float type_9[4];
typedef float type_11[4][4];
typedef int type_12[1];
typedef void(*type_13)()[2];
typedef float type_14[4][27];
typedef int type_15[1];
typedef float type_16[4][30];
typedef int type_17[1];
typedef float type_18[4];
typedef float type_19[4][27];
typedef int type_20[1];
typedef int type_22[1];
typedef float type_23[4][15];
typedef void(*type_24)(sfObj*)[3];
typedef short type_25[2];
typedef int type_26[1];
typedef unsigned short type_27[2];
typedef char type_28[4];
typedef float type_29[4][25];
typedef unsigned char type_30[4];
typedef float type_31[1];
typedef int type_32[1];
typedef int type_33[1];
typedef float type_34[4][27];
typedef _anon0 type_35[256];
typedef float type_38[4][4];
typedef float type_41[4][8];

union _anon0
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
float rl_offset[4][8];
float sb_offset[4][27];
float fr_offset[4][25];
float mz_offset[4][45];
float bd_offset[4][30];
float ie_offset[4][27];
float hs_offset[4][36];
float cm_offset[4][27];
float ls_offset[4][4];
float st_offset[4][7];
float scene_offset_tbl[4][15];
sfObj* drop_obj;
sfObj* splash_obj;
_GAME_WORK gamew;
void(*HitBloodDrop_DrawAll)(sfObj*);
void(*HitBloodDrop_CalcAll)(sfObj*);
void(*HitBloodSplash_DrawAll)(sfObj*);
void(*HitBloodSplash_CalcAll)(sfObj*);
void(*GameFileReadAhead)(sfObj*);
void(*stage_func_tbl)()[8];
_cam3Work cam3_work;

void GameAnotherWorldStageInit();
void GameAnotherWorldSceneInit();
void GameAnotherWorldLoading();
void GameAnotherWorldSetupBloodSplash();
void GameAnotherWorldSceneSet();
void AnotherWorldMain();
void GameAnotherWorldSceneEnd();
void GameAnotherWorldStageEnd();
void GameAnotherWorldMain();

// 
// Start address: 0x15e140
void GameAnotherWorldStageInit()
{
	// Line 352, Address: 0x15e140, Func Offset: 0
	// Line 353, Address: 0x15e148, Func Offset: 0x8
	// Line 355, Address: 0x15e150, Func Offset: 0x10
	// Line 356, Address: 0x15e164, Func Offset: 0x24
	// Line 358, Address: 0x15e170, Func Offset: 0x30
	// Line 359, Address: 0x15e178, Func Offset: 0x38
	// Line 361, Address: 0x15e17c, Func Offset: 0x3c
	// Line 362, Address: 0x15e184, Func Offset: 0x44
	// Func End, Address: 0x15e190, Func Offset: 0x50
}

// 
// Start address: 0x15e190
void GameAnotherWorldSceneInit()
{
	// Line 367, Address: 0x15e190, Func Offset: 0
	// Line 368, Address: 0x15e198, Func Offset: 0x8
	// Line 370, Address: 0x15e1a0, Func Offset: 0x10
	// Line 372, Address: 0x15e1a8, Func Offset: 0x18
	// Func End, Address: 0x15e1b4, Func Offset: 0x24
}

// 
// Start address: 0x15e1c0
void GameAnotherWorldLoading()
{
	// Line 376, Address: 0x15e1c0, Func Offset: 0
	// Line 377, Address: 0x15e1c8, Func Offset: 0x8
	// Line 378, Address: 0x15e1d0, Func Offset: 0x10
	// Line 379, Address: 0x15e204, Func Offset: 0x44
	// Line 380, Address: 0x15e208, Func Offset: 0x48
	// Line 381, Address: 0x15e210, Func Offset: 0x50
	// Line 383, Address: 0x15e224, Func Offset: 0x64
	// Line 385, Address: 0x15e22c, Func Offset: 0x6c
	// Line 386, Address: 0x15e234, Func Offset: 0x74
	// Line 387, Address: 0x15e23c, Func Offset: 0x7c
	// Line 388, Address: 0x15e240, Func Offset: 0x80
	// Line 390, Address: 0x15e250, Func Offset: 0x90
	// Line 392, Address: 0x15e258, Func Offset: 0x98
	// Line 394, Address: 0x15e260, Func Offset: 0xa0
	// Line 395, Address: 0x15e268, Func Offset: 0xa8
	// Line 398, Address: 0x15e270, Func Offset: 0xb0
	// Line 401, Address: 0x15e280, Func Offset: 0xc0
	// Line 406, Address: 0x15e288, Func Offset: 0xc8
	// Line 407, Address: 0x15e290, Func Offset: 0xd0
	// Line 408, Address: 0x15e298, Func Offset: 0xd8
	// Line 411, Address: 0x15e2a0, Func Offset: 0xe0
	// Line 412, Address: 0x15e2b0, Func Offset: 0xf0
	// Line 413, Address: 0x15e2b8, Func Offset: 0xf8
	// Line 414, Address: 0x15e2c0, Func Offset: 0x100
	// Line 419, Address: 0x15e2c8, Func Offset: 0x108
	// Line 421, Address: 0x15e2d0, Func Offset: 0x110
	// Func End, Address: 0x15e2dc, Func Offset: 0x11c
}

// 
// Start address: 0x15e2e0
void GameAnotherWorldSetupBloodSplash()
{
	// Line 425, Address: 0x15e2e0, Func Offset: 0
	// Line 427, Address: 0x15e2e4, Func Offset: 0x4
	// Line 425, Address: 0x15e2e8, Func Offset: 0x8
	// Line 427, Address: 0x15e2ec, Func Offset: 0xc
	// Line 432, Address: 0x15e310, Func Offset: 0x30
	// Line 433, Address: 0x15e318, Func Offset: 0x38
	// Line 434, Address: 0x15e320, Func Offset: 0x40
	// Line 435, Address: 0x15e32c, Func Offset: 0x4c
	// Line 434, Address: 0x15e330, Func Offset: 0x50
	// Line 435, Address: 0x15e334, Func Offset: 0x54
	// Line 436, Address: 0x15e344, Func Offset: 0x64
	// Line 437, Address: 0x15e354, Func Offset: 0x74
	// Line 438, Address: 0x15e368, Func Offset: 0x88
	// Line 439, Address: 0x15e374, Func Offset: 0x94
	// Line 438, Address: 0x15e378, Func Offset: 0x98
	// Line 439, Address: 0x15e37c, Func Offset: 0x9c
	// Line 440, Address: 0x15e38c, Func Offset: 0xac
	// Line 441, Address: 0x15e39c, Func Offset: 0xbc
	// Line 443, Address: 0x15e3b0, Func Offset: 0xd0
	// Func End, Address: 0x15e3bc, Func Offset: 0xdc
}

// 
// Start address: 0x15e3c0
void GameAnotherWorldSceneSet()
{
	sfObj* optr;
	// Line 447, Address: 0x15e3c0, Func Offset: 0
	// Line 450, Address: 0x15e3c8, Func Offset: 0x8
	// Line 452, Address: 0x15e3d0, Func Offset: 0x10
	// Line 455, Address: 0x15e3d8, Func Offset: 0x18
	// Line 458, Address: 0x15e3e0, Func Offset: 0x20
	// Line 461, Address: 0x15e3e8, Func Offset: 0x28
	// Line 464, Address: 0x15e3f0, Func Offset: 0x30
	// Line 467, Address: 0x15e3f8, Func Offset: 0x38
	// Line 470, Address: 0x15e400, Func Offset: 0x40
	// Line 473, Address: 0x15e408, Func Offset: 0x48
	// Line 476, Address: 0x15e410, Func Offset: 0x50
	// Line 477, Address: 0x15e418, Func Offset: 0x58
	// Line 478, Address: 0x15e420, Func Offset: 0x60
	// Line 479, Address: 0x15e42c, Func Offset: 0x6c
	// Line 481, Address: 0x15e430, Func Offset: 0x70
	// Line 483, Address: 0x15e438, Func Offset: 0x78
	// Func End, Address: 0x15e444, Func Offset: 0x84
}

// 
// Start address: 0x15e450
void AnotherWorldMain()
{
	// Line 487, Address: 0x15e450, Func Offset: 0
	// Line 489, Address: 0x15e458, Func Offset: 0x8
	// Line 492, Address: 0x15e460, Func Offset: 0x10
	// Line 495, Address: 0x15e468, Func Offset: 0x18
	// Line 497, Address: 0x15e478, Func Offset: 0x28
	// Line 499, Address: 0x15e480, Func Offset: 0x30
	// Line 500, Address: 0x15e488, Func Offset: 0x38
	// Line 501, Address: 0x15e490, Func Offset: 0x40
	// Line 505, Address: 0x15e498, Func Offset: 0x48
	// Line 507, Address: 0x15e4a8, Func Offset: 0x58
	// Line 506, Address: 0x15e4ac, Func Offset: 0x5c
	// Line 508, Address: 0x15e4b8, Func Offset: 0x68
	// Line 509, Address: 0x15e4c0, Func Offset: 0x70
	// Line 513, Address: 0x15e4c8, Func Offset: 0x78
	// Func End, Address: 0x15e4d4, Func Offset: 0x84
}

// 
// Start address: 0x15e4e0
void GameAnotherWorldSceneEnd()
{
	int fade_timer;
	// Line 517, Address: 0x15e4e0, Func Offset: 0
	// Line 521, Address: 0x15e4e8, Func Offset: 0x8
	// Line 523, Address: 0x15e4f0, Func Offset: 0x10
	// Line 526, Address: 0x15e528, Func Offset: 0x48
	// Line 529, Address: 0x15e530, Func Offset: 0x50
	// Line 531, Address: 0x15e538, Func Offset: 0x58
	// Line 534, Address: 0x15e540, Func Offset: 0x60
	// Line 537, Address: 0x15e548, Func Offset: 0x68
	// Line 540, Address: 0x15e550, Func Offset: 0x70
	// Line 541, Address: 0x15e55c, Func Offset: 0x7c
	// Line 543, Address: 0x15e560, Func Offset: 0x80
	// Line 544, Address: 0x15e568, Func Offset: 0x88
	// Line 546, Address: 0x15e570, Func Offset: 0x90
	// Line 551, Address: 0x15e58c, Func Offset: 0xac
	// Line 552, Address: 0x15e594, Func Offset: 0xb4
	// Line 553, Address: 0x15e59c, Func Offset: 0xbc
	// Line 554, Address: 0x15e5a4, Func Offset: 0xc4
	// Line 556, Address: 0x15e5a8, Func Offset: 0xc8
	// Line 558, Address: 0x15e5b8, Func Offset: 0xd8
	// Line 559, Address: 0x15e5c0, Func Offset: 0xe0
	// Line 560, Address: 0x15e5c8, Func Offset: 0xe8
	// Line 561, Address: 0x15e5d8, Func Offset: 0xf8
	// Line 562, Address: 0x15e5e0, Func Offset: 0x100
	// Line 563, Address: 0x15e5e8, Func Offset: 0x108
	// Line 564, Address: 0x15e5ec, Func Offset: 0x10c
	// Line 566, Address: 0x15e5f4, Func Offset: 0x114
	// Line 569, Address: 0x15e5f8, Func Offset: 0x118
	// Line 572, Address: 0x15e608, Func Offset: 0x128
	// Line 576, Address: 0x15e610, Func Offset: 0x130
	// Line 577, Address: 0x15e620, Func Offset: 0x140
	// Line 580, Address: 0x15e628, Func Offset: 0x148
	// Line 582, Address: 0x15e640, Func Offset: 0x160
	// Line 585, Address: 0x15e648, Func Offset: 0x168
	// Line 586, Address: 0x15e650, Func Offset: 0x170
	// Line 589, Address: 0x15e658, Func Offset: 0x178
	// Line 592, Address: 0x15e660, Func Offset: 0x180
	// Line 595, Address: 0x15e668, Func Offset: 0x188
	// Func End, Address: 0x15e674, Func Offset: 0x194
}

// 
// Start address: 0x15e680
void GameAnotherWorldStageEnd()
{
	// Line 599, Address: 0x15e680, Func Offset: 0
	// Line 600, Address: 0x15e688, Func Offset: 0x8
	// Line 601, Address: 0x15e690, Func Offset: 0x10
	// Line 603, Address: 0x15e698, Func Offset: 0x18
	// Func End, Address: 0x15e6a4, Func Offset: 0x24
}

// 
// Start address: 0x15e6b0
void GameAnotherWorldMain()
{
	int step;
	void(*func)();
	// Line 618, Address: 0x15e6b0, Func Offset: 0
	// Line 621, Address: 0x15e6b8, Func Offset: 0x8
	// Line 623, Address: 0x15e6c0, Func Offset: 0x10
	// Line 625, Address: 0x15e6c8, Func Offset: 0x18
	// Line 627, Address: 0x15e6dc, Func Offset: 0x2c
	// Line 628, Address: 0x15e6e4, Func Offset: 0x34
	// Line 629, Address: 0x15e6ec, Func Offset: 0x3c
	// Line 630, Address: 0x15e6f8, Func Offset: 0x48
	// Line 633, Address: 0x15e700, Func Offset: 0x50
	// Line 636, Address: 0x15e708, Func Offset: 0x58
	// Func End, Address: 0x15e714, Func Offset: 0x64
}

