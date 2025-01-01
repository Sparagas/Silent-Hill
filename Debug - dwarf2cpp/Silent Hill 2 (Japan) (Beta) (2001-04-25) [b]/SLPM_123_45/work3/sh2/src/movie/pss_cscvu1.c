typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef unsigned int type_0[3];
typedef unsigned char type_1[16];
typedef unsigned char type_2[16][16];
typedef unsigned char type_3[8];
typedef unsigned char type_4[8][8];
typedef unsigned char type_5[8];
typedef unsigned char type_6[8][8];
typedef unsigned int* type_7[2];
typedef unsigned int* type_8[2][3];

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
// Start address: 0x236100
void cscVu1Init(_anon1* csc)
{
	// Line 60, Address: 0x236100, Func Offset: 0
	// Line 62, Address: 0x236108, Func Offset: 0x8
	// Line 63, Address: 0x236118, Func Offset: 0x18
	// Line 66, Address: 0x236128, Func Offset: 0x28
	// Line 67, Address: 0x236138, Func Offset: 0x38
	// Line 68, Address: 0x236148, Func Offset: 0x48
	// Func End, Address: 0x236154, Func Offset: 0x54
}

// 
// Start address: 0x236160
void cscVu1Xyz2offset(_anon1* csc, int type, int isBottom, int xoff, int yoff)
{
	unsigned int* xyz2offset;
	unsigned int* tag;
	// Line 71, Address: 0x236160, Func Offset: 0
	// Line 75, Address: 0x236180, Func Offset: 0x20
	// Line 76, Address: 0x236198, Func Offset: 0x38
	// Line 77, Address: 0x2361bc, Func Offset: 0x5c
	// Line 78, Address: 0x2361d4, Func Offset: 0x74
	// Line 79, Address: 0x2361dc, Func Offset: 0x7c
	// Line 80, Address: 0x2361e4, Func Offset: 0x84
	// Func End, Address: 0x2361f8, Func Offset: 0x98
}

// 
// Start address: 0x236200
void cscVu1Kick(unsigned int* tags)
{
	// Line 83, Address: 0x236200, Func Offset: 0
	// Line 84, Address: 0x23620c, Func Offset: 0xc
	// Line 85, Address: 0x236224, Func Offset: 0x24
	// Line 86, Address: 0x236230, Func Offset: 0x30
	// Line 87, Address: 0x236240, Func Offset: 0x40
	// Func End, Address: 0x236250, Func Offset: 0x50
}

// 
// Start address: 0x236250
unsigned int* setGIFtag(unsigned int* p, unsigned long regs, unsigned int nreg, unsigned int flg, unsigned int prim, unsigned int pre, unsigned int eop, unsigned int nloop)
{
	// Line 91, Address: 0x236250, Func Offset: 0
	// Line 92, Address: 0x236274, Func Offset: 0x24
	// Line 93, Address: 0x23628c, Func Offset: 0x3c
	// Line 94, Address: 0x2362c0, Func Offset: 0x70
	// Line 95, Address: 0x2362d4, Func Offset: 0x84
	// Line 96, Address: 0x2362ec, Func Offset: 0x9c
	// Line 97, Address: 0x2362f4, Func Offset: 0xa4
	// Func End, Address: 0x236300, Func Offset: 0xb0
}

