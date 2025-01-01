typedef struct _shTskTASK;
typedef struct _shTskTASKENTRY;
typedef struct _shTskEXECUTE;

typedef void(*type_0)(void*);
typedef void(*type_1)(void*);
typedef void(*type_2)(void*);
typedef void(*type_5)(void*);

typedef unsigned char type_3[492];
typedef _shTskTASK* type_4[8];

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
};

struct _shTskTASKENTRY
{
	_shTskTASK* task;
	int taskatr;
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

int shTskTaskEmptyNum;
int shTskTaskMax;
_shTskTASK* shTskTaskEmptyTop;
_shTskTASK* shTskTaskListTop[8];

void shTSKInitTaskList(unsigned char* buffer, unsigned int size);
_shTskTASK* shTSKSetTask(void(*func)(void*), unsigned char num);
_shTskTASK* shTSKSetTaskPrev(_shTskTASK* task, void(*func)(void*));
void shTSKDelTask(_shTskTASK* task);
_shTskTASK* shTSKCutTask(_shTskTASK* task);
void shTSKExecuteTask(unsigned char num);
_shTskTASK* shTSKSearchTaskWithAtr(int atr, _shTskTASK* start, unsigned char num);
void shTSKFreeTaskLine(unsigned char num);

// 
// Start address: 0x19a0e0
void shTSKInitTaskList(unsigned char* buffer, unsigned int size)
{
	int i;
	int* cptr;
	_shTskTASK* ptr;
	// Line 36, Address: 0x19a0e0, Func Offset: 0
	// Line 41, Address: 0x19a0f8, Func Offset: 0x18
	// Line 43, Address: 0x19a10c, Func Offset: 0x2c
	// Line 44, Address: 0x19a110, Func Offset: 0x30
	// Line 45, Address: 0x19a114, Func Offset: 0x34
	// Line 46, Address: 0x19a134, Func Offset: 0x54
	// Line 48, Address: 0x19a154, Func Offset: 0x74
	// Line 50, Address: 0x19a160, Func Offset: 0x80
	// Line 51, Address: 0x19a17c, Func Offset: 0x9c
	// Line 52, Address: 0x19a1a8, Func Offset: 0xc8
	// Line 53, Address: 0x19a1d4, Func Offset: 0xf4
	// Line 55, Address: 0x19a1e4, Func Offset: 0x104
	// Line 56, Address: 0x19a1e8, Func Offset: 0x108
	// Line 57, Address: 0x19a1f0, Func Offset: 0x110
	// Line 59, Address: 0x19a1fc, Func Offset: 0x11c
	// Line 60, Address: 0x19a204, Func Offset: 0x124
	// Line 61, Address: 0x19a208, Func Offset: 0x128
	// Line 62, Address: 0x19a228, Func Offset: 0x148
	// Line 63, Address: 0x19a22c, Func Offset: 0x14c
	// Line 65, Address: 0x19a230, Func Offset: 0x150
	// Line 66, Address: 0x19a244, Func Offset: 0x164
	// Func End, Address: 0x19a25c, Func Offset: 0x17c
}

// 
// Start address: 0x19a260
_shTskTASK* shTSKSetTask(void(*func)(void*), unsigned char num)
{
	// Line 85, Address: 0x19a260, Func Offset: 0
	// Line 86, Address: 0x19a270, Func Offset: 0x10
	// Line 87, Address: 0x19a298, Func Offset: 0x38
	// Func End, Address: 0x19a2a8, Func Offset: 0x48
}

// 
// Start address: 0x19a2b0
_shTskTASK* shTSKSetTaskPrev(_shTskTASK* task, void(*func)(void*))
{
	_shTskTASK* b;
	_shTskTASK* a;
	// Line 155, Address: 0x19a2b0, Func Offset: 0
	// Line 159, Address: 0x19a2c4, Func Offset: 0x14
	// Line 161, Address: 0x19a2d4, Func Offset: 0x24
	// Line 162, Address: 0x19a2dc, Func Offset: 0x2c
	// Line 163, Address: 0x19a2e4, Func Offset: 0x34
	// Line 164, Address: 0x19a2f0, Func Offset: 0x40
	// Line 165, Address: 0x19a304, Func Offset: 0x54
	// Line 166, Address: 0x19a308, Func Offset: 0x58
	// Line 167, Address: 0x19a310, Func Offset: 0x60
	// Line 168, Address: 0x19a318, Func Offset: 0x68
	// Line 169, Address: 0x19a31c, Func Offset: 0x6c
	// Line 170, Address: 0x19a320, Func Offset: 0x70
	// Line 171, Address: 0x19a328, Func Offset: 0x78
	// Line 172, Address: 0x19a32c, Func Offset: 0x7c
	// Line 174, Address: 0x19a334, Func Offset: 0x84
	// Line 175, Address: 0x19a338, Func Offset: 0x88
	// Line 176, Address: 0x19a33c, Func Offset: 0x8c
	// Func End, Address: 0x19a350, Func Offset: 0xa0
}

// 
// Start address: 0x19a350
void shTSKDelTask(_shTskTASK* task)
{
	// Line 193, Address: 0x19a350, Func Offset: 0
	// Line 194, Address: 0x19a358, Func Offset: 0x8
	// Line 195, Address: 0x19a360, Func Offset: 0x10
	// Func End, Address: 0x19a36c, Func Offset: 0x1c
}

// 
// Start address: 0x19a370
_shTskTASK* shTSKCutTask(_shTskTASK* task)
{
	_shTskTASK* b;
	_shTskTASK* a;
	// Line 217, Address: 0x19a370, Func Offset: 0
	// Line 221, Address: 0x19a380, Func Offset: 0x10
	// Line 222, Address: 0x19a388, Func Offset: 0x18
	// Line 223, Address: 0x19a390, Func Offset: 0x20
	// Line 224, Address: 0x19a394, Func Offset: 0x24
	// Line 225, Address: 0x19a398, Func Offset: 0x28
	// Line 226, Address: 0x19a3a0, Func Offset: 0x30
	// Line 227, Address: 0x19a3b0, Func Offset: 0x40
	// Line 228, Address: 0x19a3bc, Func Offset: 0x4c
	// Line 230, Address: 0x19a3d0, Func Offset: 0x60
	// Line 231, Address: 0x19a3d4, Func Offset: 0x64
	// Func End, Address: 0x19a3e8, Func Offset: 0x78
}

// 
// Start address: 0x19a3f0
void shTSKExecuteTask(unsigned char num)
{
	_shTskTASK* ptr;
	// Line 248, Address: 0x19a3f0, Func Offset: 0
	// Line 251, Address: 0x19a400, Func Offset: 0x10
	// Line 253, Address: 0x19a420, Func Offset: 0x30
	// Line 255, Address: 0x19a428, Func Offset: 0x38
	// Line 256, Address: 0x19a434, Func Offset: 0x44
	// Line 259, Address: 0x19a44c, Func Offset: 0x5c
	// Line 260, Address: 0x19a45c, Func Offset: 0x6c
	// Line 261, Address: 0x19a464, Func Offset: 0x74
	// Line 262, Address: 0x19a468, Func Offset: 0x78
	// Line 263, Address: 0x19a48c, Func Offset: 0x9c
	// Func End, Address: 0x19a4a0, Func Offset: 0xb0
}

// 
// Start address: 0x19a4a0
_shTskTASK* shTSKSearchTaskWithAtr(int atr, _shTskTASK* start, unsigned char num)
{
	_shTskTASK* ptr;
	// Line 377, Address: 0x19a4a0, Func Offset: 0
	// Line 380, Address: 0x19a4b4, Func Offset: 0x14
	// Line 381, Address: 0x19a4b8, Func Offset: 0x18
	// Line 383, Address: 0x19a4c0, Func Offset: 0x20
	// Line 384, Address: 0x19a4d0, Func Offset: 0x30
	// Line 385, Address: 0x19a4dc, Func Offset: 0x3c
	// Line 386, Address: 0x19a4e4, Func Offset: 0x44
	// Line 387, Address: 0x19a50c, Func Offset: 0x6c
	// Line 388, Address: 0x19a510, Func Offset: 0x70
	// Func End, Address: 0x19a520, Func Offset: 0x80
}

// 
// Start address: 0x19a520
void shTSKFreeTaskLine(unsigned char num)
{
	_shTskTASK* ptr;
	// Line 435, Address: 0x19a520, Func Offset: 0
	// Line 438, Address: 0x19a530, Func Offset: 0x10
	// Line 439, Address: 0x19a550, Func Offset: 0x30
	// Line 440, Address: 0x19a558, Func Offset: 0x38
	// Line 441, Address: 0x19a58c, Func Offset: 0x6c
	// Func End, Address: 0x19a5a0, Func Offset: 0x80
}

