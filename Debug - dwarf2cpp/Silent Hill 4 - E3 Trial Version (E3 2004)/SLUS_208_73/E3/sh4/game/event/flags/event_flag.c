typedef struct _GAME_WORK;
typedef struct EventFlag;
typedef struct _NumberkeyData;


typedef int type_0[1];
typedef int type_1[1];
typedef int type_2[1];
typedef float type_3[4];
typedef float type_4[4][4];
typedef float type_5[4];
typedef char type_6[4];
typedef int type_7[1];
typedef _NumberkeyData type_8[8];
typedef int type_9[1];
typedef int type_10[1];
typedef unsigned char type_11[320];
typedef int type_12[1];

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

struct _NumberkeyData
{
	int id;
	int diff;
	char key[4];
};

_GAME_WORK gamew;
EventFlag event_flag;
_NumberkeyData numberkey_hina[8];

void EventFlagInit();
void EventFlagDataSave(EventFlag* adr);
void EventFlagDataLoad(EventFlag* adr);
void EventNumberkeyKeySet();

// 
// Start address: 0x24ab80
void EventFlagInit()
{
	int i;
	// Line 21, Address: 0x24ab80, Func Offset: 0
	// Line 24, Address: 0x24ab84, Func Offset: 0x4
	// Line 21, Address: 0x24ab88, Func Offset: 0x8
	// Line 24, Address: 0x24ab8c, Func Offset: 0xc
	// Line 33, Address: 0x24ab9c, Func Offset: 0x1c
	// Line 34, Address: 0x24aba0, Func Offset: 0x20
	// Line 35, Address: 0x24abb0, Func Offset: 0x30
	// Line 37, Address: 0x24abc0, Func Offset: 0x40
	// Func End, Address: 0x24abd0, Func Offset: 0x50
}

// 
// Start address: 0x24abd0
void EventFlagDataSave(EventFlag* adr)
{
	// Line 57, Address: 0x24abd0, Func Offset: 0
	// Func End, Address: 0x24abe0, Func Offset: 0x10
}

// 
// Start address: 0x24abe0
void EventFlagDataLoad(EventFlag* adr)
{
	// Line 67, Address: 0x24abe4, Func Offset: 0x4
	// Func End, Address: 0x24abf4, Func Offset: 0x14
}

// 
// Start address: 0x24ac00
void EventNumberkeyKeySet()
{
	// Line 117, Address: 0x24ac00, Func Offset: 0
	// Func End, Address: 0x24ac08, Func Offset: 0x8
}

