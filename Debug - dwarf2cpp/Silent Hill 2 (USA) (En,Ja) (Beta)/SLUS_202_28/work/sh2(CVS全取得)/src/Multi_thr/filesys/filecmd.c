typedef union fsFile;
typedef struct fsSubCmdStatT;
typedef struct _anon0;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct _anon1;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon2;
typedef union fsFileIndex;
typedef struct _anon3;

typedef int(*type_0)(fsFile*);
typedef int(*type_3)(fsFile**, void**);
typedef int(*type_9)(fsFile**, void**);
typedef int(*type_16)(char*, int, int, void*);
typedef int(*type_17)();
typedef int(*type_18)(fsFile*);
typedef int(*type_21)();
typedef int(*type_23)(fsFile*);
typedef int(*type_25)(fsFile*);
typedef int(*type_26)(fsFile*);
typedef int(*type_29)(fsFile*);
typedef int(*type_30)(fsFile**, void**);
typedef int(*type_32)(fsFile*);

typedef <unknown fundamental type (0xa510)> type_1[6];
typedef fsFile type_2[1];
typedef <unknown fundamental type (0xa510)> type_4[6];
typedef char type_5[256];
typedef _anon1 type_6[1];
typedef char type_7[256];
typedef fsFile type_8[1];
typedef char type_10[256];
typedef _anon0 type_11[1];
typedef fsFileIndex type_12[1];
typedef char type_13[16];
typedef unsigned char type_14[8];
typedef char type_15[256];
typedef int(*type_19)(fsFile*)[2];
typedef char type_20[256];
typedef char type_22[11];
typedef int(*type_24)(fsFile*)[2];
typedef int(*type_27)(fsFile*)[5];
typedef fsFile type_28[1];
typedef fsFile type_31[1];
typedef int(*type_33)(fsFile*)[5];

union fsFile
{
	_anon2 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsSubCmdStatT
{
	int(*fix_func_list)(fsFile*);
	int media_permission;
	int media_reset;
	int media_checking;
	int media_type;
	int media_illegal;
	int media_empty;
	int disk_check;
	int disk_number;
	int disk_count;
	int disk_prohibition;
	int disk_emulation;
	int now_reading;
	int exec_dev;
};

struct _anon0
{
	unsigned char trycount;
	unsigned char spindlctrl;
	unsigned char datapattern;
	unsigned char pad;
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

struct _anon1
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
	unsigned int flag;
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

struct _anon2
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
	_anon3 index;
	unsigned long pack;
};

struct _anon3
{
	fsFile* fp;
	char* name;
};

fsSubCmdStatT fs_stat;
char z_data_null_dev__name[11];
fsFile z_data_null_dev__info[1];
fsFileIndex data_null_dev[1];
fsFile* err_fp;
int(*___fsSubCmdFixFuncListC)(fsFile*)[2];
int(*___fsSubCmdFixFuncListCH)(fsFile*)[5];
int(*___fsSubCmdFixFuncListHC)(fsFile*)[5];
int(*___fsSubCmdFixFuncListH)(fsFile*)[2];
int(*fsSubCmdHdRead)();
int(*fsSubCmdHdError)();
int(*fsSubCmdHdRead0)(char*, int, int, void*);
char hdopen_lastpath[256];
int hdopen_lastmode;
int hdopen_lastfd;
int fsCmdParam_media_permission;
fsFile** fsCmdParam_fplist;
void** fsCmdParam_buflist;
int(*fsCmdParam_check_func)(fsFile**, void**);

fsFile* ___fsSubCmdCheckCdHdFile(fsFile* fp);
fsFile* ___fsSubCmdCheckRootFile(fsFile* fp);
fsFile* ___fsSubCmdCheckCdHdFixFile(fsFile* fp);
fsFile* fsCmdCheckFixFile(fsFile* fp);
int ___fsSubCmdCheckCdHdExistFile(fsFile* fp);
int fsCmdCheckExistFile(fsFile* fp);
fsFile* fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp);
fsFile* ___fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp);
fsFile* fsSubCmdSetRealFile(fsFile* realfp, fsFile* fp);
int fsCmdSetRealFile(fsFile* realfp, fsFile* fp);
int ___fsSubCmdNullDevFixFile(fsFile* fp);
int ___fsSubCmdCdCommonFixFile(fsFile* fp);
int ___fsSubCmdCd1stFixFile(fsFile* fp);
int ___fsSubCmdCdFixFile(fsFile* fp);
int ___fsSubCmdHdCommonFixFile(fsFile* fp);
int ___fsSubCmdHd1stFixFile(fsFile* fp);
int ___fsSubCmdHdFixFile(fsFile* fp);
int fsCmdDiskSelectC();
int fsCmdDiskSelectCH();
int fsCmdDiskSelectHC();
int fsCmdExecDevSelect(int mode);
int ___fsSubCmdFixFile(fsFile* fp);
int fsCmdFixFile(fsFile* fp);
int fsSubCmdCdCheckTrayOpen();
int fsSubCmdCdGetMedia();
int fsSubCmdCdGetMmode(int media);
int fsSubCmdCdRead(int lsn, int sectors, void* buf);
int fsCmdHdInit(int enable);
int strcmp__(char* s, char* t);
int shHdOpenC(char* fullpath, int mode);
int shHdCloseC(int fd);
int fsSubCmdHdRead0(char* name, int offset, int size, void* buf);
int fsSubCmdHdError();
int fsSubCmdRealRead(fsFile* fp, void* buf);
int fsSubCmdRead(fsFile* fp, void* buf);
int ___fsCmdRead(fsFile* fp, void* buf);
int fsCmdRead(fsFile* fp, void* buf);
int fsCmdReadPart(fsFile* fp, void* buf, int offset, int size);
int fsCmdSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**));
int fsCmdCdCheckDisk(int force_check);
int fsCmdCdCheckDisk2(int force_check, int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**));
int fsCmdGetTrayStat();

// 
// Start address: 0x1ba470
fsFile* ___fsSubCmdCheckCdHdFile(fsFile* fp)
{
	// Line 52, Address: 0x1ba470, Func Offset: 0
	// Line 55, Address: 0x1ba478, Func Offset: 0x8
	// Line 57, Address: 0x1ba484, Func Offset: 0x14
	// Line 60, Address: 0x1ba494, Func Offset: 0x24
	// Line 63, Address: 0x1ba4a0, Func Offset: 0x30
	// Line 67, Address: 0x1ba4ac, Func Offset: 0x3c
	// Func End, Address: 0x1ba4b4, Func Offset: 0x44
}

