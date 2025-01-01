typedef struct _sfMenuObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef enum _enum_0 : unsigned char;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _sfMenuObjRect;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef enum _enum_1 : unsigned char;
typedef struct _GAME_WORK;
typedef enum _enum_2 : unsigned char;

typedef void(*type_38)(_anon4*);
typedef void(*type_47)(_anon4*);

typedef _anon10 type_0[3];
typedef _anon12 type_1[4];
typedef _anon10 type_2[2];
typedef unsigned char type_3[2];
typedef char type_4[7];
typedef _anon12 type_5[4];
typedef _anon10 type_6[12];
typedef float type_7[4];
typedef float type_8[4][4];
typedef _anon12 type_9[4];
typedef _anon10 type_10[2];
typedef _anon10* type_11[3];
typedef _anon12 type_12[4];
typedef _anon8 type_13[2];
typedef float type_14[4];
typedef _anon12 type_15[4];
typedef int type_16[1];
typedef _anon12* type_17[1];
typedef int type_18[1];
typedef _anon12 type_19[4];
typedef _anon12 type_20[4];
typedef _anon10* type_21[2];
typedef unsigned int type_22[4];
typedef int type_23[1];
typedef _anon12 type_24[4];
typedef _anon10 type_25[12];
typedef int type_26[1];
typedef unsigned int type_27[16];
typedef _anon12 type_28[4];
typedef _anon10* type_29[2];
typedef int type_30[1];
typedef _anon12 type_31[4];
typedef int type_32[1];
typedef _anon12 type_33[4];
typedef _anon10 type_34[2];
typedef _anon12 type_35[4];
typedef _anon12* type_36[1];
typedef int type_37[1];
typedef void(*type_39)(_anon4*)[3];
typedef _anon12* type_40[11];
typedef _anon6* type_41[3];
typedef _anon12 type_42[4];
typedef _anon10 type_43[2];
typedef int type_44[2];
typedef _anon10 type_45[12];
typedef _anon12 type_46[4];
typedef void(*type_48)(_anon4*)[3];
typedef _anon12 type_49[4];

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

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
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _anon2
{
	_anon0* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

enum _enum_0 : unsigned char
{
	KEY_ACTION,
	KEY_CANCEL,
	KEY_MAP,
	KEY_PAUSE,
	KEY_ITEMINFO,
	KEY_ITEM_L,
	KEY_ITEM_R,
	KEY_PARALLEL_L,
	KEY_PARALLEL_R,
	KEY_SEARCHVIEW,
	KEY_FIGHTING_POSE,
	KEY_USEITEM,
	KEY_AVOIDANCE,
	KEY_DEMOSKIP,
	KEY_EVENT_TRG,
	KEY_3LDK_CAM_RESET,
	MAX_KEY_NUM
};

struct _anon3
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum_1 type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon1 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};

struct _anon4
{
	int pre_key_type;
	int pre_cam_reverse;
	int pre_cam_move;
	int key_type;
	int cam_reverse;
	int cam_move;
	int fade_depth;
	unsigned char is_canceled;
};

struct _anon5
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon6
{
	unsigned int keys[16];
};

struct _anon7
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon2 tex_data;
	_anon5 clut_data;
	unsigned short ot;
	unsigned short z;
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

struct _anon8
{
	float x;
	float y;
	int u;
	int v;
	unsigned int col;
};

struct _anon9
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

struct _anon10
{
	int mes_id;
	short x;
	short y;
};

struct _anon11
{
	_anon7 base;
	_anon8 v[2];
};

struct _anon12
{
	short x;
	short y;
};

