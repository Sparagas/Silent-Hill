typedef struct _shTskTASKENTRY;
typedef struct _shTskTASK;
typedef struct _shTskEXECUTE;

typedef void(*type_1)(void*);
typedef void(*type_2)(void*);
typedef void(*type_3)(void*);
typedef void(*type_4)(void*);

typedef _shTskTASK* type_0[8];
typedef unsigned char type_5[492];

struct _shTskTASKENTRY
{
	_shTskTASK* task;
	int taskatr;
};

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
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
// Start address: 0x194eb0
void shTSKInitTaskList(unsigned char* buffer, unsigned int size)
{
	int i;
	int* cptr;
	_shTskTASK* ptr;
	// Line 41, Address: 0x194eb0, Func Offset: 0
	// Line 44, Address: 0x194ebc, Func Offset: 0xc
	// Line 45, Address: 0x194ec0, Func Offset: 0x10
	// Line 46, Address: 0x194edc, Func Offset: 0x2c
	// Line 48, Address: 0x194ef8, Func Offset: 0x48
	// Line 50, Address: 0x194f04, Func Offset: 0x54
	// Line 51, Address: 0x194f24, Func Offset: 0x74
	// Line 52, Address: 0x194f2c, Func Offset: 0x7c
	// Line 53, Address: 0x194f30, Func Offset: 0x80
	// Line 55, Address: 0x194f44, Func Offset: 0x94
	// Line 56, Address: 0x194f48, Func Offset: 0x98
	// Line 57, Address: 0x194f50, Func Offset: 0xa0
	// Line 59, Address: 0x194f5c, Func Offset: 0xac
	// Line 60, Address: 0x194f64, Func Offset: 0xb4
	// Line 61, Address: 0x194f68, Func Offset: 0xb8
	// Line 62, Address: 0x194f88, Func Offset: 0xd8
	// Line 63, Address: 0x194f8c, Func Offset: 0xdc
	// Line 65, Address: 0x194f90, Func Offset: 0xe0
	// Line 66, Address: 0x194fa4, Func Offset: 0xf4
	// Func End, Address: 0x194fac, Func Offset: 0xfc
}

// 
// Start address: 0x194fb0
_shTskTASK* shTSKSetTask(void(*func)(void*), unsigned char num)
{
	// Line 85, Address: 0x194fb0, Func Offset: 0
	// Line 86, Address: 0x194fbc, Func Offset: 0xc
	// Line 87, Address: 0x194fe0, Func Offset: 0x30
	// Func End, Address: 0x194ff0, Func Offset: 0x40
}

// 
// Start address: 0x194ff0
_shTskTASK* shTSKSetTaskPrev(_shTskTASK* task, void(*func)(void*))
{
	_shTskTASK* b;
	_shTskTASK* a;
	// Line 159, Address: 0x194ff0, Func Offset: 0
	// Line 161, Address: 0x195000, Func Offset: 0x10
	// Line 162, Address: 0x195008, Func Offset: 0x18
	// Line 163, Address: 0x19500c, Func Offset: 0x1c
	// Line 164, Address: 0x195018, Func Offset: 0x28
	// Line 165, Address: 0x195024, Func Offset: 0x34
	// Line 166, Address: 0x195028, Func Offset: 0x38
	// Line 167, Address: 0x19502c, Func Offset: 0x3c
	// Line 168, Address: 0x195030, Func Offset: 0x40
	// Line 169, Address: 0x195034, Func Offset: 0x44
	// Line 170, Address: 0x195038, Func Offset: 0x48
	// Line 171, Address: 0x19503c, Func Offset: 0x4c
	// Line 172, Address: 0x195040, Func Offset: 0x50
	// Line 174, Address: 0x195048, Func Offset: 0x58
	// Line 176, Address: 0x19504c, Func Offset: 0x5c
	// Func End, Address: 0x195054, Func Offset: 0x64
}

// 
// Start address: 0x195060
void shTSKDelTask(_shTskTASK* task)
{
	// Line 194, Address: 0x195060, Func Offset: 0
	// Line 195, Address: 0x195064, Func Offset: 0x4
	// Func End, Address: 0x19506c, Func Offset: 0xc
}

// 
// Start address: 0x195070
_shTskTASK* shTSKCutTask(_shTskTASK* task)
{
	_shTskTASK* b;
	_shTskTASK* a;
	// Line 221, Address: 0x195070, Func Offset: 0
	// Line 222, Address: 0x195074, Func Offset: 0x4
	// Line 223, Address: 0x195078, Func Offset: 0x8
	// Line 224, Address: 0x19507c, Func Offset: 0xc
	// Line 225, Address: 0x195080, Func Offset: 0x10
	// Line 226, Address: 0x195084, Func Offset: 0x14
	// Line 227, Address: 0x195090, Func Offset: 0x20
	// Line 228, Address: 0x195098, Func Offset: 0x28
	// Line 231, Address: 0x1950ac, Func Offset: 0x3c
	// Func End, Address: 0x1950b4, Func Offset: 0x44
}

// 
// Start address: 0x1950c0
void shTSKExecuteTask(unsigned char num)
{
	_shTskTASK* ptr;
	// Line 248, Address: 0x1950c0, Func Offset: 0
	// Line 251, Address: 0x1950d0, Func Offset: 0x10
	// Line 253, Address: 0x1950ec, Func Offset: 0x2c
	// Line 255, Address: 0x1950f4, Func Offset: 0x34
	// Line 256, Address: 0x195100, Func Offset: 0x40
	// Line 259, Address: 0x195118, Func Offset: 0x58
	// Line 260, Address: 0x195124, Func Offset: 0x64
	// Line 262, Address: 0x19512c, Func Offset: 0x6c
	// Line 263, Address: 0x19513c, Func Offset: 0x7c
	// Func End, Address: 0x195154, Func Offset: 0x94
}

// 
// Start address: 0x195160
_shTskTASK* shTSKSearchTaskWithAtr(int atr, _shTskTASK* start, unsigned char num)
{
	_shTskTASK* ptr;
	// Line 381, Address: 0x195160, Func Offset: 0
	// Line 383, Address: 0x195168, Func Offset: 0x8
	// Line 384, Address: 0x195174, Func Offset: 0x14
	// Line 385, Address: 0x195180, Func Offset: 0x20
	// Line 386, Address: 0x195188, Func Offset: 0x28
	// Line 387, Address: 0x1951a8, Func Offset: 0x48
	// Line 388, Address: 0x1951ac, Func Offset: 0x4c
	// Func End, Address: 0x1951b4, Func Offset: 0x54
}

// 
// Start address: 0x1951c0
void shTSKFreeTaskLine(unsigned char num)
{
	_shTskTASK* ptr;
	// Line 435, Address: 0x1951c0, Func Offset: 0
	// Line 438, Address: 0x1951cc, Func Offset: 0xc
	// Line 439, Address: 0x1951e8, Func Offset: 0x28
	// Line 440, Address: 0x1951f0, Func Offset: 0x30
	// Line 441, Address: 0x195214, Func Offset: 0x54
	// Func End, Address: 0x195228, Func Offset: 0x68
}

