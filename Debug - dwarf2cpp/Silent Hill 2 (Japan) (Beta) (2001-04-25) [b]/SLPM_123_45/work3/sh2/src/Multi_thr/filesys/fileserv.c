typedef union fsFile;
typedef struct fsCdFile;
typedef struct _anon0;
typedef struct CmdServStat;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;

typedef int(*type_0)(fsFile*);
typedef int(*type_1)();
typedef int(*type_2)(char*);
typedef int(*type_3)(int, int);
typedef int(*type_4)();
typedef int(*type_5)(fsFile*, void*);
typedef int(*type_6)(int);
typedef int(*type_7)(char*);
typedef int(*type_8)(int);
typedef int(*type_9)(char**);
typedef int(*type_11)();
typedef int(*type_12)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_13)(fsFile**, void**);
typedef int(*type_14)(_anon0*);
typedef int(*type_15)();
typedef int(*type_16)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_17)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
typedef int(*type_18)();
typedef int(*type_20)(char*);
typedef int(*type_21)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_22)();
typedef int(*type_23)();
typedef int(*type_24)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
typedef int(*type_25)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_26)();
typedef int(*type_27)(char*, <unknown fundamental type (0xa510)>*, int(*)());
typedef int(*type_28)(fsFile**, void**);
typedef int(*type_29)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_30)(int, fsFile**, void**, int(*)(fsFile**, void**));
typedef int(*type_31)(int);
typedef int(*type_32)();
typedef int(*type_33)();
typedef int(*type_34)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_35)(fsFile**, void**);
typedef int(*type_36)(fsFile**, void**);
typedef int(*type_37)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_38)(int, int, fsFile**, void**, int(*)(fsFile**, void**));
typedef int(*type_39)();
typedef int(*type_40)();
typedef int(*type_41)(int);
typedef int(*type_42)();
typedef int(*type_43)(fsFile*);
typedef int(*type_44)();
typedef int(*type_45)(int, void*, int);

typedef <unknown fundamental type (0xa510)> type_10[6];
typedef <unknown fundamental type (0xa510)> type_19[6];

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

struct CmdServStat
{
	int qsize;
	int qlen;
	int id;
	int last_id;
	int clen;
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
int(*fsCmdPut2)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*shSifInit)(int, int);
int(*fsCmdPut1)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>);
int(*shSdSifInit)(int);
int(*shCdInit)(int);
int(*fsCmdPut3)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*shCdInitW)(int, void*, int);
int(*shSifRebootIop)(char*);
int(*shIopReplaceMod)(char*);
int(*shIopLoadMod)(char*);
int(*shIopLoadModList)(char**);
int(*fsCmdPut0)(char*, <unknown fundamental type (0xa510)>*, int(*)());
int(*shCdStandbyW)();
int(*shCdPauseW)();
int(*shCdStopW)();
int(*fsCmdDiskSelectC)();
int(*fsCmdDiskSelectCH)();
int(*fsCmdDiskSelectHC)();
int(*fsCmdHdInit)(int);
int(*CmdQueuePut4)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*fsCmdSetParamForCheckDisk)(int, fsFile**, void**, int(*)(fsFile**, void**));
int(*CmdQueuePut1)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>);
int(*fsCmdCdCheckDisk)(int);
int(*CmdQueuePut5)(<unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*fsCmdCdCheckDisk2)(int, int, fsFile**, void**, int(*)(fsFile**, void**));
int(*fsCmdRead)(fsFile*, void*);
int(*fsCmdPut6)(char*, <unknown fundamental type (0xa510)>*, int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*fsCmdReadByName)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
int(*fsCmdReadDirect)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, void*);
int(*fsCmdFixFile)(fsFile*);
int(*fsCmdSeek)(fsFile*);
int(*shCdReadClock)(_anon0*);

int fsInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize);
int fsSync(int mode, int fid);
int fsGetStat(CmdServStat* stat);
int fsCmdPut0(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)());
int fsCmdPut1(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)(), <unknown fundamental type (0xa510)> a0);
int fsCmdPut2(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1);
int fsCmdPut3(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2);
int fcCdInitW(int cb_prio, void* stack, int stackSize);
int fcIopLoadMod(char* module);
int fcDiskSelectC();
int fcDiskSelectCH();
int fcDiskSelectHC();
int fcHdInit(int mode);
int fcDiskSelect(int mode);
int fcSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**));
int fcCdCheckDisk(int force_check);
void checkReadAlign(void* buffer);
int fcRead(fsFile* fp, void* buf);
int fcFixFile(fsFile* fp);

