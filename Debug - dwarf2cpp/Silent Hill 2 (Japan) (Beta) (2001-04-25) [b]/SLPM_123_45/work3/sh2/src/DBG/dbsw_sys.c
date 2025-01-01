typedef struct CmdServStat;
typedef union shGameKeyData;
typedef struct _anon0;
typedef struct _anon1;


typedef unsigned short type_0[4];
typedef unsigned short type_1[4][2];
typedef char type_2[4];
typedef unsigned int type_3[8];
typedef _anon1 type_4[1];
typedef unsigned char type_5[32];
typedef shGameKeyData type_6[1];
typedef int type_7[1];
typedef CmdServStat type_8[1];
typedef int type_9[1];
typedef CmdServStat type_10[1];

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
	_anon0 f;
};

struct _anon0
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

struct _anon1
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

unsigned short libShPadStep[4][2];

char* dbSwitchSysHelp(int Y);
int dbSwitchSys(int Y);
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
void dbSwitchSysPrint();
int dbSwitchSysPrintHelp();
int dbSwitchSysPadPort();
int dbSwitchSysPrintAllPages();
int dbSwitchSysPrintNotOnlyPort1();

// 
// Start address: 0x24eb90
char* dbSwitchSysHelp(int Y)
{
	char* help;
	// Line 40, Address: 0x24eb90, Func Offset: 0
	// Line 41, Address: 0x24eb9c, Func Offset: 0xc
	// Line 42, Address: 0x24eba0, Func Offset: 0x10
	// Line 44, Address: 0x24ebcc, Func Offset: 0x3c
	// Line 45, Address: 0x24ebd4, Func Offset: 0x44
	// Line 47, Address: 0x24ebdc, Func Offset: 0x4c
	// Line 48, Address: 0x24ebe4, Func Offset: 0x54
	// Line 50, Address: 0x24ebec, Func Offset: 0x5c
	// Line 51, Address: 0x24ebf4, Func Offset: 0x64
	// Line 53, Address: 0x24ebfc, Func Offset: 0x6c
	// Line 54, Address: 0x24ec04, Func Offset: 0x74
	// Line 56, Address: 0x24ec0c, Func Offset: 0x7c
	// Line 57, Address: 0x24ec14, Func Offset: 0x84
	// Line 59, Address: 0x24ec1c, Func Offset: 0x8c
	// Line 60, Address: 0x24ec24, Func Offset: 0x94
	// Line 62, Address: 0x24ec2c, Func Offset: 0x9c
	// Line 63, Address: 0x24ec34, Func Offset: 0xa4
	// Line 65, Address: 0x24ec3c, Func Offset: 0xac
	// Line 66, Address: 0x24ec44, Func Offset: 0xb4
	// Line 68, Address: 0x24ec4c, Func Offset: 0xbc
	// Line 69, Address: 0x24ec54, Func Offset: 0xc4
	// Line 71, Address: 0x24ec5c, Func Offset: 0xcc
	// Line 72, Address: 0x24ec64, Func Offset: 0xd4
	// Line 80, Address: 0x24ec6c, Func Offset: 0xdc
	// Line 81, Address: 0x24ec74, Func Offset: 0xe4
	// Line 83, Address: 0x24ec7c, Func Offset: 0xec
	// Line 84, Address: 0x24ec84, Func Offset: 0xf4
	// Line 86, Address: 0x24ec8c, Func Offset: 0xfc
	// Line 87, Address: 0x24ec94, Func Offset: 0x104
	// Line 90, Address: 0x24ec9c, Func Offset: 0x10c
	// Line 91, Address: 0x24eca4, Func Offset: 0x114
	// Line 99, Address: 0x24ecac, Func Offset: 0x11c
	// Line 100, Address: 0x24ecb4, Func Offset: 0x124
	// Line 102, Address: 0x24ecbc, Func Offset: 0x12c
	// Line 103, Address: 0x24ecc4, Func Offset: 0x134
	// Line 105, Address: 0x24eccc, Func Offset: 0x13c
	// Line 111, Address: 0x24ecd4, Func Offset: 0x144
	// Line 112, Address: 0x24ecd8, Func Offset: 0x148
	// Func End, Address: 0x24ece8, Func Offset: 0x158
}

// 
// Start address: 0x24ecf0
int dbSwitchSys(int Y)
{
	// Line 115, Address: 0x24ecf0, Func Offset: 0
	// Line 116, Address: 0x24ecfc, Func Offset: 0xc
	// Line 117, Address: 0x24ed0c, Func Offset: 0x1c
	// Func End, Address: 0x24ed1c, Func Offset: 0x2c
}

// 
// Start address: 0x24ed20
void printR_date()
{
	_anon1 rtc[1];
	// Line 121, Address: 0x24ed20, Func Offset: 0
	// Line 124, Address: 0x24ed28, Func Offset: 0x8
	// Line 125, Address: 0x24ed34, Func Offset: 0x14
	// Line 134, Address: 0x24ed7c, Func Offset: 0x5c
	// Func End, Address: 0x24ed8c, Func Offset: 0x6c
}

