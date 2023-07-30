typedef struct utilHeapCtrl;


typedef <unknown fundamental type (0xa510)> type[98308];

struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};

utilHeapCtrl* shCh_ASCDAT_Ctrl;
<unknown fundamental type (0xa510)> Anim_Skl_Cls_Data[98308];

utilHeapCtrl* shCh_ASC_InitHead(void* bufhead, int size);
void* shCh_ASC_Malloc(unsigned int n);
void shCh_ASC_Free(void* p);
void kari_ChAlloc_Init();

// 
// Start address: 0x18a730
utilHeapCtrl* shCh_ASC_InitHead(void* bufhead, int size)
{
	unsigned int align;
	// Line 35, Address: 0x18a730, Func Offset: 0
	// Line 38, Address: 0x18a744, Func Offset: 0x14
	// Line 39, Address: 0x18a748, Func Offset: 0x18
	// Line 41, Address: 0x18a780, Func Offset: 0x50
	// Line 42, Address: 0x18a78c, Func Offset: 0x5c
	// Line 47, Address: 0x18a794, Func Offset: 0x64
	// Line 48, Address: 0x18a7a0, Func Offset: 0x70
	// Line 50, Address: 0x18a7a8, Func Offset: 0x78
	// Line 51, Address: 0x18a7b4, Func Offset: 0x84
	// Line 53, Address: 0x18a7bc, Func Offset: 0x8c
	// Line 54, Address: 0x18a7cc, Func Offset: 0x9c
	// Line 59, Address: 0x18a7d8, Func Offset: 0xa8
	// Line 61, Address: 0x18a7f0, Func Offset: 0xc0
	// Line 62, Address: 0x18a804, Func Offset: 0xd4
	// Line 63, Address: 0x18a814, Func Offset: 0xe4
	// Line 65, Address: 0x18a820, Func Offset: 0xf0
	// Line 66, Address: 0x18a828, Func Offset: 0xf8
	// Func End, Address: 0x18a83c, Func Offset: 0x10c
}

// 
// Start address: 0x18a840
void* shCh_ASC_Malloc(unsigned int n)
{
	void* p;
	// Line 71, Address: 0x18a840, Func Offset: 0
	// Line 75, Address: 0x18a850, Func Offset: 0x10
	// Line 76, Address: 0x18a85c, Func Offset: 0x1c
	// Line 78, Address: 0x18a86c, Func Offset: 0x2c
	// Line 80, Address: 0x18a8a8, Func Offset: 0x68
	// Line 81, Address: 0x18a8b4, Func Offset: 0x74
	// Line 83, Address: 0x18a8bc, Func Offset: 0x7c
	// Line 84, Address: 0x18a8c8, Func Offset: 0x88
	// Line 86, Address: 0x18a8d0, Func Offset: 0x90
	// Line 87, Address: 0x18a8dc, Func Offset: 0x9c
	// Line 91, Address: 0x18a8e4, Func Offset: 0xa4
	// Line 92, Address: 0x18a8f4, Func Offset: 0xb4
	// Line 96, Address: 0x18a900, Func Offset: 0xc0
	// Line 99, Address: 0x18a918, Func Offset: 0xd8
	// Line 100, Address: 0x18a924, Func Offset: 0xe4
	// Line 101, Address: 0x18a934, Func Offset: 0xf4
	// Line 105, Address: 0x18a940, Func Offset: 0x100
	// Line 106, Address: 0x18a948, Func Offset: 0x108
	// Line 107, Address: 0x18a958, Func Offset: 0x118
	// Line 109, Address: 0x18a964, Func Offset: 0x124
	// Line 111, Address: 0x18a978, Func Offset: 0x138
	// Line 112, Address: 0x18a97c, Func Offset: 0x13c
	// Func End, Address: 0x18a990, Func Offset: 0x150
}

// 
// Start address: 0x18a990
void shCh_ASC_Free(void* p)
{
	// Line 159, Address: 0x18a990, Func Offset: 0
	// Line 160, Address: 0x18a99c, Func Offset: 0xc
	// Line 161, Address: 0x18a9a8, Func Offset: 0x18
	// Func End, Address: 0x18a9b8, Func Offset: 0x28
}

// 
// Start address: 0x18a9c0
void kari_ChAlloc_Init()
{
	// Line 165, Address: 0x18a9c0, Func Offset: 0
	// Line 167, Address: 0x18a9c8, Func Offset: 0x8
	// Line 169, Address: 0x18a9e0, Func Offset: 0x20
	// Func End, Address: 0x18a9f0, Func Offset: 0x30
}

