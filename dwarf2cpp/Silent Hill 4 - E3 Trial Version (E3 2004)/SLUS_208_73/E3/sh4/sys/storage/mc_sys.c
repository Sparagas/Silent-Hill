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


typedef int type_0[4][4];
typedef int type_1[4];
typedef float type_2[4];
typedef int type_3[3];
typedef float type_4[4][3];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned char type_7[4];
typedef int type_8[4][4];
typedef float type_9[4][3];
typedef float type_10[4][3];
typedef _anon1 type_11[2];
typedef unsigned char type_12[68];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64];
typedef unsigned char type_16[512];
typedef char* type_17[4];
typedef float type_18[4][3];
typedef int type_19[2];
typedef char type_20[64];
typedef unsigned char type_21[32];
typedef _anon7 type_22[30];
typedef char type_23[7];

struct _anon0
{
	int size;
	int last;
	int file_cursor;
	int file_start;
	unsigned int c_key;
	int pad1;
	int pad2;
	int pad3;
	_anon7 list[30];
	_anon8 option;
};

struct _anon1
{
	int type;
	int free;
	int format;
	int btype;
	int bfree;
	int bformat;
	int exist;
	int broken;
	int decided;
	int old_result;
};

struct _anon2
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

struct _anon3
{
	unsigned char Head[4];
	unsigned short Reserv1;
	unsigned short OffsLF;
	unsigned int Reserv2;
	unsigned int TransRate;
	int BgColor[4][4];
	float LightDir[4][3];
	float LightColor[4][3];
	float Ambient[4];
	unsigned char TitleName[68];
	unsigned char FnameView[64];
	unsigned char FnameCopy[64];
	unsigned char FnameDel[64];
	unsigned char Reserve3[512];
};

struct _anon4
{
	int step;
	int step_s;
	int fd;
	int result;
	int error;
	int retry;
	int f_retry;
	int idol_step;
	int idol_timer;
	_anon1 stat[2];
};

struct _anon5
{
	unsigned char Resv2;
	unsigned char Sec;
	unsigned char Min;
	unsigned char Hour;
	unsigned char Day;
	unsigned char Month;
	unsigned short Year;
};

struct _anon6
{
	short xx;
	short yy;
};

