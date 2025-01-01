typedef struct ktPkBuf;


typedef void* type_0[2];
typedef <unknown fundamental type (0xa510)> type_1[6144];
typedef <unknown fundamental type (0xa510)> type_2[6144][2];

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
// Start address: 0x125810
void ktVif1PkBufInit(void* buf0, void* buf1, int size)
{
	// Line 44, Address: 0x125810, Func Offset: 0
	// Line 45, Address: 0x125824, Func Offset: 0x14
	// Line 46, Address: 0x12583c, Func Offset: 0x2c
	// Func End, Address: 0x12584c, Func Offset: 0x3c
}

// 
// Start address: 0x125850
void sh2_ktVif1kBufInit()
{
	// Line 48, Address: 0x125850, Func Offset: 0
	// Line 50, Address: 0x125858, Func Offset: 0x8
	// Line 56, Address: 0x125878, Func Offset: 0x28
	// Func End, Address: 0x125888, Func Offset: 0x38
}

// 
// Start address: 0x125890
void* ktVif1PkBufNext()
{
	// Line 63, Address: 0x125890, Func Offset: 0
	// Line 64, Address: 0x125898, Func Offset: 0x8
	// Line 65, Address: 0x1258a8, Func Offset: 0x18
	// Func End, Address: 0x1258b8, Func Offset: 0x28
}

