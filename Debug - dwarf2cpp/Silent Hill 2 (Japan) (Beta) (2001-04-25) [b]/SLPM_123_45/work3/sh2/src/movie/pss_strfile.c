typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef char type_0[16];
typedef unsigned char type_1[8];
typedef char type_2[256];
typedef char type_3[64];

struct _anon0
{
	int isOnCD;
	int size;
	_anon2 fp;
	unsigned char* iopBuf;
	int fd;
};

struct _anon1
{
	unsigned char trycount;
	unsigned char spindlctrl;
	unsigned char datapattern;
	unsigned char pad;
};

struct _anon2
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
};

int isStrFileInit;

int strFileOpen(_anon0* file, char* filename);
int strFileClose(_anon0* file);
int strFileRead(_anon0* file, void* buff, int size);

// 
// Start address: 0x23a360
int strFileOpen(_anon0* file, char* filename)
{
	int ret;
	_anon1 mode;
	char* tail;
	int len;
	int i;
	int dlen;
	char devname[64];
	char fn[256];
	char* body;
	// Line 48, Address: 0x23a360, Func Offset: 0
	// Line 49, Address: 0x23a38c, Func Offset: 0x2c
	// Line 53, Address: 0x23a390, Func Offset: 0x30
	// Line 55, Address: 0x23a3a4, Func Offset: 0x44
	// Line 59, Address: 0x23a3ac, Func Offset: 0x4c
	// Line 60, Address: 0x23a3b4, Func Offset: 0x54
	// Line 61, Address: 0x23a3c8, Func Offset: 0x68
	// Line 63, Address: 0x23a3d0, Func Offset: 0x70
	// Line 65, Address: 0x23a3d4, Func Offset: 0x74
	// Line 67, Address: 0x23a3f0, Func Offset: 0x90
	// Line 70, Address: 0x23a400, Func Offset: 0xa0
	// Line 72, Address: 0x23a40c, Func Offset: 0xac
	// Line 73, Address: 0x23a418, Func Offset: 0xb8
	// Line 74, Address: 0x23a434, Func Offset: 0xd4
	// Line 76, Address: 0x23a440, Func Offset: 0xe0
	// Line 77, Address: 0x23a468, Func Offset: 0x108
	// Line 79, Address: 0x23a47c, Func Offset: 0x11c
	// Line 80, Address: 0x23a4b0, Func Offset: 0x150
	// Line 83, Address: 0x23a4cc, Func Offset: 0x16c
	// Line 84, Address: 0x23a4d4, Func Offset: 0x174
	// Line 85, Address: 0x23a4dc, Func Offset: 0x17c
	// Line 89, Address: 0x23a4f8, Func Offset: 0x198
	// Line 90, Address: 0x23a500, Func Offset: 0x1a0
	// Line 91, Address: 0x23a504, Func Offset: 0x1a4
	// Line 92, Address: 0x23a518, Func Offset: 0x1b8
	// Line 93, Address: 0x23a520, Func Offset: 0x1c0
	// Line 97, Address: 0x23a53c, Func Offset: 0x1dc
	// Line 99, Address: 0x23a550, Func Offset: 0x1f0
	// Line 102, Address: 0x23a560, Func Offset: 0x200
	// Line 110, Address: 0x23a570, Func Offset: 0x210
	// Line 113, Address: 0x23a57c, Func Offset: 0x21c
	// Line 115, Address: 0x23a598, Func Offset: 0x238
	// Line 118, Address: 0x23a5a4, Func Offset: 0x244
	// Line 119, Address: 0x23a5bc, Func Offset: 0x25c
	// Line 120, Address: 0x23a5ec, Func Offset: 0x28c
	// Line 123, Address: 0x23a5fc, Func Offset: 0x29c
	// Line 124, Address: 0x23a60c, Func Offset: 0x2ac
	// Line 125, Address: 0x23a610, Func Offset: 0x2b0
	// Line 126, Address: 0x23a614, Func Offset: 0x2b4
	// Line 127, Address: 0x23a618, Func Offset: 0x2b8
	// Line 128, Address: 0x23a620, Func Offset: 0x2c0
	// Line 129, Address: 0x23a630, Func Offset: 0x2d0
	// Line 132, Address: 0x23a64c, Func Offset: 0x2ec
	// Line 135, Address: 0x23a654, Func Offset: 0x2f4
	// Line 136, Address: 0x23a66c, Func Offset: 0x30c
	// Line 138, Address: 0x23a67c, Func Offset: 0x31c
	// Line 140, Address: 0x23a688, Func Offset: 0x328
	// Line 141, Address: 0x23a6a8, Func Offset: 0x348
	// Line 142, Address: 0x23a6b8, Func Offset: 0x358
	// Line 143, Address: 0x23a6d4, Func Offset: 0x374
	// Line 144, Address: 0x23a6e4, Func Offset: 0x384
	// Line 147, Address: 0x23a6f0, Func Offset: 0x390
	// Line 148, Address: 0x23a70c, Func Offset: 0x3ac
	// Line 149, Address: 0x23a714, Func Offset: 0x3b4
	// Line 150, Address: 0x23a728, Func Offset: 0x3c8
	// Line 151, Address: 0x23a738, Func Offset: 0x3d8
	// Line 156, Address: 0x23a744, Func Offset: 0x3e4
	// Line 157, Address: 0x23a748, Func Offset: 0x3e8
	// Func End, Address: 0x23a774, Func Offset: 0x414
}

