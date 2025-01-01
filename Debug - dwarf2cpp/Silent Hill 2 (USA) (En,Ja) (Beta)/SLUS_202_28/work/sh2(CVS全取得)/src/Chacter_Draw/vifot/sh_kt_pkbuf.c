typedef struct ktPkBuf;


typedef void* type[2];

struct ktPkBuf
{
	int page;
	void* current;
	void* buffers[2];
	int buffer_size;
};


void ktPkBufInit(ktPkBuf* p, void* buf0, void* buf1, int size);
void* ktPkBufNext(ktPkBuf* p);
void* ktPkBufCurrent(ktPkBuf* p);

// 
// Start address: 0x125180
void ktPkBufInit(ktPkBuf* p, void* buf0, void* buf1, int size)
{
	// Line 49, Address: 0x125180, Func Offset: 0
	// Line 50, Address: 0x125184, Func Offset: 0x4
	// Line 51, Address: 0x125188, Func Offset: 0x8
	// Line 52, Address: 0x12518c, Func Offset: 0xc
	// Line 53, Address: 0x125190, Func Offset: 0x10
	// Line 54, Address: 0x125194, Func Offset: 0x14
	// Func End, Address: 0x12519c, Func Offset: 0x1c
}

// 
// Start address: 0x1251a0
void* ktPkBufNext(ktPkBuf* p)
{
	// Line 62, Address: 0x1251a0, Func Offset: 0
	// Line 63, Address: 0x1251ac, Func Offset: 0xc
	// Line 64, Address: 0x1251c0, Func Offset: 0x20
	// Line 65, Address: 0x1251c4, Func Offset: 0x24
	// Func End, Address: 0x1251cc, Func Offset: 0x2c
}

// 
// Start address: 0x1251d0
void* ktPkBufCurrent(ktPkBuf* p)
{
	// Line 85, Address: 0x1251d0, Func Offset: 0
	// Line 86, Address: 0x1251d4, Func Offset: 0x4
	// Func End, Address: 0x1251dc, Func Offset: 0xc
}

