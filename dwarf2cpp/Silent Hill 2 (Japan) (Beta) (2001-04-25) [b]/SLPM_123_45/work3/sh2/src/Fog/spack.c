typedef struct SPACK_ENV_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef struct SPACK_LOCAL_BUF;


typedef SPACK_OT_DATA* type_0[35];
typedef short type_1[35];
typedef SPACK_ENV_DATA type_2[32];
typedef unsigned long type_3[2];
typedef unsigned long type_4[2];
typedef char type_5[3];
typedef char type_6[14];
typedef unsigned long type_7[2];
typedef <unknown fundamental type (0xa510)> type_8[49152];
typedef SPACK_OT_DATA type_9[4096];
typedef SPACK_OT_DATA* type_10[35];

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct SPACK_LOCAL_BUF
{
	<unknown fundamental type (0xa510)> packet[49152];
	SPACK_OT_DATA dmatag[4096];
	SPACK_OT_DATA* ot_top[35];
	SPACK_OT_DATA* ot_last[35];
	short ot_max[35];
	SPACK_ENV_DATA envdata[32];
};

SPACK_DATA spack;
SPACK_LOCAL_BUF spack_local_buf;

SPACK_DATA* spkInit();
void spkResetOT();
void spkOpenGiftag(void* giftag, unsigned int w, unsigned short envid);
void spkOpenDGiftag(unsigned long giftag1, unsigned long giftag2, unsigned int w, unsigned short envid);
void spkCloseGiftag();
void spkCloseOpenDGiftag(unsigned long giftag1, unsigned long giftag2);
void spkStartPacketS(<unknown fundamental type (0xa510)>* adr);
void spkOpenGiftagS(void* giftag);
void spkOpenDGiftagS(unsigned long giftag1, unsigned long giftag2);
void spkCloseGiftagS();
<unknown fundamental type (0xa510)>* spkEndPacketS();
void spkSetEnvPacket(<unknown fundamental type (0xa510)>* adr, unsigned short envid);
void spkStartEnvLoadImage(unsigned short envid);
void spkSetEnvLoadImage(void* image, short bp, short bw, short psm, short x, short y, short w, short h);
void spkEndEnvLoadImage();
void spkSetOTPacketS(<unknown fundamental type (0xa510)>* adr, unsigned int w, unsigned char envid);
void spkSetOTPacketS_asm();
void spkSetOT();
void* spkDmaKick();
void* ot_link();
void ot_qsort_asm();
void ot_qsort_asm2();
void ot_check();
void spkDmaWaittoSPR(int timeout);
void spkDmaWaitfromSPR(int timeout);
void spkDmatoSPR(unsigned int qwc, unsigned int sadr, void* madr);
void spkDmafromSPR(unsigned int qwc, unsigned int sadr, void* madr);
void spkDebugPrint();

// 
// Start address: 0x173280
SPACK_DATA* spkInit()
{
	int s;
	int i;
	<unknown fundamental type (0xa510)>* pENVtag;
	<unknown fundamental type (0xa510)> ENVtag;
	// Line 70, Address: 0x173280, Func Offset: 0
	// Line 71, Address: 0x1732a8, Func Offset: 0x28
	// Line 74, Address: 0x1732ac, Func Offset: 0x2c
	// Line 76, Address: 0x1732c0, Func Offset: 0x40
	// Line 77, Address: 0x1732d0, Func Offset: 0x50
	// Line 78, Address: 0x1732e0, Func Offset: 0x60
	// Line 79, Address: 0x1732f0, Func Offset: 0x70
	// Line 80, Address: 0x173300, Func Offset: 0x80
	// Line 81, Address: 0x173310, Func Offset: 0x90
	// Line 82, Address: 0x173320, Func Offset: 0xa0
	// Line 83, Address: 0x17332c, Func Offset: 0xac
	// Line 86, Address: 0x173374, Func Offset: 0xf4
	// Line 87, Address: 0x17337c, Func Offset: 0xfc
	// Line 92, Address: 0x1733b8, Func Offset: 0x138
	// Line 93, Address: 0x1733c4, Func Offset: 0x144
	// Line 94, Address: 0x1733cc, Func Offset: 0x14c
	// Line 95, Address: 0x1733d8, Func Offset: 0x158
	// Line 96, Address: 0x1733e8, Func Offset: 0x168
	// Line 99, Address: 0x1733fc, Func Offset: 0x17c
	// Line 101, Address: 0x173404, Func Offset: 0x184
	// Line 102, Address: 0x17340c, Func Offset: 0x18c
	// Func End, Address: 0x17343c, Func Offset: 0x1bc
}

// 
// Start address: 0x173440
void spkResetOT()
{
	// Line 107, Address: 0x173440, Func Offset: 0
	// Line 109, Address: 0x173448, Func Offset: 0x8
	// Line 111, Address: 0x173468, Func Offset: 0x28
	// Line 112, Address: 0x173478, Func Offset: 0x38
	// Line 113, Address: 0x173498, Func Offset: 0x58
	// Line 114, Address: 0x1734a4, Func Offset: 0x64
	// Line 115, Address: 0x1734ac, Func Offset: 0x6c
	// Func End, Address: 0x1734bc, Func Offset: 0x7c
}

// 
// Start address: 0x1734c0
void spkOpenGiftag(void* giftag, unsigned int w, unsigned short envid)
{
	unsigned long d[2];
	SPACK_OT_DATA* pd;
	unsigned long* pos;
	// Line 135, Address: 0x1734c0, Func Offset: 0
	// Line 136, Address: 0x1734dc, Func Offset: 0x1c
	// Line 137, Address: 0x1734e4, Func Offset: 0x24
	// Line 140, Address: 0x1734ec, Func Offset: 0x2c
	// Line 141, Address: 0x1734f8, Func Offset: 0x38
	// Line 142, Address: 0x173500, Func Offset: 0x40
	// Line 143, Address: 0x173508, Func Offset: 0x48
	// Line 145, Address: 0x173510, Func Offset: 0x50
	// Line 146, Address: 0x173524, Func Offset: 0x64
	// Line 147, Address: 0x17352c, Func Offset: 0x6c
	// Line 148, Address: 0x17353c, Func Offset: 0x7c
	// Line 149, Address: 0x17354c, Func Offset: 0x8c
	// Line 150, Address: 0x173554, Func Offset: 0x94
	// Line 151, Address: 0x173560, Func Offset: 0xa0
	// Func End, Address: 0x173578, Func Offset: 0xb8
}

// 
// Start address: 0x173580
void spkOpenDGiftag(unsigned long giftag1, unsigned long giftag2, unsigned int w, unsigned short envid)
{
	SPACK_OT_DATA* pd;
	unsigned long* pos;
	// Line 160, Address: 0x173580, Func Offset: 0
	// Line 161, Address: 0x17359c, Func Offset: 0x1c
	// Line 162, Address: 0x1735a4, Func Offset: 0x24
	// Line 164, Address: 0x1735ac, Func Offset: 0x2c
	// Line 165, Address: 0x1735b8, Func Offset: 0x38
	// Line 166, Address: 0x1735c0, Func Offset: 0x40
	// Line 167, Address: 0x1735c8, Func Offset: 0x48
	// Line 169, Address: 0x1735d0, Func Offset: 0x50
	// Line 170, Address: 0x1735d8, Func Offset: 0x58
	// Line 171, Address: 0x1735e8, Func Offset: 0x68
	// Line 172, Address: 0x1735f8, Func Offset: 0x78
	// Line 173, Address: 0x173600, Func Offset: 0x80
	// Line 174, Address: 0x17360c, Func Offset: 0x8c
	// Func End, Address: 0x173620, Func Offset: 0xa0
}

