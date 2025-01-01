typedef struct utilHeapCtrl;


typedef <unknown fundamental type (0xa510)> type[512];

struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};

utilHeapCtrl* EfctCtrl;
<unknown fundamental type (0xa510)> EfctHeap[512];

void* EfctInitHeap(void* buf, unsigned int size);
void* EfctMalloc(unsigned int n);
void EfctFree(void* p);

// 
// Start address: 0x149ba0
void* EfctInitHeap(void* buf, unsigned int size)
{
	// Line 15, Address: 0x149ba0, Func Offset: 0
	// Line 16, Address: 0x149bb0, Func Offset: 0x10
	// Line 17, Address: 0x149bc8, Func Offset: 0x28
	// Line 18, Address: 0x149bdc, Func Offset: 0x3c
	// Line 20, Address: 0x149bec, Func Offset: 0x4c
	// Line 21, Address: 0x149bf4, Func Offset: 0x54
	// Func End, Address: 0x149c04, Func Offset: 0x64
}

// 
// Start address: 0x149c10
void* EfctMalloc(unsigned int n)
{
	void* p;
	// Line 26, Address: 0x149c10, Func Offset: 0
	// Line 28, Address: 0x149c20, Func Offset: 0x10
	// Line 30, Address: 0x149c38, Func Offset: 0x28
	// Line 31, Address: 0x149c40, Func Offset: 0x30
	// Line 32, Address: 0x149c50, Func Offset: 0x40
	// Line 33, Address: 0x149c58, Func Offset: 0x48
	// Line 35, Address: 0x149c6c, Func Offset: 0x5c
	// Line 36, Address: 0x149c70, Func Offset: 0x60
	// Func End, Address: 0x149c84, Func Offset: 0x74
}

// 
// Start address: 0x149c90
void EfctFree(void* p)
{
	// Line 52, Address: 0x149c90, Func Offset: 0
	// Line 53, Address: 0x149c9c, Func Offset: 0xc
	// Line 54, Address: 0x149ca8, Func Offset: 0x18
	// Func End, Address: 0x149cb8, Func Offset: 0x28
}

