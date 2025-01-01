typedef struct _anon0;

typedef void(*type_0)(char*);
typedef void(*type_1)(char*);
typedef void(*type_6)(char*);

typedef char type_2[512];
typedef char type_3[512];
typedef char type_4[128];
typedef char type_5[512];
typedef char type_7[512];
typedef char type_8[128];

struct _anon0
{
	int xofs;
	int yofs;
	int x;
	int y;
	int w;
	int h;
	int tab;
	int xofsR;
	int yofsR;
	int yR;
};

_anon0 d;
void(*dbfntprint)(char*);
void(*dbfntprintR)(char*);

void dbfntlocate(int x, int y);
void dbfntlocateR(int x, int y);
int printline(char* cp, char* top);
int printlineR(char* cp, char* top);
void dbfntprint(char* buf);
void dbfntprintR(char* buf);
void dbprint(int port, char* buf);
int _dbfntvsnprintf(void(*dbfntprintfunc)(char*), char* buf, int limit, char* fmt, char* argp);
int dbfntprintfR(char* fmt);

// 
// Start address: 0x1cc2f0
void dbfntlocate(int x, int y)
{
	// Line 37, Address: 0x1cc2f0, Func Offset: 0
	// Line 38, Address: 0x1cc2fc, Func Offset: 0xc
	// Line 39, Address: 0x1cc310, Func Offset: 0x20
	// Line 40, Address: 0x1cc324, Func Offset: 0x34
	// Func End, Address: 0x1cc330, Func Offset: 0x40
}

// 
// Start address: 0x1cc330
void dbfntlocateR(int x, int y)
{
	// Line 43, Address: 0x1cc330, Func Offset: 0
	// Line 44, Address: 0x1cc33c, Func Offset: 0xc
	// Line 45, Address: 0x1cc348, Func Offset: 0x18
	// Line 46, Address: 0x1cc35c, Func Offset: 0x2c
	// Func End, Address: 0x1cc368, Func Offset: 0x38
}

// 
// Start address: 0x1cc370
int printline(char* cp, char* top)
{
	char line[128];
	int l;
	// Line 65, Address: 0x1cc370, Func Offset: 0
	// Line 69, Address: 0x1cc384, Func Offset: 0x14
	// Line 70, Address: 0x1cc390, Func Offset: 0x20
	// Line 72, Address: 0x1cc398, Func Offset: 0x28
	// Line 73, Address: 0x1cc3a8, Func Offset: 0x38
	// Line 74, Address: 0x1cc3bc, Func Offset: 0x4c
	// Line 75, Address: 0x1cc3c4, Func Offset: 0x54
	// Line 76, Address: 0x1cc3e0, Func Offset: 0x70
	// Line 77, Address: 0x1cc3e8, Func Offset: 0x78
	// Line 79, Address: 0x1cc3ec, Func Offset: 0x7c
	// Line 80, Address: 0x1cc3f0, Func Offset: 0x80
	// Func End, Address: 0x1cc404, Func Offset: 0x94
}

// 
// Start address: 0x1cc410
int printlineR(char* cp, char* top)
{
	char line[128];
	int l;
	// Line 83, Address: 0x1cc410, Func Offset: 0
	// Line 87, Address: 0x1cc424, Func Offset: 0x14
	// Line 88, Address: 0x1cc430, Func Offset: 0x20
	// Line 90, Address: 0x1cc438, Func Offset: 0x28
	// Line 91, Address: 0x1cc444, Func Offset: 0x34
	// Line 92, Address: 0x1cc454, Func Offset: 0x44
	// Line 94, Address: 0x1cc458, Func Offset: 0x48
	// Line 95, Address: 0x1cc46c, Func Offset: 0x5c
	// Line 96, Address: 0x1cc474, Func Offset: 0x64
	// Line 97, Address: 0x1cc4a0, Func Offset: 0x90
	// Line 98, Address: 0x1cc4a8, Func Offset: 0x98
	// Line 100, Address: 0x1cc4ac, Func Offset: 0x9c
	// Line 101, Address: 0x1cc4b0, Func Offset: 0xa0
	// Func End, Address: 0x1cc4c4, Func Offset: 0xb4
}

