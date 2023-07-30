typedef union Q_WORDDATA;
typedef struct sh2gfw_VU_HEAD;
typedef struct sh2gfw_GEOM_HEAD;
typedef struct sh2gfw_TRANSGEOM_HEAD;


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


void GetPhongParm(sh2gfw_VU_HEAD* pV, Q_WORDDATA* pq);
void GetBlinnParm(sh2gfw_VU_HEAD* pV, Q_WORDDATA* pq);
void sh2gfw_Geom_MakePacket(sh2gfw_VU_HEAD* pV, sh2gfw_GEOM_HEAD* sGE, int packsize, int xgkick, int execaddr, Q_WORDDATA** ppqwd);
void sh2gfw_SemiTrans_GeomPacket(sh2gfw_TRANSGEOM_HEAD* sGE, int gid, Q_WORDDATA* inf, Q_WORDDATA** pkhead);

// 
// Start address: 0x17f840
void GetPhongParm(sh2gfw_VU_HEAD* pV, Q_WORDDATA* pq)
{
	float flb;
	float fldeg;
	float amax;
	float cs;
	Q_WORDDATA* qwd;
	// Line 52, Address: 0x17f840, Func Offset: 0
	// Line 60, Address: 0x17f854, Func Offset: 0x14
	// Line 61, Address: 0x17f858, Func Offset: 0x18
	// Line 63, Address: 0x17f85c, Func Offset: 0x1c
	// Line 69, Address: 0x17f8f0, Func Offset: 0xb0
	// Line 73, Address: 0x17f900, Func Offset: 0xc0
	// Line 74, Address: 0x17f91c, Func Offset: 0xdc
	// Line 76, Address: 0x17f928, Func Offset: 0xe8
	// Func End, Address: 0x17f940, Func Offset: 0x100
}

// 
// Start address: 0x17f940
void GetBlinnParm(sh2gfw_VU_HEAD* pV, Q_WORDDATA* pq)
{
	float bright;
	float exponent;
	Q_WORDDATA* qwd;
	// Line 99, Address: 0x17f940, Func Offset: 0
	// Line 100, Address: 0x17f944, Func Offset: 0x4
	// Line 103, Address: 0x17f948, Func Offset: 0x8
	// Line 104, Address: 0x17f960, Func Offset: 0x20
	// Line 109, Address: 0x17f978, Func Offset: 0x38
	// Func End, Address: 0x17f980, Func Offset: 0x40
}

