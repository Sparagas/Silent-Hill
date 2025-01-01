typedef enum DBSW_ID : unsigned char;


typedef char* type_0[2];
typedef char* type_1[2][2];
typedef unsigned int type_2[16];

enum DBSW_ID : unsigned char
{
	DBSW_SYS,
	DBSW_SUGAI,
	DBSW_TMP = 0xf,
	DB_SWITCH_MAX
};

unsigned int dbSwitchStat[16];
int dbSwitchX;
int dbSwitchY;
int dbSwitchDispF;

void dbSwitchDispIndicator(int enable, int o, int x, int dx, int dy);
int dbSwitchDispEnable(int enable);
int dbSwitchInit(DBSW_ID _X, unsigned long bit_pattern);
int dbSwitchSet(DBSW_ID _X, int Y, int set);
int dbSwitch(DBSW_ID _X, int Y);
int dbSwitchGetPos(int* Xp, int* Yp);

// 
// Start address: 0x21fd20
void dbSwitchDispIndicator(int enable, int o, int x, int dx, int dy)
{
	int just;
	int bit;
	char* sym[2][2];
	int Y;
	// Line 17, Address: 0x21fd20, Func Offset: 0
	// Line 19, Address: 0x21fd48, Func Offset: 0x28
	// Line 21, Address: 0x21fd5c, Func Offset: 0x3c
	// Line 23, Address: 0x21fd68, Func Offset: 0x48
	// Line 24, Address: 0x21fd74, Func Offset: 0x54
	// Line 26, Address: 0x21fd8c, Func Offset: 0x6c
	// Line 29, Address: 0x21fd94, Func Offset: 0x74
	// Line 30, Address: 0x21fdb8, Func Offset: 0x98
	// Line 32, Address: 0x21fdc8, Func Offset: 0xa8
	// Line 33, Address: 0x21fde0, Func Offset: 0xc0
	// Line 34, Address: 0x21fdf8, Func Offset: 0xd8
	// Line 35, Address: 0x21fe10, Func Offset: 0xf0
	// Line 36, Address: 0x21fe30, Func Offset: 0x110
	// Line 37, Address: 0x21fe48, Func Offset: 0x128
	// Line 38, Address: 0x21fe68, Func Offset: 0x148
	// Line 39, Address: 0x21fe74, Func Offset: 0x154
	// Line 42, Address: 0x21fea8, Func Offset: 0x188
	// Line 43, Address: 0x21fec0, Func Offset: 0x1a0
	// Line 46, Address: 0x21fecc, Func Offset: 0x1ac
	// Line 47, Address: 0x21fef0, Func Offset: 0x1d0
	// Line 49, Address: 0x21ff00, Func Offset: 0x1e0
	// Line 50, Address: 0x21ff2c, Func Offset: 0x20c
	// Line 51, Address: 0x21ff3c, Func Offset: 0x21c
	// Line 52, Address: 0x21ff58, Func Offset: 0x238
	// Line 54, Address: 0x21ff6c, Func Offset: 0x24c
	// Line 56, Address: 0x21ff70, Func Offset: 0x250
	// Func End, Address: 0x21ff8c, Func Offset: 0x26c
}

// 
// Start address: 0x21ff90
int dbSwitchDispEnable(int enable)
{
	// Line 60, Address: 0x21ff90, Func Offset: 0
	// Line 61, Address: 0x21ff98, Func Offset: 0x8
	// Line 62, Address: 0x21ffa4, Func Offset: 0x14
	// Line 64, Address: 0x21ffb4, Func Offset: 0x24
	// Line 66, Address: 0x21ffc0, Func Offset: 0x30
	// Func End, Address: 0x21ffcc, Func Offset: 0x3c
}

// 
// Start address: 0x21ffd0
int dbSwitchInit(DBSW_ID _X, unsigned long bit_pattern)
{
	int X;
	// Line 70, Address: 0x21ffd0, Func Offset: 0
	// Line 71, Address: 0x21ffe0, Func Offset: 0x10
	// Line 73, Address: 0x21ffe8, Func Offset: 0x18
	// Line 74, Address: 0x21fffc, Func Offset: 0x2c
	// Line 76, Address: 0x220014, Func Offset: 0x44
	// Line 77, Address: 0x22002c, Func Offset: 0x5c
	// Line 78, Address: 0x220030, Func Offset: 0x60
	// Func End, Address: 0x220040, Func Offset: 0x70
}

// 
// Start address: 0x220040
int dbSwitchSet(DBSW_ID _X, int Y, int set)
{
	int X;
	// Line 82, Address: 0x220040, Func Offset: 0
	// Line 83, Address: 0x220054, Func Offset: 0x14
	// Line 85, Address: 0x22005c, Func Offset: 0x1c
	// Line 86, Address: 0x220070, Func Offset: 0x30
	// Line 87, Address: 0x220088, Func Offset: 0x48
	// Line 88, Address: 0x2200a0, Func Offset: 0x60
	// Line 90, Address: 0x2200bc, Func Offset: 0x7c
	// Line 91, Address: 0x2200c8, Func Offset: 0x88
	// Line 92, Address: 0x2200f0, Func Offset: 0xb0
	// Line 93, Address: 0x2200f8, Func Offset: 0xb8
	// Line 95, Address: 0x220124, Func Offset: 0xe4
	// Line 96, Address: 0x220128, Func Offset: 0xe8
	// Func End, Address: 0x220138, Func Offset: 0xf8
}

// 
// Start address: 0x220140
int dbSwitch(DBSW_ID _X, int Y)
{
	int X;
	// Line 100, Address: 0x220140, Func Offset: 0
	// Line 101, Address: 0x220150, Func Offset: 0x10
	// Line 103, Address: 0x220158, Func Offset: 0x18
	// Line 104, Address: 0x22016c, Func Offset: 0x2c
	// Line 105, Address: 0x220184, Func Offset: 0x44
	// Line 106, Address: 0x22019c, Func Offset: 0x5c
	// Line 108, Address: 0x2201b8, Func Offset: 0x78
	// Line 110, Address: 0x2201d4, Func Offset: 0x94
	// Line 111, Address: 0x2201fc, Func Offset: 0xbc
	// Func End, Address: 0x22020c, Func Offset: 0xcc
}

// 
// Start address: 0x220210
int dbSwitchGetPos(int* Xp, int* Yp)
{
	// Line 115, Address: 0x220210, Func Offset: 0
	// Line 116, Address: 0x220220, Func Offset: 0x10
	// Line 117, Address: 0x22023c, Func Offset: 0x2c
	// Line 118, Address: 0x220258, Func Offset: 0x48
	// Line 119, Address: 0x220274, Func Offset: 0x64
	// Func End, Address: 0x220284, Func Offset: 0x74
}

