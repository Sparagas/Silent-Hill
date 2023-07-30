typedef struct CmdServStat;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef struct _anon1;

typedef int(*type_0)(<unknown fundamental type (0xa510)>*, int(*)());
typedef int(*type_1)();
typedef int(*type_2)();
typedef int(*type_3)(int);
typedef int(*type_4)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_5)(fsFile*);
typedef int(*type_6)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_7)(fsFile*);
typedef int(*type_8)(fsFile*, void*);
typedef int(*type_9)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_10)(char*);
typedef int(*type_11)(fsFile*, void*, int, int);
typedef int(*type_12)(char*);
typedef int(*type_13)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_14)(int);
typedef int(*type_15)(char**);
typedef int(*type_16)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_17)(int, int);
typedef int(*type_18)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
typedef int(*type_20)();
typedef int(*type_21)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_22)(int, void*, int);
typedef int(*type_23)();
typedef int(*type_24)();
typedef int(*type_25)();
typedef int(*type_26)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
typedef int(*type_28)(fsFile**, void**);
typedef int(*type_29)(fsFile**, void**);
typedef int(*type_30)();
typedef int(*type_31)(int, fsFile**, void**, int(*)(fsFile**, void**));
typedef int(*type_32)(int);
typedef int(*type_33)(fsFile**, void**);
typedef int(*type_34)(_anon0*);
typedef int(*type_35)(fsFile**, void**);
typedef int(*type_36)(char*);
typedef int(*type_37)(int, int, fsFile**, void**, int(*)(fsFile**, void**));
typedef int(*type_38)();
typedef int(*type_39)();

typedef <unknown fundamental type (0xa510)> type_19[6];
typedef <unknown fundamental type (0xa510)> type_27[6];

struct CmdServStat
{
	int qsize;
	int qlen;
	int id;
	int last_id;
	int clen;
};

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

struct _anon0
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

<unknown fundamental type (0xa510)>* fsCmdWork;
int(*CmdQueuePut0)(<unknown fundamental type (0xa510)>*, int(*)());
int(*shSifInit)();
int(*shSdSifInit)();
int(*CmdQueuePut2)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*shCdInit)(int, int);
int(*CmdQueuePut3)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*shCdInitW)(int, void*, int);
int(*CmdQueuePut1)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>);
int(*shSifRebootIop)(char*);
int(*shIopReplaceMod)(char*);
int(*shIopLoadMod)(char*);
int(*shIopLoadModList)(char**);
int(*shCdStandbyW)();
int(*shCdPauseW)();
int(*shCdStopW)();
int(*fsCmdDiskSelectC)();
int(*fsCmdDiskSelectCH)();
int(*fsCmdDiskSelectHC)();
int(*fsCmdHdInit)(int);
int(*fsCmdExecDevSelect)(int);
int(*CmdQueuePut4)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*fsCmdSetParamForCheckDisk)(int, fsFile**, void**, int(*)(fsFile**, void**));
int(*fsCmdCdCheckDisk)(int);
int(*CmdQueuePut5)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*fsCmdCdCheckDisk2)(int, int, fsFile**, void**, int(*)(fsFile**, void**));
int(*fsCmdRead)(fsFile*, void*);
int(*fsCmdReadPart)(fsFile*, void*, int, int);
int(*CmdQueuePut6)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*fsCmdReadByName)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
int(*fsCmdReadDirect)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
int(*fsCmdFixFile)(fsFile*);
int(*fsCmdSeek)(fsFile*);
int(*shCdReadClock)(_anon0*);

int fsInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize);
int fsSync(int mode, int fid);
int fsGetStat(CmdServStat* stat);
int fsGetTrayStat();
int fcSifInit();
int fcCdInitW(int cb_prio, void* stack, int stackSize);
int fcIopLoadMod(char* module);
int fcDiskSelectC();
int fcDiskSelectCH();
int fcDiskSelectHC();
int fcHdInit(int mode);
int fcDiskSelect(int mode);
int fcExecDevSelect(int mode);
int fcSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**));
int fcCdCheckDisk(int force_check);
void checkReadAlign(void* buffer);
int fcRead(fsFile* fp, void* buf);
int fcReadPart(fsFile* fp, void* buf, int offset, int size);
int fcFixFile(fsFile* fp);

