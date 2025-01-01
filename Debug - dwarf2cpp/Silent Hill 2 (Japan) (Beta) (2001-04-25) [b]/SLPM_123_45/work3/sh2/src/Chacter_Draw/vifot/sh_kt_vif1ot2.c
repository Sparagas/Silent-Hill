typedef struct ktVif1Ot2;
typedef struct _sceDmaTag;


typedef unsigned int type[2];

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

_sceDmaTag term;

void ktVif1Ot2Init(ktVif1Ot2* ot, unsigned int n_bits_1, _sceDmaTag* top_1, unsigned int n_bits_2, _sceDmaTag* top_2);
void ktVif1Ot2Reset(ktVif1Ot2* ot);
void ktVif1Ot2Append(ktVif1Ot2* ot, unsigned int depth, <unknown fundamental type (0xa510)>* packet_);
void ktVif1Ot2AppendFake(ktVif1Ot2* ot, unsigned int depth, <unknown fundamental type (0xa510)>* packet_, void* entity_);
void Init2ndOT(ktVif1Ot2* ot);
void Make2ndOT(ktVif1Ot2* ot);
void Sort2(_sceDmaTag* top_2, _sceDmaTag* p);
void SetNext(_sceDmaTag* tag, _sceDmaTag* p);
_sceDmaTag* Next(_sceDmaTag* tag);
unsigned int Depth2(_sceDmaTag* tag);
_sceDmaTag* Link(_sceDmaTag* tag);
void ktVif1Ot2KickPre(ktVif1Ot2* ot);

// 
// Start address: 0x12dda0
void ktVif1Ot2Init(ktVif1Ot2* ot, unsigned int n_bits_1, _sceDmaTag* top_1, unsigned int n_bits_2, _sceDmaTag* top_2)
{
	int i;
	_sceDmaTag* p;
	// Line 221, Address: 0x12dda0, Func Offset: 0
	// Line 225, Address: 0x12ddc4, Func Offset: 0x24
	// Line 226, Address: 0x12ddd0, Func Offset: 0x30
	// Line 227, Address: 0x12dddc, Func Offset: 0x3c
	// Line 228, Address: 0x12dde8, Func Offset: 0x48
	// Line 229, Address: 0x12ddf4, Func Offset: 0x54
	// Line 230, Address: 0x12de08, Func Offset: 0x68
	// Line 231, Address: 0x12de1c, Func Offset: 0x7c
	// Line 232, Address: 0x12de34, Func Offset: 0x94
	// Line 237, Address: 0x12de60, Func Offset: 0xc0
	// Line 238, Address: 0x12de80, Func Offset: 0xe0
	// Line 239, Address: 0x12de94, Func Offset: 0xf4
	// Line 240, Address: 0x12de9c, Func Offset: 0xfc
	// Line 243, Address: 0x12debc, Func Offset: 0x11c
	// Line 245, Address: 0x12dec8, Func Offset: 0x128
	// Line 246, Address: 0x12ded4, Func Offset: 0x134
	// Func End, Address: 0x12deec, Func Offset: 0x14c
}

// 
// Start address: 0x12def0
void ktVif1Ot2Reset(ktVif1Ot2* ot)
{
	unsigned int length;
	_sceDmaTag* top;
	// Line 256, Address: 0x12def0, Func Offset: 0
	// Line 257, Address: 0x12df04, Func Offset: 0x14
	// Line 258, Address: 0x12df0c, Func Offset: 0x1c
	// Line 260, Address: 0x12df14, Func Offset: 0x24
	// Line 261, Address: 0x12df2c, Func Offset: 0x3c
	// Func End, Address: 0x12df44, Func Offset: 0x54
}

// 
// Start address: 0x12df50
void ktVif1Ot2Append(ktVif1Ot2* ot, unsigned int depth, <unknown fundamental type (0xa510)>* packet_)
{
	_sceDmaTag* packet;
	_sceDmaTag* trunk;
	unsigned int depth_2;
	unsigned int depth_1;
	// Line 268, Address: 0x12df50, Func Offset: 0
	// Line 269, Address: 0x12df78, Func Offset: 0x28
	// Line 270, Address: 0x12df88, Func Offset: 0x38
	// Line 271, Address: 0x12df98, Func Offset: 0x48
	// Line 272, Address: 0x12dfa8, Func Offset: 0x58
	// Line 275, Address: 0x12dfac, Func Offset: 0x5c
	// Line 276, Address: 0x12dfb0, Func Offset: 0x60
	// Line 277, Address: 0x12dfbc, Func Offset: 0x6c
	// Line 278, Address: 0x12dfc0, Func Offset: 0x70
	// Func End, Address: 0x12dfe4, Func Offset: 0x94
}

// 
// Start address: 0x12dff0
void ktVif1Ot2AppendFake(ktVif1Ot2* ot, unsigned int depth, <unknown fundamental type (0xa510)>* packet_, void* entity_)
{
	_sceDmaTag* entity;
	_sceDmaTag* packet;
	_sceDmaTag* trunk;
	unsigned int depth_2;
	unsigned int depth_1;
	// Line 288, Address: 0x12dff0, Func Offset: 0
	// Line 289, Address: 0x12e020, Func Offset: 0x30
	// Line 290, Address: 0x12e030, Func Offset: 0x40
	// Line 291, Address: 0x12e040, Func Offset: 0x50
	// Line 292, Address: 0x12e050, Func Offset: 0x60
	// Line 293, Address: 0x12e054, Func Offset: 0x64
	// Line 296, Address: 0x12e058, Func Offset: 0x68
	// Line 297, Address: 0x12e05c, Func Offset: 0x6c
	// Line 298, Address: 0x12e068, Func Offset: 0x78
	// Line 299, Address: 0x12e06c, Func Offset: 0x7c
	// Func End, Address: 0x12e094, Func Offset: 0xa4
}

