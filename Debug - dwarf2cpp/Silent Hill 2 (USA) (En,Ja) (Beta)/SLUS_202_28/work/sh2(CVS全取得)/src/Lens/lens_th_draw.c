typedef struct _anon0;
typedef struct shBattleShot;
typedef struct _anon1;
typedef struct shAttackInfo;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shBattleFight;


typedef unsigned int type_0[4];
typedef unsigned int type_1[4];
typedef <unknown fundamental type (0xa510)> type_2[1024];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[16];
typedef _anon1 type_5[1];

struct _anon0
{
	unsigned int vifcode[4];
	_anon8 giftag;
	_anon4 bitbltbuf;
	long bitbltbufaddr;
	_anon6 trxpos;
	long trxposaddr;
	_anon7 trxreg;
	long trxregaddr;
	_anon3 finish;
	long finishaddr;
	_anon5 trxdir;
	long trxdiraddr;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon1
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon3
{
	unsigned long pad00;
};

struct _anon4
{
	struct
	{
		unsigned long SBP : 14;
		unsigned long pad14 : 2;
		unsigned long SBW : 6;
		unsigned long pad22 : 2;
		unsigned long SPSM : 6;
		unsigned long pad30 : 2;
		unsigned long DBP : 14;
		unsigned long pad46 : 2;
		unsigned long DBW : 6;
		unsigned long pad54 : 2;
		unsigned long DPSM : 6;
		unsigned long pad62 : 2;
	};
};

struct _anon5
{
	struct
	{
		unsigned long XDR : 2;
		unsigned long pad02 : 62;
	};
};

struct _anon6
{
	struct
	{
		unsigned long SSAX : 11;
		unsigned long pad11 : 5;
		unsigned long SSAY : 11;
		unsigned long pad27 : 5;
		unsigned long DSAX : 11;
		unsigned long pad43 : 5;
		unsigned long DSAY : 11;
		unsigned long DIR : 2;
		unsigned long pad61 : 3;
	};
};

struct _anon7
{
	struct
	{
		unsigned long RRW : 12;
		unsigned long pad12 : 20;
		unsigned long RRH : 12;
		unsigned long pad44 : 20;
	};
};

struct _anon8
{
	struct
	{
		unsigned long NLOOP : 15;
		unsigned long EOP : 1;
		unsigned long pad16 : 16;
		unsigned long id : 14;
		unsigned long PRE : 1;
		unsigned long PRIM : 11;
		unsigned long FLG : 2;
		unsigned long NREG : 4;
	};
	struct
	{
		unsigned long REGS0 : 4;
		unsigned long REGS1 : 4;
		unsigned long REGS2 : 4;
		unsigned long REGS3 : 4;
		unsigned long REGS4 : 4;
		unsigned long REGS5 : 4;
		unsigned long REGS6 : 4;
		unsigned long REGS7 : 4;
		unsigned long REGS8 : 4;
		unsigned long REGS9 : 4;
		unsigned long REGS10 : 4;
		unsigned long REGS11 : 4;
		unsigned long REGS12 : 4;
		unsigned long REGS13 : 4;
		unsigned long REGS14 : 4;
		unsigned long REGS15 : 4;
	};
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
<unknown fundamental type (0xa510)> buffer[1024];

int sh2gfw_GsSetDefStoreImage(_anon0* sp, short sbp, short sbw, short spsm, short x, short y, short w, short h);
int sh2gfw_GsExecStoreImage(_anon0* sp, <unknown fundamental type (0xa510)>* dstaddr);

// 
// Start address: 0x187cc0
int sh2gfw_GsSetDefStoreImage(_anon0* sp, short sbp, short sbw, short spsm, short x, short y, short w, short h)
{
	// Line 48, Address: 0x187cc0, Func Offset: 0
	// Line 49, Address: 0x187cc4, Func Offset: 0x4
	// Line 52, Address: 0x187cc8, Func Offset: 0x8
	// Line 53, Address: 0x187cd0, Func Offset: 0x10
	// Line 55, Address: 0x187cdc, Func Offset: 0x1c
	// Line 56, Address: 0x187ce0, Func Offset: 0x20
	// Line 57, Address: 0x187cf8, Func Offset: 0x38
	// Line 58, Address: 0x187d10, Func Offset: 0x50
	// Line 59, Address: 0x187d28, Func Offset: 0x68
	// Line 61, Address: 0x187d40, Func Offset: 0x80
	// Line 63, Address: 0x187d6c, Func Offset: 0xac
	// Line 65, Address: 0x187d74, Func Offset: 0xb4
	// Line 66, Address: 0x187d90, Func Offset: 0xd0
	// Line 68, Address: 0x187d98, Func Offset: 0xd8
	// Line 69, Address: 0x187db4, Func Offset: 0xf4
	// Line 71, Address: 0x187dbc, Func Offset: 0xfc
	// Line 72, Address: 0x187dc0, Func Offset: 0x100
	// Line 74, Address: 0x187dc8, Func Offset: 0x108
	// Line 75, Address: 0x187dd0, Func Offset: 0x110
	// Line 77, Address: 0x187dd8, Func Offset: 0x118
	// Line 79, Address: 0x187ddc, Func Offset: 0x11c
	// Line 80, Address: 0x187de0, Func Offset: 0x120
	// Func End, Address: 0x187de8, Func Offset: 0x128
}

// 
// Start address: 0x187df0
int sh2gfw_GsExecStoreImage(_anon0* sp, <unknown fundamental type (0xa510)>* dstaddr)
{
	unsigned long oldIMR;
	unsigned char tmpbuf[16];
	int sizeb;
	int ah;
	int remb;
	int remq;
	int rsizeq;
	int allsizeq;
	int dmasizeq;
	int i;
	int h;
	int w;
	unsigned int vcnt;
	unsigned int init_mp3[4];
	// Line 87, Address: 0x187df0, Func Offset: 0
	// Line 102, Address: 0x187e18, Func Offset: 0x28
	// Line 103, Address: 0x187e20, Func Offset: 0x30
	// Line 105, Address: 0x187e28, Func Offset: 0x38
	// Line 108, Address: 0x187ed0, Func Offset: 0xe0
	// Line 109, Address: 0x187ed8, Func Offset: 0xe8
	// Line 110, Address: 0x187edc, Func Offset: 0xec
	// Line 111, Address: 0x187ee4, Func Offset: 0xf4
	// Line 112, Address: 0x187eec, Func Offset: 0xfc
	// Line 113, Address: 0x187ef4, Func Offset: 0x104
	// Line 114, Address: 0x187ef8, Func Offset: 0x108
	// Line 115, Address: 0x187efc, Func Offset: 0x10c
	// Line 116, Address: 0x187f04, Func Offset: 0x114
	// Line 117, Address: 0x187f10, Func Offset: 0x120
	// Line 118, Address: 0x187f18, Func Offset: 0x128
	// Line 120, Address: 0x187f24, Func Offset: 0x134
	// Line 123, Address: 0x187f2c, Func Offset: 0x13c
	// Line 124, Address: 0x187f38, Func Offset: 0x148
	// Line 125, Address: 0x187f3c, Func Offset: 0x14c
	// Line 126, Address: 0x187f44, Func Offset: 0x154
	// Line 127, Address: 0x187f4c, Func Offset: 0x15c
	// Line 128, Address: 0x187f54, Func Offset: 0x164
	// Line 129, Address: 0x187f58, Func Offset: 0x168
	// Line 130, Address: 0x187f5c, Func Offset: 0x16c
	// Line 131, Address: 0x187f64, Func Offset: 0x174
	// Line 132, Address: 0x187f70, Func Offset: 0x180
	// Line 133, Address: 0x187f80, Func Offset: 0x190
	// Line 135, Address: 0x187f8c, Func Offset: 0x19c
	// Line 140, Address: 0x187f94, Func Offset: 0x1a4
	// Line 141, Address: 0x187f9c, Func Offset: 0x1ac
	// Line 142, Address: 0x187fa0, Func Offset: 0x1b0
	// Line 143, Address: 0x187fa8, Func Offset: 0x1b8
	// Line 144, Address: 0x187fb0, Func Offset: 0x1c0
	// Line 145, Address: 0x187fb8, Func Offset: 0x1c8
	// Line 146, Address: 0x187fbc, Func Offset: 0x1cc
	// Line 147, Address: 0x187fc0, Func Offset: 0x1d0
	// Line 148, Address: 0x187fc8, Func Offset: 0x1d8
	// Line 149, Address: 0x187fd0, Func Offset: 0x1e0
	// Line 150, Address: 0x187fd8, Func Offset: 0x1e8
	// Line 152, Address: 0x187fe4, Func Offset: 0x1f4
	// Line 155, Address: 0x187fec, Func Offset: 0x1fc
	// Line 156, Address: 0x187ff0, Func Offset: 0x200
	// Line 157, Address: 0x187ff4, Func Offset: 0x204
	// Line 158, Address: 0x187ffc, Func Offset: 0x20c
	// Line 159, Address: 0x188004, Func Offset: 0x214
	// Line 160, Address: 0x18800c, Func Offset: 0x21c
	// Line 161, Address: 0x188010, Func Offset: 0x220
	// Line 162, Address: 0x188014, Func Offset: 0x224
	// Line 163, Address: 0x18801c, Func Offset: 0x22c
	// Line 164, Address: 0x188024, Func Offset: 0x234
	// Line 165, Address: 0x18802c, Func Offset: 0x23c
	// Line 167, Address: 0x188038, Func Offset: 0x248
	// Line 171, Address: 0x188040, Func Offset: 0x250
	// Line 172, Address: 0x188048, Func Offset: 0x258
	// Line 173, Address: 0x18804c, Func Offset: 0x25c
	// Line 174, Address: 0x188054, Func Offset: 0x264
	// Line 175, Address: 0x18805c, Func Offset: 0x26c
	// Line 176, Address: 0x188064, Func Offset: 0x274
	// Line 177, Address: 0x188068, Func Offset: 0x278
	// Line 178, Address: 0x18806c, Func Offset: 0x27c
	// Line 179, Address: 0x188074, Func Offset: 0x284
	// Line 180, Address: 0x18807c, Func Offset: 0x28c
	// Line 181, Address: 0x188084, Func Offset: 0x294
	// Line 186, Address: 0x188090, Func Offset: 0x2a0
	// Line 187, Address: 0x188098, Func Offset: 0x2a8
	// Line 191, Address: 0x1880bc, Func Offset: 0x2cc
	// Line 192, Address: 0x1880cc, Func Offset: 0x2dc
	// Line 205, Address: 0x1880dc, Func Offset: 0x2ec
	// Line 206, Address: 0x1880f0, Func Offset: 0x300
	// Line 211, Address: 0x188100, Func Offset: 0x310
	// Line 212, Address: 0x188110, Func Offset: 0x320
	// Line 213, Address: 0x188120, Func Offset: 0x330
	// Line 215, Address: 0x188140, Func Offset: 0x350
	// Line 216, Address: 0x188150, Func Offset: 0x360
	// Line 220, Address: 0x188160, Func Offset: 0x370
	// Line 222, Address: 0x18817c, Func Offset: 0x38c
	// Line 223, Address: 0x188180, Func Offset: 0x390
	// Line 226, Address: 0x18819c, Func Offset: 0x3ac
	// Line 228, Address: 0x1881ac, Func Offset: 0x3bc
	// Line 231, Address: 0x1881bc, Func Offset: 0x3cc
	// Line 232, Address: 0x1881c4, Func Offset: 0x3d4
	// Line 233, Address: 0x1881d4, Func Offset: 0x3e4
	// Line 235, Address: 0x1881f4, Func Offset: 0x404
	// Line 236, Address: 0x188204, Func Offset: 0x414
	// Line 240, Address: 0x188210, Func Offset: 0x420
	// Line 242, Address: 0x18822c, Func Offset: 0x43c
	// Line 243, Address: 0x188238, Func Offset: 0x448
	// Line 244, Address: 0x188250, Func Offset: 0x460
	// Line 246, Address: 0x188264, Func Offset: 0x474
	// Line 247, Address: 0x18826c, Func Offset: 0x47c
	// Line 248, Address: 0x188280, Func Offset: 0x490
	// Line 249, Address: 0x18828c, Func Offset: 0x49c
	// Line 251, Address: 0x1882a8, Func Offset: 0x4b8
	// Line 252, Address: 0x1882bc, Func Offset: 0x4cc
	// Line 253, Address: 0x1882c8, Func Offset: 0x4d8
	// Line 254, Address: 0x1882d8, Func Offset: 0x4e8
	// Line 255, Address: 0x1882ec, Func Offset: 0x4fc
	// Line 257, Address: 0x1882f0, Func Offset: 0x500
	// Line 258, Address: 0x1882f8, Func Offset: 0x508
	// Line 260, Address: 0x188300, Func Offset: 0x510
	// Line 261, Address: 0x18830c, Func Offset: 0x51c
	// Line 263, Address: 0x188318, Func Offset: 0x528
	// Line 265, Address: 0x18832c, Func Offset: 0x53c
	// Line 268, Address: 0x188338, Func Offset: 0x548
	// Func End, Address: 0x188360, Func Offset: 0x570
}