// 
// Start address: 0x173620
void spkCloseGiftag()
{
	unsigned long* pos;
	unsigned long tag;
	unsigned long* pgt;
	SPACK_OT_DATA* pd;
	unsigned int nreg;
	unsigned int n2;
	unsigned int n;
	// Line 179, Address: 0x173620, Func Offset: 0
	// Line 181, Address: 0x173648, Func Offset: 0x28
	// Line 182, Address: 0x173650, Func Offset: 0x30
	// Line 183, Address: 0x173658, Func Offset: 0x38
	// Line 184, Address: 0x173678, Func Offset: 0x58
	// Line 186, Address: 0x173680, Func Offset: 0x60
	// Line 188, Address: 0x173690, Func Offset: 0x70
	// Line 189, Address: 0x17369c, Func Offset: 0x7c
	// Line 190, Address: 0x1736a8, Func Offset: 0x88
	// Line 193, Address: 0x1736b0, Func Offset: 0x90
	// Line 194, Address: 0x1736c8, Func Offset: 0xa8
	// Line 195, Address: 0x1736d0, Func Offset: 0xb0
	// Line 196, Address: 0x1736dc, Func Offset: 0xbc
	// Line 197, Address: 0x1736ec, Func Offset: 0xcc
	// Line 198, Address: 0x1736f8, Func Offset: 0xd8
	// Line 200, Address: 0x173700, Func Offset: 0xe0
	// Line 202, Address: 0x173708, Func Offset: 0xe8
	// Line 203, Address: 0x173710, Func Offset: 0xf0
	// Line 204, Address: 0x17372c, Func Offset: 0x10c
	// Line 205, Address: 0x17373c, Func Offset: 0x11c
	// Line 207, Address: 0x173748, Func Offset: 0x128
	// Line 208, Address: 0x173768, Func Offset: 0x148
	// Line 209, Address: 0x1737ac, Func Offset: 0x18c
	// Line 211, Address: 0x1737b4, Func Offset: 0x194
	// Line 212, Address: 0x1737bc, Func Offset: 0x19c
	// Func End, Address: 0x1737ec, Func Offset: 0x1cc
}

// 
// Start address: 0x1737f0
void spkCloseOpenDGiftag(unsigned long giftag1, unsigned long giftag2)
{
	unsigned long* pos;
	unsigned long tag;
	unsigned long* pgt;
	unsigned int nreg;
	unsigned int n;
	// Line 254, Address: 0x1737f0, Func Offset: 0
	// Line 256, Address: 0x173818, Func Offset: 0x28
	// Line 257, Address: 0x173820, Func Offset: 0x30
	// Line 258, Address: 0x173840, Func Offset: 0x50
	// Line 260, Address: 0x173848, Func Offset: 0x58
	// Line 262, Address: 0x173858, Func Offset: 0x68
	// Line 263, Address: 0x173864, Func Offset: 0x74
	// Line 265, Address: 0x173870, Func Offset: 0x80
	// Line 266, Address: 0x173878, Func Offset: 0x88
	// Line 267, Address: 0x17387c, Func Offset: 0x8c
	// Line 268, Address: 0x173884, Func Offset: 0x94
	// Line 269, Address: 0x1738a0, Func Offset: 0xb0
	// Line 270, Address: 0x1738b0, Func Offset: 0xc0
	// Line 272, Address: 0x1738bc, Func Offset: 0xcc
	// Line 273, Address: 0x1738dc, Func Offset: 0xec
	// Line 276, Address: 0x173920, Func Offset: 0x130
	// Line 277, Address: 0x173928, Func Offset: 0x138
	// Line 278, Address: 0x173938, Func Offset: 0x148
	// Line 279, Address: 0x173948, Func Offset: 0x158
	// Line 280, Address: 0x173950, Func Offset: 0x160
	// Line 281, Address: 0x17395c, Func Offset: 0x16c
	// Func End, Address: 0x173984, Func Offset: 0x194
}

// 
// Start address: 0x173990
void spkStartPacketS(<unknown fundamental type (0xa510)>* adr)
{
	// Line 288, Address: 0x173990, Func Offset: 0
	// Line 290, Address: 0x173998, Func Offset: 0x8
	// Line 291, Address: 0x1739b4, Func Offset: 0x24
	// Line 292, Address: 0x1739c4, Func Offset: 0x34
	// Func End, Address: 0x1739d0, Func Offset: 0x40
}

// 
// Start address: 0x1739d0
void spkOpenGiftagS(void* giftag)
{
	unsigned long* pos;
	unsigned long d[2];
	// Line 298, Address: 0x1739d0, Func Offset: 0
	// Line 300, Address: 0x1739e0, Func Offset: 0x10
	// Line 302, Address: 0x1739e8, Func Offset: 0x18
	// Line 304, Address: 0x1739f0, Func Offset: 0x20
	// Line 305, Address: 0x173a04, Func Offset: 0x34
	// Line 306, Address: 0x173a14, Func Offset: 0x44
	// Line 307, Address: 0x173a24, Func Offset: 0x54
	// Line 308, Address: 0x173a2c, Func Offset: 0x5c
	// Line 309, Address: 0x173a38, Func Offset: 0x68
	// Func End, Address: 0x173a4c, Func Offset: 0x7c
}

// 
// Start address: 0x173a50
void spkOpenDGiftagS(unsigned long giftag1, unsigned long giftag2)
{
	unsigned long* pos;
	// Line 315, Address: 0x173a50, Func Offset: 0
	// Line 316, Address: 0x173a60, Func Offset: 0x10
	// Line 318, Address: 0x173a68, Func Offset: 0x18
	// Line 320, Address: 0x173a70, Func Offset: 0x20
	// Line 321, Address: 0x173a80, Func Offset: 0x30
	// Line 322, Address: 0x173a90, Func Offset: 0x40
	// Line 323, Address: 0x173a98, Func Offset: 0x48
	// Line 324, Address: 0x173aa4, Func Offset: 0x54
	// Func End, Address: 0x173ab4, Func Offset: 0x64
}

// 
// Start address: 0x173ac0
void spkCloseGiftagS()
{
	unsigned long* pos;
	unsigned long tag;
	unsigned long* pgt;
	unsigned int nreg;
	unsigned int n;
	// Line 329, Address: 0x173ac0, Func Offset: 0
	// Line 332, Address: 0x173ae0, Func Offset: 0x20
	// Line 333, Address: 0x173ae8, Func Offset: 0x28
	// Line 334, Address: 0x173b08, Func Offset: 0x48
	// Line 336, Address: 0x173b10, Func Offset: 0x50
	// Line 338, Address: 0x173b20, Func Offset: 0x60
	// Line 339, Address: 0x173b2c, Func Offset: 0x6c
	// Line 340, Address: 0x173b38, Func Offset: 0x78
	// Line 342, Address: 0x173b40, Func Offset: 0x80
	// Line 343, Address: 0x173b48, Func Offset: 0x88
	// Line 344, Address: 0x173b54, Func Offset: 0x94
	// Line 346, Address: 0x173b5c, Func Offset: 0x9c
	// Line 347, Address: 0x173b78, Func Offset: 0xb8
	// Line 348, Address: 0x173b88, Func Offset: 0xc8
	// Line 350, Address: 0x173b94, Func Offset: 0xd4
	// Line 351, Address: 0x173bb4, Func Offset: 0xf4
	// Line 352, Address: 0x173bf8, Func Offset: 0x138
	// Func End, Address: 0x173c20, Func Offset: 0x160
}

