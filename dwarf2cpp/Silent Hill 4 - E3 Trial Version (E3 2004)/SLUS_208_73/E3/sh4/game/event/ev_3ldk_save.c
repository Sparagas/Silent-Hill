typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _EventDriver;
typedef union _anon5;
typedef struct _anon6;
typedef struct _GAME_WORK;
typedef struct _EventInst;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef void(*type_29)();

typedef unsigned char type_2[2];
typedef float type_3[4];
typedef unsigned int type_4[1];
typedef _anon5 type_8[256];
typedef int type_9[1];
typedef int type_13[1];
typedef _anon5 type_15[4];
typedef int type_16[1];
typedef unsigned int type_18[4];
typedef int type_19[1];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef int type_22[1];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef int type_25[1];
typedef float type_26[1];
typedef int type_27[1];
typedef int type_28[1];
typedef float type_30[4];
typedef float type_31[4][4];

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	_anon6 img;
	float fade_depth;
	char disp_flag;
	unsigned char step;
	unsigned char step_s;
	unsigned char is_save_func_end;
};

struct _anon1
{
	_anon2* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
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
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon4
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon1 tex_data;
	_anon3 clut_data;
	unsigned short ot;
	unsigned short z;
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
	_anon5 val[4];
};

union _anon5
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