// 
// Start address: 0x236300
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
	// Line 100, Address: 0x236300, Func Offset: 0
	// Line 104, Address: 0x23633c, Func Offset: 0x3c
	// Line 106, Address: 0x236344, Func Offset: 0x44
	// Line 107, Address: 0x236350, Func Offset: 0x50
	// Line 112, Address: 0x23635c, Func Offset: 0x5c
	// Line 113, Address: 0x236364, Func Offset: 0x64
	// Line 114, Address: 0x23636c, Func Offset: 0x6c
	// Line 120, Address: 0x236374, Func Offset: 0x74
	// Line 122, Address: 0x23637c, Func Offset: 0x7c
	// Line 123, Address: 0x23638c, Func Offset: 0x8c
	// Line 125, Address: 0x23639c, Func Offset: 0x9c
	// Line 127, Address: 0x2363b4, Func Offset: 0xb4
	// Line 128, Address: 0x2363c8, Func Offset: 0xc8
	// Line 130, Address: 0x2363e0, Func Offset: 0xe0
	// Line 133, Address: 0x2363f4, Func Offset: 0xf4
	// Line 134, Address: 0x236420, Func Offset: 0x120
	// Line 135, Address: 0x23643c, Func Offset: 0x13c
	// Line 136, Address: 0x23644c, Func Offset: 0x14c
	// Line 137, Address: 0x236460, Func Offset: 0x160
	// Line 138, Address: 0x236470, Func Offset: 0x170
	// Line 139, Address: 0x236484, Func Offset: 0x184
	// Line 141, Address: 0x236494, Func Offset: 0x194
	// Line 142, Address: 0x236498, Func Offset: 0x198
	// Line 144, Address: 0x23649c, Func Offset: 0x19c
	// Line 145, Address: 0x2364a8, Func Offset: 0x1a8
	// Line 146, Address: 0x2364b4, Func Offset: 0x1b4
	// Line 148, Address: 0x2364d0, Func Offset: 0x1d0
	// Line 149, Address: 0x2364ec, Func Offset: 0x1ec
	// Line 150, Address: 0x2364f8, Func Offset: 0x1f8
	// Line 152, Address: 0x236504, Func Offset: 0x204
	// Line 153, Address: 0x236518, Func Offset: 0x218
	// Line 154, Address: 0x23653c, Func Offset: 0x23c
	// Line 155, Address: 0x23654c, Func Offset: 0x24c
	// Line 156, Address: 0x236564, Func Offset: 0x264
	// Line 159, Address: 0x23657c, Func Offset: 0x27c
	// Line 160, Address: 0x23658c, Func Offset: 0x28c
	// Line 162, Address: 0x2365a4, Func Offset: 0x2a4
	// Line 169, Address: 0x23661c, Func Offset: 0x31c
	// Line 170, Address: 0x236630, Func Offset: 0x330
	// Line 171, Address: 0x236634, Func Offset: 0x334
	// Line 172, Address: 0x236638, Func Offset: 0x338
	// Line 173, Address: 0x236640, Func Offset: 0x340
	// Line 174, Address: 0x236648, Func Offset: 0x348
	// Line 175, Address: 0x23664c, Func Offset: 0x34c
	// Line 179, Address: 0x236650, Func Offset: 0x350
	// Line 180, Address: 0x236684, Func Offset: 0x384
	// Line 181, Address: 0x2366a0, Func Offset: 0x3a0
	// Line 183, Address: 0x2366c0, Func Offset: 0x3c0
	// Line 189, Address: 0x2366fc, Func Offset: 0x3fc
	// Line 190, Address: 0x236734, Func Offset: 0x434
	// Line 191, Address: 0x236750, Func Offset: 0x450
	// Line 197, Address: 0x236794, Func Offset: 0x494
	// Line 203, Address: 0x2367e8, Func Offset: 0x4e8
	// Line 204, Address: 0x236818, Func Offset: 0x518
	// Line 205, Address: 0x236820, Func Offset: 0x520
	// Line 212, Address: 0x23685c, Func Offset: 0x55c
	// Line 213, Address: 0x236894, Func Offset: 0x594
	// Line 214, Address: 0x2368a0, Func Offset: 0x5a0
	// Line 220, Address: 0x2368dc, Func Offset: 0x5dc
	// Line 228, Address: 0x236924, Func Offset: 0x624
	// Line 229, Address: 0x236958, Func Offset: 0x658
	// Line 230, Address: 0x236978, Func Offset: 0x678
	// Line 232, Address: 0x236994, Func Offset: 0x694
	// Line 238, Address: 0x2369d0, Func Offset: 0x6d0
	// Line 239, Address: 0x236a0c, Func Offset: 0x70c
	// Line 240, Address: 0x236a28, Func Offset: 0x728
	// Line 246, Address: 0x236a74, Func Offset: 0x774
	// Line 252, Address: 0x236ad4, Func Offset: 0x7d4
	// Line 253, Address: 0x236b04, Func Offset: 0x804
	// Line 254, Address: 0x236b10, Func Offset: 0x810
	// Line 261, Address: 0x236b54, Func Offset: 0x854
	// Line 262, Address: 0x236b90, Func Offset: 0x890
	// Line 263, Address: 0x236ba0, Func Offset: 0x8a0
	// Line 269, Address: 0x236bd8, Func Offset: 0x8d8
	// Line 274, Address: 0x236c18, Func Offset: 0x918
	// Line 275, Address: 0x236c28, Func Offset: 0x928
	// Line 276, Address: 0x236c40, Func Offset: 0x940
	// Line 277, Address: 0x236c58, Func Offset: 0x958
	// Line 278, Address: 0x236c60, Func Offset: 0x960
	// Line 279, Address: 0x236c68, Func Offset: 0x968
	// Line 280, Address: 0x236c70, Func Offset: 0x970
	// Line 281, Address: 0x236c84, Func Offset: 0x984
	// Line 284, Address: 0x236ca0, Func Offset: 0x9a0
	// Line 285, Address: 0x236ca8, Func Offset: 0x9a8
	// Line 286, Address: 0x236cb8, Func Offset: 0x9b8
	// Line 289, Address: 0x236cdc, Func Offset: 0x9dc
	// Line 290, Address: 0x236cf4, Func Offset: 0x9f4
	// Line 291, Address: 0x236d08, Func Offset: 0xa08
	// Line 292, Address: 0x236d18, Func Offset: 0xa18
	// Line 293, Address: 0x236d44, Func Offset: 0xa44
	// Line 294, Address: 0x236d58, Func Offset: 0xa58
	// Line 295, Address: 0x236d6c, Func Offset: 0xa6c
	// Line 296, Address: 0x236d78, Func Offset: 0xa78
	// Line 297, Address: 0x236d8c, Func Offset: 0xa8c
	// Line 298, Address: 0x236d9c, Func Offset: 0xa9c
	// Line 300, Address: 0x236da8, Func Offset: 0xaa8
	// Func End, Address: 0x236ddc, Func Offset: 0xadc
}

