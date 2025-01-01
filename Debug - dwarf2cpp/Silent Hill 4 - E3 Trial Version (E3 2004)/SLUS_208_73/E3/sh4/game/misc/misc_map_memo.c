typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _GAME_WORK;
typedef struct _anon3;

typedef float(*type_2)(int, int);
typedef void(*type_8)();
typedef float(*type_12)(int, int);
typedef int(*type_13)();

typedef float type_0[4][8];
typedef int type_1[1];
typedef int type_3[1];
typedef unsigned int type_4[30];
typedef int type_5[1];
typedef float type_6[4];
typedef int type_7[1];
typedef void(*type_9)()[2];
typedef int type_10[1];
typedef int type_11[1];
typedef int(*type_14)()[2];
typedef float type_15[4][8];
typedef int type_16[1];
typedef float type_17[4];
typedef float type_18[4][4];
typedef int type_19[15];

struct _anon0
{
	_anon1* tex;
	float v[4];
	unsigned int vertex_num;
	float u0;
	float v0;
	float u1;
	float v1;
	float x;
	float y;
	float w;
	float h;
	float ofs_x;
	float ofs_y;
	unsigned int cbp;
	char c_ofs;
};

struct _anon1
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct _anon2
{
	_anon0 src;
	_anon0 dst;
	float rot;
	float scale;
	unsigned int* index;
	unsigned int index_num;
	unsigned int morphing_timer;
	unsigned int timer;
	float(*rate_func)(int, int);
	float rate;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char base_alpha;
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

struct _anon3
{
	int level;
	int step[15];
};

int misc_map_memo_mode;
int fade_depth;
float src[4][8];
float dst[4][8];
unsigned int tri_index[30];
_anon3 local_step_work;
_GAME_WORK gamew;
_anon2 morph;
float(*get_ratio)(int, int);

void miscStepInit();
void miscStepPush();
void miscStepPop();
int miscStepGet();
void miscStepSet(int step);
void miscStepUp();
int miscMMFade(int d_depth);
int miscMMFadeGet();
float miscMMFadeStrAlphaRatioGet();
void miscMapMemoModeReset();
void miscMapMemoInit();
int miscMapMemoMain();
float get_ratio(int cnt, int max_cnt);
void miscMapMemoMorphConstruct();
int miscMapMemoMorphDraw();

// 
// Start address: 0x1fa4a0
void miscStepInit()
{
	// Line 116, Address: 0x1fa4a0, Func Offset: 0
	// Func End, Address: 0x1fa4b4, Func Offset: 0x14
}

// 
// Start address: 0x1fa4c0
void miscStepPush()
{
	// Line 119, Address: 0x1fa4c0, Func Offset: 0
	// Line 121, Address: 0x1fa4d0, Func Offset: 0x10
	// Func End, Address: 0x1fa4d8, Func Offset: 0x18
}

// 
// Start address: 0x1fa4e0
void miscStepPop()
{
	// Line 124, Address: 0x1fa4e0, Func Offset: 0
	// Line 126, Address: 0x1fa4f0, Func Offset: 0x10
	// Func End, Address: 0x1fa4f8, Func Offset: 0x18
}

// 
// Start address: 0x1fa500
int miscStepGet()
{
	// Line 127, Address: 0x1fa500, Func Offset: 0
	// Func End, Address: 0x1fa520, Func Offset: 0x20
}

// 
// Start address: 0x1fa520
void miscStepSet(int step)
{
	int i;
	// Line 131, Address: 0x1fa520, Func Offset: 0
	// Line 132, Address: 0x1fa534, Func Offset: 0x14
	// Line 131, Address: 0x1fa538, Func Offset: 0x18
	// Line 132, Address: 0x1fa540, Func Offset: 0x20
	// Line 134, Address: 0x1fa560, Func Offset: 0x40
	// Line 133, Address: 0x1fa564, Func Offset: 0x44
	// Line 134, Address: 0x1fa568, Func Offset: 0x48
	// Line 133, Address: 0x1fa56c, Func Offset: 0x4c
	// Line 134, Address: 0x1fa570, Func Offset: 0x50
	// Line 135, Address: 0x1fa580, Func Offset: 0x60
	// Func End, Address: 0x1fa588, Func Offset: 0x68
}

// 
// Start address: 0x1fa590
void miscStepUp()
{
	// Line 136, Address: 0x1fa590, Func Offset: 0
	// Func End, Address: 0x1fa5b4, Func Offset: 0x24
}

// 
// Start address: 0x1fa5c0
int miscMMFade(int d_depth)
{
	// Line 152, Address: 0x1fa5c0, Func Offset: 0
	// Line 153, Address: 0x1fa5d4, Func Offset: 0x14
	// Line 154, Address: 0x1fa5e4, Func Offset: 0x24
	// Line 156, Address: 0x1fa5e8, Func Offset: 0x28
	// Line 157, Address: 0x1fa5fc, Func Offset: 0x3c
	// Line 158, Address: 0x1fa604, Func Offset: 0x44
	// Line 159, Address: 0x1fa608, Func Offset: 0x48
	// Line 160, Address: 0x1fa60c, Func Offset: 0x4c
	// Func End, Address: 0x1fa614, Func Offset: 0x54
}

// 
// Start address: 0x1fa620
int miscMMFadeGet()
{
	// Line 164, Address: 0x1fa620, Func Offset: 0
	// Line 165, Address: 0x1fa624, Func Offset: 0x4
	// Func End, Address: 0x1fa62c, Func Offset: 0xc
}

// 
// Start address: 0x1fa630
float miscMMFadeStrAlphaRatioGet()
{
	// Line 169, Address: 0x1fa630, Func Offset: 0
	// Line 170, Address: 0x1fa638, Func Offset: 0x8
	// Line 171, Address: 0x1fa644, Func Offset: 0x14
	// Line 170, Address: 0x1fa648, Func Offset: 0x18
	// Line 171, Address: 0x1fa668, Func Offset: 0x38
	// Func End, Address: 0x1fa670, Func Offset: 0x40
}

// 
// Start address: 0x1fa670
void miscMapMemoModeReset()
{
	// Line 189, Address: 0x1fa670, Func Offset: 0
	// Line 190, Address: 0x1fa674, Func Offset: 0x4
	// Func End, Address: 0x1fa67c, Func Offset: 0xc
}

// 
// Start address: 0x1fa680
void miscMapMemoInit()
{
	// Line 196, Address: 0x1fa680, Func Offset: 0
	// Line 197, Address: 0x1fa688, Func Offset: 0x8
	// Line 198, Address: 0x1fa690, Func Offset: 0x10
	// Line 199, Address: 0x1fa694, Func Offset: 0x14
	// Line 201, Address: 0x1fa69c, Func Offset: 0x1c
	// Line 206, Address: 0x1fa6a4, Func Offset: 0x24
	// Line 208, Address: 0x1fa6ac, Func Offset: 0x2c
	// Line 209, Address: 0x1fa6b4, Func Offset: 0x34
	// Line 210, Address: 0x1fa6bc, Func Offset: 0x3c
	// Line 212, Address: 0x1fa6c4, Func Offset: 0x44
	// Func End, Address: 0x1fa6d0, Func Offset: 0x50
}

// 
// Start address: 0x1fa6d0
int miscMapMemoMain()
{
	int rtv;
	void(*init)()[2];
	int(*func)()[2];
	// Line 218, Address: 0x1fa6d0, Func Offset: 0
	// Line 236, Address: 0x1fa6dc, Func Offset: 0xc
	// Line 237, Address: 0x1fa6e4, Func Offset: 0x14
	// Line 239, Address: 0x1fa718, Func Offset: 0x48
	// Line 244, Address: 0x1fa764, Func Offset: 0x94
	// Line 246, Address: 0x1fa768, Func Offset: 0x98
	// Line 247, Address: 0x1fa770, Func Offset: 0xa0
	// Line 249, Address: 0x1fa778, Func Offset: 0xa8
	// Line 250, Address: 0x1fa780, Func Offset: 0xb0
	// Line 252, Address: 0x1fa798, Func Offset: 0xc8
	// Line 255, Address: 0x1fa7a4, Func Offset: 0xd4
	// Line 256, Address: 0x1fa7a8, Func Offset: 0xd8
	// Line 257, Address: 0x1fa7cc, Func Offset: 0xfc
	// Line 260, Address: 0x1fa7d4, Func Offset: 0x104
	// Line 262, Address: 0x1fa7f8, Func Offset: 0x128
	// Line 263, Address: 0x1fa800, Func Offset: 0x130
	// Line 265, Address: 0x1fa808, Func Offset: 0x138
	// Line 269, Address: 0x1fa810, Func Offset: 0x140
	// Line 273, Address: 0x1fa818, Func Offset: 0x148
	// Line 274, Address: 0x1fa82c, Func Offset: 0x15c
	// Line 276, Address: 0x1fa834, Func Offset: 0x164
	// Line 277, Address: 0x1fa83c, Func Offset: 0x16c
	// Line 278, Address: 0x1fa840, Func Offset: 0x170
	// Line 279, Address: 0x1fa88c, Func Offset: 0x1bc
	// Line 280, Address: 0x1fa890, Func Offset: 0x1c0
	// Line 281, Address: 0x1fa898, Func Offset: 0x1c8
	// Line 282, Address: 0x1fa8a8, Func Offset: 0x1d8
	// Line 284, Address: 0x1fa8b0, Func Offset: 0x1e0
	// Line 285, Address: 0x1fa8bc, Func Offset: 0x1ec
	// Line 286, Address: 0x1fa8cc, Func Offset: 0x1fc
	// Line 287, Address: 0x1fa8d4, Func Offset: 0x204
	// Line 288, Address: 0x1fa8d8, Func Offset: 0x208
	// Line 291, Address: 0x1fa8e0, Func Offset: 0x210
	// Line 293, Address: 0x1fa8e8, Func Offset: 0x218
	// Line 295, Address: 0x1fa8f8, Func Offset: 0x228
	// Line 297, Address: 0x1fa900, Func Offset: 0x230
	// Line 298, Address: 0x1fa908, Func Offset: 0x238
	// Line 301, Address: 0x1fa90c, Func Offset: 0x23c
	// Line 302, Address: 0x1fa910, Func Offset: 0x240
	// Line 305, Address: 0x1fa918, Func Offset: 0x248
	// Line 307, Address: 0x1fa928, Func Offset: 0x258
	// Line 308, Address: 0x1fa92c, Func Offset: 0x25c
	// Func End, Address: 0x1fa93c, Func Offset: 0x26c
}

// 
// Start address: 0x1fa940
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 314, Address: 0x1fa940, Func Offset: 0
	// Line 316, Address: 0x1fa944, Func Offset: 0x4
	// Line 317, Address: 0x1fa958, Func Offset: 0x18
	// Line 318, Address: 0x1fa970, Func Offset: 0x30
	// Line 319, Address: 0x1fa974, Func Offset: 0x34
	// Line 318, Address: 0x1fa978, Func Offset: 0x38
	// Line 319, Address: 0x1fa97c, Func Offset: 0x3c
	// Line 318, Address: 0x1fa980, Func Offset: 0x40
	// Line 319, Address: 0x1fa98c, Func Offset: 0x4c
	// Line 321, Address: 0x1fa9b8, Func Offset: 0x78
	// Func End, Address: 0x1fa9c0, Func Offset: 0x80
}

