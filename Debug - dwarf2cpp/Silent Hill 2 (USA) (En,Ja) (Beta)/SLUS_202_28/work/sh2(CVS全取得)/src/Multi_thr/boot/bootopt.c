typedef struct BootOptItem;

typedef int(*type_0)(char*);
typedef void(*type_2)(char*, int);
typedef int(*type_6)(char*);
typedef void(*type_7)(char*, int);

typedef char type_1[260];
typedef char type_3[256];
typedef BootOptItem* type_4[62];
typedef char type_5[4];
typedef BootOptItem type_8[0];

struct BootOptItem
{
	void* var;
	char key[4];
	int(*get)(char*);
	void(*put)(char*, int);
	char* help;
	int set;
};

int optind;
char* optarg;
BootOptItem BootOptItemList[0];

int key_index(int key);
void BootOptGet(int argc, char** argv);

// 
// Start address: 0x1c0120
int key_index(int key)
{
	// Line 16, Address: 0x1c0120, Func Offset: 0
	// Line 17, Address: 0x1c0138, Func Offset: 0x18
	// Line 18, Address: 0x1c013c, Func Offset: 0x1c
	// Line 19, Address: 0x1c015c, Func Offset: 0x3c
	// Line 20, Address: 0x1c0160, Func Offset: 0x40
	// Line 21, Address: 0x1c0168, Func Offset: 0x48
	// Line 23, Address: 0x1c016c, Func Offset: 0x4c
	// Line 24, Address: 0x1c0170, Func Offset: 0x50
	// Func End, Address: 0x1c0178, Func Offset: 0x58
}

// 
// Start address: 0x1c0180
void BootOptGet(int argc, char** argv)
{
	char* param;
	int var;
	int(*get)(char*);
	BootOptItem* item;
	int idx;
	int key;
	int rem;
	int len;
	char* dst;
	BootOptItem* keyitem[62];
	char keylist[256];
	// Line 28, Address: 0x1c0180, Func Offset: 0
	// Line 30, Address: 0x1c01a4, Func Offset: 0x24
	// Line 41, Address: 0x1c01d8, Func Offset: 0x58
	// Line 42, Address: 0x1c01f0, Func Offset: 0x70
	// Line 43, Address: 0x1c0200, Func Offset: 0x80
	// Line 44, Address: 0x1c0208, Func Offset: 0x88
	// Line 45, Address: 0x1c0214, Func Offset: 0x94
	// Line 46, Address: 0x1c0228, Func Offset: 0xa8
	// Line 47, Address: 0x1c022c, Func Offset: 0xac
	// Line 49, Address: 0x1c0230, Func Offset: 0xb0
	// Line 50, Address: 0x1c0250, Func Offset: 0xd0
	// Line 51, Address: 0x1c0270, Func Offset: 0xf0
	// Line 52, Address: 0x1c0278, Func Offset: 0xf8
	// Line 53, Address: 0x1c0280, Func Offset: 0x100
	// Line 54, Address: 0x1c029c, Func Offset: 0x11c
	// Line 55, Address: 0x1c02a0, Func Offset: 0x120
	// Line 56, Address: 0x1c02a8, Func Offset: 0x128
	// Line 57, Address: 0x1c02b4, Func Offset: 0x134
	// Line 58, Address: 0x1c02bc, Func Offset: 0x13c
	// Line 59, Address: 0x1c02cc, Func Offset: 0x14c
	// Line 60, Address: 0x1c02d0, Func Offset: 0x150
	// Line 61, Address: 0x1c02d8, Func Offset: 0x158
	// Line 63, Address: 0x1c02dc, Func Offset: 0x15c
	// Line 64, Address: 0x1c02e0, Func Offset: 0x160
	// Line 65, Address: 0x1c02e8, Func Offset: 0x168
	// Line 74, Address: 0x1c02f8, Func Offset: 0x178
	// Line 75, Address: 0x1c031c, Func Offset: 0x19c
	// Line 82, Address: 0x1c0324, Func Offset: 0x1a4
	// Line 83, Address: 0x1c034c, Func Offset: 0x1cc
	// Func End, Address: 0x1c0370, Func Offset: 0x1f0
}

