
typedef void(*type)(void*);


int finish_sid;
int vbe_tid;
void(*ThreadVbe)(void*);

void ThreadVbe(void* arg);
int ThreadVbeStart(void* stack, int stackSize, int prio, int option, int wait_sid);

// 
// Start address: 0x1be680
void ThreadVbe(void* arg)
{
	int count;
	int wait_sid;
	// Line 26, Address: 0x1be680, Func Offset: 0
	// Line 31, Address: 0x1be68c, Func Offset: 0xc
	// Line 34, Address: 0x1be698, Func Offset: 0x18
	// Line 41, Address: 0x1be6ac, Func Offset: 0x2c
	// Line 45, Address: 0x1be6bc, Func Offset: 0x3c
	// Line 47, Address: 0x1be6c0, Func Offset: 0x40
	// Line 49, Address: 0x1be6c4, Func Offset: 0x44
	// Line 53, Address: 0x1be6d0, Func Offset: 0x50
	// Line 59, Address: 0x1be6d8, Func Offset: 0x58
	// Line 60, Address: 0x1be6f4, Func Offset: 0x74
	// Line 72, Address: 0x1be704, Func Offset: 0x84
	// Func End, Address: 0x1be70c, Func Offset: 0x8c
}

// 
// Start address: 0x1be710
int ThreadVbeStart(void* stack, int stackSize, int prio, int option, int wait_sid)
{
	void* arg;
	// Line 90, Address: 0x1be710, Func Offset: 0
	// Line 92, Address: 0x1be73c, Func Offset: 0x2c
	// Line 93, Address: 0x1be740, Func Offset: 0x30
	// Line 94, Address: 0x1be770, Func Offset: 0x60
	// Line 95, Address: 0x1be784, Func Offset: 0x74
	// Line 96, Address: 0x1be794, Func Offset: 0x84
	// Line 97, Address: 0x1be7bc, Func Offset: 0xac
	// Line 102, Address: 0x1be7dc, Func Offset: 0xcc
	// Line 103, Address: 0x1be7fc, Func Offset: 0xec
	// Func End, Address: 0x1be820, Func Offset: 0x110
}