// 
// Start address: 0x236de0
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
	// Line 303, Address: 0x236de0, Func Offset: 0
	// Line 307, Address: 0x236e1c, Func Offset: 0x3c
	// Line 309, Address: 0x236e24, Func Offset: 0x44
	// Line 310, Address: 0x236e30, Func Offset: 0x50
	// Line 315, Address: 0x236e3c, Func Offset: 0x5c
	// Line 316, Address: 0x236e44, Func Offset: 0x64
	// Line 317, Address: 0x236e4c, Func Offset: 0x6c
	// Line 323, Address: 0x236e54, Func Offset: 0x74
	// Line 325, Address: 0x236e5c, Func Offset: 0x7c
	// Line 326, Address: 0x236e6c, Func Offset: 0x8c
	// Line 328, Address: 0x236e7c, Func Offset: 0x9c
	// Line 330, Address: 0x236e9c, Func Offset: 0xbc
	// Line 331, Address: 0x236eac, Func Offset: 0xcc
	// Line 333, Address: 0x236ec4, Func Offset: 0xe4
	// Line 336, Address: 0x236ed8, Func Offset: 0xf8
	// Line 337, Address: 0x236f04, Func Offset: 0x124
	// Line 338, Address: 0x236f1c, Func Offset: 0x13c
	// Line 339, Address: 0x236f30, Func Offset: 0x150
	// Line 340, Address: 0x236f4c, Func Offset: 0x16c
	// Line 341, Address: 0x236f60, Func Offset: 0x180
	// Line 342, Address: 0x236f74, Func Offset: 0x194
	// Line 344, Address: 0x236f84, Func Offset: 0x1a4
	// Line 345, Address: 0x236f88, Func Offset: 0x1a8
	// Line 347, Address: 0x236f8c, Func Offset: 0x1ac
	// Line 348, Address: 0x236f98, Func Offset: 0x1b8
	// Line 349, Address: 0x236fa4, Func Offset: 0x1c4
	// Line 351, Address: 0x236fc0, Func Offset: 0x1e0
	// Line 352, Address: 0x236fdc, Func Offset: 0x1fc
	// Line 353, Address: 0x236fe8, Func Offset: 0x208
	// Line 355, Address: 0x236ff4, Func Offset: 0x214
	// Line 356, Address: 0x237004, Func Offset: 0x224
	// Line 361, Address: 0x237038, Func Offset: 0x258
	// Line 362, Address: 0x23705c, Func Offset: 0x27c
	// Line 363, Address: 0x237070, Func Offset: 0x290
	// Line 364, Address: 0x23708c, Func Offset: 0x2ac
	// Line 367, Address: 0x2370a4, Func Offset: 0x2c4
	// Line 368, Address: 0x2370b4, Func Offset: 0x2d4
	// Line 370, Address: 0x2370c8, Func Offset: 0x2e8
	// Line 377, Address: 0x237140, Func Offset: 0x360
	// Line 378, Address: 0x237154, Func Offset: 0x374
	// Line 379, Address: 0x237158, Func Offset: 0x378
	// Line 380, Address: 0x23715c, Func Offset: 0x37c
	// Line 381, Address: 0x237164, Func Offset: 0x384
	// Line 382, Address: 0x23716c, Func Offset: 0x38c
	// Line 387, Address: 0x237170, Func Offset: 0x390
	// Line 388, Address: 0x237178, Func Offset: 0x398
	// Line 389, Address: 0x237198, Func Offset: 0x3b8
	// Line 390, Address: 0x23719c, Func Offset: 0x3bc
	// Line 391, Address: 0x2371a4, Func Offset: 0x3c4
	// Line 392, Address: 0x2371c0, Func Offset: 0x3e0
	// Line 393, Address: 0x2371c4, Func Offset: 0x3e4
	// Line 394, Address: 0x2371c8, Func Offset: 0x3e8
	// Line 396, Address: 0x2371e0, Func Offset: 0x400
	// Line 402, Address: 0x237220, Func Offset: 0x440
	// Line 403, Address: 0x237230, Func Offset: 0x450
	// Line 404, Address: 0x237250, Func Offset: 0x470
	// Line 405, Address: 0x237254, Func Offset: 0x474
	// Line 406, Address: 0x23725c, Func Offset: 0x47c
	// Line 407, Address: 0x23727c, Func Offset: 0x49c
	// Line 408, Address: 0x237284, Func Offset: 0x4a4
	// Line 409, Address: 0x237288, Func Offset: 0x4a8
	// Line 414, Address: 0x2372d0, Func Offset: 0x4f0
	// Line 419, Address: 0x23732c, Func Offset: 0x54c
	// Line 420, Address: 0x237334, Func Offset: 0x554
	// Line 421, Address: 0x237354, Func Offset: 0x574
	// Line 422, Address: 0x237358, Func Offset: 0x578
	// Line 423, Address: 0x237360, Func Offset: 0x580
	// Line 424, Address: 0x237368, Func Offset: 0x588
	// Line 425, Address: 0x23736c, Func Offset: 0x58c
	// Line 426, Address: 0x237370, Func Offset: 0x590
	// Line 432, Address: 0x2373b8, Func Offset: 0x5d8
	// Line 433, Address: 0x2373c8, Func Offset: 0x5e8
	// Line 434, Address: 0x2373ec, Func Offset: 0x60c
	// Line 435, Address: 0x2373f0, Func Offset: 0x610
	// Line 436, Address: 0x2373f8, Func Offset: 0x618
	// Line 437, Address: 0x237404, Func Offset: 0x624
	// Line 438, Address: 0x23740c, Func Offset: 0x62c
	// Line 439, Address: 0x237410, Func Offset: 0x630
	// Line 444, Address: 0x237458, Func Offset: 0x678
	// Line 451, Address: 0x2374a4, Func Offset: 0x6c4
	// Line 452, Address: 0x2374ac, Func Offset: 0x6cc
	// Line 453, Address: 0x2374cc, Func Offset: 0x6ec
	// Line 454, Address: 0x2374d0, Func Offset: 0x6f0
	// Line 455, Address: 0x2374d8, Func Offset: 0x6f8
	// Line 456, Address: 0x2374f4, Func Offset: 0x714
	// Line 458, Address: 0x2374f8, Func Offset: 0x718
	// Line 459, Address: 0x237510, Func Offset: 0x730
	// Line 464, Address: 0x237558, Func Offset: 0x778
	// Line 465, Address: 0x237568, Func Offset: 0x788
	// Line 466, Address: 0x23758c, Func Offset: 0x7ac
	// Line 467, Address: 0x237590, Func Offset: 0x7b0
	// Line 468, Address: 0x237598, Func Offset: 0x7b8
	// Line 469, Address: 0x2375b8, Func Offset: 0x7d8
	// Line 470, Address: 0x2375bc, Func Offset: 0x7dc
	// Line 471, Address: 0x2375c0, Func Offset: 0x7e0
	// Line 476, Address: 0x237608, Func Offset: 0x828
	// Line 481, Address: 0x237660, Func Offset: 0x880
	// Line 482, Address: 0x237668, Func Offset: 0x888
	// Line 483, Address: 0x23768c, Func Offset: 0x8ac
	// Line 484, Address: 0x237690, Func Offset: 0x8b0
	// Line 485, Address: 0x237698, Func Offset: 0x8b8
	// Line 486, Address: 0x2376a4, Func Offset: 0x8c4
	// Line 487, Address: 0x2376ac, Func Offset: 0x8cc
	// Line 488, Address: 0x2376b0, Func Offset: 0x8d0
	// Line 494, Address: 0x2376f4, Func Offset: 0x914
	// Line 495, Address: 0x237704, Func Offset: 0x924
	// Line 496, Address: 0x237724, Func Offset: 0x944
	// Line 497, Address: 0x237728, Func Offset: 0x948
	// Line 498, Address: 0x237730, Func Offset: 0x950
	// Line 499, Address: 0x237738, Func Offset: 0x958
	// Line 500, Address: 0x23773c, Func Offset: 0x95c
	// Line 501, Address: 0x237740, Func Offset: 0x960
	// Line 506, Address: 0x237780, Func Offset: 0x9a0
	// Line 510, Address: 0x2377c4, Func Offset: 0x9e4
	// Line 511, Address: 0x2377d4, Func Offset: 0x9f4
	// Line 512, Address: 0x2377e4, Func Offset: 0xa04
	// Line 513, Address: 0x2377fc, Func Offset: 0xa1c
	// Line 514, Address: 0x237804, Func Offset: 0xa24
	// Line 515, Address: 0x23780c, Func Offset: 0xa2c
	// Line 516, Address: 0x237814, Func Offset: 0xa34
	// Line 517, Address: 0x23782c, Func Offset: 0xa4c
	// Line 520, Address: 0x237848, Func Offset: 0xa68
	// Line 521, Address: 0x237850, Func Offset: 0xa70
	// Line 522, Address: 0x237860, Func Offset: 0xa80
	// Line 525, Address: 0x237884, Func Offset: 0xaa4
	// Line 526, Address: 0x23789c, Func Offset: 0xabc
	// Line 527, Address: 0x2378b8, Func Offset: 0xad8
	// Line 528, Address: 0x2378cc, Func Offset: 0xaec
	// Line 529, Address: 0x2378f8, Func Offset: 0xb18
	// Line 530, Address: 0x237908, Func Offset: 0xb28
	// Line 531, Address: 0x237924, Func Offset: 0xb44
	// Line 532, Address: 0x237938, Func Offset: 0xb58
	// Line 533, Address: 0x23794c, Func Offset: 0xb6c
	// Line 534, Address: 0x237964, Func Offset: 0xb84
	// Line 535, Address: 0x237974, Func Offset: 0xb94
	// Func End, Address: 0x2379a8, Func Offset: 0xbc8
}

