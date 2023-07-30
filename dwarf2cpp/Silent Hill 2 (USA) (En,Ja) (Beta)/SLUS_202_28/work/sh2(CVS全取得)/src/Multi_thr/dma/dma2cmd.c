
typedef int(*type_0)(int(*)());
typedef int(*type_1)();
typedef int(*type_2)(int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_3)();
typedef int(*type_4)();
typedef int(*type_5)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_6)(void*);
typedef int(*type_7)(void*, unsigned short);
typedef int(*type_8)();


int last_regist_cid;
int last_flush_cid;
int(*d2sPutCmd0)(int(*)());
int(*d2cCmdInit)();
int(*d2sPutCmd1)(int(*)(), <unknown fundamental type (0xa510)>);
int(*d2cCmdSend)(void*);
int(*d2sPutCmd2)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*d2cCmdSendN)(void*, unsigned short);

void d2cSubCmdUpdataLastRegistCid(int cid);
int d2cSubSubCmdCheckFlushCache();
void d2cSubCmdFlushCache();
int d2cCmdInit();
int d2cInit();
int d2cCmdSend(void* tag);

// 
// Start address: 0x1887d0
void d2cSubCmdUpdataLastRegistCid(int cid)
{
	// Line 46, Address: 0x1887d0, Func Offset: 0
	// Line 48, Address: 0x1887e0, Func Offset: 0x10
	// Line 49, Address: 0x1887e8, Func Offset: 0x18
	// Line 50, Address: 0x1887f8, Func Offset: 0x28
	// Line 51, Address: 0x188800, Func Offset: 0x30
	// Func End, Address: 0x188814, Func Offset: 0x44
}

// 
// Start address: 0x188820
int d2cSubSubCmdCheckFlushCache()
{
	int cur_cid;
	int ret;
	// Line 55, Address: 0x188820, Func Offset: 0
	// Line 56, Address: 0x188830, Func Offset: 0x10
	// Line 58, Address: 0x188834, Func Offset: 0x14
	// Line 59, Address: 0x188840, Func Offset: 0x20
	// Line 60, Address: 0x188848, Func Offset: 0x28
	// Line 61, Address: 0x188864, Func Offset: 0x44
	// Line 62, Address: 0x188874, Func Offset: 0x54
	// Line 64, Address: 0x188878, Func Offset: 0x58
	// Line 65, Address: 0x188880, Func Offset: 0x60
	// Line 66, Address: 0x188884, Func Offset: 0x64
	// Func End, Address: 0x18889c, Func Offset: 0x7c
}

// 
// Start address: 0x1888a0
void d2cSubCmdFlushCache()
{
	// Line 69, Address: 0x1888a0, Func Offset: 0
	// Line 81, Address: 0x1888a8, Func Offset: 0x8
	// Line 84, Address: 0x1888c4, Func Offset: 0x24
	// Func End, Address: 0x1888d4, Func Offset: 0x34
}

// 
// Start address: 0x1888e0
int d2cCmdInit()
{
	// Line 95, Address: 0x1888e0, Func Offset: 0
	// Line 96, Address: 0x1888e8, Func Offset: 0x8
	// Line 97, Address: 0x1888f0, Func Offset: 0x10
	// Func End, Address: 0x188900, Func Offset: 0x20
}

// 
// Start address: 0x188900
int d2cInit()
{
	int ret;
	// Line 100, Address: 0x188900, Func Offset: 0
	// Line 102, Address: 0x18890c, Func Offset: 0xc
	// Line 103, Address: 0x188928, Func Offset: 0x28
	// Line 104, Address: 0x188934, Func Offset: 0x34
	// Line 105, Address: 0x188938, Func Offset: 0x38
	// Func End, Address: 0x18894c, Func Offset: 0x4c
}

// 
// Start address: 0x188950
int d2cCmdSend(void* tag)
{
	// Line 118, Address: 0x188950, Func Offset: 0
	// Line 119, Address: 0x188960, Func Offset: 0x10
	// Line 120, Address: 0x188968, Func Offset: 0x18
	// Line 121, Address: 0x188974, Func Offset: 0x24
	// Func End, Address: 0x188988, Func Offset: 0x38
}

