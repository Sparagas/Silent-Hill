typedef struct _GAME_WORK;
typedef struct sfObj;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct DemoEventTable;

typedef void(*type_8)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef void(*type_22)(sfObj*);
typedef void(*type_23)(sfObj*);

typedef int type_0[1];
typedef float type_1[4];
typedef float type_2[4][4];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef int type_6[1];
typedef _anon0 type_7[256];
typedef _anon1 type_9[25];
typedef float type_11[4];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef float type_16[1];
typedef int type_17[1];
typedef int type_18[1];
typedef int type_21[1];
typedef int type_24[1];

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

struct _anon1
{
	short scene;
	char turn_from_mz09;
	char floor_from_mz09;
};

struct _anon2
{
	float q[4];
	float t[4];
};

struct DemoEventTable
{
	int demo_id;
	void(*init)(sfObj*);
	void(*exec)(sfObj*);
	void(*end)(sfObj*);
	void(*draw)(sfObj*);
};

_anon1 demo010_offset[25];
DemoEventTable demo_event_mz030;
float sg_vector_unit_y[4];
_GAME_WORK gamew;
DemoEventTable demo_event_mz010;
DemoEventTable demo_event_mz011;
DemoEventTable demo_event_mz013;
DemoEventTable demo_event_mz014;
DemoEventTable demo_event_mz015;
DemoEventTable demo_event_mz016;
DemoEventTable demo_event_mz033;
DemoEventTable demo_event_mz067;
DemoEventTable demo_event_mz088;

void DemoEventInitMZ010();
void DemoEventInitMZ015();
void DemoEventInitMZ033();
void DemoEventInitMZ067();
void DemoEventExecMZ067();
void DemoEventInitMZ088();

// 
// Start address: 0x275640
void DemoEventInitMZ010()
{
	int i;
	_anon2 qt;
	// Line 67, Address: 0x275640, Func Offset: 0
	// Line 71, Address: 0x275644, Func Offset: 0x4
	// Line 67, Address: 0x275648, Func Offset: 0x8
	// Line 71, Address: 0x27564c, Func Offset: 0xc
	// Line 72, Address: 0x275654, Func Offset: 0x14
	// Line 73, Address: 0x27565c, Func Offset: 0x1c
	// Line 74, Address: 0x275678, Func Offset: 0x38
	// Line 75, Address: 0x275684, Func Offset: 0x44
	// Line 76, Address: 0x275694, Func Offset: 0x54
	// Line 77, Address: 0x275698, Func Offset: 0x58
	// Line 76, Address: 0x2756a0, Func Offset: 0x60
	// Line 77, Address: 0x2756a8, Func Offset: 0x68
	// Line 76, Address: 0x2756ac, Func Offset: 0x6c
	// Line 77, Address: 0x2756bc, Func Offset: 0x7c
	// Line 76, Address: 0x2756c4, Func Offset: 0x84
	// Line 77, Address: 0x2756c8, Func Offset: 0x88
	// Line 76, Address: 0x2756d4, Func Offset: 0x94
	// Line 77, Address: 0x2756d8, Func Offset: 0x98
	// Line 76, Address: 0x2756dc, Func Offset: 0x9c
	// Line 77, Address: 0x2756e4, Func Offset: 0xa4
	// Line 76, Address: 0x2756ec, Func Offset: 0xac
	// Line 77, Address: 0x2756f0, Func Offset: 0xb0
	// Line 80, Address: 0x275708, Func Offset: 0xc8
	// Line 81, Address: 0x275710, Func Offset: 0xd0
	// Line 83, Address: 0x27571c, Func Offset: 0xdc
	// Line 85, Address: 0x275728, Func Offset: 0xe8
	// Func End, Address: 0x275738, Func Offset: 0xf8
}

// 
// Start address: 0x275740
void DemoEventInitMZ015()
{
	_anon2 qt;
	// Line 132, Address: 0x275740, Func Offset: 0
	// Line 136, Address: 0x275744, Func Offset: 0x4
	// Line 132, Address: 0x275748, Func Offset: 0x8
	// Line 137, Address: 0x27574c, Func Offset: 0xc
	// Line 136, Address: 0x275750, Func Offset: 0x10
	// Line 137, Address: 0x275754, Func Offset: 0x14
	// Line 138, Address: 0x27575c, Func Offset: 0x1c
	// Line 139, Address: 0x275764, Func Offset: 0x24
	// Line 140, Address: 0x275774, Func Offset: 0x34
	// Line 141, Address: 0x275778, Func Offset: 0x38
	// Line 140, Address: 0x275784, Func Offset: 0x44
	// Line 141, Address: 0x275788, Func Offset: 0x48
	// Line 144, Address: 0x275790, Func Offset: 0x50
	// Line 145, Address: 0x275798, Func Offset: 0x58
	// Line 147, Address: 0x2757a0, Func Offset: 0x60
	// Func End, Address: 0x2757ac, Func Offset: 0x6c
}

// 
// Start address: 0x2757b0
void DemoEventInitMZ033()
{
	// Line 170, Address: 0x2757b0, Func Offset: 0
	// Line 188, Address: 0x2757b8, Func Offset: 0x8
	// Line 191, Address: 0x2757c0, Func Offset: 0x10
	// Line 192, Address: 0x2757c8, Func Offset: 0x18
	// Func End, Address: 0x2757d4, Func Offset: 0x24
}

// 
// Start address: 0x2757e0
void DemoEventInitMZ067()
{
	float pos[4];
	float rot[4];
	// Line 205, Address: 0x2757e0, Func Offset: 0
	// Line 206, Address: 0x2757e4, Func Offset: 0x4
	// Line 205, Address: 0x2757e8, Func Offset: 0x8
	// Line 206, Address: 0x2757ec, Func Offset: 0xc
	// Line 207, Address: 0x2757f8, Func Offset: 0x18
	// Line 216, Address: 0x2757fc, Func Offset: 0x1c
	// Line 207, Address: 0x275800, Func Offset: 0x20
	// Line 216, Address: 0x275808, Func Offset: 0x28
	// Line 206, Address: 0x275814, Func Offset: 0x34
	// Line 216, Address: 0x275818, Func Offset: 0x38
	// Line 207, Address: 0x27581c, Func Offset: 0x3c
	// Line 216, Address: 0x275820, Func Offset: 0x40
	// Line 223, Address: 0x275828, Func Offset: 0x48
	// Line 224, Address: 0x275830, Func Offset: 0x50
	// Func End, Address: 0x27583c, Func Offset: 0x5c
}

// 
// Start address: 0x275840
void DemoEventExecMZ067()
{
	// Line 227, Address: 0x275840, Func Offset: 0
	// Line 228, Address: 0x275848, Func Offset: 0x8
	// Line 231, Address: 0x275878, Func Offset: 0x38
	// Line 233, Address: 0x275880, Func Offset: 0x40
	// Func End, Address: 0x27588c, Func Offset: 0x4c
}

// 
// Start address: 0x275890
void DemoEventInitMZ088()
{
	// Line 248, Address: 0x275890, Func Offset: 0
	// Line 256, Address: 0x275898, Func Offset: 0x8
	// Line 259, Address: 0x2758a0, Func Offset: 0x10
	// Line 262, Address: 0x2758a8, Func Offset: 0x18
	// Line 263, Address: 0x2758b0, Func Offset: 0x20
	// Func End, Address: 0x2758bc, Func Offset: 0x2c
}