// 
// Start address: 0x1c5a90
int fsInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 28, Address: 0x1c5a90, Func Offset: 0
	// Line 29, Address: 0x1c5ab0, Func Offset: 0x20
	// Line 30, Address: 0x1c5ab4, Func Offset: 0x24
	// Line 31, Address: 0x1c5ac4, Func Offset: 0x34
	// Line 32, Address: 0x1c5ae4, Func Offset: 0x54
	// Line 33, Address: 0x1c5aec, Func Offset: 0x5c
	// Line 36, Address: 0x1c5af8, Func Offset: 0x68
	// Line 37, Address: 0x1c5afc, Func Offset: 0x6c
	// Func End, Address: 0x1c5b10, Func Offset: 0x80
}

// 
// Start address: 0x1c5b10
int fsSync(int mode, int fid)
{
	int ret;
	// Line 40, Address: 0x1c5b10, Func Offset: 0
	// Line 42, Address: 0x1c5b24, Func Offset: 0x14
	// Line 43, Address: 0x1c5b54, Func Offset: 0x44
	// Line 44, Address: 0x1c5b70, Func Offset: 0x60
	// Line 45, Address: 0x1c5b74, Func Offset: 0x64
	// Func End, Address: 0x1c5b88, Func Offset: 0x78
}

// 
// Start address: 0x1c5b90
int fsGetStat(CmdServStat* stat)
{
	// Line 48, Address: 0x1c5b90, Func Offset: 0
	// Line 49, Address: 0x1c5b9c, Func Offset: 0xc
	// Line 50, Address: 0x1c5bb0, Func Offset: 0x20
	// Func End, Address: 0x1c5bc0, Func Offset: 0x30
}

// 
// Start address: 0x1c5bc0
int fsCmdPut0(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)())
{
	int ret;
	// Line 118, Address: 0x1c5bc0, Func Offset: 0
	// Line 120, Address: 0x1c5bd8, Func Offset: 0x18
	// Line 121, Address: 0x1c5bec, Func Offset: 0x2c
	// Line 122, Address: 0x1c5c04, Func Offset: 0x44
	// Line 123, Address: 0x1c5c08, Func Offset: 0x48
	// Func End, Address: 0x1c5c1c, Func Offset: 0x5c
}

// 
// Start address: 0x1c5c20
int fsCmdPut1(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)(), <unknown fundamental type (0xa510)> a0)
{
	int ret;
	// Line 126, Address: 0x1c5c20, Func Offset: 0
	// Line 128, Address: 0x1c5c3c, Func Offset: 0x1c
	// Line 129, Address: 0x1c5c54, Func Offset: 0x34
	// Line 130, Address: 0x1c5c6c, Func Offset: 0x4c
	// Line 131, Address: 0x1c5c70, Func Offset: 0x50
	// Func End, Address: 0x1c5c84, Func Offset: 0x64
}

// 
// Start address: 0x1c5c90
int fsCmdPut2(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1)
{
	int ret;
	// Line 134, Address: 0x1c5c90, Func Offset: 0
	// Line 136, Address: 0x1c5cb0, Func Offset: 0x20
	// Line 137, Address: 0x1c5ccc, Func Offset: 0x3c
	// Line 138, Address: 0x1c5ce4, Func Offset: 0x54
	// Line 139, Address: 0x1c5ce8, Func Offset: 0x58
	// Func End, Address: 0x1c5cfc, Func Offset: 0x6c
}

// 
// Start address: 0x1c5d00
int fsCmdPut3(char* cmdstr, <unknown fundamental type (0xa510)>* w, int(*f)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2)
{
	int ret;
	// Line 142, Address: 0x1c5d00, Func Offset: 0
	// Line 144, Address: 0x1c5d24, Func Offset: 0x24
	// Line 145, Address: 0x1c5d44, Func Offset: 0x44
	// Line 146, Address: 0x1c5d5c, Func Offset: 0x5c
	// Line 147, Address: 0x1c5d60, Func Offset: 0x60
	// Func End, Address: 0x1c5d74, Func Offset: 0x74
}

// 
// Start address: 0x1c5d80
int fcCdInitW(int cb_prio, void* stack, int stackSize)
{
	// Line 308, Address: 0x1c5d80, Func Offset: 0
	// Line 309, Address: 0x1c5d94, Func Offset: 0x14
	// Line 310, Address: 0x1c5dc8, Func Offset: 0x48
	// Func End, Address: 0x1c5dd8, Func Offset: 0x58
}

