

typedef char* type[32];

unsigned int dbflag_reserved;
char* dbflag_explain[32];
int execEnv_debug_flag;

int dbFlagReserve(unsigned int flag, char* explain_message);
unsigned int dbFlag(unsigned int flag);
void dbFlagSet(unsigned int flag);

// 
// Start address: 0x1cd9b0
int dbFlagReserve(unsigned int flag, char* explain_message)
{
	char** explain;
	unsigned int check;
	// Line 38, Address: 0x1cd9b0, Func Offset: 0
	// Line 41, Address: 0x1cd9c8, Func Offset: 0x18
	// Line 44, Address: 0x1cd9dc, Func Offset: 0x2c
	// Line 46, Address: 0x1cd9f0, Func Offset: 0x40
	// Line 50, Address: 0x1cda0c, Func Offset: 0x5c
	// Line 51, Address: 0x1cda20, Func Offset: 0x70
	// Line 52, Address: 0x1cda34, Func Offset: 0x84
	// Line 55, Address: 0x1cda68, Func Offset: 0xb8
	// Line 56, Address: 0x1cda78, Func Offset: 0xc8
	// Line 58, Address: 0x1cda84, Func Offset: 0xd4
	// Line 59, Address: 0x1cda98, Func Offset: 0xe8
	// Line 60, Address: 0x1cdaa4, Func Offset: 0xf4
	// Line 61, Address: 0x1cdab8, Func Offset: 0x108
	// Line 62, Address: 0x1cdabc, Func Offset: 0x10c
	// Line 63, Address: 0x1cdac0, Func Offset: 0x110
	// Line 64, Address: 0x1cdad0, Func Offset: 0x120
	// Line 65, Address: 0x1cdae4, Func Offset: 0x134
	// Line 66, Address: 0x1cdae8, Func Offset: 0x138
	// Func End, Address: 0x1cdb00, Func Offset: 0x150
}

// 
// Start address: 0x1cdb00
unsigned int dbFlag(unsigned int flag)
{
	// Line 71, Address: 0x1cdb00, Func Offset: 0
	// Line 72, Address: 0x1cdb0c, Func Offset: 0xc
	// Func End, Address: 0x1cdb14, Func Offset: 0x14
}

// 
// Start address: 0x1cdb20
void dbFlagSet(unsigned int flag)
{
	// Line 76, Address: 0x1cdb20, Func Offset: 0
	// Line 77, Address: 0x1cdb34, Func Offset: 0x14
	// Func End, Address: 0x1cdb3c, Func Offset: 0x1c
}

