typedef struct _GAME_WORK;

typedef void(*type_2)();

typedef int type_0[1];
typedef float type_1[4];
typedef void(*type_3)()[8];
typedef float type_4[4];
typedef float type_5[4][4];
typedef int type_6[1];
typedef int type_7[1];
typedef int type_8[1];
typedef int type_9[1];
typedef int type_10[1];
typedef int type_11[1];

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

void(*step_func)()[8];
void* stack_memery_addr;
_GAME_WORK gamew;
unsigned int step_counter;

void StepMemoeryMark();
void StepMemoeryFree();
void StepInit();
void StepKonamiLogo();
void StepMovieDemo();
void StepTitle();
void StepMemLoad();
void StepOption();
void StepGame();
void MainStep();

// 
// Start address: 0x159620
void StepMemoeryMark()
{
	// Line 74, Address: 0x159620, Func Offset: 0
	// Line 76, Address: 0x159628, Func Offset: 0x8
	// Line 77, Address: 0x159638, Func Offset: 0x18
	// Func End, Address: 0x159644, Func Offset: 0x24
}

// 
// Start address: 0x159650
void StepMemoeryFree()
{
	// Line 80, Address: 0x159650, Func Offset: 0
	// Line 81, Address: 0x159654, Func Offset: 0x4
	// Line 80, Address: 0x159658, Func Offset: 0x8
	// Line 81, Address: 0x15965c, Func Offset: 0xc
	// Line 82, Address: 0x159664, Func Offset: 0x14
	// Line 83, Address: 0x15966c, Func Offset: 0x1c
	// Func End, Address: 0x159678, Func Offset: 0x28
}

// 
// Start address: 0x159680
void StepInit()
{
	// Line 90, Address: 0x159680, Func Offset: 0
	// Line 91, Address: 0x159688, Func Offset: 0x8
	// Line 92, Address: 0x159690, Func Offset: 0x10
	// Line 93, Address: 0x1596b4, Func Offset: 0x34
	// Line 94, Address: 0x1596b8, Func Offset: 0x38
	// Line 95, Address: 0x1596c0, Func Offset: 0x40
	// Line 96, Address: 0x1596c4, Func Offset: 0x44
	// Line 97, Address: 0x1596cc, Func Offset: 0x4c
	// Line 98, Address: 0x1596d4, Func Offset: 0x54
	// Line 99, Address: 0x1596d8, Func Offset: 0x58
	// Line 100, Address: 0x1596e0, Func Offset: 0x60
	// Line 101, Address: 0x1596f0, Func Offset: 0x70
	// Line 102, Address: 0x1596f8, Func Offset: 0x78
	// Line 103, Address: 0x159700, Func Offset: 0x80
	// Line 104, Address: 0x159708, Func Offset: 0x88
	// Line 105, Address: 0x159710, Func Offset: 0x90
	// Line 107, Address: 0x159718, Func Offset: 0x98
	// Line 109, Address: 0x159720, Func Offset: 0xa0
	// Line 110, Address: 0x159728, Func Offset: 0xa8
	// Func End, Address: 0x159734, Func Offset: 0xb4
}

// 
// Start address: 0x159740
void StepKonamiLogo()
{
	// Line 116, Address: 0x159740, Func Offset: 0
	// Line 117, Address: 0x159748, Func Offset: 0x8
	// Line 118, Address: 0x159750, Func Offset: 0x10
	// Line 120, Address: 0x159788, Func Offset: 0x48
	// Line 121, Address: 0x159790, Func Offset: 0x50
	// Line 123, Address: 0x159798, Func Offset: 0x58
	// Line 124, Address: 0x1597a0, Func Offset: 0x60
	// Line 126, Address: 0x1597a8, Func Offset: 0x68
	// Line 127, Address: 0x1597b0, Func Offset: 0x70
	// Line 129, Address: 0x1597b8, Func Offset: 0x78
	// Line 130, Address: 0x1597c0, Func Offset: 0x80
	// Line 136, Address: 0x1597c8, Func Offset: 0x88
	// Line 138, Address: 0x1597d8, Func Offset: 0x98
	// Line 139, Address: 0x1597e0, Func Offset: 0xa0
	// Line 140, Address: 0x1597e8, Func Offset: 0xa8
	// Line 143, Address: 0x1597f0, Func Offset: 0xb0
	// Line 145, Address: 0x1597f8, Func Offset: 0xb8
	// Line 147, Address: 0x159800, Func Offset: 0xc0
	// Line 148, Address: 0x159808, Func Offset: 0xc8
	// Func End, Address: 0x159814, Func Offset: 0xd4
}

