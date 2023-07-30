typedef struct utilHeapCtrl;


typedef <unknown fundamental type (0xa510)> type[32772];

struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};

utilHeapCtrl* shCh_ASCDAT_Ctrl;
<unknown fundamental type (0xa510)> Anim_Skl_Cls_Data[32772];

utilHeapCtrl* shCh_ASC_InitHead(void* bufhead, int size);
void* shCh_ASC_Malloc(unsigned int n);
void shCh_ASC_Free(void* p);
void kari_ChAlloc_Init();

// 
// Start address: 0x1841f0
utilHeapCtrl* shCh_ASC_InitHead(void* bufhead, int size)
{
	unsigned int align;
	// Line 34, Address: 0x1841f0, Func Offset: 0
	// Line 38, Address: 0x184200, Func Offset: 0x10
	// Line 40, Address: 0x184238, Func Offset: 0x48
	// Line 41, Address: 0x18423c, Func Offset: 0x4c
	// Line 46, Address: 0x184244, Func Offset: 0x54
	// Line 47, Address: 0x184248, Func Offset: 0x58
	// Line 49, Address: 0x184250, Func Offset: 0x60
	// Line 50, Address: 0x184254, Func Offset: 0x64
	// Line 52, Address: 0x18425c, Func Offset: 0x6c
	// Line 53, Address: 0x18426c, Func Offset: 0x7c
	// Line 58, Address: 0x184278, Func Offset: 0x88
	// Line 60, Address: 0x18428c, Func Offset: 0x9c
	// Line 61, Address: 0x18429c, Func Offset: 0xac
	// Line 62, Address: 0x1842ac, Func Offset: 0xbc
	// Line 65, Address: 0x1842b8, Func Offset: 0xc8
	// Func End, Address: 0x1842cc, Func Offset: 0xdc
}

// 
// Start address: 0x1842d0
void* shCh_ASC_Malloc(unsigned int n)
{
	void* p;
	// Line 70, Address: 0x1842d0, Func Offset: 0
	// Line 74, Address: 0x1842e4, Func Offset: 0x14
	// Line 75, Address: 0x1842e8, Func Offset: 0x18
	// Line 77, Address: 0x1842f0, Func Offset: 0x20
	// Line 79, Address: 0x184328, Func Offset: 0x58
	// Line 80, Address: 0x18432c, Func Offset: 0x5c
	// Line 82, Address: 0x184334, Func Offset: 0x64
	// Line 83, Address: 0x184338, Func Offset: 0x68
	// Line 85, Address: 0x184340, Func Offset: 0x70
	// Line 86, Address: 0x184344, Func Offset: 0x74
	// Line 90, Address: 0x18434c, Func Offset: 0x7c
	// Line 91, Address: 0x18435c, Func Offset: 0x8c
	// Line 95, Address: 0x184368, Func Offset: 0x98
	// Line 98, Address: 0x184380, Func Offset: 0xb0
	// Line 99, Address: 0x18438c, Func Offset: 0xbc
	// Line 100, Address: 0x18439c, Func Offset: 0xcc
	// Line 104, Address: 0x1843a8, Func Offset: 0xd8
	// Line 105, Address: 0x1843b0, Func Offset: 0xe0
	// Line 106, Address: 0x1843c0, Func Offset: 0xf0
	// Line 108, Address: 0x1843cc, Func Offset: 0xfc
	// Line 110, Address: 0x1843e0, Func Offset: 0x110
	// Line 111, Address: 0x1843e4, Func Offset: 0x114
	// Func End, Address: 0x1843fc, Func Offset: 0x12c
}

// 
// Start address: 0x184400
void shCh_ASC_Free(void* p)
{
	// Line 158, Address: 0x184400, Func Offset: 0
	// Line 159, Address: 0x184408, Func Offset: 0x8
	// Line 160, Address: 0x184410, Func Offset: 0x10
	// Func End, Address: 0x184420, Func Offset: 0x20
}

// 
// Start address: 0x184420
void kari_ChAlloc_Init()
{
	// Line 164, Address: 0x184420, Func Offset: 0
	// Line 166, Address: 0x184428, Func Offset: 0x8
	// Line 168, Address: 0x184440, Func Offset: 0x20
	// Func End, Address: 0x184450, Func Offset: 0x30
}