// 
// Start address: 0x1fa9c0
void miscMapMemoMorphConstruct()
{
	// Line 326, Address: 0x1fa9c0, Func Offset: 0
	// Line 329, Address: 0x1fa9c4, Func Offset: 0x4
	// Line 326, Address: 0x1fa9c8, Func Offset: 0x8
	// Line 329, Address: 0x1fa9cc, Func Offset: 0xc
	// Line 330, Address: 0x1fa9d8, Func Offset: 0x18
	// Line 331, Address: 0x1fa9ec, Func Offset: 0x2c
	// Line 332, Address: 0x1fa9fc, Func Offset: 0x3c
	// Line 333, Address: 0x1faa14, Func Offset: 0x54
	// Line 335, Address: 0x1faa2c, Func Offset: 0x6c
	// Line 338, Address: 0x1faa64, Func Offset: 0xa4
	// Line 341, Address: 0x1faa9c, Func Offset: 0xdc
	// Line 344, Address: 0x1faab4, Func Offset: 0xf4
	// Line 347, Address: 0x1faaec, Func Offset: 0x12c
	// Line 350, Address: 0x1fab24, Func Offset: 0x164
	// Line 351, Address: 0x1fab3c, Func Offset: 0x17c
	// Func End, Address: 0x1fab4c, Func Offset: 0x18c
}

// 
// Start address: 0x1fab50
int miscMapMemoMorphDraw()
{
	// Line 359, Address: 0x1fab50, Func Offset: 0
	// Func End, Address: 0x1fab5c, Func Offset: 0xc
}

