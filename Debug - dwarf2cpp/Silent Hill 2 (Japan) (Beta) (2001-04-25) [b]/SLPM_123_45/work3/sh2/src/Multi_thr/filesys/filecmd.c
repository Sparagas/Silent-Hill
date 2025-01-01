typedef union fsFile;
typedef struct _anon0;
typedef struct fsCdFile;
typedef struct fsSubCmdStatT;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;

typedef int(*type_0)(fsFile*);
typedef int(*type_1)(fsFile**, void**);
typedef int(*type_3)(fsFile*);
typedef int(*type_7)(fsFile*);
typedef int(*type_10)(fsFile**, void**);
typedef int(*type_17)(fsFile**, void**);
typedef int(*type_18)(fsFile*);
typedef int(*type_19)(fsFile*);
typedef int(*type_21)(char*, int, int, void*);
typedef int(*type_22)();
typedef int(*type_23)(fsFile*);
typedef int(*type_26)();

typedef int(*type_2)(fsFile*)[5];
typedef int(*type_4)(fsFile*)[5];
typedef fsFile type_5[1];
typedef char type_6[256];
typedef <unknown fundamental type (0xa510)> type_8[6];
typedef _anon2 type_9[1];
typedef fsFile type_11[1];
typedef char type_12[256];
typedef _anon3 type_13[1];
typedef char type_14[256];
typedef char type_15[256];
typedef <unknown fundamental type (0xa510)> type_16[6];
typedef _anon0 type_20[1];
typedef char type_24[16];
typedef int(*type_25)(fsFile*)[2];
typedef unsigned char type_27[8];

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

struct _anon2
{
	unsigned char trycount;
	unsigned char spindlctrl;
	unsigned char datapattern;
	unsigned char pad;
};

struct _anon3
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
};

fsSubCmdStatT fs_stat;
fsFile* err_fp;
int(*_fsSubCmdFixFuncListC)(fsFile*)[2];
int(*_fsSubCmdFixFuncListCH)(fsFile*)[5];
int(*_fsSubCmdFixFuncListHC)(fsFile*)[5];
int(*fsSubCmdHdRead)();
int(*fsSubCmdHdError)();
int(*fsSubCmdHdRead0)(char*, int, int, void*);
int fsCmdParam_media_permission;
fsFile** fsCmdParam_fplist;
void** fsCmdParam_buflist;
int(*fsCmdParam_check_func)(fsFile**, void**);

fsFile* _fsSubCmdCheckCdHdFile(fsFile* fp);
fsFile* _fsSubCmdCheckRootFile(fsFile* fp);
fsFile* _fsSubCmdCheckCdHdFixFile(fsFile* fp);
fsFile* fsCmdCheckFixFile(fsFile* fp);
int _fsSubCmdCheckCdHdExistFile(fsFile* fp);
int fsCmdCheckExistFile(fsFile* fp);
fsFile* fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp);
fsFile* _fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp);
fsFile* fsSubCmdSetRealFile(fsFile* realfp, fsFile* fp);
int fsCmdSetRealFile(fsFile* realfp, fsFile* fp);
int _fsSubCmdCdCommonFixFile(fsFile* fp);
int _fsSubCmdCd1stFixFile(fsFile* fp);
int _fsSubCmdCdFixFile(fsFile* fp);
int _fsSubCmdHdCommonFixFile(fsFile* fp);
int _fsSubCmdHd1stFixFile(fsFile* fp);
int _fsSubCmdHdFixFile(fsFile* fp);
int fsCmdDiskSelectC();
int fsCmdDiskSelectCH();
int fsCmdDiskSelectHC();
int _fsSubCmdFixFile(fsFile* fp);
int fsCmdFixFile(fsFile* fp);
int fsSubCmdCdCheckTrayOpen();
int fsSubCmdCdGetMedia();
int fsSubCmdCdGetMmode(int media);
int fsSubCmdCdRead(int lsn, int sectors, void* buf);
int fsCmdHdInit(int enable);
int fsSubCmdHdRead0(char* name, int offset, int size, void* buf);
int fsSubCmdHdError();
int fsSubCmdRealRead(fsFile* fp, void* buf);
int fsSubCmdRead(fsFile* fp, void* buf);
int fsCmdRead(fsFile* fp, void* buf);
int fsCmdSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**));
int fsCmdCdCheckDisk(int force_check);
int fsCmdCdCheckDisk2(int force_check, int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**));

// 
// Start address: 0x1c3550
fsFile* _fsSubCmdCheckCdHdFile(fsFile* fp)
{
	// Line 41, Address: 0x1c3550, Func Offset: 0
	// Line 46, Address: 0x1c3558, Func Offset: 0x8
	// Line 49, Address: 0x1c3564, Func Offset: 0x14
	// Line 51, Address: 0x1c3570, Func Offset: 0x20
	// Line 54, Address: 0x1c358c, Func Offset: 0x3c
	// Line 56, Address: 0x1c3598, Func Offset: 0x48
	// Line 57, Address: 0x1c35b4, Func Offset: 0x64
	// Line 60, Address: 0x1c35c0, Func Offset: 0x70
	// Line 61, Address: 0x1c35c4, Func Offset: 0x74
	// Func End, Address: 0x1c35d0, Func Offset: 0x80
}

// 
// Start address: 0x1c35d0
fsFile* _fsSubCmdCheckRootFile(fsFile* fp)
{
	int size;
	int offset;
	char* end;
	char* start;
	// Line 105, Address: 0x1c35d0, Func Offset: 0
	// Line 111, Address: 0x1c35e8, Func Offset: 0x18
	// Line 113, Address: 0x1c35f4, Func Offset: 0x24
	// Line 115, Address: 0x1c3610, Func Offset: 0x40
	// Line 123, Address: 0x1c362c, Func Offset: 0x5c
	// Line 124, Address: 0x1c3634, Func Offset: 0x64
	// Line 125, Address: 0x1c363c, Func Offset: 0x6c
	// Line 126, Address: 0x1c3640, Func Offset: 0x70
	// Line 127, Address: 0x1c3644, Func Offset: 0x74
	// Line 128, Address: 0x1c364c, Func Offset: 0x7c
	// Line 129, Address: 0x1c3654, Func Offset: 0x84
	// Line 131, Address: 0x1c3660, Func Offset: 0x90
	// Line 132, Address: 0x1c366c, Func Offset: 0x9c
	// Line 133, Address: 0x1c3674, Func Offset: 0xa4
	// Line 134, Address: 0x1c3678, Func Offset: 0xa8
	// Func End, Address: 0x1c3694, Func Offset: 0xc4
}

