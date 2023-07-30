typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct SemaParam;


typedef unsigned long type_0[2];
typedef unsigned int type_1[4];
typedef unsigned short type_2[8];
typedef unsigned char type_3[16];

struct _anon0
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon3 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon1* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon1
{
	long pts;
	long dts;
	int pos;
	int len;
};

union _anon2
{
	<unknown fundamental type (0xa510)> q;
	unsigned long l[2];
	unsigned int i[4];
	unsigned short s[8];
	unsigned char c[16];
};

struct _anon3
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

struct SemaParam
{
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	unsigned int attr;
	unsigned int option;
};


int getFIFOindex(_anon0* f, void* addr);
void setD3_CHCR(unsigned int val);
void setD4_CHCR(unsigned int val);
void scTag2(_anon2* q, void* addr, unsigned int id, unsigned int qwc);
int viBufCreate(_anon0* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int size, _anon1* ts, int n_ts);
int viBufReset(_anon0* f);
void viBufBeginPut(_anon0* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void viBufEndPut(_anon0* f, int size);
int viBufAddDMA(_anon0* f);
int viBufStopDMA(_anon0* f);
int viBufRestartDMA(_anon0* f);
int viBufDelete(_anon0* f);
int viBufCount(_anon0* f);
void viBufFlush(_anon0* f);
int viBufModifyPts(_anon0* f, _anon1* new_ts);
int viBufPutTs(_anon0* f, _anon1* ts);
int viBufGetTs(_anon0* f, _anon1* ts);

// 
// Start address: 0x23a900
int getFIFOindex(_anon0* f, void* addr)
{
	// Line 70, Address: 0x23a900, Func Offset: 0
	// Line 71, Address: 0x23a918, Func Offset: 0x18
	// Line 72, Address: 0x23a94c, Func Offset: 0x4c
	// Line 74, Address: 0x23a958, Func Offset: 0x58
	// Line 76, Address: 0x23a970, Func Offset: 0x70
	// Func End, Address: 0x23a988, Func Offset: 0x88
}

// 
// Start address: 0x23a990
void setD3_CHCR(unsigned int val)
{
	unsigned int stat;
	// Line 80, Address: 0x23a990, Func Offset: 0
	// Line 81, Address: 0x23a9ac, Func Offset: 0x1c
	// Line 82, Address: 0x23a9cc, Func Offset: 0x3c
	// Line 83, Address: 0x23a9d8, Func Offset: 0x48
	// Line 84, Address: 0x23a9fc, Func Offset: 0x6c
	// Line 85, Address: 0x23aa00, Func Offset: 0x70
	// Func End, Address: 0x23aa08, Func Offset: 0x78
}

// 
// Start address: 0x23aa10
void setD4_CHCR(unsigned int val)
{
	unsigned int stat;
	// Line 89, Address: 0x23aa10, Func Offset: 0
	// Line 90, Address: 0x23aa2c, Func Offset: 0x1c
	// Line 91, Address: 0x23aa4c, Func Offset: 0x3c
	// Line 92, Address: 0x23aa58, Func Offset: 0x48
	// Line 93, Address: 0x23aa7c, Func Offset: 0x6c
	// Line 94, Address: 0x23aa80, Func Offset: 0x70
	// Func End, Address: 0x23aa88, Func Offset: 0x78
}

// 
// Start address: 0x23aa90
void scTag2(_anon2* q, void* addr, unsigned int id, unsigned int qwc)
{
	// Line 102, Address: 0x23aa90, Func Offset: 0
	// Line 103, Address: 0x23aaa4, Func Offset: 0x14
	// Line 107, Address: 0x23aae0, Func Offset: 0x50
	// Func End, Address: 0x23aaec, Func Offset: 0x5c
}

// 
// Start address: 0x23aaf0
int viBufCreate(_anon0* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int size, _anon1* ts, int n_ts)
{
	SemaParam param;
	// Line 116, Address: 0x23aaf0, Func Offset: 0
	// Line 119, Address: 0x23ab14, Func Offset: 0x24
	// Line 120, Address: 0x23ab20, Func Offset: 0x30
	// Line 121, Address: 0x23ab3c, Func Offset: 0x4c
	// Line 122, Address: 0x23ab48, Func Offset: 0x58
	// Line 124, Address: 0x23ab58, Func Offset: 0x68
	// Line 125, Address: 0x23ab64, Func Offset: 0x74
	// Line 131, Address: 0x23ab70, Func Offset: 0x80
	// Line 132, Address: 0x23ab78, Func Offset: 0x88
	// Line 133, Address: 0x23ab80, Func Offset: 0x90
	// Line 139, Address: 0x23ab94, Func Offset: 0xa4
	// Line 141, Address: 0x23aba0, Func Offset: 0xb0
	// Line 143, Address: 0x23aba8, Func Offset: 0xb8
	// Line 144, Address: 0x23abac, Func Offset: 0xbc
	// Func End, Address: 0x23abc0, Func Offset: 0xd0
}

// 
// Start address: 0x23abc0
int viBufReset(_anon0* f)
{
	int i;
	// Line 151, Address: 0x23abc0, Func Offset: 0
	// Line 154, Address: 0x23abf0, Func Offset: 0x30
	// Line 155, Address: 0x23abf8, Func Offset: 0x38
	// Line 156, Address: 0x23ac00, Func Offset: 0x40
	// Line 157, Address: 0x23ac08, Func Offset: 0x48
	// Line 159, Address: 0x23ac14, Func Offset: 0x54
	// Line 160, Address: 0x23ac1c, Func Offset: 0x5c
	// Line 161, Address: 0x23ac24, Func Offset: 0x64
	// Line 162, Address: 0x23ac30, Func Offset: 0x70
	// Line 163, Address: 0x23ac50, Func Offset: 0x90
	// Line 164, Address: 0x23ac70, Func Offset: 0xb0
	// Line 165, Address: 0x23ac8c, Func Offset: 0xcc
	// Line 166, Address: 0x23aca8, Func Offset: 0xe8
	// Line 172, Address: 0x23acc4, Func Offset: 0x104
	// Line 173, Address: 0x23acd0, Func Offset: 0x110
	// Line 179, Address: 0x23ad10, Func Offset: 0x150
	// Line 180, Address: 0x23ad2c, Func Offset: 0x16c
	// Line 187, Address: 0x23ad64, Func Offset: 0x1a4
	// Line 188, Address: 0x23ad70, Func Offset: 0x1b0
	// Line 189, Address: 0x23ad9c, Func Offset: 0x1dc
	// Line 190, Address: 0x23adc8, Func Offset: 0x208
	// Line 192, Address: 0x23add4, Func Offset: 0x214
	// Line 193, Address: 0x23add8, Func Offset: 0x218
	// Func End, Address: 0x23ae0c, Func Offset: 0x24c
}

// 
// Start address: 0x23ae10
void viBufBeginPut(_anon0* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	int fn;
	int fs;
	int en;
	int es;
	// Line 201, Address: 0x23ae10, Func Offset: 0
	// Line 207, Address: 0x23ae3c, Func Offset: 0x2c
	// Line 209, Address: 0x23ae4c, Func Offset: 0x3c
	// Line 210, Address: 0x23ae64, Func Offset: 0x54
	// Line 212, Address: 0x23ae80, Func Offset: 0x70
	// Line 213, Address: 0x23aea4, Func Offset: 0x94
	// Line 215, Address: 0x23aeb0, Func Offset: 0xa0
	// Line 216, Address: 0x23aec8, Func Offset: 0xb8
	// Line 217, Address: 0x23aedc, Func Offset: 0xcc
	// Line 218, Address: 0x23aee4, Func Offset: 0xd4
	// Line 219, Address: 0x23aeec, Func Offset: 0xdc
	// Line 220, Address: 0x23aef4, Func Offset: 0xe4
	// Line 221, Address: 0x23aefc, Func Offset: 0xec
	// Line 222, Address: 0x23af10, Func Offset: 0x100
	// Line 223, Address: 0x23af24, Func Offset: 0x114
	// Line 224, Address: 0x23af34, Func Offset: 0x124
	// Line 227, Address: 0x23af4c, Func Offset: 0x13c
	// Line 228, Address: 0x23af5c, Func Offset: 0x14c
	// Func End, Address: 0x23af7c, Func Offset: 0x16c
}

// 
// Start address: 0x23af80
void viBufEndPut(_anon0* f, int size)
{
	// Line 235, Address: 0x23af80, Func Offset: 0
	// Line 236, Address: 0x23af90, Func Offset: 0x10
	// Line 238, Address: 0x23afa0, Func Offset: 0x20
	// Line 239, Address: 0x23afb4, Func Offset: 0x34
	// Line 241, Address: 0x23afd0, Func Offset: 0x50
	// Line 242, Address: 0x23afe0, Func Offset: 0x60
	// Func End, Address: 0x23aff0, Func Offset: 0x70
}

// 
// Start address: 0x23aff0
int viBufAddDMA(_anon0* f)
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
	// Line 249, Address: 0x23aff0, Func Offset: 0
	// Line 255, Address: 0x23b020, Func Offset: 0x30
	// Line 259, Address: 0x23b024, Func Offset: 0x34
	// Line 261, Address: 0x23b034, Func Offset: 0x44
	// Line 262, Address: 0x23b044, Func Offset: 0x54
	// Line 263, Address: 0x23b054, Func Offset: 0x64
	// Line 275, Address: 0x23b060, Func Offset: 0x70
	// Line 276, Address: 0x23b06c, Func Offset: 0x7c
	// Line 282, Address: 0x23b078, Func Offset: 0x88
	// Line 283, Address: 0x23b094, Func Offset: 0xa4
	// Line 284, Address: 0x23b0c4, Func Offset: 0xd4
	// Line 285, Address: 0x23b0f0, Func Offset: 0x100
	// Line 291, Address: 0x23b100, Func Offset: 0x110
	// Line 292, Address: 0x23b130, Func Offset: 0x140
	// Line 293, Address: 0x23b150, Func Offset: 0x160
	// Line 299, Address: 0x23b178, Func Offset: 0x188
	// Line 300, Address: 0x23b180, Func Offset: 0x190
	// Line 301, Address: 0x23b1bc, Func Offset: 0x1cc
	// Line 307, Address: 0x23b1ec, Func Offset: 0x1fc
	// Line 310, Address: 0x23b1f0, Func Offset: 0x200
	// Line 311, Address: 0x23b1f4, Func Offset: 0x204
	// Line 312, Address: 0x23b200, Func Offset: 0x210
	// Line 313, Address: 0x23b224, Func Offset: 0x234
	// Line 319, Address: 0x23b254, Func Offset: 0x264
	// Line 320, Address: 0x23b270, Func Offset: 0x280
	// Line 322, Address: 0x23b284, Func Offset: 0x294
	// Line 328, Address: 0x23b294, Func Offset: 0x2a4
	// Line 329, Address: 0x23b2a4, Func Offset: 0x2b4
	// Line 331, Address: 0x23b2ac, Func Offset: 0x2bc
	// Line 333, Address: 0x23b2bc, Func Offset: 0x2cc
	// Line 336, Address: 0x23b2c8, Func Offset: 0x2d8
	// Line 338, Address: 0x23b2d8, Func Offset: 0x2e8
	// Line 339, Address: 0x23b2dc, Func Offset: 0x2ec
	// Func End, Address: 0x23b310, Func Offset: 0x320
}

