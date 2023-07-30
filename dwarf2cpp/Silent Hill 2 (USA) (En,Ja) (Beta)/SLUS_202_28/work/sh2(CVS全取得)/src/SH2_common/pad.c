typedef struct shGameKeyAssign;
typedef struct Pad_KeyConfig;


typedef unsigned char type_0[32];
typedef unsigned char type_1[32][2];
typedef unsigned char type_2[20];
typedef unsigned char type_3[20][2];
typedef float type_4[20];
typedef float type_5[20][2];
typedef int type_6[2];
typedef int type_7[6];

struct shGameKeyAssign
{
	unsigned short type;
	unsigned char DIR_AX;
	unsigned char DIR_AY;
	unsigned char DIR_BX;
	unsigned char DIR_BY;
	unsigned char DIR_CX;
	unsigned char DIR_CY;
	unsigned short DRINK;
	unsigned short RADIO;
	unsigned short LIGHT;
	unsigned short ITEM;
	unsigned short MAP;
	unsigned short DECIDE;
	unsigned short CANCEL;
	unsigned short SKIP;
	unsigned short PAUSE;
	unsigned short ACTION;
	unsigned short DASH;
	unsigned short LSLIDE;
	unsigned short RSLIDE;
	unsigned short READY;
	unsigned short VIEW;
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
	int padding[6];
};

Pad_KeyConfig key_config;
int pad_x;
float padf[20][2];
unsigned char pad_bak[20][2];
unsigned char pad[32][2];
int repeat[2];

void shPadInit();
void shPadSet();
int shPadGetPort();
int shPadPress(int port, int key);
int shPadTrigger(int port, int key);
int shPadRepeat(int port, int key);
unsigned long kc2ga(unsigned long kconf_button);
void shPadSetGameKeyAssign();

// 
// Start address: 0x1c5320
void shPadInit()
{
	// Line 35, Address: 0x1c5320, Func Offset: 0
	// Line 42, Address: 0x1c5328, Func Offset: 0x8
	// Line 43, Address: 0x1c533c, Func Offset: 0x1c
	// Line 44, Address: 0x1c5350, Func Offset: 0x30
	// Line 45, Address: 0x1c5364, Func Offset: 0x44
	// Line 51, Address: 0x1c5370, Func Offset: 0x50
	// Line 52, Address: 0x1c537c, Func Offset: 0x5c
	// Line 53, Address: 0x1c5388, Func Offset: 0x68
	// Line 54, Address: 0x1c5394, Func Offset: 0x74
	// Line 55, Address: 0x1c53a0, Func Offset: 0x80
	// Line 56, Address: 0x1c53ac, Func Offset: 0x8c
	// Line 57, Address: 0x1c53b8, Func Offset: 0x98
	// Line 58, Address: 0x1c53c4, Func Offset: 0xa4
	// Line 59, Address: 0x1c53d0, Func Offset: 0xb0
	// Line 60, Address: 0x1c53dc, Func Offset: 0xbc
	// Line 61, Address: 0x1c53e8, Func Offset: 0xc8
	// Line 62, Address: 0x1c53f4, Func Offset: 0xd4
	// Line 71, Address: 0x1c53fc, Func Offset: 0xdc
	// Line 72, Address: 0x1c5408, Func Offset: 0xe8
	// Line 73, Address: 0x1c5410, Func Offset: 0xf0
	// Line 74, Address: 0x1c541c, Func Offset: 0xfc
	// Line 75, Address: 0x1c5428, Func Offset: 0x108
	// Line 76, Address: 0x1c5430, Func Offset: 0x110
	// Line 79, Address: 0x1c5438, Func Offset: 0x118
	// Line 80, Address: 0x1c5440, Func Offset: 0x120
	// Func End, Address: 0x1c5450, Func Offset: 0x130
}

