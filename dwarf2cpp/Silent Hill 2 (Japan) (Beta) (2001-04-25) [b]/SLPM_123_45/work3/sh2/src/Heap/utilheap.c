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
// Start address: 0x18a9f0
utilHeapCtrl* utilHeapInit(void* buf, unsigned int bytesize)
{
	unsigned int free;
	unsigned int size;
	<unknown fundamental type (0xa510)>* buftail;
	<unknown fundamental type (0xa510)>* bufhead;
	utilHeapMBlock* mblock;
	utilHeapCtrl* heapctrl;
	// Line 32, Address: 0x18a9f0, Func Offset: 0
	// Line 41, Address: 0x18aa14, Func Offset: 0x24
	// Line 44, Address: 0x18aa34, Func Offset: 0x44
	// Line 45, Address: 0x18aa44, Func Offset: 0x54
	// Line 47, Address: 0x18aa58, Func Offset: 0x68
	// Line 49, Address: 0x18aa5c, Func Offset: 0x6c
	// Line 52, Address: 0x18aa74, Func Offset: 0x84
	// Line 53, Address: 0x18aa78, Func Offset: 0x88
	// Line 56, Address: 0x18aa7c, Func Offset: 0x8c
	// Line 59, Address: 0x18aa84, Func Offset: 0x94
	// Line 61, Address: 0x18aa88, Func Offset: 0x98
	// Line 62, Address: 0x18aa8c, Func Offset: 0x9c
	// Line 65, Address: 0x18aa90, Func Offset: 0xa0
	// Line 66, Address: 0x18aa94, Func Offset: 0xa4
	// Line 68, Address: 0x18aa98, Func Offset: 0xa8
	// Line 69, Address: 0x18aa9c, Func Offset: 0xac
	// Line 71, Address: 0x18aaa0, Func Offset: 0xb0
	// Line 72, Address: 0x18aaa4, Func Offset: 0xb4
	// Func End, Address: 0x18aac8, Func Offset: 0xd8
}

// 
// Start address: 0x18aad0
void* utilHeapMalloc(utilHeapCtrl* heapctrl, unsigned int n)
{
	utilHeapMBlock* next;
	utilHeapMBlock* postblock;
	unsigned int postsize;
	unsigned int size;
	utilHeapMBlock* mblock;
	// Line 97, Address: 0x18aad0, Func Offset: 0
	// Line 101, Address: 0x18aaf0, Func Offset: 0x20
	// Line 102, Address: 0x18ab04, Func Offset: 0x34
	// Line 103, Address: 0x18ab1c, Func Offset: 0x4c
	// Line 106, Address: 0x18ab40, Func Offset: 0x70
	// Line 107, Address: 0x18ab48, Func Offset: 0x78
	// Line 109, Address: 0x18ab50, Func Offset: 0x80
	// Line 111, Address: 0x18ab5c, Func Offset: 0x8c
	// Line 112, Address: 0x18ab60, Func Offset: 0x90
	// Line 114, Address: 0x18ab70, Func Offset: 0xa0
	// Line 115, Address: 0x18ab84, Func Offset: 0xb4
	// Line 122, Address: 0x18ab90, Func Offset: 0xc0
	// Line 123, Address: 0x18ab9c, Func Offset: 0xcc
	// Line 124, Address: 0x18aba8, Func Offset: 0xd8
	// Line 125, Address: 0x18abac, Func Offset: 0xdc
	// Line 127, Address: 0x18abb0, Func Offset: 0xe0
	// Line 129, Address: 0x18abb8, Func Offset: 0xe8
	// Line 132, Address: 0x18abc8, Func Offset: 0xf8
	// Line 133, Address: 0x18abcc, Func Offset: 0xfc
	// Line 134, Address: 0x18abd0, Func Offset: 0x100
	// Line 135, Address: 0x18abd4, Func Offset: 0x104
	// Line 136, Address: 0x18abd8, Func Offset: 0x108
	// Line 137, Address: 0x18abe0, Func Offset: 0x110
	// Line 138, Address: 0x18abe4, Func Offset: 0x114
	// Line 139, Address: 0x18abec, Func Offset: 0x11c
	// Line 140, Address: 0x18abf4, Func Offset: 0x124
	// Line 142, Address: 0x18abf8, Func Offset: 0x128
	// Line 143, Address: 0x18ac00, Func Offset: 0x130
	// Line 147, Address: 0x18ac0c, Func Offset: 0x13c
	// Line 148, Address: 0x18ac14, Func Offset: 0x144
	// Line 153, Address: 0x18ac20, Func Offset: 0x150
	// Line 154, Address: 0x18ac24, Func Offset: 0x154
	// Func End, Address: 0x18ac44, Func Offset: 0x174
}

