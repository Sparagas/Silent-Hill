typedef struct sfObj;
typedef union _anon0;
typedef struct _GAME_WORK;
typedef struct _EventDriver;
typedef enum LDOOR_TYPE : unsigned char;
typedef struct EventFlag;
typedef struct LockDoor;

typedef void(*type_7)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_23)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_25)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef LockDoor type_2[11];
typedef int type_3[1];
typedef int type_4[1];
typedef _anon0 type_5[256];
typedef int type_6[1];
typedef int type_8[1];
typedef int type_9[1];
typedef int type_10[1];
typedef int type_12[1];
typedef float type_13[4];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef float type_19[1];
typedef unsigned char type_20[320];
typedef int type_21[1];
typedef _anon0 type_26[4];

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

enum LDOOR_TYPE : unsigned char
{
	LDOOR_UNLOCK_ONESIDE_TOUCH,
	LDOOR_UNLOCK_ITEM_USE,
	LDOOR_UNLOCK_ITEM_USE_NOT_ERASE,
	LDOOR_BROKEN,
	LDOOR_HARD_CLOSE,
	LDOOR_CONDITION,
	LDOOR_LOCK_MESSAGE
};

struct EventFlag
{
	unsigned char flag[320];
};

struct LockDoor
{
	int door;
	LDOOR_TYPE type;
	_anon0 v0;
	_anon0 v1;
	_anon0 v2;
	_anon0 v3;
	_anon0 v4;
	_anon0 v5;
};

LockDoor mz_stg_ld[11];
_GAME_WORK gamew;
_EventDriver ev_water0_locked;
_EventDriver mz02_locked;
EventFlag event_flag;
_EventDriver ev_water0_password_dark;
_EventDriver ev_water0_password_ok;
_EventDriver ev_water0_password_ng;

int DoorCheckAtMz(int scene_no, int next_scene_no);
int DoorCheckAtMz34(int scene_no);
int mz36_to_mz40(int scene_no, int next_scene_no);

// 
// Start address: 0x2a9330
int DoorCheckAtMz(int scene_no, int next_scene_no)
{
	int floor;
	int next_door_no;
	int is_locked;
	int door_no_for_history;
	int pos_no;
	int rot_n;
	// Line 176, Address: 0x2a9330, Func Offset: 0
	// Line 177, Address: 0x2a934c, Func Offset: 0x1c
	// Line 184, Address: 0x2a9358, Func Offset: 0x28
	// Line 188, Address: 0x2a9378, Func Offset: 0x48
	// Line 189, Address: 0x2a937c, Func Offset: 0x4c
	// Line 190, Address: 0x2a9388, Func Offset: 0x58
	// Line 192, Address: 0x2a9394, Func Offset: 0x64
	// Line 193, Address: 0x2a93a0, Func Offset: 0x70
	// Line 196, Address: 0x2a93a8, Func Offset: 0x78
	// Line 197, Address: 0x2a93b8, Func Offset: 0x88
	// Line 200, Address: 0x2a93c4, Func Offset: 0x94
	// Line 203, Address: 0x2a93d0, Func Offset: 0xa0
	// Line 200, Address: 0x2a93d4, Func Offset: 0xa4
	// Line 203, Address: 0x2a93d8, Func Offset: 0xa8
	// Line 205, Address: 0x2a93fc, Func Offset: 0xcc
	// Line 206, Address: 0x2a9424, Func Offset: 0xf4
	// Line 207, Address: 0x2a9430, Func Offset: 0x100
	// Line 208, Address: 0x2a9438, Func Offset: 0x108
	// Line 209, Address: 0x2a943c, Func Offset: 0x10c
	// Line 210, Address: 0x2a9440, Func Offset: 0x110
	// Line 213, Address: 0x2a9448, Func Offset: 0x118
	// Line 214, Address: 0x2a9458, Func Offset: 0x128
	// Line 216, Address: 0x2a9460, Func Offset: 0x130
	// Line 218, Address: 0x2a946c, Func Offset: 0x13c
	// Line 223, Address: 0x2a9480, Func Offset: 0x150
	// Line 224, Address: 0x2a948c, Func Offset: 0x15c
	// Line 228, Address: 0x2a9498, Func Offset: 0x168
	// Line 230, Address: 0x2a94a4, Func Offset: 0x174
	// Line 231, Address: 0x2a94ac, Func Offset: 0x17c
	// Line 234, Address: 0x2a94b4, Func Offset: 0x184
	// Line 243, Address: 0x2a94c8, Func Offset: 0x198
	// Line 242, Address: 0x2a94d0, Func Offset: 0x1a0
	// Line 243, Address: 0x2a94d4, Func Offset: 0x1a4
	// Func End, Address: 0x2a94ec, Func Offset: 0x1bc
}

// 
// Start address: 0x2a94f0
int DoorCheckAtMz34(int scene_no)
{
	int rtv;
	LockDoor door_34;
	// Line 261, Address: 0x2a94f0, Func Offset: 0
	// Line 277, Address: 0x2a94f4, Func Offset: 0x4
	// Line 261, Address: 0x2a94f8, Func Offset: 0x8
	// Line 277, Address: 0x2a94fc, Func Offset: 0xc
	// Line 281, Address: 0x2a9524, Func Offset: 0x34
	// Func End, Address: 0x2a9530, Func Offset: 0x40
}

// 
// Start address: 0x2a9530
int mz36_to_mz40(int scene_no, int next_scene_no)
{
	int next_door_no;
	// Line 326, Address: 0x2a9530, Func Offset: 0
	// Line 330, Address: 0x2a9534, Func Offset: 0x4
	// Line 326, Address: 0x2a9538, Func Offset: 0x8
	// Line 330, Address: 0x2a953c, Func Offset: 0xc
	// Line 331, Address: 0x2a9544, Func Offset: 0x14
	// Line 333, Address: 0x2a9548, Func Offset: 0x18
	// Line 334, Address: 0x2a9550, Func Offset: 0x20
	// Line 335, Address: 0x2a955c, Func Offset: 0x2c
	// Line 336, Address: 0x2a9560, Func Offset: 0x30
	// Line 337, Address: 0x2a9564, Func Offset: 0x34
	// Line 341, Address: 0x2a9568, Func Offset: 0x38
	// Line 343, Address: 0x2a9574, Func Offset: 0x44
	// Line 344, Address: 0x2a957c, Func Offset: 0x4c
	// Line 347, Address: 0x2a9584, Func Offset: 0x54
	// Line 351, Address: 0x2a9598, Func Offset: 0x68
	// Line 358, Address: 0x2a95ac, Func Offset: 0x7c
	// Line 357, Address: 0x2a95b0, Func Offset: 0x80
	// Line 358, Address: 0x2a95b4, Func Offset: 0x84
	// Func End, Address: 0x2a95bc, Func Offset: 0x8c
}

