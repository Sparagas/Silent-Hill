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
typedef struct _anon10;
typedef union fsFile;
typedef struct _PSS_MESSAGE_TIME;
typedef struct fsCdFile;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _PSS_SUBTITLE_CTRL;
typedef struct fsMgcFile;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _PssCommonWork;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct fsMgfFile;
typedef struct _anon19;
typedef struct fsHdFile;
typedef struct _anon20;
typedef struct SemaParam;
typedef struct fsMgpFile;
typedef struct _anon21;
typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef union fsFileIndex;
typedef struct _anon26;


typedef unsigned char type_0[327680];
typedef unsigned char type_1[393216];
typedef _anon6 type_2[512];
typedef unsigned char type_3[49152];
typedef char type_4[2048];
typedef char type_5[16384];
typedef _anon5 type_6[2];

struct _anon0
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon1
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

struct _anon2
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon3
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

struct _anon4
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

struct _anon5
{
	_anon1 pmode;
	_anon9 smode2;
	_anon4 dispfb;
	_anon12 display;
	_anon13 bgcolor;
};

struct _anon6
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon7
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

struct _anon8
{
	_anon10 frame1;
	unsigned long frame1addr;
	_anon21 zbuf1;
	long zbuf1addr;
	_anon17 xyoffset1;
	long xyoffset1addr;
	_anon7 scissor1;
	long scissor1addr;
	_anon0 prmodecont;
	long prmodecontaddr;
	_anon14 colclamp;
	long colclampaddr;
	_anon2 dthe;
	long dtheaddr;
	_anon11 test1;
	long test1addr;
};

struct _anon9
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

struct _anon10
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

union fsFile
{
	_anon23 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _PSS_MESSAGE_TIME
{
	unsigned short start;
	unsigned short end;
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

struct _anon11
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

struct _anon12
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

struct _PSS_SUBTITLE_CTRL
{
	int msg_start;
	int msg_no;
	unsigned short* msg_bufp;
	_PSS_MESSAGE_TIME* adr_msg_time;
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

struct _anon13
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

struct _anon14
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon15
{
	unsigned char data[327680];
	int put;
	int count;
	int size;
};

struct _PssCommonWork
{
	unsigned char* mpegWorkp;
	_anon15* readBufp;
	<unknown fundamental type (0xa510)>* viBufDatap;
	_anon6 timeStamp[512];
	_anon18* voBufDatap;
	unsigned char audioBuff[49152];
	unsigned int* tagInterDatap;
	int videoDecTh;
	int defaultTh;
	char defStack[2048];
	char videoDecStack[16384];
	_anon24 db;
};

struct _anon16
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

struct _anon17
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon18
{
	unsigned char v[393216];
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

struct _anon19
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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
	_anon11 testa;
	long testaaddr;
	_anon22 prim;
	long primaddr;
	_anon3 rgbaq;
	long rgbaqaddr;
	_anon19 xyz2a;
	long xyz2aaddr;
	_anon19 xyz2b;
	long xyz2baddr;
	_anon11 testb;
	long testbaddr;
};

struct SemaParam
{
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	unsigned int attr;
	unsigned int option;
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

struct _anon21
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

struct _anon22
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

struct _anon23
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

struct _anon24
{
	_anon5 disp[2];
	_anon16 giftag0;
	_anon8 draw0;
	_anon20 clear0;
	_anon16 giftag1;
	_anon8 draw1;
	_anon20 clear1;
};

struct _anon25
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

union fsFileIndex
{
	_anon26 index;
	unsigned long pack;
};

struct _anon26
{
	fsFile* fp;
	char* name;
};

int pssSema;
_PSS_SUBTITLE_CTRL pssSubTitleCtrl;
_anon25 pssExecCtrl;
_PssCommonWork* pss_common_work;

void PssBreakPoint();
int CreateSemaPss();
int WaitSemaPss();
int SignalSemaPss();

// 
// Start address: 0x2886d0
void PssBreakPoint()
{
	// Line 16, Address: 0x2886d0, Func Offset: 0
	// Func End, Address: 0x2886d8, Func Offset: 0x8
}

// 
// Start address: 0x2886e0
int CreateSemaPss()
{
	SemaParam param;
	// Line 21, Address: 0x2886e0, Func Offset: 0
	// Line 24, Address: 0x2886e8, Func Offset: 0x8
	// Line 25, Address: 0x2886f0, Func Offset: 0x10
	// Line 26, Address: 0x2886f4, Func Offset: 0x14
	// Line 27, Address: 0x2886f8, Func Offset: 0x18
	// Line 28, Address: 0x288704, Func Offset: 0x24
	// Func End, Address: 0x288714, Func Offset: 0x34
}

// 
// Start address: 0x288720
int WaitSemaPss()
{
	// Line 31, Address: 0x288720, Func Offset: 0
	// Line 32, Address: 0x288728, Func Offset: 0x8
	// Line 33, Address: 0x28873c, Func Offset: 0x1c
	// Line 34, Address: 0x28874c, Func Offset: 0x2c
	// Line 36, Address: 0x288784, Func Offset: 0x64
	// Line 37, Address: 0x288794, Func Offset: 0x74
	// Func End, Address: 0x2887a4, Func Offset: 0x84
}

// 
// Start address: 0x2887b0
int SignalSemaPss()
{
	// Line 40, Address: 0x2887b0, Func Offset: 0
	// Line 41, Address: 0x2887b8, Func Offset: 0x8
	// Line 42, Address: 0x2887c8, Func Offset: 0x18
	// Func End, Address: 0x2887d8, Func Offset: 0x28
}