// 
// Start address: 0x1ba4c0
fsFile* ___fsSubCmdCheckRootFile(fsFile* fp)
{
	int size;
	int offset;
	char* end;
	char* start;
	// Line 117, Address: 0x1ba4c0, Func Offset: 0
	// Line 119, Address: 0x1ba4c8, Func Offset: 0x8
	// Line 121, Address: 0x1ba4d8, Func Offset: 0x18
	// Line 129, Address: 0x1ba4e4, Func Offset: 0x24
	// Line 130, Address: 0x1ba4e8, Func Offset: 0x28
	// Line 132, Address: 0x1ba4ec, Func Offset: 0x2c
	// Line 133, Address: 0x1ba4f0, Func Offset: 0x30
	// Line 134, Address: 0x1ba4f4, Func Offset: 0x34
	// Line 135, Address: 0x1ba4f8, Func Offset: 0x38
	// Line 137, Address: 0x1ba500, Func Offset: 0x40
	// Line 138, Address: 0x1ba504, Func Offset: 0x44
	// Line 139, Address: 0x1ba50c, Func Offset: 0x4c
	// Line 140, Address: 0x1ba510, Func Offset: 0x50
	// Func End, Address: 0x1ba518, Func Offset: 0x58
}

// 
// Start address: 0x1ba520
fsFile* ___fsSubCmdCheckCdHdFixFile(fsFile* fp)
{
	// Line 166, Address: 0x1ba520, Func Offset: 0
	// Line 168, Address: 0x1ba530, Func Offset: 0x10
	// Line 174, Address: 0x1ba560, Func Offset: 0x40
	// Line 176, Address: 0x1ba568, Func Offset: 0x48
	// Line 182, Address: 0x1ba5a8, Func Offset: 0x88
	// Line 183, Address: 0x1ba5b8, Func Offset: 0x98
	// Line 187, Address: 0x1ba5c4, Func Offset: 0xa4
	// Line 189, Address: 0x1ba5d0, Func Offset: 0xb0
	// Line 191, Address: 0x1ba5d4, Func Offset: 0xb4
	// Func End, Address: 0x1ba5dc, Func Offset: 0xbc
}

// 
// Start address: 0x1ba5e0
fsFile* fsCmdCheckFixFile(fsFile* fp)
{
	fsFile* ret;
	// Line 198, Address: 0x1ba5e0, Func Offset: 0
	// Line 204, Address: 0x1ba5f0, Func Offset: 0x10
	// Line 205, Address: 0x1ba5f8, Func Offset: 0x18
	// Line 206, Address: 0x1ba608, Func Offset: 0x28
	// Line 207, Address: 0x1ba61c, Func Offset: 0x3c
	// Line 208, Address: 0x1ba620, Func Offset: 0x40
	// Line 209, Address: 0x1ba628, Func Offset: 0x48
	// Line 211, Address: 0x1ba638, Func Offset: 0x58
	// Line 216, Address: 0x1ba640, Func Offset: 0x60
	// Line 217, Address: 0x1ba644, Func Offset: 0x64
	// Func End, Address: 0x1ba658, Func Offset: 0x78
}

// 
// Start address: 0x1ba660
int ___fsSubCmdCheckCdHdExistFile(fsFile* fp)
{
	// Line 225, Address: 0x1ba660, Func Offset: 0
	// Line 230, Address: 0x1ba668, Func Offset: 0x8
	// Line 232, Address: 0x1ba678, Func Offset: 0x18
	// Line 234, Address: 0x1ba684, Func Offset: 0x24
	// Line 237, Address: 0x1ba6a8, Func Offset: 0x48
	// Line 239, Address: 0x1ba6b4, Func Offset: 0x54
	// Line 242, Address: 0x1ba6cc, Func Offset: 0x6c
	// Line 245, Address: 0x1ba6d8, Func Offset: 0x78
	// Line 246, Address: 0x1ba6dc, Func Offset: 0x7c
	// Func End, Address: 0x1ba6ec, Func Offset: 0x8c
}

// 
// Start address: 0x1ba6f0
int fsCmdCheckExistFile(fsFile* fp)
{
	int ret;
	// Line 252, Address: 0x1ba6f0, Func Offset: 0
	// Line 258, Address: 0x1ba700, Func Offset: 0x10
	// Line 260, Address: 0x1ba708, Func Offset: 0x18
	// Line 264, Address: 0x1ba718, Func Offset: 0x28
	// Line 267, Address: 0x1ba748, Func Offset: 0x58
	// Line 272, Address: 0x1ba750, Func Offset: 0x60
	// Line 273, Address: 0x1ba754, Func Offset: 0x64
	// Func End, Address: 0x1ba768, Func Offset: 0x78
}

// 
// Start address: 0x1ba770
fsFile* fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp)
{
	fsFile* ret;
	// Line 282, Address: 0x1ba770, Func Offset: 0
	// Line 284, Address: 0x1ba788, Func Offset: 0x18
	// Line 285, Address: 0x1ba790, Func Offset: 0x20
	// Line 286, Address: 0x1ba7a4, Func Offset: 0x34
	// Line 290, Address: 0x1ba7ac, Func Offset: 0x3c
	// Line 291, Address: 0x1ba7b0, Func Offset: 0x40
	// Func End, Address: 0x1ba7c8, Func Offset: 0x58
}