// 
// Start address: 0x23a780
int strFileClose(_anon0* file)
{
	// Line 164, Address: 0x23a780, Func Offset: 0
	// Line 165, Address: 0x23a78c, Func Offset: 0xc
	// Line 166, Address: 0x23a79c, Func Offset: 0x1c
	// Line 167, Address: 0x23a7a4, Func Offset: 0x24
	// Line 168, Address: 0x23a7b4, Func Offset: 0x34
	// Line 169, Address: 0x23a7c8, Func Offset: 0x48
	// Line 171, Address: 0x23a7d8, Func Offset: 0x58
	// Line 172, Address: 0x23a7e0, Func Offset: 0x60
	// Line 175, Address: 0x23a7f0, Func Offset: 0x70
	// Line 176, Address: 0x23a7f4, Func Offset: 0x74
	// Func End, Address: 0x23a804, Func Offset: 0x84
}

// 
// Start address: 0x23a810
int strFileRead(_anon0* file, void* buff, int size)
{
	unsigned int err;
	int count;
	// Line 183, Address: 0x23a810, Func Offset: 0
	// Line 184, Address: 0x23a828, Func Offset: 0x18
	// Line 185, Address: 0x23a82c, Func Offset: 0x1c
	// Line 186, Address: 0x23a83c, Func Offset: 0x2c
	// Line 187, Address: 0x23a850, Func Offset: 0x40
	// Line 190, Address: 0x23a85c, Func Offset: 0x4c
	// Line 191, Address: 0x23a868, Func Offset: 0x58
	// Line 194, Address: 0x23a878, Func Offset: 0x68
	// Line 195, Address: 0x23a898, Func Offset: 0x88
	// Line 201, Address: 0x23a89c, Func Offset: 0x8c
	// Line 202, Address: 0x23a8a8, Func Offset: 0x98
	// Line 203, Address: 0x23a8c0, Func Offset: 0xb0
	// Line 206, Address: 0x23a8c4, Func Offset: 0xb4
	// Line 207, Address: 0x23a8cc, Func Offset: 0xbc
	// Line 210, Address: 0x23a8e8, Func Offset: 0xd8
	// Line 211, Address: 0x23a8ec, Func Offset: 0xdc
	// Func End, Address: 0x23a900, Func Offset: 0xf0
}