struct _anon13
{
	_anon7 base;
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

enum _enum_1 : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
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

enum _enum_2 : unsigned char
{
	SF_MENU_UP,
	SF_MENU_DOWN,
	SF_MENU_LEFT,
	SF_MENU_RIGHT,
	SF_MENU_PAGEUP,
	SF_MENU_PAGEDOWN,
	SF_MENU_INVALID_CMD
};

_anon6 type_a;
_anon6 type_b;
_anon6 type_c;
_anon6* game_pad_type[3];
_anon12 l_L2[4];
_anon12 l_R[4];
_anon12 l_L[4];
_anon12 l_SELECT[4];
_anon12 l_ANA_L[4];
_anon12 l_R2[4];
_anon12 l_3KAKU[4];
_anon12 l_4KAKU[4];
_anon12 l_MARU[4];
_anon12 l_BATSU[4];
_anon12 l_START[4];
_anon12 l_ANA_R[4];
_anon12 l_ANA_L_ARROW[4];
_anon12 l_ANA_R_ARROW[4];
_anon12 l_ANA_R_ARROW_FOR_CAM[4];
_anon12* basic_line_v[11];
_anon12* move_line_v[1];
_anon12* cam_line_v[1];
_anon10 basic_mes_type_a[12];
_anon10 basic_mes_type_b[12];
_anon10 basic_mes_type_c[12];
_anon10* basic_mes_type[3];
_anon10 move_mes_circle[2];
_anon10 move_mes_parallel[2];
_anon10* move_mes_type[2];
_anon10 cam_mes_normal[2];
_anon10 cam_mes_reverse[2];
_anon10* cam_mes_type[2];
_anon10 menu_mes_tbl[3];
_anon3 main_menu;
_GAME_WORK gamew;

void kcnf_GamePadSetKeyAssign(int type);
void kcnf_DispInfo(_anon4* mng);
void kcnf_DrawLine(_anon12** line, int num);
void kcnf_MenuInit();
void kcnf_MenuEnd();
void kcnf_MenuDisp(int selected, _anon4* mng);
void kcnf_DrawKeyKind(_anon10* mes, int fade);
void kcnf_DrawArrow(int kind, int x, int y);
void kcnf_DrawBg();
void draw_basic_handle(_anon4* mng);
void draw_fps_move(_anon4* mng);
void draw_fps_cam(_anon4* mng);
void kcnf_Draw(_anon4* mng);
int kcnf_tex_load();
void kcnf_Init(_anon4* mng, _anon9* opt);
void kcnf_SelectType(_anon4* mng);
void kcnf_SelectReverse(_anon4* mng);
void kcnf_SelectMove(_anon4* mng);
int kcnf_Select(_anon4* mng);
void kcnf_ReflectToSystem(_anon4* mng, _anon9* opt);
int kcnf_Main(_anon4* mng, _anon9* opt);
int kcnf_Destruct();
int KeyconfDrawMain(_anon9* opt);

// 
// Start address: 0x182460
void kcnf_GamePadSetKeyAssign(int type)
{
	_anon6* pad;
	int i;
	// Line 656, Address: 0x182460, Func Offset: 0
	// Line 657, Address: 0x182464, Func Offset: 0x4
	// Line 656, Address: 0x182468, Func Offset: 0x8
	// Line 657, Address: 0x18246c, Func Offset: 0xc
	// Line 656, Address: 0x182470, Func Offset: 0x10
	// Line 657, Address: 0x182474, Func Offset: 0x14
	// Line 656, Address: 0x182478, Func Offset: 0x18
	// Line 657, Address: 0x18247c, Func Offset: 0x1c
	// Line 660, Address: 0x182484, Func Offset: 0x24
	// Line 661, Address: 0x182488, Func Offset: 0x28
	// Line 662, Address: 0x182494, Func Offset: 0x34
	// Line 665, Address: 0x1824a4, Func Offset: 0x44
	// Line 666, Address: 0x1824ac, Func Offset: 0x4c
	// Func End, Address: 0x1824c0, Func Offset: 0x60
}

// 
// Start address: 0x1824c0
void kcnf_DispInfo(_anon4* mng)
{
	// Line 673, Address: 0x1824c0, Func Offset: 0
	// Line 674, Address: 0x1824c4, Func Offset: 0x4
	// Line 673, Address: 0x1824c8, Func Offset: 0x8
	// Line 674, Address: 0x1824cc, Func Offset: 0xc
	// Line 677, Address: 0x1824d8, Func Offset: 0x18
	// Line 678, Address: 0x1824e0, Func Offset: 0x20
	// Line 680, Address: 0x182518, Func Offset: 0x58
	// Line 683, Address: 0x182550, Func Offset: 0x90
	// Line 684, Address: 0x18256c, Func Offset: 0xac
	// Func End, Address: 0x182578, Func Offset: 0xb8
}

// 
// Start address: 0x182580
void kcnf_DrawLine(_anon12** line, int num)
{
	int i;
	_anon12* l;
	_anon11 img;
	char flag;
	// Line 688, Address: 0x182580, Func Offset: 0
	// Line 693, Address: 0x182584, Func Offset: 0x4
	// Line 688, Address: 0x182588, Func Offset: 0x8
	// Line 693, Address: 0x1825a0, Func Offset: 0x20
	// Line 694, Address: 0x1825ac, Func Offset: 0x2c
	// Line 695, Address: 0x1825bc, Func Offset: 0x3c
	// Line 696, Address: 0x1825d0, Func Offset: 0x50
	// Line 697, Address: 0x1825e8, Func Offset: 0x68
	// Line 698, Address: 0x1825fc, Func Offset: 0x7c
	// Line 711, Address: 0x182600, Func Offset: 0x80
	// Line 715, Address: 0x182610, Func Offset: 0x90
	// Line 716, Address: 0x182618, Func Offset: 0x98
	// Line 717, Address: 0x18264c, Func Offset: 0xcc
	// Line 718, Address: 0x18265c, Func Offset: 0xdc
	// Line 719, Address: 0x182664, Func Offset: 0xe4
	// Line 720, Address: 0x182694, Func Offset: 0x114
	// Line 722, Address: 0x1826a8, Func Offset: 0x128
	// Func End, Address: 0x1826c4, Func Offset: 0x144
}

// 
// Start address: 0x1826d0
void kcnf_MenuInit()
{
	int i;
	_sfMenuObjRect rect;
	// Line 726, Address: 0x1826d0, Func Offset: 0
	// Line 730, Address: 0x1826d4, Func Offset: 0x4
	// Line 726, Address: 0x1826d8, Func Offset: 0x8
	// Line 730, Address: 0x1826dc, Func Offset: 0xc
	// Line 726, Address: 0x1826e0, Func Offset: 0x10
	// Line 730, Address: 0x1826f0, Func Offset: 0x20
	// Line 731, Address: 0x1826f8, Func Offset: 0x28
	// Line 732, Address: 0x182710, Func Offset: 0x40
	// Line 737, Address: 0x182714, Func Offset: 0x44
	// Line 734, Address: 0x182718, Func Offset: 0x48
	// Line 735, Address: 0x18271c, Func Offset: 0x4c
	// Line 737, Address: 0x182720, Func Offset: 0x50
	// Line 732, Address: 0x182728, Func Offset: 0x58
	// Line 733, Address: 0x18272c, Func Offset: 0x5c
	// Line 734, Address: 0x182734, Func Offset: 0x64
	// Line 737, Address: 0x182738, Func Offset: 0x68
	// Line 738, Address: 0x182740, Func Offset: 0x70
	// Line 739, Address: 0x182750, Func Offset: 0x80
	// Func End, Address: 0x182770, Func Offset: 0xa0
}

// 
// Start address: 0x182770
void kcnf_MenuEnd()
{
	// Line 745, Address: 0x182770, Func Offset: 0
	// Func End, Address: 0x18277c, Func Offset: 0xc
}

// 
// Start address: 0x182780
void kcnf_MenuDisp(int selected, _anon4* mng)
{
	int i;
	_anon10* tbl;
	// Line 750, Address: 0x182780, Func Offset: 0
	// Line 754, Address: 0x182784, Func Offset: 0x4
	// Line 750, Address: 0x182788, Func Offset: 0x8
	// Line 754, Address: 0x18279c, Func Offset: 0x1c
	// Line 752, Address: 0x1827a0, Func Offset: 0x20
	// Line 754, Address: 0x1827a8, Func Offset: 0x28
	// Line 756, Address: 0x1827b0, Func Offset: 0x30
	// Line 757, Address: 0x1827b8, Func Offset: 0x38
	// Line 758, Address: 0x1827c0, Func Offset: 0x40
	// Line 760, Address: 0x182800, Func Offset: 0x80
	// Line 761, Address: 0x182824, Func Offset: 0xa4
	// Line 763, Address: 0x18282c, Func Offset: 0xac
	// Line 766, Address: 0x182870, Func Offset: 0xf0
	// Line 767, Address: 0x182880, Func Offset: 0x100
	// Func End, Address: 0x182898, Func Offset: 0x118
}

// 
// Start address: 0x1828a0
void kcnf_DrawKeyKind(_anon10* mes, int fade)
{
	// Line 791, Address: 0x1828a0, Func Offset: 0
	// Line 794, Address: 0x1828a4, Func Offset: 0x4
	// Line 791, Address: 0x1828a8, Func Offset: 0x8
	// Line 794, Address: 0x1828b4, Func Offset: 0x14
	// Line 795, Address: 0x1828bc, Func Offset: 0x1c
	// Line 797, Address: 0x1828c4, Func Offset: 0x24
	// Line 801, Address: 0x1828d0, Func Offset: 0x30
	// Line 804, Address: 0x182914, Func Offset: 0x74
	// Line 805, Address: 0x182920, Func Offset: 0x80
	// Func End, Address: 0x182930, Func Offset: 0x90
}

// 
// Start address: 0x182930
void kcnf_DrawArrow(int kind, int x, int y)
{
	_anon0* tex;
	unsigned int cbp;
	_anon13 img;
	char flag;
	// Line 813, Address: 0x182930, Func Offset: 0
	// Line 816, Address: 0x182934, Func Offset: 0x4
	// Line 813, Address: 0x182938, Func Offset: 0x8
	// Line 816, Address: 0x182958, Func Offset: 0x28
	// Line 817, Address: 0x18296c, Func Offset: 0x3c
	// Line 819, Address: 0x182980, Func Offset: 0x50
	// Line 820, Address: 0x182990, Func Offset: 0x60
	// Line 821, Address: 0x18299c, Func Offset: 0x6c
	// Line 822, Address: 0x1829bc, Func Offset: 0x8c
	// Line 823, Address: 0x1829d0, Func Offset: 0xa0
	// Line 824, Address: 0x1829e4, Func Offset: 0xb4
	// Line 825, Address: 0x182a04, Func Offset: 0xd4
	// Line 828, Address: 0x182a18, Func Offset: 0xe8
	// Line 830, Address: 0x182a24, Func Offset: 0xf4
	// Line 831, Address: 0x182a3c, Func Offset: 0x10c
	// Line 834, Address: 0x182a48, Func Offset: 0x118
	// Line 835, Address: 0x182a64, Func Offset: 0x134
	// Line 836, Address: 0x182a68, Func Offset: 0x138
	// Line 838, Address: 0x182a90, Func Offset: 0x160
	// Line 839, Address: 0x182aac, Func Offset: 0x17c
	// Line 840, Address: 0x182ac4, Func Offset: 0x194
	// Line 841, Address: 0x182ad4, Func Offset: 0x1a4
	// Func End, Address: 0x182af4, Func Offset: 0x1c4
}

// 
// Start address: 0x182b00
void kcnf_DrawBg()
{
	_anon0* tex;
	unsigned int cbp;
	_anon13 img;
	char flag;
	// Line 845, Address: 0x182b00, Func Offset: 0
	// Line 848, Address: 0x182b04, Func Offset: 0x4
	// Line 845, Address: 0x182b08, Func Offset: 0x8
	// Line 848, Address: 0x182b0c, Func Offset: 0xc
	// Line 845, Address: 0x182b10, Func Offset: 0x10
	// Line 848, Address: 0x182b14, Func Offset: 0x14
	// Line 845, Address: 0x182b18, Func Offset: 0x18
	// Line 848, Address: 0x182b1c, Func Offset: 0x1c
	// Line 849, Address: 0x182b28, Func Offset: 0x28
	// Line 851, Address: 0x182b3c, Func Offset: 0x3c
	// Line 852, Address: 0x182b4c, Func Offset: 0x4c
	// Line 853, Address: 0x182b58, Func Offset: 0x58
	// Line 854, Address: 0x182b78, Func Offset: 0x78
	// Line 856, Address: 0x182b8c, Func Offset: 0x8c
	// Line 858, Address: 0x182ba0, Func Offset: 0xa0
	// Line 859, Address: 0x182bbc, Func Offset: 0xbc
	// Line 862, Address: 0x182bd4, Func Offset: 0xd4
	// Line 863, Address: 0x182c08, Func Offset: 0x108
	// Line 864, Address: 0x182c24, Func Offset: 0x124
	// Line 867, Address: 0x182c34, Func Offset: 0x134
	// Line 868, Address: 0x182c58, Func Offset: 0x158
	// Line 869, Address: 0x182c74, Func Offset: 0x174
	// Line 870, Address: 0x182c84, Func Offset: 0x184
	// Func End, Address: 0x182c9c, Func Offset: 0x19c
}

// 
// Start address: 0x182ca0
void draw_basic_handle(_anon4* mng)
{
	// Line 874, Address: 0x182ca0, Func Offset: 0
	// Line 877, Address: 0x182ca4, Func Offset: 0x4
	// Line 874, Address: 0x182ca8, Func Offset: 0x8
	// Line 875, Address: 0x182cb8, Func Offset: 0x18
	// Line 877, Address: 0x182cbc, Func Offset: 0x1c
	// Line 878, Address: 0x182cc8, Func Offset: 0x28
	// Line 879, Address: 0x182ce4, Func Offset: 0x44
	// Func End, Address: 0x182cf8, Func Offset: 0x58
}

// 
// Start address: 0x182d00
void draw_fps_move(_anon4* mng)
{
	// Line 883, Address: 0x182d00, Func Offset: 0
	// Line 886, Address: 0x182d04, Func Offset: 0x4
	// Line 883, Address: 0x182d08, Func Offset: 0x8
	// Line 884, Address: 0x182d18, Func Offset: 0x18
	// Line 886, Address: 0x182d1c, Func Offset: 0x1c
	// Line 887, Address: 0x182d28, Func Offset: 0x28
	// Line 888, Address: 0x182d38, Func Offset: 0x38
	// Line 889, Address: 0x182d54, Func Offset: 0x54
	// Func End, Address: 0x182d68, Func Offset: 0x68
}

// 
// Start address: 0x182d70
void draw_fps_cam(_anon4* mng)
{
	// Line 893, Address: 0x182d70, Func Offset: 0
	// Line 896, Address: 0x182d74, Func Offset: 0x4
	// Line 893, Address: 0x182d78, Func Offset: 0x8
	// Line 894, Address: 0x182d88, Func Offset: 0x18
	// Line 896, Address: 0x182d8c, Func Offset: 0x1c
	// Line 897, Address: 0x182d98, Func Offset: 0x28
	// Line 898, Address: 0x182da8, Func Offset: 0x38
	// Line 899, Address: 0x182dc4, Func Offset: 0x54
	// Func End, Address: 0x182dd8, Func Offset: 0x68
}

// 
// Start address: 0x182de0
void kcnf_Draw(_anon4* mng)
{
	int id;
	void(*draw)(_anon4*)[3];
	// Line 904, Address: 0x182de0, Func Offset: 0
	// Line 905, Address: 0x182df4, Func Offset: 0x14
	// Line 913, Address: 0x182e04, Func Offset: 0x24
	// Line 916, Address: 0x182e0c, Func Offset: 0x2c
	// Line 918, Address: 0x182e14, Func Offset: 0x34
	// Line 919, Address: 0x182e20, Func Offset: 0x40
	// Line 921, Address: 0x182e3c, Func Offset: 0x5c
	// Line 923, Address: 0x182e44, Func Offset: 0x64
	// Line 924, Address: 0x182e4c, Func Offset: 0x6c
	// Func End, Address: 0x182e60, Func Offset: 0x80
}

// 
// Start address: 0x182e60
int kcnf_tex_load()
{
	int rtv;
	// Line 929, Address: 0x182e60, Func Offset: 0
	// Line 932, Address: 0x182e6c, Func Offset: 0xc
	// Line 933, Address: 0x182e74, Func Offset: 0x14
	// Line 935, Address: 0x182e98, Func Offset: 0x38
	// Line 937, Address: 0x182eb4, Func Offset: 0x54
	// Line 939, Address: 0x182ebc, Func Offset: 0x5c
	// Line 941, Address: 0x182ec4, Func Offset: 0x64
	// Line 942, Address: 0x182ec8, Func Offset: 0x68
	// Line 943, Address: 0x182edc, Func Offset: 0x7c
	// Line 947, Address: 0x182ee0, Func Offset: 0x80
	// Line 949, Address: 0x182ee8, Func Offset: 0x88
	// Line 950, Address: 0x182eec, Func Offset: 0x8c
	// Func End, Address: 0x182efc, Func Offset: 0x9c
}

// 
// Start address: 0x182f00
void kcnf_Init(_anon4* mng, _anon9* opt)
{
	// Line 954, Address: 0x182f00, Func Offset: 0
	// Line 955, Address: 0x182f04, Func Offset: 0x4
	// Line 954, Address: 0x182f08, Func Offset: 0x8
	// Line 955, Address: 0x182f1c, Func Offset: 0x1c
	// Line 957, Address: 0x182f24, Func Offset: 0x24
	// Line 965, Address: 0x182f28, Func Offset: 0x28
	// Line 957, Address: 0x182f2c, Func Offset: 0x2c
	// Line 958, Address: 0x182f30, Func Offset: 0x30
	// Line 959, Address: 0x182f38, Func Offset: 0x38
	// Line 961, Address: 0x182f40, Func Offset: 0x40
	// Line 962, Address: 0x182f48, Func Offset: 0x48
	// Line 963, Address: 0x182f50, Func Offset: 0x50
	// Line 966, Address: 0x182f58, Func Offset: 0x58
	// Line 968, Address: 0x182f60, Func Offset: 0x60
	// Line 969, Address: 0x182f64, Func Offset: 0x64
	// Func End, Address: 0x182f78, Func Offset: 0x78
}

// 
// Start address: 0x182f80
void kcnf_SelectType(_anon4* mng)
{
	int type;
	// Line 973, Address: 0x182f80, Func Offset: 0
	// Line 982, Address: 0x182f90, Func Offset: 0x10
	// Line 983, Address: 0x182fa4, Func Offset: 0x24
	// Line 984, Address: 0x182fa8, Func Offset: 0x28
	// Line 987, Address: 0x182fac, Func Offset: 0x2c
	// Line 984, Address: 0x182fb0, Func Offset: 0x30
	// Line 987, Address: 0x182fc4, Func Offset: 0x44
	// Line 988, Address: 0x182fcc, Func Offset: 0x4c
	// Line 989, Address: 0x182fd8, Func Offset: 0x58
	// Line 990, Address: 0x182fec, Func Offset: 0x6c
	// Line 991, Address: 0x182ff0, Func Offset: 0x70
	// Line 994, Address: 0x182ff4, Func Offset: 0x74
	// Line 991, Address: 0x182ff8, Func Offset: 0x78
	// Line 994, Address: 0x18300c, Func Offset: 0x8c
	// Line 995, Address: 0x183014, Func Offset: 0x94
	// Line 1013, Address: 0x183018, Func Offset: 0x98
	// Func End, Address: 0x183028, Func Offset: 0xa8
}

// 
// Start address: 0x183030
void kcnf_SelectReverse(_anon4* mng)
{
	int type;
	// Line 1017, Address: 0x183030, Func Offset: 0
	// Line 1020, Address: 0x183040, Func Offset: 0x10
	// Line 1021, Address: 0x183054, Func Offset: 0x24
	// Line 1026, Address: 0x183058, Func Offset: 0x28
	// Line 1024, Address: 0x18305c, Func Offset: 0x2c
	// Line 1026, Address: 0x183060, Func Offset: 0x30
	// Line 1028, Address: 0x183068, Func Offset: 0x38
	// Func End, Address: 0x183078, Func Offset: 0x48
}

// 
// Start address: 0x183080
void kcnf_SelectMove(_anon4* mng)
{
	int type;
	// Line 1032, Address: 0x183080, Func Offset: 0
	// Line 1035, Address: 0x183090, Func Offset: 0x10
	// Line 1036, Address: 0x1830a4, Func Offset: 0x24
	// Line 1041, Address: 0x1830a8, Func Offset: 0x28
	// Line 1039, Address: 0x1830ac, Func Offset: 0x2c
	// Line 1041, Address: 0x1830b0, Func Offset: 0x30
	// Line 1043, Address: 0x1830b8, Func Offset: 0x38
	// Func End, Address: 0x1830c8, Func Offset: 0x48
}

// 
// Start address: 0x1830d0
int kcnf_Select(_anon4* mng)
{
	int rtv;
	unsigned int trg;
	_enum_2 cmd;
	int id;
	void(*conf)(_anon4*)[3];
	// Line 1047, Address: 0x1830d0, Func Offset: 0
	// Line 1051, Address: 0x1830e4, Func Offset: 0x14
	// Line 1047, Address: 0x1830e8, Func Offset: 0x18
	// Line 1051, Address: 0x1830ec, Func Offset: 0x1c
	// Line 1054, Address: 0x183100, Func Offset: 0x30
	// Line 1057, Address: 0x183108, Func Offset: 0x38
	// Line 1058, Address: 0x183110, Func Offset: 0x40
	// Line 1065, Address: 0x183124, Func Offset: 0x54
	// Line 1068, Address: 0x18312c, Func Offset: 0x5c
	// Line 1076, Address: 0x183138, Func Offset: 0x68
	// Line 1078, Address: 0x183140, Func Offset: 0x70
	// Line 1081, Address: 0x18314c, Func Offset: 0x7c
	// Line 1083, Address: 0x183154, Func Offset: 0x84
	// Line 1084, Address: 0x183160, Func Offset: 0x90
	// Line 1085, Address: 0x18316c, Func Offset: 0x9c
	// Line 1087, Address: 0x183170, Func Offset: 0xa0
	// Line 1089, Address: 0x183180, Func Offset: 0xb0
	// Line 1090, Address: 0x183188, Func Offset: 0xb8
	// Line 1091, Address: 0x183190, Func Offset: 0xc0
	// Line 1092, Address: 0x18319c, Func Offset: 0xcc
	// Line 1094, Address: 0x1831ac, Func Offset: 0xdc
	// Line 1098, Address: 0x1831c8, Func Offset: 0xf8
	// Line 1099, Address: 0x1831cc, Func Offset: 0xfc
	// Func End, Address: 0x1831e4, Func Offset: 0x114
}

// 
// Start address: 0x1831f0
void kcnf_ReflectToSystem(_anon4* mng, _anon9* opt)
{
	// Line 1103, Address: 0x1831f0, Func Offset: 0
	// Line 1104, Address: 0x183204, Func Offset: 0x14
	// Line 1106, Address: 0x183210, Func Offset: 0x20
	// Line 1107, Address: 0x183218, Func Offset: 0x28
	// Line 1108, Address: 0x183220, Func Offset: 0x30
	// Line 1109, Address: 0x183228, Func Offset: 0x38
	// Line 1112, Address: 0x183230, Func Offset: 0x40
	// Line 1114, Address: 0x183238, Func Offset: 0x48
	// Line 1115, Address: 0x183240, Func Offset: 0x50
	// Line 1116, Address: 0x183248, Func Offset: 0x58
	// Line 1117, Address: 0x183250, Func Offset: 0x60
	// Line 1122, Address: 0x183258, Func Offset: 0x68
	// Func End, Address: 0x18326c, Func Offset: 0x7c
}

// 
// Start address: 0x183270
int kcnf_Main(_anon4* mng, _anon9* opt)
{
	int rtv;
	// Line 1127, Address: 0x183270, Func Offset: 0
	// Line 1130, Address: 0x18328c, Func Offset: 0x1c
	// Line 1131, Address: 0x183294, Func Offset: 0x24
	// Line 1132, Address: 0x1832cc, Func Offset: 0x5c
	// Line 1133, Address: 0x1832d0, Func Offset: 0x60
	// Line 1137, Address: 0x1832d8, Func Offset: 0x68
	// Line 1138, Address: 0x183300, Func Offset: 0x90
	// Line 1140, Address: 0x183308, Func Offset: 0x98
	// Line 1143, Address: 0x183310, Func Offset: 0xa0
	// Line 1144, Address: 0x183320, Func Offset: 0xb0
	// Line 1146, Address: 0x183328, Func Offset: 0xb8
	// Line 1149, Address: 0x183330, Func Offset: 0xc0
	// Line 1151, Address: 0x183360, Func Offset: 0xf0
	// Line 1152, Address: 0x183368, Func Offset: 0xf8
	// Line 1155, Address: 0x18336c, Func Offset: 0xfc
	// Line 1156, Address: 0x183370, Func Offset: 0x100
	// Line 1159, Address: 0x183378, Func Offset: 0x108
	// Line 1161, Address: 0x183380, Func Offset: 0x110
	// Line 1162, Address: 0x183384, Func Offset: 0x114
	// Func End, Address: 0x18339c, Func Offset: 0x12c
}

// 
// Start address: 0x1833a0
int kcnf_Destruct()
{
	// Line 1166, Address: 0x1833a0, Func Offset: 0
	// Line 1167, Address: 0x1833a8, Func Offset: 0x8
	// Line 1169, Address: 0x1833b0, Func Offset: 0x10
	// Line 1168, Address: 0x1833b4, Func Offset: 0x14
	// Line 1169, Address: 0x1833b8, Func Offset: 0x18
	// Func End, Address: 0x1833c0, Func Offset: 0x20
}

// 
// Start address: 0x1833c0
int KeyconfDrawMain(_anon9* opt)
{
	int rtv;
	_anon4 key_conf_mng;
	// Line 1176, Address: 0x1833c0, Func Offset: 0
	// Line 1180, Address: 0x1833d4, Func Offset: 0x14
	// Line 1181, Address: 0x1833dc, Func Offset: 0x1c
	// Line 1182, Address: 0x183414, Func Offset: 0x54
	// Line 1183, Address: 0x183418, Func Offset: 0x58
	// Line 1184, Address: 0x183428, Func Offset: 0x68
	// Line 1186, Address: 0x183430, Func Offset: 0x70
	// Line 1189, Address: 0x183438, Func Offset: 0x78
	// Line 1190, Address: 0x183448, Func Offset: 0x88
	// Line 1191, Address: 0x183450, Func Offset: 0x90
	// Line 1194, Address: 0x183458, Func Offset: 0x98
	// Line 1195, Address: 0x183470, Func Offset: 0xb0
	// Line 1197, Address: 0x183478, Func Offset: 0xb8
	// Line 1200, Address: 0x183480, Func Offset: 0xc0
	// Line 1201, Address: 0x183498, Func Offset: 0xd8
	// Line 1204, Address: 0x18349c, Func Offset: 0xdc
	// Line 1205, Address: 0x1834a0, Func Offset: 0xe0
	// Line 1212, Address: 0x1834a8, Func Offset: 0xe8
	// Line 1213, Address: 0x1834ac, Func Offset: 0xec
	// Func End, Address: 0x1834c0, Func Offset: 0x100
}