// 
// Start address: 0x173c20
<unknown fundamental type (0xa510)>* spkEndPacketS()
{
	<unknown fundamental type (0xa510)>* pos;
	SPACK_STATIC_DATA* pt;
	unsigned short n;
	// Line 358, Address: 0x173c20, Func Offset: 0
	// Line 360, Address: 0x173c38, Func Offset: 0x18
	// Line 361, Address: 0x173c40, Func Offset: 0x20
	// Line 363, Address: 0x173c48, Func Offset: 0x28
	// Line 364, Address: 0x173c5c, Func Offset: 0x3c
	// Line 365, Address: 0x173c94, Func Offset: 0x74
	// Line 366, Address: 0x173c98, Func Offset: 0x78
	// Line 367, Address: 0x173c9c, Func Offset: 0x7c
	// Func End, Address: 0x173cbc, Func Offset: 0x9c
}

// 
// Start address: 0x173cc0
void spkSetEnvPacket(<unknown fundamental type (0xa510)>* adr, unsigned short envid)
{
	SPACK_ENV_DATA* pe;
	// Line 375, Address: 0x173cc0, Func Offset: 0
	// Line 376, Address: 0x173cd8, Func Offset: 0x18
	// Line 377, Address: 0x173cf0, Func Offset: 0x30
	// Line 379, Address: 0x173d30, Func Offset: 0x70
	// Line 381, Address: 0x173d50, Func Offset: 0x90
	// Line 382, Address: 0x173d58, Func Offset: 0x98
	// Line 383, Address: 0x173d68, Func Offset: 0xa8
	// Line 384, Address: 0x173d70, Func Offset: 0xb0
	// Func End, Address: 0x173d88, Func Offset: 0xc8
}

// 
// Start address: 0x173d90
void spkStartEnvLoadImage(unsigned short envid)
{
	SPACK_ENV_DATA* pe;
	// Line 407, Address: 0x173d90, Func Offset: 0
	// Line 408, Address: 0x173da4, Func Offset: 0x14
	// Line 409, Address: 0x173dbc, Func Offset: 0x2c
	// Line 411, Address: 0x173dfc, Func Offset: 0x6c
	// Line 412, Address: 0x173e00, Func Offset: 0x70
	// Line 413, Address: 0x173e08, Func Offset: 0x78
	// Line 414, Address: 0x173e1c, Func Offset: 0x8c
	// Line 415, Address: 0x173e2c, Func Offset: 0x9c
	// Func End, Address: 0x173e44, Func Offset: 0xb4
}

// 
// Start address: 0x173e50
void spkSetEnvLoadImage(void* image, short bp, short bw, short psm, short x, short y, short w, short h)
{
	unsigned int* pui;
	unsigned long* pos;
	int size;
	// Line 427, Address: 0x173e50, Func Offset: 0
	// Line 429, Address: 0x173e84, Func Offset: 0x34
	// Line 431, Address: 0x173e8c, Func Offset: 0x3c
	// Line 434, Address: 0x173f38, Func Offset: 0xe8
	// Line 435, Address: 0x173f58, Func Offset: 0x108
	// Line 438, Address: 0x173f60, Func Offset: 0x110
	// Line 439, Address: 0x173f88, Func Offset: 0x138
	// Line 444, Address: 0x173f90, Func Offset: 0x140
	// Line 445, Address: 0x173fb0, Func Offset: 0x160
	// Line 448, Address: 0x173fb8, Func Offset: 0x168
	// Line 449, Address: 0x173fd8, Func Offset: 0x188
	// Line 453, Address: 0x173fe0, Func Offset: 0x190
	// Line 454, Address: 0x174000, Func Offset: 0x1b0
	// Line 457, Address: 0x174008, Func Offset: 0x1b8
	// Line 459, Address: 0x174024, Func Offset: 0x1d4
	// Line 461, Address: 0x17402c, Func Offset: 0x1dc
	// Line 463, Address: 0x17403c, Func Offset: 0x1ec
	// Line 465, Address: 0x174064, Func Offset: 0x214
	// Line 468, Address: 0x17406c, Func Offset: 0x21c
	// Line 469, Address: 0x174070, Func Offset: 0x220
	// Line 470, Address: 0x174084, Func Offset: 0x234
	// Line 471, Address: 0x174090, Func Offset: 0x240
	// Line 472, Address: 0x17409c, Func Offset: 0x24c
	// Line 473, Address: 0x1740b0, Func Offset: 0x260
	// Line 475, Address: 0x1740b4, Func Offset: 0x264
	// Line 476, Address: 0x1740cc, Func Offset: 0x27c
	// Line 478, Address: 0x1740dc, Func Offset: 0x28c
	// Line 479, Address: 0x174120, Func Offset: 0x2d0
	// Line 481, Address: 0x174130, Func Offset: 0x2e0
	// Line 482, Address: 0x174160, Func Offset: 0x310
	// Line 484, Address: 0x174170, Func Offset: 0x320
	// Line 485, Address: 0x17419c, Func Offset: 0x34c
	// Line 487, Address: 0x1741ac, Func Offset: 0x35c
	// Line 488, Address: 0x1741b8, Func Offset: 0x368
	// Line 490, Address: 0x1741c8, Func Offset: 0x378
	// Line 491, Address: 0x1741ec, Func Offset: 0x39c
	// Line 493, Address: 0x1741f8, Func Offset: 0x3a8
	// Line 494, Address: 0x1741fc, Func Offset: 0x3ac
	// Line 495, Address: 0x174210, Func Offset: 0x3c0
	// Line 497, Address: 0x174220, Func Offset: 0x3d0
	// Line 498, Address: 0x17422c, Func Offset: 0x3dc
	// Line 499, Address: 0x174240, Func Offset: 0x3f0
	// Line 500, Address: 0x174248, Func Offset: 0x3f8
	// Func End, Address: 0x174264, Func Offset: 0x414
}

// 
// Start address: 0x174270
void spkEndEnvLoadImage()
{
	unsigned long* pos;
	// Line 505, Address: 0x174270, Func Offset: 0
	// Line 506, Address: 0x174278, Func Offset: 0x8
	// Line 508, Address: 0x174280, Func Offset: 0x10
	// Line 509, Address: 0x174290, Func Offset: 0x20
	// Line 510, Address: 0x17429c, Func Offset: 0x2c
	// Line 511, Address: 0x1742a4, Func Offset: 0x34
	// Func End, Address: 0x1742b4, Func Offset: 0x44
}

// 
// Start address: 0x1742c0
void spkSetOTPacketS(<unknown fundamental type (0xa510)>* adr, unsigned int w, unsigned char envid)
{
	SPACK_OT_DATA* pd;
	// Line 519, Address: 0x1742c0, Func Offset: 0
	// Line 520, Address: 0x1742dc, Func Offset: 0x1c
	// Line 521, Address: 0x1742e4, Func Offset: 0x24
	// Line 523, Address: 0x174324, Func Offset: 0x64
	// Line 524, Address: 0x174334, Func Offset: 0x74
	// Line 525, Address: 0x17433c, Func Offset: 0x7c
	// Line 526, Address: 0x174344, Func Offset: 0x84
	// Line 527, Address: 0x17434c, Func Offset: 0x8c
	// Line 529, Address: 0x17436c, Func Offset: 0xac
	// Line 530, Address: 0x174374, Func Offset: 0xb4
	// Func End, Address: 0x17438c, Func Offset: 0xcc
}