// 
// Start address: 0x159820
void StepMovieDemo()
{
	// Line 154, Address: 0x159820, Func Offset: 0
	// Line 155, Address: 0x159828, Func Offset: 0x8
	// Line 156, Address: 0x159830, Func Offset: 0x10
	// Line 157, Address: 0x15985c, Func Offset: 0x3c
	// Line 158, Address: 0x159860, Func Offset: 0x40
	// Line 159, Address: 0x159868, Func Offset: 0x48
	// Line 161, Address: 0x159870, Func Offset: 0x50
	// Line 162, Address: 0x159878, Func Offset: 0x58
	// Line 164, Address: 0x159880, Func Offset: 0x60
	// Line 165, Address: 0x159888, Func Offset: 0x68
	// Line 166, Address: 0x159890, Func Offset: 0x70
	// Line 167, Address: 0x159898, Func Offset: 0x78
	// Line 168, Address: 0x1598a0, Func Offset: 0x80
	// Line 170, Address: 0x1598a8, Func Offset: 0x88
	// Line 171, Address: 0x1598b0, Func Offset: 0x90
	// Func End, Address: 0x1598bc, Func Offset: 0x9c
}

// 
// Start address: 0x1598c0
void StepTitle()
{
	int from_title_step;
	// Line 177, Address: 0x1598c0, Func Offset: 0
	// Line 179, Address: 0x1598c8, Func Offset: 0x8
	// Line 180, Address: 0x1598d0, Func Offset: 0x10
	// Line 182, Address: 0x159910, Func Offset: 0x50
	// Line 183, Address: 0x159918, Func Offset: 0x58
	// Line 185, Address: 0x159920, Func Offset: 0x60
	// Line 190, Address: 0x159928, Func Offset: 0x68
	// Line 192, Address: 0x159944, Func Offset: 0x84
	// Line 193, Address: 0x15994c, Func Offset: 0x8c
	// Line 194, Address: 0x159950, Func Offset: 0x90
	// Line 196, Address: 0x159960, Func Offset: 0xa0
	// Line 199, Address: 0x159968, Func Offset: 0xa8
	// Line 200, Address: 0x159978, Func Offset: 0xb8
	// Line 214, Address: 0x159988, Func Offset: 0xc8
	// Line 217, Address: 0x159990, Func Offset: 0xd0
	// Line 221, Address: 0x159998, Func Offset: 0xd8
	// Line 222, Address: 0x1599a8, Func Offset: 0xe8
	// Line 224, Address: 0x1599b0, Func Offset: 0xf0
	// Line 227, Address: 0x1599b8, Func Offset: 0xf8
	// Line 228, Address: 0x1599c0, Func Offset: 0x100
	// Line 229, Address: 0x1599cc, Func Offset: 0x10c
	// Line 230, Address: 0x1599d4, Func Offset: 0x114
	// Line 231, Address: 0x1599e0, Func Offset: 0x120
	// Line 233, Address: 0x1599e8, Func Offset: 0x128
	// Line 234, Address: 0x1599f0, Func Offset: 0x130
	// Func End, Address: 0x159a00, Func Offset: 0x140
}

// 
// Start address: 0x159a00
void StepMemLoad()
{
	// Line 240, Address: 0x159a00, Func Offset: 0
	// Line 241, Address: 0x159a08, Func Offset: 0x8
	// Line 242, Address: 0x159a10, Func Offset: 0x10
	// Line 244, Address: 0x159a48, Func Offset: 0x48
	// Line 245, Address: 0x159a50, Func Offset: 0x50
	// Line 246, Address: 0x159a58, Func Offset: 0x58
	// Line 249, Address: 0x159a60, Func Offset: 0x60
	// Line 250, Address: 0x159a68, Func Offset: 0x68
	// Line 252, Address: 0x159a70, Func Offset: 0x70
	// Line 253, Address: 0x159a78, Func Offset: 0x78
	// Line 254, Address: 0x159a80, Func Offset: 0x80
	// Line 255, Address: 0x159a88, Func Offset: 0x88
	// Line 257, Address: 0x159a90, Func Offset: 0x90
	// Line 258, Address: 0x159a98, Func Offset: 0x98
	// Line 259, Address: 0x159aa0, Func Offset: 0xa0
	// Line 260, Address: 0x159aa8, Func Offset: 0xa8
	// Line 261, Address: 0x159ab0, Func Offset: 0xb0
	// Line 263, Address: 0x159ab8, Func Offset: 0xb8
	// Line 264, Address: 0x159ac0, Func Offset: 0xc0
	// Func End, Address: 0x159acc, Func Offset: 0xcc
}

