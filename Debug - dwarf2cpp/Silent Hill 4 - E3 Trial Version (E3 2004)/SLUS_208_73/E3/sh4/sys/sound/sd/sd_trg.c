typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef char type_0[24];
typedef char type_1[24][2];
typedef char type_2[48];
typedef _anon2 type_3[15];
typedef _anon1 type_4[48];

struct _anon0
{
	int result;
	char core_status[24][2];
	char ctl_status[48];
	short vab_status;
	short trg_status;
	int res;
};

struct _anon1
{
	char status;
	char reserve;
	int no;
};

struct _anon2
{
	void* hd_addr;
	void* bd_addr;
	void* td_addr;
};

short vsdTrgTriggerStatus;
short vsdTrgVabStatus;
_anon1 vsdTrgCtl[48];
_anon2 vsdTrgData[15];

int sdTrgInit();
void sdTrgVSync();
int sdTrgSetData(int type, int id, void* addr, unsigned int size);
int sdTrgResetData(int id);
int sdTrgGetDataStatus(int id);
int sdTrgGetVabStatus(int id);
int sdTrgPlay(int id, int no, int vol, int pan, int bend, int overwrite);
int sdTrgStop(int id, int no, int ctl_id);
int sdTrgStopVab(int id);
int sdTrgStopLoop(int id);
int sdTrgStopLoopAll();
int sdTrgStopAll();
int sdTrgSetVol(int id, int no, int ctl_id, int vol, int pan);
int sdTrgSetVolVab(int id, int vol);
int sdTrgSetMidiVol(int id, int no, int ctl_id, int chan, int vol, int pan);
void sdTrgInitFig();
void sdTrgInitCtl(int id);
int sdTrgSearchCtlId();
int sdTrgSearchReserve(int no);

// 
// Start address: 0x2005a0
int sdTrgInit()
{
	int tmp;
	// Line 98, Address: 0x2005a0, Func Offset: 0
	// Line 104, Address: 0x2005a8, Func Offset: 0x8
	// Line 106, Address: 0x2005b0, Func Offset: 0x10
	// Line 108, Address: 0x2005c4, Func Offset: 0x24
	// Line 110, Address: 0x2005cc, Func Offset: 0x2c
	// Line 112, Address: 0x2005d4, Func Offset: 0x34
	// Line 113, Address: 0x2005dc, Func Offset: 0x3c
	// Line 116, Address: 0x2005e0, Func Offset: 0x40
	// Line 118, Address: 0x2005f4, Func Offset: 0x54
	// Line 120, Address: 0x2005fc, Func Offset: 0x5c
	// Line 122, Address: 0x200604, Func Offset: 0x64
	// Line 123, Address: 0x20060c, Func Offset: 0x6c
	// Line 126, Address: 0x200610, Func Offset: 0x70
	// Line 127, Address: 0x200618, Func Offset: 0x78
	// Func End, Address: 0x200624, Func Offset: 0x84
}

// 
// Start address: 0x200630
void sdTrgVSync()
{
	_anon0 result;
	int i;
	// Line 149, Address: 0x200630, Func Offset: 0
	// Line 139, Address: 0x200634, Func Offset: 0x4
	// Line 149, Address: 0x200638, Func Offset: 0x8
	// Line 139, Address: 0x20063c, Func Offset: 0xc
	// Line 149, Address: 0x200640, Func Offset: 0x10
	// Line 139, Address: 0x200644, Func Offset: 0x14
	// Line 149, Address: 0x200648, Func Offset: 0x18
	// Line 139, Address: 0x20064c, Func Offset: 0x1c
	// Line 149, Address: 0x200654, Func Offset: 0x24
	// Line 155, Address: 0x20065c, Func Offset: 0x2c
	// Line 163, Address: 0x20066c, Func Offset: 0x3c
	// Line 157, Address: 0x200670, Func Offset: 0x40
	// Line 155, Address: 0x200674, Func Offset: 0x44
	// Line 157, Address: 0x20067c, Func Offset: 0x4c
	// Line 158, Address: 0x200690, Func Offset: 0x60
	// Line 160, Address: 0x200694, Func Offset: 0x64
	// Line 162, Address: 0x2006b4, Func Offset: 0x84
	// Line 163, Address: 0x2006b8, Func Offset: 0x88
	// Line 165, Address: 0x2006bc, Func Offset: 0x8c
	// Line 163, Address: 0x2006c8, Func Offset: 0x98
	// Line 165, Address: 0x2006cc, Func Offset: 0x9c
	// Line 166, Address: 0x2006d4, Func Offset: 0xa4
	// Line 167, Address: 0x2006dc, Func Offset: 0xac
	// Line 166, Address: 0x2006e0, Func Offset: 0xb0
	// Line 167, Address: 0x2006e4, Func Offset: 0xb4
	// Line 168, Address: 0x2006ec, Func Offset: 0xbc
	// Func End, Address: 0x2006f4, Func Offset: 0xc4
}

