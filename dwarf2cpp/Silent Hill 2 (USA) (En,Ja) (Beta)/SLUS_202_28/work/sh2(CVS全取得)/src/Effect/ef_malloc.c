typedef struct utilHeapCtrl;



struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};

utilHeapCtrl* EfctCtrl;

void* EfctInitHeap(void* buf, unsigned int size);
void* EfctMalloc(unsigned int n);
void EfctFree(void* p);

// 
// Start address: 0x13def0
void* EfctInitHeap(void* buf, unsigned int size)
{
	// Line 15, Address: 0x13def0, Func Offset: 0
	// Line 16, Address: 0x13df00, Func Offset: 0x10
	// Line 17, Address: 0x13df10, Func Offset: 0x20
	// Line 18, Address: 0x13df20, Func Offset: 0x30
	// Line 20, Address: 0x13df30, Func Offset: 0x40
	// Line 21, Address: 0x13df38, Func Offset: 0x48
	// Func End, Address: 0x13df4c, Func Offset: 0x5c
}

// 
// Start address: 0x13df50
void* EfctMalloc(unsigned int n)
{
	void* p;
	// Line 26, Address: 0x13df50, Func Offset: 0
	// Line 29, Address: 0x13df64, Func Offset: 0x14
	// Line 30, Address: 0x13df74, Func Offset: 0x24
	// Line 33, Address: 0x13df80, Func Offset: 0x30
	// Line 35, Address: 0x13df90, Func Offset: 0x40
	// Line 36, Address: 0x13df98, Func Offset: 0x48
	// Line 37, Address: 0x13dfa8, Func Offset: 0x58
	// Line 38, Address: 0x13dfb0, Func Offset: 0x60
	// Line 40, Address: 0x13dfc4, Func Offset: 0x74
	// Line 41, Address: 0x13dfc8, Func Offset: 0x78
	// Func End, Address: 0x13dfe0, Func Offset: 0x90
}

// 
// Start address: 0x13dfe0
void EfctFree(void* p)
{
	// Line 62, Address: 0x13dfe0, Func Offset: 0
	// Line 63, Address: 0x13dfe8, Func Offset: 0x8
	// Line 64, Address: 0x13dff0, Func Offset: 0x10
	// Func End, Address: 0x13e000, Func Offset: 0x20
}