// 
// Start address: 0x23b310
int viBufStopDMA(_anon0* f)
{
	// Line 346, Address: 0x23b310, Func Offset: 0
	// Line 347, Address: 0x23b31c, Func Offset: 0xc
	// Line 349, Address: 0x23b32c, Func Offset: 0x1c
	// Line 351, Address: 0x23b334, Func Offset: 0x24
	// Line 353, Address: 0x23b340, Func Offset: 0x30
	// Line 354, Address: 0x23b354, Func Offset: 0x44
	// Line 355, Address: 0x23b368, Func Offset: 0x58
	// Line 356, Address: 0x23b37c, Func Offset: 0x6c
	// Line 360, Address: 0x23b390, Func Offset: 0x80
	// Line 363, Address: 0x23b3ac, Func Offset: 0x9c
	// Line 364, Address: 0x23b3b8, Func Offset: 0xa8
	// Line 365, Address: 0x23b3cc, Func Offset: 0xbc
	// Line 366, Address: 0x23b3e0, Func Offset: 0xd0
	// Line 368, Address: 0x23b3f4, Func Offset: 0xe4
	// Line 369, Address: 0x23b408, Func Offset: 0xf8
	// Line 371, Address: 0x23b41c, Func Offset: 0x10c
	// Line 373, Address: 0x23b42c, Func Offset: 0x11c
	// Line 374, Address: 0x23b430, Func Offset: 0x120
	// Func End, Address: 0x23b440, Func Offset: 0x130
}

