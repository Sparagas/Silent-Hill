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
// Start address: 0x149cc0
_anon0* shEfctPkInit(void* packet)
{
	// Line 13, Address: 0x149cc0, Func Offset: 0
	// Line 14, Address: 0x149ccc, Func Offset: 0xc
	// Line 15, Address: 0x149ce0, Func Offset: 0x20
	// Line 16, Address: 0x149ce8, Func Offset: 0x28
	// Func End, Address: 0x149cf8, Func Offset: 0x38
}

// 
// Start address: 0x149d00
_anon0* shEfctPkReset()
{
	// Line 21, Address: 0x149d00, Func Offset: 0
	// Line 22, Address: 0x149d08, Func Offset: 0x8
	// Line 23, Address: 0x149d18, Func Offset: 0x18
	// Line 24, Address: 0x149d20, Func Offset: 0x20
	// Func End, Address: 0x149d30, Func Offset: 0x30
}

// 
// Start address: 0x149d30
_anon0* shEfctPkTaskHead()
{
	// Line 28, Address: 0x149d30, Func Offset: 0
	// Line 29, Address: 0x149d38, Func Offset: 0x8
	// Line 30, Address: 0x149d4c, Func Offset: 0x1c
	// Line 31, Address: 0x149d60, Func Offset: 0x30
	// Line 32, Address: 0x149d68, Func Offset: 0x38
	// Func End, Address: 0x149d78, Func Offset: 0x48
}

// 
// Start address: 0x149d80
_anon0* shEfctPkTaskTail()
{
	// Line 36, Address: 0x149d80, Func Offset: 0
	// Line 37, Address: 0x149d88, Func Offset: 0x8
	// Line 38, Address: 0x149d98, Func Offset: 0x18
	// Line 39, Address: 0x149da0, Func Offset: 0x20
	// Func End, Address: 0x149db0, Func Offset: 0x30
}

// 
// Start address: 0x149db0
void* shEfctPkGetKickAddrByd1cSend()
{
	// Line 51, Address: 0x149db0, Func Offset: 0
	// Line 52, Address: 0x149db8, Func Offset: 0x8
	// Line 53, Address: 0x149dcc, Func Offset: 0x1c
	// Line 54, Address: 0x149ddc, Func Offset: 0x2c
	// Line 55, Address: 0x149de4, Func Offset: 0x34
	// Func End, Address: 0x149df4, Func Offset: 0x44
}

