typedef struct fsCdFile;
typedef struct shAttackInfo;
typedef struct Model_List;
typedef struct fsMgcFile;
typedef struct sh2gfw_AREA_HEAD;
typedef union _anon0;
typedef union fsFile;
typedef struct _anon1;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct _anon2;
typedef struct _anon3;
typedef struct Item;
typedef struct fsMgpFile;
typedef struct _anon4;
typedef struct _SH2_SYS;
typedef struct _anon5;
typedef struct _anon6;
typedef struct PicDraw_Data;
typedef struct _anon7;
typedef union fsFileIndex;
typedef struct _anon8;
typedef struct _anon9;
typedef struct JumpMenu_List;
typedef struct Playing_Info;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct Pad_KeyConfig;

typedef void(*type_4)();
typedef int(*type_7)();

typedef float type_0[4];
typedef unsigned char type_1[10];
typedef unsigned int type_2[256];
typedef unsigned int type_3[32];
typedef unsigned char type_5[4];
typedef char type_6[4];
typedef unsigned int type_8[2];
typedef char type_9[4];
typedef char type_10[0];
typedef unsigned short type_11[11];
typedef unsigned char type_12[13];
typedef unsigned char type_13[4];
typedef unsigned int type_14[8];
typedef unsigned short type_15[3];
typedef unsigned char type_16[34];
typedef char type_17[64];
typedef _anon9 type_18[40];
typedef int type_19[4];
typedef char type_20[128];
typedef unsigned char type_21[10];
typedef unsigned char type_22[3];
typedef shAttackInfo type_23[46];
typedef JumpMenu_List type_24[32];
typedef int type_25[4];

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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