// 
// Start address: 0x1c36a0
fsFile* _fsSubCmdCheckCdHdFixFile(fsFile* fp)
{
	// Line 155, Address: 0x1c36a0, Func Offset: 0
	// Line 160, Address: 0x1c36a8, Func Offset: 0x8
	// Line 162, Address: 0x1c36c4, Func Offset: 0x24
	// Line 168, Address: 0x1c3708, Func Offset: 0x68
	// Line 170, Address: 0x1c371c, Func Offset: 0x7c
	// Line 176, Address: 0x1c3790, Func Offset: 0xf0
	// Line 177, Address: 0x1c37a8, Func Offset: 0x108
	// Line 181, Address: 0x1c37b4, Func Offset: 0x114
	// Line 183, Address: 0x1c37c0, Func Offset: 0x120
	// Line 185, Address: 0x1c37c8, Func Offset: 0x128
	// Func End, Address: 0x1c37d4, Func Offset: 0x134
}

// 
// Start address: 0x1c37e0
fsFile* fsCmdCheckFixFile(fsFile* fp)
{
	fsFile* ret;
	// Line 192, Address: 0x1c37e0, Func Offset: 0
	// Line 198, Address: 0x1c37f0, Func Offset: 0x10
	// Line 199, Address: 0x1c37f8, Func Offset: 0x18
	// Line 200, Address: 0x1c3808, Func Offset: 0x28
	// Line 201, Address: 0x1c381c, Func Offset: 0x3c
	// Line 202, Address: 0x1c3820, Func Offset: 0x40
	// Line 203, Address: 0x1c3828, Func Offset: 0x48
	// Line 205, Address: 0x1c3838, Func Offset: 0x58
	// Line 206, Address: 0x1c3840, Func Offset: 0x60
	// Line 208, Address: 0x1c384c, Func Offset: 0x6c
	// Line 209, Address: 0x1c385c, Func Offset: 0x7c
	// Line 210, Address: 0x1c3860, Func Offset: 0x80
	// Line 211, Address: 0x1c3864, Func Offset: 0x84
	// Func End, Address: 0x1c3878, Func Offset: 0x98
}

// 
// Start address: 0x1c3880
int _fsSubCmdCheckCdHdExistFile(fsFile* fp)
{
	// Line 219, Address: 0x1c3880, Func Offset: 0
	// Line 224, Address: 0x1c388c, Func Offset: 0xc
	// Line 226, Address: 0x1c38a0, Func Offset: 0x20
	// Line 228, Address: 0x1c38ac, Func Offset: 0x2c
	// Line 231, Address: 0x1c38e0, Func Offset: 0x60
	// Line 233, Address: 0x1c38ec, Func Offset: 0x6c
	// Line 236, Address: 0x1c3924, Func Offset: 0xa4
	// Line 239, Address: 0x1c3930, Func Offset: 0xb0
	// Line 240, Address: 0x1c3934, Func Offset: 0xb4
	// Func End, Address: 0x1c3944, Func Offset: 0xc4
}

// 
// Start address: 0x1c3950
int fsCmdCheckExistFile(fsFile* fp)
{
	int ret;
	// Line 246, Address: 0x1c3950, Func Offset: 0
	// Line 252, Address: 0x1c3960, Func Offset: 0x10
	// Line 254, Address: 0x1c3968, Func Offset: 0x18
	// Line 255, Address: 0x1c3978, Func Offset: 0x28
	// Line 256, Address: 0x1c398c, Func Offset: 0x3c
	// Line 257, Address: 0x1c3990, Func Offset: 0x40
	// Line 258, Address: 0x1c3998, Func Offset: 0x48
	// Line 261, Address: 0x1c39a8, Func Offset: 0x58
	// Line 262, Address: 0x1c39b0, Func Offset: 0x60
	// Line 264, Address: 0x1c39bc, Func Offset: 0x6c
	// Line 265, Address: 0x1c39cc, Func Offset: 0x7c
	// Line 266, Address: 0x1c39d0, Func Offset: 0x80
	// Line 267, Address: 0x1c39d4, Func Offset: 0x84
	// Func End, Address: 0x1c39e8, Func Offset: 0x98
}

// 
// Start address: 0x1c39f0
fsFile* fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp)
{
	fsFile* ret;
	// Line 276, Address: 0x1c39f0, Func Offset: 0
	// Line 278, Address: 0x1c3a04, Func Offset: 0x14
	// Line 279, Address: 0x1c3a0c, Func Offset: 0x1c
	// Line 280, Address: 0x1c3a20, Func Offset: 0x30
	// Line 281, Address: 0x1c3a28, Func Offset: 0x38
	// Line 282, Address: 0x1c3a30, Func Offset: 0x40
	// Line 284, Address: 0x1c3a40, Func Offset: 0x50
	// Line 285, Address: 0x1c3a44, Func Offset: 0x54
	// Func End, Address: 0x1c3a58, Func Offset: 0x68
}

