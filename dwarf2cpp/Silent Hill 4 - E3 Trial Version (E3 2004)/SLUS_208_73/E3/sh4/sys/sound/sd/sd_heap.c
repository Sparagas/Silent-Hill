typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;

typedef void(*type_1)(void*);

typedef _anon4 type_0[32];
typedef int type_2[3];

struct _anon0
{
	int id;
	int tail;
	unsigned int size;
	void* addr;
};

struct _anon1
{
	unsigned int command;
	void* data;
	unsigned int data_size;
	int data_struct;
	unsigned int mode;
	int res[3];
};

struct _anon2
{
	void* top;
	void* end;
	int malloc;
	short align;
	short block_num;
};

struct _anon3
{
	_anon1 send;
	unsigned int rec_size;
	void* end_func;
	void* end_param;
	int res;
};

struct _anon4
{
	void* addr;
	unsigned int size;
	int enable;
};

_anon2 vsdHeapSystem;
void(*sdHeapEndMalloc)(void*);
_anon0 vsdHeap;
_anon4 vsdHeapHead[32];

int sdHeapInit(unsigned int size);
void* sdHeapMalloc(unsigned int size);
int sdHeapFree(void* addr);
unsigned int sdHeapGetMaxMemorySize();
void sdHeapInitFig();
void sdHeapInitHead(int id);
void* sdHeapAlignAddr(void* addr);
void sdHeapEndMalloc(void* data);

// 
// Start address: 0x284110
int sdHeapInit(unsigned int size)
{
	_anon3 data;
	int tmp;
	// Line 80, Address: 0x284110, Func Offset: 0
	// Line 87, Address: 0x28411c, Func Offset: 0xc
	// Line 96, Address: 0x284124, Func Offset: 0x14
	// Line 98, Address: 0x284128, Func Offset: 0x18
	// Line 96, Address: 0x28412c, Func Offset: 0x1c
	// Line 99, Address: 0x284130, Func Offset: 0x20
	// Line 97, Address: 0x284134, Func Offset: 0x24
	// Line 91, Address: 0x284138, Func Offset: 0x28
	// Line 97, Address: 0x28413c, Func Offset: 0x2c
	// Line 91, Address: 0x284140, Func Offset: 0x30
	// Line 97, Address: 0x284144, Func Offset: 0x34
	// Line 90, Address: 0x284148, Func Offset: 0x38
	// Line 102, Address: 0x28414c, Func Offset: 0x3c
	// Line 90, Address: 0x284150, Func Offset: 0x40
	// Line 102, Address: 0x284154, Func Offset: 0x44
	// Line 92, Address: 0x284158, Func Offset: 0x48
	// Line 102, Address: 0x28415c, Func Offset: 0x4c
	// Line 105, Address: 0x284160, Func Offset: 0x50
	// Line 98, Address: 0x284164, Func Offset: 0x54
	// Line 101, Address: 0x284168, Func Offset: 0x58
	// Line 99, Address: 0x28416c, Func Offset: 0x5c
	// Line 100, Address: 0x284170, Func Offset: 0x60
	// Line 92, Address: 0x284174, Func Offset: 0x64
	// Line 105, Address: 0x284178, Func Offset: 0x68
	// Line 107, Address: 0x284180, Func Offset: 0x70
	// Line 109, Address: 0x284188, Func Offset: 0x78
	// Line 111, Address: 0x284190, Func Offset: 0x80
	// Line 117, Address: 0x284198, Func Offset: 0x88
	// Line 121, Address: 0x2841a8, Func Offset: 0x98
	// Line 122, Address: 0x2841b0, Func Offset: 0xa0
	// Line 123, Address: 0x2841b8, Func Offset: 0xa8
	// Line 126, Address: 0x2841c0, Func Offset: 0xb0
	// Line 127, Address: 0x2841c8, Func Offset: 0xb8
	// Func End, Address: 0x2841d8, Func Offset: 0xc8
}

