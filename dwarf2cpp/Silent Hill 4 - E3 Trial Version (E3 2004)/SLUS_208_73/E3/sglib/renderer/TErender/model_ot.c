typedef struct ktVif1Ot2;
typedef struct _sceDmaTag;
typedef struct ModelOtWork;


typedef unsigned int type_0[2];
typedef _sceDmaTag type_1[64];
typedef _sceDmaTag type_2[64];

struct ktVif1Ot2
{
	_sceDmaTag* top_1;
	_sceDmaTag* top_2;
	unsigned int n_bits_1;
	unsigned int n_bits_2;
	unsigned int length_1;
	unsigned int length_2;
	unsigned int mask_1;
	unsigned int mask_2;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct ModelOtWork
{
	_sceDmaTag vif1ot2_top_1[64];
	_sceDmaTag vif1ot2_top_2[64];
	ktVif1Ot2 vif1ot2;
	<unknown fundamental type (0xa510)>* pp_top;
	<unknown fundamental type (0xa510)>* pp_end;
	<unknown fundamental type (0xa510)>* pp_max;
	int buf_step;
	int used_qwc;
	int tmp_qwc;
};

ModelOtWork model_ot_work;

void ModelOtInit();
ktVif1Ot2* ModelOtKtVif1Ot2();
<unknown fundamental type (0xa510)>* ModelOtRequestPacket(int qwc);
void ModelOtAppend(unsigned int depth, <unknown fundamental type (0xa510)>* packet);
int ModelOtIsEmpty();
void ModelOtDiscard();
void ModelOtExecPre();
void ModelOtExecPost();

// 
// Start address: 0x1532b0
void ModelOtInit()
{
	// Line 71, Address: 0x1532b0, Func Offset: 0
	// Line 74, Address: 0x1532b4, Func Offset: 0x4
	// Line 71, Address: 0x1532c4, Func Offset: 0x14
	// Line 74, Address: 0x1532c8, Func Offset: 0x18
	// Line 77, Address: 0x1532dc, Func Offset: 0x2c
	// Line 78, Address: 0x1532e8, Func Offset: 0x38
	// Line 77, Address: 0x1532ec, Func Offset: 0x3c
	// Line 78, Address: 0x1532f4, Func Offset: 0x44
	// Line 83, Address: 0x15330c, Func Offset: 0x5c
	// Line 78, Address: 0x153310, Func Offset: 0x60
	// Line 83, Address: 0x153314, Func Offset: 0x64
	// Line 84, Address: 0x153318, Func Offset: 0x68
	// Line 85, Address: 0x153320, Func Offset: 0x70
	// Line 78, Address: 0x153328, Func Offset: 0x78
	// Line 86, Address: 0x15333c, Func Offset: 0x8c
	// Func End, Address: 0x153348, Func Offset: 0x98
}

// 
// Start address: 0x153350
ktVif1Ot2* ModelOtKtVif1Ot2()
{
	// Line 94, Address: 0x153350, Func Offset: 0
	// Line 95, Address: 0x153354, Func Offset: 0x4
	// Func End, Address: 0x15335c, Func Offset: 0xc
}

// 
// Start address: 0x153360
<unknown fundamental type (0xa510)>* ModelOtRequestPacket(int qwc)
{
	<unknown fundamental type (0xa510)>* pp;
	// Line 137, Address: 0x153360, Func Offset: 0
	// Line 139, Address: 0x153380, Func Offset: 0x20
	// Line 141, Address: 0x153398, Func Offset: 0x38
	// Line 145, Address: 0x1533b0, Func Offset: 0x50
	// Line 144, Address: 0x1533b4, Func Offset: 0x54
	// Line 145, Address: 0x1533bc, Func Offset: 0x5c
	// Line 147, Address: 0x1533d4, Func Offset: 0x74
	// Line 145, Address: 0x1533d8, Func Offset: 0x78
	// Line 147, Address: 0x1533e4, Func Offset: 0x84
	// Line 149, Address: 0x153400, Func Offset: 0xa0
	// Line 150, Address: 0x15340c, Func Offset: 0xac
	// Line 149, Address: 0x153410, Func Offset: 0xb0
	// Line 150, Address: 0x153418, Func Offset: 0xb8
	// Line 156, Address: 0x15343c, Func Offset: 0xdc
	// Line 150, Address: 0x153440, Func Offset: 0xe0
	// Line 156, Address: 0x153444, Func Offset: 0xe4
	// Line 150, Address: 0x153448, Func Offset: 0xe8
	// Line 157, Address: 0x15344c, Func Offset: 0xec
	// Line 158, Address: 0x153454, Func Offset: 0xf4
	// Line 159, Address: 0x15345c, Func Offset: 0xfc
	// Line 163, Address: 0x153460, Func Offset: 0x100
	// Line 170, Address: 0x153468, Func Offset: 0x108
	// Line 172, Address: 0x153470, Func Offset: 0x110
	// Line 171, Address: 0x153474, Func Offset: 0x114
	// Line 170, Address: 0x153478, Func Offset: 0x118
	// Line 171, Address: 0x15347c, Func Offset: 0x11c
	// Line 170, Address: 0x153480, Func Offset: 0x120
	// Line 171, Address: 0x153484, Func Offset: 0x124
	// Line 170, Address: 0x153488, Func Offset: 0x128
	// Line 171, Address: 0x15348c, Func Offset: 0x12c
	// Line 172, Address: 0x153494, Func Offset: 0x134
	// Line 173, Address: 0x153498, Func Offset: 0x138
	// Func End, Address: 0x1534b0, Func Offset: 0x150
}

// 
// Start address: 0x1534b0
void ModelOtAppend(unsigned int depth, <unknown fundamental type (0xa510)>* packet)
{
	// Line 183, Address: 0x1534b8, Func Offset: 0x8
	// Func End, Address: 0x1534c8, Func Offset: 0x18
}

// 
// Start address: 0x1534d0
int ModelOtIsEmpty()
{
	// Line 201, Address: 0x1534d0, Func Offset: 0
	// Line 202, Address: 0x1534e4, Func Offset: 0x14
	// Func End, Address: 0x1534ec, Func Offset: 0x1c
}

// 
// Start address: 0x1534f0
void ModelOtDiscard()
{
	// Line 213, Address: 0x1534f0, Func Offset: 0
	// Func End, Address: 0x153504, Func Offset: 0x14
}

// 
// Start address: 0x153510
void ModelOtExecPre()
{
	// Line 237, Address: 0x153510, Func Offset: 0
	// Line 240, Address: 0x153514, Func Offset: 0x4
	// Line 237, Address: 0x153518, Func Offset: 0x8
	// Line 240, Address: 0x15351c, Func Offset: 0xc
	// Line 242, Address: 0x153524, Func Offset: 0x14
	// Line 257, Address: 0x15352c, Func Offset: 0x1c
	// Func End, Address: 0x153538, Func Offset: 0x28
}

// 
// Start address: 0x153540
void ModelOtExecPost()
{
	// Line 264, Address: 0x153540, Func Offset: 0
	// Line 267, Address: 0x153544, Func Offset: 0x4
	// Line 264, Address: 0x153548, Func Offset: 0x8
	// Line 267, Address: 0x15354c, Func Offset: 0xc
	// Line 269, Address: 0x153558, Func Offset: 0x18
	// Line 270, Address: 0x153574, Func Offset: 0x34
	// Line 271, Address: 0x153578, Func Offset: 0x38
	// Line 281, Address: 0x153588, Func Offset: 0x48
	// Line 283, Address: 0x15359c, Func Offset: 0x5c
	// Func End, Address: 0x1535a8, Func Offset: 0x68
}

