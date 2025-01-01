typedef struct BootOptItem;

typedef int(*type_0)(char*);
typedef void(*type_1)(char*, int);
typedef void(*type_4)(char*, int);
typedef int(*type_8)(char*);

typedef BootOptItem type_2[0];
typedef char type_3[260];
typedef char type_5[256];
typedef BootOptItem* type_6[62];
typedef char type_7[4];

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
// Start address: 0x1c9800
int key_index(int key)
{
	// Line 12, Address: 0x1c9800, Func Offset: 0
	// Line 13, Address: 0x1c9808, Func Offset: 0x8
	// Line 14, Address: 0x1c9828, Func Offset: 0x28
	// Line 15, Address: 0x1c9834, Func Offset: 0x34
	// Line 16, Address: 0x1c985c, Func Offset: 0x5c
	// Line 17, Address: 0x1c9868, Func Offset: 0x68
	// Line 18, Address: 0x1c9870, Func Offset: 0x70
	// Line 20, Address: 0x1c9878, Func Offset: 0x78
	// Line 21, Address: 0x1c987c, Func Offset: 0x7c
	// Func End, Address: 0x1c9888, Func Offset: 0x88
}

// 
// Start address: 0x1c9890
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
	// Line 25, Address: 0x1c9890, Func Offset: 0
	// Line 27, Address: 0x1c98c4, Func Offset: 0x34
	// Line 38, Address: 0x1c98f8, Func Offset: 0x68
	// Line 39, Address: 0x1c9910, Func Offset: 0x80
	// Line 40, Address: 0x1c9928, Func Offset: 0x98
	// Line 41, Address: 0x1c9930, Func Offset: 0xa0
	// Line 42, Address: 0x1c993c, Func Offset: 0xac
	// Line 43, Address: 0x1c9954, Func Offset: 0xc4
	// Line 44, Address: 0x1c9958, Func Offset: 0xc8
	// Line 45, Address: 0x1c995c, Func Offset: 0xcc
	// Line 46, Address: 0x1c9960, Func Offset: 0xd0
	// Line 47, Address: 0x1c9980, Func Offset: 0xf0
	// Line 48, Address: 0x1c99a0, Func Offset: 0x110
	// Line 49, Address: 0x1c99a8, Func Offset: 0x118
	// Line 50, Address: 0x1c99b8, Func Offset: 0x128
	// Line 51, Address: 0x1c99d4, Func Offset: 0x144
	// Line 52, Address: 0x1c99d8, Func Offset: 0x148
	// Line 53, Address: 0x1c99e0, Func Offset: 0x150
	// Line 54, Address: 0x1c99f0, Func Offset: 0x160
	// Line 55, Address: 0x1c99f8, Func Offset: 0x168
	// Line 56, Address: 0x1c9a10, Func Offset: 0x180
	// Line 57, Address: 0x1c9a14, Func Offset: 0x184
	// Line 58, Address: 0x1c9a1c, Func Offset: 0x18c
	// Line 61, Address: 0x1c9a20, Func Offset: 0x190
	// Line 62, Address: 0x1c9a28, Func Offset: 0x198
	// Line 63, Address: 0x1c9a40, Func Offset: 0x1b0
	// Line 64, Address: 0x1c9a58, Func Offset: 0x1c8
	// Line 65, Address: 0x1c9a60, Func Offset: 0x1d0
	// Line 66, Address: 0x1c9a74, Func Offset: 0x1e4
	// Line 67, Address: 0x1c9a78, Func Offset: 0x1e8
	// Line 68, Address: 0x1c9a9c, Func Offset: 0x20c
	// Line 69, Address: 0x1c9aa4, Func Offset: 0x214
	// Line 70, Address: 0x1c9abc, Func Offset: 0x22c
	// Line 71, Address: 0x1c9ac4, Func Offset: 0x234
	// Line 73, Address: 0x1c9ad8, Func Offset: 0x248
	// Line 74, Address: 0x1c9b08, Func Offset: 0x278
	// Func End, Address: 0x1c9b3c, Func Offset: 0x2ac
}

