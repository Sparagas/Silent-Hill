typedef struct _GAME_WORK;


typedef int type_0[1];
typedef float type_1[4];
typedef float type_2[4][4];
typedef int type_3[1];
typedef short type_4[13];
typedef int type_5[1];
typedef int type_6[1];
typedef float type_7[4];
typedef int type_8[4];
typedef int type_9[1];
typedef int type_10[7];
typedef int type_11[7][14];
typedef int type_12[1];
typedef int type_13[1];
typedef int type_14[4];

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

int message_dataid[7][14];
int font_file[4];
int font_file_kr[4];
int message_stock;
short stage_message[13];
_GAME_WORK gamew;

void MessageFontLoad();
void MessageFontLoadAll();
void MessageLoad(int ID);
void MessageReload();
unsigned short* MessageAddress(int packid, int num);
unsigned short* MessageYesNo(int yn);
int MessageDataFileGetId();
void MessageDataFileLoad();

// 
// Start address: 0x1b5760
void MessageFontLoad()
{
	int i;
	int* fontfilep;
	// Line 61, Address: 0x1b5760, Func Offset: 0
	// Line 69, Address: 0x1b5770, Func Offset: 0x10
	// Line 67, Address: 0x1b5774, Func Offset: 0x14
	// Line 69, Address: 0x1b577c, Func Offset: 0x1c
	// Line 70, Address: 0x1b5784, Func Offset: 0x24
	// Line 71, Address: 0x1b578c, Func Offset: 0x2c
	// Line 72, Address: 0x1b57a8, Func Offset: 0x48
	// Line 73, Address: 0x1b57b4, Func Offset: 0x54
	// Line 74, Address: 0x1b57c8, Func Offset: 0x68
	// Func End, Address: 0x1b57dc, Func Offset: 0x7c
}

// 
// Start address: 0x1b57e0
void MessageFontLoadAll()
{
	int i;
	// Line 79, Address: 0x1b57e0, Func Offset: 0
	// Line 81, Address: 0x1b57e4, Func Offset: 0x4
	// Line 79, Address: 0x1b57e8, Func Offset: 0x8
	// Line 81, Address: 0x1b57ec, Func Offset: 0xc
	// Line 82, Address: 0x1b57f4, Func Offset: 0x14
	// Line 83, Address: 0x1b5810, Func Offset: 0x30
	// Line 84, Address: 0x1b5818, Func Offset: 0x38
	// Line 85, Address: 0x1b5824, Func Offset: 0x44
	// Line 88, Address: 0x1b5830, Func Offset: 0x50
	// Line 89, Address: 0x1b5838, Func Offset: 0x58
	// Line 90, Address: 0x1b5840, Func Offset: 0x60
	// Line 91, Address: 0x1b5854, Func Offset: 0x74
	// Line 92, Address: 0x1b5860, Func Offset: 0x80
	// Func End, Address: 0x1b5870, Func Offset: 0x90
}

// 
// Start address: 0x1b5870
void MessageLoad(int ID)
{
	int did;
	// Line 98, Address: 0x1b5870, Func Offset: 0
	// Line 100, Address: 0x1b5880, Func Offset: 0x10
	// Line 102, Address: 0x1b588c, Func Offset: 0x1c
	// Line 106, Address: 0x1b5898, Func Offset: 0x28
	// Line 107, Address: 0x1b58c8, Func Offset: 0x58
	// Line 115, Address: 0x1b58d0, Func Offset: 0x60
	// Line 116, Address: 0x1b58d8, Func Offset: 0x68
	// Func End, Address: 0x1b58e8, Func Offset: 0x78
}

// 
// Start address: 0x1b58f0
void MessageReload()
{
	int i;
	// Line 123, Address: 0x1b58f0, Func Offset: 0
	// Line 125, Address: 0x1b58f8, Func Offset: 0x8
	// Line 126, Address: 0x1b5900, Func Offset: 0x10
	// Line 127, Address: 0x1b5908, Func Offset: 0x18
	// Line 128, Address: 0x1b5910, Func Offset: 0x20
	// Line 129, Address: 0x1b5924, Func Offset: 0x34
	// Line 130, Address: 0x1b5930, Func Offset: 0x40
	// Func End, Address: 0x1b5940, Func Offset: 0x50
}

// 
// Start address: 0x1b5940
unsigned short* MessageAddress(int packid, int num)
{
	int did;
	void* packadr;
	// Line 138, Address: 0x1b5940, Func Offset: 0
	// Line 141, Address: 0x1b5954, Func Offset: 0x14
	// Line 142, Address: 0x1b5968, Func Offset: 0x28
	// Line 143, Address: 0x1b5998, Func Offset: 0x58
	// Line 144, Address: 0x1b59a0, Func Offset: 0x60
	// Line 145, Address: 0x1b59a8, Func Offset: 0x68
	// Line 146, Address: 0x1b59b0, Func Offset: 0x70
	// Line 147, Address: 0x1b59b8, Func Offset: 0x78
	// Line 148, Address: 0x1b59c0, Func Offset: 0x80
	// Line 149, Address: 0x1b59c8, Func Offset: 0x88
	// Line 150, Address: 0x1b59d0, Func Offset: 0x90
	// Line 152, Address: 0x1b59d8, Func Offset: 0x98
	// Line 153, Address: 0x1b59e0, Func Offset: 0xa0
	// Line 157, Address: 0x1b59e8, Func Offset: 0xa8
	// Line 158, Address: 0x1b59f8, Func Offset: 0xb8
	// Func End, Address: 0x1b5a0c, Func Offset: 0xcc
}

// 
// Start address: 0x1b5a10
unsigned short* MessageYesNo(int yn)
{
	// Line 193, Address: 0x1b5a10, Func Offset: 0
	// Func End, Address: 0x1b5a28, Func Offset: 0x18
}

// 
// Start address: 0x1b5a30
int MessageDataFileGetId()
{
	int stage;
	// Line 218, Address: 0x1b5a30, Func Offset: 0
	// Line 219, Address: 0x1b5a34, Func Offset: 0x4
	// Line 218, Address: 0x1b5a38, Func Offset: 0x8
	// Line 220, Address: 0x1b5a40, Func Offset: 0x10
	// Line 222, Address: 0x1b5a48, Func Offset: 0x18
	// Line 223, Address: 0x1b5a54, Func Offset: 0x24
	// Line 222, Address: 0x1b5a58, Func Offset: 0x28
	// Line 223, Address: 0x1b5a5c, Func Offset: 0x2c
	// Line 222, Address: 0x1b5a60, Func Offset: 0x30
	// Line 223, Address: 0x1b5a64, Func Offset: 0x34
	// Func End, Address: 0x1b5a6c, Func Offset: 0x3c
}

// 
// Start address: 0x1b5a70
void MessageDataFileLoad()
{
	int id;
	// Line 228, Address: 0x1b5a70, Func Offset: 0
	// Line 231, Address: 0x1b5a78, Func Offset: 0x8
	// Line 233, Address: 0x1b5a84, Func Offset: 0x14
	// Line 234, Address: 0x1b5a90, Func Offset: 0x20
	// Line 236, Address: 0x1b5a98, Func Offset: 0x28
	// Func End, Address: 0x1b5aa4, Func Offset: 0x34
}