// 
// Start address: 0x200700
int sdTrgSetData(int type, int id, void* addr, unsigned int size)
{
	int tmp;
	// Line 180, Address: 0x200700, Func Offset: 0
	// Line 186, Address: 0x200704, Func Offset: 0x4
	// Line 180, Address: 0x200708, Func Offset: 0x8
	// Line 186, Address: 0x200718, Func Offset: 0x18
	// Line 188, Address: 0x200744, Func Offset: 0x44
	// Line 189, Address: 0x200748, Func Offset: 0x48
	// Line 192, Address: 0x200760, Func Offset: 0x60
	// Line 194, Address: 0x200768, Func Offset: 0x68
	// Line 196, Address: 0x200770, Func Offset: 0x70
	// Line 199, Address: 0x200778, Func Offset: 0x78
	// Line 200, Address: 0x200790, Func Offset: 0x90
	// Line 203, Address: 0x200798, Func Offset: 0x98
	// Line 206, Address: 0x2007b0, Func Offset: 0xb0
	// Line 208, Address: 0x2007b8, Func Offset: 0xb8
	// Line 210, Address: 0x2007c0, Func Offset: 0xc0
	// Line 213, Address: 0x2007c8, Func Offset: 0xc8
	// Line 214, Address: 0x2007e0, Func Offset: 0xe0
	// Line 217, Address: 0x2007e8, Func Offset: 0xe8
	// Line 219, Address: 0x200800, Func Offset: 0x100
	// Line 221, Address: 0x200808, Func Offset: 0x108
	// Line 223, Address: 0x200810, Func Offset: 0x110
	// Line 226, Address: 0x200818, Func Offset: 0x118
	// Line 234, Address: 0x200834, Func Offset: 0x134
	// Line 237, Address: 0x200838, Func Offset: 0x138
	// Line 238, Address: 0x200840, Func Offset: 0x140
	// Func End, Address: 0x200854, Func Offset: 0x154
}

// 
// Start address: 0x200860
int sdTrgResetData(int id)
{
	int tmp;
	// Line 247, Address: 0x200860, Func Offset: 0
	// Line 252, Address: 0x200864, Func Offset: 0x4
	// Line 247, Address: 0x200868, Func Offset: 0x8
	// Line 252, Address: 0x20086c, Func Offset: 0xc
	// Line 247, Address: 0x200870, Func Offset: 0x10
	// Line 252, Address: 0x200874, Func Offset: 0x14
	// Line 247, Address: 0x200878, Func Offset: 0x18
	// Line 252, Address: 0x20087c, Func Offset: 0x1c
	// Line 254, Address: 0x20088c, Func Offset: 0x2c
	// Line 256, Address: 0x200894, Func Offset: 0x34
	// Line 258, Address: 0x20089c, Func Offset: 0x3c
	// Line 259, Address: 0x2008a4, Func Offset: 0x44
	// Line 261, Address: 0x2008a8, Func Offset: 0x48
	// Line 263, Address: 0x2008c0, Func Offset: 0x60
	// Line 265, Address: 0x2008c8, Func Offset: 0x68
	// Line 267, Address: 0x2008d0, Func Offset: 0x70
	// Line 271, Address: 0x2008f0, Func Offset: 0x90
	// Line 272, Address: 0x2008f8, Func Offset: 0x98
	// Line 273, Address: 0x200908, Func Offset: 0xa8
	// Line 274, Address: 0x200910, Func Offset: 0xb0
	// Line 277, Address: 0x200914, Func Offset: 0xb4
	// Line 278, Address: 0x200918, Func Offset: 0xb8
	// Func End, Address: 0x20092c, Func Offset: 0xcc
}

// 
// Start address: 0x200930
int sdTrgGetDataStatus(int id)
{
	// Line 307, Address: 0x200930, Func Offset: 0
	// Line 308, Address: 0x20095c, Func Offset: 0x2c
	// Line 309, Address: 0x200964, Func Offset: 0x34
	// Line 310, Address: 0x200968, Func Offset: 0x38
	// Line 312, Address: 0x200970, Func Offset: 0x40
	// Func End, Address: 0x200978, Func Offset: 0x48
}