// 
// Start address: 0x1c3a60
fsFile* _fsSubCmdSetRealFile0(fsFile* realfp, fsFile* fp)
{
	int psize;
	int poffset;
	int psize;
	int plsn;
	int size;
	int offset;
	fsFile* ret;
	// Line 287, Address: 0x1c3a60, Func Offset: 0
	// Line 297, Address: 0x1c3a8c, Func Offset: 0x2c
	// Line 299, Address: 0x1c3aa0, Func Offset: 0x40
	// Line 301, Address: 0x1c3ab4, Func Offset: 0x54
	// Line 304, Address: 0x1c3ac0, Func Offset: 0x60
	// Line 305, Address: 0x1c3ad0, Func Offset: 0x70
	// Line 307, Address: 0x1c3adc, Func Offset: 0x7c
	// Line 311, Address: 0x1c3afc, Func Offset: 0x9c
	// Line 312, Address: 0x1c3b14, Func Offset: 0xb4
	// Line 314, Address: 0x1c3b1c, Func Offset: 0xbc
	// Line 317, Address: 0x1c3b28, Func Offset: 0xc8
	// Line 318, Address: 0x1c3b4c, Func Offset: 0xec
	// Line 320, Address: 0x1c3b54, Func Offset: 0xf4
	// Line 326, Address: 0x1c3b88, Func Offset: 0x128
	// Line 327, Address: 0x1c3b90, Func Offset: 0x130
	// Line 328, Address: 0x1c3b98, Func Offset: 0x138
	// Line 329, Address: 0x1c3ba4, Func Offset: 0x144
	// Line 330, Address: 0x1c3ba8, Func Offset: 0x148
	// Line 331, Address: 0x1c3bc0, Func Offset: 0x160
	// Line 333, Address: 0x1c3bc4, Func Offset: 0x164
	// Line 334, Address: 0x1c3be8, Func Offset: 0x188
	// Line 335, Address: 0x1c3bf0, Func Offset: 0x190
	// Line 338, Address: 0x1c3bfc, Func Offset: 0x19c
	// Line 344, Address: 0x1c3c18, Func Offset: 0x1b8
	// Line 345, Address: 0x1c3c20, Func Offset: 0x1c0
	// Line 346, Address: 0x1c3c28, Func Offset: 0x1c8
	// Line 347, Address: 0x1c3c34, Func Offset: 0x1d4
	// Line 348, Address: 0x1c3c38, Func Offset: 0x1d8
	// Line 349, Address: 0x1c3c50, Func Offset: 0x1f0
	// Line 351, Address: 0x1c3c54, Func Offset: 0x1f4
	// Line 352, Address: 0x1c3c60, Func Offset: 0x200
	// Line 353, Address: 0x1c3c68, Func Offset: 0x208
	// Line 357, Address: 0x1c3c74, Func Offset: 0x214
	// Line 362, Address: 0x1c3c80, Func Offset: 0x220
	// Line 364, Address: 0x1c3c88, Func Offset: 0x228
	// Func End, Address: 0x1c3cb4, Func Offset: 0x254
}

// 
// Start address: 0x1c3cc0
fsFile* fsSubCmdSetRealFile(fsFile* realfp, fsFile* fp)
{
	int err;
	fsFile* ret;
	// Line 367, Address: 0x1c3cc0, Func Offset: 0
	// Line 374, Address: 0x1c3cd8, Func Offset: 0x18
	// Line 376, Address: 0x1c3ce0, Func Offset: 0x20
	// Line 377, Address: 0x1c3cf0, Func Offset: 0x30
	// Line 378, Address: 0x1c3d04, Func Offset: 0x44
	// Line 380, Address: 0x1c3d0c, Func Offset: 0x4c
	// Line 382, Address: 0x1c3d20, Func Offset: 0x60
	// Line 383, Address: 0x1c3d28, Func Offset: 0x68
	// Line 385, Address: 0x1c3d30, Func Offset: 0x70
	// Line 387, Address: 0x1c3d40, Func Offset: 0x80
	// Line 388, Address: 0x1c3d44, Func Offset: 0x84
	// Func End, Address: 0x1c3d5c, Func Offset: 0x9c
}

// 
// Start address: 0x1c3d60
int fsCmdSetRealFile(fsFile* realfp, fsFile* fp)
{
	// Line 391, Address: 0x1c3d60, Func Offset: 0
	// Line 392, Address: 0x1c3d70, Func Offset: 0x10
	// Line 393, Address: 0x1c3d88, Func Offset: 0x28
	// Func End, Address: 0x1c3d98, Func Offset: 0x38
}

// 
// Start address: 0x1c3da0
int _fsSubCmdCdCommonFixFile(fsFile* fp)
{
	int _ret;
	char fullpath[256];
	_anon3 file[1];
	// Line 492, Address: 0x1c3da0, Func Offset: 0
	// Line 499, Address: 0x1c3db0, Func Offset: 0x10
	// Line 500, Address: 0x1c3dcc, Func Offset: 0x2c
	// Line 501, Address: 0x1c3dd0, Func Offset: 0x30
	// Line 506, Address: 0x1c3dd8, Func Offset: 0x38
	// Line 507, Address: 0x1c3ddc, Func Offset: 0x3c
	// Line 508, Address: 0x1c3df8, Func Offset: 0x58
	// Line 509, Address: 0x1c3e18, Func Offset: 0x78
	// Line 510, Address: 0x1c3e20, Func Offset: 0x80
	// Line 513, Address: 0x1c3e40, Func Offset: 0xa0
	// Line 515, Address: 0x1c3e48, Func Offset: 0xa8
	// Line 518, Address: 0x1c3e5c, Func Offset: 0xbc
	// Line 521, Address: 0x1c3e64, Func Offset: 0xc4
	// Line 522, Address: 0x1c3e7c, Func Offset: 0xdc
	// Line 523, Address: 0x1c3ea8, Func Offset: 0x108
	// Line 526, Address: 0x1c3eac, Func Offset: 0x10c
	// Line 529, Address: 0x1c3eb4, Func Offset: 0x114
	// Line 531, Address: 0x1c3ec8, Func Offset: 0x128
	// Line 532, Address: 0x1c3edc, Func Offset: 0x13c
	// Line 533, Address: 0x1c3f10, Func Offset: 0x170
	// Line 534, Address: 0x1c3f1c, Func Offset: 0x17c
	// Line 535, Address: 0x1c3f28, Func Offset: 0x188
	// Line 538, Address: 0x1c3f2c, Func Offset: 0x18c
	// Line 540, Address: 0x1c3f30, Func Offset: 0x190
	// Func End, Address: 0x1c3f44, Func Offset: 0x1a4
}

