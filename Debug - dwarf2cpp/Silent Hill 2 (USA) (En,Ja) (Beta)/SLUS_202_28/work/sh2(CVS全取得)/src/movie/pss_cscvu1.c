typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef unsigned char type_0[16];
typedef unsigned char type_1[16][16];
typedef unsigned char type_2[8];
typedef unsigned char type_3[8][8];
typedef unsigned char type_4[8];
typedef unsigned char type_5[8][8];
typedef unsigned int* type_6[2];
typedef unsigned int* type_7[2][3];
typedef unsigned int type_8[3];

struct _anon0
{
	unsigned char y[16][16];
	unsigned char cb[8][8];
	unsigned char cr[8][8];
};

struct _anon1
{
	unsigned int* micro[2][3];
};

struct _anon2
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

unsigned int vu1_base_adr[3];
unsigned int load_yuvprg1_mpg;
unsigned int load_yuvprg0_mpg;
unsigned int load_yuvfrfl1_mpg;
unsigned int load_yuvfrfl0_mpg;
unsigned int vu1_XYZ2Offset;
unsigned int vu1_init;

void cscVu1Init(_anon1* csc);
void cscVu1Xyz2offset(_anon1* csc, int type, int isBottom, int xoff, int yoff);
void cscVu1Kick(unsigned int* tags);
unsigned int* setGIFtag(unsigned int* p, unsigned long regs, unsigned int nreg, unsigned int flg, unsigned int prim, unsigned int pre, unsigned int eop, unsigned int nloop);
void cscVu1SetTag_frfl(unsigned int* tags, void* image, int width, int height);
void cscVu1SetTag_prog(unsigned int* tags, void* image, int width, int height);
void cscVu1SetTag(unsigned int* tags, int type, void* image, int width, int height);
void mkrefpacket(_anon2* pkt, void* src, unsigned int upkcmd, unsigned int vuaddr, unsigned int vunum, unsigned int dmarate);
void mkcntpacket(_anon2* pkt, unsigned int code1, unsigned int code2);

// 
// Start address: 0x2887e0
void cscVu1Init(_anon1* csc)
{
	// Line 62, Address: 0x2887e0, Func Offset: 0
	// Line 63, Address: 0x2887ec, Func Offset: 0xc
	// Line 66, Address: 0x2887f8, Func Offset: 0x18
	// Line 67, Address: 0x288804, Func Offset: 0x24
	// Line 68, Address: 0x288810, Func Offset: 0x30
	// Func End, Address: 0x288818, Func Offset: 0x38
}

// 
// Start address: 0x288820
void cscVu1Xyz2offset(_anon1* csc, int type, int isBottom, int xoff, int yoff)
{
	unsigned int* xyz2offset;
	unsigned int* tag;
	// Line 75, Address: 0x288820, Func Offset: 0
	// Line 76, Address: 0x28883c, Func Offset: 0x1c
	// Line 77, Address: 0x288854, Func Offset: 0x34
	// Line 78, Address: 0x288868, Func Offset: 0x48
	// Line 79, Address: 0x28886c, Func Offset: 0x4c
	// Line 80, Address: 0x288870, Func Offset: 0x50
	// Func End, Address: 0x288878, Func Offset: 0x58
}

// 
// Start address: 0x288880
void cscVu1Kick(unsigned int* tags)
{
	// Line 84, Address: 0x288880, Func Offset: 0
	// Line 85, Address: 0x288890, Func Offset: 0x10
	// Line 86, Address: 0x288898, Func Offset: 0x18
	// Line 87, Address: 0x2888a4, Func Offset: 0x24
	// Func End, Address: 0x2888ac, Func Offset: 0x2c
}

// 
// Start address: 0x2888b0
unsigned int* setGIFtag(unsigned int* p, unsigned long regs, unsigned int nreg, unsigned int flg, unsigned int prim, unsigned int pre, unsigned int eop, unsigned int nloop)
{
	// Line 92, Address: 0x2888b0, Func Offset: 0
	// Line 93, Address: 0x2888bc, Func Offset: 0xc
	// Line 94, Address: 0x2888dc, Func Offset: 0x2c
	// Line 95, Address: 0x2888e8, Func Offset: 0x38
	// Line 96, Address: 0x2888f8, Func Offset: 0x48
	// Line 97, Address: 0x2888fc, Func Offset: 0x4c
	// Func End, Address: 0x288904, Func Offset: 0x54
}

