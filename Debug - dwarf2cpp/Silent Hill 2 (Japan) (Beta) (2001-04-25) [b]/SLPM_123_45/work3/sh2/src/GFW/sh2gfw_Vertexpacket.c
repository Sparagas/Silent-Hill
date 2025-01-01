typedef union Q_WORDDATA;
typedef struct sh2gfw_VU_HEAD;
typedef struct sh2gfw_TRANSGEOM_HEAD;
typedef struct sh2gfw_GEOM_HEAD;


typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned long type_7[2];
typedef unsigned short type_8[10];

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct sh2gfw_VU_HEAD
{
	unsigned short vuparm[10];
	unsigned char vukind;
	unsigned char vuamount;
	unsigned char eop_flg;
	unsigned char padc;
	unsigned int vupartsize;
	unsigned int toNextVUPART;
};

struct sh2gfw_TRANSGEOM_HEAD
{
	unsigned short vNum;
	unsigned short tileno;
	unsigned int datasize;
	unsigned int toNextTRANSGEOM;
	unsigned short unpack_format;
	unsigned short prim;
	Q_WORDDATA calcparms0;
	Q_WORDDATA calcparms1;
	Q_WORDDATA work1;
	Q_WORDDATA work2;
	Q_WORDDATA work3;
	Q_WORDDATA work4;
};

struct sh2gfw_GEOM_HEAD
{
	unsigned short tsleng;
	unsigned short tileno;
	unsigned int datasize;
	unsigned int toNextGEOM;
	unsigned short unpack_format;
	unsigned short prim;
	Q_WORDDATA calcparms0;
	Q_WORDDATA calcparms1;
	Q_WORDDATA work1;
	Q_WORDDATA work2;
	Q_WORDDATA work3;
	Q_WORDDATA work4;
};


void GetPhongParm(sh2gfw_VU_HEAD* pV, Q_WORDDATA* pq);
void sh2gfw_Geom_MakePacket(sh2gfw_VU_HEAD* pV, sh2gfw_GEOM_HEAD* sGE, int packsize, int xgkick, int execaddr, Q_WORDDATA** ppqwd);
void sh2gfw_SemiTrans_GeomPacket(sh2gfw_TRANSGEOM_HEAD* sGE, int gid, Q_WORDDATA* inf, Q_WORDDATA** pkhead);

// 
// Start address: 0x185690
void GetPhongParm(sh2gfw_VU_HEAD* pV, Q_WORDDATA* pq)
{
	float flb;
	float fldeg;
	float amax;
	float cs;
	Q_WORDDATA* qwd;
	// Line 52, Address: 0x185690, Func Offset: 0
	// Line 56, Address: 0x1856a4, Func Offset: 0x14
	// Line 58, Address: 0x1856a8, Func Offset: 0x18
	// Line 59, Address: 0x1856e8, Func Offset: 0x58
	// Line 61, Address: 0x185728, Func Offset: 0x98
	// Line 67, Address: 0x1857bc, Func Offset: 0x12c
	// Line 70, Address: 0x1857d0, Func Offset: 0x140
	// Line 71, Address: 0x1857f4, Func Offset: 0x164
	// Line 73, Address: 0x185810, Func Offset: 0x180
	// Func End, Address: 0x185824, Func Offset: 0x194
}

