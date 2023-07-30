typedef union fsFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct fsMgcFile;
typedef struct _SH2_SYS;
typedef struct _anon0;
typedef struct _anon1;
typedef union fsFileIndex;
typedef struct _anon2;
typedef struct _anon3;
typedef struct Pad_KeyConfig;
typedef struct fsCdFile;
typedef struct Playing_Info;


typedef float type_0[2];
typedef float type_1[2][4];
typedef float type_2[7];
typedef unsigned int type_3[7];
typedef unsigned int type_4[8];
typedef unsigned int type_5[255];
typedef unsigned int type_6[32];
typedef int type_7[8];
typedef unsigned char type_8[4];
typedef char type_9[4];
typedef fsFileIndex type_10[1];
typedef char type_11[4];
typedef char type_12[4];
typedef char type_13[4];
typedef char type_14[4];
typedef unsigned char type_15[3];
typedef short type_16[4];
typedef short type_17[4][4];
typedef short type_18[4][4][9];
typedef unsigned short type_19[0];
typedef short type_20[2];
typedef short type_21[2][4];
typedef short type_22[2][4][9];
typedef unsigned char type_23[8];
typedef _anon3 type_24[45];
typedef unsigned char type_25[4];
typedef short type_26[2];
typedef short type_27[2][45];
typedef int type_28[6];

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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct _anon1
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