// 
// Start address: 0x159ad0
void StepOption()
{
	// Line 270, Address: 0x159ad0, Func Offset: 0
	// Line 271, Address: 0x159ad8, Func Offset: 0x8
	// Line 272, Address: 0x159ae0, Func Offset: 0x10
	// Line 274, Address: 0x159b20, Func Offset: 0x50
	// Line 275, Address: 0x159b28, Func Offset: 0x58
	// Line 276, Address: 0x159b30, Func Offset: 0x60
	// Line 278, Address: 0x159b38, Func Offset: 0x68
	// Line 279, Address: 0x159b44, Func Offset: 0x74
	// Line 280, Address: 0x159b50, Func Offset: 0x80
	// Line 281, Address: 0x159b58, Func Offset: 0x88
	// Line 284, Address: 0x159b60, Func Offset: 0x90
	// Line 285, Address: 0x159b74, Func Offset: 0xa4
	// Line 287, Address: 0x159b7c, Func Offset: 0xac
	// Line 289, Address: 0x159b84, Func Offset: 0xb4
	// Line 290, Address: 0x159b88, Func Offset: 0xb8
	// Line 291, Address: 0x159b98, Func Offset: 0xc8
	// Line 294, Address: 0x159ba0, Func Offset: 0xd0
	// Line 295, Address: 0x159ba8, Func Offset: 0xd8
	// Line 298, Address: 0x159bb0, Func Offset: 0xe0
	// Line 299, Address: 0x159bb8, Func Offset: 0xe8
	// Line 300, Address: 0x159bc0, Func Offset: 0xf0
	// Line 301, Address: 0x159bc8, Func Offset: 0xf8
	// Line 302, Address: 0x159bd0, Func Offset: 0x100
	// Line 304, Address: 0x159bd8, Func Offset: 0x108
	// Line 305, Address: 0x159be0, Func Offset: 0x110
	// Func End, Address: 0x159bec, Func Offset: 0x11c
}

// 
// Start address: 0x159bf0
void StepGame()
{
	// Line 311, Address: 0x159bf0, Func Offset: 0
	// Line 312, Address: 0x159bf8, Func Offset: 0x8
	// Line 313, Address: 0x159c00, Func Offset: 0x10
	// Line 314, Address: 0x159c2c, Func Offset: 0x3c
	// Line 315, Address: 0x159c30, Func Offset: 0x40
	// Line 316, Address: 0x159c38, Func Offset: 0x48
	// Line 318, Address: 0x159c40, Func Offset: 0x50
	// Line 319, Address: 0x159c48, Func Offset: 0x58
	// Line 321, Address: 0x159c50, Func Offset: 0x60
	// Line 322, Address: 0x159c58, Func Offset: 0x68
	// Line 323, Address: 0x159c60, Func Offset: 0x70
	// Line 324, Address: 0x159c68, Func Offset: 0x78
	// Line 325, Address: 0x159c70, Func Offset: 0x80
	// Line 327, Address: 0x159c78, Func Offset: 0x88
	// Line 328, Address: 0x159c80, Func Offset: 0x90
	// Func End, Address: 0x159c8c, Func Offset: 0x9c
}

// 
// Start address: 0x159c90
void MainStep()
{
	// Line 362, Address: 0x159c90, Func Offset: 0
	// Line 366, Address: 0x159c98, Func Offset: 0x8
	// Line 369, Address: 0x159cbc, Func Offset: 0x2c
	// Line 370, Address: 0x159cc0, Func Offset: 0x30
	// Line 369, Address: 0x159cc4, Func Offset: 0x34
	// Line 370, Address: 0x159cd0, Func Offset: 0x40
	// Line 373, Address: 0x159cd8, Func Offset: 0x48
	// Func End, Address: 0x159ce4, Func Offset: 0x54
}

