
typedef int(*type_0)();
typedef int(*type_1)(int(*)());
typedef int(*type_2)();
typedef int(*type_3)(int(*)(), <unknown fundamental type (0xa510)>);
typedef int(*type_4)(int, int, void*);
typedef int(*type_5)();
typedef int(*type_6)(int(*)(), <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_7)(int);
typedef int(*type_8)();


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
// Start address: 0x188b70
int d2tscCmdBeginToUseSlot(int slot)
{
	// Line 14, Address: 0x188b70, Func Offset: 0
	// Line 15, Address: 0x188b78, Func Offset: 0x8
	// Line 16, Address: 0x188b80, Func Offset: 0x10
	// Func End, Address: 0x188b90, Func Offset: 0x20
}

// 
// Start address: 0x188b90
int d2tscBeginToUseSlot(int slot)
{
	// Line 18, Address: 0x188b90, Func Offset: 0
	// Line 19, Address: 0x188b9c, Func Offset: 0xc
	// Line 20, Address: 0x188bb4, Func Offset: 0x24
	// Func End, Address: 0x188bc4, Func Offset: 0x34
}

// 
// Start address: 0x188bd0
int d2tscCmdSend(int slot, int texid, void* tag)
{
	int cur_texid;
	int ret;
	// Line 27, Address: 0x188bd0, Func Offset: 0
	// Line 28, Address: 0x188bf4, Func Offset: 0x24
	// Line 30, Address: 0x188bf8, Func Offset: 0x28
	// Line 31, Address: 0x188c00, Func Offset: 0x30
	// Line 32, Address: 0x188c08, Func Offset: 0x38
	// Line 33, Address: 0x188c18, Func Offset: 0x48
	// Line 35, Address: 0x188c28, Func Offset: 0x58
	// Line 36, Address: 0x188c2c, Func Offset: 0x5c
	// Func End, Address: 0x188c4c, Func Offset: 0x7c
}

// 
// Start address: 0x188c50
int d2tscSend(int slot, int texid, void* tag)
{
	// Line 38, Address: 0x188c50, Func Offset: 0
	// Line 39, Address: 0x188c64, Func Offset: 0x14
	// Line 40, Address: 0x188c84, Func Offset: 0x34
	// Func End, Address: 0x188c94, Func Offset: 0x44
}

// 
// Start address: 0x188ca0
int d2tscCmdClearSlots()
{
	// Line 44, Address: 0x188ca0, Func Offset: 0
	// Line 45, Address: 0x188ca8, Func Offset: 0x8
	// Line 46, Address: 0x188cb0, Func Offset: 0x10
	// Func End, Address: 0x188cc0, Func Offset: 0x20
}

// 
// Start address: 0x188cc0
int d2tscClearSlots()
{
	// Line 48, Address: 0x188cc0, Func Offset: 0
	// Line 49, Address: 0x188cc8, Func Offset: 0x8
	// Line 50, Address: 0x188ce0, Func Offset: 0x20
	// Func End, Address: 0x188cf0, Func Offset: 0x30
}