// 
// Start address: 0x1c5450
void shPadSet()
{
	int j;
	int i;
	int work;
	// Line 88, Address: 0x1c5450, Func Offset: 0
	// Line 92, Address: 0x1c5464, Func Offset: 0x14
	// Line 93, Address: 0x1c5470, Func Offset: 0x20
	// Line 94, Address: 0x1c5490, Func Offset: 0x40
	// Line 95, Address: 0x1c54b0, Func Offset: 0x60
	// Line 96, Address: 0x1c54c4, Func Offset: 0x74
	// Line 109, Address: 0x1c54d4, Func Offset: 0x84
	// Line 110, Address: 0x1c54ec, Func Offset: 0x9c
	// Line 130, Address: 0x1c5504, Func Offset: 0xb4
	// Line 131, Address: 0x1c5514, Func Offset: 0xc4
	// Line 149, Address: 0x1c5524, Func Offset: 0xd4
	// Line 154, Address: 0x1c5530, Func Offset: 0xe0
	// Line 158, Address: 0x1c554c, Func Offset: 0xfc
	// Line 159, Address: 0x1c556c, Func Offset: 0x11c
	// Line 160, Address: 0x1c558c, Func Offset: 0x13c
	// Line 161, Address: 0x1c55a0, Func Offset: 0x150
	// Line 180, Address: 0x1c55b4, Func Offset: 0x164
	// Line 181, Address: 0x1c55c4, Func Offset: 0x174
	// Line 182, Address: 0x1c55d0, Func Offset: 0x180
	// Line 183, Address: 0x1c55dc, Func Offset: 0x18c
	// Line 184, Address: 0x1c55fc, Func Offset: 0x1ac
	// Line 185, Address: 0x1c5658, Func Offset: 0x208
	// Line 186, Address: 0x1c566c, Func Offset: 0x21c
	// Line 187, Address: 0x1c568c, Func Offset: 0x23c
	// Line 188, Address: 0x1c56b0, Func Offset: 0x260
	// Line 190, Address: 0x1c56cc, Func Offset: 0x27c
	// Line 191, Address: 0x1c56f8, Func Offset: 0x2a8
	// Line 192, Address: 0x1c570c, Func Offset: 0x2bc
	// Line 195, Address: 0x1c571c, Func Offset: 0x2cc
	// Line 196, Address: 0x1c5738, Func Offset: 0x2e8
	// Line 197, Address: 0x1c574c, Func Offset: 0x2fc
	// Line 198, Address: 0x1c576c, Func Offset: 0x31c
	// Line 200, Address: 0x1c5784, Func Offset: 0x334
	// Func End, Address: 0x1c57a0, Func Offset: 0x350
}

// 
// Start address: 0x1c57a0
int shPadGetPort()
{
	// Line 203, Address: 0x1c57a0, Func Offset: 0
	// Line 207, Address: 0x1c57a8, Func Offset: 0x8
	// Line 209, Address: 0x1c57c8, Func Offset: 0x28
	// Line 211, Address: 0x1c57ec, Func Offset: 0x4c
	// Func End, Address: 0x1c57fc, Func Offset: 0x5c
}

// 
// Start address: 0x1c5800
int shPadPress(int port, int key)
{
	int i;
	int ret;
	// Line 220, Address: 0x1c5800, Func Offset: 0
	// Line 224, Address: 0x1c5818, Func Offset: 0x18
	// Line 225, Address: 0x1c5820, Func Offset: 0x20
	// Line 226, Address: 0x1c5848, Func Offset: 0x48
	// Line 227, Address: 0x1c5874, Func Offset: 0x74
	// Line 230, Address: 0x1c5878, Func Offset: 0x78
	// Line 231, Address: 0x1c587c, Func Offset: 0x7c
	// Line 232, Address: 0x1c5888, Func Offset: 0x88
	// Line 234, Address: 0x1c58cc, Func Offset: 0xcc
	// Func End, Address: 0x1c58e4, Func Offset: 0xe4
}

// 
// Start address: 0x1c58f0
int shPadTrigger(int port, int key)
{
	int i;
	int ret;
	// Line 243, Address: 0x1c58f0, Func Offset: 0
	// Line 247, Address: 0x1c5908, Func Offset: 0x18
	// Line 248, Address: 0x1c5910, Func Offset: 0x20
	// Line 249, Address: 0x1c5938, Func Offset: 0x48
	// Line 250, Address: 0x1c5964, Func Offset: 0x74
	// Line 253, Address: 0x1c5968, Func Offset: 0x78
	// Line 254, Address: 0x1c596c, Func Offset: 0x7c
	// Line 255, Address: 0x1c5978, Func Offset: 0x88
	// Line 256, Address: 0x1c59b0, Func Offset: 0xc0
	// Line 258, Address: 0x1c59e4, Func Offset: 0xf4
	// Func End, Address: 0x1c59fc, Func Offset: 0x10c
}

