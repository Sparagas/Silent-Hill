typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct Pad_KeyConfig;
typedef struct _anon5;
typedef union fsFile;
typedef enum _enum : unsigned char;
typedef struct fsCdFile;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct fsMgcFile;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct fsMgfFile;
typedef struct _anon16;
typedef struct _PSS_DISPLAY_ENV;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct ThreadParam;
typedef struct _PSS_MESSAGE_TIME;
typedef struct fsHdFile;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _PSS_SUBTITLE_CTRL;
typedef union fsFileIndex;
typedef struct fsMgpFile;
typedef struct _PssCommonWork;
typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct _anon26;
typedef struct _anon27;
typedef struct _anon28;
typedef struct _anon29;
typedef struct _anon30;
typedef struct _anon31;
typedef struct _anon32;
typedef struct _anon33;
typedef struct _anon34;
typedef struct _anon35;
typedef struct _anon36;
typedef struct _anon37;
typedef struct _anon38;
typedef struct _anon39;

typedef void(*type_0)();
typedef void(*type_4)(_anon1*);
typedef int(*type_5)(_anon13*, _anon14*, void*);
typedef int(*type_7)(_anon13*, _anon14*, void*);
typedef int(*type_10)(int);
typedef int(*type_11)(int);

typedef <unknown fundamental type (0xa510)> type_1[257];
typedef char type_2[4];
typedef char type_3[4];
typedef int type_6[6];
typedef char type_8[16];
typedef unsigned char type_9[8];
typedef unsigned char type_12[327680];
typedef unsigned char type_13[393216];
typedef _anon11 type_14[512];
typedef unsigned char type_15[49152];
typedef char type_16[2048];
typedef unsigned int* type_17[2];
typedef unsigned int* type_18[2][3];
typedef char type_19[16384];
typedef _anon2 type_20[2];
typedef _anon27 type_21[5];

struct _anon0
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

struct _anon1
{
	_anon12 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon31 csc;
};

struct _anon2
{
	_anon37 pmode;
	_anon8 smode2;
	_anon0 dispfb;
	_anon16 display;
	_anon18 bgcolor;
};

struct _anon3
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

struct _anon4
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

struct _anon5
{
	struct
	{
		unsigned long SCAX0 : 11;
		unsigned long pad11 : 5;
		unsigned long SCAX1 : 11;
		unsigned long pad27 : 5;
		unsigned long SCAY0 : 11;
		unsigned long pad43 : 5;
		unsigned long SCAY1 : 11;
		unsigned long pad59 : 5;
	};
};

