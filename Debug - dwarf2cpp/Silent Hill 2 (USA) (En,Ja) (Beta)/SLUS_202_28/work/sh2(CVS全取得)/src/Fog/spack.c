typedef struct SPACK_OT_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct SPACK_DATA;
typedef struct SPACK_LOCAL_BUF;


typedef unsigned long type_0[2];
typedef char type_1[3];
typedef char type_2[14];
typedef unsigned long type_3[2];
typedef unsigned long type_4[2];
typedef <unknown fundamental type (0xa510)> type_5[32768];
typedef SPACK_OT_DATA type_6[4096];
typedef SPACK_OT_DATA* type_7[35];
typedef SPACK_OT_DATA* type_8[35];
typedef short type_9[35];
typedef SPACK_ENV_DATA type_10[32];

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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

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
	void* old_lastpos;
};

struct SPACK_LOCAL_BUF
{
	<unknown fundamental type (0xa510)> packet[32768];
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
void spkResetOT2();
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
// Start address: 0x16f540
SPACK_DATA* spkInit()
{
	int s;
	int i;
	<unknown fundamental type (0xa510)>* pENVtag;
	<unknown fundamental type (0xa510)> ENVtag;
	// Line 70, Address: 0x16f540, Func Offset: 0
	// Line 71, Address: 0x16f548, Func Offset: 0x8
	// Line 74, Address: 0x16f54c, Func Offset: 0xc
	// Line 76, Address: 0x16f560, Func Offset: 0x20
	// Line 77, Address: 0x16f570, Func Offset: 0x30
	// Line 78, Address: 0x16f580, Func Offset: 0x40
	// Line 79, Address: 0x16f590, Func Offset: 0x50
	// Line 80, Address: 0x16f5a0, Func Offset: 0x60
	// Line 81, Address: 0x16f5b0, Func Offset: 0x70
	// Line 82, Address: 0x16f5c0, Func Offset: 0x80
	// Line 83, Address: 0x16f5cc, Func Offset: 0x8c
	// Line 87, Address: 0x16f610, Func Offset: 0xd0
	// Line 92, Address: 0x16f62c, Func Offset: 0xec
	// Line 93, Address: 0x16f638, Func Offset: 0xf8
	// Line 94, Address: 0x16f640, Func Offset: 0x100
	// Line 95, Address: 0x16f64c, Func Offset: 0x10c
	// Line 96, Address: 0x16f658, Func Offset: 0x118
	// Line 99, Address: 0x16f66c, Func Offset: 0x12c
	// Line 101, Address: 0x16f674, Func Offset: 0x134
	// Line 102, Address: 0x16f67c, Func Offset: 0x13c
	// Func End, Address: 0x16f68c, Func Offset: 0x14c
}

// 
// Start address: 0x16f690
void spkResetOT()
{
	// Line 107, Address: 0x16f690, Func Offset: 0
	// Line 109, Address: 0x16f698, Func Offset: 0x8
	// Line 111, Address: 0x16f6b8, Func Offset: 0x28
	// Line 112, Address: 0x16f6c8, Func Offset: 0x38
	// Line 113, Address: 0x16f6d8, Func Offset: 0x48
	// Line 114, Address: 0x16f6f8, Func Offset: 0x68
	// Line 115, Address: 0x16f704, Func Offset: 0x74
	// Line 116, Address: 0x16f70c, Func Offset: 0x7c
	// Func End, Address: 0x16f71c, Func Offset: 0x8c
}

// 
// Start address: 0x16f720
void spkResetOT2()
{
	// Line 121, Address: 0x16f720, Func Offset: 0
	// Line 123, Address: 0x16f728, Func Offset: 0x8
	// Line 125, Address: 0x16f748, Func Offset: 0x28
	// Line 126, Address: 0x16f758, Func Offset: 0x38
	// Line 127, Address: 0x16f764, Func Offset: 0x44
	// Line 128, Address: 0x16f76c, Func Offset: 0x4c
	// Func End, Address: 0x16f77c, Func Offset: 0x5c
}

// 
// Start address: 0x16f780
void spkOpenGiftag(void* giftag, unsigned int w, unsigned short envid)
{
	unsigned long d[2];
	SPACK_OT_DATA* pd;
	unsigned long* pos;
	// Line 136, Address: 0x16f780, Func Offset: 0
	// Line 137, Address: 0x16f790, Func Offset: 0x10
	// Line 138, Address: 0x16f798, Func Offset: 0x18
	// Line 141, Address: 0x16f7a0, Func Offset: 0x20
	// Line 142, Address: 0x16f7ac, Func Offset: 0x2c
	// Line 143, Address: 0x16f7b0, Func Offset: 0x30
	// Line 144, Address: 0x16f7b4, Func Offset: 0x34
	// Line 146, Address: 0x16f7bc, Func Offset: 0x3c
	// Line 147, Address: 0x16f7d0, Func Offset: 0x50
	// Line 148, Address: 0x16f7d8, Func Offset: 0x58
	// Line 149, Address: 0x16f7e0, Func Offset: 0x60
	// Line 150, Address: 0x16f7e8, Func Offset: 0x68
	// Line 151, Address: 0x16f7f4, Func Offset: 0x74
	// Line 152, Address: 0x16f800, Func Offset: 0x80
	// Func End, Address: 0x16f814, Func Offset: 0x94
}

// 
// Start address: 0x16f820
void spkOpenDGiftag(unsigned long giftag1, unsigned long giftag2, unsigned int w, unsigned short envid)
{
	SPACK_OT_DATA* pd;
	unsigned long* pos;
	// Line 162, Address: 0x16f820, Func Offset: 0
	// Line 163, Address: 0x16f828, Func Offset: 0x8
	// Line 165, Address: 0x16f830, Func Offset: 0x10
	// Line 166, Address: 0x16f83c, Func Offset: 0x1c
	// Line 167, Address: 0x16f840, Func Offset: 0x20
	// Line 168, Address: 0x16f844, Func Offset: 0x24
	// Line 170, Address: 0x16f84c, Func Offset: 0x2c
	// Line 171, Address: 0x16f854, Func Offset: 0x34
	// Line 172, Address: 0x16f858, Func Offset: 0x38
	// Line 173, Address: 0x16f85c, Func Offset: 0x3c
	// Line 174, Address: 0x16f868, Func Offset: 0x48
	// Line 175, Address: 0x16f870, Func Offset: 0x50
	// Func End, Address: 0x16f878, Func Offset: 0x58
}

// 
// Start address: 0x16f880
void spkCloseGiftag()
{
	unsigned long* pos;
	unsigned long tag;
	unsigned long* pgt;
	SPACK_OT_DATA* pd;
	unsigned int nreg;
	unsigned int n2;
	unsigned int n;
	// Line 180, Address: 0x16f880, Func Offset: 0
	// Line 182, Address: 0x16f88c, Func Offset: 0xc
	// Line 183, Address: 0x16f894, Func Offset: 0x14
	// Line 184, Address: 0x16f89c, Func Offset: 0x1c
	// Line 185, Address: 0x16f8bc, Func Offset: 0x3c
	// Line 187, Address: 0x16f8c4, Func Offset: 0x44
	// Line 189, Address: 0x16f8d0, Func Offset: 0x50
	// Line 190, Address: 0x16f8dc, Func Offset: 0x5c
	// Line 191, Address: 0x16f8e4, Func Offset: 0x64
	// Line 194, Address: 0x16f8ec, Func Offset: 0x6c
	// Line 195, Address: 0x16f900, Func Offset: 0x80
	// Line 196, Address: 0x16f908, Func Offset: 0x88
	// Line 197, Address: 0x16f914, Func Offset: 0x94
	// Line 198, Address: 0x16f920, Func Offset: 0xa0
	// Line 199, Address: 0x16f92c, Func Offset: 0xac
	// Line 201, Address: 0x16f934, Func Offset: 0xb4
	// Line 203, Address: 0x16f93c, Func Offset: 0xbc
	// Line 204, Address: 0x16f944, Func Offset: 0xc4
	// Line 205, Address: 0x16f95c, Func Offset: 0xdc
	// Line 206, Address: 0x16f96c, Func Offset: 0xec
	// Line 208, Address: 0x16f978, Func Offset: 0xf8
	// Line 209, Address: 0x16f998, Func Offset: 0x118
	// Line 210, Address: 0x16f9d4, Func Offset: 0x154
	// Line 212, Address: 0x16f9dc, Func Offset: 0x15c
	// Line 213, Address: 0x16f9e4, Func Offset: 0x164
	// Func End, Address: 0x16f9f8, Func Offset: 0x178
}

// 
// Start address: 0x16fa00
void spkCloseOpenDGiftag(unsigned long giftag1, unsigned long giftag2)
{
	unsigned long* pos;
	unsigned long tag;
	unsigned long* pgt;
	unsigned int nreg;
	unsigned int n;
	// Line 255, Address: 0x16fa00, Func Offset: 0
	// Line 257, Address: 0x16fa1c, Func Offset: 0x1c
	// Line 258, Address: 0x16fa24, Func Offset: 0x24
	// Line 259, Address: 0x16fa44, Func Offset: 0x44
	// Line 261, Address: 0x16fa4c, Func Offset: 0x4c
	// Line 263, Address: 0x16fa58, Func Offset: 0x58
	// Line 264, Address: 0x16fa64, Func Offset: 0x64
	// Line 266, Address: 0x16fa6c, Func Offset: 0x6c
	// Line 267, Address: 0x16fa74, Func Offset: 0x74
	// Line 268, Address: 0x16fa78, Func Offset: 0x78
	// Line 269, Address: 0x16fa80, Func Offset: 0x80
	// Line 270, Address: 0x16fa98, Func Offset: 0x98
	// Line 271, Address: 0x16faa8, Func Offset: 0xa8
	// Line 273, Address: 0x16fab4, Func Offset: 0xb4
	// Line 274, Address: 0x16fad4, Func Offset: 0xd4
	// Line 277, Address: 0x16fb10, Func Offset: 0x110
	// Line 278, Address: 0x16fb18, Func Offset: 0x118
	// Line 279, Address: 0x16fb1c, Func Offset: 0x11c
	// Line 280, Address: 0x16fb20, Func Offset: 0x120
	// Line 281, Address: 0x16fb2c, Func Offset: 0x12c
	// Line 282, Address: 0x16fb34, Func Offset: 0x134
	// Func End, Address: 0x16fb50, Func Offset: 0x150
}

// 
// Start address: 0x16fb50
void spkStartPacketS(<unknown fundamental type (0xa510)>* adr)
{
	// Line 291, Address: 0x16fb50, Func Offset: 0
	// Line 292, Address: 0x16fb68, Func Offset: 0x18
	// Line 293, Address: 0x16fb78, Func Offset: 0x28
	// Func End, Address: 0x16fb80, Func Offset: 0x30
}

// 
// Start address: 0x16fb80
void spkOpenGiftagS(void* giftag)
{
	unsigned long* pos;
	unsigned long d[2];
	// Line 299, Address: 0x16fb80, Func Offset: 0
	// Line 301, Address: 0x16fb90, Func Offset: 0x10
	// Line 303, Address: 0x16fb98, Func Offset: 0x18
	// Line 305, Address: 0x16fba0, Func Offset: 0x20
	// Line 306, Address: 0x16fbb0, Func Offset: 0x30
	// Line 307, Address: 0x16fbb8, Func Offset: 0x38
	// Line 308, Address: 0x16fbc0, Func Offset: 0x40
	// Line 309, Address: 0x16fbcc, Func Offset: 0x4c
	// Line 310, Address: 0x16fbd8, Func Offset: 0x58
	// Func End, Address: 0x16fbec, Func Offset: 0x6c
}

// 
// Start address: 0x16fbf0
void spkOpenDGiftagS(unsigned long giftag1, unsigned long giftag2)
{
	unsigned long* pos;
	// Line 317, Address: 0x16fbf0, Func Offset: 0
	// Line 319, Address: 0x16fbf8, Func Offset: 0x8
	// Line 321, Address: 0x16fc00, Func Offset: 0x10
	// Line 322, Address: 0x16fc04, Func Offset: 0x14
	// Line 323, Address: 0x16fc08, Func Offset: 0x18
	// Line 324, Address: 0x16fc14, Func Offset: 0x24
	// Line 325, Address: 0x16fc1c, Func Offset: 0x2c
	// Func End, Address: 0x16fc24, Func Offset: 0x34
}

// 
// Start address: 0x16fc30
void spkCloseGiftagS()
{
	unsigned long* pos;
	unsigned long tag;
	unsigned long* pgt;
	unsigned int nreg;
	unsigned int n;
	// Line 330, Address: 0x16fc30, Func Offset: 0
	// Line 333, Address: 0x16fc38, Func Offset: 0x8
	// Line 334, Address: 0x16fc40, Func Offset: 0x10
	// Line 335, Address: 0x16fc60, Func Offset: 0x30
	// Line 337, Address: 0x16fc68, Func Offset: 0x38
	// Line 339, Address: 0x16fc74, Func Offset: 0x44
	// Line 340, Address: 0x16fc80, Func Offset: 0x50
	// Line 341, Address: 0x16fc88, Func Offset: 0x58
	// Line 343, Address: 0x16fc90, Func Offset: 0x60
	// Line 344, Address: 0x16fc98, Func Offset: 0x68
	// Line 345, Address: 0x16fca4, Func Offset: 0x74
	// Line 347, Address: 0x16fcac, Func Offset: 0x7c
	// Line 348, Address: 0x16fcc4, Func Offset: 0x94
	// Line 349, Address: 0x16fcd4, Func Offset: 0xa4
	// Line 351, Address: 0x16fce0, Func Offset: 0xb0
	// Line 352, Address: 0x16fd00, Func Offset: 0xd0
	// Line 353, Address: 0x16fd3c, Func Offset: 0x10c
	// Func End, Address: 0x16fd4c, Func Offset: 0x11c
}

// 
// Start address: 0x16fd50
<unknown fundamental type (0xa510)>* spkEndPacketS()
{
	<unknown fundamental type (0xa510)>* pos;
	SPACK_STATIC_DATA* pt;
	unsigned short n;
	// Line 359, Address: 0x16fd50, Func Offset: 0
	// Line 361, Address: 0x16fd64, Func Offset: 0x14
	// Line 362, Address: 0x16fd6c, Func Offset: 0x1c
	// Line 364, Address: 0x16fd74, Func Offset: 0x24
	// Line 365, Address: 0x16fd80, Func Offset: 0x30
	// Line 366, Address: 0x16fdac, Func Offset: 0x5c
	// Line 367, Address: 0x16fdb0, Func Offset: 0x60
	// Line 368, Address: 0x16fdb4, Func Offset: 0x64
	// Func End, Address: 0x16fdd0, Func Offset: 0x80
}

// 
// Start address: 0x16fdd0
void spkSetEnvPacket(<unknown fundamental type (0xa510)>* adr, unsigned short envid)
{
	SPACK_ENV_DATA* pe;
	// Line 376, Address: 0x16fdd0, Func Offset: 0
	// Line 377, Address: 0x16fde4, Func Offset: 0x14
	// Line 378, Address: 0x16fdf8, Func Offset: 0x28
	// Line 380, Address: 0x16fe28, Func Offset: 0x58
	// Line 382, Address: 0x16fe44, Func Offset: 0x74
	// Line 383, Address: 0x16fe4c, Func Offset: 0x7c
	// Line 384, Address: 0x16fe50, Func Offset: 0x80
	// Line 385, Address: 0x16fe58, Func Offset: 0x88
	// Func End, Address: 0x16fe70, Func Offset: 0xa0
}

// 
// Start address: 0x16fe70
void spkStartEnvLoadImage(unsigned short envid)
{
	SPACK_ENV_DATA* pe;
	// Line 408, Address: 0x16fe70, Func Offset: 0
	// Line 409, Address: 0x16fe7c, Func Offset: 0xc
	// Line 410, Address: 0x16fe90, Func Offset: 0x20
	// Line 412, Address: 0x16fec0, Func Offset: 0x50
	// Line 413, Address: 0x16fec4, Func Offset: 0x54
	// Line 414, Address: 0x16fecc, Func Offset: 0x5c
	// Line 415, Address: 0x16fee0, Func Offset: 0x70
	// Line 416, Address: 0x16fef0, Func Offset: 0x80
	// Func End, Address: 0x16ff04, Func Offset: 0x94
}

// 
// Start address: 0x16ff10
void spkSetEnvLoadImage(void* image, short bp, short bw, short psm, short x, short y, short w, short h)
{
	unsigned int* pui;
	unsigned long* pos;
	int size;
	// Line 428, Address: 0x16ff10, Func Offset: 0
	// Line 430, Address: 0x16ff5c, Func Offset: 0x4c
	// Line 432, Address: 0x16ff64, Func Offset: 0x54
	// Line 435, Address: 0x17000c, Func Offset: 0xfc
	// Line 436, Address: 0x170024, Func Offset: 0x114
	// Line 439, Address: 0x17002c, Func Offset: 0x11c
	// Line 440, Address: 0x17004c, Func Offset: 0x13c
	// Line 445, Address: 0x170054, Func Offset: 0x144
	// Line 446, Address: 0x17006c, Func Offset: 0x15c
	// Line 449, Address: 0x170074, Func Offset: 0x164
	// Line 450, Address: 0x17008c, Func Offset: 0x17c
	// Line 454, Address: 0x170094, Func Offset: 0x184
	// Line 455, Address: 0x1700ac, Func Offset: 0x19c
	// Line 458, Address: 0x1700b4, Func Offset: 0x1a4
	// Line 460, Address: 0x1700c4, Func Offset: 0x1b4
	// Line 461, Address: 0x1700e0, Func Offset: 0x1d0
	// Line 463, Address: 0x1700e8, Func Offset: 0x1d8
	// Line 465, Address: 0x1700f8, Func Offset: 0x1e8
	// Line 467, Address: 0x170118, Func Offset: 0x208
	// Line 468, Address: 0x170134, Func Offset: 0x224
	// Line 470, Address: 0x17013c, Func Offset: 0x22c
	// Line 473, Address: 0x170168, Func Offset: 0x258
	// Line 474, Address: 0x170174, Func Offset: 0x264
	// Line 475, Address: 0x170178, Func Offset: 0x268
	// Line 476, Address: 0x17017c, Func Offset: 0x26c
	// Line 477, Address: 0x170188, Func Offset: 0x278
	// Line 479, Address: 0x17018c, Func Offset: 0x27c
	// Line 480, Address: 0x170198, Func Offset: 0x288
	// Line 482, Address: 0x1701a0, Func Offset: 0x290
	// Line 483, Address: 0x1701d0, Func Offset: 0x2c0
	// Line 485, Address: 0x1701d8, Func Offset: 0x2c8
	// Line 486, Address: 0x1701f8, Func Offset: 0x2e8
	// Line 488, Address: 0x170200, Func Offset: 0x2f0
	// Line 489, Address: 0x17021c, Func Offset: 0x30c
	// Line 491, Address: 0x170224, Func Offset: 0x314
	// Line 492, Address: 0x170228, Func Offset: 0x318
	// Line 494, Address: 0x170230, Func Offset: 0x320
	// Line 495, Address: 0x17024c, Func Offset: 0x33c
	// Line 497, Address: 0x170250, Func Offset: 0x340
	// Line 498, Address: 0x170254, Func Offset: 0x344
	// Line 499, Address: 0x170260, Func Offset: 0x350
	// Line 501, Address: 0x170264, Func Offset: 0x354
	// Line 502, Address: 0x170268, Func Offset: 0x358
	// Line 503, Address: 0x170270, Func Offset: 0x360
	// Line 504, Address: 0x17027c, Func Offset: 0x36c
	// Func End, Address: 0x1702b0, Func Offset: 0x3a0
}

// 
// Start address: 0x1702b0
void spkEndEnvLoadImage()
{
	unsigned long* pos;
	// Line 510, Address: 0x1702b0, Func Offset: 0
	// Line 512, Address: 0x1702b8, Func Offset: 0x8
	// Line 513, Address: 0x1702c0, Func Offset: 0x10
	// Line 514, Address: 0x1702c4, Func Offset: 0x14
	// Line 515, Address: 0x1702d0, Func Offset: 0x20
	// Func End, Address: 0x1702d8, Func Offset: 0x28
}

// 
// Start address: 0x1702e0
void spkSetOTPacketS(<unknown fundamental type (0xa510)>* adr, unsigned int w, unsigned char envid)
{
	SPACK_OT_DATA* pd;
	// Line 523, Address: 0x1702e0, Func Offset: 0
	// Line 524, Address: 0x170304, Func Offset: 0x24
	// Line 525, Address: 0x17030c, Func Offset: 0x2c
	// Line 527, Address: 0x170340, Func Offset: 0x60
	// Line 528, Address: 0x17034c, Func Offset: 0x6c
	// Line 529, Address: 0x170350, Func Offset: 0x70
	// Line 530, Address: 0x170354, Func Offset: 0x74
	// Line 531, Address: 0x17035c, Func Offset: 0x7c
	// Line 533, Address: 0x170370, Func Offset: 0x90
	// Line 534, Address: 0x170378, Func Offset: 0x98
	// Func End, Address: 0x170398, Func Offset: 0xb8
}

// 
// Start address: 0x1703a0
void spkSetOTPacketS_asm()
{
	// Line 545, Address: 0x1703a0, Func Offset: 0
	// Line 546, Address: 0x1703a4, Func Offset: 0x4
	// Line 547, Address: 0x1703ac, Func Offset: 0xc
	// Line 548, Address: 0x1703b0, Func Offset: 0x10
	// Line 549, Address: 0x1703b4, Func Offset: 0x14
	// Line 550, Address: 0x1703b8, Func Offset: 0x18
	// Line 551, Address: 0x1703bc, Func Offset: 0x1c
	// Line 552, Address: 0x1703c0, Func Offset: 0x20
	// Line 553, Address: 0x1703c4, Func Offset: 0x24
	// Line 554, Address: 0x1703c8, Func Offset: 0x28
	// Line 555, Address: 0x1703cc, Func Offset: 0x2c
	// Line 556, Address: 0x1703d0, Func Offset: 0x30
	// Line 557, Address: 0x1703d4, Func Offset: 0x34
	// Line 558, Address: 0x1703d8, Func Offset: 0x38
	// Line 559, Address: 0x1703dc, Func Offset: 0x3c
	// Line 560, Address: 0x1703e0, Func Offset: 0x40
	// Line 561, Address: 0x1703e4, Func Offset: 0x44
	// Line 562, Address: 0x1703e8, Func Offset: 0x48
	// Line 563, Address: 0x1703ec, Func Offset: 0x4c
	// Line 565, Address: 0x1703f4, Func Offset: 0x54
	// Line 566, Address: 0x1703f8, Func Offset: 0x58
	// Line 567, Address: 0x1703fc, Func Offset: 0x5c
	// Line 568, Address: 0x170400, Func Offset: 0x60
	// Line 569, Address: 0x170404, Func Offset: 0x64
	// Line 570, Address: 0x170408, Func Offset: 0x68
	// Func End, Address: 0x170410, Func Offset: 0x70
}

// 
// Start address: 0x170410
void spkSetOT()
{
	// Line 614, Address: 0x170410, Func Offset: 0
	// Line 615, Address: 0x170418, Func Offset: 0x8
	// Line 616, Address: 0x17041c, Func Offset: 0xc
	// Line 617, Address: 0x170420, Func Offset: 0x10
	// Line 618, Address: 0x170424, Func Offset: 0x14
	// Line 619, Address: 0x170428, Func Offset: 0x18
	// Line 620, Address: 0x17042c, Func Offset: 0x1c
	// Line 621, Address: 0x170430, Func Offset: 0x20
	// Line 622, Address: 0x170434, Func Offset: 0x24
	// Line 623, Address: 0x170438, Func Offset: 0x28
	// Line 626, Address: 0x170440, Func Offset: 0x30
	// Line 627, Address: 0x170444, Func Offset: 0x34
	// Line 628, Address: 0x170448, Func Offset: 0x38
	// Line 629, Address: 0x17044c, Func Offset: 0x3c
	// Line 630, Address: 0x170450, Func Offset: 0x40
	// Line 633, Address: 0x170458, Func Offset: 0x48
	// Line 634, Address: 0x17045c, Func Offset: 0x4c
	// Line 637, Address: 0x170464, Func Offset: 0x54
	// Line 638, Address: 0x170468, Func Offset: 0x58
	// Line 639, Address: 0x17046c, Func Offset: 0x5c
	// Line 642, Address: 0x170474, Func Offset: 0x64
	// Line 643, Address: 0x170478, Func Offset: 0x68
	// Line 646, Address: 0x170480, Func Offset: 0x70
	// Line 647, Address: 0x170484, Func Offset: 0x74
	// Line 650, Address: 0x17048c, Func Offset: 0x7c
	// Line 651, Address: 0x170490, Func Offset: 0x80
	// Line 652, Address: 0x170494, Func Offset: 0x84
	// Line 653, Address: 0x170498, Func Offset: 0x88
	// Line 654, Address: 0x17049c, Func Offset: 0x8c
	// Line 656, Address: 0x1704a4, Func Offset: 0x94
	// Line 658, Address: 0x1704a8, Func Offset: 0x98
	// Line 659, Address: 0x1704ac, Func Offset: 0x9c
	// Line 662, Address: 0x1704b4, Func Offset: 0xa4
	// Line 664, Address: 0x1704b8, Func Offset: 0xa8
	// Line 665, Address: 0x1704bc, Func Offset: 0xac
	// Line 666, Address: 0x1704c0, Func Offset: 0xb0
	// Line 667, Address: 0x1704c4, Func Offset: 0xb4
	// Line 668, Address: 0x1704c8, Func Offset: 0xb8
	// Line 669, Address: 0x1704cc, Func Offset: 0xbc
	// Line 670, Address: 0x1704d0, Func Offset: 0xc0
	// Line 672, Address: 0x1704d8, Func Offset: 0xc8
	// Line 673, Address: 0x1704dc, Func Offset: 0xcc
	// Line 674, Address: 0x1704e0, Func Offset: 0xd0
	// Line 675, Address: 0x1704e4, Func Offset: 0xd4
	// Line 676, Address: 0x1704e8, Func Offset: 0xd8
	// Line 678, Address: 0x1704ec, Func Offset: 0xdc
	// Func End, Address: 0x1704f4, Func Offset: 0xe4
}

// 
// Start address: 0x170500
void* spkDmaKick()
{
	unsigned long* pos;
	unsigned long* pos;
	void* top;
	// Line 688, Address: 0x170500, Func Offset: 0
	// Line 691, Address: 0x170508, Func Offset: 0x8
	// Line 694, Address: 0x170514, Func Offset: 0x14
	// Line 695, Address: 0x17056c, Func Offset: 0x6c
	// Line 698, Address: 0x1705c4, Func Offset: 0xc4
	// Line 700, Address: 0x1705cc, Func Offset: 0xcc
	// Line 702, Address: 0x170650, Func Offset: 0x150
	// Line 703, Address: 0x170658, Func Offset: 0x158
	// Line 704, Address: 0x170660, Func Offset: 0x160
	// Line 706, Address: 0x170668, Func Offset: 0x168
	// Line 708, Address: 0x170674, Func Offset: 0x174
	// Line 710, Address: 0x170684, Func Offset: 0x184
	// Line 711, Address: 0x170694, Func Offset: 0x194
	// Line 712, Address: 0x17069c, Func Offset: 0x19c
	// Line 713, Address: 0x1706a0, Func Offset: 0x1a0
	// Line 714, Address: 0x1706a8, Func Offset: 0x1a8
	// Line 715, Address: 0x1706b4, Func Offset: 0x1b4
	// Line 716, Address: 0x1706bc, Func Offset: 0x1bc
	// Line 718, Address: 0x1706c4, Func Offset: 0x1c4
	// Line 719, Address: 0x1706cc, Func Offset: 0x1cc
	// Line 720, Address: 0x1706d0, Func Offset: 0x1d0
	// Line 721, Address: 0x1706dc, Func Offset: 0x1dc
	// Line 722, Address: 0x1706e4, Func Offset: 0x1e4
	// Line 723, Address: 0x1706ec, Func Offset: 0x1ec
	// Line 730, Address: 0x1706f4, Func Offset: 0x1f4
	// Line 731, Address: 0x170708, Func Offset: 0x208
	// Line 732, Address: 0x170710, Func Offset: 0x210
	// Line 735, Address: 0x170778, Func Offset: 0x278
	// Line 736, Address: 0x170780, Func Offset: 0x280
	// Line 738, Address: 0x170788, Func Offset: 0x288
	// Func End, Address: 0x170798, Func Offset: 0x298
}

// 
// Start address: 0x1707a0
void* ot_link()
{
	// Line 861, Address: 0x1707a0, Func Offset: 0
	// Line 862, Address: 0x1707a4, Func Offset: 0x4
	// Line 863, Address: 0x1707a8, Func Offset: 0x8
	// Line 864, Address: 0x1707ac, Func Offset: 0xc
	// Line 865, Address: 0x1707b0, Func Offset: 0x10
	// Line 866, Address: 0x1707b4, Func Offset: 0x14
	// Line 867, Address: 0x1707b8, Func Offset: 0x18
	// Line 868, Address: 0x1707bc, Func Offset: 0x1c
	// Line 869, Address: 0x1707c0, Func Offset: 0x20
	// Line 870, Address: 0x1707c4, Func Offset: 0x24
	// Line 871, Address: 0x1707c8, Func Offset: 0x28
	// Line 872, Address: 0x1707d0, Func Offset: 0x30
	// Line 873, Address: 0x1707d4, Func Offset: 0x34
	// Line 874, Address: 0x1707d8, Func Offset: 0x38
	// Line 875, Address: 0x1707dc, Func Offset: 0x3c
	// Line 876, Address: 0x1707e0, Func Offset: 0x40
	// Line 877, Address: 0x1707e4, Func Offset: 0x44
	// Line 878, Address: 0x1707e8, Func Offset: 0x48
	// Line 879, Address: 0x1707ec, Func Offset: 0x4c
	// Line 881, Address: 0x1707f0, Func Offset: 0x50
	// Line 882, Address: 0x1707f4, Func Offset: 0x54
	// Line 883, Address: 0x1707f8, Func Offset: 0x58
	// Line 884, Address: 0x1707fc, Func Offset: 0x5c
	// Line 886, Address: 0x170804, Func Offset: 0x64
	// Line 887, Address: 0x170808, Func Offset: 0x68
	// Line 888, Address: 0x17080c, Func Offset: 0x6c
	// Line 889, Address: 0x170810, Func Offset: 0x70
	// Line 890, Address: 0x170814, Func Offset: 0x74
	// Line 891, Address: 0x170818, Func Offset: 0x78
	// Line 895, Address: 0x170820, Func Offset: 0x80
	// Line 896, Address: 0x170824, Func Offset: 0x84
	// Line 897, Address: 0x170828, Func Offset: 0x88
	// Line 898, Address: 0x17082c, Func Offset: 0x8c
	// Line 899, Address: 0x170830, Func Offset: 0x90
	// Line 900, Address: 0x170834, Func Offset: 0x94
	// Line 901, Address: 0x170838, Func Offset: 0x98
	// Line 903, Address: 0x170840, Func Offset: 0xa0
	// Line 904, Address: 0x170844, Func Offset: 0xa4
	// Line 905, Address: 0x170848, Func Offset: 0xa8
	// Line 908, Address: 0x170850, Func Offset: 0xb0
	// Line 909, Address: 0x170854, Func Offset: 0xb4
	// Line 911, Address: 0x17085c, Func Offset: 0xbc
	// Line 912, Address: 0x170860, Func Offset: 0xc0
	// Line 913, Address: 0x170864, Func Offset: 0xc4
	// Line 915, Address: 0x17086c, Func Offset: 0xcc
	// Line 918, Address: 0x170870, Func Offset: 0xd0
	// Line 919, Address: 0x170874, Func Offset: 0xd4
	// Line 920, Address: 0x170878, Func Offset: 0xd8
	// Line 922, Address: 0x17087c, Func Offset: 0xdc
	// Line 923, Address: 0x170880, Func Offset: 0xe0
	// Line 925, Address: 0x170888, Func Offset: 0xe8
	// Line 927, Address: 0x170890, Func Offset: 0xf0
	// Line 928, Address: 0x170894, Func Offset: 0xf4
	// Line 929, Address: 0x170898, Func Offset: 0xf8
	// Line 930, Address: 0x17089c, Func Offset: 0xfc
	// Line 932, Address: 0x1708a0, Func Offset: 0x100
	// Line 933, Address: 0x1708a4, Func Offset: 0x104
	// Line 934, Address: 0x1708a8, Func Offset: 0x108
	// Line 935, Address: 0x1708ac, Func Offset: 0x10c
	// Line 936, Address: 0x1708b0, Func Offset: 0x110
	// Line 938, Address: 0x1708b8, Func Offset: 0x118
	// Line 941, Address: 0x1708c0, Func Offset: 0x120
	// Line 945, Address: 0x1708c8, Func Offset: 0x128
	// Line 946, Address: 0x1708cc, Func Offset: 0x12c
	// Line 947, Address: 0x1708d0, Func Offset: 0x130
	// Line 948, Address: 0x1708d4, Func Offset: 0x134
	// Line 949, Address: 0x1708d8, Func Offset: 0x138
	// Line 951, Address: 0x1708e0, Func Offset: 0x140
	// Line 952, Address: 0x1708e4, Func Offset: 0x144
	// Line 953, Address: 0x1708e8, Func Offset: 0x148
	// Line 956, Address: 0x1708f0, Func Offset: 0x150
	// Line 957, Address: 0x1708f4, Func Offset: 0x154
	// Line 959, Address: 0x1708fc, Func Offset: 0x15c
	// Line 960, Address: 0x170900, Func Offset: 0x160
	// Line 961, Address: 0x170904, Func Offset: 0x164
	// Line 963, Address: 0x17090c, Func Offset: 0x16c
	// Line 966, Address: 0x170910, Func Offset: 0x170
	// Line 967, Address: 0x170914, Func Offset: 0x174
	// Line 968, Address: 0x170918, Func Offset: 0x178
	// Line 970, Address: 0x17091c, Func Offset: 0x17c
	// Line 971, Address: 0x170920, Func Offset: 0x180
	// Line 972, Address: 0x170924, Func Offset: 0x184
	// Line 974, Address: 0x17092c, Func Offset: 0x18c
	// Line 976, Address: 0x170934, Func Offset: 0x194
	// Line 977, Address: 0x170938, Func Offset: 0x198
	// Line 978, Address: 0x17093c, Func Offset: 0x19c
	// Line 979, Address: 0x170940, Func Offset: 0x1a0
	// Line 981, Address: 0x170944, Func Offset: 0x1a4
	// Line 982, Address: 0x170948, Func Offset: 0x1a8
	// Line 983, Address: 0x17094c, Func Offset: 0x1ac
	// Line 984, Address: 0x170950, Func Offset: 0x1b0
	// Line 985, Address: 0x170954, Func Offset: 0x1b4
	// Line 986, Address: 0x170958, Func Offset: 0x1b8
	// Line 987, Address: 0x17095c, Func Offset: 0x1bc
	// Line 989, Address: 0x170964, Func Offset: 0x1c4
	// Line 993, Address: 0x17096c, Func Offset: 0x1cc
	// Line 994, Address: 0x170970, Func Offset: 0x1d0
	// Line 996, Address: 0x170974, Func Offset: 0x1d4
	// Line 997, Address: 0x170978, Func Offset: 0x1d8
	// Line 999, Address: 0x170980, Func Offset: 0x1e0
	// Line 1001, Address: 0x170988, Func Offset: 0x1e8
	// Line 1002, Address: 0x17098c, Func Offset: 0x1ec
	// Line 1003, Address: 0x170990, Func Offset: 0x1f0
	// Line 1004, Address: 0x170994, Func Offset: 0x1f4
	// Line 1006, Address: 0x170998, Func Offset: 0x1f8
	// Line 1007, Address: 0x17099c, Func Offset: 0x1fc
	// Line 1008, Address: 0x1709a0, Func Offset: 0x200
	// Line 1009, Address: 0x1709a4, Func Offset: 0x204
	// Line 1010, Address: 0x1709a8, Func Offset: 0x208
	// Line 1011, Address: 0x1709ac, Func Offset: 0x20c
	// Line 1013, Address: 0x1709b4, Func Offset: 0x214
	// Line 1014, Address: 0x1709b8, Func Offset: 0x218
	// Line 1017, Address: 0x1709c0, Func Offset: 0x220
	// Line 1018, Address: 0x1709c4, Func Offset: 0x224
	// Line 1020, Address: 0x1709cc, Func Offset: 0x22c
	// Line 1021, Address: 0x1709d0, Func Offset: 0x230
	// Line 1022, Address: 0x1709d4, Func Offset: 0x234
	// Line 1024, Address: 0x1709dc, Func Offset: 0x23c
	// Line 1026, Address: 0x1709e0, Func Offset: 0x240
	// Line 1027, Address: 0x1709e4, Func Offset: 0x244
	// Line 1028, Address: 0x1709e8, Func Offset: 0x248
	// Line 1029, Address: 0x1709ec, Func Offset: 0x24c
	// Line 1030, Address: 0x1709f0, Func Offset: 0x250
	// Line 1031, Address: 0x1709f4, Func Offset: 0x254
	// Line 1032, Address: 0x1709f8, Func Offset: 0x258
	// Line 1033, Address: 0x1709fc, Func Offset: 0x25c
	// Line 1034, Address: 0x170a00, Func Offset: 0x260
	// Line 1035, Address: 0x170a04, Func Offset: 0x264
	// Func End, Address: 0x170a0c, Func Offset: 0x26c
}

// 
// Start address: 0x170a10
void ot_qsort_asm()
{
	// Line 1133, Address: 0x170a10, Func Offset: 0
	// Line 1134, Address: 0x170a14, Func Offset: 0x4
	// Line 1135, Address: 0x170a18, Func Offset: 0x8
	// Line 1137, Address: 0x170a20, Func Offset: 0x10
	// Line 1138, Address: 0x170a24, Func Offset: 0x14
	// Line 1139, Address: 0x170a28, Func Offset: 0x18
	// Line 1140, Address: 0x170a2c, Func Offset: 0x1c
	// Line 1141, Address: 0x170a30, Func Offset: 0x20
	// Line 1142, Address: 0x170a34, Func Offset: 0x24
	// Line 1144, Address: 0x170a3c, Func Offset: 0x2c
	// Line 1146, Address: 0x170a40, Func Offset: 0x30
	// Line 1147, Address: 0x170a44, Func Offset: 0x34
	// Line 1148, Address: 0x170a48, Func Offset: 0x38
	// Line 1149, Address: 0x170a4c, Func Offset: 0x3c
	// Line 1151, Address: 0x170a50, Func Offset: 0x40
	// Line 1152, Address: 0x170a54, Func Offset: 0x44
	// Line 1153, Address: 0x170a58, Func Offset: 0x48
	// Line 1154, Address: 0x170a5c, Func Offset: 0x4c
	// Line 1155, Address: 0x170a60, Func Offset: 0x50
	// Line 1156, Address: 0x170a64, Func Offset: 0x54
	// Line 1158, Address: 0x170a6c, Func Offset: 0x5c
	// Line 1160, Address: 0x170a74, Func Offset: 0x64
	// Line 1161, Address: 0x170a78, Func Offset: 0x68
	// Line 1162, Address: 0x170a7c, Func Offset: 0x6c
	// Line 1163, Address: 0x170a80, Func Offset: 0x70
	// Line 1164, Address: 0x170a84, Func Offset: 0x74
	// Line 1166, Address: 0x170a88, Func Offset: 0x78
	// Line 1167, Address: 0x170a8c, Func Offset: 0x7c
	// Line 1168, Address: 0x170a90, Func Offset: 0x80
	// Line 1171, Address: 0x170a98, Func Offset: 0x88
	// Line 1172, Address: 0x170a9c, Func Offset: 0x8c
	// Line 1173, Address: 0x170aa0, Func Offset: 0x90
	// Line 1174, Address: 0x170aa4, Func Offset: 0x94
	// Line 1175, Address: 0x170aa8, Func Offset: 0x98
	// Line 1178, Address: 0x170ab0, Func Offset: 0xa0
	// Line 1180, Address: 0x170ab8, Func Offset: 0xa8
	// Line 1181, Address: 0x170abc, Func Offset: 0xac
	// Line 1182, Address: 0x170ac0, Func Offset: 0xb0
	// Line 1183, Address: 0x170ac4, Func Offset: 0xb4
	// Line 1185, Address: 0x170acc, Func Offset: 0xbc
	// Line 1186, Address: 0x170ad0, Func Offset: 0xc0
	// Line 1189, Address: 0x170ad8, Func Offset: 0xc8
	// Line 1192, Address: 0x170ae0, Func Offset: 0xd0
	// Line 1193, Address: 0x170ae4, Func Offset: 0xd4
	// Line 1194, Address: 0x170ae8, Func Offset: 0xd8
	// Line 1195, Address: 0x170aec, Func Offset: 0xdc
	// Line 1196, Address: 0x170af0, Func Offset: 0xe0
	// Line 1197, Address: 0x170af4, Func Offset: 0xe4
	// Line 1198, Address: 0x170af8, Func Offset: 0xe8
	// Line 1199, Address: 0x170afc, Func Offset: 0xec
	// Line 1200, Address: 0x170b00, Func Offset: 0xf0
	// Line 1201, Address: 0x170b04, Func Offset: 0xf4
	// Line 1202, Address: 0x170b08, Func Offset: 0xf8
	// Line 1203, Address: 0x170b0c, Func Offset: 0xfc
	// Line 1205, Address: 0x170b14, Func Offset: 0x104
	// Line 1207, Address: 0x170b1c, Func Offset: 0x10c
	// Line 1209, Address: 0x170b24, Func Offset: 0x114
	// Line 1212, Address: 0x170b2c, Func Offset: 0x11c
	// Line 1214, Address: 0x170b34, Func Offset: 0x124
	// Line 1216, Address: 0x170b3c, Func Offset: 0x12c
	// Line 1218, Address: 0x170b40, Func Offset: 0x130
	// Line 1219, Address: 0x170b44, Func Offset: 0x134
	// Line 1220, Address: 0x170b48, Func Offset: 0x138
	// Line 1221, Address: 0x170b4c, Func Offset: 0x13c
	// Line 1222, Address: 0x170b50, Func Offset: 0x140
	// Line 1223, Address: 0x170b54, Func Offset: 0x144
	// Line 1225, Address: 0x170b58, Func Offset: 0x148
	// Line 1226, Address: 0x170b5c, Func Offset: 0x14c
	// Line 1227, Address: 0x170b60, Func Offset: 0x150
	// Line 1229, Address: 0x170b68, Func Offset: 0x158
	// Line 1230, Address: 0x170b6c, Func Offset: 0x15c
	// Line 1231, Address: 0x170b70, Func Offset: 0x160
	// Line 1233, Address: 0x170b78, Func Offset: 0x168
	// Line 1236, Address: 0x170b80, Func Offset: 0x170
	// Line 1237, Address: 0x170b84, Func Offset: 0x174
	// Line 1238, Address: 0x170b88, Func Offset: 0x178
	// Line 1240, Address: 0x170b90, Func Offset: 0x180
	// Line 1241, Address: 0x170b94, Func Offset: 0x184
	// Line 1243, Address: 0x170b9c, Func Offset: 0x18c
	// Line 1246, Address: 0x170ba4, Func Offset: 0x194
	// Line 1247, Address: 0x170ba8, Func Offset: 0x198
	// Line 1248, Address: 0x170bac, Func Offset: 0x19c
	// Line 1249, Address: 0x170bb0, Func Offset: 0x1a0
	// Line 1250, Address: 0x170bb4, Func Offset: 0x1a4
	// Line 1251, Address: 0x170bb8, Func Offset: 0x1a8
	// Line 1252, Address: 0x170bbc, Func Offset: 0x1ac
	// Line 1253, Address: 0x170bc0, Func Offset: 0x1b0
	// Line 1256, Address: 0x170bc8, Func Offset: 0x1b8
	// Line 1257, Address: 0x170bcc, Func Offset: 0x1bc
	// Line 1258, Address: 0x170bd0, Func Offset: 0x1c0
	// Line 1260, Address: 0x170bd8, Func Offset: 0x1c8
	// Line 1263, Address: 0x170be0, Func Offset: 0x1d0
	// Line 1265, Address: 0x170be8, Func Offset: 0x1d8
	// Line 1266, Address: 0x170bf0, Func Offset: 0x1e0
	// Func End, Address: 0x170bf8, Func Offset: 0x1e8
}

// 
// Start address: 0x170c00
void ot_qsort_asm2()
{
	// Line 1364, Address: 0x170c00, Func Offset: 0
	// Line 1365, Address: 0x170c04, Func Offset: 0x4
	// Line 1366, Address: 0x170c08, Func Offset: 0x8
	// Line 1368, Address: 0x170c10, Func Offset: 0x10
	// Line 1369, Address: 0x170c14, Func Offset: 0x14
	// Line 1370, Address: 0x170c18, Func Offset: 0x18
	// Line 1371, Address: 0x170c1c, Func Offset: 0x1c
	// Line 1372, Address: 0x170c20, Func Offset: 0x20
	// Line 1373, Address: 0x170c24, Func Offset: 0x24
	// Line 1375, Address: 0x170c2c, Func Offset: 0x2c
	// Line 1377, Address: 0x170c30, Func Offset: 0x30
	// Line 1378, Address: 0x170c34, Func Offset: 0x34
	// Line 1379, Address: 0x170c38, Func Offset: 0x38
	// Line 1380, Address: 0x170c3c, Func Offset: 0x3c
	// Line 1382, Address: 0x170c40, Func Offset: 0x40
	// Line 1383, Address: 0x170c44, Func Offset: 0x44
	// Line 1384, Address: 0x170c48, Func Offset: 0x48
	// Line 1385, Address: 0x170c4c, Func Offset: 0x4c
	// Line 1386, Address: 0x170c50, Func Offset: 0x50
	// Line 1387, Address: 0x170c54, Func Offset: 0x54
	// Line 1389, Address: 0x170c5c, Func Offset: 0x5c
	// Line 1391, Address: 0x170c64, Func Offset: 0x64
	// Line 1392, Address: 0x170c68, Func Offset: 0x68
	// Line 1393, Address: 0x170c6c, Func Offset: 0x6c
	// Line 1394, Address: 0x170c70, Func Offset: 0x70
	// Line 1395, Address: 0x170c74, Func Offset: 0x74
	// Line 1397, Address: 0x170c78, Func Offset: 0x78
	// Line 1398, Address: 0x170c7c, Func Offset: 0x7c
	// Line 1399, Address: 0x170c80, Func Offset: 0x80
	// Line 1402, Address: 0x170c88, Func Offset: 0x88
	// Line 1403, Address: 0x170c8c, Func Offset: 0x8c
	// Line 1404, Address: 0x170c90, Func Offset: 0x90
	// Line 1405, Address: 0x170c94, Func Offset: 0x94
	// Line 1406, Address: 0x170c98, Func Offset: 0x98
	// Line 1409, Address: 0x170ca0, Func Offset: 0xa0
	// Line 1411, Address: 0x170ca8, Func Offset: 0xa8
	// Line 1412, Address: 0x170cac, Func Offset: 0xac
	// Line 1413, Address: 0x170cb0, Func Offset: 0xb0
	// Line 1414, Address: 0x170cb4, Func Offset: 0xb4
	// Line 1416, Address: 0x170cbc, Func Offset: 0xbc
	// Line 1417, Address: 0x170cc0, Func Offset: 0xc0
	// Line 1420, Address: 0x170cc8, Func Offset: 0xc8
	// Line 1423, Address: 0x170cd0, Func Offset: 0xd0
	// Line 1424, Address: 0x170cd4, Func Offset: 0xd4
	// Line 1425, Address: 0x170cd8, Func Offset: 0xd8
	// Line 1426, Address: 0x170cdc, Func Offset: 0xdc
	// Line 1427, Address: 0x170ce0, Func Offset: 0xe0
	// Line 1428, Address: 0x170ce4, Func Offset: 0xe4
	// Line 1429, Address: 0x170ce8, Func Offset: 0xe8
	// Line 1430, Address: 0x170cec, Func Offset: 0xec
	// Line 1431, Address: 0x170cf0, Func Offset: 0xf0
	// Line 1432, Address: 0x170cf4, Func Offset: 0xf4
	// Line 1433, Address: 0x170cf8, Func Offset: 0xf8
	// Line 1434, Address: 0x170cfc, Func Offset: 0xfc
	// Line 1436, Address: 0x170d04, Func Offset: 0x104
	// Line 1438, Address: 0x170d0c, Func Offset: 0x10c
	// Line 1440, Address: 0x170d14, Func Offset: 0x114
	// Line 1443, Address: 0x170d1c, Func Offset: 0x11c
	// Line 1445, Address: 0x170d24, Func Offset: 0x124
	// Line 1447, Address: 0x170d2c, Func Offset: 0x12c
	// Line 1449, Address: 0x170d30, Func Offset: 0x130
	// Line 1450, Address: 0x170d34, Func Offset: 0x134
	// Line 1451, Address: 0x170d38, Func Offset: 0x138
	// Line 1452, Address: 0x170d3c, Func Offset: 0x13c
	// Line 1453, Address: 0x170d40, Func Offset: 0x140
	// Line 1454, Address: 0x170d44, Func Offset: 0x144
	// Line 1456, Address: 0x170d48, Func Offset: 0x148
	// Line 1457, Address: 0x170d4c, Func Offset: 0x14c
	// Line 1458, Address: 0x170d50, Func Offset: 0x150
	// Line 1460, Address: 0x170d58, Func Offset: 0x158
	// Line 1461, Address: 0x170d5c, Func Offset: 0x15c
	// Line 1462, Address: 0x170d60, Func Offset: 0x160
	// Line 1464, Address: 0x170d68, Func Offset: 0x168
	// Line 1467, Address: 0x170d70, Func Offset: 0x170
	// Line 1468, Address: 0x170d74, Func Offset: 0x174
	// Line 1469, Address: 0x170d78, Func Offset: 0x178
	// Line 1471, Address: 0x170d80, Func Offset: 0x180
	// Line 1472, Address: 0x170d84, Func Offset: 0x184
	// Line 1474, Address: 0x170d8c, Func Offset: 0x18c
	// Line 1477, Address: 0x170d94, Func Offset: 0x194
	// Line 1478, Address: 0x170d98, Func Offset: 0x198
	// Line 1479, Address: 0x170d9c, Func Offset: 0x19c
	// Line 1480, Address: 0x170da0, Func Offset: 0x1a0
	// Line 1481, Address: 0x170da4, Func Offset: 0x1a4
	// Line 1482, Address: 0x170da8, Func Offset: 0x1a8
	// Line 1483, Address: 0x170dac, Func Offset: 0x1ac
	// Line 1484, Address: 0x170db0, Func Offset: 0x1b0
	// Line 1487, Address: 0x170db8, Func Offset: 0x1b8
	// Line 1488, Address: 0x170dbc, Func Offset: 0x1bc
	// Line 1489, Address: 0x170dc0, Func Offset: 0x1c0
	// Line 1491, Address: 0x170dc8, Func Offset: 0x1c8
	// Line 1494, Address: 0x170dd0, Func Offset: 0x1d0
	// Line 1496, Address: 0x170dd8, Func Offset: 0x1d8
	// Line 1497, Address: 0x170de0, Func Offset: 0x1e0
	// Func End, Address: 0x170de8, Func Offset: 0x1e8
}

// 
// Start address: 0x170df0
void ot_check()
{
	// Line 1543, Address: 0x170df0, Func Offset: 0
	// Line 1544, Address: 0x170df8, Func Offset: 0x8
	// Line 1545, Address: 0x170dfc, Func Offset: 0xc
	// Line 1546, Address: 0x170e00, Func Offset: 0x10
	// Line 1547, Address: 0x170e04, Func Offset: 0x14
	// Line 1548, Address: 0x170e08, Func Offset: 0x18
	// Line 1549, Address: 0x170e0c, Func Offset: 0x1c
	// Line 1550, Address: 0x170e10, Func Offset: 0x20
	// Line 1551, Address: 0x170e14, Func Offset: 0x24
	// Line 1552, Address: 0x170e18, Func Offset: 0x28
	// Line 1554, Address: 0x170e1c, Func Offset: 0x2c
	// Line 1555, Address: 0x170e20, Func Offset: 0x30
	// Line 1556, Address: 0x170e24, Func Offset: 0x34
	// Line 1559, Address: 0x170e2c, Func Offset: 0x3c
	// Line 1560, Address: 0x170e30, Func Offset: 0x40
	// Line 1561, Address: 0x170e34, Func Offset: 0x44
	// Line 1563, Address: 0x170e3c, Func Offset: 0x4c
	// Line 1564, Address: 0x170e40, Func Offset: 0x50
	// Line 1567, Address: 0x170e48, Func Offset: 0x58
	// Line 1568, Address: 0x170e4c, Func Offset: 0x5c
	// Line 1569, Address: 0x170e50, Func Offset: 0x60
	// Line 1570, Address: 0x170e54, Func Offset: 0x64
	// Line 1572, Address: 0x170e5c, Func Offset: 0x6c
	// Func End, Address: 0x170e64, Func Offset: 0x74
}

// 
// Start address: 0x170e70
void spkDmaWaittoSPR(int timeout)
{
	int c;
	// Line 1631, Address: 0x170e70, Func Offset: 0
	// Line 1632, Address: 0x170e78, Func Offset: 0x8
	// Line 1633, Address: 0x170e7c, Func Offset: 0xc
	// Line 1634, Address: 0x170e88, Func Offset: 0x18
	// Line 1635, Address: 0x170e90, Func Offset: 0x20
	// Line 1636, Address: 0x170ea0, Func Offset: 0x30
	// Line 1637, Address: 0x170eb0, Func Offset: 0x40
	// Line 1639, Address: 0x170eb8, Func Offset: 0x48
	// Line 1640, Address: 0x170ed0, Func Offset: 0x60
	// Func End, Address: 0x170ee0, Func Offset: 0x70
}

// 
// Start address: 0x170ee0
void spkDmaWaitfromSPR(int timeout)
{
	int c;
	// Line 1647, Address: 0x170ee0, Func Offset: 0
	// Line 1648, Address: 0x170ee8, Func Offset: 0x8
	// Line 1649, Address: 0x170eec, Func Offset: 0xc
	// Line 1650, Address: 0x170ef8, Func Offset: 0x18
	// Line 1651, Address: 0x170f00, Func Offset: 0x20
	// Line 1652, Address: 0x170f10, Func Offset: 0x30
	// Line 1653, Address: 0x170f20, Func Offset: 0x40
	// Line 1655, Address: 0x170f28, Func Offset: 0x48
	// Line 1656, Address: 0x170f40, Func Offset: 0x60
	// Func End, Address: 0x170f50, Func Offset: 0x70
}

// 
// Start address: 0x170f50
void spkDmatoSPR(unsigned int qwc, unsigned int sadr, void* madr)
{
	// Line 1741, Address: 0x170f50, Func Offset: 0
	// Line 1742, Address: 0x170f70, Func Offset: 0x20
	// Line 1743, Address: 0x170f7c, Func Offset: 0x2c
	// Line 1744, Address: 0x170f84, Func Offset: 0x34
	// Line 1745, Address: 0x170f90, Func Offset: 0x40
	// Line 1746, Address: 0x170fa0, Func Offset: 0x50
	// Line 1747, Address: 0x170fac, Func Offset: 0x5c
	// Func End, Address: 0x170fc8, Func Offset: 0x78
}

// 
// Start address: 0x170fd0
void spkDmafromSPR(unsigned int qwc, unsigned int sadr, void* madr)
{
	// Line 1755, Address: 0x170fd0, Func Offset: 0
	// Line 1756, Address: 0x170ff0, Func Offset: 0x20
	// Line 1757, Address: 0x170ffc, Func Offset: 0x2c
	// Line 1758, Address: 0x171004, Func Offset: 0x34
	// Line 1759, Address: 0x171010, Func Offset: 0x40
	// Line 1760, Address: 0x171020, Func Offset: 0x50
	// Line 1761, Address: 0x17102c, Func Offset: 0x5c
	// Func End, Address: 0x171048, Func Offset: 0x78
}

// 
// Start address: 0x171050
void spkDebugPrint()
{
	int y;
	int x;
	int m;
	int i;
	char buf[14];
	char nbuf[3];
	// Line 1801, Address: 0x171050, Func Offset: 0
	// Line 1806, Address: 0x17106c, Func Offset: 0x1c
	// Line 1807, Address: 0x171084, Func Offset: 0x34
	// Line 1808, Address: 0x17108c, Func Offset: 0x3c
	// Line 1809, Address: 0x171090, Func Offset: 0x40
	// Line 1810, Address: 0x171094, Func Offset: 0x44
	// Line 1811, Address: 0x171098, Func Offset: 0x48
	// Line 1812, Address: 0x17109c, Func Offset: 0x4c
	// Line 1813, Address: 0x1710a8, Func Offset: 0x58
	// Line 1814, Address: 0x1710e0, Func Offset: 0x90
	// Line 1815, Address: 0x1710fc, Func Offset: 0xac
	// Line 1816, Address: 0x171124, Func Offset: 0xd4
	// Line 1817, Address: 0x171138, Func Offset: 0xe8
	// Line 1818, Address: 0x17114c, Func Offset: 0xfc
	// Line 1819, Address: 0x171160, Func Offset: 0x110
	// Line 1820, Address: 0x171164, Func Offset: 0x114
	// Line 1821, Address: 0x171180, Func Offset: 0x130
	// Line 1822, Address: 0x171184, Func Offset: 0x134
	// Line 1824, Address: 0x171188, Func Offset: 0x138
	// Line 1825, Address: 0x1711a4, Func Offset: 0x154
	// Line 1826, Address: 0x1711c4, Func Offset: 0x174
	// Line 1828, Address: 0x1711dc, Func Offset: 0x18c
	// Line 1830, Address: 0x1711f0, Func Offset: 0x1a0
	// Func End, Address: 0x171214, Func Offset: 0x1c4
}

