typedef struct EnemyEventDriveData;
typedef struct EnemyEventDriveChangeStepData;
typedef struct sfObj;
typedef union _anon0;
typedef struct sfAllocateList2;
typedef struct EnemyEventDriveWork;

typedef void(*type_0)(void*, int);
typedef int(*type_1)(void*);
typedef void(*type_2)(void*, int);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_11)(void*, int);
typedef void(*type_13)(void*, int);

typedef _anon0 type_3[256];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef float type_10[1];
typedef int type_12[1];

struct EnemyEventDriveData
{
	int(*test_func)(void*);
	void(*exec_func)(void*, int);
	void* test_data;
	void* exec_data;
};

struct EnemyEventDriveChangeStepData
{
	sfObj* obj;
	int step;
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon0
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct sfAllocateList2
{
	char* work_top;
	unsigned int size;
	unsigned int lsize;
	int number;
};

struct EnemyEventDriveWork
{
	sfAllocateList2 work_list;
	sfAllocateList2 work_list_cs;
};

EnemyEventDriveWork en_event_drive_work;
void(*EnemyEDChangeStep)(void*, int);
void(*EnemyEDNextSubStep)(void*, int);
void(*EnemyEDPrevSubStep)(void*, int);

void EnemyEventDriveWorkInit();
void EnemyEventSet(int(*test_func)(void*), void* test_data, void(*exec_func)(void*, int), void* exec_data);
void EnemyEDChangeStep(void* exec_data);
void EnemyEDNextSubStep(void* obj);
void EnemyEDPrevSubStep(void* obj);
void EnemyEventSetChangeStep(int(*test_func)(void*), void* test_data, void* obj, int step);
void EnemyEventSetNextSubStep(int(*test_func)(void*), void* test_data, void* obj);
void EnemyEventSetPrevSubStep(int(*test_func)(void*), void* test_data, void* obj);
void EnemyEventAnnul(int(*test_func)(void*), void* test_data);
void EnemyEventDriveWorkAllDestruct();
void EnemyEventDriven();

// 
// Start address: 0x1de890
void EnemyEventDriveWorkInit()
{
	// Line 38, Address: 0x1de890, Func Offset: 0
	// Line 39, Address: 0x1de894, Func Offset: 0x4
	// Line 38, Address: 0x1de898, Func Offset: 0x8
	// Line 39, Address: 0x1de89c, Func Offset: 0xc
	// Line 41, Address: 0x1de8a8, Func Offset: 0x18
	// Line 43, Address: 0x1de8b8, Func Offset: 0x28
	// Func End, Address: 0x1de8c4, Func Offset: 0x34
}

// 
// Start address: 0x1de8d0
void EnemyEventSet(int(*test_func)(void*), void* test_data, void(*exec_func)(void*, int), void* exec_data)
{
	EnemyEventDriveData* ped;
	// Line 61, Address: 0x1de8d0, Func Offset: 0
	// Line 63, Address: 0x1de8e8, Func Offset: 0x18
	// Line 61, Address: 0x1de8ec, Func Offset: 0x1c
	// Line 63, Address: 0x1de8fc, Func Offset: 0x2c
	// Line 64, Address: 0x1de904, Func Offset: 0x34
	// Line 65, Address: 0x1de90c, Func Offset: 0x3c
	// Line 66, Address: 0x1de910, Func Offset: 0x40
	// Line 67, Address: 0x1de914, Func Offset: 0x44
	// Line 68, Address: 0x1de918, Func Offset: 0x48
	// Line 69, Address: 0x1de91c, Func Offset: 0x4c
	// Func End, Address: 0x1de93c, Func Offset: 0x6c
}

// 
// Start address: 0x1de940
void EnemyEDChangeStep(void* exec_data)
{
	EnemyEventDriveChangeStepData* csd;
	// Line 73, Address: 0x1de940, Func Offset: 0
	// Line 74, Address: 0x1de94c, Func Offset: 0xc
	// Line 75, Address: 0x1de950, Func Offset: 0x10
	// Line 76, Address: 0x1de960, Func Offset: 0x20
	// Line 77, Address: 0x1de96c, Func Offset: 0x2c
	// Func End, Address: 0x1de980, Func Offset: 0x40
}

// 
// Start address: 0x1de980
void EnemyEDNextSubStep(void* obj)
{
	// Line 81, Address: 0x1de980, Func Offset: 0
	// Line 82, Address: 0x1de98c, Func Offset: 0xc
	// Line 83, Address: 0x1de99c, Func Offset: 0x1c
	// Line 84, Address: 0x1de9a4, Func Offset: 0x24
	// Func End, Address: 0x1de9b8, Func Offset: 0x38
}

// 
// Start address: 0x1de9c0
void EnemyEDPrevSubStep(void* obj)
{
	// Line 88, Address: 0x1de9c0, Func Offset: 0
	// Line 89, Address: 0x1de9cc, Func Offset: 0xc
	// Line 90, Address: 0x1de9dc, Func Offset: 0x1c
	// Line 91, Address: 0x1de9e4, Func Offset: 0x24
	// Func End, Address: 0x1de9f8, Func Offset: 0x38
}

// 
// Start address: 0x1dea00
void EnemyEventSetChangeStep(int(*test_func)(void*), void* test_data, void* obj, int step)
{
	EnemyEventDriveChangeStepData* csd;
	// Line 103, Address: 0x1dea00, Func Offset: 0
	// Line 105, Address: 0x1dea18, Func Offset: 0x18
	// Line 103, Address: 0x1dea1c, Func Offset: 0x1c
	// Line 105, Address: 0x1dea2c, Func Offset: 0x2c
	// Line 106, Address: 0x1dea38, Func Offset: 0x38
	// Line 107, Address: 0x1dea40, Func Offset: 0x40
	// Line 109, Address: 0x1dea44, Func Offset: 0x44
	// Line 108, Address: 0x1dea4c, Func Offset: 0x4c
	// Line 109, Address: 0x1dea50, Func Offset: 0x50
	// Line 110, Address: 0x1dea5c, Func Offset: 0x5c
	// Func End, Address: 0x1dea7c, Func Offset: 0x7c
}

// 
// Start address: 0x1dea80
void EnemyEventSetNextSubStep(int(*test_func)(void*), void* test_data, void* obj)
{
	// Line 122, Address: 0x1dea84, Func Offset: 0x4
	// Func End, Address: 0x1dea90, Func Offset: 0x10
}

// 
// Start address: 0x1dea90
void EnemyEventSetPrevSubStep(int(*test_func)(void*), void* test_data, void* obj)
{
	// Line 135, Address: 0x1dea94, Func Offset: 0x4
	// Func End, Address: 0x1deaa0, Func Offset: 0x10
}

// 
// Start address: 0x1deaa0
void EnemyEventAnnul(int(*test_func)(void*), void* test_data)
{
	EnemyEventDriveData* ped;
	EnemyEventDriveData* pnext;
	// Line 145, Address: 0x1deaa0, Func Offset: 0
	// Line 147, Address: 0x1deab4, Func Offset: 0x14
	// Line 145, Address: 0x1deab8, Func Offset: 0x18
	// Line 147, Address: 0x1deac0, Func Offset: 0x20
	// Line 148, Address: 0x1dead0, Func Offset: 0x30
	// Line 149, Address: 0x1dead8, Func Offset: 0x38
	// Line 150, Address: 0x1deae8, Func Offset: 0x48
	// Line 151, Address: 0x1deb00, Func Offset: 0x60
	// Line 152, Address: 0x1deb0c, Func Offset: 0x6c
	// Line 154, Address: 0x1deb10, Func Offset: 0x70
	// Line 155, Address: 0x1deb18, Func Offset: 0x78
	// Func End, Address: 0x1deb34, Func Offset: 0x94
}

// 
// Start address: 0x1deb40
void EnemyEventDriveWorkAllDestruct()
{
	// Line 160, Address: 0x1deb40, Func Offset: 0
	// Line 161, Address: 0x1deb44, Func Offset: 0x4
	// Line 160, Address: 0x1deb48, Func Offset: 0x8
	// Line 161, Address: 0x1deb4c, Func Offset: 0xc
	// Line 162, Address: 0x1deb54, Func Offset: 0x14
	// Line 163, Address: 0x1deb60, Func Offset: 0x20
	// Func End, Address: 0x1deb6c, Func Offset: 0x2c
}

// 
// Start address: 0x1deb70
void EnemyEventDriven()
{
	EnemyEventDriveData* ped;
	EnemyEventDriveData* pnext;
	int r;
	// Line 171, Address: 0x1deb70, Func Offset: 0
	// Line 174, Address: 0x1deb74, Func Offset: 0x4
	// Line 171, Address: 0x1deb78, Func Offset: 0x8
	// Line 174, Address: 0x1deb7c, Func Offset: 0xc
	// Line 171, Address: 0x1deb80, Func Offset: 0x10
	// Line 174, Address: 0x1deb84, Func Offset: 0x14
	// Line 175, Address: 0x1deb90, Func Offset: 0x20
	// Line 179, Address: 0x1deb9c, Func Offset: 0x2c
	// Line 181, Address: 0x1debb8, Func Offset: 0x48
	// Line 182, Address: 0x1debc0, Func Offset: 0x50
	// Line 183, Address: 0x1debcc, Func Offset: 0x5c
	// Line 184, Address: 0x1debd0, Func Offset: 0x60
	// Line 185, Address: 0x1debe0, Func Offset: 0x70
	// Line 184, Address: 0x1debe4, Func Offset: 0x74
	// Line 185, Address: 0x1debe8, Func Offset: 0x78
	// Line 187, Address: 0x1debf4, Func Offset: 0x84
	// Line 188, Address: 0x1dec00, Func Offset: 0x90
	// Line 189, Address: 0x1dec0c, Func Offset: 0x9c
	// Func End, Address: 0x1dec20, Func Offset: 0xb0
}

