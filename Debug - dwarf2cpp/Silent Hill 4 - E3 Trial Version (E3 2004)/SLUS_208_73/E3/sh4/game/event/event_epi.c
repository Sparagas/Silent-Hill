typedef struct _EpilogueSetData;
typedef struct EventFlag;

typedef int(*type_0)();

typedef _EpilogueSetData type_1[5];
typedef unsigned char type_2[320];

struct _EpilogueSetData
{
	short flag;
	int(*func)();
	int id;
};

struct EventFlag
{
	unsigned char flag[320];
};

_EpilogueSetData epilogue_set_data[5];
EventFlag event_flag;

int epilogue_is_A();
int epilogue_is_B();
int epilogue_is_C();
int epilogue_is_D();
void epilogue_flag_reset();
void EventEpilogueSet();
int EventEpilogueID();
void EventEpilogueSetCostumeChange();
void EventEpilogueSetCynthiaCostumeChange();

// 
// Start address: 0x2df820
int epilogue_is_A()
{
	// Line 64, Address: 0x2df820, Func Offset: 0
	// Line 66, Address: 0x2df828, Func Offset: 0x8
	// Line 67, Address: 0x2df83c, Func Offset: 0x1c
	// Line 68, Address: 0x2df844, Func Offset: 0x24
	// Line 72, Address: 0x2df848, Func Offset: 0x28
	// Line 76, Address: 0x2df858, Func Offset: 0x38
	// Func End, Address: 0x2df864, Func Offset: 0x44
}

// 
// Start address: 0x2df870
int epilogue_is_B()
{
	// Line 81, Address: 0x2df870, Func Offset: 0
	// Line 84, Address: 0x2df878, Func Offset: 0x8
	// Line 88, Address: 0x2df880, Func Offset: 0x10
	// Line 84, Address: 0x2df884, Func Offset: 0x14
	// Line 88, Address: 0x2df88c, Func Offset: 0x1c
	// Func End, Address: 0x2df894, Func Offset: 0x24
}

// 
// Start address: 0x2df8a0
int epilogue_is_C()
{
	// Line 93, Address: 0x2df8a0, Func Offset: 0
	// Line 96, Address: 0x2df8a8, Func Offset: 0x8
	// Line 100, Address: 0x2df8b0, Func Offset: 0x10
	// Line 96, Address: 0x2df8b4, Func Offset: 0x14
	// Line 100, Address: 0x2df8b8, Func Offset: 0x18
	// Func End, Address: 0x2df8c0, Func Offset: 0x20
}

// 
// Start address: 0x2df8c0
int epilogue_is_D()
{
	// Line 107, Address: 0x2df8c0, Func Offset: 0
	// Func End, Address: 0x2df8c8, Func Offset: 0x8
}

// 
// Start address: 0x2df8d0
void epilogue_flag_reset()
{
	int i;
	// Line 116, Address: 0x2df8d0, Func Offset: 0
	// Line 117, Address: 0x2df8dc, Func Offset: 0xc
	// Line 116, Address: 0x2df8e8, Func Offset: 0x18
	// Line 117, Address: 0x2df8ec, Func Offset: 0x1c
	// Line 118, Address: 0x2df910, Func Offset: 0x40
	// Line 117, Address: 0x2df914, Func Offset: 0x44
	// Line 118, Address: 0x2df918, Func Offset: 0x48
	// Line 117, Address: 0x2df91c, Func Offset: 0x4c
	// Line 118, Address: 0x2df924, Func Offset: 0x54
	// Line 119, Address: 0x2df92c, Func Offset: 0x5c
	// Func End, Address: 0x2df934, Func Offset: 0x64
}

// 
// Start address: 0x2df940
void EventEpilogueSet()
{
	int i;
	// Line 129, Address: 0x2df940, Func Offset: 0
	// Line 134, Address: 0x2df94c, Func Offset: 0xc
	// Line 137, Address: 0x2df954, Func Offset: 0x14
	// Line 140, Address: 0x2df964, Func Offset: 0x24
	// Line 141, Address: 0x2df97c, Func Offset: 0x3c
	// Line 142, Address: 0x2df984, Func Offset: 0x44
	// Line 143, Address: 0x2df998, Func Offset: 0x58
	// Line 144, Address: 0x2df9cc, Func Offset: 0x8c
	// Line 148, Address: 0x2df9d4, Func Offset: 0x94
	// Line 144, Address: 0x2df9d8, Func Offset: 0x98
	// Line 148, Address: 0x2df9dc, Func Offset: 0x9c
	// Line 149, Address: 0x2dfa10, Func Offset: 0xd0
	// Line 152, Address: 0x2dfa18, Func Offset: 0xd8
	// Line 155, Address: 0x2dfa28, Func Offset: 0xe8
	// Line 156, Address: 0x2dfa3c, Func Offset: 0xfc
	// Func End, Address: 0x2dfa54, Func Offset: 0x114
}

// 
// Start address: 0x2dfa60
int EventEpilogueID()
{
	int i;
	// Line 185, Address: 0x2dfa60, Func Offset: 0
	// Line 187, Address: 0x2dfa6c, Func Offset: 0xc
	// Line 185, Address: 0x2dfa78, Func Offset: 0x18
	// Line 187, Address: 0x2dfa7c, Func Offset: 0x1c
	// Line 188, Address: 0x2dfaa8, Func Offset: 0x48
	// Line 190, Address: 0x2dfab0, Func Offset: 0x50
	// Line 193, Address: 0x2dfac0, Func Offset: 0x60
	// Line 194, Address: 0x2dfac8, Func Offset: 0x68
	// Func End, Address: 0x2dfad0, Func Offset: 0x70
}

// 
// Start address: 0x2dfad0
void EventEpilogueSetCostumeChange()
{
	int id;
	// Line 203, Address: 0x2dfad0, Func Offset: 0
	// Line 207, Address: 0x2dfad8, Func Offset: 0x8
	// Line 208, Address: 0x2dfae0, Func Offset: 0x10
	// Line 210, Address: 0x2dfaf8, Func Offset: 0x28
	// Line 212, Address: 0x2dfb08, Func Offset: 0x38
	// Line 215, Address: 0x2dfb10, Func Offset: 0x40
	// Func End, Address: 0x2dfb1c, Func Offset: 0x4c
}

// 
// Start address: 0x2dfb20
void EventEpilogueSetCynthiaCostumeChange()
{
	int i;
	int ending;
	// Line 224, Address: 0x2dfb20, Func Offset: 0
	// Line 228, Address: 0x2dfb28, Func Offset: 0x8
	// Line 232, Address: 0x2dfb30, Func Offset: 0x10
	// Line 233, Address: 0x2dfb34, Func Offset: 0x14
	// Line 236, Address: 0x2dfb48, Func Offset: 0x28
	// Line 239, Address: 0x2dfb58, Func Offset: 0x38
	// Line 240, Address: 0x2dfb60, Func Offset: 0x40
	// Func End, Address: 0x2dfb6c, Func Offset: 0x4c
}

