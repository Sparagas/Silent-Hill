typedef enum DBSW_ID : unsigned char;


typedef char* type_0[2];
typedef char* type_1[2][2];
typedef unsigned int type_2[2];

enum DBSW_ID : unsigned char
{
	DBSW_SYS,
	DBSW_MAP,
	DB_SWITCH_MAX
};

unsigned int dbSwitchStat[2];
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
// Start address: 0x221f90
void dbSwitchDispIndicator(int enable, int o, int x, int dx, int dy)
{
	int just;
	int bit;
	char* sym[2][2];
	int Y;
	// Line 17, Address: 0x221f90, Func Offset: 0
	// Line 19, Address: 0x221f9c, Func Offset: 0xc
	// Line 21, Address: 0x221fb0, Func Offset: 0x20
	// Line 23, Address: 0x221fb8, Func Offset: 0x28
	// Line 24, Address: 0x221fbc, Func Offset: 0x2c
	// Line 26, Address: 0x221fcc, Func Offset: 0x3c
	// Line 29, Address: 0x221fd4, Func Offset: 0x44
	// Line 30, Address: 0x221ff4, Func Offset: 0x64
	// Line 32, Address: 0x222004, Func Offset: 0x74
	// Line 33, Address: 0x222018, Func Offset: 0x88
	// Line 34, Address: 0x22202c, Func Offset: 0x9c
	// Line 35, Address: 0x222044, Func Offset: 0xb4
	// Line 36, Address: 0x222064, Func Offset: 0xd4
	// Line 37, Address: 0x22207c, Func Offset: 0xec
	// Line 38, Address: 0x22209c, Func Offset: 0x10c
	// Line 39, Address: 0x2220a4, Func Offset: 0x114
	// Line 42, Address: 0x2220d8, Func Offset: 0x148
	// Line 43, Address: 0x2220f0, Func Offset: 0x160
	// Line 46, Address: 0x2220fc, Func Offset: 0x16c
	// Line 47, Address: 0x22211c, Func Offset: 0x18c
	// Line 48, Address: 0x22212c, Func Offset: 0x19c
	// Line 49, Address: 0x222130, Func Offset: 0x1a0
	// Line 50, Address: 0x222158, Func Offset: 0x1c8
	// Line 51, Address: 0x222160, Func Offset: 0x1d0
	// Line 52, Address: 0x222188, Func Offset: 0x1f8
	// Line 55, Address: 0x22219c, Func Offset: 0x20c
	// Line 56, Address: 0x2221a0, Func Offset: 0x210
	// Func End, Address: 0x2221b4, Func Offset: 0x224
}

// 
// Start address: 0x2221c0
int dbSwitchDispEnable(int enable)
{
	// Line 62, Address: 0x2221c0, Func Offset: 0
	// Line 66, Address: 0x2221e4, Func Offset: 0x24
	// Func End, Address: 0x2221ec, Func Offset: 0x2c
}

// 
// Start address: 0x2221f0
int dbSwitchInit(DBSW_ID _X, unsigned long bit_pattern)
{
	int X;
	// Line 71, Address: 0x2221f0, Func Offset: 0
	// Line 73, Address: 0x2221f4, Func Offset: 0x4
	// Line 74, Address: 0x222208, Func Offset: 0x18
	// Line 76, Address: 0x222220, Func Offset: 0x30
	// Line 77, Address: 0x222234, Func Offset: 0x44
	// Line 78, Address: 0x222238, Func Offset: 0x48
	// Func End, Address: 0x222240, Func Offset: 0x50
}

// 
// Start address: 0x222240
int dbSwitchSet(DBSW_ID _X, int Y, int set)
{
	int X;
	// Line 83, Address: 0x222240, Func Offset: 0
	// Line 85, Address: 0x222244, Func Offset: 0x4
	// Line 86, Address: 0x222258, Func Offset: 0x18
	// Line 87, Address: 0x222270, Func Offset: 0x30
	// Line 88, Address: 0x222284, Func Offset: 0x44
	// Line 90, Address: 0x22229c, Func Offset: 0x5c
	// Line 91, Address: 0x2222a4, Func Offset: 0x64
	// Line 92, Address: 0x2222c8, Func Offset: 0x88
	// Line 93, Address: 0x2222d0, Func Offset: 0x90
	// Line 95, Address: 0x2222f8, Func Offset: 0xb8
	// Line 96, Address: 0x2222fc, Func Offset: 0xbc
	// Func End, Address: 0x222304, Func Offset: 0xc4
}

// 
// Start address: 0x222310
int dbSwitch(DBSW_ID _X, int Y)
{
	int X;
	// Line 101, Address: 0x222310, Func Offset: 0
	// Line 103, Address: 0x222314, Func Offset: 0x4
	// Line 104, Address: 0x222328, Func Offset: 0x18
	// Line 105, Address: 0x222340, Func Offset: 0x30
	// Line 106, Address: 0x222354, Func Offset: 0x44
	// Line 108, Address: 0x22236c, Func Offset: 0x5c
	// Line 111, Address: 0x2223ac, Func Offset: 0x9c
	// Func End, Address: 0x2223b4, Func Offset: 0xa4
}

// 
// Start address: 0x2223c0
int dbSwitchGetPos(int* Xp, int* Yp)
{
	// Line 115, Address: 0x2223c0, Func Offset: 0
	// Line 116, Address: 0x2223c8, Func Offset: 0x8
	// Line 117, Address: 0x2223dc, Func Offset: 0x1c
	// Line 118, Address: 0x2223f0, Func Offset: 0x30
	// Line 119, Address: 0x222408, Func Offset: 0x48
	// Func End, Address: 0x222418, Func Offset: 0x58
}

