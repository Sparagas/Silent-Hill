typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _SH2_SYS;
typedef struct _anon1;
typedef struct _anon2;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct Pad_KeyConfig;
typedef struct PicDraw_Data;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon3;

typedef void(*type_9)();

typedef char type_0[294912];
typedef unsigned char type_1[3];
typedef char type_2[294912];
typedef unsigned int type_3[8];
typedef fsFileIndex type_4[1];
typedef unsigned int type_5[5];
typedef unsigned char type_6[60];
typedef _anon2 type_7[1];
typedef fsFileIndex type_8[1];
typedef void(*type_10)()[8];
typedef char type_11[1081344];

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

struct _anon1
{
	int mode;
	int sel;
	int timer;
	int alpha;
	float alphar;
	int cont_flg;
	int load_flg;
	unsigned int menu[5];
	PicDraw_Data pic0;
};

struct _anon2
{
	unsigned char str[60];
	int x;
	int y;
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

_anon2 TitleStr[1];
_anon1 TitleData;
_SH2_SYS Sh2sys;
char pic_buf_0[1081344];
fsFileIndex data_pic_title_tex[1];
Pad_KeyConfig key_config;
fsFileIndex data_pic_comingsoon_tex[1];
char pic_buf_2[294912];
char pic_buf_1[294912];

int TitleMain();
void titleInit();
void titleFadeIn();
void titleMainSelect();
void titleBattleSelect();
void titleRiddleSelect();
void titleFadeOutNewGame();
void titleFadeOut();
void titleExit();
void titleDrawTitle();
void titleDrawMainMenu();
void titleDrawBattleMenu();
void titleDrawRiddleMenu();
void titleDispMenuString(unsigned char* str, int alpha, int x, int y, int dif);
int GameendMain();
int GameoverMain();

// 
// Start address: 0x1ca3c0
int TitleMain()
{
	void(*g0_step_func)()[8];
	// Line 145, Address: 0x1ca3c0, Func Offset: 0
	// Line 158, Address: 0x1ca3c8, Func Offset: 0x8
	// Line 159, Address: 0x1ca3d0, Func Offset: 0x10
	// Line 161, Address: 0x1ca3d8, Func Offset: 0x18
	// Line 163, Address: 0x1ca3fc, Func Offset: 0x3c
	// Line 165, Address: 0x1ca410, Func Offset: 0x50
	// Line 166, Address: 0x1ca418, Func Offset: 0x58
	// Func End, Address: 0x1ca428, Func Offset: 0x68
}

// 
// Start address: 0x1ca430
void titleInit()
{
	int wait_loop;
	int fid;
	// Line 183, Address: 0x1ca430, Func Offset: 0
	// Line 187, Address: 0x1ca438, Func Offset: 0x8
	// Line 190, Address: 0x1ca45c, Func Offset: 0x2c
	// Line 191, Address: 0x1ca464, Func Offset: 0x34
	// Line 192, Address: 0x1ca46c, Func Offset: 0x3c
	// Line 193, Address: 0x1ca478, Func Offset: 0x48
	// Line 194, Address: 0x1ca484, Func Offset: 0x54
	// Line 195, Address: 0x1ca490, Func Offset: 0x60
	// Line 198, Address: 0x1ca49c, Func Offset: 0x6c
	// Line 199, Address: 0x1ca4a4, Func Offset: 0x74
	// Line 202, Address: 0x1ca4b4, Func Offset: 0x84
	// Line 203, Address: 0x1ca4c0, Func Offset: 0x90
	// Line 206, Address: 0x1ca4cc, Func Offset: 0x9c
	// Line 240, Address: 0x1ca4d8, Func Offset: 0xa8
	// Line 241, Address: 0x1ca4f8, Func Offset: 0xc8
	// Line 242, Address: 0x1ca500, Func Offset: 0xd0
	// Line 244, Address: 0x1ca534, Func Offset: 0x104
	// Line 247, Address: 0x1ca53c, Func Offset: 0x10c
	// Line 248, Address: 0x1ca550, Func Offset: 0x120
	// Line 250, Address: 0x1ca598, Func Offset: 0x168
	// Line 252, Address: 0x1ca630, Func Offset: 0x200
	// Line 253, Address: 0x1ca66c, Func Offset: 0x23c
	// Line 255, Address: 0x1ca674, Func Offset: 0x244
	// Line 256, Address: 0x1ca68c, Func Offset: 0x25c
	// Line 258, Address: 0x1ca694, Func Offset: 0x264
	// Line 259, Address: 0x1ca6b8, Func Offset: 0x288
	// Line 261, Address: 0x1ca6f8, Func Offset: 0x2c8
	// Line 263, Address: 0x1ca700, Func Offset: 0x2d0
	// Line 264, Address: 0x1ca724, Func Offset: 0x2f4
	// Line 266, Address: 0x1ca764, Func Offset: 0x334
	// Line 268, Address: 0x1ca76c, Func Offset: 0x33c
	// Line 273, Address: 0x1ca77c, Func Offset: 0x34c
	// Func End, Address: 0x1ca78c, Func Offset: 0x35c
}

// 
// Start address: 0x1ca790
void titleFadeIn()
{
	// Line 290, Address: 0x1ca790, Func Offset: 0
	// Line 291, Address: 0x1ca798, Func Offset: 0x8
	// Line 294, Address: 0x1ca7b0, Func Offset: 0x20
	// Line 295, Address: 0x1ca7c4, Func Offset: 0x34
	// Line 296, Address: 0x1ca7f8, Func Offset: 0x68
	// Line 299, Address: 0x1ca800, Func Offset: 0x70
	// Line 300, Address: 0x1ca808, Func Offset: 0x78
	// Line 301, Address: 0x1ca810, Func Offset: 0x80
	// Line 302, Address: 0x1ca820, Func Offset: 0x90
	// Line 305, Address: 0x1ca854, Func Offset: 0xc4
	// Func End, Address: 0x1ca864, Func Offset: 0xd4
}

// 
// Start address: 0x1ca870
void titleMainSelect()
{
	// Line 322, Address: 0x1ca870, Func Offset: 0
	// Line 323, Address: 0x1ca878, Func Offset: 0x8
	// Line 324, Address: 0x1ca880, Func Offset: 0x10
	// Line 327, Address: 0x1ca888, Func Offset: 0x18
	// Line 329, Address: 0x1ca8a8, Func Offset: 0x38
	// Line 330, Address: 0x1ca8c0, Func Offset: 0x50
	// Line 359, Address: 0x1ca8f4, Func Offset: 0x84
	// Line 366, Address: 0x1ca908, Func Offset: 0x98
	// Line 367, Address: 0x1ca92c, Func Offset: 0xbc
	// Line 368, Address: 0x1ca96c, Func Offset: 0xfc
	// Func End, Address: 0x1ca97c, Func Offset: 0x10c
}

// 
// Start address: 0x1ca980
void titleBattleSelect()
{
	// Line 385, Address: 0x1ca980, Func Offset: 0
	// Line 386, Address: 0x1ca988, Func Offset: 0x8
	// Line 387, Address: 0x1ca990, Func Offset: 0x10
	// Line 389, Address: 0x1ca998, Func Offset: 0x18
	// Line 391, Address: 0x1ca9c0, Func Offset: 0x40
	// Line 392, Address: 0x1ca9d4, Func Offset: 0x54
	// Line 393, Address: 0x1ca9dc, Func Offset: 0x5c
	// Line 395, Address: 0x1caa08, Func Offset: 0x88
	// Line 396, Address: 0x1caa1c, Func Offset: 0x9c
	// Line 397, Address: 0x1caa24, Func Offset: 0xa4
	// Line 400, Address: 0x1caa40, Func Offset: 0xc0
	// Line 401, Address: 0x1caa4c, Func Offset: 0xcc
	// Line 402, Address: 0x1caa58, Func Offset: 0xd8
	// Line 405, Address: 0x1caa94, Func Offset: 0x114
	// Line 406, Address: 0x1caab8, Func Offset: 0x138
	// Line 407, Address: 0x1caaf8, Func Offset: 0x178
	// Func End, Address: 0x1cab08, Func Offset: 0x188
}

// 
// Start address: 0x1cab10
void titleRiddleSelect()
{
	// Line 424, Address: 0x1cab10, Func Offset: 0
	// Line 425, Address: 0x1cab18, Func Offset: 0x8
	// Line 426, Address: 0x1cab20, Func Offset: 0x10
	// Line 428, Address: 0x1cab28, Func Offset: 0x18
	// Line 430, Address: 0x1cab50, Func Offset: 0x40
	// Line 431, Address: 0x1cab64, Func Offset: 0x54
	// Line 432, Address: 0x1cab6c, Func Offset: 0x5c
	// Line 434, Address: 0x1cab98, Func Offset: 0x88
	// Line 435, Address: 0x1cabac, Func Offset: 0x9c
	// Line 436, Address: 0x1cabb4, Func Offset: 0xa4
	// Line 438, Address: 0x1cabd0, Func Offset: 0xc0
	// Line 441, Address: 0x1cac04, Func Offset: 0xf4
	// Line 442, Address: 0x1cac28, Func Offset: 0x118
	// Line 443, Address: 0x1cac68, Func Offset: 0x158
	// Func End, Address: 0x1cac78, Func Offset: 0x168
}

// 
// Start address: 0x1cac80
void titleFadeOutNewGame()
{
	// Line 460, Address: 0x1cac80, Func Offset: 0
	// Line 461, Address: 0x1cac88, Func Offset: 0x8
	// Line 464, Address: 0x1caca0, Func Offset: 0x20
	// Line 465, Address: 0x1cacb4, Func Offset: 0x34
	// Line 466, Address: 0x1cacc0, Func Offset: 0x40
	// Line 467, Address: 0x1cacf4, Func Offset: 0x74
	// Line 470, Address: 0x1cacfc, Func Offset: 0x7c
	// Line 471, Address: 0x1cad0c, Func Offset: 0x8c
	// Line 475, Address: 0x1cad18, Func Offset: 0x98
	// Line 476, Address: 0x1cad20, Func Offset: 0xa0
	// Line 477, Address: 0x1cad28, Func Offset: 0xa8
	// Func End, Address: 0x1cad38, Func Offset: 0xb8
}

// 
// Start address: 0x1cad40
void titleFadeOut()
{
	// Line 494, Address: 0x1cad40, Func Offset: 0
	// Line 495, Address: 0x1cad48, Func Offset: 0x8
	// Line 498, Address: 0x1cad60, Func Offset: 0x20
	// Line 499, Address: 0x1cad74, Func Offset: 0x34
	// Line 500, Address: 0x1cad80, Func Offset: 0x40
	// Line 501, Address: 0x1cadb4, Func Offset: 0x74
	// Line 504, Address: 0x1cadbc, Func Offset: 0x7c
	// Line 505, Address: 0x1cadcc, Func Offset: 0x8c
	// Line 509, Address: 0x1cade0, Func Offset: 0xa0
	// Line 510, Address: 0x1cae04, Func Offset: 0xc4
	// Line 511, Address: 0x1cae44, Func Offset: 0x104
	// Line 512, Address: 0x1cae4c, Func Offset: 0x10c
	// Line 513, Address: 0x1cae54, Func Offset: 0x114
	// Func End, Address: 0x1cae64, Func Offset: 0x124
}

// 
// Start address: 0x1cae70
void titleExit()
{
	// Line 531, Address: 0x1cae70, Func Offset: 0
	// Func End, Address: 0x1cae78, Func Offset: 0x8
}

// 
// Start address: 0x1cae80
void titleDrawTitle()
{
	// Line 549, Address: 0x1cae80, Func Offset: 0
	// Line 550, Address: 0x1cae88, Func Offset: 0x8
	// Line 554, Address: 0x1caea4, Func Offset: 0x24
	// Line 558, Address: 0x1caeb8, Func Offset: 0x38
	// Line 559, Address: 0x1caef4, Func Offset: 0x74
	// Line 560, Address: 0x1caefc, Func Offset: 0x7c
	// Line 561, Address: 0x1caf0c, Func Offset: 0x8c
	// Func End, Address: 0x1caf1c, Func Offset: 0x9c
}

// 
// Start address: 0x1caf20
void titleDrawMainMenu()
{
	int i;
	// Line 578, Address: 0x1caf20, Func Offset: 0
	// Line 581, Address: 0x1caf2c, Func Offset: 0xc
	// Line 583, Address: 0x1caf38, Func Offset: 0x18
	// Line 586, Address: 0x1caf58, Func Offset: 0x38
	// Line 588, Address: 0x1caf68, Func Offset: 0x48
	// Line 593, Address: 0x1cb010, Func Offset: 0xf0
	// Line 596, Address: 0x1cb018, Func Offset: 0xf8
	// Line 601, Address: 0x1cb0bc, Func Offset: 0x19c
	// Line 602, Address: 0x1cb0c0, Func Offset: 0x1a0
	// Line 603, Address: 0x1cb0d8, Func Offset: 0x1b8
	// Func End, Address: 0x1cb0ec, Func Offset: 0x1cc
}

// 
// Start address: 0x1cb0f0
void titleDrawBattleMenu()
{
	int i;
	// Line 620, Address: 0x1cb0f0, Func Offset: 0
	// Line 624, Address: 0x1cb0fc, Func Offset: 0xc
	// Line 630, Address: 0x1cb124, Func Offset: 0x34
	// Line 632, Address: 0x1cb130, Func Offset: 0x40
	// Line 634, Address: 0x1cb140, Func Offset: 0x50
	// Line 639, Address: 0x1cb1bc, Func Offset: 0xcc
	// Line 642, Address: 0x1cb1c4, Func Offset: 0xd4
	// Line 647, Address: 0x1cb23c, Func Offset: 0x14c
	// Line 648, Address: 0x1cb240, Func Offset: 0x150
	// Line 649, Address: 0x1cb254, Func Offset: 0x164
	// Func End, Address: 0x1cb268, Func Offset: 0x178
}

// 
// Start address: 0x1cb270
void titleDrawRiddleMenu()
{
	int i;
	// Line 666, Address: 0x1cb270, Func Offset: 0
	// Line 670, Address: 0x1cb27c, Func Offset: 0xc
	// Line 676, Address: 0x1cb2a4, Func Offset: 0x34
	// Line 678, Address: 0x1cb2b0, Func Offset: 0x40
	// Line 680, Address: 0x1cb2c0, Func Offset: 0x50
	// Line 685, Address: 0x1cb33c, Func Offset: 0xcc
	// Line 688, Address: 0x1cb344, Func Offset: 0xd4
	// Line 693, Address: 0x1cb3bc, Func Offset: 0x14c
	// Line 694, Address: 0x1cb3c0, Func Offset: 0x150
	// Line 695, Address: 0x1cb3d4, Func Offset: 0x164
	// Func End, Address: 0x1cb3e8, Func Offset: 0x178
}

// 
// Start address: 0x1cb3f0
void titleDispMenuString(unsigned char* str, int alpha, int x, int y, int dif)
{
	// Line 712, Address: 0x1cb3f0, Func Offset: 0
	// Line 713, Address: 0x1cb40c, Func Offset: 0x1c
	// Line 714, Address: 0x1cb428, Func Offset: 0x38
	// Line 715, Address: 0x1cb458, Func Offset: 0x68
	// Line 716, Address: 0x1cb474, Func Offset: 0x84
	// Line 717, Address: 0x1cb4a4, Func Offset: 0xb4
	// Func End, Address: 0x1cb4b4, Func Offset: 0xc4
}

// 
// Start address: 0x1cb4c0
int GameendMain()
{
	PicDraw_Data pic;
	float game_over_timer;
	// Line 722, Address: 0x1cb4c0, Func Offset: 0
	// Line 727, Address: 0x1cb4c8, Func Offset: 0x8
	// Line 729, Address: 0x1cb504, Func Offset: 0x44
	// Line 731, Address: 0x1cb530, Func Offset: 0x70
	// Line 733, Address: 0x1cb55c, Func Offset: 0x9c
	// Line 734, Address: 0x1cb574, Func Offset: 0xb4
	// Line 735, Address: 0x1cb580, Func Offset: 0xc0
	// Line 736, Address: 0x1cb590, Func Offset: 0xd0
	// Line 738, Address: 0x1cb5bc, Func Offset: 0xfc
	// Line 740, Address: 0x1cb5d8, Func Offset: 0x118
	// Line 742, Address: 0x1cb5e8, Func Offset: 0x128
	// Line 743, Address: 0x1cb610, Func Offset: 0x150
	// Line 744, Address: 0x1cb618, Func Offset: 0x158
	// Line 745, Address: 0x1cb624, Func Offset: 0x164
	// Line 746, Address: 0x1cb638, Func Offset: 0x178
	// Line 747, Address: 0x1cb65c, Func Offset: 0x19c
	// Line 749, Address: 0x1cb6b8, Func Offset: 0x1f8
	// Line 752, Address: 0x1cb6c4, Func Offset: 0x204
	// Line 753, Address: 0x1cb6c8, Func Offset: 0x208
	// Func End, Address: 0x1cb6d8, Func Offset: 0x218
}

// 
// Start address: 0x1cb6e0
int GameoverMain()
{
	int work;
	PicDraw_Data pic;
	float game_over_timer;
	int fid;
	// Line 758, Address: 0x1cb6e0, Func Offset: 0
	// Line 764, Address: 0x1cb6ec, Func Offset: 0xc
	// Line 766, Address: 0x1cb728, Func Offset: 0x48
	// Line 767, Address: 0x1cb734, Func Offset: 0x54
	// Line 769, Address: 0x1cb760, Func Offset: 0x80
	// Line 770, Address: 0x1cb788, Func Offset: 0xa8
	// Line 771, Address: 0x1cb790, Func Offset: 0xb0
	// Line 772, Address: 0x1cb7a8, Func Offset: 0xc8
	// Line 774, Address: 0x1cb7cc, Func Offset: 0xec
	// Line 775, Address: 0x1cb7f0, Func Offset: 0x110
	// Line 778, Address: 0x1cb84c, Func Offset: 0x16c
	// Line 779, Address: 0x1cb878, Func Offset: 0x198
	// Line 781, Address: 0x1cb880, Func Offset: 0x1a0
	// Line 782, Address: 0x1cb888, Func Offset: 0x1a8
	// Line 783, Address: 0x1cb8a8, Func Offset: 0x1c8
	// Line 784, Address: 0x1cb8b4, Func Offset: 0x1d4
	// Line 786, Address: 0x1cb8dc, Func Offset: 0x1fc
	// Line 788, Address: 0x1cb908, Func Offset: 0x228
	// Line 790, Address: 0x1cb924, Func Offset: 0x244
	// Line 792, Address: 0x1cb934, Func Offset: 0x254
	// Line 793, Address: 0x1cb95c, Func Offset: 0x27c
	// Line 794, Address: 0x1cb964, Func Offset: 0x284
	// Line 795, Address: 0x1cb970, Func Offset: 0x290
	// Line 796, Address: 0x1cb984, Func Offset: 0x2a4
	// Line 797, Address: 0x1cb9a8, Func Offset: 0x2c8
	// Line 799, Address: 0x1cba04, Func Offset: 0x324
	// Line 802, Address: 0x1cba10, Func Offset: 0x330
	// Line 803, Address: 0x1cba14, Func Offset: 0x334
	// Func End, Address: 0x1cba28, Func Offset: 0x348
}

