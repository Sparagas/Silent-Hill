typedef struct ktVif1Ot2;
typedef struct sh2gfw_CharacterOT_Man;
typedef struct _sceDmaTag;


typedef _sceDmaTag type_0[64];
typedef sh2gfw_CharacterOT_Man type_1[2];
typedef <unknown fundamental type (0xa510)> type_2[10240];
typedef <unknown fundamental type (0xa510)> type_3[10240][2];
typedef unsigned int type_4[2];
typedef _sceDmaTag type_5[64];

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
// Start address: 0x1380b0
void sh2gfw_AllInit_CharacterOT()
{
	ktVif1Ot2* ot;
	int i;
	// Line 64, Address: 0x1380b0, Func Offset: 0
	// Line 67, Address: 0x1380c0, Func Offset: 0x10
	// Line 69, Address: 0x1380cc, Func Offset: 0x1c
	// Line 70, Address: 0x1380e8, Func Offset: 0x38
	// Line 75, Address: 0x138130, Func Offset: 0x80
	// Line 77, Address: 0x138180, Func Offset: 0xd0
	// Line 80, Address: 0x1381c4, Func Offset: 0x114
	// Line 81, Address: 0x1381e0, Func Offset: 0x130
	// Line 82, Address: 0x1381fc, Func Offset: 0x14c
	// Line 83, Address: 0x138218, Func Offset: 0x168
	// Line 85, Address: 0x13822c, Func Offset: 0x17c
	// Func End, Address: 0x138244, Func Offset: 0x194
}

// 
// Start address: 0x138250
void sh2gfw_Init_CharacterOT()
{
	ktVif1Ot2* ot;
	// Line 95, Address: 0x138250, Func Offset: 0
	// Line 97, Address: 0x13825c, Func Offset: 0xc
	// Line 98, Address: 0x138284, Func Offset: 0x34
	// Line 101, Address: 0x138290, Func Offset: 0x40
	// Line 105, Address: 0x1382b8, Func Offset: 0x68
	// Line 107, Address: 0x1382f0, Func Offset: 0xa0
	// Line 110, Address: 0x138314, Func Offset: 0xc4
	// Line 111, Address: 0x138320, Func Offset: 0xd0
	// Line 112, Address: 0x13832c, Func Offset: 0xdc
	// Line 114, Address: 0x138338, Func Offset: 0xe8
	// Line 115, Address: 0x13834c, Func Offset: 0xfc
	// Func End, Address: 0x138360, Func Offset: 0x110
}

// 
// Start address: 0x138360
ktVif1Ot2* CharacterOt_KtVif1Ot2()
{
	// Line 136, Address: 0x138360, Func Offset: 0
	// Line 137, Address: 0x13836c, Func Offset: 0xc
	// Func End, Address: 0x138374, Func Offset: 0x14
}

// 
// Start address: 0x138380
<unknown fundamental type (0xa510)>* CharacterOt_RequestPacket(int qwc)
{
	<unknown fundamental type (0xa510)>* pp;
	// Line 144, Address: 0x138380, Func Offset: 0
	// Line 145, Address: 0x138390, Func Offset: 0x10
	// Line 146, Address: 0x13839c, Func Offset: 0x1c
	// Line 147, Address: 0x1383cc, Func Offset: 0x4c
	// Line 148, Address: 0x1383dc, Func Offset: 0x5c
	// Line 150, Address: 0x1383e8, Func Offset: 0x68
	// Line 151, Address: 0x138404, Func Offset: 0x84
	// Line 152, Address: 0x13841c, Func Offset: 0x9c
	// Line 153, Address: 0x138420, Func Offset: 0xa0
	// Func End, Address: 0x138434, Func Offset: 0xb4
}

// 
// Start address: 0x138440
void CharacterOt_Append(unsigned int depth, <unknown fundamental type (0xa510)>* packet)
{
	ktVif1Ot2* ot;
	// Line 159, Address: 0x138440, Func Offset: 0
	// Line 160, Address: 0x138454, Func Offset: 0x14
	// Line 161, Address: 0x138460, Func Offset: 0x20
	// Line 162, Address: 0x138474, Func Offset: 0x34
	// Func End, Address: 0x138488, Func Offset: 0x48
}

// 
// Start address: 0x138490
int CharacterOt_IsEmpty()
{
	// Line 178, Address: 0x138490, Func Offset: 0
	// Line 179, Address: 0x1384b0, Func Offset: 0x20
	// Func End, Address: 0x1384b8, Func Offset: 0x28
}

// 
// Start address: 0x1384c0
void CharacterOt_ExecPre()
{
	ktVif1Ot2* ot;
	// Line 209, Address: 0x1384c0, Func Offset: 0
	// Line 210, Address: 0x1384cc, Func Offset: 0xc
	// Line 212, Address: 0x1384d8, Func Offset: 0x18
	// Line 229, Address: 0x1384e4, Func Offset: 0x24
	// Func End, Address: 0x1384f8, Func Offset: 0x38
}

// 
// Start address: 0x138500
int CharacterOt_ExecPost()
{
	ktVif1Ot2* ot;
	// Line 242, Address: 0x138500, Func Offset: 0
	// Line 243, Address: 0x13850c, Func Offset: 0xc
	// Line 271, Address: 0x138518, Func Offset: 0x18
	// Line 290, Address: 0x138524, Func Offset: 0x24
	// Func End, Address: 0x138538, Func Offset: 0x38
}

