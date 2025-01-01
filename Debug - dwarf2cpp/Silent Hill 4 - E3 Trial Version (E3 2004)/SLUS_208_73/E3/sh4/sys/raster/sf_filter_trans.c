typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef unsigned long type_0[2];
typedef unsigned int type_1[4];
typedef unsigned long type_2[2];

struct _anon0
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

struct _anon1
{
	_anon0 giftag0;
	_anon5 bitbltbuf;
	long bitbltbufaddr;
	_anon4 trxpos;
	long trxposaddr;
	_anon7 trxreg;
	long trxregaddr;
	_anon2 trxdir;
	long trxdiraddr;
	_anon0 giftag1;
};

struct _anon2
{
	struct
	{
		unsigned long XDR : 2;
		unsigned long pad02 : 62;
	};
};

struct _anon3
{
	unsigned long pad00;
};

struct _anon4
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

struct _anon5
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

struct _anon6
{
	unsigned int vifcode[4];
	_anon0 giftag;
	_anon5 bitbltbuf;
	long bitbltbufaddr;
	_anon4 trxpos;
	long trxposaddr;
	_anon7 trxreg;
	long trxregaddr;
	_anon3 finish;
	long finishaddr;
	_anon2 trxdir;
	long trxdiraddr;
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

unsigned long* sg_packet_cur;

void sfFilterNormalize();
void sfFilterTexTrans8(int depth);
void sfFilterLoadClut(<unknown fundamental type (0xa510)>* image);

// 
// Start address: 0x140f50
void sfFilterNormalize()
{
	int x;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long giftag[2];
	// Line 51, Address: 0x140f50, Func Offset: 0
	// Line 63, Address: 0x140f54, Func Offset: 0x4
	// Line 51, Address: 0x140f58, Func Offset: 0x8
	// Line 63, Address: 0x140f6c, Func Offset: 0x1c
	// Line 64, Address: 0x140f74, Func Offset: 0x24
	// Line 65, Address: 0x140f7c, Func Offset: 0x2c
	// Line 70, Address: 0x140f88, Func Offset: 0x38
	// Line 77, Address: 0x140fc4, Func Offset: 0x74
	// Line 70, Address: 0x140fc8, Func Offset: 0x78
	// Line 77, Address: 0x140fe0, Func Offset: 0x90
	// Line 78, Address: 0x141018, Func Offset: 0xc8
	// Line 77, Address: 0x14101c, Func Offset: 0xcc
	// Line 78, Address: 0x141038, Func Offset: 0xe8
	// Line 77, Address: 0x14103c, Func Offset: 0xec
	// Line 79, Address: 0x141048, Func Offset: 0xf8
	// Line 77, Address: 0x14104c, Func Offset: 0xfc
	// Line 80, Address: 0x141050, Func Offset: 0x100
	// Line 78, Address: 0x141054, Func Offset: 0x104
	// Line 80, Address: 0x141058, Func Offset: 0x108
	// Line 81, Address: 0x141060, Func Offset: 0x110
	// Line 80, Address: 0x141064, Func Offset: 0x114
	// Line 82, Address: 0x141068, Func Offset: 0x118
	// Line 80, Address: 0x14106c, Func Offset: 0x11c
	// Line 82, Address: 0x141070, Func Offset: 0x120
	// Line 81, Address: 0x141074, Func Offset: 0x124
	// Line 83, Address: 0x141078, Func Offset: 0x128
	// Line 81, Address: 0x14107c, Func Offset: 0x12c
	// Line 88, Address: 0x141080, Func Offset: 0x130
	// Line 78, Address: 0x141084, Func Offset: 0x134
	// Line 83, Address: 0x141090, Func Offset: 0x140
	// Line 78, Address: 0x141094, Func Offset: 0x144
	// Line 83, Address: 0x141098, Func Offset: 0x148
	// Line 78, Address: 0x14109c, Func Offset: 0x14c
	// Line 79, Address: 0x1410a0, Func Offset: 0x150
	// Line 83, Address: 0x1410a8, Func Offset: 0x158
	// Line 86, Address: 0x1410ac, Func Offset: 0x15c
	// Line 84, Address: 0x1410b0, Func Offset: 0x160
	// Line 86, Address: 0x1410b4, Func Offset: 0x164
	// Line 79, Address: 0x1410bc, Func Offset: 0x16c
	// Line 80, Address: 0x1410cc, Func Offset: 0x17c
	// Line 79, Address: 0x1410d0, Func Offset: 0x180
	// Line 80, Address: 0x1410d4, Func Offset: 0x184
	// Line 81, Address: 0x1410e8, Func Offset: 0x198
	// Line 80, Address: 0x1410ec, Func Offset: 0x19c
	// Line 81, Address: 0x1410f0, Func Offset: 0x1a0
	// Line 82, Address: 0x141104, Func Offset: 0x1b4
	// Line 81, Address: 0x141108, Func Offset: 0x1b8
	// Line 82, Address: 0x14110c, Func Offset: 0x1bc
	// Line 83, Address: 0x141120, Func Offset: 0x1d0
	// Line 82, Address: 0x141124, Func Offset: 0x1d4
	// Line 83, Address: 0x141128, Func Offset: 0x1d8
	// Line 84, Address: 0x14113c, Func Offset: 0x1ec
	// Line 83, Address: 0x141140, Func Offset: 0x1f0
	// Line 84, Address: 0x141144, Func Offset: 0x1f4
	// Line 86, Address: 0x141158, Func Offset: 0x208
	// Line 84, Address: 0x14115c, Func Offset: 0x20c
	// Line 86, Address: 0x141160, Func Offset: 0x210
	// Line 88, Address: 0x141174, Func Offset: 0x224
	// Line 89, Address: 0x1411a0, Func Offset: 0x250
	// Line 90, Address: 0x1411c4, Func Offset: 0x274
	// Line 89, Address: 0x1411c8, Func Offset: 0x278
	// Line 90, Address: 0x1411cc, Func Offset: 0x27c
	// Line 92, Address: 0x14122c, Func Offset: 0x2dc
	// Line 90, Address: 0x141230, Func Offset: 0x2e0
	// Line 92, Address: 0x141250, Func Offset: 0x300
	// Line 96, Address: 0x141268, Func Offset: 0x318
	// Line 92, Address: 0x14126c, Func Offset: 0x31c
	// Line 96, Address: 0x141288, Func Offset: 0x338
	// Line 97, Address: 0x141310, Func Offset: 0x3c0
	// Line 96, Address: 0x141314, Func Offset: 0x3c4
	// Line 97, Address: 0x141320, Func Offset: 0x3d0
	// Line 114, Address: 0x141348, Func Offset: 0x3f8
	// Line 120, Address: 0x141384, Func Offset: 0x434
	// Line 114, Address: 0x141388, Func Offset: 0x438
	// Line 120, Address: 0x1413a0, Func Offset: 0x450
	// Line 122, Address: 0x141400, Func Offset: 0x4b0
	// Line 123, Address: 0x141408, Func Offset: 0x4b8
	// Line 125, Address: 0x141410, Func Offset: 0x4c0
	// Line 126, Address: 0x14141c, Func Offset: 0x4cc
	// Line 129, Address: 0x141424, Func Offset: 0x4d4
	// Func End, Address: 0x141444, Func Offset: 0x4f4
}

// 
// Start address: 0x141450
void sfFilterTexTrans8(int depth)
{
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long giftag[2];
	// Line 144, Address: 0x141450, Func Offset: 0
	// Line 156, Address: 0x141468, Func Offset: 0x18
	// Line 157, Address: 0x141470, Func Offset: 0x20
	// Line 158, Address: 0x141478, Func Offset: 0x28
	// Line 163, Address: 0x141484, Func Offset: 0x34
	// Line 173, Address: 0x1414c0, Func Offset: 0x70
	// Line 163, Address: 0x1414c4, Func Offset: 0x74
	// Line 173, Address: 0x1414dc, Func Offset: 0x8c
	// Line 181, Address: 0x141514, Func Offset: 0xc4
	// Line 173, Address: 0x141518, Func Offset: 0xc8
	// Line 181, Address: 0x14151c, Func Offset: 0xcc
	// Line 173, Address: 0x141520, Func Offset: 0xd0
	// Line 174, Address: 0x14152c, Func Offset: 0xdc
	// Line 173, Address: 0x141530, Func Offset: 0xe0
	// Line 174, Address: 0x141534, Func Offset: 0xe4
	// Line 173, Address: 0x141538, Func Offset: 0xe8
	// Line 175, Address: 0x14153c, Func Offset: 0xec
	// Line 173, Address: 0x141540, Func Offset: 0xf0
	// Line 177, Address: 0x141544, Func Offset: 0xf4
	// Line 173, Address: 0x141548, Func Offset: 0xf8
	// Line 177, Address: 0x141554, Func Offset: 0x104
	// Line 173, Address: 0x141558, Func Offset: 0x108
	// Line 178, Address: 0x14155c, Func Offset: 0x10c
	// Line 173, Address: 0x141560, Func Offset: 0x110
	// Line 179, Address: 0x141564, Func Offset: 0x114
	// Line 174, Address: 0x141568, Func Offset: 0x118
	// Line 178, Address: 0x14156c, Func Offset: 0x11c
	// Line 180, Address: 0x141574, Func Offset: 0x124
	// Line 178, Address: 0x141578, Func Offset: 0x128
	// Line 180, Address: 0x14157c, Func Offset: 0x12c
	// Line 178, Address: 0x141580, Func Offset: 0x130
	// Line 181, Address: 0x141584, Func Offset: 0x134
	// Line 179, Address: 0x141588, Func Offset: 0x138
	// Line 174, Address: 0x141590, Func Offset: 0x140
	// Line 181, Address: 0x14159c, Func Offset: 0x14c
	// Line 174, Address: 0x1415a0, Func Offset: 0x150
	// Line 181, Address: 0x1415a4, Func Offset: 0x154
	// Line 174, Address: 0x1415a8, Func Offset: 0x158
	// Line 175, Address: 0x1415ac, Func Offset: 0x15c
	// Line 181, Address: 0x1415b4, Func Offset: 0x164
	// Line 182, Address: 0x1415bc, Func Offset: 0x16c
	// Line 185, Address: 0x1415c0, Func Offset: 0x170
	// Line 175, Address: 0x1415c4, Func Offset: 0x174
	// Line 177, Address: 0x1415d4, Func Offset: 0x184
	// Line 175, Address: 0x1415d8, Func Offset: 0x188
	// Line 177, Address: 0x1415dc, Func Offset: 0x18c
	// Line 178, Address: 0x1415f0, Func Offset: 0x1a0
	// Line 177, Address: 0x1415f4, Func Offset: 0x1a4
	// Line 178, Address: 0x1415f8, Func Offset: 0x1a8
	// Line 179, Address: 0x14160c, Func Offset: 0x1bc
	// Line 178, Address: 0x141610, Func Offset: 0x1c0
	// Line 179, Address: 0x141614, Func Offset: 0x1c4
	// Line 180, Address: 0x141628, Func Offset: 0x1d8
	// Line 179, Address: 0x14162c, Func Offset: 0x1dc
	// Line 180, Address: 0x141630, Func Offset: 0x1e0
	// Line 181, Address: 0x141644, Func Offset: 0x1f4
	// Line 180, Address: 0x141648, Func Offset: 0x1f8
	// Line 181, Address: 0x14164c, Func Offset: 0x1fc
	// Line 182, Address: 0x141660, Func Offset: 0x210
	// Line 181, Address: 0x141664, Func Offset: 0x214
	// Line 182, Address: 0x141668, Func Offset: 0x218
	// Line 185, Address: 0x14167c, Func Offset: 0x22c
	// Line 182, Address: 0x141680, Func Offset: 0x230
	// Line 185, Address: 0x141684, Func Offset: 0x234
	// Line 188, Address: 0x141698, Func Offset: 0x248
	// Line 185, Address: 0x14169c, Func Offset: 0x24c
	// Line 188, Address: 0x1416a0, Func Offset: 0x250
	// Line 190, Address: 0x1416fc, Func Offset: 0x2ac
	// Line 188, Address: 0x141700, Func Offset: 0x2b0
	// Line 190, Address: 0x141720, Func Offset: 0x2d0
	// Line 193, Address: 0x141740, Func Offset: 0x2f0
	// Line 190, Address: 0x141744, Func Offset: 0x2f4
	// Line 193, Address: 0x141758, Func Offset: 0x308
	// Line 207, Address: 0x1417e0, Func Offset: 0x390
	// Line 208, Address: 0x1417e8, Func Offset: 0x398
	// Line 210, Address: 0x1417f0, Func Offset: 0x3a0
	// Line 213, Address: 0x1417fc, Func Offset: 0x3ac
	// Func End, Address: 0x141814, Func Offset: 0x3c4
}

// 
// Start address: 0x141820
void sfFilterLoadClut(<unknown fundamental type (0xa510)>* image)
{
	_anon1 lp;
	// Line 401, Address: 0x141820, Func Offset: 0
	// Line 404, Address: 0x141824, Func Offset: 0x4
	// Line 401, Address: 0x141828, Func Offset: 0x8
	// Line 404, Address: 0x14182c, Func Offset: 0xc
	// Line 401, Address: 0x141830, Func Offset: 0x10
	// Line 404, Address: 0x141834, Func Offset: 0x14
	// Line 410, Address: 0x141854, Func Offset: 0x34
	// Line 411, Address: 0x14185c, Func Offset: 0x3c
	// Line 414, Address: 0x141868, Func Offset: 0x48
	// Func End, Address: 0x141878, Func Offset: 0x58
}

