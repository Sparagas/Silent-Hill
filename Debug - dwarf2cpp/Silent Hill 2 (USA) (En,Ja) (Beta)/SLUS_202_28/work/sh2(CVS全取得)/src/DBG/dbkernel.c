typedef struct ThreadParam;
typedef struct SemaParam;

typedef int(*type_0)(char*);
typedef int(*type_1)();
typedef int(*type_4)(char*);

typedef char type_2[256];
typedef char type_3[256];

struct ThreadParam
{
	int status;
	void* entry;
	void* stack;
	int stackSize;
	void* gpReg;
	int initPriority;
	int currentPriority;
	unsigned int attr;
	unsigned int option;
	int waitType;
	int waitId;
	int wakeupCount;
};

struct SemaParam
{
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	unsigned int attr;
	unsigned int option;
};

int(*printf)(char*);
int(*dbfntprintf)(char*);

int ___dbPrintThre(int tid);
void ___dbPrintThreAll(int(*printf)());
void dbScrPrintThreAll();

// 
// Start address: 0x1cd830
int ___dbPrintThre(int tid)
{
	char* help;
	ThreadParam thre;
	char str[256];
	int ret;
	// Line 55, Address: 0x1cd830, Func Offset: 0
	// Line 59, Address: 0x1cd83c, Func Offset: 0xc
	// Line 60, Address: 0x1cd84c, Func Offset: 0x1c
	// Line 62, Address: 0x1cd854, Func Offset: 0x24
	// Line 63, Address: 0x1cd860, Func Offset: 0x30
	// Line 68, Address: 0x1cd8b0, Func Offset: 0x80
	// Line 69, Address: 0x1cd8b8, Func Offset: 0x88
	// Line 70, Address: 0x1cd8c8, Func Offset: 0x98
	// Line 79, Address: 0x1cd8cc, Func Offset: 0x9c
	// Line 80, Address: 0x1cd8d0, Func Offset: 0xa0
	// Func End, Address: 0x1cd8e4, Func Offset: 0xb4
}

// 
// Start address: 0x1cd8f0
void ___dbPrintThreAll(int(*printf)())
{
	int count;
	int tid;
	// Line 83, Address: 0x1cd8f0, Func Offset: 0
	// Line 86, Address: 0x1cd908, Func Offset: 0x18
	// Line 87, Address: 0x1cd90c, Func Offset: 0x1c
	// Line 90, Address: 0x1cd918, Func Offset: 0x28
	// Line 91, Address: 0x1cd938, Func Offset: 0x48
	// Line 93, Address: 0x1cd94c, Func Offset: 0x5c
	// Func End, Address: 0x1cd968, Func Offset: 0x78
}

// 
// Start address: 0x1cd970
void dbScrPrintThreAll()
{
	// Line 101, Address: 0x1cd970, Func Offset: 0
	// Line 102, Address: 0x1cd978, Func Offset: 0x8
	// Line 103, Address: 0x1cd988, Func Offset: 0x18
	// Line 104, Address: 0x1cd998, Func Offset: 0x28
	// Func End, Address: 0x1cd9a8, Func Offset: 0x38
}

