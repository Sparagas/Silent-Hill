
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
// Start address: 0x188570
int d1sInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 25, Address: 0x188570, Func Offset: 0
	// Line 26, Address: 0x18858c, Func Offset: 0x1c
	// Line 27, Address: 0x188590, Func Offset: 0x20
	// Line 28, Address: 0x1885a0, Func Offset: 0x30
	// Line 29, Address: 0x1885bc, Func Offset: 0x4c
	// Line 30, Address: 0x1885c4, Func Offset: 0x54
	// Line 34, Address: 0x1885cc, Func Offset: 0x5c
	// Func End, Address: 0x1885e0, Func Offset: 0x70
}

// 
// Start address: 0x1885e0
int d1sSync(int mode, int cid)
{
	int ret;
	// Line 52, Address: 0x1885e0, Func Offset: 0
	// Line 53, Address: 0x1885f0, Func Offset: 0x10
	// Line 54, Address: 0x1885f4, Func Offset: 0x14
	// Line 55, Address: 0x188604, Func Offset: 0x24
	// Line 58, Address: 0x188610, Func Offset: 0x30
	// Func End, Address: 0x188620, Func Offset: 0x40
}

// 
// Start address: 0x188620
int d1sGetCurCmdId()
{
	int ret;
	// Line 67, Address: 0x188620, Func Offset: 0
	// Line 68, Address: 0x188628, Func Offset: 0x8
	// Line 69, Address: 0x18862c, Func Offset: 0xc
	// Line 70, Address: 0x18863c, Func Offset: 0x1c
	// Line 73, Address: 0x188644, Func Offset: 0x24
	// Func End, Address: 0x188654, Func Offset: 0x34
}

// 
// Start address: 0x188660
int d1sCmpCID(int cid0, int cid1)
{
	// Line 82, Address: 0x188660, Func Offset: 0
	// Line 83, Address: 0x188668, Func Offset: 0x8
	// Line 84, Address: 0x188670, Func Offset: 0x10
	// Func End, Address: 0x188680, Func Offset: 0x20
}

// 
// Start address: 0x188680
int d1sPutCmd0(int(*f0)())
{
	int ret;
	// Line 113, Address: 0x188680, Func Offset: 0
	// Line 114, Address: 0x18868c, Func Offset: 0xc
	// Line 115, Address: 0x188690, Func Offset: 0x10
	// Line 116, Address: 0x1886a0, Func Offset: 0x20
	// Line 120, Address: 0x1886a8, Func Offset: 0x28
	// Func End, Address: 0x1886b8, Func Offset: 0x38
}

// 
// Start address: 0x1886c0
int d1sPutCmd1(int(*f1)(), <unknown fundamental type (0xa510)> a1)
{
	int ret;
	// Line 123, Address: 0x1886c0, Func Offset: 0
	// Line 124, Address: 0x1886d0, Func Offset: 0x10
	// Line 125, Address: 0x1886d4, Func Offset: 0x14
	// Line 126, Address: 0x1886e4, Func Offset: 0x24
	// Line 130, Address: 0x1886f0, Func Offset: 0x30
	// Func End, Address: 0x188700, Func Offset: 0x40
}

