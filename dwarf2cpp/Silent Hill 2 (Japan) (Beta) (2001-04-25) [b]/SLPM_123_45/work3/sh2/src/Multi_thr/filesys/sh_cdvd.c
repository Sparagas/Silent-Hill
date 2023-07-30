typedef struct shHdWork;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shCdWorkT;

typedef void(*type_0)(int, unsigned short, void*);
typedef void(*type_1)(int);

typedef char type_2[16];
typedef unsigned char type_3[8];
typedef char type_4[4112];

struct shHdWork
{
	int hd_sid;
	int last_fd;
	char* last_filename;
	int last_offset;
	int read_size;
};

struct _anon0
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
};

struct _anon1
{
	unsigned int epc;
	unsigned int gp;
	unsigned int sp;
	unsigned int dummy;
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
	unsigned char stat;
	unsigned char second;
	unsigned char minute;
	unsigned char hour;
	unsigned char pad;
	unsigned char day;
	unsigned char month;
	unsigned char year;
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
int cd_init_try;
void(*shCdCallbackFunc)(int);
int execEnv_skip_load_iop_mod;
void(*shCdReadClockRecover)(int, unsigned short, void*);
shHdWork shHdWork;

int WaitExec();
int SignalExec();
int WaitCmd();
int SignalCmd();
void shCdCallbackFunc();
int shCdInitW(int cb_prio, void* stack, int stack_size);
int shSifInit(int cdinitmode, int mmode);
int shSifSyncIop();
int shSifLoadModule(char* module, int args, char* argp);
int shSifLoadModuleR(char* module, int args, char* argp);
int shSifRebootIop(char* imgfile);
int shSifRebootIopR(char* imgfile);
void checkReadAlign(void* buffer);
int shCdRead(int lsn, int sectors, void* buf, _anon2* mode);
int shCdSeek(int lsn);
int shCdReadW(int lsn, int sectors, void* buf, _anon2* mode);
int shCdSeekW(int lsn);
void shCdReadClockRecover();
int shCdReadClock(_anon3* rtc);
char* name_skip_cdrom0(char* name);
int shCdSearchFile(_anon0* file, char* fullpath);
int _shCdSearchFile(_anon0* fp, char* name);
int shCdDiskReady(int mode);
int _shCdDiskReady(int mode);
int shCdGetDiskType();
int shCdTrayReq(int mode, unsigned int* traycnt);
int shCdGetError();
int shCdStatus();
int shCdSync(int mode);
int shCdMmode(int mmode);
int shHdInit();
int shHdOpen(char* name, int mode);
int shHdRead(int fd, void* buffer, int size);
int shHdClose(int fd);
int shHdLseek(int fd, int offset, int where);
int _shHdGetFileSize(char* name);

// 
// Start address: 0x1c62c0
int WaitExec()
{
	int ret;
	// Line 59, Address: 0x1c62c0, Func Offset: 0
	// Line 61, Address: 0x1c62cc, Func Offset: 0xc
	// Line 62, Address: 0x1c62e0, Func Offset: 0x20
	// Line 63, Address: 0x1c62f4, Func Offset: 0x34
	// Line 64, Address: 0x1c62f8, Func Offset: 0x38
	// Func End, Address: 0x1c630c, Func Offset: 0x4c
}

// 
// Start address: 0x1c6310
int SignalExec()
{
	// Line 67, Address: 0x1c6310, Func Offset: 0
	// Line 68, Address: 0x1c6318, Func Offset: 0x8
	// Line 69, Address: 0x1c632c, Func Offset: 0x1c
	// Line 70, Address: 0x1c633c, Func Offset: 0x2c
	// Func End, Address: 0x1c634c, Func Offset: 0x3c
}

// 
// Start address: 0x1c6350
int WaitCmd()
{
	int ret;
	// Line 73, Address: 0x1c6350, Func Offset: 0
	// Line 75, Address: 0x1c635c, Func Offset: 0xc
	// Line 76, Address: 0x1c6370, Func Offset: 0x20
	// Line 77, Address: 0x1c6384, Func Offset: 0x34
	// Line 78, Address: 0x1c6388, Func Offset: 0x38
	// Func End, Address: 0x1c639c, Func Offset: 0x4c
}

// 
// Start address: 0x1c63a0
int SignalCmd()
{
	// Line 81, Address: 0x1c63a0, Func Offset: 0
	// Line 82, Address: 0x1c63a8, Func Offset: 0x8
	// Line 83, Address: 0x1c63bc, Func Offset: 0x1c
	// Line 84, Address: 0x1c63cc, Func Offset: 0x2c
	// Func End, Address: 0x1c63dc, Func Offset: 0x3c
}

// 
// Start address: 0x1c63e0
void shCdCallbackFunc()
{
	// Line 123, Address: 0x1c63e0, Func Offset: 0
	// Line 124, Address: 0x1c63e8, Func Offset: 0x8
	// Line 125, Address: 0x1c63f8, Func Offset: 0x18
	// Func End, Address: 0x1c6408, Func Offset: 0x28
}

// 
// Start address: 0x1c6410
int shCdInitW(int cb_prio, void* stack, int stack_size)
{
	int ret;
	// Line 128, Address: 0x1c6410, Func Offset: 0
	// Line 131, Address: 0x1c6428, Func Offset: 0x18
	// Line 132, Address: 0x1c645c, Func Offset: 0x4c
	// Line 133, Address: 0x1c6474, Func Offset: 0x64
	// Line 134, Address: 0x1c6484, Func Offset: 0x74
	// Line 138, Address: 0x1c6488, Func Offset: 0x78
	// Func End, Address: 0x1c649c, Func Offset: 0x8c
}

// 
// Start address: 0x1c64a0
int shSifInit(int cdinitmode, int mmode)
{
	int count;
	int ret;
	// Line 141, Address: 0x1c64a0, Func Offset: 0
	// Line 143, Address: 0x1c64b8, Func Offset: 0x18
	// Line 144, Address: 0x1c64bc, Func Offset: 0x1c
	// Line 145, Address: 0x1c64e0, Func Offset: 0x40
	// Line 146, Address: 0x1c6500, Func Offset: 0x60
	// Line 147, Address: 0x1c6524, Func Offset: 0x84
	// Line 148, Address: 0x1c6544, Func Offset: 0xa4
	// Line 149, Address: 0x1c6550, Func Offset: 0xb0
	// Line 150, Address: 0x1c6564, Func Offset: 0xc4
	// Line 151, Address: 0x1c6584, Func Offset: 0xe4
	// Line 152, Address: 0x1c658c, Func Offset: 0xec
	// Line 153, Address: 0x1c6590, Func Offset: 0xf0
	// Line 154, Address: 0x1c65a0, Func Offset: 0x100
	// Line 155, Address: 0x1c65b8, Func Offset: 0x118
	// Line 157, Address: 0x1c65c4, Func Offset: 0x124
	// Line 158, Address: 0x1c65d0, Func Offset: 0x130
	// Line 159, Address: 0x1c65d8, Func Offset: 0x138
	// Line 160, Address: 0x1c65dc, Func Offset: 0x13c
	// Line 161, Address: 0x1c65ec, Func Offset: 0x14c
	// Line 162, Address: 0x1c6608, Func Offset: 0x168
	// Line 164, Address: 0x1c661c, Func Offset: 0x17c
	// Line 165, Address: 0x1c6638, Func Offset: 0x198
	// Line 166, Address: 0x1c6654, Func Offset: 0x1b4
	// Line 167, Address: 0x1c6658, Func Offset: 0x1b8
	// Func End, Address: 0x1c6670, Func Offset: 0x1d0
}

// 
// Start address: 0x1c6670
int shSifSyncIop()
{
	int ret;
	// Line 205, Address: 0x1c6670, Func Offset: 0
	// Line 207, Address: 0x1c667c, Func Offset: 0xc
	// Line 208, Address: 0x1c6684, Func Offset: 0x14
	// Line 209, Address: 0x1c668c, Func Offset: 0x1c
	// Line 210, Address: 0x1c6698, Func Offset: 0x28
	// Line 211, Address: 0x1c66a0, Func Offset: 0x30
	// Line 212, Address: 0x1c66a8, Func Offset: 0x38
	// Line 213, Address: 0x1c66ac, Func Offset: 0x3c
	// Func End, Address: 0x1c66c0, Func Offset: 0x50
}

// 
// Start address: 0x1c66c0
int shSifLoadModule(char* module, int args, char* argp)
{
	int ret;
	// Line 216, Address: 0x1c66c0, Func Offset: 0
	// Line 218, Address: 0x1c66d8, Func Offset: 0x18
	// Line 219, Address: 0x1c66e0, Func Offset: 0x20
	// Line 220, Address: 0x1c66e8, Func Offset: 0x28
	// Line 221, Address: 0x1c6700, Func Offset: 0x40
	// Line 222, Address: 0x1c6708, Func Offset: 0x48
	// Line 223, Address: 0x1c6710, Func Offset: 0x50
	// Line 224, Address: 0x1c6714, Func Offset: 0x54
	// Func End, Address: 0x1c6728, Func Offset: 0x68
}

// 
// Start address: 0x1c6730
int shSifLoadModuleR(char* module, int args, char* argp)
{
	int i;
	int count;
	int ret;
	// Line 227, Address: 0x1c6730, Func Offset: 0
	// Line 229, Address: 0x1c6750, Func Offset: 0x20
	// Line 230, Address: 0x1c6754, Func Offset: 0x24
	// Line 231, Address: 0x1c6768, Func Offset: 0x38
	// Line 232, Address: 0x1c6770, Func Offset: 0x40
	// Line 234, Address: 0x1c6780, Func Offset: 0x50
	// Line 236, Address: 0x1c6790, Func Offset: 0x60
	// Line 237, Address: 0x1c6794, Func Offset: 0x64
	// Line 238, Address: 0x1c6798, Func Offset: 0x68
	// Line 239, Address: 0x1c67c8, Func Offset: 0x98
	// Line 240, Address: 0x1c67e8, Func Offset: 0xb8
	// Line 241, Address: 0x1c67fc, Func Offset: 0xcc
	// Line 242, Address: 0x1c6800, Func Offset: 0xd0
	// Func End, Address: 0x1c681c, Func Offset: 0xec
}

// 
// Start address: 0x1c6820
int shSifRebootIop(char* imgfile)
{
	int ret;
	// Line 245, Address: 0x1c6820, Func Offset: 0
	// Line 247, Address: 0x1c6830, Func Offset: 0x10
	// Line 248, Address: 0x1c6838, Func Offset: 0x18
	// Line 249, Address: 0x1c6840, Func Offset: 0x20
	// Line 250, Address: 0x1c6850, Func Offset: 0x30
	// Line 251, Address: 0x1c6858, Func Offset: 0x38
	// Line 252, Address: 0x1c6860, Func Offset: 0x40
	// Line 253, Address: 0x1c6864, Func Offset: 0x44
	// Func End, Address: 0x1c6878, Func Offset: 0x58
}

// 
// Start address: 0x1c6880
int shSifRebootIopR(char* imgfile)
{
	int i;
	int i;
	int ret;
	// Line 256, Address: 0x1c6880, Func Offset: 0
	// Line 258, Address: 0x1c6898, Func Offset: 0x18
	// Line 259, Address: 0x1c68ac, Func Offset: 0x2c
	// Line 262, Address: 0x1c68b0, Func Offset: 0x30
	// Line 263, Address: 0x1c68b8, Func Offset: 0x38
	// Line 265, Address: 0x1c68c8, Func Offset: 0x48
	// Line 267, Address: 0x1c68d8, Func Offset: 0x58
	// Line 268, Address: 0x1c68dc, Func Offset: 0x5c
	// Line 269, Address: 0x1c68e0, Func Offset: 0x60
	// Line 271, Address: 0x1c6910, Func Offset: 0x90
	// Line 272, Address: 0x1c6924, Func Offset: 0xa4
	// Line 273, Address: 0x1c6928, Func Offset: 0xa8
	// Line 274, Address: 0x1c6930, Func Offset: 0xb0
	// Line 276, Address: 0x1c6940, Func Offset: 0xc0
	// Line 278, Address: 0x1c6950, Func Offset: 0xd0
	// Line 279, Address: 0x1c6954, Func Offset: 0xd4
	// Line 280, Address: 0x1c6958, Func Offset: 0xd8
	// Line 282, Address: 0x1c6988, Func Offset: 0x108
	// Line 285, Address: 0x1c6998, Func Offset: 0x118
	// Line 287, Address: 0x1c699c, Func Offset: 0x11c
	// Line 288, Address: 0x1c69ac, Func Offset: 0x12c
	// Line 289, Address: 0x1c69b0, Func Offset: 0x130
	// Func End, Address: 0x1c69cc, Func Offset: 0x14c
}

// 
// Start address: 0x1c69d0
void checkReadAlign(void* buffer)
{
	// Line 314, Address: 0x1c69d0, Func Offset: 0
	// Line 319, Address: 0x1c69dc, Func Offset: 0xc
	// Line 320, Address: 0x1c69ec, Func Offset: 0x1c
	// Line 321, Address: 0x1c6a00, Func Offset: 0x30
	// Line 323, Address: 0x1c6a0c, Func Offset: 0x3c
	// Func End, Address: 0x1c6a1c, Func Offset: 0x4c
}

// 
// Start address: 0x1c6a20
int shCdRead(int lsn, int sectors, void* buf, _anon2* mode)
{
	int ret;
	// Line 326, Address: 0x1c6a20, Func Offset: 0
	// Line 328, Address: 0x1c6a3c, Func Offset: 0x1c
	// Line 329, Address: 0x1c6a48, Func Offset: 0x28
	// Line 330, Address: 0x1c6a50, Func Offset: 0x30
	// Line 331, Address: 0x1c6a6c, Func Offset: 0x4c
	// Line 332, Address: 0x1c6a74, Func Offset: 0x54
	// Line 333, Address: 0x1c6a78, Func Offset: 0x58
	// Func End, Address: 0x1c6a8c, Func Offset: 0x6c
}

// 
// Start address: 0x1c6a90
int shCdSeek(int lsn)
{
	int ret;
	// Line 336, Address: 0x1c6a90, Func Offset: 0
	// Line 338, Address: 0x1c6aa0, Func Offset: 0x10
	// Line 339, Address: 0x1c6aa8, Func Offset: 0x18
	// Line 340, Address: 0x1c6ab8, Func Offset: 0x28
	// Line 341, Address: 0x1c6ac0, Func Offset: 0x30
	// Line 342, Address: 0x1c6ac4, Func Offset: 0x34
	// Func End, Address: 0x1c6ad8, Func Offset: 0x48
}

// 
// Start address: 0x1c6ae0
int shCdReadW(int lsn, int sectors, void* buf, _anon2* mode)
{
	unsigned short hcnt1;
	unsigned short hcnt0;
	int ret;
	// Line 373, Address: 0x1c6ae0, Func Offset: 0
	// Line 377, Address: 0x1c6b04, Func Offset: 0x24
	// Line 378, Address: 0x1c6b14, Func Offset: 0x34
	// Line 379, Address: 0x1c6b24, Func Offset: 0x44
	// Line 381, Address: 0x1c6b2c, Func Offset: 0x4c
	// Line 382, Address: 0x1c6b48, Func Offset: 0x68
	// Line 386, Address: 0x1c6b64, Func Offset: 0x84
	// Line 387, Address: 0x1c6b80, Func Offset: 0xa0
	// Line 388, Address: 0x1c6b88, Func Offset: 0xa8
	// Line 389, Address: 0x1c6b8c, Func Offset: 0xac
	// Line 394, Address: 0x1c6ba8, Func Offset: 0xc8
	// Line 397, Address: 0x1c6bb8, Func Offset: 0xd8
	// Line 398, Address: 0x1c6bd4, Func Offset: 0xf4
	// Line 401, Address: 0x1c6bf0, Func Offset: 0x110
	// Line 402, Address: 0x1c6bfc, Func Offset: 0x11c
	// Line 403, Address: 0x1c6c04, Func Offset: 0x124
	// Line 404, Address: 0x1c6c14, Func Offset: 0x134
	// Line 405, Address: 0x1c6c38, Func Offset: 0x158
	// Line 406, Address: 0x1c6c3c, Func Offset: 0x15c
	// Func End, Address: 0x1c6c58, Func Offset: 0x178
}

// 
// Start address: 0x1c6c60
int shCdSeekW(int lsn)
{
	unsigned short hcnt1;
	unsigned short hcnt0;
	int ret;
	// Line 409, Address: 0x1c6c60, Func Offset: 0
	// Line 413, Address: 0x1c6c78, Func Offset: 0x18
	// Line 414, Address: 0x1c6c88, Func Offset: 0x28
	// Line 416, Address: 0x1c6c90, Func Offset: 0x30
	// Line 417, Address: 0x1c6ca0, Func Offset: 0x40
	// Line 418, Address: 0x1c6ca8, Func Offset: 0x48
	// Line 419, Address: 0x1c6cac, Func Offset: 0x4c
	// Line 424, Address: 0x1c6cc8, Func Offset: 0x68
	// Line 426, Address: 0x1c6cd8, Func Offset: 0x78
	// Line 427, Address: 0x1c6ce4, Func Offset: 0x84
	// Line 428, Address: 0x1c6cec, Func Offset: 0x8c
	// Line 429, Address: 0x1c6cfc, Func Offset: 0x9c
	// Line 430, Address: 0x1c6d20, Func Offset: 0xc0
	// Line 431, Address: 0x1c6d24, Func Offset: 0xc4
	// Func End, Address: 0x1c6d40, Func Offset: 0xe0
}

// 
// Start address: 0x1c6d40
void shCdReadClockRecover()
{
	// Line 495, Address: 0x1c6d40, Func Offset: 0
	// Line 496, Address: 0x1c6d4c, Func Offset: 0xc
	// Line 498, Address: 0x1c6d54, Func Offset: 0x14
	// Func End, Address: 0x1c6d5c, Func Offset: 0x1c
}

// 
// Start address: 0x1c6d60
int shCdReadClock(_anon3* rtc)
{
	int ret;
	_anon3 old_rtc;
	// Line 500, Address: 0x1c6d60, Func Offset: 0
	// Line 504, Address: 0x1c6d70, Func Offset: 0x10
	// Line 505, Address: 0x1c6d78, Func Offset: 0x18
	// Line 506, Address: 0x1c6d88, Func Offset: 0x28
	// Line 507, Address: 0x1c6d90, Func Offset: 0x30
	// Line 508, Address: 0x1c6da0, Func Offset: 0x40
	// Line 510, Address: 0x1c6dd4, Func Offset: 0x74
	// Line 511, Address: 0x1c6dec, Func Offset: 0x8c
	// Line 512, Address: 0x1c6df4, Func Offset: 0x94
	// Line 513, Address: 0x1c6df8, Func Offset: 0x98
	// Line 517, Address: 0x1c6e2c, Func Offset: 0xcc
	// Line 519, Address: 0x1c6e34, Func Offset: 0xd4
	// Line 520, Address: 0x1c6e38, Func Offset: 0xd8
	// Func End, Address: 0x1c6e4c, Func Offset: 0xec
}

// 
// Start address: 0x1c6e50
char* name_skip_cdrom0(char* name)
{
	char* ret;
	// Line 542, Address: 0x1c6e50, Func Offset: 0
	// Line 545, Address: 0x1c6e5c, Func Offset: 0xc
	// Line 546, Address: 0x1c6e78, Func Offset: 0x28
	// Line 547, Address: 0x1c6e7c, Func Offset: 0x2c
	// Line 548, Address: 0x1c6e84, Func Offset: 0x34
	// Line 549, Address: 0x1c6ec8, Func Offset: 0x78
	// Line 551, Address: 0x1c6ee4, Func Offset: 0x94
	// Line 552, Address: 0x1c6ee8, Func Offset: 0x98
	// Func End, Address: 0x1c6ef8, Func Offset: 0xa8
}

// 
// Start address: 0x1c6f00
int shCdSearchFile(_anon0* file, char* fullpath)
{
	unsigned short hcnt1;
	unsigned short hcnt0;
	int ret;
	// Line 555, Address: 0x1c6f00, Func Offset: 0
	// Line 559, Address: 0x1c6f1c, Func Offset: 0x1c
	// Line 560, Address: 0x1c6f2c, Func Offset: 0x2c
	// Line 561, Address: 0x1c6f40, Func Offset: 0x40
	// Line 562, Address: 0x1c6f50, Func Offset: 0x50
	// Line 563, Address: 0x1c6f74, Func Offset: 0x74
	// Line 564, Address: 0x1c6f78, Func Offset: 0x78
	// Func End, Address: 0x1c6f94, Func Offset: 0x94
}

// 
// Start address: 0x1c6fa0
int _shCdSearchFile(_anon0* fp, char* name)
{
	int ret;
	// Line 566, Address: 0x1c6fa0, Func Offset: 0
	// Line 568, Address: 0x1c6fb4, Func Offset: 0x14
	// Line 569, Address: 0x1c6fbc, Func Offset: 0x1c
	// Line 571, Address: 0x1c6fc4, Func Offset: 0x24
	// Line 572, Address: 0x1c6fd4, Func Offset: 0x34
	// Line 573, Address: 0x1c6ff0, Func Offset: 0x50
	// Line 574, Address: 0x1c7004, Func Offset: 0x64
	// Line 575, Address: 0x1c700c, Func Offset: 0x6c
	// Line 577, Address: 0x1c7010, Func Offset: 0x70
	// Line 578, Address: 0x1c7018, Func Offset: 0x78
	// Line 579, Address: 0x1c7020, Func Offset: 0x80
	// Line 580, Address: 0x1c7024, Func Offset: 0x84
	// Func End, Address: 0x1c7038, Func Offset: 0x98
}

// 
// Start address: 0x1c7040
int shCdDiskReady(int mode)
{
	int ret;
	// Line 585, Address: 0x1c7040, Func Offset: 0
	// Line 587, Address: 0x1c7050, Func Offset: 0x10
	// Line 588, Address: 0x1c7058, Func Offset: 0x18
	// Line 589, Address: 0x1c7068, Func Offset: 0x28
	// Line 590, Address: 0x1c7070, Func Offset: 0x30
	// Line 591, Address: 0x1c7074, Func Offset: 0x34
	// Func End, Address: 0x1c7088, Func Offset: 0x48
}

// 
// Start address: 0x1c7090
int _shCdDiskReady(int mode)
{
	char* str;
	int ret;
	// Line 594, Address: 0x1c7090, Func Offset: 0
	// Line 596, Address: 0x1c70a4, Func Offset: 0x14
	// Line 598, Address: 0x1c70a8, Func Offset: 0x18
	// Line 599, Address: 0x1c70b0, Func Offset: 0x20
	// Line 602, Address: 0x1c70c0, Func Offset: 0x30
	// Line 603, Address: 0x1c70e0, Func Offset: 0x50
	// Line 604, Address: 0x1c70f0, Func Offset: 0x60
	// Line 605, Address: 0x1c7100, Func Offset: 0x70
	// Line 609, Address: 0x1c7108, Func Offset: 0x78
	// Line 611, Address: 0x1c7110, Func Offset: 0x80
	// Line 612, Address: 0x1c7114, Func Offset: 0x84
	// Func End, Address: 0x1c712c, Func Offset: 0x9c
}

// 
// Start address: 0x1c7130
int shCdGetDiskType()
{
	char* str;
	int ret;
	int last;
	// Line 615, Address: 0x1c7130, Func Offset: 0
	// Line 617, Address: 0x1c7140, Func Offset: 0x10
	// Line 619, Address: 0x1c7144, Func Offset: 0x14
	// Line 620, Address: 0x1c714c, Func Offset: 0x1c
	// Line 621, Address: 0x1c7154, Func Offset: 0x24
	// Line 625, Address: 0x1c7160, Func Offset: 0x30
	// Line 626, Address: 0x1c7170, Func Offset: 0x40
	// Line 627, Address: 0x1c7178, Func Offset: 0x48
	// Line 628, Address: 0x1c71f4, Func Offset: 0xc4
	// Line 629, Address: 0x1c7204, Func Offset: 0xd4
	// Line 630, Address: 0x1c7214, Func Offset: 0xe4
	// Line 631, Address: 0x1c7224, Func Offset: 0xf4
	// Line 632, Address: 0x1c7234, Func Offset: 0x104
	// Line 633, Address: 0x1c7244, Func Offset: 0x114
	// Line 634, Address: 0x1c7254, Func Offset: 0x124
	// Line 635, Address: 0x1c7264, Func Offset: 0x134
	// Line 636, Address: 0x1c7274, Func Offset: 0x144
	// Line 637, Address: 0x1c7284, Func Offset: 0x154
	// Line 638, Address: 0x1c7294, Func Offset: 0x164
	// Line 643, Address: 0x1c729c, Func Offset: 0x16c
	// Line 644, Address: 0x1c72a4, Func Offset: 0x174
	// Line 645, Address: 0x1c72ac, Func Offset: 0x17c
	// Line 646, Address: 0x1c72c8, Func Offset: 0x198
	// Line 647, Address: 0x1c72cc, Func Offset: 0x19c
	// Func End, Address: 0x1c72e4, Func Offset: 0x1b4
}

// 
// Start address: 0x1c72f0
int shCdTrayReq(int mode, unsigned int* traycnt)
{
	int ret;
	// Line 651, Address: 0x1c72f0, Func Offset: 0
	// Line 653, Address: 0x1c7304, Func Offset: 0x14
	// Line 654, Address: 0x1c730c, Func Offset: 0x1c
	// Line 655, Address: 0x1c7314, Func Offset: 0x24
	// Line 656, Address: 0x1c7328, Func Offset: 0x38
	// Line 657, Address: 0x1c7330, Func Offset: 0x40
	// Line 660, Address: 0x1c7338, Func Offset: 0x48
	// Line 661, Address: 0x1c733c, Func Offset: 0x4c
	// Func End, Address: 0x1c7350, Func Offset: 0x60
}

// 
// Start address: 0x1c7350
int shCdGetError()
{
	int error;
	// Line 664, Address: 0x1c7350, Func Offset: 0
	// Line 666, Address: 0x1c735c, Func Offset: 0xc
	// Line 667, Address: 0x1c7364, Func Offset: 0x14
	// Line 683, Address: 0x1c7370, Func Offset: 0x20
	// Line 684, Address: 0x1c7378, Func Offset: 0x28
	// Line 685, Address: 0x1c737c, Func Offset: 0x2c
	// Func End, Address: 0x1c7390, Func Offset: 0x40
}

// 
// Start address: 0x1c7390
int shCdStatus()
{
	int stat;
	// Line 688, Address: 0x1c7390, Func Offset: 0
	// Line 690, Address: 0x1c739c, Func Offset: 0xc
	// Line 691, Address: 0x1c73a4, Func Offset: 0x14
	// Line 692, Address: 0x1c73ac, Func Offset: 0x1c
	// Line 707, Address: 0x1c73b8, Func Offset: 0x28
	// Line 708, Address: 0x1c73c0, Func Offset: 0x30
	// Line 709, Address: 0x1c73c8, Func Offset: 0x38
	// Line 710, Address: 0x1c73cc, Func Offset: 0x3c
	// Func End, Address: 0x1c73e0, Func Offset: 0x50
}

// 
// Start address: 0x1c73e0
int shCdSync(int mode)
{
	int ret;
	// Line 713, Address: 0x1c73e0, Func Offset: 0
	// Line 715, Address: 0x1c73f0, Func Offset: 0x10
	// Line 716, Address: 0x1c73f8, Func Offset: 0x18
	// Line 717, Address: 0x1c7400, Func Offset: 0x20
	// Line 721, Address: 0x1c740c, Func Offset: 0x2c
	// Line 725, Address: 0x1c7418, Func Offset: 0x38
	// Line 726, Address: 0x1c7430, Func Offset: 0x50
	// Line 727, Address: 0x1c7438, Func Offset: 0x58
	// Line 728, Address: 0x1c743c, Func Offset: 0x5c
	// Func End, Address: 0x1c7450, Func Offset: 0x70
}

// 
// Start address: 0x1c7450
int shCdMmode(int mmode)
{
	int ret;
	// Line 731, Address: 0x1c7450, Func Offset: 0
	// Line 733, Address: 0x1c7460, Func Offset: 0x10
	// Line 734, Address: 0x1c7468, Func Offset: 0x18
	// Line 735, Address: 0x1c7478, Func Offset: 0x28
	// Line 736, Address: 0x1c7480, Func Offset: 0x30
	// Line 737, Address: 0x1c7484, Func Offset: 0x34
	// Func End, Address: 0x1c7498, Func Offset: 0x48
}

// 
// Start address: 0x1c74a0
int shHdInit()
{
	int ret;
	// Line 796, Address: 0x1c74a0, Func Offset: 0
	// Line 798, Address: 0x1c74ac, Func Offset: 0xc
	// Line 799, Address: 0x1c74d8, Func Offset: 0x38
	// Line 800, Address: 0x1c74f8, Func Offset: 0x58
	// Line 801, Address: 0x1c7504, Func Offset: 0x64
	// Line 802, Address: 0x1c750c, Func Offset: 0x6c
	// Line 803, Address: 0x1c7518, Func Offset: 0x78
	// Line 804, Address: 0x1c7528, Func Offset: 0x88
	// Line 805, Address: 0x1c7540, Func Offset: 0xa0
	// Line 806, Address: 0x1c7544, Func Offset: 0xa4
	// Func End, Address: 0x1c7558, Func Offset: 0xb8
}

// 
// Start address: 0x1c7560
int shHdOpen(char* name, int mode)
{
	int ret;
	// Line 809, Address: 0x1c7560, Func Offset: 0
	// Line 811, Address: 0x1c7578, Func Offset: 0x18
	// Line 812, Address: 0x1c7588, Func Offset: 0x28
	// Line 813, Address: 0x1c75b8, Func Offset: 0x58
	// Line 814, Address: 0x1c75c8, Func Offset: 0x68
	// Line 815, Address: 0x1c75cc, Func Offset: 0x6c
	// Func End, Address: 0x1c75e4, Func Offset: 0x84
}

// 
// Start address: 0x1c75f0
int shHdRead(int fd, void* buffer, int size)
{
	int ret;
	// Line 818, Address: 0x1c75f0, Func Offset: 0
	// Line 820, Address: 0x1c7608, Func Offset: 0x18
	// Line 821, Address: 0x1c7614, Func Offset: 0x24
	// Line 822, Address: 0x1c7624, Func Offset: 0x34
	// Line 823, Address: 0x1c763c, Func Offset: 0x4c
	// Line 824, Address: 0x1c764c, Func Offset: 0x5c
	// Line 825, Address: 0x1c7650, Func Offset: 0x60
	// Func End, Address: 0x1c7664, Func Offset: 0x74
}

// 
// Start address: 0x1c7670
int shHdClose(int fd)
{
	int ret;
	// Line 828, Address: 0x1c7670, Func Offset: 0
	// Line 830, Address: 0x1c7680, Func Offset: 0x10
	// Line 831, Address: 0x1c7690, Func Offset: 0x20
	// Line 832, Address: 0x1c76a0, Func Offset: 0x30
	// Line 833, Address: 0x1c76b0, Func Offset: 0x40
	// Line 834, Address: 0x1c76b4, Func Offset: 0x44
	// Func End, Address: 0x1c76c8, Func Offset: 0x58
}

// 
// Start address: 0x1c76d0
int shHdLseek(int fd, int offset, int where)
{
	int ret;
	// Line 847, Address: 0x1c76d0, Func Offset: 0
	// Line 849, Address: 0x1c76e8, Func Offset: 0x18
	// Line 850, Address: 0x1c76f8, Func Offset: 0x28
	// Line 851, Address: 0x1c7710, Func Offset: 0x40
	// Line 852, Address: 0x1c7720, Func Offset: 0x50
	// Line 853, Address: 0x1c7724, Func Offset: 0x54
	// Func End, Address: 0x1c7738, Func Offset: 0x68
}

// 
// Start address: 0x1c7740
int _shHdGetFileSize(char* name)
{
	int fd;
	int ret;
	// Line 879, Address: 0x1c7740, Func Offset: 0
	// Line 882, Address: 0x1c7754, Func Offset: 0x14
	// Line 883, Address: 0x1c775c, Func Offset: 0x1c
	// Line 884, Address: 0x1c7764, Func Offset: 0x24
	// Line 885, Address: 0x1c7778, Func Offset: 0x38
	// Line 886, Address: 0x1c7780, Func Offset: 0x40
	// Line 887, Address: 0x1c7798, Func Offset: 0x58
	// Line 888, Address: 0x1c77a4, Func Offset: 0x64
	// Line 889, Address: 0x1c77b0, Func Offset: 0x70
	// Line 890, Address: 0x1c77b8, Func Offset: 0x78
	// Line 892, Address: 0x1c77bc, Func Offset: 0x7c
	// Line 893, Address: 0x1c77c4, Func Offset: 0x84
	// Line 894, Address: 0x1c77cc, Func Offset: 0x8c
	// Line 895, Address: 0x1c77d0, Func Offset: 0x90
	// Func End, Address: 0x1c77e8, Func Offset: 0xa8
}

