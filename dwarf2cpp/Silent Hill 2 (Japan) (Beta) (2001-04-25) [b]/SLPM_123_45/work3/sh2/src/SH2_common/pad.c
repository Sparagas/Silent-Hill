typedef union shGameKeyData;
typedef struct _anon0;
typedef struct Pad_KeyConfig;


typedef shGameKeyData type_0[1];
typedef unsigned char type_1[32];
typedef unsigned char type_2[32][2];
typedef unsigned char type_3[20];
typedef unsigned char type_4[20][2];
typedef float type_5[20];
typedef float type_6[20][2];
typedef int type_7[2];

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

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
};

Pad_KeyConfig key_config;
int pad_x;
float padf[20][2];
unsigned char pad_bak[20][2];
unsigned char pad[32][2];
int repeat[2];
float dtf;

void shPadInit();
void shPadSet();
int shPadGetPort();
int shPadPress(int port, int key);
int shPadTrigger(int port, int key);
int shPadRepeat(int port, int key);

// 
// Start address: 0x1cba30
void shPadInit()
{
	// Line 36, Address: 0x1cba30, Func Offset: 0
	// Line 43, Address: 0x1cba38, Func Offset: 0x8
	// Line 44, Address: 0x1cba4c, Func Offset: 0x1c
	// Line 45, Address: 0x1cba60, Func Offset: 0x30
	// Line 46, Address: 0x1cba74, Func Offset: 0x44
	// Line 51, Address: 0x1cba80, Func Offset: 0x50
	// Line 52, Address: 0x1cba8c, Func Offset: 0x5c
	// Line 53, Address: 0x1cba98, Func Offset: 0x68
	// Line 54, Address: 0x1cbaa4, Func Offset: 0x74
	// Line 55, Address: 0x1cbab0, Func Offset: 0x80
	// Line 56, Address: 0x1cbabc, Func Offset: 0x8c
	// Line 57, Address: 0x1cbac8, Func Offset: 0x98
	// Line 58, Address: 0x1cbad4, Func Offset: 0xa4
	// Line 59, Address: 0x1cbae0, Func Offset: 0xb0
	// Line 60, Address: 0x1cbaec, Func Offset: 0xbc
	// Line 61, Address: 0x1cbaf8, Func Offset: 0xc8
	// Line 62, Address: 0x1cbb04, Func Offset: 0xd4
	// Line 71, Address: 0x1cbb10, Func Offset: 0xe0
	// Line 72, Address: 0x1cbb1c, Func Offset: 0xec
	// Line 73, Address: 0x1cbb28, Func Offset: 0xf8
	// Line 74, Address: 0x1cbb34, Func Offset: 0x104
	// Line 75, Address: 0x1cbb40, Func Offset: 0x110
	// Line 76, Address: 0x1cbb4c, Func Offset: 0x11c
	// Line 79, Address: 0x1cbb58, Func Offset: 0x128
	// Func End, Address: 0x1cbb68, Func Offset: 0x138
}

// 
// Start address: 0x1cbb70
void shPadSet()
{
	shGameKeyData key[1];
	int j;
	int i;
	int work;
	// Line 87, Address: 0x1cbb70, Func Offset: 0
	// Line 91, Address: 0x1cbb84, Func Offset: 0x14
	// Line 92, Address: 0x1cbb90, Func Offset: 0x20
	// Line 93, Address: 0x1cbbb0, Func Offset: 0x40
	// Line 94, Address: 0x1cbbd0, Func Offset: 0x60
	// Line 95, Address: 0x1cbbe4, Func Offset: 0x74
	// Line 108, Address: 0x1cbbf4, Func Offset: 0x84
	// Line 109, Address: 0x1cbc0c, Func Offset: 0x9c
	// Line 129, Address: 0x1cbc24, Func Offset: 0xb4
	// Line 130, Address: 0x1cbc34, Func Offset: 0xc4
	// Line 148, Address: 0x1cbc44, Func Offset: 0xd4
	// Line 153, Address: 0x1cbc50, Func Offset: 0xe0
	// Line 157, Address: 0x1cbc88, Func Offset: 0x118
	// Line 158, Address: 0x1cbcb0, Func Offset: 0x140
	// Line 159, Address: 0x1cbcd8, Func Offset: 0x168
	// Line 160, Address: 0x1cbd00, Func Offset: 0x190
	// Line 179, Address: 0x1cbd28, Func Offset: 0x1b8
	// Line 180, Address: 0x1cbd3c, Func Offset: 0x1cc
	// Line 181, Address: 0x1cbd48, Func Offset: 0x1d8
	// Line 182, Address: 0x1cbd54, Func Offset: 0x1e4
	// Line 183, Address: 0x1cbd74, Func Offset: 0x204
	// Line 184, Address: 0x1cbdd8, Func Offset: 0x268
	// Line 185, Address: 0x1cbe0c, Func Offset: 0x29c
	// Line 186, Address: 0x1cbe50, Func Offset: 0x2e0
	// Line 187, Address: 0x1cbe74, Func Offset: 0x304
	// Line 189, Address: 0x1cbeb0, Func Offset: 0x340
	// Line 190, Address: 0x1cbee0, Func Offset: 0x370
	// Line 191, Address: 0x1cbef4, Func Offset: 0x384
	// Line 194, Address: 0x1cbf04, Func Offset: 0x394
	// Line 195, Address: 0x1cbf20, Func Offset: 0x3b0
	// Line 196, Address: 0x1cbf34, Func Offset: 0x3c4
	// Line 197, Address: 0x1cbf54, Func Offset: 0x3e4
	// Line 199, Address: 0x1cbf6c, Func Offset: 0x3fc
	// Func End, Address: 0x1cbf88, Func Offset: 0x418
}

