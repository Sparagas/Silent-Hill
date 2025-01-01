typedef struct sgSpkWork;



struct sgSpkWork
{
	<unknown fundamental type (0xa510)>* packet;
	unsigned int packet_max;
	unsigned long* pk_last;
	unsigned long* pos;
	unsigned long* pgiftag;
	unsigned long giftag_b;
};


void sgSpkConstruct(sgSpkWork* pk_work, void* workarea, unsigned int size);
void sgSpkReset(sgSpkWork* pk_work);
void* sgSpkOpenDGiftag(sgSpkWork* pk_work, unsigned long giftag1, unsigned long giftag2);
int sgSpkCloseGiftag(sgSpkWork* pk_work);
void sgSpkCloseOpenDGiftag(sgSpkWork* pk_work, unsigned long giftag1, unsigned long giftag2);

// 
// Start address: 0x14c8d0
void sgSpkConstruct(sgSpkWork* pk_work, void* workarea, unsigned int size)
{
	// Line 25, Address: 0x14c8d0, Func Offset: 0
	// Line 27, Address: 0x14c8e0, Func Offset: 0x10
	// Line 30, Address: 0x14c8ec, Func Offset: 0x1c
	// Line 31, Address: 0x14c8f0, Func Offset: 0x20
	// Line 34, Address: 0x14c8f4, Func Offset: 0x24
	// Func End, Address: 0x14c8fc, Func Offset: 0x2c
}

// 
// Start address: 0x14c900
void sgSpkReset(sgSpkWork* pk_work)
{
	// Line 42, Address: 0x14c900, Func Offset: 0
	// Line 45, Address: 0x14c90c, Func Offset: 0xc
	// Func End, Address: 0x14c914, Func Offset: 0x14
}

// 
// Start address: 0x14c920
void* sgSpkOpenDGiftag(sgSpkWork* pk_work, unsigned long giftag1, unsigned long giftag2)
{
	unsigned long* pos;
	// Line 73, Address: 0x14c920, Func Offset: 0
	// Line 74, Address: 0x14c924, Func Offset: 0x4
	// Line 73, Address: 0x14c934, Func Offset: 0x14
	// Line 74, Address: 0x14c938, Func Offset: 0x18
	// Line 75, Address: 0x14c940, Func Offset: 0x20
	// Line 76, Address: 0x14c948, Func Offset: 0x28
	// Line 78, Address: 0x14c94c, Func Offset: 0x2c
	// Func End, Address: 0x14c954, Func Offset: 0x34
}

// 
// Start address: 0x14c960
int sgSpkCloseGiftag(sgSpkWork* pk_work)
{
	unsigned int n;
	unsigned int n2;
	unsigned int nreg;
	unsigned long* pgt;
	unsigned long tag;
	unsigned long* pos;
	// Line 89, Address: 0x14c960, Func Offset: 0
	// Line 87, Address: 0x14c964, Func Offset: 0x4
	// Line 88, Address: 0x14c968, Func Offset: 0x8
	// Line 96, Address: 0x14c96c, Func Offset: 0xc
	// Line 94, Address: 0x14c970, Func Offset: 0x10
	// Line 96, Address: 0x14c978, Func Offset: 0x18
	// Line 97, Address: 0x14c980, Func Offset: 0x20
	// Line 98, Address: 0x14c988, Func Offset: 0x28
	// Line 99, Address: 0x14c98c, Func Offset: 0x2c
	// Line 98, Address: 0x14c990, Func Offset: 0x30
	// Line 101, Address: 0x14c994, Func Offset: 0x34
	// Line 102, Address: 0x14c998, Func Offset: 0x38
	// Line 103, Address: 0x14c9a0, Func Offset: 0x40
	// Line 104, Address: 0x14c9a4, Func Offset: 0x44
	// Line 105, Address: 0x14c9b0, Func Offset: 0x50
	// Line 107, Address: 0x14c9b8, Func Offset: 0x58
	// Line 108, Address: 0x14c9bc, Func Offset: 0x5c
	// Line 109, Address: 0x14c9c4, Func Offset: 0x64
	// Line 110, Address: 0x14c9c8, Func Offset: 0x68
	// Line 111, Address: 0x14c9d4, Func Offset: 0x74
	// Line 112, Address: 0x14c9dc, Func Offset: 0x7c
	// Line 113, Address: 0x14c9e8, Func Offset: 0x88
	// Line 114, Address: 0x14c9ec, Func Offset: 0x8c
	// Line 115, Address: 0x14c9f0, Func Offset: 0x90
	// Line 116, Address: 0x14ca08, Func Offset: 0xa8
	// Line 117, Address: 0x14ca18, Func Offset: 0xb8
	// Line 119, Address: 0x14ca28, Func Offset: 0xc8
	// Line 123, Address: 0x14ca38, Func Offset: 0xd8
	// Line 119, Address: 0x14ca3c, Func Offset: 0xdc
	// Line 120, Address: 0x14ca4c, Func Offset: 0xec
	// Line 122, Address: 0x14ca50, Func Offset: 0xf0
	// Line 123, Address: 0x14ca54, Func Offset: 0xf4
	// Line 124, Address: 0x14ca58, Func Offset: 0xf8
	// Func End, Address: 0x14ca60, Func Offset: 0x100
}

// 
// Start address: 0x14ca60
void sgSpkCloseOpenDGiftag(sgSpkWork* pk_work, unsigned long giftag1, unsigned long giftag2)
{
	unsigned int n;
	unsigned int nreg;
	unsigned long* pgt;
	unsigned long tag;
	unsigned long* pos;
	// Line 173, Address: 0x14ca60, Func Offset: 0
	// Line 171, Address: 0x14ca64, Func Offset: 0x4
	// Line 172, Address: 0x14ca68, Func Offset: 0x8
	// Line 180, Address: 0x14ca6c, Func Offset: 0xc
	// Line 178, Address: 0x14ca70, Func Offset: 0x10
	// Line 180, Address: 0x14ca78, Func Offset: 0x18
	// Line 181, Address: 0x14ca80, Func Offset: 0x20
	// Line 183, Address: 0x14ca88, Func Offset: 0x28
	// Line 185, Address: 0x14ca90, Func Offset: 0x30
	// Line 186, Address: 0x14ca98, Func Offset: 0x38
	// Line 187, Address: 0x14cab0, Func Offset: 0x50
	// Line 188, Address: 0x14cac0, Func Offset: 0x60
	// Line 190, Address: 0x14cad0, Func Offset: 0x70
	// Line 195, Address: 0x14caf0, Func Offset: 0x90
	// Line 194, Address: 0x14caf8, Func Offset: 0x98
	// Line 195, Address: 0x14cafc, Func Offset: 0x9c
	// Line 196, Address: 0x14cb0c, Func Offset: 0xac
	// Line 198, Address: 0x14cb14, Func Offset: 0xb4
	// Func End, Address: 0x14cb1c, Func Offset: 0xbc
}