// 
// Start address: 0x288910
void cscVu1SetTag_frfl(unsigned int* tags, void* image, int width, int height)
{
	int ir;
	int offset;
	char* src;
	_anon0* img;
	_anon0* imgbase;
	int vumem1_iynum;
	int vumem1_iuvnum;
	unsigned int* p;
	unsigned int lastkickp;
	<unknown fundamental type (0xa510)> giftagGsAD;
	<unknown fundamental type (0xa510)> giftagPoint;
	int mby;
	int mbx;
	int nextbasep;
	int basep;
	int pdsty;
	int pdstx;
	int dsty;
	int dstx;
	int j;
	int i;
	_anon2 pkt;
	// Line 100, Address: 0x288910, Func Offset: 0
	// Line 104, Address: 0x288940, Func Offset: 0x30
	// Line 106, Address: 0x288944, Func Offset: 0x34
	// Line 107, Address: 0x28894c, Func Offset: 0x3c
	// Line 114, Address: 0x288950, Func Offset: 0x40
	// Line 122, Address: 0x288954, Func Offset: 0x44
	// Line 123, Address: 0x288964, Func Offset: 0x54
	// Line 125, Address: 0x288970, Func Offset: 0x60
	// Line 127, Address: 0x288988, Func Offset: 0x78
	// Line 128, Address: 0x288998, Func Offset: 0x88
	// Line 130, Address: 0x2889a8, Func Offset: 0x98
	// Line 133, Address: 0x2889bc, Func Offset: 0xac
	// Line 134, Address: 0x2889e4, Func Offset: 0xd4
	// Line 135, Address: 0x2889f8, Func Offset: 0xe8
	// Line 136, Address: 0x288a08, Func Offset: 0xf8
	// Line 137, Address: 0x288a1c, Func Offset: 0x10c
	// Line 138, Address: 0x288a2c, Func Offset: 0x11c
	// Line 139, Address: 0x288a40, Func Offset: 0x130
	// Line 141, Address: 0x288a50, Func Offset: 0x140
	// Line 142, Address: 0x288a54, Func Offset: 0x144
	// Line 144, Address: 0x288a58, Func Offset: 0x148
	// Line 145, Address: 0x288a64, Func Offset: 0x154
	// Line 146, Address: 0x288a70, Func Offset: 0x160
	// Line 148, Address: 0x288a88, Func Offset: 0x178
	// Line 149, Address: 0x288aa4, Func Offset: 0x194
	// Line 150, Address: 0x288aac, Func Offset: 0x19c
	// Line 152, Address: 0x288ab4, Func Offset: 0x1a4
	// Line 153, Address: 0x288ac4, Func Offset: 0x1b4
	// Line 157, Address: 0x288af0, Func Offset: 0x1e0
	// Line 158, Address: 0x288b14, Func Offset: 0x204
	// Line 159, Address: 0x288b24, Func Offset: 0x214
	// Line 160, Address: 0x288b38, Func Offset: 0x228
	// Line 163, Address: 0x288b4c, Func Offset: 0x23c
	// Line 164, Address: 0x288b5c, Func Offset: 0x24c
	// Line 166, Address: 0x288b70, Func Offset: 0x260
	// Line 173, Address: 0x288ba4, Func Offset: 0x294
	// Line 174, Address: 0x288bb8, Func Offset: 0x2a8
	// Line 175, Address: 0x288bbc, Func Offset: 0x2ac
	// Line 176, Address: 0x288bc0, Func Offset: 0x2b0
	// Line 177, Address: 0x288bc8, Func Offset: 0x2b8
	// Line 178, Address: 0x288bcc, Func Offset: 0x2bc
	// Line 184, Address: 0x288bd0, Func Offset: 0x2c0
	// Line 185, Address: 0x288c24, Func Offset: 0x314
	// Line 187, Address: 0x288c3c, Func Offset: 0x32c
	// Line 195, Address: 0x288c64, Func Offset: 0x354
	// Line 201, Address: 0x288cdc, Func Offset: 0x3cc
	// Line 209, Address: 0x288d24, Func Offset: 0x414
	// Line 218, Address: 0x288d70, Func Offset: 0x460
	// Line 224, Address: 0x288dc4, Func Offset: 0x4b4
	// Line 233, Address: 0x288de8, Func Offset: 0x4d8
	// Line 234, Address: 0x288e20, Func Offset: 0x510
	// Line 236, Address: 0x288e38, Func Offset: 0x528
	// Line 244, Address: 0x288e60, Func Offset: 0x550
	// Line 250, Address: 0x288ebc, Func Offset: 0x5ac
	// Line 258, Address: 0x288ee4, Func Offset: 0x5d4
	// Line 267, Address: 0x288f30, Func Offset: 0x620
	// Line 273, Address: 0x288f84, Func Offset: 0x674
	// Line 278, Address: 0x288fa8, Func Offset: 0x698
	// Line 279, Address: 0x288fb8, Func Offset: 0x6a8
	// Line 280, Address: 0x288fc8, Func Offset: 0x6b8
	// Line 281, Address: 0x288fd8, Func Offset: 0x6c8
	// Line 282, Address: 0x288fdc, Func Offset: 0x6cc
	// Line 283, Address: 0x288fe0, Func Offset: 0x6d0
	// Line 284, Address: 0x288fe4, Func Offset: 0x6d4
	// Line 285, Address: 0x288ff4, Func Offset: 0x6e4
	// Line 289, Address: 0x289008, Func Offset: 0x6f8
	// Line 290, Address: 0x289018, Func Offset: 0x708
	// Line 293, Address: 0x28902c, Func Offset: 0x71c
	// Line 294, Address: 0x28903c, Func Offset: 0x72c
	// Line 295, Address: 0x28904c, Func Offset: 0x73c
	// Line 296, Address: 0x28905c, Func Offset: 0x74c
	// Line 297, Address: 0x289084, Func Offset: 0x774
	// Line 298, Address: 0x289094, Func Offset: 0x784
	// Line 299, Address: 0x2890a8, Func Offset: 0x798
	// Line 300, Address: 0x2890b4, Func Offset: 0x7a4
	// Line 301, Address: 0x2890c0, Func Offset: 0x7b0
	// Line 302, Address: 0x2890d0, Func Offset: 0x7c0
	// Line 304, Address: 0x2890dc, Func Offset: 0x7cc
	// Func End, Address: 0x289110, Func Offset: 0x800
}

