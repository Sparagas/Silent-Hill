
typedef int(*type_0)();
typedef int(*type_1)();
typedef int(*type_2)();
typedef int(*type_3)();
typedef int(*type_4)();
typedef int(*type_5)();
typedef int(*type_6)();


void* d2sCmdWorkP;

int d2sInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize);
int d2sSync(int mode, int cid);
int d2sGetCurCmdId();
int d2sCmpCID(int cid0, int cid1);
int d2sPutCmd0(int(*f0)());
int d2sPutCmd1(int(*f1)(), <unknown fundamental type (0xa510)> a1);
int d2sPutCmd3(int(*f3)(), <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3);

// 
// Start address: 0x188990
int d2sInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 25, Address: 0x188990, Func Offset: 0
	// Line 26, Address: 0x1889ac, Func Offset: 0x1c
	// Line 27, Address: 0x1889b0, Func Offset: 0x20
	// Line 28, Address: 0x1889c0, Func Offset: 0x30
	// Line 29, Address: 0x1889dc, Func Offset: 0x4c
	// Line 30, Address: 0x1889e4, Func Offset: 0x54
	// Line 34, Address: 0x1889ec, Func Offset: 0x5c
	// Func End, Address: 0x188a00, Func Offset: 0x70
}

// 
// Start address: 0x188a00
int d2sSync(int mode, int cid)
{
	int ret;
	// Line 52, Address: 0x188a00, Func Offset: 0
	// Line 53, Address: 0x188a10, Func Offset: 0x10
	// Line 54, Address: 0x188a14, Func Offset: 0x14
	// Line 55, Address: 0x188a24, Func Offset: 0x24
	// Line 58, Address: 0x188a30, Func Offset: 0x30
	// Func End, Address: 0x188a40, Func Offset: 0x40
}

// 
// Start address: 0x188a40
int d2sGetCurCmdId()
{
	int ret;
	// Line 67, Address: 0x188a40, Func Offset: 0
	// Line 68, Address: 0x188a48, Func Offset: 0x8
	// Line 69, Address: 0x188a4c, Func Offset: 0xc
	// Line 70, Address: 0x188a5c, Func Offset: 0x1c
	// Line 73, Address: 0x188a64, Func Offset: 0x24
	// Func End, Address: 0x188a74, Func Offset: 0x34
}

// 
// Start address: 0x188a80
int d2sCmpCID(int cid0, int cid1)
{
	// Line 82, Address: 0x188a80, Func Offset: 0
	// Line 83, Address: 0x188a88, Func Offset: 0x8
	// Line 84, Address: 0x188a90, Func Offset: 0x10
	// Func End, Address: 0x188aa0, Func Offset: 0x20
}

// 
// Start address: 0x188aa0
int d2sPutCmd0(int(*f0)())
{
	int ret;
	// Line 113, Address: 0x188aa0, Func Offset: 0
	// Line 114, Address: 0x188aac, Func Offset: 0xc
	// Line 115, Address: 0x188ab0, Func Offset: 0x10
	// Line 116, Address: 0x188ac0, Func Offset: 0x20
	// Line 120, Address: 0x188ac8, Func Offset: 0x28
	// Func End, Address: 0x188ad8, Func Offset: 0x38
}

// 
// Start address: 0x188ae0
int d2sPutCmd1(int(*f1)(), <unknown fundamental type (0xa510)> a1)
{
	int ret;
	// Line 123, Address: 0x188ae0, Func Offset: 0
	// Line 124, Address: 0x188af0, Func Offset: 0x10
	// Line 125, Address: 0x188af4, Func Offset: 0x14
	// Line 126, Address: 0x188b04, Func Offset: 0x24
	// Line 130, Address: 0x188b10, Func Offset: 0x30
	// Func End, Address: 0x188b20, Func Offset: 0x40
}

// 
// Start address: 0x188b20
int d2sPutCmd3(int(*f3)(), <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3)
{
	int ret;
	// Line 142, Address: 0x188b20, Func Offset: 0
	// Line 143, Address: 0x188b38, Func Offset: 0x18
	// Line 144, Address: 0x188b3c, Func Offset: 0x1c
	// Line 145, Address: 0x188b4c, Func Offset: 0x2c
	// Line 149, Address: 0x188b60, Func Offset: 0x40
	// Func End, Address: 0x188b70, Func Offset: 0x50
}