// 
// Start address: 0x174390
void spkSetOTPacketS_asm()
{
	// Line 541, Address: 0x174390, Func Offset: 0
	// Line 542, Address: 0x174394, Func Offset: 0x4
	// Line 543, Address: 0x17439c, Func Offset: 0xc
	// Line 544, Address: 0x1743a0, Func Offset: 0x10
	// Line 545, Address: 0x1743a4, Func Offset: 0x14
	// Line 546, Address: 0x1743a8, Func Offset: 0x18
	// Line 547, Address: 0x1743ac, Func Offset: 0x1c
	// Line 548, Address: 0x1743b0, Func Offset: 0x20
	// Line 549, Address: 0x1743b4, Func Offset: 0x24
	// Line 550, Address: 0x1743b8, Func Offset: 0x28
	// Line 551, Address: 0x1743bc, Func Offset: 0x2c
	// Line 552, Address: 0x1743c0, Func Offset: 0x30
	// Line 553, Address: 0x1743c4, Func Offset: 0x34
	// Line 554, Address: 0x1743c8, Func Offset: 0x38
	// Line 555, Address: 0x1743cc, Func Offset: 0x3c
	// Line 556, Address: 0x1743d0, Func Offset: 0x40
	// Line 557, Address: 0x1743d4, Func Offset: 0x44
	// Line 558, Address: 0x1743d8, Func Offset: 0x48
	// Line 559, Address: 0x1743dc, Func Offset: 0x4c
	// Line 561, Address: 0x1743e4, Func Offset: 0x54
	// Line 562, Address: 0x1743e8, Func Offset: 0x58
	// Line 563, Address: 0x1743ec, Func Offset: 0x5c
	// Line 564, Address: 0x1743f0, Func Offset: 0x60
	// Line 565, Address: 0x1743f4, Func Offset: 0x64
	// Line 566, Address: 0x1743f8, Func Offset: 0x68
	// Func End, Address: 0x174400, Func Offset: 0x70
}

// 
// Start address: 0x174400
void spkSetOT()
{
	// Line 610, Address: 0x174400, Func Offset: 0
	// Line 611, Address: 0x174408, Func Offset: 0x8
	// Line 612, Address: 0x17440c, Func Offset: 0xc
	// Line 613, Address: 0x174410, Func Offset: 0x10
	// Line 614, Address: 0x174414, Func Offset: 0x14
	// Line 615, Address: 0x174418, Func Offset: 0x18
	// Line 616, Address: 0x17441c, Func Offset: 0x1c
	// Line 617, Address: 0x174420, Func Offset: 0x20
	// Line 618, Address: 0x174424, Func Offset: 0x24
	// Line 619, Address: 0x174428, Func Offset: 0x28
	// Line 622, Address: 0x174430, Func Offset: 0x30
	// Line 623, Address: 0x174434, Func Offset: 0x34
	// Line 624, Address: 0x174438, Func Offset: 0x38
	// Line 625, Address: 0x17443c, Func Offset: 0x3c
	// Line 626, Address: 0x174440, Func Offset: 0x40
	// Line 629, Address: 0x174448, Func Offset: 0x48
	// Line 630, Address: 0x17444c, Func Offset: 0x4c
	// Line 633, Address: 0x174454, Func Offset: 0x54
	// Line 634, Address: 0x174458, Func Offset: 0x58
	// Line 635, Address: 0x17445c, Func Offset: 0x5c
	// Line 638, Address: 0x174464, Func Offset: 0x64
	// Line 639, Address: 0x174468, Func Offset: 0x68
	// Line 642, Address: 0x174470, Func Offset: 0x70
	// Line 643, Address: 0x174474, Func Offset: 0x74
	// Line 646, Address: 0x17447c, Func Offset: 0x7c
	// Line 647, Address: 0x174480, Func Offset: 0x80
	// Line 648, Address: 0x174484, Func Offset: 0x84
	// Line 649, Address: 0x174488, Func Offset: 0x88
	// Line 650, Address: 0x17448c, Func Offset: 0x8c
	// Line 652, Address: 0x174494, Func Offset: 0x94
	// Line 654, Address: 0x174498, Func Offset: 0x98
	// Line 655, Address: 0x17449c, Func Offset: 0x9c
	// Line 658, Address: 0x1744a4, Func Offset: 0xa4
	// Line 660, Address: 0x1744a8, Func Offset: 0xa8
	// Line 661, Address: 0x1744ac, Func Offset: 0xac
	// Line 662, Address: 0x1744b0, Func Offset: 0xb0
	// Line 663, Address: 0x1744b4, Func Offset: 0xb4
	// Line 664, Address: 0x1744b8, Func Offset: 0xb8
	// Line 665, Address: 0x1744bc, Func Offset: 0xbc
	// Line 666, Address: 0x1744c0, Func Offset: 0xc0
	// Line 668, Address: 0x1744c8, Func Offset: 0xc8
	// Line 669, Address: 0x1744cc, Func Offset: 0xcc
	// Line 670, Address: 0x1744d0, Func Offset: 0xd0
	// Line 671, Address: 0x1744d4, Func Offset: 0xd4
	// Line 672, Address: 0x1744d8, Func Offset: 0xd8
	// Line 674, Address: 0x1744dc, Func Offset: 0xdc
	// Func End, Address: 0x1744e4, Func Offset: 0xe4
}

// 
// Start address: 0x1744f0
void* spkDmaKick()
{
	unsigned long* pos;
	unsigned long* pos;
	void* top;
	// Line 684, Address: 0x1744f0, Func Offset: 0
	// Line 687, Address: 0x17451c, Func Offset: 0x2c
	// Line 690, Address: 0x174528, Func Offset: 0x38
	// Line 691, Address: 0x174584, Func Offset: 0x94
	// Line 694, Address: 0x1745e8, Func Offset: 0xf8
	// Line 696, Address: 0x1745f0, Func Offset: 0x100
	// Line 698, Address: 0x174680, Func Offset: 0x190
	// Line 699, Address: 0x17468c, Func Offset: 0x19c
	// Line 700, Address: 0x174694, Func Offset: 0x1a4
	// Line 702, Address: 0x17469c, Func Offset: 0x1ac
	// Line 704, Address: 0x1746b0, Func Offset: 0x1c0
	// Line 706, Address: 0x1746c8, Func Offset: 0x1d8
	// Line 707, Address: 0x1746e0, Func Offset: 0x1f0
	// Line 708, Address: 0x1746f0, Func Offset: 0x200
	// Line 709, Address: 0x1746fc, Func Offset: 0x20c
	// Line 710, Address: 0x17470c, Func Offset: 0x21c
	// Line 711, Address: 0x174714, Func Offset: 0x224
	// Line 712, Address: 0x17471c, Func Offset: 0x22c
	// Line 714, Address: 0x174728, Func Offset: 0x238
	// Line 715, Address: 0x174738, Func Offset: 0x248
	// Line 716, Address: 0x174744, Func Offset: 0x254
	// Line 717, Address: 0x17474c, Func Offset: 0x25c
	// Line 718, Address: 0x174754, Func Offset: 0x264
	// Line 719, Address: 0x17475c, Func Offset: 0x26c
	// Line 726, Address: 0x174768, Func Offset: 0x278
	// Line 727, Address: 0x17477c, Func Offset: 0x28c
	// Line 728, Address: 0x17478c, Func Offset: 0x29c
	// Line 731, Address: 0x1747f8, Func Offset: 0x308
	// Line 732, Address: 0x174800, Func Offset: 0x310
	// Line 733, Address: 0x174808, Func Offset: 0x318
	// Line 734, Address: 0x17480c, Func Offset: 0x31c
	// Func End, Address: 0x174840, Func Offset: 0x350
}

