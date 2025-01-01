
typedef int(*type)(int, void*, void*);


int shSyncVStart_sid;
int shSyncVStart_hid;
int shSyncVEnd_sid;
int shSyncVEnd_hid;
int(*shSyncVHandler2)(int, void*, void*);

int shSyncVHandler2(void* arg);
int shSyncVInitSub(int* sid_p, int* hid_p, int intc_cause);
int shSyncVStartInit();
int shSyncVEndInit();
int shSyncVSub(int mode, int sid);
int shSyncVStart(int mode);
int shSyncVEnd(int mode);

// 
// Start address: 0x1be360
int shSyncVHandler2(void* arg)
{
	int sid;
	// Line 31, Address: 0x1be360, Func Offset: 0
	// Line 36, Address: 0x1be368, Func Offset: 0x8
	// Line 46, Address: 0x1be374, Func Offset: 0x14
	// Line 47, Address: 0x1be37c, Func Offset: 0x1c
	// Line 48, Address: 0x1be380, Func Offset: 0x20
	// Func End, Address: 0x1be390, Func Offset: 0x30
}

// 
// Start address: 0x1be390
int shSyncVInitSub(int* sid_p, int* hid_p, int intc_cause)
{
	int hid;
	int sid;
	// Line 57, Address: 0x1be390, Func Offset: 0
	// Line 60, Address: 0x1be3b4, Func Offset: 0x24
	// Line 61, Address: 0x1be3c8, Func Offset: 0x38
	// Line 62, Address: 0x1be3d8, Func Offset: 0x48
	// Line 64, Address: 0x1be3ec, Func Offset: 0x5c
	// Line 74, Address: 0x1be404, Func Offset: 0x74
	// Line 75, Address: 0x1be410, Func Offset: 0x80
	// Line 76, Address: 0x1be424, Func Offset: 0x94
	// Line 77, Address: 0x1be428, Func Offset: 0x98
	// Line 78, Address: 0x1be430, Func Offset: 0xa0
	// Line 81, Address: 0x1be43c, Func Offset: 0xac
	// Line 82, Address: 0x1be44c, Func Offset: 0xbc
	// Line 83, Address: 0x1be460, Func Offset: 0xd0
	// Line 84, Address: 0x1be480, Func Offset: 0xf0
	// Line 85, Address: 0x1be48c, Func Offset: 0xfc
	// Line 86, Address: 0x1be4a0, Func Offset: 0x110
	// Line 87, Address: 0x1be4a4, Func Offset: 0x114
	// Line 88, Address: 0x1be4b0, Func Offset: 0x120
	// Line 89, Address: 0x1be4b8, Func Offset: 0x128
	// Line 92, Address: 0x1be4c4, Func Offset: 0x134
	// Line 93, Address: 0x1be4d8, Func Offset: 0x148
	// Line 94, Address: 0x1be4dc, Func Offset: 0x14c
	// Func End, Address: 0x1be4fc, Func Offset: 0x16c
}

// 
// Start address: 0x1be500
int shSyncVStartInit()
{
	// Line 97, Address: 0x1be500, Func Offset: 0
	// Line 98, Address: 0x1be508, Func Offset: 0x8
	// Line 99, Address: 0x1be524, Func Offset: 0x24
	// Func End, Address: 0x1be534, Func Offset: 0x34
}

// 
// Start address: 0x1be540
int shSyncVEndInit()
{
	// Line 102, Address: 0x1be540, Func Offset: 0
	// Line 103, Address: 0x1be548, Func Offset: 0x8
	// Line 104, Address: 0x1be564, Func Offset: 0x24
	// Func End, Address: 0x1be574, Func Offset: 0x34
}

// 
// Start address: 0x1be580
int shSyncVSub(int mode, int sid)
{
	unsigned short cnt1;
	unsigned short cnt0;
	int count;
	// Line 107, Address: 0x1be580, Func Offset: 0
	// Line 115, Address: 0x1be58c, Func Offset: 0xc
	// Line 116, Address: 0x1be598, Func Offset: 0x18
	// Line 117, Address: 0x1be5ac, Func Offset: 0x2c
	// Line 119, Address: 0x1be5b8, Func Offset: 0x38
	// Line 120, Address: 0x1be5c0, Func Offset: 0x40
	// Line 121, Address: 0x1be5cc, Func Offset: 0x4c
	// Line 122, Address: 0x1be5d8, Func Offset: 0x58
	// Line 123, Address: 0x1be5e0, Func Offset: 0x60
	// Line 124, Address: 0x1be5ec, Func Offset: 0x6c
	// Line 125, Address: 0x1be5f4, Func Offset: 0x74
	// Line 126, Address: 0x1be600, Func Offset: 0x80
	// Line 129, Address: 0x1be604, Func Offset: 0x84
	// Func End, Address: 0x1be618, Func Offset: 0x98
}

// 
// Start address: 0x1be620
int shSyncVStart(int mode)
{
	// Line 132, Address: 0x1be620, Func Offset: 0
	// Line 133, Address: 0x1be628, Func Offset: 0x8
	// Line 134, Address: 0x1be638, Func Offset: 0x18
	// Func End, Address: 0x1be648, Func Offset: 0x28
}

// 
// Start address: 0x1be650
int shSyncVEnd(int mode)
{
	// Line 137, Address: 0x1be650, Func Offset: 0
	// Line 138, Address: 0x1be658, Func Offset: 0x8
	// Line 139, Address: 0x1be668, Func Offset: 0x18
	// Func End, Address: 0x1be678, Func Offset: 0x28
}

