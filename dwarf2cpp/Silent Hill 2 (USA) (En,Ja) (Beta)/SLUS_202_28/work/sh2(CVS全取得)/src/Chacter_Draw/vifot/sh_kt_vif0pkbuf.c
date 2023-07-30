typedef struct ktPkBuf;


typedef void* type_0[2];
typedef <unknown fundamental type (0xa510)> type_1[256];
typedef <unknown fundamental type (0xa510)> type_2[256][2];

struct ktPkBuf
{
	int page;
	void* current;
	void* buffers[2];
	int buffer_size;
};

ktPkBuf vif0_pkbuf;
<unknown fundamental type (0xa510)> vif0_pk_buf_db[256][2];

void ktVif0PkBufInit(void* buf0, void* buf1, int size);
void sh2_ktVif0PkBufInit();
void* ktVif0PkBufNext();
void* ktVif0PkBufCurrent();

// 
// Start address: 0x125320
void ktVif0PkBufInit(void* buf0, void* buf1, int size)
{
	// Line 32, Address: 0x125320, Func Offset: 0
	// Line 33, Address: 0x125334, Func Offset: 0x14
	// Line 34, Address: 0x12534c, Func Offset: 0x2c
	// Func End, Address: 0x12535c, Func Offset: 0x3c
}

// 
// Start address: 0x125360
void sh2_ktVif0PkBufInit()
{
	// Line 37, Address: 0x125360, Func Offset: 0
	// Line 39, Address: 0x125368, Func Offset: 0x8
	// Line 45, Address: 0x125384, Func Offset: 0x24
	// Func End, Address: 0x125394, Func Offset: 0x34
}

// 
// Start address: 0x1253a0
void* ktVif0PkBufNext()
{
	// Line 50, Address: 0x1253a0, Func Offset: 0
	// Line 51, Address: 0x1253a8, Func Offset: 0x8
	// Line 52, Address: 0x1253b8, Func Offset: 0x18
	// Func End, Address: 0x1253c8, Func Offset: 0x28
}

// 
// Start address: 0x1253d0
void* ktVif0PkBufCurrent()
{
	// Line 70, Address: 0x1253d0, Func Offset: 0
	// Line 71, Address: 0x1253d8, Func Offset: 0x8
	// Line 72, Address: 0x1253e8, Func Offset: 0x18
	// Func End, Address: 0x1253f8, Func Offset: 0x28
}