// 
// Start address: 0x1c3f50
int _fsSubCmdCd1stFixFile(fsFile* fp)
{
	// Line 558, Address: 0x1c3f50, Func Offset: 0
	// Line 559, Address: 0x1c3f5c, Func Offset: 0xc
	// Line 562, Address: 0x1c3f78, Func Offset: 0x28
	// Line 564, Address: 0x1c3f8c, Func Offset: 0x3c
	// Line 566, Address: 0x1c3f90, Func Offset: 0x40
	// Func End, Address: 0x1c3fa0, Func Offset: 0x50
}

// 
// Start address: 0x1c3fa0
int _fsSubCmdCdFixFile(fsFile* fp)
{
	// Line 583, Address: 0x1c3fa0, Func Offset: 0
	// Line 584, Address: 0x1c3fac, Func Offset: 0xc
	// Line 587, Address: 0x1c3fc8, Func Offset: 0x28
	// Line 589, Address: 0x1c3fdc, Func Offset: 0x3c
	// Line 591, Address: 0x1c3fe0, Func Offset: 0x40
	// Func End, Address: 0x1c3ff0, Func Offset: 0x50
}

// 
// Start address: 0x1c3ff0
int _fsSubCmdHdCommonFixFile(fsFile* fp)
{
	int _ret;
	char fullpath[256];
	int size;
	// Line 609, Address: 0x1c3ff0, Func Offset: 0
	// Line 616, Address: 0x1c4004, Func Offset: 0x14
	// Line 617, Address: 0x1c4020, Func Offset: 0x30
	// Line 618, Address: 0x1c4024, Func Offset: 0x34
	// Line 623, Address: 0x1c402c, Func Offset: 0x3c
	// Line 624, Address: 0x1c4030, Func Offset: 0x40
	// Line 625, Address: 0x1c404c, Func Offset: 0x5c
	// Line 626, Address: 0x1c406c, Func Offset: 0x7c
	// Line 627, Address: 0x1c4074, Func Offset: 0x84
	// Line 630, Address: 0x1c4094, Func Offset: 0xa4
	// Line 632, Address: 0x1c409c, Func Offset: 0xac
	// Line 633, Address: 0x1c40b4, Func Offset: 0xc4
	// Line 634, Address: 0x1c40c8, Func Offset: 0xd8
	// Line 635, Address: 0x1c40cc, Func Offset: 0xdc
	// Line 637, Address: 0x1c40d4, Func Offset: 0xe4
	// Line 638, Address: 0x1c4100, Func Offset: 0x110
	// Line 639, Address: 0x1c4118, Func Offset: 0x128
	// Line 640, Address: 0x1c4120, Func Offset: 0x130
	// Line 641, Address: 0x1c4128, Func Offset: 0x138
	// Line 645, Address: 0x1c412c, Func Offset: 0x13c
	// Line 647, Address: 0x1c4130, Func Offset: 0x140
	// Func End, Address: 0x1c4148, Func Offset: 0x158
}

// 
// Start address: 0x1c4150
int _fsSubCmdHd1stFixFile(fsFile* fp)
{
	int _ret;
	// Line 664, Address: 0x1c4150, Func Offset: 0
	// Line 666, Address: 0x1c4160, Func Offset: 0x10
	// Line 669, Address: 0x1c417c, Func Offset: 0x2c
	// Line 670, Address: 0x1c418c, Func Offset: 0x3c
	// Line 671, Address: 0x1c4194, Func Offset: 0x44
	// Line 673, Address: 0x1c4198, Func Offset: 0x48
	// Line 675, Address: 0x1c419c, Func Offset: 0x4c
	// Func End, Address: 0x1c41b0, Func Offset: 0x60
}

// 
// Start address: 0x1c41b0
int _fsSubCmdHdFixFile(fsFile* fp)
{
	int _ret;
	// Line 694, Address: 0x1c41b0, Func Offset: 0
	// Line 696, Address: 0x1c41c0, Func Offset: 0x10
	// Line 699, Address: 0x1c41dc, Func Offset: 0x2c
	// Line 700, Address: 0x1c41ec, Func Offset: 0x3c
	// Line 701, Address: 0x1c41f4, Func Offset: 0x44
	// Line 703, Address: 0x1c41f8, Func Offset: 0x48
	// Line 705, Address: 0x1c41fc, Func Offset: 0x4c
	// Func End, Address: 0x1c4210, Func Offset: 0x60
}

// 
// Start address: 0x1c4210
int fsCmdDiskSelectC()
{
	// Line 733, Address: 0x1c4210, Func Offset: 0
	// Line 734, Address: 0x1c4220, Func Offset: 0x10
	// Line 735, Address: 0x1c4224, Func Offset: 0x14
	// Func End, Address: 0x1c422c, Func Offset: 0x1c
}

// 
// Start address: 0x1c4230
int fsCmdDiskSelectCH()
{
	// Line 738, Address: 0x1c4230, Func Offset: 0
	// Line 739, Address: 0x1c4240, Func Offset: 0x10
	// Line 740, Address: 0x1c4244, Func Offset: 0x14
	// Func End, Address: 0x1c424c, Func Offset: 0x1c
}

// 
// Start address: 0x1c4250
int fsCmdDiskSelectHC()
{
	// Line 743, Address: 0x1c4250, Func Offset: 0
	// Line 744, Address: 0x1c4260, Func Offset: 0x10
	// Line 745, Address: 0x1c4264, Func Offset: 0x14
	// Func End, Address: 0x1c426c, Func Offset: 0x1c
}

// 
// Start address: 0x1c4270
int _fsSubCmdFixFile(fsFile* fp)
{
	int _ret;
	int(*_fsFunc)(fsFile*);
	int(*funcp)(fsFile*);
	// Line 765, Address: 0x1c4270, Func Offset: 0
	// Line 769, Address: 0x1c4288, Func Offset: 0x18
	// Line 770, Address: 0x1c428c, Func Offset: 0x1c
	// Line 771, Address: 0x1c42a0, Func Offset: 0x30
	// Line 772, Address: 0x1c42a4, Func Offset: 0x34
	// Line 773, Address: 0x1c42ac, Func Offset: 0x3c
	// Line 774, Address: 0x1c42bc, Func Offset: 0x4c
	// Line 775, Address: 0x1c42cc, Func Offset: 0x5c
	// Line 776, Address: 0x1c42d4, Func Offset: 0x64
	// Line 778, Address: 0x1c42e8, Func Offset: 0x78
	// Line 779, Address: 0x1c42f0, Func Offset: 0x80
	// Line 780, Address: 0x1c431c, Func Offset: 0xac
	// Line 781, Address: 0x1c4330, Func Offset: 0xc0
	// Line 784, Address: 0x1c4344, Func Offset: 0xd4
	// Line 787, Address: 0x1c4348, Func Offset: 0xd8
	// Func End, Address: 0x1c4364, Func Offset: 0xf4
}

