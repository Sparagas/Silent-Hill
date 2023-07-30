
typedef int(*type_0)(void*, unsigned short);
typedef int(*type_1)();
typedef int(*type_2)(int(*)());
typedef int(*type_3)();
typedef int(*type_4)(int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_5)();
typedef int(*type_6)();
typedef int(*type_7)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_8)(void*);
typedef int(*type_9)(void*, unsigned short);


int last_regist_cid;
int last_flush_cid;
int(*d1sPutCmd0)(int(*)());
int(*d1cCmdInit)();
int(*d1sPutCmd1)(int(*)(), <unknown fundamental type (0xa510)>);
int(*d1cCmdSend)(void*);
int(*d1sPutCmd2)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*d1cCmdSendN)(void*, unsigned short);
int(*d1cCmdRecv)(void*, unsigned short);

void d1cSubCmdUpdataLastRegistCid(int cid);
int d1cSubSubCmdCheckFlushCache();
void d1cSubCmdFlushCache();
int d1cCmdInit();
int d1cInit();
int d1cCmdSend(void* tag);
int d1cSend(void* tag);

// 
// Start address: 0x188360
void d1cSubCmdUpdataLastRegistCid(int cid)
{
	// Line 46, Address: 0x188360, Func Offset: 0
	// Line 48, Address: 0x188370, Func Offset: 0x10
	// Line 49, Address: 0x188378, Func Offset: 0x18
	// Line 50, Address: 0x188388, Func Offset: 0x28
	// Line 51, Address: 0x188390, Func Offset: 0x30
	// Func End, Address: 0x1883a4, Func Offset: 0x44
}

// 
// Start address: 0x1883b0
int d1cSubSubCmdCheckFlushCache()
{
	int cur_cid;
	int ret;
	// Line 55, Address: 0x1883b0, Func Offset: 0
	// Line 56, Address: 0x1883c0, Func Offset: 0x10
	// Line 58, Address: 0x1883c4, Func Offset: 0x14
	// Line 59, Address: 0x1883d0, Func Offset: 0x20
	// Line 60, Address: 0x1883d8, Func Offset: 0x28
	// Line 61, Address: 0x1883f4, Func Offset: 0x44
	// Line 62, Address: 0x188404, Func Offset: 0x54
	// Line 64, Address: 0x188408, Func Offset: 0x58
	// Line 65, Address: 0x188410, Func Offset: 0x60
	// Line 66, Address: 0x188414, Func Offset: 0x64
	// Func End, Address: 0x18842c, Func Offset: 0x7c
}

// 
// Start address: 0x188430
void d1cSubCmdFlushCache()
{
	// Line 69, Address: 0x188430, Func Offset: 0
	// Line 81, Address: 0x188438, Func Offset: 0x8
	// Line 84, Address: 0x188454, Func Offset: 0x24
	// Func End, Address: 0x188464, Func Offset: 0x34
}

// 
// Start address: 0x188470
int d1cCmdInit()
{
	// Line 95, Address: 0x188470, Func Offset: 0
	// Line 96, Address: 0x188478, Func Offset: 0x8
	// Line 97, Address: 0x188480, Func Offset: 0x10
	// Func End, Address: 0x188490, Func Offset: 0x20
}

// 
// Start address: 0x188490
int d1cInit()
{
	int ret;
	// Line 100, Address: 0x188490, Func Offset: 0
	// Line 102, Address: 0x18849c, Func Offset: 0xc
	// Line 103, Address: 0x1884b8, Func Offset: 0x28
	// Line 104, Address: 0x1884c4, Func Offset: 0x34
	// Line 105, Address: 0x1884c8, Func Offset: 0x38
	// Func End, Address: 0x1884dc, Func Offset: 0x4c
}

// 
// Start address: 0x1884e0
int d1cCmdSend(void* tag)
{
	// Line 118, Address: 0x1884e0, Func Offset: 0
	// Line 119, Address: 0x1884f0, Func Offset: 0x10
	// Line 120, Address: 0x1884f8, Func Offset: 0x18
	// Line 121, Address: 0x188504, Func Offset: 0x24
	// Func End, Address: 0x188518, Func Offset: 0x38
}

// 
// Start address: 0x188520
int d1cSend(void* tag)
{
	int ret;
	// Line 124, Address: 0x188520, Func Offset: 0
	// Line 126, Address: 0x188530, Func Offset: 0x10
	// Line 127, Address: 0x18854c, Func Offset: 0x2c
	// Line 128, Address: 0x188558, Func Offset: 0x38
	// Line 129, Address: 0x18855c, Func Offset: 0x3c
	// Func End, Address: 0x188570, Func Offset: 0x50
}

