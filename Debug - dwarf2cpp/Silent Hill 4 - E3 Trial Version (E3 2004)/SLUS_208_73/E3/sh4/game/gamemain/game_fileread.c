typedef struct sfObj;
typedef union _anon0;
typedef struct _GAME_WORK;

typedef void(*type_6)(sfObj*);
typedef void(*type_7)(sfObj*);

typedef int type_0[1];
typedef int type_1[1];
typedef float type_2[4];
typedef int type_3[1];
typedef int** type_4[13];
typedef _anon0 type_5[256];
typedef int** type_8[13];
typedef int type_9[1];
typedef int type_10[1];
typedef int type_11[1];
typedef float type_12[4];
typedef short type_13[2];
typedef float type_14[4][4];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef int type_17[1];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];

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

int** file_tbl[13];
int** file_tbl_l[13];
_GAME_WORK gamew;

int** StageFileTable(int stage);
void GameFileLoadStage(int stage);
void GameFileLoadScene(int stage, int scene);
void GameFileFreeStage();
void GameFileFreeScene();
int ReadAheadNG();
void GameFileReadAhead(sfObj* obj);

// 
// Start address: 0x1bf3f0
int** StageFileTable(int stage)
{
	// Line 90, Address: 0x1bf3f0, Func Offset: 0
	// Line 92, Address: 0x1bf3fc, Func Offset: 0xc
	// Line 95, Address: 0x1bf438, Func Offset: 0x48
	// Func End, Address: 0x1bf448, Func Offset: 0x58
}

// 
// Start address: 0x1bf450
void GameFileLoadStage(int stage)
{
	int** table;
	int* ptr;
	// Line 100, Address: 0x1bf450, Func Offset: 0
	// Line 105, Address: 0x1bf460, Func Offset: 0x10
	// Line 106, Address: 0x1bf468, Func Offset: 0x18
	// Line 108, Address: 0x1bf470, Func Offset: 0x20
	// Line 110, Address: 0x1bf474, Func Offset: 0x24
	// Line 111, Address: 0x1bf488, Func Offset: 0x38
	// Line 113, Address: 0x1bf494, Func Offset: 0x44
	// Line 116, Address: 0x1bf4a8, Func Offset: 0x58
	// Line 121, Address: 0x1bf4b0, Func Offset: 0x60
	// Line 122, Address: 0x1bf4c0, Func Offset: 0x70
	// Line 126, Address: 0x1bf4c8, Func Offset: 0x78
	// Func End, Address: 0x1bf4dc, Func Offset: 0x8c
}

// 
// Start address: 0x1bf4e0
void GameFileLoadScene(int stage, int scene)
{
	int** table;
	int* ptr;
	// Line 130, Address: 0x1bf4e0, Func Offset: 0
	// Line 135, Address: 0x1bf4f8, Func Offset: 0x18
	// Line 136, Address: 0x1bf500, Func Offset: 0x20
	// Line 140, Address: 0x1bf508, Func Offset: 0x28
	// Line 138, Address: 0x1bf50c, Func Offset: 0x2c
	// Line 140, Address: 0x1bf510, Func Offset: 0x30
	// Line 138, Address: 0x1bf514, Func Offset: 0x34
	// Line 140, Address: 0x1bf518, Func Offset: 0x38
	// Line 141, Address: 0x1bf528, Func Offset: 0x48
	// Line 143, Address: 0x1bf534, Func Offset: 0x54
	// Line 146, Address: 0x1bf548, Func Offset: 0x68
	// Line 149, Address: 0x1bf558, Func Offset: 0x78
	// Line 155, Address: 0x1bf564, Func Offset: 0x84
	// Line 156, Address: 0x1bf578, Func Offset: 0x98
	// Line 160, Address: 0x1bf588, Func Offset: 0xa8
	// Line 163, Address: 0x1bf590, Func Offset: 0xb0
	// Line 166, Address: 0x1bf598, Func Offset: 0xb8
	// Line 169, Address: 0x1bf5a0, Func Offset: 0xc0
	// Func End, Address: 0x1bf5b8, Func Offset: 0xd8
}

// 
// Start address: 0x1bf5c0
void GameFileFreeStage()
{
	// Line 175, Address: 0x1bf5c0, Func Offset: 0
	// Func End, Address: 0x1bf5c8, Func Offset: 0x8
}

// 
// Start address: 0x1bf5d0
void GameFileFreeScene()
{
	// Line 186, Address: 0x1bf5d0, Func Offset: 0
	// Func End, Address: 0x1bf5d8, Func Offset: 0x8
}