// 
// Start address: 0x1c4370
int fsCmdFixFile(fsFile* fp)
{
	int ret;
	// Line 792, Address: 0x1c4370, Func Offset: 0
	// Line 794, Address: 0x1c4380, Func Offset: 0x10
	// Line 795, Address: 0x1c4388, Func Offset: 0x18
	// Line 796, Address: 0x1c4398, Func Offset: 0x28
	// Line 797, Address: 0x1c43ac, Func Offset: 0x3c
	// Line 798, Address: 0x1c43b0, Func Offset: 0x40
	// Line 799, Address: 0x1c43b8, Func Offset: 0x48
	// Line 801, Address: 0x1c43c8, Func Offset: 0x58
	// Line 802, Address: 0x1c43d0, Func Offset: 0x60
	// Line 803, Address: 0x1c43d8, Func Offset: 0x68
	// Line 806, Address: 0x1c43e4, Func Offset: 0x74
	// Line 809, Address: 0x1c4410, Func Offset: 0xa0
	// Line 811, Address: 0x1c4420, Func Offset: 0xb0
	// Line 812, Address: 0x1c4424, Func Offset: 0xb4
	// Func End, Address: 0x1c4438, Func Offset: 0xc8
}

// 
// Start address: 0x1c4440
int fsSubCmdCdCheckTrayOpen()
{
	unsigned int traycnt;
	int stat;
	// Line 817, Address: 0x1c4440, Func Offset: 0
	// Line 821, Address: 0x1c444c, Func Offset: 0xc
	// Line 822, Address: 0x1c4454, Func Offset: 0x14
	// Line 823, Address: 0x1c4460, Func Offset: 0x20
	// Line 824, Address: 0x1c446c, Func Offset: 0x2c
	// Line 826, Address: 0x1c4488, Func Offset: 0x48
	// Line 828, Address: 0x1c44a0, Func Offset: 0x60
	// Line 830, Address: 0x1c44ac, Func Offset: 0x6c
	// Line 832, Address: 0x1c44c4, Func Offset: 0x84
	// Line 834, Address: 0x1c44dc, Func Offset: 0x9c
	// Line 835, Address: 0x1c44e0, Func Offset: 0xa0
	// Func End, Address: 0x1c44f4, Func Offset: 0xb4
}

// 
// Start address: 0x1c4500
int fsSubCmdCdGetMedia()
{
	int cur_media;
	// Line 846, Address: 0x1c4500, Func Offset: 0
	// Line 849, Address: 0x1c450c, Func Offset: 0xc
	// Line 852, Address: 0x1c459c, Func Offset: 0x9c
	// Line 853, Address: 0x1c45a0, Func Offset: 0xa0
	// Line 855, Address: 0x1c45a8, Func Offset: 0xa8
	// Line 856, Address: 0x1c45ac, Func Offset: 0xac
	// Line 858, Address: 0x1c45b4, Func Offset: 0xb4
	// Line 859, Address: 0x1c45b8, Func Offset: 0xb8
	// Line 862, Address: 0x1c45c0, Func Offset: 0xc0
	// Line 863, Address: 0x1c45c4, Func Offset: 0xc4
	// Line 865, Address: 0x1c45cc, Func Offset: 0xcc
	// Line 866, Address: 0x1c45d0, Func Offset: 0xd0
	// Line 869, Address: 0x1c45d8, Func Offset: 0xd8
	// Line 870, Address: 0x1c45dc, Func Offset: 0xdc
	// Line 872, Address: 0x1c45e4, Func Offset: 0xe4
	// Line 873, Address: 0x1c45e8, Func Offset: 0xe8
	// Line 876, Address: 0x1c45f0, Func Offset: 0xf0
	// Line 877, Address: 0x1c45f4, Func Offset: 0xf4
	// Line 879, Address: 0x1c45fc, Func Offset: 0xfc
	// Line 880, Address: 0x1c4600, Func Offset: 0x100
	// Line 882, Address: 0x1c4608, Func Offset: 0x108
	// Line 883, Address: 0x1c460c, Func Offset: 0x10c
	// Line 886, Address: 0x1c4614, Func Offset: 0x114
	// Line 889, Address: 0x1c4618, Func Offset: 0x118
	// Line 890, Address: 0x1c461c, Func Offset: 0x11c
	// Func End, Address: 0x1c4630, Func Offset: 0x130
}

// 
// Start address: 0x1c4630
int fsSubCmdCdGetMmode(int media)
{
	int mmode;
	// Line 903, Address: 0x1c4630, Func Offset: 0
	// Line 905, Address: 0x1c463c, Func Offset: 0xc
	// Line 906, Address: 0x1c4658, Func Offset: 0x28
	// Line 907, Address: 0x1c4674, Func Offset: 0x44
	// Line 908, Address: 0x1c4678, Func Offset: 0x48
	// Line 909, Address: 0x1c467c, Func Offset: 0x4c
	// Func End, Address: 0x1c468c, Func Offset: 0x5c
}

