typedef union fsFile;
typedef struct _anon0;
typedef struct fsHdFile;
typedef struct sh2gfw_AREA_HEAD;
typedef struct fsMgpFile;
typedef struct shBattleFight;
typedef struct fsMgcFile;
typedef struct _anon1;
typedef struct shBattleShot;
typedef struct Item;
typedef struct _SH2_SYS;
typedef struct _OPD_W;
typedef union fsFileIndex;
typedef struct _anon2;
typedef struct Playing_Info;
typedef struct _anon3;
typedef struct _anon4;
typedef struct Pad_KeyConfig;
typedef struct shAttackInfo;
typedef struct PicDraw_Data;
typedef union _anon5;
typedef struct _anon6;
typedef struct MC_WORK;
typedef struct fsCdFile;
typedef struct _anon7;
typedef struct fsMgfFile;

typedef void(*type_13)();

typedef _anon7 type_0[17];
typedef short type_1[5];
typedef fsFileIndex type_2[1];
typedef short type_3[7];
typedef short type_4[7];
typedef _anon0 type_5[17];
typedef fsFileIndex type_6[1];
typedef short type_7[5];
typedef int type_8[4];
typedef float type_9[4];
typedef unsigned int type_10[2];
typedef unsigned short type_11[11];
typedef unsigned int type_12[8];
typedef void(*type_14)()[8];
typedef unsigned short type_15[3];
typedef unsigned int type_16[255];
typedef _OPD_W type_17[6];
typedef unsigned int type_18[32];
typedef _anon3 type_19[3];
typedef unsigned char type_20[4];
typedef char type_21[4];
typedef char type_22[4];
typedef char type_23[4];
typedef char type_24[4];
typedef char type_25[4];
typedef float type_26[7];
typedef int type_27[6];
typedef unsigned int type_28[7];
typedef unsigned int type_29[10];
typedef short type_30[8];
typedef short type_31[8];
typedef shAttackInfo type_32[66];
typedef fsFileIndex type_33[1];
typedef _anon3 type_34[5];
typedef unsigned char type_35[3];
typedef short type_36[5];
typedef fsFileIndex type_37[1];

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _anon0
{
	int start_rgba[4];
	int end_rgba[4];
	float cycle;
	float timer;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct _anon1
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _OPD_W
{
	float u0;
	float u1;
	float v0;
	float v1;
	float x0;
	float y0;
	float x1;
	float y1;
	float offset_x;
	float offset_y;
	float scale_x;
	float scale_y;
	unsigned char rgb;
	unsigned char step;
	unsigned char timer;
};

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
};

struct _anon2
{
	fsFile* fp;
	char* name;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
	unsigned char battle_level;
	unsigned char riddle_level;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char weapon_control;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char retreat_turn;
	unsigned char walk_run_control;
	unsigned char auto_aiming;
	unsigned char view_mode;
	unsigned char bullet_adjust;
	unsigned char language;
	unsigned char subtitles;
	unsigned char control_type;
	unsigned char radar;
};

struct _anon3
{
	float pos_x;
	float pos_y;
	float pos_z;
	float rot;
	int stg;
	int jump_nemu_id;
};

struct _anon4
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
};

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
	int padding[6];
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon5 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
};

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon6
{
	int memcard;
	int mode;
	int sel;
	float timer;
	int alpha;
	float alphar;
	unsigned int menu[10];
	PicDraw_Data pic0;
	unsigned char* pload0;
	unsigned char* pload1;
	int texadr;
	int clutadr;
};

