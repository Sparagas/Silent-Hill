
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
// Start address: 0x1c7ae0
int shSyncVHandler2(void* arg)
{
	int sid;
	// Line 29, Address: 0x1c7ae0, Func Offset: 0
	// Line 34, Address: 0x1c7ae8, Func Offset: 0x8
	// Line 44, Address: 0x1c7af4, Func Offset: 0x14
	// Line 45, Address: 0x1c7afc, Func Offset: 0x1c
	// Line 46, Address: 0x1c7b00, Func Offset: 0x20
	// Func End, Address: 0x1c7b10, Func Offset: 0x30
}

// 
// Start address: 0x1c7b10
int shSyncVInitSub(int* sid_p, int* hid_p, int intc_cause)
{
	int hid;
	int sid;
	// Line 55, Address: 0x1c7b10, Func Offset: 0
	// Line 58, Address: 0x1c7b2c, Func Offset: 0x1c
	// Line 59, Address: 0x1c7b3c, Func Offset: 0x2c
	// Line 60, Address: 0x1c7b50, Func Offset: 0x40
	// Line 62, Address: 0x1c7b60, Func Offset: 0x50
	// Line 72, Address: 0x1c7b7c, Func Offset: 0x6c
	// Line 73, Address: 0x1c7b88, Func Offset: 0x78
	// Line 74, Address: 0x1c7b98, Func Offset: 0x88
	// Line 75, Address: 0x1c7ba0, Func Offset: 0x90
	// Line 76, Address: 0x1c7ba8, Func Offset: 0x98
	// Line 79, Address: 0x1c7bb4, Func Offset: 0xa4
	// Line 80, Address: 0x1c7bc8, Func Offset: 0xb8
	// Line 81, Address: 0x1c7bd8, Func Offset: 0xc8
	// Line 82, Address: 0x1c7bf8, Func Offset: 0xe8
	// Line 83, Address: 0x1c7c04, Func Offset: 0xf4
	// Line 84, Address: 0x1c7c14, Func Offset: 0x104
	// Line 85, Address: 0x1c7c1c, Func Offset: 0x10c
	// Line 86, Address: 0x1c7c28, Func Offset: 0x118
	// Line 87, Address: 0x1c7c30, Func Offset: 0x120
	// Line 90, Address: 0x1c7c3c, Func Offset: 0x12c
	// Line 91, Address: 0x1c7c4c, Func Offset: 0x13c
	// Line 92, Address: 0x1c7c50, Func Offset: 0x140
	// Func End, Address: 0x1c7c68, Func Offset: 0x158
}

// 
// Start address: 0x1c7c70
int shSyncVStartInit()
{
	// Line 95, Address: 0x1c7c70, Func Offset: 0
	// Line 96, Address: 0x1c7c78, Func Offset: 0x8
	// Line 97, Address: 0x1c7c94, Func Offset: 0x24
	// Func End, Address: 0x1c7ca4, Func Offset: 0x34
}

// 
// Start address: 0x1c7cb0
int shSyncVEndInit()
{
	// Line 100, Address: 0x1c7cb0, Func Offset: 0
	// Line 101, Address: 0x1c7cb8, Func Offset: 0x8
	// Line 102, Address: 0x1c7cd4, Func Offset: 0x24
	// Func End, Address: 0x1c7ce4, Func Offset: 0x34
}

// 
// Start address: 0x1c7cf0
int shSyncVSub(int mode, int sid)
{
	unsigned short cnt1;
	unsigned short cnt0;
	int count;
	// Line 105, Address: 0x1c7cf0, Func Offset: 0
	// Line 113, Address: 0x1c7d0c, Func Offset: 0x1c
	// Line 114, Address: 0x1c7d1c, Func Offset: 0x2c
	// Line 115, Address: 0x1c7d2c, Func Offset: 0x3c
	// Line 117, Address: 0x1c7d38, Func Offset: 0x48
	// Line 118, Address: 0x1c7d44, Func Offset: 0x54
	// Line 119, Address: 0x1c7d54, Func Offset: 0x64
	// Line 120, Address: 0x1c7d60, Func Offset: 0x70
	// Line 121, Address: 0x1c7d70, Func Offset: 0x80
	// Line 122, Address: 0x1c7d84, Func Offset: 0x94
	// Line 123, Address: 0x1c7d8c, Func Offset: 0x9c
	// Line 124, Address: 0x1c7d98, Func Offset: 0xa8
	// Line 126, Address: 0x1c7d9c, Func Offset: 0xac
	// Line 127, Address: 0x1c7da0, Func Offset: 0xb0
	// Func End, Address: 0x1c7dbc, Func Offset: 0xcc
}

// 
// Start address: 0x1c7dc0
int shSyncVStart(int mode)
{
	// Line 130, Address: 0x1c7dc0, Func Offset: 0
	// Line 131, Address: 0x1c7dcc, Func Offset: 0xc
	// Line 132, Address: 0x1c7de0, Func Offset: 0x20
	// Func End, Address: 0x1c7df0, Func Offset: 0x30
}

// 
// Start address: 0x1c7df0
int shSyncVEnd(int mode)
{
	// Line 135, Address: 0x1c7df0, Func Offset: 0
	// Line 136, Address: 0x1c7dfc, Func Offset: 0xc
	// Line 137, Address: 0x1c7e10, Func Offset: 0x20
	// Func End, Address: 0x1c7e20, Func Offset: 0x30
}

