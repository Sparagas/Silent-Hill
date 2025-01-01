typedef struct EventFlag;
typedef struct _EventDriver;
typedef struct sfObj;
typedef union _anon0;
typedef struct _GAME_WORK;

typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_20)(sfObj*);

typedef unsigned char type_0[320];
typedef float type_3[4];
typedef float type_4[4][4];
typedef _anon0 type_8[4];
typedef int type_9[1];
typedef int type_10[1];
typedef _anon0 type_11[256];
typedef int type_13[1];
typedef int type_14[1];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef int type_19[1];
typedef float type_21[1];
typedef int type_22[1];
typedef int type_23[1];
typedef int type_24[1];
typedef float type_25[4];

struct EventFlag
{
	unsigned char flag[320];
};

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

_EventDriver ev_3ldk0_rl00_069;
_EventDriver ev_3ldk0_rl00_070;
_EventDriver ev_3ldk0_rl02_006;
_GAME_WORK gamew;
_EventDriver ev_3ldk0_rl00_078;
_EventDriver ev_3ldk0_rl00_093;
_EventDriver ev_3ldk0_rl00_088;
_EventDriver ev_3ldk0_rl00_108;
_EventDriver ev_3ldk0_rl00_109;
_EventDriver ev_3ldk0_rl00_fridge_wine;
_EventDriver ev_3ldk0_rl00_142_0502;
_EventDriver ev_3ldk0_rl00_142_0514;
_EventDriver ev_3ldk0_rl00_142_0520;
_EventDriver ev_3ldk0_rl00_142_scrap;
_EventDriver ev_3ldk0_rl00_142_scrap2;
_EventDriver ev_3ldk0_rl00_142_love;
_EventDriver ev_3ldk0_rl01_143;
_EventDriver ev_3ldk0_rl00_147_memo;
_EventDriver ev_3ldk0_rl00_147_card;
_EventDriver ev_3ldk0_rl00_166;
_EventDriver ev_3ldk0_rl00_167_0611;
_EventDriver ev_3ldk0_rl00_167_0614;
_EventDriver ev_3ldk0_rl00_167_unknown;
_EventDriver ev_3ldk0_rl03_196_memo;
_EventDriver ev_3ldk0_rl04_199;
_EventDriver ev_3ldk0_rl00_2211;
_EventDriver ev_3ldk0_rl00_2310;
_EventDriver ev_3ldk0_rl00_2219;
_EventDriver ev_3ldk0_rl00_2320;
_EventDriver ev_3ldk0_rl00_1331;
_EventDriver ev_3ldk0_rl00_1335;
_EventDriver ev_3ldk0_rl00_1336;
_EventDriver ev_3ldk0_rl00_1333;
EventFlag event_flag;
_EventDriver ev_3ldk0_rl00_fridge_drink;

int ev_3ldk0_rl00_078_trgchk();

// 
// Start address: 0x1ed7be0
int ev_3ldk0_rl00_078_trgchk()
{
	// Line 74, Address: 0x1ed7be0, Func Offset: 0
	// Line 75, Address: 0x1ed7bec, Func Offset: 0xc
	// Func End, Address: 0x1ed7bf4, Func Offset: 0x14
}

