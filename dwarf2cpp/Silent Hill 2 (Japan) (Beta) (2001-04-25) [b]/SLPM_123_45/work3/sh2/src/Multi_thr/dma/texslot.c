typedef struct texSlotCtrlT;


typedef texSlotCtrlT type[5];

struct texSlotCtrlT
{
	int init;
	int sid;
	int cur_texid;
	int padding;
};

texSlotCtrlT texSlotCtrl[5];

int texSlotInit();
int texSlotBeginToUse(int slot);
int texSlotFinishToUse(int slot);
int texSlotGetCurTexID(int slot);
int texSlotSetCurTexID(int slot, int texid);
int texSlotClearAll();

// 
// Start address: 0x18fb00
int texSlotInit()
{
	int sid;
	int i;
	// Line 19, Address: 0x18fb00, Func Offset: 0
	// Line 22, Address: 0x18fb10, Func Offset: 0x10
	// Line 23, Address: 0x18fb1c, Func Offset: 0x1c
	// Line 24, Address: 0x18fb38, Func Offset: 0x38
	// Line 25, Address: 0x18fb54, Func Offset: 0x54
	// Line 26, Address: 0x18fb60, Func Offset: 0x60
	// Line 27, Address: 0x18fb74, Func Offset: 0x74
	// Line 28, Address: 0x18fb8c, Func Offset: 0x8c
	// Line 29, Address: 0x18fba4, Func Offset: 0xa4
	// Line 31, Address: 0x18fba8, Func Offset: 0xa8
	// Line 32, Address: 0x18fbbc, Func Offset: 0xbc
	// Line 33, Address: 0x18fbc0, Func Offset: 0xc0
	// Func End, Address: 0x18fbd8, Func Offset: 0xd8
}

// 
// Start address: 0x18fbe0
int texSlotBeginToUse(int slot)
{
	// Line 36, Address: 0x18fbe0, Func Offset: 0
	// Line 37, Address: 0x18fbec, Func Offset: 0xc
	// Line 38, Address: 0x18fc0c, Func Offset: 0x2c
	// Line 39, Address: 0x18fc2c, Func Offset: 0x4c
	// Line 41, Address: 0x18fc38, Func Offset: 0x58
	// Line 42, Address: 0x18fc3c, Func Offset: 0x5c
	// Func End, Address: 0x18fc4c, Func Offset: 0x6c
}

// 
// Start address: 0x18fc50
int texSlotFinishToUse(int slot)
{
	// Line 45, Address: 0x18fc50, Func Offset: 0
	// Line 46, Address: 0x18fc5c, Func Offset: 0xc
	// Line 47, Address: 0x18fc7c, Func Offset: 0x2c
	// Line 48, Address: 0x18fc9c, Func Offset: 0x4c
	// Line 50, Address: 0x18fca8, Func Offset: 0x58
	// Line 51, Address: 0x18fcac, Func Offset: 0x5c
	// Func End, Address: 0x18fcbc, Func Offset: 0x6c
}

// 
// Start address: 0x18fcc0
int texSlotGetCurTexID(int slot)
{
	// Line 54, Address: 0x18fcc0, Func Offset: 0
	// Line 55, Address: 0x18fcc8, Func Offset: 0x8
	// Line 56, Address: 0x18fce8, Func Offset: 0x28
	// Line 58, Address: 0x18fd08, Func Offset: 0x48
	// Line 59, Address: 0x18fd0c, Func Offset: 0x4c
	// Func End, Address: 0x18fd18, Func Offset: 0x58
}

// 
// Start address: 0x18fd20
int texSlotSetCurTexID(int slot, int texid)
{
	// Line 62, Address: 0x18fd20, Func Offset: 0
	// Line 63, Address: 0x18fd2c, Func Offset: 0xc
	// Line 64, Address: 0x18fd4c, Func Offset: 0x2c
	// Line 66, Address: 0x18fd70, Func Offset: 0x50
	// Line 67, Address: 0x18fd74, Func Offset: 0x54
	// Func End, Address: 0x18fd80, Func Offset: 0x60
}

// 
// Start address: 0x18fd80
int texSlotClearAll()
{
	int i;
	// Line 70, Address: 0x18fd80, Func Offset: 0
	// Line 72, Address: 0x18fd8c, Func Offset: 0xc
	// Line 73, Address: 0x18fd98, Func Offset: 0x18
	// Line 74, Address: 0x18fda8, Func Offset: 0x28
	// Line 75, Address: 0x18fdbc, Func Offset: 0x3c
	// Line 76, Address: 0x18fdc0, Func Offset: 0x40
	// Func End, Address: 0x18fdd4, Func Offset: 0x54
}

