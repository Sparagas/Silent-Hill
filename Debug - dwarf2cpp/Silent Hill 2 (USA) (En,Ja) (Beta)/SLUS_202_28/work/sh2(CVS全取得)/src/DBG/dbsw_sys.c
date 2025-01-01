typedef struct CmdServStat;
typedef union shGameKeyData;
typedef struct _anon0;
typedef struct _anon1;


typedef char type_0[4];
typedef unsigned short type_1[4];
typedef unsigned short type_2[4][2];
typedef unsigned int type_3[8];
typedef _anon0 type_4[1];
typedef char type_5[32];
typedef int type_6[1];
typedef unsigned char type_7[32];
typedef CmdServStat type_8[1];
typedef shGameKeyData type_9[1];
typedef int type_10[1];
typedef CmdServStat type_11[1];

struct CmdServStat
{
	int qsize;
	int qlen;
	int id;
	int last_id;
	int clen;
};

union shGameKeyData
{
	unsigned long bit;
	_anon1 f;
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
		unsigned long type : 1;
		unsigned long DRINK : 1;
		unsigned long RADIO : 1;
		unsigned long LIGHT : 1;
		unsigned long ITEM : 1;
		unsigned long MAP : 1;
		unsigned long DECIDE : 1;
		unsigned long CANCEL : 1;
		unsigned long SKIP : 1;
		unsigned long PAUSE : 1;
		unsigned long ACTION : 2;
		unsigned long DASH : 2;
		unsigned long LSLIDE : 2;
		unsigned long RSLIDE : 2;
		unsigned long READY : 2;
		unsigned long VIEW : 2;
		unsigned long frame_m1 : 2;
		long AX : 4;
		long AY : 4;
		long BX : 2;
		long BY : 2;
		long CX : 4;
		long CY : 4;
		unsigned long reserve : 2;
		unsigned long trg : 1;
		unsigned long rpt : 1;
		unsigned long len : 16;
	};
};

unsigned short libShPadStep[4][2];

char* dbSwitchSysHelp(int Y);
int dbSwitchSys(int Y);
void dbSwitchSetSys(int Y, int on);
void printR_date();
void printR_cmdserv(CmdServStat* stat, char* prefix, int* exec);
void printR_fileserv();
void printR_loadinit();
void printR_test();
void printR_padstep(int port, int slot);
void printR_paddata(char* paddata);
void printR_keydata(shGameKeyData* key);
void printR_padport(int port, int slot, int pad_normalize, int pad_adjust, int dispstep, int disppad, int dispkey);
void printR_pad00();
void printR_pad10();
void printR_lang();
void dbSwitchSysPrint();
int dbSwitchSysPrintHelp();
int dbSwitchSysPadPort();
int dbSwitchSysPrintAllPages();
int dbSwitchSysPrintNotOnlyPort1();
void dbSwitchSysInit();

// 
// Start address: 0x234da0
char* dbSwitchSysHelp(int Y)
{
	char* help;
	// Line 53, Address: 0x234da0, Func Offset: 0
	// Line 54, Address: 0x234da4, Func Offset: 0x4
	// Line 56, Address: 0x234dcc, Func Offset: 0x2c
	// Line 57, Address: 0x234dd4, Func Offset: 0x34
	// Line 59, Address: 0x234ddc, Func Offset: 0x3c
	// Line 60, Address: 0x234de4, Func Offset: 0x44
	// Line 62, Address: 0x234dec, Func Offset: 0x4c
	// Line 63, Address: 0x234df4, Func Offset: 0x54
	// Line 65, Address: 0x234dfc, Func Offset: 0x5c
	// Line 66, Address: 0x234e04, Func Offset: 0x64
	// Line 68, Address: 0x234e0c, Func Offset: 0x6c
	// Line 69, Address: 0x234e14, Func Offset: 0x74
	// Line 71, Address: 0x234e1c, Func Offset: 0x7c
	// Line 72, Address: 0x234e24, Func Offset: 0x84
	// Line 74, Address: 0x234e2c, Func Offset: 0x8c
	// Line 75, Address: 0x234e34, Func Offset: 0x94
	// Line 77, Address: 0x234e3c, Func Offset: 0x9c
	// Line 78, Address: 0x234e44, Func Offset: 0xa4
	// Line 80, Address: 0x234e4c, Func Offset: 0xac
	// Line 81, Address: 0x234e54, Func Offset: 0xb4
	// Line 83, Address: 0x234e5c, Func Offset: 0xbc
	// Line 84, Address: 0x234e64, Func Offset: 0xc4
	// Line 86, Address: 0x234e6c, Func Offset: 0xcc
	// Line 87, Address: 0x234e74, Func Offset: 0xd4
	// Line 95, Address: 0x234e7c, Func Offset: 0xdc
	// Line 96, Address: 0x234e84, Func Offset: 0xe4
	// Line 98, Address: 0x234e8c, Func Offset: 0xec
	// Line 99, Address: 0x234e94, Func Offset: 0xf4
	// Line 101, Address: 0x234e9c, Func Offset: 0xfc
	// Line 102, Address: 0x234ea4, Func Offset: 0x104
	// Line 105, Address: 0x234eac, Func Offset: 0x10c
	// Line 106, Address: 0x234eb4, Func Offset: 0x114
	// Line 114, Address: 0x234ebc, Func Offset: 0x11c
	// Line 115, Address: 0x234ec4, Func Offset: 0x124
	// Line 117, Address: 0x234ecc, Func Offset: 0x12c
	// Line 118, Address: 0x234ed4, Func Offset: 0x134
	// Line 120, Address: 0x234edc, Func Offset: 0x13c
	// Line 121, Address: 0x234ee4, Func Offset: 0x144
	// Line 124, Address: 0x234eec, Func Offset: 0x14c
	// Line 125, Address: 0x234ef4, Func Offset: 0x154
	// Line 127, Address: 0x234efc, Func Offset: 0x15c
	// Line 128, Address: 0x234f04, Func Offset: 0x164
	// Line 131, Address: 0x234f0c, Func Offset: 0x16c
	// Line 132, Address: 0x234f14, Func Offset: 0x174
	// Line 134, Address: 0x234f1c, Func Offset: 0x17c
	// Line 140, Address: 0x234f24, Func Offset: 0x184
	// Func End, Address: 0x234f2c, Func Offset: 0x18c
}