// 
// Start address: 0x23b440
int viBufRestartDMA(_anon0* f)
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
	// Line 381, Address: 0x23b440, Func Offset: 0
	// Line 382, Address: 0x23b470, Func Offset: 0x30
	// Line 383, Address: 0x23b480, Func Offset: 0x40
	// Line 384, Address: 0x23b490, Func Offset: 0x50
	// Line 385, Address: 0x23b4a0, Func Offset: 0x60
	// Line 386, Address: 0x23b4b4, Func Offset: 0x74
	// Line 387, Address: 0x23b4c4, Func Offset: 0x84
	// Line 388, Address: 0x23b4cc, Func Offset: 0x8c
	// Line 393, Address: 0x23b4d8, Func Offset: 0x98
	// Line 398, Address: 0x23b4e8, Func Offset: 0xa8
	// Line 399, Address: 0x23b4fc, Func Offset: 0xbc
	// Line 400, Address: 0x23b50c, Func Offset: 0xcc
	// Line 401, Address: 0x23b51c, Func Offset: 0xdc
	// Line 402, Address: 0x23b544, Func Offset: 0x104
	// Line 406, Address: 0x23b5b4, Func Offset: 0x174
	// Line 409, Address: 0x23b5d0, Func Offset: 0x190
	// Line 410, Address: 0x23b648, Func Offset: 0x208
	// Line 411, Address: 0x23b65c, Func Offset: 0x21c
	// Line 413, Address: 0x23b66c, Func Offset: 0x22c
	// Line 415, Address: 0x23b6a8, Func Offset: 0x268
	// Line 416, Address: 0x23b6d8, Func Offset: 0x298
	// Line 417, Address: 0x23b6f0, Func Offset: 0x2b0
	// Line 421, Address: 0x23b788, Func Offset: 0x348
	// Line 424, Address: 0x23b7a4, Func Offset: 0x364
	// Line 425, Address: 0x23b824, Func Offset: 0x3e4
	// Line 426, Address: 0x23b82c, Func Offset: 0x3ec
	// Line 431, Address: 0x23b83c, Func Offset: 0x3fc
	// Line 432, Address: 0x23b85c, Func Offset: 0x41c
	// Line 433, Address: 0x23b870, Func Offset: 0x430
	// Line 434, Address: 0x23b884, Func Offset: 0x444
	// Line 437, Address: 0x23b898, Func Offset: 0x458
	// Line 439, Address: 0x23b8a8, Func Offset: 0x468
	// Line 441, Address: 0x23b8c4, Func Offset: 0x484
	// Line 443, Address: 0x23b8d4, Func Offset: 0x494
	// Line 447, Address: 0x23b8f0, Func Offset: 0x4b0
	// Line 448, Address: 0x23b8fc, Func Offset: 0x4bc
	// Line 449, Address: 0x23b908, Func Offset: 0x4c8
	// Line 450, Address: 0x23b914, Func Offset: 0x4d4
	// Line 451, Address: 0x23b924, Func Offset: 0x4e4
	// Line 454, Address: 0x23b930, Func Offset: 0x4f0
	// Line 456, Address: 0x23b944, Func Offset: 0x504
	// Line 458, Address: 0x23b950, Func Offset: 0x510
	// Line 460, Address: 0x23b960, Func Offset: 0x520
	// Line 461, Address: 0x23b964, Func Offset: 0x524
	// Func End, Address: 0x23b998, Func Offset: 0x558
}

