typedef struct _anon0;


typedef unsigned char type_0[4];
typedef unsigned char type_1[4][32];
typedef unsigned char type_2[4][32][32];

struct _anon0
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

unsigned char texture[4][32][32];

void SpecularMappingMakeTexture();
void SpecularMappingInit();
unsigned long SpecularMappingTEX0();

// 
// Start address: 0x155080
void SpecularMappingMakeTexture()
{
	int w;
	int h;
	float dy;
	float dy2;
	float dx;
	float dz2;
	float dz;
	float i;
	int initialized;
	// Line 30, Address: 0x155080, Func Offset: 0
	// Line 35, Address: 0x155084, Func Offset: 0x4
	// Line 30, Address: 0x155088, Func Offset: 0x8
	// Line 35, Address: 0x1550a4, Func Offset: 0x24
	// Line 38, Address: 0x1550b0, Func Offset: 0x30
	// Line 40, Address: 0x1550bc, Func Offset: 0x3c
	// Line 41, Address: 0x1550d8, Func Offset: 0x58
	// Line 43, Address: 0x1550e0, Func Offset: 0x60
	// Line 41, Address: 0x1550e4, Func Offset: 0x64
	// Line 42, Address: 0x155110, Func Offset: 0x90
	// Line 43, Address: 0x155114, Func Offset: 0x94
	// Line 44, Address: 0x155118, Func Offset: 0x98
	// Line 46, Address: 0x155138, Func Offset: 0xb8
	// Line 44, Address: 0x15513c, Func Offset: 0xbc
	// Line 46, Address: 0x15514c, Func Offset: 0xcc
	// Line 44, Address: 0x155150, Func Offset: 0xd0
	// Line 46, Address: 0x155154, Func Offset: 0xd4
	// Line 47, Address: 0x155168, Func Offset: 0xe8
	// Line 48, Address: 0x155178, Func Offset: 0xf8
	// Line 61, Address: 0x15518c, Func Offset: 0x10c
	// Line 48, Address: 0x1551a0, Func Offset: 0x120
	// Line 57, Address: 0x1551ac, Func Offset: 0x12c
	// Line 58, Address: 0x1551b0, Func Offset: 0x130
	// Line 59, Address: 0x1551b4, Func Offset: 0x134
	// Line 60, Address: 0x1551b8, Func Offset: 0x138
	// Line 61, Address: 0x1551bc, Func Offset: 0x13c
	// Line 62, Address: 0x1551c4, Func Offset: 0x144
	// Line 63, Address: 0x1551d4, Func Offset: 0x154
	// Func End, Address: 0x1551fc, Func Offset: 0x17c
}

// 
// Start address: 0x155200
void SpecularMappingInit()
{
	// Line 71, Address: 0x155200, Func Offset: 0
	// Func End, Address: 0x155208, Func Offset: 0x8
}

// 
// Start address: 0x155210
unsigned long SpecularMappingTEX0()
{
	int id;
	_anon0* tex;
	// Line 104, Address: 0x155210, Func Offset: 0
	// Line 114, Address: 0x155214, Func Offset: 0x4
	// Line 104, Address: 0x15521c, Func Offset: 0xc
	// Line 114, Address: 0x155220, Func Offset: 0x10
	// Line 116, Address: 0x155230, Func Offset: 0x20
	// Line 117, Address: 0x155238, Func Offset: 0x28
	// Line 119, Address: 0x155248, Func Offset: 0x38
	// Func End, Address: 0x155254, Func Offset: 0x44
}