// 
// Start address: 0x1cc4d0
void dbfntprint(char* buf)
{
	char* t;
	char* cp;
	// Line 104, Address: 0x1cc4d0, Func Offset: 0
	// Line 107, Address: 0x1cc4e4, Func Offset: 0x14
	// Line 108, Address: 0x1cc4ec, Func Offset: 0x1c
	// Line 110, Address: 0x1cc4f4, Func Offset: 0x24
	// Line 112, Address: 0x1cc538, Func Offset: 0x68
	// Line 113, Address: 0x1cc548, Func Offset: 0x78
	// Line 114, Address: 0x1cc54c, Func Offset: 0x7c
	// Line 115, Address: 0x1cc55c, Func Offset: 0x8c
	// Line 116, Address: 0x1cc578, Func Offset: 0xa8
	// Line 118, Address: 0x1cc580, Func Offset: 0xb0
	// Line 119, Address: 0x1cc5b0, Func Offset: 0xe0
	// Line 120, Address: 0x1cc5b4, Func Offset: 0xe4
	// Line 121, Address: 0x1cc5dc, Func Offset: 0x10c
	// Line 124, Address: 0x1cc5e4, Func Offset: 0x114
	// Line 125, Address: 0x1cc5f4, Func Offset: 0x124
	// Line 126, Address: 0x1cc5f8, Func Offset: 0x128
	// Line 127, Address: 0x1cc608, Func Offset: 0x138
	// Line 129, Address: 0x1cc610, Func Offset: 0x140
	// Line 130, Address: 0x1cc640, Func Offset: 0x170
	// Line 131, Address: 0x1cc644, Func Offset: 0x174
	// Line 147, Address: 0x1cc660, Func Offset: 0x190
	// Line 148, Address: 0x1cc664, Func Offset: 0x194
	// Line 149, Address: 0x1cc67c, Func Offset: 0x1ac
	// Line 150, Address: 0x1cc68c, Func Offset: 0x1bc
	// Func End, Address: 0x1cc6a4, Func Offset: 0x1d4
}

// 
// Start address: 0x1cc6b0
void dbfntprintR(char* buf)
{
	char* t;
	char* cp;
	// Line 153, Address: 0x1cc6b0, Func Offset: 0
	// Line 156, Address: 0x1cc6c4, Func Offset: 0x14
	// Line 157, Address: 0x1cc6cc, Func Offset: 0x1c
	// Line 158, Address: 0x1cc6d4, Func Offset: 0x24
	// Line 163, Address: 0x1cc718, Func Offset: 0x68
	// Line 164, Address: 0x1cc728, Func Offset: 0x78
	// Line 165, Address: 0x1cc72c, Func Offset: 0x7c
	// Line 166, Address: 0x1cc748, Func Offset: 0x98
	// Line 169, Address: 0x1cc750, Func Offset: 0xa0
	// Line 170, Address: 0x1cc760, Func Offset: 0xb0
	// Line 174, Address: 0x1cc764, Func Offset: 0xb4
	// Line 175, Address: 0x1cc768, Func Offset: 0xb8
	// Line 176, Address: 0x1cc76c, Func Offset: 0xbc
	// Line 177, Address: 0x1cc784, Func Offset: 0xd4
	// Line 178, Address: 0x1cc794, Func Offset: 0xe4
	// Func End, Address: 0x1cc7ac, Func Offset: 0xfc
}

// 
// Start address: 0x1cc7b0
void dbprint(int port, char* buf)
{
	// Line 193, Address: 0x1cc7b0, Func Offset: 0
	// Line 194, Address: 0x1cc7c4, Func Offset: 0x14
	// Line 195, Address: 0x1cc7f0, Func Offset: 0x40
	// Func End, Address: 0x1cc804, Func Offset: 0x54
}

// 
// Start address: 0x1cc810
int _dbfntvsnprintf(void(*dbfntprintfunc)(char*), char* buf, int limit, char* fmt, char* argp)
{
	int len;
	// Line 212, Address: 0x1cc810, Func Offset: 0
	// Line 215, Address: 0x1cc830, Func Offset: 0x20
	// Line 216, Address: 0x1cc848, Func Offset: 0x38
	// Line 217, Address: 0x1cc858, Func Offset: 0x48
	// Line 222, Address: 0x1cc86c, Func Offset: 0x5c
	// Line 224, Address: 0x1cc878, Func Offset: 0x68
	// Line 229, Address: 0x1cc888, Func Offset: 0x78
	// Line 230, Address: 0x1cc88c, Func Offset: 0x7c
	// Func End, Address: 0x1cc8a0, Func Offset: 0x90
}

// 
// Start address: 0x1cc8a0
int dbfntprintfR(char* fmt)
{
	char* argp;
	char buf[512];
	int len;
	// Line 267, Address: 0x1cc8a0, Func Offset: 0
	// Line 272, Address: 0x1cc8d4, Func Offset: 0x34
	// Line 273, Address: 0x1cc908, Func Offset: 0x68
	// Line 275, Address: 0x1cc92c, Func Offset: 0x8c
	// Line 279, Address: 0x1cc930, Func Offset: 0x90
	// Func End, Address: 0x1cc94c, Func Offset: 0xac
}

