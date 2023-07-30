

typedef char* type[32];

unsigned int dbflag_reserved;
char* dbflag_explain[32];
int execEnv_debug_flag;

unsigned int dbFlag(unsigned int flag);
void dbFlagSet(unsigned int flag);
void dbFlagXor(unsigned int flag);

// 
// Start address: 0x1d2f80
unsigned int dbFlag(unsigned int flag)
{
	// Line 70, Address: 0x1d2f80, Func Offset: 0
	// Line 71, Address: 0x1d2f88, Func Offset: 0x8
	// Line 72, Address: 0x1d2f98, Func Offset: 0x18
	// Func End, Address: 0x1d2fa4, Func Offset: 0x24
}

// 
// Start address: 0x1d2fb0
void dbFlagSet(unsigned int flag)
{
	// Line 75, Address: 0x1d2fb0, Func Offset: 0
	// Line 76, Address: 0x1d2fb8, Func Offset: 0x8
	// Line 77, Address: 0x1d2fd0, Func Offset: 0x20
	// Func End, Address: 0x1d2fdc, Func Offset: 0x2c
}

// 
// Start address: 0x1d2fe0
void dbFlagXor(unsigned int flag)
{
	// Line 85, Address: 0x1d2fe0, Func Offset: 0
	// Line 86, Address: 0x1d2fe8, Func Offset: 0x8
	// Line 87, Address: 0x1d3000, Func Offset: 0x20
	// Func End, Address: 0x1d300c, Func Offset: 0x2c
}

