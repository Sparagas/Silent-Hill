typedef struct _anon0;
typedef struct fsMgpFile;
typedef struct _anon1;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union fsFileIndex;
typedef struct _anon8;
typedef struct _anon9;
typedef struct PssCommonWork;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef enum _enum : unsigned char;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _Display;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct ThreadParam;
typedef struct fsCdFile;
typedef struct _anon20;
typedef struct _anon21;
typedef struct fsMgfFile;
typedef struct _anon22;
typedef struct _anon23;
typedef struct fsHdFile;

typedef int(*type_0)(_anon21*, _anon0*, void*);
typedef int(*type_3)(int);
typedef int(*type_4)(int);
typedef void(*type_23)();
typedef void(*type_26)(_anon17*);
typedef int(*type_28)(_anon21*, _anon0*, void*);

typedef char type_1[16];
typedef unsigned char type_2[8];
typedef unsigned char type_5[1557248];
typedef <unknown fundamental type (0xa510)> type_6[32768];
typedef _anon2 type_7[512];
typedef unsigned char type_8[327680];
typedef _anon12 type_9[5];
typedef unsigned char type_10[49152];
typedef unsigned int type_11[102656];
typedef unsigned int type_12[102656][5];
typedef unsigned char type_13[518400];
typedef unsigned int type_14[102656];
typedef unsigned int type_15[102656][5];
typedef char type_16[2048];
typedef _anon13 type_17[5];
typedef char type_18[16384];
typedef _anon13 type_19[5];
typedef <unknown fundamental type (0xa510)> type_20[257];
typedef unsigned int* type_21[2];
typedef unsigned int* type_22[2][3];
typedef char type_24[256];
typedef char type_25[4];
typedef char type_27[4];

struct _anon0
{
	_enum type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
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

struct _anon1
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
};

union fsFile
{
	_anon4 check;
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

struct _anon2
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon3
{
	int isOnCD;
	int size;
	_anon1 fp;
	unsigned char* iopBuf;
	int fd;
};

struct _anon4
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

struct _anon5
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon7 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon2* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon6
{
	struct
	{
		unsigned int EN1 : 1;
		unsigned int EN2 : 1;
		unsigned int CRTMD : 3;
		unsigned int MMOD : 1;
		unsigned int AMOD : 1;
		unsigned int SLBG : 1;
		unsigned int ALP : 8;
		unsigned int p0 : 16;
	};
	unsigned int p1;
};

struct _anon7
{
	unsigned int d4madr;
	unsigned int d4tadr;
	unsigned int d4qwc;
	unsigned int d4chcr;
	unsigned int d3madr;
	unsigned int d3qwc;
	unsigned int d3chcr;
	unsigned int ipubp;
	unsigned int ipuctrl;
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
	struct
	{
		unsigned int FBP : 9;
		unsigned int FBW : 6;
		unsigned int PSM : 5;
		unsigned int p0 : 12;
	};
	struct
	{
		unsigned int DBX : 11;
		unsigned int DBY : 11;
		unsigned int p1 : 10;
	};
};

struct PssCommonWork
{
	unsigned char mpegWork[1557248];
	_anon10 readBuf;
	<unknown fundamental type (0xa510)> viBufData[32768];
	_anon2 timeStamp[512];
	_anon12 voBufData[5];
	unsigned char audioBuff[49152];
	unsigned int tagProgData[102656][5];
	unsigned int tagInterData[102656][5];
	char defStack[2048];
	char videoDecStack[16384];
};

struct _anon10
{
	unsigned char data[327680];
	int put;
	int count;
	int size;
};

struct _anon11
{
	struct
	{
		unsigned int INT : 1;
		unsigned int FFMD : 1;
		unsigned int DPMS : 2;
		unsigned int p0 : 28;
	};
	unsigned int p1;
};

struct _anon12
{
	unsigned char v[518400];
};

enum _enum : unsigned char
{
	sceMpegCbError,
	sceMpegCbNodata,
	sceMpegCbStopDMA,
	sceMpegCbRestartDMA,
	sceMpegCbBackground,
	sceMpegCbTimeStamp,
	sceMpegCbStr
};

struct _anon13
{
	int status;
	unsigned int* v;
};

struct _anon14
{
	_anon12* data;
	_anon13* tagProg;
	_anon13* tagInter;
	_anon13* tag;
	int write;
	int count;
	int size;
};

struct _anon15
{
	unsigned int* micro[2][3];
};

struct _anon16
{
	struct
	{
		unsigned int DX : 12;
		unsigned int DY : 11;
		unsigned int MAGH : 4;
		unsigned int MAGV : 2;
		unsigned int p0 : 3;
	};
	struct
	{
		unsigned int DW : 12;
		unsigned int DH : 11;
		unsigned int p1 : 9;
	};
};

struct _Display
{
	_anon19 dispenv;
	int fbp0;
	int fbp1;
	int fb_w;
	int fb_h;
};

struct _anon17
{
	_anon5 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon15 csc;
};

struct _anon18
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int p0 : 8;
	};
	unsigned int p1;
};

