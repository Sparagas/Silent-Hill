typedef union Q_WORDDATA;


typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned long type_7[2];

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


void sh2gfw_util_zeroq(Q_WORDDATA* qwd, int qsize);

// 
// Start address: 0x17e410
void sh2gfw_util_zeroq(Q_WORDDATA* qwd, int qsize)
{
	<unknown fundamental type (0xa510)> zero128;
	// Line 33, Address: 0x17e410, Func Offset: 0
	// Line 34, Address: 0x17e420, Func Offset: 0x10
	// Line 36, Address: 0x17e424, Func Offset: 0x14
	// Line 38, Address: 0x17e454, Func Offset: 0x44
	// Func End, Address: 0x17e464, Func Offset: 0x54
}