// 
// Start address: 0x200980
int sdTrgGetVabStatus(int id)
{
	// Line 325, Address: 0x200980, Func Offset: 0
	// Line 329, Address: 0x200994, Func Offset: 0x14
	// Func End, Address: 0x20099c, Func Offset: 0x1c
}

// 
// Start address: 0x2009a0
int sdTrgPlay(int id, int no, int vol, int pan, int bend, int overwrite)
{
	int tmp;
	int ctl_id;
	int loop;
	// Line 399, Address: 0x2009a0, Func Offset: 0
	// Line 407, Address: 0x2009a4, Func Offset: 0x4
	// Line 399, Address: 0x2009a8, Func Offset: 0x8
	// Line 407, Address: 0x2009ac, Func Offset: 0xc
	// Line 399, Address: 0x2009b0, Func Offset: 0x10
	// Line 407, Address: 0x2009cc, Func Offset: 0x2c
	// Line 399, Address: 0x2009d0, Func Offset: 0x30
	// Line 407, Address: 0x2009d8, Func Offset: 0x38
	// Line 399, Address: 0x2009dc, Func Offset: 0x3c
	// Line 407, Address: 0x2009ec, Func Offset: 0x4c
	// Line 408, Address: 0x2009fc, Func Offset: 0x5c
	// Line 411, Address: 0x200a14, Func Offset: 0x74
	// Line 412, Address: 0x200a24, Func Offset: 0x84
	// Line 413, Address: 0x200a2c, Func Offset: 0x8c
	// Line 414, Address: 0x200a38, Func Offset: 0x98
	// Line 415, Address: 0x200a3c, Func Offset: 0x9c
	// Line 417, Address: 0x200a40, Func Offset: 0xa0
	// Line 418, Address: 0x200a48, Func Offset: 0xa8
	// Line 419, Address: 0x200a54, Func Offset: 0xb4
	// Line 421, Address: 0x200a58, Func Offset: 0xb8
	// Line 423, Address: 0x200a60, Func Offset: 0xc0
	// Line 425, Address: 0x200a68, Func Offset: 0xc8
	// Line 433, Address: 0x200a70, Func Offset: 0xd0
	// Line 437, Address: 0x200ae0, Func Offset: 0x140
	// Line 439, Address: 0x200ae8, Func Offset: 0x148
	// Line 441, Address: 0x200af0, Func Offset: 0x150
	// Line 445, Address: 0x200af8, Func Offset: 0x158
	// Line 446, Address: 0x200b08, Func Offset: 0x168
	// Line 445, Address: 0x200b0c, Func Offset: 0x16c
	// Line 449, Address: 0x200b10, Func Offset: 0x170
	// Line 446, Address: 0x200b14, Func Offset: 0x174
	// Line 449, Address: 0x200b24, Func Offset: 0x184
	// Line 450, Address: 0x200b28, Func Offset: 0x188
	// Func End, Address: 0x200b54, Func Offset: 0x1b4
}

// 
// Start address: 0x200b60
int sdTrgStop(int id, int no, int ctl_id)
{
	int tmp;
	// Line 463, Address: 0x200b60, Func Offset: 0
	// Line 474, Address: 0x200b64, Func Offset: 0x4
	// Line 478, Address: 0x200bb4, Func Offset: 0x54
	// Line 480, Address: 0x200bbc, Func Offset: 0x5c
	// Line 482, Address: 0x200bc4, Func Offset: 0x64
	// Line 483, Address: 0x200bcc, Func Offset: 0x6c
	// Line 486, Address: 0x200bd0, Func Offset: 0x70
	// Line 487, Address: 0x200bd8, Func Offset: 0x78
	// Func End, Address: 0x200be4, Func Offset: 0x84
}

// 
// Start address: 0x200bf0
int sdTrgStopVab(int id)
{
	int tmp;
	// Line 496, Address: 0x200bf0, Func Offset: 0
	// Line 501, Address: 0x200bf4, Func Offset: 0x4
	// Line 496, Address: 0x200bf8, Func Offset: 0x8
	// Line 501, Address: 0x200bfc, Func Offset: 0xc
	// Line 504, Address: 0x200c0c, Func Offset: 0x1c
	// Line 506, Address: 0x200c14, Func Offset: 0x24
	// Line 508, Address: 0x200c1c, Func Offset: 0x2c
	// Line 509, Address: 0x200c24, Func Offset: 0x34
	// Line 512, Address: 0x200c28, Func Offset: 0x38
	// Line 513, Address: 0x200c30, Func Offset: 0x40
	// Func End, Address: 0x200c3c, Func Offset: 0x4c
}