// 
// Start address: 0x1c5de0
int fcIopLoadMod(char* module)
{
	// Line 326, Address: 0x1c5de0, Func Offset: 0
	// Line 327, Address: 0x1c5dec, Func Offset: 0xc
	// Line 328, Address: 0x1c5e18, Func Offset: 0x38
	// Func End, Address: 0x1c5e28, Func Offset: 0x48
}

// 
// Start address: 0x1c5e30
int fcDiskSelectC()
{
	// Line 413, Address: 0x1c5e30, Func Offset: 0
	// Line 414, Address: 0x1c5e38, Func Offset: 0x8
	// Line 415, Address: 0x1c5e60, Func Offset: 0x30
	// Func End, Address: 0x1c5e70, Func Offset: 0x40
}

// 
// Start address: 0x1c5e70
int fcDiskSelectCH()
{
	// Line 418, Address: 0x1c5e70, Func Offset: 0
	// Line 419, Address: 0x1c5e78, Func Offset: 0x8
	// Line 420, Address: 0x1c5ea0, Func Offset: 0x30
	// Func End, Address: 0x1c5eb0, Func Offset: 0x40
}

// 
// Start address: 0x1c5eb0
int fcDiskSelectHC()
{
	// Line 423, Address: 0x1c5eb0, Func Offset: 0
	// Line 424, Address: 0x1c5eb8, Func Offset: 0x8
	// Line 425, Address: 0x1c5ee0, Func Offset: 0x30
	// Func End, Address: 0x1c5ef0, Func Offset: 0x40
}

// 
// Start address: 0x1c5ef0
int fcHdInit(int mode)
{
	// Line 428, Address: 0x1c5ef0, Func Offset: 0
	// Line 429, Address: 0x1c5efc, Func Offset: 0xc
	// Line 430, Address: 0x1c5f28, Func Offset: 0x38
	// Func End, Address: 0x1c5f38, Func Offset: 0x48
}

// 
// Start address: 0x1c5f40
int fcDiskSelect(int mode)
{
	// Line 433, Address: 0x1c5f40, Func Offset: 0
	// Line 434, Address: 0x1c5f4c, Func Offset: 0xc
	// Line 436, Address: 0x1c5f68, Func Offset: 0x28
	// Line 438, Address: 0x1c5f78, Func Offset: 0x38
	// Line 440, Address: 0x1c5f88, Func Offset: 0x48
	// Line 442, Address: 0x1c5f90, Func Offset: 0x50
	// Func End, Address: 0x1c5fa0, Func Offset: 0x60
}

// 
// Start address: 0x1c5fa0
int fcSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**))
{
	// Line 454, Address: 0x1c5fa0, Func Offset: 0
	// Line 455, Address: 0x1c5fb8, Func Offset: 0x18
	// Line 461, Address: 0x1c5fe8, Func Offset: 0x48
	// Func End, Address: 0x1c5ff8, Func Offset: 0x58
}

// 
// Start address: 0x1c6000
int fcCdCheckDisk(int force_check)
{
	// Line 464, Address: 0x1c6000, Func Offset: 0
	// Line 465, Address: 0x1c600c, Func Offset: 0xc
	// Line 469, Address: 0x1c6030, Func Offset: 0x30
	// Func End, Address: 0x1c6040, Func Offset: 0x40
}

// 
// Start address: 0x1c6040
void checkReadAlign(void* buffer)
{
	// Line 490, Address: 0x1c6040, Func Offset: 0
	// Line 495, Address: 0x1c604c, Func Offset: 0xc
	// Line 496, Address: 0x1c605c, Func Offset: 0x1c
	// Line 497, Address: 0x1c6070, Func Offset: 0x30
	// Line 499, Address: 0x1c607c, Func Offset: 0x3c
	// Func End, Address: 0x1c608c, Func Offset: 0x4c
}

// 
// Start address: 0x1c6090
int fcRead(fsFile* fp, void* buf)
{
	// Line 503, Address: 0x1c6090, Func Offset: 0
	// Line 505, Address: 0x1c60a0, Func Offset: 0x10
	// Line 506, Address: 0x1c60ac, Func Offset: 0x1c
	// Line 507, Address: 0x1c60dc, Func Offset: 0x4c
	// Func End, Address: 0x1c60ec, Func Offset: 0x5c
}

// 
// Start address: 0x1c60f0
int fcFixFile(fsFile* fp)
{
	// Line 529, Address: 0x1c60f0, Func Offset: 0
	// Line 531, Address: 0x1c60fc, Func Offset: 0xc
	// Line 532, Address: 0x1c6128, Func Offset: 0x38
	// Func End, Address: 0x1c6138, Func Offset: 0x48
}

