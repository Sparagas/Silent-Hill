typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef enum _enum_0 : unsigned char;
typedef struct _anon10;
typedef enum _enum_1 : unsigned char;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _sfMenuObjRect;
typedef enum sfMessageColor : unsigned char;
typedef struct _GAME_WORK;
typedef struct _sfMenuObj;
typedef struct _anon15;
typedef struct _anon16;

typedef float(*type_14)(int, int);
typedef int(*type_42)(_anon6*, int);
typedef int(*type_45)();
typedef int(*type_50)();

typedef _anon5 type_0[8];
typedef float type_1[4];
typedef int type_2[3];
typedef int type_3[2];
typedef int type_4[3];
typedef int type_5[11];
typedef int type_6[2];
typedef _anon5* type_7[3];
typedef char type_8[7];
typedef float type_9[4];
typedef int type_10[4];
typedef float type_11[4][4];
typedef int type_12[3];
typedef unsigned char type_13[2];
typedef int type_15[4];
typedef int type_16[2];
typedef int type_17[3];
typedef int type_18[1];
typedef int type_19[2];
typedef int type_20[3];
typedef unsigned char type_21[272];
typedef int type_22[2];
typedef float type_23[4][81];
typedef int type_24[1];
typedef float type_25[4][81];
typedef _anon10 type_26[3];
typedef int type_27[2];
typedef int type_28[2];
typedef unsigned int type_29[384];
typedef int type_30[2];
typedef int type_31[1];
typedef int type_32[2];
typedef int type_33[1];
typedef _anon5 type_34[5];
typedef int type_35[3];
typedef unsigned int type_36[4];
typedef _anon5* type_37[3];
typedef _anon14 type_38[12];
typedef int type_39[3];
typedef int type_40[2];
typedef int type_41[1];
typedef int type_43[3];
typedef int type_44[1];
typedef int type_46[2];
typedef int type_47[1];
typedef int type_48[3];
typedef int type_49[1];
typedef int type_51[2];
typedef int type_52[2];
typedef _anon5 type_53[9];
typedef _anon4 type_54[3];
typedef int type_55[3];
typedef int type_56[2];
typedef int type_57[2];
typedef int type_58[3];
typedef int type_59[2];

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

struct _anon3
{
	_anon4 opt[3];
	_anon4* cur_opt;
	_anon5* cur_item;
	_anon6 option_val;
	_anon6 pre_option_val;
	int active_change_flag;
	int active;
	int next_active;
	int dir;
	int next_step;
	int lang_change_flag;
	int slide_cnt;
	int canceled_flag;
	unsigned int expl_timer;
};

struct _anon4
{
	_anon16 menu;
	int num;
	int id;
	int title_mes_id;
};

struct _anon5
{
	int(*change)(_anon6*, int);
	int(*get_val)();
	int buru_cnt;
	int* MesId_val;
	int MesId_val_num;
	int MesId_item;
	int(*get_expl_mes_id)();
};

struct _anon6
{
	int screen_pos[2];
	char head_motion;
	char hide_gauge;
	char hide_icon;
	char vibration;
	char sound;
	char bgm_vol;
	char se_vol;
	char keyconf;
	char brightness;
	char language;
	char subtitles;
	char blood_col;
	char noise_eff;
	char contrast;
	char cam_reverse;
	char move_parallel;
	char is_walk;
	char pad1[7];
};

struct _anon7
{
	_anon1* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon8
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon9
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon7 tex_data;
	_anon8 clut_data;
	unsigned short ot;
	unsigned short z;
};

enum _enum_0 : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