// 
// Start address: 0x1cbf90
int shPadGetPort()
{
	// Line 202, Address: 0x1cbf90, Func Offset: 0
	// Line 203, Address: 0x1cbf98, Func Offset: 0x8
	// Line 204, Address: 0x1cbfb4, Func Offset: 0x24
	// Line 205, Address: 0x1cbfc0, Func Offset: 0x30
	// Func End, Address: 0x1cbfd0, Func Offset: 0x40
}

// 
// Start address: 0x1cbfd0
int shPadPress(int port, int key)
{
	int i;
	int ret;
	// Line 214, Address: 0x1cbfd0, Func Offset: 0
	// Line 218, Address: 0x1cbfe8, Func Offset: 0x18
	// Line 219, Address: 0x1cbff0, Func Offset: 0x20
	// Line 220, Address: 0x1cc018, Func Offset: 0x48
	// Line 221, Address: 0x1cc044, Func Offset: 0x74
	// Line 224, Address: 0x1cc048, Func Offset: 0x78
	// Line 225, Address: 0x1cc04c, Func Offset: 0x7c
	// Line 226, Address: 0x1cc058, Func Offset: 0x88
	// Line 228, Address: 0x1cc0a4, Func Offset: 0xd4
	// Func End, Address: 0x1cc0bc, Func Offset: 0xec
}

// 
// Start address: 0x1cc0c0
int shPadTrigger(int port, int key)
{
	int i;
	int ret;
	// Line 237, Address: 0x1cc0c0, Func Offset: 0
	// Line 241, Address: 0x1cc0d8, Func Offset: 0x18
	// Line 242, Address: 0x1cc0e0, Func Offset: 0x20
	// Line 243, Address: 0x1cc108, Func Offset: 0x48
	// Line 244, Address: 0x1cc134, Func Offset: 0x74
	// Line 247, Address: 0x1cc138, Func Offset: 0x78
	// Line 248, Address: 0x1cc13c, Func Offset: 0x7c
	// Line 249, Address: 0x1cc148, Func Offset: 0x88
	// Line 250, Address: 0x1cc180, Func Offset: 0xc0
	// Line 252, Address: 0x1cc1bc, Func Offset: 0xfc
	// Func End, Address: 0x1cc1d4, Func Offset: 0x114
}

// 
// Start address: 0x1cc1e0
int shPadRepeat(int port, int key)
{
	int i;
	int ret;
	// Line 262, Address: 0x1cc1e0, Func Offset: 0
	// Line 266, Address: 0x1cc1f8, Func Offset: 0x18
	// Line 267, Address: 0x1cc200, Func Offset: 0x20
	// Line 268, Address: 0x1cc228, Func Offset: 0x48
	// Line 269, Address: 0x1cc254, Func Offset: 0x74
	// Line 272, Address: 0x1cc258, Func Offset: 0x78
	// Line 273, Address: 0x1cc25c, Func Offset: 0x7c
	// Line 274, Address: 0x1cc268, Func Offset: 0x88
	// Line 275, Address: 0x1cc298, Func Offset: 0xb8
	// Line 278, Address: 0x1cc2d4, Func Offset: 0xf4
	// Func End, Address: 0x1cc2ec, Func Offset: 0x10c
}