// 
// Start address: 0x1ba7d0
fsFile* ___fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp)
{
	int psize;
	int poffset;
	int psize;
	int plsn;
	int size;
	int offset;
	fsFile* ret;
	// Line 293, Address: 0x1ba7d0, Func Offset: 0
	// Line 303, Address: 0x1ba7e8, Func Offset: 0x18
	// Line 305, Address: 0x1ba7fc, Func Offset: 0x2c
	// Line 307, Address: 0x1ba810, Func Offset: 0x40
	// Line 310, Address: 0x1ba81c, Func Offset: 0x4c
	// Line 311, Address: 0x1ba824, Func Offset: 0x54
	// Line 313, Address: 0x1ba830, Func Offset: 0x60
	// Line 317, Address: 0x1ba844, Func Offset: 0x74
	// Line 318, Address: 0x1ba854, Func Offset: 0x84
	// Line 320, Address: 0x1ba85c, Func Offset: 0x8c
	// Line 323, Address: 0x1ba864, Func Offset: 0x94
	// Line 324, Address: 0x1ba880, Func Offset: 0xb0
	// Line 326, Address: 0x1ba884, Func Offset: 0xb4
	// Line 332, Address: 0x1ba8a8, Func Offset: 0xd8
	// Line 333, Address: 0x1ba8ac, Func Offset: 0xdc
	// Line 334, Address: 0x1ba8b0, Func Offset: 0xe0
	// Line 335, Address: 0x1ba8bc, Func Offset: 0xec
	// Line 336, Address: 0x1ba8c0, Func Offset: 0xf0
	// Line 337, Address: 0x1ba8d8, Func Offset: 0x108
	// Line 339, Address: 0x1ba8dc, Func Offset: 0x10c
	// Line 340, Address: 0x1ba8f8, Func Offset: 0x128
	// Line 341, Address: 0x1ba8fc, Func Offset: 0x12c
	// Line 344, Address: 0x1ba908, Func Offset: 0x138
	// Line 350, Address: 0x1ba914, Func Offset: 0x144
	// Line 351, Address: 0x1ba918, Func Offset: 0x148
	// Line 352, Address: 0x1ba91c, Func Offset: 0x14c
	// Line 353, Address: 0x1ba928, Func Offset: 0x158
	// Line 354, Address: 0x1ba92c, Func Offset: 0x15c
	// Line 355, Address: 0x1ba944, Func Offset: 0x174
	// Line 357, Address: 0x1ba948, Func Offset: 0x178
	// Line 358, Address: 0x1ba950, Func Offset: 0x180
	// Line 359, Address: 0x1ba954, Func Offset: 0x184
	// Line 363, Address: 0x1ba960, Func Offset: 0x190
	// Line 368, Address: 0x1ba96c, Func Offset: 0x19c
	// Line 370, Address: 0x1ba970, Func Offset: 0x1a0
	// Func End, Address: 0x1ba988, Func Offset: 0x1b8
}

// 
// Start address: 0x1ba990
fsFile* fsSubCmdSetRealFile(fsFile* realfp, fsFile* fp)
{
	int err;
	fsFile* ret;
	// Line 373, Address: 0x1ba990, Func Offset: 0
	// Line 380, Address: 0x1ba9ac, Func Offset: 0x1c
	// Line 382, Address: 0x1ba9b4, Func Offset: 0x24
	// Line 383, Address: 0x1ba9c4, Func Offset: 0x34
	// Line 384, Address: 0x1ba9d8, Func Offset: 0x48
	// Line 386, Address: 0x1ba9e0, Func Offset: 0x50
	// Line 388, Address: 0x1ba9f4, Func Offset: 0x64
	// Line 393, Address: 0x1ba9fc, Func Offset: 0x6c
	// Line 394, Address: 0x1baa00, Func Offset: 0x70
	// Func End, Address: 0x1baa1c, Func Offset: 0x8c
}

// 
// Start address: 0x1baa20
int fsCmdSetRealFile(fsFile* realfp, fsFile* fp)
{
	// Line 397, Address: 0x1baa20, Func Offset: 0
	// Line 398, Address: 0x1baa28, Func Offset: 0x8
	// Line 399, Address: 0x1baa38, Func Offset: 0x18
	// Func End, Address: 0x1baa48, Func Offset: 0x28
}

// 
// Start address: 0x1baa50
int ___fsSubCmdNullDevFixFile(fsFile* fp)
{
	int ret;
	// Line 481, Address: 0x1baa50, Func Offset: 0
	// Line 483, Address: 0x1baa58, Func Offset: 0x8
	// Line 484, Address: 0x1baa8c, Func Offset: 0x3c
	// Line 485, Address: 0x1baa9c, Func Offset: 0x4c
	// Line 486, Address: 0x1baaa0, Func Offset: 0x50
	// Line 487, Address: 0x1baaa8, Func Offset: 0x58
	// Line 488, Address: 0x1baad0, Func Offset: 0x80
	// Line 489, Address: 0x1baae0, Func Offset: 0x90
	// Line 490, Address: 0x1baae4, Func Offset: 0x94
	// Line 491, Address: 0x1baaec, Func Offset: 0x9c
	// Line 494, Address: 0x1baaf0, Func Offset: 0xa0
	// Func End, Address: 0x1bab00, Func Offset: 0xb0
}

// 
// Start address: 0x1bab00
int ___fsSubCmdCdCommonFixFile(fsFile* fp)
{
	int ret;
	char fullpath[256];
	_anon1 file[1];
	// Line 511, Address: 0x1bab00, Func Offset: 0
	// Line 518, Address: 0x1bab14, Func Offset: 0x14
	// Line 519, Address: 0x1bab24, Func Offset: 0x24
	// Line 520, Address: 0x1bab30, Func Offset: 0x30
	// Line 521, Address: 0x1bab48, Func Offset: 0x48
	// Line 522, Address: 0x1bab4c, Func Offset: 0x4c
	// Line 527, Address: 0x1bab54, Func Offset: 0x54
	// Line 528, Address: 0x1bab58, Func Offset: 0x58
	// Line 529, Address: 0x1bab64, Func Offset: 0x64
	// Line 530, Address: 0x1bab80, Func Offset: 0x80
	// Line 531, Address: 0x1bab88, Func Offset: 0x88
	// Line 534, Address: 0x1baba4, Func Offset: 0xa4
	// Line 536, Address: 0x1babac, Func Offset: 0xac
	// Line 539, Address: 0x1babc0, Func Offset: 0xc0
	// Line 550, Address: 0x1babc8, Func Offset: 0xc8
	// Line 551, Address: 0x1babe0, Func Offset: 0xe0
	// Line 552, Address: 0x1bac08, Func Offset: 0x108
	// Line 555, Address: 0x1bac0c, Func Offset: 0x10c
	// Line 558, Address: 0x1bac14, Func Offset: 0x114
	// Line 560, Address: 0x1bac20, Func Offset: 0x120
	// Line 561, Address: 0x1bac2c, Func Offset: 0x12c
	// Line 562, Address: 0x1bac5c, Func Offset: 0x15c
	// Line 563, Address: 0x1bac64, Func Offset: 0x164
	// Line 564, Address: 0x1bac6c, Func Offset: 0x16c
	// Line 567, Address: 0x1bac70, Func Offset: 0x170
	// Line 568, Address: 0x1bac74, Func Offset: 0x174
	// Func End, Address: 0x1bac8c, Func Offset: 0x18c
}

