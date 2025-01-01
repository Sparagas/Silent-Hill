typedef struct _anon0;
typedef enum sgDmaChanNo : unsigned char;


typedef <unknown fundamental type (0xa510)>* type_0[2];
typedef _anon0 type_1[3];
typedef int type_2[3];

struct _anon0
{
	<unknown fundamental type (0xa510)>* buffer_addr[2];
	int buffer_no;
	int size1;
	int pile_up;
	int piled_size;
};

enum sgDmaChanNo : unsigned char
{
	SG_DMA_VIF0,
	SG_DMA_VIF1,
	SG_DMA_GIF,
	SG_DMA_FROM_SPR = 0x8,
	SG_DMA_TO_SPR
};

_anon0 buf_work[3];
int initialized[3];

void sgDmaBufferInit();
void sgDmaBufferSet(sgDmaChanNo chan_no, <unknown fundamental type (0xa510)>* addr, int size);
int sgDmaBufferSize(sgDmaChanNo chan_no);
<unknown fundamental type (0xa510)>* sgDmaBufferGet(sgDmaChanNo chan_no);
void sgDmaBufferFix(sgDmaChanNo chan_no, int size);
<unknown fundamental type (0xa510)>* sgDmaBufferFullAllocate(sgDmaChanNo chan_no);
void sgDmaBufferFullAllocateFix(sgDmaChanNo chan_no, void* addr, int size);
void sgDmaBufferStartPileUpMode(sgDmaChanNo chan_no);
void sgDmaBufferEndPileUpMode(sgDmaChanNo chan_no);

// 
// Start address: 0x14a060
void sgDmaBufferInit()
{
	int i;
	// Line 56, Address: 0x14a060, Func Offset: 0
	// Line 59, Address: 0x14a070, Func Offset: 0x10
	// Line 61, Address: 0x14a080, Func Offset: 0x20
	// Line 62, Address: 0x14a098, Func Offset: 0x38
	// Line 63, Address: 0x14a0a8, Func Offset: 0x48
	// Func End, Address: 0x14a0bc, Func Offset: 0x5c
}

// 
// Start address: 0x14a0c0
void sgDmaBufferSet(sgDmaChanNo chan_no, <unknown fundamental type (0xa510)>* addr, int size)
{
	int size1;
	_anon0* work;
	// Line 76, Address: 0x14a0c0, Func Offset: 0
	// Line 81, Address: 0x14a0d8, Func Offset: 0x18
	// Line 83, Address: 0x14a0e0, Func Offset: 0x20
	// Line 84, Address: 0x14a0ec, Func Offset: 0x2c
	// Line 85, Address: 0x14a0f8, Func Offset: 0x38
	// Line 88, Address: 0x14a104, Func Offset: 0x44
	// Line 90, Address: 0x14a118, Func Offset: 0x58
	// Line 91, Address: 0x14a12c, Func Offset: 0x6c
	// Line 92, Address: 0x14a138, Func Offset: 0x78
	// Line 93, Address: 0x14a13c, Func Offset: 0x7c
	// Line 97, Address: 0x14a144, Func Offset: 0x84
	// Line 96, Address: 0x14a148, Func Offset: 0x88
	// Line 94, Address: 0x14a14c, Func Offset: 0x8c
	// Line 96, Address: 0x14a150, Func Offset: 0x90
	// Line 95, Address: 0x14a160, Func Offset: 0xa0
	// Line 96, Address: 0x14a164, Func Offset: 0xa4
	// Line 97, Address: 0x14a168, Func Offset: 0xa8
	// Line 98, Address: 0x14a174, Func Offset: 0xb4
	// Line 99, Address: 0x14a184, Func Offset: 0xc4
	// Func End, Address: 0x14a1a4, Func Offset: 0xe4
}

// 
// Start address: 0x14a1b0
int sgDmaBufferSize(sgDmaChanNo chan_no)
{
	// Line 116, Address: 0x14a1b0, Func Offset: 0
	// Line 117, Address: 0x14a1cc, Func Offset: 0x1c
	// Func End, Address: 0x14a1d4, Func Offset: 0x24
}

// 
// Start address: 0x14a1e0
<unknown fundamental type (0xa510)>* sgDmaBufferGet(sgDmaChanNo chan_no)
{
	_anon0* work;
	<unknown fundamental type (0xa510)>* p;
	// Line 131, Address: 0x14a1e0, Func Offset: 0
	// Line 143, Address: 0x14a1f4, Func Offset: 0x14
	// Line 131, Address: 0x14a1f8, Func Offset: 0x18
	// Line 143, Address: 0x14a1fc, Func Offset: 0x1c
	// Line 145, Address: 0x14a210, Func Offset: 0x30
	// Line 143, Address: 0x14a214, Func Offset: 0x34
	// Line 145, Address: 0x14a218, Func Offset: 0x38
	// Line 147, Address: 0x14a22c, Func Offset: 0x4c
	// Line 148, Address: 0x14a234, Func Offset: 0x54
	// Line 150, Address: 0x14a238, Func Offset: 0x58
	// Line 151, Address: 0x14a23c, Func Offset: 0x5c
	// Line 152, Address: 0x14a248, Func Offset: 0x68
	// Line 157, Address: 0x14a258, Func Offset: 0x78
	// Func End, Address: 0x14a260, Func Offset: 0x80
}

