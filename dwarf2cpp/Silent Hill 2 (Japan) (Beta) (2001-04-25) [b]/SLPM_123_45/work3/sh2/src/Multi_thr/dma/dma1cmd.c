
typedef int(*type_0)(void*, unsigned short);
typedef int(*type_1)(void*, unsigned short);
typedef int(*type_2)();
typedef int(*type_3)(int(*)());
typedef int(*type_4)();
typedef int(*type_5)();
typedef int(*type_6)(int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_7)();
typedef int(*type_8)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_9)(void*);


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
// Start address: 0x18e750
void d1cSubCmdUpdataLastRegistCid(int cid)
{
	// Line 46, Address: 0x18e750, Func Offset: 0
	// Line 48, Address: 0x18e75c, Func Offset: 0xc
	// Line 49, Address: 0x18e764, Func Offset: 0x14
	// Line 50, Address: 0x18e77c, Func Offset: 0x2c
	// Line 51, Address: 0x18e784, Func Offset: 0x34
	// Func End, Address: 0x18e794, Func Offset: 0x44
}

// 
// Start address: 0x18e7a0
int d1cSubSubCmdCheckFlushCache()
{
	int cur_cid;
	int ret;
	// Line 55, Address: 0x18e7a0, Func Offset: 0
	// Line 56, Address: 0x18e7b0, Func Offset: 0x10
	// Line 58, Address: 0x18e7b4, Func Offset: 0x14
	// Line 59, Address: 0x18e7c0, Func Offset: 0x20
	// Line 60, Address: 0x18e7c8, Func Offset: 0x28
	// Line 61, Address: 0x18e7e4, Func Offset: 0x44
	// Line 62, Address: 0x18e7f4, Func Offset: 0x54
	// Line 64, Address: 0x18e7f8, Func Offset: 0x58
	// Line 65, Address: 0x18e800, Func Offset: 0x60
	// Line 66, Address: 0x18e804, Func Offset: 0x64
	// Func End, Address: 0x18e81c, Func Offset: 0x7c
}

// 
// Start address: 0x18e820
void d1cSubCmdFlushCache()
{
	// Line 69, Address: 0x18e820, Func Offset: 0
	// Line 81, Address: 0x18e828, Func Offset: 0x8
	// Line 84, Address: 0x18e844, Func Offset: 0x24
	// Func End, Address: 0x18e854, Func Offset: 0x34
}

// 
// Start address: 0x18e860
int d1cCmdInit()
{
	// Line 95, Address: 0x18e860, Func Offset: 0
	// Line 96, Address: 0x18e868, Func Offset: 0x8
	// Line 97, Address: 0x18e870, Func Offset: 0x10
	// Func End, Address: 0x18e880, Func Offset: 0x20
}

// 
// Start address: 0x18e880
int d1cInit()
{
	int ret;
	// Line 100, Address: 0x18e880, Func Offset: 0
	// Line 102, Address: 0x18e890, Func Offset: 0x10
	// Line 103, Address: 0x18e8b0, Func Offset: 0x30
	// Line 104, Address: 0x18e8bc, Func Offset: 0x3c
	// Line 105, Address: 0x18e8c0, Func Offset: 0x40
	// Func End, Address: 0x18e8d8, Func Offset: 0x58
}

// 
// Start address: 0x18e8e0
int d1cCmdSend(void* tag)
{
	// Line 118, Address: 0x18e8e0, Func Offset: 0
	// Line 119, Address: 0x18e8ec, Func Offset: 0xc
	// Line 120, Address: 0x18e8f4, Func Offset: 0x14
	// Line 121, Address: 0x18e900, Func Offset: 0x20
	// Func End, Address: 0x18e910, Func Offset: 0x30
}

// 
// Start address: 0x18e910
int d1cSend(void* tag)
{
	int ret;
	// Line 124, Address: 0x18e910, Func Offset: 0
	// Line 126, Address: 0x18e924, Func Offset: 0x14
	// Line 127, Address: 0x18e948, Func Offset: 0x38
	// Line 128, Address: 0x18e954, Func Offset: 0x44
	// Line 129, Address: 0x18e958, Func Offset: 0x48
	// Func End, Address: 0x18e970, Func Offset: 0x60
}