// 
// Start address: 0x24ed90
void printR_cmdserv(CmdServStat* stat, char* prefix, int* exec)
{
	char sym;
	char syms[4];
	// Line 137, Address: 0x24ed90, Func Offset: 0
	// Line 138, Address: 0x24edac, Func Offset: 0x1c
	// Line 139, Address: 0x24edc0, Func Offset: 0x30
	// Line 140, Address: 0x24edcc, Func Offset: 0x3c
	// Line 141, Address: 0x24edd8, Func Offset: 0x48
	// Line 142, Address: 0x24ede8, Func Offset: 0x58
	// Line 143, Address: 0x24ee24, Func Offset: 0x94
	// Line 144, Address: 0x24ee2c, Func Offset: 0x9c
	// Line 147, Address: 0x24ee34, Func Offset: 0xa4
	// Line 158, Address: 0x24ef04, Func Offset: 0x174
	// Func End, Address: 0x24ef1c, Func Offset: 0x18c
}

// 
// Start address: 0x24ef20
void printR_fileserv()
{
	CmdServStat stat[1];
	int exec[1];
	// Line 161, Address: 0x24ef20, Func Offset: 0
	// Line 164, Address: 0x24ef28, Func Offset: 0x8
	// Line 165, Address: 0x24ef34, Func Offset: 0x14
	// Line 166, Address: 0x24ef50, Func Offset: 0x30
	// Func End, Address: 0x24ef60, Func Offset: 0x40
}

// 
// Start address: 0x24ef60
void printR_loadinit()
{
	CmdServStat stat[1];
	int exec[1];
	// Line 169, Address: 0x24ef60, Func Offset: 0
	// Line 172, Address: 0x24ef68, Func Offset: 0x8
	// Line 173, Address: 0x24ef74, Func Offset: 0x14
	// Line 174, Address: 0x24ef90, Func Offset: 0x30
	// Func End, Address: 0x24efa0, Func Offset: 0x40
}

// 
// Start address: 0x24efa0
void printR_test()
{
	// Line 177, Address: 0x24efa0, Func Offset: 0
	// Line 178, Address: 0x24efa8, Func Offset: 0x8
	// Line 195, Address: 0x24efb8, Func Offset: 0x18
	// Func End, Address: 0x24efc8, Func Offset: 0x28
}

// 
// Start address: 0x24efd0
void printR_padstep(int port, int slot)
{
	// Line 198, Address: 0x24efd0, Func Offset: 0
	// Line 200, Address: 0x24efe0, Func Offset: 0x10
	// Line 204, Address: 0x24f020, Func Offset: 0x50
	// Func End, Address: 0x24f030, Func Offset: 0x60
}

// 
// Start address: 0x24f030
void printR_paddata(char* paddata)
{
	int ofs;
	int idx;
	unsigned int padp[8];
	// Line 207, Address: 0x24f030, Func Offset: 0
	// Line 208, Address: 0x24f044, Func Offset: 0x14
	// Line 211, Address: 0x24f060, Func Offset: 0x30
	// Line 212, Address: 0x24f06c, Func Offset: 0x3c
	// Line 213, Address: 0x24f084, Func Offset: 0x54
	// Line 214, Address: 0x24f098, Func Offset: 0x68
	// Line 215, Address: 0x24f0c0, Func Offset: 0x90
	// Line 217, Address: 0x24f0d0, Func Offset: 0xa0
	// Line 220, Address: 0x24f104, Func Offset: 0xd4
	// Func End, Address: 0x24f11c, Func Offset: 0xec
}

// 
// Start address: 0x24f120
void printR_keydata(shGameKeyData* key)
{
	// Line 223, Address: 0x24f120, Func Offset: 0
	// Line 224, Address: 0x24f12c, Func Offset: 0xc
	// Line 234, Address: 0x24f1bc, Func Offset: 0x9c
	// Line 244, Address: 0x24f248, Func Offset: 0x128
	// Line 254, Address: 0x24f2c4, Func Offset: 0x1a4
	// Func End, Address: 0x24f2d4, Func Offset: 0x1b4
}

// 
// Start address: 0x24f2e0
void printR_padport(int port, int slot, int pad_normalize, int pad_adjust, int dispstep, int disppad, int dispkey)
{
	shGameKeyData key[1];
	unsigned char paddata[32];
	// Line 264, Address: 0x24f2e0, Func Offset: 0
	// Line 268, Address: 0x24f304, Func Offset: 0x24
	// Line 269, Address: 0x24f31c, Func Offset: 0x3c
	// Line 270, Address: 0x24f330, Func Offset: 0x50
	// Line 271, Address: 0x24f348, Func Offset: 0x68
	// Line 273, Address: 0x24f360, Func Offset: 0x80
	// Line 274, Address: 0x24f36c, Func Offset: 0x8c
	// Line 276, Address: 0x24f37c, Func Offset: 0x9c
	// Line 277, Address: 0x24f388, Func Offset: 0xa8
	// Line 279, Address: 0x24f394, Func Offset: 0xb4
	// Line 280, Address: 0x24f3a0, Func Offset: 0xc0
	// Line 281, Address: 0x24f3b0, Func Offset: 0xd0
	// Line 283, Address: 0x24f3bc, Func Offset: 0xdc
	// Func End, Address: 0x24f3cc, Func Offset: 0xec
}