// 
// Start address: 0x1bac90
int ___fsSubCmdCd1stFixFile(fsFile* fp)
{
	// Line 585, Address: 0x1bac90, Func Offset: 0
	// Line 589, Address: 0x1bac98, Func Offset: 0x8
	// Line 593, Address: 0x1bacbc, Func Offset: 0x2c
	// Func End, Address: 0x1baccc, Func Offset: 0x3c
}

// 
// Start address: 0x1bacd0
int ___fsSubCmdCdFixFile(fsFile* fp)
{
	// Line 609, Address: 0x1bacd0, Func Offset: 0
	// Line 613, Address: 0x1bacd8, Func Offset: 0x8
	// Line 617, Address: 0x1bacfc, Func Offset: 0x2c
	// Func End, Address: 0x1bad0c, Func Offset: 0x3c
}

// 
// Start address: 0x1bad10
int ___fsSubCmdHdCommonFixFile(fsFile* fp)
{
	int ret;
	char fullpath[256];
	int size;
	// Line 634, Address: 0x1bad10, Func Offset: 0
	// Line 641, Address: 0x1bad24, Func Offset: 0x14
	// Line 642, Address: 0x1bad34, Func Offset: 0x24
	// Line 643, Address: 0x1bad3c, Func Offset: 0x2c
	// Line 644, Address: 0x1bad54, Func Offset: 0x44
	// Line 645, Address: 0x1bad58, Func Offset: 0x48
	// Line 650, Address: 0x1bad60, Func Offset: 0x50
	// Line 651, Address: 0x1bad64, Func Offset: 0x54
	// Line 652, Address: 0x1bad70, Func Offset: 0x60
	// Line 653, Address: 0x1bad8c, Func Offset: 0x7c
	// Line 654, Address: 0x1bad94, Func Offset: 0x84
	// Line 657, Address: 0x1badb0, Func Offset: 0xa0
	// Line 659, Address: 0x1badb8, Func Offset: 0xa8
	// Line 660, Address: 0x1badcc, Func Offset: 0xbc
	// Line 661, Address: 0x1badd8, Func Offset: 0xc8
	// Line 662, Address: 0x1baddc, Func Offset: 0xcc
	// Line 664, Address: 0x1bade4, Func Offset: 0xd4
	// Line 665, Address: 0x1bae0c, Func Offset: 0xfc
	// Line 666, Address: 0x1bae1c, Func Offset: 0x10c
	// Line 667, Address: 0x1bae20, Func Offset: 0x110
	// Line 668, Address: 0x1bae24, Func Offset: 0x114
	// Line 672, Address: 0x1bae28, Func Offset: 0x118
	// Line 673, Address: 0x1bae2c, Func Offset: 0x11c
	// Func End, Address: 0x1bae44, Func Offset: 0x134
}

// 
// Start address: 0x1bae50
int ___fsSubCmdHd1stFixFile(fsFile* fp)
{
	// Line 689, Address: 0x1bae50, Func Offset: 0
	// Line 698, Address: 0x1bae58, Func Offset: 0x8
	// Line 699, Address: 0x1bae7c, Func Offset: 0x2c
	// Func End, Address: 0x1bae8c, Func Offset: 0x3c
}

// 
// Start address: 0x1bae90
int ___fsSubCmdHdFixFile(fsFile* fp)
{
	// Line 717, Address: 0x1bae90, Func Offset: 0
	// Line 726, Address: 0x1bae98, Func Offset: 0x8
	// Line 727, Address: 0x1baebc, Func Offset: 0x2c
	// Func End, Address: 0x1baecc, Func Offset: 0x3c
}

// 
// Start address: 0x1baed0
int fsCmdDiskSelectC()
{
	// Line 761, Address: 0x1baed0, Func Offset: 0
	// Line 762, Address: 0x1baee0, Func Offset: 0x10
	// Line 763, Address: 0x1baee4, Func Offset: 0x14
	// Func End, Address: 0x1baeec, Func Offset: 0x1c
}

// 
// Start address: 0x1baef0
int fsCmdDiskSelectCH()
{
	// Line 766, Address: 0x1baef0, Func Offset: 0
	// Line 767, Address: 0x1baf00, Func Offset: 0x10
	// Line 768, Address: 0x1baf04, Func Offset: 0x14
	// Func End, Address: 0x1baf0c, Func Offset: 0x1c
}

// 
// Start address: 0x1baf10
int fsCmdDiskSelectHC()
{
	// Line 771, Address: 0x1baf10, Func Offset: 0
	// Line 772, Address: 0x1baf20, Func Offset: 0x10
	// Line 773, Address: 0x1baf24, Func Offset: 0x14
	// Func End, Address: 0x1baf2c, Func Offset: 0x1c
}

// 
// Start address: 0x1baf30
int fsCmdExecDevSelect(int mode)
{
	// Line 777, Address: 0x1baf30, Func Offset: 0
	// Line 778, Address: 0x1baf38, Func Offset: 0x8
	// Line 779, Address: 0x1baf3c, Func Offset: 0xc
	// Func End, Address: 0x1baf44, Func Offset: 0x14
}

// 
// Start address: 0x1baf50
int ___fsSubCmdFixFile(fsFile* fp)
{
	int ret;
	int(*___fsFunc)(fsFile*);
	int(*funcp)(fsFile*);
	// Line 797, Address: 0x1baf50, Func Offset: 0
	// Line 801, Address: 0x1baf68, Func Offset: 0x18
	// Line 802, Address: 0x1baf6c, Func Offset: 0x1c
	// Line 803, Address: 0x1baf7c, Func Offset: 0x2c
	// Line 804, Address: 0x1baf80, Func Offset: 0x30
	// Line 805, Address: 0x1baf88, Func Offset: 0x38
	// Line 806, Address: 0x1baf90, Func Offset: 0x40
	// Line 807, Address: 0x1bafa0, Func Offset: 0x50
	// Line 808, Address: 0x1bafb4, Func Offset: 0x64
	// Line 809, Address: 0x1bafdc, Func Offset: 0x8c
	// Line 810, Address: 0x1bafec, Func Offset: 0x9c
	// Line 814, Address: 0x1baff4, Func Offset: 0xa4
	// Line 815, Address: 0x1baffc, Func Offset: 0xac
	// Line 816, Address: 0x1bb00c, Func Offset: 0xbc
	// Line 817, Address: 0x1bb014, Func Offset: 0xc4
	// Line 818, Address: 0x1bb024, Func Offset: 0xd4
	// Line 819, Address: 0x1bb028, Func Offset: 0xd8
	// Line 820, Address: 0x1bb030, Func Offset: 0xe0
	// Line 821, Address: 0x1bb058, Func Offset: 0x108
	// Line 822, Address: 0x1bb064, Func Offset: 0x114
	// Line 825, Address: 0x1bb070, Func Offset: 0x120
	// Line 827, Address: 0x1bb074, Func Offset: 0x124
	// Func End, Address: 0x1bb090, Func Offset: 0x140
}

