
typedef void(*type)(void*);


int finish_sid;
int vbe_tid;
void(*ThreadVbe)(void*);

void ThreadVbe(void* arg);
int ThreadVbeStart(void* stack, int stackSize, int prio, int option, int wait_sid);

// 
// Start address: 0x1c7e20
void ThreadVbe(void* arg)
{
	int count;
	int wait_sid;
	// Line 22, Address: 0x1c7e20, Func Offset: 0
	// Line 25, Address: 0x1c7e34, Func Offset: 0x14
	// Line 27, Address: 0x1c7e38, Func Offset: 0x18
	// Line 28, Address: 0x1c7e44, Func Offset: 0x24
	// Line 30, Address: 0x1c7e54, Func Offset: 0x34
	// Line 33, Address: 0x1c7e6c, Func Offset: 0x4c
	// Line 35, Address: 0x1c7e7c, Func Offset: 0x5c
	// Line 37, Address: 0x1c7e8c, Func Offset: 0x6c
	// Line 41, Address: 0x1c7e9c, Func Offset: 0x7c
	// Line 43, Address: 0x1c7ea0, Func Offset: 0x80
	// Line 45, Address: 0x1c7ea4, Func Offset: 0x84
	// Line 56, Address: 0x1c7eb0, Func Offset: 0x90
	// Line 57, Address: 0x1c7ecc, Func Offset: 0xac
	// Line 63, Address: 0x1c7ee4, Func Offset: 0xc4
	// Line 68, Address: 0x1c7ef0, Func Offset: 0xd0
	// Func End, Address: 0x1c7ef8, Func Offset: 0xd8
}

// 
// Start address: 0x1c7f00
int ThreadVbeStart(void* stack, int stackSize, int prio, int option, int wait_sid)
{
	void* arg;
	// Line 86, Address: 0x1c7f00, Func Offset: 0
	// Line 88, Address: 0x1c7f24, Func Offset: 0x24
	// Line 89, Address: 0x1c7f28, Func Offset: 0x28
	// Line 90, Address: 0x1c7f5c, Func Offset: 0x5c
	// Line 91, Address: 0x1c7f70, Func Offset: 0x70
	// Line 92, Address: 0x1c7f84, Func Offset: 0x84
	// Line 93, Address: 0x1c7fac, Func Offset: 0xac
	// Line 94, Address: 0x1c7fd4, Func Offset: 0xd4
	// Line 95, Address: 0x1c7fdc, Func Offset: 0xdc
	// Line 96, Address: 0x1c7fec, Func Offset: 0xec
	// Line 98, Address: 0x1c7ff0, Func Offset: 0xf0
	// Line 99, Address: 0x1c801c, Func Offset: 0x11c
	// Func End, Address: 0x1c8034, Func Offset: 0x134
}