// 
// Start address: 0x174840
void* ot_link()
{
	// Line 857, Address: 0x174840, Func Offset: 0
	// Line 858, Address: 0x174844, Func Offset: 0x4
	// Line 859, Address: 0x174848, Func Offset: 0x8
	// Line 860, Address: 0x17484c, Func Offset: 0xc
	// Line 861, Address: 0x174850, Func Offset: 0x10
	// Line 862, Address: 0x174854, Func Offset: 0x14
	// Line 863, Address: 0x174858, Func Offset: 0x18
	// Line 864, Address: 0x17485c, Func Offset: 0x1c
	// Line 865, Address: 0x174860, Func Offset: 0x20
	// Line 866, Address: 0x174864, Func Offset: 0x24
	// Line 867, Address: 0x174868, Func Offset: 0x28
	// Line 868, Address: 0x174870, Func Offset: 0x30
	// Line 869, Address: 0x174874, Func Offset: 0x34
	// Line 870, Address: 0x174878, Func Offset: 0x38
	// Line 871, Address: 0x17487c, Func Offset: 0x3c
	// Line 872, Address: 0x174880, Func Offset: 0x40
	// Line 873, Address: 0x174884, Func Offset: 0x44
	// Line 874, Address: 0x174888, Func Offset: 0x48
	// Line 875, Address: 0x17488c, Func Offset: 0x4c
	// Line 877, Address: 0x174890, Func Offset: 0x50
	// Line 878, Address: 0x174894, Func Offset: 0x54
	// Line 879, Address: 0x174898, Func Offset: 0x58
	// Line 880, Address: 0x17489c, Func Offset: 0x5c
	// Line 882, Address: 0x1748a4, Func Offset: 0x64
	// Line 883, Address: 0x1748a8, Func Offset: 0x68
	// Line 884, Address: 0x1748ac, Func Offset: 0x6c
	// Line 885, Address: 0x1748b0, Func Offset: 0x70
	// Line 886, Address: 0x1748b4, Func Offset: 0x74
	// Line 887, Address: 0x1748b8, Func Offset: 0x78
	// Line 891, Address: 0x1748c0, Func Offset: 0x80
	// Line 892, Address: 0x1748c4, Func Offset: 0x84
	// Line 893, Address: 0x1748c8, Func Offset: 0x88
	// Line 894, Address: 0x1748cc, Func Offset: 0x8c
	// Line 895, Address: 0x1748d0, Func Offset: 0x90
	// Line 896, Address: 0x1748d4, Func Offset: 0x94
	// Line 897, Address: 0x1748d8, Func Offset: 0x98
	// Line 899, Address: 0x1748e0, Func Offset: 0xa0
	// Line 900, Address: 0x1748e4, Func Offset: 0xa4
	// Line 901, Address: 0x1748e8, Func Offset: 0xa8
	// Line 904, Address: 0x1748f0, Func Offset: 0xb0
	// Line 905, Address: 0x1748f4, Func Offset: 0xb4
	// Line 907, Address: 0x1748fc, Func Offset: 0xbc
	// Line 908, Address: 0x174900, Func Offset: 0xc0
	// Line 909, Address: 0x174904, Func Offset: 0xc4
	// Line 911, Address: 0x17490c, Func Offset: 0xcc
	// Line 914, Address: 0x174910, Func Offset: 0xd0
	// Line 915, Address: 0x174914, Func Offset: 0xd4
	// Line 916, Address: 0x174918, Func Offset: 0xd8
	// Line 918, Address: 0x17491c, Func Offset: 0xdc
	// Line 919, Address: 0x174920, Func Offset: 0xe0
	// Line 921, Address: 0x174928, Func Offset: 0xe8
	// Line 923, Address: 0x174930, Func Offset: 0xf0
	// Line 924, Address: 0x174934, Func Offset: 0xf4
	// Line 925, Address: 0x174938, Func Offset: 0xf8
	// Line 926, Address: 0x17493c, Func Offset: 0xfc
	// Line 928, Address: 0x174940, Func Offset: 0x100
	// Line 929, Address: 0x174944, Func Offset: 0x104
	// Line 930, Address: 0x174948, Func Offset: 0x108
	// Line 931, Address: 0x17494c, Func Offset: 0x10c
	// Line 932, Address: 0x174950, Func Offset: 0x110
	// Line 934, Address: 0x174958, Func Offset: 0x118
	// Line 937, Address: 0x174960, Func Offset: 0x120
	// Line 941, Address: 0x174968, Func Offset: 0x128
	// Line 942, Address: 0x17496c, Func Offset: 0x12c
	// Line 943, Address: 0x174970, Func Offset: 0x130
	// Line 944, Address: 0x174974, Func Offset: 0x134
	// Line 945, Address: 0x174978, Func Offset: 0x138
	// Line 947, Address: 0x174980, Func Offset: 0x140
	// Line 948, Address: 0x174984, Func Offset: 0x144
	// Line 949, Address: 0x174988, Func Offset: 0x148
	// Line 952, Address: 0x174990, Func Offset: 0x150
	// Line 953, Address: 0x174994, Func Offset: 0x154
	// Line 955, Address: 0x17499c, Func Offset: 0x15c
	// Line 956, Address: 0x1749a0, Func Offset: 0x160
	// Line 957, Address: 0x1749a4, Func Offset: 0x164
	// Line 959, Address: 0x1749ac, Func Offset: 0x16c
	// Line 962, Address: 0x1749b0, Func Offset: 0x170
	// Line 963, Address: 0x1749b4, Func Offset: 0x174
	// Line 964, Address: 0x1749b8, Func Offset: 0x178
	// Line 966, Address: 0x1749bc, Func Offset: 0x17c
	// Line 967, Address: 0x1749c0, Func Offset: 0x180
	// Line 968, Address: 0x1749c4, Func Offset: 0x184
	// Line 970, Address: 0x1749cc, Func Offset: 0x18c
	// Line 972, Address: 0x1749d4, Func Offset: 0x194
	// Line 973, Address: 0x1749d8, Func Offset: 0x198
	// Line 974, Address: 0x1749dc, Func Offset: 0x19c
	// Line 975, Address: 0x1749e0, Func Offset: 0x1a0
	// Line 977, Address: 0x1749e4, Func Offset: 0x1a4
	// Line 978, Address: 0x1749e8, Func Offset: 0x1a8
	// Line 979, Address: 0x1749ec, Func Offset: 0x1ac
	// Line 980, Address: 0x1749f0, Func Offset: 0x1b0
	// Line 981, Address: 0x1749f4, Func Offset: 0x1b4
	// Line 982, Address: 0x1749f8, Func Offset: 0x1b8
	// Line 983, Address: 0x1749fc, Func Offset: 0x1bc
	// Line 985, Address: 0x174a04, Func Offset: 0x1c4
	// Line 989, Address: 0x174a0c, Func Offset: 0x1cc
	// Line 990, Address: 0x174a10, Func Offset: 0x1d0
	// Line 992, Address: 0x174a14, Func Offset: 0x1d4
	// Line 993, Address: 0x174a18, Func Offset: 0x1d8
	// Line 995, Address: 0x174a20, Func Offset: 0x1e0
	// Line 997, Address: 0x174a28, Func Offset: 0x1e8
	// Line 998, Address: 0x174a2c, Func Offset: 0x1ec
	// Line 999, Address: 0x174a30, Func Offset: 0x1f0
	// Line 1000, Address: 0x174a34, Func Offset: 0x1f4
	// Line 1002, Address: 0x174a38, Func Offset: 0x1f8
	// Line 1003, Address: 0x174a3c, Func Offset: 0x1fc
	// Line 1004, Address: 0x174a40, Func Offset: 0x200
	// Line 1005, Address: 0x174a44, Func Offset: 0x204
	// Line 1006, Address: 0x174a48, Func Offset: 0x208
	// Line 1007, Address: 0x174a4c, Func Offset: 0x20c
	// Line 1009, Address: 0x174a54, Func Offset: 0x214
	// Line 1010, Address: 0x174a58, Func Offset: 0x218
	// Line 1013, Address: 0x174a60, Func Offset: 0x220
	// Line 1014, Address: 0x174a64, Func Offset: 0x224
	// Line 1016, Address: 0x174a6c, Func Offset: 0x22c
	// Line 1017, Address: 0x174a70, Func Offset: 0x230
	// Line 1018, Address: 0x174a74, Func Offset: 0x234
	// Line 1020, Address: 0x174a7c, Func Offset: 0x23c
	// Line 1022, Address: 0x174a80, Func Offset: 0x240
	// Line 1023, Address: 0x174a84, Func Offset: 0x244
	// Line 1024, Address: 0x174a88, Func Offset: 0x248
	// Line 1025, Address: 0x174a8c, Func Offset: 0x24c
	// Line 1026, Address: 0x174a90, Func Offset: 0x250
	// Line 1027, Address: 0x174a94, Func Offset: 0x254
	// Line 1028, Address: 0x174a98, Func Offset: 0x258
	// Line 1029, Address: 0x174a9c, Func Offset: 0x25c
	// Line 1030, Address: 0x174aa0, Func Offset: 0x260
	// Line 1031, Address: 0x174aa4, Func Offset: 0x264
	// Func End, Address: 0x174aac, Func Offset: 0x26c
}

