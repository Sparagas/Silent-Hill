
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
// Start address: 0x18ee30
int d2sInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 25, Address: 0x18ee30, Func Offset: 0
	// Line 26, Address: 0x18ee50, Func Offset: 0x20
	// Line 27, Address: 0x18ee54, Func Offset: 0x24
	// Line 28, Address: 0x18ee64, Func Offset: 0x34
	// Line 29, Address: 0x18ee84, Func Offset: 0x54
	// Line 30, Address: 0x18ee8c, Func Offset: 0x5c
	// Line 33, Address: 0x18ee98, Func Offset: 0x68
	// Line 34, Address: 0x18ee9c, Func Offset: 0x6c
	// Func End, Address: 0x18eeb0, Func Offset: 0x80
}

// 
// Start address: 0x18eeb0
int d2sSync(int mode, int cid)
{
	int ret;
	// Line 52, Address: 0x18eeb0, Func Offset: 0
	// Line 53, Address: 0x18eec4, Func Offset: 0x14
	// Line 54, Address: 0x18eec8, Func Offset: 0x18
	// Line 55, Address: 0x18eed8, Func Offset: 0x28
	// Line 57, Address: 0x18eef4, Func Offset: 0x44
	// Line 58, Address: 0x18eef8, Func Offset: 0x48
	// Func End, Address: 0x18ef0c, Func Offset: 0x5c
}

// 
// Start address: 0x18ef10
int d2sGetCurCmdId()
{
	int ret;
	// Line 67, Address: 0x18ef10, Func Offset: 0
	// Line 68, Address: 0x18ef1c, Func Offset: 0xc
	// Line 69, Address: 0x18ef20, Func Offset: 0x10
	// Line 70, Address: 0x18ef30, Func Offset: 0x20
	// Line 72, Address: 0x18ef44, Func Offset: 0x34
	// Line 73, Address: 0x18ef48, Func Offset: 0x38
	// Func End, Address: 0x18ef5c, Func Offset: 0x4c
}

// 
// Start address: 0x18ef60
int d2sCmpCID(int cid0, int cid1)
{
	// Line 82, Address: 0x18ef60, Func Offset: 0
	// Line 83, Address: 0x18ef70, Func Offset: 0x10
	// Line 84, Address: 0x18ef80, Func Offset: 0x20
	// Func End, Address: 0x18ef90, Func Offset: 0x30
}

// 
// Start address: 0x18ef90
int d2sPutCmd0(int(*f0)())
{
	int ret;
	// Line 113, Address: 0x18ef90, Func Offset: 0
	// Line 114, Address: 0x18efa0, Func Offset: 0x10
	// Line 115, Address: 0x18efa4, Func Offset: 0x14
	// Line 116, Address: 0x18efb4, Func Offset: 0x24
	// Line 119, Address: 0x18efcc, Func Offset: 0x3c
	// Line 120, Address: 0x18efd0, Func Offset: 0x40
	// Func End, Address: 0x18efe4, Func Offset: 0x54
}

// 
// Start address: 0x18eff0
int d2sPutCmd1(int(*f1)(), <unknown fundamental type (0xa510)> a1)
{
	int ret;
	// Line 123, Address: 0x18eff0, Func Offset: 0
	// Line 124, Address: 0x18f004, Func Offset: 0x14
	// Line 125, Address: 0x18f008, Func Offset: 0x18
	// Line 126, Address: 0x18f018, Func Offset: 0x28
	// Line 129, Address: 0x18f034, Func Offset: 0x44
	// Line 130, Address: 0x18f038, Func Offset: 0x48
	// Func End, Address: 0x18f04c, Func Offset: 0x5c
}

// 
// Start address: 0x18f050
int d2sPutCmd3(int(*f3)(), <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3)
{
	int ret;
	// Line 142, Address: 0x18f050, Func Offset: 0
	// Line 143, Address: 0x18f06c, Func Offset: 0x1c
	// Line 144, Address: 0x18f070, Func Offset: 0x20
	// Line 145, Address: 0x18f080, Func Offset: 0x30
	// Line 148, Address: 0x18f0a4, Func Offset: 0x54
	// Line 149, Address: 0x18f0a8, Func Offset: 0x58
	// Func End, Address: 0x18f0bc, Func Offset: 0x6c
}