union fsFile
{
	_anon6 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _anon1
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
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

struct _anon2
{
	unsigned int flag[256];
	unsigned int enemy[32];
	unsigned char safe[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	unsigned short hanging;
	unsigned char trunk[4];
};

struct _anon3
{
	_anon4* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon5* gi_list;
	Model_List* mdl_list;
	_anon1* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
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

struct _anon4
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _anon5
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _anon6
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

struct _anon7
{
	int x;
	int z;
	int flg;
	int trg;
	int glb_crd;
};

union fsFileIndex
{
	_anon8 index;
	unsigned long pack;
};

struct _anon8
{
	fsFile* fp;
	char* name;
};

struct _anon9
{
	char string[64];
	fsFileIndex* file_id;
};

struct JumpMenu_List
{
	char string[128];
	float pos_x;
	float pos_y;
	float pos_z;
	float rot;
	int stg;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char memo_select;
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
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_anon7 user_data;
JumpMenu_List list[32];
int jump_menu_select;
_SH2_SYS Sh2sys;
_anon3* stage;
Playing_Info playing;
float connect_pos[4];
_anon2 game_flag;
Item item;
_anon9 pic_test_list[40];
Pad_KeyConfig key_config;
char pic_buf_0[0];

void JumpMenuPosNormal();
int dbIsMapSingle();
void JumpMenuMain();
void CheckModeJumpDataSet();

// 
// Start address: 0x212570
void JumpMenuPosNormal()
{
	// Line 178, Address: 0x212570, Func Offset: 0
	// Line 179, Address: 0x212578, Func Offset: 0x8
	// Line 180, Address: 0x212588, Func Offset: 0x18
	// Line 181, Address: 0x212590, Func Offset: 0x20
	// Line 183, Address: 0x212598, Func Offset: 0x28
	// Func End, Address: 0x2125a8, Func Offset: 0x38
}

// 
// Start address: 0x2125b0
int dbIsMapSingle()
{
	// Line 245, Address: 0x2125b0, Func Offset: 0
	// Line 246, Address: 0x2125c0, Func Offset: 0x10
	// Func End, Address: 0x2125c8, Func Offset: 0x18
}

// 
// Start address: 0x2125d0
void JumpMenuMain()
{
	// Line 249, Address: 0x2125d0, Func Offset: 0
	// Line 290, Address: 0x2125d8, Func Offset: 0x8
	// Line 291, Address: 0x21260c, Func Offset: 0x3c
	// Line 292, Address: 0x212640, Func Offset: 0x70
	// Line 293, Address: 0x212674, Func Offset: 0xa4
	// Line 294, Address: 0x2126a8, Func Offset: 0xd8
	// Line 295, Address: 0x2126e0, Func Offset: 0x110
	// Line 296, Address: 0x2126e8, Func Offset: 0x118
	// Line 297, Address: 0x2126fc, Func Offset: 0x12c
	// Line 298, Address: 0x212710, Func Offset: 0x140
	// Line 299, Address: 0x21271c, Func Offset: 0x14c
	// Line 300, Address: 0x212724, Func Offset: 0x154
	// Line 303, Address: 0x21272c, Func Offset: 0x15c
	// Line 304, Address: 0x212788, Func Offset: 0x1b8
	// Line 305, Address: 0x21279c, Func Offset: 0x1cc
	// Line 306, Address: 0x2127e0, Func Offset: 0x210
	// Line 307, Address: 0x2127f4, Func Offset: 0x224
	// Line 308, Address: 0x212838, Func Offset: 0x268
	// Line 325, Address: 0x212874, Func Offset: 0x2a4
	// Func End, Address: 0x212884, Func Offset: 0x2b4
}

// 
// Start address: 0x212890
void CheckModeJumpDataSet()
{
	int i;
	float dummy[4];
	// Line 332, Address: 0x212890, Func Offset: 0
	// Line 333, Address: 0x21289c, Func Offset: 0xc
	// Line 336, Address: 0x2128b0, Func Offset: 0x20
	// Line 337, Address: 0x2128bc, Func Offset: 0x2c
	// Line 341, Address: 0x212908, Func Offset: 0x78
	// Line 342, Address: 0x212914, Func Offset: 0x84
	// Line 343, Address: 0x212940, Func Offset: 0xb0
	// Line 344, Address: 0x21294c, Func Offset: 0xbc
	// Line 345, Address: 0x212978, Func Offset: 0xe8
	// Line 346, Address: 0x212984, Func Offset: 0xf4
	// Line 347, Address: 0x2129b0, Func Offset: 0x120
	// Line 348, Address: 0x2129bc, Func Offset: 0x12c
	// Line 349, Address: 0x2129c8, Func Offset: 0x138
	// Line 350, Address: 0x2129d4, Func Offset: 0x144
	// Line 351, Address: 0x2129e0, Func Offset: 0x150
	// Line 352, Address: 0x2129ec, Func Offset: 0x15c
	// Line 353, Address: 0x212a18, Func Offset: 0x188
	// Line 354, Address: 0x212a48, Func Offset: 0x1b8
	// Line 355, Address: 0x212a54, Func Offset: 0x1c4
	// Line 356, Address: 0x212a60, Func Offset: 0x1d0
	// Line 357, Address: 0x212a6c, Func Offset: 0x1dc
	// Line 358, Address: 0x212a78, Func Offset: 0x1e8
	// Line 359, Address: 0x212a84, Func Offset: 0x1f4
	// Line 360, Address: 0x212a90, Func Offset: 0x200
	// Line 361, Address: 0x212aac, Func Offset: 0x21c
	// Line 363, Address: 0x212ab8, Func Offset: 0x228
	// Line 365, Address: 0x212b40, Func Offset: 0x2b0
	// Line 366, Address: 0x212b4c, Func Offset: 0x2bc
	// Line 368, Address: 0x212b54, Func Offset: 0x2c4
	// Line 369, Address: 0x212b60, Func Offset: 0x2d0
	// Line 370, Address: 0x212b6c, Func Offset: 0x2dc
	// Line 372, Address: 0x212b74, Func Offset: 0x2e4
	// Line 373, Address: 0x212b80, Func Offset: 0x2f0
	// Line 375, Address: 0x212b88, Func Offset: 0x2f8
	// Line 376, Address: 0x212b94, Func Offset: 0x304
	// Line 377, Address: 0x212ba0, Func Offset: 0x310
	// Line 379, Address: 0x212ba8, Func Offset: 0x318
	// Line 380, Address: 0x212bb4, Func Offset: 0x324
	// Line 382, Address: 0x212bbc, Func Offset: 0x32c
	// Line 383, Address: 0x212bc8, Func Offset: 0x338
	// Line 384, Address: 0x212bd4, Func Offset: 0x344
	// Line 385, Address: 0x212be0, Func Offset: 0x350
	// Line 387, Address: 0x212be8, Func Offset: 0x358
	// Line 388, Address: 0x212bfc, Func Offset: 0x36c
	// Line 390, Address: 0x212c04, Func Offset: 0x374
	// Line 391, Address: 0x212c10, Func Offset: 0x380
	// Line 392, Address: 0x212c1c, Func Offset: 0x38c
	// Line 393, Address: 0x212c28, Func Offset: 0x398
	// Line 395, Address: 0x212c30, Func Offset: 0x3a0
	// Line 396, Address: 0x212c3c, Func Offset: 0x3ac
	// Line 397, Address: 0x212c48, Func Offset: 0x3b8
	// Line 398, Address: 0x212c54, Func Offset: 0x3c4
	// Line 400, Address: 0x212c5c, Func Offset: 0x3cc
	// Line 401, Address: 0x212c68, Func Offset: 0x3d8
	// Line 402, Address: 0x212c74, Func Offset: 0x3e4
	// Line 403, Address: 0x212c80, Func Offset: 0x3f0
	// Line 404, Address: 0x212c8c, Func Offset: 0x3fc
	// Line 405, Address: 0x212c98, Func Offset: 0x408
	// Line 406, Address: 0x212ca4, Func Offset: 0x414
	// Line 407, Address: 0x212cb0, Func Offset: 0x420
	// Line 408, Address: 0x212cbc, Func Offset: 0x42c
	// Line 409, Address: 0x212cc8, Func Offset: 0x438
	// Line 410, Address: 0x212cd4, Func Offset: 0x444
	// Line 411, Address: 0x212ce0, Func Offset: 0x450
	// Line 412, Address: 0x212cec, Func Offset: 0x45c
	// Line 413, Address: 0x212cf8, Func Offset: 0x468
	// Line 416, Address: 0x212d0c, Func Offset: 0x47c
	// Func End, Address: 0x212d20, Func Offset: 0x490
}