// 
// Start address: 0x174ab0
void ot_qsort_asm()
{
	// Line 1129, Address: 0x174ab0, Func Offset: 0
	// Line 1130, Address: 0x174ab4, Func Offset: 0x4
	// Line 1131, Address: 0x174ab8, Func Offset: 0x8
	// Line 1133, Address: 0x174ac0, Func Offset: 0x10
	// Line 1134, Address: 0x174ac4, Func Offset: 0x14
	// Line 1135, Address: 0x174ac8, Func Offset: 0x18
	// Line 1136, Address: 0x174acc, Func Offset: 0x1c
	// Line 1137, Address: 0x174ad0, Func Offset: 0x20
	// Line 1138, Address: 0x174ad4, Func Offset: 0x24
	// Line 1140, Address: 0x174adc, Func Offset: 0x2c
	// Line 1142, Address: 0x174ae0, Func Offset: 0x30
	// Line 1143, Address: 0x174ae4, Func Offset: 0x34
	// Line 1144, Address: 0x174ae8, Func Offset: 0x38
	// Line 1145, Address: 0x174aec, Func Offset: 0x3c
	// Line 1147, Address: 0x174af0, Func Offset: 0x40
	// Line 1148, Address: 0x174af4, Func Offset: 0x44
	// Line 1149, Address: 0x174af8, Func Offset: 0x48
	// Line 1150, Address: 0x174afc, Func Offset: 0x4c
	// Line 1151, Address: 0x174b00, Func Offset: 0x50
	// Line 1152, Address: 0x174b04, Func Offset: 0x54
	// Line 1154, Address: 0x174b0c, Func Offset: 0x5c
	// Line 1156, Address: 0x174b14, Func Offset: 0x64
	// Line 1157, Address: 0x174b18, Func Offset: 0x68
	// Line 1158, Address: 0x174b1c, Func Offset: 0x6c
	// Line 1159, Address: 0x174b20, Func Offset: 0x70
	// Line 1160, Address: 0x174b24, Func Offset: 0x74
	// Line 1162, Address: 0x174b28, Func Offset: 0x78
	// Line 1163, Address: 0x174b2c, Func Offset: 0x7c
	// Line 1164, Address: 0x174b30, Func Offset: 0x80
	// Line 1167, Address: 0x174b38, Func Offset: 0x88
	// Line 1168, Address: 0x174b3c, Func Offset: 0x8c
	// Line 1169, Address: 0x174b40, Func Offset: 0x90
	// Line 1170, Address: 0x174b44, Func Offset: 0x94
	// Line 1171, Address: 0x174b48, Func Offset: 0x98
	// Line 1174, Address: 0x174b50, Func Offset: 0xa0
	// Line 1176, Address: 0x174b58, Func Offset: 0xa8
	// Line 1177, Address: 0x174b5c, Func Offset: 0xac
	// Line 1178, Address: 0x174b60, Func Offset: 0xb0
	// Line 1179, Address: 0x174b64, Func Offset: 0xb4
	// Line 1181, Address: 0x174b6c, Func Offset: 0xbc
	// Line 1182, Address: 0x174b70, Func Offset: 0xc0
	// Line 1185, Address: 0x174b78, Func Offset: 0xc8
	// Line 1188, Address: 0x174b80, Func Offset: 0xd0
	// Line 1189, Address: 0x174b84, Func Offset: 0xd4
	// Line 1190, Address: 0x174b88, Func Offset: 0xd8
	// Line 1191, Address: 0x174b8c, Func Offset: 0xdc
	// Line 1192, Address: 0x174b90, Func Offset: 0xe0
	// Line 1193, Address: 0x174b94, Func Offset: 0xe4
	// Line 1194, Address: 0x174b98, Func Offset: 0xe8
	// Line 1195, Address: 0x174b9c, Func Offset: 0xec
	// Line 1196, Address: 0x174ba0, Func Offset: 0xf0
	// Line 1197, Address: 0x174ba4, Func Offset: 0xf4
	// Line 1198, Address: 0x174ba8, Func Offset: 0xf8
	// Line 1199, Address: 0x174bac, Func Offset: 0xfc
	// Line 1201, Address: 0x174bb4, Func Offset: 0x104
	// Line 1203, Address: 0x174bbc, Func Offset: 0x10c
	// Line 1205, Address: 0x174bc4, Func Offset: 0x114
	// Line 1208, Address: 0x174bcc, Func Offset: 0x11c
	// Line 1210, Address: 0x174bd4, Func Offset: 0x124
	// Line 1212, Address: 0x174bdc, Func Offset: 0x12c
	// Line 1214, Address: 0x174be0, Func Offset: 0x130
	// Line 1215, Address: 0x174be4, Func Offset: 0x134
	// Line 1216, Address: 0x174be8, Func Offset: 0x138
	// Line 1217, Address: 0x174bec, Func Offset: 0x13c
	// Line 1218, Address: 0x174bf0, Func Offset: 0x140
	// Line 1219, Address: 0x174bf4, Func Offset: 0x144
	// Line 1221, Address: 0x174bf8, Func Offset: 0x148
	// Line 1222, Address: 0x174bfc, Func Offset: 0x14c
	// Line 1223, Address: 0x174c00, Func Offset: 0x150
	// Line 1225, Address: 0x174c08, Func Offset: 0x158
	// Line 1226, Address: 0x174c0c, Func Offset: 0x15c
	// Line 1227, Address: 0x174c10, Func Offset: 0x160
	// Line 1229, Address: 0x174c18, Func Offset: 0x168
	// Line 1232, Address: 0x174c20, Func Offset: 0x170
	// Line 1233, Address: 0x174c24, Func Offset: 0x174
	// Line 1234, Address: 0x174c28, Func Offset: 0x178
	// Line 1236, Address: 0x174c30, Func Offset: 0x180
	// Line 1237, Address: 0x174c34, Func Offset: 0x184
	// Line 1239, Address: 0x174c3c, Func Offset: 0x18c
	// Line 1242, Address: 0x174c44, Func Offset: 0x194
	// Line 1243, Address: 0x174c48, Func Offset: 0x198
	// Line 1244, Address: 0x174c4c, Func Offset: 0x19c
	// Line 1245, Address: 0x174c50, Func Offset: 0x1a0
	// Line 1246, Address: 0x174c54, Func Offset: 0x1a4
	// Line 1247, Address: 0x174c58, Func Offset: 0x1a8
	// Line 1248, Address: 0x174c5c, Func Offset: 0x1ac
	// Line 1249, Address: 0x174c60, Func Offset: 0x1b0
	// Line 1252, Address: 0x174c68, Func Offset: 0x1b8
	// Line 1253, Address: 0x174c6c, Func Offset: 0x1bc
	// Line 1254, Address: 0x174c70, Func Offset: 0x1c0
	// Line 1256, Address: 0x174c78, Func Offset: 0x1c8
	// Line 1259, Address: 0x174c80, Func Offset: 0x1d0
	// Line 1261, Address: 0x174c88, Func Offset: 0x1d8
	// Line 1262, Address: 0x174c90, Func Offset: 0x1e0
	// Func End, Address: 0x174c98, Func Offset: 0x1e8
}