// 
// Start address: 0x24f3d0
void printR_pad00()
{
	// Line 286, Address: 0x24f3d0, Func Offset: 0
	// Line 287, Address: 0x24f3e0, Func Offset: 0x10
	// Line 292, Address: 0x24f430, Func Offset: 0x60
	// Line 293, Address: 0x24f444, Func Offset: 0x74
	// Line 294, Address: 0x24f458, Func Offset: 0x88
	// Line 296, Address: 0x24f46c, Func Offset: 0x9c
	// Line 301, Address: 0x24f4bc, Func Offset: 0xec
	// Line 302, Address: 0x24f4d0, Func Offset: 0x100
	// Line 303, Address: 0x24f4e4, Func Offset: 0x114
	// Line 305, Address: 0x24f4f8, Func Offset: 0x128
	// Line 312, Address: 0x24f548, Func Offset: 0x178
	// Func End, Address: 0x24f560, Func Offset: 0x190
}

// 
// Start address: 0x24f560
void printR_pad10()
{
	// Line 315, Address: 0x24f560, Func Offset: 0
	// Line 316, Address: 0x24f570, Func Offset: 0x10
	// Line 321, Address: 0x24f5c0, Func Offset: 0x60
	// Line 322, Address: 0x24f5d4, Func Offset: 0x74
	// Line 323, Address: 0x24f5e8, Func Offset: 0x88
	// Line 325, Address: 0x24f5fc, Func Offset: 0x9c
	// Line 330, Address: 0x24f64c, Func Offset: 0xec
	// Line 331, Address: 0x24f660, Func Offset: 0x100
	// Line 332, Address: 0x24f674, Func Offset: 0x114
	// Line 334, Address: 0x24f688, Func Offset: 0x128
	// Line 341, Address: 0x24f6d8, Func Offset: 0x178
	// Func End, Address: 0x24f6f0, Func Offset: 0x190
}

// 
// Start address: 0x24f6f0
void dbSwitchSysPrint()
{
	int Y;
	// Line 345, Address: 0x24f6f0, Func Offset: 0
	// Line 347, Address: 0x24f6fc, Func Offset: 0xc
	// Line 348, Address: 0x24f708, Func Offset: 0x18
	// Line 349, Address: 0x24f758, Func Offset: 0x68
	// Line 350, Address: 0x24f77c, Func Offset: 0x8c
	// Line 351, Address: 0x24f7a0, Func Offset: 0xb0
	// Line 352, Address: 0x24f7c4, Func Offset: 0xd4
	// Line 353, Address: 0x24f7e8, Func Offset: 0xf8
	// Line 354, Address: 0x24f7f8, Func Offset: 0x108
	// Line 357, Address: 0x24f800, Func Offset: 0x110
	// Line 358, Address: 0x24f814, Func Offset: 0x124
	// Func End, Address: 0x24f828, Func Offset: 0x138
}

// 
// Start address: 0x24f830
int dbSwitchSysPrintHelp()
{
	// Line 361, Address: 0x24f830, Func Offset: 0
	// Line 362, Address: 0x24f838, Func Offset: 0x8
	// Line 363, Address: 0x24f844, Func Offset: 0x14
	// Func End, Address: 0x24f854, Func Offset: 0x24
}

// 
// Start address: 0x24f860
int dbSwitchSysPadPort()
{
	// Line 366, Address: 0x24f860, Func Offset: 0
	// Line 367, Address: 0x24f868, Func Offset: 0x8
	// Line 368, Address: 0x24f874, Func Offset: 0x14
	// Func End, Address: 0x24f884, Func Offset: 0x24
}

// 
// Start address: 0x24f890
int dbSwitchSysPrintAllPages()
{
	// Line 371, Address: 0x24f890, Func Offset: 0
	// Line 372, Address: 0x24f898, Func Offset: 0x8
	// Line 373, Address: 0x24f8a4, Func Offset: 0x14
	// Func End, Address: 0x24f8b4, Func Offset: 0x24
}

// 
// Start address: 0x24f8c0
int dbSwitchSysPrintNotOnlyPort1()
{
	// Line 376, Address: 0x24f8c0, Func Offset: 0
	// Line 377, Address: 0x24f8c8, Func Offset: 0x8
	// Line 378, Address: 0x24f8d4, Func Offset: 0x14
	// Func End, Address: 0x24f8e4, Func Offset: 0x24
}

