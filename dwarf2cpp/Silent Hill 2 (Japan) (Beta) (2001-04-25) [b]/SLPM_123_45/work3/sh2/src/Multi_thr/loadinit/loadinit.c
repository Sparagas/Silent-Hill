typedef struct CmdServStat;

typedef int(*type_0)();
typedef int(*type_1)();
typedef int(*type_2)();
typedef int(*type_3)();
typedef int(*type_4)();
typedef int(*type_5)();
typedef int(*type_6)();


struct CmdServStat
{
	int qsize;
	int qlen;
	int id;
	int last_id;
	int clen;
};

void* lisCmdWorkP;

int lisInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize);
int lisSync(int mode, int cid);
int lisGetStat(CmdServStat* stat);
int lisPutCmd0(int(*f0)());

// 
// Start address: 0x21fb80
int lisInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 31, Address: 0x21fb80, Func Offset: 0
	// Line 32, Address: 0x21fba0, Func Offset: 0x20
	// Line 33, Address: 0x21fba4, Func Offset: 0x24
	// Line 34, Address: 0x21fbb4, Func Offset: 0x34
	// Line 35, Address: 0x21fbd4, Func Offset: 0x54
	// Line 36, Address: 0x21fbdc, Func Offset: 0x5c
	// Line 39, Address: 0x21fbe8, Func Offset: 0x68
	// Line 40, Address: 0x21fbec, Func Offset: 0x6c
	// Func End, Address: 0x21fc00, Func Offset: 0x80
}

// 
// Start address: 0x21fc00
int lisSync(int mode, int cid)
{
	int ret;
	// Line 58, Address: 0x21fc00, Func Offset: 0
	// Line 59, Address: 0x21fc14, Func Offset: 0x14
	// Line 60, Address: 0x21fc18, Func Offset: 0x18
	// Line 61, Address: 0x21fc28, Func Offset: 0x28
	// Line 63, Address: 0x21fc44, Func Offset: 0x44
	// Line 64, Address: 0x21fc48, Func Offset: 0x48
	// Func End, Address: 0x21fc5c, Func Offset: 0x5c
}

// 
// Start address: 0x21fc60
int lisGetStat(CmdServStat* stat)
{
	int ret;
	// Line 96, Address: 0x21fc60, Func Offset: 0
	// Line 97, Address: 0x21fc70, Func Offset: 0x10
	// Line 98, Address: 0x21fc74, Func Offset: 0x14
	// Line 99, Address: 0x21fc84, Func Offset: 0x24
	// Line 101, Address: 0x21fca0, Func Offset: 0x40
	// Line 102, Address: 0x21fca4, Func Offset: 0x44
	// Func End, Address: 0x21fcb8, Func Offset: 0x58
}

// 
// Start address: 0x21fcc0
int lisPutCmd0(int(*f0)())
{
	int ret;
	// Line 131, Address: 0x21fcc0, Func Offset: 0
	// Line 132, Address: 0x21fcd0, Func Offset: 0x10
	// Line 133, Address: 0x21fcd4, Func Offset: 0x14
	// Line 134, Address: 0x21fce4, Func Offset: 0x24
	// Line 137, Address: 0x21fcfc, Func Offset: 0x3c
	// Line 138, Address: 0x21fd00, Func Offset: 0x40
	// Func End, Address: 0x21fd14, Func Offset: 0x54
}

