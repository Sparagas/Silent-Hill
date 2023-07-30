typedef struct sfObj;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sgTexArc;
typedef struct sgTexData;
typedef struct _anon6;
typedef struct sgClutData;
typedef struct _anon7;
typedef struct _GAME_WORK;

typedef void(*type_0)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_30)(sfObj*);

typedef char* type_1[9];
typedef char type_2[256];
typedef float type_3[4];
typedef float type_4[4][4];
typedef float type_5[4];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef float type_10[1];
typedef int type_12[1];
typedef int type_13[2];
typedef char type_14[256];
typedef _anon2 type_15[30];
typedef char type_16[256];
typedef char type_17[256];
typedef _anon5 type_18[19];
typedef char type_19[7];
typedef int type_20[1];
typedef int type_21[1];
typedef int type_22[1];
typedef int type_23[1];
typedef int type_24[2];
typedef int type_25[1];
typedef int type_26[2];
typedef int type_27[1];
typedef char type_28[256];
typedef _anon1 type_29[256];
typedef int type_31[2];
typedef int type_32[1];

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	short xx;
	short yy;
};

union _anon1
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

struct _anon2
{
	_anon0 ver;
	unsigned int played;
	_anon6 clock;
	int last;
	int level;
	short ending;
	char end_no;
	unsigned char end_sc;
	int save;
	int dress_ava;
	char game_mode;
	char clear_1wep;
	unsigned short hi_score;
	int pad2;
	int pad3;
};

struct _anon3
{
	int size;
	int last;
	int file_cursor;
	int file_start;
	unsigned int c_key;
	int pad1;
	int pad2;
	int pad3;
	_anon2 list[30];
	_anon4 option;
};

struct _anon4
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

