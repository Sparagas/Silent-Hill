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
// Start address: 0x28c090
void readBufCreate(_anon0* b)
{
	// Line 35, Address: 0x28c090, Func Offset: 0
	// Line 36, Address: 0x28c0a8, Func Offset: 0x18
	// Line 37, Address: 0x28c0b8, Func Offset: 0x28
	// Func End, Address: 0x28c0c0, Func Offset: 0x30
}

// 
// Start address: 0x28c0c0
void readBufDelete()
{
	// Line 45, Address: 0x28c0c0, Func Offset: 0
	// Func End, Address: 0x28c0c8, Func Offset: 0x8
}

// 
// Start address: 0x28c0d0
int readBufBeginPut(_anon0* b, unsigned char** ptr)
{
	int size;
	// Line 53, Address: 0x28c0d0, Func Offset: 0
	// Line 54, Address: 0x28c0ec, Func Offset: 0x1c
	// Line 55, Address: 0x28c0f4, Func Offset: 0x24
	// Line 58, Address: 0x28c108, Func Offset: 0x38
	// Func End, Address: 0x28c110, Func Offset: 0x40
}

// 
// Start address: 0x28c110
int readBufEndPut(_anon0* b, int size)
{
	int size_ok;
	// Line 66, Address: 0x28c110, Func Offset: 0
	// Line 68, Address: 0x28c138, Func Offset: 0x28
	// Line 69, Address: 0x28c164, Func Offset: 0x54
	// Line 71, Address: 0x28c180, Func Offset: 0x70
	// Line 72, Address: 0x28c184, Func Offset: 0x74
	// Func End, Address: 0x28c18c, Func Offset: 0x7c
}

// 
// Start address: 0x28c190
int readBufBeginGet(_anon0* b, unsigned char** ptr)
{
	// Line 79, Address: 0x28c190, Func Offset: 0
	// Line 80, Address: 0x28c1a8, Func Offset: 0x18
	// Line 81, Address: 0x28c1d8, Func Offset: 0x48
	// Line 82, Address: 0x28c1e8, Func Offset: 0x58
	// Line 84, Address: 0x28c1f0, Func Offset: 0x60
	// Line 85, Address: 0x28c21c, Func Offset: 0x8c
	// Line 86, Address: 0x28c22c, Func Offset: 0x9c
	// Line 89, Address: 0x28c234, Func Offset: 0xa4
	// Line 90, Address: 0x28c248, Func Offset: 0xb8
	// Line 92, Address: 0x28c280, Func Offset: 0xf0
	// Line 93, Address: 0x28c28c, Func Offset: 0xfc
	// Func End, Address: 0x28c2a4, Func Offset: 0x114
}

// 
// Start address: 0x28c2b0
int readBufEndGet(_anon0* b, int size)
{
	int size_ok;
	// Line 101, Address: 0x28c2b0, Func Offset: 0
	// Line 103, Address: 0x28c2c8, Func Offset: 0x18
	// Line 105, Address: 0x28c2e4, Func Offset: 0x34
	// Line 106, Address: 0x28c2e8, Func Offset: 0x38
	// Func End, Address: 0x28c2f0, Func Offset: 0x40
}

