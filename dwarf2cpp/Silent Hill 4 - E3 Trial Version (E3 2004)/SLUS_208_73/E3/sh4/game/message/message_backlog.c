typedef struct MessageInfoTag;
typedef struct MessageBacklogWork;


typedef unsigned short* type_0[16];
typedef int type_1[16];
typedef unsigned short type_2[16384];

struct MessageInfoTag
{
	unsigned short bytes;
	unsigned short lines;
};

struct MessageBacklogWork
{
	unsigned short* current;
	unsigned short* last;
	unsigned short* end;
	unsigned short* view[16];
	int view_pos[16];
	int all_line;
	int view_line;
	int view_num;
};

MessageBacklogWork backlog_work;
unsigned short backlog_buffer[16384];

void MessageBacklogClear();
void erase_backlog(int size);
void set_view_pos();
void MessageBacklogPush(unsigned short* mes);

// 
// Start address: 0x2a9840
void MessageBacklogClear()
{
	// Line 83, Address: 0x2a9840, Func Offset: 0
	// Line 84, Address: 0x2a9844, Func Offset: 0x4
	// Line 83, Address: 0x2a9848, Func Offset: 0x8
	// Line 84, Address: 0x2a984c, Func Offset: 0xc
	// Line 85, Address: 0x2a9858, Func Offset: 0x18
	// Line 86, Address: 0x2a9868, Func Offset: 0x28
	// Line 87, Address: 0x2a9878, Func Offset: 0x38
	// Func End, Address: 0x2a9884, Func Offset: 0x44
}

// 
// Start address: 0x2a9890
void erase_backlog(int size)
{
	int needsize;
	int n;
	unsigned short* last;
	MessageInfoTag* tag;
	// Line 97, Address: 0x2a9890, Func Offset: 0
	// Line 99, Address: 0x2a9894, Func Offset: 0x4
	// Line 97, Address: 0x2a9898, Func Offset: 0x8
	// Line 99, Address: 0x2a989c, Func Offset: 0xc
	// Line 97, Address: 0x2a98a0, Func Offset: 0x10
	// Line 99, Address: 0x2a98a8, Func Offset: 0x18
	// Line 100, Address: 0x2a98c0, Func Offset: 0x30
	// Line 101, Address: 0x2a98c8, Func Offset: 0x38
	// Line 103, Address: 0x2a98d8, Func Offset: 0x48
	// Line 104, Address: 0x2a98f4, Func Offset: 0x64
	// Line 105, Address: 0x2a98f8, Func Offset: 0x68
	// Line 106, Address: 0x2a9900, Func Offset: 0x70
	// Line 107, Address: 0x2a9904, Func Offset: 0x74
	// Line 109, Address: 0x2a9910, Func Offset: 0x80
	// Line 110, Address: 0x2a9918, Func Offset: 0x88
	// Line 112, Address: 0x2a9924, Func Offset: 0x94
	// Line 113, Address: 0x2a9930, Func Offset: 0xa0
	// Line 117, Address: 0x2a9938, Func Offset: 0xa8
	// Line 118, Address: 0x2a993c, Func Offset: 0xac
	// Line 123, Address: 0x2a9944, Func Offset: 0xb4
	// Line 124, Address: 0x2a9948, Func Offset: 0xb8
	// Line 128, Address: 0x2a9964, Func Offset: 0xd4
	// Line 129, Address: 0x2a9980, Func Offset: 0xf0
	// Line 130, Address: 0x2a9984, Func Offset: 0xf4
	// Line 132, Address: 0x2a998c, Func Offset: 0xfc
	// Line 133, Address: 0x2a9990, Func Offset: 0x100
	// Line 134, Address: 0x2a9998, Func Offset: 0x108
	// Line 135, Address: 0x2a99a0, Func Offset: 0x110
	// Func End, Address: 0x2a99a8, Func Offset: 0x118
}

// 
// Start address: 0x2a99b0
void set_view_pos()
{
	MessageInfoTag* ptag;
	int ln;
	int ln2;
	int n;
	unsigned short* p;
	unsigned short* endp;
	unsigned short* current;
	// Line 145, Address: 0x2a99b0, Func Offset: 0
	// Line 149, Address: 0x2a99b4, Func Offset: 0x4
	// Line 145, Address: 0x2a99b8, Func Offset: 0x8
	// Line 146, Address: 0x2a99bc, Func Offset: 0xc
	// Line 149, Address: 0x2a99c0, Func Offset: 0x10
	// Line 147, Address: 0x2a99c4, Func Offset: 0x14
	// Line 145, Address: 0x2a99c8, Func Offset: 0x18
	// Line 147, Address: 0x2a99cc, Func Offset: 0x1c
	// Line 148, Address: 0x2a99d0, Func Offset: 0x20
	// Line 149, Address: 0x2a99d8, Func Offset: 0x28
	// Line 151, Address: 0x2a99e0, Func Offset: 0x30
	// Line 152, Address: 0x2a99e8, Func Offset: 0x38
	// Line 155, Address: 0x2a99f0, Func Offset: 0x40
	// Line 156, Address: 0x2a99f8, Func Offset: 0x48
	// Line 157, Address: 0x2a9a04, Func Offset: 0x54
	// Line 158, Address: 0x2a9a08, Func Offset: 0x58
	// Line 157, Address: 0x2a9a0c, Func Offset: 0x5c
	// Line 158, Address: 0x2a9a10, Func Offset: 0x60
	// Line 160, Address: 0x2a9a14, Func Offset: 0x64
	// Line 158, Address: 0x2a9a18, Func Offset: 0x68
	// Line 161, Address: 0x2a9a24, Func Offset: 0x74
	// Line 163, Address: 0x2a9a28, Func Offset: 0x78
	// Line 164, Address: 0x2a9a30, Func Offset: 0x80
	// Line 165, Address: 0x2a9a40, Func Offset: 0x90
	// Line 166, Address: 0x2a9a44, Func Offset: 0x94
	// Func End, Address: 0x2a9a4c, Func Offset: 0x9c
}

// 
// Start address: 0x2a9a50
void MessageBacklogPush(unsigned short* mes)
{
	unsigned short* current;
	MessageInfoTag* tag;
	int size;
	int ln;
	// Line 172, Address: 0x2a9a50, Func Offset: 0
	// Line 176, Address: 0x2a9a6c, Func Offset: 0x1c
	// Line 177, Address: 0x2a9a7c, Func Offset: 0x2c
	// Line 181, Address: 0x2a9a88, Func Offset: 0x38
	// Line 177, Address: 0x2a9a8c, Func Offset: 0x3c
	// Line 180, Address: 0x2a9a90, Func Offset: 0x40
	// Line 181, Address: 0x2a9a94, Func Offset: 0x44
	// Line 182, Address: 0x2a9a9c, Func Offset: 0x4c
	// Line 183, Address: 0x2a9aa4, Func Offset: 0x54
	// Line 187, Address: 0x2a9aa8, Func Offset: 0x58
	// Line 184, Address: 0x2a9aac, Func Offset: 0x5c
	// Line 187, Address: 0x2a9ab0, Func Offset: 0x60
	// Line 185, Address: 0x2a9ab8, Func Offset: 0x68
	// Line 186, Address: 0x2a9ad0, Func Offset: 0x80
	// Line 188, Address: 0x2a9ae0, Func Offset: 0x90
	// Line 189, Address: 0x2a9ae8, Func Offset: 0x98
	// Func End, Address: 0x2a9b08, Func Offset: 0xb8
}

