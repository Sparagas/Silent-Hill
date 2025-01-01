typedef struct _loadBgCommon_Info_T;


typedef int type_0[4];
typedef int type_1[5];
typedef int type_2[5][5];
typedef _loadBgCommon_Info_T type_3[1];

struct _loadBgCommon_Info_T
{
	int glb_crd;
	float px;
	float pz;
	float fcx;
	float fcz;
	int icx;
	int icz;
	int minx;
	int minz;
	int outdoor;
	int RoomID;
	int BlockID[4];
	int AroundID[5][5];
	int unit;
	int load;
	int need;
	int lock;
	int miss;
	int hide_map;
	int hide_map_request;
};

_loadBgCommon_Info_T _loadBgCommon_Info[1];

char* dbSwitchMapHelp(int Y);
int dbSwitchMap(int Y);
void printR_mapblock();
void init_map(int i);
void dbSwitchMapPrint();
void dbSwitchMapInit();

// 
// Start address: 0x252150
char* dbSwitchMapHelp(int Y)
{
	char* help;
	// Line 37, Address: 0x252150, Func Offset: 0
	// Line 38, Address: 0x252154, Func Offset: 0x4
	// Line 40, Address: 0x25217c, Func Offset: 0x2c
	// Line 41, Address: 0x252184, Func Offset: 0x34
	// Line 45, Address: 0x25218c, Func Offset: 0x3c
	// Line 46, Address: 0x252194, Func Offset: 0x44
	// Line 48, Address: 0x25219c, Func Offset: 0x4c
	// Line 49, Address: 0x2521a4, Func Offset: 0x54
	// Line 51, Address: 0x2521ac, Func Offset: 0x5c
	// Line 52, Address: 0x2521b4, Func Offset: 0x64
	// Line 54, Address: 0x2521bc, Func Offset: 0x6c
	// Line 55, Address: 0x2521c4, Func Offset: 0x74
	// Line 57, Address: 0x2521cc, Func Offset: 0x7c
	// Line 58, Address: 0x2521d4, Func Offset: 0x84
	// Line 60, Address: 0x2521dc, Func Offset: 0x8c
	// Line 61, Address: 0x2521e4, Func Offset: 0x94
	// Line 63, Address: 0x2521ec, Func Offset: 0x9c
	// Line 64, Address: 0x2521f4, Func Offset: 0xa4
	// Line 66, Address: 0x2521fc, Func Offset: 0xac
	// Line 67, Address: 0x252204, Func Offset: 0xb4
	// Line 69, Address: 0x25220c, Func Offset: 0xbc
	// Line 70, Address: 0x252214, Func Offset: 0xc4
	// Line 72, Address: 0x25221c, Func Offset: 0xcc
	// Line 73, Address: 0x252224, Func Offset: 0xd4
	// Line 75, Address: 0x25222c, Func Offset: 0xdc
	// Line 76, Address: 0x252234, Func Offset: 0xe4
	// Line 78, Address: 0x25223c, Func Offset: 0xec
	// Line 79, Address: 0x252244, Func Offset: 0xf4
	// Line 81, Address: 0x25224c, Func Offset: 0xfc
	// Line 82, Address: 0x252254, Func Offset: 0x104
	// Line 84, Address: 0x25225c, Func Offset: 0x10c
	// Line 85, Address: 0x252264, Func Offset: 0x114
	// Line 87, Address: 0x25226c, Func Offset: 0x11c
	// Line 88, Address: 0x252274, Func Offset: 0x124
	// Line 90, Address: 0x25227c, Func Offset: 0x12c
	// Line 97, Address: 0x252284, Func Offset: 0x134
	// Func End, Address: 0x25228c, Func Offset: 0x13c
}

// 
// Start address: 0x252290
int dbSwitchMap(int Y)
{
	// Line 100, Address: 0x252290, Func Offset: 0
	// Line 101, Address: 0x25229c, Func Offset: 0xc
	// Line 102, Address: 0x2522a8, Func Offset: 0x18
	// Func End, Address: 0x2522b8, Func Offset: 0x28
}

// 
// Start address: 0x2522c0
void printR_mapblock()
{
	// Line 468, Address: 0x2522c0, Func Offset: 0
	// Func End, Address: 0x2522c8, Func Offset: 0x8
}

// 
// Start address: 0x2522d0
void init_map(int i)
{
	int clear;
	// Line 471, Address: 0x2522d0, Func Offset: 0
	// Line 473, Address: 0x2522dc, Func Offset: 0xc
	// Line 474, Address: 0x252310, Func Offset: 0x40
	// Line 475, Address: 0x25231c, Func Offset: 0x4c
	// Line 476, Address: 0x252328, Func Offset: 0x58
	// Line 477, Address: 0x252334, Func Offset: 0x64
	// Line 478, Address: 0x252340, Func Offset: 0x70
	// Line 480, Address: 0x252348, Func Offset: 0x78
	// Line 481, Address: 0x25235c, Func Offset: 0x8c
	// Line 485, Address: 0x252370, Func Offset: 0xa0
	// Func End, Address: 0x252384, Func Offset: 0xb4
}

// 
// Start address: 0x252390
void dbSwitchMapPrint()
{
	int Y;
	// Line 490, Address: 0x252390, Func Offset: 0
	// Line 493, Address: 0x25239c, Func Offset: 0xc
	// Line 494, Address: 0x2523a8, Func Offset: 0x18
	// Line 495, Address: 0x2523e8, Func Offset: 0x58
	// Line 496, Address: 0x25240c, Func Offset: 0x7c
	// Line 497, Address: 0x252434, Func Offset: 0xa4
	// Line 498, Address: 0x25245c, Func Offset: 0xcc
	// Line 499, Address: 0x252484, Func Offset: 0xf4
	// Line 501, Address: 0x2524a4, Func Offset: 0x114
	// Line 502, Address: 0x2524a8, Func Offset: 0x118
	// Line 503, Address: 0x2524bc, Func Offset: 0x12c
	// Func End, Address: 0x2524d0, Func Offset: 0x140
}

// 
// Start address: 0x2524d0
void dbSwitchMapInit()
{
	// Line 506, Address: 0x2524d0, Func Offset: 0
	// Line 507, Address: 0x2524d8, Func Offset: 0x8
	// Line 508, Address: 0x2524ec, Func Offset: 0x1c
	// Line 516, Address: 0x252500, Func Offset: 0x30
	// Func End, Address: 0x252510, Func Offset: 0x40
}

