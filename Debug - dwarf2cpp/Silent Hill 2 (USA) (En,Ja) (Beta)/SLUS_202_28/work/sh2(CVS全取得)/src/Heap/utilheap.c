typedef struct utilHeapMBlock;
typedef struct utilHeapCtrl;



struct utilHeapMBlock
{
	unsigned int size;
	void* heapctrl;
	void* next;
	void* prev;
};

struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};


utilHeapCtrl* utilHeapInit(void* buf, unsigned int bytesize);
void* utilHeapMalloc(utilHeapCtrl* heapctrl, unsigned int n);
void utilHeapFree(void* obj);

// 
// Start address: 0x184450
utilHeapCtrl* utilHeapInit(void* buf, unsigned int bytesize)
{
	unsigned int free;
	unsigned int size;
	<unknown fundamental type (0xa510)>* buftail;
	<unknown fundamental type (0xa510)>* bufhead;
	utilHeapMBlock* mblock;
	utilHeapCtrl* heapctrl;
	// Line 41, Address: 0x184450, Func Offset: 0
	// Line 44, Address: 0x18446c, Func Offset: 0x1c
	// Line 45, Address: 0x184478, Func Offset: 0x28
	// Line 47, Address: 0x184480, Func Offset: 0x30
	// Line 49, Address: 0x184484, Func Offset: 0x34
	// Line 53, Address: 0x18449c, Func Offset: 0x4c
	// Line 56, Address: 0x1844a0, Func Offset: 0x50
	// Line 59, Address: 0x1844a8, Func Offset: 0x58
	// Line 61, Address: 0x1844ac, Func Offset: 0x5c
	// Line 62, Address: 0x1844b0, Func Offset: 0x60
	// Line 65, Address: 0x1844b4, Func Offset: 0x64
	// Line 66, Address: 0x1844b8, Func Offset: 0x68
	// Line 68, Address: 0x1844bc, Func Offset: 0x6c
	// Line 69, Address: 0x1844c0, Func Offset: 0x70
	// Line 72, Address: 0x1844c4, Func Offset: 0x74
	// Func End, Address: 0x1844cc, Func Offset: 0x7c
}

// 
// Start address: 0x1844d0
void* utilHeapMalloc(utilHeapCtrl* heapctrl, unsigned int n)
{
	utilHeapMBlock* next;
	utilHeapMBlock* postblock;
	unsigned int postsize;
	unsigned int size;
	utilHeapMBlock* mblock;
	// Line 101, Address: 0x1844d0, Func Offset: 0
	// Line 102, Address: 0x1844dc, Func Offset: 0xc
	// Line 103, Address: 0x1844f0, Func Offset: 0x20
	// Line 106, Address: 0x18450c, Func Offset: 0x3c
	// Line 107, Address: 0x184510, Func Offset: 0x40
	// Line 109, Address: 0x184518, Func Offset: 0x48
	// Line 111, Address: 0x184524, Func Offset: 0x54
	// Line 112, Address: 0x184528, Func Offset: 0x58
	// Line 114, Address: 0x184534, Func Offset: 0x64
	// Line 115, Address: 0x184540, Func Offset: 0x70
	// Line 122, Address: 0x184548, Func Offset: 0x78
	// Line 123, Address: 0x184550, Func Offset: 0x80
	// Line 124, Address: 0x184558, Func Offset: 0x88
	// Line 125, Address: 0x18455c, Func Offset: 0x8c
	// Line 127, Address: 0x184560, Func Offset: 0x90
	// Line 129, Address: 0x184564, Func Offset: 0x94
	// Line 132, Address: 0x184570, Func Offset: 0xa0
	// Line 133, Address: 0x184574, Func Offset: 0xa4
	// Line 134, Address: 0x184578, Func Offset: 0xa8
	// Line 135, Address: 0x18457c, Func Offset: 0xac
	// Line 136, Address: 0x184580, Func Offset: 0xb0
	// Line 137, Address: 0x184588, Func Offset: 0xb8
	// Line 138, Address: 0x18458c, Func Offset: 0xbc
	// Line 139, Address: 0x184594, Func Offset: 0xc4
	// Line 142, Address: 0x184598, Func Offset: 0xc8
	// Line 143, Address: 0x18459c, Func Offset: 0xcc
	// Line 147, Address: 0x1845a8, Func Offset: 0xd8
	// Line 148, Address: 0x1845b0, Func Offset: 0xe0
	// Line 153, Address: 0x1845b8, Func Offset: 0xe8
	// Line 154, Address: 0x1845bc, Func Offset: 0xec
	// Func End, Address: 0x1845c4, Func Offset: 0xf4
}

