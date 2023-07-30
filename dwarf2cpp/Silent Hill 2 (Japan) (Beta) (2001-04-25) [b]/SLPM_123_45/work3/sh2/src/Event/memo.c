typedef struct Pad_KeyConfig;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _SH2_SYS;
typedef struct _anon2;
typedef struct fsCdFile;
typedef struct _anon3;
typedef struct fsMgfFile;
typedef struct Playing_Info;
typedef struct fsHdFile;
typedef struct fsMgpFile;


typedef char type_0[0];
typedef short type_1[4];
typedef short type_2[4][4];
typedef short type_3[4][4][9];
typedef fsFileIndex type_4[1];
typedef short type_5[2];
typedef short type_6[2][4];
typedef short type_7[2][4][9];
typedef unsigned int type_8[8];
typedef unsigned char type_9[8];
typedef unsigned short type_10[0];
typedef unsigned char type_11[3];
typedef short type_12[2];
typedef short type_13[2][31];
typedef unsigned int type_14[256];
typedef unsigned int type_15[32];
typedef int type_16[8];
typedef unsigned char type_17[4];
typedef char type_18[4];
typedef char type_19[4];
typedef _anon2 type_20[31];
typedef unsigned char type_21[4];
typedef char type_22[0];

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

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct _anon0
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

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
};

