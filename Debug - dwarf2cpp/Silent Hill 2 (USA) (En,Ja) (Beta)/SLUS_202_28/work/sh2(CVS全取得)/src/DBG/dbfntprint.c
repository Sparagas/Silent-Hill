typedef struct _anon0;

typedef void(*type_1)(char*);
typedef void(*type_3)(char*);
typedef void(*type_6)(char*);

typedef char type_0[128];
typedef char type_2[128];
typedef char type_4[512];
typedef char type_5[512];

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
void _dbfntprint(char* buf);
void _dbfntprintR(char* buf);
void dbfntprint(char* buf);
void dbfntprintR(char* buf);
int _dbfntvsnprintf(void(*dbfntprintfunc)(char*), char* buf, int limit, char* fmt, char* argp);
int dbfntprintf(char* fmt);
int dbfntprintfR(char* fmt);

// 
// Start address: 0x1c5e00
void dbfntlocate(int x, int y)
{
	// Line 39, Address: 0x1c5e00, Func Offset: 0
	// Line 40, Address: 0x1c5e10, Func Offset: 0x10
	// Line 41, Address: 0x1c5e20, Func Offset: 0x20
	// Func End, Address: 0x1c5e28, Func Offset: 0x28
}

// 
// Start address: 0x1c5e30
void dbfntlocateR(int x, int y)
{
	// Line 45, Address: 0x1c5e30, Func Offset: 0
	// Line 46, Address: 0x1c5e38, Func Offset: 0x8
	// Line 47, Address: 0x1c5e48, Func Offset: 0x18
	// Func End, Address: 0x1c5e50, Func Offset: 0x20
}

// 
// Start address: 0x1c5e50
int printline(char* cp, char* top)
{
	char line[128];
	int l;
	// Line 78, Address: 0x1c5e50, Func Offset: 0
	// Line 82, Address: 0x1c5e5c, Func Offset: 0xc
	// Line 83, Address: 0x1c5e60, Func Offset: 0x10
	// Line 85, Address: 0x1c5e68, Func Offset: 0x18
	// Line 86, Address: 0x1c5e78, Func Offset: 0x28
	// Line 87, Address: 0x1c5e88, Func Offset: 0x38
	// Line 88, Address: 0x1c5e90, Func Offset: 0x40
	// Line 89, Address: 0x1c5eac, Func Offset: 0x5c
	// Line 90, Address: 0x1c5eb4, Func Offset: 0x64
	// Line 92, Address: 0x1c5eb8, Func Offset: 0x68
	// Line 93, Address: 0x1c5ebc, Func Offset: 0x6c
	// Func End, Address: 0x1c5ed0, Func Offset: 0x80
}

// 
// Start address: 0x1c5ed0
int printlineR(char* cp, char* top)
{
	char line[128];
	int l;
	// Line 96, Address: 0x1c5ed0, Func Offset: 0
	// Line 100, Address: 0x1c5edc, Func Offset: 0xc
	// Line 101, Address: 0x1c5ee0, Func Offset: 0x10
	// Line 103, Address: 0x1c5ee8, Func Offset: 0x18
	// Line 104, Address: 0x1c5ef4, Func Offset: 0x24
	// Line 105, Address: 0x1c5efc, Func Offset: 0x2c
	// Line 107, Address: 0x1c5f00, Func Offset: 0x30
	// Line 108, Address: 0x1c5f10, Func Offset: 0x40
	// Line 109, Address: 0x1c5f18, Func Offset: 0x48
	// Line 110, Address: 0x1c5f44, Func Offset: 0x74
	// Line 111, Address: 0x1c5f4c, Func Offset: 0x7c
	// Line 113, Address: 0x1c5f50, Func Offset: 0x80
	// Line 114, Address: 0x1c5f54, Func Offset: 0x84
	// Func End, Address: 0x1c5f68, Func Offset: 0x98
}

// 
// Start address: 0x1c5f70
void _dbfntprint(char* buf)
{
	char* t;
	char* cp;
	// Line 117, Address: 0x1c5f70, Func Offset: 0
	// Line 120, Address: 0x1c5f7c, Func Offset: 0xc
	// Line 121, Address: 0x1c5f84, Func Offset: 0x14
	// Line 123, Address: 0x1c5f8c, Func Offset: 0x1c
	// Line 125, Address: 0x1c5fc4, Func Offset: 0x54
	// Line 126, Address: 0x1c5fd0, Func Offset: 0x60
	// Line 127, Address: 0x1c5fd4, Func Offset: 0x64
	// Line 128, Address: 0x1c5fe4, Func Offset: 0x74
	// Line 129, Address: 0x1c6000, Func Offset: 0x90
	// Line 131, Address: 0x1c6008, Func Offset: 0x98
	// Line 132, Address: 0x1c6034, Func Offset: 0xc4
	// Line 133, Address: 0x1c6038, Func Offset: 0xc8
	// Line 134, Address: 0x1c6060, Func Offset: 0xf0
	// Line 137, Address: 0x1c6068, Func Offset: 0xf8
	// Line 138, Address: 0x1c6074, Func Offset: 0x104
	// Line 139, Address: 0x1c6078, Func Offset: 0x108
	// Line 140, Address: 0x1c6088, Func Offset: 0x118
	// Line 142, Address: 0x1c6090, Func Offset: 0x120
	// Line 143, Address: 0x1c60bc, Func Offset: 0x14c
	// Line 144, Address: 0x1c60c0, Func Offset: 0x150
	// Line 147, Address: 0x1c60dc, Func Offset: 0x16c
	// Line 160, Address: 0x1c60e0, Func Offset: 0x170
	// Line 161, Address: 0x1c60e4, Func Offset: 0x174
	// Line 162, Address: 0x1c60f4, Func Offset: 0x184
	// Line 163, Address: 0x1c6100, Func Offset: 0x190
	// Func End, Address: 0x1c6114, Func Offset: 0x1a4
}