// 
// Start address: 0x23b9a0
int viBufDelete(_anon0* f)
{
	// Line 468, Address: 0x23b9a0, Func Offset: 0
	// Line 469, Address: 0x23b9ac, Func Offset: 0xc
	// Line 470, Address: 0x23b9b8, Func Offset: 0x18
	// Line 471, Address: 0x23b9c4, Func Offset: 0x24
	// Line 472, Address: 0x23b9d0, Func Offset: 0x30
	// Line 474, Address: 0x23b9dc, Func Offset: 0x3c
	// Line 475, Address: 0x23b9ec, Func Offset: 0x4c
	// Line 476, Address: 0x23b9f0, Func Offset: 0x50
	// Func End, Address: 0x23ba00, Func Offset: 0x60
}

// 
// Start address: 0x23ba00
int viBufCount(_anon0* f)
{
	int ret;
	// Line 500, Address: 0x23ba00, Func Offset: 0
	// Line 503, Address: 0x23ba10, Func Offset: 0x10
	// Line 505, Address: 0x23ba20, Func Offset: 0x20
	// Line 507, Address: 0x23ba38, Func Offset: 0x38
	// Line 509, Address: 0x23ba48, Func Offset: 0x48
	// Line 510, Address: 0x23ba4c, Func Offset: 0x4c
	// Func End, Address: 0x23ba60, Func Offset: 0x60
}

