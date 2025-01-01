typedef struct HH_Object_Flame_00;
typedef struct ImpactQueue_Element;
typedef struct HH_Object_Flame_00_Particle;
typedef struct Flame_Initialize_Parameter;
typedef struct Object_DataBlock_Header;
typedef struct _anon0;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4][4];
typedef float type_1[4][4];
typedef float type_2[4][4];
typedef float type_3[4][4];
typedef float type_4[4][4];
typedef float type_5[4][4];
typedef float type_6[4][4];
typedef float type_7[4][4];
typedef float type_8[4][4];
typedef float type_9[4][4];
typedef float type_10[4][4];
typedef float type_11[4][4];
typedef float type_12[4][4];
typedef float type_13[4][4];
typedef float type_14[4][4];
typedef Flame_Initialize_Parameter type_15[8];
typedef float type_16[4][4];
typedef float type_17[4][4];
typedef float type_18[4][4];
typedef float type_19[4][4];
typedef float type_20[4][4];
typedef float type_21[4][4];
typedef float type_22[4][4];
typedef float type_23[4][4];
typedef float type_24[4][4];
typedef float type_25[4][4];
typedef float type_26[4][2];
typedef float type_27[4][4];
typedef float type_28[4][4];
typedef float type_29[4];
typedef float type_30[2];
typedef float type_31[4][4];
typedef float type_32[4][4];
typedef int type_33[2];
typedef float type_34[4][4];
typedef int type_35[4];
typedef float type_36[4][4];
typedef float type_37[4][4];
typedef float type_38[4][4];
typedef float type_39[4][4];
typedef unsigned int type_40[1];
typedef float type_41[4];
typedef float type_42[4][4];
typedef float type_43[4][4];
typedef float type_44[4][4];
typedef float type_45[4][4];
typedef float type_46[4][4];
typedef float type_47[4][4];
typedef float type_48[4][4];
typedef float type_49[4][4];
typedef unsigned int type_50[3];
typedef float type_51[4][4];
typedef float type_52[4][4];
typedef float type_53[4][4];
typedef float type_54[4][4];
typedef float type_55[4][4];
typedef float type_56[4][64];
typedef float type_57[4][4];
typedef float type_58[4][4];
typedef float type_59[4][4];
typedef float type_60[4][4];
typedef float type_61[4][4];
typedef float type_62[4][4];
typedef float type_63[4][4];
typedef float type_64[4][4];
typedef HH_Object_Flame_00_Particle type_65[100];
typedef float type_66[4][4];
typedef float type_67[4][4];
typedef float type_68[4][4];
typedef float type_69[4][4];
typedef float type_70[4][4];
typedef float type_71[4][4];
typedef float type_72[4][4];
typedef float type_73[4][4];
typedef float type_74[4][4];
typedef float type_75[4][4];
typedef float type_76[4][4];

struct HH_Object_Flame_00
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	float Timer;
	unsigned int Particle_DrawNum;
	float Wind[4];
	HH_Object_Flame_00_Particle Particle[100];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct HH_Object_Flame_00_Particle
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

struct Flame_Initialize_Parameter
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

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
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
float _square_stq_rev_00[4][4];
float _square_stq_rev_01[4][4];
float _square_stq_rev_02[4][4];
float _square_stq_rev_03[4][4];
float _square_stq_rev_10[4][4];
float _square_stq_rev_11[4][4];
float _square_stq_rev_12[4][4];
float _square_stq_rev_13[4][4];
float _square_stq_rev_20[4][4];
float _square_stq_rev_21[4][4];
float _square_stq_rev_22[4][4];
float _square_stq_rev_23[4][4];
float _square_stq_rev_30[4][4];
float _square_stq_rev_31[4][4];
float _square_stq_rev_32[4][4];
float _square_stq_rev_33[4][4];
float _square_stq_lr_l_00[4][4];
float _square_stq_lr_l_01[4][4];
float _square_stq_lr_l_02[4][4];
float _square_stq_lr_l_03[4][4];
float _square_stq_lr_l_10[4][4];
float _square_stq_lr_l_11[4][4];
float _square_stq_lr_l_12[4][4];
float _square_stq_lr_l_13[4][4];
float _square_stq_lr_l_20[4][4];
float _square_stq_lr_l_21[4][4];
float _square_stq_lr_l_22[4][4];
float _square_stq_lr_l_23[4][4];
float _square_stq_lr_l_30[4][4];
float _square_stq_lr_l_31[4][4];
float _square_stq_lr_l_32[4][4];
float _square_stq_lr_l_33[4][4];
float _square_stq_lr_r_00[4][4];
float _square_stq_lr_r_01[4][4];
float _square_stq_lr_r_02[4][4];
float _square_stq_lr_r_03[4][4];
float _square_stq_lr_r_10[4][4];
float _square_stq_lr_r_11[4][4];
float _square_stq_lr_r_12[4][4];
float _square_stq_lr_r_13[4][4];
float _square_stq_lr_r_20[4][4];
float _square_stq_lr_r_21[4][4];
float _square_stq_lr_r_22[4][4];
float _square_stq_lr_r_23[4][4];
float _square_stq_lr_r_30[4][4];
float _square_stq_lr_r_31[4][4];
float _square_stq_lr_r_32[4][4];
float _square_stq_lr_r_33[4][4];
float _square_stq_list[4][64];
Flame_Initialize_Parameter _flame_init_parm_table[8];

