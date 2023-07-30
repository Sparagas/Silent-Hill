typedef struct _GAME_WORK;
typedef union EventBeginTable;
typedef union EventFinishTable;
typedef struct EventFlag;
typedef struct EventBeginTableFlag;
typedef struct EventFinishTableFlag;
typedef struct EventTableEventNumber;


typedef int type_0[1];
typedef float type_1[4];
typedef float type_2[4][4];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef float type_6[4];
typedef int type_7[1];
typedef unsigned char type_8[320];
typedef EventFinishTable* type_9[13];
typedef int type_10[1];
typedef EventBeginTable* type_11[13];
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

union EventBeginTable
{
	unsigned short direct;
	EventBeginTableFlag flag;
	EventTableEventNumber number;
};

union EventFinishTable
{
	unsigned short direct;
	EventFinishTableFlag flag;
	EventTableEventNumber number;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct EventBeginTableFlag
{
	struct
	{
		unsigned short flag : 12;
		unsigned short on_off : 1;
		unsigned short or_flag : 1;
		unsigned short data_type : 1;
		unsigned short end_bit : 1;
	};
};

struct EventFinishTableFlag
{
	struct
	{
		unsigned short flag : 12;
		unsigned short on_off : 1;
		unsigned short padding : 1;
		unsigned short data_type : 1;
		unsigned short end_bit : 1;
	};
};

struct EventTableEventNumber
{
	struct
	{
		unsigned short number : 12;
		unsigned short padding1 : 1;
		unsigned short padding2 : 1;
		unsigned short data_type : 1;
		unsigned short end_bit : 1;
	};
};

EventBeginTable* event_begin_table[13];
EventFinishTable* event_finish_table[13];
EventFlag event_flag;
_GAME_WORK gamew;

int EventFlagCheckMain(int evnum, EventBeginTable* ptable);
int EventFlagCheckMayBegin(int evnum);
int EventFlagSetMain(int evnum, EventFinishTable* ptable);
void EventFlagSetFinish(int evnum);
int EventFlagCheckFinishMain(int evnum, EventFinishTable* ptable);
int EventFlagCheckFinish(int evnum);

// 
// Start address: 0x2803f0
int EventFlagCheckMain(int evnum, EventBeginTable* ptable)
{
	EventBeginTable dat;
	int flag_data;
	int next_flag_type;
	int nf;
	// Line 55, Address: 0x2803f0, Func Offset: 0
	// Line 62, Address: 0x2803f8, Func Offset: 0x8
	// Line 61, Address: 0x2803fc, Func Offset: 0xc
	// Line 62, Address: 0x280400, Func Offset: 0x10
	// Line 63, Address: 0x280408, Func Offset: 0x18
	// Line 64, Address: 0x28042c, Func Offset: 0x3c
	// Line 65, Address: 0x280440, Func Offset: 0x50
	// Line 69, Address: 0x280450, Func Offset: 0x60
	// Line 76, Address: 0x280454, Func Offset: 0x64
	// Line 71, Address: 0x280460, Func Offset: 0x70
	// Line 70, Address: 0x280464, Func Offset: 0x74
	// Line 71, Address: 0x280468, Func Offset: 0x78
	// Line 72, Address: 0x280470, Func Offset: 0x80
	// Line 73, Address: 0x280494, Func Offset: 0xa4
	// Line 75, Address: 0x28049c, Func Offset: 0xac
	// Line 76, Address: 0x2804a8, Func Offset: 0xb8
	// Line 77, Address: 0x2804ac, Func Offset: 0xbc
	// Line 76, Address: 0x2804b0, Func Offset: 0xc0
	// Line 77, Address: 0x2804b4, Func Offset: 0xc4
	// Line 76, Address: 0x2804b8, Func Offset: 0xc8
	// Line 77, Address: 0x2804cc, Func Offset: 0xdc
	// Line 78, Address: 0x2804dc, Func Offset: 0xec
	// Line 79, Address: 0x2804e0, Func Offset: 0xf0
	// Line 81, Address: 0x2804e8, Func Offset: 0xf8
	// Line 82, Address: 0x2804f0, Func Offset: 0x100
	// Line 83, Address: 0x2804f4, Func Offset: 0x104
	// Line 84, Address: 0x2804f8, Func Offset: 0x108
	// Line 85, Address: 0x280500, Func Offset: 0x110
	// Line 88, Address: 0x280510, Func Offset: 0x120
	// Func End, Address: 0x280518, Func Offset: 0x128
}

// 
// Start address: 0x280520
int EventFlagCheckMayBegin(int evnum)
{
	EventBeginTable* ptable;
	int r;
	// Line 95, Address: 0x280520, Func Offset: 0
	// Line 99, Address: 0x28052c, Func Offset: 0xc
	// Line 101, Address: 0x280534, Func Offset: 0x14
	// Line 102, Address: 0x28053c, Func Offset: 0x1c
	// Line 104, Address: 0x280540, Func Offset: 0x20
	// Line 105, Address: 0x28055c, Func Offset: 0x3c
	// Line 106, Address: 0x280564, Func Offset: 0x44
	// Line 107, Address: 0x28056c, Func Offset: 0x4c
	// Line 108, Address: 0x280570, Func Offset: 0x50
	// Line 109, Address: 0x28057c, Func Offset: 0x5c
	// Line 110, Address: 0x280588, Func Offset: 0x68
	// Line 120, Address: 0x280594, Func Offset: 0x74
	// Line 130, Address: 0x280598, Func Offset: 0x78
	// Func End, Address: 0x2805a4, Func Offset: 0x84
}

// 
// Start address: 0x2805b0
int EventFlagSetMain(int evnum, EventFinishTable* ptable)
{
	EventFinishTable dat;
	// Line 200, Address: 0x2805b0, Func Offset: 0
	// Line 207, Address: 0x2805b8, Func Offset: 0x8
	// Line 206, Address: 0x2805bc, Func Offset: 0xc
	// Line 207, Address: 0x2805c0, Func Offset: 0x10
	// Line 208, Address: 0x2805c8, Func Offset: 0x18
	// Line 209, Address: 0x2805ec, Func Offset: 0x3c
	// Line 210, Address: 0x280600, Func Offset: 0x50
	// Line 220, Address: 0x280610, Func Offset: 0x60
	// Line 215, Address: 0x28061c, Func Offset: 0x6c
	// Line 216, Address: 0x280628, Func Offset: 0x78
	// Line 217, Address: 0x280644, Func Offset: 0x94
	// Line 218, Address: 0x28065c, Func Offset: 0xac
	// Line 219, Address: 0x280678, Func Offset: 0xc8
	// Line 220, Address: 0x280688, Func Offset: 0xd8
	// Line 222, Address: 0x2806ac, Func Offset: 0xfc
	// Line 224, Address: 0x2806c8, Func Offset: 0x118
	// Line 225, Address: 0x2806d0, Func Offset: 0x120
	// Func End, Address: 0x2806d8, Func Offset: 0x128
}

// 
// Start address: 0x2806e0
void EventFlagSetFinish(int evnum)
{
	EventFinishTable* ptable;
	int r;
	// Line 231, Address: 0x2806e0, Func Offset: 0
	// Line 235, Address: 0x2806ec, Func Offset: 0xc
	// Line 240, Address: 0x2806f4, Func Offset: 0x14
	// Line 241, Address: 0x280710, Func Offset: 0x30
	// Line 242, Address: 0x280718, Func Offset: 0x38
	// Line 243, Address: 0x280724, Func Offset: 0x44
	// Line 244, Address: 0x280728, Func Offset: 0x48
	// Line 245, Address: 0x280730, Func Offset: 0x50
	// Line 254, Address: 0x28073c, Func Offset: 0x5c
	// Line 255, Address: 0x280740, Func Offset: 0x60
	// Func End, Address: 0x28074c, Func Offset: 0x6c
}

// 
// Start address: 0x280750
int EventFlagCheckFinishMain(int evnum, EventFinishTable* ptable)
{
	EventFinishTable dat;
	// Line 263, Address: 0x280750, Func Offset: 0
	// Line 270, Address: 0x280758, Func Offset: 0x8
	// Line 269, Address: 0x28075c, Func Offset: 0xc
	// Line 270, Address: 0x280760, Func Offset: 0x10
	// Line 271, Address: 0x280768, Func Offset: 0x18
	// Line 272, Address: 0x28078c, Func Offset: 0x3c
	// Line 273, Address: 0x2807a0, Func Offset: 0x50
	// Line 287, Address: 0x2807b0, Func Offset: 0x60
	// Line 278, Address: 0x2807bc, Func Offset: 0x6c
	// Line 279, Address: 0x2807c8, Func Offset: 0x78
	// Line 280, Address: 0x2807e4, Func Offset: 0x94
	// Line 282, Address: 0x2807fc, Func Offset: 0xac
	// Line 283, Address: 0x28081c, Func Offset: 0xcc
	// Line 285, Address: 0x280824, Func Offset: 0xd4
	// Line 283, Address: 0x280828, Func Offset: 0xd8
	// Line 287, Address: 0x280830, Func Offset: 0xe0
	// Line 288, Address: 0x280850, Func Offset: 0x100
	// Line 291, Address: 0x280858, Func Offset: 0x108
	// Line 293, Address: 0x280870, Func Offset: 0x120
	// Line 294, Address: 0x280878, Func Offset: 0x128
	// Func End, Address: 0x280880, Func Offset: 0x130
}

// 
// Start address: 0x280880
int EventFlagCheckFinish(int evnum)
{
	EventFinishTable* ptable;
	int r;
	// Line 300, Address: 0x280880, Func Offset: 0
	// Line 302, Address: 0x280884, Func Offset: 0x4
	// Line 304, Address: 0x280888, Func Offset: 0x8
	// Line 305, Address: 0x280890, Func Offset: 0x10
	// Line 308, Address: 0x280898, Func Offset: 0x18
	// Line 309, Address: 0x2808b4, Func Offset: 0x34
	// Line 310, Address: 0x2808bc, Func Offset: 0x3c
	// Line 311, Address: 0x2808c4, Func Offset: 0x44
	// Line 314, Address: 0x2808c8, Func Offset: 0x48
	// Func End, Address: 0x2808d4, Func Offset: 0x54
}