// 
// Start address: 0x200c40
int sdTrgStopLoop(int id)
{
	int tmp;
	// Line 522, Address: 0x200c40, Func Offset: 0
	// Line 527, Address: 0x200c44, Func Offset: 0x4
	// Line 522, Address: 0x200c48, Func Offset: 0x8
	// Line 527, Address: 0x200c4c, Func Offset: 0xc
	// Line 529, Address: 0x200c5c, Func Offset: 0x1c
	// Line 531, Address: 0x200c64, Func Offset: 0x24
	// Line 533, Address: 0x200c6c, Func Offset: 0x2c
	// Line 534, Address: 0x200c74, Func Offset: 0x34
	// Line 537, Address: 0x200c78, Func Offset: 0x38
	// Line 538, Address: 0x200c80, Func Offset: 0x40
	// Func End, Address: 0x200c8c, Func Offset: 0x4c
}

// 
// Start address: 0x200c90
int sdTrgStopLoopAll()
{
	int tmp;
	int i;
	// Line 547, Address: 0x200c90, Func Offset: 0
	// Line 553, Address: 0x200c94, Func Offset: 0x4
	// Line 547, Address: 0x200c98, Func Offset: 0x8
	// Line 553, Address: 0x200c9c, Func Offset: 0xc
	// Line 555, Address: 0x200cac, Func Offset: 0x1c
	// Line 557, Address: 0x200cb4, Func Offset: 0x24
	// Line 559, Address: 0x200cbc, Func Offset: 0x2c
	// Line 560, Address: 0x200cc4, Func Offset: 0x34
	// Line 563, Address: 0x200cc8, Func Offset: 0x38
	// Line 564, Address: 0x200cd8, Func Offset: 0x48
	// Line 568, Address: 0x200d08, Func Offset: 0x78
	// Line 569, Address: 0x200d10, Func Offset: 0x80
	// Func End, Address: 0x200d1c, Func Offset: 0x8c
}

// 
// Start address: 0x200d20
int sdTrgStopAll()
{
	int tmp;
	int i;
	// Line 578, Address: 0x200d20, Func Offset: 0
	// Line 584, Address: 0x200d24, Func Offset: 0x4
	// Line 578, Address: 0x200d28, Func Offset: 0x8
	// Line 584, Address: 0x200d2c, Func Offset: 0xc
	// Line 586, Address: 0x200d40, Func Offset: 0x20
	// Line 588, Address: 0x200d48, Func Offset: 0x28
	// Line 590, Address: 0x200d50, Func Offset: 0x30
	// Line 594, Address: 0x200d58, Func Offset: 0x38
	// Line 595, Address: 0x200d60, Func Offset: 0x40
	// Line 596, Address: 0x200d68, Func Offset: 0x48
	// Line 599, Address: 0x200d7c, Func Offset: 0x5c
	// Line 600, Address: 0x200d80, Func Offset: 0x60
	// Func End, Address: 0x200d90, Func Offset: 0x70
}

// 
// Start address: 0x200d90
int sdTrgSetVol(int id, int no, int ctl_id, int vol, int pan)
{
	int tmp;
	// Line 817, Address: 0x200d90, Func Offset: 0
	// Line 828, Address: 0x200d94, Func Offset: 0x4
	// Line 832, Address: 0x200dec, Func Offset: 0x5c
	// Line 834, Address: 0x200df4, Func Offset: 0x64
	// Line 836, Address: 0x200dfc, Func Offset: 0x6c
	// Line 837, Address: 0x200e04, Func Offset: 0x74
	// Line 840, Address: 0x200e08, Func Offset: 0x78
	// Line 841, Address: 0x200e10, Func Offset: 0x80
	// Func End, Address: 0x200e1c, Func Offset: 0x8c
}

