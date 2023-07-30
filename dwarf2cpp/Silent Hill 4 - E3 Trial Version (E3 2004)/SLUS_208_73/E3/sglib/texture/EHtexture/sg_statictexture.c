typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sgClutData;
typedef struct sgTexData;


typedef _anon0 type_0[20];
typedef _anon2 type_1[32];

struct _anon0
{
	_anon1 texpage;
	unsigned char dirty;
};

struct _anon1
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

struct _anon2
{
	unsigned short cbp;
	unsigned char dirty;
};

struct _anon3
{
	_anon0 textures[20];
	_anon2 cluts[32];
	unsigned short texture_start;
	unsigned short clut_start;
	unsigned short texture_limit;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

_anon3 static_vram_work;

void STextureClearDirty(int tno);
int STextureLimitCheck(int base);
void sgStaticTextureInit();
void sgStaticTextureSetBuffer(unsigned int start, unsigned int b_size);
void sgStaticTextureReset();
int sgStaticTextureCheckValid(unsigned int tno);
void sgStaticClutInit();
void sgStaticClutSetBuffer(unsigned int start);
void sgStaticClutReset();
int sgStaticClutCheckValid(unsigned int cno);
void sgStaticTextureLoadData(unsigned int tno, sgTexData* tex_data);
_anon1* sgStaticTexture(unsigned int tno);
void sgStaticClutLoadData(unsigned int cno, sgClutData* clut_data);
unsigned long sgStaticClutCBP(unsigned int cno);

// 
// Start address: 0x158470
void STextureClearDirty(int tno)
{
	int i;
	int base;
	// Line 74, Address: 0x158470, Func Offset: 0
	// Line 76, Address: 0x158474, Func Offset: 0x4
	// Line 74, Address: 0x15847c, Func Offset: 0xc
	// Line 75, Address: 0x158484, Func Offset: 0x14
	// Line 74, Address: 0x15848c, Func Offset: 0x1c
	// Line 75, Address: 0x158490, Func Offset: 0x20
	// Line 76, Address: 0x158494, Func Offset: 0x24
	// Line 78, Address: 0x1584a8, Func Offset: 0x38
	// Line 76, Address: 0x1584ac, Func Offset: 0x3c
	// Line 77, Address: 0x1584b0, Func Offset: 0x40
	// Line 79, Address: 0x1584b4, Func Offset: 0x44
	// Line 78, Address: 0x1584b8, Func Offset: 0x48
	// Line 79, Address: 0x1584bc, Func Offset: 0x4c
	// Line 78, Address: 0x1584c0, Func Offset: 0x50
	// Line 79, Address: 0x1584c4, Func Offset: 0x54
	// Line 80, Address: 0x1584d0, Func Offset: 0x60
	// Func End, Address: 0x1584d8, Func Offset: 0x68
}

// 
// Start address: 0x1584e0
int STextureLimitCheck(int base)
{
	// Line 91, Address: 0x1584e0, Func Offset: 0
	// Line 92, Address: 0x1584e8, Func Offset: 0x8
	// Line 93, Address: 0x1584f0, Func Offset: 0x10
	// Line 96, Address: 0x1584f8, Func Offset: 0x18
	// Line 99, Address: 0x158500, Func Offset: 0x20
	// Func End, Address: 0x158508, Func Offset: 0x28
}

// 
// Start address: 0x158510
void sgStaticTextureInit()
{
	// Line 106, Address: 0x158510, Func Offset: 0
	// Line 107, Address: 0x158518, Func Offset: 0x8
	// Line 109, Address: 0x15851c, Func Offset: 0xc
	// Func End, Address: 0x158524, Func Offset: 0x14
}

// 
// Start address: 0x158530
void sgStaticTextureSetBuffer(unsigned int start, unsigned int b_size)
{
	// Line 123, Address: 0x158530, Func Offset: 0
	// Line 124, Address: 0x15853c, Func Offset: 0xc
	// Line 125, Address: 0x158540, Func Offset: 0x10
	// Func End, Address: 0x158548, Func Offset: 0x18
}

// 
// Start address: 0x158550
void sgStaticTextureReset()
{
	// Line 132, Address: 0x158550, Func Offset: 0
	// Line 136, Address: 0x158554, Func Offset: 0x4
	// Line 132, Address: 0x158558, Func Offset: 0x8
	// Line 137, Address: 0x15855c, Func Offset: 0xc
	// Line 136, Address: 0x158560, Func Offset: 0x10
	// Line 137, Address: 0x158568, Func Offset: 0x18
	// Line 138, Address: 0x158570, Func Offset: 0x20
	// Line 139, Address: 0x15857c, Func Offset: 0x2c
	// Func End, Address: 0x158588, Func Offset: 0x38
}

// 
// Start address: 0x158590
int sgStaticTextureCheckValid(unsigned int tno)
{
	// Line 149, Address: 0x158590, Func Offset: 0
	// Line 150, Address: 0x15859c, Func Offset: 0xc
	// Line 152, Address: 0x1585a8, Func Offset: 0x18
	// Line 154, Address: 0x1585c8, Func Offset: 0x38
	// Func End, Address: 0x1585d0, Func Offset: 0x40
}

// 
// Start address: 0x1585d0
void sgStaticClutInit()
{
	// Line 161, Address: 0x1585d0, Func Offset: 0
	// Line 162, Address: 0x1585d4, Func Offset: 0x4
	// Func End, Address: 0x1585dc, Func Offset: 0xc
}

// 
// Start address: 0x1585e0
void sgStaticClutSetBuffer(unsigned int start)
{
	// Line 174, Address: 0x1585e0, Func Offset: 0
	// Line 176, Address: 0x1585f0, Func Offset: 0x10
	// Line 177, Address: 0x158600, Func Offset: 0x20
	// Line 179, Address: 0x15860c, Func Offset: 0x2c
	// Line 181, Address: 0x158610, Func Offset: 0x30
	// Line 182, Address: 0x158614, Func Offset: 0x34
	// Line 183, Address: 0x15861c, Func Offset: 0x3c
	// Func End, Address: 0x15862c, Func Offset: 0x4c
}

// 
// Start address: 0x158630
void sgStaticClutReset()
{
	int i;
	// Line 192, Address: 0x158630, Func Offset: 0
	// Line 193, Address: 0x15863c, Func Offset: 0xc
	// Line 195, Address: 0x158670, Func Offset: 0x40
	// Func End, Address: 0x158678, Func Offset: 0x48
}

// 
// Start address: 0x158680
int sgStaticClutCheckValid(unsigned int cno)
{
	// Line 205, Address: 0x158680, Func Offset: 0
	// Line 206, Address: 0x15868c, Func Offset: 0xc
	// Line 208, Address: 0x158698, Func Offset: 0x18
	// Line 210, Address: 0x1586b8, Func Offset: 0x38
	// Func End, Address: 0x1586c0, Func Offset: 0x40
}

// 
// Start address: 0x1586c0
void sgStaticTextureLoadData(unsigned int tno, sgTexData* tex_data)
{
	_anon1* tpage;
	unsigned int base;
	// Line 228, Address: 0x1586c0, Func Offset: 0
	// Line 229, Address: 0x1586c4, Func Offset: 0x4
	// Line 228, Address: 0x1586c8, Func Offset: 0x8
	// Line 229, Address: 0x1586cc, Func Offset: 0xc
	// Line 228, Address: 0x1586d0, Func Offset: 0x10
	// Line 233, Address: 0x1586e8, Func Offset: 0x28
	// Line 237, Address: 0x1586f8, Func Offset: 0x38
	// Line 238, Address: 0x158700, Func Offset: 0x40
	// Line 240, Address: 0x158708, Func Offset: 0x48
	// Line 241, Address: 0x158718, Func Offset: 0x58
	// Line 243, Address: 0x158728, Func Offset: 0x68
	// Line 245, Address: 0x158730, Func Offset: 0x70
	// Line 246, Address: 0x158740, Func Offset: 0x80
	// Line 248, Address: 0x158754, Func Offset: 0x94
	// Line 249, Address: 0x15875c, Func Offset: 0x9c
	// Line 251, Address: 0x158760, Func Offset: 0xa0
	// Line 252, Address: 0x158770, Func Offset: 0xb0
	// Line 253, Address: 0x158778, Func Offset: 0xb8
	// Func End, Address: 0x158794, Func Offset: 0xd4
}

// 
// Start address: 0x1587a0
_anon1* sgStaticTexture(unsigned int tno)
{
	// Line 263, Address: 0x1587a4, Func Offset: 0x4
	// Line 265, Address: 0x1587a8, Func Offset: 0x8
	// Line 266, Address: 0x1587b4, Func Offset: 0x14
	// Line 267, Address: 0x1587c0, Func Offset: 0x20
	// Line 268, Address: 0x1587dc, Func Offset: 0x3c
	// Line 269, Address: 0x1587e4, Func Offset: 0x44
	// Line 270, Address: 0x1587ec, Func Offset: 0x4c
	// Line 272, Address: 0x1587f0, Func Offset: 0x50
	// Line 273, Address: 0x158800, Func Offset: 0x60
	// Func End, Address: 0x15880c, Func Offset: 0x6c
}

// 
// Start address: 0x158810
void sgStaticClutLoadData(unsigned int cno, sgClutData* clut_data)
{
	unsigned int base;
	int i;
	int size;
	// Line 307, Address: 0x158810, Func Offset: 0
	// Line 315, Address: 0x158828, Func Offset: 0x18
	// Line 318, Address: 0x158834, Func Offset: 0x24
	// Line 319, Address: 0x158840, Func Offset: 0x30
	// Line 318, Address: 0x158844, Func Offset: 0x34
	// Line 319, Address: 0x158848, Func Offset: 0x38
	// Line 320, Address: 0x158850, Func Offset: 0x40
	// Line 321, Address: 0x158858, Func Offset: 0x48
	// Line 322, Address: 0x158870, Func Offset: 0x60
	// Line 321, Address: 0x158878, Func Offset: 0x68
	// Line 322, Address: 0x15887c, Func Offset: 0x6c
	// Line 323, Address: 0x158880, Func Offset: 0x70
	// Line 322, Address: 0x158888, Func Offset: 0x78
	// Line 323, Address: 0x15888c, Func Offset: 0x7c
	// Line 322, Address: 0x158890, Func Offset: 0x80
	// Line 323, Address: 0x158898, Func Offset: 0x88
	// Line 322, Address: 0x1588b0, Func Offset: 0xa0
	// Line 323, Address: 0x1588b4, Func Offset: 0xa4
	// Line 322, Address: 0x1588d0, Func Offset: 0xc0
	// Line 323, Address: 0x1588d4, Func Offset: 0xc4
	// Line 322, Address: 0x1588e8, Func Offset: 0xd8
	// Line 323, Address: 0x1588ec, Func Offset: 0xdc
	// Line 322, Address: 0x158908, Func Offset: 0xf8
	// Line 323, Address: 0x15890c, Func Offset: 0xfc
	// Line 322, Address: 0x158920, Func Offset: 0x110
	// Line 323, Address: 0x158924, Func Offset: 0x114
	// Line 322, Address: 0x158940, Func Offset: 0x130
	// Line 324, Address: 0x158944, Func Offset: 0x134
	// Line 323, Address: 0x158948, Func Offset: 0x138
	// Line 324, Address: 0x158954, Func Offset: 0x144
	// Line 322, Address: 0x158974, Func Offset: 0x164
	// Line 324, Address: 0x158978, Func Offset: 0x168
	// Line 325, Address: 0x158998, Func Offset: 0x188
	// Func End, Address: 0x1589b0, Func Offset: 0x1a0
}

// 
// Start address: 0x1589b0
unsigned long sgStaticClutCBP(unsigned int cno)
{
	// Line 333, Address: 0x1589b0, Func Offset: 0
	// Line 335, Address: 0x1589b4, Func Offset: 0x4
	// Line 336, Address: 0x1589c0, Func Offset: 0x10
	// Line 337, Address: 0x1589c8, Func Offset: 0x18
	// Line 338, Address: 0x1589e4, Func Offset: 0x34
	// Line 339, Address: 0x1589f0, Func Offset: 0x40
	// Line 342, Address: 0x1589f8, Func Offset: 0x48
	// Line 343, Address: 0x158a08, Func Offset: 0x58
	// Func End, Address: 0x158a14, Func Offset: 0x64
}