// 
// Start address: 0x17f980
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
	// Line 171, Address: 0x17f980, Func Offset: 0
	// Line 172, Address: 0x17f9c4, Func Offset: 0x44
	// Line 176, Address: 0x17f9c8, Func Offset: 0x48
	// Line 181, Address: 0x17f9cc, Func Offset: 0x4c
	// Line 183, Address: 0x17f9d0, Func Offset: 0x50
	// Line 186, Address: 0x17f9dc, Func Offset: 0x5c
	// Line 189, Address: 0x17f9e4, Func Offset: 0x64
	// Line 192, Address: 0x17f9e8, Func Offset: 0x68
	// Line 196, Address: 0x17fa0c, Func Offset: 0x8c
	// Line 198, Address: 0x17fa40, Func Offset: 0xc0
	// Line 201, Address: 0x17fa70, Func Offset: 0xf0
	// Line 202, Address: 0x17fa80, Func Offset: 0x100
	// Line 203, Address: 0x17fa88, Func Offset: 0x108
	// Line 204, Address: 0x17fa90, Func Offset: 0x110
	// Line 212, Address: 0x17faa8, Func Offset: 0x128
	// Line 217, Address: 0x17fae8, Func Offset: 0x168
	// Line 221, Address: 0x17fb2c, Func Offset: 0x1ac
	// Line 223, Address: 0x17fb58, Func Offset: 0x1d8
	// Line 227, Address: 0x17fb60, Func Offset: 0x1e0
	// Line 229, Address: 0x17fb74, Func Offset: 0x1f4
	// Line 230, Address: 0x17fb7c, Func Offset: 0x1fc
	// Line 236, Address: 0x17fb84, Func Offset: 0x204
	// Line 240, Address: 0x17fbb0, Func Offset: 0x230
	// Line 242, Address: 0x17fbe8, Func Offset: 0x268
	// Line 244, Address: 0x17fbfc, Func Offset: 0x27c
	// Line 245, Address: 0x17fc04, Func Offset: 0x284
	// Line 250, Address: 0x17fc0c, Func Offset: 0x28c
	// Line 257, Address: 0x17fc34, Func Offset: 0x2b4
	// Line 259, Address: 0x17fc40, Func Offset: 0x2c0
	// Line 264, Address: 0x17fc48, Func Offset: 0x2c8
	// Line 265, Address: 0x17fc78, Func Offset: 0x2f8
	// Line 266, Address: 0x17fc84, Func Offset: 0x304
	// Line 267, Address: 0x17fc90, Func Offset: 0x310
	// Line 268, Address: 0x17fc9c, Func Offset: 0x31c
	// Line 271, Address: 0x17fca8, Func Offset: 0x328
	// Line 272, Address: 0x17fcbc, Func Offset: 0x33c
	// Line 275, Address: 0x17fccc, Func Offset: 0x34c
	// Line 277, Address: 0x17fcd8, Func Offset: 0x358
	// Line 278, Address: 0x17fce4, Func Offset: 0x364
	// Line 280, Address: 0x17fce8, Func Offset: 0x368
	// Line 281, Address: 0x17fd00, Func Offset: 0x380
	// Line 282, Address: 0x17fd08, Func Offset: 0x388
	// Line 283, Address: 0x17fd10, Func Offset: 0x390
	// Line 284, Address: 0x17fd18, Func Offset: 0x398
	// Line 286, Address: 0x17fd20, Func Offset: 0x3a0
	// Line 287, Address: 0x17fd30, Func Offset: 0x3b0
	// Line 289, Address: 0x17fd3c, Func Offset: 0x3bc
	// Line 291, Address: 0x17fd40, Func Offset: 0x3c0
	// Line 294, Address: 0x17fd48, Func Offset: 0x3c8
	// Line 295, Address: 0x17fd4c, Func Offset: 0x3cc
	// Line 296, Address: 0x17fd60, Func Offset: 0x3e0
	// Line 297, Address: 0x17fd70, Func Offset: 0x3f0
	// Line 298, Address: 0x17fd78, Func Offset: 0x3f8
	// Line 301, Address: 0x17fd84, Func Offset: 0x404
	// Line 303, Address: 0x17fd88, Func Offset: 0x408
	// Line 304, Address: 0x17fd8c, Func Offset: 0x40c
	// Line 305, Address: 0x17fd98, Func Offset: 0x418
	// Line 306, Address: 0x17fda4, Func Offset: 0x424
	// Line 307, Address: 0x17fdd4, Func Offset: 0x454
	// Line 308, Address: 0x17fddc, Func Offset: 0x45c
	// Line 309, Address: 0x17fde8, Func Offset: 0x468
	// Line 310, Address: 0x17fdf0, Func Offset: 0x470
	// Line 312, Address: 0x17fdfc, Func Offset: 0x47c
	// Line 314, Address: 0x17fe28, Func Offset: 0x4a8
	// Line 327, Address: 0x17fe34, Func Offset: 0x4b4
	// Line 329, Address: 0x17fe40, Func Offset: 0x4c0
	// Line 331, Address: 0x17fe4c, Func Offset: 0x4cc
	// Func End, Address: 0x17fe80, Func Offset: 0x500
}

