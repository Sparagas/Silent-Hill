typedef struct _anon0;
typedef struct _GAME_WORK;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _anon2;
typedef struct EventFlag;


typedef int type_0[1];
typedef _anon2 type_1[0];
typedef _anon2 type_2[8];
typedef int type_3[1];
typedef _anon1 type_4[8];
typedef float type_5[4];
typedef int type_6[1];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef int type_10[1];
typedef int type_11[1];
typedef int type_12[1];
typedef int type_13[1];
typedef unsigned char type_14[320];

struct _anon0
{
	int model;
	int global;
	int semitrans;
	int collision;
	int emtex;
	int mode;
	int file;
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

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct _anon1
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _anon2
{
	int stage;
	int scene;
	unsigned int flag;
	short mode;
	short flagmode;
	_anon0 idtable;
};

struct EventFlag
{
	unsigned char flag[320];
};

int tbl_num;
EventFlag event_flag;
_anon2 tbl_scene[8];
_anon2 game_multimap_tbl[0];
_GAME_WORK gamew;
_anon1 emmap[8];

void set_scene_table(int stage, int scene);
void GameMultimapLoad();
void GameMultimapSet();
void GameMultimapDraw();

// 
// Start address: 0x221710
void set_scene_table(int stage, int scene)
{
	int n;
	int lf;
	// Line 62, Address: 0x221710, Func Offset: 0
	// Line 68, Address: 0x221714, Func Offset: 0x4
	// Line 62, Address: 0x221718, Func Offset: 0x8
	// Line 68, Address: 0x22171c, Func Offset: 0xc
	// Line 62, Address: 0x221720, Func Offset: 0x10
	// Line 68, Address: 0x22173c, Func Offset: 0x2c
	// Line 69, Address: 0x221758, Func Offset: 0x48
	// Line 74, Address: 0x221770, Func Offset: 0x60
	// Line 76, Address: 0x221784, Func Offset: 0x74
	// Line 79, Address: 0x2217b0, Func Offset: 0xa0
	// Line 81, Address: 0x2217bc, Func Offset: 0xac
	// Line 82, Address: 0x2217e4, Func Offset: 0xd4
	// Line 87, Address: 0x2217e8, Func Offset: 0xd8
	// Line 89, Address: 0x221800, Func Offset: 0xf0
	// Line 91, Address: 0x221810, Func Offset: 0x100
	// Line 92, Address: 0x221814, Func Offset: 0x104
	// Line 103, Address: 0x221824, Func Offset: 0x114
	// Line 105, Address: 0x221838, Func Offset: 0x128
	// Line 108, Address: 0x221840, Func Offset: 0x130
	// Func End, Address: 0x221860, Func Offset: 0x150
}

// 
// Start address: 0x221860
void GameMultimapLoad()
{
	int i;
	// Line 111, Address: 0x221860, Func Offset: 0
	// Line 116, Address: 0x22186c, Func Offset: 0xc
	// Line 111, Address: 0x221870, Func Offset: 0x10
	// Line 116, Address: 0x221880, Func Offset: 0x20
	// Line 124, Address: 0x221898, Func Offset: 0x38
	// Line 126, Address: 0x2218c4, Func Offset: 0x64
	// Line 129, Address: 0x2218cc, Func Offset: 0x6c
	// Line 130, Address: 0x2218e0, Func Offset: 0x80
	// Line 131, Address: 0x2218e8, Func Offset: 0x88
	// Line 134, Address: 0x221900, Func Offset: 0xa0
	// Func End, Address: 0x221914, Func Offset: 0xb4
}

// 
// Start address: 0x221920
void GameMultimapSet()
{
	int i;
	_anon0* idt;
	// Line 137, Address: 0x221920, Func Offset: 0
	// Line 140, Address: 0x221940, Func Offset: 0x20
	// Line 143, Address: 0x221948, Func Offset: 0x28
	// Line 146, Address: 0x221960, Func Offset: 0x40
	// Line 147, Address: 0x22196c, Func Offset: 0x4c
	// Line 149, Address: 0x221984, Func Offset: 0x64
	// Line 150, Address: 0x22198c, Func Offset: 0x6c
	// Line 152, Address: 0x2219a0, Func Offset: 0x80
	// Line 154, Address: 0x2219a8, Func Offset: 0x88
	// Line 155, Address: 0x2219b4, Func Offset: 0x94
	// Line 154, Address: 0x2219b8, Func Offset: 0x98
	// Line 156, Address: 0x2219bc, Func Offset: 0x9c
	// Line 157, Address: 0x2219c4, Func Offset: 0xa4
	// Line 159, Address: 0x2219d8, Func Offset: 0xb8
	// Line 161, Address: 0x2219e0, Func Offset: 0xc0
	// Line 163, Address: 0x2219ec, Func Offset: 0xcc
	// Line 161, Address: 0x2219fc, Func Offset: 0xdc
	// Line 163, Address: 0x221a00, Func Offset: 0xe0
	// Line 166, Address: 0x221a10, Func Offset: 0xf0
	// Func End, Address: 0x221a2c, Func Offset: 0x10c
}

// 
// Start address: 0x221a30
void GameMultimapDraw()
{
	int i;
	int lf;
	// Line 169, Address: 0x221a30, Func Offset: 0
	// Line 173, Address: 0x221a40, Func Offset: 0x10
	// Line 176, Address: 0x221a58, Func Offset: 0x28
	// Line 179, Address: 0x221a60, Func Offset: 0x30
	// Line 182, Address: 0x221a80, Func Offset: 0x50
	// Line 184, Address: 0x221a94, Func Offset: 0x64
	// Line 187, Address: 0x221ac0, Func Offset: 0x90
	// Line 189, Address: 0x221acc, Func Offset: 0x9c
	// Line 190, Address: 0x221af4, Func Offset: 0xc4
	// Line 195, Address: 0x221af8, Func Offset: 0xc8
	// Line 196, Address: 0x221b00, Func Offset: 0xd0
	// Line 198, Address: 0x221b08, Func Offset: 0xd8
	// Line 196, Address: 0x221b14, Func Offset: 0xe4
	// Line 198, Address: 0x221b18, Func Offset: 0xe8
	// Line 201, Address: 0x221b28, Func Offset: 0xf8
	// Func End, Address: 0x221b40, Func Offset: 0x110
}

