
typedef int(*type_0)();
typedef int(*type_1)();
typedef int(*type_2)();
typedef int(*type_3)();
typedef int(*type_4)();
typedef int(*type_5)();
typedef int(*type_6)();


void* d1sCmdWorkP;

int d1sInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize);
int d1sSync(int mode, int cid);
int d1sGetCurCmdId();
int d1sCmpCID(int cid0, int cid1);
int d1sPutCmd0(int(*f0)());
int d1sPutCmd1(int(*f1)(), <unknown fundamental type (0xa510)> a1);

// 
// Start address: 0x18e970
int d1sInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 25, Address: 0x18e970, Func Offset: 0
	// Line 26, Address: 0x18e990, Func Offset: 0x20
	// Line 27, Address: 0x18e994, Func Offset: 0x24
	// Line 28, Address: 0x18e9a4, Func Offset: 0x34
	// Line 29, Address: 0x18e9c4, Func Offset: 0x54
	// Line 30, Address: 0x18e9cc, Func Offset: 0x5c
	// Line 33, Address: 0x18e9d8, Func Offset: 0x68
	// Line 34, Address: 0x18e9dc, Func Offset: 0x6c
	// Func End, Address: 0x18e9f0, Func Offset: 0x80
}

// 
// Start address: 0x18e9f0
int d1sSync(int mode, int cid)
{
	int ret;
	// Line 52, Address: 0x18e9f0, Func Offset: 0
	// Line 53, Address: 0x18ea04, Func Offset: 0x14
	// Line 54, Address: 0x18ea08, Func Offset: 0x18
	// Line 55, Address: 0x18ea18, Func Offset: 0x28
	// Line 57, Address: 0x18ea34, Func Offset: 0x44
	// Line 58, Address: 0x18ea38, Func Offset: 0x48
	// Func End, Address: 0x18ea4c, Func Offset: 0x5c
}

// 
// Start address: 0x18ea50
int d1sGetCurCmdId()
{
	int ret;
	// Line 67, Address: 0x18ea50, Func Offset: 0
	// Line 68, Address: 0x18ea5c, Func Offset: 0xc
	// Line 69, Address: 0x18ea60, Func Offset: 0x10
	// Line 70, Address: 0x18ea70, Func Offset: 0x20
	// Line 72, Address: 0x18ea84, Func Offset: 0x34
	// Line 73, Address: 0x18ea88, Func Offset: 0x38
	// Func End, Address: 0x18ea9c, Func Offset: 0x4c
}

// 
// Start address: 0x18eaa0
int d1sCmpCID(int cid0, int cid1)
{
	// Line 82, Address: 0x18eaa0, Func Offset: 0
	// Line 83, Address: 0x18eab0, Func Offset: 0x10
	// Line 84, Address: 0x18eac0, Func Offset: 0x20
	// Func End, Address: 0x18ead0, Func Offset: 0x30
}

// 
// Start address: 0x18ead0
int d1sPutCmd0(int(*f0)())
{
	int ret;
	// Line 113, Address: 0x18ead0, Func Offset: 0
	// Line 114, Address: 0x18eae0, Func Offset: 0x10
	// Line 115, Address: 0x18eae4, Func Offset: 0x14
	// Line 116, Address: 0x18eaf4, Func Offset: 0x24
	// Line 119, Address: 0x18eb0c, Func Offset: 0x3c
	// Line 120, Address: 0x18eb10, Func Offset: 0x40
	// Func End, Address: 0x18eb24, Func Offset: 0x54
}

// 
// Start address: 0x18eb30
int d1sPutCmd1(int(*f1)(), <unknown fundamental type (0xa510)> a1)
{
	int ret;
	// Line 123, Address: 0x18eb30, Func Offset: 0
	// Line 124, Address: 0x18eb44, Func Offset: 0x14
	// Line 125, Address: 0x18eb48, Func Offset: 0x18
	// Line 126, Address: 0x18eb58, Func Offset: 0x28
	// Line 129, Address: 0x18eb74, Func Offset: 0x44
	// Line 130, Address: 0x18eb78, Func Offset: 0x48
	// Func End, Address: 0x18eb8c, Func Offset: 0x5c
}