union fsFile
{
	_anon24 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct _anon6
{
	_anon9 frame1;
	unsigned long frame1addr;
	_anon30 zbuf1;
	long zbuf1addr;
	_anon21 xyoffset1;
	long xyoffset1addr;
	_anon5 scissor1;
	long scissor1addr;
	_anon36 prmodecont;
	long prmodecontaddr;
	_anon19 colclamp;
	long colclampaddr;
	_anon38 dthe;
	long dtheaddr;
	_anon15 test1;
	long test1addr;
};

struct _anon7
{
	char id[4];
	int size;
};

struct _anon8
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

struct _anon9
{
	struct
	{
		unsigned long FBP : 9;
		unsigned long pad09 : 7;
		unsigned long FBW : 6;
		unsigned long pad22 : 2;
		unsigned long PSM : 6;
		unsigned long pad30 : 2;
		unsigned long FBMSK : 32;
	};
};

struct _anon10
{
	int state;
	_anon3 sshd;
	_anon7 ssbd;
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

struct _anon11
{
	long pts;
	long dts;
	int pos;
	int len;
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

struct _anon12
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon4 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon11* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon13
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

struct _anon14
{
	_enum type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
};

struct _anon15
{
	struct
	{
		unsigned long ATE : 1;
		unsigned long ATST : 3;
		unsigned long AREF : 8;
		unsigned long AFAIL : 2;
		unsigned long DATE : 1;
		unsigned long DATM : 1;
		unsigned long ZTE : 1;
		unsigned long ZTST : 2;
		unsigned long pad19 : 45;
	};
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

struct _PSS_DISPLAY_ENV
{
	_anon2 dispenv;
	int fbp0;
	int fbp1;
	int fb_w;
	int fb_h;
};

struct _anon17
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
	unsigned int flag;
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
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
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

struct _PSS_MESSAGE_TIME
{
	unsigned short start;
	unsigned short end;
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

struct _anon20
{
	struct
	{
		unsigned long NLOOP : 15;
		unsigned long EOP : 1;
		unsigned long pad16 : 16;
		unsigned long id : 14;
		unsigned long PRE : 1;
		unsigned long PRIM : 11;
		unsigned long FLG : 2;
		unsigned long NREG : 4;
	};
	struct
	{
		unsigned long REGS0 : 4;
		unsigned long REGS1 : 4;
		unsigned long REGS2 : 4;
		unsigned long REGS3 : 4;
		unsigned long REGS4 : 4;
		unsigned long REGS5 : 4;
		unsigned long REGS6 : 4;
		unsigned long REGS7 : 4;
		unsigned long REGS8 : 4;
		unsigned long REGS9 : 4;
		unsigned long REGS10 : 4;
		unsigned long REGS11 : 4;
		unsigned long REGS12 : 4;
		unsigned long REGS13 : 4;
		unsigned long REGS14 : 4;
		unsigned long REGS15 : 4;
	};
};

struct _anon21
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _PSS_SUBTITLE_CTRL
{
	int msg_start;
	int msg_no;
	unsigned short* msg_bufp;
	_PSS_MESSAGE_TIME* adr_msg_time;
};

union fsFileIndex
{
	_anon33 index;
	unsigned long pack;
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

struct _PssCommonWork
{
	unsigned char* mpegWorkp;
	_anon23* readBufp;
	<unknown fundamental type (0xa510)>* viBufDatap;
	_anon11 timeStamp[512];
	_anon26* voBufDatap;
	unsigned char audioBuff[49152];
	unsigned int* tagInterDatap;
	int videoDecTh;
	int defaultTh;
	char defStack[2048];
	char videoDecStack[16384];
	_anon34 db;
};

struct _anon22
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon23
{
	unsigned char data[327680];
	int put;
	int count;
	int size;
};

struct _anon24
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

struct _anon25
{
	_anon15 testa;
	long testaaddr;
	_anon32 prim;
	long primaddr;
	_anon39 rgbaq;
	long rgbaqaddr;
	_anon22 xyz2a;
	long xyz2aaddr;
	_anon22 xyz2b;
	long xyz2baddr;
	_anon15 testb;
	long testbaddr;
};

struct _anon26
{
	unsigned char v[393216];
};

struct _anon27
{
	int status;
	unsigned int* v;
};

struct _anon28
{
	_anon26* data;
	_anon27* tagInter;
	_anon27* tag;
	int write;
	int count;
	int size;
};

struct _anon29
{
	int isOnCD;
	int size;
	_anon17 fp;
	unsigned char* iopBuf;
	int fd;
};

struct _anon30
{
	struct
	{
		unsigned long ZBP : 9;
		unsigned long pad09 : 15;
		unsigned long PSM : 4;
		unsigned long pad28 : 4;
		unsigned long ZMSK : 1;
		unsigned long pad33 : 31;
	};
};

struct _anon31
{
	unsigned int* micro[2][3];
};

struct _anon32
{
	struct
	{
		unsigned long PRIM : 3;
		unsigned long IIP : 1;
		unsigned long TME : 1;
		unsigned long FGE : 1;
		unsigned long ABE : 1;
		unsigned long AA1 : 1;
		unsigned long FST : 1;
		unsigned long CTXT : 1;
		unsigned long FIX : 1;
		unsigned long pad11 : 53;
	};
};

struct _anon33
{
	fsFile* fp;
	char* name;
};

struct _anon34
{
	_anon2 disp[2];
	_anon20 giftag0;
	_anon6 draw0;
	_anon25 clear0;
	_anon20 giftag1;
	_anon6 draw1;
	_anon25 clear1;
};

struct _anon35
{
	int status;
	int ctrl;
	fsFileIndex* file;
	int readrest;
	int writerest;
	int isPaused;
	int isStarted;
	short proceed_zero_count;
	int cnt;
	int stFrame;
	int movieabort;
	int framecnt;
	int maskon;
};

struct _anon36
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon37
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

struct _anon38
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon39
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int A : 8;
	};
	float Q;
};

int isWithAudio;
int csct;
char* commandname;
char* VERSION;
_anon10 audioDec;
_anon35 pssExecCtrl;
_PssCommonWork* pss_common_work;
_anon1 videoDec;
_anon13 sys_mpeg;
_anon28 voBuf;
int intc_gs_changed;
int(*handler_endimage)(int);
int intc_vs_changed;
int(*vblankHandler)(int);
void* _gp;
void(*videoDecMain)(_anon1*);
void(*defMain)();
_anon27 voBufTagInter[5];
int(*pcmCallback)(_anon13*, _anon14*, void*);
int(*videoCallback)(_anon13*, _anon14*, void*);
<unknown fundamental type (0xa510)> viBufTag[257];
Pad_KeyConfig key_config;
_PSS_SUBTITLE_CTRL pssSubTitleCtrl;
unsigned int D_CTRL_save;
int frd;
_anon29 infile;
_PSS_DISPLAY_ENV display;

void pssSystemColdInit();
void pssSetWorkAddress(void* p0, void* p1, void* p2, void* p3, void* p4, void* p5);
void pssInit();
void pssExit();
int pssSetControlData(int ctrl, fsFileIndex* id, int frame);
int pssMain();
int readMpeg(_anon1* vd, _anon23* rb);
void pssMpegFinish(_anon1* vd);
void pssMpegPlayStart();
void switchThread();
int isAudioOK();
int initAll(fsFileIndex* id);
void termAll();
void defMain();
int pssGetPssStatus();
int pssGetPssAbortFlag();
int pssGetMaskSwitch();
void pssSetMaskSwitch(int flg);
void pssCheckMovieCancel();
void pssSetSubTitleData(unsigned short* msg_bufp, void* adr_msg_time, int msg_start);
void ErrMessage(char* message);
void proceedAudio();

// 
// Start address: 0x28ab10
void pssSystemColdInit()
{
	// Line 124, Address: 0x28ab10, Func Offset: 0
	// Line 128, Address: 0x28ab18, Func Offset: 0x8
	// Line 129, Address: 0x28ab20, Func Offset: 0x10
	// Line 131, Address: 0x28ab28, Func Offset: 0x18
	// Line 132, Address: 0x28ab3c, Func Offset: 0x2c
	// Func End, Address: 0x28ab4c, Func Offset: 0x3c
}

// 
// Start address: 0x28ab50
void pssSetWorkAddress(void* p0, void* p1, void* p2, void* p3, void* p4, void* p5)
{
	// Line 160, Address: 0x28ab50, Func Offset: 0
	// Line 161, Address: 0x28ab80, Func Offset: 0x30
	// Line 162, Address: 0x28ab88, Func Offset: 0x38
	// Line 163, Address: 0x28abbc, Func Offset: 0x6c
	// Line 165, Address: 0x28abd0, Func Offset: 0x80
	// Line 166, Address: 0x28abdc, Func Offset: 0x8c
	// Line 167, Address: 0x28abe8, Func Offset: 0x98
	// Line 168, Address: 0x28abf4, Func Offset: 0xa4
	// Line 169, Address: 0x28ac00, Func Offset: 0xb0
	// Line 171, Address: 0x28ac14, Func Offset: 0xc4
	// Line 172, Address: 0x28ac20, Func Offset: 0xd0
	// Func End, Address: 0x28ac44, Func Offset: 0xf4
}

// 
// Start address: 0x28ac50
void pssInit()
{
	// Line 175, Address: 0x28ac50, Func Offset: 0
	// Line 176, Address: 0x28ac58, Func Offset: 0x8
	// Line 177, Address: 0x28ac64, Func Offset: 0x14
	// Line 179, Address: 0x28ac6c, Func Offset: 0x1c
	// Line 181, Address: 0x28ac74, Func Offset: 0x24
	// Line 183, Address: 0x28ac80, Func Offset: 0x30
	// Line 195, Address: 0x28ac88, Func Offset: 0x38
	// Func End, Address: 0x28ac98, Func Offset: 0x48
}

// 
// Start address: 0x28aca0
void pssExit()
{
	// Line 198, Address: 0x28aca0, Func Offset: 0
	// Line 199, Address: 0x28aca8, Func Offset: 0x8
	// Line 200, Address: 0x28acb0, Func Offset: 0x10
	// Func End, Address: 0x28acc0, Func Offset: 0x20
}

// 
// Start address: 0x28acc0
int pssSetControlData(int ctrl, fsFileIndex* id, int frame)
{
	// Line 222, Address: 0x28acc0, Func Offset: 0
	// Line 223, Address: 0x28acd0, Func Offset: 0x10
	// Line 225, Address: 0x28acdc, Func Offset: 0x1c
	// Line 228, Address: 0x28ad04, Func Offset: 0x44
	// Line 229, Address: 0x28ad14, Func Offset: 0x54
	// Line 230, Address: 0x28ad20, Func Offset: 0x60
	// Line 231, Address: 0x28ad28, Func Offset: 0x68
	// Line 232, Address: 0x28ad30, Func Offset: 0x70
	// Line 235, Address: 0x28ad38, Func Offset: 0x78
	// Line 236, Address: 0x28ad4c, Func Offset: 0x8c
	// Line 240, Address: 0x28ad58, Func Offset: 0x98
	// Line 241, Address: 0x28ad68, Func Offset: 0xa8
	// Line 242, Address: 0x28ad74, Func Offset: 0xb4
	// Line 243, Address: 0x28ad7c, Func Offset: 0xbc
	// Line 244, Address: 0x28ad84, Func Offset: 0xc4
	// Line 247, Address: 0x28ad8c, Func Offset: 0xcc
	// Line 248, Address: 0x28ada0, Func Offset: 0xe0
	// Line 249, Address: 0x28adac, Func Offset: 0xec
	// Line 250, Address: 0x28adb8, Func Offset: 0xf8
	// Line 253, Address: 0x28adc0, Func Offset: 0x100
	// Line 254, Address: 0x28add4, Func Offset: 0x114
	// Line 255, Address: 0x28ade0, Func Offset: 0x120
	// Line 256, Address: 0x28ade8, Func Offset: 0x128
	// Line 259, Address: 0x28adf0, Func Offset: 0x130
	// Line 261, Address: 0x28ae10, Func Offset: 0x150
	// Line 265, Address: 0x28ae1c, Func Offset: 0x15c
	// Line 267, Address: 0x28ae24, Func Offset: 0x164
	// Line 268, Address: 0x28ae28, Func Offset: 0x168
	// Func End, Address: 0x28ae30, Func Offset: 0x170
}

// 
// Start address: 0x28ae30
int pssMain()
{
	int sts;
	// Line 271, Address: 0x28ae30, Func Offset: 0
	// Line 274, Address: 0x28ae38, Func Offset: 0x8
	// Line 277, Address: 0x28ae68, Func Offset: 0x38
	// Line 279, Address: 0x28ae7c, Func Offset: 0x4c
	// Line 280, Address: 0x28ae8c, Func Offset: 0x5c
	// Line 281, Address: 0x28ae94, Func Offset: 0x64
	// Line 282, Address: 0x28aea0, Func Offset: 0x70
	// Line 283, Address: 0x28aea8, Func Offset: 0x78
	// Line 284, Address: 0x28aeb0, Func Offset: 0x80
	// Line 285, Address: 0x28aeb8, Func Offset: 0x88
	// Line 287, Address: 0x28aec4, Func Offset: 0x94
	// Line 288, Address: 0x28aed4, Func Offset: 0xa4
	// Line 289, Address: 0x28aedc, Func Offset: 0xac
	// Line 290, Address: 0x28aee8, Func Offset: 0xb8
	// Line 291, Address: 0x28aef0, Func Offset: 0xc0
	// Line 297, Address: 0x28aef8, Func Offset: 0xc8
	// Line 298, Address: 0x28af08, Func Offset: 0xd8
	// Line 299, Address: 0x28af18, Func Offset: 0xe8
	// Line 300, Address: 0x28af20, Func Offset: 0xf0
	// Line 301, Address: 0x28af28, Func Offset: 0xf8
	// Line 302, Address: 0x28af30, Func Offset: 0x100
	// Line 303, Address: 0x28af38, Func Offset: 0x108
	// Line 307, Address: 0x28af40, Func Offset: 0x110
	// Line 308, Address: 0x28af5c, Func Offset: 0x12c
	// Line 309, Address: 0x28af64, Func Offset: 0x134
	// Line 310, Address: 0x28af70, Func Offset: 0x140
	// Line 313, Address: 0x28af78, Func Offset: 0x148
	// Line 315, Address: 0x28af8c, Func Offset: 0x15c
	// Line 316, Address: 0x28af98, Func Offset: 0x168
	// Line 318, Address: 0x28afa0, Func Offset: 0x170
	// Line 319, Address: 0x28afbc, Func Offset: 0x18c
	// Line 320, Address: 0x28afc4, Func Offset: 0x194
	// Line 321, Address: 0x28afd0, Func Offset: 0x1a0
	// Line 324, Address: 0x28afd8, Func Offset: 0x1a8
	// Line 326, Address: 0x28afec, Func Offset: 0x1bc
	// Line 327, Address: 0x28aff4, Func Offset: 0x1c4
	// Line 328, Address: 0x28affc, Func Offset: 0x1cc
	// Line 330, Address: 0x28b008, Func Offset: 0x1d8
	// Line 331, Address: 0x28b014, Func Offset: 0x1e4
	// Line 332, Address: 0x28b020, Func Offset: 0x1f0
	// Line 335, Address: 0x28b028, Func Offset: 0x1f8
	// Line 336, Address: 0x28b044, Func Offset: 0x214
	// Line 337, Address: 0x28b04c, Func Offset: 0x21c
	// Line 338, Address: 0x28b058, Func Offset: 0x228
	// Line 341, Address: 0x28b060, Func Offset: 0x230
	// Line 343, Address: 0x28b074, Func Offset: 0x244
	// Line 344, Address: 0x28b080, Func Offset: 0x250
	// Line 345, Address: 0x28b088, Func Offset: 0x258
	// Line 346, Address: 0x28b094, Func Offset: 0x264
	// Line 347, Address: 0x28b09c, Func Offset: 0x26c
	// Line 349, Address: 0x28b0a8, Func Offset: 0x278
	// Line 351, Address: 0x28b0b0, Func Offset: 0x280
	// Line 352, Address: 0x28b0cc, Func Offset: 0x29c
	// Line 353, Address: 0x28b0d4, Func Offset: 0x2a4
	// Line 354, Address: 0x28b0e0, Func Offset: 0x2b0
	// Line 357, Address: 0x28b0e8, Func Offset: 0x2b8
	// Line 358, Address: 0x28b0f8, Func Offset: 0x2c8
	// Line 359, Address: 0x28b100, Func Offset: 0x2d0
	// Line 363, Address: 0x28b108, Func Offset: 0x2d8
	// Line 365, Address: 0x28b110, Func Offset: 0x2e0
	// Line 366, Address: 0x28b118, Func Offset: 0x2e8
	// Func End, Address: 0x28b128, Func Offset: 0x2f8
}

// 
// Start address: 0x28b130
int readMpeg(_anon1* vd, _anon23* rb)
{
	unsigned short diff;
	int tmp;
	int tmp;
	int proceed;
	int count;
	int getsize;
	int putsize;
	unsigned char* get_ptr;
	unsigned char* put_ptr;
	// Line 376, Address: 0x28b130, Func Offset: 0
	// Line 385, Address: 0x28b150, Func Offset: 0x20
	// Line 394, Address: 0x28b184, Func Offset: 0x54
	// Line 396, Address: 0x28b194, Func Offset: 0x64
	// Line 397, Address: 0x28b1b4, Func Offset: 0x84
	// Line 398, Address: 0x28b1c4, Func Offset: 0x94
	// Line 399, Address: 0x28b1cc, Func Offset: 0x9c
	// Line 400, Address: 0x28b1dc, Func Offset: 0xac
	// Line 402, Address: 0x28b1e4, Func Offset: 0xb4
	// Line 403, Address: 0x28b1f8, Func Offset: 0xc8
	// Line 404, Address: 0x28b200, Func Offset: 0xd0
	// Line 405, Address: 0x28b218, Func Offset: 0xe8
	// Line 408, Address: 0x28b220, Func Offset: 0xf0
	// Line 412, Address: 0x28b234, Func Offset: 0x104
	// Line 419, Address: 0x28b23c, Func Offset: 0x10c
	// Line 420, Address: 0x28b24c, Func Offset: 0x11c
	// Line 421, Address: 0x28b27c, Func Offset: 0x14c
	// Line 424, Address: 0x28b284, Func Offset: 0x154
	// Line 426, Address: 0x28b2b0, Func Offset: 0x180
	// Line 427, Address: 0x28b2c8, Func Offset: 0x198
	// Line 428, Address: 0x28b2e0, Func Offset: 0x1b0
	// Line 429, Address: 0x28b2f4, Func Offset: 0x1c4
	// Line 430, Address: 0x28b304, Func Offset: 0x1d4
	// Line 431, Address: 0x28b314, Func Offset: 0x1e4
	// Line 434, Address: 0x28b320, Func Offset: 0x1f0
	// Line 437, Address: 0x28b330, Func Offset: 0x200
	// Line 438, Address: 0x28b344, Func Offset: 0x214
	// Line 439, Address: 0x28b34c, Func Offset: 0x21c
	// Line 442, Address: 0x28b364, Func Offset: 0x234
	// Line 450, Address: 0x28b378, Func Offset: 0x248
	// Line 456, Address: 0x28b380, Func Offset: 0x250
	// Line 458, Address: 0x28b3b8, Func Offset: 0x288
	// Line 460, Address: 0x28b3e8, Func Offset: 0x2b8
	// Line 461, Address: 0x28b3f8, Func Offset: 0x2c8
	// Line 463, Address: 0x28b420, Func Offset: 0x2f0
	// Line 483, Address: 0x28b42c, Func Offset: 0x2fc
	// Line 486, Address: 0x28b484, Func Offset: 0x354
	// Line 488, Address: 0x28b490, Func Offset: 0x360
	// Line 489, Address: 0x28b494, Func Offset: 0x364
	// Func End, Address: 0x28b4b4, Func Offset: 0x384
}

// 
// Start address: 0x28b4c0
void pssMpegFinish(_anon1* vd)
{
	// Line 492, Address: 0x28b4c0, Func Offset: 0
	// Line 493, Address: 0x28b4d0, Func Offset: 0x10
	// Line 494, Address: 0x28b4e0, Func Offset: 0x20
	// Line 498, Address: 0x28b4f0, Func Offset: 0x30
	// Line 499, Address: 0x28b4f8, Func Offset: 0x38
	// Line 500, Address: 0x28b500, Func Offset: 0x40
	// Line 502, Address: 0x28b514, Func Offset: 0x54
	// Line 503, Address: 0x28b51c, Func Offset: 0x5c
	// Line 505, Address: 0x28b524, Func Offset: 0x64
	// Line 506, Address: 0x28b52c, Func Offset: 0x6c
	// Func End, Address: 0x28b540, Func Offset: 0x80
}

// 
// Start address: 0x28b540
void pssMpegPlayStart()
{
	// Line 509, Address: 0x28b540, Func Offset: 0
	// Line 515, Address: 0x28b548, Func Offset: 0x8
	// Line 516, Address: 0x28b568, Func Offset: 0x28
	// Line 518, Address: 0x28b57c, Func Offset: 0x3c
	// Line 519, Address: 0x28b590, Func Offset: 0x50
	// Line 522, Address: 0x28b5b8, Func Offset: 0x78
	// Line 523, Address: 0x28b5d8, Func Offset: 0x98
	// Line 525, Address: 0x28b5ec, Func Offset: 0xac
	// Line 526, Address: 0x28b5f8, Func Offset: 0xb8
	// Line 527, Address: 0x28b608, Func Offset: 0xc8
	// Line 529, Address: 0x28b618, Func Offset: 0xd8
	// Line 530, Address: 0x28b624, Func Offset: 0xe4
	// Line 531, Address: 0x28b630, Func Offset: 0xf0
	// Func End, Address: 0x28b640, Func Offset: 0x100
}

// 
// Start address: 0x28b640
void switchThread()
{
	// Line 538, Address: 0x28b640, Func Offset: 0
	// Line 539, Address: 0x28b648, Func Offset: 0x8
	// Line 540, Address: 0x28b654, Func Offset: 0x14
	// Func End, Address: 0x28b664, Func Offset: 0x24
}

// 
// Start address: 0x28b670
int isAudioOK()
{
	// Line 547, Address: 0x28b670, Func Offset: 0
	// Line 548, Address: 0x28b678, Func Offset: 0x8
	// Line 549, Address: 0x28b6a4, Func Offset: 0x34
	// Func End, Address: 0x28b6b4, Func Offset: 0x44
}

// 
// Start address: 0x28b6c0
int initAll(fsFileIndex* id)
{
	ThreadParam th_param;
	int result;
	int i;
	// Line 556, Address: 0x28b6c0, Func Offset: 0
	// Line 570, Address: 0x28b6e8, Func Offset: 0x28
	// Line 576, Address: 0x28b6fc, Func Offset: 0x3c
	// Line 577, Address: 0x28b70c, Func Offset: 0x4c
	// Line 585, Address: 0x28b740, Func Offset: 0x80
	// Line 591, Address: 0x28b764, Func Offset: 0xa4
	// Line 593, Address: 0x28b790, Func Offset: 0xd0
	// Line 594, Address: 0x28b7a0, Func Offset: 0xe0
	// Line 602, Address: 0x28b7cc, Func Offset: 0x10c
	// Line 605, Address: 0x28b7d8, Func Offset: 0x118
	// Line 606, Address: 0x28b820, Func Offset: 0x160
	// Line 608, Address: 0x28b834, Func Offset: 0x174
	// Line 616, Address: 0x28b878, Func Offset: 0x1b8
	// Line 617, Address: 0x28b888, Func Offset: 0x1c8
	// Line 618, Address: 0x28b8a0, Func Offset: 0x1e0
	// Line 619, Address: 0x28b8ac, Func Offset: 0x1ec
	// Line 620, Address: 0x28b8b8, Func Offset: 0x1f8
	// Line 621, Address: 0x28b8c8, Func Offset: 0x208
	// Line 622, Address: 0x28b8d0, Func Offset: 0x210
	// Line 623, Address: 0x28b8f0, Func Offset: 0x230
	// Line 629, Address: 0x28b910, Func Offset: 0x250
	// Line 630, Address: 0x28b91c, Func Offset: 0x25c
	// Line 631, Address: 0x28b930, Func Offset: 0x270
	// Line 632, Address: 0x28b938, Func Offset: 0x278
	// Line 633, Address: 0x28b940, Func Offset: 0x280
	// Line 634, Address: 0x28b94c, Func Offset: 0x28c
	// Line 635, Address: 0x28b950, Func Offset: 0x290
	// Line 636, Address: 0x28b970, Func Offset: 0x2b0
	// Line 638, Address: 0x28b994, Func Offset: 0x2d4
	// Line 643, Address: 0x28b99c, Func Offset: 0x2dc
	// Line 644, Address: 0x28b9a4, Func Offset: 0x2e4
	// Line 645, Address: 0x28b9b8, Func Offset: 0x2f8
	// Line 662, Address: 0x28b9cc, Func Offset: 0x30c
	// Line 663, Address: 0x28b9d0, Func Offset: 0x310
	// Func End, Address: 0x28b9fc, Func Offset: 0x33c
}

// 
// Start address: 0x28ba00
void termAll()
{
	int tmp;
	// Line 670, Address: 0x28ba00, Func Offset: 0
	// Line 673, Address: 0x28ba08, Func Offset: 0x8
	// Line 674, Address: 0x28ba1c, Func Offset: 0x1c
	// Line 676, Address: 0x28ba2c, Func Offset: 0x2c
	// Line 677, Address: 0x28ba34, Func Offset: 0x34
	// Line 678, Address: 0x28ba50, Func Offset: 0x50
	// Line 679, Address: 0x28ba6c, Func Offset: 0x6c
	// Line 681, Address: 0x28ba74, Func Offset: 0x74
	// Line 682, Address: 0x28ba90, Func Offset: 0x90
	// Line 684, Address: 0x28baac, Func Offset: 0xac
	// Line 685, Address: 0x28bab8, Func Offset: 0xb8
	// Line 686, Address: 0x28bacc, Func Offset: 0xcc
	// Line 687, Address: 0x28bae4, Func Offset: 0xe4
	// Line 690, Address: 0x28baf0, Func Offset: 0xf0
	// Line 691, Address: 0x28bafc, Func Offset: 0xfc
	// Line 692, Address: 0x28bb10, Func Offset: 0x110
	// Line 693, Address: 0x28bb28, Func Offset: 0x128
	// Line 696, Address: 0x28bb34, Func Offset: 0x134
	// Line 697, Address: 0x28bb44, Func Offset: 0x144
	// Line 699, Address: 0x28bb54, Func Offset: 0x154
	// Line 702, Address: 0x28bb5c, Func Offset: 0x15c
	// Func End, Address: 0x28bb6c, Func Offset: 0x16c
}

// 
// Start address: 0x28bb70
void defMain()
{
	// Line 709, Address: 0x28bb70, Func Offset: 0
	// Line 711, Address: 0x28bb78, Func Offset: 0x8
	// Line 713, Address: 0x28bb80, Func Offset: 0x10
	// Func End, Address: 0x28bb88, Func Offset: 0x18
}

// 
// Start address: 0x28bb90
int pssGetPssStatus()
{
	// Line 719, Address: 0x28bb90, Func Offset: 0
	// Line 720, Address: 0x28bb98, Func Offset: 0x8
	// Func End, Address: 0x28bba0, Func Offset: 0x10
}

// 
// Start address: 0x28bba0
int pssGetPssAbortFlag()
{
	// Line 725, Address: 0x28bba0, Func Offset: 0
	// Line 726, Address: 0x28bba8, Func Offset: 0x8
	// Func End, Address: 0x28bbb0, Func Offset: 0x10
}

// 
// Start address: 0x28bbb0
int pssGetMaskSwitch()
{
	// Line 731, Address: 0x28bbb0, Func Offset: 0
	// Line 732, Address: 0x28bbb8, Func Offset: 0x8
	// Func End, Address: 0x28bbc0, Func Offset: 0x10
}

// 
// Start address: 0x28bbc0
void pssSetMaskSwitch(int flg)
{
	// Line 737, Address: 0x28bbc0, Func Offset: 0
	// Line 738, Address: 0x28bbc8, Func Offset: 0x8
	// Func End, Address: 0x28bbd0, Func Offset: 0x10
}

// 
// Start address: 0x28bbd0
void pssCheckMovieCancel()
{
	// Line 742, Address: 0x28bbd0, Func Offset: 0
	// Line 743, Address: 0x28bbd8, Func Offset: 0x8
	// Line 754, Address: 0x28bbec, Func Offset: 0x1c
	// Line 756, Address: 0x28bbf4, Func Offset: 0x24
	// Line 759, Address: 0x28bc10, Func Offset: 0x40
	// Line 760, Address: 0x28bc1c, Func Offset: 0x4c
	// Line 763, Address: 0x28bc30, Func Offset: 0x60
	// Func End, Address: 0x28bc40, Func Offset: 0x70
}

// 
// Start address: 0x28bc40
void pssSetSubTitleData(unsigned short* msg_bufp, void* adr_msg_time, int msg_start)
{
	// Line 770, Address: 0x28bc40, Func Offset: 0
	// Line 771, Address: 0x28bc48, Func Offset: 0x8
	// Line 772, Address: 0x28bc50, Func Offset: 0x10
	// Line 773, Address: 0x28bc58, Func Offset: 0x18
	// Line 774, Address: 0x28bc60, Func Offset: 0x20
	// Func End, Address: 0x28bc68, Func Offset: 0x28
}

// 
// Start address: 0x28bc70
void ErrMessage(char* message)
{
	// Line 781, Address: 0x28bc70, Func Offset: 0
	// Line 782, Address: 0x28bc7c, Func Offset: 0xc
	// Line 783, Address: 0x28bc8c, Func Offset: 0x1c
	// Func End, Address: 0x28bc9c, Func Offset: 0x2c
}

// 
// Start address: 0x28bca0
void proceedAudio()
{
	// Line 790, Address: 0x28bca0, Func Offset: 0
	// Line 791, Address: 0x28bca8, Func Offset: 0x8
	// Line 792, Address: 0x28bcb8, Func Offset: 0x18
	// Func End, Address: 0x28bcc8, Func Offset: 0x28
}