// 
// Start address: 0x12e0a0
void Init2ndOT(ktVif1Ot2* ot)
{
	int i;
	_sceDmaTag* pTagNext;
	_sceDmaTag* top_2;
	unsigned int length_2;
	// Line 308, Address: 0x12e0a0, Func Offset: 0
	// Line 310, Address: 0x12e0c0, Func Offset: 0x20
	// Line 311, Address: 0x12e0c8, Func Offset: 0x28
	// Line 315, Address: 0x12e0d0, Func Offset: 0x30
	// Line 316, Address: 0x12e0e4, Func Offset: 0x44
	// Line 318, Address: 0x12e0ec, Func Offset: 0x4c
	// Line 321, Address: 0x12e108, Func Offset: 0x68
	// Line 335, Address: 0x12e114, Func Offset: 0x74
	// Func End, Address: 0x12e138, Func Offset: 0x98
}

// 
// Start address: 0x12e140
void Make2ndOT(ktVif1Ot2* ot)
{
	_sceDmaTag* link;
	_sceDmaTag* p;
	int i;
	int length_1;
	_sceDmaTag* top_1;
	_sceDmaTag* top_2;
	// Line 355, Address: 0x12e140, Func Offset: 0
	// Line 357, Address: 0x12e164, Func Offset: 0x24
	// Line 362, Address: 0x12e16c, Func Offset: 0x2c
	// Line 363, Address: 0x12e174, Func Offset: 0x34
	// Line 366, Address: 0x12e17c, Func Offset: 0x3c
	// Line 367, Address: 0x12e188, Func Offset: 0x48
	// Line 368, Address: 0x12e19c, Func Offset: 0x5c
	// Line 369, Address: 0x12e1a4, Func Offset: 0x64
	// Line 370, Address: 0x12e1b4, Func Offset: 0x74
	// Line 371, Address: 0x12e1c4, Func Offset: 0x84
	// Line 372, Address: 0x12e1c8, Func Offset: 0x88
	// Line 373, Address: 0x12e1d0, Func Offset: 0x90
	// Line 376, Address: 0x12e1e0, Func Offset: 0xa0
	// Line 383, Address: 0x12e1fc, Func Offset: 0xbc
	// Func End, Address: 0x12e224, Func Offset: 0xe4
}

// 
// Start address: 0x12e230
void Sort2(_sceDmaTag* top_2, _sceDmaTag* p)
{
	_sceDmaTag* trunk;
	unsigned int depth_2;
	// Line 342, Address: 0x12e230, Func Offset: 0
	// Line 343, Address: 0x12e248, Func Offset: 0x18
	// Line 344, Address: 0x12e258, Func Offset: 0x28
	// Line 346, Address: 0x12e264, Func Offset: 0x34
	// Line 347, Address: 0x12e280, Func Offset: 0x50
	// Line 348, Address: 0x12e290, Func Offset: 0x60
	// Func End, Address: 0x12e2a8, Func Offset: 0x78
}

// 
// Start address: 0x12e2b0
void SetNext(_sceDmaTag* tag, _sceDmaTag* p)
{
	// Line 211, Address: 0x12e2b0, Func Offset: 0
	// Line 212, Address: 0x12e2bc, Func Offset: 0xc
	// Line 213, Address: 0x12e2c8, Func Offset: 0x18
	// Func End, Address: 0x12e2d4, Func Offset: 0x24
}

// 
// Start address: 0x12e2e0
_sceDmaTag* Next(_sceDmaTag* tag)
{
	// Line 202, Address: 0x12e2e0, Func Offset: 0
	// Line 203, Address: 0x12e2e8, Func Offset: 0x8
	// Line 204, Address: 0x12e2f0, Func Offset: 0x10
	// Func End, Address: 0x12e2fc, Func Offset: 0x1c
}

// 
// Start address: 0x12e300
unsigned int Depth2(_sceDmaTag* tag)
{
	// Line 182, Address: 0x12e300, Func Offset: 0
	// Line 183, Address: 0x12e308, Func Offset: 0x8
	// Line 184, Address: 0x12e314, Func Offset: 0x14
	// Func End, Address: 0x12e320, Func Offset: 0x20
}

// 
// Start address: 0x12e320
_sceDmaTag* Link(_sceDmaTag* tag)
{
	// Line 164, Address: 0x12e320, Func Offset: 0
	// Line 165, Address: 0x12e328, Func Offset: 0x8
	// Line 166, Address: 0x12e330, Func Offset: 0x10
	// Func End, Address: 0x12e33c, Func Offset: 0x1c
}

// 
// Start address: 0x12e340
void ktVif1Ot2KickPre(ktVif1Ot2* ot)
{
	// Line 439, Address: 0x12e340, Func Offset: 0
	// Line 442, Address: 0x12e34c, Func Offset: 0xc
	// Line 444, Address: 0x12e358, Func Offset: 0x18
	// Line 446, Address: 0x12e364, Func Offset: 0x24
	// Line 447, Address: 0x12e370, Func Offset: 0x30
	// Func End, Address: 0x12e380, Func Offset: 0x40
}