struct _anon1
{
	fsFile* fp;
	char* name;
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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _anon2
{
	short flag;
	short status;
	short msg_label;
	short msg_memo;
	fsFileIndex* file0;
	fsFileIndex* file1;
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

struct _anon3
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

_anon2 data[31];
_SH2_SYS Sh2sys;
_anon3 game_flag;
char pic_buf_0[0];
fsFileIndex data_pic_etc_title_tex[1];
int disp_point;
int select;
int list_point;
Playing_Info playing;
unsigned short msg_buffer[0];
Pad_KeyConfig key_config;
float dtf;
char pic_buf_1[0];

void MemoMain();
int MemoCommandCheck();
void MemoInit();
void MemoSelect();
void MemoDisplay();
void MemoEnd();
void MemoPictureLoad(fsFileIndex* file0, fsFileIndex* file1);
void MemoPictureBaseDraw(int rgb);
void MemoSelectBarDraw(int msg, int y);
void MemoPictureLayerDraw();
void MemoPictureLayerDrawGuruguru();
void MemoPictureLayerDrawAngelRing();

// 
// Start address: 0x240900
void MemoMain()
{
	// Line 180, Address: 0x240900, Func Offset: 0
	// Line 181, Address: 0x240908, Func Offset: 0x8
	// Line 183, Address: 0x24093c, Func Offset: 0x3c
	// Line 184, Address: 0x24094c, Func Offset: 0x4c
	// Line 185, Address: 0x24095c, Func Offset: 0x5c
	// Line 186, Address: 0x24096c, Func Offset: 0x6c
	// Line 188, Address: 0x240974, Func Offset: 0x74
	// Func End, Address: 0x240984, Func Offset: 0x84
}

// 
// Start address: 0x240990
int MemoCommandCheck()
{
	int i;
	// Line 194, Address: 0x240990, Func Offset: 0
	// Line 197, Address: 0x240998, Func Offset: 0x8
	// Line 198, Address: 0x2409a4, Func Offset: 0x14
	// Line 200, Address: 0x240a24, Func Offset: 0x94
	// Line 201, Address: 0x240a28, Func Offset: 0x98
	// Func End, Address: 0x240a38, Func Offset: 0xa8
}

// 
// Start address: 0x240a40
void MemoInit()
{
	int i;
	// Line 214, Address: 0x240a40, Func Offset: 0
	// Line 217, Address: 0x240a4c, Func Offset: 0xc
	// Line 219, Address: 0x240a88, Func Offset: 0x48
	// Line 220, Address: 0x240a9c, Func Offset: 0x5c
	// Line 221, Address: 0x240aac, Func Offset: 0x6c
	// Line 222, Address: 0x240ab8, Func Offset: 0x78
	// Line 223, Address: 0x240b4c, Func Offset: 0x10c
	// Line 224, Address: 0x240b54, Func Offset: 0x114
	// Line 225, Address: 0x240b60, Func Offset: 0x120
	// Line 226, Address: 0x240b78, Func Offset: 0x138
	// Line 229, Address: 0x240ba4, Func Offset: 0x164
	// Line 230, Address: 0x240bbc, Func Offset: 0x17c
	// Line 234, Address: 0x240be8, Func Offset: 0x1a8
	// Line 237, Address: 0x240c14, Func Offset: 0x1d4
	// Line 238, Address: 0x240c24, Func Offset: 0x1e4
	// Line 241, Address: 0x240c50, Func Offset: 0x210
	// Func End, Address: 0x240c64, Func Offset: 0x224
}

// 
// Start address: 0x240c70
void MemoSelect()
{
	int j;
	int i;
	int alpha;
	int work;
	int list_number;
	short list[2][31];
	// Line 246, Address: 0x240c70, Func Offset: 0
	// Line 258, Address: 0x240c8c, Func Offset: 0x1c
	// Line 259, Address: 0x240c90, Func Offset: 0x20
	// Line 260, Address: 0x240c9c, Func Offset: 0x2c
	// Line 262, Address: 0x240d00, Func Offset: 0x90
	// Line 263, Address: 0x240d0c, Func Offset: 0x9c
	// Line 264, Address: 0x240d2c, Func Offset: 0xbc
	// Line 266, Address: 0x240d30, Func Offset: 0xc0
	// Line 268, Address: 0x240d44, Func Offset: 0xd4
	// Line 269, Address: 0x240d60, Func Offset: 0xf0
	// Line 270, Address: 0x240d8c, Func Offset: 0x11c
	// Line 271, Address: 0x240db0, Func Offset: 0x140
	// Line 272, Address: 0x240ddc, Func Offset: 0x16c
	// Line 273, Address: 0x240dfc, Func Offset: 0x18c
	// Line 274, Address: 0x240e10, Func Offset: 0x1a0
	// Line 275, Address: 0x240e2c, Func Offset: 0x1bc
	// Line 276, Address: 0x240e40, Func Offset: 0x1d0
	// Line 277, Address: 0x240e60, Func Offset: 0x1f0
	// Line 278, Address: 0x240e80, Func Offset: 0x210
	// Line 279, Address: 0x240e94, Func Offset: 0x224
	// Line 280, Address: 0x240eb0, Func Offset: 0x240
	// Line 281, Address: 0x240ec4, Func Offset: 0x254
	// Line 283, Address: 0x240ee4, Func Offset: 0x274
	// Line 285, Address: 0x240f08, Func Offset: 0x298
	// Line 286, Address: 0x240f14, Func Offset: 0x2a4
	// Line 287, Address: 0x240f1c, Func Offset: 0x2ac
	// Line 288, Address: 0x240f28, Func Offset: 0x2b8
	// Line 289, Address: 0x240f34, Func Offset: 0x2c4
	// Line 290, Address: 0x240f48, Func Offset: 0x2d8
	// Line 291, Address: 0x240f70, Func Offset: 0x300
	// Line 292, Address: 0x240f80, Func Offset: 0x310
	// Line 293, Address: 0x240fa0, Func Offset: 0x330
	// Line 294, Address: 0x240fb4, Func Offset: 0x344
	// Line 295, Address: 0x240fbc, Func Offset: 0x34c
	// Line 296, Address: 0x240fc8, Func Offset: 0x358
	// Line 297, Address: 0x240fe4, Func Offset: 0x374
	// Line 298, Address: 0x240ff0, Func Offset: 0x380
	// Line 299, Address: 0x241000, Func Offset: 0x390
	// Line 300, Address: 0x241008, Func Offset: 0x398
	// Line 301, Address: 0x24104c, Func Offset: 0x3dc
	// Line 302, Address: 0x241058, Func Offset: 0x3e8
	// Line 303, Address: 0x241064, Func Offset: 0x3f4
	// Line 304, Address: 0x241070, Func Offset: 0x400
	// Line 305, Address: 0x241074, Func Offset: 0x404
	// Line 306, Address: 0x241078, Func Offset: 0x408
	// Line 307, Address: 0x241084, Func Offset: 0x414
	// Line 308, Address: 0x2410ac, Func Offset: 0x43c
	// Line 309, Address: 0x2410bc, Func Offset: 0x44c
	// Line 310, Address: 0x2410e0, Func Offset: 0x470
	// Line 311, Address: 0x2410f4, Func Offset: 0x484
	// Line 312, Address: 0x2410f8, Func Offset: 0x488
	// Func End, Address: 0x24111c, Func Offset: 0x4ac
}

// 
// Start address: 0x241120
void MemoDisplay()
{
	unsigned char c_work[8];
	float alpha;
	// Line 329, Address: 0x241120, Func Offset: 0
	// Line 334, Address: 0x241128, Func Offset: 0x8
	// Line 336, Address: 0x241158, Func Offset: 0x38
	// Line 337, Address: 0x241168, Func Offset: 0x48
	// Line 340, Address: 0x2411ac, Func Offset: 0x8c
	// Line 341, Address: 0x2411ec, Func Offset: 0xcc
	// Line 342, Address: 0x241230, Func Offset: 0x110
	// Line 343, Address: 0x241240, Func Offset: 0x120
	// Line 346, Address: 0x24126c, Func Offset: 0x14c
	// Line 347, Address: 0x241294, Func Offset: 0x174
	// Line 348, Address: 0x2412a4, Func Offset: 0x184
	// Line 349, Address: 0x2412ac, Func Offset: 0x18c
	// Line 352, Address: 0x2412d8, Func Offset: 0x1b8
	// Line 353, Address: 0x241304, Func Offset: 0x1e4
	// Line 354, Address: 0x241330, Func Offset: 0x210
	// Line 355, Address: 0x241340, Func Offset: 0x220
	// Line 356, Address: 0x241370, Func Offset: 0x250
	// Line 357, Address: 0x24139c, Func Offset: 0x27c
	// Line 359, Address: 0x2413c0, Func Offset: 0x2a0
	// Line 362, Address: 0x2413c8, Func Offset: 0x2a8
	// Line 363, Address: 0x2413f4, Func Offset: 0x2d4
	// Line 364, Address: 0x241420, Func Offset: 0x300
	// Line 365, Address: 0x241448, Func Offset: 0x328
	// Line 366, Address: 0x241478, Func Offset: 0x358
	// Line 368, Address: 0x2414a4, Func Offset: 0x384
	// Line 369, Address: 0x2414b4, Func Offset: 0x394
	// Line 372, Address: 0x2414d8, Func Offset: 0x3b8
	// Line 375, Address: 0x2414e0, Func Offset: 0x3c0
	// Line 376, Address: 0x2414f4, Func Offset: 0x3d4
	// Line 377, Address: 0x241514, Func Offset: 0x3f4
	// Line 378, Address: 0x241534, Func Offset: 0x414
	// Line 379, Address: 0x241554, Func Offset: 0x434
	// Line 380, Address: 0x241574, Func Offset: 0x454
	// Line 381, Address: 0x241578, Func Offset: 0x458
	// Line 383, Address: 0x241594, Func Offset: 0x474
	// Line 384, Address: 0x2415c4, Func Offset: 0x4a4
	// Line 386, Address: 0x2415f0, Func Offset: 0x4d0
	// Line 387, Address: 0x24160c, Func Offset: 0x4ec
	// Line 388, Address: 0x241638, Func Offset: 0x518
	// Line 389, Address: 0x241664, Func Offset: 0x544
	// Line 390, Address: 0x241690, Func Offset: 0x570
	// Line 391, Address: 0x2416a4, Func Offset: 0x584
	// Line 392, Address: 0x2416ac, Func Offset: 0x58c
	// Line 393, Address: 0x2416bc, Func Offset: 0x59c
	// Line 395, Address: 0x2416e0, Func Offset: 0x5c0
	// Line 398, Address: 0x2416e8, Func Offset: 0x5c8
	// Line 399, Address: 0x241714, Func Offset: 0x5f4
	// Line 400, Address: 0x241740, Func Offset: 0x620
	// Line 401, Address: 0x24177c, Func Offset: 0x65c
	// Line 404, Address: 0x241784, Func Offset: 0x664
	// Line 405, Address: 0x2417a8, Func Offset: 0x688
	// Line 406, Address: 0x2417c0, Func Offset: 0x6a0
	// Line 408, Address: 0x2417ec, Func Offset: 0x6cc
	// Line 411, Address: 0x241830, Func Offset: 0x710
	// Func End, Address: 0x241840, Func Offset: 0x720
}

// 
// Start address: 0x241840
void MemoEnd()
{
	// Line 416, Address: 0x241840, Func Offset: 0
	// Line 417, Address: 0x241848, Func Offset: 0x8
	// Line 418, Address: 0x24185c, Func Offset: 0x1c
	// Line 419, Address: 0x24186c, Func Offset: 0x2c
	// Line 420, Address: 0x2418a0, Func Offset: 0x60
	// Func End, Address: 0x2418b0, Func Offset: 0x70
}

// 
// Start address: 0x2418b0
void MemoPictureLoad(fsFileIndex* file0, fsFileIndex* file1)
{
	// Line 426, Address: 0x2418b0, Func Offset: 0
	// Line 427, Address: 0x2418c0, Func Offset: 0x10
	// Line 428, Address: 0x2418e0, Func Offset: 0x30
	// Line 429, Address: 0x241900, Func Offset: 0x50
	// Func End, Address: 0x241910, Func Offset: 0x60
}

// 
// Start address: 0x241910
void MemoPictureBaseDraw(int rgb)
{
	PicDraw_Data pic;
	// Line 435, Address: 0x241910, Func Offset: 0
	// Line 438, Address: 0x24191c, Func Offset: 0xc
	// Line 440, Address: 0x241938, Func Offset: 0x28
	// Line 442, Address: 0x241948, Func Offset: 0x38
	// Line 443, Address: 0x241970, Func Offset: 0x60
	// Line 444, Address: 0x241978, Func Offset: 0x68
	// Line 445, Address: 0x2419a8, Func Offset: 0x98
	// Line 446, Address: 0x2419b4, Func Offset: 0xa4
	// Func End, Address: 0x2419c4, Func Offset: 0xb4
}

// 
// Start address: 0x2419d0
void MemoSelectBarDraw(int msg, int y)
{
	int w;
	int wl[8];
	PicDraw_Data pic;
	// Line 452, Address: 0x2419d0, Func Offset: 0
	// Line 457, Address: 0x2419e4, Func Offset: 0x14
	// Line 458, Address: 0x241a0c, Func Offset: 0x3c
	// Line 459, Address: 0x241a18, Func Offset: 0x48
	// Line 461, Address: 0x241a24, Func Offset: 0x54
	// Line 462, Address: 0x241a34, Func Offset: 0x64
	// Line 464, Address: 0x241a3c, Func Offset: 0x6c
	// Line 465, Address: 0x241a78, Func Offset: 0xa8
	// Line 466, Address: 0x241a9c, Func Offset: 0xcc
	// Line 467, Address: 0x241ad0, Func Offset: 0x100
	// Line 468, Address: 0x241adc, Func Offset: 0x10c
	// Func End, Address: 0x241af0, Func Offset: 0x120
}

// 
// Start address: 0x241af0
void MemoPictureLayerDraw()
{
	// Line 473, Address: 0x241af0, Func Offset: 0
	// Line 474, Address: 0x241af8, Func Offset: 0x8
	// Line 475, Address: 0x241b20, Func Offset: 0x30
	// Line 477, Address: 0x241b30, Func Offset: 0x40
	// Line 479, Address: 0x241b60, Func Offset: 0x70
	// Line 482, Address: 0x241b68, Func Offset: 0x78
	// Func End, Address: 0x241b78, Func Offset: 0x88
}

// 
// Start address: 0x241b80
void MemoPictureLayerDrawGuruguru()
{
	int i;
	int no;
	PicDraw_Data pic;
	short tex[4][4][9];
	short pos[2][4][9];
	// Line 487, Address: 0x241b80, Func Offset: 0
	// Line 521, Address: 0x241b90, Func Offset: 0x10
	// Line 523, Address: 0x241bac, Func Offset: 0x2c
	// Line 525, Address: 0x241bbc, Func Offset: 0x3c
	// Line 526, Address: 0x241be4, Func Offset: 0x64
	// Line 527, Address: 0x241bec, Func Offset: 0x6c
	// Line 528, Address: 0x241c20, Func Offset: 0xa0
	// Line 529, Address: 0x241c2c, Func Offset: 0xac
	// Line 533, Address: 0x241c44, Func Offset: 0xc4
	// Line 536, Address: 0x241d58, Func Offset: 0x1d8
	// Line 537, Address: 0x241e1c, Func Offset: 0x29c
	// Line 538, Address: 0x241e28, Func Offset: 0x2a8
	// Line 539, Address: 0x241e3c, Func Offset: 0x2bc
	// Func End, Address: 0x241e54, Func Offset: 0x2d4
}

// 
// Start address: 0x241e60
void MemoPictureLayerDrawAngelRing()
{
	PicDraw_Data pic;
	// Line 544, Address: 0x241e60, Func Offset: 0
	// Line 547, Address: 0x241e68, Func Offset: 0x8
	// Line 549, Address: 0x241e84, Func Offset: 0x24
	// Line 551, Address: 0x241e94, Func Offset: 0x34
	// Line 553, Address: 0x241ebc, Func Offset: 0x5c
	// Line 554, Address: 0x241ed4, Func Offset: 0x74
	// Line 555, Address: 0x241f00, Func Offset: 0xa0
	// Line 556, Address: 0x241f24, Func Offset: 0xc4
	// Line 557, Address: 0x241f2c, Func Offset: 0xcc
	// Line 558, Address: 0x241f60, Func Offset: 0x100
	// Line 561, Address: 0x241f6c, Func Offset: 0x10c
	// Line 562, Address: 0x241f84, Func Offset: 0x124
	// Line 563, Address: 0x241fb0, Func Offset: 0x150
	// Line 564, Address: 0x241fd8, Func Offset: 0x178
	// Line 565, Address: 0x241fe0, Func Offset: 0x180
	// Line 566, Address: 0x242014, Func Offset: 0x1b4
	// Line 568, Address: 0x242020, Func Offset: 0x1c0
	// Func End, Address: 0x242030, Func Offset: 0x1d0
}

