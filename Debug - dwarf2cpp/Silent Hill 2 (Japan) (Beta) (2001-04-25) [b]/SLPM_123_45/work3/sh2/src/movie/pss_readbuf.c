typedef struct _anon0;


typedef unsigned char type[327680];

struct _anon0
{
	unsigned char data[327680];
	int put;
	int count;
	int size;
};


void readBufCreate(_anon0* b);
void readBufDelete();
int readBufBeginPut(_anon0* b, unsigned char** ptr);
int readBufEndPut(_anon0* b, int size);
int readBufBeginGet(_anon0* b, unsigned char** ptr);
int readBufEndGet(_anon0* b, int size);

// 
// Start address: 0x239f70
void readBufCreate(_anon0* b)
{
	// Line 34, Address: 0x239f70, Func Offset: 0
	// Line 35, Address: 0x239f78, Func Offset: 0x8
	// Line 36, Address: 0x239f98, Func Offset: 0x28
	// Line 37, Address: 0x239fac, Func Offset: 0x3c
	// Func End, Address: 0x239fb8, Func Offset: 0x48
}

// 
// Start address: 0x239fc0
void readBufDelete()
{
	// Line 44, Address: 0x239fc0, Func Offset: 0
	// Line 45, Address: 0x239fc4, Func Offset: 0x4
	// Func End, Address: 0x239fd0, Func Offset: 0x10
}

// 
// Start address: 0x239fd0
int readBufBeginPut(_anon0* b, unsigned char** ptr)
{
	int size;
	// Line 52, Address: 0x239fd0, Func Offset: 0
	// Line 53, Address: 0x239fe0, Func Offset: 0x10
	// Line 54, Address: 0x23a004, Func Offset: 0x34
	// Line 55, Address: 0x23a00c, Func Offset: 0x3c
	// Line 57, Address: 0x23a02c, Func Offset: 0x5c
	// Line 58, Address: 0x23a030, Func Offset: 0x60
	// Func End, Address: 0x23a040, Func Offset: 0x70
}

// 
// Start address: 0x23a040
int readBufEndPut(_anon0* b, int size)
{
	int size_ok;
	// Line 65, Address: 0x23a040, Func Offset: 0
	// Line 66, Address: 0x23a054, Func Offset: 0x14
	// Line 68, Address: 0x23a0bc, Func Offset: 0x7c
	// Line 69, Address: 0x23a100, Func Offset: 0xc0
	// Line 71, Address: 0x23a120, Func Offset: 0xe0
	// Line 72, Address: 0x23a124, Func Offset: 0xe4
	// Func End, Address: 0x23a138, Func Offset: 0xf8
}

// 
// Start address: 0x23a140
int readBufBeginGet(_anon0* b, unsigned char** ptr)
{
	// Line 79, Address: 0x23a140, Func Offset: 0
	// Line 80, Address: 0x23a150, Func Offset: 0x10
	// Line 81, Address: 0x23a194, Func Offset: 0x54
	// Line 82, Address: 0x23a1b4, Func Offset: 0x74
	// Line 84, Address: 0x23a1bc, Func Offset: 0x7c
	// Line 85, Address: 0x23a200, Func Offset: 0xc0
	// Line 86, Address: 0x23a220, Func Offset: 0xe0
	// Line 89, Address: 0x23a228, Func Offset: 0xe8
	// Line 90, Address: 0x23a240, Func Offset: 0x100
	// Line 92, Address: 0x23a2a8, Func Offset: 0x168
	// Line 93, Address: 0x23a2b8, Func Offset: 0x178
	// Func End, Address: 0x23a2c8, Func Offset: 0x188
}

// 
// Start address: 0x23a2d0
int readBufEndGet(_anon0* b, int size)
{
	int size_ok;
	// Line 100, Address: 0x23a2d0, Func Offset: 0
	// Line 101, Address: 0x23a2e4, Func Offset: 0x14
	// Line 103, Address: 0x23a328, Func Offset: 0x58
	// Line 105, Address: 0x23a348, Func Offset: 0x78
	// Line 106, Address: 0x23a34c, Func Offset: 0x7c
	// Func End, Address: 0x23a360, Func Offset: 0x90
}