// 
// Start address: 0x234f30
int dbSwitchSys(int Y)
{
	// Line 143, Address: 0x234f30, Func Offset: 0
	// Line 144, Address: 0x234f3c, Func Offset: 0xc
	// Line 145, Address: 0x234f48, Func Offset: 0x18
	// Func End, Address: 0x234f58, Func Offset: 0x28
}

// 
// Start address: 0x234f60
void dbSwitchSetSys(int Y, int on)
{
	// Line 148, Address: 0x234f60, Func Offset: 0
	// Line 149, Address: 0x234f70, Func Offset: 0x10
	// Line 150, Address: 0x234f80, Func Offset: 0x20
	// Func End, Address: 0x234f90, Func Offset: 0x30
}

// 
// Start address: 0x234f90
void printR_date()
{
	char* str;
	char strbuf[32];
	_anon0 rtc[1];
	// Line 153, Address: 0x234f90, Func Offset: 0
	// Line 155, Address: 0x234f9c, Func Offset: 0xc
	// Line 159, Address: 0x234fa8, Func Offset: 0x18
	// Line 160, Address: 0x234fac, Func Offset: 0x1c
	// Line 161, Address: 0x234fc0, Func Offset: 0x30
	// Line 162, Address: 0x234fd8, Func Offset: 0x48
	// Line 163, Address: 0x234fe8, Func Offset: 0x58
	// Line 176, Address: 0x234ffc, Func Offset: 0x6c
	// Func End, Address: 0x235010, Func Offset: 0x80
}

// 
// Start address: 0x235010
void printR_cmdserv(CmdServStat* stat, char* prefix, int* exec)
{
	char sym;
	char syms[4];
	// Line 179, Address: 0x235010, Func Offset: 0
	// Line 180, Address: 0x23502c, Func Offset: 0x1c
	// Line 181, Address: 0x235040, Func Offset: 0x30
	// Line 182, Address: 0x235044, Func Offset: 0x34
	// Line 183, Address: 0x23504c, Func Offset: 0x3c
	// Line 184, Address: 0x235058, Func Offset: 0x48
	// Line 185, Address: 0x235084, Func Offset: 0x74
	// Line 186, Address: 0x23508c, Func Offset: 0x7c
	// Line 189, Address: 0x235090, Func Offset: 0x80
	// Line 200, Address: 0x235138, Func Offset: 0x128
	// Func End, Address: 0x235154, Func Offset: 0x144
}

// 
// Start address: 0x235160
void printR_fileserv()
{
	CmdServStat stat[1];
	int exec[1];
	// Line 203, Address: 0x235160, Func Offset: 0
	// Line 206, Address: 0x235168, Func Offset: 0x8
	// Line 207, Address: 0x235174, Func Offset: 0x14
	// Line 208, Address: 0x235190, Func Offset: 0x30
	// Func End, Address: 0x2351a0, Func Offset: 0x40
}

// 
// Start address: 0x2351a0
void printR_loadinit()
{
	CmdServStat stat[1];
	int exec[1];
	// Line 211, Address: 0x2351a0, Func Offset: 0
	// Line 214, Address: 0x2351a8, Func Offset: 0x8
	// Line 215, Address: 0x2351b4, Func Offset: 0x14
	// Line 216, Address: 0x2351d0, Func Offset: 0x30
	// Func End, Address: 0x2351e0, Func Offset: 0x40
}