// 
// Start address: 0x1bc630
int fsInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 28, Address: 0x1bc630, Func Offset: 0
	// Line 29, Address: 0x1bc64c, Func Offset: 0x1c
	// Line 30, Address: 0x1bc650, Func Offset: 0x20
	// Line 31, Address: 0x1bc660, Func Offset: 0x30
	// Line 32, Address: 0x1bc67c, Func Offset: 0x4c
	// Line 33, Address: 0x1bc684, Func Offset: 0x54
	// Line 37, Address: 0x1bc68c, Func Offset: 0x5c
	// Func End, Address: 0x1bc6a0, Func Offset: 0x70
}

// 
// Start address: 0x1bc6a0
int fsSync(int mode, int fid)
{
	int ret;
	// Line 40, Address: 0x1bc6a0, Func Offset: 0
	// Line 42, Address: 0x1bc6b8, Func Offset: 0x18
	// Line 43, Address: 0x1bc6e4, Func Offset: 0x44
	// Line 45, Address: 0x1bc6fc, Func Offset: 0x5c
	// Func End, Address: 0x1bc714, Func Offset: 0x74
}

// 
// Start address: 0x1bc720
int fsGetStat(CmdServStat* stat)
{
	// Line 48, Address: 0x1bc720, Func Offset: 0
	// Line 49, Address: 0x1bc72c, Func Offset: 0xc
	// Line 50, Address: 0x1bc73c, Func Offset: 0x1c
	// Func End, Address: 0x1bc74c, Func Offset: 0x2c
}

// 
// Start address: 0x1bc750
int fsGetTrayStat()
{
	// Line 59, Address: 0x1bc750, Func Offset: 0
	// Line 60, Address: 0x1bc758, Func Offset: 0x8
	// Line 61, Address: 0x1bc760, Func Offset: 0x10
	// Func End, Address: 0x1bc770, Func Offset: 0x20
}

// 
// Start address: 0x1bc770
int fcSifInit()
{
	// Line 290, Address: 0x1bc770, Func Offset: 0
	// Line 291, Address: 0x1bc778, Func Offset: 0x8
	// Line 292, Address: 0x1bc798, Func Offset: 0x28
	// Func End, Address: 0x1bc7a8, Func Offset: 0x38
}

// 
// Start address: 0x1bc7b0
int fcCdInitW(int cb_prio, void* stack, int stackSize)
{
	// Line 308, Address: 0x1bc7b0, Func Offset: 0
	// Line 309, Address: 0x1bc7c4, Func Offset: 0x14
	// Line 310, Address: 0x1bc7e8, Func Offset: 0x38
	// Func End, Address: 0x1bc7f8, Func Offset: 0x48
}

// 
// Start address: 0x1bc800
int fcIopLoadMod(char* module)
{
	// Line 326, Address: 0x1bc800, Func Offset: 0
	// Line 327, Address: 0x1bc80c, Func Offset: 0xc
	// Line 328, Address: 0x1bc82c, Func Offset: 0x2c
	// Func End, Address: 0x1bc83c, Func Offset: 0x3c
}

// 
// Start address: 0x1bc840
int fcDiskSelectC()
{
	// Line 405, Address: 0x1bc840, Func Offset: 0
	// Line 406, Address: 0x1bc848, Func Offset: 0x8
	// Line 407, Address: 0x1bc868, Func Offset: 0x28
	// Func End, Address: 0x1bc878, Func Offset: 0x38
}

// 
// Start address: 0x1bc880
int fcDiskSelectCH()
{
	// Line 410, Address: 0x1bc880, Func Offset: 0
	// Line 411, Address: 0x1bc888, Func Offset: 0x8
	// Line 412, Address: 0x1bc8a8, Func Offset: 0x28
	// Func End, Address: 0x1bc8b8, Func Offset: 0x38
}

// 
// Start address: 0x1bc8c0
int fcDiskSelectHC()
{
	// Line 415, Address: 0x1bc8c0, Func Offset: 0
	// Line 416, Address: 0x1bc8c8, Func Offset: 0x8
	// Line 417, Address: 0x1bc8e8, Func Offset: 0x28
	// Func End, Address: 0x1bc8f8, Func Offset: 0x38
}

