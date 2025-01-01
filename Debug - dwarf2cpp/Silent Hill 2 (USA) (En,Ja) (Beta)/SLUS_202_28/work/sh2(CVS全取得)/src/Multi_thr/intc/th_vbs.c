
typedef void(*type)(void*);


unsigned long vcount;
unsigned long vcount_total;
int finish_sid;
int vbs_tid;
void(*ThreadVbs)(void*);

void shMtIncVStartCount();
void ThreadVbs(void* arg);
int ThreadVbsStart(void* stack, int stackSize, int prio, int option, int wait_sid);

// 
// Start address: 0x2095c0
void shMtIncVStartCount()
{
	// Line 32, Address: 0x2095c0, Func Offset: 0
	// Line 33, Address: 0x2095d4, Func Offset: 0x14
	// Line 34, Address: 0x2095e8, Func Offset: 0x28
	// Func End, Address: 0x2095f0, Func Offset: 0x30
}

// 
// Start address: 0x2095f0
void ThreadVbs(void* arg)
{
	int ret;
	int wait_sid;
	// Line 39, Address: 0x2095f0, Func Offset: 0
	// Line 45, Address: 0x2095f8, Func Offset: 0x8
	// Line 48, Address: 0x209604, Func Offset: 0x14
	// Line 55, Address: 0x209618, Func Offset: 0x28
	// Line 59, Address: 0x209628, Func Offset: 0x38
	// Line 63, Address: 0x209630, Func Offset: 0x40
	// Line 64, Address: 0x20963c, Func Offset: 0x4c
	// Line 68, Address: 0x209644, Func Offset: 0x54
	// Line 69, Address: 0x20964c, Func Offset: 0x5c
	// Line 78, Address: 0x209658, Func Offset: 0x68
	// Line 83, Address: 0x20966c, Func Offset: 0x7c
	// Func End, Address: 0x209674, Func Offset: 0x84
}

// 
// Start address: 0x209680
int ThreadVbsStart(void* stack, int stackSize, int prio, int option, int wait_sid)
{
	void* arg;
	// Line 101, Address: 0x209680, Func Offset: 0
	// Line 103, Address: 0x2096ac, Func Offset: 0x2c
	// Line 104, Address: 0x2096b0, Func Offset: 0x30
	// Line 105, Address: 0x2096e0, Func Offset: 0x60
	// Line 106, Address: 0x2096f4, Func Offset: 0x74
	// Line 107, Address: 0x209704, Func Offset: 0x84
	// Line 108, Address: 0x20972c, Func Offset: 0xac
	// Line 113, Address: 0x20974c, Func Offset: 0xcc
	// Line 114, Address: 0x20976c, Func Offset: 0xec
	// Func End, Address: 0x209790, Func Offset: 0x110
}