// 
// Start address: 0x18ac50
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
	// Line 183, Address: 0x18ac50, Func Offset: 0
	// Line 187, Address: 0x18ac80, Func Offset: 0x30
	// Line 189, Address: 0x18ac8c, Func Offset: 0x3c
	// Line 191, Address: 0x18ac9c, Func Offset: 0x4c
	// Line 193, Address: 0x18acac, Func Offset: 0x5c
	// Line 196, Address: 0x18acb4, Func Offset: 0x64
	// Line 197, Address: 0x18acbc, Func Offset: 0x6c
	// Line 199, Address: 0x18acc0, Func Offset: 0x70
	// Line 201, Address: 0x18acd0, Func Offset: 0x80
	// Line 203, Address: 0x18ace0, Func Offset: 0x90
	// Line 206, Address: 0x18ace8, Func Offset: 0x98
	// Line 207, Address: 0x18acec, Func Offset: 0x9c
	// Line 211, Address: 0x18acfc, Func Offset: 0xac
	// Line 212, Address: 0x18ad00, Func Offset: 0xb0
	// Line 214, Address: 0x18ad08, Func Offset: 0xb8
	// Line 223, Address: 0x18ad14, Func Offset: 0xc4
	// Line 224, Address: 0x18ad18, Func Offset: 0xc8
	// Line 225, Address: 0x18ad24, Func Offset: 0xd4
	// Line 227, Address: 0x18ad28, Func Offset: 0xd8
	// Line 230, Address: 0x18ad34, Func Offset: 0xe4
	// Line 231, Address: 0x18ad38, Func Offset: 0xe8
	// Line 232, Address: 0x18ad3c, Func Offset: 0xec
	// Line 233, Address: 0x18ad44, Func Offset: 0xf4
	// Line 234, Address: 0x18ad48, Func Offset: 0xf8
	// Line 236, Address: 0x18ad50, Func Offset: 0x100
	// Line 241, Address: 0x18ad54, Func Offset: 0x104
	// Line 242, Address: 0x18ad58, Func Offset: 0x108
	// Line 243, Address: 0x18ad5c, Func Offset: 0x10c
	// Line 253, Address: 0x18ad60, Func Offset: 0x110
	// Line 254, Address: 0x18ad64, Func Offset: 0x114
	// Line 256, Address: 0x18ad6c, Func Offset: 0x11c
	// Line 264, Address: 0x18ad78, Func Offset: 0x128
	// Line 265, Address: 0x18ad7c, Func Offset: 0x12c
	// Line 268, Address: 0x18ad80, Func Offset: 0x130
	// Line 269, Address: 0x18ad84, Func Offset: 0x134
	// Line 270, Address: 0x18ad90, Func Offset: 0x140
	// Line 272, Address: 0x18ad94, Func Offset: 0x144
	// Line 275, Address: 0x18ada0, Func Offset: 0x150
	// Line 276, Address: 0x18ada4, Func Offset: 0x154
	// Line 277, Address: 0x18ada8, Func Offset: 0x158
	// Line 278, Address: 0x18adb0, Func Offset: 0x160
	// Line 279, Address: 0x18adb4, Func Offset: 0x164
	// Line 281, Address: 0x18adbc, Func Offset: 0x16c
	// Line 286, Address: 0x18adc0, Func Offset: 0x170
	// Line 287, Address: 0x18adc4, Func Offset: 0x174
	// Line 288, Address: 0x18adc8, Func Offset: 0x178
	// Line 296, Address: 0x18adcc, Func Offset: 0x17c
	// Func End, Address: 0x18ae00, Func Offset: 0x1b0
}

