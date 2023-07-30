

typedef char type_0[96];
typedef int type_1[6];
typedef int type_2[6];
typedef char type_3[128];
typedef int type_4[16];

int DBG_Perf_index;
int Index_VertNum;
int Index_SemiTrans;
int Vertex_Num[6];
int SemiTransTex_VertNum[6];
int DBG_Perf[16];

void sh2gfw_Init_AllVertCounter();
void sh2gfw_Incliment_VertNumIndices();
void sh2gfw_Add_SemiTransVertNum(int num);
void sh2gfw_Add_VertexNum(int num);
void sh2gfw_Disp_SemiTransVertNum();
void sh2gfw_init_Perf();
int sh2gfw_Store_Perf2(int count, int md);
void sh2gfw_Disp_Perf();
void sh2gfw_Disp_Perf2();

// 
// Start address: 0x1463e0
void sh2gfw_Init_AllVertCounter()
{
	int i;
	// Line 38, Address: 0x1463e0, Func Offset: 0
	// Line 39, Address: 0x1463e8, Func Offset: 0x8
	// Line 40, Address: 0x1463f4, Func Offset: 0x14
	// Line 41, Address: 0x146408, Func Offset: 0x28
	// Line 42, Address: 0x14641c, Func Offset: 0x3c
	// Line 43, Address: 0x14642c, Func Offset: 0x4c
	// Line 44, Address: 0x146434, Func Offset: 0x54
	// Line 45, Address: 0x14643c, Func Offset: 0x5c
	// Func End, Address: 0x14644c, Func Offset: 0x6c
}

// 
// Start address: 0x146450
void sh2gfw_Incliment_VertNumIndices()
{
	// Line 48, Address: 0x146450, Func Offset: 0
	// Line 49, Address: 0x146464, Func Offset: 0x14
	// Line 50, Address: 0x146478, Func Offset: 0x28
	// Func End, Address: 0x146480, Func Offset: 0x30
}

// 
// Start address: 0x146480
void sh2gfw_Add_SemiTransVertNum(int num)
{
	// Line 52, Address: 0x146480, Func Offset: 0
	// Line 53, Address: 0x146488, Func Offset: 0x8
	// Line 54, Address: 0x1464b0, Func Offset: 0x30
	// Func End, Address: 0x1464bc, Func Offset: 0x3c
}

// 
// Start address: 0x1464c0
void sh2gfw_Add_VertexNum(int num)
{
	// Line 56, Address: 0x1464c0, Func Offset: 0
	// Line 57, Address: 0x1464c8, Func Offset: 0x8
	// Line 58, Address: 0x1464f0, Func Offset: 0x30
	// Func End, Address: 0x1464fc, Func Offset: 0x3c
}

// 
// Start address: 0x146500
void sh2gfw_Disp_SemiTransVertNum()
{
	char buf[96];
	// Line 60, Address: 0x146500, Func Offset: 0
	// Line 63, Address: 0x146508, Func Offset: 0x8
	// Line 70, Address: 0x14653c, Func Offset: 0x3c
	// Line 71, Address: 0x146550, Func Offset: 0x50
	// Line 72, Address: 0x146578, Func Offset: 0x78
	// Line 75, Address: 0x14658c, Func Offset: 0x8c
	// Func End, Address: 0x14659c, Func Offset: 0x9c
}

// 
// Start address: 0x1465a0
void sh2gfw_init_Perf()
{
	// Line 80, Address: 0x1465a0, Func Offset: 0
	// Line 81, Address: 0x1465a8, Func Offset: 0x8
	// Func End, Address: 0x1465b0, Func Offset: 0x10
}

// 
// Start address: 0x1465b0
int sh2gfw_Store_Perf2(int count, int md)
{
	// Line 96, Address: 0x1465b0, Func Offset: 0
	// Line 97, Address: 0x1465bc, Func Offset: 0xc
	// Line 98, Address: 0x1465d8, Func Offset: 0x28
	// Func End, Address: 0x1465e4, Func Offset: 0x34
}

// 
// Start address: 0x1465f0
void sh2gfw_Disp_Perf()
{
	// Line 108, Address: 0x1465f0, Func Offset: 0
	// Line 139, Address: 0x1465f8, Func Offset: 0x8
	// Line 142, Address: 0x146600, Func Offset: 0x10
	// Func End, Address: 0x146610, Func Offset: 0x20
}

// 
// Start address: 0x146610
void sh2gfw_Disp_Perf2()
{
	int iy;
	char buf[128];
	// Line 147, Address: 0x146610, Func Offset: 0
	// Line 149, Address: 0x14661c, Func Offset: 0xc
	// Line 151, Address: 0x146620, Func Offset: 0x10
	// Line 154, Address: 0x146648, Func Offset: 0x38
	// Line 160, Address: 0x14667c, Func Offset: 0x6c
	// Line 162, Address: 0x146690, Func Offset: 0x80
	// Line 168, Address: 0x1466c4, Func Offset: 0xb4
	// Line 170, Address: 0x1466d8, Func Offset: 0xc8
	// Line 176, Address: 0x14670c, Func Offset: 0xfc
	// Line 179, Address: 0x146720, Func Offset: 0x110
	// Line 180, Address: 0x146728, Func Offset: 0x118
	// Func End, Address: 0x14673c, Func Offset: 0x12c
}