// 
// Start address: 0x1bb090
int fsCmdFixFile(fsFile* fp)
{
	int ret;
	// Line 832, Address: 0x1bb090, Func Offset: 0
	// Line 834, Address: 0x1bb0a0, Func Offset: 0x10
	// Line 835, Address: 0x1bb0a8, Func Offset: 0x18
	// Line 839, Address: 0x1bb0b8, Func Offset: 0x28
	// Line 841, Address: 0x1bb0e8, Func Offset: 0x58
	// Line 851, Address: 0x1bb0f0, Func Offset: 0x60
	// Line 852, Address: 0x1bb0f4, Func Offset: 0x64
	// Func End, Address: 0x1bb108, Func Offset: 0x78
}

// 
// Start address: 0x1bb110
int fsSubCmdCdCheckTrayOpen()
{
	unsigned int traycnt;
	int stat;
	// Line 857, Address: 0x1bb110, Func Offset: 0
	// Line 861, Address: 0x1bb118, Func Offset: 0x8
	// Line 862, Address: 0x1bb120, Func Offset: 0x10
	// Line 863, Address: 0x1bb12c, Func Offset: 0x1c
	// Line 864, Address: 0x1bb138, Func Offset: 0x28
	// Line 866, Address: 0x1bb150, Func Offset: 0x40
	// Line 868, Address: 0x1bb168, Func Offset: 0x58
	// Line 870, Address: 0x1bb170, Func Offset: 0x60
	// Line 872, Address: 0x1bb188, Func Offset: 0x78
	// Line 875, Address: 0x1bb190, Func Offset: 0x80
	// Func End, Address: 0x1bb1a0, Func Offset: 0x90
}

// 
// Start address: 0x1bb1a0
int fsSubCmdCdGetMedia()
{
	int cur_media;
	// Line 886, Address: 0x1bb1a0, Func Offset: 0
	// Line 889, Address: 0x1bb1a8, Func Offset: 0x8
	// Line 892, Address: 0x1bb238, Func Offset: 0x98
	// Line 893, Address: 0x1bb23c, Func Offset: 0x9c
	// Line 895, Address: 0x1bb244, Func Offset: 0xa4
	// Line 896, Address: 0x1bb248, Func Offset: 0xa8
	// Line 898, Address: 0x1bb250, Func Offset: 0xb0
	// Line 899, Address: 0x1bb254, Func Offset: 0xb4
	// Line 902, Address: 0x1bb25c, Func Offset: 0xbc
	// Line 903, Address: 0x1bb260, Func Offset: 0xc0
	// Line 905, Address: 0x1bb268, Func Offset: 0xc8
	// Line 906, Address: 0x1bb26c, Func Offset: 0xcc
	// Line 909, Address: 0x1bb274, Func Offset: 0xd4
	// Line 910, Address: 0x1bb278, Func Offset: 0xd8
	// Line 912, Address: 0x1bb280, Func Offset: 0xe0
	// Line 913, Address: 0x1bb284, Func Offset: 0xe4
	// Line 916, Address: 0x1bb28c, Func Offset: 0xec
	// Line 917, Address: 0x1bb290, Func Offset: 0xf0
	// Line 919, Address: 0x1bb298, Func Offset: 0xf8
	// Line 920, Address: 0x1bb29c, Func Offset: 0xfc
	// Line 922, Address: 0x1bb2a4, Func Offset: 0x104
	// Line 923, Address: 0x1bb2a8, Func Offset: 0x108
	// Line 926, Address: 0x1bb2b0, Func Offset: 0x110
	// Line 930, Address: 0x1bb2b4, Func Offset: 0x114
	// Func End, Address: 0x1bb2c4, Func Offset: 0x124
}

// 
// Start address: 0x1bb2d0
int fsSubCmdCdGetMmode(int media)
{
	int mmode;
	// Line 945, Address: 0x1bb2d0, Func Offset: 0
	// Line 946, Address: 0x1bb2e8, Func Offset: 0x18
	// Line 947, Address: 0x1bb300, Func Offset: 0x30
	// Line 949, Address: 0x1bb304, Func Offset: 0x34
	// Func End, Address: 0x1bb30c, Func Offset: 0x3c
}

// 
// Start address: 0x1bb310
int fsSubCmdCdRead(int lsn, int sectors, void* buf)
{
	int ret;
	_anon0 rmode[1];
	// Line 998, Address: 0x1bb310, Func Offset: 0
	// Line 1017, Address: 0x1bb330, Func Offset: 0x20
	// Line 1020, Address: 0x1bb3cc, Func Offset: 0xbc
	// Line 1034, Address: 0x1bb3d4, Func Offset: 0xc4
	// Line 1035, Address: 0x1bb3d8, Func Offset: 0xc8
	// Line 1050, Address: 0x1bb3e0, Func Offset: 0xd0
	// Line 1051, Address: 0x1bb3e4, Func Offset: 0xd4
	// Line 1056, Address: 0x1bb3ec, Func Offset: 0xdc
	// Line 1063, Address: 0x1bb3f0, Func Offset: 0xe0
	// Line 1070, Address: 0x1bb3f8, Func Offset: 0xe8
	// Line 1072, Address: 0x1bb3fc, Func Offset: 0xec
	// Line 1073, Address: 0x1bb400, Func Offset: 0xf0
	// Line 1074, Address: 0x1bb408, Func Offset: 0xf8
	// Line 1078, Address: 0x1bb414, Func Offset: 0x104
	// Line 1080, Address: 0x1bb420, Func Offset: 0x110
	// Line 1081, Address: 0x1bb428, Func Offset: 0x118
	// Func End, Address: 0x1bb444, Func Offset: 0x134
}