// 
// Start address: 0x2841e0
void* sdHeapMalloc(unsigned int size)
{
	int i;
	int id;
	void* addr;
	// Line 172, Address: 0x2841e0, Func Offset: 0
	// Line 180, Address: 0x2841ec, Func Offset: 0xc
	// Line 182, Address: 0x284200, Func Offset: 0x20
	// Line 184, Address: 0x284208, Func Offset: 0x28
	// Line 188, Address: 0x284210, Func Offset: 0x30
	// Line 189, Address: 0x28421c, Func Offset: 0x3c
	// Line 191, Address: 0x284220, Func Offset: 0x40
	// Line 193, Address: 0x284250, Func Offset: 0x70
	// Line 197, Address: 0x28425c, Func Offset: 0x7c
	// Line 200, Address: 0x284270, Func Offset: 0x90
	// Line 202, Address: 0x284284, Func Offset: 0xa4
	// Line 204, Address: 0x284290, Func Offset: 0xb0
	// Line 205, Address: 0x2842a0, Func Offset: 0xc0
	// Line 208, Address: 0x2842a8, Func Offset: 0xc8
	// Line 209, Address: 0x2842c8, Func Offset: 0xe8
	// Line 212, Address: 0x2842cc, Func Offset: 0xec
	// Line 209, Address: 0x2842d4, Func Offset: 0xf4
	// Line 210, Address: 0x2842d8, Func Offset: 0xf8
	// Line 211, Address: 0x2842e0, Func Offset: 0x100
	// Line 212, Address: 0x2842e8, Func Offset: 0x108
	// Line 214, Address: 0x2842f0, Func Offset: 0x110
	// Line 212, Address: 0x2842fc, Func Offset: 0x11c
	// Line 220, Address: 0x284300, Func Offset: 0x120
	// Line 212, Address: 0x284304, Func Offset: 0x124
	// Line 214, Address: 0x28430c, Func Offset: 0x12c
	// Line 215, Address: 0x284330, Func Offset: 0x150
	// Line 216, Address: 0x284334, Func Offset: 0x154
	// Line 218, Address: 0x284338, Func Offset: 0x158
	// Line 216, Address: 0x28433c, Func Offset: 0x15c
	// Line 215, Address: 0x284344, Func Offset: 0x164
	// Line 218, Address: 0x284348, Func Offset: 0x168
	// Line 215, Address: 0x28434c, Func Offset: 0x16c
	// Line 216, Address: 0x284354, Func Offset: 0x174
	// Line 217, Address: 0x284358, Func Offset: 0x178
	// Line 218, Address: 0x28435c, Func Offset: 0x17c
	// Line 220, Address: 0x284360, Func Offset: 0x180
	// Line 225, Address: 0x28436c, Func Offset: 0x18c
	// Line 228, Address: 0x284378, Func Offset: 0x198
	// Line 230, Address: 0x284384, Func Offset: 0x1a4
	// Line 231, Address: 0x28438c, Func Offset: 0x1ac
	// Line 235, Address: 0x284390, Func Offset: 0x1b0
	// Func End, Address: 0x2843a0, Func Offset: 0x1c0
}