// 
// Start address: 0x1c4690
int fsSubCmdCdRead(int lsn, int sectors, void* buf)
{
	int ret;
	int retry;
	_anon2 rmode[1];
	// Line 958, Address: 0x1c4690, Func Offset: 0
	// Line 964, Address: 0x1c46ac, Func Offset: 0x1c
	// Line 967, Address: 0x1c46b0, Func Offset: 0x20
	// Line 968, Address: 0x1c46bc, Func Offset: 0x2c
	// Line 969, Address: 0x1c46dc, Func Offset: 0x4c
	// Line 970, Address: 0x1c46e4, Func Offset: 0x54
	// Line 971, Address: 0x1c46f4, Func Offset: 0x64
	// Line 972, Address: 0x1c46f8, Func Offset: 0x68
	// Line 974, Address: 0x1c475c, Func Offset: 0xcc
	// Line 975, Address: 0x1c4760, Func Offset: 0xd0
	// Line 979, Address: 0x1c4768, Func Offset: 0xd8
	// Line 980, Address: 0x1c477c, Func Offset: 0xec
	// Line 981, Address: 0x1c4780, Func Offset: 0xf0
	// Line 983, Address: 0x1c4788, Func Offset: 0xf8
	// Line 984, Address: 0x1c4798, Func Offset: 0x108
	// Line 985, Address: 0x1c479c, Func Offset: 0x10c
	// Line 989, Address: 0x1c47a4, Func Offset: 0x114
	// Line 991, Address: 0x1c47b8, Func Offset: 0x128
	// Line 992, Address: 0x1c47bc, Func Offset: 0x12c
	// Line 994, Address: 0x1c47c4, Func Offset: 0x134
	// Line 995, Address: 0x1c47d4, Func Offset: 0x144
	// Line 996, Address: 0x1c47d8, Func Offset: 0x148
	// Line 999, Address: 0x1c47e0, Func Offset: 0x150
	// Line 1000, Address: 0x1c47f0, Func Offset: 0x160
	// Line 1001, Address: 0x1c47f4, Func Offset: 0x164
	// Line 1008, Address: 0x1c4800, Func Offset: 0x170
	// Line 1009, Address: 0x1c4814, Func Offset: 0x184
	// Line 1012, Address: 0x1c4818, Func Offset: 0x188
	// Line 1013, Address: 0x1c4820, Func Offset: 0x190
	// Line 1016, Address: 0x1c482c, Func Offset: 0x19c
	// Line 1018, Address: 0x1c4838, Func Offset: 0x1a8
	// Line 1019, Address: 0x1c4840, Func Offset: 0x1b0
	// Func End, Address: 0x1c4858, Func Offset: 0x1c8
}

// 
// Start address: 0x1c4860
int fsCmdHdInit(int enable)
{
	// Line 1030, Address: 0x1c4860, Func Offset: 0
	// Line 1031, Address: 0x1c486c, Func Offset: 0xc
	// Line 1032, Address: 0x1c4878, Func Offset: 0x18
	// Line 1033, Address: 0x1c4880, Func Offset: 0x20
	// Line 1036, Address: 0x1c488c, Func Offset: 0x2c
	// Line 1037, Address: 0x1c489c, Func Offset: 0x3c
	// Line 1038, Address: 0x1c48a4, Func Offset: 0x44
	// Line 1041, Address: 0x1c48ac, Func Offset: 0x4c
	// Line 1043, Address: 0x1c48bc, Func Offset: 0x5c
	// Line 1044, Address: 0x1c48c0, Func Offset: 0x60
	// Func End, Address: 0x1c48d0, Func Offset: 0x70
}

// 
// Start address: 0x1c48d0
int fsSubCmdHdRead0(char* name, int offset, int size, void* buf)
{
	char* readbuf;
	int readsize;
	int remainsize;
	int fd;
	char* fullpath;
	int ret;
	int retry;
	// Line 1074, Address: 0x1c48d0, Func Offset: 0
	// Line 1082, Address: 0x1c4904, Func Offset: 0x34
	// Line 1085, Address: 0x1c4908, Func Offset: 0x38
	// Line 1098, Address: 0x1c4910, Func Offset: 0x40
	// Line 1100, Address: 0x1c491c, Func Offset: 0x4c
	// Line 1101, Address: 0x1c4940, Func Offset: 0x70
	// Line 1103, Address: 0x1c4954, Func Offset: 0x84
	// Line 1104, Address: 0x1c495c, Func Offset: 0x8c
	// Line 1105, Address: 0x1c4960, Func Offset: 0x90
	// Line 1106, Address: 0x1c4964, Func Offset: 0x94
	// Line 1108, Address: 0x1c4968, Func Offset: 0x98
	// Line 1109, Address: 0x1c496c, Func Offset: 0x9c
	// Line 1112, Address: 0x1c4990, Func Offset: 0xc0
	// Line 1113, Address: 0x1c4998, Func Offset: 0xc8
	// Line 1114, Address: 0x1c49a0, Func Offset: 0xd0
	// Line 1115, Address: 0x1c49ac, Func Offset: 0xdc
	// Line 1117, Address: 0x1c49b0, Func Offset: 0xe0
	// Line 1118, Address: 0x1c49d8, Func Offset: 0x108
	// Line 1119, Address: 0x1c49dc, Func Offset: 0x10c
	// Line 1120, Address: 0x1c49e0, Func Offset: 0x110
	// Line 1129, Address: 0x1c4a00, Func Offset: 0x130
	// Line 1130, Address: 0x1c4a18, Func Offset: 0x148
	// Line 1132, Address: 0x1c4a20, Func Offset: 0x150
	// Line 1133, Address: 0x1c4a3c, Func Offset: 0x16c
	// Line 1134, Address: 0x1c4a44, Func Offset: 0x174
	// Line 1146, Address: 0x1c4a48, Func Offset: 0x178
	// Line 1147, Address: 0x1c4a50, Func Offset: 0x180
	// Line 1149, Address: 0x1c4a5c, Func Offset: 0x18c
	// Line 1150, Address: 0x1c4a60, Func Offset: 0x190
	// Line 1151, Address: 0x1c4a68, Func Offset: 0x198
	// Line 1152, Address: 0x1c4a6c, Func Offset: 0x19c
	// Line 1155, Address: 0x1c4a80, Func Offset: 0x1b0
	// Line 1156, Address: 0x1c4a88, Func Offset: 0x1b8
	// Func End, Address: 0x1c4ab4, Func Offset: 0x1e4
}

// 
// Start address: 0x1c4ac0
int fsSubCmdHdError()
{
	// Line 1159, Address: 0x1c4ac0, Func Offset: 0
	// Line 1164, Address: 0x1c4ac8, Func Offset: 0x8
	// Line 1165, Address: 0x1c4ad8, Func Offset: 0x18
	// Line 1166, Address: 0x1c4adc, Func Offset: 0x1c
	// Func End, Address: 0x1c4aec, Func Offset: 0x2c
}

