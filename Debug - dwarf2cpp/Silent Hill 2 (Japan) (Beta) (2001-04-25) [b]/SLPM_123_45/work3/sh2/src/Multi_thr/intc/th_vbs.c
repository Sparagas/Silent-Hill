
typedef void(*type)(void*);


int finish_sid;
int vbs_tid;
void(*ThreadVbs)(void*);

void ThreadVbs(void* arg);
int ThreadVbsStart(void* stack, int stackSize, int prio, int option, int wait_sid);

// 
// Start address: 0x209ad0
void ThreadVbs(void* arg)
{
	int ret;
	int wait_sid;
	unsigned long vcount;
	// Line 19, Address: 0x209ad0, Func Offset: 0
	// Line 29, Address: 0x209ae8, Func Offset: 0x18
	// Line 31, Address: 0x209aec, Func Offset: 0x1c
	// Line 33, Address: 0x209af8, Func Offset: 0x28
	// Line 34, Address: 0x209b08, Func Offset: 0x38
	// Line 37, Address: 0x209b20, Func Offset: 0x50
	// Line 39, Address: 0x209b30, Func Offset: 0x60
	// Line 41, Address: 0x209b40, Func Offset: 0x70
	// Line 45, Address: 0x209b50, Func Offset: 0x80
	// Line 48, Address: 0x209b54, Func Offset: 0x84
	// Line 51, Address: 0x209b58, Func Offset: 0x88
	// Line 55, Address: 0x209b64, Func Offset: 0x94
	// Line 56, Address: 0x209b70, Func Offset: 0xa0
	// Line 63, Address: 0x209b7c, Func Offset: 0xac
	// Line 68, Address: 0x209b90, Func Offset: 0xc0
	// Func End, Address: 0x209b98, Func Offset: 0xc8
}

// 
// Start address: 0x209ba0
int ThreadVbsStart(void* stack, int stackSize, int prio, int option, int wait_sid)
{
	void* arg;
	// Line 86, Address: 0x209ba0, Func Offset: 0
	// Line 88, Address: 0x209bc4, Func Offset: 0x24
	// Line 89, Address: 0x209bc8, Func Offset: 0x28
	// Line 90, Address: 0x209bfc, Func Offset: 0x5c
	// Line 91, Address: 0x209c10, Func Offset: 0x70
	// Line 92, Address: 0x209c24, Func Offset: 0x84
	// Line 93, Address: 0x209c4c, Func Offset: 0xac
	// Line 94, Address: 0x209c74, Func Offset: 0xd4
	// Line 95, Address: 0x209c7c, Func Offset: 0xdc
	// Line 96, Address: 0x209c8c, Func Offset: 0xec
	// Line 98, Address: 0x209c90, Func Offset: 0xf0
	// Line 99, Address: 0x209cbc, Func Offset: 0x11c
	// Func End, Address: 0x209cd4, Func Offset: 0x134
}

