typedef struct _anon0;
typedef struct sfObj;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _EventInst;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _sfMenuObjRect;
typedef struct _sfMenuObj;
typedef struct EventFlag;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sgBone;
typedef struct _anon10;
typedef struct _GAME_WORK;
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _EventDriver;
typedef struct _anon15;
typedef enum _enum : unsigned char;

typedef int(*type_0)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_27)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef void(*type_35)();
typedef int(*type_37)(sfObj*);
typedef int(*type_38)(sfObj*);
typedef void(*type_40)(sfObj*);
typedef int(*type_42)(sfObj*);
typedef void(*type_44)(sfObj*);
typedef int(*type_46)(sfObj*);
typedef int(*type_47)(sfObj*);
typedef int(*type_48)(sfObj*);

typedef _anon11 type_1[4];
typedef unsigned int type_2[4];
typedef float type_3[4];
typedef char type_4[4];
typedef unsigned int type_5[4];
typedef int type_6[1];
typedef int type_7[1];
typedef float type_8[4];
typedef _anon3 type_9[8];
typedef int type_10[1];
typedef unsigned char type_11[320];
typedef float type_13[3];
typedef int type_14[1];
typedef int type_16[1];
typedef int type_17[1];
typedef _anon4 type_18[8];
typedef int type_20[1];
typedef _anon3 type_21[8];
typedef short type_22[2];
typedef unsigned short type_23[2];
typedef _anon11 type_24[256];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef float type_30[1];
typedef _anon8 type_31[12];
typedef unsigned char type_32[2];
typedef int type_33[1];
typedef char type_36[16];
typedef char type_39[16];
typedef float type_41[4];
typedef float type_43[4][4];
typedef _anon3 type_45[8];

struct _anon0
{
	int dir;
};

struct sfObj
{
	_anon11 fwork[256];
	_anon11* work;
	void(*func)(sfObj*);
	_anon11* work_pt0;
	_anon11* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon11* sys_work;
	_anon11* scene_work;
	_anon11* event_work;
	_anon11* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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
	float pre_cam_pos[4];
	float pre_cam_target[4];
	float pre_player_pos[4];
	float pre_radius;
	float pre_viewangle;
	_anon3* file;
	int scene;
	int floor;
	_anon5 img;
	sfObj* peep_hole_img;
	sfObj* peep_room;
};

struct _anon3
{
	unsigned int id;
	unsigned int emb_dark;
	unsigned int emb_bright;
	unsigned int tex;
};

struct _anon4
{
	float pos[4];
	float target[4];
	float view_vec[4];
};