struct _anon19
{
	_anon6 pmode;
	_anon11 smode2;
	_anon9 dispfb;
	_anon16 display;
	_anon18 bgcolor;
};

struct ThreadParam
{
	int status;
	void* entry;
	void* stack;
	int stackSize;
	void* gpReg;
	int initPriority;
	int currentPriority;
	unsigned int attr;
	unsigned int option;
	int waitType;
	int waitId;
	int wakeupCount;
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

struct _anon20
{
	char id[4];
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
};

struct _anon21
{
	int width;
	int height;
	int frameCount;
	long pts;
	long dts;
	unsigned long flags;
	long pts2nd;
	long dts2nd;
	unsigned long flags2nd;
	void* sys;
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

struct _anon22
{
	char id[4];
	int size;
};

struct _anon23
{
	int state;
	_anon20 sshd;
	_anon22 ssbd;
	int hdrCount;
	unsigned char* data;
	int put;
	int count;
	int size;
	int totalBytes;
	int iopBuff;
	int iopBuffSize;
	int iopLastPos;
	int iopPausePos;
	int totalBytesSent;
	int iopZero;
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

int isWithAudio;
int csct;
char* commandname;
char* VERSION;
PssCommonWork* pss_common_work;
char* pss_name;
char* execEnv_data_path;
_Display display;
unsigned int controller_val;
_anon3 infile;
_anon17 videoDec;
_anon23 audioDec;
_anon14 voBuf;
_anon21 sys_mpeg;
int intc_gs_changed;
int(*handler_endimage)(int);
int intc_vs_changed;
int(*vblankHandler)(int);
int videoDecTh;
void* _gp;
void(*videoDecMain)(_anon17*);
int defaultTh;
void(*defMain)();
_anon13 voBufTagInter[5];
_anon13 voBufTagProg[5];
int(*pcmCallback)(_anon21*, _anon0*, void*);
int(*videoCallback)(_anon21*, _anon0*, void*);
<unknown fundamental type (0xa510)> viBufTag[257];
unsigned int D_CTRL_save;
int frd;

int PssWorkSize();
void PssSetWorkAddress(void* p);
void PssSetTextureBaseAddress();
int PssInit();
void PssSetFile(fsFileIndex* id);
int PssMain();
unsigned int movie(char* name);
int readMpeg(_anon17* vd, _anon10* rb, _anon3* file);
void switchThread();
int isAudioOK();
int initAll(char* bsfilename);
void termAll();
void defMain();
void ErrMessage(char* message);
void proceedAudio();

// 
// Start address: 0x238b20
int PssWorkSize()
{
	int size;
	// Line 180, Address: 0x238b20, Func Offset: 0
	// Line 181, Address: 0x238b2c, Func Offset: 0xc
	// Line 182, Address: 0x238b34, Func Offset: 0x14
	// Line 183, Address: 0x238b48, Func Offset: 0x28
	// Line 184, Address: 0x238b4c, Func Offset: 0x2c
	// Func End, Address: 0x238b60, Func Offset: 0x40
}

// 
// Start address: 0x238b60
void PssSetWorkAddress(void* p)
{
	// Line 186, Address: 0x238b60, Func Offset: 0
	// Line 187, Address: 0x238b68, Func Offset: 0x8
	// Line 188, Address: 0x238b74, Func Offset: 0x14
	// Func End, Address: 0x238b80, Func Offset: 0x20
}

// 
// Start address: 0x238b80
void PssSetTextureBaseAddress()
{
	// Line 190, Address: 0x238b80, Func Offset: 0
	// Line 191, Address: 0x238b84, Func Offset: 0x4
	// Func End, Address: 0x238b90, Func Offset: 0x10
}

// 
// Start address: 0x238b90
int PssInit()
{
	// Line 193, Address: 0x238b90, Func Offset: 0
	// Line 194, Address: 0x238b98, Func Offset: 0x8
	// Line 195, Address: 0x238ba0, Func Offset: 0x10
	// Line 196, Address: 0x238ba4, Func Offset: 0x14
	// Func End, Address: 0x238bb4, Func Offset: 0x24
}

// 
// Start address: 0x238bc0
void PssSetFile(fsFileIndex* id)
{
	char aaa[256];
	// Line 199, Address: 0x238bc0, Func Offset: 0
	// Line 202, Address: 0x238bcc, Func Offset: 0xc
	// Line 203, Address: 0x238bf4, Func Offset: 0x34
	// Line 204, Address: 0x238c04, Func Offset: 0x44
	// Func End, Address: 0x238c14, Func Offset: 0x54
}

// 
// Start address: 0x238c20
int PssMain()
{
	// Line 210, Address: 0x238c20, Func Offset: 0
	// Line 211, Address: 0x238c28, Func Offset: 0x8
	// Line 212, Address: 0x238c5c, Func Offset: 0x3c
	// Line 213, Address: 0x238c78, Func Offset: 0x58
	// Line 215, Address: 0x238c84, Func Offset: 0x64
	// Line 216, Address: 0x238c9c, Func Offset: 0x7c
	// Line 222, Address: 0x238cb0, Func Offset: 0x90
	// Line 225, Address: 0x238cc0, Func Offset: 0xa0
	// Line 226, Address: 0x238cd4, Func Offset: 0xb4
	// Line 228, Address: 0x238ce4, Func Offset: 0xc4
	// Line 229, Address: 0x238ce8, Func Offset: 0xc8
	// Func End, Address: 0x238cf8, Func Offset: 0xd8
}

// 
// Start address: 0x238d00
unsigned int movie(char* name)
{
	// Line 241, Address: 0x238d00, Func Offset: 0
	// Line 242, Address: 0x238d0c, Func Offset: 0xc
	// Line 243, Address: 0x238d20, Func Offset: 0x20
	// Line 245, Address: 0x238d4c, Func Offset: 0x4c
	// Line 247, Address: 0x238d54, Func Offset: 0x54
	// Line 248, Address: 0x238d5c, Func Offset: 0x5c
	// Func End, Address: 0x238d6c, Func Offset: 0x6c
}

// 
// Start address: 0x238d70
int readMpeg(_anon17* vd, _anon10* rb, _anon3* file)
{
	unsigned short diff;
	int tmp;
	int tmp;
	int isPaused;
	unsigned int pushed;
	unsigned int button_old;
	int isStarted;
	unsigned short proceed_zero_count;
	int proceed;
	int count;
	int writerest;
	int readrest;
	int getsize;
	int putsize;
	unsigned char* get_ptr;
	unsigned char* put_ptr;
	unsigned int ctrlmask;
	// Line 258, Address: 0x238d70, Func Offset: 0
	// Line 259, Address: 0x238da8, Func Offset: 0x38
	// Line 264, Address: 0x238db0, Func Offset: 0x40
	// Line 265, Address: 0x238dbc, Func Offset: 0x4c
	// Line 268, Address: 0x238dc8, Func Offset: 0x58
	// Line 269, Address: 0x238dcc, Func Offset: 0x5c
	// Line 270, Address: 0x238dd0, Func Offset: 0x60
	// Line 271, Address: 0x238dd4, Func Offset: 0x64
	// Line 275, Address: 0x238dd8, Func Offset: 0x68
	// Line 278, Address: 0x238ddc, Func Offset: 0x6c
	// Line 297, Address: 0x238de4, Func Offset: 0x74
	// Line 298, Address: 0x238de8, Func Offset: 0x78
	// Line 300, Address: 0x238e08, Func Offset: 0x98
	// Line 301, Address: 0x238e18, Func Offset: 0xa8
	// Line 302, Address: 0x238e20, Func Offset: 0xb0
	// Line 303, Address: 0x238e2c, Func Offset: 0xbc
	// Line 304, Address: 0x238e3c, Func Offset: 0xcc
	// Line 306, Address: 0x238e4c, Func Offset: 0xdc
	// Line 307, Address: 0x238e54, Func Offset: 0xe4
	// Line 308, Address: 0x238e5c, Func Offset: 0xec
	// Line 309, Address: 0x238e6c, Func Offset: 0xfc
	// Line 310, Address: 0x238e7c, Func Offset: 0x10c
	// Line 312, Address: 0x238e80, Func Offset: 0x110
	// Line 313, Address: 0x238e84, Func Offset: 0x114
	// Line 319, Address: 0x238e94, Func Offset: 0x124
	// Line 320, Address: 0x238ea4, Func Offset: 0x134
	// Line 332, Address: 0x238ea8, Func Offset: 0x138
	// Line 333, Address: 0x238ebc, Func Offset: 0x14c
	// Line 334, Address: 0x238edc, Func Offset: 0x16c
	// Line 335, Address: 0x238ef4, Func Offset: 0x184
	// Line 336, Address: 0x238efc, Func Offset: 0x18c
	// Line 337, Address: 0x238f0c, Func Offset: 0x19c
	// Line 339, Address: 0x238f14, Func Offset: 0x1a4
	// Line 340, Address: 0x238f28, Func Offset: 0x1b8
	// Line 341, Address: 0x238f30, Func Offset: 0x1c0
	// Line 342, Address: 0x238f48, Func Offset: 0x1d8
	// Line 344, Address: 0x238f50, Func Offset: 0x1e0
	// Line 345, Address: 0x238f54, Func Offset: 0x1e4
	// Line 349, Address: 0x238f60, Func Offset: 0x1f0
	// Line 355, Address: 0x238f68, Func Offset: 0x1f8
	// Line 356, Address: 0x238f7c, Func Offset: 0x20c
	// Line 357, Address: 0x238fa8, Func Offset: 0x238
	// Line 360, Address: 0x238fb0, Func Offset: 0x240
	// Line 361, Address: 0x2390c0, Func Offset: 0x350
	// Line 362, Address: 0x2390f0, Func Offset: 0x380
	// Line 363, Address: 0x239104, Func Offset: 0x394
	// Line 364, Address: 0x239124, Func Offset: 0x3b4
	// Line 365, Address: 0x239138, Func Offset: 0x3c8
	// Line 366, Address: 0x239150, Func Offset: 0x3e0
	// Line 367, Address: 0x239160, Func Offset: 0x3f0
	// Line 370, Address: 0x239168, Func Offset: 0x3f8
	// Line 371, Address: 0x239174, Func Offset: 0x404
	// Line 373, Address: 0x239178, Func Offset: 0x408
	// Line 374, Address: 0x23918c, Func Offset: 0x41c
	// Line 375, Address: 0x239194, Func Offset: 0x424
	// Line 376, Address: 0x2391ac, Func Offset: 0x43c
	// Line 377, Address: 0x2391b0, Func Offset: 0x440
	// Line 378, Address: 0x2391b4, Func Offset: 0x444
	// Line 386, Address: 0x2391c0, Func Offset: 0x450
	// Line 392, Address: 0x2391c8, Func Offset: 0x458
	// Line 394, Address: 0x2391fc, Func Offset: 0x48c
	// Line 395, Address: 0x239208, Func Offset: 0x498
	// Line 396, Address: 0x239218, Func Offset: 0x4a8
	// Line 398, Address: 0x239228, Func Offset: 0x4b8
	// Line 400, Address: 0x239230, Func Offset: 0x4c0
	// Line 409, Address: 0x23925c, Func Offset: 0x4ec
	// Line 410, Address: 0x239264, Func Offset: 0x4f4
	// Line 411, Address: 0x23926c, Func Offset: 0x4fc
	// Line 414, Address: 0x239284, Func Offset: 0x514
	// Line 417, Address: 0x23928c, Func Offset: 0x51c
	// Line 418, Address: 0x239294, Func Offset: 0x524
	// Line 420, Address: 0x2392c4, Func Offset: 0x554
	// Line 421, Address: 0x2392cc, Func Offset: 0x55c
	// Line 422, Address: 0x2392d4, Func Offset: 0x564
	// Line 428, Address: 0x2392f0, Func Offset: 0x580
	// Line 429, Address: 0x2392f8, Func Offset: 0x588
	// Line 430, Address: 0x239308, Func Offset: 0x598
	// Line 433, Address: 0x239318, Func Offset: 0x5a8
	// Line 434, Address: 0x23931c, Func Offset: 0x5ac
	// Func End, Address: 0x239350, Func Offset: 0x5e0
}

// 
// Start address: 0x239350
void switchThread()
{
	// Line 441, Address: 0x239350, Func Offset: 0
	// Line 442, Address: 0x239358, Func Offset: 0x8
	// Line 443, Address: 0x239364, Func Offset: 0x14
	// Func End, Address: 0x239374, Func Offset: 0x24
}

// 
// Start address: 0x239380
int isAudioOK()
{
	// Line 450, Address: 0x239380, Func Offset: 0
	// Line 451, Address: 0x23938c, Func Offset: 0xc
	// Line 452, Address: 0x2393c0, Func Offset: 0x40
	// Func End, Address: 0x2393d4, Func Offset: 0x54
}

// 
// Start address: 0x2393e0
int initAll(char* bsfilename)
{
	ThreadParam th_param;
	int result;
	int i;
	// Line 459, Address: 0x2393e0, Func Offset: 0
	// Line 461, Address: 0x239400, Func Offset: 0x20
	// Line 466, Address: 0x239404, Func Offset: 0x24
	// Line 467, Address: 0x239418, Func Offset: 0x38
	// Line 468, Address: 0x239434, Func Offset: 0x54
	// Line 474, Address: 0x239444, Func Offset: 0x64
	// Line 481, Address: 0x239460, Func Offset: 0x80
	// Line 493, Address: 0x2394b8, Func Offset: 0xd8
	// Line 499, Address: 0x2394e4, Func Offset: 0x104
	// Line 501, Address: 0x239518, Func Offset: 0x138
	// Line 502, Address: 0x239528, Func Offset: 0x148
	// Line 510, Address: 0x23955c, Func Offset: 0x17c
	// Line 511, Address: 0x239568, Func Offset: 0x188
	// Line 512, Address: 0x2395b0, Func Offset: 0x1d0
	// Line 513, Address: 0x2395f8, Func Offset: 0x218
	// Line 514, Address: 0x23960c, Func Offset: 0x22c
	// Line 521, Address: 0x239664, Func Offset: 0x284
	// Line 522, Address: 0x239670, Func Offset: 0x290
	// Line 523, Address: 0x239688, Func Offset: 0x2a8
	// Line 524, Address: 0x239690, Func Offset: 0x2b0
	// Line 525, Address: 0x239698, Func Offset: 0x2b8
	// Line 526, Address: 0x2396a4, Func Offset: 0x2c4
	// Line 527, Address: 0x2396a8, Func Offset: 0x2c8
	// Line 528, Address: 0x2396bc, Func Offset: 0x2dc
	// Line 534, Address: 0x2396d0, Func Offset: 0x2f0
	// Line 535, Address: 0x2396dc, Func Offset: 0x2fc
	// Line 536, Address: 0x2396f4, Func Offset: 0x314
	// Line 537, Address: 0x2396fc, Func Offset: 0x31c
	// Line 538, Address: 0x239704, Func Offset: 0x324
	// Line 539, Address: 0x239710, Func Offset: 0x330
	// Line 540, Address: 0x239714, Func Offset: 0x334
	// Line 541, Address: 0x239728, Func Offset: 0x348
	// Line 563, Address: 0x239740, Func Offset: 0x360
	// Line 564, Address: 0x23975c, Func Offset: 0x37c
	// Line 565, Address: 0x239770, Func Offset: 0x390
	// Line 577, Address: 0x239774, Func Offset: 0x394
	// Line 578, Address: 0x239794, Func Offset: 0x3b4
	// Line 580, Address: 0x2397a8, Func Offset: 0x3c8
	// Line 582, Address: 0x2397bc, Func Offset: 0x3dc
	// Line 584, Address: 0x2397e4, Func Offset: 0x404
	// Line 585, Address: 0x239804, Func Offset: 0x424
	// Line 587, Address: 0x239818, Func Offset: 0x438
	// Line 588, Address: 0x23981c, Func Offset: 0x43c
	// Func End, Address: 0x239840, Func Offset: 0x460
}

// 
// Start address: 0x239840
void termAll()
{
	int tmp;
	// Line 595, Address: 0x239840, Func Offset: 0
	// Line 598, Address: 0x23984c, Func Offset: 0xc
	// Line 599, Address: 0x239868, Func Offset: 0x28
	// Line 601, Address: 0x239878, Func Offset: 0x38
	// Line 602, Address: 0x239888, Func Offset: 0x48
	// Line 604, Address: 0x239898, Func Offset: 0x58
	// Line 605, Address: 0x2398a8, Func Offset: 0x68
	// Line 607, Address: 0x2398b8, Func Offset: 0x78
	// Line 608, Address: 0x2398c4, Func Offset: 0x84
	// Line 609, Address: 0x2398dc, Func Offset: 0x9c
	// Line 610, Address: 0x2398f4, Func Offset: 0xb4
	// Line 613, Address: 0x239900, Func Offset: 0xc0
	// Line 614, Address: 0x23990c, Func Offset: 0xcc
	// Line 615, Address: 0x239924, Func Offset: 0xe4
	// Line 616, Address: 0x23993c, Func Offset: 0xfc
	// Line 619, Address: 0x239948, Func Offset: 0x108
	// Line 620, Address: 0x239958, Func Offset: 0x118
	// Line 622, Address: 0x239968, Func Offset: 0x128
	// Line 624, Address: 0x239978, Func Offset: 0x138
	// Line 625, Address: 0x23998c, Func Offset: 0x14c
	// Func End, Address: 0x2399a0, Func Offset: 0x160
}

// 
// Start address: 0x2399a0
void defMain()
{
	// Line 632, Address: 0x2399a0, Func Offset: 0
	// Line 635, Address: 0x2399a8, Func Offset: 0x8
	// Line 636, Address: 0x2399b0, Func Offset: 0x10
	// Func End, Address: 0x2399b8, Func Offset: 0x18
}

// 
// Start address: 0x2399c0
void ErrMessage(char* message)
{
	// Line 644, Address: 0x2399c0, Func Offset: 0
	// Line 645, Address: 0x2399cc, Func Offset: 0xc
	// Line 646, Address: 0x2399e0, Func Offset: 0x20
	// Func End, Address: 0x2399f0, Func Offset: 0x30
}

// 
// Start address: 0x2399f0
void proceedAudio()
{
	// Line 686, Address: 0x2399f0, Func Offset: 0
	// Line 687, Address: 0x2399f8, Func Offset: 0x8
	// Line 688, Address: 0x239a08, Func Offset: 0x18
	// Func End, Address: 0x239a18, Func Offset: 0x28
}

