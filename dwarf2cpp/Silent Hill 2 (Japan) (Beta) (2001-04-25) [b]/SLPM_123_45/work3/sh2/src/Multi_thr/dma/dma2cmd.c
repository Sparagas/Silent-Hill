
typedef int(*type_0)();
typedef int(*type_1)(int(*)());
typedef int(*type_2)();
typedef int(*type_3)();
typedef int(*type_4)(int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_5)();
typedef int(*type_6)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_7)(void*);
typedef int(*type_8)(void*, unsigned short);


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
// Start address: 0x18ec70
void d2cSubCmdUpdataLastRegistCid(int cid)
{
	// Line 46, Address: 0x18ec70, Func Offset: 0
	// Line 48, Address: 0x18ec7c, Func Offset: 0xc
	// Line 49, Address: 0x18ec84, Func Offset: 0x14
	// Line 50, Address: 0x18ec9c, Func Offset: 0x2c
	// Line 51, Address: 0x18eca4, Func Offset: 0x34
	// Func End, Address: 0x18ecb4, Func Offset: 0x44
}

// 
// Start address: 0x18ecc0
int d2cSubSubCmdCheckFlushCache()
{
	int cur_cid;
	int ret;
	// Line 55, Address: 0x18ecc0, Func Offset: 0
	// Line 56, Address: 0x18ecd0, Func Offset: 0x10
	// Line 58, Address: 0x18ecd4, Func Offset: 0x14
	// Line 59, Address: 0x18ece0, Func Offset: 0x20
	// Line 60, Address: 0x18ece8, Func Offset: 0x28
	// Line 61, Address: 0x18ed04, Func Offset: 0x44
	// Line 62, Address: 0x18ed14, Func Offset: 0x54
	// Line 64, Address: 0x18ed18, Func Offset: 0x58
	// Line 65, Address: 0x18ed20, Func Offset: 0x60
	// Line 66, Address: 0x18ed24, Func Offset: 0x64
	// Func End, Address: 0x18ed3c, Func Offset: 0x7c
}

// 
// Start address: 0x18ed40
void d2cSubCmdFlushCache()
{
	// Line 69, Address: 0x18ed40, Func Offset: 0
	// Line 81, Address: 0x18ed48, Func Offset: 0x8
	// Line 84, Address: 0x18ed64, Func Offset: 0x24
	// Func End, Address: 0x18ed74, Func Offset: 0x34
}

// 
// Start address: 0x18ed80
int d2cCmdInit()
{
	// Line 95, Address: 0x18ed80, Func Offset: 0
	// Line 96, Address: 0x18ed88, Func Offset: 0x8
	// Line 97, Address: 0x18ed90, Func Offset: 0x10
	// Func End, Address: 0x18eda0, Func Offset: 0x20
}

// 
// Start address: 0x18eda0
int d2cInit()
{
	int ret;
	// Line 100, Address: 0x18eda0, Func Offset: 0
	// Line 102, Address: 0x18edb0, Func Offset: 0x10
	// Line 103, Address: 0x18edd0, Func Offset: 0x30
	// Line 104, Address: 0x18eddc, Func Offset: 0x3c
	// Line 105, Address: 0x18ede0, Func Offset: 0x40
	// Func End, Address: 0x18edf8, Func Offset: 0x58
}

// 
// Start address: 0x18ee00
int d2cCmdSend(void* tag)
{
	// Line 118, Address: 0x18ee00, Func Offset: 0
	// Line 119, Address: 0x18ee0c, Func Offset: 0xc
	// Line 120, Address: 0x18ee14, Func Offset: 0x14
	// Line 121, Address: 0x18ee20, Func Offset: 0x20
	// Func End, Address: 0x18ee30, Func Offset: 0x30
}

