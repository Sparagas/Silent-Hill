typedef union Q_WORDDATA;


typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned long type_7[2];
typedef Q_WORDDATA type_8[16];
typedef unsigned char type_9[4];
typedef unsigned char type_10[4][64];
typedef unsigned char type_11[4][64][64];

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

unsigned char texture[4][64][64];

unsigned long sh2_SpecularMappingTEX0();
void mdl_SpecularMappingMakeTexture();
void mdl_SpecularMappingLoadTexture();

// 
// Start address: 0x139130
unsigned long sh2_SpecularMappingTEX0()
{
	unsigned long ul;
	int th;
	int tw;
	int tbw;
	int bp;
	// Line 35, Address: 0x139130, Func Offset: 0
	// Line 39, Address: 0x139148, Func Offset: 0x18
	// Line 40, Address: 0x13914c, Func Offset: 0x1c
	// Line 41, Address: 0x139150, Func Offset: 0x20
	// Line 42, Address: 0x139154, Func Offset: 0x24
	// Line 45, Address: 0x139158, Func Offset: 0x28
	// Line 47, Address: 0x13919c, Func Offset: 0x6c
	// Line 68, Address: 0x1391a0, Func Offset: 0x70
	// Func End, Address: 0x1391c0, Func Offset: 0x90
}

// 
// Start address: 0x1391c0
void mdl_SpecularMappingMakeTexture()
{
	float a;
	float b;
	float g;
	float r;
	float i;
	float dz;
	float dz2;
	float dx2;
	float dx;
	float dy2;
	float dy;
	int h;
	int w;
	// Line 76, Address: 0x1391c0, Func Offset: 0
	// Line 86, Address: 0x1391d0, Func Offset: 0x10
	// Line 87, Address: 0x1391dc, Func Offset: 0x1c
	// Line 88, Address: 0x13921c, Func Offset: 0x5c
	// Line 89, Address: 0x13922c, Func Offset: 0x6c
	// Line 90, Address: 0x139238, Func Offset: 0x78
	// Line 91, Address: 0x139278, Func Offset: 0xb8
	// Line 92, Address: 0x139288, Func Offset: 0xc8
	// Line 96, Address: 0x139358, Func Offset: 0x198
	// Line 97, Address: 0x139368, Func Offset: 0x1a8
	// Line 99, Address: 0x139380, Func Offset: 0x1c0
	// Line 103, Address: 0x139388, Func Offset: 0x1c8
	// Line 104, Address: 0x139390, Func Offset: 0x1d0
	// Line 105, Address: 0x139398, Func Offset: 0x1d8
	// Line 106, Address: 0x1393a8, Func Offset: 0x1e8
	// Line 107, Address: 0x1393e0, Func Offset: 0x220
	// Line 108, Address: 0x139418, Func Offset: 0x258
	// Line 109, Address: 0x139450, Func Offset: 0x290
	// Line 110, Address: 0x139488, Func Offset: 0x2c8
	// Line 111, Address: 0x13949c, Func Offset: 0x2dc
	// Line 112, Address: 0x1394ac, Func Offset: 0x2ec
	// Func End, Address: 0x1394c4, Func Offset: 0x304
}

// 
// Start address: 0x1394d0
void mdl_SpecularMappingLoadTexture()
{
	int h;
	int w;
	int qwc;
	int bp;
	Q_WORDDATA pqwd[16];
	// Line 118, Address: 0x1394d0, Func Offset: 0
	// Line 121, Address: 0x1394e8, Func Offset: 0x18
	// Line 122, Address: 0x1394ec, Func Offset: 0x1c
	// Line 123, Address: 0x1394f0, Func Offset: 0x20
	// Line 124, Address: 0x1394f4, Func Offset: 0x24
	// Line 126, Address: 0x1394f8, Func Offset: 0x28
	// Line 128, Address: 0x139500, Func Offset: 0x30
	// Line 130, Address: 0x139518, Func Offset: 0x48
	// Line 134, Address: 0x139534, Func Offset: 0x64
	// Line 136, Address: 0x139554, Func Offset: 0x84
	// Line 137, Address: 0x13955c, Func Offset: 0x8c
	// Line 139, Address: 0x139560, Func Offset: 0x90
	// Line 140, Address: 0x139568, Func Offset: 0x98
	// Line 141, Address: 0x13956c, Func Offset: 0x9c
	// Line 143, Address: 0x139570, Func Offset: 0xa0
	// Line 144, Address: 0x139578, Func Offset: 0xa8
	// Line 146, Address: 0x13957c, Func Offset: 0xac
	// Line 148, Address: 0x139594, Func Offset: 0xc4
	// Line 150, Address: 0x1395bc, Func Offset: 0xec
	// Line 151, Address: 0x1395c0, Func Offset: 0xf0
	// Line 153, Address: 0x1395c8, Func Offset: 0xf8
	// Line 155, Address: 0x1395d4, Func Offset: 0x104
	// Line 156, Address: 0x1395e4, Func Offset: 0x114
	// Line 157, Address: 0x1395f0, Func Offset: 0x120
	// Line 158, Address: 0x139600, Func Offset: 0x130
	// Line 159, Address: 0x139610, Func Offset: 0x140
	// Line 162, Address: 0x139620, Func Offset: 0x150
	// Func End, Address: 0x139640, Func Offset: 0x170
}