// 
// Start address: 0x2843a0
int sdHeapFree(void* addr)
{
	int i;
	int id;
	// Line 244, Address: 0x2843a0, Func Offset: 0
	// Line 251, Address: 0x2843a4, Func Offset: 0x4
	// Line 244, Address: 0x2843a8, Func Offset: 0x8
	// Line 251, Address: 0x2843ac, Func Offset: 0xc
	// Line 244, Address: 0x2843b0, Func Offset: 0x10
	// Line 251, Address: 0x2843b4, Func Offset: 0x14
	// Line 254, Address: 0x2843b8, Func Offset: 0x18
	// Line 252, Address: 0x2843bc, Func Offset: 0x1c
	// Line 254, Address: 0x2843c0, Func Offset: 0x20
	// Line 256, Address: 0x2843c8, Func Offset: 0x28
	// Line 258, Address: 0x2843d4, Func Offset: 0x34
	// Line 259, Address: 0x2843dc, Func Offset: 0x3c
	// Line 261, Address: 0x2843e0, Func Offset: 0x40
	// Line 267, Address: 0x2843f0, Func Offset: 0x50
	// Line 270, Address: 0x2843f8, Func Offset: 0x58
	// Line 272, Address: 0x284420, Func Offset: 0x80
	// Line 274, Address: 0x28443c, Func Offset: 0x9c
	// Line 272, Address: 0x284440, Func Offset: 0xa0
	// Line 274, Address: 0x28444c, Func Offset: 0xac
	// Line 275, Address: 0x284470, Func Offset: 0xd0
	// Line 278, Address: 0x284474, Func Offset: 0xd4
	// Line 275, Address: 0x28447c, Func Offset: 0xdc
	// Line 276, Address: 0x284480, Func Offset: 0xe0
	// Line 277, Address: 0x284488, Func Offset: 0xe8
	// Line 278, Address: 0x284490, Func Offset: 0xf0
	// Line 279, Address: 0x284498, Func Offset: 0xf8
	// Line 281, Address: 0x2844a0, Func Offset: 0x100
	// Line 285, Address: 0x2844a4, Func Offset: 0x104
	// Line 281, Address: 0x2844a8, Func Offset: 0x108
	// Line 285, Address: 0x2844b8, Func Offset: 0x118
	// Line 289, Address: 0x2844c0, Func Offset: 0x120
	// Line 291, Address: 0x2844f0, Func Offset: 0x150
	// Line 294, Address: 0x284508, Func Offset: 0x168
	// Line 292, Address: 0x284510, Func Offset: 0x170
	// Line 291, Address: 0x28451c, Func Offset: 0x17c
	// Line 294, Address: 0x284528, Func Offset: 0x188
	// Line 295, Address: 0x284548, Func Offset: 0x1a8
	// Line 298, Address: 0x28454c, Func Offset: 0x1ac
	// Line 295, Address: 0x284554, Func Offset: 0x1b4
	// Line 296, Address: 0x284558, Func Offset: 0x1b8
	// Line 297, Address: 0x284560, Func Offset: 0x1c0
	// Line 298, Address: 0x284568, Func Offset: 0x1c8
	// Line 299, Address: 0x284570, Func Offset: 0x1d0
	// Line 301, Address: 0x284578, Func Offset: 0x1d8
	// Line 305, Address: 0x28458c, Func Offset: 0x1ec
	// Line 308, Address: 0x284590, Func Offset: 0x1f0
	// Line 311, Address: 0x2845a8, Func Offset: 0x208
	// Line 308, Address: 0x2845ac, Func Offset: 0x20c
	// Line 312, Address: 0x2845b0, Func Offset: 0x210
	// Func End, Address: 0x2845c0, Func Offset: 0x220
}

// 
// Start address: 0x2845c0
unsigned int sdHeapGetMaxMemorySize()
{
	int i;
	unsigned int size;
	// Line 328, Address: 0x2845c0, Func Offset: 0
	// Line 327, Address: 0x2845c4, Func Offset: 0x4
	// Line 328, Address: 0x2845c8, Func Offset: 0x8
	// Line 331, Address: 0x2845d4, Func Offset: 0x14
	// Line 332, Address: 0x2845ec, Func Offset: 0x2c
	// Line 335, Address: 0x2845f0, Func Offset: 0x30
	// Line 338, Address: 0x2845f4, Func Offset: 0x34
	// Line 345, Address: 0x284600, Func Offset: 0x40
	// Func End, Address: 0x284608, Func Offset: 0x48
}

