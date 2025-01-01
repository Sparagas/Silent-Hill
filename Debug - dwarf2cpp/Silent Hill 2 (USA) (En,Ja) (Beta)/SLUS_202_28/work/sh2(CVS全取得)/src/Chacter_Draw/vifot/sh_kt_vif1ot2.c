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
// Start address: 0x125450
void ktVif1Ot2Init(ktVif1Ot2* ot, unsigned int n_bits_1, _sceDmaTag* top_1, unsigned int n_bits_2, _sceDmaTag* top_2)
{
	int i;
	_sceDmaTag* p;
	// Line 221, Address: 0x125450, Func Offset: 0
	// Line 225, Address: 0x125460, Func Offset: 0x10
	// Line 226, Address: 0x125464, Func Offset: 0x14
	// Line 227, Address: 0x125468, Func Offset: 0x18
	// Line 228, Address: 0x12546c, Func Offset: 0x1c
	// Line 229, Address: 0x125470, Func Offset: 0x20
	// Line 230, Address: 0x12547c, Func Offset: 0x2c
	// Line 231, Address: 0x125484, Func Offset: 0x34
	// Line 232, Address: 0x12548c, Func Offset: 0x3c
	// Line 237, Address: 0x1254a4, Func Offset: 0x54
	// Line 238, Address: 0x1254bc, Func Offset: 0x6c
	// Line 239, Address: 0x1254cc, Func Offset: 0x7c
	// Line 240, Address: 0x1254d4, Func Offset: 0x84
	// Line 243, Address: 0x1254f0, Func Offset: 0xa0
	// Line 245, Address: 0x1254fc, Func Offset: 0xac
	// Line 246, Address: 0x125508, Func Offset: 0xb8
	// Func End, Address: 0x12551c, Func Offset: 0xcc
}

// 
// Start address: 0x125520
void ktVif1Ot2Reset(ktVif1Ot2* ot)
{
	unsigned int length;
	_sceDmaTag* top;
	// Line 256, Address: 0x125520, Func Offset: 0
	// Line 257, Address: 0x125528, Func Offset: 0x8
	// Line 258, Address: 0x12552c, Func Offset: 0xc
	// Line 260, Address: 0x125530, Func Offset: 0x10
	// Line 261, Address: 0x125544, Func Offset: 0x24
	// Func End, Address: 0x125554, Func Offset: 0x34
}

// 
// Start address: 0x125560
void ktVif1Ot2Append(ktVif1Ot2* ot, unsigned int depth, <unknown fundamental type (0xa510)>* packet_)
{
	_sceDmaTag* packet;
	_sceDmaTag* trunk;
	unsigned int depth_2;
	unsigned int depth_1;
	// Line 269, Address: 0x125560, Func Offset: 0
	// Line 270, Address: 0x125568, Func Offset: 0x8
	// Line 271, Address: 0x125570, Func Offset: 0x10
	// Line 275, Address: 0x12557c, Func Offset: 0x1c
	// Line 276, Address: 0x125580, Func Offset: 0x20
	// Line 277, Address: 0x125588, Func Offset: 0x28
	// Line 278, Address: 0x12558c, Func Offset: 0x2c
	// Func End, Address: 0x125594, Func Offset: 0x34
}

// 
// Start address: 0x1255a0
void ktVif1Ot2AppendFake(ktVif1Ot2* ot, unsigned int depth, <unknown fundamental type (0xa510)>* packet_, void* entity_)
{
	_sceDmaTag* entity;
	_sceDmaTag* packet;
	_sceDmaTag* trunk;
	unsigned int depth_2;
	unsigned int depth_1;
	// Line 289, Address: 0x1255a0, Func Offset: 0
	// Line 290, Address: 0x1255a8, Func Offset: 0x8
	// Line 291, Address: 0x1255b0, Func Offset: 0x10
	// Line 296, Address: 0x1255bc, Func Offset: 0x1c
	// Line 297, Address: 0x1255c0, Func Offset: 0x20
	// Line 298, Address: 0x1255c8, Func Offset: 0x28
	// Line 299, Address: 0x1255cc, Func Offset: 0x2c
	// Func End, Address: 0x1255d4, Func Offset: 0x34
}