// 
// Start address: 0x2351e0
void printR_test()
{
	// Line 219, Address: 0x2351e0, Func Offset: 0
	// Line 220, Address: 0x2351e8, Func Offset: 0x8
	// Line 237, Address: 0x2351f8, Func Offset: 0x18
	// Func End, Address: 0x235208, Func Offset: 0x28
}

// 
// Start address: 0x235210
void printR_padstep(int port, int slot)
{
	// Line 240, Address: 0x235210, Func Offset: 0
	// Line 242, Address: 0x235220, Func Offset: 0x10
	// Line 246, Address: 0x235250, Func Offset: 0x40
	// Func End, Address: 0x235260, Func Offset: 0x50
}

// 
// Start address: 0x235260
void printR_paddata(char* paddata)
{
	int ofs;
	int idx;
	unsigned int padp[8];
	// Line 249, Address: 0x235260, Func Offset: 0
	// Line 250, Address: 0x235268, Func Offset: 0x8
	// Line 253, Address: 0x235284, Func Offset: 0x24
	// Line 254, Address: 0x235290, Func Offset: 0x30
	// Line 255, Address: 0x2352a4, Func Offset: 0x44
	// Line 256, Address: 0x2352bc, Func Offset: 0x5c
	// Line 257, Address: 0x2352d0, Func Offset: 0x70
	// Line 259, Address: 0x2352e0, Func Offset: 0x80
	// Line 262, Address: 0x235314, Func Offset: 0xb4
	// Func End, Address: 0x235324, Func Offset: 0xc4
}

// 
// Start address: 0x235330
void printR_keydata(shGameKeyData* key)
{
	// Line 265, Address: 0x235330, Func Offset: 0
	// Line 266, Address: 0x235340, Func Offset: 0x10
	// Line 276, Address: 0x235398, Func Offset: 0x68
	// Line 286, Address: 0x2353f4, Func Offset: 0xc4
	// Line 296, Address: 0x235444, Func Offset: 0x114
	// Func End, Address: 0x235458, Func Offset: 0x128
}

// 
// Start address: 0x235460
void printR_padport(int port, int slot, int pad_normalize, int pad_adjust, int dispstep, int disppad, int dispkey)
{
	shGameKeyData key[1];
	unsigned char paddata[32];
	// Line 306, Address: 0x235460, Func Offset: 0
	// Line 310, Address: 0x2354a0, Func Offset: 0x40
	// Line 311, Address: 0x2354b0, Func Offset: 0x50
	// Line 312, Address: 0x2354c4, Func Offset: 0x64
	// Line 313, Address: 0x2354d8, Func Offset: 0x78
	// Line 315, Address: 0x2354ec, Func Offset: 0x8c
	// Line 316, Address: 0x2354f4, Func Offset: 0x94
	// Line 318, Address: 0x235504, Func Offset: 0xa4
	// Line 319, Address: 0x23550c, Func Offset: 0xac
	// Line 321, Address: 0x235518, Func Offset: 0xb8
	// Line 322, Address: 0x235520, Func Offset: 0xc0
	// Line 323, Address: 0x235530, Func Offset: 0xd0
	// Line 325, Address: 0x23553c, Func Offset: 0xdc
	// Func End, Address: 0x235568, Func Offset: 0x108
}

// 
// Start address: 0x235570
void printR_pad00()
{
	// Line 328, Address: 0x235570, Func Offset: 0
	// Line 329, Address: 0x235580, Func Offset: 0x10
	// Line 334, Address: 0x2355d0, Func Offset: 0x60
	// Line 335, Address: 0x2355e4, Func Offset: 0x74
	// Line 336, Address: 0x2355f8, Func Offset: 0x88
	// Line 338, Address: 0x23560c, Func Offset: 0x9c
	// Line 343, Address: 0x23565c, Func Offset: 0xec
	// Line 344, Address: 0x235670, Func Offset: 0x100
	// Line 345, Address: 0x235684, Func Offset: 0x114
	// Line 347, Address: 0x235698, Func Offset: 0x128
	// Line 354, Address: 0x2356e8, Func Offset: 0x178
	// Func End, Address: 0x235700, Func Offset: 0x190
}

