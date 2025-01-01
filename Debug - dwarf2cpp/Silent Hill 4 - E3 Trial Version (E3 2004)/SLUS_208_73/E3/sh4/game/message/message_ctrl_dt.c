typedef union _anon0;
typedef struct _MsgCtrlDtHandler;
typedef struct _McdPict;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgTexData;
typedef struct _anon5;
typedef struct _GAME_WORK;

typedef void(*type_3)();
typedef void(*type_5)();
typedef void(*type_21)();

typedef float type_0[4];
typedef float type_1[4][4];
typedef _McdPict type_2[33];
typedef unsigned char type_4[2];
typedef int type_6[1];
typedef int type_7[1];
typedef unsigned int type_8[4];
typedef int type_9[1];
typedef float type_10[4];
typedef short type_11[2];
typedef _anon0 type_12[6];
typedef int type_13[1];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef int type_19[1];
typedef int type_20[1];
typedef int type_22[1];

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

struct _MsgCtrlDtHandler
{
	int pre_proc;
	_anon0* data_top;
	int last_yesno;
	int wait_timer;
	int cancel_enable;
	void(*cancel_func)();
	unsigned int disp_timer;
	int first_disp_msg;
	int msg_put_issue;
	int msg_quit_issue;
	int msg_quit;
	int now_pack;
	_anon0* now_msg_pt;
	int now_msg_cmd;
	int now_msg;
	int disp_pack;
	_anon0* disp_msg_pt;
	int disp_msg_cmd;
	int disp_msg;
	int disp_msg_chkstat;
	short blurexec;
	short blurtime;
	short pictfade;
	sgTexData* pictdata;
	_anon2* picttex;
	_anon5 pictpoly;
	unsigned int pictcbp;
	int pictload;
	int pictid;
	unsigned int pictemt;
	void* pict_load_addr;
};

