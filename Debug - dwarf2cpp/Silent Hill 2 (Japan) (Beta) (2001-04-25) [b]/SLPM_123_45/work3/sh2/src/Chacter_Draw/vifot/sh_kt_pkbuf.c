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
// Start address: 0x12da60
void ktPkBufInit(ktPkBuf* p, void* buf0, void* buf1, int size)
{
	// Line 48, Address: 0x12da60, Func Offset: 0
	// Line 49, Address: 0x12da74, Func Offset: 0x14
	// Line 50, Address: 0x12da7c, Func Offset: 0x1c
	// Line 51, Address: 0x12da88, Func Offset: 0x28
	// Line 52, Address: 0x12da94, Func Offset: 0x34
	// Line 53, Address: 0x12daa0, Func Offset: 0x40
	// Line 54, Address: 0x12daac, Func Offset: 0x4c
	// Func End, Address: 0x12dab8, Func Offset: 0x58
}

// 
// Start address: 0x12dac0
void* ktPkBufNext(ktPkBuf* p)
{
	// Line 61, Address: 0x12dac0, Func Offset: 0
	// Line 62, Address: 0x12dac8, Func Offset: 0x8
	// Line 63, Address: 0x12dadc, Func Offset: 0x1c
	// Line 64, Address: 0x12dafc, Func Offset: 0x3c
	// Line 65, Address: 0x12db04, Func Offset: 0x44
	// Func End, Address: 0x12db10, Func Offset: 0x50
}

// 
// Start address: 0x12db10
void* ktPkBufCurrent(ktPkBuf* p)
{
	// Line 84, Address: 0x12db10, Func Offset: 0
	// Line 85, Address: 0x12db18, Func Offset: 0x8
	// Line 86, Address: 0x12db20, Func Offset: 0x10
	// Func End, Address: 0x12db2c, Func Offset: 0x1c
}