// 
// Start address: 0x2379b0
void cscVu1SetTag(unsigned int* tags, int type, void* image, int width, int height)
{
	// Line 540, Address: 0x2379b0, Func Offset: 0
	// Line 541, Address: 0x2379cc, Func Offset: 0x1c
	// Line 543, Address: 0x2379ec, Func Offset: 0x3c
	// Line 544, Address: 0x237a04, Func Offset: 0x54
	// Line 547, Address: 0x237a0c, Func Offset: 0x5c
	// Line 550, Address: 0x237a24, Func Offset: 0x74
	// Func End, Address: 0x237a34, Func Offset: 0x84
}

// 
// Start address: 0x237a40
void mkrefpacket(_anon2* pkt, void* src, unsigned int upkcmd, unsigned int vuaddr, unsigned int vunum, unsigned int dmarate)
{
	// Line 553, Address: 0x237a40, Func Offset: 0
	// Line 554, Address: 0x237a64, Func Offset: 0x24
	// Line 557, Address: 0x237ac0, Func Offset: 0x80
	// Func End, Address: 0x237ad4, Func Offset: 0x94
}

// 
// Start address: 0x237ae0
void mkcntpacket(_anon2* pkt, unsigned int code1, unsigned int code2)
{
	// Line 560, Address: 0x237ae0, Func Offset: 0
	// Line 561, Address: 0x237af4, Func Offset: 0x14
	// Line 562, Address: 0x237b04, Func Offset: 0x24
	// Line 563, Address: 0x237b14, Func Offset: 0x34
	// Line 564, Address: 0x237b24, Func Offset: 0x44
	// Func End, Address: 0x237b34, Func Offset: 0x54
}