// 
// Start address: 0x1bf5e0
int ReadAheadNG()
{
	int stage;
	// Line 200, Address: 0x1bf5e0, Func Offset: 0
	// Line 201, Address: 0x1bf5e4, Func Offset: 0x4
	// Line 200, Address: 0x1bf5e8, Func Offset: 0x8
	// Line 201, Address: 0x1bf5f4, Func Offset: 0x14
	// Line 202, Address: 0x1bf5f8, Func Offset: 0x18
	// Line 204, Address: 0x1bf5fc, Func Offset: 0x1c
	// Line 206, Address: 0x1bf60c, Func Offset: 0x2c
	// Line 208, Address: 0x1bf618, Func Offset: 0x38
	// Line 209, Address: 0x1bf620, Func Offset: 0x40
	// Line 212, Address: 0x1bf628, Func Offset: 0x48
	// Line 214, Address: 0x1bf634, Func Offset: 0x54
	// Line 215, Address: 0x1bf63c, Func Offset: 0x5c
	// Line 217, Address: 0x1bf644, Func Offset: 0x64
	// Line 220, Address: 0x1bf648, Func Offset: 0x68
	// Line 222, Address: 0x1bf654, Func Offset: 0x74
	// Line 223, Address: 0x1bf65c, Func Offset: 0x7c
	// Line 224, Address: 0x1bf664, Func Offset: 0x84
	// Line 226, Address: 0x1bf668, Func Offset: 0x88
	// Line 228, Address: 0x1bf674, Func Offset: 0x94
	// Line 229, Address: 0x1bf67c, Func Offset: 0x9c
	// Line 230, Address: 0x1bf684, Func Offset: 0xa4
	// Line 232, Address: 0x1bf688, Func Offset: 0xa8
	// Line 234, Address: 0x1bf694, Func Offset: 0xb4
	// Line 235, Address: 0x1bf69c, Func Offset: 0xbc
	// Line 236, Address: 0x1bf6a4, Func Offset: 0xc4
	// Line 238, Address: 0x1bf6a8, Func Offset: 0xc8
	// Line 240, Address: 0x1bf6b4, Func Offset: 0xd4
	// Line 241, Address: 0x1bf6bc, Func Offset: 0xdc
	// Line 243, Address: 0x1bf6c4, Func Offset: 0xe4
	// Line 246, Address: 0x1bf6c8, Func Offset: 0xe8
	// Line 247, Address: 0x1bf6d0, Func Offset: 0xf0
	// Func End, Address: 0x1bf6e4, Func Offset: 0x104
}

// 
// Start address: 0x1bf6f0
void GameFileReadAhead(sfObj* obj)
{
	int stage;
	int n_doors;
	int n_scenes;
	int i;
	int j;
	int* door;
	int door_no;
	int next_scene;
	// Line 251, Address: 0x1bf6f0, Func Offset: 0
	// Line 259, Address: 0x1bf6f4, Func Offset: 0x4
	// Line 251, Address: 0x1bf6f8, Func Offset: 0x8
	// Line 259, Address: 0x1bf720, Func Offset: 0x30
	// Line 260, Address: 0x1bf73c, Func Offset: 0x4c
	// Line 261, Address: 0x1bf740, Func Offset: 0x50
	// Line 262, Address: 0x1bf754, Func Offset: 0x64
	// Line 263, Address: 0x1bf75c, Func Offset: 0x6c
	// Line 265, Address: 0x1bf760, Func Offset: 0x70
	// Line 266, Address: 0x1bf770, Func Offset: 0x80
	// Line 267, Address: 0x1bf778, Func Offset: 0x88
	// Line 270, Address: 0x1bf780, Func Offset: 0x90
	// Line 271, Address: 0x1bf790, Func Offset: 0xa0
	// Line 272, Address: 0x1bf798, Func Offset: 0xa8
	// Line 276, Address: 0x1bf7a0, Func Offset: 0xb0
	// Line 277, Address: 0x1bf7ac, Func Offset: 0xbc
	// Line 282, Address: 0x1bf7b8, Func Offset: 0xc8
	// Line 286, Address: 0x1bf7cc, Func Offset: 0xdc
	// Line 287, Address: 0x1bf7d4, Func Offset: 0xe4
	// Line 288, Address: 0x1bf7dc, Func Offset: 0xec
	// Line 287, Address: 0x1bf7e0, Func Offset: 0xf0
	// Line 288, Address: 0x1bf7e4, Func Offset: 0xf4
	// Line 289, Address: 0x1bf7e8, Func Offset: 0xf8
	// Line 290, Address: 0x1bf7f4, Func Offset: 0x104
	// Line 291, Address: 0x1bf7f8, Func Offset: 0x108
	// Line 293, Address: 0x1bf808, Func Offset: 0x118
	// Line 294, Address: 0x1bf818, Func Offset: 0x128
	// Line 295, Address: 0x1bf820, Func Offset: 0x130
	// Line 297, Address: 0x1bf830, Func Offset: 0x140
	// Line 300, Address: 0x1bf838, Func Offset: 0x148
	// Line 303, Address: 0x1bf840, Func Offset: 0x150
	// Line 306, Address: 0x1bf848, Func Offset: 0x158
	// Line 309, Address: 0x1bf858, Func Offset: 0x168
	// Line 310, Address: 0x1bf868, Func Offset: 0x178
	// Line 312, Address: 0x1bf874, Func Offset: 0x184
	// Line 313, Address: 0x1bf888, Func Offset: 0x198
	// Line 315, Address: 0x1bf890, Func Offset: 0x1a0
	// Line 316, Address: 0x1bf894, Func Offset: 0x1a4
	// Line 315, Address: 0x1bf898, Func Offset: 0x1a8
	// Line 317, Address: 0x1bf8a4, Func Offset: 0x1b4
	// Line 320, Address: 0x1bf8b8, Func Offset: 0x1c8
	// Line 321, Address: 0x1bf8d0, Func Offset: 0x1e0
	// Line 322, Address: 0x1bf8d8, Func Offset: 0x1e8
	// Line 325, Address: 0x1bf8e0, Func Offset: 0x1f0
	// Line 326, Address: 0x1bf8f0, Func Offset: 0x200
	// Line 327, Address: 0x1bf904, Func Offset: 0x214
	// Line 329, Address: 0x1bf918, Func Offset: 0x228
	// Line 332, Address: 0x1bf920, Func Offset: 0x230
	// Func End, Address: 0x1bf950, Func Offset: 0x260
}