unsigned int Object_Initialize(HH_Object_Flame_00* pThis, ImpactQueue_Element* pElement);
void Particle_Initialize(HH_Object_Flame_00_Particle* pParticle, Flame_Initialize_Parameter* pParameter);
void Particle_Motion(HH_Object_Flame_00_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position);
void Particle_Calculator(HH_Object_Flame_00_Particle* pParticle, float* Position);
unsigned int Object_Draw(HH_Object_Flame_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Flame_00();
unsigned int HH_Class_Suffix_Flame_00();
unsigned int HH_Class_Flame_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x280ff0
unsigned int Object_Initialize(HH_Object_Flame_00* pThis, ImpactQueue_Element* pElement)
{
	float ratio;
	HH_Object_Flame_00_Particle* pParticle;
	Flame_Initialize_Parameter* pParameter;
	unsigned int i;
	unsigned int result;
	// Line 799, Address: 0x280ff0, Func Offset: 0
	// Line 805, Address: 0x28100c, Func Offset: 0x1c
	// Line 811, Address: 0x281010, Func Offset: 0x20
	// Line 816, Address: 0x281030, Func Offset: 0x40
	// Line 818, Address: 0x28104c, Func Offset: 0x5c
	// Line 819, Address: 0x281058, Func Offset: 0x68
	// Line 821, Address: 0x28106c, Func Offset: 0x7c
	// Line 826, Address: 0x28107c, Func Offset: 0x8c
	// Line 828, Address: 0x2810b8, Func Offset: 0xc8
	// Line 830, Address: 0x2810c4, Func Offset: 0xd4
	// Line 833, Address: 0x2810d8, Func Offset: 0xe8
	// Line 836, Address: 0x2810e0, Func Offset: 0xf0
	// Line 837, Address: 0x2810e4, Func Offset: 0xf4
	// Func End, Address: 0x281104, Func Offset: 0x114
}

// 
// Start address: 0x281110
void Particle_Initialize(HH_Object_Flame_00_Particle* pParticle, Flame_Initialize_Parameter* pParameter)
{
	float length_max_pow_f;
	float ratio;
	// Line 848, Address: 0x281110, Func Offset: 0
	// Line 850, Address: 0x281130, Func Offset: 0x20
	// Line 852, Address: 0x281158, Func Offset: 0x48
	// Line 853, Address: 0x281164, Func Offset: 0x54
	// Line 855, Address: 0x281170, Func Offset: 0x60
	// Line 856, Address: 0x28117c, Func Offset: 0x6c
	// Line 858, Address: 0x281184, Func Offset: 0x74
	// Line 859, Address: 0x281190, Func Offset: 0x80
	// Line 861, Address: 0x28119c, Func Offset: 0x8c
	// Line 864, Address: 0x2811a0, Func Offset: 0x90
	// Line 865, Address: 0x2811d4, Func Offset: 0xc4
	// Line 866, Address: 0x281208, Func Offset: 0xf8
	// Line 868, Address: 0x28123c, Func Offset: 0x12c
	// Line 869, Address: 0x281270, Func Offset: 0x160
	// Line 870, Address: 0x2812a4, Func Offset: 0x194
	// Line 871, Address: 0x2812d8, Func Offset: 0x1c8
	// Line 872, Address: 0x2812f0, Func Offset: 0x1e0
	// Line 874, Address: 0x281300, Func Offset: 0x1f0
	// Line 875, Address: 0x281304, Func Offset: 0x1f4
	// Line 876, Address: 0x28130c, Func Offset: 0x1fc
	// Line 877, Address: 0x281314, Func Offset: 0x204
	// Line 879, Address: 0x281324, Func Offset: 0x214
	// Line 881, Address: 0x281340, Func Offset: 0x230
	// Line 882, Address: 0x28135c, Func Offset: 0x24c
	// Line 884, Address: 0x281360, Func Offset: 0x250
	// Line 885, Address: 0x281384, Func Offset: 0x274
	// Func End, Address: 0x2813a4, Func Offset: 0x294
}

// 
// Start address: 0x2813b0
void Particle_Motion(HH_Object_Flame_00_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position)
{
	float alpha_ratio;
	float scale_ratio;
	float life_time_rev;
	float pre_time;
	// Line 898, Address: 0x2813b0, Func Offset: 0
	// Line 899, Address: 0x2813d8, Func Offset: 0x28
	// Line 900, Address: 0x2813f0, Func Offset: 0x40
	// Line 907, Address: 0x2813f8, Func Offset: 0x48
	// Line 908, Address: 0x28140c, Func Offset: 0x5c
	// Line 909, Address: 0x28141c, Func Offset: 0x6c
	// Line 917, Address: 0x281428, Func Offset: 0x78
	// Line 920, Address: 0x281478, Func Offset: 0xc8
	// Line 921, Address: 0x281488, Func Offset: 0xd8
	// Line 922, Address: 0x2814a4, Func Offset: 0xf4
	// Line 924, Address: 0x2814b0, Func Offset: 0x100
	// Line 925, Address: 0x2814cc, Func Offset: 0x11c
	// Line 926, Address: 0x2814d8, Func Offset: 0x128
	// Line 928, Address: 0x2814e4, Func Offset: 0x134
	// Func End, Address: 0x281508, Func Offset: 0x158
}

// 
// Start address: 0x281510
void Particle_Calculator(HH_Object_Flame_00_Particle* pParticle, float* Position)
{
	float time_mat[4][4];
	// Line 939, Address: 0x281510, Func Offset: 0
	// Line 943, Address: 0x281528, Func Offset: 0x18
	// Line 944, Address: 0x281534, Func Offset: 0x24
	// Line 946, Address: 0x281548, Func Offset: 0x38
	// Line 947, Address: 0x281550, Func Offset: 0x40
	// Line 948, Address: 0x28155c, Func Offset: 0x4c
	// Line 949, Address: 0x281560, Func Offset: 0x50
	// Line 950, Address: 0x281574, Func Offset: 0x64
	// Func End, Address: 0x28158c, Func Offset: 0x7c
}

// 
// Start address: 0x281590
unsigned int Object_Draw(HH_Object_Flame_00* pThis, ImpactQueue_Element* pElement)
{
	HH_Object_Flame_00_Particle* pParticle;
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
	Flame_Initialize_Parameter* pParameter;
	unsigned int result;
	// Line 964, Address: 0x281590, Func Offset: 0
	// Line 966, Address: 0x2815c0, Func Offset: 0x30
	// Line 967, Address: 0x2815dc, Func Offset: 0x4c
	// Line 968, Address: 0x2815e8, Func Offset: 0x58
	// Line 981, Address: 0x2815f0, Func Offset: 0x60
	// Line 984, Address: 0x2815fc, Func Offset: 0x6c
	// Line 986, Address: 0x281608, Func Offset: 0x78
	// Line 988, Address: 0x281610, Func Offset: 0x80
	// Line 989, Address: 0x28161c, Func Offset: 0x8c
	// Line 992, Address: 0x281630, Func Offset: 0xa0
	// Line 997, Address: 0x281644, Func Offset: 0xb4
	// Line 1000, Address: 0x281650, Func Offset: 0xc0
	// Line 1001, Address: 0x281668, Func Offset: 0xd8
	// Line 1002, Address: 0x28167c, Func Offset: 0xec
	// Line 1005, Address: 0x28168c, Func Offset: 0xfc
	// Line 1006, Address: 0x2816a0, Func Offset: 0x110
	// Line 1007, Address: 0x2816b4, Func Offset: 0x124
	// Line 1008, Address: 0x2816c8, Func Offset: 0x138
	// Line 1011, Address: 0x2816dc, Func Offset: 0x14c
	// Line 1014, Address: 0x2816f0, Func Offset: 0x160
	// Line 1015, Address: 0x281708, Func Offset: 0x178
	// Line 1017, Address: 0x281718, Func Offset: 0x188
	// Line 1018, Address: 0x281720, Func Offset: 0x190
	// Line 1020, Address: 0x281730, Func Offset: 0x1a0
	// Line 1021, Address: 0x281750, Func Offset: 0x1c0
	// Line 1022, Address: 0x28175c, Func Offset: 0x1cc
	// Line 1023, Address: 0x28176c, Func Offset: 0x1dc
	// Line 1024, Address: 0x28177c, Func Offset: 0x1ec
	// Line 1025, Address: 0x281798, Func Offset: 0x208
	// Line 1026, Address: 0x2817a4, Func Offset: 0x214
	// Line 1027, Address: 0x2817b0, Func Offset: 0x220
	// Line 1028, Address: 0x2817c0, Func Offset: 0x230
	// Line 1029, Address: 0x2817cc, Func Offset: 0x23c
	// Line 1030, Address: 0x2817d8, Func Offset: 0x248
	// Line 1031, Address: 0x2817f0, Func Offset: 0x260
	// Line 1033, Address: 0x2817f8, Func Offset: 0x268
	// Line 1034, Address: 0x2817fc, Func Offset: 0x26c
	// Func End, Address: 0x28182c, Func Offset: 0x29c
}

// 
// Start address: 0x281830
unsigned int HH_Class_Prefix_Flame_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 1054, Address: 0x281830, Func Offset: 0
	// Line 1056, Address: 0x28183c, Func Offset: 0xc
	// Line 1059, Address: 0x281848, Func Offset: 0x18
	// Line 1061, Address: 0x281850, Func Offset: 0x20
	// Line 1062, Address: 0x281860, Func Offset: 0x30
	// Line 1064, Address: 0x281874, Func Offset: 0x44
	// Line 1065, Address: 0x281898, Func Offset: 0x68
	// Line 1095, Address: 0x2818b4, Func Offset: 0x84
	// Line 1096, Address: 0x2818c0, Func Offset: 0x90
	// Line 1098, Address: 0x2818c8, Func Offset: 0x98
	// Line 1099, Address: 0x2818cc, Func Offset: 0x9c
	// Func End, Address: 0x2818e0, Func Offset: 0xb0
}