// 
// Start address: 0x200e20
int sdTrgSetVolVab(int id, int vol)
{
	int tmp;
	// Line 851, Address: 0x200e24, Func Offset: 0x4
	// Line 856, Address: 0x200e28, Func Offset: 0x8
	// Line 851, Address: 0x200e2c, Func Offset: 0xc
	// Line 856, Address: 0x200e30, Func Offset: 0x10
	// Line 859, Address: 0x200e3c, Func Offset: 0x1c
	// Line 861, Address: 0x200e44, Func Offset: 0x24
	// Line 863, Address: 0x200e4c, Func Offset: 0x2c
	// Line 864, Address: 0x200e54, Func Offset: 0x34
	// Line 867, Address: 0x200e58, Func Offset: 0x38
	// Line 868, Address: 0x200e60, Func Offset: 0x40
	// Func End, Address: 0x200e6c, Func Offset: 0x4c
}

// 
// Start address: 0x200e70
int sdTrgSetMidiVol(int id, int no, int ctl_id, int chan, int vol, int pan)
{
	int tmp;
	// Line 920, Address: 0x200e70, Func Offset: 0
	// Line 931, Address: 0x200e74, Func Offset: 0x4
	// Line 935, Address: 0x200edc, Func Offset: 0x6c
	// Line 937, Address: 0x200ee4, Func Offset: 0x74
	// Line 939, Address: 0x200eec, Func Offset: 0x7c
	// Line 940, Address: 0x200ef4, Func Offset: 0x84
	// Line 943, Address: 0x200ef8, Func Offset: 0x88
	// Line 944, Address: 0x200f00, Func Offset: 0x90
	// Func End, Address: 0x200f0c, Func Offset: 0x9c
}

// 
// Start address: 0x200f10
void sdTrgInitFig()
{
	int i;
	// Line 990, Address: 0x200f10, Func Offset: 0
	// Line 995, Address: 0x200f14, Func Offset: 0x4
	// Line 990, Address: 0x200f18, Func Offset: 0x8
	// Line 995, Address: 0x200f1c, Func Offset: 0xc
	// Line 990, Address: 0x200f20, Func Offset: 0x10
	// Line 995, Address: 0x200f24, Func Offset: 0x14
	// Line 996, Address: 0x200f28, Func Offset: 0x18
	// Line 997, Address: 0x200f2c, Func Offset: 0x1c
	// Line 998, Address: 0x200f30, Func Offset: 0x20
	// Line 1001, Address: 0x200f74, Func Offset: 0x64
	// Line 1002, Address: 0x200f78, Func Offset: 0x68
	// Line 1003, Address: 0x200f80, Func Offset: 0x70
	// Line 1004, Address: 0x200f94, Func Offset: 0x84
	// Line 1005, Address: 0x200f9c, Func Offset: 0x8c
	// Line 1006, Address: 0x200fa4, Func Offset: 0x94
	// Func End, Address: 0x200fb4, Func Offset: 0xa4
}

// 
// Start address: 0x200fc0
void sdTrgInitCtl(int id)
{
	// Line 1017, Address: 0x200fc0, Func Offset: 0
	// Line 1018, Address: 0x200fd4, Func Offset: 0x14
	// Line 1017, Address: 0x200fd8, Func Offset: 0x18
	// Line 1018, Address: 0x200fdc, Func Offset: 0x1c
	// Line 1019, Address: 0x200fe8, Func Offset: 0x28
	// Line 1020, Address: 0x200ff4, Func Offset: 0x34
	// Func End, Address: 0x200ffc, Func Offset: 0x3c
}

// 
// Start address: 0x201000
int sdTrgSearchCtlId()
{
	int i;
	// Line 1035, Address: 0x201000, Func Offset: 0
	// Line 1038, Address: 0x20100c, Func Offset: 0xc
	// Line 1040, Address: 0x201018, Func Offset: 0x18
	// Line 1044, Address: 0x201020, Func Offset: 0x20
	// Line 1049, Address: 0x20103c, Func Offset: 0x3c
	// Line 1052, Address: 0x201048, Func Offset: 0x48
	// Line 1053, Address: 0x201050, Func Offset: 0x50
	// Func End, Address: 0x201058, Func Offset: 0x58
}

// 
// Start address: 0x201060
int sdTrgSearchReserve(int no)
{
	int i;
	// Line 1101, Address: 0x201060, Func Offset: 0
	// Line 1104, Address: 0x20106c, Func Offset: 0xc
	// Line 1105, Address: 0x201078, Func Offset: 0x18
	// Line 1109, Address: 0x201080, Func Offset: 0x20
	// Line 1114, Address: 0x20109c, Func Offset: 0x3c
	// Line 1117, Address: 0x2010a8, Func Offset: 0x48
	// Line 1118, Address: 0x2010b0, Func Offset: 0x50
	// Func End, Address: 0x2010b8, Func Offset: 0x58
}

