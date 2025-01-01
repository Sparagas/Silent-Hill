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
typedef unsigned int type_9[4096];

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


unsigned long sh2_SpecularMappingTEX0();
void mdl_SpecularMappingMakeTexture(int* texbuf);
void mdl_SpecularMappingLoadTexture();

// 
// Start address: 0x12f0a0
unsigned long sh2_SpecularMappingTEX0()
{
	unsigned long ul;
	int th;
	int tw;
	int tbw;
	int bp;
	// Line 47, Address: 0x12f0a0, Func Offset: 0
	// Line 68, Address: 0x12f0b4, Func Offset: 0x14
	// Func End, Address: 0x12f0bc, Func Offset: 0x1c
}

// 
// Start address: 0x12f0c0
void mdl_SpecularMappingMakeTexture(int* texbuf)
{
	int ia;
	int ib;
	int ig;
	int ir;
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
	unsigned int* texture;
	int h;
	int w;
	// Line 75, Address: 0x12f0c0, Func Offset: 0
	// Line 86, Address: 0x12f0dc, Func Offset: 0x1c
	// Line 93, Address: 0x12f0e0, Func Offset: 0x20
	// Line 94, Address: 0x12f0ec, Func Offset: 0x2c
	// Line 95, Address: 0x12f128, Func Offset: 0x68
	// Line 96, Address: 0x12f12c, Func Offset: 0x6c
	// Line 97, Address: 0x12f138, Func Offset: 0x78
	// Line 98, Address: 0x12f174, Func Offset: 0xb4
	// Line 99, Address: 0x12f178, Func Offset: 0xb8
	// Line 103, Address: 0x12f1cc, Func Offset: 0x10c
	// Line 104, Address: 0x12f1d4, Func Offset: 0x114
	// Line 120, Address: 0x12f1e8, Func Offset: 0x128
	// Line 123, Address: 0x12f204, Func Offset: 0x144
	// Line 125, Address: 0x12f214, Func Offset: 0x154
	// Line 127, Address: 0x12f240, Func Offset: 0x180
	// Line 128, Address: 0x12f254, Func Offset: 0x194
	// Line 129, Address: 0x12f264, Func Offset: 0x1a4
	// Func End, Address: 0x12f288, Func Offset: 0x1c8
}

// 
// Start address: 0x12f290
void mdl_SpecularMappingLoadTexture()
{
	unsigned int texbuf[4096];
	int h;
	int w;
	int qwc;
	int bp;
	Q_WORDDATA pqwd[16];
	// Line 135, Address: 0x12f290, Func Offset: 0
	// Line 147, Address: 0x12f298, Func Offset: 0x8
	// Line 149, Address: 0x12f2a4, Func Offset: 0x14
	// Line 151, Address: 0x12f2bc, Func Offset: 0x2c
	// Line 155, Address: 0x12f2d4, Func Offset: 0x44
	// Line 157, Address: 0x12f2f4, Func Offset: 0x64
	// Line 158, Address: 0x12f2fc, Func Offset: 0x6c
	// Line 160, Address: 0x12f300, Func Offset: 0x70
	// Line 161, Address: 0x12f308, Func Offset: 0x78
	// Line 162, Address: 0x12f310, Func Offset: 0x80
	// Line 164, Address: 0x12f314, Func Offset: 0x84
	// Line 165, Address: 0x12f31c, Func Offset: 0x8c
	// Line 167, Address: 0x12f320, Func Offset: 0x90
	// Line 172, Address: 0x12f338, Func Offset: 0xa8
	// Line 174, Address: 0x12f35c, Func Offset: 0xcc
	// Line 175, Address: 0x12f364, Func Offset: 0xd4
	// Line 177, Address: 0x12f36c, Func Offset: 0xdc
	// Line 179, Address: 0x12f378, Func Offset: 0xe8
	// Line 180, Address: 0x12f388, Func Offset: 0xf8
	// Line 181, Address: 0x12f390, Func Offset: 0x100
	// Line 182, Address: 0x12f39c, Func Offset: 0x10c
	// Line 183, Address: 0x12f3a8, Func Offset: 0x118
	// Line 186, Address: 0x12f3b8, Func Offset: 0x128
	// Func End, Address: 0x12f3c8, Func Offset: 0x138
}