// 
// Start address: 0x1bb450
int fsCmdHdInit(int enable)
{
	// Line 1092, Address: 0x1bb450, Func Offset: 0
	// Line 1093, Address: 0x1bb458, Func Offset: 0x8
	// Line 1094, Address: 0x1bb460, Func Offset: 0x10
	// Line 1095, Address: 0x1bb468, Func Offset: 0x18
	// Line 1098, Address: 0x1bb474, Func Offset: 0x24
	// Line 1099, Address: 0x1bb484, Func Offset: 0x34
	// Line 1100, Address: 0x1bb48c, Func Offset: 0x3c
	// Line 1103, Address: 0x1bb494, Func Offset: 0x44
	// Line 1105, Address: 0x1bb4a4, Func Offset: 0x54
	// Line 1106, Address: 0x1bb4a8, Func Offset: 0x58
	// Func End, Address: 0x1bb4b8, Func Offset: 0x68
}

// 
// Start address: 0x1bb4c0
int strcmp__(char* s, char* t)
{
	// Line 1136, Address: 0x1bb4c0, Func Offset: 0
	// Line 1137, Address: 0x1bb4c8, Func Offset: 0x8
	// Line 1138, Address: 0x1bb4dc, Func Offset: 0x1c
	// Line 1139, Address: 0x1bb4f8, Func Offset: 0x38
	// Line 1140, Address: 0x1bb4fc, Func Offset: 0x3c
	// Func End, Address: 0x1bb504, Func Offset: 0x44
}

// 
// Start address: 0x1bb510
int shHdOpenC(char* fullpath, int mode)
{
	// Line 1146, Address: 0x1bb510, Func Offset: 0
	// Line 1147, Address: 0x1bb528, Func Offset: 0x18
	// Line 1148, Address: 0x1bb550, Func Offset: 0x40
	// Line 1149, Address: 0x1bb560, Func Offset: 0x50
	// Line 1151, Address: 0x1bb570, Func Offset: 0x60
	// Line 1152, Address: 0x1bb588, Func Offset: 0x78
	// Line 1153, Address: 0x1bb590, Func Offset: 0x80
	// Line 1155, Address: 0x1bb5a4, Func Offset: 0x94
	// Line 1156, Address: 0x1bb5ac, Func Offset: 0x9c
	// Func End, Address: 0x1bb5c4, Func Offset: 0xb4
}

// 
// Start address: 0x1bb5d0
int shHdCloseC(int fd)
{
	// Line 1161, Address: 0x1bb5d0, Func Offset: 0
	// Line 1165, Address: 0x1bb5f0, Func Offset: 0x20
	// Func End, Address: 0x1bb5f8, Func Offset: 0x28
}

// 
// Start address: 0x1bb600
int fsSubCmdHdRead0(char* name, int offset, int size, void* buf)
{
	char* readbuf;
	int readsize;
	int remainsize;
	int fd;
	char* fullpath;
	int ret;
	int retry;
	// Line 1170, Address: 0x1bb600, Func Offset: 0
	// Line 1178, Address: 0x1bb63c, Func Offset: 0x3c
	// Line 1194, Address: 0x1bb640, Func Offset: 0x40
	// Line 1198, Address: 0x1bb64c, Func Offset: 0x4c
	// Line 1199, Address: 0x1bb654, Func Offset: 0x54
	// Line 1200, Address: 0x1bb668, Func Offset: 0x68
	// Line 1205, Address: 0x1bb678, Func Offset: 0x78
	// Line 1206, Address: 0x1bb68c, Func Offset: 0x8c
	// Line 1207, Address: 0x1bb694, Func Offset: 0x94
	// Line 1208, Address: 0x1bb698, Func Offset: 0x98
	// Line 1209, Address: 0x1bb69c, Func Offset: 0x9c
	// Line 1211, Address: 0x1bb6a0, Func Offset: 0xa0
	// Line 1212, Address: 0x1bb6a4, Func Offset: 0xa4
	// Line 1215, Address: 0x1bb6c8, Func Offset: 0xc8
	// Line 1216, Address: 0x1bb6d0, Func Offset: 0xd0
	// Line 1217, Address: 0x1bb6d8, Func Offset: 0xd8
	// Line 1218, Address: 0x1bb6e4, Func Offset: 0xe4
	// Line 1220, Address: 0x1bb6e8, Func Offset: 0xe8
	// Line 1221, Address: 0x1bb710, Func Offset: 0x110
	// Line 1222, Address: 0x1bb714, Func Offset: 0x114
	// Line 1223, Address: 0x1bb718, Func Offset: 0x118
	// Line 1232, Address: 0x1bb738, Func Offset: 0x138
	// Line 1233, Address: 0x1bb750, Func Offset: 0x150
	// Line 1236, Address: 0x1bb758, Func Offset: 0x158
	// Line 1237, Address: 0x1bb774, Func Offset: 0x174
	// Line 1238, Address: 0x1bb77c, Func Offset: 0x17c
	// Line 1255, Address: 0x1bb780, Func Offset: 0x180
	// Line 1256, Address: 0x1bb788, Func Offset: 0x188
	// Line 1258, Address: 0x1bb794, Func Offset: 0x194
	// Line 1259, Address: 0x1bb798, Func Offset: 0x198
	// Line 1260, Address: 0x1bb7a0, Func Offset: 0x1a0
	// Line 1264, Address: 0x1bb7a4, Func Offset: 0x1a4
	// Line 1265, Address: 0x1bb7ac, Func Offset: 0x1ac
	// Func End, Address: 0x1bb7e0, Func Offset: 0x1e0
}

// 
// Start address: 0x1bb7e0
int fsSubCmdHdError()
{
	// Line 1274, Address: 0x1bb7e0, Func Offset: 0
	// Line 1275, Address: 0x1bb7e4, Func Offset: 0x4
	// Func End, Address: 0x1bb7ec, Func Offset: 0xc
}

// 
// Start address: 0x1bb7f0
int fsSubCmdRealRead(fsFile* fp, void* buf)
{
	char* name;
	char fullpath[256];
	// Line 1279, Address: 0x1bb7f0, Func Offset: 0
	// Line 1280, Address: 0x1bb808, Func Offset: 0x18
	// Line 1282, Address: 0x1bb818, Func Offset: 0x28
	// Line 1283, Address: 0x1bb834, Func Offset: 0x44
	// Line 1284, Address: 0x1bb840, Func Offset: 0x50
	// Line 1285, Address: 0x1bb854, Func Offset: 0x64
	// Line 1286, Address: 0x1bb888, Func Offset: 0x98
	// Line 1289, Address: 0x1bb898, Func Offset: 0xa8
	// Line 1290, Address: 0x1bb89c, Func Offset: 0xac
	// Line 1291, Address: 0x1bb8a8, Func Offset: 0xb8
	// Line 1293, Address: 0x1bb8bc, Func Offset: 0xcc
	// Line 1296, Address: 0x1bb8c8, Func Offset: 0xd8
	// Line 1298, Address: 0x1bb8dc, Func Offset: 0xec
	// Line 1301, Address: 0x1bb8e8, Func Offset: 0xf8
	// Line 1306, Address: 0x1bb910, Func Offset: 0x120
	// Line 1308, Address: 0x1bb914, Func Offset: 0x124
	// Func End, Address: 0x1bb92c, Func Offset: 0x13c
}