// 
// Start address: 0x14a260
void sgDmaBufferFix(sgDmaChanNo chan_no, int size)
{
	_anon0* work;
	// Line 208, Address: 0x14a260, Func Offset: 0
	// Line 228, Address: 0x14a274, Func Offset: 0x14
	// Line 208, Address: 0x14a278, Func Offset: 0x18
	// Line 228, Address: 0x14a27c, Func Offset: 0x1c
	// Line 230, Address: 0x14a290, Func Offset: 0x30
	// Line 235, Address: 0x14a2b0, Func Offset: 0x50
	// Line 238, Address: 0x14a2b8, Func Offset: 0x58
	// Line 239, Address: 0x14a2c0, Func Offset: 0x60
	// Line 240, Address: 0x14a2cc, Func Offset: 0x6c
	// Line 242, Address: 0x14a2d8, Func Offset: 0x78
	// Func End, Address: 0x14a2e0, Func Offset: 0x80
}

// 
// Start address: 0x14a2e0
<unknown fundamental type (0xa510)>* sgDmaBufferFullAllocate(sgDmaChanNo chan_no)
{
	_anon0* work;
	// Line 256, Address: 0x14a2e0, Func Offset: 0
	// Line 257, Address: 0x14a2e4, Func Offset: 0x4
	// Line 256, Address: 0x14a2e8, Func Offset: 0x8
	// Line 257, Address: 0x14a2ec, Func Offset: 0xc
	// Line 256, Address: 0x14a2f0, Func Offset: 0x10
	// Line 257, Address: 0x14a2f4, Func Offset: 0x14
	// Line 256, Address: 0x14a2fc, Func Offset: 0x1c
	// Line 257, Address: 0x14a300, Func Offset: 0x20
	// Line 264, Address: 0x14a30c, Func Offset: 0x2c
	// Line 269, Address: 0x14a314, Func Offset: 0x34
	// Line 272, Address: 0x14a350, Func Offset: 0x70
	// Func End, Address: 0x14a364, Func Offset: 0x84
}

// 
// Start address: 0x14a370
void sgDmaBufferFullAllocateFix(sgDmaChanNo chan_no, void* addr, int size)
{
	_anon0* work;
	// Line 286, Address: 0x14a370, Func Offset: 0
	// Line 287, Address: 0x14a374, Func Offset: 0x4
	// Line 286, Address: 0x14a378, Func Offset: 0x8
	// Line 287, Address: 0x14a37c, Func Offset: 0xc
	// Line 286, Address: 0x14a380, Func Offset: 0x10
	// Line 287, Address: 0x14a394, Func Offset: 0x24
	// Line 291, Address: 0x14a3a4, Func Offset: 0x34
	// Line 287, Address: 0x14a3a8, Func Offset: 0x38
	// Line 291, Address: 0x14a3ac, Func Offset: 0x3c
	// Line 292, Address: 0x14a3c4, Func Offset: 0x54
	// Line 303, Address: 0x14a3e0, Func Offset: 0x70
	// Line 305, Address: 0x14a408, Func Offset: 0x98
	// Line 310, Address: 0x14a424, Func Offset: 0xb4
	// Line 311, Address: 0x14a42c, Func Offset: 0xbc
	// Line 312, Address: 0x14a430, Func Offset: 0xc0
	// Line 314, Address: 0x14a438, Func Offset: 0xc8
	// Line 316, Address: 0x14a440, Func Offset: 0xd0
	// Func End, Address: 0x14a458, Func Offset: 0xe8
}

// 
// Start address: 0x14a460
void sgDmaBufferStartPileUpMode(sgDmaChanNo chan_no)
{
	_anon0* work;
	// Line 327, Address: 0x14a460, Func Offset: 0
	// Line 328, Address: 0x14a478, Func Offset: 0x18
	// Line 327, Address: 0x14a47c, Func Offset: 0x1c
	// Line 328, Address: 0x14a480, Func Offset: 0x20
	// Line 330, Address: 0x14a484, Func Offset: 0x24
	// Func End, Address: 0x14a48c, Func Offset: 0x2c
}

// 
// Start address: 0x14a490
void sgDmaBufferEndPileUpMode(sgDmaChanNo chan_no)
{
	_anon0* work;
	// Line 339, Address: 0x14a490, Func Offset: 0
	// Line 340, Address: 0x14a4ac, Func Offset: 0x1c
	// Line 342, Address: 0x14a4b0, Func Offset: 0x20
	// Func End, Address: 0x14a4b8, Func Offset: 0x28
}

