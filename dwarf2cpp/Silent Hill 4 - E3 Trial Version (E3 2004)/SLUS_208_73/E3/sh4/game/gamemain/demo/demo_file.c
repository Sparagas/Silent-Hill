typedef struct _anon0;
typedef struct _anon1;


typedef _anon1 type_0[21];
typedef _anon0 type_1[183];

struct _anon0
{
	short demo_id;
	short merge_index;
	char stage;
};

struct _anon1
{
	short demo_id;
	int bgm_id;
};

_anon0 demo_file_table[183];
_anon1 demo_adx_table[21];

void DemoGetFileName(int index, char* name);
int DemoGetFileNumber(int index);
int DemoGetADXNumber(int index);

// 
// Start address: 0x274780
void DemoGetFileName(int index, char* name)
{
	int i;
	// Line 249, Address: 0x274780, Func Offset: 0
	// Line 258, Address: 0x274784, Func Offset: 0x4
	// Line 249, Address: 0x274788, Func Offset: 0x8
	// Line 258, Address: 0x27478c, Func Offset: 0xc
	// Line 259, Address: 0x27479c, Func Offset: 0x1c
	// Line 260, Address: 0x2747a4, Func Offset: 0x24
	// Line 261, Address: 0x2747e4, Func Offset: 0x64
	// Line 262, Address: 0x2747e8, Func Offset: 0x68
	// Line 263, Address: 0x2747f8, Func Offset: 0x78
	// Line 265, Address: 0x274800, Func Offset: 0x80
	// Line 266, Address: 0x274810, Func Offset: 0x90
	// Line 268, Address: 0x274818, Func Offset: 0x98
	// Line 269, Address: 0x274828, Func Offset: 0xa8
	// Line 271, Address: 0x274830, Func Offset: 0xb0
	// Line 272, Address: 0x274840, Func Offset: 0xc0
	// Line 274, Address: 0x274848, Func Offset: 0xc8
	// Line 275, Address: 0x274858, Func Offset: 0xd8
	// Line 277, Address: 0x274860, Func Offset: 0xe0
	// Line 278, Address: 0x274870, Func Offset: 0xf0
	// Line 280, Address: 0x274878, Func Offset: 0xf8
	// Line 281, Address: 0x274888, Func Offset: 0x108
	// Line 283, Address: 0x274890, Func Offset: 0x110
	// Line 284, Address: 0x2748a0, Func Offset: 0x120
	// Line 286, Address: 0x2748a8, Func Offset: 0x128
	// Line 287, Address: 0x2748b8, Func Offset: 0x138
	// Line 289, Address: 0x2748c0, Func Offset: 0x140
	// Line 292, Address: 0x2748d0, Func Offset: 0x150
	// Line 293, Address: 0x2748d8, Func Offset: 0x158
	// Line 299, Address: 0x2748e4, Func Offset: 0x164
	// Line 300, Address: 0x2748f0, Func Offset: 0x170
	// Func End, Address: 0x2748fc, Func Offset: 0x17c
}

// 
// Start address: 0x274900
int DemoGetFileNumber(int index)
{
	int number;
	int i;
	// Line 315, Address: 0x274900, Func Offset: 0
	// Line 308, Address: 0x274904, Func Offset: 0x4
	// Line 315, Address: 0x274908, Func Offset: 0x8
	// Line 316, Address: 0x274914, Func Offset: 0x14
	// Line 317, Address: 0x27491c, Func Offset: 0x1c
	// Line 318, Address: 0x274934, Func Offset: 0x34
	// Line 319, Address: 0x27493c, Func Offset: 0x3c
	// Line 325, Address: 0x27494c, Func Offset: 0x4c
	// Line 328, Address: 0x274958, Func Offset: 0x58
	// Func End, Address: 0x274960, Func Offset: 0x60
}

// 
// Start address: 0x274960
int DemoGetADXNumber(int index)
{
	int number;
	int i;
	// Line 334, Address: 0x274960, Func Offset: 0
	// Line 342, Address: 0x274974, Func Offset: 0x14
	// Line 343, Address: 0x274984, Func Offset: 0x24
	// Line 344, Address: 0x274998, Func Offset: 0x38
	// Line 345, Address: 0x2749a4, Func Offset: 0x44
	// Line 347, Address: 0x2749ac, Func Offset: 0x4c
	// Line 348, Address: 0x2749b8, Func Offset: 0x58
	// Line 350, Address: 0x2749c0, Func Offset: 0x60
	// Line 351, Address: 0x2749d4, Func Offset: 0x74
	// Line 352, Address: 0x2749dc, Func Offset: 0x7c
	// Line 353, Address: 0x2749f8, Func Offset: 0x98
	// Line 354, Address: 0x274a00, Func Offset: 0xa0
	// Line 358, Address: 0x274a0c, Func Offset: 0xac
	// Line 359, Address: 0x274a14, Func Offset: 0xb4
	// Line 361, Address: 0x274a18, Func Offset: 0xb8
	// Line 362, Address: 0x274a1c, Func Offset: 0xbc
	// Func End, Address: 0x274a30, Func Offset: 0xd0
}