// 
// Start address: 0x235700
void printR_pad10()
{
	// Line 357, Address: 0x235700, Func Offset: 0
	// Line 358, Address: 0x235710, Func Offset: 0x10
	// Line 363, Address: 0x235760, Func Offset: 0x60
	// Line 364, Address: 0x235774, Func Offset: 0x74
	// Line 365, Address: 0x235788, Func Offset: 0x88
	// Line 367, Address: 0x23579c, Func Offset: 0x9c
	// Line 372, Address: 0x2357ec, Func Offset: 0xec
	// Line 373, Address: 0x235800, Func Offset: 0x100
	// Line 374, Address: 0x235814, Func Offset: 0x114
	// Line 376, Address: 0x235828, Func Offset: 0x128
	// Line 383, Address: 0x235878, Func Offset: 0x178
	// Func End, Address: 0x235890, Func Offset: 0x190
}

// 
// Start address: 0x235890
void printR_lang()
{
	char* str;
	// Line 386, Address: 0x235890, Func Offset: 0
	// Line 388, Address: 0x23589c, Func Offset: 0xc
	// Line 389, Address: 0x2358d0, Func Offset: 0x40
	// Line 390, Address: 0x2358e0, Func Offset: 0x50
	// Line 391, Address: 0x2358f0, Func Offset: 0x60
	// Line 392, Address: 0x235900, Func Offset: 0x70
	// Line 393, Address: 0x235910, Func Offset: 0x80
	// Line 394, Address: 0x235920, Func Offset: 0x90
	// Line 396, Address: 0x235928, Func Offset: 0x98
	// Line 397, Address: 0x23593c, Func Offset: 0xac
	// Func End, Address: 0x235950, Func Offset: 0xc0
}

// 
// Start address: 0x235950
void dbSwitchSysPrint()
{
	int Y;
	// Line 400, Address: 0x235950, Func Offset: 0
	// Line 402, Address: 0x23595c, Func Offset: 0xc
	// Line 403, Address: 0x235968, Func Offset: 0x18
	// Line 404, Address: 0x2359dc, Func Offset: 0x8c
	// Line 405, Address: 0x235a00, Func Offset: 0xb0
	// Line 406, Address: 0x235a24, Func Offset: 0xd4
	// Line 407, Address: 0x235a48, Func Offset: 0xf8
	// Line 408, Address: 0x235a6c, Func Offset: 0x11c
	// Line 409, Address: 0x235a7c, Func Offset: 0x12c
	// Line 410, Address: 0x235a8c, Func Offset: 0x13c
	// Line 412, Address: 0x235ab0, Func Offset: 0x160
	// Line 414, Address: 0x235acc, Func Offset: 0x17c
	// Line 415, Address: 0x235ad0, Func Offset: 0x180
	// Line 416, Address: 0x235ae4, Func Offset: 0x194
	// Func End, Address: 0x235af8, Func Offset: 0x1a8
}

// 
// Start address: 0x235b00
int dbSwitchSysPrintHelp()
{
	// Line 419, Address: 0x235b00, Func Offset: 0
	// Line 420, Address: 0x235b08, Func Offset: 0x8
	// Line 421, Address: 0x235b14, Func Offset: 0x14
	// Func End, Address: 0x235b24, Func Offset: 0x24
}

// 
// Start address: 0x235b30
int dbSwitchSysPadPort()
{
	// Line 424, Address: 0x235b30, Func Offset: 0
	// Line 425, Address: 0x235b38, Func Offset: 0x8
	// Line 426, Address: 0x235b44, Func Offset: 0x14
	// Func End, Address: 0x235b54, Func Offset: 0x24
}

// 
// Start address: 0x235b60
int dbSwitchSysPrintAllPages()
{
	// Line 429, Address: 0x235b60, Func Offset: 0
	// Line 430, Address: 0x235b68, Func Offset: 0x8
	// Line 431, Address: 0x235b74, Func Offset: 0x14
	// Func End, Address: 0x235b84, Func Offset: 0x24
}

// 
// Start address: 0x235b90
int dbSwitchSysPrintNotOnlyPort1()
{
	// Line 434, Address: 0x235b90, Func Offset: 0
	// Line 435, Address: 0x235b98, Func Offset: 0x8
	// Line 436, Address: 0x235ba4, Func Offset: 0x14
	// Func End, Address: 0x235bb4, Func Offset: 0x24
}

// 
// Start address: 0x235bc0
void dbSwitchSysInit()
{
	// Line 466, Address: 0x235bc0, Func Offset: 0
	// Line 467, Address: 0x235bc8, Func Offset: 0x8
	// Line 468, Address: 0x235bd8, Func Offset: 0x18
	// Line 469, Address: 0x235be8, Func Offset: 0x28
	// Line 470, Address: 0x235bf8, Func Offset: 0x38
	// Line 471, Address: 0x235c08, Func Offset: 0x48
	// Line 475, Address: 0x235c18, Func Offset: 0x58
	// Line 476, Address: 0x235c28, Func Offset: 0x68
	// Line 477, Address: 0x235c38, Func Offset: 0x78
	// Func End, Address: 0x235c48, Func Offset: 0x88
}

