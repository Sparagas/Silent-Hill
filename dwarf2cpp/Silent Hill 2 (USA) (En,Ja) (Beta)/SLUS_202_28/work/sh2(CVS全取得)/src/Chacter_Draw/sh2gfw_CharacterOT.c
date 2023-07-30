typedef struct ktVif1Ot2;
typedef struct sh2gfw_CharacterOT_Man;
typedef struct _sceDmaTag;


typedef _sceDmaTag type_0[64];
typedef _sceDmaTag type_1[64];
typedef sh2gfw_CharacterOT_Man type_2[2];
typedef unsigned int type_3[2];
typedef <unknown fundamental type (0xa510)> type_4[10240];
typedef <unknown fundamental type (0xa510)> type_5[10240][2];

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

struct sh2gfw_CharacterOT_Man
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

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

int otbuffer_page;
sh2gfw_CharacterOT_Man ChrOT_Man_dblbuf[2];
<unknown fundamental type (0xa510)> CharacterOT_Data[10240][2];
sh2gfw_CharacterOT_Man* pChrOT_Man;

void sh2gfw_AllInit_CharacterOT();
void sh2gfw_Init_CharacterOT();
ktVif1Ot2* CharacterOt_KtVif1Ot2();
<unknown fundamental type (0xa510)>* CharacterOt_RequestPacket(int qwc);
void CharacterOt_Append(unsigned int depth, <unknown fundamental type (0xa510)>* packet);
int CharacterOt_IsEmpty();
void CharacterOt_ExecPre();
int CharacterOt_ExecPost();

// 
// Start address: 0x12de80
void sh2gfw_AllInit_CharacterOT()
{
	ktVif1Ot2* ot;
	int i;
	// Line 64, Address: 0x12de80, Func Offset: 0
	// Line 67, Address: 0x12de90, Func Offset: 0x10
	// Line 69, Address: 0x12de9c, Func Offset: 0x1c
	// Line 70, Address: 0x12deb8, Func Offset: 0x38
	// Line 75, Address: 0x12decc, Func Offset: 0x4c
	// Line 77, Address: 0x12df04, Func Offset: 0x84
	// Line 80, Address: 0x12df24, Func Offset: 0xa4
	// Line 81, Address: 0x12df34, Func Offset: 0xb4
	// Line 82, Address: 0x12df44, Func Offset: 0xc4
	// Line 83, Address: 0x12df54, Func Offset: 0xd4
	// Line 85, Address: 0x12df64, Func Offset: 0xe4
	// Func End, Address: 0x12df7c, Func Offset: 0xfc
}

// 
// Start address: 0x12df80
void sh2gfw_Init_CharacterOT()
{
	ktVif1Ot2* ot;
	// Line 95, Address: 0x12df80, Func Offset: 0
	// Line 97, Address: 0x12df88, Func Offset: 0x8
	// Line 98, Address: 0x12dfb0, Func Offset: 0x30
	// Line 101, Address: 0x12dfbc, Func Offset: 0x3c
	// Line 105, Address: 0x12dfd0, Func Offset: 0x50
	// Line 107, Address: 0x12e010, Func Offset: 0x90
	// Line 110, Address: 0x12e024, Func Offset: 0xa4
	// Line 111, Address: 0x12e030, Func Offset: 0xb0
	// Line 112, Address: 0x12e03c, Func Offset: 0xbc
	// Line 114, Address: 0x12e048, Func Offset: 0xc8
	// Line 115, Address: 0x12e05c, Func Offset: 0xdc
	// Func End, Address: 0x12e06c, Func Offset: 0xec
}

// 
// Start address: 0x12e070
ktVif1Ot2* CharacterOt_KtVif1Ot2()
{
	// Line 136, Address: 0x12e070, Func Offset: 0
	// Line 137, Address: 0x12e07c, Func Offset: 0xc
	// Func End, Address: 0x12e084, Func Offset: 0x14
}

// 
// Start address: 0x12e090
<unknown fundamental type (0xa510)>* CharacterOt_RequestPacket(int qwc)
{
	<unknown fundamental type (0xa510)>* pp;
	// Line 144, Address: 0x12e090, Func Offset: 0
	// Line 145, Address: 0x12e098, Func Offset: 0x8
	// Line 146, Address: 0x12e0a8, Func Offset: 0x18
	// Line 147, Address: 0x12e0c0, Func Offset: 0x30
	// Line 148, Address: 0x12e0d0, Func Offset: 0x40
	// Line 150, Address: 0x12e0dc, Func Offset: 0x4c
	// Line 151, Address: 0x12e0e8, Func Offset: 0x58
	// Line 153, Address: 0x12e0fc, Func Offset: 0x6c
	// Func End, Address: 0x12e10c, Func Offset: 0x7c
}

// 
// Start address: 0x12e110
void CharacterOt_Append(unsigned int depth, <unknown fundamental type (0xa510)>* packet)
{
	ktVif1Ot2* ot;
	// Line 159, Address: 0x12e110, Func Offset: 0
	// Line 160, Address: 0x12e120, Func Offset: 0x10
	// Line 161, Address: 0x12e12c, Func Offset: 0x1c
	// Line 162, Address: 0x12e138, Func Offset: 0x28
	// Func End, Address: 0x12e148, Func Offset: 0x38
}

// 
// Start address: 0x12e150
int CharacterOt_IsEmpty()
{
	// Line 178, Address: 0x12e150, Func Offset: 0
	// Line 179, Address: 0x12e168, Func Offset: 0x18
	// Func End, Address: 0x12e170, Func Offset: 0x20
}

// 
// Start address: 0x12e170
void CharacterOt_ExecPre()
{
	ktVif1Ot2* ot;
	// Line 209, Address: 0x12e170, Func Offset: 0
	// Line 210, Address: 0x12e178, Func Offset: 0x8
	// Line 212, Address: 0x12e184, Func Offset: 0x14
	// Line 229, Address: 0x12e18c, Func Offset: 0x1c
	// Func End, Address: 0x12e19c, Func Offset: 0x2c
}

// 
// Start address: 0x12e1a0
int CharacterOt_ExecPost()
{
	ktVif1Ot2* ot;
	// Line 242, Address: 0x12e1a0, Func Offset: 0
	// Line 243, Address: 0x12e1a8, Func Offset: 0x8
	// Line 271, Address: 0x12e1b0, Func Offset: 0x10
	// Line 290, Address: 0x12e1bc, Func Offset: 0x1c
	// Func End, Address: 0x12e1cc, Func Offset: 0x2c
}