// 
// Start address: 0x2818e0
unsigned int HH_Class_Suffix_Flame_00()
{
	unsigned int result;
	// Line 1112, Address: 0x2818e0, Func Offset: 0
	// Line 1115, Address: 0x2818e8, Func Offset: 0x8
	// Line 1117, Address: 0x2818f0, Func Offset: 0x10
	// Line 1118, Address: 0x2818f4, Func Offset: 0x14
	// Func End, Address: 0x281904, Func Offset: 0x24
}

// 
// Start address: 0x281910
unsigned int HH_Class_Flame_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float clip_mat[4][4];
	HH_Object_Flame_00* pThis;
	unsigned int result;
	// Line 1131, Address: 0x281910, Func Offset: 0
	// Line 1139, Address: 0x281928, Func Offset: 0x18
	// Line 1140, Address: 0x28192c, Func Offset: 0x1c
	// Line 1143, Address: 0x281930, Func Offset: 0x20
	// Line 1146, Address: 0x281964, Func Offset: 0x54
	// Line 1149, Address: 0x28196c, Func Offset: 0x5c
	// Line 1151, Address: 0x281988, Func Offset: 0x78
	// Line 1152, Address: 0x281990, Func Offset: 0x80
	// Line 1155, Address: 0x281998, Func Offset: 0x88
	// Line 1157, Address: 0x2819a0, Func Offset: 0x90
	// Line 1160, Address: 0x2819a8, Func Offset: 0x98
	// Line 1161, Address: 0x2819c0, Func Offset: 0xb0
	// Line 1164, Address: 0x2819c4, Func Offset: 0xb4
	// Line 1166, Address: 0x2819d0, Func Offset: 0xc0
	// Line 1168, Address: 0x2819ec, Func Offset: 0xdc
	// Line 1200, Address: 0x2819fc, Func Offset: 0xec
	// Line 1201, Address: 0x281a18, Func Offset: 0x108
	// Line 1204, Address: 0x281a20, Func Offset: 0x110
	// Line 1205, Address: 0x281a24, Func Offset: 0x114
	// Line 1208, Address: 0x281a28, Func Offset: 0x118
	// Line 1209, Address: 0x281a2c, Func Offset: 0x11c
	// Func End, Address: 0x281a48, Func Offset: 0x138
}