// 
// Start address: 0x1c4af0
int fsSubCmdRealRead(fsFile* fp, void* buf)
{
	char* name;
	char fullpath[256];
	// Line 1171, Address: 0x1c4af0, Func Offset: 0
	// Line 1172, Address: 0x1c4b04, Func Offset: 0x14
	// Line 1173, Address: 0x1c4b1c, Func Offset: 0x2c
	// Line 1174, Address: 0x1c4b5c, Func Offset: 0x6c
	// Line 1178, Address: 0x1c4b78, Func Offset: 0x88
	// Line 1179, Address: 0x1c4b80, Func Offset: 0x90
	// Line 1180, Address: 0x1c4b9c, Func Offset: 0xac
	// Line 1181, Address: 0x1c4bb4, Func Offset: 0xc4
	// Line 1182, Address: 0x1c4bcc, Func Offset: 0xdc
	// Line 1185, Address: 0x1c4bd8, Func Offset: 0xe8
	// Line 1186, Address: 0x1c4bf0, Func Offset: 0x100
	// Line 1187, Address: 0x1c4c08, Func Offset: 0x118
	// Line 1190, Address: 0x1c4c14, Func Offset: 0x124
	// Line 1195, Address: 0x1c4c44, Func Offset: 0x154
	// Line 1197, Address: 0x1c4c48, Func Offset: 0x158
	// Func End, Address: 0x1c4c5c, Func Offset: 0x16c
}

// 
// Start address: 0x1c4c60
int fsSubCmdRead(fsFile* fp, void* buf)
{
	fsFile realfp[1];
	int ret;
	// Line 1202, Address: 0x1c4c60, Func Offset: 0
	// Line 1206, Address: 0x1c4c74, Func Offset: 0x14
	// Line 1208, Address: 0x1c4c8c, Func Offset: 0x2c
	// Line 1210, Address: 0x1c4c98, Func Offset: 0x38
	// Line 1211, Address: 0x1c4cac, Func Offset: 0x4c
	// Line 1212, Address: 0x1c4cc0, Func Offset: 0x60
	// Line 1213, Address: 0x1c4cc4, Func Offset: 0x64
	// Func End, Address: 0x1c4cd8, Func Offset: 0x78
}

// 
// Start address: 0x1c4ce0
int fsCmdRead(fsFile* fp, void* buf)
{
	int ret;
	// Line 1218, Address: 0x1c4ce0, Func Offset: 0
	// Line 1220, Address: 0x1c4cf8, Func Offset: 0x18
	// Line 1222, Address: 0x1c4d0c, Func Offset: 0x2c
	// Line 1224, Address: 0x1c4d18, Func Offset: 0x38
	// Line 1225, Address: 0x1c4d2c, Func Offset: 0x4c
	// Line 1227, Address: 0x1c4d60, Func Offset: 0x80
	// Line 1228, Address: 0x1c4d64, Func Offset: 0x84
	// Func End, Address: 0x1c4d7c, Func Offset: 0x9c
}

// 
// Start address: 0x1c4d80
int fsCmdSetParamForCheckDisk(int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**))
{
	// Line 1357, Address: 0x1c4d80, Func Offset: 0
	// Line 1358, Address: 0x1c4d94, Func Offset: 0x14
	// Line 1359, Address: 0x1c4da0, Func Offset: 0x20
	// Line 1360, Address: 0x1c4dac, Func Offset: 0x2c
	// Line 1361, Address: 0x1c4db8, Func Offset: 0x38
	// Line 1362, Address: 0x1c4dc4, Func Offset: 0x44
	// Line 1363, Address: 0x1c4dc8, Func Offset: 0x48
	// Func End, Address: 0x1c4dd4, Func Offset: 0x54
}

// 
// Start address: 0x1c4de0
int fsCmdCdCheckDisk(int force_check)
{
	// Line 1366, Address: 0x1c4de0, Func Offset: 0
	// Line 1367, Address: 0x1c4dec, Func Offset: 0xc
	// Line 1373, Address: 0x1c4e18, Func Offset: 0x38
	// Func End, Address: 0x1c4e28, Func Offset: 0x48
}