struct _anon7
{
	_anon6 ver;
	unsigned int played;
	_anon2 clock;
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

struct _anon8
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

struct _anon9
{
	_anon5 _Create;
	_anon5 _Modify;
	unsigned int FileSizeByte;
	unsigned short AttrFile;
	unsigned short Reserve1;
	unsigned int Reserve2;
	unsigned int PdaAplNo;
	unsigned char EntryName[32];
};

_anon4 mc_work;
int bgcolor[4][4];
float lightdir[4][3];
float lightcol[4][3];
float ambient[4];
_anon3 icon;
char* trueName[4];
int iconName[3];
int option_flag;
int coded_size;
_anon9 mc_info;

void sfNMcSetDecide(int port, int d);
int sfNMcGetDecide(int port);
void sfNMcCreateIconSys();
void sfMcOpenIconSys(int port, int fn);
int sfNMcGetResult();
int sfNMcGetCardType(int port);
int sfNMcCanCreateNewFile(int port);
int sfNMcGetCardFormat(int port);
int sfNMcGetFileExist(int port);
int sfNMcCheckBroken(int port);
void sfNMcSetFileExist(int port);
int sfNMcGetNewestPort();
void sfNMcDebugClusterCheck();
int sfNMcGetOptionFlag();
void sfNMcSetOptionFlag(int val);
void sfNMcDebugErrorCheck();
int sfMcSync();
int sfMcMkdir(int port);
void sfMcReadOpenCommon(int port);
void sfMcReadOpenMain(int port);
void sfMcWriteOpenCommon(int port);
void sfMcWriteOpenMain(int port);
void sfMcOverwriteOpenMain(int port);
void sfMcReadCommon();
void sfMcRead();
void sfMcWriteCommon(int port);
void sfMcWrite();
void sfMcClose();
int sfMcVerify(int port);
int sfMcFormat(int port);
int sfMcGetInfo(int port);
void sfNMcCopyInfo(int port);
void sfMcGetDir(int port);
void sfMcGetParentDir(int port);
void sfMcGetSavedataDir(int port);
void sfMcInit();
int sfMcIsCardChanged(int port);
int sfMcIdling(int fn);
int sfMcCheckCommon(int port, int fn);
int sfMcLoad(int port, int fn, int file_no);
int sfMcSaveIconSubStatic(int port);
int sfMcSaveIconSubSys(int port);
int sfMcSaveMainSub();
int sfMcSaveCreate(int port, int fn, int file_no);
int sfMcSaveOverwrite(int port, int fn, int file_no);
int sfMcDel(int port, int fn, int file_no);
int sfNMcGetIdlePort();

// 
// Start address: 0x2db5f0
void sfNMcSetDecide(int port, int d)
{
	// Line 298, Address: 0x2db5f0, Func Offset: 0
	// Line 299, Address: 0x2db608, Func Offset: 0x18
	// Func End, Address: 0x2db610, Func Offset: 0x20
}

// 
// Start address: 0x2db610
int sfNMcGetDecide(int port)
{
	// Line 305, Address: 0x2db610, Func Offset: 0
	// Line 306, Address: 0x2db628, Func Offset: 0x18
	// Func End, Address: 0x2db630, Func Offset: 0x20
}

// 
// Start address: 0x2db630
void sfNMcCreateIconSys()
{
	// Line 339, Address: 0x2db630, Func Offset: 0
	// Line 340, Address: 0x2db634, Func Offset: 0x4
	// Line 339, Address: 0x2db638, Func Offset: 0x8
	// Line 340, Address: 0x2db63c, Func Offset: 0xc
	// Line 342, Address: 0x2db64c, Func Offset: 0x1c
	// Line 343, Address: 0x2db660, Func Offset: 0x30
	// Line 346, Address: 0x2db66c, Func Offset: 0x3c
	// Line 344, Address: 0x2db674, Func Offset: 0x44
	// Line 346, Address: 0x2db67c, Func Offset: 0x4c
	// Line 344, Address: 0x2db680, Func Offset: 0x50
	// Line 346, Address: 0x2db684, Func Offset: 0x54
	// Line 347, Address: 0x2db690, Func Offset: 0x60
	// Line 348, Address: 0x2db6a8, Func Offset: 0x78
	// Line 349, Address: 0x2db6c0, Func Offset: 0x90
	// Line 351, Address: 0x2db6d8, Func Offset: 0xa8
	// Line 353, Address: 0x2db6ec, Func Offset: 0xbc
	// Line 354, Address: 0x2db700, Func Offset: 0xd0
	// Line 355, Address: 0x2db714, Func Offset: 0xe4
	// Line 356, Address: 0x2db728, Func Offset: 0xf8
	// Func End, Address: 0x2db734, Func Offset: 0x104
}

// 
// Start address: 0x2db740
void sfMcOpenIconSys(int port, int fn)
{
	char fname[64];
	// Line 370, Address: 0x2db740, Func Offset: 0
	// Line 375, Address: 0x2db744, Func Offset: 0x4
	// Line 370, Address: 0x2db748, Func Offset: 0x8
	// Line 375, Address: 0x2db74c, Func Offset: 0xc
	// Line 370, Address: 0x2db750, Func Offset: 0x10
	// Line 375, Address: 0x2db75c, Func Offset: 0x1c
	// Line 376, Address: 0x2db764, Func Offset: 0x24
	// Line 375, Address: 0x2db768, Func Offset: 0x28
	// Line 376, Address: 0x2db76c, Func Offset: 0x2c
	// Line 375, Address: 0x2db770, Func Offset: 0x30
	// Line 376, Address: 0x2db778, Func Offset: 0x38
	// Line 377, Address: 0x2db780, Func Offset: 0x40
	// Line 381, Address: 0x2db79c, Func Offset: 0x5c
	// Line 385, Address: 0x2db7b0, Func Offset: 0x70
	// Func End, Address: 0x2db7c4, Func Offset: 0x84
}

// 
// Start address: 0x2db7d0
int sfNMcGetResult()
{
	// Line 392, Address: 0x2db7d0, Func Offset: 0
	// Line 393, Address: 0x2db7d4, Func Offset: 0x4
	// Func End, Address: 0x2db7dc, Func Offset: 0xc
}

// 
// Start address: 0x2db7e0
int sfNMcGetCardType(int port)
{
	// Line 402, Address: 0x2db7e0, Func Offset: 0
	// Line 403, Address: 0x2db800, Func Offset: 0x20
	// Func End, Address: 0x2db808, Func Offset: 0x28
}

// 
// Start address: 0x2db810
int sfNMcCanCreateNewFile(int port)
{
	// Line 428, Address: 0x2db810, Func Offset: 0
	// Line 429, Address: 0x2db830, Func Offset: 0x20
	// Func End, Address: 0x2db838, Func Offset: 0x28
}

// 
// Start address: 0x2db840
int sfNMcGetCardFormat(int port)
{
	// Line 438, Address: 0x2db840, Func Offset: 0
	// Line 439, Address: 0x2db858, Func Offset: 0x18
	// Func End, Address: 0x2db860, Func Offset: 0x20
}

// 
// Start address: 0x2db860
int sfNMcGetFileExist(int port)
{
	// Line 447, Address: 0x2db860, Func Offset: 0
	// Line 448, Address: 0x2db86c, Func Offset: 0xc
	// Line 449, Address: 0x2db8c0, Func Offset: 0x60
	// Func End, Address: 0x2db8d0, Func Offset: 0x70
}

// 
// Start address: 0x2db8d0
int sfNMcCheckBroken(int port)
{
	// Line 455, Address: 0x2db8d0, Func Offset: 0
	// Line 456, Address: 0x2db8e8, Func Offset: 0x18
	// Func End, Address: 0x2db8f0, Func Offset: 0x20
}

// 
// Start address: 0x2db8f0
void sfNMcSetFileExist(int port)
{
	// Line 462, Address: 0x2db8f0, Func Offset: 0
	// Line 463, Address: 0x2db90c, Func Offset: 0x1c
	// Func End, Address: 0x2db914, Func Offset: 0x24
}

// 
// Start address: 0x2db920
int sfNMcGetNewestPort()
{
	_anon0* ptr0;
	_anon0* ptr1;
	// Line 468, Address: 0x2db920, Func Offset: 0
	// Line 472, Address: 0x2db924, Func Offset: 0x4
	// Line 468, Address: 0x2db928, Func Offset: 0x8
	// Line 472, Address: 0x2db92c, Func Offset: 0xc
	// Line 473, Address: 0x2db938, Func Offset: 0x18
	// Line 478, Address: 0x2db940, Func Offset: 0x20
	// Line 479, Address: 0x2db948, Func Offset: 0x28
	// Line 478, Address: 0x2db94c, Func Offset: 0x2c
	// Line 479, Address: 0x2db974, Func Offset: 0x54
	// Line 478, Address: 0x2db978, Func Offset: 0x58
	// Line 479, Address: 0x2db97c, Func Offset: 0x5c
	// Func End, Address: 0x2db984, Func Offset: 0x64
}

// 
// Start address: 0x2db990
void sfNMcDebugClusterCheck()
{
	// Line 528, Address: 0x2db990, Func Offset: 0
	// Func End, Address: 0x2db998, Func Offset: 0x8
}

// 
// Start address: 0x2db9a0
int sfNMcGetOptionFlag()
{
	// Line 535, Address: 0x2db9a0, Func Offset: 0
	// Line 536, Address: 0x2db9a4, Func Offset: 0x4
	// Func End, Address: 0x2db9ac, Func Offset: 0xc
}

// 
// Start address: 0x2db9b0
void sfNMcSetOptionFlag(int val)
{
	// Line 542, Address: 0x2db9b0, Func Offset: 0
	// Line 543, Address: 0x2db9b4, Func Offset: 0x4
	// Func End, Address: 0x2db9bc, Func Offset: 0xc
}

// 
// Start address: 0x2db9c0
void sfNMcDebugErrorCheck()
{
	// Line 552, Address: 0x2db9c0, Func Offset: 0
	// Func End, Address: 0x2db9c8, Func Offset: 0x8
}

// 
// Start address: 0x2db9d0
int sfMcSync()
{
	// Line 560, Address: 0x2db9d0, Func Offset: 0
	// Func End, Address: 0x2db9e8, Func Offset: 0x18
}

// 
// Start address: 0x2db9f0
int sfMcMkdir(int port)
{
	int ret;
	// Line 569, Address: 0x2db9f0, Func Offset: 0
	// Func End, Address: 0x2dba00, Func Offset: 0x10
}

// 
// Start address: 0x2dba00
void sfMcReadOpenCommon(int port)
{
	// Line 580, Address: 0x2dba00, Func Offset: 0
	// Func End, Address: 0x2dba14, Func Offset: 0x14
}

// 
// Start address: 0x2dba20
void sfMcReadOpenMain(int port)
{
	// Line 587, Address: 0x2dba20, Func Offset: 0
	// Func End, Address: 0x2dba34, Func Offset: 0x14
}

// 
// Start address: 0x2dba40
void sfMcWriteOpenCommon(int port)
{
	// Line 597, Address: 0x2dba40, Func Offset: 0
	// Func End, Address: 0x2dba54, Func Offset: 0x14
}

// 
// Start address: 0x2dba60
void sfMcWriteOpenMain(int port)
{
	// Line 607, Address: 0x2dba60, Func Offset: 0
	// Func End, Address: 0x2dba74, Func Offset: 0x14
}

// 
// Start address: 0x2dba80
void sfMcOverwriteOpenMain(int port)
{
	// Line 617, Address: 0x2dba80, Func Offset: 0
	// Func End, Address: 0x2dba94, Func Offset: 0x14
}

// 
// Start address: 0x2dbaa0
void sfMcReadCommon()
{
	// Line 623, Address: 0x2dbaa0, Func Offset: 0
	// Line 625, Address: 0x2dbaa8, Func Offset: 0x8
	// Line 626, Address: 0x2dbac4, Func Offset: 0x24
	// Func End, Address: 0x2dbad0, Func Offset: 0x30
}

// 
// Start address: 0x2dbad0
void sfMcRead()
{
	// Line 631, Address: 0x2dbad0, Func Offset: 0
	// Line 633, Address: 0x2dbad8, Func Offset: 0x8
	// Line 634, Address: 0x2dbaf4, Func Offset: 0x24
	// Func End, Address: 0x2dbb00, Func Offset: 0x30
}

// 
// Start address: 0x2dbb00
void sfMcWriteCommon(int port)
{
	_anon0* ptr;
	// Line 640, Address: 0x2dbb00, Func Offset: 0
	// Line 642, Address: 0x2dbb08, Func Offset: 0x8
	// Line 645, Address: 0x2dbb10, Func Offset: 0x10
	// Line 646, Address: 0x2dbb18, Func Offset: 0x18
	// Line 648, Address: 0x2dbb20, Func Offset: 0x20
	// Line 649, Address: 0x2dbb3c, Func Offset: 0x3c
	// Func End, Address: 0x2dbb48, Func Offset: 0x48
}

// 
// Start address: 0x2dbb50
void sfMcWrite()
{
	// Line 654, Address: 0x2dbb50, Func Offset: 0
	// Line 659, Address: 0x2dbb58, Func Offset: 0x8
	// Line 660, Address: 0x2dbb60, Func Offset: 0x10
	// Line 662, Address: 0x2dbb7c, Func Offset: 0x2c
	// Func End, Address: 0x2dbb88, Func Offset: 0x38
}

// 
// Start address: 0x2dbb90
void sfMcClose()
{
	// Line 668, Address: 0x2dbb90, Func Offset: 0
	// Func End, Address: 0x2dbb9c, Func Offset: 0xc
}

// 
// Start address: 0x2dbba0
int sfMcVerify(int port)
{
	int rtv;
	// Line 678, Address: 0x2dbba0, Func Offset: 0
	// Line 683, Address: 0x2dbba4, Func Offset: 0x4
	// Line 678, Address: 0x2dbba8, Func Offset: 0x8
	// Line 683, Address: 0x2dbbac, Func Offset: 0xc
	// Line 678, Address: 0x2dbbb0, Func Offset: 0x10
	// Line 683, Address: 0x2dbbb4, Func Offset: 0x14
	// Line 684, Address: 0x2dbbec, Func Offset: 0x4c
	// Line 685, Address: 0x2dbbf0, Func Offset: 0x50
	// Line 686, Address: 0x2dbbf8, Func Offset: 0x58
	// Line 687, Address: 0x2dbc08, Func Offset: 0x68
	// Line 689, Address: 0x2dbc10, Func Offset: 0x70
	// Line 690, Address: 0x2dbc24, Func Offset: 0x84
	// Line 691, Address: 0x2dbc2c, Func Offset: 0x8c
	// Line 692, Address: 0x2dbc44, Func Offset: 0xa4
	// Line 693, Address: 0x2dbc48, Func Offset: 0xa8
	// Line 696, Address: 0x2dbc50, Func Offset: 0xb0
	// Line 698, Address: 0x2dbc58, Func Offset: 0xb8
	// Line 699, Address: 0x2dbc5c, Func Offset: 0xbc
	// Line 700, Address: 0x2dbc64, Func Offset: 0xc4
	// Line 702, Address: 0x2dbc74, Func Offset: 0xd4
	// Line 703, Address: 0x2dbc7c, Func Offset: 0xdc
	// Line 704, Address: 0x2dbc80, Func Offset: 0xe0
	// Line 705, Address: 0x2dbc90, Func Offset: 0xf0
	// Line 706, Address: 0x2dbc9c, Func Offset: 0xfc
	// Line 707, Address: 0x2dbcb4, Func Offset: 0x114
	// Line 708, Address: 0x2dbcb8, Func Offset: 0x118
	// Line 711, Address: 0x2dbcc0, Func Offset: 0x120
	// Line 714, Address: 0x2dbcc8, Func Offset: 0x128
	// Line 715, Address: 0x2dbcd0, Func Offset: 0x130
	// Line 717, Address: 0x2dbce0, Func Offset: 0x140
	// Line 719, Address: 0x2dbce8, Func Offset: 0x148
	// Line 720, Address: 0x2dbcf8, Func Offset: 0x158
	// Line 721, Address: 0x2dbd04, Func Offset: 0x164
	// Line 722, Address: 0x2dbd1c, Func Offset: 0x17c
	// Line 723, Address: 0x2dbd20, Func Offset: 0x180
	// Line 726, Address: 0x2dbd28, Func Offset: 0x188
	// Line 728, Address: 0x2dbd30, Func Offset: 0x190
	// Line 730, Address: 0x2dbd40, Func Offset: 0x1a0
	// Line 732, Address: 0x2dbd48, Func Offset: 0x1a8
	// Line 736, Address: 0x2dbd50, Func Offset: 0x1b0
	// Line 738, Address: 0x2dbd54, Func Offset: 0x1b4
	// Line 740, Address: 0x2dbd58, Func Offset: 0x1b8
	// Line 741, Address: 0x2dbd5c, Func Offset: 0x1bc
	// Func End, Address: 0x2dbd6c, Func Offset: 0x1cc
}

// 
// Start address: 0x2dbd70
int sfMcFormat(int port)
{
	int ret;
	// Line 749, Address: 0x2dbd70, Func Offset: 0
	// Func End, Address: 0x2dbd78, Func Offset: 0x8
}

// 
// Start address: 0x2dbd80
int sfMcGetInfo(int port)
{
	// Line 766, Address: 0x2dbd84, Func Offset: 0x4
	// Line 764, Address: 0x2dbd88, Func Offset: 0x8
	// Line 766, Address: 0x2dbd9c, Func Offset: 0x1c
	// Func End, Address: 0x2dbdac, Func Offset: 0x2c
}

// 
// Start address: 0x2dbdb0
void sfNMcCopyInfo(int port)
{
	// Line 773, Address: 0x2dbdb4, Func Offset: 0x4
	// Line 774, Address: 0x2dbdb8, Func Offset: 0x8
	// Line 775, Address: 0x2dbdd8, Func Offset: 0x28
	// Line 774, Address: 0x2dbdec, Func Offset: 0x3c
	// Line 775, Address: 0x2dbdf0, Func Offset: 0x40
	// Line 776, Address: 0x2dbdf8, Func Offset: 0x48
	// Line 775, Address: 0x2dbe10, Func Offset: 0x60
	// Line 776, Address: 0x2dbe14, Func Offset: 0x64
	// Line 777, Address: 0x2dbe18, Func Offset: 0x68
	// Func End, Address: 0x2dbe20, Func Offset: 0x70
}

// 
// Start address: 0x2dbe20
void sfMcGetDir(int port)
{
	// Line 785, Address: 0x2dbe20, Func Offset: 0
	// Func End, Address: 0x2dbe40, Func Offset: 0x20
}

// 
// Start address: 0x2dbe40
void sfMcGetParentDir(int port)
{
	// Line 792, Address: 0x2dbe40, Func Offset: 0
	// Func End, Address: 0x2dbe60, Func Offset: 0x20
}

// 
// Start address: 0x2dbe60
void sfMcGetSavedataDir(int port)
{
	// Line 799, Address: 0x2dbe60, Func Offset: 0
	// Func End, Address: 0x2dbe80, Func Offset: 0x20
}

// 
// Start address: 0x2dbe80
void sfMcInit()
{
	int ret;
	// Line 858, Address: 0x2dbe80, Func Offset: 0
	// Line 862, Address: 0x2dbe88, Func Offset: 0x8
	// Line 863, Address: 0x2dbe90, Func Offset: 0x10
	// Line 864, Address: 0x2dbe98, Func Offset: 0x18
	// Line 865, Address: 0x2dbea0, Func Offset: 0x20
	// Line 866, Address: 0x2dbeac, Func Offset: 0x2c
	// Line 870, Address: 0x2dbeb0, Func Offset: 0x30
	// Line 868, Address: 0x2dbeb8, Func Offset: 0x38
	// Line 871, Address: 0x2dbebc, Func Offset: 0x3c
	// Line 868, Address: 0x2dbec4, Func Offset: 0x44
	// Line 869, Address: 0x2dbecc, Func Offset: 0x4c
	// Line 872, Address: 0x2dbed4, Func Offset: 0x54
	// Func End, Address: 0x2dbee4, Func Offset: 0x64
}

// 
// Start address: 0x2dbef0
int sfMcIsCardChanged(int port)
{
	int cnt;
	// Line 883, Address: 0x2dbef0, Func Offset: 0
	// Line 884, Address: 0x2dbefc, Func Offset: 0xc
	// Line 883, Address: 0x2dbf00, Func Offset: 0x10
	// Line 884, Address: 0x2dbf04, Func Offset: 0x14
	// Line 885, Address: 0x2dbf28, Func Offset: 0x38
	// Line 886, Address: 0x2dbf30, Func Offset: 0x40
	// Line 885, Address: 0x2dbf34, Func Offset: 0x44
	// Line 886, Address: 0x2dbf38, Func Offset: 0x48
	// Line 888, Address: 0x2dbf60, Func Offset: 0x70
	// Func End, Address: 0x2dbf68, Func Offset: 0x78
}

// 
// Start address: 0x2dbf70
int sfMcIdling(int fn)
{
	int rtv;
	// Line 907, Address: 0x2dbf70, Func Offset: 0
	// Line 926, Address: 0x2dbf78, Func Offset: 0x8
	// Line 931, Address: 0x2dbf88, Func Offset: 0x18
	// Line 933, Address: 0x2dbfb8, Func Offset: 0x48
	// Line 934, Address: 0x2dbfc0, Func Offset: 0x50
	// Line 940, Address: 0x2dbfc8, Func Offset: 0x58
	// Line 941, Address: 0x2dbfd8, Func Offset: 0x68
	// Line 942, Address: 0x2dbfdc, Func Offset: 0x6c
	// Line 943, Address: 0x2dbfec, Func Offset: 0x7c
	// Line 945, Address: 0x2dbff8, Func Offset: 0x88
	// Line 947, Address: 0x2dc000, Func Offset: 0x90
	// Line 949, Address: 0x2dc008, Func Offset: 0x98
	// Line 959, Address: 0x2dc018, Func Offset: 0xa8
	// Line 960, Address: 0x2dc020, Func Offset: 0xb0
	// Line 964, Address: 0x2dc04c, Func Offset: 0xdc
	// Line 966, Address: 0x2dc050, Func Offset: 0xe0
	// Line 968, Address: 0x2dc058, Func Offset: 0xe8
	// Line 969, Address: 0x2dc060, Func Offset: 0xf0
	// Line 971, Address: 0x2dc074, Func Offset: 0x104
	// Line 970, Address: 0x2dc078, Func Offset: 0x108
	// Line 971, Address: 0x2dc07c, Func Offset: 0x10c
	// Line 975, Address: 0x2dc080, Func Offset: 0x110
	// Line 976, Address: 0x2dc088, Func Offset: 0x118
	// Line 975, Address: 0x2dc090, Func Offset: 0x120
	// Line 976, Address: 0x2dc094, Func Offset: 0x124
	// Line 975, Address: 0x2dc098, Func Offset: 0x128
	// Line 976, Address: 0x2dc09c, Func Offset: 0x12c
	// Line 978, Address: 0x2dc0a0, Func Offset: 0x130
	// Line 984, Address: 0x2dc0a8, Func Offset: 0x138
	// Line 985, Address: 0x2dc0b8, Func Offset: 0x148
	// Line 986, Address: 0x2dc0bc, Func Offset: 0x14c
	// Line 987, Address: 0x2dc0cc, Func Offset: 0x15c
	// Line 989, Address: 0x2dc0d8, Func Offset: 0x168
	// Line 991, Address: 0x2dc0e0, Func Offset: 0x170
	// Line 993, Address: 0x2dc0e8, Func Offset: 0x178
	// Line 1003, Address: 0x2dc0f8, Func Offset: 0x188
	// Line 1004, Address: 0x2dc100, Func Offset: 0x190
	// Line 1008, Address: 0x2dc12c, Func Offset: 0x1bc
	// Line 1010, Address: 0x2dc130, Func Offset: 0x1c0
	// Line 1012, Address: 0x2dc138, Func Offset: 0x1c8
	// Line 1013, Address: 0x2dc140, Func Offset: 0x1d0
	// Line 1015, Address: 0x2dc154, Func Offset: 0x1e4
	// Line 1014, Address: 0x2dc158, Func Offset: 0x1e8
	// Line 1015, Address: 0x2dc15c, Func Offset: 0x1ec
	// Line 1019, Address: 0x2dc160, Func Offset: 0x1f0
	// Line 1020, Address: 0x2dc168, Func Offset: 0x1f8
	// Line 1019, Address: 0x2dc170, Func Offset: 0x200
	// Line 1020, Address: 0x2dc174, Func Offset: 0x204
	// Line 1019, Address: 0x2dc178, Func Offset: 0x208
	// Line 1020, Address: 0x2dc17c, Func Offset: 0x20c
	// Line 1022, Address: 0x2dc180, Func Offset: 0x210
	// Line 1024, Address: 0x2dc188, Func Offset: 0x218
	// Line 1025, Address: 0x2dc194, Func Offset: 0x224
	// Line 1026, Address: 0x2dc19c, Func Offset: 0x22c
	// Line 1027, Address: 0x2dc1a4, Func Offset: 0x234
	// Line 1028, Address: 0x2dc1a8, Func Offset: 0x238
	// Line 1030, Address: 0x2dc1c0, Func Offset: 0x250
	// Line 1032, Address: 0x2dc1c8, Func Offset: 0x258
	// Line 1037, Address: 0x2dc1d0, Func Offset: 0x260
	// Line 1038, Address: 0x2dc1d4, Func Offset: 0x264
	// Func End, Address: 0x2dc1e4, Func Offset: 0x274
}

// 
// Start address: 0x2dc1f0
int sfMcCheckCommon(int port, int fn)
{
	int rtv;
	_anon0* ptr;
	// Line 1051, Address: 0x2dc1f0, Func Offset: 0
	// Line 1055, Address: 0x2dc200, Func Offset: 0x10
	// Line 1056, Address: 0x2dc208, Func Offset: 0x18
	// Line 1057, Address: 0x2dc20c, Func Offset: 0x1c
	// Line 1056, Address: 0x2dc210, Func Offset: 0x20
	// Line 1057, Address: 0x2dc214, Func Offset: 0x24
	// Line 1058, Address: 0x2dc21c, Func Offset: 0x2c
	// Line 1062, Address: 0x2dc220, Func Offset: 0x30
	// Line 1064, Address: 0x2dc2b0, Func Offset: 0xc0
	// Line 1065, Address: 0x2dc2b8, Func Offset: 0xc8
	// Line 1066, Address: 0x2dc2c8, Func Offset: 0xd8
	// Line 1068, Address: 0x2dc2d0, Func Offset: 0xe0
	// Line 1069, Address: 0x2dc2f0, Func Offset: 0x100
	// Line 1068, Address: 0x2dc2f4, Func Offset: 0x104
	// Line 1069, Address: 0x2dc2f8, Func Offset: 0x108
	// Line 1070, Address: 0x2dc300, Func Offset: 0x110
	// Line 1072, Address: 0x2dc310, Func Offset: 0x120
	// Line 1073, Address: 0x2dc31c, Func Offset: 0x12c
	// Line 1074, Address: 0x2dc328, Func Offset: 0x138
	// Line 1076, Address: 0x2dc330, Func Offset: 0x140
	// Line 1077, Address: 0x2dc338, Func Offset: 0x148
	// Line 1078, Address: 0x2dc34c, Func Offset: 0x15c
	// Line 1079, Address: 0x2dc350, Func Offset: 0x160
	// Line 1082, Address: 0x2dc358, Func Offset: 0x168
	// Line 1083, Address: 0x2dc364, Func Offset: 0x174
	// Line 1084, Address: 0x2dc370, Func Offset: 0x180
	// Line 1089, Address: 0x2dc378, Func Offset: 0x188
	// Line 1091, Address: 0x2dc38c, Func Offset: 0x19c
	// Line 1090, Address: 0x2dc390, Func Offset: 0x1a0
	// Line 1092, Address: 0x2dc394, Func Offset: 0x1a4
	// Line 1090, Address: 0x2dc398, Func Offset: 0x1a8
	// Line 1093, Address: 0x2dc3a0, Func Offset: 0x1b0
	// Line 1095, Address: 0x2dc3a8, Func Offset: 0x1b8
	// Line 1097, Address: 0x2dc3b0, Func Offset: 0x1c0
	// Line 1103, Address: 0x2dc3b8, Func Offset: 0x1c8
	// Line 1104, Address: 0x2dc3c0, Func Offset: 0x1d0
	// Line 1105, Address: 0x2dc3d0, Func Offset: 0x1e0
	// Line 1107, Address: 0x2dc3d8, Func Offset: 0x1e8
	// Line 1109, Address: 0x2dc3f8, Func Offset: 0x208
	// Line 1107, Address: 0x2dc3fc, Func Offset: 0x20c
	// Line 1108, Address: 0x2dc400, Func Offset: 0x210
	// Line 1109, Address: 0x2dc404, Func Offset: 0x214
	// Line 1110, Address: 0x2dc410, Func Offset: 0x220
	// Line 1111, Address: 0x2dc424, Func Offset: 0x234
	// Line 1112, Address: 0x2dc42c, Func Offset: 0x23c
	// Line 1113, Address: 0x2dc434, Func Offset: 0x244
	// Line 1114, Address: 0x2dc438, Func Offset: 0x248
	// Line 1115, Address: 0x2dc444, Func Offset: 0x254
	// Line 1116, Address: 0x2dc450, Func Offset: 0x260
	// Line 1118, Address: 0x2dc458, Func Offset: 0x268
	// Line 1120, Address: 0x2dc470, Func Offset: 0x280
	// Line 1119, Address: 0x2dc474, Func Offset: 0x284
	// Line 1121, Address: 0x2dc478, Func Offset: 0x288
	// Line 1119, Address: 0x2dc47c, Func Offset: 0x28c
	// Line 1122, Address: 0x2dc484, Func Offset: 0x294
	// Line 1123, Address: 0x2dc48c, Func Offset: 0x29c
	// Line 1124, Address: 0x2dc490, Func Offset: 0x2a0
	// Line 1126, Address: 0x2dc498, Func Offset: 0x2a8
	// Line 1130, Address: 0x2dc4a0, Func Offset: 0x2b0
	// Line 1131, Address: 0x2dc4a8, Func Offset: 0x2b8
	// Line 1132, Address: 0x2dc4b8, Func Offset: 0x2c8
	// Line 1134, Address: 0x2dc4c0, Func Offset: 0x2d0
	// Line 1135, Address: 0x2dc4d4, Func Offset: 0x2e4
	// Line 1136, Address: 0x2dc4dc, Func Offset: 0x2ec
	// Line 1137, Address: 0x2dc4f4, Func Offset: 0x304
	// Line 1138, Address: 0x2dc4fc, Func Offset: 0x30c
	// Line 1139, Address: 0x2dc504, Func Offset: 0x314
	// Line 1141, Address: 0x2dc508, Func Offset: 0x318
	// Line 1142, Address: 0x2dc514, Func Offset: 0x324
	// Line 1143, Address: 0x2dc52c, Func Offset: 0x33c
	// Line 1144, Address: 0x2dc534, Func Offset: 0x344
	// Line 1145, Address: 0x2dc538, Func Offset: 0x348
	// Line 1146, Address: 0x2dc53c, Func Offset: 0x34c
	// Line 1147, Address: 0x2dc544, Func Offset: 0x354
	// Line 1149, Address: 0x2dc554, Func Offset: 0x364
	// Line 1150, Address: 0x2dc55c, Func Offset: 0x36c
	// Line 1151, Address: 0x2dc560, Func Offset: 0x370
	// Line 1152, Address: 0x2dc574, Func Offset: 0x384
	// Line 1153, Address: 0x2dc57c, Func Offset: 0x38c
	// Line 1154, Address: 0x2dc594, Func Offset: 0x3a4
	// Line 1155, Address: 0x2dc59c, Func Offset: 0x3ac
	// Line 1156, Address: 0x2dc5a4, Func Offset: 0x3b4
	// Line 1158, Address: 0x2dc5a8, Func Offset: 0x3b8
	// Line 1159, Address: 0x2dc5b4, Func Offset: 0x3c4
	// Line 1160, Address: 0x2dc5cc, Func Offset: 0x3dc
	// Line 1161, Address: 0x2dc5d4, Func Offset: 0x3e4
	// Line 1167, Address: 0x2dc5d8, Func Offset: 0x3e8
	// Line 1168, Address: 0x2dc5e4, Func Offset: 0x3f4
	// Line 1169, Address: 0x2dc5fc, Func Offset: 0x40c
	// Line 1170, Address: 0x2dc604, Func Offset: 0x414
	// Line 1171, Address: 0x2dc60c, Func Offset: 0x41c
	// Line 1172, Address: 0x2dc614, Func Offset: 0x424
	// Line 1173, Address: 0x2dc618, Func Offset: 0x428
	// Line 1174, Address: 0x2dc624, Func Offset: 0x434
	// Line 1175, Address: 0x2dc62c, Func Offset: 0x43c
	// Line 1177, Address: 0x2dc634, Func Offset: 0x444
	// Line 1178, Address: 0x2dc644, Func Offset: 0x454
	// Line 1179, Address: 0x2dc64c, Func Offset: 0x45c
	// Line 1180, Address: 0x2dc664, Func Offset: 0x474
	// Line 1181, Address: 0x2dc66c, Func Offset: 0x47c
	// Line 1182, Address: 0x2dc674, Func Offset: 0x484
	// Line 1183, Address: 0x2dc67c, Func Offset: 0x48c
	// Line 1185, Address: 0x2dc680, Func Offset: 0x490
	// Line 1187, Address: 0x2dc690, Func Offset: 0x4a0
	// Line 1188, Address: 0x2dc698, Func Offset: 0x4a8
	// Line 1190, Address: 0x2dc6a8, Func Offset: 0x4b8
	// Line 1192, Address: 0x2dc6b0, Func Offset: 0x4c0
	// Line 1193, Address: 0x2dc6c0, Func Offset: 0x4d0
	// Line 1194, Address: 0x2dc6cc, Func Offset: 0x4dc
	// Line 1195, Address: 0x2dc6e4, Func Offset: 0x4f4
	// Line 1196, Address: 0x2dc6ec, Func Offset: 0x4fc
	// Line 1197, Address: 0x2dc6f4, Func Offset: 0x504
	// Line 1199, Address: 0x2dc6f8, Func Offset: 0x508
	// Line 1200, Address: 0x2dc704, Func Offset: 0x514
	// Line 1201, Address: 0x2dc71c, Func Offset: 0x52c
	// Line 1202, Address: 0x2dc724, Func Offset: 0x534
	// Line 1203, Address: 0x2dc728, Func Offset: 0x538
	// Line 1204, Address: 0x2dc744, Func Offset: 0x554
	// Line 1206, Address: 0x2dc748, Func Offset: 0x558
	// Line 1209, Address: 0x2dc750, Func Offset: 0x560
	// Line 1210, Address: 0x2dc760, Func Offset: 0x570
	// Line 1211, Address: 0x2dc76c, Func Offset: 0x57c
	// Line 1212, Address: 0x2dc784, Func Offset: 0x594
	// Line 1213, Address: 0x2dc78c, Func Offset: 0x59c
	// Line 1214, Address: 0x2dc794, Func Offset: 0x5a4
	// Line 1216, Address: 0x2dc798, Func Offset: 0x5a8
	// Line 1217, Address: 0x2dc7a0, Func Offset: 0x5b0
	// Line 1219, Address: 0x2dc7a8, Func Offset: 0x5b8
	// Line 1221, Address: 0x2dc7c4, Func Offset: 0x5d4
	// Line 1219, Address: 0x2dc7c8, Func Offset: 0x5d8
	// Line 1221, Address: 0x2dc7cc, Func Offset: 0x5dc
	// Line 1223, Address: 0x2dc7d0, Func Offset: 0x5e0
	// Line 1226, Address: 0x2dc7d8, Func Offset: 0x5e8
	// Line 1227, Address: 0x2dc7e0, Func Offset: 0x5f0
	// Line 1228, Address: 0x2dc7f0, Func Offset: 0x600
	// Line 1230, Address: 0x2dc7f8, Func Offset: 0x608
	// Line 1231, Address: 0x2dc80c, Func Offset: 0x61c
	// Line 1233, Address: 0x2dc820, Func Offset: 0x630
	// Line 1235, Address: 0x2dc828, Func Offset: 0x638
	// Line 1236, Address: 0x2dc830, Func Offset: 0x640
	// Line 1237, Address: 0x2dc844, Func Offset: 0x654
	// Line 1238, Address: 0x2dc84c, Func Offset: 0x65c
	// Line 1239, Address: 0x2dc854, Func Offset: 0x664
	// Line 1241, Address: 0x2dc858, Func Offset: 0x668
	// Line 1242, Address: 0x2dc860, Func Offset: 0x670
	// Line 1246, Address: 0x2dc868, Func Offset: 0x678
	// Line 1248, Address: 0x2dc884, Func Offset: 0x694
	// Line 1246, Address: 0x2dc888, Func Offset: 0x698
	// Line 1248, Address: 0x2dc88c, Func Offset: 0x69c
	// Line 1250, Address: 0x2dc890, Func Offset: 0x6a0
	// Line 1253, Address: 0x2dc898, Func Offset: 0x6a8
	// Line 1254, Address: 0x2dc8a8, Func Offset: 0x6b8
	// Line 1255, Address: 0x2dc8b4, Func Offset: 0x6c4
	// Line 1257, Address: 0x2dc8c0, Func Offset: 0x6d0
	// Line 1259, Address: 0x2dc8c8, Func Offset: 0x6d8
	// Line 1261, Address: 0x2dc8d0, Func Offset: 0x6e0
	// Line 1262, Address: 0x2dc8e0, Func Offset: 0x6f0
	// Line 1263, Address: 0x2dc8e8, Func Offset: 0x6f8
	// Line 1267, Address: 0x2dc914, Func Offset: 0x724
	// Line 1268, Address: 0x2dc918, Func Offset: 0x728
	// Line 1270, Address: 0x2dc930, Func Offset: 0x740
	// Line 1272, Address: 0x2dc938, Func Offset: 0x748
	// Line 1273, Address: 0x2dc940, Func Offset: 0x750
	// Line 1272, Address: 0x2dc944, Func Offset: 0x754
	// Line 1273, Address: 0x2dc954, Func Offset: 0x764
	// Line 1275, Address: 0x2dc95c, Func Offset: 0x76c
	// Line 1276, Address: 0x2dc960, Func Offset: 0x770
	// Line 1277, Address: 0x2dc978, Func Offset: 0x788
	// Line 1278, Address: 0x2dc988, Func Offset: 0x798
	// Line 1281, Address: 0x2dc98c, Func Offset: 0x79c
	// Line 1283, Address: 0x2dc990, Func Offset: 0x7a0
	// Line 1284, Address: 0x2dc994, Func Offset: 0x7a4
	// Func End, Address: 0x2dc9a8, Func Offset: 0x7b8
}

// 
// Start address: 0x2dc9b0
int sfMcLoad(int port, int fn, int file_no)
{
	int rtv;
	// Line 1296, Address: 0x2dc9b0, Func Offset: 0
	// Line 1300, Address: 0x2dc9c8, Func Offset: 0x18
	// Line 1301, Address: 0x2dc9d0, Func Offset: 0x20
	// Line 1302, Address: 0x2dc9d4, Func Offset: 0x24
	// Line 1301, Address: 0x2dc9d8, Func Offset: 0x28
	// Line 1302, Address: 0x2dc9dc, Func Offset: 0x2c
	// Line 1303, Address: 0x2dc9e4, Func Offset: 0x34
	// Line 1306, Address: 0x2dc9e8, Func Offset: 0x38
	// Line 1308, Address: 0x2dca18, Func Offset: 0x68
	// Line 1309, Address: 0x2dca20, Func Offset: 0x70
	// Line 1310, Address: 0x2dca28, Func Offset: 0x78
	// Line 1311, Address: 0x2dca38, Func Offset: 0x88
	// Line 1313, Address: 0x2dca40, Func Offset: 0x90
	// Line 1314, Address: 0x2dca54, Func Offset: 0xa4
	// Line 1315, Address: 0x2dca5c, Func Offset: 0xac
	// Line 1316, Address: 0x2dca74, Func Offset: 0xc4
	// Line 1317, Address: 0x2dca78, Func Offset: 0xc8
	// Line 1320, Address: 0x2dca80, Func Offset: 0xd0
	// Line 1322, Address: 0x2dca88, Func Offset: 0xd8
	// Line 1326, Address: 0x2dca90, Func Offset: 0xe0
	// Line 1328, Address: 0x2dcaa8, Func Offset: 0xf8
	// Line 1330, Address: 0x2dcab8, Func Offset: 0x108
	// Line 1332, Address: 0x2dcac0, Func Offset: 0x110
	// Line 1333, Address: 0x2dcad0, Func Offset: 0x120
	// Line 1334, Address: 0x2dcadc, Func Offset: 0x12c
	// Line 1335, Address: 0x2dcaf4, Func Offset: 0x144
	// Line 1336, Address: 0x2dcaf8, Func Offset: 0x148
	// Line 1339, Address: 0x2dcb00, Func Offset: 0x150
	// Line 1341, Address: 0x2dcb08, Func Offset: 0x158
	// Line 1342, Address: 0x2dcb10, Func Offset: 0x160
	// Line 1344, Address: 0x2dcb20, Func Offset: 0x170
	// Line 1346, Address: 0x2dcb28, Func Offset: 0x178
	// Line 1347, Address: 0x2dcb3c, Func Offset: 0x18c
	// Line 1348, Address: 0x2dcb50, Func Offset: 0x1a0
	// Line 1349, Address: 0x2dcb68, Func Offset: 0x1b8
	// Line 1350, Address: 0x2dcb6c, Func Offset: 0x1bc
	// Line 1351, Address: 0x2dcb74, Func Offset: 0x1c4
	// Line 1353, Address: 0x2dcb78, Func Offset: 0x1c8
	// Line 1365, Address: 0x2dcb80, Func Offset: 0x1d0
	// Line 1366, Address: 0x2dcb88, Func Offset: 0x1d8
	// Line 1367, Address: 0x2dcb90, Func Offset: 0x1e0
	// Line 1369, Address: 0x2dcba0, Func Offset: 0x1f0
	// Line 1371, Address: 0x2dcba8, Func Offset: 0x1f8
	// Line 1372, Address: 0x2dcbb8, Func Offset: 0x208
	// Line 1373, Address: 0x2dcbc4, Func Offset: 0x214
	// Line 1374, Address: 0x2dcbdc, Func Offset: 0x22c
	// Line 1375, Address: 0x2dcbe0, Func Offset: 0x230
	// Line 1378, Address: 0x2dcbe8, Func Offset: 0x238
	// Line 1382, Address: 0x2dcbf0, Func Offset: 0x240
	// Line 1386, Address: 0x2dcbf8, Func Offset: 0x248
	// Line 1387, Address: 0x2dcc08, Func Offset: 0x258
	// Line 1388, Address: 0x2dcc14, Func Offset: 0x264
	// Line 1389, Address: 0x2dcc2c, Func Offset: 0x27c
	// Line 1390, Address: 0x2dcc34, Func Offset: 0x284
	// Line 1391, Address: 0x2dcc3c, Func Offset: 0x28c
	// Line 1393, Address: 0x2dcc40, Func Offset: 0x290
	// Line 1394, Address: 0x2dcc48, Func Offset: 0x298
	// Line 1396, Address: 0x2dcc50, Func Offset: 0x2a0
	// Line 1398, Address: 0x2dcc6c, Func Offset: 0x2bc
	// Line 1396, Address: 0x2dcc70, Func Offset: 0x2c0
	// Line 1398, Address: 0x2dcc74, Func Offset: 0x2c4
	// Line 1403, Address: 0x2dcc7c, Func Offset: 0x2cc
	// Line 1405, Address: 0x2dcc80, Func Offset: 0x2d0
	// Line 1406, Address: 0x2dcc84, Func Offset: 0x2d4
	// Func End, Address: 0x2dcc9c, Func Offset: 0x2ec
}

// 
// Start address: 0x2dcca0
int sfMcSaveIconSubStatic(int port)
{
	int rtv;
	// Line 1415, Address: 0x2dcca0, Func Offset: 0
	// Line 1419, Address: 0x2dcca4, Func Offset: 0x4
	// Line 1415, Address: 0x2dcca8, Func Offset: 0x8
	// Line 1419, Address: 0x2dccac, Func Offset: 0xc
	// Line 1415, Address: 0x2dccb0, Func Offset: 0x10
	// Line 1419, Address: 0x2dccb4, Func Offset: 0x14
	// Line 1420, Address: 0x2dcce4, Func Offset: 0x44
	// Line 1421, Address: 0x2dcce8, Func Offset: 0x48
	// Line 1422, Address: 0x2dccf0, Func Offset: 0x50
	// Line 1423, Address: 0x2dcd00, Func Offset: 0x60
	// Line 1425, Address: 0x2dcd08, Func Offset: 0x68
	// Line 1426, Address: 0x2dcd1c, Func Offset: 0x7c
	// Line 1427, Address: 0x2dcd24, Func Offset: 0x84
	// Line 1428, Address: 0x2dcd3c, Func Offset: 0x9c
	// Line 1429, Address: 0x2dcd4c, Func Offset: 0xac
	// Line 1430, Address: 0x2dcd54, Func Offset: 0xb4
	// Line 1432, Address: 0x2dcd58, Func Offset: 0xb8
	// Line 1434, Address: 0x2dcd60, Func Offset: 0xc0
	// Line 1435, Address: 0x2dcd68, Func Offset: 0xc8
	// Line 1438, Address: 0x2dcd8c, Func Offset: 0xec
	// Line 1440, Address: 0x2dcd9c, Func Offset: 0xfc
	// Line 1441, Address: 0x2dcda4, Func Offset: 0x104
	// Line 1442, Address: 0x2dcda8, Func Offset: 0x108
	// Line 1443, Address: 0x2dcdb8, Func Offset: 0x118
	// Line 1444, Address: 0x2dcdc4, Func Offset: 0x124
	// Line 1445, Address: 0x2dcddc, Func Offset: 0x13c
	// Line 1446, Address: 0x2dcdec, Func Offset: 0x14c
	// Line 1447, Address: 0x2dcdf4, Func Offset: 0x154
	// Line 1449, Address: 0x2dcdf8, Func Offset: 0x158
	// Line 1451, Address: 0x2dce00, Func Offset: 0x160
	// Line 1452, Address: 0x2dce08, Func Offset: 0x168
	// Line 1454, Address: 0x2dce18, Func Offset: 0x178
	// Line 1456, Address: 0x2dce20, Func Offset: 0x180
	// Line 1457, Address: 0x2dce30, Func Offset: 0x190
	// Line 1458, Address: 0x2dce3c, Func Offset: 0x19c
	// Line 1459, Address: 0x2dce54, Func Offset: 0x1b4
	// Line 1460, Address: 0x2dce58, Func Offset: 0x1b8
	// Line 1463, Address: 0x2dce60, Func Offset: 0x1c0
	// Line 1465, Address: 0x2dce68, Func Offset: 0x1c8
	// Line 1468, Address: 0x2dce6c, Func Offset: 0x1cc
	// Line 1469, Address: 0x2dce70, Func Offset: 0x1d0
	// Line 1470, Address: 0x2dce74, Func Offset: 0x1d4
	// Func End, Address: 0x2dce84, Func Offset: 0x1e4
}

// 
// Start address: 0x2dce90
int sfMcSaveIconSubSys(int port)
{
	int rtv;
	// Line 1479, Address: 0x2dce90, Func Offset: 0
	// Line 1483, Address: 0x2dce94, Func Offset: 0x4
	// Line 1479, Address: 0x2dce98, Func Offset: 0x8
	// Line 1483, Address: 0x2dce9c, Func Offset: 0xc
	// Line 1479, Address: 0x2dcea0, Func Offset: 0x10
	// Line 1483, Address: 0x2dceac, Func Offset: 0x1c
	// Line 1484, Address: 0x2dcedc, Func Offset: 0x4c
	// Line 1485, Address: 0x2dcee0, Func Offset: 0x50
	// Line 1486, Address: 0x2dcee8, Func Offset: 0x58
	// Line 1487, Address: 0x2dcef4, Func Offset: 0x64
	// Line 1488, Address: 0x2dcf04, Func Offset: 0x74
	// Line 1489, Address: 0x2dcf0c, Func Offset: 0x7c
	// Line 1490, Address: 0x2dcf10, Func Offset: 0x80
	// Line 1491, Address: 0x2dcf24, Func Offset: 0x94
	// Line 1492, Address: 0x2dcf2c, Func Offset: 0x9c
	// Line 1493, Address: 0x2dcf44, Func Offset: 0xb4
	// Line 1494, Address: 0x2dcf48, Func Offset: 0xb8
	// Line 1497, Address: 0x2dcf50, Func Offset: 0xc0
	// Line 1499, Address: 0x2dcf58, Func Offset: 0xc8
	// Line 1500, Address: 0x2dcf60, Func Offset: 0xd0
	// Line 1501, Address: 0x2dcf78, Func Offset: 0xe8
	// Line 1503, Address: 0x2dcf88, Func Offset: 0xf8
	// Line 1505, Address: 0x2dcf90, Func Offset: 0x100
	// Line 1506, Address: 0x2dcfa0, Func Offset: 0x110
	// Line 1507, Address: 0x2dcfac, Func Offset: 0x11c
	// Line 1508, Address: 0x2dcfc4, Func Offset: 0x134
	// Line 1509, Address: 0x2dcfd4, Func Offset: 0x144
	// Line 1510, Address: 0x2dcfdc, Func Offset: 0x14c
	// Line 1512, Address: 0x2dcfe0, Func Offset: 0x150
	// Line 1514, Address: 0x2dcfe8, Func Offset: 0x158
	// Line 1515, Address: 0x2dcff0, Func Offset: 0x160
	// Line 1517, Address: 0x2dd000, Func Offset: 0x170
	// Line 1519, Address: 0x2dd008, Func Offset: 0x178
	// Line 1520, Address: 0x2dd018, Func Offset: 0x188
	// Line 1521, Address: 0x2dd024, Func Offset: 0x194
	// Line 1522, Address: 0x2dd03c, Func Offset: 0x1ac
	// Line 1523, Address: 0x2dd040, Func Offset: 0x1b0
	// Line 1526, Address: 0x2dd048, Func Offset: 0x1b8
	// Line 1528, Address: 0x2dd050, Func Offset: 0x1c0
	// Line 1531, Address: 0x2dd054, Func Offset: 0x1c4
	// Line 1532, Address: 0x2dd058, Func Offset: 0x1c8
	// Line 1533, Address: 0x2dd05c, Func Offset: 0x1cc
	// Func End, Address: 0x2dd070, Func Offset: 0x1e0
}

// 
// Start address: 0x2dd070
int sfMcSaveMainSub()
{
	int rtv;
	// Line 1542, Address: 0x2dd070, Func Offset: 0
	// Line 1546, Address: 0x2dd07c, Func Offset: 0xc
	// Line 1547, Address: 0x2dd08c, Func Offset: 0x1c
	// Line 1549, Address: 0x2dd098, Func Offset: 0x28
	// Line 1551, Address: 0x2dd0a0, Func Offset: 0x30
	// Line 1555, Address: 0x2dd0a8, Func Offset: 0x38
	// Line 1556, Address: 0x2dd0bc, Func Offset: 0x4c
	// Line 1557, Address: 0x2dd0d4, Func Offset: 0x64
	// Line 1558, Address: 0x2dd0d8, Func Offset: 0x68
	// Line 1559, Address: 0x2dd0e0, Func Offset: 0x70
	// Func End, Address: 0x2dd0f0, Func Offset: 0x80
}

// 
// Start address: 0x2dd0f0
int sfMcSaveCreate(int port, int fn, int file_no)
{
	int rtv;
	int ret;
	// Line 1574, Address: 0x2dd0f0, Func Offset: 0
	// Line 1578, Address: 0x2dd108, Func Offset: 0x18
	// Line 1579, Address: 0x2dd110, Func Offset: 0x20
	// Line 1580, Address: 0x2dd114, Func Offset: 0x24
	// Line 1579, Address: 0x2dd118, Func Offset: 0x28
	// Line 1580, Address: 0x2dd11c, Func Offset: 0x2c
	// Line 1581, Address: 0x2dd124, Func Offset: 0x34
	// Line 1584, Address: 0x2dd128, Func Offset: 0x38
	// Line 1586, Address: 0x2dd1d8, Func Offset: 0xe8
	// Line 1587, Address: 0x2dd1e0, Func Offset: 0xf0
	// Line 1588, Address: 0x2dd200, Func Offset: 0x110
	// Line 1589, Address: 0x2dd208, Func Offset: 0x118
	// Line 1591, Address: 0x2dd210, Func Offset: 0x120
	// Line 1595, Address: 0x2dd224, Func Offset: 0x134
	// Line 1596, Address: 0x2dd234, Func Offset: 0x144
	// Line 1597, Address: 0x2dd248, Func Offset: 0x158
	// Line 1598, Address: 0x2dd24c, Func Offset: 0x15c
	// Line 1599, Address: 0x2dd254, Func Offset: 0x164
	// Line 1601, Address: 0x2dd258, Func Offset: 0x168
	// Line 1605, Address: 0x2dd260, Func Offset: 0x170
	// Line 1604, Address: 0x2dd268, Func Offset: 0x178
	// Line 1603, Address: 0x2dd26c, Func Offset: 0x17c
	// Line 1604, Address: 0x2dd274, Func Offset: 0x184
	// Line 1603, Address: 0x2dd27c, Func Offset: 0x18c
	// Line 1607, Address: 0x2dd284, Func Offset: 0x194
	// Line 1608, Address: 0x2dd28c, Func Offset: 0x19c
	// Line 1609, Address: 0x2dd290, Func Offset: 0x1a0
	// Line 1610, Address: 0x2dd298, Func Offset: 0x1a8
	// Line 1612, Address: 0x2dd2a0, Func Offset: 0x1b0
	// Line 1614, Address: 0x2dd2a8, Func Offset: 0x1b8
	// Line 1615, Address: 0x2dd2b0, Func Offset: 0x1c0
	// Line 1616, Address: 0x2dd2b4, Func Offset: 0x1c4
	// Line 1615, Address: 0x2dd2b8, Func Offset: 0x1c8
	// Line 1616, Address: 0x2dd2bc, Func Offset: 0x1cc
	// Line 1615, Address: 0x2dd2c0, Func Offset: 0x1d0
	// Line 1616, Address: 0x2dd2c4, Func Offset: 0x1d4
	// Line 1618, Address: 0x2dd2c8, Func Offset: 0x1d8
	// Line 1620, Address: 0x2dd2d0, Func Offset: 0x1e0
	// Line 1621, Address: 0x2dd2d8, Func Offset: 0x1e8
	// Line 1622, Address: 0x2dd2e8, Func Offset: 0x1f8
	// Line 1624, Address: 0x2dd2f0, Func Offset: 0x200
	// Line 1625, Address: 0x2dd304, Func Offset: 0x214
	// Line 1626, Address: 0x2dd30c, Func Offset: 0x21c
	// Line 1627, Address: 0x2dd324, Func Offset: 0x234
	// Line 1628, Address: 0x2dd32c, Func Offset: 0x23c
	// Line 1629, Address: 0x2dd334, Func Offset: 0x244
	// Line 1631, Address: 0x2dd338, Func Offset: 0x248
	// Line 1633, Address: 0x2dd340, Func Offset: 0x250
	// Line 1634, Address: 0x2dd348, Func Offset: 0x258
	// Line 1636, Address: 0x2dd358, Func Offset: 0x268
	// Line 1638, Address: 0x2dd360, Func Offset: 0x270
	// Line 1639, Address: 0x2dd368, Func Offset: 0x278
	// Line 1640, Address: 0x2dd374, Func Offset: 0x284
	// Line 1641, Address: 0x2dd37c, Func Offset: 0x28c
	// Line 1642, Address: 0x2dd38c, Func Offset: 0x29c
	// Line 1643, Address: 0x2dd394, Func Offset: 0x2a4
	// Line 1644, Address: 0x2dd398, Func Offset: 0x2a8
	// Line 1645, Address: 0x2dd3a8, Func Offset: 0x2b8
	// Line 1646, Address: 0x2dd3b4, Func Offset: 0x2c4
	// Line 1647, Address: 0x2dd3cc, Func Offset: 0x2dc
	// Line 1648, Address: 0x2dd3d4, Func Offset: 0x2e4
	// Line 1649, Address: 0x2dd3dc, Func Offset: 0x2ec
	// Line 1651, Address: 0x2dd3e0, Func Offset: 0x2f0
	// Line 1653, Address: 0x2dd3e8, Func Offset: 0x2f8
	// Line 1654, Address: 0x2dd3f0, Func Offset: 0x300
	// Line 1656, Address: 0x2dd400, Func Offset: 0x310
	// Line 1658, Address: 0x2dd408, Func Offset: 0x318
	// Line 1659, Address: 0x2dd418, Func Offset: 0x328
	// Line 1660, Address: 0x2dd424, Func Offset: 0x334
	// Line 1661, Address: 0x2dd43c, Func Offset: 0x34c
	// Line 1662, Address: 0x2dd444, Func Offset: 0x354
	// Line 1663, Address: 0x2dd44c, Func Offset: 0x35c
	// Line 1665, Address: 0x2dd450, Func Offset: 0x360
	// Line 1667, Address: 0x2dd458, Func Offset: 0x368
	// Line 1668, Address: 0x2dd460, Func Offset: 0x370
	// Line 1669, Address: 0x2dd464, Func Offset: 0x374
	// Line 1668, Address: 0x2dd46c, Func Offset: 0x37c
	// Line 1669, Address: 0x2dd470, Func Offset: 0x380
	// Line 1668, Address: 0x2dd474, Func Offset: 0x384
	// Line 1669, Address: 0x2dd478, Func Offset: 0x388
	// Line 1671, Address: 0x2dd47c, Func Offset: 0x38c
	// Line 1672, Address: 0x2dd484, Func Offset: 0x394
	// Line 1673, Address: 0x2dd488, Func Offset: 0x398
	// Line 1674, Address: 0x2dd490, Func Offset: 0x3a0
	// Line 1675, Address: 0x2dd4a0, Func Offset: 0x3b0
	// Line 1677, Address: 0x2dd4a8, Func Offset: 0x3b8
	// Line 1678, Address: 0x2dd4bc, Func Offset: 0x3cc
	// Line 1679, Address: 0x2dd4c4, Func Offset: 0x3d4
	// Line 1680, Address: 0x2dd4dc, Func Offset: 0x3ec
	// Line 1681, Address: 0x2dd4e4, Func Offset: 0x3f4
	// Line 1682, Address: 0x2dd4ec, Func Offset: 0x3fc
	// Line 1684, Address: 0x2dd4f0, Func Offset: 0x400
	// Line 1686, Address: 0x2dd4f8, Func Offset: 0x408
	// Line 1687, Address: 0x2dd500, Func Offset: 0x410
	// Line 1688, Address: 0x2dd508, Func Offset: 0x418
	// Line 1690, Address: 0x2dd518, Func Offset: 0x428
	// Line 1692, Address: 0x2dd520, Func Offset: 0x430
	// Line 1693, Address: 0x2dd528, Func Offset: 0x438
	// Line 1694, Address: 0x2dd530, Func Offset: 0x440
	// Line 1695, Address: 0x2dd544, Func Offset: 0x454
	// Line 1696, Address: 0x2dd54c, Func Offset: 0x45c
	// Line 1697, Address: 0x2dd554, Func Offset: 0x464
	// Line 1699, Address: 0x2dd558, Func Offset: 0x468
	// Line 1701, Address: 0x2dd560, Func Offset: 0x470
	// Line 1702, Address: 0x2dd568, Func Offset: 0x478
	// Line 1704, Address: 0x2dd574, Func Offset: 0x484
	// Line 1705, Address: 0x2dd57c, Func Offset: 0x48c
	// Line 1706, Address: 0x2dd580, Func Offset: 0x490
	// Line 1707, Address: 0x2dd590, Func Offset: 0x4a0
	// Line 1708, Address: 0x2dd59c, Func Offset: 0x4ac
	// Line 1709, Address: 0x2dd5b4, Func Offset: 0x4c4
	// Line 1710, Address: 0x2dd5bc, Func Offset: 0x4cc
	// Line 1711, Address: 0x2dd5c4, Func Offset: 0x4d4
	// Line 1713, Address: 0x2dd5c8, Func Offset: 0x4d8
	// Line 1715, Address: 0x2dd5d0, Func Offset: 0x4e0
	// Line 1716, Address: 0x2dd5d8, Func Offset: 0x4e8
	// Line 1718, Address: 0x2dd5e8, Func Offset: 0x4f8
	// Line 1720, Address: 0x2dd5f0, Func Offset: 0x500
	// Line 1721, Address: 0x2dd600, Func Offset: 0x510
	// Line 1722, Address: 0x2dd60c, Func Offset: 0x51c
	// Line 1723, Address: 0x2dd624, Func Offset: 0x534
	// Line 1724, Address: 0x2dd62c, Func Offset: 0x53c
	// Line 1725, Address: 0x2dd634, Func Offset: 0x544
	// Line 1727, Address: 0x2dd638, Func Offset: 0x548
	// Line 1731, Address: 0x2dd640, Func Offset: 0x550
	// Line 1730, Address: 0x2dd648, Func Offset: 0x558
	// Line 1729, Address: 0x2dd64c, Func Offset: 0x55c
	// Line 1730, Address: 0x2dd654, Func Offset: 0x564
	// Line 1729, Address: 0x2dd65c, Func Offset: 0x56c
	// Line 1733, Address: 0x2dd664, Func Offset: 0x574
	// Line 1734, Address: 0x2dd66c, Func Offset: 0x57c
	// Line 1735, Address: 0x2dd670, Func Offset: 0x580
	// Line 1736, Address: 0x2dd678, Func Offset: 0x588
	// Line 1738, Address: 0x2dd680, Func Offset: 0x590
	// Line 1740, Address: 0x2dd688, Func Offset: 0x598
	// Line 1741, Address: 0x2dd690, Func Offset: 0x5a0
	// Line 1743, Address: 0x2dd698, Func Offset: 0x5a8
	// Line 1746, Address: 0x2dd6a0, Func Offset: 0x5b0
	// Line 1747, Address: 0x2dd6ac, Func Offset: 0x5bc
	// Line 1748, Address: 0x2dd6b8, Func Offset: 0x5c8
	// Line 1749, Address: 0x2dd6bc, Func Offset: 0x5cc
	// Line 1750, Address: 0x2dd6c4, Func Offset: 0x5d4
	// Line 1751, Address: 0x2dd6c8, Func Offset: 0x5d8
	// Line 1752, Address: 0x2dd6d0, Func Offset: 0x5e0
	// Line 1754, Address: 0x2dd6d8, Func Offset: 0x5e8
	// Line 1756, Address: 0x2dd6e0, Func Offset: 0x5f0
	// Line 1757, Address: 0x2dd6e8, Func Offset: 0x5f8
	// Line 1760, Address: 0x2dd6ec, Func Offset: 0x5fc
	// Line 1762, Address: 0x2dd6f0, Func Offset: 0x600
	// Line 1763, Address: 0x2dd6f4, Func Offset: 0x604
	// Func End, Address: 0x2dd70c, Func Offset: 0x61c
}

// 
// Start address: 0x2dd710
int sfMcSaveOverwrite(int port, int fn, int file_no)
{
	int rtv;
	int ret;
	// Line 1775, Address: 0x2dd710, Func Offset: 0
	// Line 1779, Address: 0x2dd728, Func Offset: 0x18
	// Line 1780, Address: 0x2dd730, Func Offset: 0x20
	// Line 1781, Address: 0x2dd734, Func Offset: 0x24
	// Line 1780, Address: 0x2dd738, Func Offset: 0x28
	// Line 1781, Address: 0x2dd73c, Func Offset: 0x2c
	// Line 1782, Address: 0x2dd744, Func Offset: 0x34
	// Line 1785, Address: 0x2dd748, Func Offset: 0x38
	// Line 1787, Address: 0x2dd7d0, Func Offset: 0xc0
	// Line 1788, Address: 0x2dd7d8, Func Offset: 0xc8
	// Line 1789, Address: 0x2dd7e8, Func Offset: 0xd8
	// Line 1791, Address: 0x2dd7f0, Func Offset: 0xe0
	// Line 1792, Address: 0x2dd804, Func Offset: 0xf4
	// Line 1793, Address: 0x2dd80c, Func Offset: 0xfc
	// Line 1794, Address: 0x2dd824, Func Offset: 0x114
	// Line 1795, Address: 0x2dd828, Func Offset: 0x118
	// Line 1798, Address: 0x2dd830, Func Offset: 0x120
	// Line 1800, Address: 0x2dd838, Func Offset: 0x128
	// Line 1801, Address: 0x2dd840, Func Offset: 0x130
	// Line 1803, Address: 0x2dd850, Func Offset: 0x140
	// Line 1805, Address: 0x2dd858, Func Offset: 0x148
	// Line 1806, Address: 0x2dd860, Func Offset: 0x150
	// Line 1807, Address: 0x2dd86c, Func Offset: 0x15c
	// Line 1808, Address: 0x2dd874, Func Offset: 0x164
	// Line 1809, Address: 0x2dd884, Func Offset: 0x174
	// Line 1810, Address: 0x2dd88c, Func Offset: 0x17c
	// Line 1811, Address: 0x2dd890, Func Offset: 0x180
	// Line 1812, Address: 0x2dd8a0, Func Offset: 0x190
	// Line 1813, Address: 0x2dd8ac, Func Offset: 0x19c
	// Line 1814, Address: 0x2dd8c4, Func Offset: 0x1b4
	// Line 1815, Address: 0x2dd8c8, Func Offset: 0x1b8
	// Line 1818, Address: 0x2dd8d0, Func Offset: 0x1c0
	// Line 1820, Address: 0x2dd8d8, Func Offset: 0x1c8
	// Line 1821, Address: 0x2dd8e0, Func Offset: 0x1d0
	// Line 1823, Address: 0x2dd8f0, Func Offset: 0x1e0
	// Line 1825, Address: 0x2dd8f8, Func Offset: 0x1e8
	// Line 1826, Address: 0x2dd908, Func Offset: 0x1f8
	// Line 1827, Address: 0x2dd914, Func Offset: 0x204
	// Line 1828, Address: 0x2dd92c, Func Offset: 0x21c
	// Line 1829, Address: 0x2dd930, Func Offset: 0x220
	// Line 1832, Address: 0x2dd938, Func Offset: 0x228
	// Line 1834, Address: 0x2dd940, Func Offset: 0x230
	// Line 1835, Address: 0x2dd948, Func Offset: 0x238
	// Line 1834, Address: 0x2dd954, Func Offset: 0x244
	// Line 1837, Address: 0x2dd95c, Func Offset: 0x24c
	// Line 1838, Address: 0x2dd964, Func Offset: 0x254
	// Line 1839, Address: 0x2dd968, Func Offset: 0x258
	// Line 1840, Address: 0x2dd970, Func Offset: 0x260
	// Line 1841, Address: 0x2dd980, Func Offset: 0x270
	// Line 1843, Address: 0x2dd988, Func Offset: 0x278
	// Line 1844, Address: 0x2dd99c, Func Offset: 0x28c
	// Line 1845, Address: 0x2dd9a4, Func Offset: 0x294
	// Line 1846, Address: 0x2dd9bc, Func Offset: 0x2ac
	// Line 1847, Address: 0x2dd9c4, Func Offset: 0x2b4
	// Line 1848, Address: 0x2dd9cc, Func Offset: 0x2bc
	// Line 1850, Address: 0x2dd9d0, Func Offset: 0x2c0
	// Line 1852, Address: 0x2dd9d8, Func Offset: 0x2c8
	// Line 1856, Address: 0x2dd9e0, Func Offset: 0x2d0
	// Line 1858, Address: 0x2dd9f8, Func Offset: 0x2e8
	// Line 1860, Address: 0x2dda08, Func Offset: 0x2f8
	// Line 1862, Address: 0x2dda10, Func Offset: 0x300
	// Line 1863, Address: 0x2dda20, Func Offset: 0x310
	// Line 1864, Address: 0x2dda2c, Func Offset: 0x31c
	// Line 1865, Address: 0x2dda44, Func Offset: 0x334
	// Line 1866, Address: 0x2dda4c, Func Offset: 0x33c
	// Line 1867, Address: 0x2dda54, Func Offset: 0x344
	// Line 1869, Address: 0x2dda58, Func Offset: 0x348
	// Line 1871, Address: 0x2dda60, Func Offset: 0x350
	// Line 1872, Address: 0x2dda68, Func Offset: 0x358
	// Line 1874, Address: 0x2dda78, Func Offset: 0x368
	// Line 1876, Address: 0x2dda80, Func Offset: 0x370
	// Line 1877, Address: 0x2dda90, Func Offset: 0x380
	// Line 1878, Address: 0x2dda9c, Func Offset: 0x38c
	// Line 1879, Address: 0x2ddab4, Func Offset: 0x3a4
	// Line 1880, Address: 0x2ddabc, Func Offset: 0x3ac
	// Line 1881, Address: 0x2ddac4, Func Offset: 0x3b4
	// Line 1883, Address: 0x2ddac8, Func Offset: 0x3b8
	// Line 1885, Address: 0x2ddad0, Func Offset: 0x3c0
	// Line 1886, Address: 0x2ddad8, Func Offset: 0x3c8
	// Line 1888, Address: 0x2ddae8, Func Offset: 0x3d8
	// Line 1890, Address: 0x2ddaf0, Func Offset: 0x3e0
	// Line 1891, Address: 0x2ddb00, Func Offset: 0x3f0
	// Line 1892, Address: 0x2ddb0c, Func Offset: 0x3fc
	// Line 1893, Address: 0x2ddb24, Func Offset: 0x414
	// Line 1894, Address: 0x2ddb2c, Func Offset: 0x41c
	// Line 1895, Address: 0x2ddb34, Func Offset: 0x424
	// Line 1897, Address: 0x2ddb38, Func Offset: 0x428
	// Line 1899, Address: 0x2ddb40, Func Offset: 0x430
	// Line 1901, Address: 0x2ddb48, Func Offset: 0x438
	// Line 1904, Address: 0x2ddb50, Func Offset: 0x440
	// Line 1905, Address: 0x2ddb5c, Func Offset: 0x44c
	// Line 1906, Address: 0x2ddb68, Func Offset: 0x458
	// Line 1907, Address: 0x2ddb6c, Func Offset: 0x45c
	// Line 1908, Address: 0x2ddb74, Func Offset: 0x464
	// Line 1909, Address: 0x2ddb78, Func Offset: 0x468
	// Line 1910, Address: 0x2ddb80, Func Offset: 0x470
	// Line 1912, Address: 0x2ddb88, Func Offset: 0x478
	// Line 1914, Address: 0x2ddb90, Func Offset: 0x480
	// Line 1915, Address: 0x2ddb98, Func Offset: 0x488
	// Line 1918, Address: 0x2ddb9c, Func Offset: 0x48c
	// Line 1920, Address: 0x2ddba0, Func Offset: 0x490
	// Line 1921, Address: 0x2ddba4, Func Offset: 0x494
	// Func End, Address: 0x2ddbbc, Func Offset: 0x4ac
}

// 
// Start address: 0x2ddbc0
int sfMcDel(int port, int fn, int file_no)
{
	int rtv;
	int ret;
	// Line 1933, Address: 0x2ddbc0, Func Offset: 0
	// Line 1937, Address: 0x2ddbd8, Func Offset: 0x18
	// Line 1938, Address: 0x2ddbe0, Func Offset: 0x20
	// Line 1939, Address: 0x2ddbe4, Func Offset: 0x24
	// Line 1938, Address: 0x2ddbe8, Func Offset: 0x28
	// Line 1939, Address: 0x2ddbec, Func Offset: 0x2c
	// Line 1940, Address: 0x2ddbf4, Func Offset: 0x34
	// Line 1943, Address: 0x2ddbf8, Func Offset: 0x38
	// Line 1944, Address: 0x2ddc4c, Func Offset: 0x8c
	// Line 1945, Address: 0x2ddc50, Func Offset: 0x90
	// Line 1946, Address: 0x2ddc58, Func Offset: 0x98
	// Line 1947, Address: 0x2ddc68, Func Offset: 0xa8
	// Line 1949, Address: 0x2ddc70, Func Offset: 0xb0
	// Line 1950, Address: 0x2ddc84, Func Offset: 0xc4
	// Line 1951, Address: 0x2ddc8c, Func Offset: 0xcc
	// Line 1952, Address: 0x2ddca4, Func Offset: 0xe4
	// Line 1953, Address: 0x2ddca8, Func Offset: 0xe8
	// Line 1956, Address: 0x2ddcb0, Func Offset: 0xf0
	// Line 1958, Address: 0x2ddcb8, Func Offset: 0xf8
	// Line 1959, Address: 0x2ddcc0, Func Offset: 0x100
	// Line 1961, Address: 0x2ddcd0, Func Offset: 0x110
	// Line 1963, Address: 0x2ddcd8, Func Offset: 0x118
	// Line 1964, Address: 0x2ddce4, Func Offset: 0x124
	// Line 1965, Address: 0x2ddcf0, Func Offset: 0x130
	// Line 1966, Address: 0x2ddcf8, Func Offset: 0x138
	// Line 1967, Address: 0x2ddd08, Func Offset: 0x148
	// Line 1969, Address: 0x2ddd10, Func Offset: 0x150
	// Line 1970, Address: 0x2ddd20, Func Offset: 0x160
	// Line 1971, Address: 0x2ddd2c, Func Offset: 0x16c
	// Line 1972, Address: 0x2ddd44, Func Offset: 0x184
	// Line 1973, Address: 0x2ddd48, Func Offset: 0x188
	// Line 1976, Address: 0x2ddd50, Func Offset: 0x190
	// Line 1978, Address: 0x2ddd58, Func Offset: 0x198
	// Line 1979, Address: 0x2ddd60, Func Offset: 0x1a0
	// Line 1981, Address: 0x2ddd70, Func Offset: 0x1b0
	// Line 1983, Address: 0x2ddd78, Func Offset: 0x1b8
	// Line 1984, Address: 0x2ddd88, Func Offset: 0x1c8
	// Line 1985, Address: 0x2ddd94, Func Offset: 0x1d4
	// Line 1986, Address: 0x2dddac, Func Offset: 0x1ec
	// Line 1987, Address: 0x2dddb0, Func Offset: 0x1f0
	// Line 1990, Address: 0x2dddb8, Func Offset: 0x1f8
	// Line 1992, Address: 0x2dddc0, Func Offset: 0x200
	// Line 1994, Address: 0x2dddc8, Func Offset: 0x208
	// Line 1997, Address: 0x2dddd0, Func Offset: 0x210
	// Line 1998, Address: 0x2ddddc, Func Offset: 0x21c
	// Line 1999, Address: 0x2ddde8, Func Offset: 0x228
	// Line 2000, Address: 0x2dddec, Func Offset: 0x22c
	// Line 2001, Address: 0x2dddf4, Func Offset: 0x234
	// Line 2002, Address: 0x2dddf8, Func Offset: 0x238
	// Line 2003, Address: 0x2dde00, Func Offset: 0x240
	// Line 2005, Address: 0x2dde08, Func Offset: 0x248
	// Line 2007, Address: 0x2dde10, Func Offset: 0x250
	// Line 2008, Address: 0x2dde18, Func Offset: 0x258
	// Line 2011, Address: 0x2dde1c, Func Offset: 0x25c
	// Line 2013, Address: 0x2dde20, Func Offset: 0x260
	// Line 2014, Address: 0x2dde24, Func Offset: 0x264
	// Func End, Address: 0x2dde3c, Func Offset: 0x27c
}

// 
// Start address: 0x2dde40
int sfNMcGetIdlePort()
{
	// Line 2022, Address: 0x2dde40, Func Offset: 0
	// Line 2024, Address: 0x2dde4c, Func Offset: 0xc
	// Func End, Address: 0x2dde54, Func Offset: 0x14
}