// 
// Start address: 0x1c6120
void _dbfntprintR(char* buf)
{
	char* t;
	char* cp;
	// Line 166, Address: 0x1c6120, Func Offset: 0
	// Line 169, Address: 0x1c612c, Func Offset: 0xc
	// Line 170, Address: 0x1c6134, Func Offset: 0x14
	// Line 171, Address: 0x1c613c, Func Offset: 0x1c
	// Line 176, Address: 0x1c6174, Func Offset: 0x54
	// Line 177, Address: 0x1c6180, Func Offset: 0x60
	// Line 178, Address: 0x1c6184, Func Offset: 0x64
	// Line 179, Address: 0x1c61a0, Func Offset: 0x80
	// Line 182, Address: 0x1c61a8, Func Offset: 0x88
	// Line 183, Address: 0x1c61b4, Func Offset: 0x94
	// Line 188, Address: 0x1c61b8, Func Offset: 0x98
	// Line 189, Address: 0x1c61bc, Func Offset: 0x9c
	// Line 190, Address: 0x1c61cc, Func Offset: 0xac
	// Line 191, Address: 0x1c61d8, Func Offset: 0xb8
	// Func End, Address: 0x1c61ec, Func Offset: 0xcc
}

// 
// Start address: 0x1c61f0
void dbfntprint(char* buf)
{
	// Line 195, Address: 0x1c61f0, Func Offset: 0
	// Line 196, Address: 0x1c6200, Func Offset: 0x10
	// Line 197, Address: 0x1c6214, Func Offset: 0x24
	// Line 198, Address: 0x1c6220, Func Offset: 0x30
	// Func End, Address: 0x1c6234, Func Offset: 0x44
}

// 
// Start address: 0x1c6240
void dbfntprintR(char* buf)
{
	// Line 201, Address: 0x1c6240, Func Offset: 0
	// Line 202, Address: 0x1c6250, Func Offset: 0x10
	// Line 203, Address: 0x1c6264, Func Offset: 0x24
	// Line 204, Address: 0x1c6270, Func Offset: 0x30
	// Func End, Address: 0x1c6284, Func Offset: 0x44
}

// 
// Start address: 0x1c6290
int _dbfntvsnprintf(void(*dbfntprintfunc)(char*), char* buf, int limit, char* fmt, char* argp)
{
	int len;
	// Line 242, Address: 0x1c6290, Func Offset: 0
	// Line 245, Address: 0x1c62b4, Func Offset: 0x24
	// Line 246, Address: 0x1c62cc, Func Offset: 0x3c
	// Line 247, Address: 0x1c62d8, Func Offset: 0x48
	// Line 252, Address: 0x1c62ec, Func Offset: 0x5c
	// Line 254, Address: 0x1c62f8, Func Offset: 0x68
	// Line 259, Address: 0x1c6304, Func Offset: 0x74
	// Line 260, Address: 0x1c6308, Func Offset: 0x78
	// Func End, Address: 0x1c6328, Func Offset: 0x98
}

// 
// Start address: 0x1c6330
int dbfntprintf(char* fmt)
{
	char* argp;
	char buf[512];
	// Line 263, Address: 0x1c6330, Func Offset: 0
	// Line 268, Address: 0x1c635c, Func Offset: 0x2c
	// Line 275, Address: 0x1c638c, Func Offset: 0x5c
	// Line 279, Address: 0x1c63cc, Func Offset: 0x9c
	// Func End, Address: 0x1c63e0, Func Offset: 0xb0
}

// 
// Start address: 0x1c63e0
int dbfntprintfR(char* fmt)
{
	char* argp;
	char buf[512];
	// Line 301, Address: 0x1c63e0, Func Offset: 0
	// Line 306, Address: 0x1c640c, Func Offset: 0x2c
	// Line 313, Address: 0x1c643c, Func Offset: 0x5c
	// Line 317, Address: 0x1c647c, Func Offset: 0x9c
	// Func End, Address: 0x1c6490, Func Offset: 0xb0
}