// 
// Start address: 0x289110
void cscVu1SetTag_prog(unsigned int* tags, void* image, int width, int height)
{
	int ir;
	int joffset;
	int ioffset;
	char* src;
	_anon0* img;
	_anon0* imgbase;
	int vumem1_iynum;
	int vumem1_iuvnum;
	unsigned int* p;
	unsigned int lastkickp;
	<unknown fundamental type (0xa510)> giftagGsAD;
	<unknown fundamental type (0xa510)> giftagPoint;
	int mby;
	int mbx;
	int nextbasep;
	int basep;
	int pdsty;
	int pdstx;
	int dsty;
	int dstx;
	int j;
	int i;
	_anon2 pkt;
	// Line 307, Address: 0x289110, Func Offset: 0
	// Line 311, Address: 0x289140, Func Offset: 0x30
	// Line 313, Address: 0x289144, Func Offset: 0x34
	// Line 314, Address: 0x28914c, Func Offset: 0x3c
	// Line 321, Address: 0x289150, Func Offset: 0x40
	// Line 329, Address: 0x289154, Func Offset: 0x44
	// Line 330, Address: 0x289164, Func Offset: 0x54
	// Line 332, Address: 0x289170, Func Offset: 0x60
	// Line 334, Address: 0x289188, Func Offset: 0x78
	// Line 335, Address: 0x289198, Func Offset: 0x88
	// Line 337, Address: 0x2891a8, Func Offset: 0x98
	// Line 340, Address: 0x2891bc, Func Offset: 0xac
	// Line 341, Address: 0x2891e4, Func Offset: 0xd4
	// Line 342, Address: 0x2891f8, Func Offset: 0xe8
	// Line 343, Address: 0x289208, Func Offset: 0xf8
	// Line 344, Address: 0x28921c, Func Offset: 0x10c
	// Line 345, Address: 0x28922c, Func Offset: 0x11c
	// Line 346, Address: 0x289240, Func Offset: 0x130
	// Line 348, Address: 0x289250, Func Offset: 0x140
	// Line 349, Address: 0x289254, Func Offset: 0x144
	// Line 351, Address: 0x289258, Func Offset: 0x148
	// Line 352, Address: 0x289264, Func Offset: 0x154
	// Line 353, Address: 0x289270, Func Offset: 0x160
	// Line 355, Address: 0x28928c, Func Offset: 0x17c
	// Line 356, Address: 0x2892a8, Func Offset: 0x198
	// Line 357, Address: 0x2892b4, Func Offset: 0x1a4
	// Line 359, Address: 0x2892bc, Func Offset: 0x1ac
	// Line 360, Address: 0x2892cc, Func Offset: 0x1bc
	// Line 365, Address: 0x2892f8, Func Offset: 0x1e8
	// Line 366, Address: 0x28931c, Func Offset: 0x20c
	// Line 367, Address: 0x28932c, Func Offset: 0x21c
	// Line 368, Address: 0x289340, Func Offset: 0x230
	// Line 371, Address: 0x289354, Func Offset: 0x244
	// Line 372, Address: 0x289364, Func Offset: 0x254
	// Line 374, Address: 0x289378, Func Offset: 0x268
	// Line 381, Address: 0x2893ac, Func Offset: 0x29c
	// Line 382, Address: 0x2893c4, Func Offset: 0x2b4
	// Line 383, Address: 0x2893c8, Func Offset: 0x2b8
	// Line 384, Address: 0x2893d0, Func Offset: 0x2c0
	// Line 385, Address: 0x2893d8, Func Offset: 0x2c8
	// Line 386, Address: 0x2893dc, Func Offset: 0x2cc
	// Line 391, Address: 0x2893e0, Func Offset: 0x2d0
	// Line 392, Address: 0x2893e8, Func Offset: 0x2d8
	// Line 393, Address: 0x28940c, Func Offset: 0x2fc
	// Line 394, Address: 0x289410, Func Offset: 0x300
	// Line 395, Address: 0x289418, Func Offset: 0x308
	// Line 396, Address: 0x289438, Func Offset: 0x328
	// Line 397, Address: 0x28943c, Func Offset: 0x32c
	// Line 398, Address: 0x289440, Func Offset: 0x330
	// Line 400, Address: 0x289458, Func Offset: 0x348
	// Line 406, Address: 0x289484, Func Offset: 0x374
	// Line 407, Address: 0x289494, Func Offset: 0x384
	// Line 408, Address: 0x2894b8, Func Offset: 0x3a8
	// Line 409, Address: 0x2894bc, Func Offset: 0x3ac
	// Line 410, Address: 0x2894c4, Func Offset: 0x3b4
	// Line 411, Address: 0x2894e4, Func Offset: 0x3d4
	// Line 413, Address: 0x2894e8, Func Offset: 0x3d8
	// Line 418, Address: 0x289514, Func Offset: 0x404
	// Line 423, Address: 0x289568, Func Offset: 0x458
	// Line 424, Address: 0x289570, Func Offset: 0x460
	// Line 425, Address: 0x289588, Func Offset: 0x478
	// Line 426, Address: 0x28958c, Func Offset: 0x47c
	// Line 427, Address: 0x289594, Func Offset: 0x484
	// Line 428, Address: 0x289598, Func Offset: 0x488
	// Line 429, Address: 0x28959c, Func Offset: 0x48c
	// Line 430, Address: 0x2895a0, Func Offset: 0x490
	// Line 436, Address: 0x2895c8, Func Offset: 0x4b8
	// Line 437, Address: 0x2895d8, Func Offset: 0x4c8
	// Line 438, Address: 0x2895f0, Func Offset: 0x4e0
	// Line 439, Address: 0x2895f4, Func Offset: 0x4e4
	// Line 440, Address: 0x2895fc, Func Offset: 0x4ec
	// Line 441, Address: 0x289600, Func Offset: 0x4f0
	// Line 442, Address: 0x289604, Func Offset: 0x4f4
	// Line 443, Address: 0x289608, Func Offset: 0x4f8
	// Line 448, Address: 0x289630, Func Offset: 0x520
	// Line 455, Address: 0x289654, Func Offset: 0x544
	// Line 456, Address: 0x28965c, Func Offset: 0x54c
	// Line 457, Address: 0x289678, Func Offset: 0x568
	// Line 458, Address: 0x28967c, Func Offset: 0x56c
	// Line 459, Address: 0x289684, Func Offset: 0x574
	// Line 460, Address: 0x28968c, Func Offset: 0x57c
	// Line 462, Address: 0x289690, Func Offset: 0x580
	// Line 463, Address: 0x2896a8, Func Offset: 0x598
	// Line 468, Address: 0x2896d4, Func Offset: 0x5c4
	// Line 469, Address: 0x2896e4, Func Offset: 0x5d4
	// Line 470, Address: 0x289700, Func Offset: 0x5f0
	// Line 471, Address: 0x289704, Func Offset: 0x5f4
	// Line 472, Address: 0x28970c, Func Offset: 0x5fc
	// Line 473, Address: 0x289714, Func Offset: 0x604
	// Line 475, Address: 0x289718, Func Offset: 0x608
	// Line 480, Address: 0x289744, Func Offset: 0x634
	// Line 485, Address: 0x289770, Func Offset: 0x660
	// Line 486, Address: 0x289778, Func Offset: 0x668
	// Line 487, Address: 0x289790, Func Offset: 0x680
	// Line 488, Address: 0x289794, Func Offset: 0x684
	// Line 489, Address: 0x28979c, Func Offset: 0x68c
	// Line 490, Address: 0x2897a0, Func Offset: 0x690
	// Line 491, Address: 0x2897a4, Func Offset: 0x694
	// Line 492, Address: 0x2897a8, Func Offset: 0x698
	// Line 498, Address: 0x2897d0, Func Offset: 0x6c0
	// Line 499, Address: 0x2897e0, Func Offset: 0x6d0
	// Line 500, Address: 0x2897f8, Func Offset: 0x6e8
	// Line 501, Address: 0x2897fc, Func Offset: 0x6ec
	// Line 502, Address: 0x289804, Func Offset: 0x6f4
	// Line 503, Address: 0x289808, Func Offset: 0x6f8
	// Line 504, Address: 0x28980c, Func Offset: 0x6fc
	// Line 505, Address: 0x289810, Func Offset: 0x700
	// Line 510, Address: 0x289838, Func Offset: 0x728
	// Line 514, Address: 0x28985c, Func Offset: 0x74c
	// Line 515, Address: 0x28986c, Func Offset: 0x75c
	// Line 516, Address: 0x28987c, Func Offset: 0x76c
	// Line 517, Address: 0x28988c, Func Offset: 0x77c
	// Line 518, Address: 0x289890, Func Offset: 0x780
	// Line 519, Address: 0x289894, Func Offset: 0x784
	// Line 520, Address: 0x289898, Func Offset: 0x788
	// Line 521, Address: 0x2898ac, Func Offset: 0x79c
	// Line 525, Address: 0x2898cc, Func Offset: 0x7bc
	// Line 526, Address: 0x2898dc, Func Offset: 0x7cc
	// Line 529, Address: 0x2898f0, Func Offset: 0x7e0
	// Line 530, Address: 0x289900, Func Offset: 0x7f0
	// Line 531, Address: 0x289910, Func Offset: 0x800
	// Line 532, Address: 0x289920, Func Offset: 0x810
	// Line 533, Address: 0x289948, Func Offset: 0x838
	// Line 534, Address: 0x289958, Func Offset: 0x848
	// Line 535, Address: 0x28996c, Func Offset: 0x85c
	// Line 536, Address: 0x289978, Func Offset: 0x868
	// Line 537, Address: 0x289984, Func Offset: 0x874
	// Line 538, Address: 0x289994, Func Offset: 0x884
	// Line 539, Address: 0x2899a0, Func Offset: 0x890
	// Func End, Address: 0x2899d4, Func Offset: 0x8c4
}

