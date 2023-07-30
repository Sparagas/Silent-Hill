
typedef int(*type_0)();
typedef int(*type_1)(int(*)());
typedef int(*type_2)();
typedef int(*type_3)(int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_4)(int, int, void*);
typedef int(*type_5)();
typedef int(*type_6)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_7)();
typedef int(*type_8)(int);


int(*d2sPutCmd1)(int(*)(), <unknown fundamental type (0xa510)>);
int(*d2tscCmdBeginToUseSlot)(int);
int(*d2sPutCmd3)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
int(*d2tscCmdSend)(int, int, void*);
int(*d2sPutCmd0)(int(*)());
int(*d2tscCmdClearSlots)();

int d2tscCmdBeginToUseSlot(int slot);
int d2tscBeginToUseSlot(int slot);
int d2tscCmdSend(int slot, int texid, void* tag);
int d2tscSend(int slot, int texid, void* tag);
int d2tscCmdClearSlots();
int d2tscClearSlots();

// 
// Start address: 0x18f0c0
int d2tscCmdBeginToUseSlot(int slot)
{
	// Line 14, Address: 0x18f0c0, Func Offset: 0
	// Line 15, Address: 0x18f0cc, Func Offset: 0xc
	// Line 16, Address: 0x18f0d8, Func Offset: 0x18
	// Func End, Address: 0x18f0e8, Func Offset: 0x28
}

// 
// Start address: 0x18f0f0
int d2tscBeginToUseSlot(int slot)
{
	// Line 18, Address: 0x18f0f0, Func Offset: 0
	// Line 19, Address: 0x18f0fc, Func Offset: 0xc
	// Line 20, Address: 0x18f118, Func Offset: 0x28
	// Func End, Address: 0x18f128, Func Offset: 0x38
}

// 
// Start address: 0x18f130
int d2tscCmdSend(int slot, int texid, void* tag)
{
	int cur_texid;
	int ret;
	// Line 27, Address: 0x18f130, Func Offset: 0
	// Line 28, Address: 0x18f14c, Func Offset: 0x1c
	// Line 29, Address: 0x18f150, Func Offset: 0x20
	// Line 30, Address: 0x18f154, Func Offset: 0x24
	// Line 31, Address: 0x18f164, Func Offset: 0x34
	// Line 32, Address: 0x18f170, Func Offset: 0x40
	// Line 33, Address: 0x18f180, Func Offset: 0x50
	// Line 35, Address: 0x18f190, Func Offset: 0x60
	// Line 36, Address: 0x18f194, Func Offset: 0x64
	// Func End, Address: 0x18f1ac, Func Offset: 0x7c
}

// 
// Start address: 0x18f1b0
int d2tscSend(int slot, int texid, void* tag)
{
	// Line 38, Address: 0x18f1b0, Func Offset: 0
	// Line 39, Address: 0x18f1c4, Func Offset: 0x14
	// Line 40, Address: 0x18f1e8, Func Offset: 0x38
	// Func End, Address: 0x18f1f8, Func Offset: 0x48
}

// 
// Start address: 0x18f200
int d2tscCmdClearSlots()
{
	// Line 44, Address: 0x18f200, Func Offset: 0
	// Line 45, Address: 0x18f208, Func Offset: 0x8
	// Line 46, Address: 0x18f210, Func Offset: 0x10
	// Func End, Address: 0x18f220, Func Offset: 0x20
}

// 
// Start address: 0x18f220
int d2tscClearSlots()
{
	// Line 48, Address: 0x18f220, Func Offset: 0
	// Line 49, Address: 0x18f228, Func Offset: 0x8
	// Line 50, Address: 0x18f240, Func Offset: 0x20
	// Func End, Address: 0x18f250, Func Offset: 0x30
}

