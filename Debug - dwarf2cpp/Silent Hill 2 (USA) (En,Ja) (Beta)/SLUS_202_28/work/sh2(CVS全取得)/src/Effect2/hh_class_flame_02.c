typedef struct HH_Object_Flame_02;
typedef struct ImpactQueue_Element;
typedef struct HH_Object_Flame_02_Particle;
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
typedef Flame_Initialize_Parameter type_14[8];
typedef float type_15[4][4];
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
typedef int type_32[2];
typedef float type_33[4][4];
typedef int type_34[4];
typedef float type_35[4][4];
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
typedef unsigned int type_48[3];
typedef float type_49[4][4];
typedef float type_50[4][4];
typedef float type_51[4][4];
typedef float type_52[4][4];
typedef float type_53[4][4];
typedef float type_54[4][4];
typedef float type_55[4][64];
typedef float type_56[4][4];
typedef float type_57[4][4];
typedef float type_58[4][4];
typedef float type_59[4][4];
typedef float type_60[4][4];
typedef float type_61[4][4];
typedef float type_62[4][4];
typedef float type_63[4][4];
typedef HH_Object_Flame_02_Particle type_64[100];
typedef float type_65[4][4];
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

struct HH_Object_Flame_02
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	float Timer;
	unsigned int Particle_DrawNum;
	float Wind[4];
	HH_Object_Flame_02_Particle Particle[100];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct HH_Object_Flame_02_Particle
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