// 
// Start address: 0x23ba60
void viBufFlush(_anon0* f)
{
	// Line 517, Address: 0x23ba60, Func Offset: 0
	// Line 518, Address: 0x23ba6c, Func Offset: 0xc
	// Line 520, Address: 0x23ba7c, Func Offset: 0x1c
	// Line 522, Address: 0x23baac, Func Offset: 0x4c
	// Line 523, Address: 0x23babc, Func Offset: 0x5c
	// Func End, Address: 0x23bacc, Func Offset: 0x6c
}

// 
// Start address: 0x23bad0
int viBufModifyPts(_anon0* f, _anon1* new_ts)
{
	int len;
	int loop;
	int datasize;
	int rd;
	_anon1* ts;
	// Line 530, Address: 0x23bad0, Func Offset: 0
	// Line 532, Address: 0x23bb00, Func Offset: 0x30
	// Line 533, Address: 0x23bb38, Func Offset: 0x68
	// Line 534, Address: 0x23bb44, Func Offset: 0x74
	// Line 536, Address: 0x23bb48, Func Offset: 0x78
	// Line 537, Address: 0x23bb58, Func Offset: 0x88
	// Line 538, Address: 0x23bb60, Func Offset: 0x90
	// Line 540, Address: 0x23bb78, Func Offset: 0xa8
	// Line 544, Address: 0x23bb94, Func Offset: 0xc4
	// Line 545, Address: 0x23bbdc, Func Offset: 0x10c
	// Line 547, Address: 0x23bc34, Func Offset: 0x164
	// Line 548, Address: 0x23bc50, Func Offset: 0x180
	// Line 550, Address: 0x23bc5c, Func Offset: 0x18c
	// Line 551, Address: 0x23bc68, Func Offset: 0x198
	// Line 553, Address: 0x23bc74, Func Offset: 0x1a4
	// Line 554, Address: 0x23bc7c, Func Offset: 0x1ac
	// Line 555, Address: 0x23bc84, Func Offset: 0x1b4
	// Line 556, Address: 0x23bc88, Func Offset: 0x1b8
	// Line 557, Address: 0x23bc8c, Func Offset: 0x1bc
	// Line 558, Address: 0x23bc90, Func Offset: 0x1c0
	// Line 560, Address: 0x23bcc8, Func Offset: 0x1f8
	// Line 561, Address: 0x23bcd0, Func Offset: 0x200
	// Line 562, Address: 0x23bcd4, Func Offset: 0x204
	// Line 564, Address: 0x23bcd8, Func Offset: 0x208
	// Line 565, Address: 0x23bcf4, Func Offset: 0x224
	// Line 568, Address: 0x23bd00, Func Offset: 0x230
	// Line 569, Address: 0x23bd04, Func Offset: 0x234
	// Func End, Address: 0x23bd34, Func Offset: 0x264
}

