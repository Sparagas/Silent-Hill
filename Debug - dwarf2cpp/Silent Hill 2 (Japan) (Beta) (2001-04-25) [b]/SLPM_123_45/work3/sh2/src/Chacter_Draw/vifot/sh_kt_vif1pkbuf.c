typedef struct ktPkBuf;


typedef <unknown fundamental type (0xa510)> type_0[6144];
typedef <unknown fundamental type (0xa510)> type_1[6144][2];
typedef void* type_2[2];

struct ktPkBuf
{
	int page;
	void* current;
	void* buffers[2];
	int buffer_size;
};

ktPkBuf vif1_pkbuf;
<unknown fundamental type (0xa510)> vif1_pk_buf_db[6144][2];

void ktVif1PkBufInit(void* buf0, void* buf1, int size);
void sh2_ktVif1kBufInit();
void* ktVif1PkBufNext();

// 
// Start address: 0x12e380
void ktVif1PkBufInit(void* buf0, void* buf1, int size)
{
	// Line 44, Address: 0x12e380, Func Offset: 0
	// Line 45, Address: 0x12e394, Func Offset: 0x14
	// Line 46, Address: 0x12e3b0, Func Offset: 0x30
	// Func End, Address: 0x12e3c0, Func Offset: 0x40
}

// 
// Start address: 0x12e3c0
void sh2_ktVif1kBufInit()
{
	// Line 48, Address: 0x12e3c0, Func Offset: 0
	// Line 50, Address: 0x12e3c8, Func Offset: 0x8
	// Line 56, Address: 0x12e3e8, Func Offset: 0x28
	// Func End, Address: 0x12e3f8, Func Offset: 0x38
}

// 
// Start address: 0x12e400
void* ktVif1PkBufNext()
{
	// Line 63, Address: 0x12e400, Func Offset: 0
	// Line 64, Address: 0x12e408, Func Offset: 0x8
	// Line 65, Address: 0x12e418, Func Offset: 0x18
	// Func End, Address: 0x12e428, Func Offset: 0x28
}

