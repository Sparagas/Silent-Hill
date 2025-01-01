typedef union _Header;
typedef struct _anon0;


typedef char type_0[65536];
typedef _Header type_1[65536];

union _Header
{
	_anon0 s;
	<unknown fundamental type (0xa510)> align;
};

struct _anon0
{
	_Header* ptr;
	unsigned int size;
};

_Header* freep;
_Header list_mem[65536];
int small_use;
char tmp_mem[65536];

void sfMemoryInit();
void* sfMemoryTmpAlloc();
void* sfMemorySmallAlloc(unsigned int size);
void sfMemorySmallFree(void* ap);

// 
// Start address: 0x1a8600
void sfMemoryInit()
{
	// Line 117, Address: 0x1a8600, Func Offset: 0
	// Line 118, Address: 0x1a8604, Func Offset: 0x4
	// Line 117, Address: 0x1a8608, Func Offset: 0x8
	// Line 118, Address: 0x1a860c, Func Offset: 0xc
	// Line 119, Address: 0x1a861c, Func Offset: 0x1c
	// Line 122, Address: 0x1a8630, Func Offset: 0x30
	// Line 125, Address: 0x1a863c, Func Offset: 0x3c
	// Line 128, Address: 0x1a864c, Func Offset: 0x4c
	// Line 125, Address: 0x1a8650, Func Offset: 0x50
	// Line 126, Address: 0x1a8658, Func Offset: 0x58
	// Line 128, Address: 0x1a865c, Func Offset: 0x5c
	// Line 130, Address: 0x1a8664, Func Offset: 0x64
	// Line 142, Address: 0x1a866c, Func Offset: 0x6c
	// Func End, Address: 0x1a8678, Func Offset: 0x78
}

// 
// Start address: 0x1a8680
void* sfMemoryTmpAlloc()
{
	// Line 162, Address: 0x1a8680, Func Offset: 0
	// Line 163, Address: 0x1a8684, Func Offset: 0x4
	// Func End, Address: 0x1a868c, Func Offset: 0xc
}

// 
// Start address: 0x1a8690
void* sfMemorySmallAlloc(unsigned int size)
{
	_Header* p;
	_Header* prevp;
	int nunits;
	// Line 198, Address: 0x1a8690, Func Offset: 0
	// Line 199, Address: 0x1a8694, Func Offset: 0x4
	// Line 198, Address: 0x1a8698, Func Offset: 0x8
	// Line 199, Address: 0x1a869c, Func Offset: 0xc
	// Line 198, Address: 0x1a86a0, Func Offset: 0x10
	// Line 199, Address: 0x1a86a4, Func Offset: 0x14
	// Line 201, Address: 0x1a86bc, Func Offset: 0x2c
	// Line 202, Address: 0x1a86c4, Func Offset: 0x34
	// Line 203, Address: 0x1a86d0, Func Offset: 0x40
	// Line 204, Address: 0x1a86d8, Func Offset: 0x48
	// Line 205, Address: 0x1a86dc, Func Offset: 0x4c
	// Line 207, Address: 0x1a86e8, Func Offset: 0x58
	// Line 208, Address: 0x1a86f0, Func Offset: 0x60
	// Line 209, Address: 0x1a86fc, Func Offset: 0x6c
	// Line 211, Address: 0x1a8700, Func Offset: 0x70
	// Line 212, Address: 0x1a8708, Func Offset: 0x78
	// Line 214, Address: 0x1a8710, Func Offset: 0x80
	// Line 218, Address: 0x1a8718, Func Offset: 0x88
	// Line 220, Address: 0x1a8720, Func Offset: 0x90
	// Line 222, Address: 0x1a8730, Func Offset: 0xa0
	// Func End, Address: 0x1a8738, Func Offset: 0xa8
}

// 
// Start address: 0x1a8740
void sfMemorySmallFree(void* ap)
{
	_Header* bp;
	_Header* p;
	// Line 236, Address: 0x1a8740, Func Offset: 0
	// Line 239, Address: 0x1a8748, Func Offset: 0x8
	// Line 240, Address: 0x1a874c, Func Offset: 0xc
	// Line 241, Address: 0x1a8754, Func Offset: 0x14
	// Line 240, Address: 0x1a875c, Func Offset: 0x1c
	// Line 241, Address: 0x1a8764, Func Offset: 0x24
	// Line 242, Address: 0x1a8774, Func Offset: 0x34
	// Line 244, Address: 0x1a8790, Func Offset: 0x50
	// Line 247, Address: 0x1a87b8, Func Offset: 0x78
	// Line 248, Address: 0x1a87cc, Func Offset: 0x8c
	// Line 249, Address: 0x1a87d8, Func Offset: 0x98
	// Line 250, Address: 0x1a87e0, Func Offset: 0xa0
	// Line 252, Address: 0x1a87e8, Func Offset: 0xa8
	// Line 253, Address: 0x1a87ec, Func Offset: 0xac
	// Line 254, Address: 0x1a87f0, Func Offset: 0xb0
	// Line 255, Address: 0x1a8804, Func Offset: 0xc4
	// Line 256, Address: 0x1a8810, Func Offset: 0xd0
	// Line 257, Address: 0x1a8814, Func Offset: 0xd4
	// Line 259, Address: 0x1a8820, Func Offset: 0xe0
	// Line 260, Address: 0x1a8824, Func Offset: 0xe4
	// Line 261, Address: 0x1a8828, Func Offset: 0xe8
	// Line 264, Address: 0x1a8830, Func Offset: 0xf0
	// Func End, Address: 0x1a8838, Func Offset: 0xf8
}

