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
// Start address: 0x1894c0
int texSlotInit()
{
	int sid;
	int i;
	// Line 19, Address: 0x1894c0, Func Offset: 0
	// Line 22, Address: 0x1894d4, Func Offset: 0x14
	// Line 23, Address: 0x1894e0, Func Offset: 0x20
	// Line 24, Address: 0x1894fc, Func Offset: 0x3c
	// Line 25, Address: 0x189514, Func Offset: 0x54
	// Line 26, Address: 0x189520, Func Offset: 0x60
	// Line 27, Address: 0x189530, Func Offset: 0x70
	// Line 28, Address: 0x189538, Func Offset: 0x78
	// Line 31, Address: 0x189548, Func Offset: 0x88
	// Line 32, Address: 0x18955c, Func Offset: 0x9c
	// Line 33, Address: 0x189560, Func Offset: 0xa0
	// Func End, Address: 0x18957c, Func Offset: 0xbc
}

// 
// Start address: 0x189580
int texSlotBeginToUse(int slot)
{
	// Line 36, Address: 0x189580, Func Offset: 0
	// Line 37, Address: 0x189588, Func Offset: 0x8
	// Line 38, Address: 0x1895a0, Func Offset: 0x20
	// Line 39, Address: 0x1895bc, Func Offset: 0x3c
	// Line 41, Address: 0x1895c8, Func Offset: 0x48
	// Line 42, Address: 0x1895cc, Func Offset: 0x4c
	// Func End, Address: 0x1895dc, Func Offset: 0x5c
}

// 
// Start address: 0x1895e0
int texSlotFinishToUse(int slot)
{
	// Line 45, Address: 0x1895e0, Func Offset: 0
	// Line 46, Address: 0x1895e8, Func Offset: 0x8
	// Line 47, Address: 0x189600, Func Offset: 0x20
	// Line 48, Address: 0x18961c, Func Offset: 0x3c
	// Line 50, Address: 0x189628, Func Offset: 0x48
	// Line 51, Address: 0x18962c, Func Offset: 0x4c
	// Func End, Address: 0x18963c, Func Offset: 0x5c
}

// 
// Start address: 0x189640
int texSlotGetCurTexID(int slot)
{
	// Line 55, Address: 0x189640, Func Offset: 0
	// Line 56, Address: 0x189658, Func Offset: 0x18
	// Line 58, Address: 0x189674, Func Offset: 0x34
	// Line 59, Address: 0x189678, Func Offset: 0x38
	// Func End, Address: 0x189680, Func Offset: 0x40
}

// 
// Start address: 0x189680
int texSlotSetCurTexID(int slot, int texid)
{
	// Line 63, Address: 0x189680, Func Offset: 0
	// Line 64, Address: 0x189698, Func Offset: 0x18
	// Line 66, Address: 0x1896b8, Func Offset: 0x38
	// Line 67, Address: 0x1896bc, Func Offset: 0x3c
	// Func End, Address: 0x1896c4, Func Offset: 0x44
}

// 
// Start address: 0x1896d0
int texSlotClearAll()
{
	int i;
	// Line 70, Address: 0x1896d0, Func Offset: 0
	// Line 72, Address: 0x1896dc, Func Offset: 0xc
	// Line 73, Address: 0x1896e8, Func Offset: 0x18
	// Line 74, Address: 0x1896f8, Func Offset: 0x28
	// Line 75, Address: 0x18970c, Func Offset: 0x3c
	// Line 76, Address: 0x189710, Func Offset: 0x40
	// Func End, Address: 0x189724, Func Offset: 0x54
}