// 
// Start address: 0x1bb930
int fsSubCmdRead(fsFile* fp, void* buf)
{
	fsFile realfp[1];
	int ret;
	// Line 1313, Address: 0x1bb930, Func Offset: 0
	// Line 1317, Address: 0x1bb944, Func Offset: 0x14
	// Line 1319, Address: 0x1bb95c, Func Offset: 0x2c
	// Line 1321, Address: 0x1bb968, Func Offset: 0x38
	// Line 1322, Address: 0x1bb97c, Func Offset: 0x4c
	// Line 1323, Address: 0x1bb994, Func Offset: 0x64
	// Line 1324, Address: 0x1bb998, Func Offset: 0x68
	// Func End, Address: 0x1bb9ac, Func Offset: 0x7c
}

// 
// Start address: 0x1bb9b0
int ___fsCmdRead(fsFile* fp, void* buf)
{
	int ret;
	// Line 1327, Address: 0x1bb9b0, Func Offset: 0
	// Line 1329, Address: 0x1bb9c8, Func Offset: 0x18
	// Line 1331, Address: 0x1bb9d8, Func Offset: 0x28
	// Line 1333, Address: 0x1bb9e4, Func Offset: 0x34
	// Line 1334, Address: 0x1bb9f8, Func Offset: 0x48
	// Line 1336, Address: 0x1bba2c, Func Offset: 0x7c
	// Line 1337, Address: 0x1bba30, Func Offset: 0x80
	// Func End, Address: 0x1bba48, Func Offset: 0x98
}

// 
// Start address: 0x1bba50
int fsCmdRead(fsFile* fp, void* buf)
{
	// Line 1341, Address: 0x1bba50, Func Offset: 0
	// Line 1342, Address: 0x1bba58, Func Offset: 0x8
	// Line 1343, Address: 0x1bba68, Func Offset: 0x18
	// Line 1346, Address: 0x1bba8c, Func Offset: 0x3c
	// Line 1347, Address: 0x1bba94, Func Offset: 0x44
	// Func End, Address: 0x1bbaa4, Func Offset: 0x54
}

// 
// Start address: 0x1bbab0
int fsCmdReadPart(fsFile* fp, void* buf, int offset, int size)
{
	fsFile partfile[1];
	// Line 1350, Address: 0x1bbab0, Func Offset: 0
	// Line 1352, Address: 0x1bbab8, Func Offset: 0x8
	// Line 1353, Address: 0x1bbafc, Func Offset: 0x4c
	// Line 1354, Address: 0x1bbb44, Func Offset: 0x94
	// Line 1355, Address: 0x1bbb4c, Func Offset: 0x9c
	// Line 1356, Address: 0x1bbb50, Func Offset: 0xa0
	// Line 1357, Address: 0x1bbb54, Func Offset: 0xa4
	// Line 1358, Address: 0x1bbb58, Func Offset: 0xa8
	// Line 1359, Address: 0x1bbb64, Func Offset: 0xb4
	// Func End, Address: 0x1bbb74, Func Offset: 0xc4
}

// 
// Start address: 0x1bbb80
int fsCmdSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**))
{
	// Line 1488, Address: 0x1bbb80, Func Offset: 0
	// Line 1489, Address: 0x1bbb88, Func Offset: 0x8
	// Line 1490, Address: 0x1bbb90, Func Offset: 0x10
	// Line 1491, Address: 0x1bbb98, Func Offset: 0x18
	// Line 1492, Address: 0x1bbba0, Func Offset: 0x20
	// Line 1493, Address: 0x1bbba4, Func Offset: 0x24
	// Func End, Address: 0x1bbbac, Func Offset: 0x2c
}

// 
// Start address: 0x1bbbb0
int fsCmdCdCheckDisk(int force_check)
{
	// Line 1496, Address: 0x1bbbb0, Func Offset: 0
	// Line 1497, Address: 0x1bbbb8, Func Offset: 0x8
	// Line 1503, Address: 0x1bbbe0, Func Offset: 0x30
	// Func End, Address: 0x1bbbf0, Func Offset: 0x40
}

