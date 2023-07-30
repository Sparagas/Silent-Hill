typedef struct ImpactQueue_Element;
typedef struct _anon0;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef int type_2[4];
typedef float type_3[4];
typedef float type_4[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};


void Prefix_Operation();
void Suffix_Operation();
void Debug_Functions();
void HH_Class_Object_Initialize();
void HH_Class_Object_Execute();
void HH_Effect_Object_Blood_Pool_Impact_Post(float* Location);
void HH_Effect_Object_Blood_Splash_Impact_Post(float* Location, float* Direction, unsigned int Scp_Address, unsigned int Impact_Kind);
void HH_Effect_Object_Ground_Impact_Post(float* Toe, float* Heel, unsigned int Foot_Kind, unsigned int Character_ID);

// 
// Start address: 0x249cb0
void Prefix_Operation()
{
	_anon0* pPk;
	// Line 70, Address: 0x249cb0, Func Offset: 0
	// Line 78, Address: 0x249cbc, Func Offset: 0xc
	// Line 80, Address: 0x249cc8, Func Offset: 0x18
	// Line 81, Address: 0x249cd0, Func Offset: 0x20
	// Line 82, Address: 0x249cf4, Func Offset: 0x44
	// Line 94, Address: 0x249d0c, Func Offset: 0x5c
	// Line 96, Address: 0x249d20, Func Offset: 0x70
	// Func End, Address: 0x249d34, Func Offset: 0x84
}

// 
// Start address: 0x249d40
void Suffix_Operation()
{
	_anon0* pPk;
	// Line 101, Address: 0x249d40, Func Offset: 0
	// Line 104, Address: 0x249d4c, Func Offset: 0xc
	// Line 106, Address: 0x249d58, Func Offset: 0x18
	// Line 107, Address: 0x249d70, Func Offset: 0x30
	// Line 109, Address: 0x249d78, Func Offset: 0x38
	// Func End, Address: 0x249d8c, Func Offset: 0x4c
}

// 
// Start address: 0x249d90
void Debug_Functions()
{
	// Line 122, Address: 0x249d90, Func Offset: 0
	// Func End, Address: 0x249d98, Func Offset: 0x8
}

// 
// Start address: 0x249da0
void HH_Class_Object_Initialize()
{
	// Line 201, Address: 0x249da0, Func Offset: 0
	// Line 202, Address: 0x249da8, Func Offset: 0x8
	// Line 204, Address: 0x249db0, Func Offset: 0x10
	// Line 205, Address: 0x249db8, Func Offset: 0x18
	// Func End, Address: 0x249dc8, Func Offset: 0x28
}

// 
// Start address: 0x249dd0
void HH_Class_Object_Execute()
{
	// Line 213, Address: 0x249dd0, Func Offset: 0
	// Line 215, Address: 0x249dd8, Func Offset: 0x8
	// Line 218, Address: 0x249de0, Func Offset: 0x10
	// Line 222, Address: 0x249de8, Func Offset: 0x18
	// Line 225, Address: 0x249df0, Func Offset: 0x20
	// Line 228, Address: 0x249df8, Func Offset: 0x28
	// Line 231, Address: 0x249e00, Func Offset: 0x30
	// Line 234, Address: 0x249e08, Func Offset: 0x38
	// Line 236, Address: 0x249e10, Func Offset: 0x40
	// Line 240, Address: 0x249e18, Func Offset: 0x48
	// Line 242, Address: 0x249e20, Func Offset: 0x50
	// Line 243, Address: 0x249e28, Func Offset: 0x58
	// Func End, Address: 0x249e38, Func Offset: 0x68
}

// 
// Start address: 0x249e40
void HH_Effect_Object_Blood_Pool_Impact_Post(float* Location)
{
	ImpactQueue_Element descriptor;
	// Line 252, Address: 0x249e40, Func Offset: 0
	// Line 256, Address: 0x249e4c, Func Offset: 0xc
	// Line 257, Address: 0x249e50, Func Offset: 0x10
	// Line 258, Address: 0x249e54, Func Offset: 0x14
	// Line 260, Address: 0x249e64, Func Offset: 0x24
	// Line 262, Address: 0x249e7c, Func Offset: 0x3c
	// Func End, Address: 0x249e8c, Func Offset: 0x4c
}

// 
// Start address: 0x249e90
void HH_Effect_Object_Blood_Splash_Impact_Post(float* Location, float* Direction, unsigned int Scp_Address, unsigned int Impact_Kind)
{
	float _Direction[4];
	float _Direction[4];
	ImpactQueue_Element descriptor;
	// Line 265, Address: 0x249e90, Func Offset: 0
	// Line 269, Address: 0x249ea8, Func Offset: 0x18
	// Line 271, Address: 0x249eb0, Func Offset: 0x20
	// Line 272, Address: 0x249eb4, Func Offset: 0x24
	// Line 273, Address: 0x249ec4, Func Offset: 0x34
	// Line 274, Address: 0x249ecc, Func Offset: 0x3c
	// Line 278, Address: 0x249ed8, Func Offset: 0x48
	// Line 279, Address: 0x249ef0, Func Offset: 0x60
	// Line 280, Address: 0x249f04, Func Offset: 0x74
	// Line 281, Address: 0x249f18, Func Offset: 0x88
	// Line 282, Address: 0x249f28, Func Offset: 0x98
	// Line 286, Address: 0x249f30, Func Offset: 0xa0
	// Line 291, Address: 0x249f40, Func Offset: 0xb0
	// Line 297, Address: 0x249f58, Func Offset: 0xc8
	// Line 299, Address: 0x249f68, Func Offset: 0xd8
	// Line 301, Address: 0x249f80, Func Offset: 0xf0
	// Func End, Address: 0x249f90, Func Offset: 0x100
}

// 
// Start address: 0x249f90
void HH_Effect_Object_Ground_Impact_Post(float* Toe, float* Heel, unsigned int Foot_Kind, unsigned int Character_ID)
{
	ImpactQueue_Element descriptor;
	// Line 317, Address: 0x249f90, Func Offset: 0
	// Line 321, Address: 0x249fa8, Func Offset: 0x18
	// Line 322, Address: 0x249fb0, Func Offset: 0x20
	// Line 323, Address: 0x249fb4, Func Offset: 0x24
	// Line 324, Address: 0x249fc4, Func Offset: 0x34
	// Line 326, Address: 0x249fd4, Func Offset: 0x44
	// Line 327, Address: 0x249fe0, Func Offset: 0x50
	// Line 328, Address: 0x249fec, Func Offset: 0x5c
	// Line 329, Address: 0x249ff4, Func Offset: 0x64
	// Line 330, Address: 0x249ffc, Func Offset: 0x6c
	// Line 332, Address: 0x24a014, Func Offset: 0x84
	// Func End, Address: 0x24a024, Func Offset: 0x94
}

