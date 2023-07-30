typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sfObj;
typedef struct _sfMenuObjRect;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _sfMenuObj;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _GAME_WORK;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef enum _enum_0 : unsigned char;
typedef enum _enum_1 : unsigned char;

typedef int(*type_7)(_anon3*);
typedef void(*type_9)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef int(*type_15)(_anon3*);
typedef void(*type_16)(sfObj*);
typedef int(*type_19)(_anon3*);
typedef int(*type_33)(_anon3*);
typedef int(*type_35)(_anon3*);

typedef sfObj* type_0[256];
typedef unsigned int type_1[4];
typedef _anon2* type_2[1024];
typedef float type_3[4];
typedef float type_4[4];
typedef float type_5[4][4];
typedef _anon12 type_6[3];
typedef int(*type_8)(_anon3*)[8];
typedef int type_10[1];
typedef _anon7 type_11[256];
typedef int type_13[1];
typedef int type_14[1];
typedef int type_17[1];
typedef char* type_18[6];
typedef int(*type_20)(_anon3*)[16];
typedef int type_21[1];
typedef int type_22[1];
typedef short type_23[2];
typedef _anon4* type_24[4];
typedef unsigned short type_25[2];
typedef char type_26[4];
typedef unsigned char type_27[4];
typedef unsigned char type_28[2];
typedef float type_29[1];
typedef int type_30[1];
typedef int type_31[1];
typedef _anon8 type_32[4];
typedef _anon4 type_34[4];

struct _anon0
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