// 
// Start address: 0x1bbbf0
int fsCmdCdCheckDisk2(int force_check, int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**))
{
	int number;
	int mmode;
	int open;
	int step;
	int media;
	void* buf;
	void** bufp;
	fsFile* fp;
	fsFile** fpp;
	// Line 1511, Address: 0x1bbbf0, Func Offset: 0
	// Line 1512, Address: 0x1bbc2c, Func Offset: 0x3c
	// Line 1513, Address: 0x1bbc30, Func Offset: 0x40
	// Line 1514, Address: 0x1bbc34, Func Offset: 0x44
	// Line 1515, Address: 0x1bbc38, Func Offset: 0x48
	// Line 1516, Address: 0x1bbc3c, Func Offset: 0x4c
	// Line 1517, Address: 0x1bbc40, Func Offset: 0x50
	// Line 1520, Address: 0x1bbc44, Func Offset: 0x54
	// Line 1521, Address: 0x1bbc4c, Func Offset: 0x5c
	// Line 1537, Address: 0x1bbc50, Func Offset: 0x60
	// Line 1538, Address: 0x1bbc58, Func Offset: 0x68
	// Line 1541, Address: 0x1bbc80, Func Offset: 0x90
	// Line 1543, Address: 0x1bbc8c, Func Offset: 0x9c
	// Line 1544, Address: 0x1bbc94, Func Offset: 0xa4
	// Line 1548, Address: 0x1bbc98, Func Offset: 0xa8
	// Line 1554, Address: 0x1bbca0, Func Offset: 0xb0
	// Line 1556, Address: 0x1bbcac, Func Offset: 0xbc
	// Line 1557, Address: 0x1bbcb4, Func Offset: 0xc4
	// Line 1558, Address: 0x1bbcb8, Func Offset: 0xc8
	// Line 1559, Address: 0x1bbcc4, Func Offset: 0xd4
	// Line 1560, Address: 0x1bbcd0, Func Offset: 0xe0
	// Line 1562, Address: 0x1bbcd8, Func Offset: 0xe8
	// Line 1563, Address: 0x1bbcdc, Func Offset: 0xec
	// Line 1564, Address: 0x1bbcf0, Func Offset: 0x100
	// Line 1565, Address: 0x1bbcfc, Func Offset: 0x10c
	// Line 1566, Address: 0x1bbd08, Func Offset: 0x118
	// Line 1568, Address: 0x1bbd14, Func Offset: 0x124
	// Line 1570, Address: 0x1bbd20, Func Offset: 0x130
	// Line 1571, Address: 0x1bbd2c, Func Offset: 0x13c
	// Line 1572, Address: 0x1bbd38, Func Offset: 0x148
	// Line 1575, Address: 0x1bbd50, Func Offset: 0x160
	// Line 1576, Address: 0x1bbd64, Func Offset: 0x174
	// Line 1577, Address: 0x1bbd7c, Func Offset: 0x18c
	// Line 1579, Address: 0x1bbd98, Func Offset: 0x1a8
	// Line 1580, Address: 0x1bbdac, Func Offset: 0x1bc
	// Line 1581, Address: 0x1bbdb0, Func Offset: 0x1c0
	// Line 1583, Address: 0x1bbdc4, Func Offset: 0x1d4
	// Line 1585, Address: 0x1bbdc8, Func Offset: 0x1d8
	// Line 1587, Address: 0x1bbdd0, Func Offset: 0x1e0
	// Line 1591, Address: 0x1bbdd4, Func Offset: 0x1e4
	// Line 1595, Address: 0x1bbddc, Func Offset: 0x1ec
	// Line 1596, Address: 0x1bbde8, Func Offset: 0x1f8
	// Line 1597, Address: 0x1bbdec, Func Offset: 0x1fc
	// Line 1598, Address: 0x1bbdf4, Func Offset: 0x204
	// Line 1599, Address: 0x1bbe00, Func Offset: 0x210
	// Line 1601, Address: 0x1bbe0c, Func Offset: 0x21c
	// Line 1603, Address: 0x1bbe14, Func Offset: 0x224
	// Line 1605, Address: 0x1bbe20, Func Offset: 0x230
	// Line 1607, Address: 0x1bbe28, Func Offset: 0x238
	// Line 1608, Address: 0x1bbe34, Func Offset: 0x244
	// Line 1610, Address: 0x1bbe3c, Func Offset: 0x24c
	// Line 1611, Address: 0x1bbe48, Func Offset: 0x258
	// Line 1622, Address: 0x1bbe4c, Func Offset: 0x25c
	// Line 1624, Address: 0x1bbe54, Func Offset: 0x264
	// Line 1626, Address: 0x1bbe78, Func Offset: 0x288
	// Line 1627, Address: 0x1bbe7c, Func Offset: 0x28c
	// Line 1629, Address: 0x1bbe84, Func Offset: 0x294
	// Line 1633, Address: 0x1bbe88, Func Offset: 0x298
	// Line 1634, Address: 0x1bbe94, Func Offset: 0x2a4
	// Line 1635, Address: 0x1bbe98, Func Offset: 0x2a8
	// Line 1636, Address: 0x1bbea0, Func Offset: 0x2b0
	// Line 1637, Address: 0x1bbeac, Func Offset: 0x2bc
	// Line 1638, Address: 0x1bbebc, Func Offset: 0x2cc
	// Line 1639, Address: 0x1bbec4, Func Offset: 0x2d4
	// Line 1640, Address: 0x1bbecc, Func Offset: 0x2dc
	// Line 1643, Address: 0x1bbed0, Func Offset: 0x2e0
	// Line 1645, Address: 0x1bbed8, Func Offset: 0x2e8
	// Line 1646, Address: 0x1bbee4, Func Offset: 0x2f4
	// Line 1647, Address: 0x1bbee8, Func Offset: 0x2f8
	// Line 1648, Address: 0x1bbef0, Func Offset: 0x300
	// Line 1650, Address: 0x1bbf0c, Func Offset: 0x31c
	// Line 1651, Address: 0x1bbf24, Func Offset: 0x334
	// Line 1652, Address: 0x1bbf2c, Func Offset: 0x33c
	// Line 1654, Address: 0x1bbf34, Func Offset: 0x344
	// Line 1655, Address: 0x1bbf40, Func Offset: 0x350
	// Line 1657, Address: 0x1bbf4c, Func Offset: 0x35c
	// Line 1658, Address: 0x1bbf54, Func Offset: 0x364
	// Line 1659, Address: 0x1bbf5c, Func Offset: 0x36c
	// Line 1660, Address: 0x1bbf60, Func Offset: 0x370
	// Line 1662, Address: 0x1bbf6c, Func Offset: 0x37c
	// Line 1663, Address: 0x1bbf7c, Func Offset: 0x38c
	// Line 1665, Address: 0x1bbf84, Func Offset: 0x394
	// Line 1666, Address: 0x1bbf8c, Func Offset: 0x39c
	// Line 1667, Address: 0x1bbf90, Func Offset: 0x3a0
	// Line 1669, Address: 0x1bbf98, Func Offset: 0x3a8
	// Line 1674, Address: 0x1bbf9c, Func Offset: 0x3ac
	// Line 1675, Address: 0x1bbfa0, Func Offset: 0x3b0
	// Line 1676, Address: 0x1bbfa8, Func Offset: 0x3b8
	// Line 1682, Address: 0x1bbfb0, Func Offset: 0x3c0
	// Line 1683, Address: 0x1bbfb4, Func Offset: 0x3c4
	// Func End, Address: 0x1bbfe8, Func Offset: 0x3f8
}

// 
// Start address: 0x1bbff0
int fsCmdGetTrayStat()
{
	int step;
	// Line 1697, Address: 0x1bbff0, Func Offset: 0
	// Line 1698, Address: 0x1bbff8, Func Offset: 0x8
	// Line 1701, Address: 0x1bc020, Func Offset: 0x30
	// Line 1704, Address: 0x1bc02c, Func Offset: 0x3c
	// Line 1707, Address: 0x1bc038, Func Offset: 0x48
	// Line 1710, Address: 0x1bc044, Func Offset: 0x54
	// Line 1718, Address: 0x1bc050, Func Offset: 0x60
	// Line 1720, Address: 0x1bc054, Func Offset: 0x64
	// Func End, Address: 0x1bc05c, Func Offset: 0x6c
}

