typedef struct _EventDriver;
typedef struct sfObj;
typedef union _anon0;
typedef struct EventFlag;
typedef struct _GAME_WORK;

typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_24)(sfObj*);

typedef int type_0[1];
typedef float type_1[4];
typedef float type_4[4];
typedef float type_5[4][4];
typedef _anon0 type_9[4];
typedef int type_10[1];
typedef int type_11[1];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef _anon0 type_16[256];
typedef float type_17[1];
typedef int type_18[1];
typedef int type_20[1];
typedef int type_21[1];
typedef unsigned char type_22[320];
typedef int type_23[1];
typedef int type_25[1];

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
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

_EventDriver message_door;
_GAME_WORK gamew;
EventFlag event_flag;

void hardclose_door(int scene_no);
int DoorCheckAtRL00Door01();
int DoorCheckAtRL00Door02(int scene_no);
int DoorCheckAtRL00Door03(int scene_no);
int DoorCheckAtRL00Door04();

// 
// Start address: 0x1ee22b0
void hardclose_door(int scene_no)
{
	// Line 23, Address: 0x1ee22b0, Func Offset: 0
	// Line 24, Address: 0x1ee22b4, Func Offset: 0x4
	// Line 23, Address: 0x1ee22b8, Func Offset: 0x8
	// Line 24, Address: 0x1ee22bc, Func Offset: 0xc
	// Line 25, Address: 0x1ee22c4, Func Offset: 0x14
	// Line 26, Address: 0x1ee22d4, Func Offset: 0x24
	// Func End, Address: 0x1ee22e0, Func Offset: 0x30
}

// 
// Start address: 0x1ee22e0
int DoorCheckAtRL00Door01()
{
	// Line 36, Address: 0x1ee22e0, Func Offset: 0
	// Line 38, Address: 0x1ee22e8, Func Offset: 0x8
	// Line 39, Address: 0x1ee22f8, Func Offset: 0x18
	// Line 40, Address: 0x1ee2308, Func Offset: 0x28
	// Line 44, Address: 0x1ee2318, Func Offset: 0x38
	// Line 45, Address: 0x1ee2324, Func Offset: 0x44
	// Line 46, Address: 0x1ee232c, Func Offset: 0x4c
	// Line 48, Address: 0x1ee2334, Func Offset: 0x54
	// Line 50, Address: 0x1ee2338, Func Offset: 0x58
	// Line 51, Address: 0x1ee2340, Func Offset: 0x60
	// Func End, Address: 0x1ee234c, Func Offset: 0x6c
}

// 
// Start address: 0x1ee2350
int DoorCheckAtRL00Door02(int scene_no)
{
	// Line 61, Address: 0x1ee2350, Func Offset: 0
	// Line 63, Address: 0x1ee235c, Func Offset: 0xc
	// Line 64, Address: 0x1ee236c, Func Offset: 0x1c
	// Line 65, Address: 0x1ee2374, Func Offset: 0x24
	// Line 68, Address: 0x1ee2378, Func Offset: 0x28
	// Line 69, Address: 0x1ee2380, Func Offset: 0x30
	// Line 70, Address: 0x1ee2388, Func Offset: 0x38
	// Func End, Address: 0x1ee2398, Func Offset: 0x48
}

// 
// Start address: 0x1ee23a0
int DoorCheckAtRL00Door03(int scene_no)
{
	// Line 80, Address: 0x1ee23a0, Func Offset: 0
	// Line 82, Address: 0x1ee23ac, Func Offset: 0xc
	// Line 83, Address: 0x1ee23bc, Func Offset: 0x1c
	// Line 84, Address: 0x1ee23c4, Func Offset: 0x24
	// Line 87, Address: 0x1ee23c8, Func Offset: 0x28
	// Line 88, Address: 0x1ee23d0, Func Offset: 0x30
	// Line 89, Address: 0x1ee23d8, Func Offset: 0x38
	// Func End, Address: 0x1ee23e8, Func Offset: 0x48
}

// 
// Start address: 0x1ee23f0
int DoorCheckAtRL00Door04()
{
	int rtv;
	// Line 102, Address: 0x1ee23f0, Func Offset: 0
	// Line 103, Address: 0x1ee2404, Func Offset: 0x14
	// Line 107, Address: 0x1ee2408, Func Offset: 0x18
	// Func End, Address: 0x1ee2410, Func Offset: 0x20
}

