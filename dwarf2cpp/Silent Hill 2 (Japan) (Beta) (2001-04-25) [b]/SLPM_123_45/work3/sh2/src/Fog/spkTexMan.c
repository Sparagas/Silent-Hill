typedef struct spkTexManage;


typedef int type_0[5];
typedef int type_1[5];
typedef void* type_2[5];

struct spkTexManage
{
	int Registed_TexNum;
	int Work_Slotid[5];
	int Work_Commandid[5];
	void* pTexMAN[5];
};

spkTexManage AllUserTexManage;

void sh2gfw_Init_spkTexManage();
void sh2gfw_EnQue_spkTexture(void* pTM, int* cid, int* sid);
void sh2gfw_ThrSyncKick_spkDmaKick();

// 
// Start address: 0x1d1080
void sh2gfw_Init_spkTexManage()
{
	int i;
	// Line 45, Address: 0x1d1080, Func Offset: 0
	// Line 48, Address: 0x1d1088, Func Offset: 0x8
	// Line 49, Address: 0x1d1090, Func Offset: 0x10
	// Line 51, Address: 0x1d109c, Func Offset: 0x1c
	// Line 53, Address: 0x1d10b4, Func Offset: 0x34
	// Line 55, Address: 0x1d10cc, Func Offset: 0x4c
	// Line 57, Address: 0x1d10e0, Func Offset: 0x60
	// Line 58, Address: 0x1d10f4, Func Offset: 0x74
	// Func End, Address: 0x1d1104, Func Offset: 0x84
}

// 
// Start address: 0x1d1110
void sh2gfw_EnQue_spkTexture(void* pTM, int* cid, int* sid)
{
	int i;
	// Line 71, Address: 0x1d1110, Func Offset: 0
	// Line 74, Address: 0x1d1128, Func Offset: 0x18
	// Line 79, Address: 0x1d1140, Func Offset: 0x30
	// Line 81, Address: 0x1d1154, Func Offset: 0x44
	// Line 83, Address: 0x1d1184, Func Offset: 0x74
	// Line 84, Address: 0x1d119c, Func Offset: 0x8c
	// Line 85, Address: 0x1d11b8, Func Offset: 0xa8
	// Line 88, Address: 0x1d11d4, Func Offset: 0xc4
	// Func End, Address: 0x1d11e8, Func Offset: 0xd8
}

// 
// Start address: 0x1d11f0
void sh2gfw_ThrSyncKick_spkDmaKick()
{
	void* pTop;
	int i;
	// Line 100, Address: 0x1d11f0, Func Offset: 0
	// Line 102, Address: 0x1d1200, Func Offset: 0x10
	// Line 107, Address: 0x1d1204, Func Offset: 0x14
	// Line 108, Address: 0x1d1210, Func Offset: 0x20
	// Line 109, Address: 0x1d122c, Func Offset: 0x3c
	// Line 111, Address: 0x1d1244, Func Offset: 0x54
	// Line 112, Address: 0x1d1258, Func Offset: 0x68
	// Line 113, Address: 0x1d1264, Func Offset: 0x74
	// Line 116, Address: 0x1d1278, Func Offset: 0x88
	// Line 119, Address: 0x1d1284, Func Offset: 0x94
	// Line 120, Address: 0x1d1290, Func Offset: 0xa0
	// Line 121, Address: 0x1d12ac, Func Offset: 0xbc
	// Line 122, Address: 0x1d12c4, Func Offset: 0xd4
	// Line 124, Address: 0x1d12d8, Func Offset: 0xe8
	// Func End, Address: 0x1d12f0, Func Offset: 0x100
}