// 
// Start address: 0x1c5a00
int shPadRepeat(int port, int key)
{
	int i;
	int ret;
	// Line 268, Address: 0x1c5a00, Func Offset: 0
	// Line 272, Address: 0x1c5a18, Func Offset: 0x18
	// Line 273, Address: 0x1c5a20, Func Offset: 0x20
	// Line 274, Address: 0x1c5a48, Func Offset: 0x48
	// Line 275, Address: 0x1c5a74, Func Offset: 0x74
	// Line 278, Address: 0x1c5a78, Func Offset: 0x78
	// Line 279, Address: 0x1c5a7c, Func Offset: 0x7c
	// Line 280, Address: 0x1c5a88, Func Offset: 0x88
	// Line 281, Address: 0x1c5ab8, Func Offset: 0xb8
	// Line 284, Address: 0x1c5aec, Func Offset: 0xec
	// Func End, Address: 0x1c5b04, Func Offset: 0x104
}

// 
// Start address: 0x1c5b10
unsigned long kc2ga(unsigned long kconf_button)
{
	unsigned long ret;
	unsigned long bit;
	unsigned long rem;
	// Line 324, Address: 0x1c5b10, Func Offset: 0
	// Line 325, Address: 0x1c5b14, Func Offset: 0x4
	// Line 326, Address: 0x1c5b24, Func Offset: 0x14
	// Line 328, Address: 0x1c5bf0, Func Offset: 0xe0
	// Line 329, Address: 0x1c5bfc, Func Offset: 0xec
	// Line 330, Address: 0x1c5c08, Func Offset: 0xf8
	// Line 331, Address: 0x1c5c14, Func Offset: 0x104
	// Line 332, Address: 0x1c5c20, Func Offset: 0x110
	// Line 333, Address: 0x1c5c2c, Func Offset: 0x11c
	// Line 334, Address: 0x1c5c38, Func Offset: 0x128
	// Line 335, Address: 0x1c5c44, Func Offset: 0x134
	// Line 336, Address: 0x1c5c50, Func Offset: 0x140
	// Line 337, Address: 0x1c5c5c, Func Offset: 0x14c
	// Line 338, Address: 0x1c5c68, Func Offset: 0x158
	// Line 339, Address: 0x1c5c74, Func Offset: 0x164
	// Line 340, Address: 0x1c5c80, Func Offset: 0x170
	// Line 341, Address: 0x1c5c8c, Func Offset: 0x17c
	// Line 342, Address: 0x1c5c98, Func Offset: 0x188
	// Line 343, Address: 0x1c5ca4, Func Offset: 0x194
	// Line 345, Address: 0x1c5ca8, Func Offset: 0x198
	// Line 347, Address: 0x1c5cb8, Func Offset: 0x1a8
	// Func End, Address: 0x1c5cc0, Func Offset: 0x1b0
}

// 
// Start address: 0x1c5cc0
void shPadSetGameKeyAssign()
{
	shGameKeyAssign assign;
	// Line 387, Address: 0x1c5cc0, Func Offset: 0
	// Line 389, Address: 0x1c5cc8, Func Offset: 0x8
	// Line 393, Address: 0x1c5cd4, Func Offset: 0x14
	// Line 395, Address: 0x1c5ce8, Func Offset: 0x28
	// Line 396, Address: 0x1c5cfc, Func Offset: 0x3c
	// Line 398, Address: 0x1c5d10, Func Offset: 0x50
	// Line 399, Address: 0x1c5d24, Func Offset: 0x64
	// Line 401, Address: 0x1c5d38, Func Offset: 0x78
	// Line 402, Address: 0x1c5d4c, Func Offset: 0x8c
	// Line 404, Address: 0x1c5d60, Func Offset: 0xa0
	// Line 406, Address: 0x1c5d80, Func Offset: 0xc0
	// Line 408, Address: 0x1c5d94, Func Offset: 0xd4
	// Line 409, Address: 0x1c5da8, Func Offset: 0xe8
	// Line 411, Address: 0x1c5dbc, Func Offset: 0xfc
	// Line 412, Address: 0x1c5dd0, Func Offset: 0x110
	// Line 414, Address: 0x1c5de4, Func Offset: 0x124
	// Line 415, Address: 0x1c5df0, Func Offset: 0x130
	// Func End, Address: 0x1c5e00, Func Offset: 0x140
}