// 
// Start address: 0x284610
void sdHeapInitFig()
{
	int i;
	// Line 354, Address: 0x284610, Func Offset: 0
	// Line 359, Address: 0x284614, Func Offset: 0x4
	// Line 354, Address: 0x284618, Func Offset: 0x8
	// Line 359, Address: 0x284620, Func Offset: 0x10
	// Line 369, Address: 0x284624, Func Offset: 0x14
	// Line 360, Address: 0x284628, Func Offset: 0x18
	// Line 361, Address: 0x284630, Func Offset: 0x20
	// Line 363, Address: 0x284638, Func Offset: 0x28
	// Line 364, Address: 0x284640, Func Offset: 0x30
	// Line 365, Address: 0x284648, Func Offset: 0x38
	// Line 366, Address: 0x284650, Func Offset: 0x40
	// Line 367, Address: 0x284658, Func Offset: 0x48
	// Line 370, Address: 0x284660, Func Offset: 0x50
	// Line 371, Address: 0x284668, Func Offset: 0x58
	// Line 372, Address: 0x28467c, Func Offset: 0x6c
	// Func End, Address: 0x28468c, Func Offset: 0x7c
}

// 
// Start address: 0x284690
void sdHeapInitHead(int id)
{
	// Line 381, Address: 0x284694, Func Offset: 0x4
	// Line 383, Address: 0x284698, Func Offset: 0x8
	// Line 384, Address: 0x2846a4, Func Offset: 0x14
	// Line 383, Address: 0x2846a8, Func Offset: 0x18
	// Line 384, Address: 0x2846ac, Func Offset: 0x1c
	// Line 383, Address: 0x2846b4, Func Offset: 0x24
	// Line 385, Address: 0x2846b8, Func Offset: 0x28
	// Line 384, Address: 0x2846bc, Func Offset: 0x2c
	// Line 385, Address: 0x2846c0, Func Offset: 0x30
	// Line 386, Address: 0x2846c8, Func Offset: 0x38
	// Func End, Address: 0x2846d0, Func Offset: 0x40
}

// 
// Start address: 0x2846d0
void* sdHeapAlignAddr(void* addr)
{
	// Line 396, Address: 0x2846d0, Func Offset: 0
	// Line 405, Address: 0x2846d8, Func Offset: 0x8
	// Line 406, Address: 0x2846f0, Func Offset: 0x20
	// Func End, Address: 0x2846f8, Func Offset: 0x28
}

// 
// Start address: 0x284700
void sdHeapEndMalloc(void* data)
{
	// Line 447, Address: 0x284704, Func Offset: 0x4
	// Line 450, Address: 0x284708, Func Offset: 0x8
	// Line 447, Address: 0x28470c, Func Offset: 0xc
	// Line 450, Address: 0x284710, Func Offset: 0x10
	// Line 453, Address: 0x28471c, Func Offset: 0x1c
	// Line 452, Address: 0x284720, Func Offset: 0x20
	// Line 453, Address: 0x284724, Func Offset: 0x24
	// Line 452, Address: 0x284728, Func Offset: 0x28
	// Line 453, Address: 0x28472c, Func Offset: 0x2c
	// Line 454, Address: 0x28473c, Func Offset: 0x3c
	// Line 455, Address: 0x284758, Func Offset: 0x58
	// Line 454, Address: 0x28475c, Func Offset: 0x5c
	// Line 455, Address: 0x284760, Func Offset: 0x60
	// Line 462, Address: 0x284768, Func Offset: 0x68
	// Line 468, Address: 0x284770, Func Offset: 0x70
	// Line 469, Address: 0x284778, Func Offset: 0x78
	// Line 468, Address: 0x284780, Func Offset: 0x80
	// Line 469, Address: 0x284788, Func Offset: 0x88
	// Line 472, Address: 0x284790, Func Offset: 0x90
	// Line 473, Address: 0x284798, Func Offset: 0x98
	// Func End, Address: 0x2847a4, Func Offset: 0xa4
}

