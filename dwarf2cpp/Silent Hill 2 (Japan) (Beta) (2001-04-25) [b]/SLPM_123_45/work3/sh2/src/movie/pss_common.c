typedef struct _anon0;
typedef struct _anon1;
typedef struct PssCommonWork;
typedef struct _anon2;


typedef <unknown fundamental type (0xa510)> type_0[32768];
typedef _anon2 type_1[512];
typedef unsigned char type_2[327680];
typedef _anon1 type_3[5];
typedef unsigned char type_4[49152];
typedef unsigned int type_5[102656];
typedef unsigned int type_6[102656][5];
typedef unsigned char type_7[518400];
typedef unsigned int type_8[102656];
typedef unsigned int type_9[102656][5];
typedef char type_10[2048];
typedef char type_11[16384];
typedef unsigned char type_12[1557248];

struct _anon0
{
	unsigned char data[327680];
	int put;
	int count;
	int size;
};

struct _anon1
{
	unsigned char v[518400];
};

struct PssCommonWork
{
	unsigned char mpegWork[1557248];
	_anon0 readBuf;
	<unknown fundamental type (0xa510)> viBufData[32768];
	_anon2 timeStamp[512];
	_anon1 voBufData[5];
	unsigned char audioBuff[49152];
	unsigned int tagProgData[102656][5];
	unsigned int tagInterData[102656][5];
	char defStack[2048];
	char videoDecStack[16384];
};

struct _anon2
{
	long pts;
	long dts;
	int pos;
	int len;
};

PssCommonWork* pss_common_work;

void PssBreakPoint();

// 
// Start address: 0x2360f0
void PssBreakPoint()
{
	// Line 14, Address: 0x2360f0, Func Offset: 0
	// Func End, Address: 0x2360f8, Func Offset: 0x8
}

