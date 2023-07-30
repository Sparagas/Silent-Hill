typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct shHdWork;
typedef struct _anon3;
typedef struct shCdWorkT;

typedef void(*type_0)(int);
typedef void(*type_3)(int, unsigned short, void*);

typedef char type_1[16];
typedef unsigned char type_2[8];
typedef char type_4[4112];

struct _anon0
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
	unsigned int flag;
};

struct _anon1
{
	unsigned char trycount;
	unsigned char spindlctrl;
	unsigned char datapattern;
	unsigned char pad;
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

struct shHdWork
{
	int hd_sid;
	int last_fd;
	char* last_filename;
	int last_offset;
	int read_size;
};

struct _anon3
{
	unsigned int epc;
	unsigned int gp;
	unsigned int sp;
	unsigned int dummy;
};

struct shCdWorkT
{
	int wait_sid;
	int exec_sid;
	int cmd_sid;
	int rtc_ok;
};

shCdWorkT shCdWork;
int exec_cnt;
int cmd_cnt;
void(*shCdCallbackFunc)(int);
_anon2 old_rtc;
void(*shCdReadClockRecover)(int, unsigned short, void*);
shHdWork shHdWork;

int WaitExec();
int SignalExec();
int WaitCmd();
int SignalCmd();
int ___shCdMmode(int mmode);
int ___shCdInit(int initmode);
int shCdInit(int initmode, int mmode);
int shCdMmode(int mmode);
int shCdInitR(int initmode, int mmode);
void shCdCallbackFunc();
int shCdInitW(int cb_prio, void* stack, int stack_size);
int shSifInit();
int shSdSifInit();
int shSifSyncIop();
int shSifLoadModule(char* module, int args, char* argp);
int shSifLoadModuleR(char* module, int args, char* argp);
int shSifRebootIop(char* imgfile);
int shSifRebootIopR(char* imgfile);
void checkReadAlign(void* buffer);
int shCdRead(int lsn, int sectors, void* buf, _anon1* mode);
int shCdSeek(int lsn);
int shCdReadW(int lsn, int sectors, void* buf, _anon1* mode);
int shCdSeekW(int lsn);
void shCdReadClockRecover();
int shCdReadClock(_anon2* rtc);
char* name_skip_cdrom0(char* name);
int shCdSearchFile(_anon0* file, char* fullpath);
int ___shCdSearchFile(_anon0* fp, char* name);
int shCdDiskReady(int mode);
int ___shCdDiskReady(int mode);
int shCdGetDiskType();
int shCdTrayReq(int mode, unsigned int* traycnt);
int shCdGetError();
int shCdStatus();
int shCdSync(int mode);
void shCdSdStart();
void shCdSdEnd();
int WaitHd();
int SignalHd();
int shHdInit();
int shHdOpen(char* name, int mode);
int shHdRead(int fd, void* buffer, int size);
int shHdClose(int fd);
int shHdLseek(int fd, int offset, int where);
int ___shHdGetFileSize(char* name);

// 
// Start address: 0x1bcca0
int WaitExec()
{
	int ret;
	// Line 92, Address: 0x1bcca0, Func Offset: 0
	// Line 95, Address: 0x1bcca8, Func Offset: 0x8
	// Line 97, Address: 0x1bcce8, Func Offset: 0x48
	// Line 99, Address: 0x1bccfc, Func Offset: 0x5c
	// Func End, Address: 0x1bcd0c, Func Offset: 0x6c
}

// 
// Start address: 0x1bcd10
int SignalExec()
{
	// Line 102, Address: 0x1bcd10, Func Offset: 0
	// Line 103, Address: 0x1bcd18, Func Offset: 0x8
	// Line 104, Address: 0x1bcd2c, Func Offset: 0x1c
	// Line 105, Address: 0x1bcd3c, Func Offset: 0x2c
	// Func End, Address: 0x1bcd4c, Func Offset: 0x3c
}

// 
// Start address: 0x1bcd50
int WaitCmd()
{
	int ret;
	// Line 108, Address: 0x1bcd50, Func Offset: 0
	// Line 111, Address: 0x1bcd58, Func Offset: 0x8
	// Line 113, Address: 0x1bcd98, Func Offset: 0x48
	// Line 115, Address: 0x1bcdac, Func Offset: 0x5c
	// Func End, Address: 0x1bcdbc, Func Offset: 0x6c
}

// 
// Start address: 0x1bcdc0
int SignalCmd()
{
	// Line 118, Address: 0x1bcdc0, Func Offset: 0
	// Line 119, Address: 0x1bcdc8, Func Offset: 0x8
	// Line 120, Address: 0x1bcddc, Func Offset: 0x1c
	// Line 121, Address: 0x1bcdec, Func Offset: 0x2c
	// Func End, Address: 0x1bcdfc, Func Offset: 0x3c
}

// 
// Start address: 0x1bce00
int ___shCdMmode(int mmode)
{
	// Line 127, Address: 0x1bce00, Func Offset: 0
	// Line 128, Address: 0x1bce10, Func Offset: 0x10
	// Line 129, Address: 0x1bce18, Func Offset: 0x18
	// Line 130, Address: 0x1bce20, Func Offset: 0x20
	// Line 132, Address: 0x1bce2c, Func Offset: 0x2c
	// Line 135, Address: 0x1bceb0, Func Offset: 0xb0
	// Line 136, Address: 0x1bceb4, Func Offset: 0xb4
	// Line 142, Address: 0x1bcebc, Func Offset: 0xbc
	// Line 143, Address: 0x1bcec0, Func Offset: 0xc0
	// Line 149, Address: 0x1bcec8, Func Offset: 0xc8
	// Line 152, Address: 0x1bceec, Func Offset: 0xec
	// Line 153, Address: 0x1bcef4, Func Offset: 0xf4
	// Line 154, Address: 0x1bcf0c, Func Offset: 0x10c
	// Line 155, Address: 0x1bcf14, Func Offset: 0x114
	// Line 156, Address: 0x1bcf18, Func Offset: 0x118
	// Func End, Address: 0x1bcf2c, Func Offset: 0x12c
}

// 
// Start address: 0x1bcf30
int ___shCdInit(int initmode)
{
	int ret;
	// Line 160, Address: 0x1bcf30, Func Offset: 0
	// Line 162, Address: 0x1bcf40, Func Offset: 0x10
	// Line 163, Address: 0x1bcf48, Func Offset: 0x18
	// Line 165, Address: 0x1bcf54, Func Offset: 0x24
	// Line 166, Address: 0x1bcf64, Func Offset: 0x34
	// Line 167, Address: 0x1bcf6c, Func Offset: 0x3c
	// Line 168, Address: 0x1bcf70, Func Offset: 0x40
	// Func End, Address: 0x1bcf84, Func Offset: 0x54
}

// 
// Start address: 0x1bcf90
int shCdInit(int initmode, int mmode)
{
	int ret;
	// Line 171, Address: 0x1bcf90, Func Offset: 0
	// Line 173, Address: 0x1bcfa8, Func Offset: 0x18
	// Line 179, Address: 0x1bcfb0, Func Offset: 0x20
	// Line 180, Address: 0x1bcfc0, Func Offset: 0x30
	// Line 182, Address: 0x1bcfc8, Func Offset: 0x38
	// Line 183, Address: 0x1bcfcc, Func Offset: 0x3c
	// Line 186, Address: 0x1bcfd8, Func Offset: 0x48
	// Line 187, Address: 0x1bcfe0, Func Offset: 0x50
	// Line 188, Address: 0x1bcfe4, Func Offset: 0x54
	// Func End, Address: 0x1bcffc, Func Offset: 0x6c
}

// 
// Start address: 0x1bd000
int shCdMmode(int mmode)
{
	// Line 191, Address: 0x1bd000, Func Offset: 0
	// Line 192, Address: 0x1bd010, Func Offset: 0x10
	// Line 193, Address: 0x1bd018, Func Offset: 0x18
	// Line 194, Address: 0x1bd028, Func Offset: 0x28
	// Line 195, Address: 0x1bd030, Func Offset: 0x30
	// Line 196, Address: 0x1bd034, Func Offset: 0x34
	// Func End, Address: 0x1bd048, Func Offset: 0x48
}

// 
// Start address: 0x1bd050
int shCdInitR(int initmode, int mmode)
{
	int ret;
	// Line 199, Address: 0x1bd050, Func Offset: 0
	// Line 201, Address: 0x1bd068, Func Offset: 0x18
	// Line 203, Address: 0x1bd088, Func Offset: 0x38
	// Func End, Address: 0x1bd0a0, Func Offset: 0x50
}

// 
// Start address: 0x1bd0a0
void shCdCallbackFunc()
{
	// Line 207, Address: 0x1bd0a0, Func Offset: 0
	// Line 208, Address: 0x1bd0a8, Func Offset: 0x8
	// Line 209, Address: 0x1bd0b8, Func Offset: 0x18
	// Func End, Address: 0x1bd0c8, Func Offset: 0x28
}

// 
// Start address: 0x1bd0d0
int shCdInitW(int cb_prio, void* stack, int stack_size)
{
	int ret;
	// Line 212, Address: 0x1bd0d0, Func Offset: 0
	// Line 215, Address: 0x1bd0f0, Func Offset: 0x20
	// Line 216, Address: 0x1bd120, Func Offset: 0x50
	// Line 217, Address: 0x1bd138, Func Offset: 0x68
	// Line 218, Address: 0x1bd148, Func Offset: 0x78
	// Line 222, Address: 0x1bd14c, Func Offset: 0x7c
	// Func End, Address: 0x1bd168, Func Offset: 0x98
}

// 
// Start address: 0x1bd170
int shSifInit()
{
	int ret;
	// Line 225, Address: 0x1bd170, Func Offset: 0
	// Line 227, Address: 0x1bd17c, Func Offset: 0xc
	// Line 228, Address: 0x1bd184, Func Offset: 0x14
	// Line 230, Address: 0x1bd18c, Func Offset: 0x1c
	// Line 231, Address: 0x1bd198, Func Offset: 0x28
	// Line 232, Address: 0x1bd1a0, Func Offset: 0x30
	// Line 234, Address: 0x1bd1ac, Func Offset: 0x3c
	// Line 235, Address: 0x1bd1b4, Func Offset: 0x44
	// Line 236, Address: 0x1bd1bc, Func Offset: 0x4c
	// Line 237, Address: 0x1bd1c0, Func Offset: 0x50
	// Func End, Address: 0x1bd1d4, Func Offset: 0x64
}

// 
// Start address: 0x1bd1e0
int shSdSifInit()
{
	// Line 254, Address: 0x1bd1e0, Func Offset: 0
	// Line 256, Address: 0x1bd1e4, Func Offset: 0x4
	// Func End, Address: 0x1bd1ec, Func Offset: 0xc
}

// 
// Start address: 0x1bd1f0
int shSifSyncIop()
{
	int ret;
	// Line 269, Address: 0x1bd1f0, Func Offset: 0
	// Line 271, Address: 0x1bd1fc, Func Offset: 0xc
	// Line 272, Address: 0x1bd204, Func Offset: 0x14
	// Line 273, Address: 0x1bd20c, Func Offset: 0x1c
	// Line 274, Address: 0x1bd218, Func Offset: 0x28
	// Line 275, Address: 0x1bd220, Func Offset: 0x30
	// Line 276, Address: 0x1bd228, Func Offset: 0x38
	// Line 277, Address: 0x1bd22c, Func Offset: 0x3c
	// Func End, Address: 0x1bd240, Func Offset: 0x50
}

// 
// Start address: 0x1bd240
int shSifLoadModule(char* module, int args, char* argp)
{
	int ret;
	// Line 280, Address: 0x1bd240, Func Offset: 0
	// Line 282, Address: 0x1bd260, Func Offset: 0x20
	// Line 283, Address: 0x1bd268, Func Offset: 0x28
	// Line 284, Address: 0x1bd270, Func Offset: 0x30
	// Line 285, Address: 0x1bd288, Func Offset: 0x48
	// Line 286, Address: 0x1bd290, Func Offset: 0x50
	// Line 287, Address: 0x1bd298, Func Offset: 0x58
	// Line 288, Address: 0x1bd29c, Func Offset: 0x5c
	// Func End, Address: 0x1bd2b8, Func Offset: 0x78
}

// 
// Start address: 0x1bd2c0
int shSifLoadModuleR(char* module, int args, char* argp)
{
	int i;
	int count;
	int ret;
	// Line 291, Address: 0x1bd2c0, Func Offset: 0
	// Line 293, Address: 0x1bd2e8, Func Offset: 0x28
	// Line 295, Address: 0x1bd2ec, Func Offset: 0x2c
	// Line 296, Address: 0x1bd2f4, Func Offset: 0x34
	// Line 298, Address: 0x1bd304, Func Offset: 0x44
	// Line 300, Address: 0x1bd318, Func Offset: 0x58
	// Line 301, Address: 0x1bd31c, Func Offset: 0x5c
	// Line 302, Address: 0x1bd320, Func Offset: 0x60
	// Line 303, Address: 0x1bd350, Func Offset: 0x90
	// Line 306, Address: 0x1bd36c, Func Offset: 0xac
	// Func End, Address: 0x1bd390, Func Offset: 0xd0
}

// 
// Start address: 0x1bd390
int shSifRebootIop(char* imgfile)
{
	int ret;
	// Line 309, Address: 0x1bd390, Func Offset: 0
	// Line 311, Address: 0x1bd3a0, Func Offset: 0x10
	// Line 312, Address: 0x1bd3a8, Func Offset: 0x18
	// Line 313, Address: 0x1bd3b0, Func Offset: 0x20
	// Line 314, Address: 0x1bd3c0, Func Offset: 0x30
	// Line 315, Address: 0x1bd3c8, Func Offset: 0x38
	// Line 316, Address: 0x1bd3d0, Func Offset: 0x40
	// Line 317, Address: 0x1bd3d4, Func Offset: 0x44
	// Func End, Address: 0x1bd3e8, Func Offset: 0x58
}

// 
// Start address: 0x1bd3f0
int shSifRebootIopR(char* imgfile)
{
	int i;
	int i;
	int ret;
	// Line 320, Address: 0x1bd3f0, Func Offset: 0
	// Line 323, Address: 0x1bd408, Func Offset: 0x18
	// Line 326, Address: 0x1bd40c, Func Offset: 0x1c
	// Line 327, Address: 0x1bd414, Func Offset: 0x24
	// Line 329, Address: 0x1bd424, Func Offset: 0x34
	// Line 331, Address: 0x1bd438, Func Offset: 0x48
	// Line 332, Address: 0x1bd43c, Func Offset: 0x4c
	// Line 333, Address: 0x1bd440, Func Offset: 0x50
	// Line 335, Address: 0x1bd470, Func Offset: 0x80
	// Line 336, Address: 0x1bd484, Func Offset: 0x94
	// Line 337, Address: 0x1bd488, Func Offset: 0x98
	// Line 338, Address: 0x1bd490, Func Offset: 0xa0
	// Line 340, Address: 0x1bd4a0, Func Offset: 0xb0
	// Line 342, Address: 0x1bd4b4, Func Offset: 0xc4
	// Line 344, Address: 0x1bd4b8, Func Offset: 0xc8
	// Line 346, Address: 0x1bd4e8, Func Offset: 0xf8
	// Line 352, Address: 0x1bd4f8, Func Offset: 0x108
	// Line 353, Address: 0x1bd4fc, Func Offset: 0x10c
	// Func End, Address: 0x1bd518, Func Offset: 0x128
}

// 
// Start address: 0x1bd520
void checkReadAlign(void* buffer)
{
	// Line 378, Address: 0x1bd520, Func Offset: 0
	// Line 383, Address: 0x1bd52c, Func Offset: 0xc
	// Line 384, Address: 0x1bd538, Func Offset: 0x18
	// Line 385, Address: 0x1bd548, Func Offset: 0x28
	// Line 387, Address: 0x1bd554, Func Offset: 0x34
	// Func End, Address: 0x1bd564, Func Offset: 0x44
}

// 
// Start address: 0x1bd570
int shCdRead(int lsn, int sectors, void* buf, _anon1* mode)
{
	int ret;
	// Line 390, Address: 0x1bd570, Func Offset: 0
	// Line 392, Address: 0x1bd598, Func Offset: 0x28
	// Line 393, Address: 0x1bd5a4, Func Offset: 0x34
	// Line 394, Address: 0x1bd5ac, Func Offset: 0x3c
	// Line 395, Address: 0x1bd5c8, Func Offset: 0x58
	// Line 396, Address: 0x1bd5d0, Func Offset: 0x60
	// Line 397, Address: 0x1bd5d4, Func Offset: 0x64
	// Func End, Address: 0x1bd5f4, Func Offset: 0x84
}

// 
// Start address: 0x1bd600
int shCdSeek(int lsn)
{
	int ret;
	// Line 400, Address: 0x1bd600, Func Offset: 0
	// Line 402, Address: 0x1bd610, Func Offset: 0x10
	// Line 403, Address: 0x1bd618, Func Offset: 0x18
	// Line 404, Address: 0x1bd628, Func Offset: 0x28
	// Line 405, Address: 0x1bd630, Func Offset: 0x30
	// Line 406, Address: 0x1bd634, Func Offset: 0x34
	// Func End, Address: 0x1bd648, Func Offset: 0x48
}

// 
// Start address: 0x1bd650
int shCdReadW(int lsn, int sectors, void* buf, _anon1* mode)
{
	unsigned short hcnt1;
	unsigned short hcnt0;
	int ret;
	// Line 437, Address: 0x1bd650, Func Offset: 0
	// Line 441, Address: 0x1bd684, Func Offset: 0x34
	// Line 442, Address: 0x1bd690, Func Offset: 0x40
	// Line 443, Address: 0x1bd6a4, Func Offset: 0x54
	// Line 445, Address: 0x1bd6ac, Func Offset: 0x5c
	// Line 446, Address: 0x1bd6c4, Func Offset: 0x74
	// Line 450, Address: 0x1bd6d4, Func Offset: 0x84
	// Line 451, Address: 0x1bd6f0, Func Offset: 0xa0
	// Line 456, Address: 0x1bd6f8, Func Offset: 0xa8
	// Line 458, Address: 0x1bd708, Func Offset: 0xb8
	// Line 459, Address: 0x1bd714, Func Offset: 0xc4
	// Line 461, Address: 0x1bd71c, Func Offset: 0xcc
	// Line 462, Address: 0x1bd720, Func Offset: 0xd0
	// Line 464, Address: 0x1bd738, Func Offset: 0xe8
	// Line 465, Address: 0x1bd748, Func Offset: 0xf8
	// Line 467, Address: 0x1bd758, Func Offset: 0x108
	// Line 468, Address: 0x1bd760, Func Offset: 0x110
	// Line 469, Address: 0x1bd768, Func Offset: 0x118
	// Line 470, Address: 0x1bd788, Func Offset: 0x138
	// Line 471, Address: 0x1bd78c, Func Offset: 0x13c
	// Func End, Address: 0x1bd7b8, Func Offset: 0x168
}

// 
// Start address: 0x1bd7c0
int shCdSeekW(int lsn)
{
	unsigned short hcnt1;
	unsigned short hcnt0;
	int ret;
	// Line 474, Address: 0x1bd7c0, Func Offset: 0
	// Line 478, Address: 0x1bd7d8, Func Offset: 0x18
	// Line 479, Address: 0x1bd7e4, Func Offset: 0x24
	// Line 481, Address: 0x1bd7ec, Func Offset: 0x2c
	// Line 482, Address: 0x1bd7fc, Func Offset: 0x3c
	// Line 487, Address: 0x1bd804, Func Offset: 0x44
	// Line 489, Address: 0x1bd814, Func Offset: 0x54
	// Line 490, Address: 0x1bd820, Func Offset: 0x60
	// Line 492, Address: 0x1bd828, Func Offset: 0x68
	// Line 493, Address: 0x1bd82c, Func Offset: 0x6c
	// Line 494, Address: 0x1bd848, Func Offset: 0x88
	// Line 495, Address: 0x1bd850, Func Offset: 0x90
	// Line 496, Address: 0x1bd858, Func Offset: 0x98
	// Line 497, Address: 0x1bd878, Func Offset: 0xb8
	// Line 498, Address: 0x1bd87c, Func Offset: 0xbc
	// Func End, Address: 0x1bd898, Func Offset: 0xd8
}

// 
// Start address: 0x1bd8a0
void shCdReadClockRecover()
{
	// Line 568, Address: 0x1bd8a0, Func Offset: 0
	// Line 569, Address: 0x1bd8ac, Func Offset: 0xc
	// Line 571, Address: 0x1bd8b4, Func Offset: 0x14
	// Func End, Address: 0x1bd8bc, Func Offset: 0x1c
}

// 
// Start address: 0x1bd8c0
int shCdReadClock(_anon2* rtc)
{
	int ret;
	// Line 573, Address: 0x1bd8c0, Func Offset: 0
	// Line 576, Address: 0x1bd8d4, Func Offset: 0x14
	// Line 577, Address: 0x1bd8dc, Func Offset: 0x1c
	// Line 578, Address: 0x1bd8ec, Func Offset: 0x2c
	// Line 579, Address: 0x1bd8f4, Func Offset: 0x34
	// Line 580, Address: 0x1bd904, Func Offset: 0x44
	// Line 582, Address: 0x1bd934, Func Offset: 0x74
	// Line 583, Address: 0x1bd94c, Func Offset: 0x8c
	// Line 584, Address: 0x1bd954, Func Offset: 0x94
	// Line 585, Address: 0x1bd958, Func Offset: 0x98
	// Line 589, Address: 0x1bd988, Func Offset: 0xc8
	// Line 591, Address: 0x1bd990, Func Offset: 0xd0
	// Line 592, Address: 0x1bd994, Func Offset: 0xd4
	// Func End, Address: 0x1bd9ac, Func Offset: 0xec
}

// 
// Start address: 0x1bd9b0
char* name_skip_cdrom0(char* name)
{
	char* ret;
	// Line 617, Address: 0x1bd9b0, Func Offset: 0
	// Line 619, Address: 0x1bd9c0, Func Offset: 0x10
	// Line 620, Address: 0x1bd9c8, Func Offset: 0x18
	// Line 621, Address: 0x1bd9f0, Func Offset: 0x40
	// Line 623, Address: 0x1bda00, Func Offset: 0x50
	// Line 624, Address: 0x1bda04, Func Offset: 0x54
	// Func End, Address: 0x1bda0c, Func Offset: 0x5c
}

// 
// Start address: 0x1bda10
int shCdSearchFile(_anon0* file, char* fullpath)
{
	unsigned short hcnt1;
	unsigned short hcnt0;
	int ret;
	// Line 627, Address: 0x1bda10, Func Offset: 0
	// Line 631, Address: 0x1bda20, Func Offset: 0x10
	// Line 637, Address: 0x1bda2c, Func Offset: 0x1c
	// Line 638, Address: 0x1bda38, Func Offset: 0x28
	// Line 639, Address: 0x1bda40, Func Offset: 0x30
	// Line 640, Address: 0x1bda60, Func Offset: 0x50
	// Line 641, Address: 0x1bda64, Func Offset: 0x54
	// Func End, Address: 0x1bda7c, Func Offset: 0x6c
}

// 
// Start address: 0x1bda80
int ___shCdSearchFile(_anon0* fp, char* name)
{
	int ret;
	// Line 643, Address: 0x1bda80, Func Offset: 0
	// Line 645, Address: 0x1bda98, Func Offset: 0x18
	// Line 646, Address: 0x1bdaa0, Func Offset: 0x20
	// Line 648, Address: 0x1bdaa8, Func Offset: 0x28
	// Line 652, Address: 0x1bdab8, Func Offset: 0x38
	// Line 654, Address: 0x1bdae8, Func Offset: 0x68
	// Line 655, Address: 0x1bdaf0, Func Offset: 0x70
	// Line 656, Address: 0x1bdaf8, Func Offset: 0x78
	// Line 657, Address: 0x1bdafc, Func Offset: 0x7c
	// Func End, Address: 0x1bdb14, Func Offset: 0x94
}

// 
// Start address: 0x1bdb20
int shCdDiskReady(int mode)
{
	int ret;
	// Line 662, Address: 0x1bdb20, Func Offset: 0
	// Line 664, Address: 0x1bdb30, Func Offset: 0x10
	// Line 665, Address: 0x1bdb38, Func Offset: 0x18
	// Line 666, Address: 0x1bdb48, Func Offset: 0x28
	// Line 667, Address: 0x1bdb50, Func Offset: 0x30
	// Line 668, Address: 0x1bdb54, Func Offset: 0x34
	// Func End, Address: 0x1bdb68, Func Offset: 0x48
}

// 
// Start address: 0x1bdb70
int ___shCdDiskReady(int mode)
{
	char* str;
	int ret;
	// Line 671, Address: 0x1bdb70, Func Offset: 0
	// Line 675, Address: 0x1bdb80, Func Offset: 0x10
	// Line 676, Address: 0x1bdb88, Func Offset: 0x18
	// Line 686, Address: 0x1bdb98, Func Offset: 0x28
	// Line 688, Address: 0x1bdba0, Func Offset: 0x30
	// Line 689, Address: 0x1bdba4, Func Offset: 0x34
	// Func End, Address: 0x1bdbb8, Func Offset: 0x48
}

// 
// Start address: 0x1bdbc0
int shCdGetDiskType()
{
	char* str;
	int ret;
	// Line 692, Address: 0x1bdbc0, Func Offset: 0
	// Line 696, Address: 0x1bdbcc, Func Offset: 0xc
	// Line 697, Address: 0x1bdbd4, Func Offset: 0x14
	// Line 698, Address: 0x1bdbdc, Func Offset: 0x1c
	// Line 720, Address: 0x1bdbe8, Func Offset: 0x28
	// Line 721, Address: 0x1bdbf0, Func Offset: 0x30
	// Line 725, Address: 0x1bdbf8, Func Offset: 0x38
	// Line 726, Address: 0x1bdbfc, Func Offset: 0x3c
	// Func End, Address: 0x1bdc10, Func Offset: 0x50
}

// 
// Start address: 0x1bdc10
int shCdTrayReq(int mode, unsigned int* traycnt)
{
	int ret;
	// Line 730, Address: 0x1bdc10, Func Offset: 0
	// Line 732, Address: 0x1bdc28, Func Offset: 0x18
	// Line 733, Address: 0x1bdc30, Func Offset: 0x20
	// Line 734, Address: 0x1bdc38, Func Offset: 0x28
	// Line 735, Address: 0x1bdc4c, Func Offset: 0x3c
	// Line 736, Address: 0x1bdc54, Func Offset: 0x44
	// Line 739, Address: 0x1bdc5c, Func Offset: 0x4c
	// Line 740, Address: 0x1bdc60, Func Offset: 0x50
	// Func End, Address: 0x1bdc78, Func Offset: 0x68
}

// 
// Start address: 0x1bdc80
int shCdGetError()
{
	int error;
	// Line 743, Address: 0x1bdc80, Func Offset: 0
	// Line 745, Address: 0x1bdc8c, Func Offset: 0xc
	// Line 746, Address: 0x1bdc94, Func Offset: 0x14
	// Line 770, Address: 0x1bdca0, Func Offset: 0x20
	// Line 771, Address: 0x1bdca8, Func Offset: 0x28
	// Line 772, Address: 0x1bdcac, Func Offset: 0x2c
	// Func End, Address: 0x1bdcc0, Func Offset: 0x40
}

// 
// Start address: 0x1bdcc0
int shCdStatus()
{
	int stat;
	// Line 775, Address: 0x1bdcc0, Func Offset: 0
	// Line 777, Address: 0x1bdccc, Func Offset: 0xc
	// Line 778, Address: 0x1bdcd4, Func Offset: 0x14
	// Line 779, Address: 0x1bdcdc, Func Offset: 0x1c
	// Line 794, Address: 0x1bdce8, Func Offset: 0x28
	// Line 795, Address: 0x1bdcf0, Func Offset: 0x30
	// Line 796, Address: 0x1bdcf8, Func Offset: 0x38
	// Line 797, Address: 0x1bdcfc, Func Offset: 0x3c
	// Func End, Address: 0x1bdd10, Func Offset: 0x50
}

// 
// Start address: 0x1bdd10
int shCdSync(int mode)
{
	int ret;
	// Line 800, Address: 0x1bdd10, Func Offset: 0
	// Line 802, Address: 0x1bdd20, Func Offset: 0x10
	// Line 803, Address: 0x1bdd28, Func Offset: 0x18
	// Line 804, Address: 0x1bdd38, Func Offset: 0x28
	// Line 805, Address: 0x1bdd40, Func Offset: 0x30
	// Line 806, Address: 0x1bdd44, Func Offset: 0x34
	// Func End, Address: 0x1bdd58, Func Offset: 0x48
}

// 
// Start address: 0x1bdd60
void shCdSdStart()
{
	// Line 837, Address: 0x1bdd60, Func Offset: 0
	// Line 838, Address: 0x1bdd68, Func Offset: 0x8
	// Line 839, Address: 0x1bdd70, Func Offset: 0x10
	// Func End, Address: 0x1bdd80, Func Offset: 0x20
}

// 
// Start address: 0x1bdd80
void shCdSdEnd()
{
	// Line 842, Address: 0x1bdd80, Func Offset: 0
	// Line 846, Address: 0x1bdd88, Func Offset: 0x8
	// Line 847, Address: 0x1bdd90, Func Offset: 0x10
	// Func End, Address: 0x1bdda0, Func Offset: 0x20
}

// 
// Start address: 0x1bdda0
int WaitHd()
{
	int ret;
	// Line 906, Address: 0x1bdda0, Func Offset: 0
	// Line 909, Address: 0x1bdda8, Func Offset: 0x8
	// Line 910, Address: 0x1bddf0, Func Offset: 0x50
	// Line 912, Address: 0x1bde04, Func Offset: 0x64
	// Func End, Address: 0x1bde14, Func Offset: 0x74
}

// 
// Start address: 0x1bde20
int SignalHd()
{
	// Line 915, Address: 0x1bde20, Func Offset: 0
	// Line 916, Address: 0x1bde28, Func Offset: 0x8
	// Line 917, Address: 0x1bde3c, Func Offset: 0x1c
	// Line 918, Address: 0x1bde4c, Func Offset: 0x2c
	// Func End, Address: 0x1bde5c, Func Offset: 0x3c
}

// 
// Start address: 0x1bde60
int shHdInit()
{
	int ret;
	// Line 932, Address: 0x1bde60, Func Offset: 0
	// Line 934, Address: 0x1bde68, Func Offset: 0x8
	// Line 935, Address: 0x1bde70, Func Offset: 0x10
	// Line 936, Address: 0x1bde7c, Func Offset: 0x1c
	// Line 937, Address: 0x1bde84, Func Offset: 0x24
	// Line 938, Address: 0x1bde90, Func Offset: 0x30
	// Line 940, Address: 0x1bde98, Func Offset: 0x38
	// Func End, Address: 0x1bdea8, Func Offset: 0x48
}

// 
// Start address: 0x1bdeb0
int shHdOpen(char* name, int mode)
{
	int ret;
	// Line 943, Address: 0x1bdeb0, Func Offset: 0
	// Line 945, Address: 0x1bdec8, Func Offset: 0x18
	// Line 946, Address: 0x1bded0, Func Offset: 0x20
	// Line 947, Address: 0x1bdef8, Func Offset: 0x48
	// Line 948, Address: 0x1bdf00, Func Offset: 0x50
	// Line 949, Address: 0x1bdf04, Func Offset: 0x54
	// Func End, Address: 0x1bdf1c, Func Offset: 0x6c
}

// 
// Start address: 0x1bdf20
int shHdRead(int fd, void* buffer, int size)
{
	int ret;
	// Line 952, Address: 0x1bdf20, Func Offset: 0
	// Line 954, Address: 0x1bdf40, Func Offset: 0x20
	// Line 955, Address: 0x1bdf4c, Func Offset: 0x2c
	// Line 957, Address: 0x1bdf54, Func Offset: 0x34
	// Line 959, Address: 0x1bdf6c, Func Offset: 0x4c
	// Line 960, Address: 0x1bdf74, Func Offset: 0x54
	// Line 961, Address: 0x1bdf78, Func Offset: 0x58
	// Func End, Address: 0x1bdf94, Func Offset: 0x74
}

// 
// Start address: 0x1bdfa0
int shHdClose(int fd)
{
	int ret;
	// Line 964, Address: 0x1bdfa0, Func Offset: 0
	// Line 966, Address: 0x1bdfb0, Func Offset: 0x10
	// Line 967, Address: 0x1bdfb8, Func Offset: 0x18
	// Line 968, Address: 0x1bdfc8, Func Offset: 0x28
	// Line 969, Address: 0x1bdfd0, Func Offset: 0x30
	// Line 970, Address: 0x1bdfd4, Func Offset: 0x34
	// Func End, Address: 0x1bdfe8, Func Offset: 0x48
}

// 
// Start address: 0x1bdff0
int shHdLseek(int fd, int offset, int where)
{
	int ret;
	// Line 983, Address: 0x1bdff0, Func Offset: 0
	// Line 985, Address: 0x1be010, Func Offset: 0x20
	// Line 986, Address: 0x1be018, Func Offset: 0x28
	// Line 987, Address: 0x1be030, Func Offset: 0x40
	// Line 988, Address: 0x1be038, Func Offset: 0x48
	// Line 989, Address: 0x1be03c, Func Offset: 0x4c
	// Func End, Address: 0x1be058, Func Offset: 0x68
}

// 
// Start address: 0x1be060
int ___shHdGetFileSize(char* name)
{
	int fd;
	int ret;
	// Line 1015, Address: 0x1be060, Func Offset: 0
	// Line 1018, Address: 0x1be074, Func Offset: 0x14
	// Line 1019, Address: 0x1be07c, Func Offset: 0x1c
	// Line 1020, Address: 0x1be084, Func Offset: 0x24
	// Line 1021, Address: 0x1be098, Func Offset: 0x38
	// Line 1022, Address: 0x1be0a0, Func Offset: 0x40
	// Line 1023, Address: 0x1be0b8, Func Offset: 0x58
	// Line 1024, Address: 0x1be0c4, Func Offset: 0x64
	// Line 1025, Address: 0x1be0d0, Func Offset: 0x70
	// Line 1026, Address: 0x1be0d8, Func Offset: 0x78
	// Line 1028, Address: 0x1be0dc, Func Offset: 0x7c
	// Line 1029, Address: 0x1be0e4, Func Offset: 0x84
	// Line 1030, Address: 0x1be0ec, Func Offset: 0x8c
	// Line 1031, Address: 0x1be0f0, Func Offset: 0x90
	// Func End, Address: 0x1be108, Func Offset: 0xa8
}