struct _anon5
{
	int hr3ldk;
	int ret;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon6
{
	unsigned char stat;
	unsigned char second;
	unsigned char minute;
	unsigned char hour;
	unsigned char pad;
	unsigned char day;
	unsigned char month;
	unsigned char year;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon7
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

char* tmp_save_filename;
int save_game_mode;
int temp_gm_cur;
int save_1weapon;
int save_new_level;
int save_continue;
int last_selected;
int last_port;
int save_dress;
int save_dress_ava;
int save_cynthia_ava;
int save_count;
int save_count_old;
int save_hi_score;
int save_ending;
_GAME_WORK gamew;
int save_ending_no;
int save_ending_sc;
int file_start[2];
int file_cursor[2];
_anon5 lvp_list[19];
int save_mode;
int fade_depth;
int ana_yc;
int ana_xc;
int ana_yr;
int ana_xr;
int ana_yo;
int ana_xo;
int ana_yt;
int ana_xt;
int ana_y;
int ana_x;
char* mcstrs[9];
int busy_buf[2];
unsigned long* sg_packet_cur;
int save_timer;
int temp_game_mode;
int draw_cursor;
int stat_disp;
int save_now;
int mc_mode;
int yn_cur;
int save_step;
int save_true;
int save_end;
int last_cnt;
int save_draw;
void(*McSaveMain)(sfObj*);
int save_new_cos;
int last_print_port;

void McSetNewGameMode();
int McGetGameMode();
void McSetGameMode(int mode);
int McGetClear1Weapon();
void McSetClear1Weapon(int wep);
int McGetNewLevel();
void McSetContinueExist(int n);
int McIsContinueExist();
int McIsNewHorror();
int McIsNewHorrorAndDressAvailable();
int McGetEileenDress();
void McSetEileenDress(int flag);
int McGetEileenDressAvailable();
void McSetEileenDressAvailable(int flag);
int McGetCynthiaDress();
int McGetCynthiaDressAvailable();
void McSetCynthiaDressAvailable(int flag);
int McGetSaveNum();
void McSetSaveNum(int n);
void McIncSaveNum();
void McBackSaveNum();
void McNewGame();
int McGetEndingInfo();
void McSetEndingInfo(int flag);
int McGetEndNo();
int McGetEndSc();
void McAddEndingInfo();
int McGetHiScore();
void McSetHiScore(int score);
void McGetCursor(int port, int* cursor, int* start);
void McSetCursor(int port, int cursor, int start);
int McGetLastVisitPlace();
void McSetAlpha(int depth);
void McAnalogInit();
void McAnalogMain();
void init_busy_buf();
int ura_busy_check(int port);
int busy_check(int busy);
int old_busy_check(int busy);
int FreeCheck(int port);
int CheckMemoryCardExist();
void InitFileCursor();
int FileSelectSub_s(int port);
int FileSelectSub(int port, int fn);
int get_y30(int n);
int get_y24_l(int n);
int get_y24(int n);
void McDrawYN(int cur, int mode);
void McDraw3LRT(int color, int fn);
void McDraw3T(int color);
void McDraw3(int cur, int color);
void McDrawCursor();
int get_min(unsigned int played);
void add_change_color(_anon3* ptr, int cur, char flag);
void print_load_stat_s(int port, int cur, int disp);
void print_load_stat2(int port, int cur, int fn, int lower);
void McDrawTexSub(int x, int y, int w, int h, int u, int v, int page);
void McDrawBg();
void McDrawTab(int port);
void yn_sub(sfObj* obj);
void McSaveMain(sfObj* obj);
void McSaveSet();
void McSaveSetEnding();
int McGetSaveEnd();
unsigned int get_disp_col();
void disp_yn_24(int cur);
void McSaveDraw(int depth);
void McSaveLevelInit();
void McSaveLevelChangeMode();
void set_temp_color();
void McLoadMain();
void print_checking(int port);
void print_loaded(int port);
void disp_yn_30(int cur);
void disp_slot_all();
void McCheckStart();

// 
// Start address: 0x2bead0
void McSetNewGameMode()
{
	// Line 164, Address: 0x2bead0, Func Offset: 0
	// Line 165, Address: 0x2beadc, Func Offset: 0xc
	// Func End, Address: 0x2beae4, Func Offset: 0x14
}

// 
// Start address: 0x2beaf0
int McGetGameMode()
{
	// Line 172, Address: 0x2beaf0, Func Offset: 0
	// Line 173, Address: 0x2beaf4, Func Offset: 0x4
	// Func End, Address: 0x2beafc, Func Offset: 0xc
}

// 
// Start address: 0x2beb00
void McSetGameMode(int mode)
{
	// Line 179, Address: 0x2beb00, Func Offset: 0
	// Line 180, Address: 0x2beb04, Func Offset: 0x4
	// Func End, Address: 0x2beb0c, Func Offset: 0xc
}

// 
// Start address: 0x2beb10
int McGetClear1Weapon()
{
	// Line 186, Address: 0x2beb10, Func Offset: 0
	// Line 187, Address: 0x2beb14, Func Offset: 0x4
	// Func End, Address: 0x2beb1c, Func Offset: 0xc
}

// 
// Start address: 0x2beb20
void McSetClear1Weapon(int wep)
{
	// Line 193, Address: 0x2beb20, Func Offset: 0
	// Line 194, Address: 0x2beb24, Func Offset: 0x4
	// Func End, Address: 0x2beb2c, Func Offset: 0xc
}

// 
// Start address: 0x2beb30
int McGetNewLevel()
{
	// Line 200, Address: 0x2beb30, Func Offset: 0
	// Line 201, Address: 0x2beb38, Func Offset: 0x8
	// Func End, Address: 0x2beb40, Func Offset: 0x10
}

// 
// Start address: 0x2beb40
void McSetContinueExist(int n)
{
	// Line 207, Address: 0x2beb40, Func Offset: 0
	// Line 208, Address: 0x2beb44, Func Offset: 0x4
	// Func End, Address: 0x2beb4c, Func Offset: 0xc
}

// 
// Start address: 0x2beb50
int McIsContinueExist()
{
	// Line 214, Address: 0x2beb50, Func Offset: 0
	// Line 215, Address: 0x2beb58, Func Offset: 0x8
	// Func End, Address: 0x2beb60, Func Offset: 0x10
}

// 
// Start address: 0x2beb60
int McIsNewHorror()
{
	_anon3* cptr;
	// Line 220, Address: 0x2beb60, Func Offset: 0
	// Line 223, Address: 0x2beb64, Func Offset: 0x4
	// Line 220, Address: 0x2beb68, Func Offset: 0x8
	// Line 223, Address: 0x2beb6c, Func Offset: 0xc
	// Line 224, Address: 0x2beb74, Func Offset: 0x14
	// Line 225, Address: 0x2beb78, Func Offset: 0x18
	// Line 224, Address: 0x2beb7c, Func Offset: 0x1c
	// Line 225, Address: 0x2beb9c, Func Offset: 0x3c
	// Func End, Address: 0x2beba4, Func Offset: 0x44
}

// 
// Start address: 0x2bebb0
int McIsNewHorrorAndDressAvailable()
{
	_anon3* cptr;
	// Line 231, Address: 0x2bebb0, Func Offset: 0
	// Line 234, Address: 0x2bebb4, Func Offset: 0x4
	// Line 231, Address: 0x2bebb8, Func Offset: 0x8
	// Line 234, Address: 0x2bebbc, Func Offset: 0xc
	// Line 235, Address: 0x2bebc4, Func Offset: 0x14
	// Line 236, Address: 0x2bebc8, Func Offset: 0x18
	// Line 235, Address: 0x2bebcc, Func Offset: 0x1c
	// Line 236, Address: 0x2bebe4, Func Offset: 0x34
	// Func End, Address: 0x2bebec, Func Offset: 0x3c
}

// 
// Start address: 0x2bebf0
int McGetEileenDress()
{
	// Line 242, Address: 0x2bebf0, Func Offset: 0
	// Line 243, Address: 0x2bebf4, Func Offset: 0x4
	// Func End, Address: 0x2bebfc, Func Offset: 0xc
}

// 
// Start address: 0x2bec00
void McSetEileenDress(int flag)
{
	// Line 249, Address: 0x2bec00, Func Offset: 0
	// Line 250, Address: 0x2bec04, Func Offset: 0x4
	// Func End, Address: 0x2bec0c, Func Offset: 0xc
}

// 
// Start address: 0x2bec10
int McGetEileenDressAvailable()
{
	// Line 256, Address: 0x2bec10, Func Offset: 0
	// Line 257, Address: 0x2bec14, Func Offset: 0x4
	// Func End, Address: 0x2bec1c, Func Offset: 0xc
}

// 
// Start address: 0x2bec20
void McSetEileenDressAvailable(int flag)
{
	// Line 263, Address: 0x2bec20, Func Offset: 0
	// Line 264, Address: 0x2bec24, Func Offset: 0x4
	// Func End, Address: 0x2bec2c, Func Offset: 0xc
}

// 
// Start address: 0x2bec30
int McGetCynthiaDress()
{
	// Line 269, Address: 0x2bec30, Func Offset: 0
	// Line 270, Address: 0x2bec38, Func Offset: 0x8
	// Line 271, Address: 0x2bec58, Func Offset: 0x28
	// Line 272, Address: 0x2bec60, Func Offset: 0x30
	// Line 273, Address: 0x2bec68, Func Offset: 0x38
	// Func End, Address: 0x2bec74, Func Offset: 0x44
}

// 
// Start address: 0x2bec80
int McGetCynthiaDressAvailable()
{
	// Line 279, Address: 0x2bec80, Func Offset: 0
	// Line 280, Address: 0x2bec84, Func Offset: 0x4
	// Func End, Address: 0x2bec8c, Func Offset: 0xc
}

// 
// Start address: 0x2bec90
void McSetCynthiaDressAvailable(int flag)
{
	// Line 286, Address: 0x2bec90, Func Offset: 0
	// Line 287, Address: 0x2bec94, Func Offset: 0x4
	// Func End, Address: 0x2bec9c, Func Offset: 0xc
}

// 
// Start address: 0x2beca0
int McGetSaveNum()
{
	// Line 293, Address: 0x2beca0, Func Offset: 0
	// Line 294, Address: 0x2beca4, Func Offset: 0x4
	// Func End, Address: 0x2becac, Func Offset: 0xc
}

// 
// Start address: 0x2becb0
void McSetSaveNum(int n)
{
	// Line 300, Address: 0x2becb0, Func Offset: 0
	// Line 301, Address: 0x2becb4, Func Offset: 0x4
	// Func End, Address: 0x2becbc, Func Offset: 0xc
}

// 
// Start address: 0x2becc0
void McIncSaveNum()
{
	// Line 307, Address: 0x2becc0, Func Offset: 0
	// Line 308, Address: 0x2becd0, Func Offset: 0x10
	// Line 309, Address: 0x2becdc, Func Offset: 0x1c
	// Line 310, Address: 0x2becf8, Func Offset: 0x38
	// Func End, Address: 0x2bed00, Func Offset: 0x40
}

// 
// Start address: 0x2bed00
void McBackSaveNum()
{
	// Line 316, Address: 0x2bed00, Func Offset: 0
	// Line 317, Address: 0x2bed0c, Func Offset: 0xc
	// Func End, Address: 0x2bed14, Func Offset: 0x14
}

// 
// Start address: 0x2bed20
void McNewGame()
{
	// Line 322, Address: 0x2bed20, Func Offset: 0
	// Line 323, Address: 0x2bed24, Func Offset: 0x4
	// Line 322, Address: 0x2bed28, Func Offset: 0x8
	// Line 323, Address: 0x2bed2c, Func Offset: 0xc
	// Line 324, Address: 0x2bed38, Func Offset: 0x18
	// Line 325, Address: 0x2bed40, Func Offset: 0x20
	// Line 326, Address: 0x2bed48, Func Offset: 0x28
	// Line 327, Address: 0x2bed50, Func Offset: 0x30
	// Line 328, Address: 0x2bed58, Func Offset: 0x38
	// Line 329, Address: 0x2bed60, Func Offset: 0x40
	// Line 330, Address: 0x2bed68, Func Offset: 0x48
	// Line 331, Address: 0x2bed70, Func Offset: 0x50
	// Line 333, Address: 0x2bed78, Func Offset: 0x58
	// Func End, Address: 0x2bed84, Func Offset: 0x64
}

// 
// Start address: 0x2bed90
int McGetEndingInfo()
{
	// Line 343, Address: 0x2bed90, Func Offset: 0
	// Line 344, Address: 0x2bed94, Func Offset: 0x4
	// Func End, Address: 0x2bed9c, Func Offset: 0xc
}

// 
// Start address: 0x2beda0
void McSetEndingInfo(int flag)
{
	// Line 350, Address: 0x2beda0, Func Offset: 0
	// Line 351, Address: 0x2beda4, Func Offset: 0x4
	// Func End, Address: 0x2bedac, Func Offset: 0xc
}

// 
// Start address: 0x2bedb0
int McGetEndNo()
{
	// Line 357, Address: 0x2bedb0, Func Offset: 0
	// Line 358, Address: 0x2bedb4, Func Offset: 0x4
	// Func End, Address: 0x2bedbc, Func Offset: 0xc
}

// 
// Start address: 0x2bedc0
int McGetEndSc()
{
	// Line 364, Address: 0x2bedc0, Func Offset: 0
	// Line 365, Address: 0x2bedc4, Func Offset: 0x4
	// Func End, Address: 0x2bedcc, Func Offset: 0xc
}

// 
// Start address: 0x2bedd0
void McAddEndingInfo()
{
	int ret;
	int score;
	// Line 370, Address: 0x2bedd0, Func Offset: 0
	// Line 373, Address: 0x2bedd8, Func Offset: 0x8
	// Line 375, Address: 0x2bede0, Func Offset: 0x10
	// Line 377, Address: 0x2bedf0, Func Offset: 0x20
	// Line 375, Address: 0x2bedf8, Func Offset: 0x28
	// Line 379, Address: 0x2bee00, Func Offset: 0x30
	// Line 380, Address: 0x2bee0c, Func Offset: 0x3c
	// Line 381, Address: 0x2bee28, Func Offset: 0x58
	// Line 382, Address: 0x2bee50, Func Offset: 0x80
	// Line 384, Address: 0x2bee60, Func Offset: 0x90
	// Line 385, Address: 0x2bee78, Func Offset: 0xa8
	// Line 386, Address: 0x2bee80, Func Offset: 0xb0
	// Func End, Address: 0x2bee90, Func Offset: 0xc0
}

// 
// Start address: 0x2bee90
int McGetHiScore()
{
	// Line 392, Address: 0x2bee90, Func Offset: 0
	// Line 393, Address: 0x2bee94, Func Offset: 0x4
	// Func End, Address: 0x2bee9c, Func Offset: 0xc
}

// 
// Start address: 0x2beea0
void McSetHiScore(int score)
{
	// Line 399, Address: 0x2beea0, Func Offset: 0
	// Line 400, Address: 0x2beea4, Func Offset: 0x4
	// Func End, Address: 0x2beeac, Func Offset: 0xc
}

// 
// Start address: 0x2beeb0
void McGetCursor(int port, int* cursor, int* start)
{
	// Line 407, Address: 0x2beeb4, Func Offset: 0x4
	// Line 406, Address: 0x2beeb8, Func Offset: 0x8
	// Line 407, Address: 0x2beebc, Func Offset: 0xc
	// Line 406, Address: 0x2beec0, Func Offset: 0x10
	// Line 407, Address: 0x2beec4, Func Offset: 0x14
	// Line 406, Address: 0x2beec8, Func Offset: 0x18
	// Line 407, Address: 0x2beed4, Func Offset: 0x24
	// Line 408, Address: 0x2beed8, Func Offset: 0x28
	// Func End, Address: 0x2beee0, Func Offset: 0x30
}

// 
// Start address: 0x2beee0
void McSetCursor(int port, int cursor, int start)
{
	// Line 415, Address: 0x2beee4, Func Offset: 0x4
	// Line 414, Address: 0x2beee8, Func Offset: 0x8
	// Line 415, Address: 0x2beeec, Func Offset: 0xc
	// Line 414, Address: 0x2beef0, Func Offset: 0x10
	// Line 415, Address: 0x2beef4, Func Offset: 0x14
	// Line 414, Address: 0x2beef8, Func Offset: 0x18
	// Line 416, Address: 0x2bef00, Func Offset: 0x20
	// Func End, Address: 0x2bef08, Func Offset: 0x28
}

// 
// Start address: 0x2bef10
int McGetLastVisitPlace()
{
	int n;
	_anon5* lptr;
	// Line 448, Address: 0x2bef10, Func Offset: 0
	// Line 452, Address: 0x2bef14, Func Offset: 0x4
	// Line 448, Address: 0x2bef18, Func Offset: 0x8
	// Line 452, Address: 0x2bef1c, Func Offset: 0xc
	// Line 455, Address: 0x2bef30, Func Offset: 0x20
	// Line 456, Address: 0x2bef38, Func Offset: 0x28
	// Line 455, Address: 0x2bef3c, Func Offset: 0x2c
	// Line 456, Address: 0x2bef40, Func Offset: 0x30
	// Line 459, Address: 0x2bef44, Func Offset: 0x34
	// Line 456, Address: 0x2bef48, Func Offset: 0x38
	// Line 458, Address: 0x2bef4c, Func Offset: 0x3c
	// Line 459, Address: 0x2bef60, Func Offset: 0x50
	// Line 461, Address: 0x2bef70, Func Offset: 0x60
	// Line 485, Address: 0x2bef78, Func Offset: 0x68
	// Func End, Address: 0x2bef84, Func Offset: 0x74
}

// 
// Start address: 0x2bef90
void McSetAlpha(int depth)
{
	// Line 491, Address: 0x2bef90, Func Offset: 0
	// Line 492, Address: 0x2bef9c, Func Offset: 0xc
	// Line 494, Address: 0x2befa8, Func Offset: 0x18
	// Func End, Address: 0x2befb0, Func Offset: 0x20
}

// 
// Start address: 0x2befb0
void McAnalogInit()
{
	// Line 501, Address: 0x2befb0, Func Offset: 0
	// Line 502, Address: 0x2befb8, Func Offset: 0x8
	// Line 503, Address: 0x2befc0, Func Offset: 0x10
	// Line 504, Address: 0x2befc8, Func Offset: 0x18
	// Line 505, Address: 0x2befd0, Func Offset: 0x20
	// Line 506, Address: 0x2befd8, Func Offset: 0x28
	// Line 507, Address: 0x2befe0, Func Offset: 0x30
	// Line 508, Address: 0x2befe8, Func Offset: 0x38
	// Line 509, Address: 0x2beff0, Func Offset: 0x40
	// Line 510, Address: 0x2beff8, Func Offset: 0x48
	// Line 511, Address: 0x2beffc, Func Offset: 0x4c
	// Func End, Address: 0x2bf004, Func Offset: 0x54
}

// 
// Start address: 0x2bf010
void McAnalogMain()
{
	float lx;
	float ly;
	// Line 513, Address: 0x2bf010, Func Offset: 0
	// Line 516, Address: 0x2bf014, Func Offset: 0x4
	// Line 513, Address: 0x2bf018, Func Offset: 0x8
	// Line 519, Address: 0x2bf01c, Func Offset: 0xc
	// Line 513, Address: 0x2bf020, Func Offset: 0x10
	// Line 516, Address: 0x2bf024, Func Offset: 0x14
	// Line 517, Address: 0x2bf028, Func Offset: 0x18
	// Line 516, Address: 0x2bf030, Func Offset: 0x20
	// Line 517, Address: 0x2bf038, Func Offset: 0x28
	// Line 519, Address: 0x2bf03c, Func Offset: 0x2c
	// Line 520, Address: 0x2bf048, Func Offset: 0x38
	// Line 523, Address: 0x2bf050, Func Offset: 0x40
	// Line 522, Address: 0x2bf054, Func Offset: 0x44
	// Line 523, Address: 0x2bf058, Func Offset: 0x48
	// Line 524, Address: 0x2bf080, Func Offset: 0x70
	// Line 526, Address: 0x2bf0a8, Func Offset: 0x98
	// Line 525, Address: 0x2bf0b0, Func Offset: 0xa0
	// Line 526, Address: 0x2bf0b4, Func Offset: 0xa4
	// Line 527, Address: 0x2bf0d8, Func Offset: 0xc8
	// Line 529, Address: 0x2bf100, Func Offset: 0xf0
	// Line 530, Address: 0x2bf110, Func Offset: 0x100
	// Line 531, Address: 0x2bf128, Func Offset: 0x118
	// Line 532, Address: 0x2bf138, Func Offset: 0x128
	// Line 534, Address: 0x2bf150, Func Offset: 0x140
	// Line 535, Address: 0x2bf154, Func Offset: 0x144
	// Line 536, Address: 0x2bf15c, Func Offset: 0x14c
	// Line 538, Address: 0x2bf16c, Func Offset: 0x15c
	// Line 537, Address: 0x2bf170, Func Offset: 0x160
	// Line 538, Address: 0x2bf174, Func Offset: 0x164
	// Line 539, Address: 0x2bf178, Func Offset: 0x168
	// Line 541, Address: 0x2bf180, Func Offset: 0x170
	// Line 542, Address: 0x2bf190, Func Offset: 0x180
	// Line 543, Address: 0x2bf198, Func Offset: 0x188
	// Line 545, Address: 0x2bf1a0, Func Offset: 0x190
	// Line 546, Address: 0x2bf1a8, Func Offset: 0x198
	// Line 549, Address: 0x2bf1b4, Func Offset: 0x1a4
	// Line 550, Address: 0x2bf1b8, Func Offset: 0x1a8
	// Line 551, Address: 0x2bf1bc, Func Offset: 0x1ac
	// Line 552, Address: 0x2bf1c4, Func Offset: 0x1b4
	// Line 554, Address: 0x2bf1d4, Func Offset: 0x1c4
	// Line 553, Address: 0x2bf1d8, Func Offset: 0x1c8
	// Line 554, Address: 0x2bf1dc, Func Offset: 0x1cc
	// Line 555, Address: 0x2bf1e0, Func Offset: 0x1d0
	// Line 557, Address: 0x2bf1e8, Func Offset: 0x1d8
	// Line 558, Address: 0x2bf1f8, Func Offset: 0x1e8
	// Line 559, Address: 0x2bf200, Func Offset: 0x1f0
	// Line 561, Address: 0x2bf208, Func Offset: 0x1f8
	// Line 562, Address: 0x2bf210, Func Offset: 0x200
	// Line 565, Address: 0x2bf21c, Func Offset: 0x20c
	// Line 567, Address: 0x2bf220, Func Offset: 0x210
	// Func End, Address: 0x2bf230, Func Offset: 0x220
}

// 
// Start address: 0x2bf230
void init_busy_buf()
{
	// Line 691, Address: 0x2bf230, Func Offset: 0
	// Line 692, Address: 0x2bf23c, Func Offset: 0xc
	// Func End, Address: 0x2bf244, Func Offset: 0x14
}

// 
// Start address: 0x2bf250
int ura_busy_check(int port)
{
	// Line 698, Address: 0x2bf250, Func Offset: 0
	// Line 699, Address: 0x2bf258, Func Offset: 0x8
	// Line 700, Address: 0x2bf264, Func Offset: 0x14
	// Line 701, Address: 0x2bf268, Func Offset: 0x18
	// Line 703, Address: 0x2bf274, Func Offset: 0x24
	// Line 704, Address: 0x2bf278, Func Offset: 0x28
	// Line 705, Address: 0x2bf284, Func Offset: 0x34
	// Line 706, Address: 0x2bf290, Func Offset: 0x40
	// Line 707, Address: 0x2bf294, Func Offset: 0x44
	// Line 710, Address: 0x2bf2a0, Func Offset: 0x50
	// Line 711, Address: 0x2bf2a8, Func Offset: 0x58
	// Func End, Address: 0x2bf2b0, Func Offset: 0x60
}

// 
// Start address: 0x2bf2b0
int busy_check(int busy)
{
	// Line 717, Address: 0x2bf2b0, Func Offset: 0
	// Line 718, Address: 0x2bf2bc, Func Offset: 0xc
	// Line 719, Address: 0x2bf2c8, Func Offset: 0x18
	// Line 721, Address: 0x2bf2d0, Func Offset: 0x20
	// Line 722, Address: 0x2bf2dc, Func Offset: 0x2c
	// Line 723, Address: 0x2bf2e0, Func Offset: 0x30
	// Line 724, Address: 0x2bf2ec, Func Offset: 0x3c
	// Line 725, Address: 0x2bf2fc, Func Offset: 0x4c
	// Line 726, Address: 0x2bf304, Func Offset: 0x54
	// Line 727, Address: 0x2bf308, Func Offset: 0x58
	// Line 729, Address: 0x2bf310, Func Offset: 0x60
	// Line 730, Address: 0x2bf318, Func Offset: 0x68
	// Func End, Address: 0x2bf320, Func Offset: 0x70
}

// 
// Start address: 0x2bf320
int old_busy_check(int busy)
{
	// Line 736, Address: 0x2bf320, Func Offset: 0
	// Line 737, Address: 0x2bf32c, Func Offset: 0xc
	// Line 738, Address: 0x2bf334, Func Offset: 0x14
	// Line 740, Address: 0x2bf338, Func Offset: 0x18
	// Line 743, Address: 0x2bf350, Func Offset: 0x30
	// Func End, Address: 0x2bf358, Func Offset: 0x38
}

// 
// Start address: 0x2bf360
int FreeCheck(int port)
{
	// Line 754, Address: 0x2bf360, Func Offset: 0
	// Line 755, Address: 0x2bf36c, Func Offset: 0xc
	// Line 756, Address: 0x2bf37c, Func Offset: 0x1c
	// Line 757, Address: 0x2bf38c, Func Offset: 0x2c
	// Line 758, Address: 0x2bf394, Func Offset: 0x34
	// Line 760, Address: 0x2bf398, Func Offset: 0x38
	// Line 761, Address: 0x2bf3a8, Func Offset: 0x48
	// Line 765, Address: 0x2bf3b0, Func Offset: 0x50
	// Line 770, Address: 0x2bf3cc, Func Offset: 0x6c
	// Line 771, Address: 0x2bf3d0, Func Offset: 0x70
	// Line 772, Address: 0x2bf3d8, Func Offset: 0x78
	// Func End, Address: 0x2bf3e8, Func Offset: 0x88
}

// 
// Start address: 0x2bf3f0
int CheckMemoryCardExist()
{
	int cnt;
	// Line 779, Address: 0x2bf3f0, Func Offset: 0
	// Line 783, Address: 0x2bf3f4, Func Offset: 0x4
	// Line 779, Address: 0x2bf3f8, Func Offset: 0x8
	// Line 783, Address: 0x2bf400, Func Offset: 0x10
	// Line 784, Address: 0x2bf418, Func Offset: 0x28
	// Line 785, Address: 0x2bf430, Func Offset: 0x40
	// Line 786, Address: 0x2bf434, Func Offset: 0x44
	// Func End, Address: 0x2bf444, Func Offset: 0x54
}

// 
// Start address: 0x2bf450
void InitFileCursor()
{
	// Line 790, Address: 0x2bf450, Func Offset: 0
	// Line 791, Address: 0x2bf458, Func Offset: 0x8
	// Line 792, Address: 0x2bf460, Func Offset: 0x10
	// Line 793, Address: 0x2bf468, Func Offset: 0x18
	// Line 801, Address: 0x2bf46c, Func Offset: 0x1c
	// Func End, Address: 0x2bf474, Func Offset: 0x24
}

// 
// Start address: 0x2bf480
int FileSelectSub_s(int port)
{
	// Line 811, Address: 0x2bf480, Func Offset: 0
	// Line 833, Address: 0x2bf490, Func Offset: 0x10
	// Func End, Address: 0x2bf498, Func Offset: 0x18
}

// 
// Start address: 0x2bf4a0
int FileSelectSub(int port, int fn)
{
	int old_cur;
	int* file_cur;
	int* file_1st;
	// Line 842, Address: 0x2bf4a0, Func Offset: 0
	// Line 847, Address: 0x2bf4b4, Func Offset: 0x14
	// Line 849, Address: 0x2bf4bc, Func Offset: 0x1c
	// Line 850, Address: 0x2bf4d0, Func Offset: 0x30
	// Line 849, Address: 0x2bf4d4, Func Offset: 0x34
	// Line 850, Address: 0x2bf4d8, Func Offset: 0x38
	// Line 852, Address: 0x2bf4e8, Func Offset: 0x48
	// Line 854, Address: 0x2bf50c, Func Offset: 0x6c
	// Line 855, Address: 0x2bf510, Func Offset: 0x70
	// Line 856, Address: 0x2bf528, Func Offset: 0x88
	// Line 858, Address: 0x2bf544, Func Offset: 0xa4
	// Line 859, Address: 0x2bf548, Func Offset: 0xa8
	// Line 861, Address: 0x2bf564, Func Offset: 0xc4
	// Line 864, Address: 0x2bf568, Func Offset: 0xc8
	// Line 865, Address: 0x2bf574, Func Offset: 0xd4
	// Line 866, Address: 0x2bf598, Func Offset: 0xf8
	// Line 874, Address: 0x2bf5a0, Func Offset: 0x100
	// Line 866, Address: 0x2bf5a4, Func Offset: 0x104
	// Line 874, Address: 0x2bf5b8, Func Offset: 0x118
	// Line 875, Address: 0x2bf5d0, Func Offset: 0x130
	// Line 876, Address: 0x2bf600, Func Offset: 0x160
	// Line 879, Address: 0x2bf604, Func Offset: 0x164
	// Line 880, Address: 0x2bf608, Func Offset: 0x168
	// Line 881, Address: 0x2bf630, Func Offset: 0x190
	// Line 889, Address: 0x2bf64c, Func Offset: 0x1ac
	// Line 890, Address: 0x2bf668, Func Offset: 0x1c8
	// Line 891, Address: 0x2bf698, Func Offset: 0x1f8
	// Line 894, Address: 0x2bf69c, Func Offset: 0x1fc
	// Line 895, Address: 0x2bf6a0, Func Offset: 0x200
	// Line 896, Address: 0x2bf6c8, Func Offset: 0x228
	// Line 902, Address: 0x2bf6e4, Func Offset: 0x244
	// Line 903, Address: 0x2bf6f8, Func Offset: 0x258
	// Line 904, Address: 0x2bf714, Func Offset: 0x274
	// Line 907, Address: 0x2bf728, Func Offset: 0x288
	// Line 908, Address: 0x2bf750, Func Offset: 0x2b0
	// Line 914, Address: 0x2bf76c, Func Offset: 0x2cc
	// Line 915, Address: 0x2bf780, Func Offset: 0x2e0
	// Line 916, Address: 0x2bf79c, Func Offset: 0x2fc
	// Line 918, Address: 0x2bf7ac, Func Offset: 0x30c
	// Line 920, Address: 0x2bf7b0, Func Offset: 0x310
	// Line 935, Address: 0x2bf7dc, Func Offset: 0x33c
	// Line 936, Address: 0x2bf7e0, Func Offset: 0x340
	// Func End, Address: 0x2bf7f4, Func Offset: 0x354
}

// 
// Start address: 0x2bf800
int get_y30(int n)
{
	// Line 1527, Address: 0x2bf800, Func Offset: 0
	// Line 1528, Address: 0x2bf808, Func Offset: 0x8
	// Func End, Address: 0x2bf810, Func Offset: 0x10
}

// 
// Start address: 0x2bf810
int get_y24_l(int n)
{
	// Line 1535, Address: 0x2bf810, Func Offset: 0
	// Line 1536, Address: 0x2bf81c, Func Offset: 0xc
	// Func End, Address: 0x2bf824, Func Offset: 0x14
}

// 
// Start address: 0x2bf830
int get_y24(int n)
{
	// Line 1543, Address: 0x2bf830, Func Offset: 0
	// Line 1544, Address: 0x2bf840, Func Offset: 0x10
	// Func End, Address: 0x2bf848, Func Offset: 0x18
}

// 
// Start address: 0x2bf850
void McDrawYN(int cur, int mode)
{
	unsigned long* pk;
	int x;
	int y;
	int w;
	int h;
	unsigned char c;
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
	// Line 1551, Address: 0x2bf850, Func Offset: 0
	// Line 1559, Address: 0x2bf868, Func Offset: 0x18
	// Line 1560, Address: 0x2bf884, Func Offset: 0x34
	// Line 1561, Address: 0x2bf88c, Func Offset: 0x3c
	// Line 1562, Address: 0x2bf894, Func Offset: 0x44
	// Line 1565, Address: 0x2bf8a0, Func Offset: 0x50
	// Line 1568, Address: 0x2bf8a4, Func Offset: 0x54
	// Line 1565, Address: 0x2bf8a8, Func Offset: 0x58
	// Line 1567, Address: 0x2bf8b4, Func Offset: 0x64
	// Line 1568, Address: 0x2bf8b8, Func Offset: 0x68
	// Line 1565, Address: 0x2bf8c0, Func Offset: 0x70
	// Line 1567, Address: 0x2bf8d0, Func Offset: 0x80
	// Line 1565, Address: 0x2bf8d4, Func Offset: 0x84
	// Line 1567, Address: 0x2bf8d8, Func Offset: 0x88
	// Line 1568, Address: 0x2bf8ec, Func Offset: 0x9c
	// Line 1567, Address: 0x2bf8f0, Func Offset: 0xa0
	// Line 1568, Address: 0x2bf8f4, Func Offset: 0xa4
	// Line 1571, Address: 0x2bf914, Func Offset: 0xc4
	// Line 1575, Address: 0x2bf944, Func Offset: 0xf4
	// Line 1571, Address: 0x2bf948, Func Offset: 0xf8
	// Line 1575, Address: 0x2bf94c, Func Offset: 0xfc
	// Line 1578, Address: 0x2bf974, Func Offset: 0x124
	// Line 1579, Address: 0x2bf97c, Func Offset: 0x12c
	// Line 1580, Address: 0x2bf98c, Func Offset: 0x13c
	// Line 1583, Address: 0x2bf990, Func Offset: 0x140
	// Line 1581, Address: 0x2bf994, Func Offset: 0x144
	// Line 1582, Address: 0x2bf998, Func Offset: 0x148
	// Line 1579, Address: 0x2bf99c, Func Offset: 0x14c
	// Line 1580, Address: 0x2bf9ac, Func Offset: 0x15c
	// Line 1579, Address: 0x2bf9b0, Func Offset: 0x160
	// Line 1580, Address: 0x2bf9b4, Func Offset: 0x164
	// Line 1583, Address: 0x2bf9c8, Func Offset: 0x178
	// Line 1584, Address: 0x2bf9d0, Func Offset: 0x180
	// Line 1586, Address: 0x2bf9d8, Func Offset: 0x188
	// Line 1587, Address: 0x2bf9e8, Func Offset: 0x198
	// Line 1590, Address: 0x2bf9ec, Func Offset: 0x19c
	// Line 1588, Address: 0x2bf9f0, Func Offset: 0x1a0
	// Line 1589, Address: 0x2bf9f4, Func Offset: 0x1a4
	// Line 1586, Address: 0x2bf9f8, Func Offset: 0x1a8
	// Line 1587, Address: 0x2bfa08, Func Offset: 0x1b8
	// Line 1586, Address: 0x2bfa0c, Func Offset: 0x1bc
	// Line 1587, Address: 0x2bfa10, Func Offset: 0x1c0
	// Line 1590, Address: 0x2bfa24, Func Offset: 0x1d4
	// Line 1596, Address: 0x2bfa30, Func Offset: 0x1e0
	// Line 1607, Address: 0x2bfa44, Func Offset: 0x1f4
	// Line 1606, Address: 0x2bfa54, Func Offset: 0x204
	// Line 1607, Address: 0x2bfa60, Func Offset: 0x210
	// Line 1606, Address: 0x2bfa64, Func Offset: 0x214
	// Line 1607, Address: 0x2bfa70, Func Offset: 0x220
	// Line 1606, Address: 0x2bfa78, Func Offset: 0x228
	// Line 1607, Address: 0x2bfa7c, Func Offset: 0x22c
	// Line 1606, Address: 0x2bfa80, Func Offset: 0x230
	// Line 1607, Address: 0x2bfa94, Func Offset: 0x244
	// Line 1606, Address: 0x2bfa98, Func Offset: 0x248
	// Line 1607, Address: 0x2bfaa8, Func Offset: 0x258
	// Line 1606, Address: 0x2bfaac, Func Offset: 0x25c
	// Line 1607, Address: 0x2bfab0, Func Offset: 0x260
	// Line 1610, Address: 0x2bfac4, Func Offset: 0x274
	// Line 1611, Address: 0x2bfacc, Func Offset: 0x27c
	// Line 1612, Address: 0x2bfad4, Func Offset: 0x284
	// Line 1613, Address: 0x2bfaec, Func Offset: 0x29c
	// Line 1615, Address: 0x2bfb04, Func Offset: 0x2b4
	// Func End, Address: 0x2bfb1c, Func Offset: 0x2cc
}

// 
// Start address: 0x2bfb20
void McDraw3LRT(int color, int fn)
{
	unsigned long* pk;
	int x;
	int y;
	int x0;
	int y0;
	int x1;
	int y1;
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
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 1623, Address: 0x2bfb20, Func Offset: 0
	// Line 1631, Address: 0x2bfb38, Func Offset: 0x18
	// Line 1632, Address: 0x2bfb54, Func Offset: 0x34
	// Line 1633, Address: 0x2bfb5c, Func Offset: 0x3c
	// Line 1634, Address: 0x2bfb64, Func Offset: 0x44
	// Line 1637, Address: 0x2bfb70, Func Offset: 0x50
	// Line 1639, Address: 0x2bfb74, Func Offset: 0x54
	// Line 1637, Address: 0x2bfb78, Func Offset: 0x58
	// Line 1638, Address: 0x2bfb84, Func Offset: 0x64
	// Line 1639, Address: 0x2bfb88, Func Offset: 0x68
	// Line 1637, Address: 0x2bfb90, Func Offset: 0x70
	// Line 1638, Address: 0x2bfba0, Func Offset: 0x80
	// Line 1637, Address: 0x2bfba4, Func Offset: 0x84
	// Line 1638, Address: 0x2bfba8, Func Offset: 0x88
	// Line 1639, Address: 0x2bfbbc, Func Offset: 0x9c
	// Line 1638, Address: 0x2bfbc0, Func Offset: 0xa0
	// Line 1639, Address: 0x2bfbc4, Func Offset: 0xa4
	// Line 1646, Address: 0x2bfbd8, Func Offset: 0xb8
	// Line 1647, Address: 0x2bfbe0, Func Offset: 0xc0
	// Line 1648, Address: 0x2bfc00, Func Offset: 0xe0
	// Line 1649, Address: 0x2bfc08, Func Offset: 0xe8
	// Line 1650, Address: 0x2bfc10, Func Offset: 0xf0
	// Line 1651, Address: 0x2bfc30, Func Offset: 0x110
	// Line 1653, Address: 0x2bfc38, Func Offset: 0x118
	// Line 1656, Address: 0x2bfc60, Func Offset: 0x140
	// Line 1658, Address: 0x2bfc70, Func Offset: 0x150
	// Line 1662, Address: 0x2bfc74, Func Offset: 0x154
	// Line 1656, Address: 0x2bfc78, Func Offset: 0x158
	// Line 1658, Address: 0x2bfc88, Func Offset: 0x168
	// Line 1656, Address: 0x2bfc8c, Func Offset: 0x16c
	// Line 1658, Address: 0x2bfc90, Func Offset: 0x170
	// Line 1662, Address: 0x2bfca4, Func Offset: 0x184
	// Line 1666, Address: 0x2bfcb0, Func Offset: 0x190
	// Line 1668, Address: 0x2bfcb8, Func Offset: 0x198
	// Line 1670, Address: 0x2bfcc0, Func Offset: 0x1a0
	// Line 1671, Address: 0x2bfcc4, Func Offset: 0x1a4
	// Line 1673, Address: 0x2bfcc8, Func Offset: 0x1a8
	// Line 1675, Address: 0x2bfcd0, Func Offset: 0x1b0
	// Line 1674, Address: 0x2bfcd8, Func Offset: 0x1b8
	// Line 1676, Address: 0x2bfce0, Func Offset: 0x1c0
	// Line 1678, Address: 0x2bfce4, Func Offset: 0x1c4
	// Line 1679, Address: 0x2bfcf0, Func Offset: 0x1d0
	// Line 1680, Address: 0x2bfd08, Func Offset: 0x1e8
	// Line 1679, Address: 0x2bfd0c, Func Offset: 0x1ec
	// Line 1680, Address: 0x2bfd30, Func Offset: 0x210
	// Line 1679, Address: 0x2bfd34, Func Offset: 0x214
	// Line 1680, Address: 0x2bfd38, Func Offset: 0x218
	// Line 1681, Address: 0x2bfd64, Func Offset: 0x244
	// Line 1680, Address: 0x2bfd68, Func Offset: 0x248
	// Line 1681, Address: 0x2bfd74, Func Offset: 0x254
	// Line 1680, Address: 0x2bfd78, Func Offset: 0x258
	// Line 1681, Address: 0x2bfd7c, Func Offset: 0x25c
	// Line 1680, Address: 0x2bfd80, Func Offset: 0x260
	// Line 1681, Address: 0x2bfd84, Func Offset: 0x264
	// Line 1680, Address: 0x2bfd88, Func Offset: 0x268
	// Line 1681, Address: 0x2bfd94, Func Offset: 0x274
	// Line 1680, Address: 0x2bfd98, Func Offset: 0x278
	// Line 1681, Address: 0x2bfd9c, Func Offset: 0x27c
	// Line 1682, Address: 0x2bfdb4, Func Offset: 0x294
	// Line 1684, Address: 0x2bfdc0, Func Offset: 0x2a0
	// Line 1685, Address: 0x2bfdd0, Func Offset: 0x2b0
	// Line 1684, Address: 0x2bfdd4, Func Offset: 0x2b4
	// Line 1685, Address: 0x2bfe00, Func Offset: 0x2e0
	// Line 1684, Address: 0x2bfe04, Func Offset: 0x2e4
	// Line 1685, Address: 0x2bfe08, Func Offset: 0x2e8
	// Line 1684, Address: 0x2bfe0c, Func Offset: 0x2ec
	// Line 1685, Address: 0x2bfe10, Func Offset: 0x2f0
	// Line 1686, Address: 0x2bfe30, Func Offset: 0x310
	// Line 1685, Address: 0x2bfe34, Func Offset: 0x314
	// Line 1686, Address: 0x2bfe48, Func Offset: 0x328
	// Line 1685, Address: 0x2bfe4c, Func Offset: 0x32c
	// Line 1686, Address: 0x2bfe50, Func Offset: 0x330
	// Line 1685, Address: 0x2bfe54, Func Offset: 0x334
	// Line 1686, Address: 0x2bfe58, Func Offset: 0x338
	// Line 1685, Address: 0x2bfe5c, Func Offset: 0x33c
	// Line 1686, Address: 0x2bfe68, Func Offset: 0x348
	// Line 1685, Address: 0x2bfe6c, Func Offset: 0x34c
	// Line 1686, Address: 0x2bfe70, Func Offset: 0x350
	// Line 1687, Address: 0x2bfe8c, Func Offset: 0x36c
	// Line 1690, Address: 0x2bfe90, Func Offset: 0x370
	// Line 1691, Address: 0x2bfe98, Func Offset: 0x378
	// Line 1692, Address: 0x2bfea0, Func Offset: 0x380
	// Line 1693, Address: 0x2bfeb8, Func Offset: 0x398
	// Line 1695, Address: 0x2bfed0, Func Offset: 0x3b0
	// Func End, Address: 0x2bfee8, Func Offset: 0x3c8
}

// 
// Start address: 0x2bfef0
void McDraw3T(int color)
{
	// Line 1700, Address: 0x2bfef0, Func Offset: 0
	// Line 1701, Address: 0x2bfef4, Func Offset: 0x4
	// Line 1700, Address: 0x2bfef8, Func Offset: 0x8
	// Line 1701, Address: 0x2bff00, Func Offset: 0x10
	// Line 1703, Address: 0x2bff14, Func Offset: 0x24
	// Line 1704, Address: 0x2bff1c, Func Offset: 0x2c
	// Line 1705, Address: 0x2bff24, Func Offset: 0x34
	// Line 1706, Address: 0x2bff30, Func Offset: 0x40
	// Line 1707, Address: 0x2bff3c, Func Offset: 0x4c
	// Line 1708, Address: 0x2bff44, Func Offset: 0x54
	// Line 1707, Address: 0x2bff48, Func Offset: 0x58
	// Line 1710, Address: 0x2bff50, Func Offset: 0x60
	// Line 1711, Address: 0x2bff5c, Func Offset: 0x6c
	// Line 1712, Address: 0x2bff68, Func Offset: 0x78
	// Line 1713, Address: 0x2bff70, Func Offset: 0x80
	// Line 1714, Address: 0x2bff88, Func Offset: 0x98
	// Line 1716, Address: 0x2bff90, Func Offset: 0xa0
	// Func End, Address: 0x2bffa0, Func Offset: 0xb0
}

// 
// Start address: 0x2bffa0
void McDraw3(int cur, int color)
{
	unsigned long* pk;
	int y;
	unsigned char c;
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
	// Line 1721, Address: 0x2bffa0, Func Offset: 0
	// Line 1729, Address: 0x2bffb8, Func Offset: 0x18
	// Line 1730, Address: 0x2bffd4, Func Offset: 0x34
	// Line 1731, Address: 0x2bffdc, Func Offset: 0x3c
	// Line 1732, Address: 0x2bffe4, Func Offset: 0x44
	// Line 1735, Address: 0x2bfff0, Func Offset: 0x50
	// Line 1738, Address: 0x2bfff4, Func Offset: 0x54
	// Line 1735, Address: 0x2bfff8, Func Offset: 0x58
	// Line 1737, Address: 0x2c0004, Func Offset: 0x64
	// Line 1738, Address: 0x2c0008, Func Offset: 0x68
	// Line 1735, Address: 0x2c0010, Func Offset: 0x70
	// Line 1737, Address: 0x2c0020, Func Offset: 0x80
	// Line 1735, Address: 0x2c0024, Func Offset: 0x84
	// Line 1737, Address: 0x2c0028, Func Offset: 0x88
	// Line 1738, Address: 0x2c003c, Func Offset: 0x9c
	// Line 1737, Address: 0x2c0040, Func Offset: 0xa0
	// Line 1738, Address: 0x2c0044, Func Offset: 0xa4
	// Line 1741, Address: 0x2c0064, Func Offset: 0xc4
	// Line 1745, Address: 0x2c0094, Func Offset: 0xf4
	// Line 1746, Address: 0x2c009c, Func Offset: 0xfc
	// Line 1747, Address: 0x2c00cc, Func Offset: 0x12c
	// Line 1748, Address: 0x2c00d8, Func Offset: 0x138
	// Line 1750, Address: 0x2c00e4, Func Offset: 0x144
	// Line 1751, Address: 0x2c0110, Func Offset: 0x170
	// Line 1754, Address: 0x2c0118, Func Offset: 0x178
	// Line 1757, Address: 0x2c0150, Func Offset: 0x1b0
	// Line 1762, Address: 0x2c0158, Func Offset: 0x1b8
	// Line 1757, Address: 0x2c0160, Func Offset: 0x1c0
	// Line 1758, Address: 0x2c0168, Func Offset: 0x1c8
	// Line 1757, Address: 0x2c016c, Func Offset: 0x1cc
	// Line 1758, Address: 0x2c017c, Func Offset: 0x1dc
	// Line 1757, Address: 0x2c0180, Func Offset: 0x1e0
	// Line 1758, Address: 0x2c0184, Func Offset: 0x1e4
	// Line 1762, Address: 0x2c0198, Func Offset: 0x1f8
	// Line 1772, Address: 0x2c01a0, Func Offset: 0x200
	// Line 1762, Address: 0x2c01a4, Func Offset: 0x204
	// Line 1772, Address: 0x2c01a8, Func Offset: 0x208
	// Line 1773, Address: 0x2c01b0, Func Offset: 0x210
	// Line 1772, Address: 0x2c01b4, Func Offset: 0x214
	// Line 1773, Address: 0x2c01bc, Func Offset: 0x21c
	// Line 1772, Address: 0x2c01c0, Func Offset: 0x220
	// Line 1773, Address: 0x2c01c8, Func Offset: 0x228
	// Line 1772, Address: 0x2c01cc, Func Offset: 0x22c
	// Line 1773, Address: 0x2c01ec, Func Offset: 0x24c
	// Line 1772, Address: 0x2c01f4, Func Offset: 0x254
	// Line 1773, Address: 0x2c01f8, Func Offset: 0x258
	// Line 1777, Address: 0x2c0214, Func Offset: 0x274
	// Line 1778, Address: 0x2c021c, Func Offset: 0x27c
	// Line 1779, Address: 0x2c0224, Func Offset: 0x284
	// Line 1780, Address: 0x2c023c, Func Offset: 0x29c
	// Line 1782, Address: 0x2c0254, Func Offset: 0x2b4
	// Func End, Address: 0x2c026c, Func Offset: 0x2cc
}

// 
// Start address: 0x2c0270
void McDrawCursor()
{
	unsigned long* pk;
	int y;
	unsigned char c;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 1788, Address: 0x2c0270, Func Offset: 0
	// Line 1796, Address: 0x2c0274, Func Offset: 0x4
	// Line 1788, Address: 0x2c0278, Func Offset: 0x8
	// Line 1796, Address: 0x2c027c, Func Offset: 0xc
	// Line 1797, Address: 0x2c0294, Func Offset: 0x24
	// Line 1798, Address: 0x2c029c, Func Offset: 0x2c
	// Line 1799, Address: 0x2c02a4, Func Offset: 0x34
	// Line 1802, Address: 0x2c02b0, Func Offset: 0x40
	// Line 1805, Address: 0x2c02b4, Func Offset: 0x44
	// Line 1802, Address: 0x2c02b8, Func Offset: 0x48
	// Line 1805, Address: 0x2c02bc, Func Offset: 0x4c
	// Line 1802, Address: 0x2c02c0, Func Offset: 0x50
	// Line 1804, Address: 0x2c02c8, Func Offset: 0x58
	// Line 1805, Address: 0x2c02cc, Func Offset: 0x5c
	// Line 1807, Address: 0x2c02d0, Func Offset: 0x60
	// Line 1802, Address: 0x2c02d8, Func Offset: 0x68
	// Line 1804, Address: 0x2c02e8, Func Offset: 0x78
	// Line 1802, Address: 0x2c02ec, Func Offset: 0x7c
	// Line 1804, Address: 0x2c02f0, Func Offset: 0x80
	// Line 1805, Address: 0x2c0304, Func Offset: 0x94
	// Line 1804, Address: 0x2c0308, Func Offset: 0x98
	// Line 1805, Address: 0x2c030c, Func Offset: 0x9c
	// Line 1807, Address: 0x2c0320, Func Offset: 0xb0
	// Line 1805, Address: 0x2c0324, Func Offset: 0xb4
	// Line 1807, Address: 0x2c0328, Func Offset: 0xb8
	// Line 1810, Address: 0x2c0348, Func Offset: 0xd8
	// Line 1812, Address: 0x2c037c, Func Offset: 0x10c
	// Line 1816, Address: 0x2c0390, Func Offset: 0x120
	// Line 1818, Address: 0x2c03c0, Func Offset: 0x150
	// Line 1816, Address: 0x2c03c4, Func Offset: 0x154
	// Line 1818, Address: 0x2c03c8, Func Offset: 0x158
	// Line 1816, Address: 0x2c03cc, Func Offset: 0x15c
	// Line 1818, Address: 0x2c03d0, Func Offset: 0x160
	// Line 1823, Address: 0x2c03e4, Func Offset: 0x174
	// Line 1818, Address: 0x2c03e8, Func Offset: 0x178
	// Line 1823, Address: 0x2c03ec, Func Offset: 0x17c
	// Line 1831, Address: 0x2c03f4, Func Offset: 0x184
	// Line 1823, Address: 0x2c03f8, Func Offset: 0x188
	// Line 1831, Address: 0x2c03fc, Func Offset: 0x18c
	// Line 1832, Address: 0x2c0404, Func Offset: 0x194
	// Line 1831, Address: 0x2c0408, Func Offset: 0x198
	// Line 1832, Address: 0x2c0410, Func Offset: 0x1a0
	// Line 1831, Address: 0x2c0414, Func Offset: 0x1a4
	// Line 1832, Address: 0x2c041c, Func Offset: 0x1ac
	// Line 1831, Address: 0x2c0420, Func Offset: 0x1b0
	// Line 1832, Address: 0x2c0440, Func Offset: 0x1d0
	// Line 1831, Address: 0x2c0448, Func Offset: 0x1d8
	// Line 1832, Address: 0x2c044c, Func Offset: 0x1dc
	// Line 1835, Address: 0x2c0468, Func Offset: 0x1f8
	// Line 1836, Address: 0x2c0470, Func Offset: 0x200
	// Line 1837, Address: 0x2c0478, Func Offset: 0x208
	// Line 1838, Address: 0x2c0490, Func Offset: 0x220
	// Line 1840, Address: 0x2c04a8, Func Offset: 0x238
	// Func End, Address: 0x2c04b8, Func Offset: 0x248
}

// 
// Start address: 0x2c04c0
int get_min(unsigned int played)
{
	int min;
	float f;
	// Line 1854, Address: 0x2c04c0, Func Offset: 0
	// Line 1858, Address: 0x2c04c8, Func Offset: 0x8
	// Line 1859, Address: 0x2c04d0, Func Offset: 0x10
	// Line 1860, Address: 0x2c04ec, Func Offset: 0x2c
	// Line 1862, Address: 0x2c0500, Func Offset: 0x40
	// Func End, Address: 0x2c050c, Func Offset: 0x4c
}

// 
// Start address: 0x2c0510
void add_change_color(_anon3* ptr, int cur, char flag)
{
	int sc;
	// Line 1867, Address: 0x2c0510, Func Offset: 0
	// Line 1870, Address: 0x2c0530, Func Offset: 0x20
	// Line 1871, Address: 0x2c0538, Func Offset: 0x28
	// Line 1873, Address: 0x2c0544, Func Offset: 0x34
	// Line 1871, Address: 0x2c0548, Func Offset: 0x38
	// Line 1873, Address: 0x2c0550, Func Offset: 0x40
	// Line 1874, Address: 0x2c0560, Func Offset: 0x50
	// Line 1875, Address: 0x2c0578, Func Offset: 0x68
	// Line 1876, Address: 0x2c057c, Func Offset: 0x6c
	// Line 1877, Address: 0x2c0598, Func Offset: 0x88
	// Line 1878, Address: 0x2c05b8, Func Offset: 0xa8
	// Line 1879, Address: 0x2c05d8, Func Offset: 0xc8
	// Line 1880, Address: 0x2c05f8, Func Offset: 0xe8
	// Line 1881, Address: 0x2c0600, Func Offset: 0xf0
	// Line 1883, Address: 0x2c0608, Func Offset: 0xf8
	// Line 1886, Address: 0x2c0610, Func Offset: 0x100
	// Func End, Address: 0x2c0628, Func Offset: 0x118
}

// 
// Start address: 0x2c0630
void print_load_stat_s(int port, int cur, int disp)
{
	char str[256];
	int min;
	int i;
	int j;
	int file_1st;
	int alpha;
	_anon3* ptr;
	// Line 1890, Address: 0x2c0630, Func Offset: 0
	// Line 1920, Address: 0x2c0664, Func Offset: 0x34
	// Line 1932, Address: 0x2c066c, Func Offset: 0x3c
	// Line 1933, Address: 0x2c0678, Func Offset: 0x48
	// Line 1934, Address: 0x2c0680, Func Offset: 0x50
	// Line 1933, Address: 0x2c0684, Func Offset: 0x54
	// Line 1934, Address: 0x2c0688, Func Offset: 0x58
	// Line 1933, Address: 0x2c068c, Func Offset: 0x5c
	// Line 1934, Address: 0x2c0690, Func Offset: 0x60
	// Line 1933, Address: 0x2c0694, Func Offset: 0x64
	// Line 1934, Address: 0x2c0698, Func Offset: 0x68
	// Line 1933, Address: 0x2c069c, Func Offset: 0x6c
	// Line 1935, Address: 0x2c06a0, Func Offset: 0x70
	// Line 1936, Address: 0x2c06bc, Func Offset: 0x8c
	// Line 1951, Address: 0x2c06c8, Func Offset: 0x98
	// Line 1953, Address: 0x2c06cc, Func Offset: 0x9c
	// Line 1955, Address: 0x2c06f8, Func Offset: 0xc8
	// Line 1956, Address: 0x2c0718, Func Offset: 0xe8
	// Line 1957, Address: 0x2c0720, Func Offset: 0xf0
	// Line 1956, Address: 0x2c0724, Func Offset: 0xf4
	// Line 1957, Address: 0x2c0730, Func Offset: 0x100
	// Line 1958, Address: 0x2c0748, Func Offset: 0x118
	// Line 1959, Address: 0x2c075c, Func Offset: 0x12c
	// Line 1961, Address: 0x2c0760, Func Offset: 0x130
	// Line 1963, Address: 0x2c0780, Func Offset: 0x150
	// Line 1965, Address: 0x2c0790, Func Offset: 0x160
	// Line 1967, Address: 0x2c0798, Func Offset: 0x168
	// Line 1968, Address: 0x2c07b8, Func Offset: 0x188
	// Line 1969, Address: 0x2c07cc, Func Offset: 0x19c
	// Line 1970, Address: 0x2c07d4, Func Offset: 0x1a4
	// Line 1971, Address: 0x2c07e4, Func Offset: 0x1b4
	// Line 1972, Address: 0x2c07f0, Func Offset: 0x1c0
	// Line 1973, Address: 0x2c07f8, Func Offset: 0x1c8
	// Line 1974, Address: 0x2c0800, Func Offset: 0x1d0
	// Line 1975, Address: 0x2c080c, Func Offset: 0x1dc
	// Line 1976, Address: 0x2c0814, Func Offset: 0x1e4
	// Line 1978, Address: 0x2c0820, Func Offset: 0x1f0
	// Line 1982, Address: 0x2c0828, Func Offset: 0x1f8
	// Line 1983, Address: 0x2c083c, Func Offset: 0x20c
	// Line 1993, Address: 0x2c0860, Func Offset: 0x230
	// Line 1994, Address: 0x2c0868, Func Offset: 0x238
	// Line 1993, Address: 0x2c086c, Func Offset: 0x23c
	// Line 1994, Address: 0x2c0870, Func Offset: 0x240
	// Line 1995, Address: 0x2c0880, Func Offset: 0x250
	// Line 1996, Address: 0x2c089c, Func Offset: 0x26c
	// Line 1997, Address: 0x2c08a8, Func Offset: 0x278
	// Line 1998, Address: 0x2c08bc, Func Offset: 0x28c
	// Line 1999, Address: 0x2c08d8, Func Offset: 0x2a8
	// Line 2003, Address: 0x2c08e8, Func Offset: 0x2b8
	// Line 2006, Address: 0x2c0910, Func Offset: 0x2e0
	// Line 2007, Address: 0x2c0924, Func Offset: 0x2f4
	// Line 2008, Address: 0x2c092c, Func Offset: 0x2fc
	// Line 2010, Address: 0x2c0930, Func Offset: 0x300
	// Line 2008, Address: 0x2c0934, Func Offset: 0x304
	// Line 2010, Address: 0x2c0938, Func Offset: 0x308
	// Line 2012, Address: 0x2c093c, Func Offset: 0x30c
	// Line 2008, Address: 0x2c0940, Func Offset: 0x310
	// Line 2012, Address: 0x2c0944, Func Offset: 0x314
	// Line 2010, Address: 0x2c0948, Func Offset: 0x318
	// Line 2014, Address: 0x2c094c, Func Offset: 0x31c
	// Line 2010, Address: 0x2c0950, Func Offset: 0x320
	// Line 2014, Address: 0x2c0954, Func Offset: 0x324
	// Line 2015, Address: 0x2c0958, Func Offset: 0x328
	// Line 2008, Address: 0x2c095c, Func Offset: 0x32c
	// Line 2010, Address: 0x2c0960, Func Offset: 0x330
	// Line 2008, Address: 0x2c0964, Func Offset: 0x334
	// Line 2010, Address: 0x2c0970, Func Offset: 0x340
	// Line 2008, Address: 0x2c0974, Func Offset: 0x344
	// Line 2010, Address: 0x2c0978, Func Offset: 0x348
	// Line 2012, Address: 0x2c0994, Func Offset: 0x364
	// Line 2010, Address: 0x2c0998, Func Offset: 0x368
	// Line 2012, Address: 0x2c09a4, Func Offset: 0x374
	// Line 2010, Address: 0x2c09a8, Func Offset: 0x378
	// Line 2012, Address: 0x2c09ac, Func Offset: 0x37c
	// Line 2014, Address: 0x2c09d0, Func Offset: 0x3a0
	// Line 2012, Address: 0x2c09d4, Func Offset: 0x3a4
	// Line 2014, Address: 0x2c09e8, Func Offset: 0x3b8
	// Line 2015, Address: 0x2c0a04, Func Offset: 0x3d4
	// Line 2017, Address: 0x2c0a28, Func Offset: 0x3f8
	// Line 2019, Address: 0x2c0a30, Func Offset: 0x400
	// Line 2020, Address: 0x2c0a44, Func Offset: 0x414
	// Line 2021, Address: 0x2c0a58, Func Offset: 0x428
	// Line 2022, Address: 0x2c0a74, Func Offset: 0x444
	// Line 2024, Address: 0x2c0a80, Func Offset: 0x450
	// Line 2026, Address: 0x2c0a9c, Func Offset: 0x46c
	// Line 2028, Address: 0x2c0aa8, Func Offset: 0x478
	// Line 2029, Address: 0x2c0ac0, Func Offset: 0x490
	// Line 2030, Address: 0x2c0adc, Func Offset: 0x4ac
	// Line 2032, Address: 0x2c0ae8, Func Offset: 0x4b8
	// Line 2035, Address: 0x2c0b04, Func Offset: 0x4d4
	// Line 2036, Address: 0x2c0b08, Func Offset: 0x4d8
	// Line 2037, Address: 0x2c0b10, Func Offset: 0x4e0
	// Line 2038, Address: 0x2c0b18, Func Offset: 0x4e8
	// Line 2055, Address: 0x2c0b28, Func Offset: 0x4f8
	// Line 2056, Address: 0x2c0b4c, Func Offset: 0x51c
	// Line 2058, Address: 0x2c0b50, Func Offset: 0x520
	// Line 2059, Address: 0x2c0b60, Func Offset: 0x530
	// Line 2061, Address: 0x2c0b80, Func Offset: 0x550
	// Line 2063, Address: 0x2c0b8c, Func Offset: 0x55c
	// Line 2062, Address: 0x2c0b90, Func Offset: 0x560
	// Line 2063, Address: 0x2c0b9c, Func Offset: 0x56c
	// Line 2062, Address: 0x2c0ba0, Func Offset: 0x570
	// Line 2063, Address: 0x2c0bac, Func Offset: 0x57c
	// Line 2064, Address: 0x2c0bb4, Func Offset: 0x584
	// Line 2065, Address: 0x2c0bd8, Func Offset: 0x5a8
	// Line 2067, Address: 0x2c0be0, Func Offset: 0x5b0
	// Line 2068, Address: 0x2c0be8, Func Offset: 0x5b8
	// Line 2067, Address: 0x2c0bec, Func Offset: 0x5bc
	// Line 2068, Address: 0x2c0bf4, Func Offset: 0x5c4
	// Line 2067, Address: 0x2c0c04, Func Offset: 0x5d4
	// Line 2068, Address: 0x2c0c0c, Func Offset: 0x5dc
	// Line 2069, Address: 0x2c0c14, Func Offset: 0x5e4
	// Line 2068, Address: 0x2c0c18, Func Offset: 0x5e8
	// Line 2069, Address: 0x2c0c30, Func Offset: 0x600
	// Line 2070, Address: 0x2c0c44, Func Offset: 0x614
	// Line 2074, Address: 0x2c0c68, Func Offset: 0x638
	// Line 2076, Address: 0x2c0c84, Func Offset: 0x654
	// Line 2077, Address: 0x2c0c8c, Func Offset: 0x65c
	// Line 2076, Address: 0x2c0c90, Func Offset: 0x660
	// Line 2077, Address: 0x2c0c94, Func Offset: 0x664
	// Line 2078, Address: 0x2c0cb8, Func Offset: 0x688
	// Line 2083, Address: 0x2c0cc4, Func Offset: 0x694
	// Line 2078, Address: 0x2c0ccc, Func Offset: 0x69c
	// Line 2083, Address: 0x2c0cd0, Func Offset: 0x6a0
	// Line 2085, Address: 0x2c0cf8, Func Offset: 0x6c8
	// Line 2087, Address: 0x2c0d04, Func Offset: 0x6d4
	// Line 2089, Address: 0x2c0d20, Func Offset: 0x6f0
	// Line 2090, Address: 0x2c0d28, Func Offset: 0x6f8
	// Line 2089, Address: 0x2c0d2c, Func Offset: 0x6fc
	// Line 2090, Address: 0x2c0d30, Func Offset: 0x700
	// Line 2095, Address: 0x2c0d54, Func Offset: 0x724
	// Line 2096, Address: 0x2c0d64, Func Offset: 0x734
	// Line 2097, Address: 0x2c0d74, Func Offset: 0x744
	// Line 2100, Address: 0x2c0d98, Func Offset: 0x768
	// Line 2101, Address: 0x2c0da8, Func Offset: 0x778
	// Line 2102, Address: 0x2c0db8, Func Offset: 0x788
	// Line 2104, Address: 0x2c0ddc, Func Offset: 0x7ac
	// Line 2105, Address: 0x2c0de0, Func Offset: 0x7b0
	// Line 2106, Address: 0x2c0df0, Func Offset: 0x7c0
	// Line 2107, Address: 0x2c0e00, Func Offset: 0x7d0
	// Line 2109, Address: 0x2c0e24, Func Offset: 0x7f4
	// Line 2110, Address: 0x2c0e28, Func Offset: 0x7f8
	// Line 2111, Address: 0x2c0e38, Func Offset: 0x808
	// Line 2112, Address: 0x2c0e48, Func Offset: 0x818
	// Line 2114, Address: 0x2c0e6c, Func Offset: 0x83c
	// Line 2115, Address: 0x2c0e70, Func Offset: 0x840
	// Line 2116, Address: 0x2c0e78, Func Offset: 0x848
	// Line 2126, Address: 0x2c0e80, Func Offset: 0x850
	// Func End, Address: 0x2c0eb0, Func Offset: 0x880
}

// 
// Start address: 0x2c0eb0
void print_load_stat2(int port, int cur, int fn, int lower)
{
	// Line 2147, Address: 0x2c0eb0, Func Offset: 0
	// Line 2148, Address: 0x2c0eb4, Func Offset: 0x4
	// Line 2147, Address: 0x2c0eb8, Func Offset: 0x8
	// Line 2150, Address: 0x2c0ebc, Func Offset: 0xc
	// Line 2147, Address: 0x2c0ec0, Func Offset: 0x10
	// Line 2150, Address: 0x2c0ee0, Func Offset: 0x30
	// Line 2152, Address: 0x2c0f04, Func Offset: 0x54
	// Line 2154, Address: 0x2c0f08, Func Offset: 0x58
	// Line 2155, Address: 0x2c0f20, Func Offset: 0x70
	// Line 2156, Address: 0x2c0f34, Func Offset: 0x84
	// Line 2157, Address: 0x2c0f3c, Func Offset: 0x8c
	// Line 2159, Address: 0x2c0f40, Func Offset: 0x90
	// Line 2165, Address: 0x2c0f58, Func Offset: 0xa8
	// Line 2166, Address: 0x2c0f68, Func Offset: 0xb8
	// Line 2168, Address: 0x2c0f84, Func Offset: 0xd4
	// Line 2169, Address: 0x2c0f8c, Func Offset: 0xdc
	// Line 2170, Address: 0x2c0fa0, Func Offset: 0xf0
	// Line 2172, Address: 0x2c0fbc, Func Offset: 0x10c
	// Line 2174, Address: 0x2c0fc4, Func Offset: 0x114
	// Line 2176, Address: 0x2c0fcc, Func Offset: 0x11c
	// Line 2177, Address: 0x2c0fdc, Func Offset: 0x12c
	// Func End, Address: 0x2c0ffc, Func Offset: 0x14c
}

// 
// Start address: 0x2c1000
void McDrawTexSub(int x, int y, int w, int h, int u, int v, int page)
{
	sgTexArc* tdata_addr;
	sgTexData* tex_head;
	unsigned int id;
	_anon7* tex;
	sgClutData* clut_head;
	int cbp;
	unsigned long tex0;
	unsigned long* pk;
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
	unsigned long* p;
	// Line 2189, Address: 0x2c1000, Func Offset: 0
	// Line 2203, Address: 0x2c103c, Func Offset: 0x3c
	// Line 2204, Address: 0x2c104c, Func Offset: 0x4c
	// Line 2205, Address: 0x2c1058, Func Offset: 0x58
	// Line 2206, Address: 0x2c1060, Func Offset: 0x60
	// Line 2207, Address: 0x2c1068, Func Offset: 0x68
	// Line 2208, Address: 0x2c1078, Func Offset: 0x78
	// Line 2209, Address: 0x2c1080, Func Offset: 0x80
	// Line 2210, Address: 0x2c1090, Func Offset: 0x90
	// Line 2209, Address: 0x2c1098, Func Offset: 0x98
	// Line 2210, Address: 0x2c109c, Func Offset: 0x9c
	// Line 2213, Address: 0x2c10b0, Func Offset: 0xb0
	// Line 2214, Address: 0x2c10c8, Func Offset: 0xc8
	// Line 2215, Address: 0x2c10d0, Func Offset: 0xd0
	// Line 2216, Address: 0x2c10d8, Func Offset: 0xd8
	// Line 2236, Address: 0x2c10e4, Func Offset: 0xe4
	// Line 2238, Address: 0x2c10e8, Func Offset: 0xe8
	// Line 2236, Address: 0x2c10ec, Func Offset: 0xec
	// Line 2238, Address: 0x2c10f0, Func Offset: 0xf0
	// Line 2242, Address: 0x2c10f4, Func Offset: 0xf4
	// Line 2236, Address: 0x2c10f8, Func Offset: 0xf8
	// Line 2242, Address: 0x2c10fc, Func Offset: 0xfc
	// Line 2236, Address: 0x2c1100, Func Offset: 0x100
	// Line 2242, Address: 0x2c1104, Func Offset: 0x104
	// Line 2237, Address: 0x2c1108, Func Offset: 0x108
	// Line 2249, Address: 0x2c110c, Func Offset: 0x10c
	// Line 2237, Address: 0x2c1110, Func Offset: 0x110
	// Line 2249, Address: 0x2c1114, Func Offset: 0x114
	// Line 2238, Address: 0x2c1118, Func Offset: 0x118
	// Line 2236, Address: 0x2c111c, Func Offset: 0x11c
	// Line 2240, Address: 0x2c1128, Func Offset: 0x128
	// Line 2236, Address: 0x2c112c, Func Offset: 0x12c
	// Line 2247, Address: 0x2c1130, Func Offset: 0x130
	// Line 2236, Address: 0x2c1134, Func Offset: 0x134
	// Line 2237, Address: 0x2c1138, Func Offset: 0x138
	// Line 2247, Address: 0x2c113c, Func Offset: 0x13c
	// Line 2237, Address: 0x2c1144, Func Offset: 0x144
	// Line 2249, Address: 0x2c1148, Func Offset: 0x148
	// Line 2247, Address: 0x2c114c, Func Offset: 0x14c
	// Line 2240, Address: 0x2c1150, Func Offset: 0x150
	// Line 2249, Address: 0x2c1154, Func Offset: 0x154
	// Line 2243, Address: 0x2c1158, Func Offset: 0x158
	// Line 2249, Address: 0x2c115c, Func Offset: 0x15c
	// Line 2244, Address: 0x2c1160, Func Offset: 0x160
	// Line 2249, Address: 0x2c1164, Func Offset: 0x164
	// Line 2247, Address: 0x2c1168, Func Offset: 0x168
	// Line 2248, Address: 0x2c116c, Func Offset: 0x16c
	// Line 2237, Address: 0x2c1174, Func Offset: 0x174
	// Line 2248, Address: 0x2c1180, Func Offset: 0x180
	// Line 2237, Address: 0x2c1184, Func Offset: 0x184
	// Line 2248, Address: 0x2c118c, Func Offset: 0x18c
	// Line 2238, Address: 0x2c1194, Func Offset: 0x194
	// Line 2248, Address: 0x2c1198, Func Offset: 0x198
	// Line 2238, Address: 0x2c11a0, Func Offset: 0x1a0
	// Line 2248, Address: 0x2c11a4, Func Offset: 0x1a4
	// Line 2250, Address: 0x2c11a8, Func Offset: 0x1a8
	// Line 2238, Address: 0x2c11ac, Func Offset: 0x1ac
	// Line 2240, Address: 0x2c11bc, Func Offset: 0x1bc
	// Line 2238, Address: 0x2c11c0, Func Offset: 0x1c0
	// Line 2240, Address: 0x2c11c4, Func Offset: 0x1c4
	// Line 2242, Address: 0x2c11d8, Func Offset: 0x1d8
	// Line 2240, Address: 0x2c11dc, Func Offset: 0x1dc
	// Line 2242, Address: 0x2c11e0, Func Offset: 0x1e0
	// Line 2243, Address: 0x2c11f4, Func Offset: 0x1f4
	// Line 2242, Address: 0x2c11f8, Func Offset: 0x1f8
	// Line 2243, Address: 0x2c11fc, Func Offset: 0x1fc
	// Line 2244, Address: 0x2c1210, Func Offset: 0x210
	// Line 2243, Address: 0x2c1214, Func Offset: 0x214
	// Line 2244, Address: 0x2c1218, Func Offset: 0x218
	// Line 2247, Address: 0x2c122c, Func Offset: 0x22c
	// Line 2244, Address: 0x2c1230, Func Offset: 0x230
	// Line 2247, Address: 0x2c1234, Func Offset: 0x234
	// Line 2248, Address: 0x2c1248, Func Offset: 0x248
	// Line 2247, Address: 0x2c124c, Func Offset: 0x24c
	// Line 2248, Address: 0x2c1250, Func Offset: 0x250
	// Line 2249, Address: 0x2c1264, Func Offset: 0x264
	// Line 2248, Address: 0x2c1268, Func Offset: 0x268
	// Line 2249, Address: 0x2c126c, Func Offset: 0x26c
	// Line 2250, Address: 0x2c1280, Func Offset: 0x280
	// Line 2249, Address: 0x2c1284, Func Offset: 0x284
	// Line 2250, Address: 0x2c1288, Func Offset: 0x288
	// Line 2254, Address: 0x2c12f4, Func Offset: 0x2f4
	// Line 2255, Address: 0x2c12fc, Func Offset: 0x2fc
	// Line 2256, Address: 0x2c1304, Func Offset: 0x304
	// Line 2257, Address: 0x2c131c, Func Offset: 0x31c
	// Line 2260, Address: 0x2c1334, Func Offset: 0x334
	// Func End, Address: 0x2c1360, Func Offset: 0x360
}

// 
// Start address: 0x2c1360
void McDrawBg()
{
	// Line 2266, Address: 0x2c1360, Func Offset: 0
	// Func End, Address: 0x2c1384, Func Offset: 0x24
}

// 
// Start address: 0x2c1390
void McDrawTab(int port)
{
	// Line 2269, Address: 0x2c1390, Func Offset: 0
	// Line 2270, Address: 0x2c13a0, Func Offset: 0x10
	// Line 2271, Address: 0x2c13d0, Func Offset: 0x40
	// Line 2275, Address: 0x2c1400, Func Offset: 0x70
	// Func End, Address: 0x2c1410, Func Offset: 0x80
}

// 
// Start address: 0x2c1410
void yn_sub(sfObj* obj)
{
	int ret;
	// Line 2280, Address: 0x2c1410, Func Offset: 0
	// Line 2283, Address: 0x2c1414, Func Offset: 0x4
	// Line 2280, Address: 0x2c1418, Func Offset: 0x8
	// Line 2283, Address: 0x2c1424, Func Offset: 0x14
	// Line 2284, Address: 0x2c1438, Func Offset: 0x28
	// Line 2286, Address: 0x2c1440, Func Offset: 0x30
	// Line 2289, Address: 0x2c1448, Func Offset: 0x38
	// Line 2290, Address: 0x2c1470, Func Offset: 0x60
	// Line 2291, Address: 0x2c1488, Func Offset: 0x78
	// Line 2293, Address: 0x2c1490, Func Offset: 0x80
	// Line 2294, Address: 0x2c14b8, Func Offset: 0xa8
	// Line 2295, Address: 0x2c14d0, Func Offset: 0xc0
	// Line 2296, Address: 0x2c14dc, Func Offset: 0xcc
	// Line 2297, Address: 0x2c14e0, Func Offset: 0xd0
	// Line 2298, Address: 0x2c14f4, Func Offset: 0xe4
	// Line 2299, Address: 0x2c1500, Func Offset: 0xf0
	// Line 2300, Address: 0x2c1508, Func Offset: 0xf8
	// Line 2301, Address: 0x2c1510, Func Offset: 0x100
	// Line 2303, Address: 0x2c1518, Func Offset: 0x108
	// Line 2304, Address: 0x2c1520, Func Offset: 0x110
	// Line 2306, Address: 0x2c1528, Func Offset: 0x118
	// Line 2308, Address: 0x2c1530, Func Offset: 0x120
	// Line 2309, Address: 0x2c1544, Func Offset: 0x134
	// Line 2310, Address: 0x2c1550, Func Offset: 0x140
	// Line 2311, Address: 0x2c1558, Func Offset: 0x148
	// Line 2312, Address: 0x2c1560, Func Offset: 0x150
	// Line 2314, Address: 0x2c1568, Func Offset: 0x158
	// Line 2315, Address: 0x2c1570, Func Offset: 0x160
	// Line 2318, Address: 0x2c1578, Func Offset: 0x168
	// Func End, Address: 0x2c1588, Func Offset: 0x178
}

// 
// Start address: 0x2c1590
void McSaveMain(sfObj* obj)
{
	int busy;
	int ret;
	_anon3* cptr;
	int selected;
	// Line 2326, Address: 0x2c1590, Func Offset: 0
	// Line 2335, Address: 0x2c15a0, Func Offset: 0x10
	// Line 2337, Address: 0x2c15a8, Func Offset: 0x18
	// Line 2340, Address: 0x2c15b0, Func Offset: 0x20
	// Line 2341, Address: 0x2c15b4, Func Offset: 0x24
	// Line 2340, Address: 0x2c15b8, Func Offset: 0x28
	// Line 2339, Address: 0x2c15bc, Func Offset: 0x2c
	// Line 2341, Address: 0x2c15d0, Func Offset: 0x40
	// Line 2346, Address: 0x2c1770, Func Offset: 0x1e0
	// Line 2347, Address: 0x2c1778, Func Offset: 0x1e8
	// Line 2348, Address: 0x2c1784, Func Offset: 0x1f4
	// Line 2349, Address: 0x2c178c, Func Offset: 0x1fc
	// Line 2350, Address: 0x2c1794, Func Offset: 0x204
	// Line 2351, Address: 0x2c1798, Func Offset: 0x208
	// Line 2352, Address: 0x2c17a0, Func Offset: 0x210
	// Line 2353, Address: 0x2c17a8, Func Offset: 0x218
	// Line 2355, Address: 0x2c17b0, Func Offset: 0x220
	// Line 2359, Address: 0x2c17b8, Func Offset: 0x228
	// Line 2360, Address: 0x2c17e8, Func Offset: 0x258
	// Line 2361, Address: 0x2c17f0, Func Offset: 0x260
	// Line 2363, Address: 0x2c17f8, Func Offset: 0x268
	// Line 2364, Address: 0x2c1800, Func Offset: 0x270
	// Line 2365, Address: 0x2c180c, Func Offset: 0x27c
	// Line 2366, Address: 0x2c1814, Func Offset: 0x284
	// Line 2367, Address: 0x2c181c, Func Offset: 0x28c
	// Line 2368, Address: 0x2c1820, Func Offset: 0x290
	// Line 2369, Address: 0x2c182c, Func Offset: 0x29c
	// Line 2370, Address: 0x2c1834, Func Offset: 0x2a4
	// Line 2371, Address: 0x2c183c, Func Offset: 0x2ac
	// Line 2372, Address: 0x2c1844, Func Offset: 0x2b4
	// Line 2374, Address: 0x2c1848, Func Offset: 0x2b8
	// Line 2375, Address: 0x2c1878, Func Offset: 0x2e8
	// Line 2376, Address: 0x2c1880, Func Offset: 0x2f0
	// Line 2378, Address: 0x2c1888, Func Offset: 0x2f8
	// Line 2379, Address: 0x2c1890, Func Offset: 0x300
	// Line 2380, Address: 0x2c189c, Func Offset: 0x30c
	// Line 2381, Address: 0x2c18a4, Func Offset: 0x314
	// Line 2382, Address: 0x2c18ac, Func Offset: 0x31c
	// Line 2383, Address: 0x2c18b0, Func Offset: 0x320
	// Line 2384, Address: 0x2c18bc, Func Offset: 0x32c
	// Line 2385, Address: 0x2c18c4, Func Offset: 0x334
	// Line 2386, Address: 0x2c18cc, Func Offset: 0x33c
	// Line 2387, Address: 0x2c18d4, Func Offset: 0x344
	// Line 2388, Address: 0x2c18d8, Func Offset: 0x348
	// Line 2390, Address: 0x2c18ec, Func Offset: 0x35c
	// Line 2391, Address: 0x2c1910, Func Offset: 0x380
	// Line 2392, Address: 0x2c1924, Func Offset: 0x394
	// Line 2393, Address: 0x2c1950, Func Offset: 0x3c0
	// Line 2395, Address: 0x2c1958, Func Offset: 0x3c8
	// Line 2397, Address: 0x2c1960, Func Offset: 0x3d0
	// Line 2400, Address: 0x2c1998, Func Offset: 0x408
	// Line 2401, Address: 0x2c199c, Func Offset: 0x40c
	// Line 2402, Address: 0x2c19a4, Func Offset: 0x414
	// Line 2403, Address: 0x2c19a8, Func Offset: 0x418
	// Line 2404, Address: 0x2c19b0, Func Offset: 0x420
	// Line 2406, Address: 0x2c19b8, Func Offset: 0x428
	// Line 2407, Address: 0x2c19c8, Func Offset: 0x438
	// Line 2408, Address: 0x2c19f0, Func Offset: 0x460
	// Line 2413, Address: 0x2c1a00, Func Offset: 0x470
	// Line 2416, Address: 0x2c1a14, Func Offset: 0x484
	// Line 2417, Address: 0x2c1a1c, Func Offset: 0x48c
	// Line 2419, Address: 0x2c1a24, Func Offset: 0x494
	// Line 2420, Address: 0x2c1a28, Func Offset: 0x498
	// Line 2422, Address: 0x2c1a4c, Func Offset: 0x4bc
	// Line 2423, Address: 0x2c1a58, Func Offset: 0x4c8
	// Line 2424, Address: 0x2c1a60, Func Offset: 0x4d0
	// Line 2426, Address: 0x2c1a68, Func Offset: 0x4d8
	// Line 2428, Address: 0x2c1a70, Func Offset: 0x4e0
	// Line 2430, Address: 0x2c1a94, Func Offset: 0x504
	// Line 2431, Address: 0x2c1a9c, Func Offset: 0x50c
	// Line 2432, Address: 0x2c1aac, Func Offset: 0x51c
	// Line 2433, Address: 0x2c1ab4, Func Offset: 0x524
	// Line 2434, Address: 0x2c1ab8, Func Offset: 0x528
	// Line 2436, Address: 0x2c1ac0, Func Offset: 0x530
	// Line 2437, Address: 0x2c1acc, Func Offset: 0x53c
	// Line 2438, Address: 0x2c1ad4, Func Offset: 0x544
	// Line 2439, Address: 0x2c1adc, Func Offset: 0x54c
	// Line 2440, Address: 0x2c1ae0, Func Offset: 0x550
	// Line 2441, Address: 0x2c1aec, Func Offset: 0x55c
	// Line 2442, Address: 0x2c1af4, Func Offset: 0x564
	// Line 2444, Address: 0x2c1b18, Func Offset: 0x588
	// Line 2446, Address: 0x2c1b20, Func Offset: 0x590
	// Line 2447, Address: 0x2c1b2c, Func Offset: 0x59c
	// Line 2448, Address: 0x2c1b30, Func Offset: 0x5a0
	// Line 2451, Address: 0x2c1b38, Func Offset: 0x5a8
	// Line 2453, Address: 0x2c1b5c, Func Offset: 0x5cc
	// Line 2454, Address: 0x2c1b68, Func Offset: 0x5d8
	// Line 2455, Address: 0x2c1b70, Func Offset: 0x5e0
	// Line 2457, Address: 0x2c1b78, Func Offset: 0x5e8
	// Line 2459, Address: 0x2c1b80, Func Offset: 0x5f0
	// Line 2461, Address: 0x2c1ba4, Func Offset: 0x614
	// Line 2462, Address: 0x2c1bac, Func Offset: 0x61c
	// Line 2463, Address: 0x2c1bbc, Func Offset: 0x62c
	// Line 2464, Address: 0x2c1bc4, Func Offset: 0x634
	// Line 2465, Address: 0x2c1bc8, Func Offset: 0x638
	// Line 2467, Address: 0x2c1bd0, Func Offset: 0x640
	// Line 2468, Address: 0x2c1bdc, Func Offset: 0x64c
	// Line 2469, Address: 0x2c1be4, Func Offset: 0x654
	// Line 2470, Address: 0x2c1bec, Func Offset: 0x65c
	// Line 2471, Address: 0x2c1bf0, Func Offset: 0x660
	// Line 2472, Address: 0x2c1bfc, Func Offset: 0x66c
	// Line 2473, Address: 0x2c1c04, Func Offset: 0x674
	// Line 2475, Address: 0x2c1c28, Func Offset: 0x698
	// Line 2477, Address: 0x2c1c30, Func Offset: 0x6a0
	// Line 2478, Address: 0x2c1c3c, Func Offset: 0x6ac
	// Line 2479, Address: 0x2c1c40, Func Offset: 0x6b0
	// Line 2482, Address: 0x2c1c48, Func Offset: 0x6b8
	// Line 2485, Address: 0x2c1c58, Func Offset: 0x6c8
	// Line 2486, Address: 0x2c1c60, Func Offset: 0x6d0
	// Line 2488, Address: 0x2c1c68, Func Offset: 0x6d8
	// Line 2490, Address: 0x2c1c70, Func Offset: 0x6e0
	// Line 2492, Address: 0x2c1c84, Func Offset: 0x6f4
	// Line 2493, Address: 0x2c1c8c, Func Offset: 0x6fc
	// Line 2494, Address: 0x2c1cac, Func Offset: 0x71c
	// Line 2495, Address: 0x2c1cb4, Func Offset: 0x724
	// Line 2497, Address: 0x2c1cc4, Func Offset: 0x734
	// Line 2498, Address: 0x2c1cd0, Func Offset: 0x740
	// Line 2499, Address: 0x2c1cd8, Func Offset: 0x748
	// Line 2500, Address: 0x2c1cdc, Func Offset: 0x74c
	// Line 2503, Address: 0x2c1ce8, Func Offset: 0x758
	// Line 2505, Address: 0x2c1cf0, Func Offset: 0x760
	// Line 2506, Address: 0x2c1d04, Func Offset: 0x774
	// Line 2505, Address: 0x2c1d08, Func Offset: 0x778
	// Line 2506, Address: 0x2c1d0c, Func Offset: 0x77c
	// Line 2507, Address: 0x2c1d1c, Func Offset: 0x78c
	// Line 2508, Address: 0x2c1d4c, Func Offset: 0x7bc
	// Line 2509, Address: 0x2c1d50, Func Offset: 0x7c0
	// Line 2510, Address: 0x2c1d58, Func Offset: 0x7c8
	// Line 2511, Address: 0x2c1d60, Func Offset: 0x7d0
	// Line 2510, Address: 0x2c1d64, Func Offset: 0x7d4
	// Line 2512, Address: 0x2c1d68, Func Offset: 0x7d8
	// Line 2514, Address: 0x2c1d70, Func Offset: 0x7e0
	// Line 2515, Address: 0x2c1d78, Func Offset: 0x7e8
	// Line 2516, Address: 0x2c1d80, Func Offset: 0x7f0
	// Line 2515, Address: 0x2c1d84, Func Offset: 0x7f4
	// Line 2517, Address: 0x2c1d88, Func Offset: 0x7f8
	// Line 2519, Address: 0x2c1d90, Func Offset: 0x800
	// Line 2520, Address: 0x2c1d98, Func Offset: 0x808
	// Line 2523, Address: 0x2c1d9c, Func Offset: 0x80c
	// Line 2524, Address: 0x2c1da4, Func Offset: 0x814
	// Line 2525, Address: 0x2c1da8, Func Offset: 0x818
	// Line 2526, Address: 0x2c1dbc, Func Offset: 0x82c
	// Line 2527, Address: 0x2c1dd0, Func Offset: 0x840
	// Line 2528, Address: 0x2c1dd8, Func Offset: 0x848
	// Line 2529, Address: 0x2c1dfc, Func Offset: 0x86c
	// Line 2530, Address: 0x2c1e04, Func Offset: 0x874
	// Line 2531, Address: 0x2c1e10, Func Offset: 0x880
	// Line 2532, Address: 0x2c1e14, Func Offset: 0x884
	// Line 2534, Address: 0x2c1e20, Func Offset: 0x890
	// Line 2537, Address: 0x2c1e28, Func Offset: 0x898
	// Line 2539, Address: 0x2c1e30, Func Offset: 0x8a0
	// Line 2540, Address: 0x2c1e44, Func Offset: 0x8b4
	// Line 2541, Address: 0x2c1e4c, Func Offset: 0x8bc
	// Line 2542, Address: 0x2c1e5c, Func Offset: 0x8cc
	// Line 2543, Address: 0x2c1e60, Func Offset: 0x8d0
	// Line 2542, Address: 0x2c1e64, Func Offset: 0x8d4
	// Line 2544, Address: 0x2c1e68, Func Offset: 0x8d8
	// Line 2546, Address: 0x2c1e70, Func Offset: 0x8e0
	// Line 2547, Address: 0x2c1e78, Func Offset: 0x8e8
	// Line 2551, Address: 0x2c1e80, Func Offset: 0x8f0
	// Line 2553, Address: 0x2c1ea4, Func Offset: 0x914
	// Line 2554, Address: 0x2c1ea8, Func Offset: 0x918
	// Line 2555, Address: 0x2c1eb8, Func Offset: 0x928
	// Line 2557, Address: 0x2c1ec0, Func Offset: 0x930
	// Line 2558, Address: 0x2c1ecc, Func Offset: 0x93c
	// Line 2559, Address: 0x2c1ed8, Func Offset: 0x948
	// Line 2560, Address: 0x2c1ee0, Func Offset: 0x950
	// Line 2561, Address: 0x2c1ef8, Func Offset: 0x968
	// Line 2562, Address: 0x2c1f00, Func Offset: 0x970
	// Line 2567, Address: 0x2c1f08, Func Offset: 0x978
	// Line 2569, Address: 0x2c1f2c, Func Offset: 0x99c
	// Line 2570, Address: 0x2c1f34, Func Offset: 0x9a4
	// Line 2571, Address: 0x2c1f3c, Func Offset: 0x9ac
	// Line 2572, Address: 0x2c1f40, Func Offset: 0x9b0
	// Line 2574, Address: 0x2c1f64, Func Offset: 0x9d4
	// Line 2575, Address: 0x2c1f74, Func Offset: 0x9e4
	// Line 2576, Address: 0x2c1f7c, Func Offset: 0x9ec
	// Line 2578, Address: 0x2c1f84, Func Offset: 0x9f4
	// Line 2579, Address: 0x2c1f8c, Func Offset: 0x9fc
	// Line 2580, Address: 0x2c1f90, Func Offset: 0xa00
	// Line 2581, Address: 0x2c1f94, Func Offset: 0xa04
	// Line 2587, Address: 0x2c1f9c, Func Offset: 0xa0c
	// Line 2589, Address: 0x2c1fa0, Func Offset: 0xa10
	// Line 2591, Address: 0x2c1fc0, Func Offset: 0xa30
	// Line 2593, Address: 0x2c1fe4, Func Offset: 0xa54
	// Line 2594, Address: 0x2c1fec, Func Offset: 0xa5c
	// Line 2595, Address: 0x2c1ff4, Func Offset: 0xa64
	// Line 2596, Address: 0x2c1ff8, Func Offset: 0xa68
	// Line 2597, Address: 0x2c2008, Func Offset: 0xa78
	// Line 2598, Address: 0x2c2010, Func Offset: 0xa80
	// Line 2600, Address: 0x2c2018, Func Offset: 0xa88
	// Line 2602, Address: 0x2c2020, Func Offset: 0xa90
	// Line 2603, Address: 0x2c2028, Func Offset: 0xa98
	// Line 2605, Address: 0x2c2030, Func Offset: 0xaa0
	// Line 2607, Address: 0x2c2050, Func Offset: 0xac0
	// Line 2609, Address: 0x2c2074, Func Offset: 0xae4
	// Line 2610, Address: 0x2c2080, Func Offset: 0xaf0
	// Line 2611, Address: 0x2c2098, Func Offset: 0xb08
	// Line 2612, Address: 0x2c20a0, Func Offset: 0xb10
	// Line 2615, Address: 0x2c20a8, Func Offset: 0xb18
	// Line 2621, Address: 0x2c20c8, Func Offset: 0xb38
	// Line 2623, Address: 0x2c20ec, Func Offset: 0xb5c
	// Line 2624, Address: 0x2c20fc, Func Offset: 0xb6c
	// Line 2625, Address: 0x2c2104, Func Offset: 0xb74
	// Line 2627, Address: 0x2c210c, Func Offset: 0xb7c
	// Line 2628, Address: 0x2c2110, Func Offset: 0xb80
	// Line 2630, Address: 0x2c2118, Func Offset: 0xb88
	// Line 2632, Address: 0x2c2120, Func Offset: 0xb90
	// Line 2635, Address: 0x2c2128, Func Offset: 0xb98
	// Line 2637, Address: 0x2c214c, Func Offset: 0xbbc
	// Line 2639, Address: 0x2c2160, Func Offset: 0xbd0
	// Line 2641, Address: 0x2c2164, Func Offset: 0xbd4
	// Line 2643, Address: 0x2c216c, Func Offset: 0xbdc
	// Line 2645, Address: 0x2c2170, Func Offset: 0xbe0
	// Line 2646, Address: 0x2c2180, Func Offset: 0xbf0
	// Line 2647, Address: 0x2c2188, Func Offset: 0xbf8
	// Line 2649, Address: 0x2c2190, Func Offset: 0xc00
	// Line 2651, Address: 0x2c2198, Func Offset: 0xc08
	// Line 2652, Address: 0x2c21a0, Func Offset: 0xc10
	// Line 2654, Address: 0x2c21a8, Func Offset: 0xc18
	// Line 2656, Address: 0x2c21b0, Func Offset: 0xc20
	// Line 2657, Address: 0x2c21b8, Func Offset: 0xc28
	// Line 2658, Address: 0x2c21c8, Func Offset: 0xc38
	// Line 2659, Address: 0x2c21d0, Func Offset: 0xc40
	// Line 2660, Address: 0x2c21d8, Func Offset: 0xc48
	// Line 2662, Address: 0x2c21e0, Func Offset: 0xc50
	// Line 2663, Address: 0x2c21f8, Func Offset: 0xc68
	// Line 2664, Address: 0x2c2200, Func Offset: 0xc70
	// Line 2666, Address: 0x2c2208, Func Offset: 0xc78
	// Line 2674, Address: 0x2c2210, Func Offset: 0xc80
	// Line 2676, Address: 0x2c2234, Func Offset: 0xca4
	// Line 2677, Address: 0x2c224c, Func Offset: 0xcbc
	// Line 2678, Address: 0x2c2254, Func Offset: 0xcc4
	// Line 2679, Address: 0x2c225c, Func Offset: 0xccc
	// Line 2680, Address: 0x2c2268, Func Offset: 0xcd8
	// Line 2681, Address: 0x2c2280, Func Offset: 0xcf0
	// Line 2682, Address: 0x2c2288, Func Offset: 0xcf8
	// Line 2683, Address: 0x2c228c, Func Offset: 0xcfc
	// Line 2684, Address: 0x2c2294, Func Offset: 0xd04
	// Line 2685, Address: 0x2c2298, Func Offset: 0xd08
	// Line 2686, Address: 0x2c22a0, Func Offset: 0xd10
	// Line 2687, Address: 0x2c22a4, Func Offset: 0xd14
	// Line 2707, Address: 0x2c22ac, Func Offset: 0xd1c
	// Line 2708, Address: 0x2c22b0, Func Offset: 0xd20
	// Line 2709, Address: 0x2c22bc, Func Offset: 0xd2c
	// Line 2710, Address: 0x2c22e4, Func Offset: 0xd54
	// Line 2711, Address: 0x2c22ec, Func Offset: 0xd5c
	// Line 2712, Address: 0x2c22f4, Func Offset: 0xd64
	// Line 2713, Address: 0x2c22f8, Func Offset: 0xd68
	// Line 2714, Address: 0x2c2300, Func Offset: 0xd70
	// Line 2717, Address: 0x2c2308, Func Offset: 0xd78
	// Line 2719, Address: 0x2c232c, Func Offset: 0xd9c
	// Line 2720, Address: 0x2c2334, Func Offset: 0xda4
	// Line 2721, Address: 0x2c233c, Func Offset: 0xdac
	// Line 2722, Address: 0x2c2340, Func Offset: 0xdb0
	// Line 2723, Address: 0x2c2350, Func Offset: 0xdc0
	// Line 2724, Address: 0x2c2358, Func Offset: 0xdc8
	// Line 2726, Address: 0x2c2360, Func Offset: 0xdd0
	// Line 2728, Address: 0x2c2368, Func Offset: 0xdd8
	// Line 2730, Address: 0x2c2370, Func Offset: 0xde0
	// Line 2731, Address: 0x2c2378, Func Offset: 0xde8
	// Line 2732, Address: 0x2c2388, Func Offset: 0xdf8
	// Line 2733, Address: 0x2c2390, Func Offset: 0xe00
	// Line 2734, Address: 0x2c2398, Func Offset: 0xe08
	// Line 2736, Address: 0x2c23a0, Func Offset: 0xe10
	// Line 2737, Address: 0x2c23b8, Func Offset: 0xe28
	// Line 2738, Address: 0x2c23c0, Func Offset: 0xe30
	// Line 2740, Address: 0x2c23c8, Func Offset: 0xe38
	// Line 2748, Address: 0x2c23d0, Func Offset: 0xe40
	// Line 2750, Address: 0x2c23f4, Func Offset: 0xe64
	// Line 2751, Address: 0x2c240c, Func Offset: 0xe7c
	// Line 2752, Address: 0x2c2414, Func Offset: 0xe84
	// Line 2753, Address: 0x2c241c, Func Offset: 0xe8c
	// Line 2754, Address: 0x2c2428, Func Offset: 0xe98
	// Line 2755, Address: 0x2c2440, Func Offset: 0xeb0
	// Line 2756, Address: 0x2c2448, Func Offset: 0xeb8
	// Line 2757, Address: 0x2c244c, Func Offset: 0xebc
	// Line 2758, Address: 0x2c2454, Func Offset: 0xec4
	// Line 2759, Address: 0x2c2458, Func Offset: 0xec8
	// Line 2760, Address: 0x2c2460, Func Offset: 0xed0
	// Line 2761, Address: 0x2c2468, Func Offset: 0xed8
	// Line 2773, Address: 0x2c2470, Func Offset: 0xee0
	// Line 2775, Address: 0x2c2478, Func Offset: 0xee8
	// Line 2774, Address: 0x2c247c, Func Offset: 0xeec
	// Line 2775, Address: 0x2c2480, Func Offset: 0xef0
	// Line 2774, Address: 0x2c2484, Func Offset: 0xef4
	// Line 2775, Address: 0x2c2488, Func Offset: 0xef8
	// Line 2776, Address: 0x2c2490, Func Offset: 0xf00
	// Line 2777, Address: 0x2c24a0, Func Offset: 0xf10
	// Line 2779, Address: 0x2c24a4, Func Offset: 0xf14
	// Line 2780, Address: 0x2c24ac, Func Offset: 0xf1c
	// Line 2782, Address: 0x2c24b0, Func Offset: 0xf20
	// Line 2784, Address: 0x2c24d4, Func Offset: 0xf44
	// Line 2786, Address: 0x2c24e8, Func Offset: 0xf58
	// Line 2788, Address: 0x2c24ec, Func Offset: 0xf5c
	// Line 2793, Address: 0x2c24f4, Func Offset: 0xf64
	// Line 2795, Address: 0x2c24f8, Func Offset: 0xf68
	// Line 2797, Address: 0x2c251c, Func Offset: 0xf8c
	// Line 2798, Address: 0x2c2524, Func Offset: 0xf94
	// Line 2799, Address: 0x2c252c, Func Offset: 0xf9c
	// Line 2800, Address: 0x2c2530, Func Offset: 0xfa0
	// Line 2801, Address: 0x2c2540, Func Offset: 0xfb0
	// Line 2802, Address: 0x2c2548, Func Offset: 0xfb8
	// Line 2804, Address: 0x2c2550, Func Offset: 0xfc0
	// Line 2806, Address: 0x2c2558, Func Offset: 0xfc8
	// Line 2807, Address: 0x2c2564, Func Offset: 0xfd4
	// Line 2808, Address: 0x2c257c, Func Offset: 0xfec
	// Line 2809, Address: 0x2c2584, Func Offset: 0xff4
	// Line 2810, Address: 0x2c258c, Func Offset: 0xffc
	// Line 2812, Address: 0x2c2590, Func Offset: 0x1000
	// Line 2819, Address: 0x2c2598, Func Offset: 0x1008
	// Line 2822, Address: 0x2c25c0, Func Offset: 0x1030
	// Line 2823, Address: 0x2c25d8, Func Offset: 0x1048
	// Line 2824, Address: 0x2c25e0, Func Offset: 0x1050
	// Line 2825, Address: 0x2c25e8, Func Offset: 0x1058
	// Line 2826, Address: 0x2c25ec, Func Offset: 0x105c
	// Line 2827, Address: 0x2c25f4, Func Offset: 0x1064
	// Line 2828, Address: 0x2c25f8, Func Offset: 0x1068
	// Line 2829, Address: 0x2c2600, Func Offset: 0x1070
	// Line 2830, Address: 0x2c2608, Func Offset: 0x1078
	// Line 2841, Address: 0x2c2610, Func Offset: 0x1080
	// Line 2842, Address: 0x2c2620, Func Offset: 0x1090
	// Line 2844, Address: 0x2c2624, Func Offset: 0x1094
	// Line 2845, Address: 0x2c262c, Func Offset: 0x109c
	// Line 2847, Address: 0x2c2630, Func Offset: 0x10a0
	// Line 2849, Address: 0x2c2654, Func Offset: 0x10c4
	// Line 2851, Address: 0x2c2668, Func Offset: 0x10d8
	// Line 2853, Address: 0x2c266c, Func Offset: 0x10dc
	// Line 2856, Address: 0x2c2674, Func Offset: 0x10e4
	// Line 2857, Address: 0x2c2678, Func Offset: 0x10e8
	// Line 2859, Address: 0x2c269c, Func Offset: 0x110c
	// Line 2860, Address: 0x2c26ac, Func Offset: 0x111c
	// Line 2861, Address: 0x2c26b4, Func Offset: 0x1124
	// Line 2862, Address: 0x2c26bc, Func Offset: 0x112c
	// Line 2863, Address: 0x2c26c0, Func Offset: 0x1130
	// Line 2865, Address: 0x2c26e4, Func Offset: 0x1154
	// Line 2866, Address: 0x2c26f4, Func Offset: 0x1164
	// Line 2867, Address: 0x2c26fc, Func Offset: 0x116c
	// Line 2869, Address: 0x2c2704, Func Offset: 0x1174
	// Line 2870, Address: 0x2c270c, Func Offset: 0x117c
	// Line 2871, Address: 0x2c2710, Func Offset: 0x1180
	// Line 2874, Address: 0x2c2734, Func Offset: 0x11a4
	// Line 2875, Address: 0x2c2768, Func Offset: 0x11d8
	// Line 2876, Address: 0x2c276c, Func Offset: 0x11dc
	// Line 2877, Address: 0x2c2774, Func Offset: 0x11e4
	// Line 2878, Address: 0x2c2778, Func Offset: 0x11e8
	// Line 2879, Address: 0x2c2784, Func Offset: 0x11f4
	// Line 2880, Address: 0x2c2794, Func Offset: 0x1204
	// Line 2881, Address: 0x2c279c, Func Offset: 0x120c
	// Line 2882, Address: 0x2c27a4, Func Offset: 0x1214
	// Line 2883, Address: 0x2c27a8, Func Offset: 0x1218
	// Line 2885, Address: 0x2c27cc, Func Offset: 0x123c
	// Line 2886, Address: 0x2c27dc, Func Offset: 0x124c
	// Line 2887, Address: 0x2c27e4, Func Offset: 0x1254
	// Line 2892, Address: 0x2c27ec, Func Offset: 0x125c
	// Line 2894, Address: 0x2c27f0, Func Offset: 0x1260
	// Line 2895, Address: 0x2c27f8, Func Offset: 0x1268
	// Line 2896, Address: 0x2c2804, Func Offset: 0x1274
	// Func End, Address: 0x2c2814, Func Offset: 0x1284
}

// 
// Start address: 0x2c2820
void McSaveSet()
{
	sfObj* optr;
	// Line 2901, Address: 0x2c2820, Func Offset: 0
	// Line 2904, Address: 0x2c2828, Func Offset: 0x8
	// Line 2905, Address: 0x2c2834, Func Offset: 0x14
	// Line 2906, Address: 0x2c2844, Func Offset: 0x24
	// Line 2908, Address: 0x2c284c, Func Offset: 0x2c
	// Line 2910, Address: 0x2c2858, Func Offset: 0x38
	// Line 2912, Address: 0x2c2864, Func Offset: 0x44
	// Line 2913, Address: 0x2c2868, Func Offset: 0x48
	// Line 2912, Address: 0x2c286c, Func Offset: 0x4c
	// Line 2913, Address: 0x2c2870, Func Offset: 0x50
	// Line 2914, Address: 0x2c2878, Func Offset: 0x58
	// Line 2915, Address: 0x2c2880, Func Offset: 0x60
	// Func End, Address: 0x2c2890, Func Offset: 0x70
}

// 
// Start address: 0x2c2890
void McSaveSetEnding()
{
	sfObj* optr;
	// Line 2921, Address: 0x2c2890, Func Offset: 0
	// Line 2924, Address: 0x2c2898, Func Offset: 0x8
	// Line 2925, Address: 0x2c28a0, Func Offset: 0x10
	// Line 2926, Address: 0x2c28b0, Func Offset: 0x20
	// Line 2929, Address: 0x2c28b8, Func Offset: 0x28
	// Line 2928, Address: 0x2c28bc, Func Offset: 0x2c
	// Line 2929, Address: 0x2c28c0, Func Offset: 0x30
	// Line 2928, Address: 0x2c28c4, Func Offset: 0x34
	// Line 2930, Address: 0x2c28cc, Func Offset: 0x3c
	// Line 2931, Address: 0x2c28d4, Func Offset: 0x44
	// Func End, Address: 0x2c28e0, Func Offset: 0x50
}

// 
// Start address: 0x2c28e0
int McGetSaveEnd()
{
	// Line 2937, Address: 0x2c28e0, Func Offset: 0
	// Line 2938, Address: 0x2c28e4, Func Offset: 0x4
	// Func End, Address: 0x2c28ec, Func Offset: 0xc
}

// 
// Start address: 0x2c28f0
unsigned int get_disp_col()
{
	// Line 2943, Address: 0x2c28f0, Func Offset: 0
	// Line 2949, Address: 0x2c28f8, Func Offset: 0x8
	// Line 2950, Address: 0x2c2930, Func Offset: 0x40
	// Func End, Address: 0x2c2938, Func Offset: 0x48
}

// 
// Start address: 0x2c2940
void disp_yn_24(int cur)
{
	unsigned int col;
	// Line 2955, Address: 0x2c2940, Func Offset: 0
	// Line 2958, Address: 0x2c2950, Func Offset: 0x10
	// Line 2960, Address: 0x2c2958, Func Offset: 0x18
	// Line 2961, Address: 0x2c2968, Func Offset: 0x28
	// Line 2963, Address: 0x2c298c, Func Offset: 0x4c
	// Line 2965, Address: 0x2c2994, Func Offset: 0x54
	// Line 2966, Address: 0x2c29a8, Func Offset: 0x68
	// Line 2968, Address: 0x2c29cc, Func Offset: 0x8c
	// Line 2970, Address: 0x2c29d4, Func Offset: 0x94
	// Line 2971, Address: 0x2c29e0, Func Offset: 0xa0
	// Func End, Address: 0x2c29f4, Func Offset: 0xb4
}

// 
// Start address: 0x2c2a00
void McSaveDraw(int depth)
{
	int lower;
	// Line 2976, Address: 0x2c2a00, Func Offset: 0
	// Line 2979, Address: 0x2c2a04, Func Offset: 0x4
	// Line 2976, Address: 0x2c2a08, Func Offset: 0x8
	// Line 2979, Address: 0x2c2a10, Func Offset: 0x10
	// Line 2980, Address: 0x2c2a14, Func Offset: 0x14
	// Line 2981, Address: 0x2c2a28, Func Offset: 0x28
	// Line 2982, Address: 0x2c2a34, Func Offset: 0x34
	// Line 2983, Address: 0x2c2a48, Func Offset: 0x48
	// Line 2984, Address: 0x2c2a60, Func Offset: 0x60
	// Line 2985, Address: 0x2c2a70, Func Offset: 0x70
	// Line 2986, Address: 0x2c2a80, Func Offset: 0x80
	// Line 2987, Address: 0x2c2a90, Func Offset: 0x90
	// Line 2989, Address: 0x2c2a98, Func Offset: 0x98
	// Line 2992, Address: 0x2c2aa4, Func Offset: 0xa4
	// Line 2989, Address: 0x2c2aa8, Func Offset: 0xa8
	// Line 2992, Address: 0x2c2aac, Func Offset: 0xac
	// Line 2993, Address: 0x2c2ad0, Func Offset: 0xd0
	// Line 2994, Address: 0x2c2ad8, Func Offset: 0xd8
	// Line 2995, Address: 0x2c2b08, Func Offset: 0x108
	// Line 2996, Address: 0x2c2b28, Func Offset: 0x128
	// Line 2997, Address: 0x2c2b48, Func Offset: 0x148
	// Line 2998, Address: 0x2c2b68, Func Offset: 0x168
	// Line 2999, Address: 0x2c2b88, Func Offset: 0x188
	// Line 3000, Address: 0x2c2ba8, Func Offset: 0x1a8
	// Line 3002, Address: 0x2c2bc8, Func Offset: 0x1c8
	// Line 3003, Address: 0x2c2bd8, Func Offset: 0x1d8
	// Line 3004, Address: 0x2c2bfc, Func Offset: 0x1fc
	// Line 3005, Address: 0x2c2c00, Func Offset: 0x200
	// Line 3007, Address: 0x2c2c20, Func Offset: 0x220
	// Line 3009, Address: 0x2c2c44, Func Offset: 0x244
	// Line 3010, Address: 0x2c2c4c, Func Offset: 0x24c
	// Line 3011, Address: 0x2c2c50, Func Offset: 0x250
	// Line 3013, Address: 0x2c2c70, Func Offset: 0x270
	// Line 3017, Address: 0x2c2c94, Func Offset: 0x294
	// Line 3019, Address: 0x2c2c98, Func Offset: 0x298
	// Line 3021, Address: 0x2c2ca0, Func Offset: 0x2a0
	// Line 3023, Address: 0x2c2cb0, Func Offset: 0x2b0
	// Line 3024, Address: 0x2c2ce8, Func Offset: 0x2e8
	// Line 3026, Address: 0x2c2cf0, Func Offset: 0x2f0
	// Func End, Address: 0x2c2d00, Func Offset: 0x300
}

// 
// Start address: 0x2c2d00
void McSaveLevelInit()
{
	_anon3* cptr;
	// Line 3034, Address: 0x2c2d00, Func Offset: 0
	// Line 3037, Address: 0x2c2d04, Func Offset: 0x4
	// Line 3034, Address: 0x2c2d08, Func Offset: 0x8
	// Line 3037, Address: 0x2c2d0c, Func Offset: 0xc
	// Line 3039, Address: 0x2c2d14, Func Offset: 0x14
	// Line 3040, Address: 0x2c2d1c, Func Offset: 0x1c
	// Line 3041, Address: 0x2c2d38, Func Offset: 0x38
	// Line 3042, Address: 0x2c2d4c, Func Offset: 0x4c
	// Line 3043, Address: 0x2c2d54, Func Offset: 0x54
	// Line 3044, Address: 0x2c2d6c, Func Offset: 0x6c
	// Line 3045, Address: 0x2c2d70, Func Offset: 0x70
	// Func End, Address: 0x2c2d7c, Func Offset: 0x7c
}

// 
// Start address: 0x2c2d80
void McSaveLevelChangeMode()
{
	// Line 3050, Address: 0x2c2d80, Func Offset: 0
	// Line 3051, Address: 0x2c2d84, Func Offset: 0x4
	// Line 3050, Address: 0x2c2d88, Func Offset: 0x8
	// Line 3051, Address: 0x2c2d8c, Func Offset: 0xc
	// Line 3052, Address: 0x2c2d98, Func Offset: 0x18
	// Line 3053, Address: 0x2c2dc8, Func Offset: 0x48
	// Line 3054, Address: 0x2c2dd0, Func Offset: 0x50
	// Line 3055, Address: 0x2c2dd8, Func Offset: 0x58
	// Line 3056, Address: 0x2c2de0, Func Offset: 0x60
	// Line 3057, Address: 0x2c2de8, Func Offset: 0x68
	// Line 3058, Address: 0x2c2df4, Func Offset: 0x74
	// Line 3059, Address: 0x2c2dfc, Func Offset: 0x7c
	// Line 3061, Address: 0x2c2e04, Func Offset: 0x84
	// Line 3062, Address: 0x2c2e08, Func Offset: 0x88
	// Line 3063, Address: 0x2c2e38, Func Offset: 0xb8
	// Line 3064, Address: 0x2c2e44, Func Offset: 0xc4
	// Line 3065, Address: 0x2c2e4c, Func Offset: 0xcc
	// Line 3066, Address: 0x2c2e50, Func Offset: 0xd0
	// Line 3067, Address: 0x2c2e58, Func Offset: 0xd8
	// Line 3068, Address: 0x2c2e70, Func Offset: 0xf0
	// Line 3069, Address: 0x2c2e78, Func Offset: 0xf8
	// Line 3071, Address: 0x2c2e84, Func Offset: 0x104
	// Line 3072, Address: 0x2c2e88, Func Offset: 0x108
	// Func End, Address: 0x2c2e94, Func Offset: 0x114
}

// 
// Start address: 0x2c2ea0
void set_temp_color()
{
	// Line 3074, Address: 0x2c2ea0, Func Offset: 0
	// Line 3075, Address: 0x2c2ea4, Func Offset: 0x4
	// Line 3074, Address: 0x2c2ea8, Func Offset: 0x8
	// Line 3075, Address: 0x2c2eac, Func Offset: 0xc
	// Line 3076, Address: 0x2c2ebc, Func Offset: 0x1c
	// Line 3077, Address: 0x2c2ec8, Func Offset: 0x28
	// Line 3078, Address: 0x2c2edc, Func Offset: 0x3c
	// Line 3079, Address: 0x2c2ee8, Func Offset: 0x48
	// Func End, Address: 0x2c2ef4, Func Offset: 0x54
}

// 
// Start address: 0x2c2f00
void McLoadMain()
{
	int busy;
	int ret;
	int flag;
	int lower;
	_anon3* cptr;
	int selected;
	int game_mode_selected;
	// Line 3084, Address: 0x2c2f00, Func Offset: 0
	// Line 3093, Address: 0x2c2f04, Func Offset: 0x4
	// Line 3084, Address: 0x2c2f08, Func Offset: 0x8
	// Line 3093, Address: 0x2c2f10, Func Offset: 0x10
	// Line 3095, Address: 0x2c2f18, Func Offset: 0x18
	// Line 3097, Address: 0x2c2f20, Func Offset: 0x20
	// Line 3103, Address: 0x2c2f28, Func Offset: 0x28
	// Line 3101, Address: 0x2c2f2c, Func Offset: 0x2c
	// Line 3103, Address: 0x2c2f30, Func Offset: 0x30
	// Line 3102, Address: 0x2c2f34, Func Offset: 0x34
	// Line 3105, Address: 0x2c2f44, Func Offset: 0x44
	// Line 3107, Address: 0x2c2f4c, Func Offset: 0x4c
	// Line 3109, Address: 0x2c3070, Func Offset: 0x170
	// Line 3110, Address: 0x2c307c, Func Offset: 0x17c
	// Line 3114, Address: 0x2c3090, Func Offset: 0x190
	// Line 3115, Address: 0x2c3098, Func Offset: 0x198
	// Line 3116, Address: 0x2c30a0, Func Offset: 0x1a0
	// Line 3117, Address: 0x2c30ac, Func Offset: 0x1ac
	// Line 3119, Address: 0x2c30b4, Func Offset: 0x1b4
	// Line 3120, Address: 0x2c30bc, Func Offset: 0x1bc
	// Line 3121, Address: 0x2c30c0, Func Offset: 0x1c0
	// Line 3122, Address: 0x2c30c8, Func Offset: 0x1c8
	// Line 3123, Address: 0x2c30d0, Func Offset: 0x1d0
	// Line 3125, Address: 0x2c30d8, Func Offset: 0x1d8
	// Line 3127, Address: 0x2c30e0, Func Offset: 0x1e0
	// Line 3129, Address: 0x2c30f4, Func Offset: 0x1f4
	// Line 3130, Address: 0x2c3128, Func Offset: 0x228
	// Line 3131, Address: 0x2c3130, Func Offset: 0x230
	// Line 3132, Address: 0x2c3138, Func Offset: 0x238
	// Line 3134, Address: 0x2c3140, Func Offset: 0x240
	// Line 3135, Address: 0x2c3148, Func Offset: 0x248
	// Line 3136, Address: 0x2c3154, Func Offset: 0x254
	// Line 3137, Address: 0x2c315c, Func Offset: 0x25c
	// Line 3138, Address: 0x2c3164, Func Offset: 0x264
	// Line 3139, Address: 0x2c3168, Func Offset: 0x268
	// Line 3140, Address: 0x2c3174, Func Offset: 0x274
	// Line 3141, Address: 0x2c317c, Func Offset: 0x27c
	// Line 3142, Address: 0x2c3184, Func Offset: 0x284
	// Line 3143, Address: 0x2c318c, Func Offset: 0x28c
	// Line 3145, Address: 0x2c3190, Func Offset: 0x290
	// Line 3146, Address: 0x2c31c0, Func Offset: 0x2c0
	// Line 3147, Address: 0x2c31c8, Func Offset: 0x2c8
	// Line 3148, Address: 0x2c31d0, Func Offset: 0x2d0
	// Line 3150, Address: 0x2c31d8, Func Offset: 0x2d8
	// Line 3151, Address: 0x2c31e0, Func Offset: 0x2e0
	// Line 3152, Address: 0x2c31ec, Func Offset: 0x2ec
	// Line 3153, Address: 0x2c31f4, Func Offset: 0x2f4
	// Line 3154, Address: 0x2c31fc, Func Offset: 0x2fc
	// Line 3155, Address: 0x2c3200, Func Offset: 0x300
	// Line 3156, Address: 0x2c320c, Func Offset: 0x30c
	// Line 3157, Address: 0x2c3214, Func Offset: 0x314
	// Line 3158, Address: 0x2c321c, Func Offset: 0x31c
	// Line 3159, Address: 0x2c3224, Func Offset: 0x324
	// Line 3160, Address: 0x2c3228, Func Offset: 0x328
	// Line 3162, Address: 0x2c323c, Func Offset: 0x33c
	// Line 3163, Address: 0x2c3260, Func Offset: 0x360
	// Line 3164, Address: 0x2c3274, Func Offset: 0x374
	// Line 3165, Address: 0x2c32a0, Func Offset: 0x3a0
	// Line 3167, Address: 0x2c32a8, Func Offset: 0x3a8
	// Line 3169, Address: 0x2c32b0, Func Offset: 0x3b0
	// Line 3172, Address: 0x2c32e8, Func Offset: 0x3e8
	// Line 3173, Address: 0x2c32ec, Func Offset: 0x3ec
	// Line 3174, Address: 0x2c32f4, Func Offset: 0x3f4
	// Line 3175, Address: 0x2c32f8, Func Offset: 0x3f8
	// Line 3176, Address: 0x2c3300, Func Offset: 0x400
	// Line 3178, Address: 0x2c3308, Func Offset: 0x408
	// Line 3179, Address: 0x2c3318, Func Offset: 0x418
	// Line 3180, Address: 0x2c3340, Func Offset: 0x440
	// Line 3187, Address: 0x2c3350, Func Offset: 0x450
	// Line 3188, Address: 0x2c3364, Func Offset: 0x464
	// Line 3189, Address: 0x2c336c, Func Offset: 0x46c
	// Line 3191, Address: 0x2c3374, Func Offset: 0x474
	// Line 3192, Address: 0x2c3378, Func Offset: 0x478
	// Line 3194, Address: 0x2c339c, Func Offset: 0x49c
	// Line 3195, Address: 0x2c33a8, Func Offset: 0x4a8
	// Line 3196, Address: 0x2c33b0, Func Offset: 0x4b0
	// Line 3198, Address: 0x2c33b8, Func Offset: 0x4b8
	// Line 3200, Address: 0x2c33c0, Func Offset: 0x4c0
	// Line 3201, Address: 0x2c33c8, Func Offset: 0x4c8
	// Line 3202, Address: 0x2c33d8, Func Offset: 0x4d8
	// Line 3203, Address: 0x2c33e0, Func Offset: 0x4e0
	// Line 3204, Address: 0x2c33e8, Func Offset: 0x4e8
	// Line 3206, Address: 0x2c33f0, Func Offset: 0x4f0
	// Line 3208, Address: 0x2c3414, Func Offset: 0x514
	// Line 3209, Address: 0x2c3420, Func Offset: 0x520
	// Line 3210, Address: 0x2c3428, Func Offset: 0x528
	// Line 3212, Address: 0x2c3430, Func Offset: 0x530
	// Line 3213, Address: 0x2c343c, Func Offset: 0x53c
	// Line 3214, Address: 0x2c3444, Func Offset: 0x544
	// Line 3216, Address: 0x2c3468, Func Offset: 0x568
	// Line 3218, Address: 0x2c3470, Func Offset: 0x570
	// Line 3219, Address: 0x2c3484, Func Offset: 0x584
	// Line 3218, Address: 0x2c3488, Func Offset: 0x588
	// Line 3219, Address: 0x2c348c, Func Offset: 0x58c
	// Line 3220, Address: 0x2c3494, Func Offset: 0x594
	// Line 3221, Address: 0x2c349c, Func Offset: 0x59c
	// Line 3223, Address: 0x2c34a4, Func Offset: 0x5a4
	// Line 3224, Address: 0x2c34a8, Func Offset: 0x5a8
	// Line 3226, Address: 0x2c34cc, Func Offset: 0x5cc
	// Line 3227, Address: 0x2c34d8, Func Offset: 0x5d8
	// Line 3228, Address: 0x2c34e0, Func Offset: 0x5e0
	// Line 3230, Address: 0x2c34e8, Func Offset: 0x5e8
	// Line 3232, Address: 0x2c34f0, Func Offset: 0x5f0
	// Line 3233, Address: 0x2c34f8, Func Offset: 0x5f8
	// Line 3234, Address: 0x2c3508, Func Offset: 0x608
	// Line 3235, Address: 0x2c3510, Func Offset: 0x610
	// Line 3236, Address: 0x2c3518, Func Offset: 0x618
	// Line 3238, Address: 0x2c3520, Func Offset: 0x620
	// Line 3240, Address: 0x2c3544, Func Offset: 0x644
	// Line 3241, Address: 0x2c3550, Func Offset: 0x650
	// Line 3242, Address: 0x2c3558, Func Offset: 0x658
	// Line 3244, Address: 0x2c3560, Func Offset: 0x660
	// Line 3245, Address: 0x2c356c, Func Offset: 0x66c
	// Line 3246, Address: 0x2c3574, Func Offset: 0x674
	// Line 3248, Address: 0x2c3598, Func Offset: 0x698
	// Line 3250, Address: 0x2c35a0, Func Offset: 0x6a0
	// Line 3251, Address: 0x2c35b4, Func Offset: 0x6b4
	// Line 3250, Address: 0x2c35b8, Func Offset: 0x6b8
	// Line 3251, Address: 0x2c35bc, Func Offset: 0x6bc
	// Line 3252, Address: 0x2c35c4, Func Offset: 0x6c4
	// Line 3253, Address: 0x2c35cc, Func Offset: 0x6cc
	// Line 3255, Address: 0x2c35d4, Func Offset: 0x6d4
	// Line 3256, Address: 0x2c35d8, Func Offset: 0x6d8
	// Line 3257, Address: 0x2c35f0, Func Offset: 0x6f0
	// Line 3262, Address: 0x2c35f8, Func Offset: 0x6f8
	// Line 3265, Address: 0x2c3608, Func Offset: 0x708
	// Line 3266, Address: 0x2c3610, Func Offset: 0x710
	// Line 3267, Address: 0x2c3618, Func Offset: 0x718
	// Line 3268, Address: 0x2c3620, Func Offset: 0x720
	// Line 3270, Address: 0x2c3628, Func Offset: 0x728
	// Line 3272, Address: 0x2c363c, Func Offset: 0x73c
	// Line 3273, Address: 0x2c3644, Func Offset: 0x744
	// Line 3274, Address: 0x2c365c, Func Offset: 0x75c
	// Line 3276, Address: 0x2c3674, Func Offset: 0x774
	// Line 3277, Address: 0x2c3680, Func Offset: 0x780
	// Line 3278, Address: 0x2c3688, Func Offset: 0x788
	// Line 3279, Address: 0x2c3690, Func Offset: 0x790
	// Line 3282, Address: 0x2c369c, Func Offset: 0x79c
	// Line 3283, Address: 0x2c36a4, Func Offset: 0x7a4
	// Line 3284, Address: 0x2c36a8, Func Offset: 0x7a8
	// Line 3285, Address: 0x2c36bc, Func Offset: 0x7bc
	// Line 3284, Address: 0x2c36c0, Func Offset: 0x7c0
	// Line 3285, Address: 0x2c36c4, Func Offset: 0x7c4
	// Line 3286, Address: 0x2c36d4, Func Offset: 0x7d4
	// Line 3287, Address: 0x2c36e8, Func Offset: 0x7e8
	// Line 3288, Address: 0x2c36f0, Func Offset: 0x7f0
	// Line 3289, Address: 0x2c3718, Func Offset: 0x818
	// Line 3290, Address: 0x2c3720, Func Offset: 0x820
	// Line 3291, Address: 0x2c3728, Func Offset: 0x828
	// Line 3293, Address: 0x2c3730, Func Offset: 0x830
	// Line 3296, Address: 0x2c3738, Func Offset: 0x838
	// Line 3314, Address: 0x2c3740, Func Offset: 0x840
	// Line 3315, Address: 0x2c3754, Func Offset: 0x854
	// Line 3316, Address: 0x2c375c, Func Offset: 0x85c
	// Line 3317, Address: 0x2c3764, Func Offset: 0x864
	// Line 3321, Address: 0x2c376c, Func Offset: 0x86c
	// Line 3322, Address: 0x2c3770, Func Offset: 0x870
	// Line 3323, Address: 0x2c3780, Func Offset: 0x880
	// Line 3324, Address: 0x2c3788, Func Offset: 0x888
	// Line 3325, Address: 0x2c3790, Func Offset: 0x890
	// Line 3326, Address: 0x2c3798, Func Offset: 0x898
	// Line 3329, Address: 0x2c37a0, Func Offset: 0x8a0
	// Line 3328, Address: 0x2c37a8, Func Offset: 0x8a8
	// Line 3330, Address: 0x2c37b4, Func Offset: 0x8b4
	// Line 3331, Address: 0x2c37c4, Func Offset: 0x8c4
	// Line 3336, Address: 0x2c37cc, Func Offset: 0x8cc
	// Line 3337, Address: 0x2c37d8, Func Offset: 0x8d8
	// Line 3338, Address: 0x2c37dc, Func Offset: 0x8dc
	// Line 3339, Address: 0x2c37e4, Func Offset: 0x8e4
	// Line 3340, Address: 0x2c37ec, Func Offset: 0x8ec
	// Line 3341, Address: 0x2c37f4, Func Offset: 0x8f4
	// Line 3342, Address: 0x2c37f8, Func Offset: 0x8f8
	// Line 3343, Address: 0x2c3800, Func Offset: 0x900
	// Line 3345, Address: 0x2c3808, Func Offset: 0x908
	// Line 3346, Address: 0x2c3820, Func Offset: 0x920
	// Line 3347, Address: 0x2c3828, Func Offset: 0x928
	// Line 3350, Address: 0x2c3830, Func Offset: 0x930
	// Line 3356, Address: 0x2c3850, Func Offset: 0x950
	// Line 3358, Address: 0x2c3874, Func Offset: 0x974
	// Line 3359, Address: 0x2c388c, Func Offset: 0x98c
	// Line 3360, Address: 0x2c3894, Func Offset: 0x994
	// Line 3361, Address: 0x2c389c, Func Offset: 0x99c
	// Line 3362, Address: 0x2c38a4, Func Offset: 0x9a4
	// Line 3363, Address: 0x2c38ac, Func Offset: 0x9ac
	// Line 3364, Address: 0x2c38b0, Func Offset: 0x9b0
	// Line 3365, Address: 0x2c38b8, Func Offset: 0x9b8
	// Line 3366, Address: 0x2c38c0, Func Offset: 0x9c0
	// Line 3368, Address: 0x2c38c8, Func Offset: 0x9c8
	// Line 3369, Address: 0x2c38d4, Func Offset: 0x9d4
	// Line 3370, Address: 0x2c38e4, Func Offset: 0x9e4
	// Line 3371, Address: 0x2c38ec, Func Offset: 0x9ec
	// Line 3372, Address: 0x2c38f4, Func Offset: 0x9f4
	// Line 3373, Address: 0x2c38fc, Func Offset: 0x9fc
	// Line 3375, Address: 0x2c3900, Func Offset: 0xa00
	// Line 3376, Address: 0x2c3920, Func Offset: 0xa20
	// Line 3377, Address: 0x2c3940, Func Offset: 0xa40
	// Line 3378, Address: 0x2c3960, Func Offset: 0xa60
	// Line 3379, Address: 0x2c3970, Func Offset: 0xa70
	// Line 3381, Address: 0x2c3978, Func Offset: 0xa78
	// Line 3382, Address: 0x2c3980, Func Offset: 0xa80
	// Line 3385, Address: 0x2c3988, Func Offset: 0xa88
	// Line 3386, Address: 0x2c3990, Func Offset: 0xa90
	// Line 3387, Address: 0x2c39b8, Func Offset: 0xab8
	// Line 3388, Address: 0x2c39c0, Func Offset: 0xac0
	// Line 3390, Address: 0x2c39e8, Func Offset: 0xae8
	// Line 3391, Address: 0x2c3a10, Func Offset: 0xb10
	// Line 3392, Address: 0x2c3a18, Func Offset: 0xb18
	// Line 3394, Address: 0x2c3a40, Func Offset: 0xb40
	// Line 3395, Address: 0x2c3a50, Func Offset: 0xb50
	// Line 3396, Address: 0x2c3a58, Func Offset: 0xb58
	// Line 3397, Address: 0x2c3a60, Func Offset: 0xb60
	// Line 3398, Address: 0x2c3a78, Func Offset: 0xb78
	// Line 3400, Address: 0x2c3a80, Func Offset: 0xb80
	// Line 3401, Address: 0x2c3a88, Func Offset: 0xb88
	// Line 3403, Address: 0x2c3a98, Func Offset: 0xb98
	// Line 3406, Address: 0x2c3abc, Func Offset: 0xbbc
	// Line 3407, Address: 0x2c3ad0, Func Offset: 0xbd0
	// Line 3408, Address: 0x2c3ad8, Func Offset: 0xbd8
	// Line 3409, Address: 0x2c3ae0, Func Offset: 0xbe0
	// Line 3410, Address: 0x2c3af8, Func Offset: 0xbf8
	// Line 3412, Address: 0x2c3b00, Func Offset: 0xc00
	// Line 3413, Address: 0x2c3b08, Func Offset: 0xc08
	// Line 3415, Address: 0x2c3b18, Func Offset: 0xc18
	// Line 3418, Address: 0x2c3b3c, Func Offset: 0xc3c
	// Line 3419, Address: 0x2c3b50, Func Offset: 0xc50
	// Line 3420, Address: 0x2c3b58, Func Offset: 0xc58
	// Line 3421, Address: 0x2c3b60, Func Offset: 0xc60
	// Line 3422, Address: 0x2c3b78, Func Offset: 0xc78
	// Line 3424, Address: 0x2c3b80, Func Offset: 0xc80
	// Line 3425, Address: 0x2c3b88, Func Offset: 0xc88
	// Line 3427, Address: 0x2c3b98, Func Offset: 0xc98
	// Line 3430, Address: 0x2c3bbc, Func Offset: 0xcbc
	// Line 3431, Address: 0x2c3bc4, Func Offset: 0xcc4
	// Line 3433, Address: 0x2c3bcc, Func Offset: 0xccc
	// Line 3434, Address: 0x2c3bdc, Func Offset: 0xcdc
	// Line 3435, Address: 0x2c3be4, Func Offset: 0xce4
	// Line 3436, Address: 0x2c3bec, Func Offset: 0xcec
	// Line 3437, Address: 0x2c3bf4, Func Offset: 0xcf4
	// Line 3438, Address: 0x2c3bfc, Func Offset: 0xcfc
	// Line 3439, Address: 0x2c3c00, Func Offset: 0xd00
	// Line 3440, Address: 0x2c3c14, Func Offset: 0xd14
	// Line 3441, Address: 0x2c3c1c, Func Offset: 0xd1c
	// Line 3442, Address: 0x2c3c24, Func Offset: 0xd24
	// Line 3443, Address: 0x2c3c2c, Func Offset: 0xd2c
	// Line 3444, Address: 0x2c3c30, Func Offset: 0xd30
	// Line 3445, Address: 0x2c3c44, Func Offset: 0xd44
	// Line 3446, Address: 0x2c3c4c, Func Offset: 0xd4c
	// Line 3447, Address: 0x2c3c54, Func Offset: 0xd54
	// Line 3448, Address: 0x2c3c64, Func Offset: 0xd64
	// Line 3450, Address: 0x2c3c78, Func Offset: 0xd78
	// Line 3452, Address: 0x2c3c80, Func Offset: 0xd80
	// Line 3456, Address: 0x2c3c88, Func Offset: 0xd88
	// Line 3457, Address: 0x2c3cb0, Func Offset: 0xdb0
	// Line 3458, Address: 0x2c3cb8, Func Offset: 0xdb8
	// Line 3460, Address: 0x2c3ce0, Func Offset: 0xde0
	// Line 3461, Address: 0x2c3d08, Func Offset: 0xe08
	// Line 3462, Address: 0x2c3d10, Func Offset: 0xe10
	// Line 3464, Address: 0x2c3d38, Func Offset: 0xe38
	// Line 3466, Address: 0x2c3d40, Func Offset: 0xe40
	// Line 3467, Address: 0x2c3d48, Func Offset: 0xe48
	// Line 3471, Address: 0x2c3d6c, Func Offset: 0xe6c
	// Line 3472, Address: 0x2c3d7c, Func Offset: 0xe7c
	// Line 3473, Address: 0x2c3d84, Func Offset: 0xe84
	// Line 3474, Address: 0x2c3d8c, Func Offset: 0xe8c
	// Line 3476, Address: 0x2c3d98, Func Offset: 0xe98
	// Line 3477, Address: 0x2c3da0, Func Offset: 0xea0
	// Line 3479, Address: 0x2c3db0, Func Offset: 0xeb0
	// Line 3482, Address: 0x2c3dd4, Func Offset: 0xed4
	// Line 3483, Address: 0x2c3de8, Func Offset: 0xee8
	// Line 3484, Address: 0x2c3df0, Func Offset: 0xef0
	// Line 3485, Address: 0x2c3df8, Func Offset: 0xef8
	// Line 3487, Address: 0x2c3e00, Func Offset: 0xf00
	// Line 3488, Address: 0x2c3e08, Func Offset: 0xf08
	// Line 3490, Address: 0x2c3e18, Func Offset: 0xf18
	// Line 3493, Address: 0x2c3e3c, Func Offset: 0xf3c
	// Line 3494, Address: 0x2c3e44, Func Offset: 0xf44
	// Line 3496, Address: 0x2c3e4c, Func Offset: 0xf4c
	// Line 3497, Address: 0x2c3e5c, Func Offset: 0xf5c
	// Line 3498, Address: 0x2c3e64, Func Offset: 0xf64
	// Line 3499, Address: 0x2c3e6c, Func Offset: 0xf6c
	// Line 3500, Address: 0x2c3e74, Func Offset: 0xf74
	// Line 3501, Address: 0x2c3e7c, Func Offset: 0xf7c
	// Line 3502, Address: 0x2c3e80, Func Offset: 0xf80
	// Line 3503, Address: 0x2c3e94, Func Offset: 0xf94
	// Line 3504, Address: 0x2c3e9c, Func Offset: 0xf9c
	// Line 3505, Address: 0x2c3ea4, Func Offset: 0xfa4
	// Line 3506, Address: 0x2c3eac, Func Offset: 0xfac
	// Line 3507, Address: 0x2c3eb0, Func Offset: 0xfb0
	// Line 3508, Address: 0x2c3ec4, Func Offset: 0xfc4
	// Line 3509, Address: 0x2c3ecc, Func Offset: 0xfcc
	// Line 3510, Address: 0x2c3edc, Func Offset: 0xfdc
	// Line 3511, Address: 0x2c3ee8, Func Offset: 0xfe8
	// Line 3513, Address: 0x2c3ef0, Func Offset: 0xff0
	// Line 3520, Address: 0x2c3ef8, Func Offset: 0xff8
	// Line 3522, Address: 0x2c3f0c, Func Offset: 0x100c
	// Line 3523, Address: 0x2c3f14, Func Offset: 0x1014
	// Line 3524, Address: 0x2c3f1c, Func Offset: 0x101c
	// Line 3525, Address: 0x2c3f20, Func Offset: 0x1020
	// Line 3527, Address: 0x2c3f44, Func Offset: 0x1044
	// Line 3530, Address: 0x2c3f4c, Func Offset: 0x104c
	// Line 3531, Address: 0x2c3f50, Func Offset: 0x1050
	// Line 3533, Address: 0x2c3f74, Func Offset: 0x1074
	// Line 3534, Address: 0x2c3f84, Func Offset: 0x1084
	// Line 3535, Address: 0x2c3f8c, Func Offset: 0x108c
	// Line 3536, Address: 0x2c3f94, Func Offset: 0x1094
	// Line 3537, Address: 0x2c3f98, Func Offset: 0x1098
	// Line 3539, Address: 0x2c3fbc, Func Offset: 0x10bc
	// Line 3540, Address: 0x2c3fcc, Func Offset: 0x10cc
	// Line 3541, Address: 0x2c3fd4, Func Offset: 0x10d4
	// Line 3543, Address: 0x2c3fdc, Func Offset: 0x10dc
	// Line 3544, Address: 0x2c3fe4, Func Offset: 0x10e4
	// Line 3546, Address: 0x2c3fe8, Func Offset: 0x10e8
	// Line 3547, Address: 0x2c4020, Func Offset: 0x1120
	// Line 3548, Address: 0x2c4028, Func Offset: 0x1128
	// Line 3550, Address: 0x2c4030, Func Offset: 0x1130
	// Line 3552, Address: 0x2c4054, Func Offset: 0x1154
	// Line 3553, Address: 0x2c4060, Func Offset: 0x1160
	// Line 3554, Address: 0x2c4070, Func Offset: 0x1170
	// Line 3555, Address: 0x2c4078, Func Offset: 0x1178
	// Line 3557, Address: 0x2c4080, Func Offset: 0x1180
	// Line 3558, Address: 0x2c4090, Func Offset: 0x1190
	// Line 3559, Address: 0x2c4098, Func Offset: 0x1198
	// Line 3561, Address: 0x2c40bc, Func Offset: 0x11bc
	// Line 3562, Address: 0x2c40c4, Func Offset: 0x11c4
	// Line 3563, Address: 0x2c40c8, Func Offset: 0x11c8
	// Line 3564, Address: 0x2c40d0, Func Offset: 0x11d0
	// Line 3671, Address: 0x2c40d8, Func Offset: 0x11d8
	// Line 3672, Address: 0x2c40f8, Func Offset: 0x11f8
	// Line 3673, Address: 0x2c4118, Func Offset: 0x1218
	// Line 3676, Address: 0x2c4120, Func Offset: 0x1220
	// Line 3679, Address: 0x2c4128, Func Offset: 0x1228
	// Line 3680, Address: 0x2c4138, Func Offset: 0x1238
	// Line 3681, Address: 0x2c4148, Func Offset: 0x1248
	// Line 3683, Address: 0x2c4150, Func Offset: 0x1250
	// Line 3684, Address: 0x2c4170, Func Offset: 0x1270
	// Line 3688, Address: 0x2c4174, Func Offset: 0x1274
	// Line 3694, Address: 0x2c4178, Func Offset: 0x1278
	// Line 3695, Address: 0x2c41b8, Func Offset: 0x12b8
	// Line 3696, Address: 0x2c41c8, Func Offset: 0x12c8
	// Line 3698, Address: 0x2c41d0, Func Offset: 0x12d0
	// Line 3699, Address: 0x2c41e4, Func Offset: 0x12e4
	// Line 3700, Address: 0x2c41ec, Func Offset: 0x12ec
	// Line 3701, Address: 0x2c41f8, Func Offset: 0x12f8
	// Line 3702, Address: 0x2c4218, Func Offset: 0x1318
	// Line 3703, Address: 0x2c422c, Func Offset: 0x132c
	// Line 3704, Address: 0x2c423c, Func Offset: 0x133c
	// Line 3706, Address: 0x2c4248, Func Offset: 0x1348
	// Line 3707, Address: 0x2c426c, Func Offset: 0x136c
	// Line 3709, Address: 0x2c4270, Func Offset: 0x1370
	// Line 3710, Address: 0x2c4278, Func Offset: 0x1378
	// Line 3711, Address: 0x2c429c, Func Offset: 0x139c
	// Line 3712, Address: 0x2c42c8, Func Offset: 0x13c8
	// Line 3713, Address: 0x2c42e0, Func Offset: 0x13e0
	// Line 3714, Address: 0x2c42f4, Func Offset: 0x13f4
	// Line 3716, Address: 0x2c430c, Func Offset: 0x140c
	// Line 3717, Address: 0x2c431c, Func Offset: 0x141c
	// Line 3719, Address: 0x2c4350, Func Offset: 0x1450
	// Line 3721, Address: 0x2c4374, Func Offset: 0x1474
	// Line 3723, Address: 0x2c437c, Func Offset: 0x147c
	// Line 3724, Address: 0x2c4380, Func Offset: 0x1480
	// Line 3725, Address: 0x2c4394, Func Offset: 0x1494
	// Line 3727, Address: 0x2c43b8, Func Offset: 0x14b8
	// Line 3730, Address: 0x2c43c0, Func Offset: 0x14c0
	// Line 3735, Address: 0x2c43e4, Func Offset: 0x14e4
	// Line 3738, Address: 0x2c43e8, Func Offset: 0x14e8
	// Line 3739, Address: 0x2c4404, Func Offset: 0x1504
	// Line 3740, Address: 0x2c4418, Func Offset: 0x1518
	// Line 3743, Address: 0x2c4420, Func Offset: 0x1520
	// Line 3744, Address: 0x2c4434, Func Offset: 0x1534
	// Line 3749, Address: 0x2c4458, Func Offset: 0x1558
	// Line 3758, Address: 0x2c4464, Func Offset: 0x1564
	// Line 3761, Address: 0x2c446c, Func Offset: 0x156c
	// Line 3762, Address: 0x2c4474, Func Offset: 0x1574
	// Line 3763, Address: 0x2c4480, Func Offset: 0x1580
	// Line 3765, Address: 0x2c4488, Func Offset: 0x1588
	// Line 3766, Address: 0x2c4490, Func Offset: 0x1590
	// Line 3767, Address: 0x2c4498, Func Offset: 0x1598
	// Line 3769, Address: 0x2c44b0, Func Offset: 0x15b0
	// Line 3771, Address: 0x2c44b8, Func Offset: 0x15b8
	// Func End, Address: 0x2c44cc, Func Offset: 0x15cc
}

// 
// Start address: 0x2c44d0
void print_checking(int port)
{
	// Line 3777, Address: 0x2c44d0, Func Offset: 0
	// Line 3778, Address: 0x2c44d4, Func Offset: 0x4
	// Line 3777, Address: 0x2c44d8, Func Offset: 0x8
	// Line 3778, Address: 0x2c44e4, Func Offset: 0x14
	// Line 3779, Address: 0x2c44f8, Func Offset: 0x28
	// Line 3781, Address: 0x2c4500, Func Offset: 0x30
	// Line 3782, Address: 0x2c4508, Func Offset: 0x38
	// Line 3784, Address: 0x2c4528, Func Offset: 0x58
	// Line 3786, Address: 0x2c4530, Func Offset: 0x60
	// Line 3792, Address: 0x2c4554, Func Offset: 0x84
	// Line 3794, Address: 0x2c4578, Func Offset: 0xa8
	// Func End, Address: 0x2c4588, Func Offset: 0xb8
}

// 
// Start address: 0x2c4590
void print_loaded(int port)
{
	// Line 3799, Address: 0x2c4590, Func Offset: 0
	// Line 3800, Address: 0x2c45a0, Func Offset: 0x10
	// Line 3801, Address: 0x2c45a8, Func Offset: 0x18
	// Line 3803, Address: 0x2c45cc, Func Offset: 0x3c
	// Line 3805, Address: 0x2c45d4, Func Offset: 0x44
	// Line 3807, Address: 0x2c45f8, Func Offset: 0x68
	// Func End, Address: 0x2c4608, Func Offset: 0x78
}

// 
// Start address: 0x2c4610
void disp_yn_30(int cur)
{
	unsigned int col;
	// Line 3812, Address: 0x2c4610, Func Offset: 0
	// Line 3819, Address: 0x2c4628, Func Offset: 0x18
	// Line 3821, Address: 0x2c4664, Func Offset: 0x54
	// Line 3822, Address: 0x2c4678, Func Offset: 0x68
	// Line 3824, Address: 0x2c469c, Func Offset: 0x8c
	// Line 3826, Address: 0x2c46a4, Func Offset: 0x94
	// Line 3827, Address: 0x2c46b8, Func Offset: 0xa8
	// Line 3829, Address: 0x2c46dc, Func Offset: 0xcc
	// Line 3831, Address: 0x2c46e4, Func Offset: 0xd4
	// Line 3832, Address: 0x2c46f0, Func Offset: 0xe0
	// Func End, Address: 0x2c4704, Func Offset: 0xf4
}

// 
// Start address: 0x2c4710
void disp_slot_all()
{
	// Line 3837, Address: 0x2c4710, Func Offset: 0
	// Line 3838, Address: 0x2c4718, Func Offset: 0x8
	// Line 3839, Address: 0x2c4720, Func Offset: 0x10
	// Line 3841, Address: 0x2c4740, Func Offset: 0x30
	// Line 3842, Address: 0x2c4748, Func Offset: 0x38
	// Line 3843, Address: 0x2c4758, Func Offset: 0x48
	// Line 3846, Address: 0x2c4788, Func Offset: 0x78
	// Line 3849, Address: 0x2c47b0, Func Offset: 0xa0
	// Line 3850, Address: 0x2c47b8, Func Offset: 0xa8
	// Line 3852, Address: 0x2c47dc, Func Offset: 0xcc
	// Line 3853, Address: 0x2c47e4, Func Offset: 0xd4
	// Line 3854, Address: 0x2c47f4, Func Offset: 0xe4
	// Line 3857, Address: 0x2c4820, Func Offset: 0x110
	// Line 3860, Address: 0x2c4848, Func Offset: 0x138
	// Line 3862, Address: 0x2c486c, Func Offset: 0x15c
	// Line 3865, Address: 0x2c4890, Func Offset: 0x180
	// Line 3866, Address: 0x2c489c, Func Offset: 0x18c
	// Func End, Address: 0x2c48a8, Func Offset: 0x198
}

// 
// Start address: 0x2c48b0
void McCheckStart()
{
	int busy;
	int ret;
	int free0;
	int free1;
	int flag;
	_anon3* cptr;
	// Line 3871, Address: 0x2c48b0, Func Offset: 0
	// Line 3882, Address: 0x2c48bc, Func Offset: 0xc
	// Line 3884, Address: 0x2c48c4, Func Offset: 0x14
	// Line 3889, Address: 0x2c48e0, Func Offset: 0x30
	// Line 3888, Address: 0x2c48e8, Func Offset: 0x38
	// Line 3889, Address: 0x2c48ec, Func Offset: 0x3c
	// Line 3890, Address: 0x2c48f4, Func Offset: 0x44
	// Line 3891, Address: 0x2c49dc, Func Offset: 0x12c
	// Line 3892, Address: 0x2c49e0, Func Offset: 0x130
	// Line 3893, Address: 0x2c49e8, Func Offset: 0x138
	// Line 3894, Address: 0x2c49f0, Func Offset: 0x140
	// Line 3895, Address: 0x2c49f4, Func Offset: 0x144
	// Line 3896, Address: 0x2c4a00, Func Offset: 0x150
	// Line 3897, Address: 0x2c4a08, Func Offset: 0x158
	// Line 3898, Address: 0x2c4a10, Func Offset: 0x160
	// Line 3899, Address: 0x2c4a18, Func Offset: 0x168
	// Line 3900, Address: 0x2c4a20, Func Offset: 0x170
	// Line 3901, Address: 0x2c4a28, Func Offset: 0x178
	// Line 3902, Address: 0x2c4a30, Func Offset: 0x180
	// Line 3903, Address: 0x2c4a38, Func Offset: 0x188
	// Line 3904, Address: 0x2c4a44, Func Offset: 0x194
	// Line 3905, Address: 0x2c4a4c, Func Offset: 0x19c
	// Line 3906, Address: 0x2c4a54, Func Offset: 0x1a4
	// Line 3907, Address: 0x2c4a5c, Func Offset: 0x1ac
	// Line 3908, Address: 0x2c4a60, Func Offset: 0x1b0
	// Line 3909, Address: 0x2c4a68, Func Offset: 0x1b8
	// Line 3910, Address: 0x2c4a70, Func Offset: 0x1c0
	// Line 3911, Address: 0x2c4a78, Func Offset: 0x1c8
	// Line 3912, Address: 0x2c4a7c, Func Offset: 0x1cc
	// Line 3913, Address: 0x2c4a88, Func Offset: 0x1d8
	// Line 3914, Address: 0x2c4a90, Func Offset: 0x1e0
	// Line 3915, Address: 0x2c4a98, Func Offset: 0x1e8
	// Line 3916, Address: 0x2c4aa0, Func Offset: 0x1f0
	// Line 3917, Address: 0x2c4aa8, Func Offset: 0x1f8
	// Line 3918, Address: 0x2c4ab0, Func Offset: 0x200
	// Line 3919, Address: 0x2c4ab8, Func Offset: 0x208
	// Line 3920, Address: 0x2c4ac0, Func Offset: 0x210
	// Line 3921, Address: 0x2c4acc, Func Offset: 0x21c
	// Line 3922, Address: 0x2c4ad4, Func Offset: 0x224
	// Line 3923, Address: 0x2c4adc, Func Offset: 0x22c
	// Line 3924, Address: 0x2c4ae0, Func Offset: 0x230
	// Line 3925, Address: 0x2c4ae8, Func Offset: 0x238
	// Line 3926, Address: 0x2c4af8, Func Offset: 0x248
	// Line 3927, Address: 0x2c4b04, Func Offset: 0x254
	// Line 3928, Address: 0x2c4b0c, Func Offset: 0x25c
	// Line 3930, Address: 0x2c4b14, Func Offset: 0x264
	// Line 3931, Address: 0x2c4b1c, Func Offset: 0x26c
	// Line 3932, Address: 0x2c4b20, Func Offset: 0x270
	// Line 3933, Address: 0x2c4b28, Func Offset: 0x278
	// Line 3934, Address: 0x2c4b38, Func Offset: 0x288
	// Line 3935, Address: 0x2c4b40, Func Offset: 0x290
	// Line 3936, Address: 0x2c4b48, Func Offset: 0x298
	// Line 3938, Address: 0x2c4b50, Func Offset: 0x2a0
	// Line 3939, Address: 0x2c4b5c, Func Offset: 0x2ac
	// Line 3940, Address: 0x2c4b64, Func Offset: 0x2b4
	// Line 3941, Address: 0x2c4b6c, Func Offset: 0x2bc
	// Line 3942, Address: 0x2c4b70, Func Offset: 0x2c0
	// Line 3943, Address: 0x2c4b78, Func Offset: 0x2c8
	// Line 3944, Address: 0x2c4b84, Func Offset: 0x2d4
	// Line 3945, Address: 0x2c4b8c, Func Offset: 0x2dc
	// Line 3946, Address: 0x2c4b94, Func Offset: 0x2e4
	// Line 3947, Address: 0x2c4b9c, Func Offset: 0x2ec
	// Line 3948, Address: 0x2c4ba0, Func Offset: 0x2f0
	// Line 3949, Address: 0x2c4ba8, Func Offset: 0x2f8
	// Line 3950, Address: 0x2c4bb8, Func Offset: 0x308
	// Line 3951, Address: 0x2c4bc0, Func Offset: 0x310
	// Line 3952, Address: 0x2c4bc8, Func Offset: 0x318
	// Line 3954, Address: 0x2c4bd0, Func Offset: 0x320
	// Line 3955, Address: 0x2c4bdc, Func Offset: 0x32c
	// Line 3956, Address: 0x2c4be4, Func Offset: 0x334
	// Line 3957, Address: 0x2c4bec, Func Offset: 0x33c
	// Line 3958, Address: 0x2c4bf0, Func Offset: 0x340
	// Line 3959, Address: 0x2c4bf8, Func Offset: 0x348
	// Line 3960, Address: 0x2c4c04, Func Offset: 0x354
	// Line 3961, Address: 0x2c4c0c, Func Offset: 0x35c
	// Line 3962, Address: 0x2c4c14, Func Offset: 0x364
	// Line 3963, Address: 0x2c4c1c, Func Offset: 0x36c
	// Line 3964, Address: 0x2c4c20, Func Offset: 0x370
	// Line 3965, Address: 0x2c4c28, Func Offset: 0x378
	// Line 3966, Address: 0x2c4c34, Func Offset: 0x384
	// Line 3967, Address: 0x2c4c3c, Func Offset: 0x38c
	// Line 3968, Address: 0x2c4c48, Func Offset: 0x398
	// Line 3969, Address: 0x2c4c50, Func Offset: 0x3a0
	// Line 3970, Address: 0x2c4c60, Func Offset: 0x3b0
	// Line 3971, Address: 0x2c4c68, Func Offset: 0x3b8
	// Line 3973, Address: 0x2c4c70, Func Offset: 0x3c0
	// Line 3974, Address: 0x2c4c84, Func Offset: 0x3d4
	// Line 3975, Address: 0x2c4c8c, Func Offset: 0x3dc
	// Line 3976, Address: 0x2c4c94, Func Offset: 0x3e4
	// Line 3977, Address: 0x2c4c98, Func Offset: 0x3e8
	// Line 3978, Address: 0x2c4ca8, Func Offset: 0x3f8
	// Line 3979, Address: 0x2c4cb0, Func Offset: 0x400
	// Line 3981, Address: 0x2c4cb8, Func Offset: 0x408
	// Line 3982, Address: 0x2c4ccc, Func Offset: 0x41c
	// Line 3983, Address: 0x2c4cd4, Func Offset: 0x424
	// Line 3984, Address: 0x2c4cdc, Func Offset: 0x42c
	// Line 3985, Address: 0x2c4ce0, Func Offset: 0x430
	// Line 3986, Address: 0x2c4cf0, Func Offset: 0x440
	// Line 3987, Address: 0x2c4cfc, Func Offset: 0x44c
	// Line 3988, Address: 0x2c4d18, Func Offset: 0x468
	// Line 3990, Address: 0x2c4d30, Func Offset: 0x480
	// Line 3991, Address: 0x2c4d3c, Func Offset: 0x48c
	// Line 3992, Address: 0x2c4d44, Func Offset: 0x494
	// Line 3993, Address: 0x2c4d4c, Func Offset: 0x49c
	// Line 3995, Address: 0x2c4d50, Func Offset: 0x4a0
	// Line 3996, Address: 0x2c4d58, Func Offset: 0x4a8
	// Line 3997, Address: 0x2c4d60, Func Offset: 0x4b0
	// Line 3998, Address: 0x2c4d68, Func Offset: 0x4b8
	// Line 3999, Address: 0x2c4d70, Func Offset: 0x4c0
	// Line 4000, Address: 0x2c4d90, Func Offset: 0x4e0
	// Line 4001, Address: 0x2c4d98, Func Offset: 0x4e8
	// Line 4009, Address: 0x2c4da0, Func Offset: 0x4f0
	// Line 4010, Address: 0x2c4da8, Func Offset: 0x4f8
	// Line 4014, Address: 0x2c4db0, Func Offset: 0x500
	// Line 4015, Address: 0x2c4db4, Func Offset: 0x504
	// Line 4017, Address: 0x2c4dbc, Func Offset: 0x50c
	// Line 4018, Address: 0x2c4dc0, Func Offset: 0x510
	// Line 4019, Address: 0x2c4dcc, Func Offset: 0x51c
	// Line 4020, Address: 0x2c4dd0, Func Offset: 0x520
	// Line 4019, Address: 0x2c4dd4, Func Offset: 0x524
	// Line 4020, Address: 0x2c4de0, Func Offset: 0x530
	// Line 4021, Address: 0x2c4df8, Func Offset: 0x548
	// Line 4023, Address: 0x2c4e08, Func Offset: 0x558
	// Line 4025, Address: 0x2c4e10, Func Offset: 0x560
	// Line 4027, Address: 0x2c4e18, Func Offset: 0x568
	// Line 4028, Address: 0x2c4e38, Func Offset: 0x588
	// Line 4029, Address: 0x2c4e3c, Func Offset: 0x58c
	// Line 4030, Address: 0x2c4e40, Func Offset: 0x590
	// Line 4031, Address: 0x2c4e48, Func Offset: 0x598
	// Line 4032, Address: 0x2c4e54, Func Offset: 0x5a4
	// Line 4033, Address: 0x2c4e60, Func Offset: 0x5b0
	// Line 4039, Address: 0x2c4e68, Func Offset: 0x5b8
	// Line 4040, Address: 0x2c4e70, Func Offset: 0x5c0
	// Line 4041, Address: 0x2c4e80, Func Offset: 0x5d0
	// Line 4042, Address: 0x2c4e88, Func Offset: 0x5d8
	// Line 4043, Address: 0x2c4e90, Func Offset: 0x5e0
	// Line 4045, Address: 0x2c4e98, Func Offset: 0x5e8
	// Line 4046, Address: 0x2c4ea4, Func Offset: 0x5f4
	// Line 4047, Address: 0x2c4eac, Func Offset: 0x5fc
	// Line 4048, Address: 0x2c4eb4, Func Offset: 0x604
	// Line 4049, Address: 0x2c4eb8, Func Offset: 0x608
	// Line 4050, Address: 0x2c4ec0, Func Offset: 0x610
	// Line 4051, Address: 0x2c4ecc, Func Offset: 0x61c
	// Line 4052, Address: 0x2c4ed4, Func Offset: 0x624
	// Line 4053, Address: 0x2c4edc, Func Offset: 0x62c
	// Line 4054, Address: 0x2c4ee4, Func Offset: 0x634
	// Line 4055, Address: 0x2c4eec, Func Offset: 0x63c
	// Line 4056, Address: 0x2c4ef0, Func Offset: 0x640
	// Line 4057, Address: 0x2c4ef8, Func Offset: 0x648
	// Line 4058, Address: 0x2c4f08, Func Offset: 0x658
	// Line 4059, Address: 0x2c4f10, Func Offset: 0x660
	// Line 4060, Address: 0x2c4f18, Func Offset: 0x668
	// Line 4062, Address: 0x2c4f20, Func Offset: 0x670
	// Line 4063, Address: 0x2c4f2c, Func Offset: 0x67c
	// Line 4064, Address: 0x2c4f34, Func Offset: 0x684
	// Line 4065, Address: 0x2c4f3c, Func Offset: 0x68c
	// Line 4066, Address: 0x2c4f40, Func Offset: 0x690
	// Line 4067, Address: 0x2c4f48, Func Offset: 0x698
	// Line 4068, Address: 0x2c4f54, Func Offset: 0x6a4
	// Line 4069, Address: 0x2c4f5c, Func Offset: 0x6ac
	// Line 4070, Address: 0x2c4f64, Func Offset: 0x6b4
	// Line 4071, Address: 0x2c4f6c, Func Offset: 0x6bc
	// Line 4074, Address: 0x2c4f74, Func Offset: 0x6c4
	// Line 4075, Address: 0x2c4f78, Func Offset: 0x6c8
	// Line 4076, Address: 0x2c4fa0, Func Offset: 0x6f0
	// Line 4077, Address: 0x2c4fb8, Func Offset: 0x708
	// Line 4079, Address: 0x2c4fc0, Func Offset: 0x710
	// Line 4080, Address: 0x2c4fe8, Func Offset: 0x738
	// Line 4081, Address: 0x2c5000, Func Offset: 0x750
	// Line 4082, Address: 0x2c500c, Func Offset: 0x75c
	// Line 4083, Address: 0x2c5010, Func Offset: 0x760
	// Line 4085, Address: 0x2c5018, Func Offset: 0x768
	// Line 4086, Address: 0x2c5024, Func Offset: 0x774
	// Line 4087, Address: 0x2c502c, Func Offset: 0x77c
	// Line 4088, Address: 0x2c5034, Func Offset: 0x784
	// Line 4089, Address: 0x2c503c, Func Offset: 0x78c
	// Line 4090, Address: 0x2c5044, Func Offset: 0x794
	// Line 4092, Address: 0x2c5048, Func Offset: 0x798
	// Line 4093, Address: 0x2c505c, Func Offset: 0x7ac
	// Line 4094, Address: 0x2c5068, Func Offset: 0x7b8
	// Line 4095, Address: 0x2c5070, Func Offset: 0x7c0
	// Line 4096, Address: 0x2c5078, Func Offset: 0x7c8
	// Line 4098, Address: 0x2c5080, Func Offset: 0x7d0
	// Line 4099, Address: 0x2c5088, Func Offset: 0x7d8
	// Line 4101, Address: 0x2c5090, Func Offset: 0x7e0
	// Line 4103, Address: 0x2c5098, Func Offset: 0x7e8
	// Line 4104, Address: 0x2c50ac, Func Offset: 0x7fc
	// Line 4105, Address: 0x2c50b8, Func Offset: 0x808
	// Line 4106, Address: 0x2c50c0, Func Offset: 0x810
	// Line 4107, Address: 0x2c50c8, Func Offset: 0x818
	// Line 4109, Address: 0x2c50d0, Func Offset: 0x820
	// Line 4110, Address: 0x2c50d8, Func Offset: 0x828
	// Line 4113, Address: 0x2c50e0, Func Offset: 0x830
	// Line 4119, Address: 0x2c50e8, Func Offset: 0x838
	// Line 4120, Address: 0x2c50ec, Func Offset: 0x83c
	// Line 4122, Address: 0x2c50f4, Func Offset: 0x844
	// Line 4123, Address: 0x2c50f8, Func Offset: 0x848
	// Line 4124, Address: 0x2c5118, Func Offset: 0x868
	// Line 4125, Address: 0x2c511c, Func Offset: 0x86c
	// Line 4126, Address: 0x2c5120, Func Offset: 0x870
	// Line 4132, Address: 0x2c5128, Func Offset: 0x878
	// Line 4133, Address: 0x2c5130, Func Offset: 0x880
	// Line 4134, Address: 0x2c513c, Func Offset: 0x88c
	// Line 4137, Address: 0x2c5144, Func Offset: 0x894
	// Line 4138, Address: 0x2c5148, Func Offset: 0x898
	// Line 4139, Address: 0x2c514c, Func Offset: 0x89c
	// Line 4141, Address: 0x2c5154, Func Offset: 0x8a4
	// Line 4142, Address: 0x2c5158, Func Offset: 0x8a8
	// Line 4143, Address: 0x2c5178, Func Offset: 0x8c8
	// Line 4144, Address: 0x2c517c, Func Offset: 0x8cc
	// Line 4145, Address: 0x2c5180, Func Offset: 0x8d0
	// Line 4146, Address: 0x2c5188, Func Offset: 0x8d8
	// Line 4147, Address: 0x2c5190, Func Offset: 0x8e0
	// Line 4149, Address: 0x2c519c, Func Offset: 0x8ec
	// Line 4154, Address: 0x2c51a0, Func Offset: 0x8f0
	// Line 4156, Address: 0x2c51a8, Func Offset: 0x8f8
	// Line 4157, Address: 0x2c51b0, Func Offset: 0x900
	// Line 4158, Address: 0x2c51b8, Func Offset: 0x908
	// Line 4159, Address: 0x2c51c4, Func Offset: 0x914
	// Line 4160, Address: 0x2c51cc, Func Offset: 0x91c
	// Line 4161, Address: 0x2c51d4, Func Offset: 0x924
	// Line 4162, Address: 0x2c51d8, Func Offset: 0x928
	// Func End, Address: 0x2c51ec, Func Offset: 0x93c
}