// 
// Start address: 0x1c4e30
int fsCmdCdCheckDisk2(int force_check, int media_permission, fsFile** fplist, void** buflist, int(*check_func)(fsFile**, void**))
{
	int number;
	int mmode;
	_anon0 rtc[1];
	int open;
	int step;
	int media;
	void* buf;
	void** bufp;
	fsFile* fp;
	fsFile** fpp;
	// Line 1381, Address: 0x1c4e30, Func Offset: 0
	// Line 1382, Address: 0x1c4e70, Func Offset: 0x40
	// Line 1383, Address: 0x1c4e74, Func Offset: 0x44
	// Line 1384, Address: 0x1c4e78, Func Offset: 0x48
	// Line 1385, Address: 0x1c4e7c, Func Offset: 0x4c
	// Line 1386, Address: 0x1c4e80, Func Offset: 0x50
	// Line 1387, Address: 0x1c4e84, Func Offset: 0x54
	// Line 1390, Address: 0x1c4e88, Func Offset: 0x58
	// Line 1391, Address: 0x1c4e94, Func Offset: 0x64
	// Line 1393, Address: 0x1c4e98, Func Offset: 0x68
	// Line 1394, Address: 0x1c4ea4, Func Offset: 0x74
	// Line 1407, Address: 0x1c4ef4, Func Offset: 0xc4
	// Line 1408, Address: 0x1c4f00, Func Offset: 0xd0
	// Line 1411, Address: 0x1c4f28, Func Offset: 0xf8
	// Line 1413, Address: 0x1c4f34, Func Offset: 0x104
	// Line 1414, Address: 0x1c4f3c, Func Offset: 0x10c
	// Line 1418, Address: 0x1c4f40, Func Offset: 0x110
	// Line 1424, Address: 0x1c4f48, Func Offset: 0x118
	// Line 1426, Address: 0x1c4f54, Func Offset: 0x124
	// Line 1427, Address: 0x1c4f5c, Func Offset: 0x12c
	// Line 1428, Address: 0x1c4f60, Func Offset: 0x130
	// Line 1429, Address: 0x1c4f6c, Func Offset: 0x13c
	// Line 1430, Address: 0x1c4f78, Func Offset: 0x148
	// Line 1432, Address: 0x1c4f80, Func Offset: 0x150
	// Line 1433, Address: 0x1c4f84, Func Offset: 0x154
	// Line 1434, Address: 0x1c4f9c, Func Offset: 0x16c
	// Line 1435, Address: 0x1c4fa8, Func Offset: 0x178
	// Line 1436, Address: 0x1c4fb4, Func Offset: 0x184
	// Line 1438, Address: 0x1c4fc0, Func Offset: 0x190
	// Line 1440, Address: 0x1c4fcc, Func Offset: 0x19c
	// Line 1441, Address: 0x1c4fd8, Func Offset: 0x1a8
	// Line 1442, Address: 0x1c4fe4, Func Offset: 0x1b4
	// Line 1445, Address: 0x1c4ffc, Func Offset: 0x1cc
	// Line 1446, Address: 0x1c5010, Func Offset: 0x1e0
	// Line 1447, Address: 0x1c5028, Func Offset: 0x1f8
	// Line 1449, Address: 0x1c5050, Func Offset: 0x220
	// Line 1450, Address: 0x1c5064, Func Offset: 0x234
	// Line 1451, Address: 0x1c5068, Func Offset: 0x238
	// Line 1453, Address: 0x1c507c, Func Offset: 0x24c
	// Line 1454, Address: 0x1c5080, Func Offset: 0x250
	// Line 1455, Address: 0x1c5090, Func Offset: 0x260
	// Line 1457, Address: 0x1c5098, Func Offset: 0x268
	// Line 1458, Address: 0x1c509c, Func Offset: 0x26c
	// Line 1461, Address: 0x1c50ac, Func Offset: 0x27c
	// Line 1465, Address: 0x1c50b4, Func Offset: 0x284
	// Line 1466, Address: 0x1c50c0, Func Offset: 0x290
	// Line 1467, Address: 0x1c50c4, Func Offset: 0x294
	// Line 1468, Address: 0x1c50cc, Func Offset: 0x29c
	// Line 1469, Address: 0x1c50d8, Func Offset: 0x2a8
	// Line 1471, Address: 0x1c50e4, Func Offset: 0x2b4
	// Line 1473, Address: 0x1c50ec, Func Offset: 0x2bc
	// Line 1474, Address: 0x1c50f8, Func Offset: 0x2c8
	// Line 1475, Address: 0x1c50fc, Func Offset: 0x2cc
	// Line 1477, Address: 0x1c5104, Func Offset: 0x2d4
	// Line 1478, Address: 0x1c5114, Func Offset: 0x2e4
	// Line 1479, Address: 0x1c512c, Func Offset: 0x2fc
	// Line 1480, Address: 0x1c5130, Func Offset: 0x300
	// Line 1481, Address: 0x1c5138, Func Offset: 0x308
	// Line 1482, Address: 0x1c5144, Func Offset: 0x314
	// Line 1485, Address: 0x1c5150, Func Offset: 0x320
	// Line 1487, Address: 0x1c5158, Func Offset: 0x328
	// Line 1489, Address: 0x1c5180, Func Offset: 0x350
	// Line 1490, Address: 0x1c5184, Func Offset: 0x354
	// Line 1492, Address: 0x1c518c, Func Offset: 0x35c
	// Line 1496, Address: 0x1c5190, Func Offset: 0x360
	// Line 1497, Address: 0x1c519c, Func Offset: 0x36c
	// Line 1498, Address: 0x1c51a0, Func Offset: 0x370
	// Line 1499, Address: 0x1c51a8, Func Offset: 0x378
	// Line 1500, Address: 0x1c51b4, Func Offset: 0x384
	// Line 1501, Address: 0x1c51c4, Func Offset: 0x394
	// Line 1502, Address: 0x1c51cc, Func Offset: 0x39c
	// Line 1503, Address: 0x1c51d4, Func Offset: 0x3a4
	// Line 1506, Address: 0x1c51d8, Func Offset: 0x3a8
	// Line 1508, Address: 0x1c51e0, Func Offset: 0x3b0
	// Line 1509, Address: 0x1c51ec, Func Offset: 0x3bc
	// Line 1510, Address: 0x1c51f0, Func Offset: 0x3c0
	// Line 1511, Address: 0x1c51f8, Func Offset: 0x3c8
	// Line 1513, Address: 0x1c5214, Func Offset: 0x3e4
	// Line 1514, Address: 0x1c522c, Func Offset: 0x3fc
	// Line 1515, Address: 0x1c5234, Func Offset: 0x404
	// Line 1517, Address: 0x1c523c, Func Offset: 0x40c
	// Line 1518, Address: 0x1c5248, Func Offset: 0x418
	// Line 1520, Address: 0x1c5254, Func Offset: 0x424
	// Line 1521, Address: 0x1c525c, Func Offset: 0x42c
	// Line 1522, Address: 0x1c5264, Func Offset: 0x434
	// Line 1523, Address: 0x1c5268, Func Offset: 0x438
	// Line 1525, Address: 0x1c5274, Func Offset: 0x444
	// Line 1526, Address: 0x1c528c, Func Offset: 0x45c
	// Line 1528, Address: 0x1c5294, Func Offset: 0x464
	// Line 1529, Address: 0x1c529c, Func Offset: 0x46c
	// Line 1530, Address: 0x1c52a0, Func Offset: 0x470
	// Line 1532, Address: 0x1c52a8, Func Offset: 0x478
	// Line 1537, Address: 0x1c52ac, Func Offset: 0x47c
	// Line 1538, Address: 0x1c52b0, Func Offset: 0x480
	// Line 1539, Address: 0x1c52b8, Func Offset: 0x488
	// Line 1545, Address: 0x1c52c0, Func Offset: 0x490
	// Line 1546, Address: 0x1c52c4, Func Offset: 0x494
	// Func End, Address: 0x1c52f8, Func Offset: 0x4c8
}