// 
// Start address: 0x1255e0
void Init2ndOT(ktVif1Ot2* ot)
{
	int i;
	_sceDmaTag* pTagNext;
	_sceDmaTag* top_2;
	unsigned int length_2;
	// Line 310, Address: 0x1255e0, Func Offset: 0
	// Line 311, Address: 0x1255e4, Func Offset: 0x4
	// Line 315, Address: 0x1255e8, Func Offset: 0x8
	// Line 316, Address: 0x1255f4, Func Offset: 0x14
	// Line 318, Address: 0x1255fc, Func Offset: 0x1c
	// Line 321, Address: 0x125618, Func Offset: 0x38
	// Line 335, Address: 0x125624, Func Offset: 0x44
	// Func End, Address: 0x12562c, Func Offset: 0x4c
}

// 
// Start address: 0x125630
void Make2ndOT(ktVif1Ot2* ot)
{
	_sceDmaTag* link;
	_sceDmaTag* p;
	int i;
	int length_1;
	_sceDmaTag* top_1;
	_sceDmaTag* top_2;
	// Line 355, Address: 0x125630, Func Offset: 0
	// Line 357, Address: 0x125654, Func Offset: 0x24
	// Line 362, Address: 0x125658, Func Offset: 0x28
	// Line 363, Address: 0x12565c, Func Offset: 0x2c
	// Line 366, Address: 0x125660, Func Offset: 0x30
	// Line 367, Address: 0x12566c, Func Offset: 0x3c
	// Line 368, Address: 0x125680, Func Offset: 0x50
	// Line 369, Address: 0x125688, Func Offset: 0x58
	// Line 370, Address: 0x125698, Func Offset: 0x68
	// Line 371, Address: 0x1256a8, Func Offset: 0x78
	// Line 372, Address: 0x1256ac, Func Offset: 0x7c
	// Line 373, Address: 0x1256b8, Func Offset: 0x88
	// Line 376, Address: 0x1256c8, Func Offset: 0x98
	// Line 383, Address: 0x1256e0, Func Offset: 0xb0
	// Func End, Address: 0x125708, Func Offset: 0xd8
}

// 
// Start address: 0x125710
void Sort2(_sceDmaTag* top_2, _sceDmaTag* p)
{
	_sceDmaTag* trunk;
	unsigned int depth_2;
	// Line 342, Address: 0x125710, Func Offset: 0
	// Line 343, Address: 0x125728, Func Offset: 0x18
	// Line 344, Address: 0x125734, Func Offset: 0x24
	// Line 346, Address: 0x12573c, Func Offset: 0x2c
	// Line 347, Address: 0x125758, Func Offset: 0x48
	// Line 348, Address: 0x125768, Func Offset: 0x58
	// Func End, Address: 0x125780, Func Offset: 0x70
}

// 
// Start address: 0x125780
void SetNext(_sceDmaTag* tag, _sceDmaTag* p)
{
	// Line 212, Address: 0x125780, Func Offset: 0
	// Line 213, Address: 0x125784, Func Offset: 0x4
	// Func End, Address: 0x12578c, Func Offset: 0xc
}

// 
// Start address: 0x125790
_sceDmaTag* Next(_sceDmaTag* tag)
{
	// Line 203, Address: 0x125790, Func Offset: 0
	// Line 204, Address: 0x125794, Func Offset: 0x4
	// Func End, Address: 0x12579c, Func Offset: 0xc
}

// 
// Start address: 0x1257a0
unsigned int Depth2(_sceDmaTag* tag)
{
	// Line 183, Address: 0x1257a0, Func Offset: 0
	// Line 184, Address: 0x1257a4, Func Offset: 0x4
	// Func End, Address: 0x1257ac, Func Offset: 0xc
}

// 
// Start address: 0x1257b0
_sceDmaTag* Link(_sceDmaTag* tag)
{
	// Line 165, Address: 0x1257b0, Func Offset: 0
	// Line 166, Address: 0x1257b4, Func Offset: 0x4
	// Func End, Address: 0x1257bc, Func Offset: 0xc
}

// 
// Start address: 0x1257c0
void ktVif1Ot2KickPre(ktVif1Ot2* ot)
{
	// Line 439, Address: 0x1257c0, Func Offset: 0
	// Line 442, Address: 0x1257d0, Func Offset: 0x10
	// Line 444, Address: 0x1257d8, Func Offset: 0x18
	// Line 446, Address: 0x1257e4, Func Offset: 0x24
	// Line 447, Address: 0x1257f0, Func Offset: 0x30
	// Func End, Address: 0x125804, Func Offset: 0x44
}