// 
// Start address: 0x174ca0
void ot_qsort_asm2()
{
	// Line 1360, Address: 0x174ca0, Func Offset: 0
	// Line 1361, Address: 0x174ca4, Func Offset: 0x4
	// Line 1362, Address: 0x174ca8, Func Offset: 0x8
	// Line 1364, Address: 0x174cb0, Func Offset: 0x10
	// Line 1365, Address: 0x174cb4, Func Offset: 0x14
	// Line 1366, Address: 0x174cb8, Func Offset: 0x18
	// Line 1367, Address: 0x174cbc, Func Offset: 0x1c
	// Line 1368, Address: 0x174cc0, Func Offset: 0x20
	// Line 1369, Address: 0x174cc4, Func Offset: 0x24
	// Line 1371, Address: 0x174ccc, Func Offset: 0x2c
	// Line 1373, Address: 0x174cd0, Func Offset: 0x30
	// Line 1374, Address: 0x174cd4, Func Offset: 0x34
	// Line 1375, Address: 0x174cd8, Func Offset: 0x38
	// Line 1376, Address: 0x174cdc, Func Offset: 0x3c
	// Line 1378, Address: 0x174ce0, Func Offset: 0x40
	// Line 1379, Address: 0x174ce4, Func Offset: 0x44
	// Line 1380, Address: 0x174ce8, Func Offset: 0x48
	// Line 1381, Address: 0x174cec, Func Offset: 0x4c
	// Line 1382, Address: 0x174cf0, Func Offset: 0x50
	// Line 1383, Address: 0x174cf4, Func Offset: 0x54
	// Line 1385, Address: 0x174cfc, Func Offset: 0x5c
	// Line 1387, Address: 0x174d04, Func Offset: 0x64
	// Line 1388, Address: 0x174d08, Func Offset: 0x68
	// Line 1389, Address: 0x174d0c, Func Offset: 0x6c
	// Line 1390, Address: 0x174d10, Func Offset: 0x70
	// Line 1391, Address: 0x174d14, Func Offset: 0x74
	// Line 1393, Address: 0x174d18, Func Offset: 0x78
	// Line 1394, Address: 0x174d1c, Func Offset: 0x7c
	// Line 1395, Address: 0x174d20, Func Offset: 0x80
	// Line 1398, Address: 0x174d28, Func Offset: 0x88
	// Line 1399, Address: 0x174d2c, Func Offset: 0x8c
	// Line 1400, Address: 0x174d30, Func Offset: 0x90
	// Line 1401, Address: 0x174d34, Func Offset: 0x94
	// Line 1402, Address: 0x174d38, Func Offset: 0x98
	// Line 1405, Address: 0x174d40, Func Offset: 0xa0
	// Line 1407, Address: 0x174d48, Func Offset: 0xa8
	// Line 1408, Address: 0x174d4c, Func Offset: 0xac
	// Line 1409, Address: 0x174d50, Func Offset: 0xb0
	// Line 1410, Address: 0x174d54, Func Offset: 0xb4
	// Line 1412, Address: 0x174d5c, Func Offset: 0xbc
	// Line 1413, Address: 0x174d60, Func Offset: 0xc0
	// Line 1416, Address: 0x174d68, Func Offset: 0xc8
	// Line 1419, Address: 0x174d70, Func Offset: 0xd0
	// Line 1420, Address: 0x174d74, Func Offset: 0xd4
	// Line 1421, Address: 0x174d78, Func Offset: 0xd8
	// Line 1422, Address: 0x174d7c, Func Offset: 0xdc
	// Line 1423, Address: 0x174d80, Func Offset: 0xe0
	// Line 1424, Address: 0x174d84, Func Offset: 0xe4
	// Line 1425, Address: 0x174d88, Func Offset: 0xe8
	// Line 1426, Address: 0x174d8c, Func Offset: 0xec
	// Line 1427, Address: 0x174d90, Func Offset: 0xf0
	// Line 1428, Address: 0x174d94, Func Offset: 0xf4
	// Line 1429, Address: 0x174d98, Func Offset: 0xf8
	// Line 1430, Address: 0x174d9c, Func Offset: 0xfc
	// Line 1432, Address: 0x174da4, Func Offset: 0x104
	// Line 1434, Address: 0x174dac, Func Offset: 0x10c
	// Line 1436, Address: 0x174db4, Func Offset: 0x114
	// Line 1439, Address: 0x174dbc, Func Offset: 0x11c
	// Line 1441, Address: 0x174dc4, Func Offset: 0x124
	// Line 1443, Address: 0x174dcc, Func Offset: 0x12c
	// Line 1445, Address: 0x174dd0, Func Offset: 0x130
	// Line 1446, Address: 0x174dd4, Func Offset: 0x134
	// Line 1447, Address: 0x174dd8, Func Offset: 0x138
	// Line 1448, Address: 0x174ddc, Func Offset: 0x13c
	// Line 1449, Address: 0x174de0, Func Offset: 0x140
	// Line 1450, Address: 0x174de4, Func Offset: 0x144
	// Line 1452, Address: 0x174de8, Func Offset: 0x148
	// Line 1453, Address: 0x174dec, Func Offset: 0x14c
	// Line 1454, Address: 0x174df0, Func Offset: 0x150
	// Line 1456, Address: 0x174df8, Func Offset: 0x158
	// Line 1457, Address: 0x174dfc, Func Offset: 0x15c
	// Line 1458, Address: 0x174e00, Func Offset: 0x160
	// Line 1460, Address: 0x174e08, Func Offset: 0x168
	// Line 1463, Address: 0x174e10, Func Offset: 0x170
	// Line 1464, Address: 0x174e14, Func Offset: 0x174
	// Line 1465, Address: 0x174e18, Func Offset: 0x178
	// Line 1467, Address: 0x174e20, Func Offset: 0x180
	// Line 1468, Address: 0x174e24, Func Offset: 0x184
	// Line 1470, Address: 0x174e2c, Func Offset: 0x18c
	// Line 1473, Address: 0x174e34, Func Offset: 0x194
	// Line 1474, Address: 0x174e38, Func Offset: 0x198
	// Line 1475, Address: 0x174e3c, Func Offset: 0x19c
	// Line 1476, Address: 0x174e40, Func Offset: 0x1a0
	// Line 1477, Address: 0x174e44, Func Offset: 0x1a4
	// Line 1478, Address: 0x174e48, Func Offset: 0x1a8
	// Line 1479, Address: 0x174e4c, Func Offset: 0x1ac
	// Line 1480, Address: 0x174e50, Func Offset: 0x1b0
	// Line 1483, Address: 0x174e58, Func Offset: 0x1b8
	// Line 1484, Address: 0x174e5c, Func Offset: 0x1bc
	// Line 1485, Address: 0x174e60, Func Offset: 0x1c0
	// Line 1487, Address: 0x174e68, Func Offset: 0x1c8
	// Line 1490, Address: 0x174e70, Func Offset: 0x1d0
	// Line 1492, Address: 0x174e78, Func Offset: 0x1d8
	// Line 1493, Address: 0x174e80, Func Offset: 0x1e0
	// Func End, Address: 0x174e88, Func Offset: 0x1e8
}