// 
// Start address: 0x1845d0
void utilHeapFree(void* obj)
{
	utilHeapMBlock* next;
	unsigned int combinesize;
	utilHeapMBlock* preblock;
	utilHeapMBlock* postblock;
	utilHeapMBlock* next;
	unsigned int combinesize;
	utilHeapMBlock* postblock;
	utilHeapCtrl* heapctrl;
	utilHeapMBlock* mblock;
	// Line 183, Address: 0x1845d0, Func Offset: 0
	// Line 187, Address: 0x1845d8, Func Offset: 0x8
	// Line 189, Address: 0x1845e0, Func Offset: 0x10
	// Line 191, Address: 0x1845ec, Func Offset: 0x1c
	// Line 193, Address: 0x1845fc, Func Offset: 0x2c
	// Line 196, Address: 0x184604, Func Offset: 0x34
	// Line 197, Address: 0x184608, Func Offset: 0x38
	// Line 199, Address: 0x18460c, Func Offset: 0x3c
	// Line 201, Address: 0x18461c, Func Offset: 0x4c
	// Line 203, Address: 0x18462c, Func Offset: 0x5c
	// Line 206, Address: 0x184634, Func Offset: 0x64
	// Line 207, Address: 0x184638, Func Offset: 0x68
	// Line 211, Address: 0x184648, Func Offset: 0x78
	// Line 212, Address: 0x18464c, Func Offset: 0x7c
	// Line 214, Address: 0x184654, Func Offset: 0x84
	// Line 223, Address: 0x184660, Func Offset: 0x90
	// Line 224, Address: 0x184664, Func Offset: 0x94
	// Line 225, Address: 0x184670, Func Offset: 0xa0
	// Line 227, Address: 0x184674, Func Offset: 0xa4
	// Line 230, Address: 0x184680, Func Offset: 0xb0
	// Line 231, Address: 0x184684, Func Offset: 0xb4
	// Line 232, Address: 0x184688, Func Offset: 0xb8
	// Line 233, Address: 0x184690, Func Offset: 0xc0
	// Line 234, Address: 0x184694, Func Offset: 0xc4
	// Line 236, Address: 0x18469c, Func Offset: 0xcc
	// Line 253, Address: 0x1846a0, Func Offset: 0xd0
	// Line 254, Address: 0x1846a4, Func Offset: 0xd4
	// Line 256, Address: 0x1846ac, Func Offset: 0xdc
	// Line 268, Address: 0x1846b8, Func Offset: 0xe8
	// Line 269, Address: 0x1846bc, Func Offset: 0xec
	// Line 270, Address: 0x1846c8, Func Offset: 0xf8
	// Line 272, Address: 0x1846cc, Func Offset: 0xfc
	// Line 275, Address: 0x1846d8, Func Offset: 0x108
	// Line 276, Address: 0x1846dc, Func Offset: 0x10c
	// Line 277, Address: 0x1846e0, Func Offset: 0x110
	// Line 278, Address: 0x1846e8, Func Offset: 0x118
	// Line 279, Address: 0x1846ec, Func Offset: 0x11c
	// Line 281, Address: 0x1846f4, Func Offset: 0x124
	// Line 296, Address: 0x1846f8, Func Offset: 0x128
	// Func End, Address: 0x184708, Func Offset: 0x138
}

