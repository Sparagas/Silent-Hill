
typedef int(*type)(int);


int excl_sid;
int wait_sid;
int dmac_hid;
int(*shDmaGifHandler)(int);
int AA2_check;

int shDmaGifHandler();
void shDmaGifHalt();
int shDmaGifWait();
int shDmaGifInit();
int shDmaGifSend(void* packet);

// 
// Start address: 0x18f6a0
int shDmaGifHandler()
{
	// Line 37, Address: 0x18f6a0, Func Offset: 0
	// Line 48, Address: 0x18f6a8, Func Offset: 0x8
	// Line 49, Address: 0x18f6b8, Func Offset: 0x18
	// Line 50, Address: 0x18f6c0, Func Offset: 0x20
	// Line 51, Address: 0x18f6c4, Func Offset: 0x24
	// Func End, Address: 0x18f6d4, Func Offset: 0x34
}

// 
// Start address: 0x18f6e0
void shDmaGifHalt()
{
	unsigned int enable;
	unsigned int chcr;
	// Line 55, Address: 0x18f6e0, Func Offset: 0
	// Line 58, Address: 0x18f6ec, Func Offset: 0xc
	// Line 59, Address: 0x18f6f8, Func Offset: 0x18
	// Line 60, Address: 0x18f70c, Func Offset: 0x2c
	// Line 61, Address: 0x18f718, Func Offset: 0x38
	// Line 62, Address: 0x18f720, Func Offset: 0x40
	// Line 63, Address: 0x18f72c, Func Offset: 0x4c
	// Line 64, Address: 0x18f738, Func Offset: 0x58
	// Func End, Address: 0x18f74c, Func Offset: 0x6c
}

// 
// Start address: 0x18f750
int shDmaGifWait()
{
	unsigned short h1;
	unsigned short h0;
	int count;
	// Line 68, Address: 0x18f750, Func Offset: 0
	// Line 72, Address: 0x18f764, Func Offset: 0x14
	// Line 73, Address: 0x18f768, Func Offset: 0x18
	// Line 74, Address: 0x18f778, Func Offset: 0x28
	// Line 76, Address: 0x18f780, Func Offset: 0x30
	// Line 77, Address: 0x18f784, Func Offset: 0x34
	// Line 78, Address: 0x18f794, Func Offset: 0x44
	// Line 79, Address: 0x18f7a4, Func Offset: 0x54
	// Line 80, Address: 0x18f7a8, Func Offset: 0x58
	// Line 81, Address: 0x18f7c4, Func Offset: 0x74
	// Line 82, Address: 0x18f7d4, Func Offset: 0x84
	// Line 84, Address: 0x18f7d8, Func Offset: 0x88
	// Line 85, Address: 0x18f7f0, Func Offset: 0xa0
	// Line 86, Address: 0x18f7f4, Func Offset: 0xa4
	// Func End, Address: 0x18f810, Func Offset: 0xc0
}

// 
// Start address: 0x18f810
int shDmaGifInit()
{
	int ret;
	unsigned int chcr;
	// Line 97, Address: 0x18f810, Func Offset: 0
	// Line 102, Address: 0x18f820, Func Offset: 0x10
	// Line 103, Address: 0x18f85c, Func Offset: 0x4c
	// Line 105, Address: 0x18f86c, Func Offset: 0x5c
	// Line 107, Address: 0x18f8a0, Func Offset: 0x90
	// Line 108, Address: 0x18f8a8, Func Offset: 0x98
	// Line 109, Address: 0x18f8b8, Func Offset: 0xa8
	// Line 110, Address: 0x18f8bc, Func Offset: 0xac
	// Line 113, Address: 0x18f8c8, Func Offset: 0xb8
	// Line 115, Address: 0x18f904, Func Offset: 0xf4
	// Line 116, Address: 0x18f924, Func Offset: 0x114
	// Line 119, Address: 0x18f930, Func Offset: 0x120
	// Line 120, Address: 0x18f940, Func Offset: 0x130
	// Line 121, Address: 0x18f958, Func Offset: 0x148
	// Line 122, Address: 0x18f95c, Func Offset: 0x14c
	// Func End, Address: 0x18f974, Func Offset: 0x164
}

// 
// Start address: 0x18f980
int shDmaGifSend(void* packet)
{
	unsigned int chcr;
	// Line 126, Address: 0x18f980, Func Offset: 0
	// Line 128, Address: 0x18f990, Func Offset: 0x10
	// Line 130, Address: 0x18f9a4, Func Offset: 0x24
	// Line 132, Address: 0x18f9b0, Func Offset: 0x30
	// Line 134, Address: 0x18f9c0, Func Offset: 0x40
	// Line 136, Address: 0x18f9cc, Func Offset: 0x4c
	// Line 137, Address: 0x18f9dc, Func Offset: 0x5c
	// Line 138, Address: 0x18f9e8, Func Offset: 0x68
	// Line 140, Address: 0x18f9f4, Func Offset: 0x74
	// Line 141, Address: 0x18f9fc, Func Offset: 0x7c
	// Line 142, Address: 0x18fa00, Func Offset: 0x80
	// Line 143, Address: 0x18fa0c, Func Offset: 0x8c
	// Line 145, Address: 0x18fa18, Func Offset: 0x98
	// Line 147, Address: 0x18fa24, Func Offset: 0xa4
	// Line 149, Address: 0x18fa34, Func Offset: 0xb4
	// Line 151, Address: 0x18fa40, Func Offset: 0xc0
	// Line 153, Address: 0x18fa50, Func Offset: 0xd0
	// Line 156, Address: 0x18fa60, Func Offset: 0xe0
	// Line 157, Address: 0x18fa6c, Func Offset: 0xec
	// Line 165, Address: 0x18fa80, Func Offset: 0x100
	// Line 168, Address: 0x18fab8, Func Offset: 0x138
	// Line 170, Address: 0x18fac4, Func Offset: 0x144
	// Line 172, Address: 0x18fad4, Func Offset: 0x154
	// Line 174, Address: 0x18fae0, Func Offset: 0x160
	// Line 175, Address: 0x18fae4, Func Offset: 0x164
	// Func End, Address: 0x18faf8, Func Offset: 0x178
}