struct _McdPict
{
	int id;
	unsigned int file;
	unsigned int emt;
	int useclut;
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

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon5
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

_anon0 mcd_dummy[6];
_McdPict mcdpict_dt[33];
_MsgCtrlDtHandler msg_ctrldt_handler;
_GAME_WORK gamew;
void(*message_pause_func)();

unsigned int get_pictfile(int id);
unsigned int get_pictemt(int id);
int get_pict_useclut(int id);
_anon0* MessageCtrlDtNextCmd(_anon0* dt);
_anon0* MessageCtrlDtSearchCmdCategoly(_anon0* dt, int cate);
_anon0* MessageCtrlDtSearchCmdCategoly2(_anon0* dt, int cate, int cate2);
_anon0* MessageCtrlDtSearchCmd(_anon0* dt, int cmd);
void MessageCtrlDtSetNowMsg(_anon0* pt);
void MessageCtrlDtFunctinoGroup(_anon0* st, _anon0* ed);
void MessageCtrlDtExecDispFunction(_anon0* st, _anon0* ed);
void memo_func_blur_in_init(_MsgCtrlDtHandler* handler);
void memo_func_blur_out_init(_MsgCtrlDtHandler* handler);
int memo_func_blur_in(_MsgCtrlDtHandler* handler);
int memo_func_blur_out(_MsgCtrlDtHandler* handler);
void memo_func_blur_max();
void memo_func_fade_out_start();
void memo_func_fade_in_start();
int memo_func_fade_wait();
void memo_func_pict_disp(_MsgCtrlDtHandler* handler, float f_rate);
void memo_func_pict_fade_init(_MsgCtrlDtHandler* handler);
int memo_func_pict_fade_in(_MsgCtrlDtHandler* handler);
int memo_func_pict_fade_out(_MsgCtrlDtHandler* handler);
void MessageCtrlDtInit(_anon0* dt);
void MessageCtrlDtInitLastSel();
void MessageCtrlDtCancelEnable(void(*func)());
void set_message(_MsgCtrlDtHandler* handler);
void message_set_disp_msg(_MsgCtrlDtHandler* handler);
void message_pause_func();
int MessageCtrlDtMain();
int MessageCtrlDtMainHoldPuaseDisable();
int MessageCtrlDtSelectedAtLast();
unsigned int MessageCtrlDtDispTimer();
void MessageCtrlDtDispFuncSetIgetSound();
void MessageCtrlDtDispFuncCallIgetSound();
void MessageCtrlDtDispFuncSetLadderSound_sel2();
void MessageCtrlDtDispFuncSetElevatorSound();
void MessageCtrlDtDispFuncSetLadderSound_sel3();
void MessageCtrlDtDispFuncSetTrainDoorSound();

// 
// Start address: 0x2944f0
unsigned int get_pictfile(int id)
{
	int i;
	// Line 173, Address: 0x2944f0, Func Offset: 0
	// Line 174, Address: 0x294500, Func Offset: 0x10
	// Line 175, Address: 0x29450c, Func Offset: 0x1c
	// Line 177, Address: 0x294520, Func Offset: 0x30
	// Line 179, Address: 0x294530, Func Offset: 0x40
	// Line 180, Address: 0x294538, Func Offset: 0x48
	// Func End, Address: 0x294540, Func Offset: 0x50
}

// 
// Start address: 0x294540
unsigned int get_pictemt(int id)
{
	int i;
	// Line 185, Address: 0x294540, Func Offset: 0
	// Line 186, Address: 0x294550, Func Offset: 0x10
	// Line 187, Address: 0x29455c, Func Offset: 0x1c
	// Line 189, Address: 0x294570, Func Offset: 0x30
	// Line 191, Address: 0x294580, Func Offset: 0x40
	// Line 192, Address: 0x294588, Func Offset: 0x48
	// Func End, Address: 0x294590, Func Offset: 0x50
}

// 
// Start address: 0x294590
int get_pict_useclut(int id)
{
	int i;
	// Line 197, Address: 0x294590, Func Offset: 0
	// Line 198, Address: 0x2945a0, Func Offset: 0x10
	// Line 199, Address: 0x2945ac, Func Offset: 0x1c
	// Line 201, Address: 0x2945c0, Func Offset: 0x30
	// Line 203, Address: 0x2945d0, Func Offset: 0x40
	// Line 204, Address: 0x2945d8, Func Offset: 0x48
	// Func End, Address: 0x2945e0, Func Offset: 0x50
}

// 
// Start address: 0x2945e0
_anon0* MessageCtrlDtNextCmd(_anon0* dt)
{
	// Line 215, Address: 0x2945e0, Func Offset: 0
	// Line 223, Address: 0x2946c4, Func Offset: 0xe4
	// Line 224, Address: 0x2946c8, Func Offset: 0xe8
	// Line 238, Address: 0x2946d0, Func Offset: 0xf0
	// Line 246, Address: 0x2946d8, Func Offset: 0xf8
	// Line 251, Address: 0x2946e0, Func Offset: 0x100
	// Line 252, Address: 0x2946e8, Func Offset: 0x108
	// Func End, Address: 0x2946f0, Func Offset: 0x110
}

// 
// Start address: 0x2946f0
_anon0* MessageCtrlDtSearchCmdCategoly(_anon0* dt, int cate)
{
	int* pt;
	// Line 262, Address: 0x2946f0, Func Offset: 0
	// Line 265, Address: 0x2946fc, Func Offset: 0xc
	// Line 263, Address: 0x294700, Func Offset: 0x10
	// Line 266, Address: 0x294708, Func Offset: 0x18
	// Line 267, Address: 0x294718, Func Offset: 0x28
	// Line 270, Address: 0x294720, Func Offset: 0x30
	// Line 271, Address: 0x294728, Func Offset: 0x38
	// Line 274, Address: 0x294730, Func Offset: 0x40
	// Line 275, Address: 0x294738, Func Offset: 0x48
	// Line 276, Address: 0x294740, Func Offset: 0x50
	// Func End, Address: 0x29474c, Func Offset: 0x5c
}

// 
// Start address: 0x294750
_anon0* MessageCtrlDtSearchCmdCategoly2(_anon0* dt, int cate, int cate2)
{
	int* pt;
	// Line 286, Address: 0x294750, Func Offset: 0
	// Line 289, Address: 0x29475c, Func Offset: 0xc
	// Line 287, Address: 0x294760, Func Offset: 0x10
	// Line 290, Address: 0x294768, Func Offset: 0x18
	// Line 291, Address: 0x294778, Func Offset: 0x28
	// Line 294, Address: 0x294780, Func Offset: 0x30
	// Line 295, Address: 0x294788, Func Offset: 0x38
	// Line 298, Address: 0x294790, Func Offset: 0x40
	// Line 299, Address: 0x294798, Func Offset: 0x48
	// Line 302, Address: 0x2947a0, Func Offset: 0x50
	// Line 303, Address: 0x2947a8, Func Offset: 0x58
	// Line 304, Address: 0x2947b0, Func Offset: 0x60
	// Func End, Address: 0x2947bc, Func Offset: 0x6c
}

// 
// Start address: 0x2947c0
_anon0* MessageCtrlDtSearchCmd(_anon0* dt, int cmd)
{
	int* pt;
	// Line 314, Address: 0x2947c0, Func Offset: 0
	// Line 317, Address: 0x2947cc, Func Offset: 0xc
	// Line 315, Address: 0x2947d0, Func Offset: 0x10
	// Line 318, Address: 0x2947d4, Func Offset: 0x14
	// Line 319, Address: 0x2947e8, Func Offset: 0x28
	// Line 322, Address: 0x2947f0, Func Offset: 0x30
	// Line 323, Address: 0x2947f8, Func Offset: 0x38
	// Line 326, Address: 0x294800, Func Offset: 0x40
	// Line 327, Address: 0x294808, Func Offset: 0x48
	// Line 328, Address: 0x294810, Func Offset: 0x50
	// Func End, Address: 0x29481c, Func Offset: 0x5c
}

// 
// Start address: 0x294820
void MessageCtrlDtSetNowMsg(_anon0* pt)
{
	_MsgCtrlDtHandler* handler;
	// Line 337, Address: 0x294820, Func Offset: 0
	// Line 338, Address: 0x294824, Func Offset: 0x4
	// Line 337, Address: 0x294828, Func Offset: 0x8
	// Line 339, Address: 0x29482c, Func Offset: 0xc
	// Line 347, Address: 0x294834, Func Offset: 0x14
	// Line 340, Address: 0x294838, Func Offset: 0x18
	// Line 347, Address: 0x29483c, Func Offset: 0x1c
	// Line 340, Address: 0x294840, Func Offset: 0x20
	// Line 338, Address: 0x294844, Func Offset: 0x24
	// Line 340, Address: 0x294848, Func Offset: 0x28
	// Line 347, Address: 0x294854, Func Offset: 0x34
	// Line 342, Address: 0x294858, Func Offset: 0x38
	// Line 347, Address: 0x29485c, Func Offset: 0x3c
	// Line 342, Address: 0x294860, Func Offset: 0x40
	// Line 344, Address: 0x294868, Func Offset: 0x48
	// Line 347, Address: 0x29486c, Func Offset: 0x4c
	// Line 348, Address: 0x294888, Func Offset: 0x68
	// Line 349, Address: 0x29488c, Func Offset: 0x6c
	// Line 350, Address: 0x294898, Func Offset: 0x78
	// Line 351, Address: 0x2948a4, Func Offset: 0x84
	// Line 352, Address: 0x2948a8, Func Offset: 0x88
	// Func End, Address: 0x2948b4, Func Offset: 0x94
}

// 
// Start address: 0x2948c0
void MessageCtrlDtFunctinoGroup(_anon0* st, _anon0* ed)
{
	_anon0* pt;
	_MsgCtrlDtHandler* handler;
	// Line 362, Address: 0x2948c0, Func Offset: 0
	// Line 365, Address: 0x2948d8, Func Offset: 0x18
	// Line 370, Address: 0x2948e0, Func Offset: 0x20
	// Line 372, Address: 0x2948f0, Func Offset: 0x30
	// Line 377, Address: 0x2948f8, Func Offset: 0x38
	// Line 381, Address: 0x294900, Func Offset: 0x40
	// Line 384, Address: 0x294930, Func Offset: 0x70
	// Line 385, Address: 0x294934, Func Offset: 0x74
	// Line 386, Address: 0x294940, Func Offset: 0x80
	// Line 390, Address: 0x294948, Func Offset: 0x88
	// Line 391, Address: 0x294954, Func Offset: 0x94
	// Line 392, Address: 0x29495c, Func Offset: 0x9c
	// Line 394, Address: 0x294964, Func Offset: 0xa4
	// Line 395, Address: 0x294968, Func Offset: 0xa8
	// Line 396, Address: 0x294970, Func Offset: 0xb0
	// Line 397, Address: 0x294978, Func Offset: 0xb8
	// Line 399, Address: 0x294980, Func Offset: 0xc0
	// Line 402, Address: 0x294988, Func Offset: 0xc8
	// Line 403, Address: 0x294990, Func Offset: 0xd0
	// Func End, Address: 0x2949a8, Func Offset: 0xe8
}

// 
// Start address: 0x2949b0
void MessageCtrlDtExecDispFunction(_anon0* st, _anon0* ed)
{
	_anon0* pt;
	// Line 413, Address: 0x2949b0, Func Offset: 0
	// Line 420, Address: 0x2949c4, Func Offset: 0x14
	// Line 421, Address: 0x2949c8, Func Offset: 0x18
	// Line 423, Address: 0x2949d8, Func Offset: 0x28
	// Line 428, Address: 0x2949e0, Func Offset: 0x30
	// Line 432, Address: 0x2949e8, Func Offset: 0x38
	// Line 434, Address: 0x294a04, Func Offset: 0x54
	// Line 436, Address: 0x294a08, Func Offset: 0x58
	// Line 437, Address: 0x294a14, Func Offset: 0x64
	// Line 438, Address: 0x294a1c, Func Offset: 0x6c
	// Line 439, Address: 0x294a24, Func Offset: 0x74
	// Line 440, Address: 0x294a28, Func Offset: 0x78
	// Line 443, Address: 0x294a30, Func Offset: 0x80
	// Line 444, Address: 0x294a38, Func Offset: 0x88
	// Func End, Address: 0x294a4c, Func Offset: 0x9c
}

// 
// Start address: 0x294a50
void memo_func_blur_in_init(_MsgCtrlDtHandler* handler)
{
	// Line 455, Address: 0x294a50, Func Offset: 0
	// Line 457, Address: 0x294a58, Func Offset: 0x8
	// Func End, Address: 0x294a60, Func Offset: 0x10
}

// 
// Start address: 0x294a60
void memo_func_blur_out_init(_MsgCtrlDtHandler* handler)
{
	// Line 460, Address: 0x294a60, Func Offset: 0
	// Line 462, Address: 0x294a68, Func Offset: 0x8
	// Func End, Address: 0x294a70, Func Offset: 0x10
}

// 
// Start address: 0x294a70
int memo_func_blur_in(_MsgCtrlDtHandler* handler)
{
	int w;
	// Line 464, Address: 0x294a70, Func Offset: 0
	// Line 465, Address: 0x294a80, Func Offset: 0x10
	// Line 467, Address: 0x294a8c, Func Offset: 0x1c
	// Line 468, Address: 0x294aa4, Func Offset: 0x34
	// Line 469, Address: 0x294aac, Func Offset: 0x3c
	// Line 470, Address: 0x294ab8, Func Offset: 0x48
	// Line 474, Address: 0x294ac0, Func Offset: 0x50
	// Line 475, Address: 0x294b00, Func Offset: 0x90
	// Line 476, Address: 0x294b0c, Func Offset: 0x9c
	// Line 478, Address: 0x294b10, Func Offset: 0xa0
	// Line 479, Address: 0x294b18, Func Offset: 0xa8
	// Line 480, Address: 0x294b5c, Func Offset: 0xec
	// Line 482, Address: 0x294b60, Func Offset: 0xf0
	// Func End, Address: 0x294b74, Func Offset: 0x104
}

// 
// Start address: 0x294b80
int memo_func_blur_out(_MsgCtrlDtHandler* handler)
{
	int w;
	// Line 484, Address: 0x294b80, Func Offset: 0
	// Line 485, Address: 0x294b90, Func Offset: 0x10
	// Line 487, Address: 0x294b9c, Func Offset: 0x1c
	// Line 488, Address: 0x294bb4, Func Offset: 0x34
	// Line 489, Address: 0x294bbc, Func Offset: 0x3c
	// Line 490, Address: 0x294bc8, Func Offset: 0x48
	// Line 494, Address: 0x294bd0, Func Offset: 0x50
	// Line 495, Address: 0x294c14, Func Offset: 0x94
	// Line 496, Address: 0x294c1c, Func Offset: 0x9c
	// Line 498, Address: 0x294c20, Func Offset: 0xa0
	// Line 499, Address: 0x294c28, Func Offset: 0xa8
	// Line 500, Address: 0x294c70, Func Offset: 0xf0
	// Line 502, Address: 0x294c78, Func Offset: 0xf8
	// Func End, Address: 0x294c8c, Func Offset: 0x10c
}

// 
// Start address: 0x294c90
void memo_func_blur_max()
{
	// Line 504, Address: 0x294c90, Func Offset: 0
	// Line 505, Address: 0x294c98, Func Offset: 0x8
	// Line 506, Address: 0x294ca0, Func Offset: 0x10
	// Line 507, Address: 0x294cac, Func Offset: 0x1c
	// Func End, Address: 0x294cb8, Func Offset: 0x28
}

// 
// Start address: 0x294cc0
void memo_func_fade_out_start()
{
	// Line 514, Address: 0x294cc0, Func Offset: 0
	// Line 515, Address: 0x294cc8, Func Offset: 0x8
	// Line 516, Address: 0x294d00, Func Offset: 0x40
	// Func End, Address: 0x294d0c, Func Offset: 0x4c
}

// 
// Start address: 0x294d10
void memo_func_fade_in_start()
{
	// Line 518, Address: 0x294d10, Func Offset: 0
	// Line 519, Address: 0x294d18, Func Offset: 0x8
	// Line 520, Address: 0x294d50, Func Offset: 0x40
	// Func End, Address: 0x294d5c, Func Offset: 0x4c
}

// 
// Start address: 0x294d60
int memo_func_fade_wait()
{
	// Line 523, Address: 0x294d60, Func Offset: 0
	// Func End, Address: 0x294d68, Func Offset: 0x8
}

// 
// Start address: 0x294d70
void memo_func_pict_disp(_MsgCtrlDtHandler* handler, float f_rate)
{
	int bri;
	// Line 536, Address: 0x294d70, Func Offset: 0
	// Line 537, Address: 0x294d88, Func Offset: 0x18
	// Line 539, Address: 0x294d90, Func Offset: 0x20
	// Line 540, Address: 0x294dac, Func Offset: 0x3c
	// Line 541, Address: 0x294dc4, Func Offset: 0x54
	// Line 542, Address: 0x294ddc, Func Offset: 0x6c
	// Line 545, Address: 0x294de8, Func Offset: 0x78
	// Line 546, Address: 0x294df0, Func Offset: 0x80
	// Line 545, Address: 0x294df4, Func Offset: 0x84
	// Line 546, Address: 0x294e1c, Func Offset: 0xac
	// Line 547, Address: 0x294e2c, Func Offset: 0xbc
	// Line 549, Address: 0x294e30, Func Offset: 0xc0
	// Line 550, Address: 0x294e40, Func Offset: 0xd0
	// Line 552, Address: 0x294e58, Func Offset: 0xe8
	// Line 553, Address: 0x294e68, Func Offset: 0xf8
	// Line 554, Address: 0x294e78, Func Offset: 0x108
	// Line 555, Address: 0x294e8c, Func Offset: 0x11c
	// Line 558, Address: 0x294e90, Func Offset: 0x120
	// Line 559, Address: 0x294e9c, Func Offset: 0x12c
	// Func End, Address: 0x294eb0, Func Offset: 0x140
}

// 
// Start address: 0x294eb0
void memo_func_pict_fade_init(_MsgCtrlDtHandler* handler)
{
	// Line 561, Address: 0x294eb0, Func Offset: 0
	// Line 563, Address: 0x294eb4, Func Offset: 0x4
	// Line 561, Address: 0x294eb8, Func Offset: 0x8
	// Line 562, Address: 0x294ec0, Func Offset: 0x10
	// Line 563, Address: 0x294ec8, Func Offset: 0x18
	// Line 564, Address: 0x294ed0, Func Offset: 0x20
	// Line 565, Address: 0x294ef0, Func Offset: 0x40
	// Line 567, Address: 0x294f00, Func Offset: 0x50
	// Line 568, Address: 0x294f18, Func Offset: 0x68
	// Line 569, Address: 0x294f28, Func Offset: 0x78
	// Func End, Address: 0x294f38, Func Offset: 0x88
}

// 
// Start address: 0x294f40
int memo_func_pict_fade_in(_MsgCtrlDtHandler* handler)
{
	// Line 571, Address: 0x294f40, Func Offset: 0
	// Line 572, Address: 0x294f50, Func Offset: 0x10
	// Line 574, Address: 0x294f5c, Func Offset: 0x1c
	// Line 575, Address: 0x294f74, Func Offset: 0x34
	// Line 576, Address: 0x294fac, Func Offset: 0x6c
	// Line 577, Address: 0x294fb4, Func Offset: 0x74
	// Line 579, Address: 0x294fb8, Func Offset: 0x78
	// Line 580, Address: 0x294fc8, Func Offset: 0x88
	// Line 582, Address: 0x294fd0, Func Offset: 0x90
	// Func End, Address: 0x294fe4, Func Offset: 0xa4
}

// 
// Start address: 0x294ff0
int memo_func_pict_fade_out(_MsgCtrlDtHandler* handler)
{
	// Line 584, Address: 0x294ff0, Func Offset: 0
	// Line 585, Address: 0x295000, Func Offset: 0x10
	// Line 587, Address: 0x29500c, Func Offset: 0x1c
	// Line 588, Address: 0x295024, Func Offset: 0x34
	// Line 589, Address: 0x295064, Func Offset: 0x74
	// Line 590, Address: 0x29506c, Func Offset: 0x7c
	// Line 592, Address: 0x295070, Func Offset: 0x80
	// Line 593, Address: 0x29507c, Func Offset: 0x8c
	// Line 595, Address: 0x295080, Func Offset: 0x90
	// Func End, Address: 0x295094, Func Offset: 0xa4
}

// 
// Start address: 0x2950a0
void MessageCtrlDtInit(_anon0* dt)
{
	_anon0* pt;
	_MsgCtrlDtHandler* handler;
	// Line 604, Address: 0x2950a0, Func Offset: 0
	// Line 608, Address: 0x2950a4, Func Offset: 0x4
	// Line 604, Address: 0x2950a8, Func Offset: 0x8
	// Line 606, Address: 0x2950b8, Func Offset: 0x18
	// Line 608, Address: 0x2950c0, Func Offset: 0x20
	// Line 610, Address: 0x2950c8, Func Offset: 0x28
	// Line 609, Address: 0x2950cc, Func Offset: 0x2c
	// Line 610, Address: 0x2950d0, Func Offset: 0x30
	// Line 609, Address: 0x2950d4, Func Offset: 0x34
	// Line 611, Address: 0x2950dc, Func Offset: 0x3c
	// Line 613, Address: 0x2950e4, Func Offset: 0x44
	// Line 612, Address: 0x2950ec, Func Offset: 0x4c
	// Line 614, Address: 0x2950f4, Func Offset: 0x54
	// Line 616, Address: 0x2950f8, Func Offset: 0x58
	// Line 618, Address: 0x295100, Func Offset: 0x60
	// Line 619, Address: 0x295108, Func Offset: 0x68
	// Line 622, Address: 0x295110, Func Offset: 0x70
	// Line 625, Address: 0x295114, Func Offset: 0x74
	// Line 626, Address: 0x295118, Func Offset: 0x78
	// Line 627, Address: 0x295124, Func Offset: 0x84
	// Line 631, Address: 0x29512c, Func Offset: 0x8c
	// Line 630, Address: 0x295130, Func Offset: 0x90
	// Line 631, Address: 0x295134, Func Offset: 0x94
	// Line 633, Address: 0x29513c, Func Offset: 0x9c
	// Line 634, Address: 0x295144, Func Offset: 0xa4
	// Line 635, Address: 0x29514c, Func Offset: 0xac
	// Line 636, Address: 0x295154, Func Offset: 0xb4
	// Line 638, Address: 0x295158, Func Offset: 0xb8
	// Line 640, Address: 0x295160, Func Offset: 0xc0
	// Line 641, Address: 0x295168, Func Offset: 0xc8
	// Func End, Address: 0x29517c, Func Offset: 0xdc
}

// 
// Start address: 0x295180
void MessageCtrlDtInitLastSel()
{
	// Line 652, Address: 0x295180, Func Offset: 0
	// Line 653, Address: 0x295184, Func Offset: 0x4
	// Func End, Address: 0x29518c, Func Offset: 0xc
}

// 
// Start address: 0x295190
void MessageCtrlDtCancelEnable(void(*func)())
{
	// Line 665, Address: 0x295190, Func Offset: 0
	// Line 664, Address: 0x295194, Func Offset: 0x4
	// Line 665, Address: 0x295198, Func Offset: 0x8
	// Line 664, Address: 0x29519c, Func Offset: 0xc
	// Line 666, Address: 0x2951a0, Func Offset: 0x10
	// Func End, Address: 0x2951a8, Func Offset: 0x18
}

// 
// Start address: 0x2951b0
void set_message(_MsgCtrlDtHandler* handler)
{
	// Line 673, Address: 0x2951b0, Func Offset: 0
	// Line 679, Address: 0x2951b4, Func Offset: 0x4
	// Line 673, Address: 0x2951b8, Func Offset: 0x8
	// Line 674, Address: 0x2951bc, Func Offset: 0xc
	// Line 675, Address: 0x2951c4, Func Offset: 0x14
	// Line 676, Address: 0x2951cc, Func Offset: 0x1c
	// Line 679, Address: 0x2951d8, Func Offset: 0x28
	// Line 681, Address: 0x2951dc, Func Offset: 0x2c
	// Func End, Address: 0x2951e4, Func Offset: 0x34
}

// 
// Start address: 0x2951f0
void message_set_disp_msg(_MsgCtrlDtHandler* handler)
{
	// Line 684, Address: 0x2951f0, Func Offset: 0
	// Line 689, Address: 0x2951f4, Func Offset: 0x4
	// Line 684, Address: 0x2951f8, Func Offset: 0x8
	// Line 689, Address: 0x2951fc, Func Offset: 0xc
	// Line 684, Address: 0x295200, Func Offset: 0x10
	// Line 689, Address: 0x295208, Func Offset: 0x18
	// Line 691, Address: 0x29521c, Func Offset: 0x2c
	// Line 692, Address: 0x295224, Func Offset: 0x34
	// Line 693, Address: 0x295228, Func Offset: 0x38
	// Line 694, Address: 0x295230, Func Offset: 0x40
	// Line 696, Address: 0x29524c, Func Offset: 0x5c
	// Line 697, Address: 0x295254, Func Offset: 0x64
	// Line 698, Address: 0x29525c, Func Offset: 0x6c
	// Line 697, Address: 0x295260, Func Offset: 0x70
	// Line 701, Address: 0x295264, Func Offset: 0x74
	// Line 703, Address: 0x295280, Func Offset: 0x90
	// Line 704, Address: 0x295288, Func Offset: 0x98
	// Line 705, Address: 0x29528c, Func Offset: 0x9c
	// Line 706, Address: 0x295298, Func Offset: 0xa8
	// Line 708, Address: 0x2952b4, Func Offset: 0xc4
	// Line 709, Address: 0x2952bc, Func Offset: 0xcc
	// Line 710, Address: 0x2952c4, Func Offset: 0xd4
	// Line 709, Address: 0x2952c8, Func Offset: 0xd8
	// Line 713, Address: 0x2952cc, Func Offset: 0xdc
	// Line 715, Address: 0x2952e8, Func Offset: 0xf8
	// Line 716, Address: 0x2952f0, Func Offset: 0x100
	// Line 717, Address: 0x2952f4, Func Offset: 0x104
	// Line 718, Address: 0x295300, Func Offset: 0x110
	// Line 720, Address: 0x29531c, Func Offset: 0x12c
	// Line 721, Address: 0x295324, Func Offset: 0x134
	// Line 722, Address: 0x29532c, Func Offset: 0x13c
	// Line 725, Address: 0x295330, Func Offset: 0x140
	// Line 727, Address: 0x295344, Func Offset: 0x154
	// Line 728, Address: 0x29534c, Func Offset: 0x15c
	// Line 729, Address: 0x295354, Func Offset: 0x164
	// Line 731, Address: 0x295358, Func Offset: 0x168
	// Line 733, Address: 0x29536c, Func Offset: 0x17c
	// Line 734, Address: 0x295374, Func Offset: 0x184
	// Line 735, Address: 0x29537c, Func Offset: 0x18c
	// Line 739, Address: 0x295380, Func Offset: 0x190
	// Line 740, Address: 0x295388, Func Offset: 0x198
	// Func End, Address: 0x295398, Func Offset: 0x1a8
}

// 
// Start address: 0x2953a0
void message_pause_func()
{
	_MsgCtrlDtHandler* handler;
	_anon0* pt;
	_anon0* end_cmd;
	int next_msg_no;
	int now_msg_end;
	int wait_time;
	// Line 745, Address: 0x2953a0, Func Offset: 0
	// Line 754, Address: 0x2953a4, Func Offset: 0x4
	// Line 745, Address: 0x2953a8, Func Offset: 0x8
	// Line 746, Address: 0x2953b4, Func Offset: 0x14
	// Line 745, Address: 0x2953b8, Func Offset: 0x18
	// Line 754, Address: 0x2953c4, Func Offset: 0x24
	// Line 755, Address: 0x2953d0, Func Offset: 0x30
	// Line 756, Address: 0x2953e4, Func Offset: 0x44
	// Line 758, Address: 0x2953f8, Func Offset: 0x58
	// Line 759, Address: 0x295404, Func Offset: 0x64
	// Line 760, Address: 0x29540c, Func Offset: 0x6c
	// Line 761, Address: 0x295414, Func Offset: 0x74
	// Line 762, Address: 0x295418, Func Offset: 0x78
	// Line 770, Address: 0x295420, Func Offset: 0x80
	// Line 774, Address: 0x295448, Func Offset: 0xa8
	// Line 775, Address: 0x295458, Func Offset: 0xb8
	// Line 776, Address: 0x29545c, Func Offset: 0xbc
	// Line 777, Address: 0x295460, Func Offset: 0xc0
	// Line 781, Address: 0x295468, Func Offset: 0xc8
	// Line 782, Address: 0x295470, Func Offset: 0xd0
	// Line 785, Address: 0x295478, Func Offset: 0xd8
	// Line 786, Address: 0x295488, Func Offset: 0xe8
	// Line 787, Address: 0x29548c, Func Offset: 0xec
	// Line 788, Address: 0x295490, Func Offset: 0xf0
	// Line 794, Address: 0x295498, Func Offset: 0xf8
	// Line 796, Address: 0x2954a8, Func Offset: 0x108
	// Line 797, Address: 0x2954b4, Func Offset: 0x114
	// Line 799, Address: 0x2954cc, Func Offset: 0x12c
	// Line 800, Address: 0x2954d4, Func Offset: 0x134
	// Line 801, Address: 0x2954d8, Func Offset: 0x138
	// Line 803, Address: 0x2954e8, Func Offset: 0x148
	// Line 804, Address: 0x2954f0, Func Offset: 0x150
	// Line 806, Address: 0x2954f4, Func Offset: 0x154
	// Line 808, Address: 0x295500, Func Offset: 0x160
	// Line 810, Address: 0x295510, Func Offset: 0x170
	// Line 811, Address: 0x295518, Func Offset: 0x178
	// Line 814, Address: 0x295520, Func Offset: 0x180
	// Line 818, Address: 0x295528, Func Offset: 0x188
	// Line 819, Address: 0x29553c, Func Offset: 0x19c
	// Line 821, Address: 0x295540, Func Offset: 0x1a0
	// Line 824, Address: 0x295548, Func Offset: 0x1a8
	// Line 825, Address: 0x295558, Func Offset: 0x1b8
	// Line 826, Address: 0x29555c, Func Offset: 0x1bc
	// Line 827, Address: 0x295560, Func Offset: 0x1c0
	// Line 832, Address: 0x295568, Func Offset: 0x1c8
	// Line 833, Address: 0x295578, Func Offset: 0x1d8
	// Line 837, Address: 0x295580, Func Offset: 0x1e0
	// Line 838, Address: 0x295590, Func Offset: 0x1f0
	// Line 839, Address: 0x295598, Func Offset: 0x1f8
	// Line 840, Address: 0x2955a0, Func Offset: 0x200
	// Line 842, Address: 0x2955a8, Func Offset: 0x208
	// Line 845, Address: 0x2955b0, Func Offset: 0x210
	// Line 847, Address: 0x2955c0, Func Offset: 0x220
	// Line 848, Address: 0x2955c4, Func Offset: 0x224
	// Line 849, Address: 0x2955c8, Func Offset: 0x228
	// Line 901, Address: 0x2955d0, Func Offset: 0x230
	// Line 902, Address: 0x2955dc, Func Offset: 0x23c
	// Line 903, Address: 0x29560c, Func Offset: 0x26c
	// Line 904, Address: 0x295610, Func Offset: 0x270
	// Line 905, Address: 0x295618, Func Offset: 0x278
	// Line 906, Address: 0x295624, Func Offset: 0x284
	// Line 908, Address: 0x29562c, Func Offset: 0x28c
	// Line 909, Address: 0x295630, Func Offset: 0x290
	// Line 910, Address: 0x295638, Func Offset: 0x298
	// Line 911, Address: 0x295644, Func Offset: 0x2a4
	// Line 913, Address: 0x29564c, Func Offset: 0x2ac
	// Line 914, Address: 0x295650, Func Offset: 0x2b0
	// Line 915, Address: 0x295658, Func Offset: 0x2b8
	// Line 916, Address: 0x295664, Func Offset: 0x2c4
	// Line 917, Address: 0x29566c, Func Offset: 0x2cc
	// Line 918, Address: 0x295670, Func Offset: 0x2d0
	// Line 919, Address: 0x295678, Func Offset: 0x2d8
	// Line 920, Address: 0x295684, Func Offset: 0x2e4
	// Line 921, Address: 0x29568c, Func Offset: 0x2ec
	// Line 923, Address: 0x295690, Func Offset: 0x2f0
	// Line 926, Address: 0x295698, Func Offset: 0x2f8
	// Line 928, Address: 0x29569c, Func Offset: 0x2fc
	// Line 929, Address: 0x2956a0, Func Offset: 0x300
	// Line 930, Address: 0x2956a4, Func Offset: 0x304
	// Line 935, Address: 0x2956a8, Func Offset: 0x308
	// Line 937, Address: 0x2956ac, Func Offset: 0x30c
	// Line 939, Address: 0x2956c4, Func Offset: 0x324
	// Line 942, Address: 0x2956d0, Func Offset: 0x330
	// Line 943, Address: 0x2956e0, Func Offset: 0x340
	// Line 944, Address: 0x2956e4, Func Offset: 0x344
	// Line 951, Address: 0x2956e8, Func Offset: 0x348
	// Line 953, Address: 0x295724, Func Offset: 0x384
	// Line 957, Address: 0x295728, Func Offset: 0x388
	// Line 959, Address: 0x295730, Func Offset: 0x390
	// Line 960, Address: 0x295788, Func Offset: 0x3e8
	// Line 962, Address: 0x295798, Func Offset: 0x3f8
	// Line 963, Address: 0x29579c, Func Offset: 0x3fc
	// Line 965, Address: 0x2957a0, Func Offset: 0x400
	// Line 966, Address: 0x2957b0, Func Offset: 0x410
	// Line 967, Address: 0x2957b4, Func Offset: 0x414
	// Line 968, Address: 0x2957b8, Func Offset: 0x418
	// Line 970, Address: 0x2957c0, Func Offset: 0x420
	// Line 976, Address: 0x2957c8, Func Offset: 0x428
	// Line 980, Address: 0x2957d0, Func Offset: 0x430
	// Line 981, Address: 0x2957e4, Func Offset: 0x444
	// Line 988, Address: 0x2957e8, Func Offset: 0x448
	// Line 989, Address: 0x2957f0, Func Offset: 0x450
	// Line 992, Address: 0x295820, Func Offset: 0x480
	// Line 994, Address: 0x295830, Func Offset: 0x490
	// Line 995, Address: 0x295840, Func Offset: 0x4a0
	// Line 997, Address: 0x295848, Func Offset: 0x4a8
	// Line 999, Address: 0x29585c, Func Offset: 0x4bc
	// Line 1000, Address: 0x29586c, Func Offset: 0x4cc
	// Line 1002, Address: 0x295878, Func Offset: 0x4d8
	// Line 1004, Address: 0x29588c, Func Offset: 0x4ec
	// Line 1005, Address: 0x29589c, Func Offset: 0x4fc
	// Line 1007, Address: 0x2958a8, Func Offset: 0x508
	// Line 1009, Address: 0x2958bc, Func Offset: 0x51c
	// Line 1013, Address: 0x2958d0, Func Offset: 0x530
	// Line 1016, Address: 0x2958e4, Func Offset: 0x544
	// Line 1019, Address: 0x2958f0, Func Offset: 0x550
	// Line 1020, Address: 0x2958f8, Func Offset: 0x558
	// Line 1030, Address: 0x295900, Func Offset: 0x560
	// Line 1032, Address: 0x295904, Func Offset: 0x564
	// Line 1035, Address: 0x295918, Func Offset: 0x578
	// Line 1038, Address: 0x295924, Func Offset: 0x584
	// Line 1042, Address: 0x295928, Func Offset: 0x588
	// Line 1044, Address: 0x295958, Func Offset: 0x5b8
	// Line 1045, Address: 0x29595c, Func Offset: 0x5bc
	// Line 1046, Address: 0x295964, Func Offset: 0x5c4
	// Line 1047, Address: 0x295968, Func Offset: 0x5c8
	// Line 1048, Address: 0x295970, Func Offset: 0x5d0
	// Line 1050, Address: 0x295984, Func Offset: 0x5e4
	// Line 1052, Address: 0x29598c, Func Offset: 0x5ec
	// Line 1053, Address: 0x295994, Func Offset: 0x5f4
	// Line 1055, Address: 0x295998, Func Offset: 0x5f8
	// Line 1056, Address: 0x2959a0, Func Offset: 0x600
	// Line 1057, Address: 0x2959a8, Func Offset: 0x608
	// Line 1058, Address: 0x2959b0, Func Offset: 0x610
	// Line 1060, Address: 0x2959b8, Func Offset: 0x618
	// Line 1061, Address: 0x2959bc, Func Offset: 0x61c
	// Line 1063, Address: 0x2959c0, Func Offset: 0x620
	// Line 1065, Address: 0x2959cc, Func Offset: 0x62c
	// Line 1066, Address: 0x2959d4, Func Offset: 0x634
	// Line 1067, Address: 0x2959d8, Func Offset: 0x638
	// Line 1071, Address: 0x2959e0, Func Offset: 0x640
	// Line 1072, Address: 0x2959ec, Func Offset: 0x64c
	// Line 1073, Address: 0x2959f4, Func Offset: 0x654
	// Line 1074, Address: 0x2959fc, Func Offset: 0x65c
	// Line 1075, Address: 0x295a00, Func Offset: 0x660
	// Line 1076, Address: 0x295a08, Func Offset: 0x668
	// Line 1077, Address: 0x295a10, Func Offset: 0x670
	// Line 1078, Address: 0x295a18, Func Offset: 0x678
	// Line 1085, Address: 0x295a20, Func Offset: 0x680
	// Line 1086, Address: 0x295a2c, Func Offset: 0x68c
	// Line 1088, Address: 0x295a40, Func Offset: 0x6a0
	// Line 1091, Address: 0x295a48, Func Offset: 0x6a8
	// Func End, Address: 0x295a68, Func Offset: 0x6c8
}

// 
// Start address: 0x295a70
int MessageCtrlDtMain()
{
	_MsgCtrlDtHandler* handler;
	// Line 1102, Address: 0x295a70, Func Offset: 0
	// Line 1107, Address: 0x295a74, Func Offset: 0x4
	// Line 1102, Address: 0x295a78, Func Offset: 0x8
	// Line 1107, Address: 0x295a80, Func Offset: 0x10
	// Line 1103, Address: 0x295a84, Func Offset: 0x14
	// Line 1107, Address: 0x295a88, Func Offset: 0x18
	// Line 1108, Address: 0x295a90, Func Offset: 0x20
	// Line 1109, Address: 0x295a98, Func Offset: 0x28
	// Line 1114, Address: 0x295aa0, Func Offset: 0x30
	// Line 1115, Address: 0x295aac, Func Offset: 0x3c
	// Line 1116, Address: 0x295ab4, Func Offset: 0x44
	// Line 1117, Address: 0x295abc, Func Offset: 0x4c
	// Line 1118, Address: 0x295ac8, Func Offset: 0x58
	// Line 1124, Address: 0x295ad0, Func Offset: 0x60
	// Line 1125, Address: 0x295ad8, Func Offset: 0x68
	// Func End, Address: 0x295ae8, Func Offset: 0x78
}

// 
// Start address: 0x295af0
int MessageCtrlDtMainHoldPuaseDisable()
{
	_MsgCtrlDtHandler* handler;
	// Line 1137, Address: 0x295af0, Func Offset: 0
	// Line 1142, Address: 0x295af4, Func Offset: 0x4
	// Line 1137, Address: 0x295af8, Func Offset: 0x8
	// Line 1142, Address: 0x295b00, Func Offset: 0x10
	// Line 1138, Address: 0x295b04, Func Offset: 0x14
	// Line 1142, Address: 0x295b08, Func Offset: 0x18
	// Line 1143, Address: 0x295b10, Func Offset: 0x20
	// Line 1148, Address: 0x295b18, Func Offset: 0x28
	// Line 1149, Address: 0x295b24, Func Offset: 0x34
	// Line 1150, Address: 0x295b2c, Func Offset: 0x3c
	// Line 1151, Address: 0x295b34, Func Offset: 0x44
	// Line 1152, Address: 0x295b40, Func Offset: 0x50
	// Line 1158, Address: 0x295b48, Func Offset: 0x58
	// Line 1159, Address: 0x295b50, Func Offset: 0x60
	// Func End, Address: 0x295b60, Func Offset: 0x70
}

// 
// Start address: 0x295b60
int MessageCtrlDtSelectedAtLast()
{
	// Line 1171, Address: 0x295b60, Func Offset: 0
	// Line 1172, Address: 0x295b64, Func Offset: 0x4
	// Func End, Address: 0x295b6c, Func Offset: 0xc
}

// 
// Start address: 0x295b70
unsigned int MessageCtrlDtDispTimer()
{
	// Line 1184, Address: 0x295b70, Func Offset: 0
	// Line 1185, Address: 0x295b74, Func Offset: 0x4
	// Func End, Address: 0x295b7c, Func Offset: 0xc
}

// 
// Start address: 0x295b80
void MessageCtrlDtDispFuncSetIgetSound()
{
	// Line 1206, Address: 0x295b80, Func Offset: 0
	// Line 1207, Address: 0x295b88, Func Offset: 0x8
	// Line 1208, Address: 0x295b98, Func Offset: 0x18
	// Line 1210, Address: 0x295ba0, Func Offset: 0x20
	// Func End, Address: 0x295bac, Func Offset: 0x2c
}

// 
// Start address: 0x295bb0
void MessageCtrlDtDispFuncCallIgetSound()
{
	// Line 1219, Address: 0x295bb0, Func Offset: 0
	// Line 1220, Address: 0x295bb8, Func Offset: 0x8
	// Line 1221, Address: 0x295bc8, Func Offset: 0x18
	// Line 1223, Address: 0x295bd0, Func Offset: 0x20
	// Func End, Address: 0x295bdc, Func Offset: 0x2c
}

// 
// Start address: 0x295be0
void MessageCtrlDtDispFuncSetLadderSound_sel2()
{
	// Line 1233, Address: 0x295be0, Func Offset: 0
	// Line 1234, Address: 0x295be8, Func Offset: 0x8
	// Line 1235, Address: 0x295bf8, Func Offset: 0x18
	// Line 1237, Address: 0x295c00, Func Offset: 0x20
	// Func End, Address: 0x295c0c, Func Offset: 0x2c
}

// 
// Start address: 0x295c10
void MessageCtrlDtDispFuncSetElevatorSound()
{
	// Line 1246, Address: 0x295c10, Func Offset: 0
	// Line 1247, Address: 0x295c18, Func Offset: 0x8
	// Line 1248, Address: 0x295c28, Func Offset: 0x18
	// Line 1249, Address: 0x295c30, Func Offset: 0x20
	// Line 1250, Address: 0x295c3c, Func Offset: 0x2c
	// Line 1252, Address: 0x295c48, Func Offset: 0x38
	// Func End, Address: 0x295c54, Func Offset: 0x44
}

// 
// Start address: 0x295c60
void MessageCtrlDtDispFuncSetLadderSound_sel3()
{
	// Line 1261, Address: 0x295c60, Func Offset: 0
	// Line 1262, Address: 0x295c68, Func Offset: 0x8
	// Line 1264, Address: 0x295c78, Func Offset: 0x18
	// Line 1268, Address: 0x295c80, Func Offset: 0x20
	// Line 1269, Address: 0x295c8c, Func Offset: 0x2c
	// Line 1270, Address: 0x295c90, Func Offset: 0x30
	// Func End, Address: 0x295c9c, Func Offset: 0x3c
}

// 
// Start address: 0x295ca0
void MessageCtrlDtDispFuncSetTrainDoorSound()
{
	// Line 1278, Address: 0x295ca0, Func Offset: 0
	// Line 1279, Address: 0x295ca8, Func Offset: 0x8
	// Line 1280, Address: 0x295cb8, Func Offset: 0x18
	// Line 1282, Address: 0x295cc0, Func Offset: 0x20
	// Func End, Address: 0x295ccc, Func Offset: 0x2c
}