// 
// Start address: 0x23bd40
int viBufPutTs(_anon0* f, _anon1* ts)
{
	int ret;
	// Line 576, Address: 0x23bd40, Func Offset: 0
	// Line 577, Address: 0x23bd54, Func Offset: 0x14
	// Line 579, Address: 0x23bd58, Func Offset: 0x18
	// Line 581, Address: 0x23bd68, Func Offset: 0x28
	// Line 583, Address: 0x23bd84, Func Offset: 0x44
	// Line 585, Address: 0x23bd94, Func Offset: 0x54
	// Line 587, Address: 0x23bdb4, Func Offset: 0x74
	// Line 588, Address: 0x23bde0, Func Offset: 0xa0
	// Line 589, Address: 0x23be0c, Func Offset: 0xcc
	// Line 590, Address: 0x23be38, Func Offset: 0xf8
	// Line 592, Address: 0x23be64, Func Offset: 0x124
	// Line 593, Address: 0x23be74, Func Offset: 0x134
	// Line 595, Address: 0x23bea0, Func Offset: 0x160
	// Line 598, Address: 0x23bea4, Func Offset: 0x164
	// Line 600, Address: 0x23beb4, Func Offset: 0x174
	// Line 601, Address: 0x23beb8, Func Offset: 0x178
	// Func End, Address: 0x23becc, Func Offset: 0x18c
}

// 
// Start address: 0x23bed0
int viBufGetTs(_anon0* f, _anon1* ts)
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
	// Line 607, Address: 0x23bed0, Func Offset: 0
	// Line 608, Address: 0x23bf04, Func Offset: 0x34
	// Line 609, Address: 0x23bf14, Func Offset: 0x44
	// Line 610, Address: 0x23bf24, Func Offset: 0x54
	// Line 611, Address: 0x23bf34, Func Offset: 0x64
	// Line 612, Address: 0x23bf44, Func Offset: 0x74
	// Line 613, Address: 0x23bf54, Func Offset: 0x84
	// Line 615, Address: 0x23bf70, Func Offset: 0xa0
	// Line 616, Address: 0x23bf7c, Func Offset: 0xac
	// Line 621, Address: 0x23bf80, Func Offset: 0xb0
	// Line 623, Address: 0x23bf90, Func Offset: 0xc0
	// Line 624, Address: 0x23bf9c, Func Offset: 0xcc
	// Line 626, Address: 0x23bfa8, Func Offset: 0xd8
	// Line 629, Address: 0x23bfdc, Func Offset: 0x10c
	// Line 630, Address: 0x23bfe4, Func Offset: 0x114
	// Line 632, Address: 0x23bff0, Func Offset: 0x120
	// Line 634, Address: 0x23bffc, Func Offset: 0x12c
	// Line 636, Address: 0x23c02c, Func Offset: 0x15c
	// Line 639, Address: 0x23c08c, Func Offset: 0x1bc
	// Line 640, Address: 0x23c0b0, Func Offset: 0x1e0
	// Line 641, Address: 0x23c0d4, Func Offset: 0x204
	// Line 642, Address: 0x23c0f4, Func Offset: 0x224
	// Line 644, Address: 0x23c114, Func Offset: 0x244
	// Line 645, Address: 0x23c118, Func Offset: 0x248
	// Line 647, Address: 0x23c150, Func Offset: 0x280
	// Line 649, Address: 0x23c170, Func Offset: 0x2a0
	// Line 651, Address: 0x23c180, Func Offset: 0x2b0
	// Line 652, Address: 0x23c184, Func Offset: 0x2b4
	// Func End, Address: 0x23c1b8, Func Offset: 0x2e8
}

