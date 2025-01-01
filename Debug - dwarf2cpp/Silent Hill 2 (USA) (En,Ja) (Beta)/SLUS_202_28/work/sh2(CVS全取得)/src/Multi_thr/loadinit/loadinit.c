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
// Start address: 0x221e60
int lisInit(int th_prio, void* stack, int stackSize, void* queue, int queueSize)
{
	int ret;
	// Line 31, Address: 0x221e60, Func Offset: 0
	// Line 32, Address: 0x221e7c, Func Offset: 0x1c
	// Line 33, Address: 0x221e80, Func Offset: 0x20
	// Line 34, Address: 0x221e90, Func Offset: 0x30
	// Line 35, Address: 0x221eac, Func Offset: 0x4c
	// Line 36, Address: 0x221eb4, Func Offset: 0x54
	// Line 40, Address: 0x221ebc, Func Offset: 0x5c
	// Func End, Address: 0x221ed0, Func Offset: 0x70
}

// 
// Start address: 0x221ed0
int lisSync(int mode, int cid)
{
	int ret;
	// Line 58, Address: 0x221ed0, Func Offset: 0
	// Line 59, Address: 0x221ee0, Func Offset: 0x10
	// Line 60, Address: 0x221ee4, Func Offset: 0x14
	// Line 61, Address: 0x221ef4, Func Offset: 0x24
	// Line 64, Address: 0x221f00, Func Offset: 0x30
	// Func End, Address: 0x221f10, Func Offset: 0x40
}

// 
// Start address: 0x221f10
int lisGetStat(CmdServStat* stat)
{
	int ret;
	// Line 96, Address: 0x221f10, Func Offset: 0
	// Line 99, Address: 0x221f1c, Func Offset: 0xc
	// Line 102, Address: 0x221f40, Func Offset: 0x30
	// Func End, Address: 0x221f50, Func Offset: 0x40
}

// 
// Start address: 0x221f50
int lisPutCmd0(int(*f0)())
{
	int ret;
	// Line 131, Address: 0x221f50, Func Offset: 0
	// Line 132, Address: 0x221f5c, Func Offset: 0xc
	// Line 133, Address: 0x221f60, Func Offset: 0x10
	// Line 134, Address: 0x221f70, Func Offset: 0x20
	// Line 138, Address: 0x221f78, Func Offset: 0x28
	// Func End, Address: 0x221f88, Func Offset: 0x38
}

