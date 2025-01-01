typedef struct Playing_Info;
typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct Pad_KeyConfig;
typedef struct shAttackInfo;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef union _anon1;
typedef struct SPACK_OT_DATA;
typedef struct _SH2_SYS;
typedef struct _anon2;
typedef struct SPACK_ENV_DATA;
typedef struct fsCdFile;
typedef struct SPACK_STATIC_DATA;
typedef struct fsMgcFile;
typedef struct SPACK_DATA;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct shBattleFight;
typedef struct _anon3;
typedef struct shBattleShot;


typedef float type_0[80];
typedef unsigned char type_1[97];
typedef unsigned char type_2[2];
typedef unsigned char type_3[2][12];
typedef fsFileIndex type_4[1];
typedef int type_5[6];
typedef unsigned char type_6[20];
typedef float type_7[7];
typedef unsigned int type_8[7];
typedef char type_9[2];
typedef unsigned short type_10[0];
typedef char type_11[4];
typedef unsigned int type_12[8];
typedef char type_13[4];
typedef shAttackInfo type_14[66];
typedef unsigned char type_15[14];
typedef unsigned char type_16[3];
typedef unsigned char type_17[69];
typedef unsigned char type_18[20];
typedef unsigned char type_19[14];

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

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon3 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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
	_anon1 hit_check;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _anon2
{
	unsigned char option_step;
	unsigned char extra_mode;
	short cursol;
	float cursol_pos;
	short fade;
	unsigned char fade_flag;
	float timer;
	short hoge;
	unsigned int ana_x;
	unsigned int ana_y;
	Pad_KeyConfig key_config_set;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
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

struct _anon3
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float item_size[80];
_anon2 t;
Playing_Info playing;
_SH2_SYS Sh2sys;
Pad_KeyConfig key_config;
SPACK_DATA spack;
char key_cur;
char key_cur2;
unsigned char key_rem[20];
unsigned short msg_buffer[0];
fsFileIndex data_pic_etc_botan_tex[1];
PicDraw_Data i_pic;

int option_main();
void option_mainmain();
void bright_main();
void print_config(int con, int* xx, int yy);
int key_check();
void key_type1();
void key_type2();
void key_type3();
void key_conf(int* key_a, int* key_b, unsigned char important);
void key_conf_check(int key_num, int* i);
void key_color(unsigned char col);
void config_main();
void position_main();
void look_bgm();
void look_se();
int option_near(float f0, float f1, float f2, float f3);
int fade_in();
int fade_out(int mode);
void look_board();
void look_cur();
void allow_u(int x, int y);
void allow_d(int x, int y);
void allow_l(int x, int y);
void allow_r(int x, int y);
void KeyConfigPictureLoad();
void KeyConfigPitureStart();
void key_draw(int key_kind, int xx, int yy);
void option_font();
void look_scr();
int zs(int hoge);

// 
// Start address: 0x2108c0
int option_main()
{
	float f;
	// Line 147, Address: 0x2108c0, Func Offset: 0
	// Line 150, Address: 0x2108c8, Func Offset: 0x8
	// Line 152, Address: 0x2108f0, Func Offset: 0x30
	// Line 154, Address: 0x210900, Func Offset: 0x40
	// Line 155, Address: 0x210908, Func Offset: 0x48
	// Line 158, Address: 0x21092c, Func Offset: 0x6c
	// Line 159, Address: 0x21093c, Func Offset: 0x7c
	// Line 160, Address: 0x21095c, Func Offset: 0x9c
	// Line 162, Address: 0x210974, Func Offset: 0xb4
	// Line 163, Address: 0x21097c, Func Offset: 0xbc
	// Line 165, Address: 0x210984, Func Offset: 0xc4
	// Line 168, Address: 0x2109b4, Func Offset: 0xf4
	// Line 169, Address: 0x2109c0, Func Offset: 0x100
	// Line 170, Address: 0x2109c8, Func Offset: 0x108
	// Line 171, Address: 0x2109d0, Func Offset: 0x110
	// Line 172, Address: 0x2109d8, Func Offset: 0x118
	// Line 173, Address: 0x2109e4, Func Offset: 0x124
	// Line 174, Address: 0x2109ec, Func Offset: 0x12c
	// Line 175, Address: 0x2109f4, Func Offset: 0x134
	// Line 176, Address: 0x2109fc, Func Offset: 0x13c
	// Line 177, Address: 0x210a04, Func Offset: 0x144
	// Line 178, Address: 0x210a0c, Func Offset: 0x14c
	// Line 179, Address: 0x210a18, Func Offset: 0x158
	// Line 180, Address: 0x210a20, Func Offset: 0x160
	// Line 183, Address: 0x210a28, Func Offset: 0x168
	// Line 185, Address: 0x210a40, Func Offset: 0x180
	// Line 186, Address: 0x210a4c, Func Offset: 0x18c
	// Line 188, Address: 0x210a5c, Func Offset: 0x19c
	// Line 191, Address: 0x210a64, Func Offset: 0x1a4
	// Line 192, Address: 0x210a6c, Func Offset: 0x1ac
	// Line 195, Address: 0x210a74, Func Offset: 0x1b4
	// Line 196, Address: 0x210a7c, Func Offset: 0x1bc
	// Line 199, Address: 0x210a84, Func Offset: 0x1c4
	// Line 200, Address: 0x210a8c, Func Offset: 0x1cc
	// Line 203, Address: 0x210a94, Func Offset: 0x1d4
	// Line 204, Address: 0x210a9c, Func Offset: 0x1dc
	// Line 207, Address: 0x210aa4, Func Offset: 0x1e4
	// Line 209, Address: 0x210ae0, Func Offset: 0x220
	// Line 210, Address: 0x210b08, Func Offset: 0x248
	// Line 214, Address: 0x210b10, Func Offset: 0x250
	// Line 215, Address: 0x210b44, Func Offset: 0x284
	// Line 217, Address: 0x210b4c, Func Offset: 0x28c
	// Line 218, Address: 0x210b80, Func Offset: 0x2c0
	// Line 221, Address: 0x210bac, Func Offset: 0x2ec
	// Line 222, Address: 0x210bb4, Func Offset: 0x2f4
	// Line 223, Address: 0x210bc4, Func Offset: 0x304
	// Line 224, Address: 0x210bdc, Func Offset: 0x31c
	// Line 225, Address: 0x210bf4, Func Offset: 0x334
	// Line 226, Address: 0x210c08, Func Offset: 0x348
	// Line 227, Address: 0x210c20, Func Offset: 0x360
	// Line 228, Address: 0x210c38, Func Offset: 0x378
	// Line 229, Address: 0x210c40, Func Offset: 0x380
	// Line 230, Address: 0x210c58, Func Offset: 0x398
	// Line 232, Address: 0x210c70, Func Offset: 0x3b0
	// Line 236, Address: 0x210c7c, Func Offset: 0x3bc
	// Line 237, Address: 0x210cb4, Func Offset: 0x3f4
	// Line 238, Address: 0x210cc4, Func Offset: 0x404
	// Line 239, Address: 0x210cd8, Func Offset: 0x418
	// Line 240, Address: 0x210d10, Func Offset: 0x450
	// Line 241, Address: 0x210d20, Func Offset: 0x460
	// Line 244, Address: 0x210d34, Func Offset: 0x474
	// Line 245, Address: 0x210d38, Func Offset: 0x478
	// Func End, Address: 0x210d48, Func Offset: 0x488
}

// 
// Start address: 0x210d50
void option_mainmain()
{
	// Line 253, Address: 0x210d50, Func Offset: 0
	// Line 254, Address: 0x210d58, Func Offset: 0x8
	// Line 257, Address: 0x210d70, Func Offset: 0x20
	// Line 260, Address: 0x210d78, Func Offset: 0x28
	// Line 262, Address: 0x210d80, Func Offset: 0x30
	// Line 265, Address: 0x210d90, Func Offset: 0x40
	// Line 266, Address: 0x210dc8, Func Offset: 0x78
	// Line 268, Address: 0x210df4, Func Offset: 0xa4
	// Line 269, Address: 0x210e10, Func Offset: 0xc0
	// Line 270, Address: 0x210e30, Func Offset: 0xe0
	// Line 271, Address: 0x210e50, Func Offset: 0x100
	// Line 273, Address: 0x210e88, Func Offset: 0x138
	// Line 275, Address: 0x210ed4, Func Offset: 0x184
	// Line 278, Address: 0x210f08, Func Offset: 0x1b8
	// Line 279, Address: 0x210f28, Func Offset: 0x1d8
	// Line 280, Address: 0x210f50, Func Offset: 0x200
	// Line 281, Address: 0x210f60, Func Offset: 0x210
	// Line 282, Address: 0x211000, Func Offset: 0x2b0
	// Line 284, Address: 0x2110a0, Func Offset: 0x350
	// Line 286, Address: 0x2110a8, Func Offset: 0x358
	// Line 287, Address: 0x2110c8, Func Offset: 0x378
	// Line 288, Address: 0x2110f0, Func Offset: 0x3a0
	// Line 289, Address: 0x211100, Func Offset: 0x3b0
	// Line 290, Address: 0x211168, Func Offset: 0x418
	// Line 291, Address: 0x2111c8, Func Offset: 0x478
	// Line 292, Address: 0x211230, Func Offset: 0x4e0
	// Line 293, Address: 0x211288, Func Offset: 0x538
	// Line 295, Address: 0x211328, Func Offset: 0x5d8
	// Line 297, Address: 0x211330, Func Offset: 0x5e0
	// Line 298, Address: 0x211350, Func Offset: 0x600
	// Line 299, Address: 0x211378, Func Offset: 0x628
	// Line 300, Address: 0x211388, Func Offset: 0x638
	// Line 301, Address: 0x211428, Func Offset: 0x6d8
	// Line 303, Address: 0x2114c8, Func Offset: 0x778
	// Line 305, Address: 0x2114d0, Func Offset: 0x780
	// Line 306, Address: 0x2114f0, Func Offset: 0x7a0
	// Line 307, Address: 0x211518, Func Offset: 0x7c8
	// Line 309, Address: 0x211528, Func Offset: 0x7d8
	// Line 310, Address: 0x211580, Func Offset: 0x830
	// Line 311, Address: 0x211588, Func Offset: 0x838
	// Line 312, Address: 0x211594, Func Offset: 0x844
	// Line 313, Address: 0x2115a4, Func Offset: 0x854
	// Line 314, Address: 0x2115f0, Func Offset: 0x8a0
	// Line 315, Address: 0x211604, Func Offset: 0x8b4
	// Line 316, Address: 0x211610, Func Offset: 0x8c0
	// Line 317, Address: 0x211620, Func Offset: 0x8d0
	// Line 318, Address: 0x21167c, Func Offset: 0x92c
	// Line 319, Address: 0x211688, Func Offset: 0x938
	// Line 320, Address: 0x211694, Func Offset: 0x944
	// Line 321, Address: 0x2116a4, Func Offset: 0x954
	// Line 322, Address: 0x2116f0, Func Offset: 0x9a0
	// Line 323, Address: 0x211704, Func Offset: 0x9b4
	// Line 324, Address: 0x211710, Func Offset: 0x9c0
	// Line 332, Address: 0x211720, Func Offset: 0x9d0
	// Line 334, Address: 0x2117c0, Func Offset: 0xa70
	// Line 336, Address: 0x2117c8, Func Offset: 0xa78
	// Line 337, Address: 0x2117e8, Func Offset: 0xa98
	// Line 338, Address: 0x211810, Func Offset: 0xac0
	// Line 339, Address: 0x211820, Func Offset: 0xad0
	// Line 340, Address: 0x2118c0, Func Offset: 0xb70
	// Line 342, Address: 0x211960, Func Offset: 0xc10
	// Line 344, Address: 0x211968, Func Offset: 0xc18
	// Line 345, Address: 0x211988, Func Offset: 0xc38
	// Line 346, Address: 0x2119b0, Func Offset: 0xc60
	// Line 347, Address: 0x2119c0, Func Offset: 0xc70
	// Line 348, Address: 0x211a28, Func Offset: 0xcd8
	// Line 349, Address: 0x211a88, Func Offset: 0xd38
	// Line 350, Address: 0x211af0, Func Offset: 0xda0
	// Line 351, Address: 0x211b48, Func Offset: 0xdf8
	// Line 353, Address: 0x211be8, Func Offset: 0xe98
	// Line 355, Address: 0x211bf0, Func Offset: 0xea0
	// Line 356, Address: 0x211c10, Func Offset: 0xec0
	// Line 357, Address: 0x211c38, Func Offset: 0xee8
	// Line 358, Address: 0x211c48, Func Offset: 0xef8
	// Line 359, Address: 0x211cc4, Func Offset: 0xf74
	// Line 360, Address: 0x211cd0, Func Offset: 0xf80
	// Line 361, Address: 0x211cd8, Func Offset: 0xf88
	// Line 363, Address: 0x211cf0, Func Offset: 0xfa0
	// Line 364, Address: 0x211d70, Func Offset: 0x1020
	// Line 365, Address: 0x211d7c, Func Offset: 0x102c
	// Line 366, Address: 0x211d84, Func Offset: 0x1034
	// Line 369, Address: 0x211d9c, Func Offset: 0x104c
	// Line 371, Address: 0x211da4, Func Offset: 0x1054
	// Line 372, Address: 0x211dc4, Func Offset: 0x1074
	// Line 373, Address: 0x211dec, Func Offset: 0x109c
	// Line 374, Address: 0x211dfc, Func Offset: 0x10ac
	// Line 375, Address: 0x211e78, Func Offset: 0x1128
	// Line 376, Address: 0x211e84, Func Offset: 0x1134
	// Line 377, Address: 0x211e8c, Func Offset: 0x113c
	// Line 379, Address: 0x211ea4, Func Offset: 0x1154
	// Line 380, Address: 0x211f24, Func Offset: 0x11d4
	// Line 381, Address: 0x211f30, Func Offset: 0x11e0
	// Line 382, Address: 0x211f38, Func Offset: 0x11e8
	// Line 387, Address: 0x211f50, Func Offset: 0x1200
	// Line 388, Address: 0x211f78, Func Offset: 0x1228
	// Line 389, Address: 0x211fa0, Func Offset: 0x1250
	// Line 390, Address: 0x211fc8, Func Offset: 0x1278
	// Line 391, Address: 0x211fec, Func Offset: 0x129c
	// Line 392, Address: 0x212014, Func Offset: 0x12c4
	// Line 393, Address: 0x21204c, Func Offset: 0x12fc
	// Line 394, Address: 0x212054, Func Offset: 0x1304
	// Line 397, Address: 0x212060, Func Offset: 0x1310
	// Line 400, Address: 0x212068, Func Offset: 0x1318
	// Line 401, Address: 0x212070, Func Offset: 0x1320
	// Line 405, Address: 0x212078, Func Offset: 0x1328
	// Line 407, Address: 0x2120e0, Func Offset: 0x1390
	// Line 408, Address: 0x212108, Func Offset: 0x13b8
	// Line 411, Address: 0x212138, Func Offset: 0x13e8
	// Line 412, Address: 0x212158, Func Offset: 0x1408
	// Line 413, Address: 0x212180, Func Offset: 0x1430
	// Line 414, Address: 0x212190, Func Offset: 0x1440
	// Line 415, Address: 0x212230, Func Offset: 0x14e0
	// Line 417, Address: 0x2122d0, Func Offset: 0x1580
	// Line 419, Address: 0x2122d8, Func Offset: 0x1588
	// Line 420, Address: 0x2122f8, Func Offset: 0x15a8
	// Line 421, Address: 0x212320, Func Offset: 0x15d0
	// Line 422, Address: 0x212330, Func Offset: 0x15e0
	// Line 423, Address: 0x212398, Func Offset: 0x1648
	// Line 424, Address: 0x2123f8, Func Offset: 0x16a8
	// Line 425, Address: 0x212460, Func Offset: 0x1710
	// Line 426, Address: 0x2124b8, Func Offset: 0x1768
	// Line 428, Address: 0x212558, Func Offset: 0x1808
	// Line 430, Address: 0x212560, Func Offset: 0x1810
	// Line 431, Address: 0x212580, Func Offset: 0x1830
	// Line 432, Address: 0x2125a8, Func Offset: 0x1858
	// Line 433, Address: 0x2125b8, Func Offset: 0x1868
	// Line 434, Address: 0x212658, Func Offset: 0x1908
	// Line 436, Address: 0x2126f8, Func Offset: 0x19a8
	// Line 438, Address: 0x212700, Func Offset: 0x19b0
	// Line 439, Address: 0x212720, Func Offset: 0x19d0
	// Line 440, Address: 0x212748, Func Offset: 0x19f8
	// Line 441, Address: 0x212758, Func Offset: 0x1a08
	// Line 442, Address: 0x2127f8, Func Offset: 0x1aa8
	// Line 444, Address: 0x212898, Func Offset: 0x1b48
	// Line 446, Address: 0x2128a0, Func Offset: 0x1b50
	// Line 447, Address: 0x2128c0, Func Offset: 0x1b70
	// Line 448, Address: 0x2128e8, Func Offset: 0x1b98
	// Line 449, Address: 0x2128f8, Func Offset: 0x1ba8
	// Line 450, Address: 0x212998, Func Offset: 0x1c48
	// Line 452, Address: 0x212a38, Func Offset: 0x1ce8
	// Line 462, Address: 0x212a40, Func Offset: 0x1cf0
	// Line 463, Address: 0x212a60, Func Offset: 0x1d10
	// Line 464, Address: 0x212a88, Func Offset: 0x1d38
	// Line 465, Address: 0x212a98, Func Offset: 0x1d48
	// Line 466, Address: 0x212b38, Func Offset: 0x1de8
	// Line 468, Address: 0x212bd8, Func Offset: 0x1e88
	// Line 470, Address: 0x212be0, Func Offset: 0x1e90
	// Line 471, Address: 0x212c00, Func Offset: 0x1eb0
	// Line 472, Address: 0x212c28, Func Offset: 0x1ed8
	// Line 473, Address: 0x212c38, Func Offset: 0x1ee8
	// Line 474, Address: 0x212ca4, Func Offset: 0x1f54
	// Line 475, Address: 0x212d04, Func Offset: 0x1fb4
	// Line 476, Address: 0x212d70, Func Offset: 0x2020
	// Line 477, Address: 0x212dc8, Func Offset: 0x2078
	// Line 481, Address: 0x212e68, Func Offset: 0x2118
	// Line 482, Address: 0x212ea0, Func Offset: 0x2150
	// Line 483, Address: 0x212ea8, Func Offset: 0x2158
	// Line 486, Address: 0x212eb0, Func Offset: 0x2160
	// Func End, Address: 0x212ec0, Func Offset: 0x2170
}

// 
// Start address: 0x212ec0
void bright_main()
{
	int i;
	// Line 499, Address: 0x212ec0, Func Offset: 0
	// Line 501, Address: 0x212ed4, Func Offset: 0x14
	// Line 502, Address: 0x212eec, Func Offset: 0x2c
	// Line 503, Address: 0x212f24, Func Offset: 0x64
	// Line 505, Address: 0x212f4c, Func Offset: 0x8c
	// Line 507, Address: 0x212f5c, Func Offset: 0x9c
	// Line 508, Address: 0x212fe8, Func Offset: 0x128
	// Line 510, Address: 0x213070, Func Offset: 0x1b0
	// Line 512, Address: 0x213080, Func Offset: 0x1c0
	// Line 514, Address: 0x21308c, Func Offset: 0x1cc
	// Line 515, Address: 0x2130b0, Func Offset: 0x1f0
	// Line 516, Address: 0x2130e8, Func Offset: 0x228
	// Line 517, Address: 0x213100, Func Offset: 0x240
	// Line 518, Address: 0x21311c, Func Offset: 0x25c
	// Line 519, Address: 0x213158, Func Offset: 0x298
	// Line 520, Address: 0x2131d8, Func Offset: 0x318
	// Line 521, Address: 0x213248, Func Offset: 0x388
	// Line 522, Address: 0x213250, Func Offset: 0x390
	// Line 523, Address: 0x213264, Func Offset: 0x3a4
	// Line 524, Address: 0x213274, Func Offset: 0x3b4
	// Line 525, Address: 0x213284, Func Offset: 0x3c4
	// Func End, Address: 0x2132a0, Func Offset: 0x3e0
}

// 
// Start address: 0x2132a0
void print_config(int con, int* xx, int yy)
{
	// Line 568, Address: 0x2132a0, Func Offset: 0
	// Line 569, Address: 0x2132bc, Func Offset: 0x1c
	// Line 570, Address: 0x2132d0, Func Offset: 0x30
	// Line 571, Address: 0x2132ec, Func Offset: 0x4c
	// Line 572, Address: 0x21330c, Func Offset: 0x6c
	// Line 573, Address: 0x21332c, Func Offset: 0x8c
	// Line 574, Address: 0x21334c, Func Offset: 0xac
	// Line 575, Address: 0x21336c, Func Offset: 0xcc
	// Line 576, Address: 0x21338c, Func Offset: 0xec
	// Line 577, Address: 0x2133ac, Func Offset: 0x10c
	// Line 578, Address: 0x2133cc, Func Offset: 0x12c
	// Line 579, Address: 0x2133ec, Func Offset: 0x14c
	// Line 580, Address: 0x21340c, Func Offset: 0x16c
	// Line 581, Address: 0x21342c, Func Offset: 0x18c
	// Line 582, Address: 0x21344c, Func Offset: 0x1ac
	// Line 583, Address: 0x213458, Func Offset: 0x1b8
	// Func End, Address: 0x213474, Func Offset: 0x1d4
}

// 
// Start address: 0x213480
int key_check()
{
	int push_key;
	// Line 586, Address: 0x213480, Func Offset: 0
	// Line 587, Address: 0x21348c, Func Offset: 0xc
	// Line 588, Address: 0x213490, Func Offset: 0x10
	// Line 589, Address: 0x2134ac, Func Offset: 0x2c
	// Line 590, Address: 0x2134c8, Func Offset: 0x48
	// Line 591, Address: 0x2134e4, Func Offset: 0x64
	// Line 592, Address: 0x213500, Func Offset: 0x80
	// Line 593, Address: 0x213520, Func Offset: 0xa0
	// Line 594, Address: 0x213540, Func Offset: 0xc0
	// Line 595, Address: 0x213560, Func Offset: 0xe0
	// Line 596, Address: 0x213580, Func Offset: 0x100
	// Line 597, Address: 0x21359c, Func Offset: 0x11c
	// Line 598, Address: 0x2135b8, Func Offset: 0x138
	// Line 599, Address: 0x2135d4, Func Offset: 0x154
	// Line 601, Address: 0x2135f0, Func Offset: 0x170
	// Line 602, Address: 0x2135f4, Func Offset: 0x174
	// Func End, Address: 0x213608, Func Offset: 0x188
}

// 
// Start address: 0x213610
void key_type1()
{
	// Line 606, Address: 0x213610, Func Offset: 0
	// Line 607, Address: 0x21361c, Func Offset: 0xc
	// Line 608, Address: 0x213628, Func Offset: 0x18
	// Line 609, Address: 0x213634, Func Offset: 0x24
	// Line 610, Address: 0x213640, Func Offset: 0x30
	// Line 611, Address: 0x21364c, Func Offset: 0x3c
	// Line 612, Address: 0x213654, Func Offset: 0x44
	// Line 613, Address: 0x21365c, Func Offset: 0x4c
	// Line 614, Address: 0x213668, Func Offset: 0x58
	// Line 615, Address: 0x213674, Func Offset: 0x64
	// Line 616, Address: 0x213680, Func Offset: 0x70
	// Line 617, Address: 0x21368c, Func Offset: 0x7c
	// Line 618, Address: 0x213698, Func Offset: 0x88
	// Line 619, Address: 0x2136a0, Func Offset: 0x90
	// Func End, Address: 0x2136a8, Func Offset: 0x98
}

// 
// Start address: 0x2136b0
void key_type2()
{
	// Line 622, Address: 0x2136b0, Func Offset: 0
	// Line 623, Address: 0x2136bc, Func Offset: 0xc
	// Line 624, Address: 0x2136c8, Func Offset: 0x18
	// Line 625, Address: 0x2136d4, Func Offset: 0x24
	// Line 626, Address: 0x2136e0, Func Offset: 0x30
	// Line 627, Address: 0x2136ec, Func Offset: 0x3c
	// Line 628, Address: 0x2136f4, Func Offset: 0x44
	// Line 629, Address: 0x2136fc, Func Offset: 0x4c
	// Line 630, Address: 0x213708, Func Offset: 0x58
	// Line 631, Address: 0x213714, Func Offset: 0x64
	// Line 632, Address: 0x213720, Func Offset: 0x70
	// Line 633, Address: 0x21372c, Func Offset: 0x7c
	// Line 634, Address: 0x213738, Func Offset: 0x88
	// Line 635, Address: 0x213740, Func Offset: 0x90
	// Func End, Address: 0x213748, Func Offset: 0x98
}

// 
// Start address: 0x213750
void key_type3()
{
	// Line 638, Address: 0x213750, Func Offset: 0
	// Line 639, Address: 0x21375c, Func Offset: 0xc
	// Line 640, Address: 0x213768, Func Offset: 0x18
	// Line 641, Address: 0x213774, Func Offset: 0x24
	// Line 642, Address: 0x213780, Func Offset: 0x30
	// Line 643, Address: 0x21378c, Func Offset: 0x3c
	// Line 644, Address: 0x213798, Func Offset: 0x48
	// Line 645, Address: 0x2137a0, Func Offset: 0x50
	// Line 646, Address: 0x2137ac, Func Offset: 0x5c
	// Line 647, Address: 0x2137b4, Func Offset: 0x64
	// Line 648, Address: 0x2137c0, Func Offset: 0x70
	// Line 649, Address: 0x2137cc, Func Offset: 0x7c
	// Line 650, Address: 0x2137d8, Func Offset: 0x88
	// Line 651, Address: 0x2137e0, Func Offset: 0x90
	// Func End, Address: 0x2137e8, Func Offset: 0x98
}

// 
// Start address: 0x2137f0
void key_conf(int* key_a, int* key_b, unsigned char important)
{
	int i;
	// Line 656, Address: 0x2137f0, Func Offset: 0
	// Line 657, Address: 0x2137f4, Func Offset: 0x4
	// Line 658, Address: 0x213804, Func Offset: 0x14
	// Line 660, Address: 0x213814, Func Offset: 0x24
	// Line 661, Address: 0x213820, Func Offset: 0x30
	// Line 664, Address: 0x213828, Func Offset: 0x38
	// Line 666, Address: 0x213834, Func Offset: 0x44
	// Func End, Address: 0x21383c, Func Offset: 0x4c
}

// 
// Start address: 0x213840
void key_conf_check(int key_num, int* i)
{
	// Line 669, Address: 0x213840, Func Offset: 0
	// Line 670, Address: 0x213858, Func Offset: 0x18
	// Line 671, Address: 0x21387c, Func Offset: 0x3c
	// Line 672, Address: 0x2138a0, Func Offset: 0x60
	// Line 673, Address: 0x2138c4, Func Offset: 0x84
	// Line 674, Address: 0x2138e8, Func Offset: 0xa8
	// Line 675, Address: 0x21390c, Func Offset: 0xcc
	// Line 676, Address: 0x213930, Func Offset: 0xf0
	// Line 677, Address: 0x213954, Func Offset: 0x114
	// Line 678, Address: 0x213978, Func Offset: 0x138
	// Line 679, Address: 0x21399c, Func Offset: 0x15c
	// Line 680, Address: 0x2139c0, Func Offset: 0x180
	// Func End, Address: 0x2139d8, Func Offset: 0x198
}

// 
// Start address: 0x2139e0
void key_color(unsigned char col)
{
	// Line 683, Address: 0x2139e0, Func Offset: 0
	// Line 684, Address: 0x2139e8, Func Offset: 0x8
	// Line 685, Address: 0x2139fc, Func Offset: 0x1c
	// Line 687, Address: 0x213a1c, Func Offset: 0x3c
	// Line 688, Address: 0x213a34, Func Offset: 0x54
	// Func End, Address: 0x213a44, Func Offset: 0x64
}

// 
// Start address: 0x213a50
void config_main()
{
	char buf[2];
	int k;
	int j;
	int i;
	// Line 691, Address: 0x213a50, Func Offset: 0
	// Line 694, Address: 0x213a5c, Func Offset: 0xc
	// Line 695, Address: 0x213a74, Func Offset: 0x24
	// Line 696, Address: 0x213ae8, Func Offset: 0x98
	// Line 697, Address: 0x213afc, Func Offset: 0xac
	// Line 698, Address: 0x213b34, Func Offset: 0xe4
	// Line 699, Address: 0x213b44, Func Offset: 0xf4
	// Line 700, Address: 0x213b4c, Func Offset: 0xfc
	// Line 703, Address: 0x213b60, Func Offset: 0x110
	// Line 706, Address: 0x213b68, Func Offset: 0x118
	// Line 707, Address: 0x213b74, Func Offset: 0x124
	// Line 708, Address: 0x213bb4, Func Offset: 0x164
	// Line 709, Address: 0x213bcc, Func Offset: 0x17c
	// Line 710, Address: 0x213be8, Func Offset: 0x198
	// Line 711, Address: 0x213c2c, Func Offset: 0x1dc
	// Line 712, Address: 0x213c44, Func Offset: 0x1f4
	// Line 713, Address: 0x213c74, Func Offset: 0x224
	// Line 714, Address: 0x213c90, Func Offset: 0x240
	// Line 715, Address: 0x213cd4, Func Offset: 0x284
	// Line 716, Address: 0x213cec, Func Offset: 0x29c
	// Line 717, Address: 0x213d1c, Func Offset: 0x2cc
	// Line 718, Address: 0x213d38, Func Offset: 0x2e8
	// Line 719, Address: 0x213d7c, Func Offset: 0x32c
	// Line 720, Address: 0x213d94, Func Offset: 0x344
	// Line 721, Address: 0x213dc4, Func Offset: 0x374
	// Line 722, Address: 0x213de0, Func Offset: 0x390
	// Line 723, Address: 0x213e24, Func Offset: 0x3d4
	// Line 724, Address: 0x213e3c, Func Offset: 0x3ec
	// Line 727, Address: 0x213e58, Func Offset: 0x408
	// Line 728, Address: 0x213e64, Func Offset: 0x414
	// Line 729, Address: 0x213e80, Func Offset: 0x430
	// Line 730, Address: 0x213e8c, Func Offset: 0x43c
	// Line 731, Address: 0x213ea8, Func Offset: 0x458
	// Line 732, Address: 0x213eb4, Func Offset: 0x464
	// Line 733, Address: 0x213ed0, Func Offset: 0x480
	// Line 734, Address: 0x213edc, Func Offset: 0x48c
	// Line 735, Address: 0x213ef8, Func Offset: 0x4a8
	// Line 736, Address: 0x213f04, Func Offset: 0x4b4
	// Line 737, Address: 0x213f20, Func Offset: 0x4d0
	// Line 738, Address: 0x213f2c, Func Offset: 0x4dc
	// Line 739, Address: 0x213f48, Func Offset: 0x4f8
	// Line 740, Address: 0x213f54, Func Offset: 0x504
	// Line 741, Address: 0x213f70, Func Offset: 0x520
	// Line 742, Address: 0x213f7c, Func Offset: 0x52c
	// Line 743, Address: 0x213f98, Func Offset: 0x548
	// Line 744, Address: 0x213fa4, Func Offset: 0x554
	// Line 745, Address: 0x213fc0, Func Offset: 0x570
	// Line 746, Address: 0x213fcc, Func Offset: 0x57c
	// Line 747, Address: 0x213fe8, Func Offset: 0x598
	// Line 748, Address: 0x213ff4, Func Offset: 0x5a4
	// Line 749, Address: 0x214010, Func Offset: 0x5c0
	// Line 750, Address: 0x21401c, Func Offset: 0x5cc
	// Line 751, Address: 0x214038, Func Offset: 0x5e8
	// Line 752, Address: 0x214044, Func Offset: 0x5f4
	// Line 755, Address: 0x214060, Func Offset: 0x610
	// Line 757, Address: 0x21406c, Func Offset: 0x61c
	// Line 758, Address: 0x214074, Func Offset: 0x624
	// Line 760, Address: 0x214080, Func Offset: 0x630
	// Line 761, Address: 0x2140b8, Func Offset: 0x668
	// Line 762, Address: 0x2140f8, Func Offset: 0x6a8
	// Line 763, Address: 0x214138, Func Offset: 0x6e8
	// Line 764, Address: 0x214178, Func Offset: 0x728
	// Line 765, Address: 0x2141b8, Func Offset: 0x768
	// Line 767, Address: 0x2141f8, Func Offset: 0x7a8
	// Line 768, Address: 0x214238, Func Offset: 0x7e8
	// Line 769, Address: 0x214278, Func Offset: 0x828
	// Line 770, Address: 0x2142b8, Func Offset: 0x868
	// Line 771, Address: 0x2142f8, Func Offset: 0x8a8
	// Line 772, Address: 0x214338, Func Offset: 0x8e8
	// Line 773, Address: 0x214378, Func Offset: 0x928
	// Line 774, Address: 0x2143b8, Func Offset: 0x968
	// Line 775, Address: 0x2143cc, Func Offset: 0x97c
	// Line 776, Address: 0x2143dc, Func Offset: 0x98c
	// Line 779, Address: 0x2143f8, Func Offset: 0x9a8
	// Line 780, Address: 0x214440, Func Offset: 0x9f0
	// Line 781, Address: 0x214488, Func Offset: 0xa38
	// Line 782, Address: 0x2144d0, Func Offset: 0xa80
	// Line 783, Address: 0x214548, Func Offset: 0xaf8
	// Line 786, Address: 0x21457c, Func Offset: 0xb2c
	// Line 789, Address: 0x2145ac, Func Offset: 0xb5c
	// Line 790, Address: 0x2145b8, Func Offset: 0xb68
	// Line 791, Address: 0x2145e4, Func Offset: 0xb94
	// Line 792, Address: 0x2145fc, Func Offset: 0xbac
	// Line 793, Address: 0x214610, Func Offset: 0xbc0
	// Line 796, Address: 0x214618, Func Offset: 0xbc8
	// Line 797, Address: 0x214624, Func Offset: 0xbd4
	// Line 798, Address: 0x214650, Func Offset: 0xc00
	// Line 799, Address: 0x214668, Func Offset: 0xc18
	// Line 800, Address: 0x21467c, Func Offset: 0xc2c
	// Line 803, Address: 0x214684, Func Offset: 0xc34
	// Line 804, Address: 0x2146a0, Func Offset: 0xc50
	// Line 808, Address: 0x2146a8, Func Offset: 0xc58
	// Line 809, Address: 0x2146b4, Func Offset: 0xc64
	// Line 810, Address: 0x2146c8, Func Offset: 0xc78
	// Line 811, Address: 0x2146d8, Func Offset: 0xc88
	// Line 812, Address: 0x2146e4, Func Offset: 0xc94
	// Line 815, Address: 0x2146ec, Func Offset: 0xc9c
	// Line 816, Address: 0x2146f8, Func Offset: 0xca8
	// Line 817, Address: 0x21470c, Func Offset: 0xcbc
	// Line 818, Address: 0x21471c, Func Offset: 0xccc
	// Line 819, Address: 0x214728, Func Offset: 0xcd8
	// Line 822, Address: 0x214730, Func Offset: 0xce0
	// Line 823, Address: 0x21473c, Func Offset: 0xcec
	// Line 824, Address: 0x214768, Func Offset: 0xd18
	// Line 825, Address: 0x214778, Func Offset: 0xd28
	// Line 826, Address: 0x21478c, Func Offset: 0xd3c
	// Line 829, Address: 0x214794, Func Offset: 0xd44
	// Line 830, Address: 0x2147a0, Func Offset: 0xd50
	// Line 831, Address: 0x2147b4, Func Offset: 0xd64
	// Line 832, Address: 0x2147c4, Func Offset: 0xd74
	// Line 833, Address: 0x2147d0, Func Offset: 0xd80
	// Line 836, Address: 0x2147d8, Func Offset: 0xd88
	// Line 837, Address: 0x2147e4, Func Offset: 0xd94
	// Line 838, Address: 0x2147f8, Func Offset: 0xda8
	// Line 839, Address: 0x214808, Func Offset: 0xdb8
	// Line 840, Address: 0x214814, Func Offset: 0xdc4
	// Line 843, Address: 0x21481c, Func Offset: 0xdcc
	// Line 844, Address: 0x214828, Func Offset: 0xdd8
	// Line 845, Address: 0x214854, Func Offset: 0xe04
	// Line 846, Address: 0x214864, Func Offset: 0xe14
	// Line 847, Address: 0x214878, Func Offset: 0xe28
	// Line 850, Address: 0x214880, Func Offset: 0xe30
	// Line 851, Address: 0x21488c, Func Offset: 0xe3c
	// Line 852, Address: 0x2148a0, Func Offset: 0xe50
	// Line 853, Address: 0x2148b0, Func Offset: 0xe60
	// Line 854, Address: 0x2148bc, Func Offset: 0xe6c
	// Line 857, Address: 0x2148c4, Func Offset: 0xe74
	// Line 858, Address: 0x2148d0, Func Offset: 0xe80
	// Line 859, Address: 0x2148fc, Func Offset: 0xeac
	// Line 860, Address: 0x21490c, Func Offset: 0xebc
	// Line 861, Address: 0x214920, Func Offset: 0xed0
	// Line 864, Address: 0x214928, Func Offset: 0xed8
	// Line 865, Address: 0x214934, Func Offset: 0xee4
	// Line 866, Address: 0x214948, Func Offset: 0xef8
	// Line 867, Address: 0x214958, Func Offset: 0xf08
	// Line 868, Address: 0x214964, Func Offset: 0xf14
	// Line 871, Address: 0x21496c, Func Offset: 0xf1c
	// Line 872, Address: 0x214978, Func Offset: 0xf28
	// Line 873, Address: 0x21498c, Func Offset: 0xf3c
	// Line 874, Address: 0x21499c, Func Offset: 0xf4c
	// Line 879, Address: 0x2149a8, Func Offset: 0xf58
	// Line 881, Address: 0x2149b8, Func Offset: 0xf68
	// Line 882, Address: 0x214a38, Func Offset: 0xfe8
	// Line 883, Address: 0x214ab8, Func Offset: 0x1068
	// Line 884, Address: 0x214b38, Func Offset: 0x10e8
	// Line 885, Address: 0x214bb8, Func Offset: 0x1168
	// Line 886, Address: 0x214bd4, Func Offset: 0x1184
	// Line 887, Address: 0x214bf0, Func Offset: 0x11a0
	// Line 888, Address: 0x214c0c, Func Offset: 0x11bc
	// Line 889, Address: 0x214c28, Func Offset: 0x11d8
	// Line 891, Address: 0x214c40, Func Offset: 0x11f0
	// Func End, Address: 0x214c54, Func Offset: 0x1204
}

// 
// Start address: 0x214c60
void position_main()
{
	int fade;
	int rgb;
	int j;
	int i;
	// Line 899, Address: 0x214c60, Func Offset: 0
	// Line 901, Address: 0x214c80, Func Offset: 0x20
	// Line 902, Address: 0x214c98, Func Offset: 0x38
	// Line 903, Address: 0x214cd0, Func Offset: 0x70
	// Line 905, Address: 0x214cf8, Func Offset: 0x98
	// Line 909, Address: 0x214d08, Func Offset: 0xa8
	// Line 910, Address: 0x214d88, Func Offset: 0x128
	// Line 911, Address: 0x214e08, Func Offset: 0x1a8
	// Line 912, Address: 0x214e28, Func Offset: 0x1c8
	// Line 913, Address: 0x214e48, Func Offset: 0x1e8
	// Line 914, Address: 0x214e68, Func Offset: 0x208
	// Line 917, Address: 0x214e88, Func Offset: 0x228
	// Line 918, Address: 0x214e90, Func Offset: 0x230
	// Line 921, Address: 0x214ed8, Func Offset: 0x278
	// Line 923, Address: 0x214f08, Func Offset: 0x2a8
	// Line 925, Address: 0x214f24, Func Offset: 0x2c4
	// Line 926, Address: 0x214f34, Func Offset: 0x2d4
	// Line 927, Address: 0x214f74, Func Offset: 0x314
	// Line 928, Address: 0x214f7c, Func Offset: 0x31c
	// Line 929, Address: 0x214f88, Func Offset: 0x328
	// Line 930, Address: 0x214fa8, Func Offset: 0x348
	// Line 932, Address: 0x214fc4, Func Offset: 0x364
	// Line 934, Address: 0x214fe8, Func Offset: 0x388
	// Line 936, Address: 0x215000, Func Offset: 0x3a0
	// Line 937, Address: 0x215024, Func Offset: 0x3c4
	// Line 938, Address: 0x21505c, Func Offset: 0x3fc
	// Line 939, Address: 0x215074, Func Offset: 0x414
	// Line 940, Address: 0x215090, Func Offset: 0x430
	// Line 941, Address: 0x2150cc, Func Offset: 0x46c
	// Line 942, Address: 0x215144, Func Offset: 0x4e4
	// Line 943, Address: 0x2151b4, Func Offset: 0x554
	// Line 944, Address: 0x2151bc, Func Offset: 0x55c
	// Line 946, Address: 0x2151dc, Func Offset: 0x57c
	// Line 948, Address: 0x2151e8, Func Offset: 0x588
	// Line 949, Address: 0x21520c, Func Offset: 0x5ac
	// Line 950, Address: 0x215244, Func Offset: 0x5e4
	// Line 951, Address: 0x21525c, Func Offset: 0x5fc
	// Line 952, Address: 0x215278, Func Offset: 0x618
	// Line 953, Address: 0x2152c4, Func Offset: 0x664
	// Line 954, Address: 0x215308, Func Offset: 0x6a8
	// Line 955, Address: 0x215384, Func Offset: 0x724
	// Line 956, Address: 0x2153f4, Func Offset: 0x794
	// Line 957, Address: 0x2153fc, Func Offset: 0x79c
	// Line 959, Address: 0x21540c, Func Offset: 0x7ac
	// Line 961, Address: 0x215418, Func Offset: 0x7b8
	// Line 962, Address: 0x21543c, Func Offset: 0x7dc
	// Line 963, Address: 0x215474, Func Offset: 0x814
	// Line 964, Address: 0x21548c, Func Offset: 0x82c
	// Line 965, Address: 0x2154a8, Func Offset: 0x848
	// Line 966, Address: 0x2154f0, Func Offset: 0x890
	// Line 967, Address: 0x215538, Func Offset: 0x8d8
	// Line 968, Address: 0x2155ac, Func Offset: 0x94c
	// Line 969, Address: 0x21561c, Func Offset: 0x9bc
	// Line 970, Address: 0x215624, Func Offset: 0x9c4
	// Line 972, Address: 0x215634, Func Offset: 0x9d4
	// Line 973, Address: 0x215658, Func Offset: 0x9f8
	// Line 974, Address: 0x215690, Func Offset: 0xa30
	// Line 975, Address: 0x2156a8, Func Offset: 0xa48
	// Line 976, Address: 0x2156c4, Func Offset: 0xa64
	// Line 977, Address: 0x2156e8, Func Offset: 0xa88
	// Line 978, Address: 0x215758, Func Offset: 0xaf8
	// Line 979, Address: 0x2157c8, Func Offset: 0xb68
	// Line 980, Address: 0x2157d0, Func Offset: 0xb70
	// Line 981, Address: 0x2157f4, Func Offset: 0xb94
	// Line 982, Address: 0x21582c, Func Offset: 0xbcc
	// Line 983, Address: 0x215844, Func Offset: 0xbe4
	// Line 984, Address: 0x215860, Func Offset: 0xc00
	// Line 985, Address: 0x215880, Func Offset: 0xc20
	// Line 986, Address: 0x2158f0, Func Offset: 0xc90
	// Line 987, Address: 0x215960, Func Offset: 0xd00
	// Line 990, Address: 0x215968, Func Offset: 0xd08
	// Line 991, Address: 0x215978, Func Offset: 0xd18
	// Line 992, Address: 0x215988, Func Offset: 0xd28
	// Line 993, Address: 0x215998, Func Offset: 0xd38
	// Line 994, Address: 0x2159a8, Func Offset: 0xd48
	// Func End, Address: 0x2159d0, Func Offset: 0xd70
}

// 
// Start address: 0x2159d0
void look_bgm()
{
	int abe;
	int j;
	int i;
	// Line 1002, Address: 0x2159d0, Func Offset: 0
	// Line 1005, Address: 0x2159f4, Func Offset: 0x24
	// Line 1006, Address: 0x215a18, Func Offset: 0x48
	// Line 1007, Address: 0x215a24, Func Offset: 0x54
	// Line 1008, Address: 0x215a30, Func Offset: 0x60
	// Line 1009, Address: 0x215a54, Func Offset: 0x84
	// Line 1010, Address: 0x215a8c, Func Offset: 0xbc
	// Line 1011, Address: 0x215aa8, Func Offset: 0xd8
	// Line 1012, Address: 0x215ad4, Func Offset: 0x104
	// Line 1013, Address: 0x215af0, Func Offset: 0x120
	// Line 1014, Address: 0x215b20, Func Offset: 0x150
	// Line 1015, Address: 0x215b40, Func Offset: 0x170
	// Line 1016, Address: 0x215bc4, Func Offset: 0x1f4
	// Line 1017, Address: 0x215c38, Func Offset: 0x268
	// Line 1018, Address: 0x215cb8, Func Offset: 0x2e8
	// Line 1019, Address: 0x215d28, Func Offset: 0x358
	// Line 1020, Address: 0x215da8, Func Offset: 0x3d8
	// Line 1021, Address: 0x215e18, Func Offset: 0x448
	// Line 1022, Address: 0x215e88, Func Offset: 0x4b8
	// Line 1023, Address: 0x215ef8, Func Offset: 0x528
	// Line 1024, Address: 0x215f00, Func Offset: 0x530
	// Line 1027, Address: 0x215f14, Func Offset: 0x544
	// Line 1028, Address: 0x215f38, Func Offset: 0x568
	// Line 1029, Address: 0x215f70, Func Offset: 0x5a0
	// Line 1030, Address: 0x215f8c, Func Offset: 0x5bc
	// Line 1031, Address: 0x215fb8, Func Offset: 0x5e8
	// Line 1032, Address: 0x215fd8, Func Offset: 0x608
	// Line 1033, Address: 0x215ff8, Func Offset: 0x628
	// Line 1034, Address: 0x21607c, Func Offset: 0x6ac
	// Line 1035, Address: 0x2160f0, Func Offset: 0x720
	// Line 1036, Address: 0x216160, Func Offset: 0x790
	// Line 1037, Address: 0x2161d0, Func Offset: 0x800
	// Line 1038, Address: 0x2161d8, Func Offset: 0x808
	// Line 1040, Address: 0x2161f4, Func Offset: 0x824
	// Line 1041, Address: 0x216200, Func Offset: 0x830
	// Line 1042, Address: 0x216224, Func Offset: 0x854
	// Line 1043, Address: 0x21625c, Func Offset: 0x88c
	// Line 1044, Address: 0x216278, Func Offset: 0x8a8
	// Line 1045, Address: 0x2162a4, Func Offset: 0x8d4
	// Line 1046, Address: 0x2162c0, Func Offset: 0x8f0
	// Line 1047, Address: 0x2162e0, Func Offset: 0x910
	// Line 1048, Address: 0x216364, Func Offset: 0x994
	// Line 1049, Address: 0x2163d8, Func Offset: 0xa08
	// Line 1050, Address: 0x216448, Func Offset: 0xa78
	// Line 1051, Address: 0x2164b8, Func Offset: 0xae8
	// Line 1052, Address: 0x2164c0, Func Offset: 0xaf0
	// Line 1053, Address: 0x2164d4, Func Offset: 0xb04
	// Func End, Address: 0x216500, Func Offset: 0xb30
}

// 
// Start address: 0x216500
void look_se()
{
	int abe;
	int j;
	int i;
	// Line 1061, Address: 0x216500, Func Offset: 0
	// Line 1064, Address: 0x216524, Func Offset: 0x24
	// Line 1065, Address: 0x216548, Func Offset: 0x48
	// Line 1068, Address: 0x216554, Func Offset: 0x54
	// Line 1069, Address: 0x216560, Func Offset: 0x60
	// Line 1070, Address: 0x216584, Func Offset: 0x84
	// Line 1071, Address: 0x2165bc, Func Offset: 0xbc
	// Line 1072, Address: 0x2165d8, Func Offset: 0xd8
	// Line 1073, Address: 0x216604, Func Offset: 0x104
	// Line 1074, Address: 0x216620, Func Offset: 0x120
	// Line 1075, Address: 0x216650, Func Offset: 0x150
	// Line 1076, Address: 0x216670, Func Offset: 0x170
	// Line 1077, Address: 0x2166f4, Func Offset: 0x1f4
	// Line 1078, Address: 0x216768, Func Offset: 0x268
	// Line 1079, Address: 0x2167e8, Func Offset: 0x2e8
	// Line 1080, Address: 0x216858, Func Offset: 0x358
	// Line 1081, Address: 0x2168d8, Func Offset: 0x3d8
	// Line 1082, Address: 0x216948, Func Offset: 0x448
	// Line 1083, Address: 0x2169b8, Func Offset: 0x4b8
	// Line 1084, Address: 0x216a28, Func Offset: 0x528
	// Line 1085, Address: 0x216a30, Func Offset: 0x530
	// Line 1086, Address: 0x216a44, Func Offset: 0x544
	// Line 1087, Address: 0x216a68, Func Offset: 0x568
	// Line 1088, Address: 0x216aa0, Func Offset: 0x5a0
	// Line 1089, Address: 0x216abc, Func Offset: 0x5bc
	// Line 1090, Address: 0x216ae8, Func Offset: 0x5e8
	// Line 1091, Address: 0x216b08, Func Offset: 0x608
	// Line 1092, Address: 0x216b28, Func Offset: 0x628
	// Line 1093, Address: 0x216bac, Func Offset: 0x6ac
	// Line 1094, Address: 0x216c20, Func Offset: 0x720
	// Line 1095, Address: 0x216c90, Func Offset: 0x790
	// Line 1096, Address: 0x216d00, Func Offset: 0x800
	// Line 1097, Address: 0x216d08, Func Offset: 0x808
	// Line 1099, Address: 0x216d24, Func Offset: 0x824
	// Line 1100, Address: 0x216d30, Func Offset: 0x830
	// Line 1101, Address: 0x216d54, Func Offset: 0x854
	// Line 1102, Address: 0x216d8c, Func Offset: 0x88c
	// Line 1103, Address: 0x216da8, Func Offset: 0x8a8
	// Line 1104, Address: 0x216dd4, Func Offset: 0x8d4
	// Line 1105, Address: 0x216df0, Func Offset: 0x8f0
	// Line 1106, Address: 0x216e10, Func Offset: 0x910
	// Line 1107, Address: 0x216e94, Func Offset: 0x994
	// Line 1108, Address: 0x216f08, Func Offset: 0xa08
	// Line 1109, Address: 0x216f78, Func Offset: 0xa78
	// Line 1110, Address: 0x216fe8, Func Offset: 0xae8
	// Line 1111, Address: 0x216ff0, Func Offset: 0xaf0
	// Line 1112, Address: 0x217004, Func Offset: 0xb04
	// Func End, Address: 0x217030, Func Offset: 0xb30
}

// 
// Start address: 0x217030
int option_near(float f0, float f1, float f2, float f3)
{
	// Line 1130, Address: 0x217030, Func Offset: 0
	// Line 1131, Address: 0x217038, Func Offset: 0x8
	// Line 1132, Address: 0x217048, Func Offset: 0x18
	// Line 1133, Address: 0x217058, Func Offset: 0x28
	// Line 1134, Address: 0x21705c, Func Offset: 0x2c
	// Line 1135, Address: 0x217070, Func Offset: 0x40
	// Line 1137, Address: 0x217078, Func Offset: 0x48
	// Line 1138, Address: 0x217088, Func Offset: 0x58
	// Line 1139, Address: 0x21708c, Func Offset: 0x5c
	// Line 1141, Address: 0x2170a0, Func Offset: 0x70
	// Line 1142, Address: 0x2170ac, Func Offset: 0x7c
	// Func End, Address: 0x2170bc, Func Offset: 0x8c
}

// 
// Start address: 0x2170c0
int fade_in()
{
	// Line 1150, Address: 0x2170c0, Func Offset: 0
	// Line 1154, Address: 0x2170c8, Func Offset: 0x8
	// Line 1155, Address: 0x2170dc, Func Offset: 0x1c
	// Line 1157, Address: 0x2170ec, Func Offset: 0x2c
	// Line 1158, Address: 0x2170f4, Func Offset: 0x34
	// Line 1160, Address: 0x217100, Func Offset: 0x40
	// Line 1161, Address: 0x217104, Func Offset: 0x44
	// Func End, Address: 0x217114, Func Offset: 0x54
}

// 
// Start address: 0x217120
int fade_out(int mode)
{
	// Line 1163, Address: 0x217120, Func Offset: 0
	// Line 1167, Address: 0x217130, Func Offset: 0x10
	// Line 1168, Address: 0x217144, Func Offset: 0x24
	// Line 1170, Address: 0x217154, Func Offset: 0x34
	// Line 1171, Address: 0x217160, Func Offset: 0x40
	// Line 1172, Address: 0x217168, Func Offset: 0x48
	// Line 1173, Address: 0x217170, Func Offset: 0x50
	// Line 1175, Address: 0x21717c, Func Offset: 0x5c
	// Line 1176, Address: 0x217188, Func Offset: 0x68
	// Func End, Address: 0x21719c, Func Offset: 0x7c
}

// 
// Start address: 0x2171a0
void look_board()
{
	// Line 1198, Address: 0x2171a0, Func Offset: 0
	// Line 1199, Address: 0x2171ac, Func Offset: 0xc
	// Line 1200, Address: 0x2171d0, Func Offset: 0x30
	// Line 1201, Address: 0x217208, Func Offset: 0x68
	// Line 1202, Address: 0x217224, Func Offset: 0x84
	// Line 1203, Address: 0x217240, Func Offset: 0xa0
	// Line 1204, Address: 0x217260, Func Offset: 0xc0
	// Line 1205, Address: 0x2172d0, Func Offset: 0x130
	// Line 1206, Address: 0x217340, Func Offset: 0x1a0
	// Line 1207, Address: 0x2173b0, Func Offset: 0x210
	// Line 1208, Address: 0x217420, Func Offset: 0x280
	// Line 1209, Address: 0x217490, Func Offset: 0x2f0
	// Line 1210, Address: 0x217500, Func Offset: 0x360
	// Line 1212, Address: 0x217508, Func Offset: 0x368
	// Line 1213, Address: 0x21752c, Func Offset: 0x38c
	// Line 1214, Address: 0x217564, Func Offset: 0x3c4
	// Line 1215, Address: 0x21758c, Func Offset: 0x3ec
	// Line 1216, Address: 0x2175a8, Func Offset: 0x408
	// Line 1217, Address: 0x2175c8, Func Offset: 0x428
	// Line 1218, Address: 0x217638, Func Offset: 0x498
	// Line 1219, Address: 0x2176a8, Func Offset: 0x508
	// Line 1220, Address: 0x217718, Func Offset: 0x578
	// Line 1221, Address: 0x217788, Func Offset: 0x5e8
	// Line 1222, Address: 0x2177f8, Func Offset: 0x658
	// Line 1223, Address: 0x217868, Func Offset: 0x6c8
	// Line 1224, Address: 0x2178d8, Func Offset: 0x738
	// Line 1227, Address: 0x2178e0, Func Offset: 0x740
	// Line 1228, Address: 0x217904, Func Offset: 0x764
	// Line 1229, Address: 0x21793c, Func Offset: 0x79c
	// Line 1230, Address: 0x217958, Func Offset: 0x7b8
	// Line 1231, Address: 0x217974, Func Offset: 0x7d4
	// Line 1232, Address: 0x217994, Func Offset: 0x7f4
	// Line 1233, Address: 0x217a04, Func Offset: 0x864
	// Line 1234, Address: 0x217a74, Func Offset: 0x8d4
	// Line 1235, Address: 0x217ae4, Func Offset: 0x944
	// Line 1236, Address: 0x217b54, Func Offset: 0x9b4
	// Line 1237, Address: 0x217bc4, Func Offset: 0xa24
	// Line 1238, Address: 0x217c34, Func Offset: 0xa94
	// Line 1240, Address: 0x217c3c, Func Offset: 0xa9c
	// Line 1241, Address: 0x217c60, Func Offset: 0xac0
	// Line 1242, Address: 0x217c98, Func Offset: 0xaf8
	// Line 1243, Address: 0x217cc0, Func Offset: 0xb20
	// Line 1244, Address: 0x217cdc, Func Offset: 0xb3c
	// Line 1245, Address: 0x217cfc, Func Offset: 0xb5c
	// Line 1246, Address: 0x217d6c, Func Offset: 0xbcc
	// Line 1247, Address: 0x217ddc, Func Offset: 0xc3c
	// Line 1248, Address: 0x217e4c, Func Offset: 0xcac
	// Line 1249, Address: 0x217ebc, Func Offset: 0xd1c
	// Line 1250, Address: 0x217f2c, Func Offset: 0xd8c
	// Line 1251, Address: 0x217f9c, Func Offset: 0xdfc
	// Line 1252, Address: 0x21800c, Func Offset: 0xe6c
	// Line 1255, Address: 0x218014, Func Offset: 0xe74
	// Line 1256, Address: 0x218038, Func Offset: 0xe98
	// Line 1257, Address: 0x218070, Func Offset: 0xed0
	// Line 1258, Address: 0x218098, Func Offset: 0xef8
	// Line 1259, Address: 0x2180b4, Func Offset: 0xf14
	// Line 1260, Address: 0x2180d4, Func Offset: 0xf34
	// Line 1261, Address: 0x218144, Func Offset: 0xfa4
	// Line 1262, Address: 0x2181b4, Func Offset: 0x1014
	// Line 1263, Address: 0x218224, Func Offset: 0x1084
	// Line 1264, Address: 0x218294, Func Offset: 0x10f4
	// Line 1265, Address: 0x218304, Func Offset: 0x1164
	// Line 1266, Address: 0x218374, Func Offset: 0x11d4
	// Line 1267, Address: 0x2183e4, Func Offset: 0x1244
	// Line 1268, Address: 0x218454, Func Offset: 0x12b4
	// Line 1269, Address: 0x2184c4, Func Offset: 0x1324
	// Line 1270, Address: 0x2184cc, Func Offset: 0x132c
	// Func End, Address: 0x2184e0, Func Offset: 0x1340
}

// 
// Start address: 0x2184e0
void look_cur()
{
	int i;
	// Line 1278, Address: 0x2184e0, Func Offset: 0
	// Line 1280, Address: 0x2184f4, Func Offset: 0x14
	// Line 1281, Address: 0x218504, Func Offset: 0x24
	// Line 1282, Address: 0x218584, Func Offset: 0xa4
	// Line 1284, Address: 0x218604, Func Offset: 0x124
	// Line 1285, Address: 0x218614, Func Offset: 0x134
	// Line 1286, Address: 0x218630, Func Offset: 0x150
	// Line 1287, Address: 0x21864c, Func Offset: 0x16c
	// Line 1288, Address: 0x21865c, Func Offset: 0x17c
	// Line 1289, Address: 0x218734, Func Offset: 0x254
	// Line 1290, Address: 0x21874c, Func Offset: 0x26c
	// Line 1292, Address: 0x218754, Func Offset: 0x274
	// Line 1293, Address: 0x218770, Func Offset: 0x290
	// Line 1294, Address: 0x21878c, Func Offset: 0x2ac
	// Line 1295, Address: 0x21879c, Func Offset: 0x2bc
	// Line 1296, Address: 0x218874, Func Offset: 0x394
	// Line 1298, Address: 0x21888c, Func Offset: 0x3ac
	// Line 1300, Address: 0x2188e8, Func Offset: 0x408
	// Line 1302, Address: 0x2188f4, Func Offset: 0x414
	// Line 1303, Address: 0x218918, Func Offset: 0x438
	// Line 1304, Address: 0x218950, Func Offset: 0x470
	// Line 1305, Address: 0x218968, Func Offset: 0x488
	// Line 1306, Address: 0x218984, Func Offset: 0x4a4
	// Line 1307, Address: 0x2189b0, Func Offset: 0x4d0
	// Line 1308, Address: 0x218a30, Func Offset: 0x550
	// Line 1309, Address: 0x218ab4, Func Offset: 0x5d4
	// Line 1310, Address: 0x218abc, Func Offset: 0x5dc
	// Line 1311, Address: 0x218ae0, Func Offset: 0x600
	// Line 1312, Address: 0x218b18, Func Offset: 0x638
	// Line 1313, Address: 0x218b30, Func Offset: 0x650
	// Line 1314, Address: 0x218b4c, Func Offset: 0x66c
	// Line 1315, Address: 0x218b64, Func Offset: 0x684
	// Line 1316, Address: 0x218be4, Func Offset: 0x704
	// Line 1317, Address: 0x218c68, Func Offset: 0x788
	// Line 1318, Address: 0x218c70, Func Offset: 0x790
	// Line 1319, Address: 0x218c84, Func Offset: 0x7a4
	// Func End, Address: 0x218ca0, Func Offset: 0x7c0
}

// 
// Start address: 0x218ca0
void allow_u(int x, int y)
{
	int rgb;
	// Line 1326, Address: 0x218ca0, Func Offset: 0
	// Line 1329, Address: 0x218cbc, Func Offset: 0x1c
	// Line 1330, Address: 0x218d0c, Func Offset: 0x6c
	// Line 1331, Address: 0x218d40, Func Offset: 0xa0
	// Line 1332, Address: 0x218d64, Func Offset: 0xc4
	// Line 1333, Address: 0x218d9c, Func Offset: 0xfc
	// Line 1334, Address: 0x218db8, Func Offset: 0x118
	// Line 1335, Address: 0x218dd4, Func Offset: 0x134
	// Line 1336, Address: 0x218e08, Func Offset: 0x168
	// Line 1337, Address: 0x218e78, Func Offset: 0x1d8
	// Line 1338, Address: 0x218ee8, Func Offset: 0x248
	// Line 1339, Address: 0x218f58, Func Offset: 0x2b8
	// Line 1340, Address: 0x218f60, Func Offset: 0x2c0
	// Line 1342, Address: 0x218f68, Func Offset: 0x2c8
	// Line 1343, Address: 0x218f8c, Func Offset: 0x2ec
	// Line 1344, Address: 0x218fc4, Func Offset: 0x324
	// Line 1345, Address: 0x218fe0, Func Offset: 0x340
	// Line 1346, Address: 0x218ffc, Func Offset: 0x35c
	// Line 1347, Address: 0x219030, Func Offset: 0x390
	// Line 1348, Address: 0x2190a0, Func Offset: 0x400
	// Line 1349, Address: 0x219110, Func Offset: 0x470
	// Line 1350, Address: 0x219180, Func Offset: 0x4e0
	// Line 1352, Address: 0x219188, Func Offset: 0x4e8
	// Func End, Address: 0x2191a4, Func Offset: 0x504
}

// 
// Start address: 0x2191b0
void allow_d(int x, int y)
{
	int rgb;
	// Line 1354, Address: 0x2191b0, Func Offset: 0
	// Line 1357, Address: 0x2191cc, Func Offset: 0x1c
	// Line 1358, Address: 0x21921c, Func Offset: 0x6c
	// Line 1359, Address: 0x219250, Func Offset: 0xa0
	// Line 1360, Address: 0x219274, Func Offset: 0xc4
	// Line 1361, Address: 0x2192ac, Func Offset: 0xfc
	// Line 1362, Address: 0x2192c8, Func Offset: 0x118
	// Line 1363, Address: 0x2192e4, Func Offset: 0x134
	// Line 1364, Address: 0x219318, Func Offset: 0x168
	// Line 1365, Address: 0x219388, Func Offset: 0x1d8
	// Line 1366, Address: 0x2193f8, Func Offset: 0x248
	// Line 1367, Address: 0x219468, Func Offset: 0x2b8
	// Line 1368, Address: 0x219470, Func Offset: 0x2c0
	// Line 1370, Address: 0x219478, Func Offset: 0x2c8
	// Line 1371, Address: 0x21949c, Func Offset: 0x2ec
	// Line 1372, Address: 0x2194d4, Func Offset: 0x324
	// Line 1373, Address: 0x2194f0, Func Offset: 0x340
	// Line 1374, Address: 0x21950c, Func Offset: 0x35c
	// Line 1375, Address: 0x219540, Func Offset: 0x390
	// Line 1376, Address: 0x2195b0, Func Offset: 0x400
	// Line 1377, Address: 0x219620, Func Offset: 0x470
	// Line 1378, Address: 0x219690, Func Offset: 0x4e0
	// Line 1380, Address: 0x219698, Func Offset: 0x4e8
	// Func End, Address: 0x2196b4, Func Offset: 0x504
}

// 
// Start address: 0x2196c0
void allow_l(int x, int y)
{
	int rgb;
	// Line 1382, Address: 0x2196c0, Func Offset: 0
	// Line 1385, Address: 0x2196dc, Func Offset: 0x1c
	// Line 1386, Address: 0x21972c, Func Offset: 0x6c
	// Line 1387, Address: 0x219760, Func Offset: 0xa0
	// Line 1388, Address: 0x219784, Func Offset: 0xc4
	// Line 1389, Address: 0x2197bc, Func Offset: 0xfc
	// Line 1390, Address: 0x2197d8, Func Offset: 0x118
	// Line 1391, Address: 0x2197f4, Func Offset: 0x134
	// Line 1392, Address: 0x219828, Func Offset: 0x168
	// Line 1393, Address: 0x219898, Func Offset: 0x1d8
	// Line 1394, Address: 0x219908, Func Offset: 0x248
	// Line 1395, Address: 0x219978, Func Offset: 0x2b8
	// Line 1396, Address: 0x219980, Func Offset: 0x2c0
	// Line 1398, Address: 0x219988, Func Offset: 0x2c8
	// Line 1399, Address: 0x2199ac, Func Offset: 0x2ec
	// Line 1400, Address: 0x2199e4, Func Offset: 0x324
	// Line 1401, Address: 0x219a00, Func Offset: 0x340
	// Line 1402, Address: 0x219a1c, Func Offset: 0x35c
	// Line 1403, Address: 0x219a50, Func Offset: 0x390
	// Line 1404, Address: 0x219ac0, Func Offset: 0x400
	// Line 1405, Address: 0x219b30, Func Offset: 0x470
	// Line 1406, Address: 0x219ba0, Func Offset: 0x4e0
	// Line 1408, Address: 0x219ba8, Func Offset: 0x4e8
	// Func End, Address: 0x219bc4, Func Offset: 0x504
}

// 
// Start address: 0x219bd0
void allow_r(int x, int y)
{
	int rgb;
	// Line 1410, Address: 0x219bd0, Func Offset: 0
	// Line 1413, Address: 0x219bec, Func Offset: 0x1c
	// Line 1414, Address: 0x219c3c, Func Offset: 0x6c
	// Line 1415, Address: 0x219c70, Func Offset: 0xa0
	// Line 1416, Address: 0x219c94, Func Offset: 0xc4
	// Line 1417, Address: 0x219ccc, Func Offset: 0xfc
	// Line 1418, Address: 0x219ce8, Func Offset: 0x118
	// Line 1419, Address: 0x219d04, Func Offset: 0x134
	// Line 1420, Address: 0x219d38, Func Offset: 0x168
	// Line 1421, Address: 0x219da8, Func Offset: 0x1d8
	// Line 1422, Address: 0x219e18, Func Offset: 0x248
	// Line 1423, Address: 0x219e88, Func Offset: 0x2b8
	// Line 1424, Address: 0x219e90, Func Offset: 0x2c0
	// Line 1426, Address: 0x219e98, Func Offset: 0x2c8
	// Line 1427, Address: 0x219ebc, Func Offset: 0x2ec
	// Line 1428, Address: 0x219ef4, Func Offset: 0x324
	// Line 1429, Address: 0x219f10, Func Offset: 0x340
	// Line 1430, Address: 0x219f2c, Func Offset: 0x35c
	// Line 1431, Address: 0x219f60, Func Offset: 0x390
	// Line 1432, Address: 0x219fd0, Func Offset: 0x400
	// Line 1433, Address: 0x21a040, Func Offset: 0x470
	// Line 1434, Address: 0x21a0b0, Func Offset: 0x4e0
	// Line 1436, Address: 0x21a0b8, Func Offset: 0x4e8
	// Func End, Address: 0x21a0d4, Func Offset: 0x504
}

// 
// Start address: 0x21a0e0
void KeyConfigPictureLoad()
{
	// Line 1445, Address: 0x21a0e0, Func Offset: 0
	// Line 1446, Address: 0x21a0e8, Func Offset: 0x8
	// Line 1447, Address: 0x21a104, Func Offset: 0x24
	// Func End, Address: 0x21a114, Func Offset: 0x34
}

// 
// Start address: 0x21a120
void KeyConfigPitureStart()
{
	// Line 1450, Address: 0x21a120, Func Offset: 0
	// Line 1451, Address: 0x21a128, Func Offset: 0x8
	// Line 1453, Address: 0x21a148, Func Offset: 0x28
	// Line 1455, Address: 0x21a15c, Func Offset: 0x3c
	// Line 1456, Address: 0x21a194, Func Offset: 0x74
	// Line 1457, Address: 0x21a1e0, Func Offset: 0xc0
	// Func End, Address: 0x21a1f0, Func Offset: 0xd0
}

// 
// Start address: 0x21a1f0
void key_draw(int key_kind, int xx, int yy)
{
	unsigned char key_pos[2][12];
	// Line 1460, Address: 0x21a1f0, Func Offset: 0
	// Line 1461, Address: 0x21a1f8, Func Offset: 0x8
	// Line 1468, Address: 0x21a214, Func Offset: 0x24
	// Line 1471, Address: 0x21a268, Func Offset: 0x78
	// Line 1472, Address: 0x21a2bc, Func Offset: 0xcc
	// Line 1473, Address: 0x21a2ec, Func Offset: 0xfc
	// Line 1474, Address: 0x21a2f8, Func Offset: 0x108
	// Line 1476, Address: 0x21a308, Func Offset: 0x118
	// Func End, Address: 0x21a318, Func Offset: 0x128
}

// 
// Start address: 0x21a320
void option_font()
{
	float f;
	char buf2[4];
	char buf[4];
	// Line 1484, Address: 0x21a320, Func Offset: 0
	// Line 1488, Address: 0x21a334, Func Offset: 0x14
	// Line 1489, Address: 0x21a354, Func Offset: 0x34
	// Line 1491, Address: 0x21a36c, Func Offset: 0x4c
	// Line 1493, Address: 0x21a380, Func Offset: 0x60
	// Line 1495, Address: 0x21a390, Func Offset: 0x70
	// Line 1496, Address: 0x21a3ac, Func Offset: 0x8c
	// Line 1497, Address: 0x21a3c4, Func Offset: 0xa4
	// Line 1498, Address: 0x21a3e0, Func Offset: 0xc0
	// Line 1499, Address: 0x21a3fc, Func Offset: 0xdc
	// Line 1500, Address: 0x21a418, Func Offset: 0xf8
	// Line 1501, Address: 0x21a434, Func Offset: 0x114
	// Line 1502, Address: 0x21a450, Func Offset: 0x130
	// Line 1503, Address: 0x21a46c, Func Offset: 0x14c
	// Line 1504, Address: 0x21a488, Func Offset: 0x168
	// Line 1505, Address: 0x21a4a4, Func Offset: 0x184
	// Line 1506, Address: 0x21a4c0, Func Offset: 0x1a0
	// Line 1507, Address: 0x21a4dc, Func Offset: 0x1bc
	// Line 1508, Address: 0x21a4f8, Func Offset: 0x1d8
	// Line 1509, Address: 0x21a510, Func Offset: 0x1f0
	// Line 1510, Address: 0x21a53c, Func Offset: 0x21c
	// Line 1511, Address: 0x21a56c, Func Offset: 0x24c
	// Line 1512, Address: 0x21a59c, Func Offset: 0x27c
	// Line 1513, Address: 0x21a5cc, Func Offset: 0x2ac
	// Line 1514, Address: 0x21a5fc, Func Offset: 0x2dc
	// Line 1515, Address: 0x21a62c, Func Offset: 0x30c
	// Line 1516, Address: 0x21a65c, Func Offset: 0x33c
	// Line 1517, Address: 0x21a68c, Func Offset: 0x36c
	// Line 1518, Address: 0x21a6bc, Func Offset: 0x39c
	// Line 1519, Address: 0x21a6ec, Func Offset: 0x3cc
	// Line 1522, Address: 0x21a71c, Func Offset: 0x3fc
	// Line 1523, Address: 0x21a734, Func Offset: 0x414
	// Line 1524, Address: 0x21a768, Func Offset: 0x448
	// Line 1525, Address: 0x21a790, Func Offset: 0x470
	// Line 1526, Address: 0x21a7c4, Func Offset: 0x4a4
	// Line 1527, Address: 0x21a7f4, Func Offset: 0x4d4
	// Line 1528, Address: 0x21a824, Func Offset: 0x504
	// Line 1529, Address: 0x21a84c, Func Offset: 0x52c
	// Line 1530, Address: 0x21a880, Func Offset: 0x560
	// Line 1531, Address: 0x21a89c, Func Offset: 0x57c
	// Line 1532, Address: 0x21a8d0, Func Offset: 0x5b0
	// Line 1533, Address: 0x21a900, Func Offset: 0x5e0
	// Line 1534, Address: 0x21a930, Func Offset: 0x610
	// Line 1535, Address: 0x21a960, Func Offset: 0x640
	// Line 1536, Address: 0x21a990, Func Offset: 0x670
	// Line 1537, Address: 0x21a9b8, Func Offset: 0x698
	// Line 1538, Address: 0x21a9ec, Func Offset: 0x6cc
	// Line 1539, Address: 0x21aa08, Func Offset: 0x6e8
	// Line 1540, Address: 0x21aa3c, Func Offset: 0x71c
	// Line 1541, Address: 0x21aa6c, Func Offset: 0x74c
	// Line 1543, Address: 0x21aa88, Func Offset: 0x768
	// Line 1544, Address: 0x21aaa0, Func Offset: 0x780
	// Line 1545, Address: 0x21aab4, Func Offset: 0x794
	// Line 1546, Address: 0x21aae8, Func Offset: 0x7c8
	// Line 1548, Address: 0x21ab10, Func Offset: 0x7f0
	// Line 1549, Address: 0x21ab24, Func Offset: 0x804
	// Line 1550, Address: 0x21ab58, Func Offset: 0x838
	// Line 1551, Address: 0x21ab88, Func Offset: 0x868
	// Line 1552, Address: 0x21abb8, Func Offset: 0x898
	// Line 1554, Address: 0x21abe0, Func Offset: 0x8c0
	// Line 1555, Address: 0x21abf4, Func Offset: 0x8d4
	// Line 1556, Address: 0x21ac28, Func Offset: 0x908
	// Line 1558, Address: 0x21ac44, Func Offset: 0x924
	// Line 1559, Address: 0x21ac58, Func Offset: 0x938
	// Line 1560, Address: 0x21ac8c, Func Offset: 0x96c
	// Line 1561, Address: 0x21acbc, Func Offset: 0x99c
	// Line 1562, Address: 0x21acec, Func Offset: 0x9cc
	// Line 1563, Address: 0x21ad1c, Func Offset: 0x9fc
	// Line 1564, Address: 0x21ad4c, Func Offset: 0xa2c
	// Line 1566, Address: 0x21ad74, Func Offset: 0xa54
	// Line 1567, Address: 0x21ad88, Func Offset: 0xa68
	// Line 1568, Address: 0x21adbc, Func Offset: 0xa9c
	// Line 1570, Address: 0x21add8, Func Offset: 0xab8
	// Line 1571, Address: 0x21adec, Func Offset: 0xacc
	// Line 1572, Address: 0x21ae20, Func Offset: 0xb00
	// Line 1573, Address: 0x21ae50, Func Offset: 0xb30
	// Line 1579, Address: 0x21ae6c, Func Offset: 0xb4c
	// Line 1580, Address: 0x21ae98, Func Offset: 0xb78
	// Line 1581, Address: 0x21aec8, Func Offset: 0xba8
	// Line 1582, Address: 0x21aef8, Func Offset: 0xbd8
	// Line 1583, Address: 0x21af28, Func Offset: 0xc08
	// Line 1584, Address: 0x21af58, Func Offset: 0xc38
	// Line 1585, Address: 0x21af88, Func Offset: 0xc68
	// Line 1586, Address: 0x21afb8, Func Offset: 0xc98
	// Line 1587, Address: 0x21afe8, Func Offset: 0xcc8
	// Line 1588, Address: 0x21b018, Func Offset: 0xcf8
	// Line 1589, Address: 0x21b048, Func Offset: 0xd28
	// Line 1590, Address: 0x21b078, Func Offset: 0xd58
	// Line 1594, Address: 0x21b080, Func Offset: 0xd60
	// Line 1596, Address: 0x21b09c, Func Offset: 0xd7c
	// Line 1597, Address: 0x21b0b4, Func Offset: 0xd94
	// Line 1598, Address: 0x21b0d0, Func Offset: 0xdb0
	// Line 1599, Address: 0x21b0ec, Func Offset: 0xdcc
	// Line 1600, Address: 0x21b108, Func Offset: 0xde8
	// Line 1601, Address: 0x21b124, Func Offset: 0xe04
	// Line 1603, Address: 0x21b140, Func Offset: 0xe20
	// Line 1604, Address: 0x21b15c, Func Offset: 0xe3c
	// Line 1605, Address: 0x21b178, Func Offset: 0xe58
	// Line 1606, Address: 0x21b190, Func Offset: 0xe70
	// Line 1607, Address: 0x21b1bc, Func Offset: 0xe9c
	// Line 1608, Address: 0x21b1ec, Func Offset: 0xecc
	// Line 1609, Address: 0x21b21c, Func Offset: 0xefc
	// Line 1610, Address: 0x21b24c, Func Offset: 0xf2c
	// Line 1612, Address: 0x21b27c, Func Offset: 0xf5c
	// Line 1613, Address: 0x21b2ac, Func Offset: 0xf8c
	// Line 1616, Address: 0x21b2dc, Func Offset: 0xfbc
	// Line 1617, Address: 0x21b2f4, Func Offset: 0xfd4
	// Line 1618, Address: 0x21b328, Func Offset: 0x1008
	// Line 1619, Address: 0x21b344, Func Offset: 0x1024
	// Line 1620, Address: 0x21b378, Func Offset: 0x1058
	// Line 1621, Address: 0x21b3a8, Func Offset: 0x1088
	// Line 1622, Address: 0x21b3d8, Func Offset: 0x10b8
	// Line 1623, Address: 0x21b400, Func Offset: 0x10e0
	// Line 1624, Address: 0x21b434, Func Offset: 0x1114
	// Line 1625, Address: 0x21b450, Func Offset: 0x1130
	// Line 1626, Address: 0x21b484, Func Offset: 0x1164
	// Line 1627, Address: 0x21b4a0, Func Offset: 0x1180
	// Line 1628, Address: 0x21b4d4, Func Offset: 0x11b4
	// Line 1631, Address: 0x21b4f0, Func Offset: 0x11d0
	// Line 1632, Address: 0x21b524, Func Offset: 0x1204
	// Line 1633, Address: 0x21b540, Func Offset: 0x1220
	// Line 1634, Address: 0x21b55c, Func Offset: 0x123c
	// Line 1635, Address: 0x21b578, Func Offset: 0x1258
	// Line 1637, Address: 0x21b594, Func Offset: 0x1274
	// Line 1638, Address: 0x21b5ac, Func Offset: 0x128c
	// Line 1639, Address: 0x21b5bc, Func Offset: 0x129c
	// Line 1640, Address: 0x21b5f0, Func Offset: 0x12d0
	// Line 1642, Address: 0x21b60c, Func Offset: 0x12ec
	// Line 1643, Address: 0x21b620, Func Offset: 0x1300
	// Line 1644, Address: 0x21b654, Func Offset: 0x1334
	// Line 1645, Address: 0x21b680, Func Offset: 0x1360
	// Line 1646, Address: 0x21b6b0, Func Offset: 0x1390
	// Line 1648, Address: 0x21b6d8, Func Offset: 0x13b8
	// Line 1649, Address: 0x21b6ec, Func Offset: 0x13cc
	// Line 1650, Address: 0x21b720, Func Offset: 0x1400
	// Line 1652, Address: 0x21b73c, Func Offset: 0x141c
	// Line 1653, Address: 0x21b750, Func Offset: 0x1430
	// Line 1654, Address: 0x21b784, Func Offset: 0x1464
	// Line 1656, Address: 0x21b7a0, Func Offset: 0x1480
	// Line 1657, Address: 0x21b7b4, Func Offset: 0x1494
	// Line 1658, Address: 0x21b7e8, Func Offset: 0x14c8
	// Line 1664, Address: 0x21b804, Func Offset: 0x14e4
	// Line 1665, Address: 0x21b818, Func Offset: 0x14f8
	// Line 1666, Address: 0x21b84c, Func Offset: 0x152c
	// Line 1668, Address: 0x21b868, Func Offset: 0x1548
	// Line 1669, Address: 0x21b87c, Func Offset: 0x155c
	// Line 1670, Address: 0x21b898, Func Offset: 0x1578
	// Line 1671, Address: 0x21b8b4, Func Offset: 0x1594
	// Line 1674, Address: 0x21b8d0, Func Offset: 0x15b0
	// Line 1675, Address: 0x21b8fc, Func Offset: 0x15dc
	// Line 1676, Address: 0x21b92c, Func Offset: 0x160c
	// Line 1677, Address: 0x21b95c, Func Offset: 0x163c
	// Line 1678, Address: 0x21b98c, Func Offset: 0x166c
	// Line 1680, Address: 0x21b9bc, Func Offset: 0x169c
	// Line 1681, Address: 0x21b9ec, Func Offset: 0x16cc
	// Line 1683, Address: 0x21ba1c, Func Offset: 0x16fc
	// Line 1684, Address: 0x21ba24, Func Offset: 0x1704
	// Line 1686, Address: 0x21ba30, Func Offset: 0x1710
	// Line 1687, Address: 0x21ba4c, Func Offset: 0x172c
	// Line 1688, Address: 0x21ba68, Func Offset: 0x1748
	// Line 1689, Address: 0x21ba84, Func Offset: 0x1764
	// Line 1690, Address: 0x21baa0, Func Offset: 0x1780
	// Line 1691, Address: 0x21baa8, Func Offset: 0x1788
	// Line 1693, Address: 0x21bab4, Func Offset: 0x1794
	// Line 1694, Address: 0x21bae4, Func Offset: 0x17c4
	// Line 1695, Address: 0x21bb1c, Func Offset: 0x17fc
	// Line 1696, Address: 0x21bb38, Func Offset: 0x1818
	// Line 1697, Address: 0x21bb54, Func Offset: 0x1834
	// Line 1700, Address: 0x21bb70, Func Offset: 0x1850
	// Func End, Address: 0x21bb84, Func Offset: 0x1864
}

// 
// Start address: 0x21bb90
void look_scr()
{
	int j;
	int i;
	// Line 1705, Address: 0x21bb90, Func Offset: 0
	// Line 1707, Address: 0x21bbac, Func Offset: 0x1c
	// Line 1709, Address: 0x21bbc4, Func Offset: 0x34
	// Line 1710, Address: 0x21bbe8, Func Offset: 0x58
	// Line 1711, Address: 0x21bc20, Func Offset: 0x90
	// Line 1712, Address: 0x21bc38, Func Offset: 0xa8
	// Line 1713, Address: 0x21bc54, Func Offset: 0xc4
	// Line 1714, Address: 0x21bc74, Func Offset: 0xe4
	// Line 1715, Address: 0x21bcec, Func Offset: 0x15c
	// Line 1716, Address: 0x21bd5c, Func Offset: 0x1cc
	// Line 1717, Address: 0x21bd64, Func Offset: 0x1d4
	// Line 1718, Address: 0x21bd84, Func Offset: 0x1f4
	// Func End, Address: 0x21bda8, Func Offset: 0x218
}

// 
// Start address: 0x21bdb0
int zs(int hoge)
{
	// Line 1725, Address: 0x21bdb0, Func Offset: 0
	// Line 1726, Address: 0x21bdb8, Func Offset: 0x8
	// Func End, Address: 0x21bdc0, Func Offset: 0x10
}