struct MC_WORK
{
	unsigned short status;
	char ls_port;
	char ls_dir;
	char ls_file;
	unsigned int ls_dir_id;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct _anon7
{
	short u0;
	short v0;
	short u1;
	short v1;
	short w;
	short h;
	int rgba[4];
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

shAttackInfo sh2_attack_list[66];
_anon7 TitleSpr[17];
_anon0 TitleSprChgColor[17];
int title_test_mode;
_anon3 TitleUSPStartPointList[3];
_anon3 TitleJPStartPointList[5];
_anon6 TitleData;
_SH2_SYS Sh2sys;
Item item;
_anon4 game_flag;
int title_start_point;
Playing_Info playing;
int title_after_data_set;
int jump_menu_select;
fsFileIndex data_pic_etc_start01_tex[1];
float analog_data;
fsFileIndex data_pic_etc_start00_tex[1];
MC_WORK mc;
Pad_KeyConfig key_config;
float connect_pos[4];
fsFileIndex data_pic_etc_comingsoon_tex[1];
_OPD_W org_title;
_OPD_W opd_w[6];
fsFileIndex data_pic_etc_gameover1_tex[1];

int TitleMain();
void titleSetDataStartPoint();
void titleInit();
void titleFadeIn();
void titleChangeMainMenu();
void titleCreateMainMenu();
void titleMainSelect();
int titleCheckPad();
int titleGetCursorFromBattleLevel(unsigned char battle_level);
void titleBattleSelect();
void titleBacktoMainMenuFromLevelMenu();
unsigned char titleGetBattleLevelFromCursor(int cur);
int titleGetCursorFromRiddleLevel(unsigned char riddle_level);
void titleRiddleSelect();
unsigned char titleGetRiddleLevelFromCursor(int cur);
void titleFadeOutNewGame();
void titleFadeOut();
void titleExit();
void titleDrawTitle();
void titleDrawSprite(short x, short y, short id);
void titleDrawMainMenu();
void titleDrawSubMenu(int sel);
short titleGetCursorXPosBattle(int cur);
void titleGetMenuEfctPosBattle(short* x_pos, short* w, int cur);
short titleGetCursorXPosRiddle(int cur);
void titleGetMenuEfctPosRiddle(short* x_pos, short* w, int cur);
void titleChangeSpriteColor2(short id);
void titleChangeCursorSpriteColor();
void titleRenewChangeColorManagement(float* timer, float cycle, int repeat);
void titleChangeColor(int* rgba, int* start_rgba, int* end_rgba, float timer, float cycle_time, float cycle_sin);
int GameendMain();
void opd_work_init();
int GameoverMain();
int draw_opd_wowk_main();

// 
// Start address: 0x1c0b00
int TitleMain()
{
	void(*g0_step_func)()[8];
	// Line 381, Address: 0x1c0b00, Func Offset: 0
	// Line 394, Address: 0x1c0b08, Func Offset: 0x8
	// Line 395, Address: 0x1c0b10, Func Offset: 0x10
	// Line 397, Address: 0x1c0b18, Func Offset: 0x18
	// Line 399, Address: 0x1c0b3c, Func Offset: 0x3c
	// Line 401, Address: 0x1c0b50, Func Offset: 0x50
	// Line 402, Address: 0x1c0b64, Func Offset: 0x64
	// Line 405, Address: 0x1c0b6c, Func Offset: 0x6c
	// Line 406, Address: 0x1c0b74, Func Offset: 0x74
	// Func End, Address: 0x1c0b84, Func Offset: 0x84
}

// 
// Start address: 0x1c0b90
void titleSetDataStartPoint()
{
	int i;
	// Line 423, Address: 0x1c0b90, Func Offset: 0
	// Line 426, Address: 0x1c0b9c, Func Offset: 0xc
	// Line 430, Address: 0x1c0bac, Func Offset: 0x1c
	// Line 432, Address: 0x1c0bbc, Func Offset: 0x2c
	// Line 436, Address: 0x1c0bcc, Func Offset: 0x3c
	// Line 438, Address: 0x1c0bd8, Func Offset: 0x48
	// Line 439, Address: 0x1c0be4, Func Offset: 0x54
	// Line 441, Address: 0x1c0bf0, Func Offset: 0x60
	// Line 443, Address: 0x1c0bfc, Func Offset: 0x6c
	// Line 444, Address: 0x1c0c10, Func Offset: 0x80
	// Line 466, Address: 0x1c0c30, Func Offset: 0xa0
	// Line 467, Address: 0x1c0c3c, Func Offset: 0xac
	// Line 468, Address: 0x1c0c68, Func Offset: 0xd8
	// Line 469, Address: 0x1c0c74, Func Offset: 0xe4
	// Line 470, Address: 0x1c0ca0, Func Offset: 0x110
	// Line 471, Address: 0x1c0cd0, Func Offset: 0x140
	// Line 472, Address: 0x1c0cdc, Func Offset: 0x14c
	// Line 473, Address: 0x1c0ce8, Func Offset: 0x158
	// Line 474, Address: 0x1c0d00, Func Offset: 0x170
	// Line 475, Address: 0x1c0d14, Func Offset: 0x184
	// Line 476, Address: 0x1c0d28, Func Offset: 0x198
	// Line 477, Address: 0x1c0d3c, Func Offset: 0x1ac
	// Line 478, Address: 0x1c0d50, Func Offset: 0x1c0
	// Line 479, Address: 0x1c0d64, Func Offset: 0x1d4
	// Line 480, Address: 0x1c0d7c, Func Offset: 0x1ec
	// Line 481, Address: 0x1c0d90, Func Offset: 0x200
	// Line 482, Address: 0x1c0d98, Func Offset: 0x208
	// Line 485, Address: 0x1c0da0, Func Offset: 0x210
	// Line 486, Address: 0x1c0dac, Func Offset: 0x21c
	// Line 487, Address: 0x1c0dd8, Func Offset: 0x248
	// Line 488, Address: 0x1c0de4, Func Offset: 0x254
	// Line 489, Address: 0x1c0e10, Func Offset: 0x280
	// Line 490, Address: 0x1c0e1c, Func Offset: 0x28c
	// Line 491, Address: 0x1c0e28, Func Offset: 0x298
	// Line 492, Address: 0x1c0e58, Func Offset: 0x2c8
	// Line 493, Address: 0x1c0e88, Func Offset: 0x2f8
	// Line 494, Address: 0x1c0e94, Func Offset: 0x304
	// Line 495, Address: 0x1c0ea0, Func Offset: 0x310
	// Line 496, Address: 0x1c0eac, Func Offset: 0x31c
	// Line 497, Address: 0x1c0ec4, Func Offset: 0x334
	// Line 498, Address: 0x1c0ed8, Func Offset: 0x348
	// Line 501, Address: 0x1c0ee0, Func Offset: 0x350
	// Line 503, Address: 0x1c0ee8, Func Offset: 0x358
	// Line 525, Address: 0x1c0f20, Func Offset: 0x390
	// Line 526, Address: 0x1c0f2c, Func Offset: 0x39c
	// Line 527, Address: 0x1c0f38, Func Offset: 0x3a8
	// Line 528, Address: 0x1c0f68, Func Offset: 0x3d8
	// Line 529, Address: 0x1c0f74, Func Offset: 0x3e4
	// Line 532, Address: 0x1c0f7c, Func Offset: 0x3ec
	// Line 533, Address: 0x1c0f90, Func Offset: 0x400
	// Line 534, Address: 0x1c0f9c, Func Offset: 0x40c
	// Line 535, Address: 0x1c0fa8, Func Offset: 0x418
	// Line 536, Address: 0x1c0fd8, Func Offset: 0x448
	// Line 537, Address: 0x1c0fe4, Func Offset: 0x454
	// Line 538, Address: 0x1c0ff0, Func Offset: 0x460
	// Line 539, Address: 0x1c0ffc, Func Offset: 0x46c
	// Line 540, Address: 0x1c1028, Func Offset: 0x498
	// Line 541, Address: 0x1c1034, Func Offset: 0x4a4
	// Line 544, Address: 0x1c103c, Func Offset: 0x4ac
	// Line 545, Address: 0x1c1048, Func Offset: 0x4b8
	// Line 546, Address: 0x1c1054, Func Offset: 0x4c4
	// Line 547, Address: 0x1c1080, Func Offset: 0x4f0
	// Line 548, Address: 0x1c108c, Func Offset: 0x4fc
	// Line 549, Address: 0x1c10b8, Func Offset: 0x528
	// Line 550, Address: 0x1c10c4, Func Offset: 0x534
	// Line 551, Address: 0x1c10d0, Func Offset: 0x540
	// Line 552, Address: 0x1c10dc, Func Offset: 0x54c
	// Line 553, Address: 0x1c1108, Func Offset: 0x578
	// Line 554, Address: 0x1c1114, Func Offset: 0x584
	// Line 557, Address: 0x1c111c, Func Offset: 0x58c
	// Line 558, Address: 0x1c1124, Func Offset: 0x594
	// Line 559, Address: 0x1c1150, Func Offset: 0x5c0
	// Line 560, Address: 0x1c115c, Func Offset: 0x5cc
	// Line 561, Address: 0x1c1188, Func Offset: 0x5f8
	// Line 562, Address: 0x1c1194, Func Offset: 0x604
	// Line 563, Address: 0x1c11c0, Func Offset: 0x630
	// Line 564, Address: 0x1c11cc, Func Offset: 0x63c
	// Line 565, Address: 0x1c11d8, Func Offset: 0x648
	// Line 566, Address: 0x1c11e4, Func Offset: 0x654
	// Line 567, Address: 0x1c11f0, Func Offset: 0x660
	// Line 568, Address: 0x1c1220, Func Offset: 0x690
	// Line 569, Address: 0x1c122c, Func Offset: 0x69c
	// Line 570, Address: 0x1c1238, Func Offset: 0x6a8
	// Line 574, Address: 0x1c1244, Func Offset: 0x6b4
	// Func End, Address: 0x1c1258, Func Offset: 0x6c8
}

// 
// Start address: 0x1c1260
void titleInit()
{
	int i;
	int wait_loop;
	int fid;
	// Line 592, Address: 0x1c1260, Func Offset: 0
	// Line 597, Address: 0x1c1268, Func Offset: 0x8
	// Line 602, Address: 0x1c12a4, Func Offset: 0x44
	// Line 603, Address: 0x1c12b0, Func Offset: 0x50
	// Line 604, Address: 0x1c12b8, Func Offset: 0x58
	// Line 605, Address: 0x1c12c0, Func Offset: 0x60
	// Line 606, Address: 0x1c12cc, Func Offset: 0x6c
	// Line 607, Address: 0x1c12d4, Func Offset: 0x74
	// Line 608, Address: 0x1c12e0, Func Offset: 0x80
	// Line 609, Address: 0x1c12ec, Func Offset: 0x8c
	// Line 610, Address: 0x1c1304, Func Offset: 0xa4
	// Line 611, Address: 0x1c1314, Func Offset: 0xb4
	// Line 612, Address: 0x1c1324, Func Offset: 0xc4
	// Line 615, Address: 0x1c133c, Func Offset: 0xdc
	// Line 616, Address: 0x1c1348, Func Offset: 0xe8
	// Line 619, Address: 0x1c1354, Func Offset: 0xf4
	// Line 620, Address: 0x1c135c, Func Offset: 0xfc
	// Line 625, Address: 0x1c136c, Func Offset: 0x10c
	// Line 631, Address: 0x1c138c, Func Offset: 0x12c
	// Line 632, Address: 0x1c1394, Func Offset: 0x134
	// Line 633, Address: 0x1c139c, Func Offset: 0x13c
	// Line 634, Address: 0x1c13a4, Func Offset: 0x144
	// Line 636, Address: 0x1c13d8, Func Offset: 0x178
	// Line 639, Address: 0x1c13e0, Func Offset: 0x180
	// Line 640, Address: 0x1c13f4, Func Offset: 0x194
	// Line 642, Address: 0x1c1440, Func Offset: 0x1e0
	// Line 644, Address: 0x1c14b8, Func Offset: 0x258
	// Line 645, Address: 0x1c14ec, Func Offset: 0x28c
	// Line 647, Address: 0x1c14f4, Func Offset: 0x294
	// Line 648, Address: 0x1c150c, Func Offset: 0x2ac
	// Line 650, Address: 0x1c1514, Func Offset: 0x2b4
	// Line 651, Address: 0x1c1538, Func Offset: 0x2d8
	// Line 653, Address: 0x1c156c, Func Offset: 0x30c
	// Line 655, Address: 0x1c1574, Func Offset: 0x314
	// Line 656, Address: 0x1c1598, Func Offset: 0x338
	// Line 658, Address: 0x1c15cc, Func Offset: 0x36c
	// Line 660, Address: 0x1c15d4, Func Offset: 0x374
	// Line 663, Address: 0x1c15e4, Func Offset: 0x384
	// Line 667, Address: 0x1c15ec, Func Offset: 0x38c
	// Line 672, Address: 0x1c160c, Func Offset: 0x3ac
	// Line 673, Address: 0x1c1614, Func Offset: 0x3b4
	// Line 674, Address: 0x1c1648, Func Offset: 0x3e8
	// Line 677, Address: 0x1c1650, Func Offset: 0x3f0
	// Line 678, Address: 0x1c1658, Func Offset: 0x3f8
	// Line 679, Address: 0x1c166c, Func Offset: 0x40c
	// Line 681, Address: 0x1c16bc, Func Offset: 0x45c
	// Line 683, Address: 0x1c1734, Func Offset: 0x4d4
	// Line 684, Address: 0x1c1770, Func Offset: 0x510
	// Line 686, Address: 0x1c1778, Func Offset: 0x518
	// Line 687, Address: 0x1c1790, Func Offset: 0x530
	// Line 689, Address: 0x1c1798, Func Offset: 0x538
	// Line 690, Address: 0x1c17bc, Func Offset: 0x55c
	// Line 692, Address: 0x1c17f0, Func Offset: 0x590
	// Line 694, Address: 0x1c17f8, Func Offset: 0x598
	// Line 695, Address: 0x1c181c, Func Offset: 0x5bc
	// Line 697, Address: 0x1c1850, Func Offset: 0x5f0
	// Line 699, Address: 0x1c1858, Func Offset: 0x5f8
	// Line 705, Address: 0x1c1868, Func Offset: 0x608
	// Func End, Address: 0x1c1878, Func Offset: 0x618
}

// 
// Start address: 0x1c1880
void titleFadeIn()
{
	// Line 722, Address: 0x1c1880, Func Offset: 0
	// Line 725, Address: 0x1c1888, Func Offset: 0x8
	// Line 729, Address: 0x1c1898, Func Offset: 0x18
	// Line 732, Address: 0x1c18a0, Func Offset: 0x20
	// Line 735, Address: 0x1c18b8, Func Offset: 0x38
	// Line 738, Address: 0x1c18c0, Func Offset: 0x40
	// Line 739, Address: 0x1c18d4, Func Offset: 0x54
	// Line 740, Address: 0x1c18dc, Func Offset: 0x5c
	// Line 741, Address: 0x1c18e4, Func Offset: 0x64
	// Line 742, Address: 0x1c1918, Func Offset: 0x98
	// Line 745, Address: 0x1c1920, Func Offset: 0xa0
	// Line 746, Address: 0x1c1928, Func Offset: 0xa8
	// Line 747, Address: 0x1c1930, Func Offset: 0xb0
	// Line 749, Address: 0x1c1938, Func Offset: 0xb8
	// Line 750, Address: 0x1c1948, Func Offset: 0xc8
	// Line 751, Address: 0x1c195c, Func Offset: 0xdc
	// Line 752, Address: 0x1c1990, Func Offset: 0x110
	// Line 754, Address: 0x1c1998, Func Offset: 0x118
	// Line 755, Address: 0x1c19b4, Func Offset: 0x134
	// Line 756, Address: 0x1c19bc, Func Offset: 0x13c
	// Line 757, Address: 0x1c19d0, Func Offset: 0x150
	// Line 761, Address: 0x1c1a04, Func Offset: 0x184
	// Func End, Address: 0x1c1a14, Func Offset: 0x194
}

// 
// Start address: 0x1c1a20
void titleChangeMainMenu()
{
	int card;
	// Line 778, Address: 0x1c1a20, Func Offset: 0
	// Line 784, Address: 0x1c1a28, Func Offset: 0x8
	// Line 785, Address: 0x1c1a3c, Func Offset: 0x1c
	// Line 786, Address: 0x1c1a44, Func Offset: 0x24
	// Line 790, Address: 0x1c1a4c, Func Offset: 0x2c
	// Line 792, Address: 0x1c1a54, Func Offset: 0x34
	// Line 794, Address: 0x1c1a64, Func Offset: 0x44
	// Line 797, Address: 0x1c1a6c, Func Offset: 0x4c
	// Line 800, Address: 0x1c1a74, Func Offset: 0x54
	// Func End, Address: 0x1c1a84, Func Offset: 0x64
}

// 
// Start address: 0x1c1a90
void titleCreateMainMenu()
{
	// Line 813, Address: 0x1c1a90, Func Offset: 0
	// Line 815, Address: 0x1c1aa4, Func Offset: 0x14
	// Line 818, Address: 0x1c1ab0, Func Offset: 0x20
	// Line 819, Address: 0x1c1abc, Func Offset: 0x2c
	// Line 820, Address: 0x1c1ac8, Func Offset: 0x38
	// Line 822, Address: 0x1c1ad4, Func Offset: 0x44
	// Line 823, Address: 0x1c1adc, Func Offset: 0x4c
	// Line 833, Address: 0x1c1ae4, Func Offset: 0x54
	// Line 835, Address: 0x1c1af4, Func Offset: 0x64
	// Line 840, Address: 0x1c1b00, Func Offset: 0x70
	// Line 841, Address: 0x1c1b08, Func Offset: 0x78
	// Line 842, Address: 0x1c1b14, Func Offset: 0x84
	// Line 843, Address: 0x1c1b24, Func Offset: 0x94
	// Line 844, Address: 0x1c1b38, Func Offset: 0xa8
	// Line 847, Address: 0x1c1b44, Func Offset: 0xb4
	// Line 848, Address: 0x1c1b50, Func Offset: 0xc0
	// Line 849, Address: 0x1c1b58, Func Offset: 0xc8
	// Line 850, Address: 0x1c1b64, Func Offset: 0xd4
	// Line 851, Address: 0x1c1b70, Func Offset: 0xe0
	// Line 852, Address: 0x1c1b7c, Func Offset: 0xec
	// Line 853, Address: 0x1c1b88, Func Offset: 0xf8
	// Line 854, Address: 0x1c1b94, Func Offset: 0x104
	// Line 855, Address: 0x1c1ba0, Func Offset: 0x110
	// Line 856, Address: 0x1c1ba8, Func Offset: 0x118
	// Line 857, Address: 0x1c1bb0, Func Offset: 0x120
	// Line 859, Address: 0x1c1bb8, Func Offset: 0x128
	// Line 861, Address: 0x1c1bc0, Func Offset: 0x130
	// Line 862, Address: 0x1c1bc8, Func Offset: 0x138
	// Line 863, Address: 0x1c1bd0, Func Offset: 0x140
	// Line 864, Address: 0x1c1bdc, Func Offset: 0x14c
	// Line 865, Address: 0x1c1be8, Func Offset: 0x158
	// Line 866, Address: 0x1c1bf4, Func Offset: 0x164
	// Line 867, Address: 0x1c1c00, Func Offset: 0x170
	// Line 868, Address: 0x1c1c0c, Func Offset: 0x17c
	// Line 869, Address: 0x1c1c18, Func Offset: 0x188
	// Line 870, Address: 0x1c1c24, Func Offset: 0x194
	// Line 871, Address: 0x1c1c2c, Func Offset: 0x19c
	// Line 874, Address: 0x1c1c34, Func Offset: 0x1a4
	// Line 876, Address: 0x1c1c3c, Func Offset: 0x1ac
	// Line 877, Address: 0x1c1c48, Func Offset: 0x1b8
	// Line 878, Address: 0x1c1c50, Func Offset: 0x1c0
	// Line 879, Address: 0x1c1c5c, Func Offset: 0x1cc
	// Line 880, Address: 0x1c1c68, Func Offset: 0x1d8
	// Line 881, Address: 0x1c1c74, Func Offset: 0x1e4
	// Line 882, Address: 0x1c1c80, Func Offset: 0x1f0
	// Line 883, Address: 0x1c1c8c, Func Offset: 0x1fc
	// Line 884, Address: 0x1c1c98, Func Offset: 0x208
	// Line 885, Address: 0x1c1ca0, Func Offset: 0x210
	// Line 888, Address: 0x1c1ca8, Func Offset: 0x218
	// Line 890, Address: 0x1c1cb0, Func Offset: 0x220
	// Line 891, Address: 0x1c1cbc, Func Offset: 0x22c
	// Line 892, Address: 0x1c1cc4, Func Offset: 0x234
	// Line 893, Address: 0x1c1cd0, Func Offset: 0x240
	// Line 894, Address: 0x1c1cdc, Func Offset: 0x24c
	// Line 895, Address: 0x1c1ce8, Func Offset: 0x258
	// Line 896, Address: 0x1c1cf4, Func Offset: 0x264
	// Line 897, Address: 0x1c1d00, Func Offset: 0x270
	// Line 898, Address: 0x1c1d0c, Func Offset: 0x27c
	// Line 900, Address: 0x1c1d14, Func Offset: 0x284
	// Line 902, Address: 0x1c1d1c, Func Offset: 0x28c
	// Line 903, Address: 0x1c1d2c, Func Offset: 0x29c
	// Line 904, Address: 0x1c1d40, Func Offset: 0x2b0
	// Line 907, Address: 0x1c1d4c, Func Offset: 0x2bc
	// Line 908, Address: 0x1c1d58, Func Offset: 0x2c8
	// Line 909, Address: 0x1c1d60, Func Offset: 0x2d0
	// Line 910, Address: 0x1c1d6c, Func Offset: 0x2dc
	// Line 911, Address: 0x1c1d78, Func Offset: 0x2e8
	// Line 912, Address: 0x1c1d80, Func Offset: 0x2f0
	// Line 914, Address: 0x1c1d88, Func Offset: 0x2f8
	// Line 916, Address: 0x1c1d90, Func Offset: 0x300
	// Line 917, Address: 0x1c1d98, Func Offset: 0x308
	// Line 918, Address: 0x1c1da0, Func Offset: 0x310
	// Line 919, Address: 0x1c1dac, Func Offset: 0x31c
	// Line 920, Address: 0x1c1db8, Func Offset: 0x328
	// Line 921, Address: 0x1c1dc0, Func Offset: 0x330
	// Line 924, Address: 0x1c1dc8, Func Offset: 0x338
	// Line 926, Address: 0x1c1dd0, Func Offset: 0x340
	// Line 927, Address: 0x1c1ddc, Func Offset: 0x34c
	// Line 928, Address: 0x1c1de4, Func Offset: 0x354
	// Line 929, Address: 0x1c1df0, Func Offset: 0x360
	// Line 930, Address: 0x1c1dfc, Func Offset: 0x36c
	// Line 933, Address: 0x1c1e04, Func Offset: 0x374
	// Line 935, Address: 0x1c1e0c, Func Offset: 0x37c
	// Line 936, Address: 0x1c1e18, Func Offset: 0x388
	// Line 937, Address: 0x1c1e20, Func Offset: 0x390
	// Line 938, Address: 0x1c1e2c, Func Offset: 0x39c
	// Line 942, Address: 0x1c1e38, Func Offset: 0x3a8
	// Func End, Address: 0x1c1e40, Func Offset: 0x3b0
}

// 
// Start address: 0x1c1e40
void titleMainSelect()
{
	int select_load;
	int select_option;
	int select_game_start;
	int pad_ret;
	// Line 959, Address: 0x1c1e40, Func Offset: 0
	// Line 962, Address: 0x1c1e48, Func Offset: 0x8
	// Line 963, Address: 0x1c1e50, Func Offset: 0x10
	// Line 964, Address: 0x1c1e58, Func Offset: 0x18
	// Line 977, Address: 0x1c1e60, Func Offset: 0x20
	// Line 978, Address: 0x1c1e68, Func Offset: 0x28
	// Line 985, Address: 0x1c1e9c, Func Offset: 0x5c
	// Line 986, Address: 0x1c1ea8, Func Offset: 0x68
	// Line 993, Address: 0x1c1ec0, Func Offset: 0x80
	// Line 996, Address: 0x1c1ec8, Func Offset: 0x88
	// Line 999, Address: 0x1c1ed0, Func Offset: 0x90
	// Line 1002, Address: 0x1c1edc, Func Offset: 0x9c
	// Line 1005, Address: 0x1c1ee4, Func Offset: 0xa4
	// Line 1007, Address: 0x1c1eec, Func Offset: 0xac
	// Line 1009, Address: 0x1c1efc, Func Offset: 0xbc
	// Line 1011, Address: 0x1c1f10, Func Offset: 0xd0
	// Line 1014, Address: 0x1c1f1c, Func Offset: 0xdc
	// Line 1015, Address: 0x1c1f28, Func Offset: 0xe8
	// Line 1017, Address: 0x1c1f30, Func Offset: 0xf0
	// Line 1018, Address: 0x1c1f48, Func Offset: 0x108
	// Line 1019, Address: 0x1c1f7c, Func Offset: 0x13c
	// Line 1024, Address: 0x1c1f84, Func Offset: 0x144
	// Line 1025, Address: 0x1c1f90, Func Offset: 0x150
	// Line 1026, Address: 0x1c1fac, Func Offset: 0x16c
	// Line 1027, Address: 0x1c1fb4, Func Offset: 0x174
	// Line 1028, Address: 0x1c1fbc, Func Offset: 0x17c
	// Line 1030, Address: 0x1c1fc4, Func Offset: 0x184
	// Line 1031, Address: 0x1c1fd4, Func Offset: 0x194
	// Line 1032, Address: 0x1c1fdc, Func Offset: 0x19c
	// Line 1035, Address: 0x1c1fe4, Func Offset: 0x1a4
	// Line 1036, Address: 0x1c1fec, Func Offset: 0x1ac
	// Line 1038, Address: 0x1c1ff8, Func Offset: 0x1b8
	// Line 1041, Address: 0x1c200c, Func Offset: 0x1cc
	// Line 1042, Address: 0x1c2018, Func Offset: 0x1d8
	// Line 1043, Address: 0x1c2024, Func Offset: 0x1e4
	// Line 1044, Address: 0x1c2030, Func Offset: 0x1f0
	// Line 1048, Address: 0x1c203c, Func Offset: 0x1fc
	// Line 1050, Address: 0x1c2044, Func Offset: 0x204
	// Line 1051, Address: 0x1c204c, Func Offset: 0x20c
	// Line 1052, Address: 0x1c2054, Func Offset: 0x214
	// Line 1053, Address: 0x1c205c, Func Offset: 0x21c
	// Line 1054, Address: 0x1c2064, Func Offset: 0x224
	// Line 1056, Address: 0x1c206c, Func Offset: 0x22c
	// Line 1058, Address: 0x1c2084, Func Offset: 0x244
	// Line 1059, Address: 0x1c208c, Func Offset: 0x24c
	// Line 1060, Address: 0x1c2098, Func Offset: 0x258
	// Line 1061, Address: 0x1c20b0, Func Offset: 0x270
	// Line 1062, Address: 0x1c20ec, Func Offset: 0x2ac
	// Line 1064, Address: 0x1c20f4, Func Offset: 0x2b4
	// Line 1065, Address: 0x1c2104, Func Offset: 0x2c4
	// Line 1066, Address: 0x1c211c, Func Offset: 0x2dc
	// Line 1068, Address: 0x1c2124, Func Offset: 0x2e4
	// Line 1070, Address: 0x1c213c, Func Offset: 0x2fc
	// Line 1074, Address: 0x1c2170, Func Offset: 0x330
	// Line 1080, Address: 0x1c2178, Func Offset: 0x338
	// Line 1110, Address: 0x1c219c, Func Offset: 0x35c
	// Line 1111, Address: 0x1c21b8, Func Offset: 0x378
	// Line 1113, Address: 0x1c21d0, Func Offset: 0x390
	// Line 1118, Address: 0x1c2204, Func Offset: 0x3c4
	// Line 1119, Address: 0x1c2228, Func Offset: 0x3e8
	// Line 1120, Address: 0x1c2260, Func Offset: 0x420
	// Func End, Address: 0x1c2270, Func Offset: 0x430
}

// 
// Start address: 0x1c2270
int titleCheckPad()
{
	int an;
	int ret;
	// Line 1143, Address: 0x1c2270, Func Offset: 0
	// Line 1144, Address: 0x1c2280, Func Offset: 0x10
	// Line 1146, Address: 0x1c2284, Func Offset: 0x14
	// Line 1147, Address: 0x1c2294, Func Offset: 0x24
	// Line 1149, Address: 0x1c22ac, Func Offset: 0x3c
	// Line 1150, Address: 0x1c22b4, Func Offset: 0x44
	// Line 1151, Address: 0x1c22bc, Func Offset: 0x4c
	// Line 1153, Address: 0x1c22c8, Func Offset: 0x58
	// Line 1155, Address: 0x1c22e4, Func Offset: 0x74
	// Line 1156, Address: 0x1c22f4, Func Offset: 0x84
	// Line 1159, Address: 0x1c22fc, Func Offset: 0x8c
	// Line 1161, Address: 0x1c2344, Func Offset: 0xd4
	// Line 1164, Address: 0x1c234c, Func Offset: 0xdc
	// Line 1166, Address: 0x1c2368, Func Offset: 0xf8
	// Line 1167, Address: 0x1c2378, Func Offset: 0x108
	// Line 1170, Address: 0x1c2380, Func Offset: 0x110
	// Line 1175, Address: 0x1c23c4, Func Offset: 0x154
	// Line 1177, Address: 0x1c2418, Func Offset: 0x1a8
	// Line 1179, Address: 0x1c2458, Func Offset: 0x1e8
	// Line 1180, Address: 0x1c2480, Func Offset: 0x210
	// Line 1181, Address: 0x1c248c, Func Offset: 0x21c
	// Line 1185, Address: 0x1c2494, Func Offset: 0x224
	// Line 1186, Address: 0x1c24a0, Func Offset: 0x230
	// Line 1187, Address: 0x1c24a8, Func Offset: 0x238
	// Line 1188, Address: 0x1c24bc, Func Offset: 0x24c
	// Line 1191, Address: 0x1c24e8, Func Offset: 0x278
	// Line 1192, Address: 0x1c24ec, Func Offset: 0x27c
	// Line 1194, Address: 0x1c24f4, Func Offset: 0x284
	// Line 1196, Address: 0x1c2548, Func Offset: 0x2d8
	// Line 1198, Address: 0x1c2588, Func Offset: 0x318
	// Line 1199, Address: 0x1c25b0, Func Offset: 0x340
	// Line 1200, Address: 0x1c25bc, Func Offset: 0x34c
	// Line 1204, Address: 0x1c25c4, Func Offset: 0x354
	// Line 1205, Address: 0x1c25cc, Func Offset: 0x35c
	// Line 1206, Address: 0x1c25d4, Func Offset: 0x364
	// Line 1207, Address: 0x1c25e8, Func Offset: 0x378
	// Line 1210, Address: 0x1c2610, Func Offset: 0x3a0
	// Line 1212, Address: 0x1c2614, Func Offset: 0x3a4
	// Line 1214, Address: 0x1c261c, Func Offset: 0x3ac
	// Line 1215, Address: 0x1c2650, Func Offset: 0x3e0
	// Line 1216, Address: 0x1c2654, Func Offset: 0x3e4
	// Line 1218, Address: 0x1c265c, Func Offset: 0x3ec
	// Line 1219, Address: 0x1c2678, Func Offset: 0x408
	// Line 1239, Address: 0x1c267c, Func Offset: 0x40c
	// Line 1240, Address: 0x1c2680, Func Offset: 0x410
	// Func End, Address: 0x1c2698, Func Offset: 0x428
}

// 
// Start address: 0x1c26a0
int titleGetCursorFromBattleLevel(unsigned char battle_level)
{
	int ret;
	// Line 1258, Address: 0x1c26a0, Func Offset: 0
	// Line 1261, Address: 0x1c26a8, Func Offset: 0x8
	// Line 1264, Address: 0x1c26d8, Func Offset: 0x38
	// Line 1266, Address: 0x1c26e0, Func Offset: 0x40
	// Line 1267, Address: 0x1c26e4, Func Offset: 0x44
	// Line 1269, Address: 0x1c26ec, Func Offset: 0x4c
	// Line 1270, Address: 0x1c26f0, Func Offset: 0x50
	// Line 1279, Address: 0x1c26f8, Func Offset: 0x58
	// Line 1283, Address: 0x1c271c, Func Offset: 0x7c
	// Func End, Address: 0x1c272c, Func Offset: 0x8c
}

// 
// Start address: 0x1c2730
void titleBattleSelect()
{
	int pad_ret;
	// Line 1300, Address: 0x1c2730, Func Offset: 0
	// Line 1303, Address: 0x1c2738, Func Offset: 0x8
	// Line 1304, Address: 0x1c2740, Func Offset: 0x10
	// Line 1306, Address: 0x1c274c, Func Offset: 0x1c
	// Line 1311, Address: 0x1c2768, Func Offset: 0x38
	// Line 1312, Address: 0x1c2770, Func Offset: 0x40
	// Line 1319, Address: 0x1c27a4, Func Offset: 0x74
	// Line 1320, Address: 0x1c27b0, Func Offset: 0x80
	// Line 1327, Address: 0x1c27c8, Func Offset: 0x98
	// Line 1330, Address: 0x1c27d0, Func Offset: 0xa0
	// Line 1334, Address: 0x1c27d8, Func Offset: 0xa8
	// Line 1338, Address: 0x1c27e0, Func Offset: 0xb0
	// Line 1341, Address: 0x1c27e8, Func Offset: 0xb8
	// Line 1344, Address: 0x1c2800, Func Offset: 0xd0
	// Line 1346, Address: 0x1c280c, Func Offset: 0xdc
	// Line 1348, Address: 0x1c2824, Func Offset: 0xf4
	// Line 1349, Address: 0x1c282c, Func Offset: 0xfc
	// Line 1351, Address: 0x1c2844, Func Offset: 0x114
	// Line 1352, Address: 0x1c2880, Func Offset: 0x150
	// Line 1356, Address: 0x1c2888, Func Offset: 0x158
	// Line 1360, Address: 0x1c2890, Func Offset: 0x160
	// Line 1363, Address: 0x1c2898, Func Offset: 0x168
	// Line 1365, Address: 0x1c28b0, Func Offset: 0x180
	// Line 1366, Address: 0x1c28b8, Func Offset: 0x188
	// Line 1368, Address: 0x1c28c0, Func Offset: 0x190
	// Line 1372, Address: 0x1c28e4, Func Offset: 0x1b4
	// Line 1375, Address: 0x1c2904, Func Offset: 0x1d4
	// Line 1379, Address: 0x1c290c, Func Offset: 0x1dc
	// Line 1382, Address: 0x1c2914, Func Offset: 0x1e4
	// Line 1384, Address: 0x1c292c, Func Offset: 0x1fc
	// Line 1387, Address: 0x1c2934, Func Offset: 0x204
	// Line 1388, Address: 0x1c2958, Func Offset: 0x228
	// Line 1389, Address: 0x1c2990, Func Offset: 0x260
	// Func End, Address: 0x1c29a0, Func Offset: 0x270
}

// 
// Start address: 0x1c29a0
void titleBacktoMainMenuFromLevelMenu()
{
	// Line 1406, Address: 0x1c29a0, Func Offset: 0
	// Line 1407, Address: 0x1c29a8, Func Offset: 0x8
	// Line 1408, Address: 0x1c29b8, Func Offset: 0x18
	// Line 1410, Address: 0x1c29c0, Func Offset: 0x20
	// Line 1411, Address: 0x1c29cc, Func Offset: 0x2c
	// Line 1412, Address: 0x1c29d8, Func Offset: 0x38
	// Line 1413, Address: 0x1c29f0, Func Offset: 0x50
	// Line 1414, Address: 0x1c2a24, Func Offset: 0x84
	// Func End, Address: 0x1c2a34, Func Offset: 0x94
}

// 
// Start address: 0x1c2a40
unsigned char titleGetBattleLevelFromCursor(int cur)
{
	unsigned char ret;
	// Line 1431, Address: 0x1c2a40, Func Offset: 0
	// Line 1434, Address: 0x1c2a48, Func Offset: 0x8
	// Line 1436, Address: 0x1c2a74, Func Offset: 0x34
	// Line 1437, Address: 0x1c2a78, Func Offset: 0x38
	// Line 1439, Address: 0x1c2a80, Func Offset: 0x40
	// Line 1440, Address: 0x1c2a84, Func Offset: 0x44
	// Line 1442, Address: 0x1c2a8c, Func Offset: 0x4c
	// Line 1443, Address: 0x1c2a90, Func Offset: 0x50
	// Line 1452, Address: 0x1c2a98, Func Offset: 0x58
	// Line 1456, Address: 0x1c2abc, Func Offset: 0x7c
	// Func End, Address: 0x1c2acc, Func Offset: 0x8c
}

// 
// Start address: 0x1c2ad0
int titleGetCursorFromRiddleLevel(unsigned char riddle_level)
{
	int ret;
	// Line 1473, Address: 0x1c2ad0, Func Offset: 0
	// Line 1476, Address: 0x1c2ad8, Func Offset: 0x8
	// Line 1479, Address: 0x1c2b04, Func Offset: 0x34
	// Line 1481, Address: 0x1c2b0c, Func Offset: 0x3c
	// Line 1482, Address: 0x1c2b10, Func Offset: 0x40
	// Line 1484, Address: 0x1c2b18, Func Offset: 0x48
	// Line 1485, Address: 0x1c2b1c, Func Offset: 0x4c
	// Line 1494, Address: 0x1c2b24, Func Offset: 0x54
	// Line 1498, Address: 0x1c2b4c, Func Offset: 0x7c
	// Func End, Address: 0x1c2b5c, Func Offset: 0x8c
}

// 
// Start address: 0x1c2b60
void titleRiddleSelect()
{
	int pad_ret;
	// Line 1515, Address: 0x1c2b60, Func Offset: 0
	// Line 1518, Address: 0x1c2b68, Func Offset: 0x8
	// Line 1519, Address: 0x1c2b70, Func Offset: 0x10
	// Line 1521, Address: 0x1c2b7c, Func Offset: 0x1c
	// Line 1526, Address: 0x1c2b98, Func Offset: 0x38
	// Line 1527, Address: 0x1c2ba0, Func Offset: 0x40
	// Line 1534, Address: 0x1c2bd4, Func Offset: 0x74
	// Line 1535, Address: 0x1c2be0, Func Offset: 0x80
	// Line 1542, Address: 0x1c2bf8, Func Offset: 0x98
	// Line 1545, Address: 0x1c2c00, Func Offset: 0xa0
	// Line 1549, Address: 0x1c2c08, Func Offset: 0xa8
	// Line 1553, Address: 0x1c2c10, Func Offset: 0xb0
	// Line 1555, Address: 0x1c2c18, Func Offset: 0xb8
	// Line 1557, Address: 0x1c2c30, Func Offset: 0xd0
	// Line 1558, Address: 0x1c2c38, Func Offset: 0xd8
	// Line 1559, Address: 0x1c2c44, Func Offset: 0xe4
	// Line 1560, Address: 0x1c2c5c, Func Offset: 0xfc
	// Line 1561, Address: 0x1c2c90, Func Offset: 0x130
	// Line 1565, Address: 0x1c2c98, Func Offset: 0x138
	// Line 1569, Address: 0x1c2ca0, Func Offset: 0x140
	// Line 1572, Address: 0x1c2ca8, Func Offset: 0x148
	// Line 1573, Address: 0x1c2cc0, Func Offset: 0x160
	// Line 1574, Address: 0x1c2cd8, Func Offset: 0x178
	// Line 1575, Address: 0x1c2ce0, Func Offset: 0x180
	// Line 1576, Address: 0x1c2cec, Func Offset: 0x18c
	// Line 1577, Address: 0x1c2d04, Func Offset: 0x1a4
	// Line 1578, Address: 0x1c2d40, Func Offset: 0x1e0
	// Line 1580, Address: 0x1c2d48, Func Offset: 0x1e8
	// Line 1584, Address: 0x1c2d6c, Func Offset: 0x20c
	// Line 1587, Address: 0x1c2d8c, Func Offset: 0x22c
	// Line 1591, Address: 0x1c2d94, Func Offset: 0x234
	// Line 1594, Address: 0x1c2d9c, Func Offset: 0x23c
	// Line 1596, Address: 0x1c2db4, Func Offset: 0x254
	// Line 1599, Address: 0x1c2dbc, Func Offset: 0x25c
	// Line 1600, Address: 0x1c2de0, Func Offset: 0x280
	// Line 1601, Address: 0x1c2e18, Func Offset: 0x2b8
	// Func End, Address: 0x1c2e28, Func Offset: 0x2c8
}

// 
// Start address: 0x1c2e30
unsigned char titleGetRiddleLevelFromCursor(int cur)
{
	unsigned char ret;
	// Line 1618, Address: 0x1c2e30, Func Offset: 0
	// Line 1621, Address: 0x1c2e38, Func Offset: 0x8
	// Line 1623, Address: 0x1c2e64, Func Offset: 0x34
	// Line 1624, Address: 0x1c2e68, Func Offset: 0x38
	// Line 1626, Address: 0x1c2e70, Func Offset: 0x40
	// Line 1627, Address: 0x1c2e74, Func Offset: 0x44
	// Line 1629, Address: 0x1c2e7c, Func Offset: 0x4c
	// Line 1630, Address: 0x1c2e80, Func Offset: 0x50
	// Line 1639, Address: 0x1c2e88, Func Offset: 0x58
	// Line 1643, Address: 0x1c2eac, Func Offset: 0x7c
	// Func End, Address: 0x1c2ebc, Func Offset: 0x8c
}

// 
// Start address: 0x1c2ec0
void titleFadeOutNewGame()
{
	// Line 1811, Address: 0x1c2ec0, Func Offset: 0
	// Line 1812, Address: 0x1c2ec8, Func Offset: 0x8
	// Line 1815, Address: 0x1c2ee0, Func Offset: 0x20
	// Line 1816, Address: 0x1c2ef4, Func Offset: 0x34
	// Line 1817, Address: 0x1c2f00, Func Offset: 0x40
	// Line 1819, Address: 0x1c2f08, Func Offset: 0x48
	// Line 1820, Address: 0x1c2f1c, Func Offset: 0x5c
	// Line 1823, Address: 0x1c2f24, Func Offset: 0x64
	// Line 1824, Address: 0x1c2f58, Func Offset: 0x98
	// Line 1827, Address: 0x1c2f60, Func Offset: 0xa0
	// Line 1828, Address: 0x1c2f70, Func Offset: 0xb0
	// Line 1830, Address: 0x1c2f80, Func Offset: 0xc0
	// Line 1831, Address: 0x1c2f90, Func Offset: 0xd0
	// Line 1832, Address: 0x1c2fa0, Func Offset: 0xe0
	// Line 1833, Address: 0x1c2fb0, Func Offset: 0xf0
	// Line 1834, Address: 0x1c2fc0, Func Offset: 0x100
	// Line 1835, Address: 0x1c2fd0, Func Offset: 0x110
	// Line 1836, Address: 0x1c2fd8, Func Offset: 0x118
	// Line 1838, Address: 0x1c2fe4, Func Offset: 0x124
	// Line 1839, Address: 0x1c3010, Func Offset: 0x150
	// Line 1840, Address: 0x1c3028, Func Offset: 0x168
	// Line 1841, Address: 0x1c3040, Func Offset: 0x180
	// Line 1842, Address: 0x1c3058, Func Offset: 0x198
	// Line 1845, Address: 0x1c3070, Func Offset: 0x1b0
	// Line 1846, Address: 0x1c307c, Func Offset: 0x1bc
	// Line 1850, Address: 0x1c3084, Func Offset: 0x1c4
	// Line 1852, Address: 0x1c3094, Func Offset: 0x1d4
	// Line 1854, Address: 0x1c309c, Func Offset: 0x1dc
	// Line 1855, Address: 0x1c30b0, Func Offset: 0x1f0
	// Line 1863, Address: 0x1c30b8, Func Offset: 0x1f8
	// Func End, Address: 0x1c30c8, Func Offset: 0x208
}

// 
// Start address: 0x1c30d0
void titleFadeOut()
{
	// Line 1880, Address: 0x1c30d0, Func Offset: 0
	// Line 1881, Address: 0x1c30d8, Func Offset: 0x8
	// Line 1884, Address: 0x1c30f0, Func Offset: 0x20
	// Line 1885, Address: 0x1c3104, Func Offset: 0x34
	// Line 1886, Address: 0x1c3110, Func Offset: 0x40
	// Line 1887, Address: 0x1c3148, Func Offset: 0x78
	// Line 1888, Address: 0x1c3150, Func Offset: 0x80
	// Line 1889, Address: 0x1c3158, Func Offset: 0x88
	// Line 1890, Address: 0x1c318c, Func Offset: 0xbc
	// Line 1893, Address: 0x1c3194, Func Offset: 0xc4
	// Line 1895, Address: 0x1c31a4, Func Offset: 0xd4
	// Line 1896, Address: 0x1c31b8, Func Offset: 0xe8
	// Line 1897, Address: 0x1c31e4, Func Offset: 0x114
	// Line 1898, Address: 0x1c31fc, Func Offset: 0x12c
	// Line 1899, Address: 0x1c3214, Func Offset: 0x144
	// Line 1900, Address: 0x1c322c, Func Offset: 0x15c
	// Line 1903, Address: 0x1c3244, Func Offset: 0x174
	// Line 1904, Address: 0x1c3268, Func Offset: 0x198
	// Line 1907, Address: 0x1c3270, Func Offset: 0x1a0
	// Line 1908, Address: 0x1c3294, Func Offset: 0x1c4
	// Line 1911, Address: 0x1c32cc, Func Offset: 0x1fc
	// Line 1914, Address: 0x1c32dc, Func Offset: 0x20c
	// Line 1915, Address: 0x1c32e4, Func Offset: 0x214
	// Line 1919, Address: 0x1c32ec, Func Offset: 0x21c
	// Func End, Address: 0x1c32fc, Func Offset: 0x22c
}

// 
// Start address: 0x1c3300
void titleExit()
{
	// Line 1936, Address: 0x1c3300, Func Offset: 0
	// Line 1937, Address: 0x1c3308, Func Offset: 0x8
	// Line 1940, Address: 0x1c3320, Func Offset: 0x20
	// Line 1941, Address: 0x1c3334, Func Offset: 0x34
	// Line 1942, Address: 0x1c3340, Func Offset: 0x40
	// Line 1943, Address: 0x1c3378, Func Offset: 0x78
	// Line 1944, Address: 0x1c3380, Func Offset: 0x80
	// Line 1945, Address: 0x1c3388, Func Offset: 0x88
	// Line 1946, Address: 0x1c33bc, Func Offset: 0xbc
	// Line 1949, Address: 0x1c33c4, Func Offset: 0xc4
	// Line 1950, Address: 0x1c33d4, Func Offset: 0xd4
	// Line 1952, Address: 0x1c33e0, Func Offset: 0xe0
	// Line 1953, Address: 0x1c3400, Func Offset: 0x100
	// Line 1954, Address: 0x1c340c, Func Offset: 0x10c
	// Line 1957, Address: 0x1c3414, Func Offset: 0x114
	// Line 1958, Address: 0x1c3438, Func Offset: 0x138
	// Line 1959, Address: 0x1c3470, Func Offset: 0x170
	// Line 1960, Address: 0x1c3478, Func Offset: 0x178
	// Line 1964, Address: 0x1c3480, Func Offset: 0x180
	// Func End, Address: 0x1c3490, Func Offset: 0x190
}

// 
// Start address: 0x1c3490
void titleDrawTitle()
{
	_anon0* chg_color_info;
	// Line 1981, Address: 0x1c3490, Func Offset: 0
	// Line 1983, Address: 0x1c3498, Func Offset: 0x8
	// Line 1987, Address: 0x1c34b4, Func Offset: 0x24
	// Line 1991, Address: 0x1c34c8, Func Offset: 0x38
	// Line 1992, Address: 0x1c3500, Func Offset: 0x70
	// Line 1994, Address: 0x1c350c, Func Offset: 0x7c
	// Line 1995, Address: 0x1c3550, Func Offset: 0xc0
	// Line 1997, Address: 0x1c3588, Func Offset: 0xf8
	// Line 2001, Address: 0x1c3598, Func Offset: 0x108
	// Line 2012, Address: 0x1c35b4, Func Offset: 0x124
	// Line 2013, Address: 0x1c35d0, Func Offset: 0x140
	// Line 2014, Address: 0x1c3608, Func Offset: 0x178
	// Line 2017, Address: 0x1c361c, Func Offset: 0x18c
	// Func End, Address: 0x1c362c, Func Offset: 0x19c
}

// 
// Start address: 0x1c3630
void titleDrawSprite(short x, short y, short id)
{
	// Line 2020, Address: 0x1c3630, Func Offset: 0
	// Line 2021, Address: 0x1c3650, Func Offset: 0x20
	// Line 2025, Address: 0x1c3664, Func Offset: 0x34
	// Line 2027, Address: 0x1c369c, Func Offset: 0x6c
	// Line 2028, Address: 0x1c3704, Func Offset: 0xd4
	// Line 2030, Address: 0x1c3760, Func Offset: 0x130
	// Line 2031, Address: 0x1c376c, Func Offset: 0x13c
	// Line 2032, Address: 0x1c3778, Func Offset: 0x148
	// Line 2034, Address: 0x1c3780, Func Offset: 0x150
	// Line 2036, Address: 0x1c378c, Func Offset: 0x15c
	// Line 2039, Address: 0x1c3808, Func Offset: 0x1d8
	// Line 2040, Address: 0x1c388c, Func Offset: 0x25c
	// Line 2041, Address: 0x1c389c, Func Offset: 0x26c
	// Func End, Address: 0x1c38b8, Func Offset: 0x288
}

// 
// Start address: 0x1c38c0
void titleDrawMainMenu()
{
	short w[7];
	short ef_pos[7];
	int j;
	int i;
	short cposy[8];
	short cpos[8];
	// Line 2058, Address: 0x1c38c0, Func Offset: 0
	// Line 2063, Address: 0x1c38d4, Func Offset: 0x14
	// Line 2064, Address: 0x1c38e8, Func Offset: 0x28
	// Line 2065, Address: 0x1c38f0, Func Offset: 0x30
	// Line 2066, Address: 0x1c38f8, Func Offset: 0x38
	// Line 2067, Address: 0x1c3900, Func Offset: 0x40
	// Line 2068, Address: 0x1c3908, Func Offset: 0x48
	// Line 2069, Address: 0x1c3910, Func Offset: 0x50
	// Line 2070, Address: 0x1c3918, Func Offset: 0x58
	// Line 2071, Address: 0x1c3920, Func Offset: 0x60
	// Line 2072, Address: 0x1c3928, Func Offset: 0x68
	// Line 2073, Address: 0x1c3930, Func Offset: 0x70
	// Line 2074, Address: 0x1c393c, Func Offset: 0x7c
	// Line 2075, Address: 0x1c3944, Func Offset: 0x84
	// Line 2076, Address: 0x1c394c, Func Offset: 0x8c
	// Line 2077, Address: 0x1c3954, Func Offset: 0x94
	// Line 2078, Address: 0x1c395c, Func Offset: 0x9c
	// Line 2079, Address: 0x1c3964, Func Offset: 0xa4
	// Line 2080, Address: 0x1c396c, Func Offset: 0xac
	// Line 2081, Address: 0x1c3974, Func Offset: 0xb4
	// Line 2082, Address: 0x1c397c, Func Offset: 0xbc
	// Line 2083, Address: 0x1c3984, Func Offset: 0xc4
	// Line 2084, Address: 0x1c398c, Func Offset: 0xcc
	// Line 2085, Address: 0x1c3994, Func Offset: 0xd4
	// Line 2086, Address: 0x1c399c, Func Offset: 0xdc
	// Line 2087, Address: 0x1c39a4, Func Offset: 0xe4
	// Line 2088, Address: 0x1c39ac, Func Offset: 0xec
	// Line 2089, Address: 0x1c39b4, Func Offset: 0xf4
	// Line 2090, Address: 0x1c39bc, Func Offset: 0xfc
	// Line 2092, Address: 0x1c39c4, Func Offset: 0x104
	// Line 2093, Address: 0x1c39cc, Func Offset: 0x10c
	// Line 2094, Address: 0x1c39d4, Func Offset: 0x114
	// Line 2095, Address: 0x1c39dc, Func Offset: 0x11c
	// Line 2096, Address: 0x1c39e4, Func Offset: 0x124
	// Line 2097, Address: 0x1c39ec, Func Offset: 0x12c
	// Line 2098, Address: 0x1c39f4, Func Offset: 0x134
	// Line 2099, Address: 0x1c39fc, Func Offset: 0x13c
	// Line 2129, Address: 0x1c3a04, Func Offset: 0x144
	// Line 2130, Address: 0x1c3a10, Func Offset: 0x150
	// Line 2131, Address: 0x1c3a18, Func Offset: 0x158
	// Line 2132, Address: 0x1c3a20, Func Offset: 0x160
	// Line 2133, Address: 0x1c3a28, Func Offset: 0x168
	// Line 2134, Address: 0x1c3a30, Func Offset: 0x170
	// Line 2135, Address: 0x1c3a38, Func Offset: 0x178
	// Line 2136, Address: 0x1c3a40, Func Offset: 0x180
	// Line 2137, Address: 0x1c3a48, Func Offset: 0x188
	// Line 2138, Address: 0x1c3a50, Func Offset: 0x190
	// Line 2139, Address: 0x1c3a58, Func Offset: 0x198
	// Line 2140, Address: 0x1c3a64, Func Offset: 0x1a4
	// Line 2141, Address: 0x1c3a6c, Func Offset: 0x1ac
	// Line 2142, Address: 0x1c3a74, Func Offset: 0x1b4
	// Line 2143, Address: 0x1c3a7c, Func Offset: 0x1bc
	// Line 2144, Address: 0x1c3a84, Func Offset: 0x1c4
	// Line 2145, Address: 0x1c3a8c, Func Offset: 0x1cc
	// Line 2146, Address: 0x1c3a94, Func Offset: 0x1d4
	// Line 2147, Address: 0x1c3a9c, Func Offset: 0x1dc
	// Line 2148, Address: 0x1c3aa4, Func Offset: 0x1e4
	// Line 2149, Address: 0x1c3aac, Func Offset: 0x1ec
	// Line 2150, Address: 0x1c3ab4, Func Offset: 0x1f4
	// Line 2151, Address: 0x1c3abc, Func Offset: 0x1fc
	// Line 2152, Address: 0x1c3ac4, Func Offset: 0x204
	// Line 2153, Address: 0x1c3acc, Func Offset: 0x20c
	// Line 2154, Address: 0x1c3ad4, Func Offset: 0x214
	// Line 2155, Address: 0x1c3adc, Func Offset: 0x21c
	// Line 2156, Address: 0x1c3ae4, Func Offset: 0x224
	// Line 2158, Address: 0x1c3aec, Func Offset: 0x22c
	// Line 2159, Address: 0x1c3af4, Func Offset: 0x234
	// Line 2160, Address: 0x1c3afc, Func Offset: 0x23c
	// Line 2161, Address: 0x1c3b04, Func Offset: 0x244
	// Line 2162, Address: 0x1c3b0c, Func Offset: 0x24c
	// Line 2163, Address: 0x1c3b14, Func Offset: 0x254
	// Line 2164, Address: 0x1c3b1c, Func Offset: 0x25c
	// Line 2165, Address: 0x1c3b24, Func Offset: 0x264
	// Line 2169, Address: 0x1c3b2c, Func Offset: 0x26c
	// Line 2170, Address: 0x1c3b38, Func Offset: 0x278
	// Line 2171, Address: 0x1c3b58, Func Offset: 0x298
	// Line 2177, Address: 0x1c3b8c, Func Offset: 0x2cc
	// Line 2180, Address: 0x1c3ba0, Func Offset: 0x2e0
	// Line 2182, Address: 0x1c3bb4, Func Offset: 0x2f4
	// Line 2183, Address: 0x1c3bc8, Func Offset: 0x308
	// Line 2187, Address: 0x1c3bdc, Func Offset: 0x31c
	// Line 2190, Address: 0x1c3bf0, Func Offset: 0x330
	// Line 2191, Address: 0x1c3c0c, Func Offset: 0x34c
	// Line 2192, Address: 0x1c3c14, Func Offset: 0x354
	// Line 2193, Address: 0x1c3c20, Func Offset: 0x360
	// Line 2194, Address: 0x1c3c2c, Func Offset: 0x36c
	// Line 2196, Address: 0x1c3c4c, Func Offset: 0x38c
	// Line 2199, Address: 0x1c3c50, Func Offset: 0x390
	// Line 2200, Address: 0x1c3c74, Func Offset: 0x3b4
	// Line 2202, Address: 0x1c3c8c, Func Offset: 0x3cc
	// Line 2203, Address: 0x1c3ca0, Func Offset: 0x3e0
	// Line 2204, Address: 0x1c3cb4, Func Offset: 0x3f4
	// Line 2205, Address: 0x1c3cc8, Func Offset: 0x408
	// Line 2206, Address: 0x1c3cdc, Func Offset: 0x41c
	// Line 2207, Address: 0x1c3cf0, Func Offset: 0x430
	// Line 2211, Address: 0x1c3d04, Func Offset: 0x444
	// Line 2214, Address: 0x1c3d18, Func Offset: 0x458
	// Line 2215, Address: 0x1c3d34, Func Offset: 0x474
	// Line 2218, Address: 0x1c3d3c, Func Offset: 0x47c
	// Line 2220, Address: 0x1c3d48, Func Offset: 0x488
	// Line 2222, Address: 0x1c3d68, Func Offset: 0x4a8
	// Line 2225, Address: 0x1c3d6c, Func Offset: 0x4ac
	// Line 2226, Address: 0x1c3d94, Func Offset: 0x4d4
	// Line 2231, Address: 0x1c3da8, Func Offset: 0x4e8
	// Line 2234, Address: 0x1c3db0, Func Offset: 0x4f0
	// Line 2236, Address: 0x1c3dcc, Func Offset: 0x50c
	// Line 2237, Address: 0x1c3de4, Func Offset: 0x524
	// Line 2239, Address: 0x1c3de8, Func Offset: 0x528
	// Func End, Address: 0x1c3e04, Func Offset: 0x544
}

// 
// Start address: 0x1c3e10
void titleDrawSubMenu(int sel)
{
	short x_pos;
	int i;
	short x_pos;
	short x_pos;
	// Line 2256, Address: 0x1c3e10, Func Offset: 0
	// Line 2268, Address: 0x1c3e20, Func Offset: 0x10
	// Line 2270, Address: 0x1c3e34, Func Offset: 0x24
	// Line 2273, Address: 0x1c3e48, Func Offset: 0x38
	// Line 2287, Address: 0x1c3e50, Func Offset: 0x40
	// Line 2289, Address: 0x1c3e64, Func Offset: 0x54
	// Line 2290, Address: 0x1c3e70, Func Offset: 0x60
	// Line 2291, Address: 0x1c3e8c, Func Offset: 0x7c
	// Line 2292, Address: 0x1c3ebc, Func Offset: 0xac
	// Line 2297, Address: 0x1c3ed0, Func Offset: 0xc0
	// Line 2298, Address: 0x1c3ee4, Func Offset: 0xd4
	// Line 2299, Address: 0x1c3ef8, Func Offset: 0xe8
	// Line 2310, Address: 0x1c3f0c, Func Offset: 0xfc
	// Line 2311, Address: 0x1c3f20, Func Offset: 0x110
	// Line 2312, Address: 0x1c3f34, Func Offset: 0x124
	// Line 2320, Address: 0x1c3f48, Func Offset: 0x138
	// Line 2323, Address: 0x1c3f58, Func Offset: 0x148
	// Line 2325, Address: 0x1c3f8c, Func Offset: 0x17c
	// Line 2327, Address: 0x1c3f94, Func Offset: 0x184
	// Line 2342, Address: 0x1c3fa0, Func Offset: 0x190
	// Line 2343, Address: 0x1c3fb4, Func Offset: 0x1a4
	// Line 2344, Address: 0x1c3fc0, Func Offset: 0x1b0
	// Line 2345, Address: 0x1c3fdc, Func Offset: 0x1cc
	// Line 2346, Address: 0x1c400c, Func Offset: 0x1fc
	// Line 2351, Address: 0x1c4020, Func Offset: 0x210
	// Line 2352, Address: 0x1c4034, Func Offset: 0x224
	// Line 2353, Address: 0x1c4048, Func Offset: 0x238
	// Line 2365, Address: 0x1c405c, Func Offset: 0x24c
	// Line 2375, Address: 0x1c4090, Func Offset: 0x280
	// Line 2376, Address: 0x1c40a4, Func Offset: 0x294
	// Line 2378, Address: 0x1c40ac, Func Offset: 0x29c
	// Line 2379, Address: 0x1c40c0, Func Offset: 0x2b0
	// Line 2381, Address: 0x1c40c8, Func Offset: 0x2b8
	// Line 2392, Address: 0x1c40dc, Func Offset: 0x2cc
	// Line 2393, Address: 0x1c40ec, Func Offset: 0x2dc
	// Line 2394, Address: 0x1c410c, Func Offset: 0x2fc
	// Line 2395, Address: 0x1c411c, Func Offset: 0x30c
	// Line 2396, Address: 0x1c4130, Func Offset: 0x320
	// Line 2397, Address: 0x1c4158, Func Offset: 0x348
	// Line 2398, Address: 0x1c4190, Func Offset: 0x380
	// Line 2404, Address: 0x1c41a4, Func Offset: 0x394
	// Line 2407, Address: 0x1c41b4, Func Offset: 0x3a4
	// Line 2409, Address: 0x1c41e8, Func Offset: 0x3d8
	// Line 2419, Address: 0x1c41f0, Func Offset: 0x3e0
	// Line 2429, Address: 0x1c4220, Func Offset: 0x410
	// Line 2430, Address: 0x1c4234, Func Offset: 0x424
	// Line 2432, Address: 0x1c423c, Func Offset: 0x42c
	// Line 2433, Address: 0x1c4250, Func Offset: 0x440
	// Line 2435, Address: 0x1c4258, Func Offset: 0x448
	// Line 2440, Address: 0x1c426c, Func Offset: 0x45c
	// Line 2450, Address: 0x1c429c, Func Offset: 0x48c
	// Line 2451, Address: 0x1c42b0, Func Offset: 0x4a0
	// Line 2453, Address: 0x1c42b8, Func Offset: 0x4a8
	// Line 2454, Address: 0x1c42cc, Func Offset: 0x4bc
	// Line 2456, Address: 0x1c42d4, Func Offset: 0x4c4
	// Line 2461, Address: 0x1c42e8, Func Offset: 0x4d8
	// Func End, Address: 0x1c42fc, Func Offset: 0x4ec
}

// 
// Start address: 0x1c4300
short titleGetCursorXPosBattle(int cur)
{
	short ret;
	// Line 2478, Address: 0x1c4300, Func Offset: 0
	// Line 2487, Address: 0x1c4308, Func Offset: 0x8
	// Line 2489, Address: 0x1c4334, Func Offset: 0x34
	// Line 2490, Address: 0x1c4338, Func Offset: 0x38
	// Line 2492, Address: 0x1c4340, Func Offset: 0x40
	// Line 2493, Address: 0x1c4344, Func Offset: 0x44
	// Line 2495, Address: 0x1c434c, Func Offset: 0x4c
	// Line 2496, Address: 0x1c4350, Func Offset: 0x50
	// Line 2505, Address: 0x1c4358, Func Offset: 0x58
	// Line 2509, Address: 0x1c437c, Func Offset: 0x7c
	// Func End, Address: 0x1c438c, Func Offset: 0x8c
}

// 
// Start address: 0x1c4390
void titleGetMenuEfctPosBattle(short* x_pos, short* w, int cur)
{
	// Line 2528, Address: 0x1c4390, Func Offset: 0
	// Line 2540, Address: 0x1c4398, Func Offset: 0x8
	// Line 2542, Address: 0x1c43c4, Func Offset: 0x34
	// Line 2543, Address: 0x1c43cc, Func Offset: 0x3c
	// Line 2544, Address: 0x1c43d4, Func Offset: 0x44
	// Line 2546, Address: 0x1c43dc, Func Offset: 0x4c
	// Line 2547, Address: 0x1c43e4, Func Offset: 0x54
	// Line 2548, Address: 0x1c43ec, Func Offset: 0x5c
	// Line 2550, Address: 0x1c43f4, Func Offset: 0x64
	// Line 2551, Address: 0x1c43fc, Func Offset: 0x6c
	// Line 2552, Address: 0x1c4404, Func Offset: 0x74
	// Line 2562, Address: 0x1c440c, Func Offset: 0x7c
	// Line 2564, Address: 0x1c4434, Func Offset: 0xa4
	// Func End, Address: 0x1c4444, Func Offset: 0xb4
}

// 
// Start address: 0x1c4450
short titleGetCursorXPosRiddle(int cur)
{
	short ret;
	// Line 2581, Address: 0x1c4450, Func Offset: 0
	// Line 2590, Address: 0x1c4458, Func Offset: 0x8
	// Line 2592, Address: 0x1c4484, Func Offset: 0x34
	// Line 2593, Address: 0x1c4488, Func Offset: 0x38
	// Line 2595, Address: 0x1c4490, Func Offset: 0x40
	// Line 2596, Address: 0x1c4494, Func Offset: 0x44
	// Line 2598, Address: 0x1c449c, Func Offset: 0x4c
	// Line 2599, Address: 0x1c44a0, Func Offset: 0x50
	// Line 2608, Address: 0x1c44a8, Func Offset: 0x58
	// Line 2612, Address: 0x1c44cc, Func Offset: 0x7c
	// Func End, Address: 0x1c44dc, Func Offset: 0x8c
}

// 
// Start address: 0x1c44e0
void titleGetMenuEfctPosRiddle(short* x_pos, short* w, int cur)
{
	// Line 2630, Address: 0x1c44e0, Func Offset: 0
	// Line 2642, Address: 0x1c44e8, Func Offset: 0x8
	// Line 2644, Address: 0x1c4514, Func Offset: 0x34
	// Line 2645, Address: 0x1c451c, Func Offset: 0x3c
	// Line 2646, Address: 0x1c4524, Func Offset: 0x44
	// Line 2648, Address: 0x1c452c, Func Offset: 0x4c
	// Line 2649, Address: 0x1c4534, Func Offset: 0x54
	// Line 2650, Address: 0x1c453c, Func Offset: 0x5c
	// Line 2652, Address: 0x1c4544, Func Offset: 0x64
	// Line 2653, Address: 0x1c454c, Func Offset: 0x6c
	// Line 2654, Address: 0x1c4554, Func Offset: 0x74
	// Line 2664, Address: 0x1c455c, Func Offset: 0x7c
	// Line 2666, Address: 0x1c4584, Func Offset: 0xa4
	// Func End, Address: 0x1c4594, Func Offset: 0xb4
}

// 
// Start address: 0x1c45a0
void titleChangeSpriteColor2(short id)
{
	_anon0* chg_color_info;
	// Line 2863, Address: 0x1c45a0, Func Offset: 0
	// Line 2866, Address: 0x1c45b0, Func Offset: 0x10
	// Line 2867, Address: 0x1c45d0, Func Offset: 0x30
	// Line 2868, Address: 0x1c45e4, Func Offset: 0x44
	// Line 2869, Address: 0x1c4618, Func Offset: 0x78
	// Func End, Address: 0x1c4630, Func Offset: 0x90
}

// 
// Start address: 0x1c4630
void titleChangeCursorSpriteColor()
{
	_anon0* chg_color_info;
	// Line 2887, Address: 0x1c4630, Func Offset: 0
	// Line 2891, Address: 0x1c463c, Func Offset: 0xc
	// Line 2892, Address: 0x1c4644, Func Offset: 0x14
	// Line 2893, Address: 0x1c4658, Func Offset: 0x28
	// Line 2894, Address: 0x1c4680, Func Offset: 0x50
	// Func End, Address: 0x1c4694, Func Offset: 0x64
}

// 
// Start address: 0x1c46a0
void titleRenewChangeColorManagement(float* timer, float cycle, int repeat)
{
	// Line 2934, Address: 0x1c46a0, Func Offset: 0
	// Line 2936, Address: 0x1c46b8, Func Offset: 0x18
	// Line 2938, Address: 0x1c46c4, Func Offset: 0x24
	// Line 2941, Address: 0x1c46d8, Func Offset: 0x38
	// Line 2944, Address: 0x1c46e8, Func Offset: 0x48
	// Line 2946, Address: 0x1c46f4, Func Offset: 0x54
	// Line 2949, Address: 0x1c46fc, Func Offset: 0x5c
	// Line 2951, Address: 0x1c4710, Func Offset: 0x70
	// Line 2955, Address: 0x1c4724, Func Offset: 0x84
	// Func End, Address: 0x1c473c, Func Offset: 0x9c
}

// 
// Start address: 0x1c4740
void titleChangeColor(int* rgba, int* start_rgba, int* end_rgba, float timer, float cycle_time, float cycle_sin)
{
	int i;
	float ratio;
	int diff_color[4];
	// Line 2977, Address: 0x1c4740, Func Offset: 0
	// Line 2983, Address: 0x1c476c, Func Offset: 0x2c
	// Line 2985, Address: 0x1c4794, Func Offset: 0x54
	// Line 2986, Address: 0x1c47a4, Func Offset: 0x64
	// Line 2987, Address: 0x1c47c4, Func Offset: 0x84
	// Line 2988, Address: 0x1c47f0, Func Offset: 0xb0
	// Line 2989, Address: 0x1c4804, Func Offset: 0xc4
	// Func End, Address: 0x1c482c, Func Offset: 0xec
}

// 
// Start address: 0x1c4830
int GameendMain()
{
	PicDraw_Data pic;
	float game_over_timer;
	// Line 3001, Address: 0x1c4830, Func Offset: 0
	// Line 3006, Address: 0x1c4838, Func Offset: 0x8
	// Line 3008, Address: 0x1c4874, Func Offset: 0x44
	// Line 3009, Address: 0x1c488c, Func Offset: 0x5c
	// Line 3011, Address: 0x1c48b8, Func Offset: 0x88
	// Line 3012, Address: 0x1c48e0, Func Offset: 0xb0
	// Line 3014, Address: 0x1c490c, Func Offset: 0xdc
	// Line 3015, Address: 0x1c4920, Func Offset: 0xf0
	// Line 3016, Address: 0x1c4928, Func Offset: 0xf8
	// Line 3018, Address: 0x1c4954, Func Offset: 0x124
	// Line 3020, Address: 0x1c4970, Func Offset: 0x140
	// Line 3022, Address: 0x1c4980, Func Offset: 0x150
	// Line 3023, Address: 0x1c49a4, Func Offset: 0x174
	// Line 3024, Address: 0x1c49ac, Func Offset: 0x17c
	// Line 3025, Address: 0x1c49b8, Func Offset: 0x188
	// Line 3026, Address: 0x1c49cc, Func Offset: 0x19c
	// Line 3027, Address: 0x1c49e8, Func Offset: 0x1b8
	// Line 3029, Address: 0x1c4a44, Func Offset: 0x214
	// Line 3032, Address: 0x1c4a50, Func Offset: 0x220
	// Line 3033, Address: 0x1c4a54, Func Offset: 0x224
	// Func End, Address: 0x1c4a64, Func Offset: 0x234
}

// 
// Start address: 0x1c4a70
void opd_work_init()
{
	int loop;
	// Line 3111, Address: 0x1c4a70, Func Offset: 0
	// Line 3114, Address: 0x1c4a78, Func Offset: 0x8
	// Line 3115, Address: 0x1c4a8c, Func Offset: 0x1c
	// Line 3117, Address: 0x1c4aa0, Func Offset: 0x30
	// Line 3119, Address: 0x1c4aac, Func Offset: 0x3c
	// Line 3120, Address: 0x1c4ad0, Func Offset: 0x60
	// Line 3121, Address: 0x1c4ae4, Func Offset: 0x74
	// Line 3122, Address: 0x1c4b10, Func Offset: 0xa0
	// Line 3124, Address: 0x1c4b30, Func Offset: 0xc0
	// Line 3125, Address: 0x1c4b44, Func Offset: 0xd4
	// Line 3126, Address: 0x1c4b58, Func Offset: 0xe8
	// Line 3127, Address: 0x1c4b6c, Func Offset: 0xfc
	// Line 3129, Address: 0x1c4b84, Func Offset: 0x114
	// Line 3130, Address: 0x1c4bb4, Func Offset: 0x144
	// Line 3131, Address: 0x1c4be4, Func Offset: 0x174
	// Line 3133, Address: 0x1c4bf4, Func Offset: 0x184
	// Line 3134, Address: 0x1c4bfc, Func Offset: 0x18c
	// Line 3135, Address: 0x1c4c08, Func Offset: 0x198
	// Line 3136, Address: 0x1c4c10, Func Offset: 0x1a0
	// Line 3137, Address: 0x1c4c1c, Func Offset: 0x1ac
	// Line 3138, Address: 0x1c4c28, Func Offset: 0x1b8
	// Line 3139, Address: 0x1c4c34, Func Offset: 0x1c4
	// Line 3140, Address: 0x1c4c40, Func Offset: 0x1d0
	// Line 3144, Address: 0x1c4c5c, Func Offset: 0x1ec
	// Func End, Address: 0x1c4c6c, Func Offset: 0x1fc
}

// 
// Start address: 0x1c4c70
int GameoverMain()
{
	int fid;
	float game_over_timer;
	// Line 3147, Address: 0x1c4c70, Func Offset: 0
	// Line 3152, Address: 0x1c4c78, Func Offset: 0x8
	// Line 3154, Address: 0x1c4cb4, Func Offset: 0x44
	// Line 3156, Address: 0x1c4cbc, Func Offset: 0x4c
	// Line 3158, Address: 0x1c4ce0, Func Offset: 0x70
	// Line 3159, Address: 0x1c4ce8, Func Offset: 0x78
	// Line 3160, Address: 0x1c4d0c, Func Offset: 0x9c
	// Line 3161, Address: 0x1c4d14, Func Offset: 0xa4
	// Line 3163, Address: 0x1c4d34, Func Offset: 0xc4
	// Line 3164, Address: 0x1c4d60, Func Offset: 0xf0
	// Line 3165, Address: 0x1c4d68, Func Offset: 0xf8
	// Line 3167, Address: 0x1c4d78, Func Offset: 0x108
	// Line 3169, Address: 0x1c4d88, Func Offset: 0x118
	// Line 3171, Address: 0x1c4db4, Func Offset: 0x144
	// Line 3174, Address: 0x1c4dbc, Func Offset: 0x14c
	// Line 3200, Address: 0x1c4dc8, Func Offset: 0x158
	// Line 3201, Address: 0x1c4dcc, Func Offset: 0x15c
	// Func End, Address: 0x1c4ddc, Func Offset: 0x16c
}

// 
// Start address: 0x1c4de0
int draw_opd_wowk_main()
{
	int rnd;
	int loop;
	PicDraw_Data pic;
	// Line 3203, Address: 0x1c4de0, Func Offset: 0
	// Line 3209, Address: 0x1c4dec, Func Offset: 0xc
	// Line 3212, Address: 0x1c4e34, Func Offset: 0x54
	// Line 3213, Address: 0x1c4e48, Func Offset: 0x68
	// Line 3215, Address: 0x1c4e5c, Func Offset: 0x7c
	// Line 3216, Address: 0x1c4e70, Func Offset: 0x90
	// Line 3218, Address: 0x1c4e78, Func Offset: 0x98
	// Line 3220, Address: 0x1c4e80, Func Offset: 0xa0
	// Line 3221, Address: 0x1c4e94, Func Offset: 0xb4
	// Line 3223, Address: 0x1c4ea8, Func Offset: 0xc8
	// Line 3225, Address: 0x1c4ebc, Func Offset: 0xdc
	// Line 3227, Address: 0x1c4ec4, Func Offset: 0xe4
	// Line 3228, Address: 0x1c4ed8, Func Offset: 0xf8
	// Line 3230, Address: 0x1c4eec, Func Offset: 0x10c
	// Line 3231, Address: 0x1c4f00, Func Offset: 0x120
	// Line 3233, Address: 0x1c4f08, Func Offset: 0x128
	// Line 3235, Address: 0x1c4f10, Func Offset: 0x130
	// Line 3236, Address: 0x1c4f24, Func Offset: 0x144
	// Line 3238, Address: 0x1c4f34, Func Offset: 0x154
	// Line 3240, Address: 0x1c4f48, Func Offset: 0x168
	// Line 3242, Address: 0x1c4f50, Func Offset: 0x170
	// Line 3246, Address: 0x1c4f5c, Func Offset: 0x17c
	// Line 3248, Address: 0x1c4f7c, Func Offset: 0x19c
	// Line 3250, Address: 0x1c4f8c, Func Offset: 0x1ac
	// Line 3251, Address: 0x1c4fb0, Func Offset: 0x1d0
	// Line 3252, Address: 0x1c4fb8, Func Offset: 0x1d8
	// Line 3256, Address: 0x1c4fe0, Func Offset: 0x200
	// Line 3258, Address: 0x1c4fec, Func Offset: 0x20c
	// Line 3260, Address: 0x1c500c, Func Offset: 0x22c
	// Line 3261, Address: 0x1c5020, Func Offset: 0x240
	// Line 3264, Address: 0x1c5040, Func Offset: 0x260
	// Line 3267, Address: 0x1c50f0, Func Offset: 0x310
	// Line 3268, Address: 0x1c51a8, Func Offset: 0x3c8
	// Line 3269, Address: 0x1c51b4, Func Offset: 0x3d4
	// Line 3272, Address: 0x1c51c4, Func Offset: 0x3e4
	// Line 3275, Address: 0x1c51e4, Func Offset: 0x404
	// Line 3278, Address: 0x1c5260, Func Offset: 0x480
	// Line 3279, Address: 0x1c52dc, Func Offset: 0x4fc
	// Line 3280, Address: 0x1c52e8, Func Offset: 0x508
	// Line 3282, Address: 0x1c52fc, Func Offset: 0x51c
	// Line 3283, Address: 0x1c5300, Func Offset: 0x520
	// Func End, Address: 0x1c5314, Func Offset: 0x534
}