struct _anon1
{
	_anon13 base;
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

struct _anon2
{
	float pos_x;
	float pos_y;
	float w;
	float h;
	float vx;
	float vy;
	float ax;
	float ay;
	float u0;
	float v0;
	float u1;
	float v1;
	unsigned char a;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	float scale;
	int timer;
	float work;
	char step;
	char s_step;
	char is_alive;
};

struct sfObj
{
	_anon7 fwork[256];
	_anon7* work;
	void(*func)(sfObj*);
	_anon7* work_pt0;
	_anon7* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon7* sys_work;
	_anon7* scene_work;
	_anon7* event_work;
	_anon7* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _anon3
{
	unsigned int timer;
	unsigned int blink_timer;
	unsigned short step;
	unsigned short step_s;
	unsigned int mes_color;
	int prologue_mes_y;
	unsigned char mes_alpha;
	unsigned char logo_upset;
	unsigned char alpha;
	unsigned char is_handle_end;
	unsigned char is_large_step;
	unsigned char bokasi_size;
	unsigned char is_noise;
	unsigned char is_bmg_ok;
	unsigned char is_prologue_end;
	unsigned char is_level_select;
	unsigned char is_rights_ok;
	unsigned char is_rights_drawn;
};

struct _anon4
{
	short x;
	short y;
	unsigned int abgr;
};

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

struct _anon5
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _anon6
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum_0 type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon5 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};

union _anon7
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

struct _anon8
{
	int mes_id;
	int nextstep;
	int is_debug_start;
	int is_continue;
	int e3_stage;
};

struct _anon9
{
	float depth;
	float speed;
	int wait;
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

struct _anon10
{
	_anon0* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon11
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon12
{
	int level;
	int mes_id;
};

struct _anon13
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon10 tex_data;
	_anon11 clut_data;
	unsigned short ot;
	unsigned short z;
};

enum _enum_0 : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

enum _enum_1 : unsigned char
{
	SF_MENU_UP,
	SF_MENU_DOWN,
	SF_MENU_LEFT,
	SF_MENU_RIGHT,
	SF_MENU_PAGEUP,
	SF_MENU_PAGEDOWN,
	SF_MENU_INVALID_CMD
};

_anon8 sel[4];
_anon12 level_menu[3];
int menu_select;
int e3_stage_select;
char pre_step;
char is_short_version;
int logo_particle_step;
_anon3 param;
_anon1 title_logo;
_anon1 title_large_logo;
_anon1 rights_img;
_anon1 trial_img;
int(*seq_tbl)(_anon3*)[16];
int(*short_seq_tbl)(_anon3*)[8];
int(*seq_draw_title_mes_comp)(_anon3*);
int(*seq_draw_title_handling)(_anon3*);
_anon6 menu_mng;
unsigned long* sg_packet_cur;
_anon9 fade_work;
_GAME_WORK gamew;
void(*sfObjFuncDummy)(sfObj*);
_anon2* logo_particle[1024];
sfObj* particle_obj[256];
int str_alpha;
_anon1 notice_img;
_anon1 title_bg;

void miscTitleE3StageSet(int stage);
int miscTitleE3StageGet();
void miscTitlePreStepSet(int step);
int miscTitlePreStepGet();
void mes0(int id, int x, int y);
void Mes(int id, int x, int y, unsigned int col);
float get_ratio(int cnt, int max_cnt);
float get_ratio2(int cnt, int max_cnt);
void draw_font_level_select();
void draw_font_title_select();
void draw_font();
void init_title_bg();
void init_title_logo();
void init_title_large_logo();
void init_rights_img();
void init_trial_img();
int seq_draw_title_init(_anon3* p);
int seq_draw_title_logo_fadein(_anon3* p);
int seq_draw_title_logo_wait(_anon3* p);
int seq_draw_title_logo_fadeout(_anon3* p);
int seq_draw_title_black_wait(_anon3* p);
int seq_draw_title_fadein(_anon3* p);
int seq_draw_title_wait(_anon3* p);
int seq_draw_title_title_logo_fadein(_anon3* p);
int seq_draw_title_mes_fadein(_anon3* p);
int seq_draw_title_mes_wait(_anon3* p);
int short_seq_title_init(_anon3* p);
int short_seq_title_fadein(_anon3* p);
int seq_draw_title_image_comp(_anon3* p);
int seq_draw_title_mes_focus_fadein(_anon3* p);
int seq_draw_title_mes_comp(_anon3* p);
int seq_draw_title_handling(_anon3* p);
int seq_draw_title_logo_large();
int seq_draw_title_end();
void seq_force_set();
void seq_force_end();
void font_blink();
int is_seq_handle_ok();
int is_rights_draw_ok();
int misc_TitleConstruct();
int misc_TitleHandle();
void draw_black_bg();
void draw_bg();
void draw_logo();
void draw_logo2(_anon4* v);
void draw_upset_logo();
void draw_large_logo();
void draw_rights();
void draw_trial();
void misc_TitleBaseDraw();
int TitleDrawMain();
void lp_init();
void lp_one_init(_anon2* p);
_anon2* lp_get_particle();
int lp_one_update(_anon2* p);
void lp_all_update();
void lp_all_die();
void lp_end();
void misc_TitleParticleInit();
void generate_mist();
void exec_mist();
void generate_leak_mist(int obj_num);
void exec_leak_mist();
void misc_TitleParticleExec();
void misc_TitleParticleDraw();
void misc_TitleParticleEnd();
void init_str_alpha();
int str_fadein();
int str_fadeout();
void init_notice();
void draw_notice();
int miscTitleNotice();

// 
// Start address: 0x164590
void miscTitleE3StageSet(int stage)
{
	// Line 335, Address: 0x164590, Func Offset: 0
	// Func End, Address: 0x16459c, Func Offset: 0xc
}

// 
// Start address: 0x1645a0
int miscTitleE3StageGet()
{
	// Line 336, Address: 0x1645a0, Func Offset: 0
	// Func End, Address: 0x1645ac, Func Offset: 0xc
}

// 
// Start address: 0x1645b0
void miscTitlePreStepSet(int step)
{
	// Line 340, Address: 0x1645b0, Func Offset: 0
	// Func End, Address: 0x1645bc, Func Offset: 0xc
}

// 
// Start address: 0x1645c0
int miscTitlePreStepGet()
{
	// Line 341, Address: 0x1645c0, Func Offset: 0
	// Func End, Address: 0x1645cc, Func Offset: 0xc
}

// 
// Start address: 0x1645d0
void mes0(int id, int x, int y)
{
	char* mes_str[6];
	// Line 484, Address: 0x1645d0, Func Offset: 0
	// Line 495, Address: 0x1645d4, Func Offset: 0x4
	// Line 484, Address: 0x1645d8, Func Offset: 0x8
	// Line 495, Address: 0x1645dc, Func Offset: 0xc
	// Line 484, Address: 0x1645e0, Func Offset: 0x10
	// Line 495, Address: 0x1645ec, Func Offset: 0x1c
	// Line 514, Address: 0x164610, Func Offset: 0x40
	// Line 517, Address: 0x164634, Func Offset: 0x64
	// Line 518, Address: 0x16463c, Func Offset: 0x6c
	// Line 519, Address: 0x164640, Func Offset: 0x70
	// Line 522, Address: 0x164664, Func Offset: 0x94
	// Line 523, Address: 0x16466c, Func Offset: 0x9c
	// Line 524, Address: 0x164670, Func Offset: 0xa0
	// Line 527, Address: 0x164694, Func Offset: 0xc4
	// Line 528, Address: 0x16469c, Func Offset: 0xcc
	// Line 529, Address: 0x1646a0, Func Offset: 0xd0
	// Line 533, Address: 0x1646bc, Func Offset: 0xec
	// Line 534, Address: 0x1646c0, Func Offset: 0xf0
	// Func End, Address: 0x1646d4, Func Offset: 0x104
}

// 
// Start address: 0x1646e0
void Mes(int id, int x, int y, unsigned int col)
{
	// Line 537, Address: 0x1646e0, Func Offset: 0
	// Line 538, Address: 0x164708, Func Offset: 0x28
	// Line 539, Address: 0x164710, Func Offset: 0x30
	// Line 540, Address: 0x164720, Func Offset: 0x40
	// Line 541, Address: 0x164728, Func Offset: 0x48
	// Line 542, Address: 0x164738, Func Offset: 0x58
	// Func End, Address: 0x164754, Func Offset: 0x74
}

// 
// Start address: 0x164760
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 547, Address: 0x164760, Func Offset: 0
	// Line 549, Address: 0x164764, Func Offset: 0x4
	// Line 550, Address: 0x164778, Func Offset: 0x18
	// Line 551, Address: 0x164790, Func Offset: 0x30
	// Line 552, Address: 0x164794, Func Offset: 0x34
	// Line 551, Address: 0x164798, Func Offset: 0x38
	// Line 552, Address: 0x16479c, Func Offset: 0x3c
	// Line 551, Address: 0x1647a0, Func Offset: 0x40
	// Line 552, Address: 0x1647ac, Func Offset: 0x4c
	// Line 553, Address: 0x1647d8, Func Offset: 0x78
	// Func End, Address: 0x1647e0, Func Offset: 0x80
}

// 
// Start address: 0x1647e0
float get_ratio2(int cnt, int max_cnt)
{
	float t;
	// Line 558, Address: 0x1647e0, Func Offset: 0
	// Line 560, Address: 0x1647e4, Func Offset: 0x4
	// Line 561, Address: 0x1647f8, Func Offset: 0x18
	// Line 562, Address: 0x164810, Func Offset: 0x30
	// Line 563, Address: 0x164828, Func Offset: 0x48
	// Line 564, Address: 0x164830, Func Offset: 0x50
	// Func End, Address: 0x164838, Func Offset: 0x58
}

// 
// Start address: 0x164840
void draw_font_level_select()
{
	int i;
	_anon3* p;
	// Line 569, Address: 0x164840, Func Offset: 0
	// Line 573, Address: 0x164844, Func Offset: 0x4
	// Line 569, Address: 0x164848, Func Offset: 0x8
	// Line 571, Address: 0x164858, Func Offset: 0x18
	// Line 569, Address: 0x16485c, Func Offset: 0x1c
	// Line 573, Address: 0x164860, Func Offset: 0x20
	// Line 574, Address: 0x16486c, Func Offset: 0x2c
	// Line 575, Address: 0x164880, Func Offset: 0x40
	// Line 576, Address: 0x164890, Func Offset: 0x50
	// Line 577, Address: 0x1648a4, Func Offset: 0x64
	// Line 579, Address: 0x1648b0, Func Offset: 0x70
	// Line 581, Address: 0x1648c8, Func Offset: 0x88
	// Line 579, Address: 0x1648d0, Func Offset: 0x90
	// Line 581, Address: 0x1648d4, Func Offset: 0x94
	// Line 582, Address: 0x1648dc, Func Offset: 0x9c
	// Line 583, Address: 0x1648e4, Func Offset: 0xa4
	// Func End, Address: 0x164900, Func Offset: 0xc0
}

// 
// Start address: 0x164900
void draw_font_title_select()
{
	int i;
	_anon3* p;
	unsigned int v;
	// Line 587, Address: 0x164900, Func Offset: 0
	// Line 591, Address: 0x164904, Func Offset: 0x4
	// Line 587, Address: 0x164908, Func Offset: 0x8
	// Line 589, Address: 0x164918, Func Offset: 0x18
	// Line 587, Address: 0x16491c, Func Offset: 0x1c
	// Line 591, Address: 0x164920, Func Offset: 0x20
	// Line 593, Address: 0x16492c, Func Offset: 0x2c
	// Line 594, Address: 0x164948, Func Offset: 0x48
	// Line 595, Address: 0x164958, Func Offset: 0x58
	// Line 596, Address: 0x164974, Func Offset: 0x74
	// Line 602, Address: 0x164978, Func Offset: 0x78
	// Line 603, Address: 0x16499c, Func Offset: 0x9c
	// Line 605, Address: 0x1649a8, Func Offset: 0xa8
	// Line 607, Address: 0x1649bc, Func Offset: 0xbc
	// Line 609, Address: 0x1649c8, Func Offset: 0xc8
	// Line 610, Address: 0x1649e4, Func Offset: 0xe4
	// Line 611, Address: 0x1649fc, Func Offset: 0xfc
	// Line 613, Address: 0x164a08, Func Offset: 0x108
	// Line 616, Address: 0x164a20, Func Offset: 0x120
	// Line 619, Address: 0x164a30, Func Offset: 0x130
	// Line 620, Address: 0x164a40, Func Offset: 0x140
	// Line 621, Address: 0x164a48, Func Offset: 0x148
	// Func End, Address: 0x164a64, Func Offset: 0x164
}

// 
// Start address: 0x164a70
void draw_font()
{
	// Line 625, Address: 0x164a70, Func Offset: 0
	// Line 628, Address: 0x164a74, Func Offset: 0x4
	// Line 625, Address: 0x164a78, Func Offset: 0x8
	// Line 628, Address: 0x164a7c, Func Offset: 0xc
	// Line 629, Address: 0x164a88, Func Offset: 0x18
	// Line 630, Address: 0x164a90, Func Offset: 0x20
	// Line 632, Address: 0x164a98, Func Offset: 0x28
	// Line 634, Address: 0x164aa0, Func Offset: 0x30
	// Func End, Address: 0x164aac, Func Offset: 0x3c
}

// 
// Start address: 0x164ab0
void init_title_bg()
{
	// Line 652, Address: 0x164ab0, Func Offset: 0
	// Line 654, Address: 0x164ab8, Func Offset: 0x8
	// Line 655, Address: 0x164ac0, Func Offset: 0x10
	// Line 656, Address: 0x164ac8, Func Offset: 0x18
	// Func End, Address: 0x164ad4, Func Offset: 0x24
}

// 
// Start address: 0x164ae0
void init_title_logo()
{
	// Line 659, Address: 0x164ae0, Func Offset: 0
	// Line 660, Address: 0x164ae4, Func Offset: 0x4
	// Line 659, Address: 0x164ae8, Func Offset: 0x8
	// Line 660, Address: 0x164aec, Func Offset: 0xc
	// Line 661, Address: 0x164af8, Func Offset: 0x18
	// Line 664, Address: 0x164b04, Func Offset: 0x24
	// Line 665, Address: 0x164b48, Func Offset: 0x68
	// Line 667, Address: 0x164b5c, Func Offset: 0x7c
	// Line 668, Address: 0x164b78, Func Offset: 0x98
	// Line 669, Address: 0x164b8c, Func Offset: 0xac
	// Line 670, Address: 0x164ba0, Func Offset: 0xc0
	// Line 671, Address: 0x164bb4, Func Offset: 0xd4
	// Line 672, Address: 0x164bd4, Func Offset: 0xf4
	// Line 674, Address: 0x164bf0, Func Offset: 0x110
	// Line 675, Address: 0x164c08, Func Offset: 0x128
	// Func End, Address: 0x164c14, Func Offset: 0x134
}

// 
// Start address: 0x164c20
void init_title_large_logo()
{
	// Line 678, Address: 0x164c20, Func Offset: 0
	// Line 679, Address: 0x164c24, Func Offset: 0x4
	// Line 678, Address: 0x164c28, Func Offset: 0x8
	// Line 679, Address: 0x164c2c, Func Offset: 0xc
	// Line 680, Address: 0x164c38, Func Offset: 0x18
	// Line 683, Address: 0x164c44, Func Offset: 0x24
	// Line 684, Address: 0x164c88, Func Offset: 0x68
	// Line 686, Address: 0x164c9c, Func Offset: 0x7c
	// Line 687, Address: 0x164cb8, Func Offset: 0x98
	// Line 688, Address: 0x164ccc, Func Offset: 0xac
	// Line 689, Address: 0x164ce0, Func Offset: 0xc0
	// Line 691, Address: 0x164cf4, Func Offset: 0xd4
	// Line 692, Address: 0x164d14, Func Offset: 0xf4
	// Line 694, Address: 0x164d30, Func Offset: 0x110
	// Line 695, Address: 0x164d48, Func Offset: 0x128
	// Func End, Address: 0x164d54, Func Offset: 0x134
}

// 
// Start address: 0x164d60
void init_rights_img()
{
	// Line 698, Address: 0x164d60, Func Offset: 0
	// Line 699, Address: 0x164d64, Func Offset: 0x4
	// Line 698, Address: 0x164d68, Func Offset: 0x8
	// Line 699, Address: 0x164d6c, Func Offset: 0xc
	// Line 700, Address: 0x164d78, Func Offset: 0x18
	// Line 701, Address: 0x164d84, Func Offset: 0x24
	// Line 704, Address: 0x164db4, Func Offset: 0x54
	// Line 705, Address: 0x164dd4, Func Offset: 0x74
	// Line 706, Address: 0x164de8, Func Offset: 0x88
	// Line 708, Address: 0x164e0c, Func Offset: 0xac
	// Line 710, Address: 0x164e20, Func Offset: 0xc0
	// Line 711, Address: 0x164e40, Func Offset: 0xe0
	// Func End, Address: 0x164e4c, Func Offset: 0xec
}

// 
// Start address: 0x164e50
void init_trial_img()
{
	// Line 716, Address: 0x164e50, Func Offset: 0
	// Line 717, Address: 0x164e54, Func Offset: 0x4
	// Line 716, Address: 0x164e58, Func Offset: 0x8
	// Line 717, Address: 0x164e5c, Func Offset: 0xc
	// Line 718, Address: 0x164e68, Func Offset: 0x18
	// Line 719, Address: 0x164e74, Func Offset: 0x24
	// Line 721, Address: 0x164ea4, Func Offset: 0x54
	// Line 722, Address: 0x164ec4, Func Offset: 0x74
	// Line 723, Address: 0x164ed8, Func Offset: 0x88
	// Line 725, Address: 0x164ef4, Func Offset: 0xa4
	// Line 727, Address: 0x164f08, Func Offset: 0xb8
	// Line 728, Address: 0x164f28, Func Offset: 0xd8
	// Func End, Address: 0x164f34, Func Offset: 0xe4
}

// 
// Start address: 0x164f40
int seq_draw_title_init(_anon3* p)
{
	// Line 733, Address: 0x164f40, Func Offset: 0
	// Line 734, Address: 0x164f44, Func Offset: 0x4
	// Line 733, Address: 0x164f48, Func Offset: 0x8
	// Line 734, Address: 0x164f4c, Func Offset: 0xc
	// Line 733, Address: 0x164f50, Func Offset: 0x10
	// Line 734, Address: 0x164f54, Func Offset: 0x14
	// Line 736, Address: 0x164f60, Func Offset: 0x20
	// Line 737, Address: 0x164f68, Func Offset: 0x28
	// Line 738, Address: 0x164f6c, Func Offset: 0x2c
	// Line 740, Address: 0x164f70, Func Offset: 0x30
	// Line 741, Address: 0x164f74, Func Offset: 0x34
	// Line 744, Address: 0x164f78, Func Offset: 0x38
	// Func End, Address: 0x164f88, Func Offset: 0x48
}

// 
// Start address: 0x164f90
int seq_draw_title_logo_fadein(_anon3* p)
{
	int rtv;
	_anon1* img;
	float ratio;
	int alpha;
	unsigned int col;
	// Line 748, Address: 0x164f90, Func Offset: 0
	// Line 750, Address: 0x164fa0, Func Offset: 0x10
	// Line 748, Address: 0x164fa4, Func Offset: 0x14
	// Line 750, Address: 0x164fa8, Func Offset: 0x18
	// Line 748, Address: 0x164fac, Func Offset: 0x1c
	// Line 751, Address: 0x164fb4, Func Offset: 0x24
	// Line 752, Address: 0x164ff4, Func Offset: 0x64
	// Line 756, Address: 0x164ff8, Func Offset: 0x68
	// Line 752, Address: 0x164ffc, Func Offset: 0x6c
	// Line 753, Address: 0x165008, Func Offset: 0x78
	// Line 752, Address: 0x165010, Func Offset: 0x80
	// Line 753, Address: 0x16501c, Func Offset: 0x8c
	// Line 755, Address: 0x165020, Func Offset: 0x90
	// Line 753, Address: 0x165024, Func Offset: 0x94
	// Line 755, Address: 0x165028, Func Offset: 0x98
	// Line 756, Address: 0x16502c, Func Offset: 0x9c
	// Line 755, Address: 0x165030, Func Offset: 0xa0
	// Line 756, Address: 0x165034, Func Offset: 0xa4
	// Line 757, Address: 0x165040, Func Offset: 0xb0
	// Line 758, Address: 0x16508c, Func Offset: 0xfc
	// Line 760, Address: 0x165090, Func Offset: 0x100
	// Line 761, Address: 0x165094, Func Offset: 0x104
	// Func End, Address: 0x1650b0, Func Offset: 0x120
}

// 
// Start address: 0x1650b0
int seq_draw_title_logo_wait(_anon3* p)
{
	int rtv;
	_anon1* img;
	// Line 765, Address: 0x1650b0, Func Offset: 0
	// Line 769, Address: 0x1650c0, Func Offset: 0x10
	// Line 770, Address: 0x165110, Func Offset: 0x60
	// Line 771, Address: 0x165114, Func Offset: 0x64
	// Line 772, Address: 0x165118, Func Offset: 0x68
	// Line 773, Address: 0x16511c, Func Offset: 0x6c
	// Func End, Address: 0x165130, Func Offset: 0x80
}

// 
// Start address: 0x165130
int seq_draw_title_logo_fadeout(_anon3* p)
{
	int rtv;
	_anon1* img;
	float ratio;
	int alpha;
	unsigned int col;
	// Line 777, Address: 0x165130, Func Offset: 0
	// Line 779, Address: 0x165140, Func Offset: 0x10
	// Line 777, Address: 0x165144, Func Offset: 0x14
	// Line 779, Address: 0x165148, Func Offset: 0x18
	// Line 777, Address: 0x16514c, Func Offset: 0x1c
	// Line 780, Address: 0x165154, Func Offset: 0x24
	// Line 781, Address: 0x165194, Func Offset: 0x64
	// Line 785, Address: 0x165198, Func Offset: 0x68
	// Line 781, Address: 0x16519c, Func Offset: 0x6c
	// Line 782, Address: 0x1651b0, Func Offset: 0x80
	// Line 781, Address: 0x1651b8, Func Offset: 0x88
	// Line 782, Address: 0x1651c8, Func Offset: 0x98
	// Line 784, Address: 0x1651cc, Func Offset: 0x9c
	// Line 782, Address: 0x1651d0, Func Offset: 0xa0
	// Line 784, Address: 0x1651d4, Func Offset: 0xa4
	// Line 785, Address: 0x1651d8, Func Offset: 0xa8
	// Line 784, Address: 0x1651dc, Func Offset: 0xac
	// Line 785, Address: 0x1651e0, Func Offset: 0xb0
	// Line 786, Address: 0x1651ec, Func Offset: 0xbc
	// Line 787, Address: 0x165238, Func Offset: 0x108
	// Line 789, Address: 0x16523c, Func Offset: 0x10c
	// Line 788, Address: 0x165240, Func Offset: 0x110
	// Line 790, Address: 0x165244, Func Offset: 0x114
	// Line 791, Address: 0x165248, Func Offset: 0x118
	// Line 792, Address: 0x16524c, Func Offset: 0x11c
	// Func End, Address: 0x165268, Func Offset: 0x138
}

// 
// Start address: 0x165270
int seq_draw_title_black_wait(_anon3* p)
{
	int rtv;
	// Line 796, Address: 0x165270, Func Offset: 0
	// Line 797, Address: 0x165280, Func Offset: 0x10
	// Line 796, Address: 0x165284, Func Offset: 0x14
	// Line 799, Address: 0x165288, Func Offset: 0x18
	// Line 800, Address: 0x1652d8, Func Offset: 0x68
	// Line 803, Address: 0x1652ec, Func Offset: 0x7c
	// Line 804, Address: 0x16530c, Func Offset: 0x9c
	// Line 807, Address: 0x165314, Func Offset: 0xa4
	// Line 808, Address: 0x165318, Func Offset: 0xa8
	// Line 809, Address: 0x16531c, Func Offset: 0xac
	// Func End, Address: 0x165334, Func Offset: 0xc4
}

// 
// Start address: 0x165340
int seq_draw_title_fadein(_anon3* p)
{
	int rtv;
	float ratio;
	int alpha;
	// Line 813, Address: 0x165340, Func Offset: 0
	// Line 815, Address: 0x165358, Func Offset: 0x18
	// Line 816, Address: 0x165398, Func Offset: 0x58
	// Line 818, Address: 0x1653b0, Func Offset: 0x70
	// Line 819, Address: 0x1653b8, Func Offset: 0x78
	// Line 820, Address: 0x165404, Func Offset: 0xc4
	// Line 822, Address: 0x165408, Func Offset: 0xc8
	// Line 823, Address: 0x16540c, Func Offset: 0xcc
	// Func End, Address: 0x165424, Func Offset: 0xe4
}

// 
// Start address: 0x165430
int seq_draw_title_wait(_anon3* p)
{
	int rtv;
	// Line 827, Address: 0x165430, Func Offset: 0
	// Line 830, Address: 0x165440, Func Offset: 0x10
	// Line 831, Address: 0x165490, Func Offset: 0x60
	// Line 832, Address: 0x165494, Func Offset: 0x64
	// Line 833, Address: 0x165498, Func Offset: 0x68
	// Line 834, Address: 0x16549c, Func Offset: 0x6c
	// Func End, Address: 0x1654b0, Func Offset: 0x80
}

// 
// Start address: 0x1654b0
int seq_draw_title_title_logo_fadein(_anon3* p)
{
	int rtv;
	_anon1* img;
	float ratio;
	int alpha;
	unsigned int col;
	// Line 838, Address: 0x1654b0, Func Offset: 0
	// Line 840, Address: 0x1654c0, Func Offset: 0x10
	// Line 838, Address: 0x1654c4, Func Offset: 0x14
	// Line 840, Address: 0x1654c8, Func Offset: 0x18
	// Line 838, Address: 0x1654cc, Func Offset: 0x1c
	// Line 841, Address: 0x1654d4, Func Offset: 0x24
	// Line 842, Address: 0x165514, Func Offset: 0x64
	// Line 845, Address: 0x165518, Func Offset: 0x68
	// Line 842, Address: 0x16551c, Func Offset: 0x6c
	// Line 843, Address: 0x165528, Func Offset: 0x78
	// Line 842, Address: 0x165530, Func Offset: 0x80
	// Line 843, Address: 0x16553c, Func Offset: 0x8c
	// Line 845, Address: 0x165544, Func Offset: 0x94
	// Line 846, Address: 0x165554, Func Offset: 0xa4
	// Line 847, Address: 0x1655a0, Func Offset: 0xf0
	// Line 848, Address: 0x1655a4, Func Offset: 0xf4
	// Line 850, Address: 0x1655a8, Func Offset: 0xf8
	// Line 852, Address: 0x1655b0, Func Offset: 0x100
	// Line 853, Address: 0x1655b4, Func Offset: 0x104
	// Func End, Address: 0x1655d0, Func Offset: 0x120
}

// 
// Start address: 0x1655d0
int seq_draw_title_mes_fadein(_anon3* p)
{
	int rtv;
	float ratio;
	int alpha;
	// Line 857, Address: 0x1655d0, Func Offset: 0
	// Line 859, Address: 0x1655e8, Func Offset: 0x18
	// Line 860, Address: 0x165628, Func Offset: 0x58
	// Line 862, Address: 0x16562c, Func Offset: 0x5c
	// Line 860, Address: 0x165630, Func Offset: 0x60
	// Line 862, Address: 0x165634, Func Offset: 0x64
	// Line 860, Address: 0x16563c, Func Offset: 0x6c
	// Line 863, Address: 0x16564c, Func Offset: 0x7c
	// Line 864, Address: 0x165658, Func Offset: 0x88
	// Line 865, Address: 0x1656a4, Func Offset: 0xd4
	// Line 868, Address: 0x1656a8, Func Offset: 0xd8
	// Line 870, Address: 0x1656b0, Func Offset: 0xe0
	// Line 871, Address: 0x1656b4, Func Offset: 0xe4
	// Func End, Address: 0x1656cc, Func Offset: 0xfc
}

// 
// Start address: 0x1656d0
int seq_draw_title_mes_wait(_anon3* p)
{
	int rtv;
	// Line 875, Address: 0x1656d0, Func Offset: 0
	// Line 878, Address: 0x1656e0, Func Offset: 0x10
	// Line 879, Address: 0x165730, Func Offset: 0x60
	// Line 880, Address: 0x165734, Func Offset: 0x64
	// Line 882, Address: 0x165738, Func Offset: 0x68
	// Line 884, Address: 0x165740, Func Offset: 0x70
	// Line 885, Address: 0x165744, Func Offset: 0x74
	// Func End, Address: 0x165758, Func Offset: 0x88
}

// 
// Start address: 0x165760
int short_seq_title_init(_anon3* p)
{
	// Line 890, Address: 0x165760, Func Offset: 0
	// Line 891, Address: 0x165764, Func Offset: 0x4
	// Line 890, Address: 0x165768, Func Offset: 0x8
	// Line 891, Address: 0x16576c, Func Offset: 0xc
	// Line 890, Address: 0x165770, Func Offset: 0x10
	// Line 891, Address: 0x165774, Func Offset: 0x14
	// Line 892, Address: 0x165780, Func Offset: 0x20
	// Line 893, Address: 0x165784, Func Offset: 0x24
	// Line 894, Address: 0x165790, Func Offset: 0x30
	// Line 895, Address: 0x1657ac, Func Offset: 0x4c
	// Line 896, Address: 0x1657b4, Func Offset: 0x54
	// Line 897, Address: 0x1657b8, Func Offset: 0x58
	// Line 899, Address: 0x1657c0, Func Offset: 0x60
	// Func End, Address: 0x1657d0, Func Offset: 0x70
}

// 
// Start address: 0x1657d0
int short_seq_title_fadein(_anon3* p)
{
	int rtv;
	_anon1* img;
	float ratio;
	int alpha;
	unsigned int col;
	// Line 903, Address: 0x1657d0, Func Offset: 0
	// Line 904, Address: 0x1657ec, Func Offset: 0x1c
	// Line 903, Address: 0x1657f0, Func Offset: 0x20
	// Line 905, Address: 0x1657f4, Func Offset: 0x24
	// Line 906, Address: 0x1657f8, Func Offset: 0x28
	// Line 907, Address: 0x165838, Func Offset: 0x68
	// Line 908, Address: 0x16583c, Func Offset: 0x6c
	// Line 907, Address: 0x165840, Func Offset: 0x70
	// Line 908, Address: 0x165844, Func Offset: 0x74
	// Line 907, Address: 0x165848, Func Offset: 0x78
	// Line 908, Address: 0x165858, Func Offset: 0x88
	// Line 911, Address: 0x16585c, Func Offset: 0x8c
	// Line 914, Address: 0x165868, Func Offset: 0x98
	// Line 917, Address: 0x165880, Func Offset: 0xb0
	// Line 922, Address: 0x165884, Func Offset: 0xb4
	// Line 917, Address: 0x165888, Func Offset: 0xb8
	// Line 922, Address: 0x16588c, Func Offset: 0xbc
	// Line 917, Address: 0x165890, Func Offset: 0xc0
	// Line 921, Address: 0x165894, Func Offset: 0xc4
	// Line 918, Address: 0x165898, Func Offset: 0xc8
	// Line 923, Address: 0x16589c, Func Offset: 0xcc
	// Line 921, Address: 0x1658a0, Func Offset: 0xd0
	// Line 924, Address: 0x1658a4, Func Offset: 0xd4
	// Line 923, Address: 0x1658a8, Func Offset: 0xd8
	// Line 924, Address: 0x1658b4, Func Offset: 0xe4
	// Line 928, Address: 0x1658c8, Func Offset: 0xf8
	// Line 927, Address: 0x1658cc, Func Offset: 0xfc
	// Line 928, Address: 0x1658d0, Func Offset: 0x100
	// Line 927, Address: 0x1658dc, Func Offset: 0x10c
	// Line 929, Address: 0x1658e0, Func Offset: 0x110
	// Line 932, Address: 0x1658f8, Func Offset: 0x128
	// Line 934, Address: 0x165900, Func Offset: 0x130
	// Line 935, Address: 0x16594c, Func Offset: 0x17c
	// Line 938, Address: 0x165950, Func Offset: 0x180
	// Line 939, Address: 0x165954, Func Offset: 0x184
	// Func End, Address: 0x165974, Func Offset: 0x1a4
}

// 
// Start address: 0x165980
int seq_draw_title_image_comp(_anon3* p)
{
	// Line 945, Address: 0x165980, Func Offset: 0
	// Line 946, Address: 0x165984, Func Offset: 0x4
	// Line 945, Address: 0x165988, Func Offset: 0x8
	// Line 946, Address: 0x16598c, Func Offset: 0xc
	// Line 945, Address: 0x165990, Func Offset: 0x10
	// Line 946, Address: 0x165994, Func Offset: 0x14
	// Line 947, Address: 0x1659b0, Func Offset: 0x30
	// Line 948, Address: 0x1659b8, Func Offset: 0x38
	// Line 949, Address: 0x1659bc, Func Offset: 0x3c
	// Line 948, Address: 0x1659c0, Func Offset: 0x40
	// Line 953, Address: 0x1659c8, Func Offset: 0x48
	// Line 949, Address: 0x1659cc, Func Offset: 0x4c
	// Line 950, Address: 0x1659d0, Func Offset: 0x50
	// Line 951, Address: 0x1659d4, Func Offset: 0x54
	// Line 955, Address: 0x1659d8, Func Offset: 0x58
	// Line 958, Address: 0x1659e0, Func Offset: 0x60
	// Line 957, Address: 0x1659e4, Func Offset: 0x64
	// Line 958, Address: 0x1659e8, Func Offset: 0x68
	// Func End, Address: 0x1659f4, Func Offset: 0x74
}

// 
// Start address: 0x165a00
int seq_draw_title_mes_focus_fadein(_anon3* p)
{
	int rtv;
	float ratio;
	int r;
	int g;
	int b;
	_anon1* img;
	int alpha;
	unsigned int col;
	// Line 962, Address: 0x165a00, Func Offset: 0
	// Line 964, Address: 0x165a18, Func Offset: 0x18
	// Line 967, Address: 0x165a58, Func Offset: 0x58
	// Line 970, Address: 0x165a5c, Func Offset: 0x5c
	// Line 967, Address: 0x165a60, Func Offset: 0x60
	// Line 966, Address: 0x165a64, Func Offset: 0x64
	// Line 970, Address: 0x165a68, Func Offset: 0x68
	// Line 967, Address: 0x165a6c, Func Offset: 0x6c
	// Line 968, Address: 0x165a70, Func Offset: 0x70
	// Line 970, Address: 0x165a78, Func Offset: 0x78
	// Line 967, Address: 0x165a80, Func Offset: 0x80
	// Line 970, Address: 0x165a84, Func Offset: 0x84
	// Line 967, Address: 0x165a90, Func Offset: 0x90
	// Line 970, Address: 0x165a94, Func Offset: 0x94
	// Line 968, Address: 0x165a98, Func Offset: 0x98
	// Line 971, Address: 0x165aa0, Func Offset: 0xa0
	// Line 973, Address: 0x165ac0, Func Offset: 0xc0
	// Line 974, Address: 0x165ad0, Func Offset: 0xd0
	// Line 978, Address: 0x165ae0, Func Offset: 0xe0
	// Line 977, Address: 0x165ae4, Func Offset: 0xe4
	// Line 978, Address: 0x165ae8, Func Offset: 0xe8
	// Line 977, Address: 0x165af4, Func Offset: 0xf4
	// Line 979, Address: 0x165af8, Func Offset: 0xf8
	// Line 982, Address: 0x165b08, Func Offset: 0x108
	// Line 983, Address: 0x165b54, Func Offset: 0x154
	// Line 985, Address: 0x165b5c, Func Offset: 0x15c
	// Line 987, Address: 0x165b60, Func Offset: 0x160
	// Line 989, Address: 0x165b68, Func Offset: 0x168
	// Line 990, Address: 0x165b6c, Func Offset: 0x16c
	// Func End, Address: 0x165b84, Func Offset: 0x184
}

// 
// Start address: 0x165b90
int seq_draw_title_mes_comp(_anon3* p)
{
	// Line 994, Address: 0x165b90, Func Offset: 0
	// Line 995, Address: 0x165b94, Func Offset: 0x4
	// Line 994, Address: 0x165b98, Func Offset: 0x8
	// Line 995, Address: 0x165b9c, Func Offset: 0xc
	// Line 994, Address: 0x165ba0, Func Offset: 0x10
	// Line 995, Address: 0x165ba4, Func Offset: 0x14
	// Line 998, Address: 0x165bc0, Func Offset: 0x30
	// Line 1000, Address: 0x165be0, Func Offset: 0x50
	// Line 1001, Address: 0x165be4, Func Offset: 0x54
	// Line 1000, Address: 0x165be8, Func Offset: 0x58
	// Line 1001, Address: 0x165bf0, Func Offset: 0x60
	// Line 1002, Address: 0x165bf4, Func Offset: 0x64
	// Line 1005, Address: 0x165bf8, Func Offset: 0x68
	// Line 1008, Address: 0x165c00, Func Offset: 0x70
	// Line 1011, Address: 0x165c0c, Func Offset: 0x7c
	// Func End, Address: 0x165c1c, Func Offset: 0x8c
}

// 
// Start address: 0x165c20
int seq_draw_title_handling(_anon3* p)
{
	// Line 1015, Address: 0x165c20, Func Offset: 0
	// Line 1016, Address: 0x165c2c, Func Offset: 0xc
	// Line 1018, Address: 0x165c34, Func Offset: 0x14
	// Line 1019, Address: 0x165c38, Func Offset: 0x18
	// Func End, Address: 0x165c48, Func Offset: 0x28
}

// 
// Start address: 0x165c50
int seq_draw_title_logo_large()
{
	// Line 1023, Address: 0x165c50, Func Offset: 0
	// Line 1070, Address: 0x165c58, Func Offset: 0x8
	// Line 1073, Address: 0x165c60, Func Offset: 0x10
	// Line 1072, Address: 0x165c64, Func Offset: 0x14
	// Line 1073, Address: 0x165c68, Func Offset: 0x18
	// Func End, Address: 0x165c70, Func Offset: 0x20
}

// 
// Start address: 0x165c70
int seq_draw_title_end()
{
	// Line 1080, Address: 0x165c70, Func Offset: 0
	// Func End, Address: 0x165c78, Func Offset: 0x8
}

// 
// Start address: 0x165c80
void seq_force_set()
{
	_anon3* p;
	int i;
	int num;
	int(*f)(_anon3*);
	// Line 1120, Address: 0x165c80, Func Offset: 0
	// Line 1126, Address: 0x165c84, Func Offset: 0x4
	// Line 1120, Address: 0x165c88, Func Offset: 0x8
	// Line 1121, Address: 0x165c98, Func Offset: 0x18
	// Line 1120, Address: 0x165c9c, Func Offset: 0x1c
	// Line 1121, Address: 0x165ca0, Func Offset: 0x20
	// Line 1126, Address: 0x165ca4, Func Offset: 0x24
	// Line 1124, Address: 0x165ca8, Func Offset: 0x28
	// Line 1123, Address: 0x165cac, Func Offset: 0x2c
	// Line 1126, Address: 0x165cb0, Func Offset: 0x30
	// Line 1128, Address: 0x165cb8, Func Offset: 0x38
	// Line 1127, Address: 0x165cbc, Func Offset: 0x3c
	// Line 1128, Address: 0x165cc0, Func Offset: 0x40
	// Line 1129, Address: 0x165cc4, Func Offset: 0x44
	// Line 1131, Address: 0x165cc8, Func Offset: 0x48
	// Line 1133, Address: 0x165cdc, Func Offset: 0x5c
	// Line 1135, Address: 0x165ce8, Func Offset: 0x68
	// Line 1136, Address: 0x165cfc, Func Offset: 0x7c
	// Line 1138, Address: 0x165d04, Func Offset: 0x84
	// Line 1140, Address: 0x165d0c, Func Offset: 0x8c
	// Line 1142, Address: 0x165d14, Func Offset: 0x94
	// Line 1143, Address: 0x165d28, Func Offset: 0xa8
	// Line 1144, Address: 0x165d34, Func Offset: 0xb4
	// Line 1145, Address: 0x165d54, Func Offset: 0xd4
	// Line 1146, Address: 0x165d5c, Func Offset: 0xdc
	// Line 1147, Address: 0x165d60, Func Offset: 0xe0
	// Func End, Address: 0x165d7c, Func Offset: 0xfc
}

// 
// Start address: 0x165d80
void seq_force_end()
{
	_anon3* p;
	// Line 1159, Address: 0x165d80, Func Offset: 0
	// Line 1157, Address: 0x165d84, Func Offset: 0x4
	// Line 1159, Address: 0x165d88, Func Offset: 0x8
	// Line 1160, Address: 0x165d94, Func Offset: 0x14
	// Line 1161, Address: 0x165d9c, Func Offset: 0x1c
	// Line 1163, Address: 0x165da8, Func Offset: 0x28
	// Line 1164, Address: 0x165db4, Func Offset: 0x34
	// Line 1167, Address: 0x165db8, Func Offset: 0x38
	// Func End, Address: 0x165dc8, Func Offset: 0x48
}

// 
// Start address: 0x165dd0
void font_blink()
{
	_anon3* p;
	float rad;
	int v;
	// Line 1172, Address: 0x165dd0, Func Offset: 0
	// Line 1174, Address: 0x165dd4, Func Offset: 0x4
	// Line 1172, Address: 0x165dd8, Func Offset: 0x8
	// Line 1174, Address: 0x165ddc, Func Offset: 0xc
	// Line 1172, Address: 0x165de0, Func Offset: 0x10
	// Line 1174, Address: 0x165de4, Func Offset: 0x14
	// Line 1173, Address: 0x165de8, Func Offset: 0x18
	// Line 1174, Address: 0x165df0, Func Offset: 0x20
	// Line 1175, Address: 0x165e40, Func Offset: 0x70
	// Line 1177, Address: 0x165e68, Func Offset: 0x98
	// Line 1178, Address: 0x165e6c, Func Offset: 0x9c
	// Line 1179, Address: 0x165e8c, Func Offset: 0xbc
	// Line 1180, Address: 0x165e98, Func Offset: 0xc8
	// Func End, Address: 0x165ea8, Func Offset: 0xd8
}

// 
// Start address: 0x165eb0
int is_seq_handle_ok()
{
	_anon3* p;
	// Line 1195, Address: 0x165eb0, Func Offset: 0
	// Line 1185, Address: 0x165eb4, Func Offset: 0x4
	// Line 1195, Address: 0x165eb8, Func Offset: 0x8
	// Line 1196, Address: 0x165f18, Func Offset: 0x68
	// Func End, Address: 0x165f20, Func Offset: 0x70
}

// 
// Start address: 0x165f20
int is_rights_draw_ok()
{
	// Line 1201, Address: 0x165f20, Func Offset: 0
	// Line 1202, Address: 0x165f24, Func Offset: 0x4
	// Func End, Address: 0x165f2c, Func Offset: 0xc
}

// 
// Start address: 0x165f30
int misc_TitleConstruct()
{
	_anon3* p;
	// Line 1238, Address: 0x165f30, Func Offset: 0
	// Line 1239, Address: 0x165f3c, Func Offset: 0xc
	// Line 1240, Address: 0x165f40, Func Offset: 0x10
	// Line 1241, Address: 0x165f48, Func Offset: 0x18
	// Line 1242, Address: 0x165f50, Func Offset: 0x20
	// Line 1243, Address: 0x165f58, Func Offset: 0x28
	// Line 1246, Address: 0x165f60, Func Offset: 0x30
	// Line 1247, Address: 0x165f68, Func Offset: 0x38
	// Line 1248, Address: 0x165f70, Func Offset: 0x40
	// Line 1250, Address: 0x165f78, Func Offset: 0x48
	// Line 1251, Address: 0x165f9c, Func Offset: 0x6c
	// Line 1250, Address: 0x165fa0, Func Offset: 0x70
	// Line 1251, Address: 0x165fa4, Func Offset: 0x74
	// Line 1250, Address: 0x165fa8, Func Offset: 0x78
	// Line 1254, Address: 0x165fe4, Func Offset: 0xb4
	// Line 1257, Address: 0x165fec, Func Offset: 0xbc
	// Line 1261, Address: 0x166010, Func Offset: 0xe0
	// Line 1262, Address: 0x166018, Func Offset: 0xe8
	// Line 1265, Address: 0x166020, Func Offset: 0xf0
	// Line 1270, Address: 0x166028, Func Offset: 0xf8
	// Line 1269, Address: 0x166030, Func Offset: 0x100
	// Line 1270, Address: 0x166034, Func Offset: 0x104
	// Func End, Address: 0x16603c, Func Offset: 0x10c
}

// 
// Start address: 0x166040
int misc_TitleHandle()
{
	int rtv;
	int level_sel;
	_sfMenuObjRect rect;
	_enum_1 cmd;
	unsigned int rep;
	int selected_id;
	// Line 1278, Address: 0x166040, Func Offset: 0
	// Line 1286, Address: 0x166044, Func Offset: 0x4
	// Line 1278, Address: 0x166048, Func Offset: 0x8
	// Line 1286, Address: 0x166064, Func Offset: 0x24
	// Line 1288, Address: 0x16606c, Func Offset: 0x2c
	// Line 1289, Address: 0x166074, Func Offset: 0x34
	// Line 1291, Address: 0x1660a0, Func Offset: 0x60
	// Line 1293, Address: 0x1660ac, Func Offset: 0x6c
	// Line 1294, Address: 0x1660d0, Func Offset: 0x90
	// Line 1298, Address: 0x1660d8, Func Offset: 0x98
	// Line 1296, Address: 0x1660dc, Func Offset: 0x9c
	// Line 1295, Address: 0x1660e0, Func Offset: 0xa0
	// Line 1297, Address: 0x1660e4, Func Offset: 0xa4
	// Line 1296, Address: 0x1660e8, Func Offset: 0xa8
	// Line 1298, Address: 0x1660ec, Func Offset: 0xac
	// Line 1297, Address: 0x1660f0, Func Offset: 0xb0
	// Line 1298, Address: 0x1660f4, Func Offset: 0xb4
	// Line 1300, Address: 0x166100, Func Offset: 0xc0
	// Line 1303, Address: 0x166110, Func Offset: 0xd0
	// Line 1302, Address: 0x166114, Func Offset: 0xd4
	// Line 1303, Address: 0x166118, Func Offset: 0xd8
	// Line 1304, Address: 0x166128, Func Offset: 0xe8
	// Line 1306, Address: 0x166134, Func Offset: 0xf4
	// Line 1307, Address: 0x16613c, Func Offset: 0xfc
	// Line 1308, Address: 0x166144, Func Offset: 0x104
	// Line 1309, Address: 0x166148, Func Offset: 0x108
	// Line 1310, Address: 0x166158, Func Offset: 0x118
	// Line 1312, Address: 0x166160, Func Offset: 0x120
	// Line 1315, Address: 0x166178, Func Offset: 0x138
	// Line 1312, Address: 0x16617c, Func Offset: 0x13c
	// Line 1315, Address: 0x166180, Func Offset: 0x140
	// Line 1313, Address: 0x166184, Func Offset: 0x144
	// Line 1315, Address: 0x166190, Func Offset: 0x150
	// Line 1316, Address: 0x1661c0, Func Offset: 0x180
	// Line 1318, Address: 0x1661cc, Func Offset: 0x18c
	// Line 1316, Address: 0x1661d0, Func Offset: 0x190
	// Line 1318, Address: 0x1661d4, Func Offset: 0x194
	// Line 1349, Address: 0x166208, Func Offset: 0x1c8
	// Line 1350, Address: 0x166210, Func Offset: 0x1d0
	// Line 1352, Address: 0x166238, Func Offset: 0x1f8
	// Line 1355, Address: 0x166240, Func Offset: 0x200
	// Line 1354, Address: 0x166244, Func Offset: 0x204
	// Line 1355, Address: 0x166248, Func Offset: 0x208
	// Line 1354, Address: 0x16624c, Func Offset: 0x20c
	// Line 1357, Address: 0x166250, Func Offset: 0x210
	// Line 1359, Address: 0x166258, Func Offset: 0x218
	// Line 1363, Address: 0x166280, Func Offset: 0x240
	// Line 1364, Address: 0x166288, Func Offset: 0x248
	// Line 1366, Address: 0x166290, Func Offset: 0x250
	// Line 1368, Address: 0x166298, Func Offset: 0x258
	// Line 1371, Address: 0x1662c0, Func Offset: 0x280
	// Line 1370, Address: 0x1662c4, Func Offset: 0x284
	// Line 1371, Address: 0x1662c8, Func Offset: 0x288
	// Line 1370, Address: 0x1662cc, Func Offset: 0x28c
	// Line 1375, Address: 0x1662d0, Func Offset: 0x290
	// Line 1376, Address: 0x1662d8, Func Offset: 0x298
	// Line 1377, Address: 0x1662e4, Func Offset: 0x2a4
	// Line 1379, Address: 0x1662ec, Func Offset: 0x2ac
	// Line 1380, Address: 0x1662f4, Func Offset: 0x2b4
	// Line 1381, Address: 0x166300, Func Offset: 0x2c0
	// Line 1383, Address: 0x16630c, Func Offset: 0x2cc
	// Line 1384, Address: 0x166314, Func Offset: 0x2d4
	// Line 1385, Address: 0x166318, Func Offset: 0x2d8
	// Line 1386, Address: 0x166328, Func Offset: 0x2e8
	// Line 1389, Address: 0x166330, Func Offset: 0x2f0
	// Line 1390, Address: 0x166340, Func Offset: 0x300
	// Line 1394, Address: 0x166348, Func Offset: 0x308
	// Line 1397, Address: 0x166350, Func Offset: 0x310
	// Line 1398, Address: 0x166358, Func Offset: 0x318
	// Line 1401, Address: 0x166368, Func Offset: 0x328
	// Line 1398, Address: 0x16636c, Func Offset: 0x32c
	// Line 1399, Address: 0x166370, Func Offset: 0x330
	// Line 1401, Address: 0x166374, Func Offset: 0x334
	// Line 1402, Address: 0x1663a0, Func Offset: 0x360
	// Line 1404, Address: 0x1663ac, Func Offset: 0x36c
	// Line 1406, Address: 0x1663b4, Func Offset: 0x374
	// Line 1409, Address: 0x1663cc, Func Offset: 0x38c
	// Line 1408, Address: 0x1663d0, Func Offset: 0x390
	// Line 1409, Address: 0x1663d4, Func Offset: 0x394
	// Line 1408, Address: 0x1663d8, Func Offset: 0x398
	// Line 1411, Address: 0x1663dc, Func Offset: 0x39c
	// Line 1412, Address: 0x1663e8, Func Offset: 0x3a8
	// Line 1415, Address: 0x1663fc, Func Offset: 0x3bc
	// Line 1416, Address: 0x166404, Func Offset: 0x3c4
	// Line 1419, Address: 0x166408, Func Offset: 0x3c8
	// Line 1416, Address: 0x16640c, Func Offset: 0x3cc
	// Line 1418, Address: 0x166410, Func Offset: 0x3d0
	// Line 1419, Address: 0x166414, Func Offset: 0x3d4
	// Line 1420, Address: 0x16641c, Func Offset: 0x3dc
	// Line 1421, Address: 0x166424, Func Offset: 0x3e4
	// Line 1422, Address: 0x166430, Func Offset: 0x3f0
	// Line 1423, Address: 0x16643c, Func Offset: 0x3fc
	// Line 1425, Address: 0x166444, Func Offset: 0x404
	// Line 1426, Address: 0x16644c, Func Offset: 0x40c
	// Line 1427, Address: 0x166458, Func Offset: 0x418
	// Line 1429, Address: 0x166464, Func Offset: 0x424
	// Line 1430, Address: 0x16646c, Func Offset: 0x42c
	// Line 1431, Address: 0x166470, Func Offset: 0x430
	// Line 1432, Address: 0x166480, Func Offset: 0x440
	// Line 1436, Address: 0x166488, Func Offset: 0x448
	// Line 1438, Address: 0x166490, Func Offset: 0x450
	// Line 1439, Address: 0x166494, Func Offset: 0x454
	// Func End, Address: 0x1664b8, Func Offset: 0x478
}

// 
// Start address: 0x1664c0
void draw_black_bg()
{
	_anon1 img;
	char flag;
	// Line 1443, Address: 0x1664c0, Func Offset: 0
	// Line 1446, Address: 0x1664c4, Func Offset: 0x4
	// Line 1443, Address: 0x1664c8, Func Offset: 0x8
	// Line 1446, Address: 0x1664d0, Func Offset: 0x10
	// Line 1447, Address: 0x1664dc, Func Offset: 0x1c
	// Line 1448, Address: 0x1664e8, Func Offset: 0x28
	// Line 1450, Address: 0x16651c, Func Offset: 0x5c
	// Line 1451, Address: 0x166538, Func Offset: 0x78
	// Line 1452, Address: 0x16654c, Func Offset: 0x8c
	// Line 1453, Address: 0x166550, Func Offset: 0x90
	// Line 1454, Address: 0x166560, Func Offset: 0xa0
	// Func End, Address: 0x166570, Func Offset: 0xb0
}

// 
// Start address: 0x166570
void draw_bg()
{
	_anon0* tex;
	unsigned int cbp;
	// Line 1458, Address: 0x166570, Func Offset: 0
	// Line 1459, Address: 0x166574, Func Offset: 0x4
	// Line 1458, Address: 0x166578, Func Offset: 0x8
	// Line 1459, Address: 0x16657c, Func Offset: 0xc
	// Line 1460, Address: 0x166590, Func Offset: 0x20
	// Line 1462, Address: 0x1665a0, Func Offset: 0x30
	// Line 1463, Address: 0x1665ac, Func Offset: 0x3c
	// Func End, Address: 0x1665bc, Func Offset: 0x4c
}

// 
// Start address: 0x1665c0
void draw_logo()
{
	_anon0* tex;
	unsigned int cbp;
	// Line 1467, Address: 0x1665c0, Func Offset: 0
	// Line 1468, Address: 0x1665c4, Func Offset: 0x4
	// Line 1467, Address: 0x1665c8, Func Offset: 0x8
	// Line 1468, Address: 0x1665cc, Func Offset: 0xc
	// Line 1467, Address: 0x1665d0, Func Offset: 0x10
	// Line 1468, Address: 0x1665d4, Func Offset: 0x14
	// Line 1469, Address: 0x1665e4, Func Offset: 0x24
	// Line 1471, Address: 0x1665f4, Func Offset: 0x34
	// Line 1469, Address: 0x1665f8, Func Offset: 0x38
	// Line 1471, Address: 0x1665fc, Func Offset: 0x3c
	// Line 1472, Address: 0x166614, Func Offset: 0x54
	// Line 1473, Address: 0x16662c, Func Offset: 0x6c
	// Line 1474, Address: 0x16663c, Func Offset: 0x7c
	// Func End, Address: 0x166650, Func Offset: 0x90
}

// 
// Start address: 0x166650
void draw_logo2(_anon4* v)
{
	_anon0* tex;
	unsigned int cbp;
	void* pkt;
	unsigned long tex0;
	int i;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 1478, Address: 0x166650, Func Offset: 0
	// Line 1479, Address: 0x166654, Func Offset: 0x4
	// Line 1478, Address: 0x166658, Func Offset: 0x8
	// Line 1479, Address: 0x16665c, Func Offset: 0xc
	// Line 1478, Address: 0x166660, Func Offset: 0x10
	// Line 1479, Address: 0x166678, Func Offset: 0x28
	// Line 1480, Address: 0x166684, Func Offset: 0x34
	// Line 1481, Address: 0x166698, Func Offset: 0x48
	// Line 1483, Address: 0x1666b0, Func Offset: 0x60
	// Line 1484, Address: 0x1666c4, Func Offset: 0x74
	// Line 1487, Address: 0x1666d4, Func Offset: 0x84
	// Line 1488, Address: 0x1666dc, Func Offset: 0x8c
	// Line 1489, Address: 0x1666ec, Func Offset: 0x9c
	// Line 1490, Address: 0x1666f4, Func Offset: 0xa4
	// Line 1492, Address: 0x166700, Func Offset: 0xb0
	// Line 1493, Address: 0x166708, Func Offset: 0xb8
	// Line 1496, Address: 0x16670c, Func Offset: 0xbc
	// Line 1493, Address: 0x166710, Func Offset: 0xc0
	// Line 1496, Address: 0x166714, Func Offset: 0xc4
	// Line 1493, Address: 0x16672c, Func Offset: 0xdc
	// Line 1496, Address: 0x166730, Func Offset: 0xe0
	// Line 1493, Address: 0x166734, Func Offset: 0xe4
	// Line 1494, Address: 0x166738, Func Offset: 0xe8
	// Line 1496, Address: 0x16673c, Func Offset: 0xec
	// Line 1493, Address: 0x166740, Func Offset: 0xf0
	// Line 1498, Address: 0x16674c, Func Offset: 0xfc
	// Line 1493, Address: 0x166750, Func Offset: 0x100
	// Line 1499, Address: 0x166754, Func Offset: 0x104
	// Line 1493, Address: 0x166758, Func Offset: 0x108
	// Line 1494, Address: 0x16675c, Func Offset: 0x10c
	// Line 1499, Address: 0x166764, Func Offset: 0x114
	// Line 1502, Address: 0x166774, Func Offset: 0x124
	// Line 1500, Address: 0x166778, Func Offset: 0x128
	// Line 1494, Address: 0x166784, Func Offset: 0x134
	// Line 1496, Address: 0x166794, Func Offset: 0x144
	// Line 1494, Address: 0x166798, Func Offset: 0x148
	// Line 1496, Address: 0x16679c, Func Offset: 0x14c
	// Line 1497, Address: 0x1667b0, Func Offset: 0x160
	// Line 1496, Address: 0x1667b4, Func Offset: 0x164
	// Line 1497, Address: 0x1667b8, Func Offset: 0x168
	// Line 1498, Address: 0x1667cc, Func Offset: 0x17c
	// Line 1497, Address: 0x1667d0, Func Offset: 0x180
	// Line 1498, Address: 0x1667d4, Func Offset: 0x184
	// Line 1499, Address: 0x1667e8, Func Offset: 0x198
	// Line 1498, Address: 0x1667ec, Func Offset: 0x19c
	// Line 1499, Address: 0x1667f0, Func Offset: 0x1a0
	// Line 1500, Address: 0x166804, Func Offset: 0x1b4
	// Line 1499, Address: 0x166808, Func Offset: 0x1b8
	// Line 1500, Address: 0x16680c, Func Offset: 0x1bc
	// Line 1502, Address: 0x166824, Func Offset: 0x1d4
	// Line 1503, Address: 0x166828, Func Offset: 0x1d8
	// Line 1504, Address: 0x166840, Func Offset: 0x1f0
	// Line 1506, Address: 0x166854, Func Offset: 0x204
	// Line 1504, Address: 0x166860, Func Offset: 0x210
	// Line 1506, Address: 0x166868, Func Offset: 0x218
	// Line 1504, Address: 0x16686c, Func Offset: 0x21c
	// Line 1506, Address: 0x166870, Func Offset: 0x220
	// Line 1507, Address: 0x166874, Func Offset: 0x224
	// Line 1506, Address: 0x166878, Func Offset: 0x228
	// Line 1507, Address: 0x166880, Func Offset: 0x230
	// Line 1506, Address: 0x166884, Func Offset: 0x234
	// Line 1507, Address: 0x166890, Func Offset: 0x240
	// Line 1506, Address: 0x166894, Func Offset: 0x244
	// Line 1507, Address: 0x166898, Func Offset: 0x248
	// Line 1506, Address: 0x16689c, Func Offset: 0x24c
	// Line 1507, Address: 0x1668a0, Func Offset: 0x250
	// Line 1508, Address: 0x1668b4, Func Offset: 0x264
	// Line 1507, Address: 0x1668b8, Func Offset: 0x268
	// Line 1508, Address: 0x1668c4, Func Offset: 0x274
	// Line 1509, Address: 0x166920, Func Offset: 0x2d0
	// Line 1508, Address: 0x166924, Func Offset: 0x2d4
	// Line 1509, Address: 0x166930, Func Offset: 0x2e0
	// Line 1508, Address: 0x166934, Func Offset: 0x2e4
	// Line 1509, Address: 0x16694c, Func Offset: 0x2fc
	// Line 1511, Address: 0x166954, Func Offset: 0x304
	// Line 1512, Address: 0x16695c, Func Offset: 0x30c
	// Line 1514, Address: 0x166964, Func Offset: 0x314
	// Line 1515, Address: 0x16697c, Func Offset: 0x32c
	// Line 1516, Address: 0x166994, Func Offset: 0x344
	// Line 1517, Address: 0x166998, Func Offset: 0x348
	// Func End, Address: 0x1669b8, Func Offset: 0x368
}

// 
// Start address: 0x1669c0
void draw_upset_logo()
{
	_anon4* v[4];
	int flag;
	int i;
	_anon4 tmp[4];
	int j;
	int alpha;
	float r;
	float a;
	int ia;
	// Line 1521, Address: 0x1669c0, Func Offset: 0
	// Line 1546, Address: 0x1669c4, Func Offset: 0x4
	// Line 1521, Address: 0x1669c8, Func Offset: 0x8
	// Line 1546, Address: 0x1669cc, Func Offset: 0xc
	// Line 1521, Address: 0x1669d0, Func Offset: 0x10
	// Line 1546, Address: 0x1669d4, Func Offset: 0x14
	// Line 1521, Address: 0x1669d8, Func Offset: 0x18
	// Line 1549, Address: 0x1669dc, Func Offset: 0x1c
	// Line 1521, Address: 0x1669e0, Func Offset: 0x20
	// Line 1552, Address: 0x1669e4, Func Offset: 0x24
	// Line 1521, Address: 0x1669e8, Func Offset: 0x28
	// Line 1546, Address: 0x1669f0, Func Offset: 0x30
	// Line 1552, Address: 0x1669f4, Func Offset: 0x34
	// Line 1555, Address: 0x166a00, Func Offset: 0x40
	// Line 1556, Address: 0x166a08, Func Offset: 0x48
	// Line 1558, Address: 0x166a0c, Func Offset: 0x4c
	// Line 1556, Address: 0x166a10, Func Offset: 0x50
	// Line 1558, Address: 0x166a1c, Func Offset: 0x5c
	// Line 1561, Address: 0x166a28, Func Offset: 0x68
	// Line 1562, Address: 0x166a6c, Func Offset: 0xac
	// Line 1563, Address: 0x166aa4, Func Offset: 0xe4
	// Line 1565, Address: 0x166aec, Func Offset: 0x12c
	// Line 1563, Address: 0x166afc, Func Offset: 0x13c
	// Line 1564, Address: 0x166b00, Func Offset: 0x140
	// Line 1565, Address: 0x166b04, Func Offset: 0x144
	// Line 1566, Address: 0x166b14, Func Offset: 0x154
	// Line 1564, Address: 0x166b18, Func Offset: 0x158
	// Line 1565, Address: 0x166b1c, Func Offset: 0x15c
	// Line 1566, Address: 0x166b30, Func Offset: 0x170
	// Line 1568, Address: 0x166b3c, Func Offset: 0x17c
	// Line 1569, Address: 0x166b50, Func Offset: 0x190
	// Line 1570, Address: 0x166b58, Func Offset: 0x198
	// Line 1571, Address: 0x166b5c, Func Offset: 0x19c
	// Line 1572, Address: 0x166b60, Func Offset: 0x1a0
	// Line 1573, Address: 0x166b74, Func Offset: 0x1b4
	// Line 1575, Address: 0x166b7c, Func Offset: 0x1bc
	// Line 1576, Address: 0x166b94, Func Offset: 0x1d4
	// Func End, Address: 0x166bb4, Func Offset: 0x1f4
}

// 
// Start address: 0x166bc0
void draw_large_logo()
{
	int i;
	float scale;
	unsigned int col;
	_anon1* img;
	_anon0* tex;
	unsigned int cbp;
	float s;
	// Line 1580, Address: 0x166bc0, Func Offset: 0
	// Line 1586, Address: 0x166bc4, Func Offset: 0x4
	// Line 1580, Address: 0x166bc8, Func Offset: 0x8
	// Line 1586, Address: 0x166bcc, Func Offset: 0xc
	// Line 1580, Address: 0x166bd0, Func Offset: 0x10
	// Line 1586, Address: 0x166bd4, Func Offset: 0x14
	// Line 1580, Address: 0x166bd8, Func Offset: 0x18
	// Line 1585, Address: 0x166be4, Func Offset: 0x24
	// Line 1580, Address: 0x166be8, Func Offset: 0x28
	// Line 1586, Address: 0x166bec, Func Offset: 0x2c
	// Line 1587, Address: 0x166bf8, Func Offset: 0x38
	// Line 1590, Address: 0x166c0c, Func Offset: 0x4c
	// Line 1591, Address: 0x166c24, Func Offset: 0x64
	// Line 1594, Address: 0x166c38, Func Offset: 0x78
	// Line 1598, Address: 0x166c3c, Func Offset: 0x7c
	// Line 1594, Address: 0x166c40, Func Offset: 0x80
	// Line 1598, Address: 0x166c44, Func Offset: 0x84
	// Line 1599, Address: 0x166c48, Func Offset: 0x88
	// Line 1598, Address: 0x166c4c, Func Offset: 0x8c
	// Line 1599, Address: 0x166c64, Func Offset: 0xa4
	// Line 1600, Address: 0x166c74, Func Offset: 0xb4
	// Line 1602, Address: 0x166c78, Func Offset: 0xb8
	// Line 1604, Address: 0x166c88, Func Offset: 0xc8
	// Line 1602, Address: 0x166c8c, Func Offset: 0xcc
	// Line 1604, Address: 0x166c98, Func Offset: 0xd8
	// Line 1605, Address: 0x166ca0, Func Offset: 0xe0
	// Line 1606, Address: 0x166cac, Func Offset: 0xec
	// Line 1608, Address: 0x166cb8, Func Offset: 0xf8
	// Line 1611, Address: 0x166cc8, Func Offset: 0x108
	// Line 1612, Address: 0x166cd0, Func Offset: 0x110
	// Func End, Address: 0x166cf0, Func Offset: 0x130
}

// 
// Start address: 0x166cf0
void draw_rights()
{
	_anon0* tex;
	unsigned int cbp;
	// Line 1616, Address: 0x166cf0, Func Offset: 0
	// Line 1617, Address: 0x166cf4, Func Offset: 0x4
	// Line 1616, Address: 0x166cf8, Func Offset: 0x8
	// Line 1617, Address: 0x166cfc, Func Offset: 0xc
	// Line 1616, Address: 0x166d00, Func Offset: 0x10
	// Line 1617, Address: 0x166d04, Func Offset: 0x14
	// Line 1618, Address: 0x166d14, Func Offset: 0x24
	// Line 1620, Address: 0x166d24, Func Offset: 0x34
	// Line 1618, Address: 0x166d28, Func Offset: 0x38
	// Line 1620, Address: 0x166d2c, Func Offset: 0x3c
	// Line 1621, Address: 0x166d44, Func Offset: 0x54
	// Line 1622, Address: 0x166d5c, Func Offset: 0x6c
	// Line 1623, Address: 0x166d6c, Func Offset: 0x7c
	// Func End, Address: 0x166d80, Func Offset: 0x90
}

// 
// Start address: 0x166d80
void draw_trial()
{
	_anon0* tex;
	unsigned int cbp;
	// Line 1627, Address: 0x166d80, Func Offset: 0
	// Line 1628, Address: 0x166d84, Func Offset: 0x4
	// Line 1627, Address: 0x166d88, Func Offset: 0x8
	// Line 1628, Address: 0x166d8c, Func Offset: 0xc
	// Line 1627, Address: 0x166d90, Func Offset: 0x10
	// Line 1628, Address: 0x166d94, Func Offset: 0x14
	// Line 1629, Address: 0x166da4, Func Offset: 0x24
	// Line 1631, Address: 0x166db4, Func Offset: 0x34
	// Line 1629, Address: 0x166db8, Func Offset: 0x38
	// Line 1631, Address: 0x166dbc, Func Offset: 0x3c
	// Line 1632, Address: 0x166dd4, Func Offset: 0x54
	// Line 1633, Address: 0x166dec, Func Offset: 0x6c
	// Line 1634, Address: 0x166dfc, Func Offset: 0x7c
	// Func End, Address: 0x166e10, Func Offset: 0x90
}

// 
// Start address: 0x166e10
void misc_TitleBaseDraw()
{
	_anon3* p;
	int num;
	int ret;
	// Line 1643, Address: 0x166e10, Func Offset: 0
	// Line 1645, Address: 0x166e14, Func Offset: 0x4
	// Line 1643, Address: 0x166e18, Func Offset: 0x8
	// Line 1646, Address: 0x166e1c, Func Offset: 0xc
	// Line 1643, Address: 0x166e20, Func Offset: 0x10
	// Line 1645, Address: 0x166e24, Func Offset: 0x14
	// Line 1644, Address: 0x166e28, Func Offset: 0x18
	// Line 1646, Address: 0x166e2c, Func Offset: 0x1c
	// Line 1648, Address: 0x166e34, Func Offset: 0x24
	// Line 1649, Address: 0x166e3c, Func Offset: 0x2c
	// Line 1652, Address: 0x166e40, Func Offset: 0x30
	// Line 1660, Address: 0x166e50, Func Offset: 0x40
	// Line 1663, Address: 0x166e98, Func Offset: 0x88
	// Line 1664, Address: 0x166ea0, Func Offset: 0x90
	// Line 1665, Address: 0x166ea8, Func Offset: 0x98
	// Line 1666, Address: 0x166eb8, Func Offset: 0xa8
	// Line 1668, Address: 0x166ebc, Func Offset: 0xac
	// Line 1670, Address: 0x166ec0, Func Offset: 0xb0
	// Line 1671, Address: 0x166ec8, Func Offset: 0xb8
	// Line 1673, Address: 0x166ed0, Func Offset: 0xc0
	// Line 1676, Address: 0x166ee4, Func Offset: 0xd4
	// Line 1677, Address: 0x166ef0, Func Offset: 0xe0
	// Line 1678, Address: 0x166ef8, Func Offset: 0xe8
	// Line 1679, Address: 0x166f00, Func Offset: 0xf0
	// Line 1680, Address: 0x166f0c, Func Offset: 0xfc
	// Line 1681, Address: 0x166f14, Func Offset: 0x104
	// Line 1683, Address: 0x166f20, Func Offset: 0x110
	// Line 1687, Address: 0x166f28, Func Offset: 0x118
	// Line 1688, Address: 0x166f38, Func Offset: 0x128
	// Line 1691, Address: 0x166f40, Func Offset: 0x130
	// Line 1694, Address: 0x166f48, Func Offset: 0x138
	// Line 1695, Address: 0x166f54, Func Offset: 0x144
	// Line 1696, Address: 0x166f5c, Func Offset: 0x14c
	// Line 1697, Address: 0x166f60, Func Offset: 0x150
	// Line 1698, Address: 0x166f6c, Func Offset: 0x15c
	// Line 1699, Address: 0x166f74, Func Offset: 0x164
	// Line 1700, Address: 0x166f78, Func Offset: 0x168
	// Func End, Address: 0x166f88, Func Offset: 0x178
}

// 
// Start address: 0x166f90
int TitleDrawMain()
{
	int next_step_go;
	float ana_r_x;
	float ana_r_y;
	int next_step;
	char draw_flag;
	int selected;
	// Line 1703, Address: 0x166f90, Func Offset: 0
	// Line 1708, Address: 0x166f94, Func Offset: 0x4
	// Line 1703, Address: 0x166f98, Func Offset: 0x8
	// Line 1707, Address: 0x166fa4, Func Offset: 0x14
	// Line 1708, Address: 0x166fa8, Func Offset: 0x18
	// Line 1709, Address: 0x166fb4, Func Offset: 0x24
	// Line 1711, Address: 0x166fbc, Func Offset: 0x2c
	// Line 1712, Address: 0x166fc4, Func Offset: 0x34
	// Line 1715, Address: 0x167020, Func Offset: 0x90
	// Line 1714, Address: 0x167024, Func Offset: 0x94
	// Line 1715, Address: 0x167028, Func Offset: 0x98
	// Line 1716, Address: 0x167034, Func Offset: 0xa4
	// Line 1719, Address: 0x16703c, Func Offset: 0xac
	// Line 1720, Address: 0x167040, Func Offset: 0xb0
	// Line 1721, Address: 0x167054, Func Offset: 0xc4
	// Line 1722, Address: 0x16705c, Func Offset: 0xcc
	// Line 1724, Address: 0x16708c, Func Offset: 0xfc
	// Line 1726, Address: 0x167094, Func Offset: 0x104
	// Line 1728, Address: 0x16709c, Func Offset: 0x10c
	// Line 1729, Address: 0x1670a0, Func Offset: 0x110
	// Line 1730, Address: 0x1670c0, Func Offset: 0x130
	// Line 1731, Address: 0x1670c4, Func Offset: 0x134
	// Line 1730, Address: 0x1670c8, Func Offset: 0x138
	// Line 1733, Address: 0x1670d0, Func Offset: 0x140
	// Line 1734, Address: 0x167118, Func Offset: 0x188
	// Line 1735, Address: 0x167124, Func Offset: 0x194
	// Line 1734, Address: 0x16712c, Func Offset: 0x19c
	// Line 1735, Address: 0x167130, Func Offset: 0x1a0
	// Line 1734, Address: 0x167134, Func Offset: 0x1a4
	// Line 1736, Address: 0x167140, Func Offset: 0x1b0
	// Line 1737, Address: 0x167148, Func Offset: 0x1b8
	// Line 1739, Address: 0x167150, Func Offset: 0x1c0
	// Line 1743, Address: 0x167158, Func Offset: 0x1c8
	// Line 1747, Address: 0x167178, Func Offset: 0x1e8
	// Line 1748, Address: 0x167188, Func Offset: 0x1f8
	// Line 1749, Address: 0x1671b0, Func Offset: 0x220
	// Line 1750, Address: 0x1671c0, Func Offset: 0x230
	// Line 1753, Address: 0x1671c8, Func Offset: 0x238
	// Line 1754, Address: 0x1671e0, Func Offset: 0x250
	// Line 1755, Address: 0x1671e8, Func Offset: 0x258
	// Line 1756, Address: 0x167210, Func Offset: 0x280
	// Line 1757, Address: 0x16722c, Func Offset: 0x29c
	// Line 1759, Address: 0x167230, Func Offset: 0x2a0
	// Line 1760, Address: 0x167240, Func Offset: 0x2b0
	// Line 1761, Address: 0x16724c, Func Offset: 0x2bc
	// Line 1760, Address: 0x167254, Func Offset: 0x2c4
	// Line 1761, Address: 0x167258, Func Offset: 0x2c8
	// Line 1760, Address: 0x16725c, Func Offset: 0x2cc
	// Line 1762, Address: 0x167264, Func Offset: 0x2d4
	// Line 1763, Address: 0x16726c, Func Offset: 0x2dc
	// Line 1765, Address: 0x167278, Func Offset: 0x2e8
	// Line 1766, Address: 0x167288, Func Offset: 0x2f8
	// Line 1768, Address: 0x16729c, Func Offset: 0x30c
	// Line 1770, Address: 0x1672a4, Func Offset: 0x314
	// Line 1771, Address: 0x1672bc, Func Offset: 0x32c
	// Line 1773, Address: 0x1672c8, Func Offset: 0x338
	// Line 1771, Address: 0x1672d0, Func Offset: 0x340
	// Line 1773, Address: 0x1672e4, Func Offset: 0x354
	// Line 1771, Address: 0x1672e8, Func Offset: 0x358
	// Line 1773, Address: 0x1672f0, Func Offset: 0x360
	// Line 1774, Address: 0x1672f8, Func Offset: 0x368
	// Line 1775, Address: 0x167300, Func Offset: 0x370
	// Line 1777, Address: 0x167308, Func Offset: 0x378
	// Line 1778, Address: 0x16732c, Func Offset: 0x39c
	// Line 1779, Address: 0x167330, Func Offset: 0x3a0
	// Line 1782, Address: 0x167338, Func Offset: 0x3a8
	// Line 1786, Address: 0x167340, Func Offset: 0x3b0
	// Line 1787, Address: 0x16734c, Func Offset: 0x3bc
	// Line 1789, Address: 0x167350, Func Offset: 0x3c0
	// Line 1787, Address: 0x167354, Func Offset: 0x3c4
	// Line 1789, Address: 0x167358, Func Offset: 0x3c8
	// Line 1796, Address: 0x167368, Func Offset: 0x3d8
	// Line 1797, Address: 0x167370, Func Offset: 0x3e0
	// Line 1800, Address: 0x167378, Func Offset: 0x3e8
	// Line 1802, Address: 0x167380, Func Offset: 0x3f0
	// Line 1806, Address: 0x167388, Func Offset: 0x3f8
	// Line 1807, Address: 0x167390, Func Offset: 0x400
	// Line 1810, Address: 0x167398, Func Offset: 0x408
	// Line 1816, Address: 0x1673e8, Func Offset: 0x458
	// Line 1811, Address: 0x1673ec, Func Offset: 0x45c
	// Line 1812, Address: 0x1673f0, Func Offset: 0x460
	// Line 1816, Address: 0x1673f8, Func Offset: 0x468
	// Line 1812, Address: 0x1673fc, Func Offset: 0x46c
	// Line 1814, Address: 0x167400, Func Offset: 0x470
	// Line 1816, Address: 0x167404, Func Offset: 0x474
	// Line 1814, Address: 0x167408, Func Offset: 0x478
	// Line 1815, Address: 0x16740c, Func Offset: 0x47c
	// Line 1816, Address: 0x167414, Func Offset: 0x484
	// Line 1818, Address: 0x167438, Func Offset: 0x4a8
	// Line 1819, Address: 0x16743c, Func Offset: 0x4ac
	// Line 1821, Address: 0x167460, Func Offset: 0x4d0
	// Line 1822, Address: 0x167468, Func Offset: 0x4d8
	// Line 1823, Address: 0x167474, Func Offset: 0x4e4
	// Line 1831, Address: 0x167478, Func Offset: 0x4e8
	// Line 1833, Address: 0x167480, Func Offset: 0x4f0
	// Line 1834, Address: 0x1674a4, Func Offset: 0x514
	// Line 1836, Address: 0x1674ac, Func Offset: 0x51c
	// Line 1842, Address: 0x1674b0, Func Offset: 0x520
	// Line 1844, Address: 0x1674b8, Func Offset: 0x528
	// Line 1845, Address: 0x1674c0, Func Offset: 0x530
	// Line 1846, Address: 0x1674cc, Func Offset: 0x53c
	// Line 1847, Address: 0x1674d4, Func Offset: 0x544
	// Line 1851, Address: 0x1674d8, Func Offset: 0x548
	// Line 1854, Address: 0x1674e0, Func Offset: 0x550
	// Line 1857, Address: 0x1674e8, Func Offset: 0x558
	// Line 1858, Address: 0x1674f8, Func Offset: 0x568
	// Line 1861, Address: 0x167500, Func Offset: 0x570
	// Line 1865, Address: 0x167508, Func Offset: 0x578
	// Line 1867, Address: 0x167520, Func Offset: 0x590
	// Line 1868, Address: 0x167528, Func Offset: 0x598
	// Line 1869, Address: 0x167530, Func Offset: 0x5a0
	// Line 1870, Address: 0x16753c, Func Offset: 0x5ac
	// Line 1872, Address: 0x167540, Func Offset: 0x5b0
	// Line 1873, Address: 0x167548, Func Offset: 0x5b8
	// Func End, Address: 0x167560, Func Offset: 0x5d0
}

// 
// Start address: 0x167560
void lp_init()
{
	int i;
	int particle_cnt;
	sfObj** obj;
	int j;
	sfObj* o;
	void* wk;
	// Line 2005, Address: 0x167560, Func Offset: 0
	// Line 2010, Address: 0x167564, Func Offset: 0x4
	// Line 2005, Address: 0x167568, Func Offset: 0x8
	// Line 2010, Address: 0x16756c, Func Offset: 0xc
	// Line 2005, Address: 0x167570, Func Offset: 0x10
	// Line 2007, Address: 0x167588, Func Offset: 0x28
	// Line 2008, Address: 0x16758c, Func Offset: 0x2c
	// Line 2010, Address: 0x167594, Func Offset: 0x34
	// Line 2011, Address: 0x16759c, Func Offset: 0x3c
	// Line 2014, Address: 0x1675b0, Func Offset: 0x50
	// Line 2017, Address: 0x1675c0, Func Offset: 0x60
	// Line 2018, Address: 0x1675d0, Func Offset: 0x70
	// Line 2022, Address: 0x1675d8, Func Offset: 0x78
	// Line 2025, Address: 0x1675e4, Func Offset: 0x84
	// Line 2026, Address: 0x1675e8, Func Offset: 0x88
	// Line 2028, Address: 0x1675f4, Func Offset: 0x94
	// Line 2030, Address: 0x1675fc, Func Offset: 0x9c
	// Line 2031, Address: 0x167604, Func Offset: 0xa4
	// Line 2034, Address: 0x167610, Func Offset: 0xb0
	// Line 2038, Address: 0x167620, Func Offset: 0xc0
	// Line 2039, Address: 0x167630, Func Offset: 0xd0
	// Func End, Address: 0x167654, Func Offset: 0xf4
}

// 
// Start address: 0x167660
void lp_one_init(_anon2* p)
{
	// Line 2043, Address: 0x167660, Func Offset: 0
	// Line 2044, Address: 0x167670, Func Offset: 0x10
	// Line 2045, Address: 0x167678, Func Offset: 0x18
	// Line 2047, Address: 0x167680, Func Offset: 0x20
	// Line 2050, Address: 0x167684, Func Offset: 0x24
	// Line 2048, Address: 0x167688, Func Offset: 0x28
	// Line 2059, Address: 0x16768c, Func Offset: 0x2c
	// Line 2050, Address: 0x167690, Func Offset: 0x30
	// Line 2051, Address: 0x167694, Func Offset: 0x34
	// Line 2053, Address: 0x167698, Func Offset: 0x38
	// Line 2054, Address: 0x16769c, Func Offset: 0x3c
	// Line 2056, Address: 0x1676a0, Func Offset: 0x40
	// Line 2057, Address: 0x1676a4, Func Offset: 0x44
	// Line 2059, Address: 0x1676a8, Func Offset: 0x48
	// Line 2063, Address: 0x1676b8, Func Offset: 0x58
	// Line 2064, Address: 0x1676c4, Func Offset: 0x64
	// Line 2065, Address: 0x1676cc, Func Offset: 0x6c
	// Line 2066, Address: 0x1676d0, Func Offset: 0x70
	// Func End, Address: 0x1676e0, Func Offset: 0x80
}

// 
// Start address: 0x1676e0
_anon2* lp_get_particle()
{
	_anon2** p;
	int i;
	// Line 2070, Address: 0x1676e0, Func Offset: 0
	// Line 2073, Address: 0x1676e4, Func Offset: 0x4
	// Line 2070, Address: 0x1676e8, Func Offset: 0x8
	// Line 2071, Address: 0x1676f0, Func Offset: 0x10
	// Line 2073, Address: 0x1676f8, Func Offset: 0x18
	// Line 2074, Address: 0x1676fc, Func Offset: 0x1c
	// Line 2075, Address: 0x167704, Func Offset: 0x24
	// Line 2076, Address: 0x167710, Func Offset: 0x30
	// Line 2077, Address: 0x167718, Func Offset: 0x38
	// Line 2081, Address: 0x167720, Func Offset: 0x40
	// Line 2082, Address: 0x167730, Func Offset: 0x50
	// Line 2083, Address: 0x167738, Func Offset: 0x58
	// Func End, Address: 0x167748, Func Offset: 0x68
}

// 
// Start address: 0x167750
int lp_one_update(_anon2* p)
{
	// Line 2088, Address: 0x167750, Func Offset: 0
	// Line 2089, Address: 0x167764, Func Offset: 0x14
	// Line 2090, Address: 0x167774, Func Offset: 0x24
	// Line 2092, Address: 0x167784, Func Offset: 0x34
	// Line 2093, Address: 0x167794, Func Offset: 0x44
	// Line 2094, Address: 0x1677a4, Func Offset: 0x54
	// Line 2095, Address: 0x1677a8, Func Offset: 0x58
	// Line 2096, Address: 0x1677b8, Func Offset: 0x68
	// Line 2097, Address: 0x1677bc, Func Offset: 0x6c
	// Line 2099, Address: 0x1677c0, Func Offset: 0x70
	// Func End, Address: 0x1677c8, Func Offset: 0x78
}

// 
// Start address: 0x1677d0
void lp_all_update()
{
	_anon2** p;
	int i;
	// Line 2103, Address: 0x1677d0, Func Offset: 0
	// Line 2104, Address: 0x1677d4, Func Offset: 0x4
	// Line 2103, Address: 0x1677d8, Func Offset: 0x8
	// Line 2104, Address: 0x1677dc, Func Offset: 0xc
	// Line 2107, Address: 0x1677e0, Func Offset: 0x10
	// Line 2108, Address: 0x1677ec, Func Offset: 0x1c
	// Line 2109, Address: 0x1677f4, Func Offset: 0x24
	// Line 2110, Address: 0x167800, Func Offset: 0x30
	// Line 2114, Address: 0x167808, Func Offset: 0x38
	// Line 2115, Address: 0x167818, Func Offset: 0x48
	// Func End, Address: 0x167824, Func Offset: 0x54
}

// 
// Start address: 0x167830
void lp_all_die()
{
	_anon2** p;
	int i;
	// Line 2120, Address: 0x167830, Func Offset: 0
	// Line 2123, Address: 0x167834, Func Offset: 0x4
	// Line 2120, Address: 0x167838, Func Offset: 0x8
	// Line 2123, Address: 0x16783c, Func Offset: 0xc
	// Line 2124, Address: 0x167844, Func Offset: 0x14
	// Line 2125, Address: 0x16784c, Func Offset: 0x1c
	// Line 2128, Address: 0x167850, Func Offset: 0x20
	// Line 2129, Address: 0x167860, Func Offset: 0x30
	// Func End, Address: 0x167868, Func Offset: 0x38
}

// 
// Start address: 0x167870
void lp_end()
{
	sfObj** obj;
	int i;
	// Line 2133, Address: 0x167870, Func Offset: 0
	// Line 2134, Address: 0x16787c, Func Offset: 0xc
	// Line 2133, Address: 0x167880, Func Offset: 0x10
	// Line 2137, Address: 0x167884, Func Offset: 0x14
	// Line 2139, Address: 0x16788c, Func Offset: 0x1c
	// Line 2140, Address: 0x167894, Func Offset: 0x24
	// Line 2141, Address: 0x16789c, Func Offset: 0x2c
	// Line 2142, Address: 0x1678a4, Func Offset: 0x34
	// Line 2145, Address: 0x1678a8, Func Offset: 0x38
	// Line 2146, Address: 0x1678b8, Func Offset: 0x48
	// Func End, Address: 0x1678cc, Func Offset: 0x5c
}

// 
// Start address: 0x1678d0
void misc_TitleParticleInit()
{
	// Line 2155, Address: 0x1678d0, Func Offset: 0
	// Line 2156, Address: 0x1678d4, Func Offset: 0x4
	// Func End, Address: 0x1678dc, Func Offset: 0xc
}

// 
// Start address: 0x1678e0
void generate_mist()
{
	int i;
	_anon2* p;
	int h;
	int v;
	float height;
	float dy;
	float y;
	float width;
	float dx;
	float x;
	float u0;
	float v0;
	float u1;
	float v1;
	// Line 2163, Address: 0x1678e0, Func Offset: 0
	// Line 2167, Address: 0x1678f0, Func Offset: 0x10
	// Line 2163, Address: 0x1678f4, Func Offset: 0x14
	// Line 2167, Address: 0x167910, Func Offset: 0x30
	// Line 2170, Address: 0x167918, Func Offset: 0x38
	// Line 2171, Address: 0x167920, Func Offset: 0x40
	// Line 2175, Address: 0x167928, Func Offset: 0x48
	// Line 2172, Address: 0x16792c, Func Offset: 0x4c
	// Line 2171, Address: 0x167930, Func Offset: 0x50
	// Line 2173, Address: 0x167934, Func Offset: 0x54
	// Line 2172, Address: 0x167938, Func Offset: 0x58
	// Line 2173, Address: 0x16793c, Func Offset: 0x5c
	// Line 2172, Address: 0x167944, Func Offset: 0x64
	// Line 2173, Address: 0x167948, Func Offset: 0x68
	// Line 2175, Address: 0x16794c, Func Offset: 0x6c
	// Line 2176, Address: 0x167958, Func Offset: 0x78
	// Line 2177, Address: 0x167960, Func Offset: 0x80
	// Line 2176, Address: 0x167964, Func Offset: 0x84
	// Line 2177, Address: 0x167968, Func Offset: 0x88
	// Line 2178, Address: 0x16796c, Func Offset: 0x8c
	// Line 2181, Address: 0x167994, Func Offset: 0xb4
	// Line 2182, Address: 0x1679a0, Func Offset: 0xc0
	// Line 2189, Address: 0x1679a8, Func Offset: 0xc8
	// Line 2187, Address: 0x1679ac, Func Offset: 0xcc
	// Line 2189, Address: 0x1679b0, Func Offset: 0xd0
	// Line 2187, Address: 0x1679b4, Func Offset: 0xd4
	// Line 2183, Address: 0x1679b8, Func Offset: 0xd8
	// Line 2184, Address: 0x1679bc, Func Offset: 0xdc
	// Line 2193, Address: 0x1679c0, Func Offset: 0xe0
	// Line 2185, Address: 0x1679c4, Func Offset: 0xe4
	// Line 2189, Address: 0x1679c8, Func Offset: 0xe8
	// Line 2186, Address: 0x1679cc, Func Offset: 0xec
	// Line 2187, Address: 0x1679d0, Func Offset: 0xf0
	// Line 2191, Address: 0x1679d4, Func Offset: 0xf4
	// Line 2190, Address: 0x1679d8, Func Offset: 0xf8
	// Line 2187, Address: 0x1679dc, Func Offset: 0xfc
	// Line 2190, Address: 0x1679e8, Func Offset: 0x108
	// Line 2193, Address: 0x1679f4, Func Offset: 0x114
	// Line 2194, Address: 0x167a08, Func Offset: 0x128
	// Line 2195, Address: 0x167a0c, Func Offset: 0x12c
	// Line 2196, Address: 0x167a10, Func Offset: 0x130
	// Line 2197, Address: 0x167a28, Func Offset: 0x148
	// Line 2198, Address: 0x167a2c, Func Offset: 0x14c
	// Line 2225, Address: 0x167a30, Func Offset: 0x150
	// Line 2199, Address: 0x167a34, Func Offset: 0x154
	// Line 2200, Address: 0x167a38, Func Offset: 0x158
	// Line 2201, Address: 0x167a3c, Func Offset: 0x15c
	// Line 2225, Address: 0x167a40, Func Offset: 0x160
	// Line 2226, Address: 0x167a54, Func Offset: 0x174
	// Line 2228, Address: 0x167aa8, Func Offset: 0x1c8
	// Line 2229, Address: 0x167abc, Func Offset: 0x1dc
	// Line 2230, Address: 0x167acc, Func Offset: 0x1ec
	// Line 2231, Address: 0x167adc, Func Offset: 0x1fc
	// Func End, Address: 0x167b10, Func Offset: 0x230
}

// 
// Start address: 0x167b10
void exec_mist()
{
	_anon2** p;
	int i;
	float rad;
	float vx;
	float vy;
	float ax;
	float ay;
	float scale;
	float scale_ratio;
	// Line 2235, Address: 0x167b10, Func Offset: 0
	// Line 2237, Address: 0x167b20, Func Offset: 0x10
	// Line 2235, Address: 0x167b24, Func Offset: 0x14
	// Line 2237, Address: 0x167b28, Func Offset: 0x18
	// Line 2235, Address: 0x167b2c, Func Offset: 0x1c
	// Line 2242, Address: 0x167b30, Func Offset: 0x20
	// Line 2235, Address: 0x167b34, Func Offset: 0x24
	// Line 2242, Address: 0x167b3c, Func Offset: 0x2c
	// Line 2243, Address: 0x167b44, Func Offset: 0x34
	// Line 2244, Address: 0x167b4c, Func Offset: 0x3c
	// Line 2245, Address: 0x167b58, Func Offset: 0x48
	// Line 2247, Address: 0x167b5c, Func Offset: 0x4c
	// Line 2248, Address: 0x167b64, Func Offset: 0x54
	// Line 2249, Address: 0x167b74, Func Offset: 0x64
	// Line 2252, Address: 0x167b88, Func Offset: 0x78
	// Line 2249, Address: 0x167b90, Func Offset: 0x80
	// Line 2252, Address: 0x167b94, Func Offset: 0x84
	// Line 2253, Address: 0x167ba0, Func Offset: 0x90
	// Line 2254, Address: 0x167ba4, Func Offset: 0x94
	// Line 2255, Address: 0x167ba8, Func Offset: 0x98
	// Line 2256, Address: 0x167bc4, Func Offset: 0xb4
	// Line 2259, Address: 0x167bc8, Func Offset: 0xb8
	// Line 2260, Address: 0x167bd8, Func Offset: 0xc8
	// Line 2262, Address: 0x167bec, Func Offset: 0xdc
	// Line 2263, Address: 0x167c04, Func Offset: 0xf4
	// Line 2265, Address: 0x167c10, Func Offset: 0x100
	// Line 2263, Address: 0x167c14, Func Offset: 0x104
	// Line 2265, Address: 0x167c28, Func Offset: 0x118
	// Line 2266, Address: 0x167c2c, Func Offset: 0x11c
	// Line 2268, Address: 0x167c34, Func Offset: 0x124
	// Line 2269, Address: 0x167c3c, Func Offset: 0x12c
	// Line 2271, Address: 0x167c40, Func Offset: 0x130
	// Line 2272, Address: 0x167c54, Func Offset: 0x144
	// Line 2271, Address: 0x167c58, Func Offset: 0x148
	// Line 2272, Address: 0x167c88, Func Offset: 0x178
	// Line 2274, Address: 0x167c90, Func Offset: 0x180
	// Line 2280, Address: 0x167c98, Func Offset: 0x188
	// Line 2279, Address: 0x167c9c, Func Offset: 0x18c
	// Line 2280, Address: 0x167ca0, Func Offset: 0x190
	// Line 2281, Address: 0x167ca8, Func Offset: 0x198
	// Line 2284, Address: 0x167cac, Func Offset: 0x19c
	// Line 2286, Address: 0x167cb0, Func Offset: 0x1a0
	// Line 2288, Address: 0x167cc0, Func Offset: 0x1b0
	// Func End, Address: 0x167ce4, Func Offset: 0x1d4
}

// 
// Start address: 0x167cf0
void generate_leak_mist(int obj_num)
{
	int n;
	int i;
	_anon2* p;
	unsigned char a;
	unsigned char c;
	float dx;
	float x;
	float dy;
	float y;
	float u0;
	float v0;
	float u1;
	float v1;
	float rad;
	float vx;
	float vy;
	float ax;
	float ay;
	int timer;
	// Line 2292, Address: 0x167cf0, Func Offset: 0
	// Line 2297, Address: 0x167d24, Func Offset: 0x34
	// Line 2298, Address: 0x167d2c, Func Offset: 0x3c
	// Line 2300, Address: 0x167d30, Func Offset: 0x40
	// Line 2301, Address: 0x167d54, Func Offset: 0x64
	// Line 2304, Address: 0x167d70, Func Offset: 0x80
	// Line 2305, Address: 0x167d78, Func Offset: 0x88
	// Line 2306, Address: 0x167d7c, Func Offset: 0x8c
	// Line 2307, Address: 0x167d80, Func Offset: 0x90
	// Line 2308, Address: 0x167d88, Func Offset: 0x98
	// Line 2310, Address: 0x167d94, Func Offset: 0xa4
	// Line 2311, Address: 0x167d9c, Func Offset: 0xac
	// Line 2312, Address: 0x167dbc, Func Offset: 0xcc
	// Line 2313, Address: 0x167dc0, Func Offset: 0xd0
	// Line 2314, Address: 0x167de0, Func Offset: 0xf0
	// Line 2315, Address: 0x167e08, Func Offset: 0x118
	// Line 2316, Address: 0x167e14, Func Offset: 0x124
	// Line 2315, Address: 0x167e18, Func Offset: 0x128
	// Line 2316, Address: 0x167e1c, Func Offset: 0x12c
	// Line 2315, Address: 0x167e28, Func Offset: 0x138
	// Line 2318, Address: 0x167e38, Func Offset: 0x148
	// Line 2321, Address: 0x167e4c, Func Offset: 0x15c
	// Line 2334, Address: 0x167e74, Func Offset: 0x184
	// Line 2333, Address: 0x167e78, Func Offset: 0x188
	// Line 2329, Address: 0x167e7c, Func Offset: 0x18c
	// Line 2333, Address: 0x167e80, Func Offset: 0x190
	// Line 2324, Address: 0x167e84, Func Offset: 0x194
	// Line 2334, Address: 0x167e88, Func Offset: 0x198
	// Line 2324, Address: 0x167e8c, Func Offset: 0x19c
	// Line 2333, Address: 0x167e90, Func Offset: 0x1a0
	// Line 2324, Address: 0x167e94, Func Offset: 0x1a4
	// Line 2337, Address: 0x167e98, Func Offset: 0x1a8
	// Line 2324, Address: 0x167e9c, Func Offset: 0x1ac
	// Line 2329, Address: 0x167ea0, Func Offset: 0x1b0
	// Line 2334, Address: 0x167ea4, Func Offset: 0x1b4
	// Line 2327, Address: 0x167ea8, Func Offset: 0x1b8
	// Line 2328, Address: 0x167eac, Func Offset: 0x1bc
	// Line 2329, Address: 0x167eb0, Func Offset: 0x1c0
	// Line 2335, Address: 0x167eb4, Func Offset: 0x1c4
	// Line 2330, Address: 0x167eb8, Func Offset: 0x1c8
	// Line 2337, Address: 0x167ebc, Func Offset: 0x1cc
	// Line 2338, Address: 0x167ed0, Func Offset: 0x1e0
	// Line 2339, Address: 0x167ed4, Func Offset: 0x1e4
	// Line 2340, Address: 0x167ed8, Func Offset: 0x1e8
	// Line 2341, Address: 0x167ef0, Func Offset: 0x200
	// Line 2342, Address: 0x167ef4, Func Offset: 0x204
	// Line 2349, Address: 0x167ef8, Func Offset: 0x208
	// Line 2343, Address: 0x167efc, Func Offset: 0x20c
	// Line 2344, Address: 0x167f00, Func Offset: 0x210
	// Line 2345, Address: 0x167f04, Func Offset: 0x214
	// Line 2349, Address: 0x167f08, Func Offset: 0x218
	// Line 2350, Address: 0x167f14, Func Offset: 0x224
	// Line 2352, Address: 0x167f28, Func Offset: 0x238
	// Line 2353, Address: 0x167f44, Func Offset: 0x254
	// Line 2357, Address: 0x167f48, Func Offset: 0x258
	// Line 2360, Address: 0x167f58, Func Offset: 0x268
	// Line 2357, Address: 0x167f5c, Func Offset: 0x26c
	// Line 2358, Address: 0x167f60, Func Offset: 0x270
	// Line 2360, Address: 0x167f64, Func Offset: 0x274
	// Line 2363, Address: 0x167f78, Func Offset: 0x288
	// Line 2360, Address: 0x167f7c, Func Offset: 0x28c
	// Line 2364, Address: 0x167f80, Func Offset: 0x290
	// Line 2360, Address: 0x167f84, Func Offset: 0x294
	// Line 2366, Address: 0x167f88, Func Offset: 0x298
	// Line 2371, Address: 0x167f8c, Func Offset: 0x29c
	// Line 2361, Address: 0x167f90, Func Offset: 0x2a0
	// Line 2371, Address: 0x167f94, Func Offset: 0x2a4
	// Line 2367, Address: 0x167f98, Func Offset: 0x2a8
	// Line 2370, Address: 0x167f9c, Func Offset: 0x2ac
	// Line 2371, Address: 0x167fa0, Func Offset: 0x2b0
	// Line 2373, Address: 0x167fa4, Func Offset: 0x2b4
	// Line 2374, Address: 0x167fbc, Func Offset: 0x2cc
	// Line 2375, Address: 0x167fc0, Func Offset: 0x2d0
	// Func End, Address: 0x167ff8, Func Offset: 0x308
}

// 
// Start address: 0x168000
void exec_leak_mist()
{
	_anon2** p;
	int i;
	float max_timer;
	float ratio;
	float alpha;
	float scale;
	// Line 2379, Address: 0x168000, Func Offset: 0
	// Line 2381, Address: 0x168004, Func Offset: 0x4
	// Line 2379, Address: 0x168008, Func Offset: 0x8
	// Line 2381, Address: 0x16800c, Func Offset: 0xc
	// Line 2384, Address: 0x168010, Func Offset: 0x10
	// Line 2385, Address: 0x168018, Func Offset: 0x18
	// Line 2386, Address: 0x168024, Func Offset: 0x24
	// Line 2387, Address: 0x168030, Func Offset: 0x30
	// Line 2388, Address: 0x168034, Func Offset: 0x34
	// Line 2389, Address: 0x168044, Func Offset: 0x44
	// Line 2393, Address: 0x168058, Func Offset: 0x58
	// Line 2392, Address: 0x16805c, Func Offset: 0x5c
	// Line 2393, Address: 0x168060, Func Offset: 0x60
	// Line 2395, Address: 0x1680bc, Func Offset: 0xbc
	// Line 2397, Address: 0x1680c4, Func Offset: 0xc4
	// Line 2400, Address: 0x1680c8, Func Offset: 0xc8
	// Line 2401, Address: 0x1680cc, Func Offset: 0xcc
	// Line 2403, Address: 0x1680dc, Func Offset: 0xdc
	// Func End, Address: 0x1680e8, Func Offset: 0xe8
}

// 
// Start address: 0x1680f0
void misc_TitleParticleExec()
{
	int obj_num;
	// Line 2406, Address: 0x1680f0, Func Offset: 0
	// Line 2421, Address: 0x1680fc, Func Offset: 0xc
	// Line 2406, Address: 0x168100, Func Offset: 0x10
	// Line 2421, Address: 0x168104, Func Offset: 0x14
	// Line 2423, Address: 0x168124, Func Offset: 0x34
	// Line 2424, Address: 0x168128, Func Offset: 0x38
	// Line 2425, Address: 0x168130, Func Offset: 0x40
	// Line 2427, Address: 0x168138, Func Offset: 0x48
	// Line 2428, Address: 0x16814c, Func Offset: 0x5c
	// Line 2429, Address: 0x168170, Func Offset: 0x80
	// Line 2431, Address: 0x168184, Func Offset: 0x94
	// Line 2433, Address: 0x168188, Func Offset: 0x98
	// Line 2434, Address: 0x168194, Func Offset: 0xa4
	// Line 2435, Address: 0x16819c, Func Offset: 0xac
	// Line 2437, Address: 0x1681a4, Func Offset: 0xb4
	// Line 2438, Address: 0x1681a8, Func Offset: 0xb8
	// Line 2440, Address: 0x1681b4, Func Offset: 0xc4
	// Line 2443, Address: 0x1681bc, Func Offset: 0xcc
	// Line 2444, Address: 0x1681c4, Func Offset: 0xd4
	// Line 2446, Address: 0x1681d0, Func Offset: 0xe0
	// Line 2450, Address: 0x1681d8, Func Offset: 0xe8
	// Line 2451, Address: 0x1681e0, Func Offset: 0xf0
	// Func End, Address: 0x1681ec, Func Offset: 0xfc
}

// 
// Start address: 0x1681f0
void misc_TitleParticleDraw()
{
	int i;
	_anon2** p;
	_anon0* tex;
	unsigned int cbp;
	_anon1 img;
	char flag;
	// Line 2455, Address: 0x1681f0, Func Offset: 0
	// Line 2460, Address: 0x1681f4, Func Offset: 0x4
	// Line 2455, Address: 0x1681f8, Func Offset: 0x8
	// Line 2460, Address: 0x1681fc, Func Offset: 0xc
	// Line 2455, Address: 0x168200, Func Offset: 0x10
	// Line 2460, Address: 0x168204, Func Offset: 0x14
	// Line 2455, Address: 0x168208, Func Offset: 0x18
	// Line 2457, Address: 0x16820c, Func Offset: 0x1c
	// Line 2455, Address: 0x168210, Func Offset: 0x20
	// Line 2460, Address: 0x168214, Func Offset: 0x24
	// Line 2461, Address: 0x168220, Func Offset: 0x30
	// Line 2463, Address: 0x168234, Func Offset: 0x44
	// Line 2464, Address: 0x168244, Func Offset: 0x54
	// Line 2465, Address: 0x168250, Func Offset: 0x60
	// Line 2466, Address: 0x16825c, Func Offset: 0x6c
	// Line 2467, Address: 0x168278, Func Offset: 0x88
	// Line 2468, Address: 0x16828c, Func Offset: 0x9c
	// Line 2469, Address: 0x1682a0, Func Offset: 0xb0
	// Line 2470, Address: 0x1682c0, Func Offset: 0xd0
	// Line 2471, Address: 0x1682d8, Func Offset: 0xe8
	// Line 2472, Address: 0x1682ec, Func Offset: 0xfc
	// Line 2473, Address: 0x1682f0, Func Offset: 0x100
	// Line 2474, Address: 0x16830c, Func Offset: 0x11c
	// Line 2476, Address: 0x168324, Func Offset: 0x134
	// Line 2477, Address: 0x16832c, Func Offset: 0x13c
	// Line 2478, Address: 0x168334, Func Offset: 0x144
	// Line 2481, Address: 0x168344, Func Offset: 0x154
	// Line 2479, Address: 0x168348, Func Offset: 0x158
	// Line 2481, Address: 0x16834c, Func Offset: 0x15c
	// Line 2480, Address: 0x168350, Func Offset: 0x160
	// Line 2481, Address: 0x168354, Func Offset: 0x164
	// Line 2485, Address: 0x16836c, Func Offset: 0x17c
	// Line 2489, Address: 0x1683ac, Func Offset: 0x1bc
	// Line 2490, Address: 0x1683ec, Func Offset: 0x1fc
	// Line 2492, Address: 0x1683fc, Func Offset: 0x20c
	// Line 2494, Address: 0x168400, Func Offset: 0x210
	// Line 2495, Address: 0x168410, Func Offset: 0x220
	// Func End, Address: 0x168428, Func Offset: 0x238
}

// 
// Start address: 0x168430
void misc_TitleParticleEnd()
{
	// Line 2498, Address: 0x168430, Func Offset: 0
	// Line 2499, Address: 0x168438, Func Offset: 0x8
	// Line 2500, Address: 0x168440, Func Offset: 0x10
	// Line 2501, Address: 0x168448, Func Offset: 0x18
	// Func End, Address: 0x168454, Func Offset: 0x24
}

// 
// Start address: 0x168460
void init_str_alpha()
{
	// Line 2513, Address: 0x168460, Func Offset: 0
	// Func End, Address: 0x16846c, Func Offset: 0xc
}

// 
// Start address: 0x168470
int str_fadein()
{
	int rtv;
	// Line 2519, Address: 0x168470, Func Offset: 0
	// Line 2520, Address: 0x168484, Func Offset: 0x14
	// Line 2521, Address: 0x168498, Func Offset: 0x28
	// Line 2522, Address: 0x1684a0, Func Offset: 0x30
	// Line 2521, Address: 0x1684a4, Func Offset: 0x34
	// Line 2525, Address: 0x1684a8, Func Offset: 0x38
	// Func End, Address: 0x1684b0, Func Offset: 0x40
}

// 
// Start address: 0x1684b0
int str_fadeout()
{
	int rtv;
	// Line 2529, Address: 0x1684b0, Func Offset: 0
	// Line 2530, Address: 0x1684c4, Func Offset: 0x14
	// Line 2531, Address: 0x1684d4, Func Offset: 0x24
	// Line 2532, Address: 0x1684d8, Func Offset: 0x28
	// Line 2531, Address: 0x1684dc, Func Offset: 0x2c
	// Line 2535, Address: 0x1684e0, Func Offset: 0x30
	// Func End, Address: 0x1684e8, Func Offset: 0x38
}

// 
// Start address: 0x1684f0
void init_notice()
{
	// Line 2538, Address: 0x1684f0, Func Offset: 0
	// Line 2539, Address: 0x1684f4, Func Offset: 0x4
	// Line 2538, Address: 0x1684f8, Func Offset: 0x8
	// Line 2539, Address: 0x1684fc, Func Offset: 0xc
	// Line 2540, Address: 0x16850c, Func Offset: 0x1c
	// Line 2541, Address: 0x168518, Func Offset: 0x28
	// Line 2544, Address: 0x16854c, Func Offset: 0x5c
	// Line 2545, Address: 0x16856c, Func Offset: 0x7c
	// Line 2546, Address: 0x168580, Func Offset: 0x90
	// Line 2549, Address: 0x16859c, Func Offset: 0xac
	// Func End, Address: 0x1685ac, Func Offset: 0xbc
}

// 
// Start address: 0x1685b0
void draw_notice()
{
	_anon0* tex;
	unsigned int cbp;
	// Line 2552, Address: 0x1685b0, Func Offset: 0
	// Line 2553, Address: 0x1685b4, Func Offset: 0x4
	// Line 2552, Address: 0x1685b8, Func Offset: 0x8
	// Line 2553, Address: 0x1685bc, Func Offset: 0xc
	// Line 2552, Address: 0x1685c0, Func Offset: 0x10
	// Line 2553, Address: 0x1685c4, Func Offset: 0x14
	// Line 2554, Address: 0x1685d4, Func Offset: 0x24
	// Line 2556, Address: 0x1685e4, Func Offset: 0x34
	// Line 2554, Address: 0x1685e8, Func Offset: 0x38
	// Line 2556, Address: 0x1685ec, Func Offset: 0x3c
	// Line 2557, Address: 0x168604, Func Offset: 0x54
	// Line 2558, Address: 0x16861c, Func Offset: 0x6c
	// Line 2559, Address: 0x16862c, Func Offset: 0x7c
	// Func End, Address: 0x168640, Func Offset: 0x90
}

// 
// Start address: 0x168640
int miscTitleNotice()
{
	int rtv;
	int img_fade;
	int str_fade;
	int draw_flag;
	unsigned int count;
	// Line 2563, Address: 0x168640, Func Offset: 0
	// Line 2569, Address: 0x168650, Func Offset: 0x10
	// Line 2570, Address: 0x168658, Func Offset: 0x18
	// Line 2572, Address: 0x168690, Func Offset: 0x50
	// Line 2573, Address: 0x168698, Func Offset: 0x58
	// Line 2574, Address: 0x1686a0, Func Offset: 0x60
	// Line 2575, Address: 0x1686a4, Func Offset: 0x64
	// Line 2576, Address: 0x1686cc, Func Offset: 0x8c
	// Line 2579, Address: 0x1686d4, Func Offset: 0x94
	// Line 2580, Address: 0x1686d8, Func Offset: 0x98
	// Line 2581, Address: 0x1686e0, Func Offset: 0xa0
	// Line 2580, Address: 0x1686e4, Func Offset: 0xa4
	// Line 2581, Address: 0x1686e8, Func Offset: 0xa8
	// Line 2582, Address: 0x168728, Func Offset: 0xe8
	// Line 2584, Address: 0x168730, Func Offset: 0xf0
	// Line 2585, Address: 0x168740, Func Offset: 0x100
	// Line 2586, Address: 0x168750, Func Offset: 0x110
	// Line 2588, Address: 0x168758, Func Offset: 0x118
	// Line 2591, Address: 0x168760, Func Offset: 0x120
	// Line 2592, Address: 0x168788, Func Offset: 0x148
	// Line 2594, Address: 0x1687a0, Func Offset: 0x160
	// Line 2595, Address: 0x1687c8, Func Offset: 0x188
	// Line 2596, Address: 0x1687d8, Func Offset: 0x198
	// Line 2598, Address: 0x1687e0, Func Offset: 0x1a0
	// Line 2601, Address: 0x1687e8, Func Offset: 0x1a8
	// Line 2602, Address: 0x168830, Func Offset: 0x1f0
	// Line 2604, Address: 0x168838, Func Offset: 0x1f8
	// Line 2605, Address: 0x168848, Func Offset: 0x208
	// Line 2606, Address: 0x16884c, Func Offset: 0x20c
	// Line 2607, Address: 0x168850, Func Offset: 0x210
	// Line 2605, Address: 0x168854, Func Offset: 0x214
	// Line 2610, Address: 0x16885c, Func Offset: 0x21c
	// Line 2611, Address: 0x168860, Func Offset: 0x220
	// Line 2613, Address: 0x168868, Func Offset: 0x228
	// Line 2614, Address: 0x168878, Func Offset: 0x238
	// Line 2616, Address: 0x168880, Func Offset: 0x240
	// Line 2621, Address: 0x16889c, Func Offset: 0x25c
	// Line 2624, Address: 0x1688a0, Func Offset: 0x260
	// Line 2626, Address: 0x1688b8, Func Offset: 0x278
	// Line 2627, Address: 0x1688bc, Func Offset: 0x27c
	// Func End, Address: 0x1688d0, Func Offset: 0x290
}

