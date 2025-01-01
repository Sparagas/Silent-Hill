typedef struct _anon0;
typedef struct _anon1;

typedef void(*type_3)(void*, int);

typedef unsigned char type_0[3];
typedef unsigned char type_1[32];
typedef char type_2[512];
typedef void* type_4[0];

struct _anon0
{
	unsigned char magicNumber[3];
	unsigned char version;
	unsigned int overlayID;
	unsigned int address;
	unsigned int textSize;
	unsigned int dataSize;
	unsigned int bssSize;
	unsigned int staticInit;
	unsigned int staticInitEnd;
	unsigned char name[32];
};

struct _anon1
{
	void* load_addr;
	void* set_addr;
	int load_size;
	int load_end;
};

_anon1 overlay_work;
void(*OverlayLoadEndFunc)(void*, int);
void* _overlay_group_addresses[0];

void ov_init(void* addr, int size);
void OverlayLoadEndFunc(int size);
int OverlayLoad(char* name, void* addr);
int sfOverlayLoadStart(char* name, void* addr);
int sfOverlayLoadWait();
void* sfOverlayGetGroupAddress(unsigned int index);

// 
// Start address: 0x1835c0
void ov_init(void* addr, int size)
{
	unsigned char* pPtr;
	_anon0* head;
	unsigned int bsssize;
	// Line 85, Address: 0x1835c0, Func Offset: 0
	// Line 86, Address: 0x1835d8, Func Offset: 0x18
	// Line 85, Address: 0x1835dc, Func Offset: 0x1c
	// Line 87, Address: 0x1835e0, Func Offset: 0x20
	// Line 88, Address: 0x1835e4, Func Offset: 0x24
	// Line 91, Address: 0x1835e8, Func Offset: 0x28
	// Line 94, Address: 0x1835f0, Func Offset: 0x30
	// Line 95, Address: 0x1835f8, Func Offset: 0x38
	// Line 96, Address: 0x1835fc, Func Offset: 0x3c
	// Line 97, Address: 0x18360c, Func Offset: 0x4c
	// Line 101, Address: 0x183610, Func Offset: 0x50
	// Line 106, Address: 0x183624, Func Offset: 0x64
	// Func End, Address: 0x183640, Func Offset: 0x80
}

// 
// Start address: 0x183640
void OverlayLoadEndFunc(int size)
{
	// Line 124, Address: 0x183640, Func Offset: 0
	// Line 123, Address: 0x183644, Func Offset: 0x4
	// Line 124, Address: 0x183648, Func Offset: 0x8
	// Line 123, Address: 0x18364c, Func Offset: 0xc
	// Line 125, Address: 0x183650, Func Offset: 0x10
	// Func End, Address: 0x183658, Func Offset: 0x18
}

// 
// Start address: 0x183660
int OverlayLoad(char* name, void* addr)
{
	char tmpname[512];
	// Line 129, Address: 0x183660, Func Offset: 0
	// Line 134, Address: 0x183674, Func Offset: 0x14
	// Line 135, Address: 0x183688, Func Offset: 0x28
	// Line 137, Address: 0x183694, Func Offset: 0x34
	// Line 138, Address: 0x1836b0, Func Offset: 0x50
	// Func End, Address: 0x1836c4, Func Offset: 0x64
}

// 
// Start address: 0x1836d0
int sfOverlayLoadStart(char* name, void* addr)
{
	void* addr_tmp;
	// Line 155, Address: 0x1836d0, Func Offset: 0
	// Line 159, Address: 0x1836e8, Func Offset: 0x18
	// Line 160, Address: 0x1836f8, Func Offset: 0x28
	// Line 164, Address: 0x183700, Func Offset: 0x30
	// Line 166, Address: 0x183708, Func Offset: 0x38
	// Line 169, Address: 0x18370c, Func Offset: 0x3c
	// Line 166, Address: 0x183710, Func Offset: 0x40
	// Line 169, Address: 0x183714, Func Offset: 0x44
	// Line 165, Address: 0x183718, Func Offset: 0x48
	// Line 167, Address: 0x183720, Func Offset: 0x50
	// Line 169, Address: 0x183724, Func Offset: 0x54
	// Line 171, Address: 0x183730, Func Offset: 0x60
	// Func End, Address: 0x183744, Func Offset: 0x74
}

// 
// Start address: 0x183750
int sfOverlayLoadWait()
{
	void* addr;
	int size;
	_anon0* head;
	// Line 185, Address: 0x183750, Func Offset: 0
	// Line 191, Address: 0x183754, Func Offset: 0x4
	// Line 185, Address: 0x183758, Func Offset: 0x8
	// Line 191, Address: 0x183768, Func Offset: 0x18
	// Line 192, Address: 0x183774, Func Offset: 0x24
	// Line 195, Address: 0x183788, Func Offset: 0x38
	// Line 198, Address: 0x18378c, Func Offset: 0x3c
	// Line 199, Address: 0x183794, Func Offset: 0x44
	// Line 195, Address: 0x183798, Func Offset: 0x48
	// Line 198, Address: 0x18379c, Func Offset: 0x4c
	// Line 199, Address: 0x1837a0, Func Offset: 0x50
	// Line 200, Address: 0x1837ac, Func Offset: 0x5c
	// Line 201, Address: 0x1837b4, Func Offset: 0x64
	// Line 205, Address: 0x1837bc, Func Offset: 0x6c
	// Line 206, Address: 0x1837c4, Func Offset: 0x74
	// Line 208, Address: 0x1837c8, Func Offset: 0x78
	// Line 209, Address: 0x1837d0, Func Offset: 0x80
	// Func End, Address: 0x1837e8, Func Offset: 0x98
}

// 
// Start address: 0x1837f0
void* sfOverlayGetGroupAddress(unsigned int index)
{
	// Line 243, Address: 0x1837f0, Func Offset: 0
	// Line 244, Address: 0x183800, Func Offset: 0x10
	// Func End, Address: 0x183808, Func Offset: 0x18
}

