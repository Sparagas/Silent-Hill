typedef struct ImpactQueue_Element;
typedef struct TimeTable_Infomeation;
typedef struct HH_Object_Raise_Dust_Phenomenon_00;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[3];
typedef TimeTable_Infomeation type_3[5];
typedef float type_4[4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_7[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct TimeTable_Infomeation
{
	float Time[3];
};

struct HH_Object_Raise_Dust_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Alpha;
	float Timer;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

float _elastic_vec[4];
TimeTable_Infomeation _Time_Table[5];

unsigned int Object_Initialize(HH_Object_Raise_Dust_Phenomenon_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Raise_Dust_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x24a460
unsigned int Object_Initialize(HH_Object_Raise_Dust_Phenomenon_00* pThis, ImpactQueue_Element* pElement)
{
	float* src_direction;
	float alpha;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 129, Address: 0x24a460, Func Offset: 0
	// Line 130, Address: 0x24a478, Func Offset: 0x18
	// Line 134, Address: 0x24a47c, Func Offset: 0x1c
	// Line 141, Address: 0x24a488, Func Offset: 0x28
	// Line 144, Address: 0x24a490, Func Offset: 0x30
	// Line 145, Address: 0x24a4a4, Func Offset: 0x44
	// Line 146, Address: 0x24a4b4, Func Offset: 0x54
	// Line 147, Address: 0x24a4bc, Func Offset: 0x5c
	// Line 149, Address: 0x24a4e0, Func Offset: 0x80
	// Line 150, Address: 0x24a4fc, Func Offset: 0x9c
	// Line 153, Address: 0x24a508, Func Offset: 0xa8
	// Line 156, Address: 0x24a520, Func Offset: 0xc0
	// Line 157, Address: 0x24a524, Func Offset: 0xc4
	// Func End, Address: 0x24a53c, Func Offset: 0xdc
}

// 
// Start address: 0x24a540
unsigned int HH_Class_Raise_Dust_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float vec[4];
	float vec[4];
	ImpactQueue_Element descriptor;
	float lwm[4][4];
	float alpha;
	float radius_rand;
	float alpha_randam_range;
	float radian;
	float p_volume;
	float* src_location;
	float* src_direction;
	unsigned int i;
	HH_Object_Raise_Dust_Phenomenon_00* pThis;
	unsigned int result;
	// Line 176, Address: 0x24a540, Func Offset: 0
	// Line 183, Address: 0x24a564, Func Offset: 0x24
	// Line 184, Address: 0x24a568, Func Offset: 0x28
	// Line 186, Address: 0x24a56c, Func Offset: 0x2c
	// Line 188, Address: 0x24a598, Func Offset: 0x58
	// Line 189, Address: 0x24a5a8, Func Offset: 0x68
	// Line 190, Address: 0x24a5b0, Func Offset: 0x70
	// Line 196, Address: 0x24a5b8, Func Offset: 0x78
	// Line 197, Address: 0x24a5c0, Func Offset: 0x80
	// Line 198, Address: 0x24a5c8, Func Offset: 0x88
	// Line 200, Address: 0x24a5dc, Func Offset: 0x9c
	// Line 203, Address: 0x24a5ec, Func Offset: 0xac
	// Line 204, Address: 0x24a5f8, Func Offset: 0xb8
	// Line 205, Address: 0x24a730, Func Offset: 0x1f0
	// Line 206, Address: 0x24a784, Func Offset: 0x244
	// Line 207, Address: 0x24a7c0, Func Offset: 0x280
	// Line 214, Address: 0x24a8c8, Func Offset: 0x388
	// Line 216, Address: 0x24a8dc, Func Offset: 0x39c
	// Line 217, Address: 0x24a8e4, Func Offset: 0x3a4
	// Line 218, Address: 0x24a8f0, Func Offset: 0x3b0
	// Line 219, Address: 0x24a904, Func Offset: 0x3c4
	// Line 220, Address: 0x24a91c, Func Offset: 0x3dc
	// Line 223, Address: 0x24a930, Func Offset: 0x3f0
	// Line 225, Address: 0x24a944, Func Offset: 0x404
	// Line 226, Address: 0x24a94c, Func Offset: 0x40c
	// Line 227, Address: 0x24aa48, Func Offset: 0x508
	// Line 228, Address: 0x24aa54, Func Offset: 0x514
	// Line 229, Address: 0x24aa68, Func Offset: 0x528
	// Line 230, Address: 0x24aa7c, Func Offset: 0x53c
	// Line 232, Address: 0x24aa90, Func Offset: 0x550
	// Line 233, Address: 0x24aa94, Func Offset: 0x554
	// Line 234, Address: 0x24aa9c, Func Offset: 0x55c
	// Line 235, Address: 0x24aaa8, Func Offset: 0x568
	// Line 253, Address: 0x24aabc, Func Offset: 0x57c
	// Line 254, Address: 0x24aac4, Func Offset: 0x584
	// Line 257, Address: 0x24aacc, Func Offset: 0x58c
	// Line 258, Address: 0x24aad0, Func Offset: 0x590
	// Line 261, Address: 0x24aad4, Func Offset: 0x594
	// Line 262, Address: 0x24aaf0, Func Offset: 0x5b0
	// Line 263, Address: 0x24aaf4, Func Offset: 0x5b4
	// Func End, Address: 0x24ab18, Func Offset: 0x5d8
}