unsigned int Object_Initialize(HH_Object_Flame_02* pThis, ImpactQueue_Element* pElement);
void Particle_Initialize(HH_Object_Flame_02_Particle* pParticle, Flame_Initialize_Parameter* pParameter);
void Particle_Motion(HH_Object_Flame_02_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position);
void Particle_Calculator(HH_Object_Flame_02_Particle* pParticle, float* Position);
unsigned int Object_Draw(HH_Object_Flame_02* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Flame_02();
unsigned int HH_Class_Suffix_Flame_02();
unsigned int HH_Class_Flame_02(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2863e0
unsigned int Object_Initialize(HH_Object_Flame_02* pThis, ImpactQueue_Element* pElement)
{
	float ratio;
	HH_Object_Flame_02_Particle* pParticle;
	Flame_Initialize_Parameter* pParameter;
	unsigned int i;
	unsigned int result;
	// Line 795, Address: 0x2863e0, Func Offset: 0
	// Line 801, Address: 0x2863fc, Func Offset: 0x1c
	// Line 804, Address: 0x286400, Func Offset: 0x20
	// Line 809, Address: 0x286420, Func Offset: 0x40
	// Line 811, Address: 0x28643c, Func Offset: 0x5c
	// Line 812, Address: 0x286448, Func Offset: 0x68
	// Line 814, Address: 0x28645c, Func Offset: 0x7c
	// Line 819, Address: 0x28646c, Func Offset: 0x8c
	// Line 821, Address: 0x2864a8, Func Offset: 0xc8
	// Line 823, Address: 0x2864b4, Func Offset: 0xd4
	// Line 826, Address: 0x2864c8, Func Offset: 0xe8
	// Line 829, Address: 0x2864d0, Func Offset: 0xf0
	// Line 830, Address: 0x2864d4, Func Offset: 0xf4
	// Func End, Address: 0x2864f4, Func Offset: 0x114
}

// 
// Start address: 0x286500
void Particle_Initialize(HH_Object_Flame_02_Particle* pParticle, Flame_Initialize_Parameter* pParameter)
{
	float length_max_pow_f;
	float ratio;
	// Line 841, Address: 0x286500, Func Offset: 0
	// Line 843, Address: 0x286520, Func Offset: 0x20
	// Line 845, Address: 0x286548, Func Offset: 0x48
	// Line 846, Address: 0x286554, Func Offset: 0x54
	// Line 848, Address: 0x286560, Func Offset: 0x60
	// Line 849, Address: 0x28656c, Func Offset: 0x6c
	// Line 851, Address: 0x286574, Func Offset: 0x74
	// Line 852, Address: 0x286580, Func Offset: 0x80
	// Line 854, Address: 0x28658c, Func Offset: 0x8c
	// Line 857, Address: 0x286590, Func Offset: 0x90
	// Line 858, Address: 0x2865c4, Func Offset: 0xc4
	// Line 859, Address: 0x2865f8, Func Offset: 0xf8
	// Line 861, Address: 0x28662c, Func Offset: 0x12c
	// Line 862, Address: 0x286660, Func Offset: 0x160
	// Line 863, Address: 0x286694, Func Offset: 0x194
	// Line 864, Address: 0x2866c8, Func Offset: 0x1c8
	// Line 865, Address: 0x2866e0, Func Offset: 0x1e0
	// Line 867, Address: 0x2866f0, Func Offset: 0x1f0
	// Line 868, Address: 0x2866f4, Func Offset: 0x1f4
	// Line 869, Address: 0x2866fc, Func Offset: 0x1fc
	// Line 870, Address: 0x286704, Func Offset: 0x204
	// Line 872, Address: 0x286714, Func Offset: 0x214
	// Line 874, Address: 0x286730, Func Offset: 0x230
	// Line 875, Address: 0x28674c, Func Offset: 0x24c
	// Line 877, Address: 0x286750, Func Offset: 0x250
	// Line 878, Address: 0x286774, Func Offset: 0x274
	// Func End, Address: 0x286794, Func Offset: 0x294
}

// 
// Start address: 0x2867a0
void Particle_Motion(HH_Object_Flame_02_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position)
{
	float alpha_ratio;
	float scale_ratio;
	float life_time_rev;
	float pre_time;
	// Line 891, Address: 0x2867a0, Func Offset: 0
	// Line 892, Address: 0x2867c8, Func Offset: 0x28
	// Line 893, Address: 0x2867e0, Func Offset: 0x40
	// Line 900, Address: 0x2867e8, Func Offset: 0x48
	// Line 901, Address: 0x2867fc, Func Offset: 0x5c
	// Line 902, Address: 0x28680c, Func Offset: 0x6c
	// Line 910, Address: 0x286818, Func Offset: 0x78
	// Line 913, Address: 0x286868, Func Offset: 0xc8
	// Line 914, Address: 0x286878, Func Offset: 0xd8
	// Line 915, Address: 0x286894, Func Offset: 0xf4
	// Line 917, Address: 0x2868a0, Func Offset: 0x100
	// Line 918, Address: 0x2868bc, Func Offset: 0x11c
	// Line 919, Address: 0x2868c8, Func Offset: 0x128
	// Line 921, Address: 0x2868d4, Func Offset: 0x134
	// Func End, Address: 0x2868f8, Func Offset: 0x158
}

// 
// Start address: 0x286900
void Particle_Calculator(HH_Object_Flame_02_Particle* pParticle, float* Position)
{
	float time_mat[4][4];
	// Line 932, Address: 0x286900, Func Offset: 0
	// Line 936, Address: 0x286918, Func Offset: 0x18
	// Line 937, Address: 0x286924, Func Offset: 0x24
	// Line 939, Address: 0x286938, Func Offset: 0x38
	// Line 940, Address: 0x286940, Func Offset: 0x40
	// Line 941, Address: 0x28694c, Func Offset: 0x4c
	// Line 942, Address: 0x286950, Func Offset: 0x50
	// Line 943, Address: 0x286964, Func Offset: 0x64
	// Func End, Address: 0x28697c, Func Offset: 0x7c
}

// 
// Start address: 0x286980
unsigned int Object_Draw(HH_Object_Flame_02* pThis, ImpactQueue_Element* pElement)
{
	HH_Object_Flame_02_Particle* pParticle;
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
	// Line 957, Address: 0x286980, Func Offset: 0
	// Line 959, Address: 0x2869b0, Func Offset: 0x30
	// Line 960, Address: 0x2869cc, Func Offset: 0x4c
	// Line 961, Address: 0x2869d8, Func Offset: 0x58
	// Line 974, Address: 0x2869e0, Func Offset: 0x60
	// Line 977, Address: 0x2869ec, Func Offset: 0x6c
	// Line 979, Address: 0x2869f8, Func Offset: 0x78
	// Line 981, Address: 0x286a00, Func Offset: 0x80
	// Line 982, Address: 0x286a0c, Func Offset: 0x8c
	// Line 985, Address: 0x286a20, Func Offset: 0xa0
	// Line 987, Address: 0x286a34, Func Offset: 0xb4
	// Line 990, Address: 0x286a40, Func Offset: 0xc0
	// Line 991, Address: 0x286a58, Func Offset: 0xd8
	// Line 992, Address: 0x286a6c, Func Offset: 0xec
	// Line 995, Address: 0x286a7c, Func Offset: 0xfc
	// Line 996, Address: 0x286a90, Func Offset: 0x110
	// Line 997, Address: 0x286aa4, Func Offset: 0x124
	// Line 998, Address: 0x286ab8, Func Offset: 0x138
	// Line 1001, Address: 0x286acc, Func Offset: 0x14c
	// Line 1004, Address: 0x286ae0, Func Offset: 0x160
	// Line 1005, Address: 0x286af8, Func Offset: 0x178
	// Line 1007, Address: 0x286b08, Func Offset: 0x188
	// Line 1008, Address: 0x286b10, Func Offset: 0x190
	// Line 1010, Address: 0x286b20, Func Offset: 0x1a0
	// Line 1011, Address: 0x286b40, Func Offset: 0x1c0
	// Line 1012, Address: 0x286b4c, Func Offset: 0x1cc
	// Line 1013, Address: 0x286b5c, Func Offset: 0x1dc
	// Line 1014, Address: 0x286b6c, Func Offset: 0x1ec
	// Line 1015, Address: 0x286b88, Func Offset: 0x208
	// Line 1016, Address: 0x286b94, Func Offset: 0x214
	// Line 1017, Address: 0x286ba0, Func Offset: 0x220
	// Line 1018, Address: 0x286bb0, Func Offset: 0x230
	// Line 1019, Address: 0x286bbc, Func Offset: 0x23c
	// Line 1020, Address: 0x286bc8, Func Offset: 0x248
	// Line 1021, Address: 0x286be0, Func Offset: 0x260
	// Line 1023, Address: 0x286be8, Func Offset: 0x268
	// Line 1024, Address: 0x286bec, Func Offset: 0x26c
	// Func End, Address: 0x286c1c, Func Offset: 0x29c
}

// 
// Start address: 0x286c20
unsigned int HH_Class_Prefix_Flame_02()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 1044, Address: 0x286c20, Func Offset: 0
	// Line 1046, Address: 0x286c2c, Func Offset: 0xc
	// Line 1049, Address: 0x286c38, Func Offset: 0x18
	// Line 1050, Address: 0x286c40, Func Offset: 0x20
	// Line 1063, Address: 0x286c58, Func Offset: 0x38
	// Line 1064, Address: 0x286c68, Func Offset: 0x48
	// Line 1066, Address: 0x286c7c, Func Offset: 0x5c
	// Line 1067, Address: 0x286ca0, Func Offset: 0x80
	// Line 1068, Address: 0x286cbc, Func Offset: 0x9c
	// Line 1069, Address: 0x286cc8, Func Offset: 0xa8
	// Line 1071, Address: 0x286cd0, Func Offset: 0xb0
	// Line 1072, Address: 0x286cd4, Func Offset: 0xb4
	// Func End, Address: 0x286ce8, Func Offset: 0xc8
}

// 
// Start address: 0x286cf0
unsigned int HH_Class_Suffix_Flame_02()
{
	_anon0* pPk;
	unsigned int result;
	// Line 1085, Address: 0x286cf0, Func Offset: 0
	// Line 1087, Address: 0x286cfc, Func Offset: 0xc
	// Line 1090, Address: 0x286d08, Func Offset: 0x18
	// Line 1092, Address: 0x286d10, Func Offset: 0x20
	// Line 1093, Address: 0x286d18, Func Offset: 0x28
	// Line 1106, Address: 0x286d30, Func Offset: 0x40
	// Line 1108, Address: 0x286d38, Func Offset: 0x48
	// Line 1109, Address: 0x286d3c, Func Offset: 0x4c
	// Func End, Address: 0x286d50, Func Offset: 0x60
}

// 
// Start address: 0x286d50
unsigned int HH_Class_Flame_02(void* pBlock, ImpactQueue_Element* pElement)
{
	float clip_mat[4][4];
	HH_Object_Flame_02* pThis;
	unsigned int result;
	// Line 1122, Address: 0x286d50, Func Offset: 0
	// Line 1130, Address: 0x286d68, Func Offset: 0x18
	// Line 1131, Address: 0x286d6c, Func Offset: 0x1c
	// Line 1134, Address: 0x286d70, Func Offset: 0x20
	// Line 1137, Address: 0x286da4, Func Offset: 0x54
	// Line 1140, Address: 0x286dac, Func Offset: 0x5c
	// Line 1142, Address: 0x286dc8, Func Offset: 0x78
	// Line 1143, Address: 0x286dd0, Func Offset: 0x80
	// Line 1146, Address: 0x286dd8, Func Offset: 0x88
	// Line 1148, Address: 0x286de0, Func Offset: 0x90
	// Line 1151, Address: 0x286de8, Func Offset: 0x98
	// Line 1152, Address: 0x286e00, Func Offset: 0xb0
	// Line 1155, Address: 0x286e04, Func Offset: 0xb4
	// Line 1156, Address: 0x286e10, Func Offset: 0xc0
	// Line 1158, Address: 0x286e2c, Func Offset: 0xdc
	// Line 1161, Address: 0x286e3c, Func Offset: 0xec
	// Line 1162, Address: 0x286e58, Func Offset: 0x108
	// Line 1165, Address: 0x286e60, Func Offset: 0x110
	// Line 1166, Address: 0x286e64, Func Offset: 0x114
	// Line 1169, Address: 0x286e68, Func Offset: 0x118
	// Line 1170, Address: 0x286e6c, Func Offset: 0x11c
	// Func End, Address: 0x286e88, Func Offset: 0x138
}

