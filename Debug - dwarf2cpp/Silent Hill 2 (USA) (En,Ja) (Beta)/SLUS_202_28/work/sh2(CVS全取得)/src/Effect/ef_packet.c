typedef struct _anon0;


typedef _anon0 type[1];

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

_anon0 efctVif1Packet[1];

_anon0* shEfctPkInit(void* packet);
_anon0* shEfctPkReset();
_anon0* shEfctPkTaskHead();
_anon0* shEfctPkTaskTail();
void* shEfctPkGetKickAddrByd1cSend();

// 
// Start address: 0x13e000
_anon0* shEfctPkInit(void* packet)
{
	// Line 13, Address: 0x13e000, Func Offset: 0
	// Line 14, Address: 0x13e00c, Func Offset: 0xc
	// Line 15, Address: 0x13e01c, Func Offset: 0x1c
	// Line 16, Address: 0x13e024, Func Offset: 0x24
	// Func End, Address: 0x13e034, Func Offset: 0x34
}

// 
// Start address: 0x13e040
_anon0* shEfctPkReset()
{
	// Line 21, Address: 0x13e040, Func Offset: 0
	// Line 22, Address: 0x13e048, Func Offset: 0x8
	// Line 23, Address: 0x13e058, Func Offset: 0x18
	// Line 24, Address: 0x13e060, Func Offset: 0x20
	// Func End, Address: 0x13e070, Func Offset: 0x30
}

// 
// Start address: 0x13e070
_anon0* shEfctPkTaskHead()
{
	// Line 28, Address: 0x13e070, Func Offset: 0
	// Line 29, Address: 0x13e078, Func Offset: 0x8
	// Line 30, Address: 0x13e08c, Func Offset: 0x1c
	// Line 31, Address: 0x13e0a0, Func Offset: 0x30
	// Line 32, Address: 0x13e0a8, Func Offset: 0x38
	// Func End, Address: 0x13e0b8, Func Offset: 0x48
}

// 
// Start address: 0x13e0c0
_anon0* shEfctPkTaskTail()
{
	// Line 36, Address: 0x13e0c0, Func Offset: 0
	// Line 37, Address: 0x13e0c8, Func Offset: 0x8
	// Line 38, Address: 0x13e0d8, Func Offset: 0x18
	// Line 39, Address: 0x13e0e0, Func Offset: 0x20
	// Func End, Address: 0x13e0f0, Func Offset: 0x30
}

// 
// Start address: 0x13e0f0
void* shEfctPkGetKickAddrByd1cSend()
{
	// Line 51, Address: 0x13e0f0, Func Offset: 0
	// Line 52, Address: 0x13e0f8, Func Offset: 0x8
	// Line 53, Address: 0x13e10c, Func Offset: 0x1c
	// Line 54, Address: 0x13e11c, Func Offset: 0x2c
	// Line 55, Address: 0x13e124, Func Offset: 0x34
	// Func End, Address: 0x13e134, Func Offset: 0x44
}