struct _anon3
{
	short flag;
	short status;
	short msg_label;
	short msg_memo;
	fsFileIndex* file0;
	fsFileIndex* file1;
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

_anon3 data[45];
_SH2_SYS Sh2sys;
_anon1 game_flag;
fsFileIndex data_pic_etc_p_memo_tex[1];
int disp_point;
int list_point;
int select;
Playing_Info playing;
unsigned short msg_buffer[0];
Pad_KeyConfig key_config;
char* layer_adr;

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
void MemoPictureLayerDrawSafeLock();
void MemoPictureLayerDrawGuruguru();
void MemoPictureLayerDrawAngelRing();
void MemoPictureLayerDrawHair();
void MemoPictureLayerDrawTablet();
void MemoMessageWallet();

// 
// Start address: 0x2304e0
void MemoMain()
{
	// Line 223, Address: 0x2304e0, Func Offset: 0
	// Line 224, Address: 0x2304e8, Func Offset: 0x8
	// Line 226, Address: 0x23051c, Func Offset: 0x3c
	// Line 227, Address: 0x23052c, Func Offset: 0x4c
	// Line 228, Address: 0x23053c, Func Offset: 0x5c
	// Line 229, Address: 0x23054c, Func Offset: 0x6c
	// Line 231, Address: 0x230554, Func Offset: 0x74
	// Func End, Address: 0x230564, Func Offset: 0x84
}

// 
// Start address: 0x230570
int MemoCommandCheck()
{
	int i;
	// Line 240, Address: 0x230570, Func Offset: 0
	// Line 241, Address: 0x23057c, Func Offset: 0xc
	// Line 243, Address: 0x2305dc, Func Offset: 0x6c
	// Line 244, Address: 0x2305e0, Func Offset: 0x70
	// Func End, Address: 0x2305e8, Func Offset: 0x78
}

// 
// Start address: 0x2305f0
void MemoInit()
{
	int i;
	// Line 257, Address: 0x2305f0, Func Offset: 0
	// Line 260, Address: 0x2305f8, Func Offset: 0x8
	// Line 262, Address: 0x230634, Func Offset: 0x44
	// Line 263, Address: 0x230644, Func Offset: 0x54
	// Line 264, Address: 0x230654, Func Offset: 0x64
	// Line 265, Address: 0x230660, Func Offset: 0x70
	// Line 266, Address: 0x2306cc, Func Offset: 0xdc
	// Line 267, Address: 0x2306e4, Func Offset: 0xf4
	// Line 268, Address: 0x2306ec, Func Offset: 0xfc
	// Line 269, Address: 0x2306f8, Func Offset: 0x108
	// Line 270, Address: 0x230714, Func Offset: 0x124
	// Line 273, Address: 0x230740, Func Offset: 0x150
	// Line 274, Address: 0x230758, Func Offset: 0x168
	// Line 277, Address: 0x230784, Func Offset: 0x194
	// Line 278, Address: 0x230794, Func Offset: 0x1a4
	// Line 281, Address: 0x2307c0, Func Offset: 0x1d0
	// Line 282, Address: 0x2307d0, Func Offset: 0x1e0
	// Line 285, Address: 0x2307fc, Func Offset: 0x20c
	// Func End, Address: 0x23080c, Func Offset: 0x21c
}

// 
// Start address: 0x230810
void MemoSelect()
{
	int j;
	int i;
	int alpha;
	int work;
	int list_number;
	short list[2][45];
	// Line 290, Address: 0x230810, Func Offset: 0
	// Line 302, Address: 0x23082c, Func Offset: 0x1c
	// Line 303, Address: 0x230830, Func Offset: 0x20
	// Line 304, Address: 0x23083c, Func Offset: 0x2c
	// Line 306, Address: 0x23087c, Func Offset: 0x6c
	// Line 307, Address: 0x230888, Func Offset: 0x78
	// Line 308, Address: 0x23089c, Func Offset: 0x8c
	// Line 310, Address: 0x2308a0, Func Offset: 0x90
	// Line 312, Address: 0x2308b4, Func Offset: 0xa4
	// Line 313, Address: 0x2308d0, Func Offset: 0xc0
	// Line 314, Address: 0x2308fc, Func Offset: 0xec
	// Line 315, Address: 0x230920, Func Offset: 0x110
	// Line 316, Address: 0x23094c, Func Offset: 0x13c
	// Line 317, Address: 0x23096c, Func Offset: 0x15c
	// Line 318, Address: 0x230980, Func Offset: 0x170
	// Line 319, Address: 0x23099c, Func Offset: 0x18c
	// Line 320, Address: 0x2309b0, Func Offset: 0x1a0
	// Line 321, Address: 0x2309d0, Func Offset: 0x1c0
	// Line 322, Address: 0x2309f0, Func Offset: 0x1e0
	// Line 323, Address: 0x230a04, Func Offset: 0x1f4
	// Line 324, Address: 0x230a20, Func Offset: 0x210
	// Line 325, Address: 0x230a34, Func Offset: 0x224
	// Line 327, Address: 0x230a54, Func Offset: 0x244
	// Line 329, Address: 0x230a70, Func Offset: 0x260
	// Line 330, Address: 0x230a7c, Func Offset: 0x26c
	// Line 331, Address: 0x230a84, Func Offset: 0x274
	// Line 332, Address: 0x230a90, Func Offset: 0x280
	// Line 333, Address: 0x230a9c, Func Offset: 0x28c
	// Line 334, Address: 0x230ab0, Func Offset: 0x2a0
	// Line 335, Address: 0x230ad4, Func Offset: 0x2c4
	// Line 336, Address: 0x230ae4, Func Offset: 0x2d4
	// Line 337, Address: 0x230af8, Func Offset: 0x2e8
	// Line 338, Address: 0x230b0c, Func Offset: 0x2fc
	// Line 339, Address: 0x230b14, Func Offset: 0x304
	// Line 340, Address: 0x230b20, Func Offset: 0x310
	// Line 341, Address: 0x230b3c, Func Offset: 0x32c
	// Line 342, Address: 0x230b48, Func Offset: 0x338
	// Line 343, Address: 0x230b58, Func Offset: 0x348
	// Line 344, Address: 0x230b60, Func Offset: 0x350
	// Line 345, Address: 0x230ba4, Func Offset: 0x394
	// Line 346, Address: 0x230bb0, Func Offset: 0x3a0
	// Line 347, Address: 0x230bbc, Func Offset: 0x3ac
	// Line 348, Address: 0x230bc8, Func Offset: 0x3b8
	// Line 349, Address: 0x230bcc, Func Offset: 0x3bc
	// Line 350, Address: 0x230bd0, Func Offset: 0x3c0
	// Line 351, Address: 0x230bdc, Func Offset: 0x3cc
	// Line 352, Address: 0x230c04, Func Offset: 0x3f4
	// Line 353, Address: 0x230c14, Func Offset: 0x404
	// Line 354, Address: 0x230c28, Func Offset: 0x418
	// Line 355, Address: 0x230c3c, Func Offset: 0x42c
	// Line 356, Address: 0x230c40, Func Offset: 0x430
	// Func End, Address: 0x230c64, Func Offset: 0x454
}

// 
// Start address: 0x230c70
void MemoDisplay()
{
	unsigned char c_work[8];
	float alpha;
	// Line 373, Address: 0x230c70, Func Offset: 0
	// Line 378, Address: 0x230c78, Func Offset: 0x8
	// Line 380, Address: 0x230ca8, Func Offset: 0x38
	// Line 381, Address: 0x230cb8, Func Offset: 0x48
	// Line 382, Address: 0x230cec, Func Offset: 0x7c
	// Line 383, Address: 0x230d24, Func Offset: 0xb4
	// Line 384, Address: 0x230d30, Func Offset: 0xc0
	// Line 387, Address: 0x230d5c, Func Offset: 0xec
	// Line 388, Address: 0x230d84, Func Offset: 0x114
	// Line 389, Address: 0x230d94, Func Offset: 0x124
	// Line 390, Address: 0x230d9c, Func Offset: 0x12c
	// Line 393, Address: 0x230dc8, Func Offset: 0x158
	// Line 394, Address: 0x230df4, Func Offset: 0x184
	// Line 395, Address: 0x230e20, Func Offset: 0x1b0
	// Line 396, Address: 0x230e30, Func Offset: 0x1c0
	// Line 397, Address: 0x230e58, Func Offset: 0x1e8
	// Line 398, Address: 0x230e84, Func Offset: 0x214
	// Line 400, Address: 0x230ea8, Func Offset: 0x238
	// Line 403, Address: 0x230eb0, Func Offset: 0x240
	// Line 404, Address: 0x230edc, Func Offset: 0x26c
	// Line 405, Address: 0x230f08, Func Offset: 0x298
	// Line 406, Address: 0x230f30, Func Offset: 0x2c0
	// Line 407, Address: 0x230f58, Func Offset: 0x2e8
	// Line 409, Address: 0x230f84, Func Offset: 0x314
	// Line 410, Address: 0x230f94, Func Offset: 0x324
	// Line 413, Address: 0x230fb8, Func Offset: 0x348
	// Line 416, Address: 0x230fc0, Func Offset: 0x350
	// Line 417, Address: 0x230ff4, Func Offset: 0x384
	// Line 420, Address: 0x231004, Func Offset: 0x394
	// Line 421, Address: 0x23101c, Func Offset: 0x3ac
	// Line 422, Address: 0x23102c, Func Offset: 0x3bc
	// Line 423, Address: 0x23103c, Func Offset: 0x3cc
	// Line 424, Address: 0x231050, Func Offset: 0x3e0
	// Line 425, Address: 0x231054, Func Offset: 0x3e4
	// Line 428, Address: 0x231070, Func Offset: 0x400
	// Line 429, Address: 0x23109c, Func Offset: 0x42c
	// Line 431, Address: 0x2310c8, Func Offset: 0x458
	// Line 432, Address: 0x2310e4, Func Offset: 0x474
	// Line 433, Address: 0x231104, Func Offset: 0x494
	// Line 434, Address: 0x231130, Func Offset: 0x4c0
	// Line 435, Address: 0x23115c, Func Offset: 0x4ec
	// Line 436, Address: 0x231170, Func Offset: 0x500
	// Line 437, Address: 0x231178, Func Offset: 0x508
	// Line 438, Address: 0x231188, Func Offset: 0x518
	// Line 440, Address: 0x2311ac, Func Offset: 0x53c
	// Line 443, Address: 0x2311b4, Func Offset: 0x544
	// Line 444, Address: 0x2311e0, Func Offset: 0x570
	// Line 445, Address: 0x23120c, Func Offset: 0x59c
	// Line 446, Address: 0x231248, Func Offset: 0x5d8
	// Line 449, Address: 0x231250, Func Offset: 0x5e0
	// Line 450, Address: 0x231274, Func Offset: 0x604
	// Line 451, Address: 0x231290, Func Offset: 0x620
	// Line 453, Address: 0x2312bc, Func Offset: 0x64c
	// Line 454, Address: 0x2312d4, Func Offset: 0x664
	// Line 455, Address: 0x2312e4, Func Offset: 0x674
	// Line 459, Address: 0x231310, Func Offset: 0x6a0
	// Func End, Address: 0x231320, Func Offset: 0x6b0
}

// 
// Start address: 0x231320
void MemoEnd()
{
	// Line 464, Address: 0x231320, Func Offset: 0
	// Line 465, Address: 0x231328, Func Offset: 0x8
	// Line 466, Address: 0x231338, Func Offset: 0x18
	// Line 467, Address: 0x231348, Func Offset: 0x28
	// Line 468, Address: 0x23137c, Func Offset: 0x5c
	// Func End, Address: 0x23138c, Func Offset: 0x6c
}

// 
// Start address: 0x231390
void MemoPictureLoad(fsFileIndex* file0, fsFileIndex* file1)
{
	// Line 474, Address: 0x231390, Func Offset: 0
	// Line 475, Address: 0x2313a8, Func Offset: 0x18
	// Line 477, Address: 0x2313dc, Func Offset: 0x4c
	// Line 480, Address: 0x231410, Func Offset: 0x80
	// Line 481, Address: 0x231430, Func Offset: 0xa0
	// Line 484, Address: 0x231438, Func Offset: 0xa8
	// Line 485, Address: 0x231458, Func Offset: 0xc8
	// Line 488, Address: 0x231460, Func Offset: 0xd0
	// Line 489, Address: 0x231488, Func Offset: 0xf8
	// Line 493, Address: 0x231490, Func Offset: 0x100
	// Line 494, Address: 0x231498, Func Offset: 0x108
	// Line 495, Address: 0x2314b0, Func Offset: 0x120
	// Line 497, Address: 0x2314dc, Func Offset: 0x14c
	// Line 498, Address: 0x2314f8, Func Offset: 0x168
	// Func End, Address: 0x231510, Func Offset: 0x180
}

// 
// Start address: 0x231510
void MemoPictureBaseDraw(int rgb)
{
	PicDraw_Data pic;
	// Line 504, Address: 0x231510, Func Offset: 0
	// Line 507, Address: 0x231520, Func Offset: 0x10
	// Line 508, Address: 0x231528, Func Offset: 0x18
	// Line 510, Address: 0x231548, Func Offset: 0x38
	// Line 512, Address: 0x231558, Func Offset: 0x48
	// Line 513, Address: 0x231580, Func Offset: 0x70
	// Line 514, Address: 0x231588, Func Offset: 0x78
	// Line 515, Address: 0x2315a0, Func Offset: 0x90
	// Line 516, Address: 0x2315ac, Func Offset: 0x9c
	// Func End, Address: 0x2315c0, Func Offset: 0xb0
}

// 
// Start address: 0x2315c0
void MemoSelectBarDraw(int msg, int y)
{
	int w;
	int wl[8];
	PicDraw_Data pic;
	// Line 522, Address: 0x2315c0, Func Offset: 0
	// Line 527, Address: 0x2315d4, Func Offset: 0x14
	// Line 528, Address: 0x2315f8, Func Offset: 0x38
	// Line 531, Address: 0x231604, Func Offset: 0x44
	// Line 532, Address: 0x231614, Func Offset: 0x54
	// Line 534, Address: 0x23161c, Func Offset: 0x5c
	// Line 535, Address: 0x231658, Func Offset: 0x98
	// Line 536, Address: 0x231678, Func Offset: 0xb8
	// Line 537, Address: 0x2316a8, Func Offset: 0xe8
	// Line 538, Address: 0x2316b4, Func Offset: 0xf4
	// Func End, Address: 0x2316cc, Func Offset: 0x10c
}

// 
// Start address: 0x2316d0
void MemoPictureLayerDraw()
{
	// Line 543, Address: 0x2316d0, Func Offset: 0
	// Line 544, Address: 0x2316d8, Func Offset: 0x8
	// Line 546, Address: 0x231724, Func Offset: 0x54
	// Line 547, Address: 0x23173c, Func Offset: 0x6c
	// Line 548, Address: 0x231744, Func Offset: 0x74
	// Line 549, Address: 0x23174c, Func Offset: 0x7c
	// Line 551, Address: 0x23175c, Func Offset: 0x8c
	// Line 553, Address: 0x231784, Func Offset: 0xb4
	// Line 554, Address: 0x23178c, Func Offset: 0xbc
	// Line 555, Address: 0x231794, Func Offset: 0xc4
	// Line 556, Address: 0x2317a4, Func Offset: 0xd4
	// Line 558, Address: 0x2317ac, Func Offset: 0xdc
	// Func End, Address: 0x2317bc, Func Offset: 0xec
}

// 
// Start address: 0x2317c0
void MemoPictureLayerDrawSafeLock()
{
	int i;
	int lock;
	float rot;
	float pos[2][4];
	float sinrot;
	float cosrot;
	PicDraw_Data pic;
	// Line 563, Address: 0x2317c0, Func Offset: 0
	// Line 574, Address: 0x2317d0, Func Offset: 0x10
	// Line 576, Address: 0x2317ec, Func Offset: 0x2c
	// Line 578, Address: 0x2317fc, Func Offset: 0x3c
	// Line 579, Address: 0x231820, Func Offset: 0x60
	// Line 581, Address: 0x23184c, Func Offset: 0x8c
	// Line 582, Address: 0x231850, Func Offset: 0x90
	// Line 583, Address: 0x23185c, Func Offset: 0x9c
	// Line 584, Address: 0x231898, Func Offset: 0xd8
	// Line 585, Address: 0x2318ac, Func Offset: 0xec
	// Line 587, Address: 0x231910, Func Offset: 0x150
	// Line 588, Address: 0x231920, Func Offset: 0x160
	// Line 590, Address: 0x23192c, Func Offset: 0x16c
	// Line 591, Address: 0x231964, Func Offset: 0x1a4
	// Line 592, Address: 0x231970, Func Offset: 0x1b0
	// Line 593, Address: 0x23198c, Func Offset: 0x1cc
	// Line 594, Address: 0x231998, Func Offset: 0x1d8
	// Line 595, Address: 0x2319b4, Func Offset: 0x1f4
	// Line 596, Address: 0x2319c0, Func Offset: 0x200
	// Line 597, Address: 0x2319d0, Func Offset: 0x210
	// Line 601, Address: 0x2319dc, Func Offset: 0x21c
	// Line 604, Address: 0x231a80, Func Offset: 0x2c0
	// Line 606, Address: 0x231b0c, Func Offset: 0x34c
	// Line 607, Address: 0x231b2c, Func Offset: 0x36c
	// Line 608, Address: 0x231b34, Func Offset: 0x374
	// Line 609, Address: 0x231b40, Func Offset: 0x380
	// Func End, Address: 0x231b58, Func Offset: 0x398
}

// 
// Start address: 0x231b60
void MemoPictureLayerDrawGuruguru()
{
	int i;
	int no;
	PicDraw_Data pic;
	short tex[4][4][9];
	short pos[2][4][9];
	// Line 614, Address: 0x231b60, Func Offset: 0
	// Line 648, Address: 0x231b70, Func Offset: 0x10
	// Line 650, Address: 0x231b8c, Func Offset: 0x2c
	// Line 652, Address: 0x231b9c, Func Offset: 0x3c
	// Line 653, Address: 0x231bc4, Func Offset: 0x64
	// Line 654, Address: 0x231bcc, Func Offset: 0x6c
	// Line 655, Address: 0x231bf8, Func Offset: 0x98
	// Line 656, Address: 0x231c04, Func Offset: 0xa4
	// Line 660, Address: 0x231c14, Func Offset: 0xb4
	// Line 663, Address: 0x231cd0, Func Offset: 0x170
	// Line 664, Address: 0x231d04, Func Offset: 0x1a4
	// Line 665, Address: 0x231d10, Func Offset: 0x1b0
	// Line 666, Address: 0x231d24, Func Offset: 0x1c4
	// Func End, Address: 0x231d3c, Func Offset: 0x1dc
}

// 
// Start address: 0x231d40
void MemoPictureLayerDrawAngelRing()
{
	PicDraw_Data pic;
	// Line 671, Address: 0x231d40, Func Offset: 0
	// Line 674, Address: 0x231d4c, Func Offset: 0xc
	// Line 676, Address: 0x231d68, Func Offset: 0x28
	// Line 678, Address: 0x231d78, Func Offset: 0x38
	// Line 680, Address: 0x231da0, Func Offset: 0x60
	// Line 681, Address: 0x231db8, Func Offset: 0x78
	// Line 682, Address: 0x231de4, Func Offset: 0xa4
	// Line 683, Address: 0x231e04, Func Offset: 0xc4
	// Line 684, Address: 0x231e0c, Func Offset: 0xcc
	// Line 685, Address: 0x231e38, Func Offset: 0xf8
	// Line 688, Address: 0x231e44, Func Offset: 0x104
	// Line 689, Address: 0x231e5c, Func Offset: 0x11c
	// Line 690, Address: 0x231e88, Func Offset: 0x148
	// Line 691, Address: 0x231eb0, Func Offset: 0x170
	// Line 692, Address: 0x231eb8, Func Offset: 0x178
	// Line 693, Address: 0x231ee4, Func Offset: 0x1a4
	// Line 695, Address: 0x231ef0, Func Offset: 0x1b0
	// Func End, Address: 0x231f04, Func Offset: 0x1c4
}

// 
// Start address: 0x231f10
void MemoPictureLayerDrawHair()
{
	PicDraw_Data pic;
	// Line 700, Address: 0x231f10, Func Offset: 0
	// Line 703, Address: 0x231f18, Func Offset: 0x8
	// Line 705, Address: 0x231f34, Func Offset: 0x24
	// Line 707, Address: 0x231f44, Func Offset: 0x34
	// Line 708, Address: 0x231f6c, Func Offset: 0x5c
	// Line 709, Address: 0x231f74, Func Offset: 0x64
	// Line 710, Address: 0x231fa0, Func Offset: 0x90
	// Line 711, Address: 0x231fcc, Func Offset: 0xbc
	// Line 712, Address: 0x231fd8, Func Offset: 0xc8
	// Func End, Address: 0x231fe8, Func Offset: 0xd8
}

// 
// Start address: 0x231ff0
void MemoPictureLayerDrawTablet()
{
	PicDraw_Data pic;
	// Line 717, Address: 0x231ff0, Func Offset: 0
	// Line 720, Address: 0x231ffc, Func Offset: 0xc
	// Line 722, Address: 0x232018, Func Offset: 0x28
	// Line 724, Address: 0x232028, Func Offset: 0x38
	// Line 726, Address: 0x232050, Func Offset: 0x60
	// Line 727, Address: 0x23207c, Func Offset: 0x8c
	// Line 729, Address: 0x232084, Func Offset: 0x94
	// Line 730, Address: 0x23209c, Func Offset: 0xac
	// Line 731, Address: 0x2320c8, Func Offset: 0xd8
	// Line 732, Address: 0x2320e8, Func Offset: 0xf8
	// Line 735, Address: 0x2320f4, Func Offset: 0x104
	// Line 736, Address: 0x23210c, Func Offset: 0x11c
	// Line 737, Address: 0x232138, Func Offset: 0x148
	// Line 738, Address: 0x23215c, Func Offset: 0x16c
	// Line 741, Address: 0x232168, Func Offset: 0x178
	// Line 742, Address: 0x232180, Func Offset: 0x190
	// Line 743, Address: 0x2321ac, Func Offset: 0x1bc
	// Line 744, Address: 0x2321d0, Func Offset: 0x1e0
	// Line 746, Address: 0x2321dc, Func Offset: 0x1ec
	// Func End, Address: 0x2321f0, Func Offset: 0x200
}

// 
// Start address: 0x2321f0
void MemoMessageWallet()
{
	int i;
	int work;
	unsigned char c_work[4];
	// Line 751, Address: 0x2321f0, Func Offset: 0
	// Line 756, Address: 0x2321fc, Func Offset: 0xc
	// Line 758, Address: 0x23222c, Func Offset: 0x3c
	// Line 759, Address: 0x232238, Func Offset: 0x48
	// Line 760, Address: 0x232254, Func Offset: 0x64
	// Line 762, Address: 0x2322a4, Func Offset: 0xb4
	// Line 764, Address: 0x2322e0, Func Offset: 0xf0
	// Line 765, Address: 0x232308, Func Offset: 0x118
	// Line 766, Address: 0x232324, Func Offset: 0x134
	// Line 767, Address: 0x232328, Func Offset: 0x138
	// Line 768, Address: 0x232344, Func Offset: 0x154
	// Line 769, Address: 0x232354, Func Offset: 0x164
	// Line 772, Address: 0x23235c, Func Offset: 0x16c
	// Line 773, Address: 0x232368, Func Offset: 0x178
	// Line 774, Address: 0x2323a4, Func Offset: 0x1b4
	// Line 775, Address: 0x2323c0, Func Offset: 0x1d0
	// Line 776, Address: 0x2323c4, Func Offset: 0x1d4
	// Line 777, Address: 0x2323e0, Func Offset: 0x1f0
	// Line 778, Address: 0x2323f4, Func Offset: 0x204
	// Line 781, Address: 0x2323fc, Func Offset: 0x20c
	// Line 782, Address: 0x232408, Func Offset: 0x218
	// Line 783, Address: 0x232428, Func Offset: 0x238
	// Line 784, Address: 0x232430, Func Offset: 0x240
	// Line 785, Address: 0x232434, Func Offset: 0x244
	// Line 786, Address: 0x232438, Func Offset: 0x248
	// Line 787, Address: 0x23244c, Func Offset: 0x25c
	// Line 788, Address: 0x232458, Func Offset: 0x268
	// Line 789, Address: 0x232460, Func Offset: 0x270
	// Line 790, Address: 0x23247c, Func Offset: 0x28c
	// Line 791, Address: 0x232480, Func Offset: 0x290
	// Line 792, Address: 0x232488, Func Offset: 0x298
	// Line 793, Address: 0x232490, Func Offset: 0x2a0
	// Line 794, Address: 0x232494, Func Offset: 0x2a4
	// Line 795, Address: 0x2324b0, Func Offset: 0x2c0
	// Line 797, Address: 0x2324b4, Func Offset: 0x2c4
	// Line 798, Address: 0x2324bc, Func Offset: 0x2cc
	// Line 799, Address: 0x2324c4, Func Offset: 0x2d4
	// Line 801, Address: 0x2324c8, Func Offset: 0x2d8
	// Line 802, Address: 0x2324e4, Func Offset: 0x2f4
	// Line 803, Address: 0x2324f4, Func Offset: 0x304
	// Line 806, Address: 0x2324fc, Func Offset: 0x30c
	// Line 807, Address: 0x232508, Func Offset: 0x318
	// Line 808, Address: 0x232528, Func Offset: 0x338
	// Line 809, Address: 0x232530, Func Offset: 0x340
	// Line 810, Address: 0x232534, Func Offset: 0x344
	// Line 811, Address: 0x23253c, Func Offset: 0x34c
	// Line 812, Address: 0x232544, Func Offset: 0x354
	// Line 814, Address: 0x232548, Func Offset: 0x358
	// Line 815, Address: 0x232564, Func Offset: 0x374
	// Line 817, Address: 0x232574, Func Offset: 0x384
	// Line 818, Address: 0x232578, Func Offset: 0x388
	// Func End, Address: 0x23258c, Func Offset: 0x39c
}