// 
// Start address: 0x1bc900
int fcHdInit(int mode)
{
	// Line 420, Address: 0x1bc900, Func Offset: 0
	// Line 421, Address: 0x1bc90c, Func Offset: 0xc
	// Line 422, Address: 0x1bc92c, Func Offset: 0x2c
	// Func End, Address: 0x1bc93c, Func Offset: 0x3c
}

// 
// Start address: 0x1bc940
int fcDiskSelect(int mode)
{
	// Line 425, Address: 0x1bc940, Func Offset: 0
	// Line 426, Address: 0x1bc948, Func Offset: 0x8
	// Line 428, Address: 0x1bc960, Func Offset: 0x20
	// Line 430, Address: 0x1bc970, Func Offset: 0x30
	// Line 432, Address: 0x1bc980, Func Offset: 0x40
	// Line 434, Address: 0x1bc988, Func Offset: 0x48
	// Func End, Address: 0x1bc998, Func Offset: 0x58
}

// 
// Start address: 0x1bc9a0
int fcExecDevSelect(int mode)
{
	// Line 437, Address: 0x1bc9a0, Func Offset: 0
	// Line 438, Address: 0x1bc9ac, Func Offset: 0xc
	// Line 439, Address: 0x1bc9cc, Func Offset: 0x2c
	// Func End, Address: 0x1bc9dc, Func Offset: 0x3c
}

// 
// Start address: 0x1bc9e0
int fcSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**))
{
	// Line 451, Address: 0x1bc9e0, Func Offset: 0
	// Line 452, Address: 0x1bc9f8, Func Offset: 0x18
	// Line 458, Address: 0x1bca20, Func Offset: 0x40
	// Func End, Address: 0x1bca30, Func Offset: 0x50
}

// 
// Start address: 0x1bca30
int fcCdCheckDisk(int force_check)
{
	// Line 461, Address: 0x1bca30, Func Offset: 0
	// Line 462, Address: 0x1bca3c, Func Offset: 0xc
	// Line 466, Address: 0x1bca5c, Func Offset: 0x2c
	// Func End, Address: 0x1bca6c, Func Offset: 0x3c
}

// 
// Start address: 0x1bca70
void checkReadAlign(void* buffer)
{
	// Line 487, Address: 0x1bca70, Func Offset: 0
	// Line 492, Address: 0x1bca7c, Func Offset: 0xc
	// Line 493, Address: 0x1bca88, Func Offset: 0x18
	// Line 494, Address: 0x1bca98, Func Offset: 0x28
	// Line 496, Address: 0x1bcaa4, Func Offset: 0x34
	// Func End, Address: 0x1bcab4, Func Offset: 0x44
}

// 
// Start address: 0x1bcac0
int fcRead(fsFile* fp, void* buf)
{
	// Line 500, Address: 0x1bcac0, Func Offset: 0
	// Line 502, Address: 0x1bcad8, Func Offset: 0x18
	// Line 503, Address: 0x1bcae4, Func Offset: 0x24
	// Line 504, Address: 0x1bcb0c, Func Offset: 0x4c
	// Func End, Address: 0x1bcb24, Func Offset: 0x64
}

// 
// Start address: 0x1bcb30
int fcReadPart(fsFile* fp, void* buf, int offset, int size)
{
	// Line 508, Address: 0x1bcb30, Func Offset: 0
	// Line 510, Address: 0x1bcb48, Func Offset: 0x18
	// Line 511, Address: 0x1bcb70, Func Offset: 0x40
	// Func End, Address: 0x1bcb80, Func Offset: 0x50
}

// 
// Start address: 0x1bcb80
int fcFixFile(fsFile* fp)
{
	// Line 533, Address: 0x1bcb80, Func Offset: 0
	// Line 535, Address: 0x1bcb8c, Func Offset: 0xc
	// Line 536, Address: 0x1bcbac, Func Offset: 0x2c
	// Func End, Address: 0x1bcbbc, Func Offset: 0x3c
}

