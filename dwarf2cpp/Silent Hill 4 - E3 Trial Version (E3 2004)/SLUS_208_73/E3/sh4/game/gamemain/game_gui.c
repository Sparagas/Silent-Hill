typedef struct _anon0;
typedef struct _GAME_WORK;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;


typedef int type_0[1];
typedef int type_1[1];
typedef unsigned int type_2[4];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef float type_10[4];
typedef unsigned char type_11[2];

struct _anon0
{
	_anon5 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
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

struct _anon1
{
	_anon0 belt;
	unsigned int color;
	int x;
	int y;
	int w;
	int h;
	int disp_flag;
	int flag;
};

struct _anon2
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

struct _anon3
{
	_anon2* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon4
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon5
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon3 tex_data;
	_anon4 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon6
{
	_anon0 img;
	float x;
	float y;
	float scale_x;
	float scale_y;
	unsigned int timer;
	unsigned char alpha;
	unsigned char step;
	unsigned char step_s;
	unsigned char disp_flag;
	unsigned char draw_cmd;
};

char game_gui_disp_flag;
_anon1 gui_btm_belt;
_anon1 gui_top_belt;
_anon6 access_mark;
_GAME_WORK gamew;

void GameGuiInitBelt();
void GameGuiSetTopBeltColor(unsigned int col);
void GameGuiSetTopBeltStart(int x, int y);
void GameGuiSetTopBeltSize(int w, int h);
void GameGuiSetBtmBeltColor(unsigned int col);
void GameGuiSetBtmBeltStart(int x, int y);
void GameGuiSetBtmBeltSize(int w, int h);
void GameGuiBeltDispOn();
void GameGuiBeltDispOff();
void GameGuiDrawBelt();
void GameGuiInit();
void GameGuiDispOn();
void GameGuiDispOff();
void GameGuiExec();
void GameGuiDraw();
void GameGuiAccessMarkOn();
void GameGuiAccessMarkOff();
int GameGuiIsAccessMarkOk();
float get_ratio(int t, int max);
void GameGuiAccessMarkInit();
void GameGuiAccessMarkDisp();
void GameGuiAccessMarkDraw();

// 
// Start address: 0x1a9ff0
void GameGuiInitBelt()
{
	int drawBufferWidth;
	int drawBufferHeight;
	// Line 84, Address: 0x1a9ff0, Func Offset: 0
	// Line 88, Address: 0x1a9ffc, Func Offset: 0xc
	// Line 89, Address: 0x1aa004, Func Offset: 0x14
	// Line 91, Address: 0x1aa010, Func Offset: 0x20
	// Line 92, Address: 0x1aa018, Func Offset: 0x28
	// Line 93, Address: 0x1aa024, Func Offset: 0x34
	// Line 95, Address: 0x1aa030, Func Offset: 0x40
	// Line 96, Address: 0x1aa038, Func Offset: 0x48
	// Line 97, Address: 0x1aa044, Func Offset: 0x54
	// Line 99, Address: 0x1aa050, Func Offset: 0x60
	// Line 100, Address: 0x1aa058, Func Offset: 0x68
	// Line 102, Address: 0x1aa060, Func Offset: 0x70
	// Line 103, Address: 0x1aa068, Func Offset: 0x78
	// Line 104, Address: 0x1aa070, Func Offset: 0x80
	// Func End, Address: 0x1aa084, Func Offset: 0x94
}

// 
// Start address: 0x1aa090
void GameGuiSetTopBeltColor(unsigned int col)
{
	// Line 109, Address: 0x1aa090, Func Offset: 0
	// Line 110, Address: 0x1aa09c, Func Offset: 0xc
	// Line 109, Address: 0x1aa0a0, Func Offset: 0x10
	// Line 110, Address: 0x1aa0a4, Func Offset: 0x14
	// Func End, Address: 0x1aa0b8, Func Offset: 0x28
}

// 
// Start address: 0x1aa0c0
void GameGuiSetTopBeltStart(int x, int y)
{
	// Line 116, Address: 0x1aa0c0, Func Offset: 0
	// Line 117, Address: 0x1aa0c8, Func Offset: 0x8
	// Line 118, Address: 0x1aa0cc, Func Offset: 0xc
	// Func End, Address: 0x1aa0d4, Func Offset: 0x14
}

// 
// Start address: 0x1aa0e0
void GameGuiSetTopBeltSize(int w, int h)
{
	// Line 123, Address: 0x1aa0e0, Func Offset: 0
	// Line 124, Address: 0x1aa0e8, Func Offset: 0x8
	// Line 125, Address: 0x1aa0ec, Func Offset: 0xc
	// Func End, Address: 0x1aa0f4, Func Offset: 0x14
}

// 
// Start address: 0x1aa100
void GameGuiSetBtmBeltColor(unsigned int col)
{
	// Line 130, Address: 0x1aa100, Func Offset: 0
	// Line 131, Address: 0x1aa10c, Func Offset: 0xc
	// Line 130, Address: 0x1aa110, Func Offset: 0x10
	// Line 131, Address: 0x1aa114, Func Offset: 0x14
	// Func End, Address: 0x1aa128, Func Offset: 0x28
}

// 
// Start address: 0x1aa130
void GameGuiSetBtmBeltStart(int x, int y)
{
	// Line 137, Address: 0x1aa130, Func Offset: 0
	// Line 138, Address: 0x1aa138, Func Offset: 0x8
	// Line 139, Address: 0x1aa13c, Func Offset: 0xc
	// Func End, Address: 0x1aa144, Func Offset: 0x14
}

// 
// Start address: 0x1aa150
void GameGuiSetBtmBeltSize(int w, int h)
{
	// Line 144, Address: 0x1aa150, Func Offset: 0
	// Line 145, Address: 0x1aa158, Func Offset: 0x8
	// Line 146, Address: 0x1aa15c, Func Offset: 0xc
	// Func End, Address: 0x1aa164, Func Offset: 0x14
}

// 
// Start address: 0x1aa170
void GameGuiBeltDispOn()
{
	// Line 151, Address: 0x1aa170, Func Offset: 0
	// Line 152, Address: 0x1aa17c, Func Offset: 0xc
	// Line 153, Address: 0x1aa180, Func Offset: 0x10
	// Func End, Address: 0x1aa188, Func Offset: 0x18
}

// 
// Start address: 0x1aa190
void GameGuiBeltDispOff()
{
	// Line 158, Address: 0x1aa190, Func Offset: 0
	// Line 159, Address: 0x1aa198, Func Offset: 0x8
	// Line 160, Address: 0x1aa19c, Func Offset: 0xc
	// Func End, Address: 0x1aa1a4, Func Offset: 0x14
}

// 
// Start address: 0x1aa1b0
void GameGuiDrawBelt()
{
	// Line 165, Address: 0x1aa1b0, Func Offset: 0
	// Line 167, Address: 0x1aa1b4, Func Offset: 0x4
	// Line 165, Address: 0x1aa1b8, Func Offset: 0x8
	// Line 167, Address: 0x1aa1bc, Func Offset: 0xc
	// Line 169, Address: 0x1aa1c8, Func Offset: 0x18
	// Line 170, Address: 0x1aa1d4, Func Offset: 0x24
	// Line 171, Address: 0x1aa1e8, Func Offset: 0x38
	// Line 172, Address: 0x1aa1fc, Func Offset: 0x4c
	// Line 173, Address: 0x1aa210, Func Offset: 0x60
	// Line 175, Address: 0x1aa250, Func Offset: 0xa0
	// Line 173, Address: 0x1aa254, Func Offset: 0xa4
	// Line 175, Address: 0x1aa258, Func Offset: 0xa8
	// Line 177, Address: 0x1aa26c, Func Offset: 0xbc
	// Line 180, Address: 0x1aa278, Func Offset: 0xc8
	// Line 182, Address: 0x1aa288, Func Offset: 0xd8
	// Line 183, Address: 0x1aa294, Func Offset: 0xe4
	// Line 184, Address: 0x1aa2a8, Func Offset: 0xf8
	// Line 185, Address: 0x1aa2bc, Func Offset: 0x10c
	// Line 186, Address: 0x1aa2d0, Func Offset: 0x120
	// Line 188, Address: 0x1aa310, Func Offset: 0x160
	// Line 186, Address: 0x1aa314, Func Offset: 0x164
	// Line 188, Address: 0x1aa318, Func Offset: 0x168
	// Line 190, Address: 0x1aa32c, Func Offset: 0x17c
	// Line 193, Address: 0x1aa338, Func Offset: 0x188
	// Line 194, Address: 0x1aa348, Func Offset: 0x198
	// Line 195, Address: 0x1aa354, Func Offset: 0x1a4
	// Line 196, Address: 0x1aa358, Func Offset: 0x1a8
	// Line 197, Address: 0x1aa368, Func Offset: 0x1b8
	// Line 198, Address: 0x1aa374, Func Offset: 0x1c4
	// Line 199, Address: 0x1aa378, Func Offset: 0x1c8
	// Func End, Address: 0x1aa384, Func Offset: 0x1d4
}

// 
// Start address: 0x1aa390
void GameGuiInit()
{
	// Line 214, Address: 0x1aa390, Func Offset: 0
	// Line 215, Address: 0x1aa394, Func Offset: 0x4
	// Line 214, Address: 0x1aa398, Func Offset: 0x8
	// Line 218, Address: 0x1aa39c, Func Offset: 0xc
	// Line 220, Address: 0x1aa3a4, Func Offset: 0x14
	// Line 221, Address: 0x1aa3ac, Func Offset: 0x1c
	// Func End, Address: 0x1aa3b8, Func Offset: 0x28
}

// 
// Start address: 0x1aa3c0
void GameGuiDispOn()
{
	// Line 236, Address: 0x1aa3c0, Func Offset: 0
	// Line 237, Address: 0x1aa3c4, Func Offset: 0x4
	// Line 236, Address: 0x1aa3c8, Func Offset: 0x8
	// Line 237, Address: 0x1aa3cc, Func Offset: 0xc
	// Line 240, Address: 0x1aa3d0, Func Offset: 0x10
	// Line 242, Address: 0x1aa3d8, Func Offset: 0x18
	// Line 244, Address: 0x1aa3e0, Func Offset: 0x20
	// Line 246, Address: 0x1aa3e8, Func Offset: 0x28
	// Line 247, Address: 0x1aa3f0, Func Offset: 0x30
	// Func End, Address: 0x1aa3fc, Func Offset: 0x3c
}

// 
// Start address: 0x1aa400
void GameGuiDispOff()
{
	// Line 254, Address: 0x1aa400, Func Offset: 0
	// Line 255, Address: 0x1aa404, Func Offset: 0x4
	// Line 254, Address: 0x1aa408, Func Offset: 0x8
	// Line 258, Address: 0x1aa40c, Func Offset: 0xc
	// Line 260, Address: 0x1aa414, Func Offset: 0x14
	// Line 262, Address: 0x1aa41c, Func Offset: 0x1c
	// Line 264, Address: 0x1aa424, Func Offset: 0x24
	// Line 265, Address: 0x1aa42c, Func Offset: 0x2c
	// Func End, Address: 0x1aa438, Func Offset: 0x38
}

// 
// Start address: 0x1aa440
void GameGuiExec()
{
	// Line 272, Address: 0x1aa440, Func Offset: 0
	// Line 276, Address: 0x1aa444, Func Offset: 0x4
	// Line 272, Address: 0x1aa448, Func Offset: 0x8
	// Line 276, Address: 0x1aa44c, Func Offset: 0xc
	// Line 278, Address: 0x1aa458, Func Offset: 0x18
	// Line 280, Address: 0x1aa460, Func Offset: 0x20
	// Line 281, Address: 0x1aa468, Func Offset: 0x28
	// Line 282, Address: 0x1aa470, Func Offset: 0x30
	// Line 284, Address: 0x1aa478, Func Offset: 0x38
	// Func End, Address: 0x1aa484, Func Offset: 0x44
}

// 
// Start address: 0x1aa490
void GameGuiDraw()
{
	// Line 291, Address: 0x1aa490, Func Offset: 0
	// Line 292, Address: 0x1aa494, Func Offset: 0x4
	// Line 291, Address: 0x1aa498, Func Offset: 0x8
	// Line 292, Address: 0x1aa49c, Func Offset: 0xc
	// Line 293, Address: 0x1aa4a8, Func Offset: 0x18
	// Line 294, Address: 0x1aa4b0, Func Offset: 0x20
	// Line 295, Address: 0x1aa4b8, Func Offset: 0x28
	// Line 297, Address: 0x1aa4c0, Func Offset: 0x30
	// Func End, Address: 0x1aa4cc, Func Offset: 0x3c
}

// 
// Start address: 0x1aa4d0
void GameGuiAccessMarkOn()
{
	// Line 322, Address: 0x1aa4d0, Func Offset: 0
	// Func End, Address: 0x1aa4e0, Func Offset: 0x10
}

// 
// Start address: 0x1aa4e0
void GameGuiAccessMarkOff()
{
	// Line 325, Address: 0x1aa4e0, Func Offset: 0
	// Func End, Address: 0x1aa4ec, Func Offset: 0xc
}

// 
// Start address: 0x1aa4f0
int GameGuiIsAccessMarkOk()
{
	// Line 328, Address: 0x1aa4f0, Func Offset: 0
	// Func End, Address: 0x1aa4fc, Func Offset: 0xc
}

// 
// Start address: 0x1aa500
float get_ratio(int t, int max)
{
	float r;
	// Line 335, Address: 0x1aa500, Func Offset: 0
	// Line 336, Address: 0x1aa518, Func Offset: 0x18
	// Line 337, Address: 0x1aa530, Func Offset: 0x30
	// Line 339, Address: 0x1aa548, Func Offset: 0x48
	// Line 340, Address: 0x1aa550, Func Offset: 0x50
	// Func End, Address: 0x1aa558, Func Offset: 0x58
}

// 
// Start address: 0x1aa560
void GameGuiAccessMarkInit()
{
	// Line 346, Address: 0x1aa560, Func Offset: 0
	// Line 347, Address: 0x1aa564, Func Offset: 0x4
	// Line 346, Address: 0x1aa568, Func Offset: 0x8
	// Line 347, Address: 0x1aa56c, Func Offset: 0xc
	// Line 349, Address: 0x1aa57c, Func Offset: 0x1c
	// Line 350, Address: 0x1aa584, Func Offset: 0x24
	// Line 351, Address: 0x1aa588, Func Offset: 0x28
	// Line 354, Address: 0x1aa590, Func Offset: 0x30
	// Line 360, Address: 0x1aa59c, Func Offset: 0x3c
	// Line 355, Address: 0x1aa5a0, Func Offset: 0x40
	// Line 356, Address: 0x1aa5ac, Func Offset: 0x4c
	// Line 360, Address: 0x1aa5b4, Func Offset: 0x54
	// Line 356, Address: 0x1aa5b8, Func Offset: 0x58
	// Line 360, Address: 0x1aa5bc, Func Offset: 0x5c
	// Line 357, Address: 0x1aa5c0, Func Offset: 0x60
	// Line 360, Address: 0x1aa5c4, Func Offset: 0x64
	// Line 361, Address: 0x1aa5cc, Func Offset: 0x6c
	// Line 362, Address: 0x1aa5d8, Func Offset: 0x78
	// Line 363, Address: 0x1aa5dc, Func Offset: 0x7c
	// Line 362, Address: 0x1aa5e0, Func Offset: 0x80
	// Line 363, Address: 0x1aa5e4, Func Offset: 0x84
	// Line 362, Address: 0x1aa5f0, Func Offset: 0x90
	// Line 363, Address: 0x1aa5f8, Func Offset: 0x98
	// Line 364, Address: 0x1aa600, Func Offset: 0xa0
	// Line 365, Address: 0x1aa614, Func Offset: 0xb4
	// Line 368, Address: 0x1aa630, Func Offset: 0xd0
	// Line 370, Address: 0x1aa644, Func Offset: 0xe4
	// Line 371, Address: 0x1aa664, Func Offset: 0x104
	// Line 372, Address: 0x1aa67c, Func Offset: 0x11c
	// Func End, Address: 0x1aa688, Func Offset: 0x128
}

// 
// Start address: 0x1aa690
void GameGuiAccessMarkDisp()
{
	// Line 377, Address: 0x1aa690, Func Offset: 0
	// Line 378, Address: 0x1aa698, Func Offset: 0x8
	// Func End, Address: 0x1aa6a0, Func Offset: 0x10
}

// 
// Start address: 0x1aa6a0
void GameGuiAccessMarkDraw()
{
	_anon2* tex;
	unsigned int cbp;
	float ratio;
	float bri;
	float scale_x;
	float scale_y;
	unsigned char bri_i;
	unsigned int color;
	float val;
	int i;
	float r;
	int alpha;
	int d_alpha;
	float d;
	int draw_num;
	float d_r;
	int debug_switch;
	float rrr;
	// Line 382, Address: 0x1aa6a0, Func Offset: 0
	// Line 395, Address: 0x1aa6a4, Func Offset: 0x4
	// Line 382, Address: 0x1aa6a8, Func Offset: 0x8
	// Line 395, Address: 0x1aa6ac, Func Offset: 0xc
	// Line 382, Address: 0x1aa6b0, Func Offset: 0x10
	// Line 395, Address: 0x1aa6c8, Func Offset: 0x28
	// Line 399, Address: 0x1aa6d4, Func Offset: 0x34
	// Line 400, Address: 0x1aa6e0, Func Offset: 0x40
	// Line 401, Address: 0x1aa6ec, Func Offset: 0x4c
	// Line 403, Address: 0x1aa6f8, Func Offset: 0x58
	// Line 404, Address: 0x1aa708, Func Offset: 0x68
	// Line 406, Address: 0x1aa714, Func Offset: 0x74
	// Line 408, Address: 0x1aa718, Func Offset: 0x78
	// Line 409, Address: 0x1aa728, Func Offset: 0x88
	// Line 412, Address: 0x1aa748, Func Offset: 0xa8
	// Line 416, Address: 0x1aa780, Func Offset: 0xe0
	// Line 423, Address: 0x1aa784, Func Offset: 0xe4
	// Line 416, Address: 0x1aa788, Func Offset: 0xe8
	// Line 423, Address: 0x1aa78c, Func Offset: 0xec
	// Line 424, Address: 0x1aa794, Func Offset: 0xf4
	// Line 423, Address: 0x1aa798, Func Offset: 0xf8
	// Line 424, Address: 0x1aa79c, Func Offset: 0xfc
	// Line 423, Address: 0x1aa7a0, Func Offset: 0x100
	// Line 425, Address: 0x1aa7a4, Func Offset: 0x104
	// Line 417, Address: 0x1aa7a8, Func Offset: 0x108
	// Line 423, Address: 0x1aa7b0, Func Offset: 0x110
	// Line 419, Address: 0x1aa7b8, Func Offset: 0x118
	// Line 417, Address: 0x1aa7bc, Func Offset: 0x11c
	// Line 419, Address: 0x1aa7c0, Func Offset: 0x120
	// Line 424, Address: 0x1aa7c4, Func Offset: 0x124
	// Line 425, Address: 0x1aa7c8, Func Offset: 0x128
	// Line 417, Address: 0x1aa7cc, Func Offset: 0x12c
	// Line 424, Address: 0x1aa7d0, Func Offset: 0x130
	// Line 419, Address: 0x1aa7d4, Func Offset: 0x134
	// Line 425, Address: 0x1aa7e0, Func Offset: 0x140
	// Line 419, Address: 0x1aa7e4, Func Offset: 0x144
	// Line 425, Address: 0x1aa7f4, Func Offset: 0x154
	// Line 428, Address: 0x1aa7fc, Func Offset: 0x15c
	// Line 429, Address: 0x1aa804, Func Offset: 0x164
	// Line 426, Address: 0x1aa80c, Func Offset: 0x16c
	// Line 429, Address: 0x1aa810, Func Offset: 0x170
	// Line 432, Address: 0x1aa814, Func Offset: 0x174
	// Line 429, Address: 0x1aa818, Func Offset: 0x178
	// Line 426, Address: 0x1aa81c, Func Offset: 0x17c
	// Line 430, Address: 0x1aa820, Func Offset: 0x180
	// Line 429, Address: 0x1aa82c, Func Offset: 0x18c
	// Line 430, Address: 0x1aa830, Func Offset: 0x190
	// Line 432, Address: 0x1aa840, Func Offset: 0x1a0
	// Line 426, Address: 0x1aa848, Func Offset: 0x1a8
	// Line 429, Address: 0x1aa84c, Func Offset: 0x1ac
	// Line 426, Address: 0x1aa850, Func Offset: 0x1b0
	// Line 430, Address: 0x1aa854, Func Offset: 0x1b4
	// Line 426, Address: 0x1aa858, Func Offset: 0x1b8
	// Line 430, Address: 0x1aa85c, Func Offset: 0x1bc
	// Line 428, Address: 0x1aa860, Func Offset: 0x1c0
	// Line 430, Address: 0x1aa868, Func Offset: 0x1c8
	// Line 428, Address: 0x1aa86c, Func Offset: 0x1cc
	// Line 429, Address: 0x1aa870, Func Offset: 0x1d0
	// Line 428, Address: 0x1aa874, Func Offset: 0x1d4
	// Line 429, Address: 0x1aa87c, Func Offset: 0x1dc
	// Line 430, Address: 0x1aa888, Func Offset: 0x1e8
	// Line 432, Address: 0x1aa890, Func Offset: 0x1f0
	// Line 433, Address: 0x1aa89c, Func Offset: 0x1fc
	// Line 434, Address: 0x1aa8ac, Func Offset: 0x20c
	// Line 433, Address: 0x1aa8b0, Func Offset: 0x210
	// Line 434, Address: 0x1aa8b4, Func Offset: 0x214
	// Line 435, Address: 0x1aa8cc, Func Offset: 0x22c
	// Line 437, Address: 0x1aa8e4, Func Offset: 0x244
	// Line 438, Address: 0x1aa900, Func Offset: 0x260
	// Line 439, Address: 0x1aa914, Func Offset: 0x274
	// Line 443, Address: 0x1aa940, Func Offset: 0x2a0
	// Line 444, Address: 0x1aa950, Func Offset: 0x2b0
	// Line 445, Address: 0x1aa960, Func Offset: 0x2c0
	// Line 446, Address: 0x1aa974, Func Offset: 0x2d4
	// Line 447, Address: 0x1aa984, Func Offset: 0x2e4
	// Line 449, Address: 0x1aa990, Func Offset: 0x2f0
	// Line 450, Address: 0x1aa998, Func Offset: 0x2f8
	// Line 453, Address: 0x1aa9a4, Func Offset: 0x304
	// Line 450, Address: 0x1aa9a8, Func Offset: 0x308
	// Line 452, Address: 0x1aa9ac, Func Offset: 0x30c
	// Line 453, Address: 0x1aa9b0, Func Offset: 0x310
	// Line 450, Address: 0x1aa9b4, Func Offset: 0x314
	// Line 452, Address: 0x1aa9b8, Func Offset: 0x318
	// Line 453, Address: 0x1aa9c4, Func Offset: 0x324
	// Line 455, Address: 0x1aa9d8, Func Offset: 0x338
	// Line 456, Address: 0x1aa9f4, Func Offset: 0x354
	// Line 457, Address: 0x1aaa10, Func Offset: 0x370
	// Line 459, Address: 0x1aaa20, Func Offset: 0x380
	// Line 460, Address: 0x1aaa30, Func Offset: 0x390
	// Line 461, Address: 0x1aaa3c, Func Offset: 0x39c
	// Line 463, Address: 0x1aaa40, Func Offset: 0x3a0
	// Line 464, Address: 0x1aaa48, Func Offset: 0x3a8
	// Line 463, Address: 0x1aaa4c, Func Offset: 0x3ac
	// Line 464, Address: 0x1aaa50, Func Offset: 0x3b0
	// Line 465, Address: 0x1aaa64, Func Offset: 0x3c4
	// Line 467, Address: 0x1aaa68, Func Offset: 0x3c8
	// Line 469, Address: 0x1aaa78, Func Offset: 0x3d8
	// Line 471, Address: 0x1aaa80, Func Offset: 0x3e0
	// Line 474, Address: 0x1aaaa0, Func Offset: 0x400
	// Line 473, Address: 0x1aaaac, Func Offset: 0x40c
	// Line 477, Address: 0x1aaab4, Func Offset: 0x414
	// Line 478, Address: 0x1aaab8, Func Offset: 0x418
	// Line 479, Address: 0x1aaac8, Func Offset: 0x428
	// Line 482, Address: 0x1aaad8, Func Offset: 0x438
	// Line 483, Address: 0x1aaadc, Func Offset: 0x43c
	// Line 479, Address: 0x1aaae0, Func Offset: 0x440
	// Line 481, Address: 0x1aaae4, Func Offset: 0x444
	// Line 482, Address: 0x1aaaec, Func Offset: 0x44c
	// Line 479, Address: 0x1aaaf4, Func Offset: 0x454
	// Line 482, Address: 0x1aaaf8, Func Offset: 0x458
	// Line 479, Address: 0x1aaafc, Func Offset: 0x45c
	// Line 485, Address: 0x1aab00, Func Offset: 0x460
	// Line 482, Address: 0x1aab04, Func Offset: 0x464
	// Line 485, Address: 0x1aab08, Func Offset: 0x468
	// Line 479, Address: 0x1aab0c, Func Offset: 0x46c
	// Line 485, Address: 0x1aab10, Func Offset: 0x470
	// Line 479, Address: 0x1aab14, Func Offset: 0x474
	// Line 480, Address: 0x1aab18, Func Offset: 0x478
	// Line 483, Address: 0x1aab20, Func Offset: 0x480
	// Line 480, Address: 0x1aab24, Func Offset: 0x484
	// Line 481, Address: 0x1aab2c, Func Offset: 0x48c
	// Line 482, Address: 0x1aab34, Func Offset: 0x494
	// Line 481, Address: 0x1aab38, Func Offset: 0x498
	// Line 482, Address: 0x1aab3c, Func Offset: 0x49c
	// Line 483, Address: 0x1aab48, Func Offset: 0x4a8
	// Line 485, Address: 0x1aab4c, Func Offset: 0x4ac
	// Line 486, Address: 0x1aab58, Func Offset: 0x4b8
	// Line 487, Address: 0x1aab68, Func Offset: 0x4c8
	// Line 486, Address: 0x1aab6c, Func Offset: 0x4cc
	// Line 487, Address: 0x1aab70, Func Offset: 0x4d0
	// Line 488, Address: 0x1aab88, Func Offset: 0x4e8
	// Line 490, Address: 0x1aaba0, Func Offset: 0x500
	// Line 491, Address: 0x1aabbc, Func Offset: 0x51c
	// Line 492, Address: 0x1aabd0, Func Offset: 0x530
	// Line 495, Address: 0x1aabfc, Func Offset: 0x55c
	// Line 496, Address: 0x1aac0c, Func Offset: 0x56c
	// Line 497, Address: 0x1aac1c, Func Offset: 0x57c
	// Line 499, Address: 0x1aac2c, Func Offset: 0x58c
	// Line 500, Address: 0x1aac40, Func Offset: 0x5a0
	// Line 501, Address: 0x1aac54, Func Offset: 0x5b4
	// Line 509, Address: 0x1aac64, Func Offset: 0x5c4
	// Line 511, Address: 0x1aac68, Func Offset: 0x5c8
	// Line 512, Address: 0x1aac70, Func Offset: 0x5d0
	// Func End, Address: 0x1aac94, Func Offset: 0x5f4
}