struct _anon5
{
	_anon14 base;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _anon6
{
	_anon15 panel;
	_anon5 img;
	_anon5 button_img;
	_anon5 asterisk;
	_anon5 cursor;
	unsigned char btn_timer;
	char pushed_btn;
	unsigned char is_panel_ok;
	unsigned char step;
	unsigned char step_s;
	unsigned char is_panel_func_end;
	unsigned char wait;
};

struct _anon7
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _sfMenuObjRect
{
	int x;
	int y;
	int w;
	int h;
	_sfMenuObjRect* next;
	_sfMenuObjRect* prev;
};

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon8
{
	short x;
	short y;
	short w;
	short h;
};

struct _anon9
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct _anon10
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon9 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
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

union _anon11
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

struct _anon12
{
	_anon1* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon13
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon14
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon12 tex_data;
	_anon13 clut_data;
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
	_anon11 val[4];
};

struct _anon15
{
	_anon10 menu;
	char result_stack[16];
	unsigned char max_figure;
	unsigned char cur_figure;
	unsigned char number_disp_ok;
};

enum _enum : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

_EventDriver ev_water0_mz_jump;
_EventDriver ev_water0_hole;
_EventDriver ev_water0_valve_demo_r;
_EventDriver ev_water0_valve_demo_at_3f_r;
_EventDriver ev_water0_valve_demo_l;
_EventDriver ev_water0_valve_demo_at_3f_l;
_GAME_WORK gamew;
_EventDriver ev_water0_valve;
EventFlag event_flag;
_EventDriver ev_water0_mz03_arrived;
_anon4 param[8];
_anon3 file_mz_1f[8];
_anon3 file_mz_2f[8];
_anon3 file_mz_3f[8];
unsigned int ev_water0_peep_file[4];
int g_peep_floor;
int g_peep_pos_no;
unsigned int g_model_id;
unsigned int g_tex_id;
void(*peep_hole_draw)(sfObj*);
void(*peep_room_draw)(sfObj*);
void(*peep_hole_exec)(sfObj*);
void(*peep_room_exec)(sfObj*);
_EventDriver ev_water0_peep;
_EventDriver ev_water0_ghost_appear;
_anon8 button_atari[12];
char answer[4];
_anon6 ev_panel_work;
int(*ev_water0_password_dark_end)(sfObj*);
int(*ev_water0_password_dark_draw)(sfObj*);
int(*ev_water0_password_dark_exec)(sfObj*);
void(*pausefunc_ev_panel_main)();
_EventDriver ev_water0_password;

int ev_hole_end();
int ev_valve_trgchk(sfObj* obj);
int ev_valve_init(sfObj* obj);
int ev_valve_exec(sfObj* obj);
int ev_valve_end(sfObj* obj);
int ev_water0_mz03_trgchk();
int ev_water0_mz03_exec();
_anon3* get_arc_ptr(int floor, int pos_no);
void file_set(sfObj* obj, _anon3* file);
void peep_cam_set(sfObj* obj);
void peep_cam_handle(sfObj* obj, int is_active);
int ev_water0_peep_andrew_trg(sfObj* obj);
void peep_hole_draw(sfObj* obj);
void peep_hole_init(sfObj* obj);
void peep_hole_exec(sfObj* obj);
void peep_room_draw(sfObj* obj);
void peep_room_init(sfObj* obj);
void peep_room_exec(sfObj* obj);
int ev_water0_peep_init(sfObj* obj);
int ev_water0_peep_exec(sfObj* obj);
int ev_water0_peep_draw(sfObj* obj);
int ev_water0_peep_end(sfObj* obj);
int ev_water0_ghost_appear_exec();
void bg_init(_anon5* img);
void button_img_init(_anon5* img);
void asterisk_init(_anon5* img);
void cursor_init(_anon5* img, float x, float y);
void bg_draw(_anon5* img);
void button_img_draw(_anon5* img, int pushed_number);
void asterisk_draw(_anon5* img, int ast_num);
void cursor_draw(_anon5* img);
void cursor_set_xy(_anon5* img, float x, float y);
int ev_water0_password_dark_exec(sfObj* obj);
int ev_water0_password_dark_draw();
int ev_water0_password_dark_end();
void pausefunc_ev_panel_init();
void pausefunc_ev_panel_draw();
void pausefunc_ev_panel_main();
int ev_water0_password_init(sfObj* obj);
int ev_water0_password_exec(sfObj* obj);
int ev_water0_password_draw();
int ev_water0_password_end();

// 
// Start address: 0x1ed4c30
int ev_hole_end()
{
	// Line 839, Address: 0x1ed4c30, Func Offset: 0
	// Line 842, Address: 0x1ed4c34, Func Offset: 0x4
	// Line 839, Address: 0x1ed4c38, Func Offset: 0x8
	// Line 842, Address: 0x1ed4c3c, Func Offset: 0xc
	// Line 843, Address: 0x1ed4c4c, Func Offset: 0x1c
	// Line 844, Address: 0x1ed4c54, Func Offset: 0x24
	// Line 846, Address: 0x1ed4c58, Func Offset: 0x28
	// Line 850, Address: 0x1ed4c60, Func Offset: 0x30
	// Line 851, Address: 0x1ed4c68, Func Offset: 0x38
	// Func End, Address: 0x1ed4c74, Func Offset: 0x44
	// Line 174, Address: 0x1ed4c30, Func Offset: 0
	// Line 175, Address: 0x1ed4c38, Func Offset: 0x8
	// Line 178, Address: 0x1ed4c48, Func Offset: 0x18
	// Line 180, Address: 0x1ed4c54, Func Offset: 0x24
	// Line 181, Address: 0x1ed4c5c, Func Offset: 0x2c
	// Line 183, Address: 0x1ed4c60, Func Offset: 0x30
	// Line 182, Address: 0x1ed4c64, Func Offset: 0x34
	// Line 183, Address: 0x1ed4c68, Func Offset: 0x38
	// Func End, Address: 0x1ed4c70, Func Offset: 0x40
}

// 
// Start address: 0x1ed4c70
int ev_valve_trgchk(sfObj* obj)
{
	// Line 204, Address: 0x1ed4c70, Func Offset: 0
	// Line 205, Address: 0x1ed4c7c, Func Offset: 0xc
	// Line 207, Address: 0x1ed4ca0, Func Offset: 0x30
	// Func End, Address: 0x1ed4cb0, Func Offset: 0x40
}

// 
// Start address: 0x1ed4cb0
int ev_valve_init(sfObj* obj)
{
	// Line 210, Address: 0x1ed4cb0, Func Offset: 0
	// Line 211, Address: 0x1ed4cbc, Func Offset: 0xc
	// Line 213, Address: 0x1ed4cc4, Func Offset: 0x14
	// Line 216, Address: 0x1ed4cd4, Func Offset: 0x24
	// Line 215, Address: 0x1ed4cd8, Func Offset: 0x28
	// Line 216, Address: 0x1ed4cdc, Func Offset: 0x2c
	// Func End, Address: 0x1ed4ce8, Func Offset: 0x38
}

// 
// Start address: 0x1ed4cf0
int ev_valve_exec(sfObj* obj)
{
	int rtv;
	_anon0* result;
	// Line 219, Address: 0x1ed4cf0, Func Offset: 0
	// Line 220, Address: 0x1ed4d08, Func Offset: 0x18
	// Line 221, Address: 0x1ed4d0c, Func Offset: 0x1c
	// Line 224, Address: 0x1ed4d14, Func Offset: 0x24
	// Line 225, Address: 0x1ed4d34, Func Offset: 0x44
	// Line 226, Address: 0x1ed4d38, Func Offset: 0x48
	// Line 227, Address: 0x1ed4d48, Func Offset: 0x58
	// Line 229, Address: 0x1ed4d4c, Func Offset: 0x5c
	// Line 231, Address: 0x1ed4d54, Func Offset: 0x64
	// Line 232, Address: 0x1ed4d5c, Func Offset: 0x6c
	// Line 233, Address: 0x1ed4d60, Func Offset: 0x70
	// Line 235, Address: 0x1ed4d70, Func Offset: 0x80
	// Line 236, Address: 0x1ed4d74, Func Offset: 0x84
	// Line 237, Address: 0x1ed4d80, Func Offset: 0x90
	// Line 239, Address: 0x1ed4d94, Func Offset: 0xa4
	// Line 240, Address: 0x1ed4d9c, Func Offset: 0xac
	// Line 241, Address: 0x1ed4da0, Func Offset: 0xb0
	// Line 244, Address: 0x1ed4da4, Func Offset: 0xb4
	// Line 246, Address: 0x1ed4da8, Func Offset: 0xb8
	// Line 247, Address: 0x1ed4dac, Func Offset: 0xbc
	// Func End, Address: 0x1ed4dc4, Func Offset: 0xd4
}

// 
// Start address: 0x1ed4dd0
int ev_valve_end(sfObj* obj)
{
	_anon0* result;
	int floor;
	// Line 250, Address: 0x1ed4dd0, Func Offset: 0
	// Line 251, Address: 0x1ed4de4, Func Offset: 0x14
	// Line 254, Address: 0x1ed4dec, Func Offset: 0x1c
	// Line 255, Address: 0x1ed4df8, Func Offset: 0x28
	// Line 256, Address: 0x1ed4dfc, Func Offset: 0x2c
	// Line 258, Address: 0x1ed4e04, Func Offset: 0x34
	// Line 261, Address: 0x1ed4e14, Func Offset: 0x44
	// Line 262, Address: 0x1ed4e20, Func Offset: 0x50
	// Line 263, Address: 0x1ed4e28, Func Offset: 0x58
	// Line 264, Address: 0x1ed4e34, Func Offset: 0x64
	// Line 266, Address: 0x1ed4e40, Func Offset: 0x70
	// Line 269, Address: 0x1ed4e50, Func Offset: 0x80
	// Line 270, Address: 0x1ed4e58, Func Offset: 0x88
	// Line 271, Address: 0x1ed4e60, Func Offset: 0x90
	// Line 272, Address: 0x1ed4e6c, Func Offset: 0x9c
	// Line 273, Address: 0x1ed4e74, Func Offset: 0xa4
	// Line 274, Address: 0x1ed4e80, Func Offset: 0xb0
	// Line 276, Address: 0x1ed4e88, Func Offset: 0xb8
	// Line 279, Address: 0x1ed4e98, Func Offset: 0xc8
	// Line 285, Address: 0x1ed4ea0, Func Offset: 0xd0
	// Line 284, Address: 0x1ed4ea8, Func Offset: 0xd8
	// Line 285, Address: 0x1ed4eac, Func Offset: 0xdc
	// Func End, Address: 0x1ed4eb8, Func Offset: 0xe8
	// Line 726, Address: 0x1ed4dd0, Func Offset: 0
	// Line 727, Address: 0x1ed4ddc, Func Offset: 0xc
	// Line 730, Address: 0x1ed4de4, Func Offset: 0x14
	// Line 731, Address: 0x1ed4dec, Func Offset: 0x1c
	// Line 733, Address: 0x1ed4df0, Func Offset: 0x20
	// Line 732, Address: 0x1ed4df4, Func Offset: 0x24
	// Line 733, Address: 0x1ed4df8, Func Offset: 0x28
	// Func End, Address: 0x1ed4e00, Func Offset: 0x30
}

// 
// Start address: 0x1ed4ec0
int ev_water0_mz03_trgchk()
{
	// Line 305, Address: 0x1ed4ec0, Func Offset: 0
	// Line 306, Address: 0x1ed4ed0, Func Offset: 0x10
	// Func End, Address: 0x1ed4ed8, Func Offset: 0x18
}

// 
// Start address: 0x1ed4ee0
int ev_water0_mz03_exec()
{
	// Line 458, Address: 0x1ed4ee0, Func Offset: 0
	// Line 459, Address: 0x1ed4ee4, Func Offset: 0x4
	// Line 462, Address: 0x1ed4eec, Func Offset: 0xc
	// Line 463, Address: 0x1ed4ef8, Func Offset: 0x18
	// Line 466, Address: 0x1ed4f18, Func Offset: 0x38
	// Line 468, Address: 0x1ed4f20, Func Offset: 0x40
	// Line 472, Address: 0x1ed4f44, Func Offset: 0x64
	// Line 473, Address: 0x1ed4f48, Func Offset: 0x68
	// Func End, Address: 0x1ed4f54, Func Offset: 0x74
	// Line 311, Address: 0x1ed4ee0, Func Offset: 0
	// Func End, Address: 0x1ed4ee8, Func Offset: 0x8
}

// 
// Start address: 0x1ed4ef0
_anon3* get_arc_ptr(int floor, int pos_no)
{
	_anon3* rtv;
	int rot;
	// Line 952, Address: 0x1ed4ef0, Func Offset: 0
	// Line 953, Address: 0x1ed4ef8, Func Offset: 0x8
	// Line 959, Address: 0x1ed4f00, Func Offset: 0x10
	// Line 958, Address: 0x1ed4f04, Func Offset: 0x14
	// Line 959, Address: 0x1ed4f08, Func Offset: 0x18
	// Func End, Address: 0x1ed4f10, Func Offset: 0x20
	// Line 413, Address: 0x1ed4ef0, Func Offset: 0
	// Line 415, Address: 0x1ed4f0c, Func Offset: 0x1c
	// Line 417, Address: 0x1ed4f14, Func Offset: 0x24
	// Line 418, Address: 0x1ed4f3c, Func Offset: 0x4c
	// Line 419, Address: 0x1ed4f6c, Func Offset: 0x7c
	// Line 420, Address: 0x1ed4f9c, Func Offset: 0xac
	// Line 423, Address: 0x1ed4fc8, Func Offset: 0xd8
	// Line 424, Address: 0x1ed4fcc, Func Offset: 0xdc
	// Func End, Address: 0x1ed4fe4, Func Offset: 0xf4
}

// 
// Start address: 0x1ed4ff0
void file_set(sfObj* obj, _anon3* file)
{
	_EventInst* inst;
	// Line 428, Address: 0x1ed4ff0, Func Offset: 0
	// Line 430, Address: 0x1ed4ffc, Func Offset: 0xc
	// Line 432, Address: 0x1ed5004, Func Offset: 0x14
	// Line 435, Address: 0x1ed5008, Func Offset: 0x18
	// Line 432, Address: 0x1ed500c, Func Offset: 0x1c
	// Line 435, Address: 0x1ed5010, Func Offset: 0x20
	// Line 436, Address: 0x1ed5020, Func Offset: 0x30
	// Func End, Address: 0x1ed5030, Func Offset: 0x40
	// Line 31, Address: 0x1ed4ff0, Func Offset: 0
	// Func End, Address: 0x1ed4ff8, Func Offset: 0x8
}

// 
// Start address: 0x1ed5030
void peep_cam_set(sfObj* obj)
{
	_anon2* wk;
	int kind;
	int rot;
	int index;
	_anon4* p;
	// Line 440, Address: 0x1ed5030, Func Offset: 0
	// Line 441, Address: 0x1ed503c, Func Offset: 0xc
	// Line 442, Address: 0x1ed5040, Func Offset: 0x10
	// Line 443, Address: 0x1ed5044, Func Offset: 0x14
	// Line 444, Address: 0x1ed504c, Func Offset: 0x1c
	// Line 445, Address: 0x1ed5064, Func Offset: 0x34
	// Line 447, Address: 0x1ed507c, Func Offset: 0x4c
	// Line 448, Address: 0x1ed5094, Func Offset: 0x64
	// Line 449, Address: 0x1ed50c0, Func Offset: 0x90
	// Func End, Address: 0x1ed50d0, Func Offset: 0xa0
}

// 
// Start address: 0x1ed50d0
void peep_cam_handle(sfObj* obj, int is_active)
{
	_anon2* wk;
	int kind;
	int rot;
	int index;
	_anon4* p;
	float side_ang;
	float up_ang;
	float up[4];
	float target[4];
	float arg[3];
	float ViewOmegaVec[4];
	// Line 454, Address: 0x1ed50d0, Func Offset: 0
	// Line 455, Address: 0x1ed50e4, Func Offset: 0x14
	// Line 456, Address: 0x1ed50e8, Func Offset: 0x18
	// Line 457, Address: 0x1ed50ec, Func Offset: 0x1c
	// Line 458, Address: 0x1ed50f8, Func Offset: 0x28
	// Line 459, Address: 0x1ed5110, Func Offset: 0x40
	// Line 462, Address: 0x1ed5120, Func Offset: 0x50
	// Line 459, Address: 0x1ed5124, Func Offset: 0x54
	// Line 462, Address: 0x1ed5128, Func Offset: 0x58
	// Line 459, Address: 0x1ed512c, Func Offset: 0x5c
	// Line 462, Address: 0x1ed5130, Func Offset: 0x60
	// Line 460, Address: 0x1ed5134, Func Offset: 0x64
	// Line 462, Address: 0x1ed5138, Func Offset: 0x68
	// Line 461, Address: 0x1ed513c, Func Offset: 0x6c
	// Line 465, Address: 0x1ed5140, Func Offset: 0x70
	// Line 466, Address: 0x1ed5148, Func Offset: 0x78
	// Line 467, Address: 0x1ed5154, Func Offset: 0x84
	// Line 466, Address: 0x1ed5158, Func Offset: 0x88
	// Line 467, Address: 0x1ed5160, Func Offset: 0x90
	// Line 471, Address: 0x1ed5180, Func Offset: 0xb0
	// Line 483, Address: 0x1ed5194, Func Offset: 0xc4
	// Line 493, Address: 0x1ed51c4, Func Offset: 0xf4
	// Line 496, Address: 0x1ed51e0, Func Offset: 0x110
	// Line 499, Address: 0x1ed51f8, Func Offset: 0x128
	// Func End, Address: 0x1ed5210, Func Offset: 0x140
}

// 
// Start address: 0x1ed5210
int ev_water0_peep_andrew_trg(sfObj* obj)
{
	_anon2* wk;
	// Line 502, Address: 0x1ed5210, Func Offset: 0
	// Line 504, Address: 0x1ed521c, Func Offset: 0xc
	// Line 505, Address: 0x1ed523c, Func Offset: 0x2c
	// Line 506, Address: 0x1ed5244, Func Offset: 0x34
	// Line 507, Address: 0x1ed5248, Func Offset: 0x38
	// Line 508, Address: 0x1ed5250, Func Offset: 0x40
	// Func End, Address: 0x1ed5260, Func Offset: 0x50
}

// 
// Start address: 0x1ed5260
void peep_hole_draw(sfObj* obj)
{
	_anon5* img;
	int pos_no;
	_anon4* cp;
	_anon1* tex;
	unsigned int cbp;
	float wvm[4][4];
	float pos[4];
	float dx;
	float dy;
	float ratio;
	float len;
	float target[4];
	// Line 880, Address: 0x1ed5260, Func Offset: 0
	// Func End, Address: 0x1ed5268, Func Offset: 0x8
	// Line 513, Address: 0x1ed5260, Func Offset: 0
	// Line 514, Address: 0x1ed5280, Func Offset: 0x20
	// Line 518, Address: 0x1ed528c, Func Offset: 0x2c
	// Line 516, Address: 0x1ed5290, Func Offset: 0x30
	// Line 518, Address: 0x1ed5294, Func Offset: 0x34
	// Line 519, Address: 0x1ed52a4, Func Offset: 0x44
	// Line 527, Address: 0x1ed52b4, Func Offset: 0x54
	// Line 528, Address: 0x1ed52dc, Func Offset: 0x7c
	// Line 530, Address: 0x1ed52f0, Func Offset: 0x90
	// Line 528, Address: 0x1ed52f4, Func Offset: 0x94
	// Line 530, Address: 0x1ed52f8, Func Offset: 0x98
	// Line 531, Address: 0x1ed5310, Func Offset: 0xb0
	// Line 533, Address: 0x1ed5334, Func Offset: 0xd4
	// Line 534, Address: 0x1ed533c, Func Offset: 0xdc
	// Line 535, Address: 0x1ed5378, Func Offset: 0x118
	// Line 537, Address: 0x1ed538c, Func Offset: 0x12c
	// Line 538, Address: 0x1ed5390, Func Offset: 0x130
	// Line 537, Address: 0x1ed5394, Func Offset: 0x134
	// Line 540, Address: 0x1ed5398, Func Offset: 0x138
	// Line 544, Address: 0x1ed53fc, Func Offset: 0x19c
	// Line 545, Address: 0x1ed5414, Func Offset: 0x1b4
	// Line 546, Address: 0x1ed5428, Func Offset: 0x1c8
	// Line 547, Address: 0x1ed5434, Func Offset: 0x1d4
	// Line 548, Address: 0x1ed5438, Func Offset: 0x1d8
	// Func End, Address: 0x1ed545c, Func Offset: 0x1fc
}

// 
// Start address: 0x1ed5460
void peep_hole_init(sfObj* obj)
{
	float w;
	float h;
	_anon5* img;
	// Line 552, Address: 0x1ed5460, Func Offset: 0
	// Line 553, Address: 0x1ed547c, Func Offset: 0x1c
	// Line 554, Address: 0x1ed5484, Func Offset: 0x24
	// Line 556, Address: 0x1ed5494, Func Offset: 0x34
	// Line 560, Address: 0x1ed549c, Func Offset: 0x3c
	// Line 561, Address: 0x1ed54c0, Func Offset: 0x60
	// Line 563, Address: 0x1ed54cc, Func Offset: 0x6c
	// Line 561, Address: 0x1ed54d4, Func Offset: 0x74
	// Line 563, Address: 0x1ed54e0, Func Offset: 0x80
	// Line 564, Address: 0x1ed54e8, Func Offset: 0x88
	// Line 565, Address: 0x1ed551c, Func Offset: 0xbc
	// Line 569, Address: 0x1ed5584, Func Offset: 0x124
	// Line 570, Address: 0x1ed55a0, Func Offset: 0x140
	// Line 571, Address: 0x1ed55b0, Func Offset: 0x150
	// Line 572, Address: 0x1ed55c8, Func Offset: 0x168
	// Line 573, Address: 0x1ed55dc, Func Offset: 0x17c
	// Line 574, Address: 0x1ed55f0, Func Offset: 0x190
	// Line 576, Address: 0x1ed5600, Func Offset: 0x1a0
	// Line 578, Address: 0x1ed561c, Func Offset: 0x1bc
	// Line 580, Address: 0x1ed562c, Func Offset: 0x1cc
	// Line 583, Address: 0x1ed5640, Func Offset: 0x1e0
	// Line 586, Address: 0x1ed5650, Func Offset: 0x1f0
	// Func End, Address: 0x1ed5670, Func Offset: 0x210
}

// 
// Start address: 0x1ed5670
void peep_hole_exec(sfObj* obj)
{
	// Line 590, Address: 0x1ed5670, Func Offset: 0
	// Line 591, Address: 0x1ed567c, Func Offset: 0xc
	// Line 592, Address: 0x1ed5688, Func Offset: 0x18
	// Line 593, Address: 0x1ed5690, Func Offset: 0x20
	// Line 594, Address: 0x1ed569c, Func Offset: 0x2c
	// Line 595, Address: 0x1ed56a0, Func Offset: 0x30
	// Func End, Address: 0x1ed56b0, Func Offset: 0x40
}

// 
// Start address: 0x1ed56b0
void peep_room_draw(sfObj* obj)
{
	// Line 959, Address: 0x1ed56b0, Func Offset: 0
	// Line 967, Address: 0x1ed56b4, Func Offset: 0x4
	// Line 959, Address: 0x1ed56b8, Func Offset: 0x8
	// Line 967, Address: 0x1ed56bc, Func Offset: 0xc
	// Line 959, Address: 0x1ed56c0, Func Offset: 0x10
	// Line 966, Address: 0x1ed56c4, Func Offset: 0x14
	// Line 959, Address: 0x1ed56c8, Func Offset: 0x18
	// Line 967, Address: 0x1ed56cc, Func Offset: 0x1c
	// Line 965, Address: 0x1ed56d0, Func Offset: 0x20
	// Line 967, Address: 0x1ed56d8, Func Offset: 0x28
	// Line 969, Address: 0x1ed56e4, Func Offset: 0x34
	// Line 970, Address: 0x1ed56ec, Func Offset: 0x3c
	// Line 971, Address: 0x1ed56f4, Func Offset: 0x44
	// Line 972, Address: 0x1ed56fc, Func Offset: 0x4c
	// Line 973, Address: 0x1ed5704, Func Offset: 0x54
	// Line 974, Address: 0x1ed5708, Func Offset: 0x58
	// Line 976, Address: 0x1ed5750, Func Offset: 0xa0
	// Line 977, Address: 0x1ed5754, Func Offset: 0xa4
	// Line 978, Address: 0x1ed577c, Func Offset: 0xcc
	// Line 979, Address: 0x1ed57a8, Func Offset: 0xf8
	// Line 980, Address: 0x1ed57d0, Func Offset: 0x120
	// Line 983, Address: 0x1ed57e8, Func Offset: 0x138
	// Line 982, Address: 0x1ed57ec, Func Offset: 0x13c
	// Line 984, Address: 0x1ed57f0, Func Offset: 0x140
	// Line 983, Address: 0x1ed57f4, Func Offset: 0x144
	// Line 985, Address: 0x1ed57f8, Func Offset: 0x148
	// Func End, Address: 0x1ed580c, Func Offset: 0x15c
	// Line 601, Address: 0x1ed56b0, Func Offset: 0
	// Line 602, Address: 0x1ed56bc, Func Offset: 0xc
	// Line 605, Address: 0x1ed56c4, Func Offset: 0x14
	// Line 606, Address: 0x1ed56cc, Func Offset: 0x1c
	// Line 607, Address: 0x1ed56d0, Func Offset: 0x20
	// Func End, Address: 0x1ed56dc, Func Offset: 0x2c
	// Line 1046, Address: 0x1ed56b0, Func Offset: 0
	// Func End, Address: 0x1ed56b8, Func Offset: 0x8
}

// 
// Start address: 0x1ed56e0
void peep_room_init(sfObj* obj)
{
	_anon7* mdl;
	// Line 1350, Address: 0x1ed56e0, Func Offset: 0
	// Line 1351, Address: 0x1ed56e4, Func Offset: 0x4
	// Line 1350, Address: 0x1ed56e8, Func Offset: 0x8
	// Line 1351, Address: 0x1ed56ec, Func Offset: 0xc
	// Line 1354, Address: 0x1ed56f4, Func Offset: 0x14
	// Line 1351, Address: 0x1ed56f8, Func Offset: 0x18
	// Line 1354, Address: 0x1ed56fc, Func Offset: 0x1c
	// Line 1359, Address: 0x1ed5720, Func Offset: 0x40
	// Line 1358, Address: 0x1ed5724, Func Offset: 0x44
	// Line 1359, Address: 0x1ed5728, Func Offset: 0x48
	// Func End, Address: 0x1ed5730, Func Offset: 0x50
	// Line 612, Address: 0x1ed56e0, Func Offset: 0
	// Line 613, Address: 0x1ed56e4, Func Offset: 0x4
	// Line 612, Address: 0x1ed56e8, Func Offset: 0x8
	// Line 613, Address: 0x1ed56f4, Func Offset: 0x14
	// Line 614, Address: 0x1ed5704, Func Offset: 0x24
	// Line 617, Address: 0x1ed570c, Func Offset: 0x2c
	// Line 618, Address: 0x1ed5714, Func Offset: 0x34
	// Line 620, Address: 0x1ed572c, Func Offset: 0x4c
	// Line 621, Address: 0x1ed5744, Func Offset: 0x64
	// Line 624, Address: 0x1ed575c, Func Offset: 0x7c
	// Line 625, Address: 0x1ed576c, Func Offset: 0x8c
	// Line 626, Address: 0x1ed5770, Func Offset: 0x90
	// Func End, Address: 0x1ed5784, Func Offset: 0xa4
}

// 
// Start address: 0x1ed5790
void peep_room_exec(sfObj* obj)
{
	// Line 630, Address: 0x1ed5790, Func Offset: 0
	// Line 631, Address: 0x1ed579c, Func Offset: 0xc
	// Line 632, Address: 0x1ed57a8, Func Offset: 0x18
	// Line 633, Address: 0x1ed57b0, Func Offset: 0x20
	// Line 634, Address: 0x1ed57bc, Func Offset: 0x2c
	// Line 635, Address: 0x1ed57c0, Func Offset: 0x30
	// Func End, Address: 0x1ed57d0, Func Offset: 0x40
}

// 
// Start address: 0x1ed57d0
int ev_water0_peep_init(sfObj* obj)
{
	int peep_scene;
	int floor;
	int pos_no;
	_anon2* wk;
	_EventInst* evinst;
	// Line 313, Address: 0x1ed57d0, Func Offset: 0
	// Line 314, Address: 0x1ed57dc, Func Offset: 0xc
	// Line 316, Address: 0x1ed57e0, Func Offset: 0x10
	// Line 317, Address: 0x1ed57ec, Func Offset: 0x1c
	// Line 318, Address: 0x1ed57f4, Func Offset: 0x24
	// Line 319, Address: 0x1ed5804, Func Offset: 0x34
	// Line 320, Address: 0x1ed5814, Func Offset: 0x44
	// Line 321, Address: 0x1ed581c, Func Offset: 0x4c
	// Line 322, Address: 0x1ed5824, Func Offset: 0x54
	// Line 325, Address: 0x1ed5838, Func Offset: 0x68
	// Line 324, Address: 0x1ed5840, Func Offset: 0x70
	// Line 325, Address: 0x1ed5844, Func Offset: 0x74
	// Func End, Address: 0x1ed584c, Func Offset: 0x7c
	// Line 642, Address: 0x1ed57d0, Func Offset: 0
	// Line 643, Address: 0x1ed57d4, Func Offset: 0x4
	// Line 642, Address: 0x1ed57d8, Func Offset: 0x8
	// Line 643, Address: 0x1ed57f4, Func Offset: 0x24
	// Line 644, Address: 0x1ed5804, Func Offset: 0x34
	// Line 647, Address: 0x1ed580c, Func Offset: 0x3c
	// Line 652, Address: 0x1ed5810, Func Offset: 0x40
	// Line 654, Address: 0x1ed5818, Func Offset: 0x48
	// Line 652, Address: 0x1ed581c, Func Offset: 0x4c
	// Line 654, Address: 0x1ed5820, Func Offset: 0x50
	// Line 655, Address: 0x1ed584c, Func Offset: 0x7c
	// Line 656, Address: 0x1ed5858, Func Offset: 0x88
	// Line 657, Address: 0x1ed5860, Func Offset: 0x90
	// Line 658, Address: 0x1ed5864, Func Offset: 0x94
	// Line 659, Address: 0x1ed5868, Func Offset: 0x98
	// Line 662, Address: 0x1ed5878, Func Offset: 0xa8
	// Line 660, Address: 0x1ed587c, Func Offset: 0xac
	// Line 662, Address: 0x1ed5880, Func Offset: 0xb0
	// Line 663, Address: 0x1ed5890, Func Offset: 0xc0
	// Line 664, Address: 0x1ed5898, Func Offset: 0xc8
	// Line 665, Address: 0x1ed58a0, Func Offset: 0xd0
	// Line 666, Address: 0x1ed58a8, Func Offset: 0xd8
	// Line 668, Address: 0x1ed58b4, Func Offset: 0xe4
	// Line 671, Address: 0x1ed58c0, Func Offset: 0xf0
	// Line 672, Address: 0x1ed58d0, Func Offset: 0x100
	// Line 673, Address: 0x1ed58dc, Func Offset: 0x10c
	// Line 675, Address: 0x1ed58e8, Func Offset: 0x118
	// Line 677, Address: 0x1ed58f8, Func Offset: 0x128
	// Line 685, Address: 0x1ed5900, Func Offset: 0x130
	// Line 677, Address: 0x1ed5908, Func Offset: 0x138
	// Line 680, Address: 0x1ed5910, Func Offset: 0x140
	// Line 681, Address: 0x1ed5918, Func Offset: 0x148
	// Line 685, Address: 0x1ed591c, Func Offset: 0x14c
	// Line 687, Address: 0x1ed5924, Func Offset: 0x154
	// Line 689, Address: 0x1ed592c, Func Offset: 0x15c
	// Line 691, Address: 0x1ed5934, Func Offset: 0x164
	// Line 692, Address: 0x1ed593c, Func Offset: 0x16c
	// Line 694, Address: 0x1ed5944, Func Offset: 0x174
	// Line 695, Address: 0x1ed5954, Func Offset: 0x184
	// Line 696, Address: 0x1ed595c, Func Offset: 0x18c
	// Line 698, Address: 0x1ed5960, Func Offset: 0x190
	// Line 699, Address: 0x1ed5968, Func Offset: 0x198
	// Line 703, Address: 0x1ed5970, Func Offset: 0x1a0
	// Line 702, Address: 0x1ed5978, Func Offset: 0x1a8
	// Line 703, Address: 0x1ed597c, Func Offset: 0x1ac
	// Func End, Address: 0x1ed5998, Func Offset: 0x1c8
}

// 
// Start address: 0x1ed59a0
int ev_water0_peep_exec(sfObj* obj)
{
	int rtv;
	_anon2* wk;
	_EventInst* inst;
	float player_pos[4];
	// Line 1509, Address: 0x1ed59a0, Func Offset: 0
	// Line 1510, Address: 0x1ed59b4, Func Offset: 0x14
	// Line 1511, Address: 0x1ed59bc, Func Offset: 0x1c
	// Line 1510, Address: 0x1ed59c4, Func Offset: 0x24
	// Line 1513, Address: 0x1ed59d0, Func Offset: 0x30
	// Func End, Address: 0x1ed59d8, Func Offset: 0x38
	// Line 761, Address: 0x1ed59a0, Func Offset: 0
	// Line 762, Address: 0x1ed59b8, Func Offset: 0x18
	// Line 763, Address: 0x1ed59bc, Func Offset: 0x1c
	// Line 765, Address: 0x1ed59c4, Func Offset: 0x24
	// Line 768, Address: 0x1ed59cc, Func Offset: 0x2c
	// Line 771, Address: 0x1ed5a00, Func Offset: 0x60
	// Line 774, Address: 0x1ed5a08, Func Offset: 0x68
	// Line 775, Address: 0x1ed5a14, Func Offset: 0x74
	// Line 777, Address: 0x1ed5a20, Func Offset: 0x80
	// Line 776, Address: 0x1ed5a24, Func Offset: 0x84
	// Line 777, Address: 0x1ed5a38, Func Offset: 0x98
	// Line 780, Address: 0x1ed5a40, Func Offset: 0xa0
	// Line 783, Address: 0x1ed5a48, Func Offset: 0xa8
	// Line 784, Address: 0x1ed5a58, Func Offset: 0xb8
	// Line 785, Address: 0x1ed5a60, Func Offset: 0xc0
	// Line 786, Address: 0x1ed5a68, Func Offset: 0xc8
	// Line 787, Address: 0x1ed5a74, Func Offset: 0xd4
	// Line 790, Address: 0x1ed5a78, Func Offset: 0xd8
	// Line 791, Address: 0x1ed5a88, Func Offset: 0xe8
	// Line 792, Address: 0x1ed5a90, Func Offset: 0xf0
	// Line 793, Address: 0x1ed5a98, Func Offset: 0xf8
	// Line 794, Address: 0x1ed5aa4, Func Offset: 0x104
	// Line 796, Address: 0x1ed5aa8, Func Offset: 0x108
	// Line 797, Address: 0x1ed5ab0, Func Offset: 0x110
	// Line 800, Address: 0x1ed5ab8, Func Offset: 0x118
	// Line 803, Address: 0x1ed5ac0, Func Offset: 0x120
	// Line 804, Address: 0x1ed5ae8, Func Offset: 0x148
	// Line 805, Address: 0x1ed5af0, Func Offset: 0x150
	// Line 808, Address: 0x1ed5af8, Func Offset: 0x158
	// Line 809, Address: 0x1ed5b04, Func Offset: 0x164
	// Line 810, Address: 0x1ed5b18, Func Offset: 0x178
	// Line 811, Address: 0x1ed5b3c, Func Offset: 0x19c
	// Line 817, Address: 0x1ed5b48, Func Offset: 0x1a8
	// Line 818, Address: 0x1ed5b58, Func Offset: 0x1b8
	// Line 819, Address: 0x1ed5b60, Func Offset: 0x1c0
	// Line 820, Address: 0x1ed5b70, Func Offset: 0x1d0
	// Line 821, Address: 0x1ed5b84, Func Offset: 0x1e4
	// Line 824, Address: 0x1ed5b8c, Func Offset: 0x1ec
	// Line 825, Address: 0x1ed5b94, Func Offset: 0x1f4
	// Line 826, Address: 0x1ed5b98, Func Offset: 0x1f8
	// Line 829, Address: 0x1ed5ba4, Func Offset: 0x204
	// Line 830, Address: 0x1ed5bb4, Func Offset: 0x214
	// Line 836, Address: 0x1ed5bb8, Func Offset: 0x218
	// Line 837, Address: 0x1ed5bbc, Func Offset: 0x21c
	// Func End, Address: 0x1ed5bd4, Func Offset: 0x234
	// Line 166, Address: 0x1ed59a0, Func Offset: 0
	// Func End, Address: 0x1ed59a8, Func Offset: 0x8
}

// 
// Start address: 0x1ed5be0
int ev_water0_peep_draw(sfObj* obj)
{
	// Line 1084, Address: 0x1ed5be0, Func Offset: 0
	// Line 1085, Address: 0x1ed5be4, Func Offset: 0x4
	// Line 1084, Address: 0x1ed5be8, Func Offset: 0x8
	// Line 1085, Address: 0x1ed5bf0, Func Offset: 0x10
	// Line 1087, Address: 0x1ed5c10, Func Offset: 0x30
	// Line 1089, Address: 0x1ed5c18, Func Offset: 0x38
	// Line 1091, Address: 0x1ed5c20, Func Offset: 0x40
	// Line 1095, Address: 0x1ed5c40, Func Offset: 0x60
	// Line 1097, Address: 0x1ed5c48, Func Offset: 0x68
	// Line 1098, Address: 0x1ed5c4c, Func Offset: 0x6c
	// Line 1100, Address: 0x1ed5c58, Func Offset: 0x78
	// Line 1101, Address: 0x1ed5c60, Func Offset: 0x80
	// Func End, Address: 0x1ed5c70, Func Offset: 0x90
	// Line 841, Address: 0x1ed5be0, Func Offset: 0
	// Line 842, Address: 0x1ed5be8, Func Offset: 0x8
	// Line 845, Address: 0x1ed5bf4, Func Offset: 0x14
	// Line 846, Address: 0x1ed5c04, Func Offset: 0x24
	// Line 852, Address: 0x1ed5c0c, Func Offset: 0x2c
	// Line 855, Address: 0x1ed5c10, Func Offset: 0x30
	// Line 854, Address: 0x1ed5c14, Func Offset: 0x34
	// Line 855, Address: 0x1ed5c18, Func Offset: 0x38
	// Func End, Address: 0x1ed5c20, Func Offset: 0x40
	// Line 1054, Address: 0x1ed5be0, Func Offset: 0
	// Line 1055, Address: 0x1ed5be4, Func Offset: 0x4
	// Line 1058, Address: 0x1ed5bf8, Func Offset: 0x18
	// Line 1059, Address: 0x1ed5bfc, Func Offset: 0x1c
	// Line 1058, Address: 0x1ed5c00, Func Offset: 0x20
	// Line 1059, Address: 0x1ed5c04, Func Offset: 0x24
	// Line 1060, Address: 0x1ed5c0c, Func Offset: 0x2c
	// Line 1061, Address: 0x1ed5c34, Func Offset: 0x54
	// Line 1062, Address: 0x1ed5c38, Func Offset: 0x58
	// Func End, Address: 0x1ed5c44, Func Offset: 0x64
}

// 
// Start address: 0x1ed5c20
int ev_water0_peep_end(sfObj* obj)
{
	_anon2* wk;
	// Line 858, Address: 0x1ed5c20, Func Offset: 0
	// Line 859, Address: 0x1ed5c34, Func Offset: 0x14
	// Line 863, Address: 0x1ed5c3c, Func Offset: 0x1c
	// Line 864, Address: 0x1ed5c44, Func Offset: 0x24
	// Line 867, Address: 0x1ed5c4c, Func Offset: 0x2c
	// Line 870, Address: 0x1ed5c58, Func Offset: 0x38
	// Line 873, Address: 0x1ed5c60, Func Offset: 0x40
	// Line 874, Address: 0x1ed5c70, Func Offset: 0x50
	// Line 878, Address: 0x1ed5c78, Func Offset: 0x58
	// Line 881, Address: 0x1ed5c80, Func Offset: 0x60
	// Line 883, Address: 0x1ed5c8c, Func Offset: 0x6c
	// Line 884, Address: 0x1ed5c94, Func Offset: 0x74
	// Line 885, Address: 0x1ed5c9c, Func Offset: 0x7c
	// Line 884, Address: 0x1ed5ca0, Func Offset: 0x80
	// Line 886, Address: 0x1ed5ca4, Func Offset: 0x84
	// Line 887, Address: 0x1ed5cac, Func Offset: 0x8c
	// Line 888, Address: 0x1ed5cb4, Func Offset: 0x94
	// Line 889, Address: 0x1ed5cb8, Func Offset: 0x98
	// Line 893, Address: 0x1ed5cc0, Func Offset: 0xa0
	// Line 892, Address: 0x1ed5cc8, Func Offset: 0xa8
	// Line 893, Address: 0x1ed5ccc, Func Offset: 0xac
	// Func End, Address: 0x1ed5cd8, Func Offset: 0xb8
}

// 
// Start address: 0x1ed5ce0
int ev_water0_ghost_appear_exec()
{
	// Line 911, Address: 0x1ed5ce0, Func Offset: 0
	// Line 912, Address: 0x1ed5ce8, Func Offset: 0x8
	// Line 914, Address: 0x1ed5cf0, Func Offset: 0x10
	// Line 913, Address: 0x1ed5cf4, Func Offset: 0x14
	// Line 914, Address: 0x1ed5cf8, Func Offset: 0x18
	// Func End, Address: 0x1ed5d00, Func Offset: 0x20
}

// 
// Start address: 0x1ed5d00
void bg_init(_anon5* img)
{
	// Line 1137, Address: 0x1ed5d00, Func Offset: 0
	// Line 1145, Address: 0x1ed5d14, Func Offset: 0x14
	// Line 1147, Address: 0x1ed5d18, Func Offset: 0x18
	// Line 1150, Address: 0x1ed5d20, Func Offset: 0x20
	// Line 1152, Address: 0x1ed5d54, Func Offset: 0x54
	// Line 1153, Address: 0x1ed5d5c, Func Offset: 0x5c
	// Line 1159, Address: 0x1ed5d60, Func Offset: 0x60
	// Line 1153, Address: 0x1ed5d68, Func Offset: 0x68
	// Line 1154, Address: 0x1ed5d6c, Func Offset: 0x6c
	// Line 1159, Address: 0x1ed5d70, Func Offset: 0x70
	// Line 1154, Address: 0x1ed5d74, Func Offset: 0x74
	// Line 1155, Address: 0x1ed5d78, Func Offset: 0x78
	// Line 1159, Address: 0x1ed5d80, Func Offset: 0x80
	// Line 1160, Address: 0x1ed5d88, Func Offset: 0x88
	// Line 1161, Address: 0x1ed5d94, Func Offset: 0x94
	// Line 1162, Address: 0x1ed5d98, Func Offset: 0x98
	// Line 1163, Address: 0x1ed5da4, Func Offset: 0xa4
	// Line 1165, Address: 0x1ed5da8, Func Offset: 0xa8
	// Line 1166, Address: 0x1ed5db0, Func Offset: 0xb0
	// Line 1167, Address: 0x1ed5dcc, Func Offset: 0xcc
	// Line 1168, Address: 0x1ed5df0, Func Offset: 0xf0
	// Line 1169, Address: 0x1ed5e30, Func Offset: 0x130
	// Line 1170, Address: 0x1ed5e3c, Func Offset: 0x13c
	// Line 1169, Address: 0x1ed5e44, Func Offset: 0x144
	// Line 1170, Address: 0x1ed5e48, Func Offset: 0x148
	// Line 1171, Address: 0x1ed5e54, Func Offset: 0x154
	// Line 1172, Address: 0x1ed5e58, Func Offset: 0x158
	// Line 1171, Address: 0x1ed5e5c, Func Offset: 0x15c
	// Line 1172, Address: 0x1ed5e60, Func Offset: 0x160
	// Line 1171, Address: 0x1ed5e64, Func Offset: 0x164
	// Line 1172, Address: 0x1ed5e70, Func Offset: 0x170
	// Line 1173, Address: 0x1ed5e8c, Func Offset: 0x18c
	// Line 1174, Address: 0x1ed5e94, Func Offset: 0x194
	// Line 1176, Address: 0x1ed5e98, Func Offset: 0x198
	// Line 1177, Address: 0x1ed5ea0, Func Offset: 0x1a0
	// Func End, Address: 0x1ed5eb8, Func Offset: 0x1b8
	// Line 967, Address: 0x1ed5d00, Func Offset: 0
	// Line 968, Address: 0x1ed5d04, Func Offset: 0x4
	// Line 967, Address: 0x1ed5d08, Func Offset: 0x8
	// Line 968, Address: 0x1ed5d10, Func Offset: 0x10
	// Line 969, Address: 0x1ed5d18, Func Offset: 0x18
	// Line 970, Address: 0x1ed5d38, Func Offset: 0x38
	// Line 971, Address: 0x1ed5d54, Func Offset: 0x54
	// Line 972, Address: 0x1ed5d64, Func Offset: 0x64
	// Line 973, Address: 0x1ed5d7c, Func Offset: 0x7c
	// Func End, Address: 0x1ed5d8c, Func Offset: 0x8c
	// Line 293, Address: 0x1ed5d00, Func Offset: 0
	// Line 294, Address: 0x1ed5d04, Func Offset: 0x4
	// Line 293, Address: 0x1ed5d08, Func Offset: 0x8
	// Line 295, Address: 0x1ed5d14, Func Offset: 0x14
	// Func End, Address: 0x1ed5d1c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed5d90
void button_img_init(_anon5* img)
{
	// Line 976, Address: 0x1ed5d90, Func Offset: 0
	// Line 977, Address: 0x1ed5d94, Func Offset: 0x4
	// Line 976, Address: 0x1ed5d98, Func Offset: 0x8
	// Line 977, Address: 0x1ed5da0, Func Offset: 0x10
	// Line 978, Address: 0x1ed5da8, Func Offset: 0x18
	// Line 979, Address: 0x1ed5dc4, Func Offset: 0x34
	// Line 980, Address: 0x1ed5de0, Func Offset: 0x50
	// Line 981, Address: 0x1ed5df0, Func Offset: 0x60
	// Line 982, Address: 0x1ed5e08, Func Offset: 0x78
	// Func End, Address: 0x1ed5e18, Func Offset: 0x88
}

// 
// Start address: 0x1ed5e20
void asterisk_init(_anon5* img)
{
	// Line 985, Address: 0x1ed5e20, Func Offset: 0
	// Line 986, Address: 0x1ed5e24, Func Offset: 0x4
	// Line 985, Address: 0x1ed5e28, Func Offset: 0x8
	// Line 986, Address: 0x1ed5e30, Func Offset: 0x10
	// Line 987, Address: 0x1ed5e38, Func Offset: 0x18
	// Line 988, Address: 0x1ed5e54, Func Offset: 0x34
	// Line 989, Address: 0x1ed5e70, Func Offset: 0x50
	// Line 990, Address: 0x1ed5e80, Func Offset: 0x60
	// Line 991, Address: 0x1ed5e98, Func Offset: 0x78
	// Line 992, Address: 0x1ed5ea8, Func Offset: 0x88
	// Line 993, Address: 0x1ed5ec4, Func Offset: 0xa4
	// Func End, Address: 0x1ed5ed4, Func Offset: 0xb4
}

// 
// Start address: 0x1ed5ee0
void cursor_init(_anon5* img, float x, float y)
{
	// Line 996, Address: 0x1ed5ee0, Func Offset: 0
	// Line 997, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 996, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 997, Address: 0x1ed5f00, Func Offset: 0x20
	// Line 998, Address: 0x1ed5f08, Func Offset: 0x28
	// Line 999, Address: 0x1ed5f24, Func Offset: 0x44
	// Line 1000, Address: 0x1ed5f34, Func Offset: 0x54
	// Line 1002, Address: 0x1ed5f4c, Func Offset: 0x6c
	// Line 1003, Address: 0x1ed5f5c, Func Offset: 0x7c
	// Line 1004, Address: 0x1ed5f78, Func Offset: 0x98
	// Line 1005, Address: 0x1ed5f88, Func Offset: 0xa8
	// Line 1006, Address: 0x1ed5fa4, Func Offset: 0xc4
	// Func End, Address: 0x1ed5fbc, Func Offset: 0xdc
	// Line 173, Address: 0x1ed5ee0, Func Offset: 0
	// Line 174, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 173, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 174, Address: 0x1ed5ef0, Func Offset: 0x10
	// Line 178, Address: 0x1ed5efc, Func Offset: 0x1c
	// Line 177, Address: 0x1ed5f00, Func Offset: 0x20
	// Line 178, Address: 0x1ed5f04, Func Offset: 0x24
	// Func End, Address: 0x1ed5f10, Func Offset: 0x30
	// Line 826, Address: 0x1ed5ee0, Func Offset: 0
	// Line 828, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 826, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 828, Address: 0x1ed5ef4, Func Offset: 0x14
	// Line 829, Address: 0x1ed5efc, Func Offset: 0x1c
	// Line 830, Address: 0x1ed5f28, Func Offset: 0x48
	// Line 832, Address: 0x1ed5f30, Func Offset: 0x50
	// Line 831, Address: 0x1ed5f34, Func Offset: 0x54
	// Line 832, Address: 0x1ed5f38, Func Offset: 0x58
	// Func End, Address: 0x1ed5f44, Func Offset: 0x64
}

// 
// Start address: 0x1ed5fc0
void bg_draw(_anon5* img)
{
	_anon1* tex;
	unsigned int cbp;
	// Line 294, Address: 0x1ed5fc0, Func Offset: 0
	// Line 299, Address: 0x1ed5fc4, Func Offset: 0x4
	// Line 294, Address: 0x1ed5fc8, Func Offset: 0x8
	// Line 295, Address: 0x1ed5fe0, Func Offset: 0x20
	// Line 294, Address: 0x1ed5fe4, Func Offset: 0x24
	// Line 299, Address: 0x1ed5fe8, Func Offset: 0x28
	// Line 296, Address: 0x1ed5fec, Func Offset: 0x2c
	// Line 299, Address: 0x1ed5ff0, Func Offset: 0x30
	// Line 301, Address: 0x1ed6030, Func Offset: 0x70
	// Line 302, Address: 0x1ed6038, Func Offset: 0x78
	// Line 303, Address: 0x1ed6040, Func Offset: 0x80
	// Line 304, Address: 0x1ed6048, Func Offset: 0x88
	// Line 305, Address: 0x1ed6058, Func Offset: 0x98
	// Line 307, Address: 0x1ed6060, Func Offset: 0xa0
	// Line 308, Address: 0x1ed6074, Func Offset: 0xb4
	// Line 309, Address: 0x1ed6078, Func Offset: 0xb8
	// Line 311, Address: 0x1ed6080, Func Offset: 0xc0
	// Line 314, Address: 0x1ed608c, Func Offset: 0xcc
	// Line 315, Address: 0x1ed6090, Func Offset: 0xd0
	// Line 318, Address: 0x1ed60a0, Func Offset: 0xe0
	// Line 320, Address: 0x1ed60a8, Func Offset: 0xe8
	// Line 322, Address: 0x1ed60ac, Func Offset: 0xec
	// Line 324, Address: 0x1ed60b4, Func Offset: 0xf4
	// Line 325, Address: 0x1ed60b8, Func Offset: 0xf8
	// Line 326, Address: 0x1ed60dc, Func Offset: 0x11c
	// Line 327, Address: 0x1ed60f8, Func Offset: 0x138
	// Line 328, Address: 0x1ed6100, Func Offset: 0x140
	// Line 331, Address: 0x1ed6118, Func Offset: 0x158
	// Line 333, Address: 0x1ed6120, Func Offset: 0x160
	// Line 334, Address: 0x1ed613c, Func Offset: 0x17c
	// Line 336, Address: 0x1ed6148, Func Offset: 0x188
	// Line 338, Address: 0x1ed6150, Func Offset: 0x190
	// Line 341, Address: 0x1ed6158, Func Offset: 0x198
	// Line 342, Address: 0x1ed6174, Func Offset: 0x1b4
	// Line 343, Address: 0x1ed617c, Func Offset: 0x1bc
	// Line 344, Address: 0x1ed6194, Func Offset: 0x1d4
	// Line 346, Address: 0x1ed6198, Func Offset: 0x1d8
	// Line 347, Address: 0x1ed61a4, Func Offset: 0x1e4
	// Line 350, Address: 0x1ed61b0, Func Offset: 0x1f0
	// Line 352, Address: 0x1ed61c0, Func Offset: 0x200
	// Line 355, Address: 0x1ed61d4, Func Offset: 0x214
	// Line 360, Address: 0x1ed61f0, Func Offset: 0x230
	// Line 361, Address: 0x1ed61f4, Func Offset: 0x234
	// Line 363, Address: 0x1ed61fc, Func Offset: 0x23c
	// Line 365, Address: 0x1ed6204, Func Offset: 0x244
	// Line 367, Address: 0x1ed6208, Func Offset: 0x248
	// Line 368, Address: 0x1ed6244, Func Offset: 0x284
	// Line 369, Address: 0x1ed6248, Func Offset: 0x288
	// Line 371, Address: 0x1ed6250, Func Offset: 0x290
	// Line 374, Address: 0x1ed6258, Func Offset: 0x298
	// Line 375, Address: 0x1ed627c, Func Offset: 0x2bc
	// Line 376, Address: 0x1ed6298, Func Offset: 0x2d8
	// Line 377, Address: 0x1ed629c, Func Offset: 0x2dc
	// Line 382, Address: 0x1ed62a0, Func Offset: 0x2e0
	// Line 383, Address: 0x1ed62a4, Func Offset: 0x2e4
	// Func End, Address: 0x1ed62c4, Func Offset: 0x304
	// Line 1009, Address: 0x1ed5fc0, Func Offset: 0
	// Line 1010, Address: 0x1ed5fc4, Func Offset: 0x4
	// Line 1009, Address: 0x1ed5fc8, Func Offset: 0x8
	// Line 1010, Address: 0x1ed5fcc, Func Offset: 0xc
	// Line 1009, Address: 0x1ed5fd0, Func Offset: 0x10
	// Line 1010, Address: 0x1ed5fdc, Func Offset: 0x1c
	// Line 1011, Address: 0x1ed5fec, Func Offset: 0x2c
	// Line 1013, Address: 0x1ed6000, Func Offset: 0x40
	// Line 1014, Address: 0x1ed6018, Func Offset: 0x58
	// Line 1015, Address: 0x1ed602c, Func Offset: 0x6c
	// Line 1016, Address: 0x1ed6038, Func Offset: 0x78
	// Func End, Address: 0x1ed6050, Func Offset: 0x90
}

// 
// Start address: 0x1ed6050
void button_img_draw(_anon5* img, int pushed_number)
{
	_anon1* tex;
	unsigned int cbp;
	int i;
	_anon8* b;
	float u;
	float v;
	// Line 1807, Address: 0x1ed6050, Func Offset: 0
	// Line 1809, Address: 0x1ed6054, Func Offset: 0x4
	// Line 1807, Address: 0x1ed6058, Func Offset: 0x8
	// Line 1809, Address: 0x1ed605c, Func Offset: 0xc
	// Line 1807, Address: 0x1ed6060, Func Offset: 0x10
	// Line 1809, Address: 0x1ed6064, Func Offset: 0x14
	// Line 1807, Address: 0x1ed6068, Func Offset: 0x18
	// Line 1809, Address: 0x1ed6070, Func Offset: 0x20
	// Line 1808, Address: 0x1ed6074, Func Offset: 0x24
	// Line 1816, Address: 0x1ed607c, Func Offset: 0x2c
	// Line 1817, Address: 0x1ed6090, Func Offset: 0x40
	// Line 1818, Address: 0x1ed609c, Func Offset: 0x4c
	// Line 1819, Address: 0x1ed60ac, Func Offset: 0x5c
	// Line 1820, Address: 0x1ed60c0, Func Offset: 0x70
	// Line 1822, Address: 0x1ed60c8, Func Offset: 0x78
	// Line 1825, Address: 0x1ed60d0, Func Offset: 0x80
	// Line 1824, Address: 0x1ed60d8, Func Offset: 0x88
	// Line 1825, Address: 0x1ed60dc, Func Offset: 0x8c
	// Func End, Address: 0x1ed60e8, Func Offset: 0x98
	// Line 1019, Address: 0x1ed6050, Func Offset: 0
	// Line 1020, Address: 0x1ed6054, Func Offset: 0x4
	// Line 1019, Address: 0x1ed6058, Func Offset: 0x8
	// Line 1020, Address: 0x1ed6074, Func Offset: 0x24
	// Line 1019, Address: 0x1ed6078, Func Offset: 0x28
	// Line 1020, Address: 0x1ed607c, Func Offset: 0x2c
	// Line 1021, Address: 0x1ed608c, Func Offset: 0x3c
	// Line 1025, Address: 0x1ed609c, Func Offset: 0x4c
	// Line 1021, Address: 0x1ed60a0, Func Offset: 0x50
	// Line 1023, Address: 0x1ed60a4, Func Offset: 0x54
	// Line 1025, Address: 0x1ed60a8, Func Offset: 0x58
	// Line 1026, Address: 0x1ed60c0, Func Offset: 0x70
	// Line 1028, Address: 0x1ed60d4, Func Offset: 0x84
	// Line 1032, Address: 0x1ed60d8, Func Offset: 0x88
	// Line 1030, Address: 0x1ed60e0, Func Offset: 0x90
	// Line 1032, Address: 0x1ed60e8, Func Offset: 0x98
	// Line 1029, Address: 0x1ed60ec, Func Offset: 0x9c
	// Line 1032, Address: 0x1ed60f0, Func Offset: 0xa0
	// Line 1034, Address: 0x1ed6114, Func Offset: 0xc4
	// Line 1036, Address: 0x1ed611c, Func Offset: 0xcc
	// Line 1039, Address: 0x1ed6120, Func Offset: 0xd0
	// Line 1041, Address: 0x1ed612c, Func Offset: 0xdc
	// Line 1042, Address: 0x1ed6144, Func Offset: 0xf4
	// Line 1045, Address: 0x1ed6150, Func Offset: 0x100
	// Line 1046, Address: 0x1ed6174, Func Offset: 0x124
	// Line 1047, Address: 0x1ed6178, Func Offset: 0x128
	// Line 1048, Address: 0x1ed61b4, Func Offset: 0x164
	// Line 1050, Address: 0x1ed61c0, Func Offset: 0x170
	// Line 1051, Address: 0x1ed61d0, Func Offset: 0x180
	// Func End, Address: 0x1ed61f4, Func Offset: 0x1a4
}

// 
// Start address: 0x1ed6200
void asterisk_draw(_anon5* img, int ast_num)
{
	_anon1* tex;
	unsigned int cbp;
	int i;
	// Line 1054, Address: 0x1ed6200, Func Offset: 0
	// Line 1055, Address: 0x1ed621c, Func Offset: 0x1c
	// Line 1056, Address: 0x1ed6224, Func Offset: 0x24
	// Line 1057, Address: 0x1ed6238, Func Offset: 0x38
	// Line 1060, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 1061, Address: 0x1ed6264, Func Offset: 0x64
	// Line 1063, Address: 0x1ed6278, Func Offset: 0x78
	// Line 1064, Address: 0x1ed6288, Func Offset: 0x88
	// Line 1069, Address: 0x1ed62c8, Func Offset: 0xc8
	// Line 1072, Address: 0x1ed62e0, Func Offset: 0xe0
	// Line 1073, Address: 0x1ed62ec, Func Offset: 0xec
	// Line 1074, Address: 0x1ed62fc, Func Offset: 0xfc
	// Line 1075, Address: 0x1ed6300, Func Offset: 0x100
	// Func End, Address: 0x1ed631c, Func Offset: 0x11c
	// Line 1132, Address: 0x1ed6200, Func Offset: 0
	// Line 1133, Address: 0x1ed6204, Func Offset: 0x4
	// Line 1132, Address: 0x1ed6208, Func Offset: 0x8
	// Line 1133, Address: 0x1ed620c, Func Offset: 0xc
	// Line 1132, Address: 0x1ed6210, Func Offset: 0x10
	// Line 1133, Address: 0x1ed6214, Func Offset: 0x14
	// Line 1134, Address: 0x1ed6220, Func Offset: 0x20
	// Line 1136, Address: 0x1ed6230, Func Offset: 0x30
	// Line 1137, Address: 0x1ed623c, Func Offset: 0x3c
	// Func End, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 269, Address: 0x1ed6200, Func Offset: 0
	// Line 270, Address: 0x1ed620c, Func Offset: 0xc
	// Line 272, Address: 0x1ed6210, Func Offset: 0x10
	// Line 273, Address: 0x1ed621c, Func Offset: 0x1c
	// Line 274, Address: 0x1ed6224, Func Offset: 0x24
	// Line 275, Address: 0x1ed6234, Func Offset: 0x34
	// Line 276, Address: 0x1ed6244, Func Offset: 0x44
	// Line 277, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 278, Address: 0x1ed6254, Func Offset: 0x54
	// Line 279, Address: 0x1ed6268, Func Offset: 0x68
	// Line 280, Address: 0x1ed627c, Func Offset: 0x7c
	// Line 285, Address: 0x1ed6284, Func Offset: 0x84
	// Line 287, Address: 0x1ed6288, Func Offset: 0x88
	// Line 286, Address: 0x1ed6290, Func Offset: 0x90
	// Line 287, Address: 0x1ed6294, Func Offset: 0x94
	// Func End, Address: 0x1ed629c, Func Offset: 0x9c
}

// 
// Start address: 0x1ed6320
void cursor_draw(_anon5* img)
{
	_anon1* tex;
	unsigned int cbp;
	// Line 1078, Address: 0x1ed6320, Func Offset: 0
	// Line 1079, Address: 0x1ed6324, Func Offset: 0x4
	// Line 1078, Address: 0x1ed6328, Func Offset: 0x8
	// Line 1079, Address: 0x1ed632c, Func Offset: 0xc
	// Line 1078, Address: 0x1ed6330, Func Offset: 0x10
	// Line 1079, Address: 0x1ed633c, Func Offset: 0x1c
	// Line 1080, Address: 0x1ed634c, Func Offset: 0x2c
	// Line 1082, Address: 0x1ed6360, Func Offset: 0x40
	// Line 1083, Address: 0x1ed6378, Func Offset: 0x58
	// Line 1084, Address: 0x1ed638c, Func Offset: 0x6c
	// Line 1085, Address: 0x1ed6398, Func Offset: 0x78
	// Func End, Address: 0x1ed63b0, Func Offset: 0x90
	// Line 1407, Address: 0x1ed6320, Func Offset: 0
	// Line 1410, Address: 0x1ed6324, Func Offset: 0x4
	// Line 1407, Address: 0x1ed6328, Func Offset: 0x8
	// Line 1410, Address: 0x1ed6338, Func Offset: 0x18
	// Line 1412, Address: 0x1ed6360, Func Offset: 0x40
	// Line 1413, Address: 0x1ed6370, Func Offset: 0x50
	// Line 1418, Address: 0x1ed6384, Func Offset: 0x64
	// Line 1419, Address: 0x1ed638c, Func Offset: 0x6c
	// Line 1420, Address: 0x1ed6390, Func Offset: 0x70
	// Line 1421, Address: 0x1ed639c, Func Offset: 0x7c
	// Line 1423, Address: 0x1ed63a0, Func Offset: 0x80
	// Line 1424, Address: 0x1ed63bc, Func Offset: 0x9c
	// Line 1425, Address: 0x1ed63c4, Func Offset: 0xa4
	// Line 1427, Address: 0x1ed63d0, Func Offset: 0xb0
	// Line 1428, Address: 0x1ed63dc, Func Offset: 0xbc
	// Line 1427, Address: 0x1ed63e0, Func Offset: 0xc0
	// Line 1428, Address: 0x1ed63e4, Func Offset: 0xc4
	// Line 1427, Address: 0x1ed63f0, Func Offset: 0xd0
	// Line 1428, Address: 0x1ed63f8, Func Offset: 0xd8
	// Line 1429, Address: 0x1ed6404, Func Offset: 0xe4
	// Line 1430, Address: 0x1ed6408, Func Offset: 0xe8
	// Line 1429, Address: 0x1ed640c, Func Offset: 0xec
	// Line 1432, Address: 0x1ed6414, Func Offset: 0xf4
	// Line 1433, Address: 0x1ed6418, Func Offset: 0xf8
	// Line 1434, Address: 0x1ed641c, Func Offset: 0xfc
	// Func End, Address: 0x1ed6430, Func Offset: 0x110
}

// 
// Start address: 0x1ed63b0
void cursor_set_xy(_anon5* img, float x, float y)
{
	// Line 1089, Address: 0x1ed63b0, Func Offset: 0
	// Func End, Address: 0x1ed63c4, Func Offset: 0x14
}

// 
// Start address: 0x1ed63d0
int ev_water0_password_dark_exec(sfObj* obj)
{
	// Line 1100, Address: 0x1ed63d0, Func Offset: 0
	// Func End, Address: 0x1ed63d8, Func Offset: 0x8
}

// 
// Start address: 0x1ed63e0
int ev_water0_password_dark_draw()
{
	// Line 450, Address: 0x1ed63e0, Func Offset: 0
	// Func End, Address: 0x1ed63e8, Func Offset: 0x8
	// Line 1106, Address: 0x1ed63e0, Func Offset: 0
	// Func End, Address: 0x1ed63e8, Func Offset: 0x8
}

// 
// Start address: 0x1ed63f0
int ev_water0_password_dark_end()
{
	// Line 456, Address: 0x1ed63f0, Func Offset: 0
	// Line 458, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 460, Address: 0x1ed6400, Func Offset: 0x10
	// Line 459, Address: 0x1ed6404, Func Offset: 0x14
	// Line 460, Address: 0x1ed6408, Func Offset: 0x18
	// Func End, Address: 0x1ed6410, Func Offset: 0x20
	// Line 139, Address: 0x1ed63f0, Func Offset: 0
	// Func End, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 1110, Address: 0x1ed63f0, Func Offset: 0
	// Line 1111, Address: 0x1ed63f4, Func Offset: 0x4
	// Line 1110, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 1112, Address: 0x1ed6404, Func Offset: 0x14
	// Func End, Address: 0x1ed640c, Func Offset: 0x1c
	// Line 977, Address: 0x1ed63f0, Func Offset: 0
	// Line 979, Address: 0x1ed63f4, Func Offset: 0x4
	// Line 977, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 979, Address: 0x1ed63fc, Func Offset: 0xc
	// Line 980, Address: 0x1ed6408, Func Offset: 0x18
	// Line 981, Address: 0x1ed6410, Func Offset: 0x20
	// Line 982, Address: 0x1ed641c, Func Offset: 0x2c
	// Line 983, Address: 0x1ed6428, Func Offset: 0x38
	// Line 984, Address: 0x1ed6434, Func Offset: 0x44
	// Line 986, Address: 0x1ed6438, Func Offset: 0x48
	// Line 985, Address: 0x1ed643c, Func Offset: 0x4c
	// Line 986, Address: 0x1ed6440, Func Offset: 0x50
	// Func End, Address: 0x1ed6448, Func Offset: 0x58
}

// 
// Start address: 0x1ed6410
void pausefunc_ev_panel_init()
{
	// Line 513, Address: 0x1ed6410, Func Offset: 0
	// Func End, Address: 0x1ed6418, Func Offset: 0x8
	// Line 1118, Address: 0x1ed6410, Func Offset: 0
	// Line 1126, Address: 0x1ed6414, Func Offset: 0x4
	// Line 1118, Address: 0x1ed6418, Func Offset: 0x8
	// Line 1126, Address: 0x1ed641c, Func Offset: 0xc
	// Line 1129, Address: 0x1ed642c, Func Offset: 0x1c
	// Line 1130, Address: 0x1ed6448, Func Offset: 0x38
	// Line 1132, Address: 0x1ed6464, Func Offset: 0x54
	// Line 1137, Address: 0x1ed6468, Func Offset: 0x58
	// Line 1132, Address: 0x1ed646c, Func Offset: 0x5c
	// Line 1133, Address: 0x1ed6470, Func Offset: 0x60
	// Line 1137, Address: 0x1ed6478, Func Offset: 0x68
	// Line 1133, Address: 0x1ed647c, Func Offset: 0x6c
	// Line 1134, Address: 0x1ed6480, Func Offset: 0x70
	// Line 1137, Address: 0x1ed6484, Func Offset: 0x74
	// Line 1138, Address: 0x1ed648c, Func Offset: 0x7c
	// Line 1139, Address: 0x1ed6498, Func Offset: 0x88
	// Line 1140, Address: 0x1ed64a4, Func Offset: 0x94
	// Line 1141, Address: 0x1ed64c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed64cc, Func Offset: 0xbc
}

// 
// Start address: 0x1ed64d0
void pausefunc_ev_panel_draw()
{
	int ast_num;
	_anon6* wk;
	int i;
	int val;
	int mes_id;
	char buf[16];
	// Line 1144, Address: 0x1ed64d0, Func Offset: 0
	// Line 1151, Address: 0x1ed64d4, Func Offset: 0x4
	// Line 1144, Address: 0x1ed64d8, Func Offset: 0x8
	// Line 1151, Address: 0x1ed64dc, Func Offset: 0xc
	// Line 1144, Address: 0x1ed64e0, Func Offset: 0x10
	// Line 1146, Address: 0x1ed64e8, Func Offset: 0x18
	// Line 1144, Address: 0x1ed64ec, Func Offset: 0x1c
	// Line 1147, Address: 0x1ed64f0, Func Offset: 0x20
	// Line 1144, Address: 0x1ed64f4, Func Offset: 0x24
	// Line 1147, Address: 0x1ed64f8, Func Offset: 0x28
	// Line 1151, Address: 0x1ed64fc, Func Offset: 0x2c
	// Line 1152, Address: 0x1ed6504, Func Offset: 0x34
	// Line 1154, Address: 0x1ed6518, Func Offset: 0x48
	// Line 1156, Address: 0x1ed652c, Func Offset: 0x5c
	// Line 1159, Address: 0x1ed653c, Func Offset: 0x6c
	// Line 1160, Address: 0x1ed6554, Func Offset: 0x84
	// Line 1161, Address: 0x1ed6564, Func Offset: 0x94
	// Line 1167, Address: 0x1ed6570, Func Offset: 0xa0
	// Line 1169, Address: 0x1ed6580, Func Offset: 0xb0
	// Line 1170, Address: 0x1ed6588, Func Offset: 0xb8
	// Line 1172, Address: 0x1ed6594, Func Offset: 0xc4
	// Line 1173, Address: 0x1ed65a0, Func Offset: 0xd0
	// Line 1174, Address: 0x1ed65ac, Func Offset: 0xdc
	// Line 1177, Address: 0x1ed65b0, Func Offset: 0xe0
	// Line 1178, Address: 0x1ed65bc, Func Offset: 0xec
	// Line 1181, Address: 0x1ed65c8, Func Offset: 0xf8
	// Line 1178, Address: 0x1ed65d0, Func Offset: 0x100
	// Line 1181, Address: 0x1ed65d4, Func Offset: 0x104
	// Line 1182, Address: 0x1ed65dc, Func Offset: 0x10c
	// Line 1184, Address: 0x1ed65e0, Func Offset: 0x110
	// Line 1185, Address: 0x1ed65ec, Func Offset: 0x11c
	// Line 1186, Address: 0x1ed65fc, Func Offset: 0x12c
	// Line 1188, Address: 0x1ed6600, Func Offset: 0x130
	// Line 1189, Address: 0x1ed6610, Func Offset: 0x140
	// Line 1190, Address: 0x1ed661c, Func Offset: 0x14c
	// Line 1191, Address: 0x1ed6624, Func Offset: 0x154
	// Func End, Address: 0x1ed6644, Func Offset: 0x174
	// Line 1199, Address: 0x1ed64d0, Func Offset: 0
	// Line 1200, Address: 0x1ed64d8, Func Offset: 0x8
	// Line 1202, Address: 0x1ed64e0, Func Offset: 0x10
	// Line 1201, Address: 0x1ed64e4, Func Offset: 0x14
	// Line 1202, Address: 0x1ed64e8, Func Offset: 0x18
	// Func End, Address: 0x1ed64f0, Func Offset: 0x20
}

// 
// Start address: 0x1ed6650
void pausefunc_ev_panel_main()
{
	int f_rtv;
	float x;
	float y;
	_anon6* wk;
	int id;
	// Line 693, Address: 0x1ed6650, Func Offset: 0
	// Line 694, Address: 0x1ed6658, Func Offset: 0x8
	// Line 695, Address: 0x1ed6660, Func Offset: 0x10
	// Line 698, Address: 0x1ed6668, Func Offset: 0x18
	// Line 697, Address: 0x1ed666c, Func Offset: 0x1c
	// Line 698, Address: 0x1ed6670, Func Offset: 0x20
	// Func End, Address: 0x1ed6678, Func Offset: 0x28
	// Line 1194, Address: 0x1ed6650, Func Offset: 0
	// Line 1196, Address: 0x1ed6654, Func Offset: 0x4
	// Line 1194, Address: 0x1ed6658, Func Offset: 0x8
	// Line 1196, Address: 0x1ed6660, Func Offset: 0x10
	// Line 1202, Address: 0x1ed6668, Func Offset: 0x18
	// Line 1199, Address: 0x1ed666c, Func Offset: 0x1c
	// Line 1202, Address: 0x1ed6670, Func Offset: 0x20
	// Line 1197, Address: 0x1ed6678, Func Offset: 0x28
	// Line 1199, Address: 0x1ed667c, Func Offset: 0x2c
	// Line 1202, Address: 0x1ed6680, Func Offset: 0x30
	// Line 1204, Address: 0x1ed66b8, Func Offset: 0x68
	// Line 1205, Address: 0x1ed66dc, Func Offset: 0x8c
	// Line 1206, Address: 0x1ed66e4, Func Offset: 0x94
	// Line 1209, Address: 0x1ed66f4, Func Offset: 0xa4
	// Line 1210, Address: 0x1ed66f8, Func Offset: 0xa8
	// Line 1211, Address: 0x1ed6708, Func Offset: 0xb8
	// Line 1213, Address: 0x1ed6714, Func Offset: 0xc4
	// Line 1215, Address: 0x1ed671c, Func Offset: 0xcc
	// Line 1217, Address: 0x1ed6720, Func Offset: 0xd0
	// Line 1218, Address: 0x1ed6730, Func Offset: 0xe0
	// Line 1220, Address: 0x1ed6740, Func Offset: 0xf0
	// Line 1221, Address: 0x1ed6754, Func Offset: 0x104
	// Line 1223, Address: 0x1ed6760, Func Offset: 0x110
	// Line 1225, Address: 0x1ed676c, Func Offset: 0x11c
	// Line 1227, Address: 0x1ed6788, Func Offset: 0x138
	// Line 1228, Address: 0x1ed6790, Func Offset: 0x140
	// Line 1230, Address: 0x1ed6794, Func Offset: 0x144
	// Line 1247, Address: 0x1ed6798, Func Offset: 0x148
	// Line 1249, Address: 0x1ed67a0, Func Offset: 0x150
	// Line 1250, Address: 0x1ed67a8, Func Offset: 0x158
	// Line 1252, Address: 0x1ed67b0, Func Offset: 0x160
	// Line 1256, Address: 0x1ed67c4, Func Offset: 0x174
	// Line 1258, Address: 0x1ed67e0, Func Offset: 0x190
	// Line 1259, Address: 0x1ed67e4, Func Offset: 0x194
	// Line 1264, Address: 0x1ed67f0, Func Offset: 0x1a0
	// Line 1269, Address: 0x1ed680c, Func Offset: 0x1bc
	// Line 1270, Address: 0x1ed6810, Func Offset: 0x1c0
	// Line 1271, Address: 0x1ed6814, Func Offset: 0x1c4
	// Line 1273, Address: 0x1ed6820, Func Offset: 0x1d0
	// Line 1276, Address: 0x1ed6828, Func Offset: 0x1d8
	// Line 1281, Address: 0x1ed6880, Func Offset: 0x230
	// Line 1283, Address: 0x1ed6890, Func Offset: 0x240
	// Line 1284, Address: 0x1ed68b4, Func Offset: 0x264
	// Line 1286, Address: 0x1ed68bc, Func Offset: 0x26c
	// Line 1288, Address: 0x1ed68c4, Func Offset: 0x274
	// Line 1290, Address: 0x1ed68c8, Func Offset: 0x278
	// Line 1291, Address: 0x1ed68d8, Func Offset: 0x288
	// Line 1292, Address: 0x1ed68e0, Func Offset: 0x290
	// Line 1293, Address: 0x1ed68e8, Func Offset: 0x298
	// Line 1297, Address: 0x1ed68f0, Func Offset: 0x2a0
	// Line 1299, Address: 0x1ed68fc, Func Offset: 0x2ac
	// Line 1300, Address: 0x1ed6910, Func Offset: 0x2c0
	// Line 1301, Address: 0x1ed6918, Func Offset: 0x2c8
	// Line 1303, Address: 0x1ed691c, Func Offset: 0x2cc
	// Line 1306, Address: 0x1ed6920, Func Offset: 0x2d0
	// Line 1307, Address: 0x1ed6928, Func Offset: 0x2d8
	// Func End, Address: 0x1ed693c, Func Offset: 0x2ec
}

// 
// Start address: 0x1ed6940
int ev_water0_password_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 1313, Address: 0x1ed6940, Func Offset: 0
	// Line 1314, Address: 0x1ed6950, Func Offset: 0x10
	// Line 1316, Address: 0x1ed695c, Func Offset: 0x1c
	// Line 1318, Address: 0x1ed696c, Func Offset: 0x2c
	// Line 1319, Address: 0x1ed6978, Func Offset: 0x38
	// Line 1320, Address: 0x1ed6988, Func Offset: 0x48
	// Line 1323, Address: 0x1ed6998, Func Offset: 0x58
	// Line 1324, Address: 0x1ed69a0, Func Offset: 0x60
	// Line 1326, Address: 0x1ed69a8, Func Offset: 0x68
	// Line 1329, Address: 0x1ed69b0, Func Offset: 0x70
	// Line 1330, Address: 0x1ed69bc, Func Offset: 0x7c
	// Line 1333, Address: 0x1ed69c0, Func Offset: 0x80
	// Line 1332, Address: 0x1ed69c8, Func Offset: 0x88
	// Line 1333, Address: 0x1ed69cc, Func Offset: 0x8c
	// Func End, Address: 0x1ed69d8, Func Offset: 0x98
}

// 
// Start address: 0x1ed69e0
int ev_water0_password_exec(sfObj* obj)
{
	int rtv;
	// Line 36, Address: 0x1ed69e0, Func Offset: 0
	// Line 37, Address: 0x1ed69f0, Func Offset: 0x10
	// Func End, Address: 0x1ed69f8, Func Offset: 0x18
	// Line 1336, Address: 0x1ed69e0, Func Offset: 0
	// Line 1339, Address: 0x1ed69e4, Func Offset: 0x4
	// Line 1336, Address: 0x1ed69e8, Func Offset: 0x8
	// Line 1339, Address: 0x1ed69f8, Func Offset: 0x18
	// Line 1341, Address: 0x1ed6a28, Func Offset: 0x48
	// Line 1342, Address: 0x1ed6a4c, Func Offset: 0x6c
	// Line 1346, Address: 0x1ed6a58, Func Offset: 0x78
	// Line 1347, Address: 0x1ed6a68, Func Offset: 0x88
	// Line 1348, Address: 0x1ed6a70, Func Offset: 0x90
	// Line 1349, Address: 0x1ed6a78, Func Offset: 0x98
	// Line 1351, Address: 0x1ed6a84, Func Offset: 0xa4
	// Line 1353, Address: 0x1ed6a8c, Func Offset: 0xac
	// Line 1354, Address: 0x1ed6a90, Func Offset: 0xb0
	// Line 1357, Address: 0x1ed6aa0, Func Offset: 0xc0
	// Line 1359, Address: 0x1ed6aa8, Func Offset: 0xc8
	// Line 1362, Address: 0x1ed6ab8, Func Offset: 0xd8
	// Line 1364, Address: 0x1ed6ac0, Func Offset: 0xe0
	// Line 1365, Address: 0x1ed6ae4, Func Offset: 0x104
	// Line 1368, Address: 0x1ed6aec, Func Offset: 0x10c
	// Line 1370, Address: 0x1ed6af4, Func Offset: 0x114
	// Line 1371, Address: 0x1ed6af8, Func Offset: 0x118
	// Line 1372, Address: 0x1ed6b08, Func Offset: 0x128
	// Line 1375, Address: 0x1ed6b0c, Func Offset: 0x12c
	// Line 1377, Address: 0x1ed6b10, Func Offset: 0x130
	// Line 1378, Address: 0x1ed6b14, Func Offset: 0x134
	// Func End, Address: 0x1ed6b28, Func Offset: 0x148
}

// 
// Start address: 0x1ed6b30
int ev_water0_password_draw()
{
	// Line 1383, Address: 0x1ed6b30, Func Offset: 0
	// Func End, Address: 0x1ed6b38, Func Offset: 0x8
}

// 
// Start address: 0x1ed6b40
int ev_water0_password_end()
{
	_anon6* wk;
	// Line 1386, Address: 0x1ed6b40, Func Offset: 0
	// Line 1390, Address: 0x1ed6b44, Func Offset: 0x4
	// Line 1386, Address: 0x1ed6b48, Func Offset: 0x8
	// Line 1390, Address: 0x1ed6b50, Func Offset: 0x10
	// Line 1387, Address: 0x1ed6b54, Func Offset: 0x14
	// Line 1390, Address: 0x1ed6b58, Func Offset: 0x18
	// Line 1391, Address: 0x1ed6b60, Func Offset: 0x20
	// Line 1394, Address: 0x1ed6b64, Func Offset: 0x24
	// Line 1391, Address: 0x1ed6b68, Func Offset: 0x28
	// Line 1394, Address: 0x1ed6b6c, Func Offset: 0x2c
	// Line 1391, Address: 0x1ed6b70, Func Offset: 0x30
	// Line 1394, Address: 0x1ed6b78, Func Offset: 0x38
	// Line 1395, Address: 0x1ed6b80, Func Offset: 0x40
	// Line 1396, Address: 0x1ed6b88, Func Offset: 0x48
	// Line 1397, Address: 0x1ed6b90, Func Offset: 0x50
	// Line 1399, Address: 0x1ed6b98, Func Offset: 0x58
	// Line 1400, Address: 0x1ed6bac, Func Offset: 0x6c
	// Line 1403, Address: 0x1ed6bb0, Func Offset: 0x70
	// Line 1406, Address: 0x1ed6bb8, Func Offset: 0x78
	// Line 1405, Address: 0x1ed6bbc, Func Offset: 0x7c
	// Line 1406, Address: 0x1ed6bc0, Func Offset: 0x80
	// Func End, Address: 0x1ed6bcc, Func Offset: 0x8c
}