// 
// Start address: 0x17fe80
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
	// Line 402, Address: 0x17fe80, Func Offset: 0
	// Line 405, Address: 0x17feb4, Func Offset: 0x34
	// Line 407, Address: 0x17feb8, Func Offset: 0x38
	// Line 413, Address: 0x17febc, Func Offset: 0x3c
	// Line 415, Address: 0x17fec0, Func Offset: 0x40
	// Line 418, Address: 0x17fecc, Func Offset: 0x4c
	// Line 425, Address: 0x17fed0, Func Offset: 0x50
	// Line 437, Address: 0x17fed4, Func Offset: 0x54
	// Line 440, Address: 0x17fef8, Func Offset: 0x78
	// Line 442, Address: 0x17ff28, Func Offset: 0xa8
	// Line 446, Address: 0x17ff54, Func Offset: 0xd4
	// Line 447, Address: 0x17ff6c, Func Offset: 0xec
	// Line 448, Address: 0x17ff74, Func Offset: 0xf4
	// Line 449, Address: 0x17ff7c, Func Offset: 0xfc
	// Line 451, Address: 0x17ff94, Func Offset: 0x114
	// Line 452, Address: 0x17ff9c, Func Offset: 0x11c
	// Line 453, Address: 0x17ffa4, Func Offset: 0x124
	// Line 454, Address: 0x17ffb4, Func Offset: 0x134
	// Line 457, Address: 0x17ffbc, Func Offset: 0x13c
	// Line 458, Address: 0x17ffc4, Func Offset: 0x144
	// Line 459, Address: 0x17ffc8, Func Offset: 0x148
	// Line 464, Address: 0x17ffcc, Func Offset: 0x14c
	// Line 468, Address: 0x17ffd8, Func Offset: 0x158
	// Line 469, Address: 0x17ffe8, Func Offset: 0x168
	// Line 472, Address: 0x17ffec, Func Offset: 0x16c
	// Line 473, Address: 0x17fff4, Func Offset: 0x174
	// Line 474, Address: 0x17fff8, Func Offset: 0x178
	// Line 475, Address: 0x17fffc, Func Offset: 0x17c
	// Line 476, Address: 0x180008, Func Offset: 0x188
	// Line 477, Address: 0x180014, Func Offset: 0x194
	// Line 478, Address: 0x180018, Func Offset: 0x198
	// Line 479, Address: 0x180028, Func Offset: 0x1a8
	// Line 481, Address: 0x18002c, Func Offset: 0x1ac
	// Line 482, Address: 0x180034, Func Offset: 0x1b4
	// Line 483, Address: 0x180038, Func Offset: 0x1b8
	// Line 484, Address: 0x18003c, Func Offset: 0x1bc
	// Line 485, Address: 0x180040, Func Offset: 0x1c0
	// Line 488, Address: 0x180048, Func Offset: 0x1c8
	// Line 489, Address: 0x18004c, Func Offset: 0x1cc
	// Line 490, Address: 0x18005c, Func Offset: 0x1dc
	// Line 494, Address: 0x180060, Func Offset: 0x1e0
	// Line 495, Address: 0x18006c, Func Offset: 0x1ec
	// Line 496, Address: 0x180070, Func Offset: 0x1f0
	// Line 497, Address: 0x180074, Func Offset: 0x1f4
	// Line 498, Address: 0x18007c, Func Offset: 0x1fc
	// Line 499, Address: 0x18008c, Func Offset: 0x20c
	// Line 500, Address: 0x180090, Func Offset: 0x210
	// Line 501, Address: 0x180094, Func Offset: 0x214
	// Line 502, Address: 0x1800c4, Func Offset: 0x244
	// Line 505, Address: 0x1800d0, Func Offset: 0x250
	// Line 508, Address: 0x1800e0, Func Offset: 0x260
	// Line 509, Address: 0x1800ec, Func Offset: 0x26c
	// Line 512, Address: 0x1800f0, Func Offset: 0x270
	// Line 513, Address: 0x1800f8, Func Offset: 0x278
	// Line 516, Address: 0x1800fc, Func Offset: 0x27c
	// Line 517, Address: 0x180100, Func Offset: 0x280
	// Func End, Address: 0x18012c, Func Offset: 0x2ac
}