// 
// Start address: 0x2899e0
void cscVu1SetTag(unsigned int* tags, int type, void* image, int width, int height)
{
	// Line 544, Address: 0x2899e0, Func Offset: 0
	// Line 545, Address: 0x2899e8, Func Offset: 0x8
	// Line 547, Address: 0x289a04, Func Offset: 0x24
	// Line 548, Address: 0x289a18, Func Offset: 0x38
	// Line 551, Address: 0x289a20, Func Offset: 0x40
	// Line 554, Address: 0x289a34, Func Offset: 0x54
	// Func End, Address: 0x289a44, Func Offset: 0x64
}

// 
// Start address: 0x289a50
void mkrefpacket(_anon2* pkt, void* src, unsigned int upkcmd, unsigned int vuaddr, unsigned int vunum, unsigned int dmarate)
{
	// Line 557, Address: 0x289a50, Func Offset: 0
	// Line 558, Address: 0x289a58, Func Offset: 0x8
	// Line 561, Address: 0x289a98, Func Offset: 0x48
	// Func End, Address: 0x289aa8, Func Offset: 0x58
}

// 
// Start address: 0x289ab0
void mkcntpacket(_anon2* pkt, unsigned int code1, unsigned int code2)
{
	// Line 564, Address: 0x289ab0, Func Offset: 0
	// Line 565, Address: 0x289ad0, Func Offset: 0x20
	// Line 566, Address: 0x289adc, Func Offset: 0x2c
	// Line 567, Address: 0x289aec, Func Offset: 0x3c
	// Line 568, Address: 0x289afc, Func Offset: 0x4c
	// Func End, Address: 0x289b18, Func Offset: 0x68
}

