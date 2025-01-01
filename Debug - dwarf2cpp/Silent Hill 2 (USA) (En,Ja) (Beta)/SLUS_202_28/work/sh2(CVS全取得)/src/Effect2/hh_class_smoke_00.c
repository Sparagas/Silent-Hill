typedef struct Smoke_Initialize_Parameter;
typedef struct HH_Object_Smoke_00;
typedef struct ImpactQueue_Element;
typedef struct _anon0;
typedef struct HH_Object_Smoke_00_Particle;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4][4];
typedef float type_1[4][4];
typedef float type_2[4][4];
typedef Smoke_Initialize_Parameter type_3[4];
typedef float type_4[4][4];
typedef float type_5[4][4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef float type_8[4][4];
typedef float type_9[4][19];
typedef float type_10[4][4];
typedef float type_11[4][2];
typedef float type_12[4][4];
typedef float type_13[2];
typedef float type_14[4][4];
typedef int type_15[2];
typedef int type_16[4];
typedef unsigned int type_17[3];
typedef unsigned int type_18[1];
typedef float type_19[4];
typedef float type_20[4][4];
typedef float type_21[4][4];
typedef float type_22[4][4];
typedef float type_23[4][4];
typedef float type_24[4][4];
typedef float type_25[4][4];
typedef HH_Object_Smoke_00_Particle type_26[20];
typedef float type_27[4][4];
typedef float type_28[4][4];
typedef float type_29[4][4];
typedef float type_30[4][4];
typedef float type_31[4][4];

struct Smoke_Initialize_Parameter
{
	unsigned int ParticleDraw_Num;
	unsigned int Flag[3];
	float Convergence_Coff;
	float Convergence_Coff_Sub;
	float Gravity_Suppress_Coff;
	float Base_Alpha;
	float Base_Scale;
	float Base_Time;
	float Rand_Time_Width;
	int Verocity_0[4];
	int Length_Max[4];
	float RGBA[4];
};

struct HH_Object_Smoke_00
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	float Timer;
	unsigned int Particle_DrawNum;
	HH_Object_Smoke_00_Particle Particle[20];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
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

struct HH_Object_Smoke_00_Particle
{
	float Location[4];
	float Verocity_0[4];
	float RGBA[4];
	float Time;
	float Scale;
	float Convergence_Coff;
	float Life_Time;
	unsigned int Texture_Kind;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

float _square_00_vertex[4][4];
float _square_stq_00[4][4];
float _square_stq_01[4][4];
float _square_stq_02[4][4];
float _square_stq_03[4][4];
float _square_stq_10[4][4];
float _square_stq_11[4][4];
float _square_stq_12[4][4];
float _square_stq_13[4][4];
float _square_stq_20[4][4];
float _square_stq_21[4][4];
float _square_stq_22[4][4];
float _square_stq_23[4][4];
float _square_stq_30[4][4];
float _square_stq_31[4][4];
float _square_stq_32[4][4];
float _square_stq_33[4][4];
float _square_stq_90[4][4];
float _square_stq_91[4][4];
float _square_stq_92[4][4];
float _square_stq_list[4][19];
Smoke_Initialize_Parameter _flame_init_parm_table[4];

unsigned int Object_Initialize(HH_Object_Smoke_00* pThis, ImpactQueue_Element* pElement);
void Particle_Initialize(HH_Object_Smoke_00_Particle* pParticle, Smoke_Initialize_Parameter* pParameter);
void Particle_Motion(HH_Object_Smoke_00_Particle* pParticle, Smoke_Initialize_Parameter* pParameter, float* Position);
void Particle_Calculator(HH_Object_Smoke_00_Particle* pParticle, float* Position);
unsigned int Object_Draw(HH_Object_Smoke_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Smoke_00();
unsigned int HH_Class_Suffix_Smoke_00();
unsigned int HH_Class_Smoke_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2824f0
unsigned int Object_Initialize(HH_Object_Smoke_00* pThis, ImpactQueue_Element* pElement)
{
	float ratio;
	HH_Object_Smoke_00_Particle* pParticle;
	Smoke_Initialize_Parameter* pParameter;
	unsigned int i;
	unsigned int result;
	// Line 404, Address: 0x2824f0, Func Offset: 0
	// Line 410, Address: 0x28250c, Func Offset: 0x1c
	// Line 413, Address: 0x282510, Func Offset: 0x20
	// Line 417, Address: 0x282530, Func Offset: 0x40
	// Line 419, Address: 0x28254c, Func Offset: 0x5c
	// Line 420, Address: 0x282558, Func Offset: 0x68
	// Line 422, Address: 0x28256c, Func Offset: 0x7c
	// Line 427, Address: 0x28257c, Func Offset: 0x8c
	// Line 429, Address: 0x2825b8, Func Offset: 0xc8
	// Line 431, Address: 0x2825c4, Func Offset: 0xd4
	// Line 434, Address: 0x2825d8, Func Offset: 0xe8
	// Line 437, Address: 0x2825e0, Func Offset: 0xf0
	// Line 438, Address: 0x2825e4, Func Offset: 0xf4
	// Func End, Address: 0x282604, Func Offset: 0x114
}

// 
// Start address: 0x282610
void Particle_Initialize(HH_Object_Smoke_00_Particle* pParticle, Smoke_Initialize_Parameter* pParameter)
{
	float length_max_pow_f;
	float ratio;
	// Line 449, Address: 0x282610, Func Offset: 0
	// Line 451, Address: 0x282630, Func Offset: 0x20
	// Line 453, Address: 0x282658, Func Offset: 0x48
	// Line 454, Address: 0x282664, Func Offset: 0x54
	// Line 456, Address: 0x282670, Func Offset: 0x60
	// Line 457, Address: 0x28267c, Func Offset: 0x6c
	// Line 459, Address: 0x282684, Func Offset: 0x74
	// Line 460, Address: 0x282690, Func Offset: 0x80
	// Line 462, Address: 0x28269c, Func Offset: 0x8c
	// Line 465, Address: 0x2826a0, Func Offset: 0x90
	// Line 466, Address: 0x2826d4, Func Offset: 0xc4
	// Line 467, Address: 0x282708, Func Offset: 0xf8
	// Line 469, Address: 0x28273c, Func Offset: 0x12c
	// Line 470, Address: 0x282770, Func Offset: 0x160
	// Line 471, Address: 0x2827a4, Func Offset: 0x194
	// Line 472, Address: 0x2827d8, Func Offset: 0x1c8
	// Line 473, Address: 0x2827f0, Func Offset: 0x1e0
	// Line 475, Address: 0x282800, Func Offset: 0x1f0
	// Line 476, Address: 0x282804, Func Offset: 0x1f4
	// Line 477, Address: 0x28280c, Func Offset: 0x1fc
	// Line 478, Address: 0x282814, Func Offset: 0x204
	// Line 480, Address: 0x282834, Func Offset: 0x224
	// Line 482, Address: 0x282850, Func Offset: 0x240
	// Line 483, Address: 0x28286c, Func Offset: 0x25c
	// Line 485, Address: 0x282870, Func Offset: 0x260
	// Line 486, Address: 0x282894, Func Offset: 0x284
	// Func End, Address: 0x2828b4, Func Offset: 0x2a4
}

// 
// Start address: 0x2828c0
void Particle_Motion(HH_Object_Smoke_00_Particle* pParticle, Smoke_Initialize_Parameter* pParameter, float* Position)
{
	float ratio;
	// Line 499, Address: 0x2828c0, Func Offset: 0
	// Line 500, Address: 0x2828e4, Func Offset: 0x24
	// Line 501, Address: 0x2828fc, Func Offset: 0x3c
	// Line 504, Address: 0x282904, Func Offset: 0x44
	// Line 507, Address: 0x282914, Func Offset: 0x54
	// Line 508, Address: 0x282924, Func Offset: 0x64
	// Line 509, Address: 0x282940, Func Offset: 0x80
	// Line 511, Address: 0x28294c, Func Offset: 0x8c
	// Line 512, Address: 0x282968, Func Offset: 0xa8
	// Line 513, Address: 0x282974, Func Offset: 0xb4
	// Line 515, Address: 0x282980, Func Offset: 0xc0
	// Func End, Address: 0x2829a0, Func Offset: 0xe0
}

// 
// Start address: 0x2829a0
void Particle_Calculator(HH_Object_Smoke_00_Particle* pParticle, float* Position)
{
	float time_mat[4][4];
	// Line 527, Address: 0x2829a0, Func Offset: 0
	// Line 531, Address: 0x2829b8, Func Offset: 0x18
	// Line 532, Address: 0x2829c4, Func Offset: 0x24
	// Line 534, Address: 0x2829d8, Func Offset: 0x38
	// Line 535, Address: 0x2829e0, Func Offset: 0x40
	// Line 536, Address: 0x2829ec, Func Offset: 0x4c
	// Line 537, Address: 0x2829f0, Func Offset: 0x50
	// Line 538, Address: 0x282a04, Func Offset: 0x64
	// Func End, Address: 0x282a1c, Func Offset: 0x7c
}

// 
// Start address: 0x282a20
unsigned int Object_Draw(HH_Object_Smoke_00* pThis, ImpactQueue_Element* pElement)
{
	HH_Object_Smoke_00_Particle* pParticle;
	unsigned int i;
	float stq_dummy[4];
	int position[4];
	float pStq[4];
	int rgba[4];
	int xyzf[4];
	float _clip_mat[4][4];
	float clip_mat[4][4];
	float _lsm[4][4];
	float lsm[4][4];
	float lwm[4][4];
	float pVertex[4];
	_anon0* pPk;
	Smoke_Initialize_Parameter* pParameter;
	unsigned int result;
	// Line 552, Address: 0x282a20, Func Offset: 0
	// Line 554, Address: 0x282a50, Func Offset: 0x30
	// Line 555, Address: 0x282a6c, Func Offset: 0x4c
	// Line 556, Address: 0x282a78, Func Offset: 0x58
	// Line 569, Address: 0x282a80, Func Offset: 0x60
	// Line 572, Address: 0x282a8c, Func Offset: 0x6c
	// Line 574, Address: 0x282a98, Func Offset: 0x78
	// Line 576, Address: 0x282aa0, Func Offset: 0x80
	// Line 577, Address: 0x282aac, Func Offset: 0x8c
	// Line 580, Address: 0x282ac0, Func Offset: 0xa0
	// Line 583, Address: 0x282ad4, Func Offset: 0xb4
	// Line 586, Address: 0x282ae0, Func Offset: 0xc0
	// Line 587, Address: 0x282af8, Func Offset: 0xd8
	// Line 588, Address: 0x282b0c, Func Offset: 0xec
	// Line 591, Address: 0x282b1c, Func Offset: 0xfc
	// Line 592, Address: 0x282b30, Func Offset: 0x110
	// Line 593, Address: 0x282b44, Func Offset: 0x124
	// Line 594, Address: 0x282b58, Func Offset: 0x138
	// Line 597, Address: 0x282b6c, Func Offset: 0x14c
	// Line 600, Address: 0x282b80, Func Offset: 0x160
	// Line 601, Address: 0x282b98, Func Offset: 0x178
	// Line 603, Address: 0x282ba8, Func Offset: 0x188
	// Line 604, Address: 0x282bb0, Func Offset: 0x190
	// Line 606, Address: 0x282bc0, Func Offset: 0x1a0
	// Line 607, Address: 0x282be0, Func Offset: 0x1c0
	// Line 608, Address: 0x282bec, Func Offset: 0x1cc
	// Line 609, Address: 0x282bfc, Func Offset: 0x1dc
	// Line 610, Address: 0x282c18, Func Offset: 0x1f8
	// Line 611, Address: 0x282c24, Func Offset: 0x204
	// Line 612, Address: 0x282c34, Func Offset: 0x214
	// Line 613, Address: 0x282c40, Func Offset: 0x220
	// Line 614, Address: 0x282c4c, Func Offset: 0x22c
	// Line 615, Address: 0x282c60, Func Offset: 0x240
	// Line 617, Address: 0x282c68, Func Offset: 0x248
	// Line 618, Address: 0x282c6c, Func Offset: 0x24c
	// Func End, Address: 0x282c9c, Func Offset: 0x27c
}

// 
// Start address: 0x282ca0
unsigned int HH_Class_Prefix_Smoke_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 638, Address: 0x282ca0, Func Offset: 0
	// Line 640, Address: 0x282cac, Func Offset: 0xc
	// Line 643, Address: 0x282cb8, Func Offset: 0x18
	// Line 645, Address: 0x282cc0, Func Offset: 0x20
	// Line 646, Address: 0x282cd0, Func Offset: 0x30
	// Line 648, Address: 0x282ce4, Func Offset: 0x44
	// Line 649, Address: 0x282d08, Func Offset: 0x68
	// Line 679, Address: 0x282d24, Func Offset: 0x84
	// Line 680, Address: 0x282d30, Func Offset: 0x90
	// Line 682, Address: 0x282d38, Func Offset: 0x98
	// Line 683, Address: 0x282d3c, Func Offset: 0x9c
	// Func End, Address: 0x282d50, Func Offset: 0xb0
}

// 
// Start address: 0x282d50
unsigned int HH_Class_Suffix_Smoke_00()
{
	unsigned int result;
	// Line 696, Address: 0x282d50, Func Offset: 0
	// Line 699, Address: 0x282d58, Func Offset: 0x8
	// Line 701, Address: 0x282d60, Func Offset: 0x10
	// Line 702, Address: 0x282d64, Func Offset: 0x14
	// Func End, Address: 0x282d74, Func Offset: 0x24
}

// 
// Start address: 0x282d80
unsigned int HH_Class_Smoke_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float clip_mat[4][4];
	HH_Object_Smoke_00* pThis;
	unsigned int result;
	// Line 715, Address: 0x282d80, Func Offset: 0
	// Line 723, Address: 0x282d98, Func Offset: 0x18
	// Line 724, Address: 0x282d9c, Func Offset: 0x1c
	// Line 727, Address: 0x282da0, Func Offset: 0x20
	// Line 730, Address: 0x282dd4, Func Offset: 0x54
	// Line 733, Address: 0x282ddc, Func Offset: 0x5c
	// Line 735, Address: 0x282df8, Func Offset: 0x78
	// Line 736, Address: 0x282e00, Func Offset: 0x80
	// Line 739, Address: 0x282e08, Func Offset: 0x88
	// Line 741, Address: 0x282e10, Func Offset: 0x90
	// Line 744, Address: 0x282e18, Func Offset: 0x98
	// Line 745, Address: 0x282e30, Func Offset: 0xb0
	// Line 748, Address: 0x282e34, Func Offset: 0xb4
	// Line 750, Address: 0x282e40, Func Offset: 0xc0
	// Line 752, Address: 0x282e5c, Func Offset: 0xdc
	// Line 755, Address: 0x282e6c, Func Offset: 0xec
	// Line 756, Address: 0x282e88, Func Offset: 0x108
	// Line 759, Address: 0x282e90, Func Offset: 0x110
	// Line 760, Address: 0x282e94, Func Offset: 0x114
	// Line 763, Address: 0x282e98, Func Offset: 0x118
	// Line 764, Address: 0x282e9c, Func Offset: 0x11c
	// Func End, Address: 0x282eb8, Func Offset: 0x138
}