// 
// Start address: 0x185830
void sh2gfw_Geom_MakePacket(sh2gfw_VU_HEAD* pV, sh2gfw_GEOM_HEAD* sGE, int packsize, int xgkick, int execaddr, Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* headbuf;
	Q_WORDDATA* giftag;
	Q_WORDDATA* qwd;
	Q_WORDDATA* g_pack;
	unsigned char* curr_stcol;
	unsigned char* curr_vernor;
	int tsl;
	int next;
	int rest_vNum;
	int vNum;
	int dpacksize;
	// Line 129, Address: 0x185830, Func Offset: 0
	// Line 130, Address: 0x185874, Func Offset: 0x44
	// Line 134, Address: 0x185878, Func Offset: 0x48
	// Line 135, Address: 0x185880, Func Offset: 0x50
	// Line 136, Address: 0x185888, Func Offset: 0x58
	// Line 139, Address: 0x18588c, Func Offset: 0x5c
	// Line 141, Address: 0x185898, Func Offset: 0x68
	// Line 143, Address: 0x1858a4, Func Offset: 0x74
	// Line 144, Address: 0x1858a8, Func Offset: 0x78
	// Line 145, Address: 0x1858b0, Func Offset: 0x80
	// Line 147, Address: 0x1858bc, Func Offset: 0x8c
	// Line 150, Address: 0x1858c4, Func Offset: 0x94
	// Line 151, Address: 0x1858f4, Func Offset: 0xc4
	// Line 154, Address: 0x1858fc, Func Offset: 0xcc
	// Line 155, Address: 0x185928, Func Offset: 0xf8
	// Line 158, Address: 0x185944, Func Offset: 0x114
	// Line 159, Address: 0x185954, Func Offset: 0x124
	// Line 160, Address: 0x185958, Func Offset: 0x128
	// Line 161, Address: 0x18595c, Func Offset: 0x12c
	// Line 166, Address: 0x185970, Func Offset: 0x140
	// Line 174, Address: 0x1859b0, Func Offset: 0x180
	// Line 178, Address: 0x1859e8, Func Offset: 0x1b8
	// Line 184, Address: 0x185a0c, Func Offset: 0x1dc
	// Line 185, Address: 0x185a1c, Func Offset: 0x1ec
	// Line 186, Address: 0x185a20, Func Offset: 0x1f0
	// Line 198, Address: 0x185a28, Func Offset: 0x1f8
	// Line 199, Address: 0x185a2c, Func Offset: 0x1fc
	// Line 200, Address: 0x185a60, Func Offset: 0x230
	// Line 201, Address: 0x185a70, Func Offset: 0x240
	// Line 203, Address: 0x185a80, Func Offset: 0x250
	// Line 208, Address: 0x185ab0, Func Offset: 0x280
	// Line 232, Address: 0x185ac4, Func Offset: 0x294
	// Line 245, Address: 0x185ad4, Func Offset: 0x2a4
	// Line 258, Address: 0x185ae8, Func Offset: 0x2b8
	// Line 259, Address: 0x185b20, Func Offset: 0x2f0
	// Line 262, Address: 0x185b30, Func Offset: 0x300
	// Line 264, Address: 0x185b48, Func Offset: 0x318
	// Line 265, Address: 0x185b58, Func Offset: 0x328
	// Line 271, Address: 0x185b5c, Func Offset: 0x32c
	// Line 272, Address: 0x185b90, Func Offset: 0x360
	// Line 273, Address: 0x185ba0, Func Offset: 0x370
	// Line 274, Address: 0x185bb0, Func Offset: 0x380
	// Line 282, Address: 0x185bc4, Func Offset: 0x394
	// Line 285, Address: 0x185bfc, Func Offset: 0x3cc
	// Line 287, Address: 0x185c0c, Func Offset: 0x3dc
	// Line 289, Address: 0x185c24, Func Offset: 0x3f4
	// Line 293, Address: 0x185c2c, Func Offset: 0x3fc
	// Line 294, Address: 0x185c30, Func Offset: 0x400
	// Line 295, Address: 0x185c44, Func Offset: 0x414
	// Line 297, Address: 0x185c54, Func Offset: 0x424
	// Line 298, Address: 0x185c6c, Func Offset: 0x43c
	// Line 303, Address: 0x185c80, Func Offset: 0x450
	// Line 304, Address: 0x185c84, Func Offset: 0x454
	// Line 310, Address: 0x185c8c, Func Offset: 0x45c
	// Line 311, Address: 0x185c94, Func Offset: 0x464
	// Line 312, Address: 0x185cc8, Func Offset: 0x498
	// Line 313, Address: 0x185cd8, Func Offset: 0x4a8
	// Line 314, Address: 0x185ce8, Func Offset: 0x4b8
	// Line 316, Address: 0x185cfc, Func Offset: 0x4cc
	// Line 318, Address: 0x185d34, Func Offset: 0x504
	// Line 321, Address: 0x185d44, Func Offset: 0x514
	// Line 322, Address: 0x185d4c, Func Offset: 0x51c
	// Line 323, Address: 0x185d50, Func Offset: 0x520
	// Line 324, Address: 0x185d58, Func Offset: 0x528
	// Line 325, Address: 0x185d5c, Func Offset: 0x52c
	// Line 329, Address: 0x185d60, Func Offset: 0x530
	// Line 331, Address: 0x185d70, Func Offset: 0x540
	// Line 333, Address: 0x185d78, Func Offset: 0x548
	// Func End, Address: 0x185dac, Func Offset: 0x57c
}