struct _anon6
{
	_anon4 base;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

unsigned int ev_cmn_save_file[1];
_EventDriver ev_save_point;
_anon0 ev_save_work;
sfObj* save_fade_obj;
void(*SaveRedFade)(sfObj*);
_GAME_WORK gamew;
void(*pausefunc_save_exec)();

void work_init(_anon0* wk);
void bg_init();
void bg_draw();
void SaveRedFade();
void pausefunc_save_init();
void pausefunc_save_exec();
int ev3ldkSaveExecEnding();

// 
// Start address: 0x275a20
void work_init(_anon0* wk)
{
	// Line 153, Address: 0x275a20, Func Offset: 0
	// Func End, Address: 0x275a2c, Func Offset: 0xc
}

// 
// Start address: 0x275a30
void bg_init()
{
	// Line 158, Address: 0x275a30, Func Offset: 0
	// Line 162, Address: 0x275a34, Func Offset: 0x4
	// Line 158, Address: 0x275a38, Func Offset: 0x8
	// Line 162, Address: 0x275a3c, Func Offset: 0xc
	// Line 163, Address: 0x275a4c, Func Offset: 0x1c
	// Line 164, Address: 0x275a58, Func Offset: 0x28
	// Line 166, Address: 0x275a8c, Func Offset: 0x5c
	// Line 167, Address: 0x275aac, Func Offset: 0x7c
	// Line 168, Address: 0x275ac0, Func Offset: 0x90
	// Line 169, Address: 0x275ae0, Func Offset: 0xb0
	// Line 170, Address: 0x275af4, Func Offset: 0xc4
	// Line 172, Address: 0x275b10, Func Offset: 0xe0
	// Line 173, Address: 0x275b1c, Func Offset: 0xec
	// Func End, Address: 0x275b2c, Func Offset: 0xfc
}

// 
// Start address: 0x275b30
void bg_draw()
{
	_anon2* tex;
	unsigned int cbp;
	// Line 177, Address: 0x275b30, Func Offset: 0
	// Line 180, Address: 0x275b34, Func Offset: 0x4
	// Line 177, Address: 0x275b38, Func Offset: 0x8
	// Line 180, Address: 0x275b3c, Func Offset: 0xc
	// Line 177, Address: 0x275b40, Func Offset: 0x10
	// Line 180, Address: 0x275b44, Func Offset: 0x14
	// Line 181, Address: 0x275b54, Func Offset: 0x24
	// Line 183, Address: 0x275b64, Func Offset: 0x34
	// Line 181, Address: 0x275b68, Func Offset: 0x38
	// Line 183, Address: 0x275b6c, Func Offset: 0x3c
	// Line 184, Address: 0x275b84, Func Offset: 0x54
	// Line 185, Address: 0x275b9c, Func Offset: 0x6c
	// Line 186, Address: 0x275bac, Func Offset: 0x7c
	// Func End, Address: 0x275bc0, Func Offset: 0x90
}

// 
// Start address: 0x275bc0
void SaveRedFade()
{
	_anon0* wk;
	int dep;
	// Line 194, Address: 0x275bc0, Func Offset: 0
	// Line 196, Address: 0x275bc8, Func Offset: 0x8
	// Line 198, Address: 0x275bd8, Func Offset: 0x18
	// Func End, Address: 0x275be0, Func Offset: 0x20
}

// 
// Start address: 0x275be0
void pausefunc_save_init()
{
	// Line 204, Address: 0x275be0, Func Offset: 0
	// Line 207, Address: 0x275be4, Func Offset: 0x4
	// Line 204, Address: 0x275be8, Func Offset: 0x8
	// Line 207, Address: 0x275bec, Func Offset: 0xc
	// Line 208, Address: 0x275bf4, Func Offset: 0x14
	// Line 209, Address: 0x275bfc, Func Offset: 0x1c
	// Line 210, Address: 0x275c04, Func Offset: 0x24
	// Line 211, Address: 0x275c0c, Func Offset: 0x2c
	// Line 212, Address: 0x275c10, Func Offset: 0x30
	// Line 213, Address: 0x275c28, Func Offset: 0x48
	// Line 214, Address: 0x275c30, Func Offset: 0x50
	// Line 215, Address: 0x275c38, Func Offset: 0x58
	// Line 217, Address: 0x275c48, Func Offset: 0x68
	// Func End, Address: 0x275c54, Func Offset: 0x74
}

// 
// Start address: 0x275c60
void pausefunc_save_exec()
{
	_anon0* wk;
	// Line 221, Address: 0x275c60, Func Offset: 0
	// Line 222, Address: 0x275c6c, Func Offset: 0xc
	// Line 224, Address: 0x275c74, Func Offset: 0x14
	// Line 225, Address: 0x275c9c, Func Offset: 0x3c
	// Line 227, Address: 0x275ca0, Func Offset: 0x40
	// Line 230, Address: 0x275ca4, Func Offset: 0x44
	// Line 231, Address: 0x275cb0, Func Offset: 0x50
	// Line 232, Address: 0x275cb8, Func Offset: 0x58
	// Line 237, Address: 0x275cc8, Func Offset: 0x68
	// Line 240, Address: 0x275d00, Func Offset: 0xa0
	// Line 242, Address: 0x275d08, Func Offset: 0xa8
	// Line 244, Address: 0x275d14, Func Offset: 0xb4
	// Line 242, Address: 0x275d18, Func Offset: 0xb8
	// Line 244, Address: 0x275d1c, Func Offset: 0xbc
	// Line 245, Address: 0x275d28, Func Offset: 0xc8
	// Line 246, Address: 0x275d30, Func Offset: 0xd0
	// Line 248, Address: 0x275d38, Func Offset: 0xd8
	// Line 251, Address: 0x275d40, Func Offset: 0xe0
	// Line 253, Address: 0x275d4c, Func Offset: 0xec
	// Line 255, Address: 0x275d54, Func Offset: 0xf4
	// Line 257, Address: 0x275d58, Func Offset: 0xf8
	// Line 258, Address: 0x275d90, Func Offset: 0x130
	// Line 259, Address: 0x275d94, Func Offset: 0x134
	// Line 261, Address: 0x275da0, Func Offset: 0x140
	// Line 279, Address: 0x275da8, Func Offset: 0x148
	// Line 280, Address: 0x275db8, Func Offset: 0x158
	// Line 283, Address: 0x275dc4, Func Offset: 0x164
	// Line 285, Address: 0x275dcc, Func Offset: 0x16c
	// Line 287, Address: 0x275dd0, Func Offset: 0x170
	// Line 290, Address: 0x275e08, Func Offset: 0x1a8
	// Line 292, Address: 0x275e10, Func Offset: 0x1b0
	// Line 293, Address: 0x275e18, Func Offset: 0x1b8
	// Line 295, Address: 0x275e24, Func Offset: 0x1c4
	// Line 297, Address: 0x275e2c, Func Offset: 0x1cc
	// Line 299, Address: 0x275e30, Func Offset: 0x1d0
	// Line 301, Address: 0x275e68, Func Offset: 0x208
	// Line 303, Address: 0x275e70, Func Offset: 0x210
	// Line 305, Address: 0x275e74, Func Offset: 0x214
	// Line 303, Address: 0x275e78, Func Offset: 0x218
	// Line 305, Address: 0x275e7c, Func Offset: 0x21c
	// Line 306, Address: 0x275e88, Func Offset: 0x228
	// Line 307, Address: 0x275e90, Func Offset: 0x230
	// Line 313, Address: 0x275e98, Func Offset: 0x238
	// Line 314, Address: 0x275eac, Func Offset: 0x24c
	// Line 316, Address: 0x275eb4, Func Offset: 0x254
	// Line 321, Address: 0x275ec8, Func Offset: 0x268
	// Func End, Address: 0x275ed8, Func Offset: 0x278
}

// 
// Start address: 0x275ee0
int ev3ldkSaveExecEnding()
{
	int rtv;
	_anon0* wk;
	// Line 423, Address: 0x275ee0, Func Offset: 0
	// Line 426, Address: 0x275ef0, Func Offset: 0x10
	// Line 424, Address: 0x275ef4, Func Offset: 0x14
	// Line 428, Address: 0x275ef8, Func Offset: 0x18
	// Line 429, Address: 0x275f00, Func Offset: 0x20
	// Line 430, Address: 0x275f0c, Func Offset: 0x2c
	// Line 432, Address: 0x275f38, Func Offset: 0x58
	// Line 433, Address: 0x275f40, Func Offset: 0x60
	// Line 434, Address: 0x275f4c, Func Offset: 0x6c
	// Line 436, Address: 0x275f58, Func Offset: 0x78
	// Line 437, Address: 0x275f60, Func Offset: 0x80
	// Line 439, Address: 0x275f68, Func Offset: 0x88
	// Line 442, Address: 0x275f70, Func Offset: 0x90
	// Line 443, Address: 0x275f84, Func Offset: 0xa4
	// Line 445, Address: 0x275f8c, Func Offset: 0xac
	// Line 447, Address: 0x275f94, Func Offset: 0xb4
	// Line 449, Address: 0x275f98, Func Offset: 0xb8
	// Line 450, Address: 0x275fa0, Func Offset: 0xc0
	// Line 452, Address: 0x275fac, Func Offset: 0xcc
	// Line 453, Address: 0x275fb4, Func Offset: 0xd4
	// Line 458, Address: 0x275fb8, Func Offset: 0xd8
	// Line 460, Address: 0x275fc8, Func Offset: 0xe8
	// Line 461, Address: 0x275fd0, Func Offset: 0xf0
	// Line 463, Address: 0x275fe0, Func Offset: 0x100
	// Line 464, Address: 0x275fe4, Func Offset: 0x104
	// Func End, Address: 0x275ff8, Func Offset: 0x118
}