// 
// Start address: 0x174e90
void ot_check()
{
	// Line 1539, Address: 0x174e90, Func Offset: 0
	// Line 1540, Address: 0x174e98, Func Offset: 0x8
	// Line 1541, Address: 0x174e9c, Func Offset: 0xc
	// Line 1542, Address: 0x174ea0, Func Offset: 0x10
	// Line 1543, Address: 0x174ea4, Func Offset: 0x14
	// Line 1544, Address: 0x174ea8, Func Offset: 0x18
	// Line 1545, Address: 0x174eac, Func Offset: 0x1c
	// Line 1546, Address: 0x174eb0, Func Offset: 0x20
	// Line 1547, Address: 0x174eb4, Func Offset: 0x24
	// Line 1548, Address: 0x174eb8, Func Offset: 0x28
	// Line 1550, Address: 0x174ebc, Func Offset: 0x2c
	// Line 1551, Address: 0x174ec0, Func Offset: 0x30
	// Line 1552, Address: 0x174ec4, Func Offset: 0x34
	// Line 1555, Address: 0x174ecc, Func Offset: 0x3c
	// Line 1556, Address: 0x174ed0, Func Offset: 0x40
	// Line 1557, Address: 0x174ed4, Func Offset: 0x44
	// Line 1559, Address: 0x174edc, Func Offset: 0x4c
	// Line 1560, Address: 0x174ee0, Func Offset: 0x50
	// Line 1563, Address: 0x174ee8, Func Offset: 0x58
	// Line 1564, Address: 0x174eec, Func Offset: 0x5c
	// Line 1565, Address: 0x174ef0, Func Offset: 0x60
	// Line 1566, Address: 0x174ef4, Func Offset: 0x64
	// Line 1568, Address: 0x174efc, Func Offset: 0x6c
	// Func End, Address: 0x174f04, Func Offset: 0x74
}

// 
// Start address: 0x174f10
void spkDmaWaittoSPR(int timeout)
{
	int c;
	// Line 1627, Address: 0x174f10, Func Offset: 0
	// Line 1628, Address: 0x174f20, Func Offset: 0x10
	// Line 1629, Address: 0x174f24, Func Offset: 0x14
	// Line 1630, Address: 0x174f38, Func Offset: 0x28
	// Line 1631, Address: 0x174f40, Func Offset: 0x30
	// Line 1632, Address: 0x174f54, Func Offset: 0x44
	// Line 1633, Address: 0x174f64, Func Offset: 0x54
	// Line 1635, Address: 0x174f6c, Func Offset: 0x5c
	// Line 1636, Address: 0x174f88, Func Offset: 0x78
	// Func End, Address: 0x174f9c, Func Offset: 0x8c
}

// 
// Start address: 0x174fa0
void spkDmaWaitfromSPR(int timeout)
{
	int c;
	// Line 1643, Address: 0x174fa0, Func Offset: 0
	// Line 1644, Address: 0x174fb0, Func Offset: 0x10
	// Line 1645, Address: 0x174fb4, Func Offset: 0x14
	// Line 1646, Address: 0x174fc8, Func Offset: 0x28
	// Line 1647, Address: 0x174fd0, Func Offset: 0x30
	// Line 1648, Address: 0x174fe4, Func Offset: 0x44
	// Line 1649, Address: 0x174ff4, Func Offset: 0x54
	// Line 1651, Address: 0x174ffc, Func Offset: 0x5c
	// Line 1652, Address: 0x175018, Func Offset: 0x78
	// Func End, Address: 0x17502c, Func Offset: 0x8c
}

// 
// Start address: 0x175030
void spkDmatoSPR(unsigned int qwc, unsigned int sadr, void* madr)
{
	// Line 1737, Address: 0x175030, Func Offset: 0
	// Line 1738, Address: 0x175044, Func Offset: 0x14
	// Line 1739, Address: 0x175050, Func Offset: 0x20
	// Line 1740, Address: 0x175060, Func Offset: 0x30
	// Line 1741, Address: 0x175074, Func Offset: 0x44
	// Line 1742, Address: 0x17508c, Func Offset: 0x5c
	// Line 1743, Address: 0x17509c, Func Offset: 0x6c
	// Func End, Address: 0x1750ac, Func Offset: 0x7c
}

// 
// Start address: 0x1750b0
void spkDmafromSPR(unsigned int qwc, unsigned int sadr, void* madr)
{
	// Line 1751, Address: 0x1750b0, Func Offset: 0
	// Line 1752, Address: 0x1750c4, Func Offset: 0x14
	// Line 1753, Address: 0x1750d0, Func Offset: 0x20
	// Line 1754, Address: 0x1750e0, Func Offset: 0x30
	// Line 1755, Address: 0x1750f4, Func Offset: 0x44
	// Line 1756, Address: 0x17510c, Func Offset: 0x5c
	// Line 1757, Address: 0x17511c, Func Offset: 0x6c
	// Func End, Address: 0x17512c, Func Offset: 0x7c
}

// 
// Start address: 0x175130
void spkDebugPrint()
{
	int y;
	int x;
	int m;
	int i;
	char buf[14];
	char nbuf[3];
	// Line 1797, Address: 0x175130, Func Offset: 0
	// Line 1802, Address: 0x175148, Func Offset: 0x18
	// Line 1803, Address: 0x175160, Func Offset: 0x30
	// Line 1804, Address: 0x175168, Func Offset: 0x38
	// Line 1805, Address: 0x17516c, Func Offset: 0x3c
	// Line 1806, Address: 0x175170, Func Offset: 0x40
	// Line 1807, Address: 0x175174, Func Offset: 0x44
	// Line 1808, Address: 0x175178, Func Offset: 0x48
	// Line 1809, Address: 0x175184, Func Offset: 0x54
	// Line 1810, Address: 0x1751c8, Func Offset: 0x98
	// Line 1811, Address: 0x1751ec, Func Offset: 0xbc
	// Line 1812, Address: 0x175220, Func Offset: 0xf0
	// Line 1813, Address: 0x175244, Func Offset: 0x114
	// Line 1814, Address: 0x175258, Func Offset: 0x128
	// Line 1815, Address: 0x17526c, Func Offset: 0x13c
	// Line 1816, Address: 0x175270, Func Offset: 0x140
	// Line 1817, Address: 0x175288, Func Offset: 0x158
	// Line 1818, Address: 0x17528c, Func Offset: 0x15c
	// Line 1820, Address: 0x175290, Func Offset: 0x160
	// Line 1821, Address: 0x1752ac, Func Offset: 0x17c
	// Line 1822, Address: 0x1752f0, Func Offset: 0x1c0
	// Line 1824, Address: 0x175344, Func Offset: 0x214
	// Line 1826, Address: 0x175358, Func Offset: 0x228
	// Func End, Address: 0x175378, Func Offset: 0x248
}

