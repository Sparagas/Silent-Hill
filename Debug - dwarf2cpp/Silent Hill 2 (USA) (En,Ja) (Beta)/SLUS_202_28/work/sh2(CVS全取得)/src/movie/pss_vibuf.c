typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct SemaParam;


typedef unsigned long type_0[2];
typedef unsigned int type_1[4];
typedef unsigned short type_2[8];
typedef unsigned char type_3[16];

struct _anon0
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon1
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon2 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon0* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon2
{
	unsigned int d4madr;
	unsigned int d4tadr;
	unsigned int d4qwc;
	unsigned int d4chcr;
	unsigned int d3madr;
	unsigned int d3qwc;
	unsigned int d3chcr;
	unsigned int ipubp;
	unsigned int ipuctrl;
};

union _anon3
{
	<unknown fundamental type (0xa510)> q;
	unsigned long l[2];
	unsigned int i[4];
	unsigned short s[8];
	unsigned char c[16];
};

struct SemaParam
{
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	unsigned int attr;
	unsigned int option;
};


int getFIFOindex(_anon1* f, void* addr);
void setD3_CHCR(unsigned int val);
void setD4_CHCR(unsigned int val);
void scTag2(_anon3* q, void* addr, unsigned int id, unsigned int qwc);
int viBufCreate(_anon1* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int size, _anon0* ts, int n_ts);
int viBufReset(_anon1* f);
void viBufBeginPut(_anon1* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void viBufEndPut(_anon1* f, int size);
int viBufAddDMA(_anon1* f);
int viBufStopDMA(_anon1* f);
int viBufRestartDMA(_anon1* f);
int viBufDelete(_anon1* f);
void viBufFlush(_anon1* f);
int viBufModifyPts(_anon1* f, _anon0* new_ts);
int viBufPutTs(_anon1* f, _anon0* ts);
int viBufGetTs(_anon1* f, _anon0* ts);

// 
// Start address: 0x28c480
int getFIFOindex(_anon1* f, void* addr)
{
	// Line 71, Address: 0x28c480, Func Offset: 0
	// Line 72, Address: 0x28c49c, Func Offset: 0x1c
	// Line 76, Address: 0x28c4bc, Func Offset: 0x3c
	// Func End, Address: 0x28c4c4, Func Offset: 0x44
}

// 
// Start address: 0x28c4d0
void setD3_CHCR(unsigned int val)
{
	// Line 79, Address: 0x28c4d0, Func Offset: 0
	// Line 80, Address: 0x28c4e0, Func Offset: 0x10
	// Line 81, Address: 0x28c4e8, Func Offset: 0x18
	// Line 82, Address: 0x28c504, Func Offset: 0x34
	// Line 83, Address: 0x28c50c, Func Offset: 0x3c
	// Line 84, Address: 0x28c528, Func Offset: 0x58
	// Line 85, Address: 0x28c530, Func Offset: 0x60
	// Func End, Address: 0x28c544, Func Offset: 0x74
}

// 
// Start address: 0x28c550
void setD4_CHCR(unsigned int val)
{
	// Line 88, Address: 0x28c550, Func Offset: 0
	// Line 89, Address: 0x28c560, Func Offset: 0x10
	// Line 90, Address: 0x28c568, Func Offset: 0x18
	// Line 91, Address: 0x28c584, Func Offset: 0x34
	// Line 92, Address: 0x28c58c, Func Offset: 0x3c
	// Line 93, Address: 0x28c5a8, Func Offset: 0x58
	// Line 94, Address: 0x28c5b0, Func Offset: 0x60
	// Func End, Address: 0x28c5c4, Func Offset: 0x74
}

// 
// Start address: 0x28c5d0
void scTag2(_anon3* q, void* addr, unsigned int id, unsigned int qwc)
{
	// Line 103, Address: 0x28c5d0, Func Offset: 0
	// Line 107, Address: 0x28c5fc, Func Offset: 0x2c
	// Func End, Address: 0x28c604, Func Offset: 0x34
}

// 
// Start address: 0x28c610
int viBufCreate(_anon1* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int size, _anon0* ts, int n_ts)
{
	SemaParam param;
	// Line 116, Address: 0x28c610, Func Offset: 0
	// Line 119, Address: 0x28c620, Func Offset: 0x10
	// Line 120, Address: 0x28c624, Func Offset: 0x14
	// Line 121, Address: 0x28c638, Func Offset: 0x28
	// Line 122, Address: 0x28c63c, Func Offset: 0x2c
	// Line 124, Address: 0x28c644, Func Offset: 0x34
	// Line 125, Address: 0x28c648, Func Offset: 0x38
	// Line 131, Address: 0x28c64c, Func Offset: 0x3c
	// Line 132, Address: 0x28c654, Func Offset: 0x44
	// Line 133, Address: 0x28c658, Func Offset: 0x48
	// Line 139, Address: 0x28c668, Func Offset: 0x58
	// Line 141, Address: 0x28c674, Func Offset: 0x64
	// Line 143, Address: 0x28c678, Func Offset: 0x68
	// Line 144, Address: 0x28c67c, Func Offset: 0x6c
	// Func End, Address: 0x28c690, Func Offset: 0x80
}

// 
// Start address: 0x28c690
int viBufReset(_anon1* f)
{
	int i;
	// Line 151, Address: 0x28c690, Func Offset: 0
	// Line 154, Address: 0x28c6a4, Func Offset: 0x14
	// Line 155, Address: 0x28c6a8, Func Offset: 0x18
	// Line 156, Address: 0x28c6ac, Func Offset: 0x1c
	// Line 157, Address: 0x28c6b0, Func Offset: 0x20
	// Line 159, Address: 0x28c6b8, Func Offset: 0x28
	// Line 160, Address: 0x28c6bc, Func Offset: 0x2c
	// Line 161, Address: 0x28c6c0, Func Offset: 0x30
	// Line 162, Address: 0x28c6cc, Func Offset: 0x3c
	// Line 163, Address: 0x28c6e8, Func Offset: 0x58
	// Line 164, Address: 0x28c6f4, Func Offset: 0x64
	// Line 165, Address: 0x28c700, Func Offset: 0x70
	// Line 166, Address: 0x28c70c, Func Offset: 0x7c
	// Line 172, Address: 0x28c720, Func Offset: 0x90
	// Line 173, Address: 0x28c72c, Func Offset: 0x9c
	// Line 179, Address: 0x28c75c, Func Offset: 0xcc
	// Line 180, Address: 0x28c770, Func Offset: 0xe0
	// Line 187, Address: 0x28c798, Func Offset: 0x108
	// Line 188, Address: 0x28c7a0, Func Offset: 0x110
	// Line 189, Address: 0x28c7b4, Func Offset: 0x124
	// Line 190, Address: 0x28c7c8, Func Offset: 0x138
	// Line 192, Address: 0x28c7d4, Func Offset: 0x144
	// Line 193, Address: 0x28c7d8, Func Offset: 0x148
	// Func End, Address: 0x28c7f0, Func Offset: 0x160
}

// 
// Start address: 0x28c7f0
void viBufBeginPut(_anon1* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	int fn;
	int fs;
	int en;
	int es;
	// Line 201, Address: 0x28c7f0, Func Offset: 0
	// Line 207, Address: 0x28c820, Func Offset: 0x30
	// Line 209, Address: 0x28c82c, Func Offset: 0x3c
	// Line 210, Address: 0x28c83c, Func Offset: 0x4c
	// Line 212, Address: 0x28c84c, Func Offset: 0x5c
	// Line 213, Address: 0x28c868, Func Offset: 0x78
	// Line 215, Address: 0x28c86c, Func Offset: 0x7c
	// Line 216, Address: 0x28c87c, Func Offset: 0x8c
	// Line 217, Address: 0x28c888, Func Offset: 0x98
	// Line 218, Address: 0x28c88c, Func Offset: 0x9c
	// Line 219, Address: 0x28c890, Func Offset: 0xa0
	// Line 220, Address: 0x28c894, Func Offset: 0xa4
	// Line 221, Address: 0x28c89c, Func Offset: 0xac
	// Line 222, Address: 0x28c8a8, Func Offset: 0xb8
	// Line 223, Address: 0x28c8b4, Func Offset: 0xc4
	// Line 224, Address: 0x28c8bc, Func Offset: 0xcc
	// Line 227, Address: 0x28c8cc, Func Offset: 0xdc
	// Line 228, Address: 0x28c8d8, Func Offset: 0xe8
	// Func End, Address: 0x28c8fc, Func Offset: 0x10c
}

// 
// Start address: 0x28c900
void viBufEndPut(_anon1* f, int size)
{
	// Line 235, Address: 0x28c900, Func Offset: 0
	// Line 236, Address: 0x28c918, Func Offset: 0x18
	// Line 238, Address: 0x28c924, Func Offset: 0x24
	// Line 239, Address: 0x28c930, Func Offset: 0x30
	// Line 241, Address: 0x28c944, Func Offset: 0x44
	// Line 242, Address: 0x28c950, Func Offset: 0x50
	// Func End, Address: 0x28c968, Func Offset: 0x68
}

// 
// Start address: 0x28c970
int viBufAddDMA(_anon1* f)
{
	int read_n;
	int read_start;
	int consume;
	int isNewData;
	unsigned int d4chcr;
	int last;
	int id;
	int index;
	int i;
	// Line 249, Address: 0x28c970, Func Offset: 0
	// Line 255, Address: 0x28c994, Func Offset: 0x24
	// Line 259, Address: 0x28c998, Func Offset: 0x28
	// Line 261, Address: 0x28c9a4, Func Offset: 0x34
	// Line 262, Address: 0x28c9b0, Func Offset: 0x40
	// Line 263, Address: 0x28c9c0, Func Offset: 0x50
	// Line 275, Address: 0x28c9cc, Func Offset: 0x5c
	// Line 276, Address: 0x28c9d8, Func Offset: 0x68
	// Line 282, Address: 0x28c9e0, Func Offset: 0x70
	// Line 283, Address: 0x28c9f4, Func Offset: 0x84
	// Line 284, Address: 0x28ca14, Func Offset: 0xa4
	// Line 285, Address: 0x28ca2c, Func Offset: 0xbc
	// Line 291, Address: 0x28ca38, Func Offset: 0xc8
	// Line 292, Address: 0x28ca58, Func Offset: 0xe8
	// Line 293, Address: 0x28ca70, Func Offset: 0x100
	// Line 299, Address: 0x28ca90, Func Offset: 0x120
	// Line 300, Address: 0x28ca98, Func Offset: 0x128
	// Line 301, Address: 0x28cac0, Func Offset: 0x150
	// Line 307, Address: 0x28cae8, Func Offset: 0x178
	// Line 311, Address: 0x28caec, Func Offset: 0x17c
	// Line 312, Address: 0x28caf8, Func Offset: 0x188
	// Line 313, Address: 0x28cb14, Func Offset: 0x1a4
	// Line 319, Address: 0x28cb38, Func Offset: 0x1c8
	// Line 320, Address: 0x28cb50, Func Offset: 0x1e0
	// Line 322, Address: 0x28cb64, Func Offset: 0x1f4
	// Line 328, Address: 0x28cb70, Func Offset: 0x200
	// Line 329, Address: 0x28cb7c, Func Offset: 0x20c
	// Line 331, Address: 0x28cb84, Func Offset: 0x214
	// Line 333, Address: 0x28cb94, Func Offset: 0x224
	// Line 336, Address: 0x28cba0, Func Offset: 0x230
	// Line 338, Address: 0x28cbac, Func Offset: 0x23c
	// Line 339, Address: 0x28cbb0, Func Offset: 0x240
	// Func End, Address: 0x28cbd8, Func Offset: 0x268
}

// 
// Start address: 0x28cbe0
int viBufStopDMA(_anon1* f)
{
	// Line 346, Address: 0x28cbe0, Func Offset: 0
	// Line 347, Address: 0x28cbf0, Func Offset: 0x10
	// Line 349, Address: 0x28cbfc, Func Offset: 0x1c
	// Line 351, Address: 0x28cc00, Func Offset: 0x20
	// Line 353, Address: 0x28cc0c, Func Offset: 0x2c
	// Line 354, Address: 0x28cc18, Func Offset: 0x38
	// Line 355, Address: 0x28cc24, Func Offset: 0x44
	// Line 356, Address: 0x28cc30, Func Offset: 0x50
	// Line 360, Address: 0x28cc3c, Func Offset: 0x5c
	// Line 363, Address: 0x28cc58, Func Offset: 0x78
	// Line 364, Address: 0x28cc64, Func Offset: 0x84
	// Line 365, Address: 0x28cc70, Func Offset: 0x90
	// Line 366, Address: 0x28cc7c, Func Offset: 0x9c
	// Line 368, Address: 0x28cc88, Func Offset: 0xa8
	// Line 369, Address: 0x28cc94, Func Offset: 0xb4
	// Line 371, Address: 0x28cca0, Func Offset: 0xc0
	// Line 373, Address: 0x28ccac, Func Offset: 0xcc
	// Line 374, Address: 0x28ccb0, Func Offset: 0xd0
	// Func End, Address: 0x28ccc4, Func Offset: 0xe4
}

// 
// Start address: 0x28ccd0
int viBufRestartDMA(_anon1* f)
{
	int id;
	int index_next;
	int index;
	unsigned int d4chcr_next;
	unsigned int d4tadr_next;
	unsigned int d4qwc_next;
	unsigned int d4madr_next;
	int ifc;
	int fp;
	int bp;
	// Line 381, Address: 0x28ccd0, Func Offset: 0
	// Line 382, Address: 0x28ccf8, Func Offset: 0x28
	// Line 383, Address: 0x28cd00, Func Offset: 0x30
	// Line 384, Address: 0x28cd08, Func Offset: 0x38
	// Line 385, Address: 0x28cd10, Func Offset: 0x40
	// Line 386, Address: 0x28cd20, Func Offset: 0x50
	// Line 387, Address: 0x28cd28, Func Offset: 0x58
	// Line 388, Address: 0x28cd2c, Func Offset: 0x5c
	// Line 393, Address: 0x28cd34, Func Offset: 0x64
	// Line 398, Address: 0x28cd40, Func Offset: 0x70
	// Line 399, Address: 0x28cd50, Func Offset: 0x80
	// Line 400, Address: 0x28cd58, Func Offset: 0x88
	// Line 401, Address: 0x28cd64, Func Offset: 0x94
	// Line 402, Address: 0x28cd74, Func Offset: 0xa4
	// Line 406, Address: 0x28cda4, Func Offset: 0xd4
	// Line 409, Address: 0x28cdbc, Func Offset: 0xec
	// Line 410, Address: 0x28cdf0, Func Offset: 0x120
	// Line 411, Address: 0x28cdf8, Func Offset: 0x128
	// Line 413, Address: 0x28ce04, Func Offset: 0x134
	// Line 415, Address: 0x28ce38, Func Offset: 0x168
	// Line 416, Address: 0x28ce50, Func Offset: 0x180
	// Line 417, Address: 0x28ce64, Func Offset: 0x194
	// Line 421, Address: 0x28cec0, Func Offset: 0x1f0
	// Line 424, Address: 0x28ced8, Func Offset: 0x208
	// Line 425, Address: 0x28cf08, Func Offset: 0x238
	// Line 426, Address: 0x28cf0c, Func Offset: 0x23c
	// Line 431, Address: 0x28cf18, Func Offset: 0x248
	// Line 432, Address: 0x28cf30, Func Offset: 0x260
	// Line 433, Address: 0x28cf38, Func Offset: 0x268
	// Line 434, Address: 0x28cf44, Func Offset: 0x274
	// Line 437, Address: 0x28cf54, Func Offset: 0x284
	// Line 439, Address: 0x28cf60, Func Offset: 0x290
	// Line 441, Address: 0x28cf7c, Func Offset: 0x2ac
	// Line 443, Address: 0x28cf84, Func Offset: 0x2b4
	// Line 447, Address: 0x28cfa0, Func Offset: 0x2d0
	// Line 448, Address: 0x28cfa8, Func Offset: 0x2d8
	// Line 449, Address: 0x28cfb0, Func Offset: 0x2e0
	// Line 450, Address: 0x28cfb8, Func Offset: 0x2e8
	// Line 451, Address: 0x28cfc4, Func Offset: 0x2f4
	// Line 454, Address: 0x28cfd0, Func Offset: 0x300
	// Line 456, Address: 0x28cfdc, Func Offset: 0x30c
	// Line 458, Address: 0x28cfe4, Func Offset: 0x314
	// Line 460, Address: 0x28cff0, Func Offset: 0x320
	// Line 461, Address: 0x28cff4, Func Offset: 0x324
	// Func End, Address: 0x28d020, Func Offset: 0x350
}

// 
// Start address: 0x28d020
int viBufDelete(_anon1* f)
{
	// Line 468, Address: 0x28d020, Func Offset: 0
	// Line 469, Address: 0x28d030, Func Offset: 0x10
	// Line 470, Address: 0x28d03c, Func Offset: 0x1c
	// Line 471, Address: 0x28d044, Func Offset: 0x24
	// Line 472, Address: 0x28d04c, Func Offset: 0x2c
	// Line 474, Address: 0x28d054, Func Offset: 0x34
	// Line 475, Address: 0x28d060, Func Offset: 0x40
	// Line 476, Address: 0x28d064, Func Offset: 0x44
	// Func End, Address: 0x28d078, Func Offset: 0x58
}

// 
// Start address: 0x28d080
void viBufFlush(_anon1* f)
{
	// Line 517, Address: 0x28d080, Func Offset: 0
	// Line 518, Address: 0x28d090, Func Offset: 0x10
	// Line 520, Address: 0x28d09c, Func Offset: 0x1c
	// Line 522, Address: 0x28d0c0, Func Offset: 0x40
	// Line 523, Address: 0x28d0cc, Func Offset: 0x4c
	// Func End, Address: 0x28d0e0, Func Offset: 0x60
}

// 
// Start address: 0x28d0e0
int viBufModifyPts(_anon1* f, _anon0* new_ts)
{
	int len;
	int loop;
	int datasize;
	int rd;
	_anon0* ts;
	// Line 532, Address: 0x28d0e0, Func Offset: 0
	// Line 533, Address: 0x28d104, Func Offset: 0x24
	// Line 534, Address: 0x28d10c, Func Offset: 0x2c
	// Line 536, Address: 0x28d110, Func Offset: 0x30
	// Line 537, Address: 0x28d118, Func Offset: 0x38
	// Line 538, Address: 0x28d120, Func Offset: 0x40
	// Line 540, Address: 0x28d134, Func Offset: 0x54
	// Line 544, Address: 0x28d14c, Func Offset: 0x6c
	// Line 545, Address: 0x28d178, Func Offset: 0x98
	// Line 547, Address: 0x28d198, Func Offset: 0xb8
	// Line 548, Address: 0x28d1b0, Func Offset: 0xd0
	// Line 550, Address: 0x28d1bc, Func Offset: 0xdc
	// Line 551, Address: 0x28d1c8, Func Offset: 0xe8
	// Line 553, Address: 0x28d1d4, Func Offset: 0xf4
	// Line 554, Address: 0x28d1dc, Func Offset: 0xfc
	// Line 555, Address: 0x28d1e0, Func Offset: 0x100
	// Line 556, Address: 0x28d1e4, Func Offset: 0x104
	// Line 558, Address: 0x28d1e8, Func Offset: 0x108
	// Line 560, Address: 0x28d208, Func Offset: 0x128
	// Line 561, Address: 0x28d210, Func Offset: 0x130
	// Line 562, Address: 0x28d214, Func Offset: 0x134
	// Line 564, Address: 0x28d218, Func Offset: 0x138
	// Line 565, Address: 0x28d230, Func Offset: 0x150
	// Line 568, Address: 0x28d238, Func Offset: 0x158
	// Line 569, Address: 0x28d23c, Func Offset: 0x15c
	// Func End, Address: 0x28d244, Func Offset: 0x164
}

// 
// Start address: 0x28d250
int viBufPutTs(_anon1* f, _anon0* ts)
{
	int ret;
	// Line 576, Address: 0x28d250, Func Offset: 0
	// Line 577, Address: 0x28d26c, Func Offset: 0x1c
	// Line 579, Address: 0x28d270, Func Offset: 0x20
	// Line 581, Address: 0x28d27c, Func Offset: 0x2c
	// Line 583, Address: 0x28d290, Func Offset: 0x40
	// Line 585, Address: 0x28d2a0, Func Offset: 0x50
	// Line 587, Address: 0x28d2b8, Func Offset: 0x68
	// Line 588, Address: 0x28d2d4, Func Offset: 0x84
	// Line 589, Address: 0x28d2f4, Func Offset: 0xa4
	// Line 590, Address: 0x28d314, Func Offset: 0xc4
	// Line 592, Address: 0x28d334, Func Offset: 0xe4
	// Line 593, Address: 0x28d340, Func Offset: 0xf0
	// Line 595, Address: 0x28d360, Func Offset: 0x110
	// Line 598, Address: 0x28d364, Func Offset: 0x114
	// Line 600, Address: 0x28d370, Func Offset: 0x120
	// Line 601, Address: 0x28d374, Func Offset: 0x124
	// Func End, Address: 0x28d390, Func Offset: 0x140
}

// 
// Start address: 0x28d390
int viBufGetTs(_anon1* f, _anon0* ts)
{
	int rd;
	int i;
	int wt;
	int tscount;
	int isEnd;
	int datasize;
	unsigned int stop;
	unsigned int d4madr_next;
	int ifc;
	int fp;
	int bp;
	unsigned int ipubp;
	unsigned int d4madr;
	// Line 607, Address: 0x28d390, Func Offset: 0
	// Line 608, Address: 0x28d3b8, Func Offset: 0x28
	// Line 609, Address: 0x28d3c0, Func Offset: 0x30
	// Line 610, Address: 0x28d3c8, Func Offset: 0x38
	// Line 611, Address: 0x28d3d0, Func Offset: 0x40
	// Line 612, Address: 0x28d3d8, Func Offset: 0x48
	// Line 613, Address: 0x28d3e0, Func Offset: 0x50
	// Line 615, Address: 0x28d3ec, Func Offset: 0x5c
	// Line 616, Address: 0x28d3f4, Func Offset: 0x64
	// Line 621, Address: 0x28d3f8, Func Offset: 0x68
	// Line 623, Address: 0x28d404, Func Offset: 0x74
	// Line 624, Address: 0x28d40c, Func Offset: 0x7c
	// Line 626, Address: 0x28d410, Func Offset: 0x80
	// Line 629, Address: 0x28d434, Func Offset: 0xa4
	// Line 630, Address: 0x28d438, Func Offset: 0xa8
	// Line 632, Address: 0x28d43c, Func Offset: 0xac
	// Line 634, Address: 0x28d448, Func Offset: 0xb8
	// Line 636, Address: 0x28d468, Func Offset: 0xd8
	// Line 639, Address: 0x28d4a8, Func Offset: 0x118
	// Line 640, Address: 0x28d4b0, Func Offset: 0x120
	// Line 641, Address: 0x28d4c0, Func Offset: 0x130
	// Line 642, Address: 0x28d4d0, Func Offset: 0x140
	// Line 644, Address: 0x28d4dc, Func Offset: 0x14c
	// Line 645, Address: 0x28d4e0, Func Offset: 0x150
	// Line 646, Address: 0x28d504, Func Offset: 0x174
	// Line 647, Address: 0x28d508, Func Offset: 0x178
	// Line 649, Address: 0x28d528, Func Offset: 0x198
	// Line 651, Address: 0x28d534, Func Offset: 0x1a4
	// Line 652, Address: 0x28d538, Func Offset: 0x1a8
	// Func End, Address: 0x28d560, Func Offset: 0x1d0
}

