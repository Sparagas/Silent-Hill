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
// Start address: 0x1c90c0
void ThreadPad(void* arg)
{
	unsigned int pow1;
	unsigned int pow0;
	int wait_sid;
	// Line 30, Address: 0x1c90c0, Func Offset: 0
	// Line 32, Address: 0x1c90d8, Func Offset: 0x18
	// Line 34, Address: 0x1c90dc, Func Offset: 0x1c
	// Line 35, Address: 0x1c90e8, Func Offset: 0x28
	// Line 37, Address: 0x1c90f8, Func Offset: 0x38
	// Line 40, Address: 0x1c9110, Func Offset: 0x50
	// Line 43, Address: 0x1c9120, Func Offset: 0x60
	// Line 50, Address: 0x1c9128, Func Offset: 0x68
	// Line 69, Address: 0x1c9130, Func Offset: 0x70
	// Line 71, Address: 0x1c9138, Func Offset: 0x78
	// Line 78, Address: 0x1c9148, Func Offset: 0x88
	// Line 86, Address: 0x1c9158, Func Offset: 0x98
	// Line 93, Address: 0x1c9178, Func Offset: 0xb8
	// Line 95, Address: 0x1c9188, Func Offset: 0xc8
	// Line 106, Address: 0x1c9198, Func Offset: 0xd8
	// Line 108, Address: 0x1c91a4, Func Offset: 0xe4
	// Line 112, Address: 0x1c91ac, Func Offset: 0xec
	// Line 119, Address: 0x1c91b4, Func Offset: 0xf4
	// Line 123, Address: 0x1c91bc, Func Offset: 0xfc
	// Line 124, Address: 0x1c91d0, Func Offset: 0x110
	// Line 125, Address: 0x1c91e4, Func Offset: 0x124
	// Line 127, Address: 0x1c91ec, Func Offset: 0x12c
	// Line 130, Address: 0x1c9204, Func Offset: 0x144
	// Line 131, Address: 0x1c9214, Func Offset: 0x154
	// Line 196, Address: 0x1c9224, Func Offset: 0x164
	// Func End, Address: 0x1c922c, Func Offset: 0x16c
}

// 
// Start address: 0x1c9230
int ThreadPadStart(void* stack, int stackSize, int prio, int option, int wait_sid)
{
	void* arg;
	// Line 211, Address: 0x1c9230, Func Offset: 0
	// Line 213, Address: 0x1c9254, Func Offset: 0x24
	// Line 214, Address: 0x1c9258, Func Offset: 0x28
	// Line 215, Address: 0x1c928c, Func Offset: 0x5c
	// Line 216, Address: 0x1c92a0, Func Offset: 0x70
	// Line 217, Address: 0x1c92b4, Func Offset: 0x84
	// Line 218, Address: 0x1c92dc, Func Offset: 0xac
	// Line 219, Address: 0x1c9304, Func Offset: 0xd4
	// Line 220, Address: 0x1c930c, Func Offset: 0xdc
	// Line 221, Address: 0x1c931c, Func Offset: 0xec
	// Line 223, Address: 0x1c9320, Func Offset: 0xf0
	// Line 224, Address: 0x1c934c, Func Offset: 0x11c
	// Func End, Address: 0x1c9364, Func Offset: 0x134
}