struct _anon10
{
	float x;
	float y;
	int u;
	int v;
	unsigned int col;
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

struct _anon11
{
	_anon9 base;
	_anon10 v[3];
	float rot;
	float scale;
	int ofs_x;
	int ofs_y;
};

struct _anon12
{
	_anon2 morph;
	unsigned int timer;
};

struct _anon13
{
	_anon9 base;
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

struct _anon14
{
	unsigned int pad;
	int mes_id;
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

enum sfMessageColor : unsigned char
{
	SF_MES_COLOR_WHITE,
	SF_MES_COLOR_BLUE,
	SF_MES_COLOR_RED,
	SF_MES_COLOR_GREEN,
	SF_MES_COLOR_YELLOW,
	SF_MES_COLOR_CYAN,
	SF_MES_COLOR_MAGENTA,
	SF_MES_COLOR_BLACK,
	SF_MES_COLOR_GRAY,
	SF_MES_COLOR_GRADATION,
	SF_MES_COLOR_SALMON,
	SF_MES_COLOR_DEFAULT = 0
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

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

struct _anon15
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _anon16
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum_0 type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon15 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};

unsigned char vib_data[272];
unsigned char volume_alpha_value;
int slide_ofs_x;
_anon6 def_option;
int head_motion_val[3];
int on_off_val[2];
int sound_val[2];
int lang_val[2];
int blood_col_val[3];
int press_val[1];
int volume_val[11];
int run_walk_val[2];
_anon5 option1_item[9];
_anon5 option2_item[8];
int dbg_ext_000_val[3];
int dbg_ext_001_val[2];
int dbg_ext_002_val[2];
int dbg_ext_003_val[4];
_anon5 option3_item[5];
_anon3 option_mng;
float m_dst[4][81];
float m_src[4][81];
unsigned int tri_index[384];
_anon12 door_morph;
_GAME_WORK gamew;
_anon13 opt_bg;
int val_dummy_ext_000;
int val_dummy_ext_001;
int val_dummy_ext_002;
int val_dummy_ext_003;

_anon6* miscOptionGetPtr();
void miscOptionCopy(_anon6* dst, _anon6* src);
int miscOptionGetDummy();
float get_ratio(int cnt, int max_cnt);
int miscOptionGetButtonMesId(unsigned int pad);
int get_expl_mes_id_head_motion();
int get_expl_mes_id_gauge();
int get_expl_mes_id_icon();
int get_expl_mes_id_vibration();
int get_expl_mes_id_sound();
int get_expl_mes_id_bgm();
int get_expl_mes_id_se();
int get_expl_mes_id_dummy();
int get_expl_mes_id_keyconf();
int get_expl_mes_id_brightness();
int get_expl_mes_id_screenpos();
int get_expl_mes_id_language();
int get_expl_mes_id_subtitles();
int get_expl_mes_id_blood();
int get_expl_mes_id_noise();
int get_expl_mes_id_walk_or_run();
int get_expl_mes_id_ext_000();
int get_expl_mes_id_ext_001();
int get_expl_mes_id_ext_002();
int get_expl_mes_id_ext_003();
void morph_reset(_anon2* m);
void morph_move_src_vec();
void morph_init(_anon12* dm);
int morph_update(_anon12* dm);
void morph_draw(_anon12* dm, _anon1* tex, unsigned int cbp);
void optDrawTri(float x, float y, int dir, float size, unsigned int aabbggrr);
void opt_OneVolumeDraw(int val, int x, int y, unsigned int col);
void opt_VolumeAlphaSet(unsigned int alpha);
unsigned int get_volume_col(unsigned int col);
void draw_vol(int val, int x, int y, unsigned int col);
void opt_VolumeDraw(int val, int x, int y, unsigned int col, int buru);
void Mes(int id, int x, int y, unsigned int col, int buru);
void Btn(int id, int x, int y, unsigned int col, int buru);
void miscOptSetBuruCnt(_anon5* opt, int menu_num, int menu_id);
void miscOptClearAllBuruCnt(_anon5* opt, int menu_num);
int miscOptionIsChange(_anon3* mng, int option_mode, int no);
int miscOptionIsChangeAll(_anon3* mng);
void miscOptionSetPreValue(_anon3* mng);
void opt_OptItemInit(_anon3* mng);
void opt_Init(_anon3* mng);
int opt_tex_load();
int opt_TexConstruct();
void opt_MenuBgDraw();
void miscMorphBgInit();
void miscMorphSetAlpha(unsigned char alpha);
void miscMorphBgDraw(_anon1* tex, unsigned int cbp);
void opt_OneItemDraw(_anon5* item, int ofs_x, sfMessageColor mes_col, unsigned int vol_col, int is_focus);
void opt_MenuDraw(_anon3* mng, int option_mode, _anon4* o, _anon5* opt_item, int ofs_x);
void opt_ExplanationDraw(_anon5* item, int x, int y);
int opt_Select(_anon3* mng, _anon4* m, _anon5* opt_item);
int opt_Change(_anon3* mng);
int opt_Exec(_anon3* mng);
int opt_Confirm(_anon3* mng);
int opt_Main(_anon3* mng);
int opt_Destruct(_anon3* mng);
int opt_FadeIn();
float calc_vol(int v);
void miscOptionSettingsToSystem();
void miscOptionWorkColdInit();
void miscOptionWorkLoad(_anon6* src);
void miscOptionWorkSave(_anon6* dst);
void miscOptionStepInit();
int miscOptionMain(int mode);
int change_screen_pos();
int change_headmotion(_anon6* opt, int num);
int change_hidegauge(_anon6* opt, int num);
int change_hideicon(_anon6* opt, int num);
int change_brightness();
int change_keyconf();
int change_vibration(_anon6* opt);
int change_language(_anon6* opt, int num);
int change_subtitles(_anon6* opt);
int change_sound(_anon6* opt);
int change_bgm_vol(_anon6* opt);
int change_se_vol(_anon6* opt);
int change_blood_col(_anon6* opt, int num);
int change_noise_eff(_anon6* opt);
int change_walk_or_run(_anon6* opt);
int change_end();
int change_dummy_ext_000(int num);
int get_dummy_ext_000();
int change_dummy_ext_001(int num);
int get_dummy_ext_001();
int change_dummy_ext_002(int num);
int get_dummy_ext_002();
int change_dummy_ext_003(int num);
int get_dummy_ext_003();

// 
// Start address: 0x17e700
_anon6* miscOptionGetPtr()
{
	// Line 947, Address: 0x17e700, Func Offset: 0
	// Line 948, Address: 0x17e704, Func Offset: 0x4
	// Func End, Address: 0x17e70c, Func Offset: 0xc
}

// 
// Start address: 0x17e710
void miscOptionCopy(_anon6* dst, _anon6* src)
{
	// Line 953, Address: 0x17e710, Func Offset: 0
	// Func End, Address: 0x17e718, Func Offset: 0x8
}

// 
// Start address: 0x17e720
int miscOptionGetDummy()
{
	// Line 960, Address: 0x17e720, Func Offset: 0
	// Func End, Address: 0x17e728, Func Offset: 0x8
}

// 
// Start address: 0x17e730
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 990, Address: 0x17e730, Func Offset: 0
	// Line 992, Address: 0x17e734, Func Offset: 0x4
	// Line 993, Address: 0x17e748, Func Offset: 0x18
	// Line 994, Address: 0x17e760, Func Offset: 0x30
	// Line 1000, Address: 0x17e778, Func Offset: 0x48
	// Func End, Address: 0x17e780, Func Offset: 0x50
}

// 
// Start address: 0x17e780
int miscOptionGetButtonMesId(unsigned int pad)
{
	int i;
	_anon14* h;
	_anon14 btn_tbl[12];
	// Line 1024, Address: 0x17e780, Func Offset: 0
	// Line 1026, Address: 0x17e784, Func Offset: 0x4
	// Line 1024, Address: 0x17e788, Func Offset: 0x8
	// Line 1026, Address: 0x17e78c, Func Offset: 0xc
	// Line 1027, Address: 0x17e790, Func Offset: 0x10
	// Line 1028, Address: 0x17e79c, Func Offset: 0x1c
	// Line 1029, Address: 0x17e7a4, Func Offset: 0x24
	// Line 1031, Address: 0x17e7a8, Func Offset: 0x28
	// Line 1032, Address: 0x17e7b8, Func Offset: 0x38
	// Line 1033, Address: 0x17e7c0, Func Offset: 0x40
	// Func End, Address: 0x17e7c8, Func Offset: 0x48
}

// 
// Start address: 0x17e7d0
int get_expl_mes_id_head_motion()
{
	int id[3];
	// Line 1037, Address: 0x17e7d0, Func Offset: 0
	// Line 1043, Address: 0x17e7d8, Func Offset: 0x8
	// Line 1045, Address: 0x17e7e4, Func Offset: 0x14
	// Line 1044, Address: 0x17e7e8, Func Offset: 0x18
	// Line 1045, Address: 0x17e7fc, Func Offset: 0x2c
	// Func End, Address: 0x17e804, Func Offset: 0x34
}

// 
// Start address: 0x17e810
int get_expl_mes_id_gauge()
{
	int id[2];
	// Line 1049, Address: 0x17e810, Func Offset: 0
	// Line 1054, Address: 0x17e818, Func Offset: 0x8
	// Line 1056, Address: 0x17e824, Func Offset: 0x14
	// Line 1055, Address: 0x17e828, Func Offset: 0x18
	// Line 1056, Address: 0x17e83c, Func Offset: 0x2c
	// Func End, Address: 0x17e844, Func Offset: 0x34
}

// 
// Start address: 0x17e850
int get_expl_mes_id_icon()
{
	int id[2];
	// Line 1060, Address: 0x17e850, Func Offset: 0
	// Line 1065, Address: 0x17e858, Func Offset: 0x8
	// Line 1067, Address: 0x17e864, Func Offset: 0x14
	// Line 1066, Address: 0x17e868, Func Offset: 0x18
	// Line 1067, Address: 0x17e87c, Func Offset: 0x2c
	// Func End, Address: 0x17e884, Func Offset: 0x34
}

// 
// Start address: 0x17e890
int get_expl_mes_id_vibration()
{
	int id[2];
	// Line 1071, Address: 0x17e890, Func Offset: 0
	// Line 1076, Address: 0x17e898, Func Offset: 0x8
	// Line 1078, Address: 0x17e8a4, Func Offset: 0x14
	// Line 1077, Address: 0x17e8a8, Func Offset: 0x18
	// Line 1078, Address: 0x17e8bc, Func Offset: 0x2c
	// Func End, Address: 0x17e8c4, Func Offset: 0x34
}

// 
// Start address: 0x17e8d0
int get_expl_mes_id_sound()
{
	int id[2];
	// Line 1082, Address: 0x17e8d0, Func Offset: 0
	// Line 1087, Address: 0x17e8d8, Func Offset: 0x8
	// Line 1089, Address: 0x17e8e4, Func Offset: 0x14
	// Line 1088, Address: 0x17e8e8, Func Offset: 0x18
	// Line 1089, Address: 0x17e8fc, Func Offset: 0x2c
	// Func End, Address: 0x17e904, Func Offset: 0x34
}

// 
// Start address: 0x17e910
int get_expl_mes_id_bgm()
{
	// Line 1095, Address: 0x17e910, Func Offset: 0
	// Func End, Address: 0x17e918, Func Offset: 0x8
}

// 
// Start address: 0x17e920
int get_expl_mes_id_se()
{
	// Line 1101, Address: 0x17e920, Func Offset: 0
	// Func End, Address: 0x17e928, Func Offset: 0x8
}

// 
// Start address: 0x17e930
int get_expl_mes_id_dummy()
{
	// Line 1109, Address: 0x17e930, Func Offset: 0
	// Func End, Address: 0x17e938, Func Offset: 0x8
}

// 
// Start address: 0x17e940
int get_expl_mes_id_keyconf()
{
	// Line 1115, Address: 0x17e940, Func Offset: 0
	// Func End, Address: 0x17e948, Func Offset: 0x8
}

// 
// Start address: 0x17e950
int get_expl_mes_id_brightness()
{
	// Line 1121, Address: 0x17e950, Func Offset: 0
	// Func End, Address: 0x17e958, Func Offset: 0x8
}

// 
// Start address: 0x17e960
int get_expl_mes_id_screenpos()
{
	// Line 1127, Address: 0x17e960, Func Offset: 0
	// Func End, Address: 0x17e968, Func Offset: 0x8
}

// 
// Start address: 0x17e970
int get_expl_mes_id_language()
{
	// Line 1133, Address: 0x17e970, Func Offset: 0
	// Func End, Address: 0x17e978, Func Offset: 0x8
}

// 
// Start address: 0x17e980
int get_expl_mes_id_subtitles()
{
	int id[2];
	// Line 1137, Address: 0x17e980, Func Offset: 0
	// Line 1142, Address: 0x17e988, Func Offset: 0x8
	// Line 1144, Address: 0x17e994, Func Offset: 0x14
	// Line 1143, Address: 0x17e998, Func Offset: 0x18
	// Line 1144, Address: 0x17e9ac, Func Offset: 0x2c
	// Func End, Address: 0x17e9b4, Func Offset: 0x34
}

// 
// Start address: 0x17e9c0
int get_expl_mes_id_blood()
{
	int id[3];
	// Line 1148, Address: 0x17e9c0, Func Offset: 0
	// Line 1154, Address: 0x17e9c8, Func Offset: 0x8
	// Line 1156, Address: 0x17e9d4, Func Offset: 0x14
	// Line 1155, Address: 0x17e9d8, Func Offset: 0x18
	// Line 1156, Address: 0x17e9ec, Func Offset: 0x2c
	// Func End, Address: 0x17e9f4, Func Offset: 0x34
}

// 
// Start address: 0x17ea00
int get_expl_mes_id_noise()
{
	int id[2];
	// Line 1160, Address: 0x17ea00, Func Offset: 0
	// Line 1165, Address: 0x17ea08, Func Offset: 0x8
	// Line 1167, Address: 0x17ea14, Func Offset: 0x14
	// Line 1166, Address: 0x17ea18, Func Offset: 0x18
	// Line 1167, Address: 0x17ea2c, Func Offset: 0x2c
	// Func End, Address: 0x17ea34, Func Offset: 0x34
}

// 
// Start address: 0x17ea40
int get_expl_mes_id_walk_or_run()
{
	int id[2];
	// Line 1171, Address: 0x17ea40, Func Offset: 0
	// Line 1176, Address: 0x17ea48, Func Offset: 0x8
	// Line 1178, Address: 0x17ea54, Func Offset: 0x14
	// Line 1177, Address: 0x17ea58, Func Offset: 0x18
	// Line 1178, Address: 0x17ea6c, Func Offset: 0x2c
	// Func End, Address: 0x17ea74, Func Offset: 0x34
}

// 
// Start address: 0x17ea80
int get_expl_mes_id_ext_000()
{
	int index;
	int id[3];
	// Line 1182, Address: 0x17ea80, Func Offset: 0
	// Line 1188, Address: 0x17ea88, Func Offset: 0x8
	// Line 1189, Address: 0x17ea90, Func Offset: 0x10
	// Line 1190, Address: 0x17ea94, Func Offset: 0x14
	// Line 1189, Address: 0x17ea98, Func Offset: 0x18
	// Line 1190, Address: 0x17eaa8, Func Offset: 0x28
	// Func End, Address: 0x17eab0, Func Offset: 0x30
}

// 
// Start address: 0x17eab0
int get_expl_mes_id_ext_001()
{
	int index;
	int id[2];
	// Line 1194, Address: 0x17eab0, Func Offset: 0
	// Line 1199, Address: 0x17eab8, Func Offset: 0x8
	// Line 1200, Address: 0x17eac0, Func Offset: 0x10
	// Line 1201, Address: 0x17eac4, Func Offset: 0x14
	// Line 1200, Address: 0x17eac8, Func Offset: 0x18
	// Line 1201, Address: 0x17ead8, Func Offset: 0x28
	// Func End, Address: 0x17eae0, Func Offset: 0x30
}

// 
// Start address: 0x17eae0
int get_expl_mes_id_ext_002()
{
	int index;
	int id[2];
	// Line 1205, Address: 0x17eae0, Func Offset: 0
	// Line 1210, Address: 0x17eae8, Func Offset: 0x8
	// Line 1211, Address: 0x17eaf0, Func Offset: 0x10
	// Line 1212, Address: 0x17eaf4, Func Offset: 0x14
	// Line 1211, Address: 0x17eaf8, Func Offset: 0x18
	// Line 1212, Address: 0x17eb08, Func Offset: 0x28
	// Func End, Address: 0x17eb10, Func Offset: 0x30
}

// 
// Start address: 0x17eb10
int get_expl_mes_id_ext_003()
{
	int index;
	int id[4];
	// Line 1216, Address: 0x17eb10, Func Offset: 0
	// Line 1223, Address: 0x17eb18, Func Offset: 0x8
	// Line 1224, Address: 0x17eb20, Func Offset: 0x10
	// Line 1225, Address: 0x17eb24, Func Offset: 0x14
	// Line 1224, Address: 0x17eb28, Func Offset: 0x18
	// Line 1225, Address: 0x17eb38, Func Offset: 0x28
	// Func End, Address: 0x17eb40, Func Offset: 0x30
}

// 
// Start address: 0x17eb40
void morph_reset(_anon2* m)
{
	int i;
	int j;
	float dx;
	float dy;
	int cnt;
	// Line 1250, Address: 0x17eb40, Func Offset: 0
	// Line 1252, Address: 0x17eb44, Func Offset: 0x4
	// Line 1250, Address: 0x17eb48, Func Offset: 0x8
	// Line 1252, Address: 0x17eb64, Func Offset: 0x24
	// Line 1256, Address: 0x17eb68, Func Offset: 0x28
	// Line 1260, Address: 0x17eb70, Func Offset: 0x30
	// Line 1261, Address: 0x17eb90, Func Offset: 0x50
	// Line 1264, Address: 0x17ebb0, Func Offset: 0x70
	// Line 1267, Address: 0x17ebbc, Func Offset: 0x7c
	// Line 1264, Address: 0x17ebc0, Func Offset: 0x80
	// Line 1267, Address: 0x17ebc4, Func Offset: 0x84
	// Line 1279, Address: 0x17ebc8, Func Offset: 0x88
	// Line 1267, Address: 0x17ebcc, Func Offset: 0x8c
	// Line 1270, Address: 0x17ebd0, Func Offset: 0x90
	// Line 1267, Address: 0x17ebd8, Func Offset: 0x98
	// Line 1272, Address: 0x17ebdc, Func Offset: 0x9c
	// Line 1270, Address: 0x17ebe0, Func Offset: 0xa0
	// Line 1276, Address: 0x17ebe4, Func Offset: 0xa4
	// Line 1285, Address: 0x17ebe8, Func Offset: 0xa8
	// Line 1276, Address: 0x17ebec, Func Offset: 0xac
	// Line 1279, Address: 0x17ebf0, Func Offset: 0xb0
	// Line 1276, Address: 0x17ebf4, Func Offset: 0xb4
	// Line 1284, Address: 0x17ebf8, Func Offset: 0xb8
	// Line 1282, Address: 0x17ebfc, Func Offset: 0xbc
	// Line 1279, Address: 0x17ec00, Func Offset: 0xc0
	// Line 1282, Address: 0x17ec04, Func Offset: 0xc4
	// Line 1285, Address: 0x17ec08, Func Offset: 0xc8
	// Line 1286, Address: 0x17ec14, Func Offset: 0xd4
	// Line 1290, Address: 0x17ec24, Func Offset: 0xe4
	// Line 1291, Address: 0x17ec30, Func Offset: 0xf0
	// Line 1292, Address: 0x17ec38, Func Offset: 0xf8
	// Line 1293, Address: 0x17ec58, Func Offset: 0x118
	// Line 1294, Address: 0x17ec64, Func Offset: 0x124
	// Line 1293, Address: 0x17ec68, Func Offset: 0x128
	// Line 1294, Address: 0x17ec74, Func Offset: 0x134
	// Line 1293, Address: 0x17ec78, Func Offset: 0x138
	// Line 1295, Address: 0x17ec80, Func Offset: 0x140
	// Line 1294, Address: 0x17ec84, Func Offset: 0x144
	// Line 1293, Address: 0x17ec88, Func Offset: 0x148
	// Line 1295, Address: 0x17ec8c, Func Offset: 0x14c
	// Line 1294, Address: 0x17ec90, Func Offset: 0x150
	// Line 1295, Address: 0x17ec94, Func Offset: 0x154
	// Line 1294, Address: 0x17ec98, Func Offset: 0x158
	// Line 1296, Address: 0x17ec9c, Func Offset: 0x15c
	// Line 1293, Address: 0x17eca8, Func Offset: 0x168
	// Line 1294, Address: 0x17ecac, Func Offset: 0x16c
	// Line 1293, Address: 0x17ecb0, Func Offset: 0x170
	// Line 1294, Address: 0x17ecb4, Func Offset: 0x174
	// Line 1295, Address: 0x17ecb8, Func Offset: 0x178
	// Line 1297, Address: 0x17ecbc, Func Offset: 0x17c
	// Line 1299, Address: 0x17ecc8, Func Offset: 0x188
	// Line 1300, Address: 0x17ed10, Func Offset: 0x1d0
	// Line 1301, Address: 0x17ed40, Func Offset: 0x200
	// Line 1300, Address: 0x17ed44, Func Offset: 0x204
	// Line 1301, Address: 0x17ed48, Func Offset: 0x208
	// Line 1302, Address: 0x17ed4c, Func Offset: 0x20c
	// Line 1301, Address: 0x17ed50, Func Offset: 0x210
	// Line 1302, Address: 0x17ed54, Func Offset: 0x214
	// Line 1300, Address: 0x17ed58, Func Offset: 0x218
	// Line 1302, Address: 0x17ed5c, Func Offset: 0x21c
	// Line 1300, Address: 0x17ed60, Func Offset: 0x220
	// Line 1301, Address: 0x17ed74, Func Offset: 0x234
	// Line 1302, Address: 0x17ed78, Func Offset: 0x238
	// Line 1304, Address: 0x17ed7c, Func Offset: 0x23c
	// Line 1305, Address: 0x17ed94, Func Offset: 0x254
	// Line 1306, Address: 0x17eda4, Func Offset: 0x264
	// Line 1309, Address: 0x17edb4, Func Offset: 0x274
	// Line 1310, Address: 0x17edc0, Func Offset: 0x280
	// Line 1311, Address: 0x17edc8, Func Offset: 0x288
	// Line 1312, Address: 0x17ede8, Func Offset: 0x2a8
	// Line 1313, Address: 0x17edf4, Func Offset: 0x2b4
	// Line 1312, Address: 0x17edf8, Func Offset: 0x2b8
	// Line 1313, Address: 0x17ee04, Func Offset: 0x2c4
	// Line 1312, Address: 0x17ee08, Func Offset: 0x2c8
	// Line 1314, Address: 0x17ee10, Func Offset: 0x2d0
	// Line 1313, Address: 0x17ee14, Func Offset: 0x2d4
	// Line 1312, Address: 0x17ee18, Func Offset: 0x2d8
	// Line 1314, Address: 0x17ee1c, Func Offset: 0x2dc
	// Line 1313, Address: 0x17ee20, Func Offset: 0x2e0
	// Line 1314, Address: 0x17ee24, Func Offset: 0x2e4
	// Line 1313, Address: 0x17ee28, Func Offset: 0x2e8
	// Line 1315, Address: 0x17ee2c, Func Offset: 0x2ec
	// Line 1312, Address: 0x17ee38, Func Offset: 0x2f8
	// Line 1313, Address: 0x17ee3c, Func Offset: 0x2fc
	// Line 1312, Address: 0x17ee40, Func Offset: 0x300
	// Line 1313, Address: 0x17ee44, Func Offset: 0x304
	// Line 1314, Address: 0x17ee48, Func Offset: 0x308
	// Line 1316, Address: 0x17ee4c, Func Offset: 0x30c
	// Line 1318, Address: 0x17ee58, Func Offset: 0x318
	// Line 1319, Address: 0x17eea0, Func Offset: 0x360
	// Line 1320, Address: 0x17eed0, Func Offset: 0x390
	// Line 1319, Address: 0x17eed4, Func Offset: 0x394
	// Line 1320, Address: 0x17eed8, Func Offset: 0x398
	// Line 1321, Address: 0x17eedc, Func Offset: 0x39c
	// Line 1320, Address: 0x17eee0, Func Offset: 0x3a0
	// Line 1321, Address: 0x17eee4, Func Offset: 0x3a4
	// Line 1319, Address: 0x17eee8, Func Offset: 0x3a8
	// Line 1321, Address: 0x17eeec, Func Offset: 0x3ac
	// Line 1319, Address: 0x17eef0, Func Offset: 0x3b0
	// Line 1320, Address: 0x17ef04, Func Offset: 0x3c4
	// Line 1321, Address: 0x17ef08, Func Offset: 0x3c8
	// Line 1323, Address: 0x17ef0c, Func Offset: 0x3cc
	// Line 1324, Address: 0x17ef24, Func Offset: 0x3e4
	// Line 1325, Address: 0x17ef34, Func Offset: 0x3f4
	// Line 1326, Address: 0x17ef44, Func Offset: 0x404
	// Line 1327, Address: 0x17ef88, Func Offset: 0x448
	// Func End, Address: 0x17efa8, Func Offset: 0x468
}

// 
// Start address: 0x17efb0
void morph_move_src_vec()
{
	int i;
	int j;
	float ana_r_x;
	float ana_r_y;
	// Line 1331, Address: 0x17efb0, Func Offset: 0
	// Line 1333, Address: 0x17efb4, Func Offset: 0x4
	// Line 1331, Address: 0x17efb8, Func Offset: 0x8
	// Line 1333, Address: 0x17efc0, Func Offset: 0x10
	// Line 1334, Address: 0x17efcc, Func Offset: 0x1c
	// Line 1333, Address: 0x17efd0, Func Offset: 0x20
	// Line 1334, Address: 0x17efd4, Func Offset: 0x24
	// Line 1336, Address: 0x17efec, Func Offset: 0x3c
	// Line 1337, Address: 0x17f004, Func Offset: 0x54
	// Line 1339, Address: 0x17f008, Func Offset: 0x58
	// Line 1341, Address: 0x17f028, Func Offset: 0x78
	// Line 1339, Address: 0x17f02c, Func Offset: 0x7c
	// Line 1341, Address: 0x17f034, Func Offset: 0x84
	// Line 1342, Address: 0x17f048, Func Offset: 0x98
	// Line 1343, Address: 0x17f04c, Func Offset: 0x9c
	// Line 1344, Address: 0x17f050, Func Offset: 0xa0
	// Line 1347, Address: 0x17f064, Func Offset: 0xb4
	// Line 1344, Address: 0x17f068, Func Offset: 0xb8
	// Line 1347, Address: 0x17f06c, Func Offset: 0xbc
	// Line 1344, Address: 0x17f070, Func Offset: 0xc0
	// Line 1347, Address: 0x17f074, Func Offset: 0xc4
	// Line 1344, Address: 0x17f084, Func Offset: 0xd4
	// Line 1347, Address: 0x17f094, Func Offset: 0xe4
	// Line 1348, Address: 0x17f0a0, Func Offset: 0xf0
	// Line 1349, Address: 0x17f0b0, Func Offset: 0x100
	// Line 1353, Address: 0x17f0d0, Func Offset: 0x120
	// Line 1354, Address: 0x17f0dc, Func Offset: 0x12c
	// Line 1353, Address: 0x17f0e0, Func Offset: 0x130
	// Line 1354, Address: 0x17f0e8, Func Offset: 0x138
	// Line 1356, Address: 0x17f0f4, Func Offset: 0x144
	// Line 1357, Address: 0x17f10c, Func Offset: 0x15c
	// Line 1358, Address: 0x17f11c, Func Offset: 0x16c
	// Func End, Address: 0x17f130, Func Offset: 0x180
}

// 
// Start address: 0x17f130
void morph_init(_anon12* dm)
{
	_anon2* m;
	// Line 1392, Address: 0x17f130, Func Offset: 0
	// Line 1393, Address: 0x17f140, Func Offset: 0x10
	// Line 1392, Address: 0x17f144, Func Offset: 0x14
	// Line 1396, Address: 0x17f148, Func Offset: 0x18
	// Line 1398, Address: 0x17f150, Func Offset: 0x20
	// Line 1399, Address: 0x17f194, Func Offset: 0x64
	// Line 1400, Address: 0x17f1a8, Func Offset: 0x78
	// Line 1403, Address: 0x17f1bc, Func Offset: 0x8c
	// Line 1404, Address: 0x17f1d0, Func Offset: 0xa0
	// Line 1407, Address: 0x17f204, Func Offset: 0xd4
	// Line 1410, Address: 0x17f238, Func Offset: 0x108
	// Line 1411, Address: 0x17f24c, Func Offset: 0x11c
	// Line 1414, Address: 0x17f280, Func Offset: 0x150
	// Line 1416, Address: 0x17f2b4, Func Offset: 0x184
	// Line 1417, Address: 0x17f2bc, Func Offset: 0x18c
	// Func End, Address: 0x17f2d8, Func Offset: 0x1a8
}

// 
// Start address: 0x17f2e0
int morph_update(_anon12* dm)
{
	// Line 1420, Address: 0x17f2e0, Func Offset: 0
	// Line 1424, Address: 0x17f2ec, Func Offset: 0xc
	// Line 1427, Address: 0x17f2f4, Func Offset: 0x14
	// Line 1428, Address: 0x17f2fc, Func Offset: 0x1c
	// Func End, Address: 0x17f30c, Func Offset: 0x2c
}

// 
// Start address: 0x17f310
void morph_draw(_anon12* dm, _anon1* tex, unsigned int cbp)
{
	// Line 1431, Address: 0x17f310, Func Offset: 0
	// Line 1434, Address: 0x17f330, Func Offset: 0x20
	// Line 1435, Address: 0x17f33c, Func Offset: 0x2c
	// Line 1437, Address: 0x17f350, Func Offset: 0x40
	// Line 1438, Address: 0x17f360, Func Offset: 0x50
	// Line 1448, Address: 0x17f374, Func Offset: 0x64
	// Line 1450, Address: 0x17f37c, Func Offset: 0x6c
	// Func End, Address: 0x17f394, Func Offset: 0x84
}

// 
// Start address: 0x17f3a0
void optDrawTri(float x, float y, int dir, float size, unsigned int aabbggrr)
{
	float w;
	float h;
	_anon11 tri;
	char flag;
	// Line 1464, Address: 0x17f3a0, Func Offset: 0
	// Line 1469, Address: 0x17f3a4, Func Offset: 0x4
	// Line 1464, Address: 0x17f3a8, Func Offset: 0x8
	// Line 1469, Address: 0x17f3cc, Func Offset: 0x2c
	// Line 1470, Address: 0x17f3e0, Func Offset: 0x40
	// Line 1471, Address: 0x17f3f0, Func Offset: 0x50
	// Line 1472, Address: 0x17f404, Func Offset: 0x64
	// Line 1473, Address: 0x17f424, Func Offset: 0x84
	// Line 1475, Address: 0x17f438, Func Offset: 0x98
	// Line 1477, Address: 0x17f44c, Func Offset: 0xac
	// Line 1476, Address: 0x17f450, Func Offset: 0xb0
	// Line 1477, Address: 0x17f454, Func Offset: 0xb4
	// Line 1478, Address: 0x17f458, Func Offset: 0xb8
	// Line 1480, Address: 0x17f460, Func Offset: 0xc0
	// Line 1481, Address: 0x17f468, Func Offset: 0xc8
	// Line 1483, Address: 0x17f470, Func Offset: 0xd0
	// Line 1484, Address: 0x17f488, Func Offset: 0xe8
	// Line 1486, Address: 0x17f4b8, Func Offset: 0x118
	// Line 1487, Address: 0x17f4f0, Func Offset: 0x150
	// Line 1489, Address: 0x17f4f8, Func Offset: 0x158
	// Line 1490, Address: 0x17f52c, Func Offset: 0x18c
	// Line 1491, Address: 0x17f534, Func Offset: 0x194
	// Line 1492, Address: 0x17f538, Func Offset: 0x198
	// Line 1493, Address: 0x17f570, Func Offset: 0x1d0
	// Line 1495, Address: 0x17f578, Func Offset: 0x1d8
	// Line 1499, Address: 0x17f5b0, Func Offset: 0x210
	// Line 1500, Address: 0x17f5c0, Func Offset: 0x220
	// Func End, Address: 0x17f5e4, Func Offset: 0x244
}

// 
// Start address: 0x17f5f0
void opt_OneVolumeDraw(int val, int x, int y, unsigned int col)
{
	int d;
	_anon13 img;
	char flag;
	// Line 1505, Address: 0x17f5f0, Func Offset: 0
	// Line 1510, Address: 0x17f5f4, Func Offset: 0x4
	// Line 1505, Address: 0x17f5f8, Func Offset: 0x8
	// Line 1508, Address: 0x17f5fc, Func Offset: 0xc
	// Line 1505, Address: 0x17f600, Func Offset: 0x10
	// Line 1510, Address: 0x17f61c, Func Offset: 0x2c
	// Line 1511, Address: 0x17f628, Func Offset: 0x38
	// Line 1512, Address: 0x17f638, Func Offset: 0x48
	// Line 1513, Address: 0x17f64c, Func Offset: 0x5c
	// Line 1514, Address: 0x17f650, Func Offset: 0x60
	// Line 1515, Address: 0x17f68c, Func Offset: 0x9c
	// Line 1516, Address: 0x17f6a8, Func Offset: 0xb8
	// Line 1517, Address: 0x17f6b8, Func Offset: 0xc8
	// Func End, Address: 0x17f6d4, Func Offset: 0xe4
}

// 
// Start address: 0x17f6e0
void opt_VolumeAlphaSet(unsigned int alpha)
{
	// Line 1522, Address: 0x17f6e0, Func Offset: 0
	// Line 1523, Address: 0x17f6e4, Func Offset: 0x4
	// Func End, Address: 0x17f6ec, Func Offset: 0xc
}

// 
// Start address: 0x17f6f0
unsigned int get_volume_col(unsigned int col)
{
	// Line 1527, Address: 0x17f6f0, Func Offset: 0
	// Line 1528, Address: 0x17f704, Func Offset: 0x14
	// Func End, Address: 0x17f70c, Func Offset: 0x1c
}

// 
// Start address: 0x17f710
void draw_vol(int val, int x, int y, unsigned int col)
{
	int i;
	// Line 1532, Address: 0x17f710, Func Offset: 0
	// Line 1535, Address: 0x17f738, Func Offset: 0x28
	// Line 1536, Address: 0x17f740, Func Offset: 0x30
	// Line 1538, Address: 0x17f760, Func Offset: 0x50
	// Line 1539, Address: 0x17f76c, Func Offset: 0x5c
	// Line 1542, Address: 0x17f788, Func Offset: 0x78
	// Line 1543, Address: 0x17f798, Func Offset: 0x88
	// Func End, Address: 0x17f7b8, Func Offset: 0xa8
}

// 
// Start address: 0x17f7c0
void opt_VolumeDraw(int val, int x, int y, unsigned int col, int buru)
{
	// Line 1547, Address: 0x17f7c0, Func Offset: 0
	// Line 1548, Address: 0x17f7e4, Func Offset: 0x24
	// Line 1553, Address: 0x17f7ec, Func Offset: 0x2c
	// Line 1554, Address: 0x17f7f4, Func Offset: 0x34
	// Line 1555, Address: 0x17f804, Func Offset: 0x44
	// Line 1556, Address: 0x17f818, Func Offset: 0x58
	// Line 1557, Address: 0x17f820, Func Offset: 0x60
	// Line 1559, Address: 0x17f828, Func Offset: 0x68
	// Line 1560, Address: 0x17f830, Func Offset: 0x70
	// Line 1562, Address: 0x17f838, Func Offset: 0x78
	// Func End, Address: 0x17f854, Func Offset: 0x94
}

// 
// Start address: 0x17f860
void Mes(int id, int x, int y, unsigned int col, int buru)
{
	int x0;
	int x1;
	// Line 1566, Address: 0x17f860, Func Offset: 0
	// Line 1567, Address: 0x17f888, Func Offset: 0x28
	// Line 1571, Address: 0x17f890, Func Offset: 0x30
	// Line 1576, Address: 0x17f898, Func Offset: 0x38
	// Line 1577, Address: 0x17f8a4, Func Offset: 0x44
	// Line 1578, Address: 0x17f8dc, Func Offset: 0x7c
	// Line 1579, Address: 0x17f914, Func Offset: 0xb4
	// Line 1580, Address: 0x17f91c, Func Offset: 0xbc
	// Line 1582, Address: 0x17f924, Func Offset: 0xc4
	// Line 1584, Address: 0x17f960, Func Offset: 0x100
	// Func End, Address: 0x17f980, Func Offset: 0x120
}

// 
// Start address: 0x17f980
void Btn(int id, int x, int y, unsigned int col, int buru)
{
	// Line 1588, Address: 0x17f980, Func Offset: 0
	// Line 1589, Address: 0x17f9ac, Func Offset: 0x2c
	// Line 1593, Address: 0x17f9b4, Func Offset: 0x34
	// Line 1594, Address: 0x17f9bc, Func Offset: 0x3c
	// Line 1595, Address: 0x17f9d8, Func Offset: 0x58
	// Line 1596, Address: 0x17f9f4, Func Offset: 0x74
	// Line 1597, Address: 0x17f9fc, Func Offset: 0x7c
	// Line 1599, Address: 0x17fa08, Func Offset: 0x88
	// Line 1600, Address: 0x17fa10, Func Offset: 0x90
	// Line 1601, Address: 0x17fa2c, Func Offset: 0xac
	// Line 1602, Address: 0x17fa30, Func Offset: 0xb0
	// Func End, Address: 0x17fa50, Func Offset: 0xd0
}

// 
// Start address: 0x17fa50
void miscOptSetBuruCnt(_anon5* opt, int menu_num, int menu_id)
{
	int i;
	// Line 1607, Address: 0x17fa50, Func Offset: 0
	// Line 1610, Address: 0x17fa6c, Func Offset: 0x1c
	// Line 1613, Address: 0x17fa80, Func Offset: 0x30
	// Line 1614, Address: 0x17fa88, Func Offset: 0x38
	// Line 1616, Address: 0x17faac, Func Offset: 0x5c
	// Line 1617, Address: 0x17fac0, Func Offset: 0x70
	// Func End, Address: 0x17fadc, Func Offset: 0x8c
}

// 
// Start address: 0x17fae0
void miscOptClearAllBuruCnt(_anon5* opt, int menu_num)
{
	int i;
	// Line 1624, Address: 0x17fae0, Func Offset: 0
	// Line 1625, Address: 0x17fb00, Func Offset: 0x20
	// Line 1626, Address: 0x17fb48, Func Offset: 0x68
	// Line 1625, Address: 0x17fb4c, Func Offset: 0x6c
	// Line 1626, Address: 0x17fb50, Func Offset: 0x70
	// Line 1625, Address: 0x17fb54, Func Offset: 0x74
	// Line 1626, Address: 0x17fb58, Func Offset: 0x78
	// Line 1627, Address: 0x17fb68, Func Offset: 0x88
	// Func End, Address: 0x17fb70, Func Offset: 0x90
}

// 
// Start address: 0x17fb70
int miscOptionIsChange(_anon3* mng, int option_mode, int no)
{
	int rtv;
	_anon6* cur;
	_anon6* pre;
	// Line 1642, Address: 0x17fb70, Func Offset: 0
	// Line 1643, Address: 0x17fb74, Func Offset: 0x4
	// Line 1646, Address: 0x17fb78, Func Offset: 0x8
	// Line 1647, Address: 0x17fb80, Func Offset: 0x10
	// Line 1649, Address: 0x17fba8, Func Offset: 0x38
	// Line 1651, Address: 0x17fbd0, Func Offset: 0x60
	// Line 1653, Address: 0x17fbd8, Func Offset: 0x68
	// Line 1655, Address: 0x17fc00, Func Offset: 0x90
	// Line 1657, Address: 0x17fc08, Func Offset: 0x98
	// Line 1658, Address: 0x17fc14, Func Offset: 0xa4
	// Line 1659, Address: 0x17fc1c, Func Offset: 0xac
	// Line 1660, Address: 0x17fc20, Func Offset: 0xb0
	// Line 1661, Address: 0x17fc2c, Func Offset: 0xbc
	// Line 1662, Address: 0x17fc34, Func Offset: 0xc4
	// Line 1663, Address: 0x17fc38, Func Offset: 0xc8
	// Line 1664, Address: 0x17fc44, Func Offset: 0xd4
	// Line 1665, Address: 0x17fc4c, Func Offset: 0xdc
	// Line 1666, Address: 0x17fc50, Func Offset: 0xe0
	// Line 1667, Address: 0x17fc5c, Func Offset: 0xec
	// Line 1668, Address: 0x17fc64, Func Offset: 0xf4
	// Line 1669, Address: 0x17fc68, Func Offset: 0xf8
	// Line 1670, Address: 0x17fc74, Func Offset: 0x104
	// Line 1671, Address: 0x17fc7c, Func Offset: 0x10c
	// Line 1672, Address: 0x17fc80, Func Offset: 0x110
	// Line 1675, Address: 0x17fc8c, Func Offset: 0x11c
	// Line 1676, Address: 0x17fc98, Func Offset: 0x128
	// Line 1677, Address: 0x17fca4, Func Offset: 0x134
	// Line 1678, Address: 0x17fccc, Func Offset: 0x15c
	// Line 1679, Address: 0x17fcd0, Func Offset: 0x160
	// Line 1682, Address: 0x17fd10, Func Offset: 0x1a0
	// Line 1684, Address: 0x17fd18, Func Offset: 0x1a8
	// Line 1685, Address: 0x17fd24, Func Offset: 0x1b4
	// Line 1687, Address: 0x17fd2c, Func Offset: 0x1bc
	// Line 1688, Address: 0x17fd30, Func Offset: 0x1c0
	// Line 1689, Address: 0x17fd3c, Func Offset: 0x1cc
	// Line 1691, Address: 0x17fd44, Func Offset: 0x1d4
	// Line 1692, Address: 0x17fd48, Func Offset: 0x1d8
	// Line 1693, Address: 0x17fd54, Func Offset: 0x1e4
	// Line 1694, Address: 0x17fd5c, Func Offset: 0x1ec
	// Line 1695, Address: 0x17fd60, Func Offset: 0x1f0
	// Line 1696, Address: 0x17fd6c, Func Offset: 0x1fc
	// Line 1697, Address: 0x17fd74, Func Offset: 0x204
	// Line 1698, Address: 0x17fd78, Func Offset: 0x208
	// Line 1699, Address: 0x17fd84, Func Offset: 0x214
	// Line 1700, Address: 0x17fd8c, Func Offset: 0x21c
	// Line 1701, Address: 0x17fd90, Func Offset: 0x220
	// Line 1708, Address: 0x17fda0, Func Offset: 0x230
	// Func End, Address: 0x17fda8, Func Offset: 0x238
}

// 
// Start address: 0x17fdb0
int miscOptionIsChangeAll(_anon3* mng)
{
	int rtv;
	int i;
	int mode;
	int menu_num[3];
	// Line 1712, Address: 0x17fdb0, Func Offset: 0
	// Line 1721, Address: 0x17fdb4, Func Offset: 0x4
	// Line 1712, Address: 0x17fdb8, Func Offset: 0x8
	// Line 1713, Address: 0x17fdc0, Func Offset: 0x10
	// Line 1721, Address: 0x17fdc4, Func Offset: 0x14
	// Line 1722, Address: 0x17fdd0, Func Offset: 0x20
	// Line 1723, Address: 0x17fde0, Func Offset: 0x30
	// Line 1725, Address: 0x17fdfc, Func Offset: 0x4c
	// Line 1727, Address: 0x17fe04, Func Offset: 0x54
	// Line 1728, Address: 0x17fe1c, Func Offset: 0x6c
	// Line 1731, Address: 0x17fe30, Func Offset: 0x80
	// Line 1730, Address: 0x17fe34, Func Offset: 0x84
	// Line 1731, Address: 0x17fe38, Func Offset: 0x88
	// Func End, Address: 0x17fe40, Func Offset: 0x90
}

// 
// Start address: 0x17fe40
void miscOptionSetPreValue(_anon3* mng)
{
	// Line 1735, Address: 0x17fe44, Func Offset: 0x4
	// Line 1737, Address: 0x17fe4c, Func Offset: 0xc
	// Line 1740, Address: 0x17fe58, Func Offset: 0x18
	// Line 1741, Address: 0x17fe60, Func Offset: 0x20
	// Func End, Address: 0x17fe6c, Func Offset: 0x2c
}

// 
// Start address: 0x17fe70
void opt_OptItemInit(_anon3* mng)
{
	int i;
	_sfMenuObjRect rect;
	_anon5* opt_item;
	int n;
	int opt_max;
	int mes_id[3];
	int opt_num[3];
	// Line 1746, Address: 0x17fe70, Func Offset: 0
	// Line 1762, Address: 0x17fe80, Func Offset: 0x10
	// Line 1746, Address: 0x17fe84, Func Offset: 0x14
	// Line 1762, Address: 0x17fe8c, Func Offset: 0x1c
	// Line 1746, Address: 0x17fe90, Func Offset: 0x20
	// Line 1762, Address: 0x17fe94, Func Offset: 0x24
	// Line 1746, Address: 0x17fe98, Func Offset: 0x28
	// Line 1762, Address: 0x17fea0, Func Offset: 0x30
	// Line 1746, Address: 0x17fea4, Func Offset: 0x34
	// Line 1762, Address: 0x17feac, Func Offset: 0x3c
	// Line 1746, Address: 0x17feb0, Func Offset: 0x40
	// Line 1762, Address: 0x17feb4, Func Offset: 0x44
	// Line 1763, Address: 0x17feb8, Func Offset: 0x48
	// Line 1769, Address: 0x17fec4, Func Offset: 0x54
	// Line 1771, Address: 0x17fecc, Func Offset: 0x5c
	// Line 1766, Address: 0x17fed0, Func Offset: 0x60
	// Line 1771, Address: 0x17fed4, Func Offset: 0x64
	// Line 1767, Address: 0x17fed8, Func Offset: 0x68
	// Line 1768, Address: 0x17fedc, Func Offset: 0x6c
	// Line 1771, Address: 0x17fee0, Func Offset: 0x70
	// Line 1772, Address: 0x17fef0, Func Offset: 0x80
	// Line 1773, Address: 0x17fef8, Func Offset: 0x88
	// Line 1777, Address: 0x17ff00, Func Offset: 0x90
	// Line 1773, Address: 0x17ff04, Func Offset: 0x94
	// Line 1777, Address: 0x17ff08, Func Offset: 0x98
	// Line 1774, Address: 0x17ff0c, Func Offset: 0x9c
	// Line 1775, Address: 0x17ff14, Func Offset: 0xa4
	// Line 1777, Address: 0x17ff18, Func Offset: 0xa8
	// Line 1781, Address: 0x17ff20, Func Offset: 0xb0
	// Line 1779, Address: 0x17ff24, Func Offset: 0xb4
	// Line 1781, Address: 0x17ff28, Func Offset: 0xb8
	// Line 1780, Address: 0x17ff2c, Func Offset: 0xbc
	// Line 1781, Address: 0x17ff30, Func Offset: 0xc0
	// Line 1782, Address: 0x17ff38, Func Offset: 0xc8
	// Line 1781, Address: 0x17ff40, Func Offset: 0xd0
	// Line 1782, Address: 0x17ff48, Func Offset: 0xd8
	// Line 1783, Address: 0x17ff50, Func Offset: 0xe0
	// Func End, Address: 0x17ff80, Func Offset: 0x110
}

// 
// Start address: 0x17ff80
void opt_Init(_anon3* mng)
{
	_sfMenuObjRect rect;
	// Line 1787, Address: 0x17ff80, Func Offset: 0
	// Line 1790, Address: 0x17ff8c, Func Offset: 0xc
	// Line 1792, Address: 0x17ff94, Func Offset: 0x14
	// Line 1791, Address: 0x17ff98, Func Offset: 0x18
	// Line 1792, Address: 0x17ff9c, Func Offset: 0x1c
	// Line 1801, Address: 0x17ffa0, Func Offset: 0x20
	// Line 1792, Address: 0x17ffa4, Func Offset: 0x24
	// Line 1801, Address: 0x17ffa8, Func Offset: 0x28
	// Line 1793, Address: 0x17ffac, Func Offset: 0x2c
	// Line 1795, Address: 0x17ffb0, Func Offset: 0x30
	// Line 1794, Address: 0x17ffb4, Func Offset: 0x34
	// Line 1801, Address: 0x17ffb8, Func Offset: 0x38
	// Line 1795, Address: 0x17ffbc, Func Offset: 0x3c
	// Line 1796, Address: 0x17ffc0, Func Offset: 0x40
	// Line 1797, Address: 0x17ffc4, Func Offset: 0x44
	// Line 1798, Address: 0x17ffc8, Func Offset: 0x48
	// Line 1801, Address: 0x17ffcc, Func Offset: 0x4c
	// Line 1802, Address: 0x17ffd4, Func Offset: 0x54
	// Line 1808, Address: 0x17ffe0, Func Offset: 0x60
	// Line 1805, Address: 0x17ffe4, Func Offset: 0x64
	// Line 1808, Address: 0x17ffe8, Func Offset: 0x68
	// Line 1809, Address: 0x17fff4, Func Offset: 0x74
	// Func End, Address: 0x180004, Func Offset: 0x84
}

// 
// Start address: 0x180010
int opt_tex_load()
{
	int rtv;
	// Line 1815, Address: 0x180010, Func Offset: 0
	// Line 1818, Address: 0x18001c, Func Offset: 0xc
	// Line 1819, Address: 0x180024, Func Offset: 0x14
	// Line 1821, Address: 0x180048, Func Offset: 0x38
	// Line 1823, Address: 0x180064, Func Offset: 0x54
	// Line 1825, Address: 0x18006c, Func Offset: 0x5c
	// Line 1827, Address: 0x180074, Func Offset: 0x64
	// Line 1828, Address: 0x180078, Func Offset: 0x68
	// Line 1829, Address: 0x18008c, Func Offset: 0x7c
	// Line 1833, Address: 0x180090, Func Offset: 0x80
	// Line 1835, Address: 0x180098, Func Offset: 0x88
	// Line 1836, Address: 0x18009c, Func Offset: 0x8c
	// Func End, Address: 0x1800ac, Func Offset: 0x9c
}

// 
// Start address: 0x1800b0
int opt_TexConstruct()
{
	// Line 1843, Address: 0x1800b0, Func Offset: 0
	// Line 1845, Address: 0x1800b4, Func Offset: 0x4
	// Line 1843, Address: 0x1800b8, Func Offset: 0x8
	// Line 1845, Address: 0x1800bc, Func Offset: 0xc
	// Line 1846, Address: 0x1800cc, Func Offset: 0x1c
	// Line 1848, Address: 0x180100, Func Offset: 0x50
	// Line 1849, Address: 0x180120, Func Offset: 0x70
	// Line 1851, Address: 0x180134, Func Offset: 0x84
	// Line 1852, Address: 0x180154, Func Offset: 0xa4
	// Line 1853, Address: 0x180168, Func Offset: 0xb8
	// Line 1854, Address: 0x18017c, Func Offset: 0xcc
	// Line 1857, Address: 0x180198, Func Offset: 0xe8
	// Line 1856, Address: 0x1801a0, Func Offset: 0xf0
	// Line 1857, Address: 0x1801a4, Func Offset: 0xf4
	// Func End, Address: 0x1801ac, Func Offset: 0xfc
}

// 
// Start address: 0x1801b0
void opt_MenuBgDraw()
{
	_anon1* tex;
	unsigned int cbp;
	// Line 1861, Address: 0x1801b0, Func Offset: 0
	// Line 1862, Address: 0x1801b4, Func Offset: 0x4
	// Line 1861, Address: 0x1801b8, Func Offset: 0x8
	// Line 1862, Address: 0x1801bc, Func Offset: 0xc
	// Line 1861, Address: 0x1801c0, Func Offset: 0x10
	// Line 1862, Address: 0x1801c4, Func Offset: 0x14
	// Line 1863, Address: 0x1801d4, Func Offset: 0x24
	// Line 1866, Address: 0x1801e4, Func Offset: 0x34
	// Line 1863, Address: 0x1801e8, Func Offset: 0x38
	// Line 1866, Address: 0x1801ec, Func Offset: 0x3c
	// Line 1867, Address: 0x1801fc, Func Offset: 0x4c
	// Line 1868, Address: 0x180204, Func Offset: 0x54
	// Line 1870, Address: 0x180208, Func Offset: 0x58
	// Line 1871, Address: 0x18021c, Func Offset: 0x6c
	// Func End, Address: 0x180230, Func Offset: 0x80
}

// 
// Start address: 0x180230
void miscMorphBgInit()
{
	// Line 1876, Address: 0x180230, Func Offset: 0
	// Func End, Address: 0x18023c, Func Offset: 0xc
}

// 
// Start address: 0x180240
void miscMorphSetAlpha(unsigned char alpha)
{
	// Line 1884, Address: 0x180244, Func Offset: 0x4
	// Func End, Address: 0x180250, Func Offset: 0x10
}

// 
// Start address: 0x180250
void miscMorphBgDraw(_anon1* tex, unsigned int cbp)
{
	// Line 1890, Address: 0x180250, Func Offset: 0
	// Line 1892, Address: 0x180264, Func Offset: 0x14
	// Line 1893, Address: 0x18027c, Func Offset: 0x2c
	// Line 1894, Address: 0x180284, Func Offset: 0x34
	// Line 1896, Address: 0x180288, Func Offset: 0x38
	// Line 1897, Address: 0x18029c, Func Offset: 0x4c
	// Func End, Address: 0x1802b0, Func Offset: 0x60
}

// 
// Start address: 0x1802b0
void opt_OneItemDraw(_anon5* item, int ofs_x, sfMessageColor mes_col, unsigned int vol_col, int is_focus)
{
	_sfMenuObjRect rect;
	int val;
	int x;
	int btn_mes_id;
	// Line 1902, Address: 0x1802b0, Func Offset: 0
	// Line 1903, Address: 0x18031c, Func Offset: 0x6c
	// Line 1908, Address: 0x180320, Func Offset: 0x70
	// Line 1909, Address: 0x180330, Func Offset: 0x80
	// Line 1910, Address: 0x180334, Func Offset: 0x84
	// Line 1911, Address: 0x180338, Func Offset: 0x88
	// Line 1912, Address: 0x180348, Func Offset: 0x98
	// Line 1911, Address: 0x180354, Func Offset: 0xa4
	// Line 1912, Address: 0x180358, Func Offset: 0xa8
	// Line 1915, Address: 0x180360, Func Offset: 0xb0
	// Line 1917, Address: 0x18036c, Func Offset: 0xbc
	// Line 1919, Address: 0x180374, Func Offset: 0xc4
	// Line 1920, Address: 0x180380, Func Offset: 0xd0
	// Line 1922, Address: 0x180394, Func Offset: 0xe4
	// Line 1923, Address: 0x180398, Func Offset: 0xe8
	// Line 1924, Address: 0x1803b0, Func Offset: 0x100
	// Line 1925, Address: 0x1803bc, Func Offset: 0x10c
	// Line 1926, Address: 0x1803c0, Func Offset: 0x110
	// Line 1930, Address: 0x1803d0, Func Offset: 0x120
	// Line 1932, Address: 0x1803dc, Func Offset: 0x12c
	// Line 1935, Address: 0x180404, Func Offset: 0x154
	// Line 1936, Address: 0x180418, Func Offset: 0x168
	// Line 1937, Address: 0x180420, Func Offset: 0x170
	// Line 1936, Address: 0x180424, Func Offset: 0x174
	// Line 1937, Address: 0x180428, Func Offset: 0x178
	// Line 1936, Address: 0x18042c, Func Offset: 0x17c
	// Line 1937, Address: 0x180430, Func Offset: 0x180
	// Line 1936, Address: 0x180440, Func Offset: 0x190
	// Line 1937, Address: 0x180444, Func Offset: 0x194
	// Line 1939, Address: 0x180458, Func Offset: 0x1a8
	// Line 1942, Address: 0x180488, Func Offset: 0x1d8
	// Line 1944, Address: 0x180490, Func Offset: 0x1e0
	// Line 1945, Address: 0x1804b4, Func Offset: 0x204
	// Line 1946, Address: 0x1804bc, Func Offset: 0x20c
	// Line 1945, Address: 0x1804c0, Func Offset: 0x210
	// Line 1946, Address: 0x1804c4, Func Offset: 0x214
	// Line 1945, Address: 0x1804c8, Func Offset: 0x218
	// Line 1946, Address: 0x1804cc, Func Offset: 0x21c
	// Line 1945, Address: 0x1804dc, Func Offset: 0x22c
	// Line 1946, Address: 0x1804e0, Func Offset: 0x230
	// Line 1948, Address: 0x1804f4, Func Offset: 0x244
	// Line 1953, Address: 0x180524, Func Offset: 0x274
	// Line 1954, Address: 0x180528, Func Offset: 0x278
	// Func End, Address: 0x180558, Func Offset: 0x2a8
}

// 
// Start address: 0x180560
void opt_MenuDraw(_anon3* mng, int option_mode, _anon4* o, _anon5* opt_item, int ofs_x)
{
	int i;
	int menu_num;
	_sfMenuObjRect rect;
	int mes_col;
	int is_focus;
	unsigned int vol_col;
	// Line 1958, Address: 0x180560, Func Offset: 0
	// Line 1965, Address: 0x180594, Func Offset: 0x34
	// Line 1958, Address: 0x180598, Func Offset: 0x38
	// Line 1965, Address: 0x18059c, Func Offset: 0x3c
	// Line 1958, Address: 0x1805a0, Func Offset: 0x40
	// Line 1960, Address: 0x1805a8, Func Offset: 0x48
	// Line 1965, Address: 0x1805ac, Func Offset: 0x4c
	// Line 1968, Address: 0x1805bc, Func Offset: 0x5c
	// Line 1972, Address: 0x1805c8, Func Offset: 0x68
	// Line 1970, Address: 0x1805d0, Func Offset: 0x70
	// Line 1976, Address: 0x1805d4, Func Offset: 0x74
	// Line 1977, Address: 0x1805e0, Func Offset: 0x80
	// Line 1978, Address: 0x1805e4, Func Offset: 0x84
	// Line 1980, Address: 0x1805e8, Func Offset: 0x88
	// Line 1983, Address: 0x180600, Func Offset: 0xa0
	// Line 1982, Address: 0x180604, Func Offset: 0xa4
	// Line 1983, Address: 0x180608, Func Offset: 0xa8
	// Line 1984, Address: 0x18060c, Func Offset: 0xac
	// Line 1985, Address: 0x180610, Func Offset: 0xb0
	// Line 1987, Address: 0x180618, Func Offset: 0xb8
	// Line 1988, Address: 0x18061c, Func Offset: 0xbc
	// Line 1990, Address: 0x180620, Func Offset: 0xc0
	// Line 1992, Address: 0x180634, Func Offset: 0xd4
	// Line 1993, Address: 0x180650, Func Offset: 0xf0
	// Line 1995, Address: 0x180660, Func Offset: 0x100
	// Line 1996, Address: 0x180668, Func Offset: 0x108
	// Func End, Address: 0x180698, Func Offset: 0x138
}

// 
// Start address: 0x1806a0
void opt_ExplanationDraw(_anon5* item, int x, int y)
{
	int id;
	// Line 2000, Address: 0x1806a0, Func Offset: 0
	// Line 2001, Address: 0x1806b8, Func Offset: 0x18
	// Line 2002, Address: 0x1806cc, Func Offset: 0x2c
	// Line 2004, Address: 0x1806d8, Func Offset: 0x38
	// Line 2005, Address: 0x1806e0, Func Offset: 0x40
	// Line 2006, Address: 0x1806e8, Func Offset: 0x48
	// Line 2007, Address: 0x180700, Func Offset: 0x60
	// Line 2010, Address: 0x180708, Func Offset: 0x68
	// Func End, Address: 0x180720, Func Offset: 0x80
}

// 
// Start address: 0x180720
int opt_Select(_anon3* mng, _anon4* m, _anon5* opt_item)
{
	int rtv;
	unsigned int pad_menu;
	unsigned int trig_menu;
	unsigned int rep_menu;
	int f_rtv;
	_anon5* item;
	_enum_1 cmd;
	int selected_id;
	int exit_no[3];
	// Line 2013, Address: 0x180720, Func Offset: 0
	// Line 2014, Address: 0x180730, Func Offset: 0x10
	// Line 2013, Address: 0x180734, Func Offset: 0x14
	// Line 2015, Address: 0x180758, Func Offset: 0x38
	// Line 2016, Address: 0x180764, Func Offset: 0x44
	// Line 2017, Address: 0x180770, Func Offset: 0x50
	// Line 2021, Address: 0x180778, Func Offset: 0x58
	// Line 2022, Address: 0x180780, Func Offset: 0x60
	// Line 2023, Address: 0x1807a4, Func Offset: 0x84
	// Line 2024, Address: 0x1807a8, Func Offset: 0x88
	// Line 2026, Address: 0x1807b4, Func Offset: 0x94
	// Line 2024, Address: 0x1807b8, Func Offset: 0x98
	// Line 2026, Address: 0x1807bc, Func Offset: 0x9c
	// Line 2034, Address: 0x1807d0, Func Offset: 0xb0
	// Line 2035, Address: 0x1807f0, Func Offset: 0xd0
	// Line 2038, Address: 0x1807f8, Func Offset: 0xd8
	// Line 2039, Address: 0x180800, Func Offset: 0xe0
	// Line 2048, Address: 0x18080c, Func Offset: 0xec
	// Line 2049, Address: 0x180818, Func Offset: 0xf8
	// Line 2050, Address: 0x180820, Func Offset: 0x100
	// Line 2051, Address: 0x18082c, Func Offset: 0x10c
	// Line 2054, Address: 0x18083c, Func Offset: 0x11c
	// Line 2056, Address: 0x180848, Func Offset: 0x128
	// Line 2057, Address: 0x18084c, Func Offset: 0x12c
	// Line 2058, Address: 0x180858, Func Offset: 0x138
	// Line 2059, Address: 0x180864, Func Offset: 0x144
	// Line 2064, Address: 0x180868, Func Offset: 0x148
	// Line 2066, Address: 0x18087c, Func Offset: 0x15c
	// Line 2068, Address: 0x180888, Func Offset: 0x168
	// Line 2073, Address: 0x180890, Func Offset: 0x170
	// Line 2074, Address: 0x180894, Func Offset: 0x174
	// Line 2076, Address: 0x1808a0, Func Offset: 0x180
	// Line 2079, Address: 0x1808c0, Func Offset: 0x1a0
	// Line 2081, Address: 0x1808d4, Func Offset: 0x1b4
	// Line 2083, Address: 0x1808e4, Func Offset: 0x1c4
	// Line 2084, Address: 0x180924, Func Offset: 0x204
	// Line 2085, Address: 0x180928, Func Offset: 0x208
	// Line 2087, Address: 0x18092c, Func Offset: 0x20c
	// Line 2088, Address: 0x180934, Func Offset: 0x214
	// Line 2090, Address: 0x180938, Func Offset: 0x218
	// Line 2093, Address: 0x180940, Func Offset: 0x220
	// Line 2096, Address: 0x180948, Func Offset: 0x228
	// Line 2101, Address: 0x180950, Func Offset: 0x230
	// Line 2102, Address: 0x180958, Func Offset: 0x238
	// Line 2106, Address: 0x180964, Func Offset: 0x244
	// Line 2107, Address: 0x18096c, Func Offset: 0x24c
	// Line 2109, Address: 0x180974, Func Offset: 0x254
	// Line 2110, Address: 0x180980, Func Offset: 0x260
	// Line 2111, Address: 0x18098c, Func Offset: 0x26c
	// Line 2112, Address: 0x180994, Func Offset: 0x274
	// Line 2114, Address: 0x180998, Func Offset: 0x278
	// Line 2115, Address: 0x1809a4, Func Offset: 0x284
	// Line 2118, Address: 0x1809bc, Func Offset: 0x29c
	// Line 2121, Address: 0x1809c4, Func Offset: 0x2a4
	// Line 2122, Address: 0x1809cc, Func Offset: 0x2ac
	// Line 2124, Address: 0x1809d0, Func Offset: 0x2b0
	// Line 2125, Address: 0x1809dc, Func Offset: 0x2bc
	// Line 2129, Address: 0x1809f0, Func Offset: 0x2d0
	// Line 2131, Address: 0x1809fc, Func Offset: 0x2dc
	// Line 2132, Address: 0x180a00, Func Offset: 0x2e0
	// Line 2134, Address: 0x180a08, Func Offset: 0x2e8
	// Line 2135, Address: 0x180a0c, Func Offset: 0x2ec
	// Func End, Address: 0x180a38, Func Offset: 0x318
}

// 
// Start address: 0x180a40
int opt_Change(_anon3* mng)
{
	int rtv;
	int menu_num;
	float ratio;
	int dst_slide_ofs_x;
	int buru_menu_id;
	_anon5* opt_item;
	_anon5* next_item[3];
	_anon5* dst_item;
	_anon4* dst_opt;
	int dst_active;
	char dir;
	int next_menu_id[3];
	// Line 2138, Address: 0x180a40, Func Offset: 0
	// Line 2155, Address: 0x180a5c, Func Offset: 0x1c
	// Line 2156, Address: 0x180a64, Func Offset: 0x24
	// Line 2159, Address: 0x180a90, Func Offset: 0x50
	// Line 2166, Address: 0x180a9c, Func Offset: 0x5c
	// Line 2167, Address: 0x180aa8, Func Offset: 0x68
	// Line 2168, Address: 0x180aac, Func Offset: 0x6c
	// Line 2169, Address: 0x180ab0, Func Offset: 0x70
	// Line 2171, Address: 0x180ab8, Func Offset: 0x78
	// Line 2172, Address: 0x180abc, Func Offset: 0x7c
	// Line 2175, Address: 0x180ac4, Func Offset: 0x84
	// Line 2177, Address: 0x180af0, Func Offset: 0xb0
	// Line 2178, Address: 0x180af8, Func Offset: 0xb8
	// Line 2177, Address: 0x180afc, Func Offset: 0xbc
	// Line 2178, Address: 0x180b1c, Func Offset: 0xdc
	// Line 2179, Address: 0x180b2c, Func Offset: 0xec
	// Line 2181, Address: 0x180b38, Func Offset: 0xf8
	// Line 2184, Address: 0x180b60, Func Offset: 0x120
	// Line 2191, Address: 0x180b70, Func Offset: 0x130
	// Line 2184, Address: 0x180b74, Func Offset: 0x134
	// Line 2185, Address: 0x180b84, Func Offset: 0x144
	// Line 2186, Address: 0x180ba0, Func Offset: 0x160
	// Line 2187, Address: 0x180bac, Func Offset: 0x16c
	// Line 2188, Address: 0x180bb8, Func Offset: 0x178
	// Line 2191, Address: 0x180bc0, Func Offset: 0x180
	// Line 2193, Address: 0x180bc8, Func Offset: 0x188
	// Line 2197, Address: 0x180bd0, Func Offset: 0x190
	// Line 2198, Address: 0x180bdc, Func Offset: 0x19c
	// Line 2201, Address: 0x180c1c, Func Offset: 0x1dc
	// Line 2202, Address: 0x180c28, Func Offset: 0x1e8
	// Line 2204, Address: 0x180c38, Func Offset: 0x1f8
	// Line 2202, Address: 0x180c3c, Func Offset: 0x1fc
	// Line 2204, Address: 0x180c58, Func Offset: 0x218
	// Line 2202, Address: 0x180c5c, Func Offset: 0x21c
	// Line 2204, Address: 0x180c78, Func Offset: 0x238
	// Line 2206, Address: 0x180c80, Func Offset: 0x240
	// Line 2208, Address: 0x180c88, Func Offset: 0x248
	// Line 2210, Address: 0x180c8c, Func Offset: 0x24c
	// Line 2211, Address: 0x180c94, Func Offset: 0x254
	// Line 2213, Address: 0x180ca0, Func Offset: 0x260
	// Line 2217, Address: 0x180ca8, Func Offset: 0x268
	// Line 2219, Address: 0x180ccc, Func Offset: 0x28c
	// Line 2221, Address: 0x180cd4, Func Offset: 0x294
	// Line 2222, Address: 0x180cd8, Func Offset: 0x298
	// Line 2225, Address: 0x180ce0, Func Offset: 0x2a0
	// Line 2222, Address: 0x180ce4, Func Offset: 0x2a4
	// Line 2228, Address: 0x180ce8, Func Offset: 0x2a8
	// Line 2225, Address: 0x180cf0, Func Offset: 0x2b0
	// Line 2224, Address: 0x180cf4, Func Offset: 0x2b4
	// Line 2225, Address: 0x180cf8, Func Offset: 0x2b8
	// Line 2224, Address: 0x180d00, Func Offset: 0x2c0
	// Line 2225, Address: 0x180d08, Func Offset: 0x2c8
	// Line 2224, Address: 0x180d0c, Func Offset: 0x2cc
	// Line 2225, Address: 0x180d10, Func Offset: 0x2d0
	// Line 2224, Address: 0x180d14, Func Offset: 0x2d4
	// Line 2225, Address: 0x180d18, Func Offset: 0x2d8
	// Line 2228, Address: 0x180d1c, Func Offset: 0x2dc
	// Line 2229, Address: 0x180d28, Func Offset: 0x2e8
	// Line 2230, Address: 0x180d2c, Func Offset: 0x2ec
	// Line 2233, Address: 0x180d30, Func Offset: 0x2f0
	// Line 2235, Address: 0x180d38, Func Offset: 0x2f8
	// Line 2236, Address: 0x180d3c, Func Offset: 0x2fc
	// Func End, Address: 0x180d58, Func Offset: 0x318
}

// 
// Start address: 0x180d60
int opt_Exec(_anon3* mng)
{
	int rtv;
	_anon4* m;
	_anon5* opt_item;
	int sel_id;
	int expl_ok;
	float x;
	float ratio;
	float alpha;
	_anon5* next_item[3];
	// Line 2240, Address: 0x180d60, Func Offset: 0
	// Line 2254, Address: 0x180d64, Func Offset: 0x4
	// Line 2240, Address: 0x180d68, Func Offset: 0x8
	// Line 2254, Address: 0x180d6c, Func Offset: 0xc
	// Line 2240, Address: 0x180d70, Func Offset: 0x10
	// Line 2241, Address: 0x180d80, Func Offset: 0x20
	// Line 2240, Address: 0x180d84, Func Offset: 0x24
	// Line 2244, Address: 0x180d90, Func Offset: 0x30
	// Line 2240, Address: 0x180d94, Func Offset: 0x34
	// Line 2245, Address: 0x180d98, Func Offset: 0x38
	// Line 2240, Address: 0x180d9c, Func Offset: 0x3c
	// Line 2253, Address: 0x180da0, Func Offset: 0x40
	// Line 2254, Address: 0x180da4, Func Offset: 0x44
	// Line 2253, Address: 0x180da8, Func Offset: 0x48
	// Line 2254, Address: 0x180dac, Func Offset: 0x4c
	// Line 2253, Address: 0x180db0, Func Offset: 0x50
	// Line 2254, Address: 0x180db4, Func Offset: 0x54
	// Line 2253, Address: 0x180db8, Func Offset: 0x58
	// Line 2257, Address: 0x180dbc, Func Offset: 0x5c
	// Line 2258, Address: 0x180dc4, Func Offset: 0x64
	// Line 2260, Address: 0x180df0, Func Offset: 0x90
	// Line 2261, Address: 0x180dfc, Func Offset: 0x9c
	// Line 2264, Address: 0x180e04, Func Offset: 0xa4
	// Line 2266, Address: 0x180e08, Func Offset: 0xa8
	// Line 2268, Address: 0x180e14, Func Offset: 0xb4
	// Line 2269, Address: 0x180e64, Func Offset: 0x104
	// Line 2270, Address: 0x180e70, Func Offset: 0x110
	// Line 2271, Address: 0x180e80, Func Offset: 0x120
	// Line 2272, Address: 0x180e88, Func Offset: 0x128
	// Line 2273, Address: 0x180e90, Func Offset: 0x130
	// Line 2274, Address: 0x180e94, Func Offset: 0x134
	// Line 2276, Address: 0x180e98, Func Offset: 0x138
	// Line 2279, Address: 0x180ea0, Func Offset: 0x140
	// Line 2280, Address: 0x180eb0, Func Offset: 0x150
	// Line 2284, Address: 0x180eb8, Func Offset: 0x158
	// Line 2287, Address: 0x180ec0, Func Offset: 0x160
	// Line 2290, Address: 0x180edc, Func Offset: 0x17c
	// Line 2295, Address: 0x180ee4, Func Offset: 0x184
	// Line 2296, Address: 0x180f14, Func Offset: 0x1b4
	// Line 2299, Address: 0x180f44, Func Offset: 0x1e4
	// Line 2298, Address: 0x180f48, Func Offset: 0x1e8
	// Line 2296, Address: 0x180f4c, Func Offset: 0x1ec
	// Line 2299, Address: 0x180f50, Func Offset: 0x1f0
	// Line 2296, Address: 0x180f58, Func Offset: 0x1f8
	// Line 2299, Address: 0x180f5c, Func Offset: 0x1fc
	// Line 2300, Address: 0x180f60, Func Offset: 0x200
	// Line 2301, Address: 0x180f70, Func Offset: 0x210
	// Line 2302, Address: 0x180f90, Func Offset: 0x230
	// Line 2304, Address: 0x180f98, Func Offset: 0x238
	// Line 2305, Address: 0x180fa4, Func Offset: 0x244
	// Line 2309, Address: 0x180fa8, Func Offset: 0x248
	// Line 2312, Address: 0x180fd0, Func Offset: 0x270
	// Line 2314, Address: 0x180fec, Func Offset: 0x28c
	// Line 2317, Address: 0x181034, Func Offset: 0x2d4
	// Line 2319, Address: 0x181094, Func Offset: 0x334
	// Line 2320, Address: 0x181098, Func Offset: 0x338
	// Func End, Address: 0x1810c4, Func Offset: 0x364
}

// 
// Start address: 0x1810d0
int opt_Confirm(_anon3* mng)
{
	int rtv;
	int back_to_option;
	_anon16 select;
	int selected_id;
	// Line 2325, Address: 0x1810d0, Func Offset: 0
	// Line 2327, Address: 0x1810e4, Func Offset: 0x14
	// Line 2344, Address: 0x1810f0, Func Offset: 0x20
	// Line 2345, Address: 0x1810f8, Func Offset: 0x28
	// Line 2348, Address: 0x181130, Func Offset: 0x60
	// Line 2349, Address: 0x181140, Func Offset: 0x70
	// Line 2350, Address: 0x181148, Func Offset: 0x78
	// Line 2355, Address: 0x181150, Func Offset: 0x80
	// Line 2358, Address: 0x181158, Func Offset: 0x88
	// Line 2361, Address: 0x181160, Func Offset: 0x90
	// Line 2363, Address: 0x181170, Func Offset: 0xa0
	// Line 2367, Address: 0x181178, Func Offset: 0xa8
	// Line 2369, Address: 0x18118c, Func Offset: 0xbc
	// Line 2371, Address: 0x181194, Func Offset: 0xc4
	// Line 2372, Address: 0x18119c, Func Offset: 0xcc
	// Line 2373, Address: 0x1811a8, Func Offset: 0xd8
	// Line 2375, Address: 0x1811b0, Func Offset: 0xe0
	// Line 2377, Address: 0x1811c8, Func Offset: 0xf8
	// Line 2379, Address: 0x1811dc, Func Offset: 0x10c
	// Line 2377, Address: 0x1811e0, Func Offset: 0x110
	// Line 2379, Address: 0x1811e4, Func Offset: 0x114
	// Line 2383, Address: 0x1811ec, Func Offset: 0x11c
	// Line 2384, Address: 0x1811f8, Func Offset: 0x128
	// Line 2386, Address: 0x181200, Func Offset: 0x130
	// Line 2387, Address: 0x181214, Func Offset: 0x144
	// Line 2389, Address: 0x18121c, Func Offset: 0x14c
	// Line 2390, Address: 0x181220, Func Offset: 0x150
	// Line 2393, Address: 0x181228, Func Offset: 0x158
	// Line 2396, Address: 0x181230, Func Offset: 0x160
	// Line 2397, Address: 0x18123c, Func Offset: 0x16c
	// Line 2399, Address: 0x18124c, Func Offset: 0x17c
	// Line 2401, Address: 0x181258, Func Offset: 0x188
	// Line 2404, Address: 0x18125c, Func Offset: 0x18c
	// Line 2406, Address: 0x181260, Func Offset: 0x190
	// Line 2408, Address: 0x181268, Func Offset: 0x198
	// Line 2409, Address: 0x18126c, Func Offset: 0x19c
	// Func End, Address: 0x181280, Func Offset: 0x1b0
}

// 
// Start address: 0x181280
int opt_Main(_anon3* mng)
{
	int rtv;
	int depth;
	// Line 2414, Address: 0x181280, Func Offset: 0
	// Line 2419, Address: 0x181294, Func Offset: 0x14
	// Line 2421, Address: 0x18129c, Func Offset: 0x1c
	// Line 2422, Address: 0x1812a4, Func Offset: 0x24
	// Line 2424, Address: 0x1812d0, Func Offset: 0x50
	// Line 2425, Address: 0x1812d8, Func Offset: 0x58
	// Line 2429, Address: 0x1812e0, Func Offset: 0x60
	// Line 2430, Address: 0x1812f8, Func Offset: 0x78
	// Line 2431, Address: 0x1812fc, Func Offset: 0x7c
	// Line 2433, Address: 0x181304, Func Offset: 0x84
	// Line 2435, Address: 0x18130c, Func Offset: 0x8c
	// Line 2436, Address: 0x181310, Func Offset: 0x90
	// Line 2437, Address: 0x181318, Func Offset: 0x98
	// Line 2440, Address: 0x181320, Func Offset: 0xa0
	// Line 2441, Address: 0x18135c, Func Offset: 0xdc
	// Line 2443, Address: 0x181360, Func Offset: 0xe0
	// Line 2444, Address: 0x181368, Func Offset: 0xe8
	// Line 2447, Address: 0x181370, Func Offset: 0xf0
	// Line 2448, Address: 0x181374, Func Offset: 0xf4
	// Line 2449, Address: 0x18137c, Func Offset: 0xfc
	// Line 2450, Address: 0x181384, Func Offset: 0x104
	// Line 2452, Address: 0x181388, Func Offset: 0x108
	// Line 2453, Address: 0x18138c, Func Offset: 0x10c
	// Line 2454, Address: 0x181394, Func Offset: 0x114
	// Line 2455, Address: 0x18139c, Func Offset: 0x11c
	// Line 2457, Address: 0x1813a0, Func Offset: 0x120
	// Line 2458, Address: 0x1813a4, Func Offset: 0x124
	// Line 2461, Address: 0x1813ac, Func Offset: 0x12c
	// Line 2463, Address: 0x1813b4, Func Offset: 0x134
	// Line 2464, Address: 0x1813b8, Func Offset: 0x138
	// Line 2465, Address: 0x1813dc, Func Offset: 0x15c
	// Line 2466, Address: 0x1813e0, Func Offset: 0x160
	// Line 2467, Address: 0x1813e8, Func Offset: 0x168
	// Line 2469, Address: 0x1813f0, Func Offset: 0x170
	// Line 2472, Address: 0x1813f8, Func Offset: 0x178
	// Line 2475, Address: 0x181400, Func Offset: 0x180
	// Line 2476, Address: 0x181420, Func Offset: 0x1a0
	// Line 2478, Address: 0x181428, Func Offset: 0x1a8
	// Line 2480, Address: 0x181434, Func Offset: 0x1b4
	// Line 2481, Address: 0x18143c, Func Offset: 0x1bc
	// Line 2491, Address: 0x181440, Func Offset: 0x1c0
	// Line 2494, Address: 0x181444, Func Offset: 0x1c4
	// Line 2495, Address: 0x181448, Func Offset: 0x1c8
	// Line 2498, Address: 0x181450, Func Offset: 0x1d0
	// Line 2500, Address: 0x18145c, Func Offset: 0x1dc
	// Line 2501, Address: 0x181460, Func Offset: 0x1e0
	// Func End, Address: 0x181474, Func Offset: 0x1f4
}

// 
// Start address: 0x181480
int opt_Destruct(_anon3* mng)
{
	int i;
	// Line 2505, Address: 0x181480, Func Offset: 0
	// Line 2508, Address: 0x181498, Func Offset: 0x18
	// Line 2509, Address: 0x1814a0, Func Offset: 0x20
	// Line 2510, Address: 0x1814a8, Func Offset: 0x28
	// Line 2509, Address: 0x1814ac, Func Offset: 0x2c
	// Line 2510, Address: 0x1814b0, Func Offset: 0x30
	// Line 2513, Address: 0x1814bc, Func Offset: 0x3c
	// Line 2515, Address: 0x1814c8, Func Offset: 0x48
	// Line 2519, Address: 0x1814d0, Func Offset: 0x50
	// Line 2518, Address: 0x1814d8, Func Offset: 0x58
	// Line 2519, Address: 0x1814dc, Func Offset: 0x5c
	// Func End, Address: 0x1814ec, Func Offset: 0x6c
}

// 
// Start address: 0x1814f0
int opt_FadeIn()
{
	int rtv;
	int depth;
	// Line 2523, Address: 0x1814f0, Func Offset: 0
	// Line 2527, Address: 0x1814fc, Func Offset: 0xc
	// Line 2528, Address: 0x181504, Func Offset: 0x14
	// Line 2530, Address: 0x181528, Func Offset: 0x38
	// Line 2531, Address: 0x181530, Func Offset: 0x40
	// Line 2534, Address: 0x181538, Func Offset: 0x48
	// Line 2535, Address: 0x181550, Func Offset: 0x60
	// Line 2536, Address: 0x181554, Func Offset: 0x64
	// Line 2535, Address: 0x181558, Func Offset: 0x68
	// Line 2539, Address: 0x18155c, Func Offset: 0x6c
	// Line 2540, Address: 0x181560, Func Offset: 0x70
	// Line 2543, Address: 0x181568, Func Offset: 0x78
	// Line 2545, Address: 0x181574, Func Offset: 0x84
	// Line 2546, Address: 0x181578, Func Offset: 0x88
	// Func End, Address: 0x181588, Func Offset: 0x98
}

// 
// Start address: 0x181590
float calc_vol(int v)
{
	float vol;
	// Line 2551, Address: 0x181590, Func Offset: 0
	// Line 2553, Address: 0x1815a0, Func Offset: 0x10
	// Line 2551, Address: 0x1815a4, Func Offset: 0x14
	// Line 2553, Address: 0x1815a8, Func Offset: 0x18
	// Line 2554, Address: 0x1815c0, Func Offset: 0x30
	// Line 2555, Address: 0x1815c4, Func Offset: 0x34
	// Line 2556, Address: 0x1815c8, Func Offset: 0x38
	// Line 2557, Address: 0x1815e0, Func Offset: 0x50
	// Line 2558, Address: 0x1815e4, Func Offset: 0x54
	// Line 2560, Address: 0x1815e8, Func Offset: 0x58
	// Func End, Address: 0x1815f0, Func Offset: 0x60
}

// 
// Start address: 0x1815f0
void miscOptionSettingsToSystem()
{
	// Line 2567, Address: 0x1815f0, Func Offset: 0
	// Line 2571, Address: 0x1815f4, Func Offset: 0x4
	// Line 2567, Address: 0x1815f8, Func Offset: 0x8
	// Line 2571, Address: 0x1815fc, Func Offset: 0xc
	// Line 2574, Address: 0x181604, Func Offset: 0x14
	// Line 2575, Address: 0x181610, Func Offset: 0x20
	// Line 2578, Address: 0x18161c, Func Offset: 0x2c
	// Line 2582, Address: 0x181630, Func Offset: 0x40
	// Line 2583, Address: 0x181644, Func Offset: 0x54
	// Line 2584, Address: 0x18164c, Func Offset: 0x5c
	// Line 2586, Address: 0x181658, Func Offset: 0x68
	// Line 2589, Address: 0x181660, Func Offset: 0x70
	// Line 2590, Address: 0x181674, Func Offset: 0x84
	// Line 2591, Address: 0x181688, Func Offset: 0x98
	// Func End, Address: 0x181694, Func Offset: 0xa4
}

// 
// Start address: 0x1816a0
void miscOptionWorkColdInit()
{
	// Line 2599, Address: 0x1816a0, Func Offset: 0
	// Line 2601, Address: 0x1816a4, Func Offset: 0x4
	// Line 2599, Address: 0x1816ac, Func Offset: 0xc
	// Line 2601, Address: 0x1816b0, Func Offset: 0x10
	// Line 2602, Address: 0x1816bc, Func Offset: 0x1c
	// Line 2605, Address: 0x1816d0, Func Offset: 0x30
	// Line 2606, Address: 0x1816d8, Func Offset: 0x38
	// Func End, Address: 0x1816e4, Func Offset: 0x44
}

// 
// Start address: 0x1816f0
void miscOptionWorkLoad(_anon6* src)
{
	// Line 2613, Address: 0x1816f4, Func Offset: 0x4
	// Func End, Address: 0x181700, Func Offset: 0x10
}

// 
// Start address: 0x181700
void miscOptionWorkSave(_anon6* dst)
{
	// Line 2620, Address: 0x181700, Func Offset: 0
	// Func End, Address: 0x18170c, Func Offset: 0xc
}

// 
// Start address: 0x181710
void miscOptionStepInit()
{
	// Line 2630, Address: 0x181710, Func Offset: 0
	// Func End, Address: 0x181718, Func Offset: 0x8
}

// 
// Start address: 0x181720
int miscOptionMain(int mode)
{
	int rtv;
	// Line 2638, Address: 0x181720, Func Offset: 0
	// Line 2641, Address: 0x181734, Func Offset: 0x14
	// Line 2642, Address: 0x18173c, Func Offset: 0x1c
	// Line 2643, Address: 0x18179c, Func Offset: 0x7c
	// Line 2644, Address: 0x1817a0, Func Offset: 0x80
	// Line 2645, Address: 0x1817b0, Func Offset: 0x90
	// Line 2647, Address: 0x1817b8, Func Offset: 0x98
	// Line 2649, Address: 0x1817c0, Func Offset: 0xa0
	// Line 2652, Address: 0x1817c8, Func Offset: 0xa8
	// Line 2653, Address: 0x1817d8, Func Offset: 0xb8
	// Line 2655, Address: 0x1817e0, Func Offset: 0xc0
	// Line 2658, Address: 0x1817e8, Func Offset: 0xc8
	// Line 2659, Address: 0x181824, Func Offset: 0x104
	// Line 2660, Address: 0x181828, Func Offset: 0x108
	// Line 2661, Address: 0x181830, Func Offset: 0x110
	// Line 2663, Address: 0x181838, Func Offset: 0x118
	// Line 2664, Address: 0x181840, Func Offset: 0x120
	// Line 2666, Address: 0x181848, Func Offset: 0x128
	// Line 2667, Address: 0x181850, Func Offset: 0x130
	// Line 2669, Address: 0x181858, Func Offset: 0x138
	// Line 2672, Address: 0x181860, Func Offset: 0x140
	// Line 2675, Address: 0x181868, Func Offset: 0x148
	// Line 2677, Address: 0x18187c, Func Offset: 0x15c
	// Line 2679, Address: 0x181884, Func Offset: 0x164
	// Line 2681, Address: 0x18188c, Func Offset: 0x16c
	// Line 2682, Address: 0x181890, Func Offset: 0x170
	// Line 2683, Address: 0x1818a4, Func Offset: 0x184
	// Line 2685, Address: 0x1818ac, Func Offset: 0x18c
	// Line 2687, Address: 0x1818b4, Func Offset: 0x194
	// Line 2688, Address: 0x1818b8, Func Offset: 0x198
	// Line 2689, Address: 0x1818cc, Func Offset: 0x1ac
	// Line 2691, Address: 0x1818d4, Func Offset: 0x1b4
	// Line 2693, Address: 0x1818dc, Func Offset: 0x1bc
	// Line 2694, Address: 0x1818e0, Func Offset: 0x1c0
	// Line 2695, Address: 0x1818f4, Func Offset: 0x1d4
	// Line 2696, Address: 0x1818fc, Func Offset: 0x1dc
	// Line 2697, Address: 0x181904, Func Offset: 0x1e4
	// Line 2702, Address: 0x181910, Func Offset: 0x1f0
	// Line 2704, Address: 0x181918, Func Offset: 0x1f8
	// Line 2705, Address: 0x181928, Func Offset: 0x208
	// Line 2708, Address: 0x18192c, Func Offset: 0x20c
	// Line 2709, Address: 0x181930, Func Offset: 0x210
	// Line 2711, Address: 0x181938, Func Offset: 0x218
	// Line 2712, Address: 0x181940, Func Offset: 0x220
	// Line 2715, Address: 0x181948, Func Offset: 0x228
	// Line 2716, Address: 0x18194c, Func Offset: 0x22c
	// Func End, Address: 0x181960, Func Offset: 0x240
}

// 
// Start address: 0x181960
int change_screen_pos()
{
	int rtv;
	// Line 2725, Address: 0x181960, Func Offset: 0
	// Line 2728, Address: 0x181964, Func Offset: 0x4
	// Line 2725, Address: 0x181968, Func Offset: 0x8
	// Line 2728, Address: 0x18196c, Func Offset: 0xc
	// Line 2725, Address: 0x181970, Func Offset: 0x10
	// Line 2728, Address: 0x181974, Func Offset: 0x14
	// Line 2730, Address: 0x181984, Func Offset: 0x24
	// Line 2731, Address: 0x18198c, Func Offset: 0x2c
	// Line 2733, Address: 0x181990, Func Offset: 0x30
	// Line 2734, Address: 0x181994, Func Offset: 0x34
	// Func End, Address: 0x1819a4, Func Offset: 0x44
}

// 
// Start address: 0x1819b0
int change_headmotion(_anon6* opt, int num)
{
	unsigned int trig;
	// Line 2737, Address: 0x1819b0, Func Offset: 0
	// Line 2738, Address: 0x1819c8, Func Offset: 0x18
	// Line 2740, Address: 0x1819d0, Func Offset: 0x20
	// Line 2741, Address: 0x1819dc, Func Offset: 0x2c
	// Line 2742, Address: 0x1819e4, Func Offset: 0x34
	// Line 2743, Address: 0x181a00, Func Offset: 0x50
	// Line 2744, Address: 0x181a08, Func Offset: 0x58
	// Line 2745, Address: 0x181a14, Func Offset: 0x64
	// Line 2748, Address: 0x181a30, Func Offset: 0x80
	// Line 2752, Address: 0x181a38, Func Offset: 0x88
	// Line 2751, Address: 0x181a40, Func Offset: 0x90
	// Line 2752, Address: 0x181a44, Func Offset: 0x94
	// Func End, Address: 0x181a50, Func Offset: 0xa0
}

// 
// Start address: 0x181a50
int change_hidegauge(_anon6* opt, int num)
{
	unsigned int trig;
	// Line 2755, Address: 0x181a50, Func Offset: 0
	// Line 2756, Address: 0x181a68, Func Offset: 0x18
	// Line 2758, Address: 0x181a70, Func Offset: 0x20
	// Line 2759, Address: 0x181a7c, Func Offset: 0x2c
	// Line 2760, Address: 0x181a84, Func Offset: 0x34
	// Line 2761, Address: 0x181aa0, Func Offset: 0x50
	// Line 2762, Address: 0x181aa8, Func Offset: 0x58
	// Line 2763, Address: 0x181ab4, Func Offset: 0x64
	// Line 2765, Address: 0x181ad0, Func Offset: 0x80
	// Line 2769, Address: 0x181ad8, Func Offset: 0x88
	// Line 2768, Address: 0x181ae0, Func Offset: 0x90
	// Line 2769, Address: 0x181ae4, Func Offset: 0x94
	// Func End, Address: 0x181af0, Func Offset: 0xa0
}

// 
// Start address: 0x181af0
int change_hideicon(_anon6* opt, int num)
{
	unsigned int trig;
	// Line 2772, Address: 0x181af0, Func Offset: 0
	// Line 2773, Address: 0x181b08, Func Offset: 0x18
	// Line 2775, Address: 0x181b10, Func Offset: 0x20
	// Line 2776, Address: 0x181b1c, Func Offset: 0x2c
	// Line 2777, Address: 0x181b24, Func Offset: 0x34
	// Line 2778, Address: 0x181b40, Func Offset: 0x50
	// Line 2779, Address: 0x181b48, Func Offset: 0x58
	// Line 2780, Address: 0x181b54, Func Offset: 0x64
	// Line 2782, Address: 0x181b70, Func Offset: 0x80
	// Line 2786, Address: 0x181b78, Func Offset: 0x88
	// Line 2785, Address: 0x181b80, Func Offset: 0x90
	// Line 2786, Address: 0x181b84, Func Offset: 0x94
	// Func End, Address: 0x181b90, Func Offset: 0xa0
}

// 
// Start address: 0x181b90
int change_brightness()
{
	int rtv;
	// Line 2789, Address: 0x181b90, Func Offset: 0
	// Line 2791, Address: 0x181b94, Func Offset: 0x4
	// Line 2789, Address: 0x181b98, Func Offset: 0x8
	// Line 2791, Address: 0x181b9c, Func Offset: 0xc
	// Line 2789, Address: 0x181ba0, Func Offset: 0x10
	// Line 2791, Address: 0x181ba4, Func Offset: 0x14
	// Line 2793, Address: 0x181bb4, Func Offset: 0x24
	// Line 2794, Address: 0x181bbc, Func Offset: 0x2c
	// Line 2796, Address: 0x181bc0, Func Offset: 0x30
	// Line 2797, Address: 0x181bc4, Func Offset: 0x34
	// Func End, Address: 0x181bd4, Func Offset: 0x44
}

// 
// Start address: 0x181be0
int change_keyconf()
{
	int rtv;
	// Line 2800, Address: 0x181be0, Func Offset: 0
	// Line 2802, Address: 0x181be4, Func Offset: 0x4
	// Line 2800, Address: 0x181be8, Func Offset: 0x8
	// Line 2802, Address: 0x181bec, Func Offset: 0xc
	// Line 2800, Address: 0x181bf0, Func Offset: 0x10
	// Line 2802, Address: 0x181bf4, Func Offset: 0x14
	// Line 2805, Address: 0x181c04, Func Offset: 0x24
	// Line 2806, Address: 0x181c0c, Func Offset: 0x2c
	// Line 2808, Address: 0x181c10, Func Offset: 0x30
	// Line 2809, Address: 0x181c14, Func Offset: 0x34
	// Func End, Address: 0x181c24, Func Offset: 0x44
}

// 
// Start address: 0x181c30
int change_vibration(_anon6* opt)
{
	unsigned int trig;
	int is_vibe;
	int prev_value;
	// Line 2812, Address: 0x181c30, Func Offset: 0
	// Line 2813, Address: 0x181c44, Func Offset: 0x14
	// Line 2815, Address: 0x181c4c, Func Offset: 0x1c
	// Line 2817, Address: 0x181c50, Func Offset: 0x20
	// Line 2818, Address: 0x181c5c, Func Offset: 0x2c
	// Line 2819, Address: 0x181c64, Func Offset: 0x34
	// Line 2818, Address: 0x181c68, Func Offset: 0x38
	// Line 2821, Address: 0x181c6c, Func Offset: 0x3c
	// Line 2822, Address: 0x181c74, Func Offset: 0x44
	// Line 2823, Address: 0x181c84, Func Offset: 0x54
	// Line 2825, Address: 0x181c88, Func Offset: 0x58
	// Line 2828, Address: 0x181c90, Func Offset: 0x60
	// Line 2829, Address: 0x181c98, Func Offset: 0x68
	// Line 2830, Address: 0x181ca0, Func Offset: 0x70
	// Line 2833, Address: 0x181ca8, Func Offset: 0x78
	// Line 2837, Address: 0x181cb0, Func Offset: 0x80
	// Line 2836, Address: 0x181cb8, Func Offset: 0x88
	// Line 2837, Address: 0x181cbc, Func Offset: 0x8c
	// Func End, Address: 0x181cc8, Func Offset: 0x98
}

// 
// Start address: 0x181cd0
int change_language(_anon6* opt, int num)
{
	unsigned int trig;
	// Line 2840, Address: 0x181cd0, Func Offset: 0
	// Line 2841, Address: 0x181ce8, Func Offset: 0x18
	// Line 2843, Address: 0x181cf0, Func Offset: 0x20
	// Line 2887, Address: 0x181cfc, Func Offset: 0x2c
	// Line 2888, Address: 0x181d04, Func Offset: 0x34
	// Line 2889, Address: 0x181d20, Func Offset: 0x50
	// Line 2890, Address: 0x181d28, Func Offset: 0x58
	// Line 2891, Address: 0x181d34, Func Offset: 0x64
	// Line 2896, Address: 0x181d50, Func Offset: 0x80
	// Line 2900, Address: 0x181d58, Func Offset: 0x88
	// Line 2899, Address: 0x181d60, Func Offset: 0x90
	// Line 2900, Address: 0x181d64, Func Offset: 0x94
	// Func End, Address: 0x181d70, Func Offset: 0xa0
}

// 
// Start address: 0x181d70
int change_subtitles(_anon6* opt)
{
	unsigned int trig;
	// Line 2903, Address: 0x181d70, Func Offset: 0
	// Line 2904, Address: 0x181d80, Func Offset: 0x10
	// Line 2906, Address: 0x181d88, Func Offset: 0x18
	// Line 2907, Address: 0x181d94, Func Offset: 0x24
	// Line 2909, Address: 0x181d98, Func Offset: 0x28
	// Line 2907, Address: 0x181d9c, Func Offset: 0x2c
	// Line 2909, Address: 0x181da0, Func Offset: 0x30
	// Line 2912, Address: 0x181da8, Func Offset: 0x38
	// Line 2911, Address: 0x181db0, Func Offset: 0x40
	// Line 2912, Address: 0x181db4, Func Offset: 0x44
	// Func End, Address: 0x181dbc, Func Offset: 0x4c
}

// 
// Start address: 0x181dc0
int change_sound(_anon6* opt)
{
	unsigned int trig;
	// Line 2915, Address: 0x181dc0, Func Offset: 0
	// Line 2916, Address: 0x181dd0, Func Offset: 0x10
	// Line 2918, Address: 0x181dd8, Func Offset: 0x18
	// Line 2919, Address: 0x181de4, Func Offset: 0x24
	// Line 2920, Address: 0x181de8, Func Offset: 0x28
	// Line 2919, Address: 0x181dec, Func Offset: 0x2c
	// Line 2920, Address: 0x181df4, Func Offset: 0x34
	// Line 2922, Address: 0x181e00, Func Offset: 0x40
	// Line 2923, Address: 0x181e08, Func Offset: 0x48
	// Line 2926, Address: 0x181e10, Func Offset: 0x50
	// Line 2929, Address: 0x181e18, Func Offset: 0x58
	// Line 2932, Address: 0x181e20, Func Offset: 0x60
	// Line 2931, Address: 0x181e28, Func Offset: 0x68
	// Line 2932, Address: 0x181e2c, Func Offset: 0x6c
	// Func End, Address: 0x181e34, Func Offset: 0x74
}

// 
// Start address: 0x181e40
int change_bgm_vol(_anon6* opt)
{
	unsigned int rep;
	// Line 2935, Address: 0x181e40, Func Offset: 0
	// Line 2936, Address: 0x181e50, Func Offset: 0x10
	// Line 2938, Address: 0x181e58, Func Offset: 0x18
	// Line 2941, Address: 0x181e64, Func Offset: 0x24
	// Line 2942, Address: 0x181e6c, Func Offset: 0x2c
	// Line 2943, Address: 0x181e78, Func Offset: 0x38
	// Line 2944, Address: 0x181e80, Func Offset: 0x40
	// Line 2945, Address: 0x181e90, Func Offset: 0x50
	// Line 2947, Address: 0x181e98, Func Offset: 0x58
	// Line 2948, Address: 0x181ea0, Func Offset: 0x60
	// Line 2949, Address: 0x181eac, Func Offset: 0x6c
	// Line 2950, Address: 0x181ebc, Func Offset: 0x7c
	// Line 2951, Address: 0x181ec4, Func Offset: 0x84
	// Line 2952, Address: 0x181ed4, Func Offset: 0x94
	// Line 2955, Address: 0x181edc, Func Offset: 0x9c
	// Line 2958, Address: 0x181ee0, Func Offset: 0xa0
	// Line 2957, Address: 0x181ee8, Func Offset: 0xa8
	// Line 2958, Address: 0x181eec, Func Offset: 0xac
	// Func End, Address: 0x181ef4, Func Offset: 0xb4
}

// 
// Start address: 0x181f00
int change_se_vol(_anon6* opt)
{
	unsigned int rep;
	// Line 2961, Address: 0x181f00, Func Offset: 0
	// Line 2962, Address: 0x181f10, Func Offset: 0x10
	// Line 2964, Address: 0x181f18, Func Offset: 0x18
	// Line 2967, Address: 0x181f24, Func Offset: 0x24
	// Line 2968, Address: 0x181f2c, Func Offset: 0x2c
	// Line 2969, Address: 0x181f38, Func Offset: 0x38
	// Line 2970, Address: 0x181f40, Func Offset: 0x40
	// Line 2971, Address: 0x181f50, Func Offset: 0x50
	// Line 2973, Address: 0x181f58, Func Offset: 0x58
	// Line 2974, Address: 0x181f60, Func Offset: 0x60
	// Line 2975, Address: 0x181f6c, Func Offset: 0x6c
	// Line 2976, Address: 0x181f7c, Func Offset: 0x7c
	// Line 2977, Address: 0x181f84, Func Offset: 0x84
	// Line 2978, Address: 0x181f94, Func Offset: 0x94
	// Line 2981, Address: 0x181f9c, Func Offset: 0x9c
	// Line 2984, Address: 0x181fa0, Func Offset: 0xa0
	// Line 2983, Address: 0x181fa8, Func Offset: 0xa8
	// Line 2984, Address: 0x181fac, Func Offset: 0xac
	// Func End, Address: 0x181fb4, Func Offset: 0xb4
}

// 
// Start address: 0x181fc0
int change_blood_col(_anon6* opt, int num)
{
	unsigned int trig;
	// Line 2987, Address: 0x181fc0, Func Offset: 0
	// Line 2988, Address: 0x181fd8, Func Offset: 0x18
	// Line 2990, Address: 0x181fe0, Func Offset: 0x20
	// Line 2991, Address: 0x181fec, Func Offset: 0x2c
	// Line 2992, Address: 0x181ff0, Func Offset: 0x30
	// Line 2991, Address: 0x181ff4, Func Offset: 0x34
	// Line 2992, Address: 0x18200c, Func Offset: 0x4c
	// Line 2993, Address: 0x182014, Func Offset: 0x54
	// Line 2994, Address: 0x182020, Func Offset: 0x60
	// Line 2995, Address: 0x18202c, Func Offset: 0x6c
	// Line 2996, Address: 0x182030, Func Offset: 0x70
	// Line 2995, Address: 0x182034, Func Offset: 0x74
	// Line 2996, Address: 0x182048, Func Offset: 0x88
	// Line 2999, Address: 0x182050, Func Offset: 0x90
	// Line 2998, Address: 0x182058, Func Offset: 0x98
	// Line 2999, Address: 0x18205c, Func Offset: 0x9c
	// Func End, Address: 0x182068, Func Offset: 0xa8
}

// 
// Start address: 0x182070
int change_noise_eff(_anon6* opt)
{
	unsigned int trig;
	// Line 3002, Address: 0x182070, Func Offset: 0
	// Line 3003, Address: 0x182080, Func Offset: 0x10
	// Line 3005, Address: 0x182088, Func Offset: 0x18
	// Line 3006, Address: 0x182094, Func Offset: 0x24
	// Line 3008, Address: 0x182098, Func Offset: 0x28
	// Line 3006, Address: 0x18209c, Func Offset: 0x2c
	// Line 3008, Address: 0x1820a0, Func Offset: 0x30
	// Line 3011, Address: 0x1820a8, Func Offset: 0x38
	// Line 3010, Address: 0x1820b0, Func Offset: 0x40
	// Line 3011, Address: 0x1820b4, Func Offset: 0x44
	// Func End, Address: 0x1820bc, Func Offset: 0x4c
}

// 
// Start address: 0x1820c0
int change_walk_or_run(_anon6* opt)
{
	unsigned int trig;
	// Line 3014, Address: 0x1820c0, Func Offset: 0
	// Line 3015, Address: 0x1820d0, Func Offset: 0x10
	// Line 3017, Address: 0x1820d8, Func Offset: 0x18
	// Line 3018, Address: 0x1820e4, Func Offset: 0x24
	// Line 3020, Address: 0x1820e8, Func Offset: 0x28
	// Line 3018, Address: 0x1820ec, Func Offset: 0x2c
	// Line 3020, Address: 0x1820f0, Func Offset: 0x30
	// Line 3023, Address: 0x1820f8, Func Offset: 0x38
	// Line 3022, Address: 0x182100, Func Offset: 0x40
	// Line 3023, Address: 0x182104, Func Offset: 0x44
	// Func End, Address: 0x18210c, Func Offset: 0x4c
}

// 
// Start address: 0x182110
int change_end()
{
	int rtv;
	// Line 3038, Address: 0x182110, Func Offset: 0
	// Line 3041, Address: 0x182114, Func Offset: 0x4
	// Line 3038, Address: 0x182118, Func Offset: 0x8
	// Line 3041, Address: 0x18211c, Func Offset: 0xc
	// Line 3038, Address: 0x182120, Func Offset: 0x10
	// Line 3041, Address: 0x182124, Func Offset: 0x14
	// Line 3044, Address: 0x182134, Func Offset: 0x24
	// Line 3045, Address: 0x18213c, Func Offset: 0x2c
	// Line 3046, Address: 0x182140, Func Offset: 0x30
	// Line 3047, Address: 0x182144, Func Offset: 0x34
	// Func End, Address: 0x182154, Func Offset: 0x44
}

// 
// Start address: 0x182160
int change_dummy_ext_000(int num)
{
	unsigned int trig;
	// Line 3057, Address: 0x182160, Func Offset: 0
	// Line 3058, Address: 0x182164, Func Offset: 0x4
	// Line 3057, Address: 0x182168, Func Offset: 0x8
	// Line 3058, Address: 0x182170, Func Offset: 0x10
	// Line 3060, Address: 0x182178, Func Offset: 0x18
	// Line 3061, Address: 0x182184, Func Offset: 0x24
	// Line 3062, Address: 0x18218c, Func Offset: 0x2c
	// Line 3063, Address: 0x1821ac, Func Offset: 0x4c
	// Line 3064, Address: 0x1821b8, Func Offset: 0x58
	// Line 3065, Address: 0x1821c4, Func Offset: 0x64
	// Line 3066, Address: 0x1821e4, Func Offset: 0x84
	// Line 3068, Address: 0x1821e8, Func Offset: 0x88
	// Line 3072, Address: 0x1821f0, Func Offset: 0x90
	// Line 3071, Address: 0x1821f8, Func Offset: 0x98
	// Line 3072, Address: 0x1821fc, Func Offset: 0x9c
	// Func End, Address: 0x182204, Func Offset: 0xa4
}

// 
// Start address: 0x182210
int get_dummy_ext_000()
{
	// Line 3076, Address: 0x182210, Func Offset: 0
	// Line 3077, Address: 0x182214, Func Offset: 0x4
	// Func End, Address: 0x18221c, Func Offset: 0xc
}

// 
// Start address: 0x182220
int change_dummy_ext_001(int num)
{
	unsigned int trig;
	// Line 3080, Address: 0x182220, Func Offset: 0
	// Line 3081, Address: 0x182224, Func Offset: 0x4
	// Line 3080, Address: 0x182228, Func Offset: 0x8
	// Line 3081, Address: 0x182230, Func Offset: 0x10
	// Line 3083, Address: 0x182238, Func Offset: 0x18
	// Line 3084, Address: 0x182244, Func Offset: 0x24
	// Line 3085, Address: 0x18224c, Func Offset: 0x2c
	// Line 3086, Address: 0x18226c, Func Offset: 0x4c
	// Line 3087, Address: 0x182278, Func Offset: 0x58
	// Line 3088, Address: 0x182284, Func Offset: 0x64
	// Line 3089, Address: 0x1822a4, Func Offset: 0x84
	// Line 3091, Address: 0x1822a8, Func Offset: 0x88
	// Line 3095, Address: 0x1822b0, Func Offset: 0x90
	// Line 3094, Address: 0x1822b8, Func Offset: 0x98
	// Line 3095, Address: 0x1822bc, Func Offset: 0x9c
	// Func End, Address: 0x1822c4, Func Offset: 0xa4
}

// 
// Start address: 0x1822d0
int get_dummy_ext_001()
{
	// Line 3099, Address: 0x1822d0, Func Offset: 0
	// Line 3100, Address: 0x1822d4, Func Offset: 0x4
	// Func End, Address: 0x1822dc, Func Offset: 0xc
}

// 
// Start address: 0x1822e0
int change_dummy_ext_002(int num)
{
	unsigned int trig;
	// Line 3103, Address: 0x1822e0, Func Offset: 0
	// Line 3104, Address: 0x1822e4, Func Offset: 0x4
	// Line 3103, Address: 0x1822e8, Func Offset: 0x8
	// Line 3104, Address: 0x1822f0, Func Offset: 0x10
	// Line 3106, Address: 0x1822f8, Func Offset: 0x18
	// Line 3107, Address: 0x182304, Func Offset: 0x24
	// Line 3108, Address: 0x18230c, Func Offset: 0x2c
	// Line 3109, Address: 0x18232c, Func Offset: 0x4c
	// Line 3110, Address: 0x182338, Func Offset: 0x58
	// Line 3111, Address: 0x182344, Func Offset: 0x64
	// Line 3112, Address: 0x182364, Func Offset: 0x84
	// Line 3114, Address: 0x182368, Func Offset: 0x88
	// Line 3118, Address: 0x182370, Func Offset: 0x90
	// Line 3117, Address: 0x182378, Func Offset: 0x98
	// Line 3118, Address: 0x18237c, Func Offset: 0x9c
	// Func End, Address: 0x182384, Func Offset: 0xa4
}

// 
// Start address: 0x182390
int get_dummy_ext_002()
{
	// Line 3122, Address: 0x182390, Func Offset: 0
	// Line 3123, Address: 0x182394, Func Offset: 0x4
	// Func End, Address: 0x18239c, Func Offset: 0xc
}

// 
// Start address: 0x1823a0
int change_dummy_ext_003(int num)
{
	unsigned int trig;
	// Line 3126, Address: 0x1823a0, Func Offset: 0
	// Line 3127, Address: 0x1823a4, Func Offset: 0x4
	// Line 3126, Address: 0x1823a8, Func Offset: 0x8
	// Line 3127, Address: 0x1823b0, Func Offset: 0x10
	// Line 3129, Address: 0x1823b8, Func Offset: 0x18
	// Line 3130, Address: 0x1823c4, Func Offset: 0x24
	// Line 3131, Address: 0x1823cc, Func Offset: 0x2c
	// Line 3132, Address: 0x1823ec, Func Offset: 0x4c
	// Line 3133, Address: 0x1823f8, Func Offset: 0x58
	// Line 3134, Address: 0x182404, Func Offset: 0x64
	// Line 3135, Address: 0x182424, Func Offset: 0x84
	// Line 3137, Address: 0x182428, Func Offset: 0x88
	// Line 3141, Address: 0x182430, Func Offset: 0x90
	// Line 3140, Address: 0x182438, Func Offset: 0x98
	// Line 3141, Address: 0x18243c, Func Offset: 0x9c
	// Func End, Address: 0x182444, Func Offset: 0xa4
}

// 
// Start address: 0x182450
int get_dummy_ext_003()
{
	// Line 3145, Address: 0x182450, Func Offset: 0
	// Line 3146, Address: 0x182454, Func Offset: 0x4
	// Func End, Address: 0x18245c, Func Offset: 0xc
}

