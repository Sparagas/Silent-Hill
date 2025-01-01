typedef struct _anon0;

typedef void(*type_2)(void*);

typedef unsigned short type_0[4];
typedef unsigned short type_1[4][2];

struct _anon0
{
	unsigned int key;
	int pow0;
	int pow1;
	int apr;
	int act;
	int lck;
	int alg;
	int step;
};

int finish_sid;
int pad_tid;
void(*ThreadPad)(void*);
_anon0 curPad;
unsigned short libShPadStep[4][2];
_anon0 prvPad;

void ThreadPad(void* arg);
int ThreadPadStart(void* stack, int stackSize, int prio, int option, int wait_sid);

// 
// Start address: 0x1bf540
void ThreadPad(void* arg)
{
	unsigned int pow1;
	unsigned int pow0;
	int wait_sid;
	// Line 36, Address: 0x1bf540, Func Offset: 0
	// Line 38, Address: 0x1bf550, Func Offset: 0x10
	// Line 40, Address: 0x1bf554, Func Offset: 0x14
	// Line 41, Address: 0x1bf560, Func Offset: 0x20
	// Line 43, Address: 0x1bf574, Func Offset: 0x34
	// Line 46, Address: 0x1bf58c, Func Offset: 0x4c
	// Line 49, Address: 0x1bf5a0, Func Offset: 0x60
	// Line 56, Address: 0x1bf5a8, Func Offset: 0x68
	// Line 75, Address: 0x1bf5b0, Func Offset: 0x70
	// Line 76, Address: 0x1bf5b8, Func Offset: 0x78
	// Line 77, Address: 0x1bf5cc, Func Offset: 0x8c
	// Line 80, Address: 0x1bf5d8, Func Offset: 0x98
	// Line 87, Address: 0x1bf5e8, Func Offset: 0xa8
	// Line 95, Address: 0x1bf5f8, Func Offset: 0xb8
	// Line 102, Address: 0x1bf618, Func Offset: 0xd8
	// Line 104, Address: 0x1bf62c, Func Offset: 0xec
	// Line 115, Address: 0x1bf63c, Func Offset: 0xfc
	// Line 117, Address: 0x1bf648, Func Offset: 0x108
	// Line 120, Address: 0x1bf650, Func Offset: 0x110
	// Line 124, Address: 0x1bf664, Func Offset: 0x124
	// Line 127, Address: 0x1bf66c, Func Offset: 0x12c
	// Line 132, Address: 0x1bf674, Func Offset: 0x134
	// Line 133, Address: 0x1bf688, Func Offset: 0x148
	// Line 136, Address: 0x1bf69c, Func Offset: 0x15c
	// Line 137, Address: 0x1bf6ac, Func Offset: 0x16c
	// Line 139, Address: 0x1bf6bc, Func Offset: 0x17c
	// Line 141, Address: 0x1bf6c4, Func Offset: 0x184
	// Line 208, Address: 0x1bf6dc, Func Offset: 0x19c
	// Func End, Address: 0x1bf6e4, Func Offset: 0x1a4
}

// 
// Start address: 0x1bf6f0
int ThreadPadStart(void* stack, int stackSize, int prio, int option, int wait_sid)
{
	void* arg;
	// Line 223, Address: 0x1bf6f0, Func Offset: 0
	// Line 225, Address: 0x1bf71c, Func Offset: 0x2c
	// Line 226, Address: 0x1bf720, Func Offset: 0x30
	// Line 227, Address: 0x1bf750, Func Offset: 0x60
	// Line 228, Address: 0x1bf764, Func Offset: 0x74
	// Line 229, Address: 0x1bf774, Func Offset: 0x84
	// Line 230, Address: 0x1bf79c, Func Offset: 0xac
	// Line 236, Address: 0x1bf7bc, Func Offset: 0xcc
	// Line 237, Address: 0x1bf7dc, Func Offset: 0xec
	// Func End, Address: 0x1bf800, Func Offset: 0x110
}