// 
// Start address: 0x185db0
void sh2gfw_SemiTrans_GeomPacket(sh2gfw_TRANSGEOM_HEAD* sGE, int gid, Q_WORDDATA* inf, Q_WORDDATA** pkhead)
{
	Q_WORDDATA* headbuf;
	Q_WORDDATA* giftag;
	Q_WORDDATA* qwd;
	Q_WORDDATA* g_pack;
	unsigned char* curr_stcol;
	unsigned char* curr_vernor;
	int geom_id;
	int next;
	int rest_vNum;
	int vNum;
	int dpacksize;
	int packsize;
	// Line 401, Address: 0x185db0, Func Offset: 0
	// Line 404, Address: 0x185dec, Func Offset: 0x3c
	// Line 406, Address: 0x185df0, Func Offset: 0x40
	// Line 407, Address: 0x185df8, Func Offset: 0x48
	// Line 408, Address: 0x185e00, Func Offset: 0x50
	// Line 412, Address: 0x185e08, Func Offset: 0x58
	// Line 414, Address: 0x185e14, Func Offset: 0x64
	// Line 416, Address: 0x185e20, Func Offset: 0x70
	// Line 417, Address: 0x185e24, Func Offset: 0x74
	// Line 418, Address: 0x185e2c, Func Offset: 0x7c
	// Line 420, Address: 0x185e38, Func Offset: 0x88
	// Line 421, Address: 0x185e3c, Func Offset: 0x8c
	// Line 425, Address: 0x185e40, Func Offset: 0x90
	// Line 426, Address: 0x185e64, Func Offset: 0xb4
	// Line 428, Address: 0x185e68, Func Offset: 0xb8
	// Line 430, Address: 0x185e88, Func Offset: 0xd8
	// Line 434, Address: 0x185ea4, Func Offset: 0xf4
	// Line 435, Address: 0x185eb8, Func Offset: 0x108
	// Line 436, Address: 0x185ebc, Func Offset: 0x10c
	// Line 437, Address: 0x185ec0, Func Offset: 0x110
	// Line 439, Address: 0x185ed4, Func Offset: 0x124
	// Line 440, Address: 0x185ee8, Func Offset: 0x138
	// Line 441, Address: 0x185eec, Func Offset: 0x13c
	// Line 442, Address: 0x185ef8, Func Offset: 0x148
	// Line 445, Address: 0x185f0c, Func Offset: 0x15c
	// Line 446, Address: 0x185f18, Func Offset: 0x168
	// Line 447, Address: 0x185f1c, Func Offset: 0x16c
	// Line 452, Address: 0x185f20, Func Offset: 0x170
	// Line 456, Address: 0x185f2c, Func Offset: 0x17c
	// Line 457, Address: 0x185f5c, Func Offset: 0x1ac
	// Line 458, Address: 0x185f64, Func Offset: 0x1b4
	// Line 460, Address: 0x185f68, Func Offset: 0x1b8
	// Line 461, Address: 0x185f74, Func Offset: 0x1c4
	// Line 462, Address: 0x185f78, Func Offset: 0x1c8
	// Line 463, Address: 0x185f7c, Func Offset: 0x1cc
	// Line 464, Address: 0x185f8c, Func Offset: 0x1dc
	// Line 465, Address: 0x185f98, Func Offset: 0x1e8
	// Line 466, Address: 0x185f9c, Func Offset: 0x1ec
	// Line 467, Address: 0x185fcc, Func Offset: 0x21c
	// Line 468, Address: 0x185fd4, Func Offset: 0x224
	// Line 469, Address: 0x185fd8, Func Offset: 0x228
	// Line 470, Address: 0x185fe4, Func Offset: 0x234
	// Line 471, Address: 0x185fe8, Func Offset: 0x238
	// Line 472, Address: 0x185fec, Func Offset: 0x23c
	// Line 473, Address: 0x185ffc, Func Offset: 0x24c
	// Line 476, Address: 0x186004, Func Offset: 0x254
	// Line 477, Address: 0x186008, Func Offset: 0x258
	// Line 478, Address: 0x186014, Func Offset: 0x264
	// Line 480, Address: 0x186018, Func Offset: 0x268
	// Line 482, Address: 0x18601c, Func Offset: 0x26c
	// Line 483, Address: 0x186028, Func Offset: 0x278
	// Line 484, Address: 0x18602c, Func Offset: 0x27c
	// Line 485, Address: 0x186030, Func Offset: 0x280
	// Line 486, Address: 0x186040, Func Offset: 0x290
	// Line 487, Address: 0x18604c, Func Offset: 0x29c
	// Line 488, Address: 0x186050, Func Offset: 0x2a0
	// Line 489, Address: 0x186054, Func Offset: 0x2a4
	// Line 490, Address: 0x186088, Func Offset: 0x2d8
	// Line 491, Address: 0x186098, Func Offset: 0x2e8
	// Line 493, Address: 0x18609c, Func Offset: 0x2ec
	// Line 496, Address: 0x1860a8, Func Offset: 0x2f8
	// Line 497, Address: 0x1860b4, Func Offset: 0x304
	// Line 498, Address: 0x1860b8, Func Offset: 0x308
	// Line 500, Address: 0x1860bc, Func Offset: 0x30c
	// Line 501, Address: 0x1860c4, Func Offset: 0x314
	// Line 504, Address: 0x1860d0, Func Offset: 0x320
	// Line 505, Address: 0x1860d8, Func Offset: 0x328
	// Func End, Address: 0x18610c, Func Offset: 0x35c
}

