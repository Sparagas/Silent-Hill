typedef struct HH_Object_Flame_01_Particle;
typedef struct Flame_Initialize_Parameter;
typedef struct HH_Object_Flame_01;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;


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
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[4][4];
typedef Flame_Initialize_Parameter type_16[8];
typedef float type_17[4][4];
typedef float type_18[4][4];
typedef float type_19[4][4];
typedef float type_20[4][4];
typedef float type_21[4][4];
typedef float type_22[4][4];
typedef float type_23[4][4];
typedef float type_24[4][4];
typedef float type_25[4][4];
typedef float type_26[4][4];
typedef float type_27[4][2];
typedef float type_28[4][4];
typedef float type_29[4][4];
typedef float type_30[2];
typedef float type_31[4][4];
typedef float type_32[4][4];
typedef int type_33[2];
typedef float type_34[4][4];
typedef int type_35[4];
typedef float type_36[4][4];
typedef float type_37[4][4];
typedef float type_38[4][4];
typedef unsigned int type_39[1];
typedef float type_40[4];
typedef float type_41[4][4];
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
typedef HH_Object_Flame_01_Particle type_65[100];
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

struct HH_Object_Flame_01_Particle
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

struct HH_Object_Flame_01
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	float Timer;
	unsigned int Particle_DrawNum;
	float Ratio;
	float Wind[4];
	HH_Object_Flame_01_Particle Particle[100];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
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

unsigned int Object_Initialize(HH_Object_Flame_01* pThis, ImpactQueue_Element* pElement);
void Particle_Initialize(HH_Object_Flame_01_Particle* pParticle, Flame_Initialize_Parameter* pParameter);
void Particle_Motion(HH_Object_Flame_01_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position, float Ratio);
void Particle_Calculator(HH_Object_Flame_01_Particle* pParticle, float* Position);
unsigned int Object_Draw(HH_Object_Flame_01* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Flame_01();
unsigned int HH_Class_Suffix_Flame_01();
unsigned int HH_Class_Flame_01(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x281a50
unsigned int Object_Initialize(HH_Object_Flame_01* pThis, ImpactQueue_Element* pElement)
{
	float ratio;
	HH_Object_Flame_01_Particle* pParticle;
	Flame_Initialize_Parameter* pParameter;
	unsigned int i;
	unsigned int result;
	// Line 801, Address: 0x281a50, Func Offset: 0
	// Line 807, Address: 0x281a6c, Func Offset: 0x1c
	// Line 813, Address: 0x281a70, Func Offset: 0x20
	// Line 818, Address: 0x281a90, Func Offset: 0x40
	// Line 820, Address: 0x281aac, Func Offset: 0x5c
	// Line 821, Address: 0x281ab8, Func Offset: 0x68
	// Line 823, Address: 0x281acc, Func Offset: 0x7c
	// Line 828, Address: 0x281adc, Func Offset: 0x8c
	// Line 830, Address: 0x281b18, Func Offset: 0xc8
	// Line 832, Address: 0x281b24, Func Offset: 0xd4
	// Line 835, Address: 0x281b38, Func Offset: 0xe8
	// Line 838, Address: 0x281b40, Func Offset: 0xf0
	// Line 839, Address: 0x281b44, Func Offset: 0xf4
	// Func End, Address: 0x281b64, Func Offset: 0x114
}

// 
// Start address: 0x281b70
void Particle_Initialize(HH_Object_Flame_01_Particle* pParticle, Flame_Initialize_Parameter* pParameter)
{
	float length_max_pow_f;
	float ratio;
	// Line 850, Address: 0x281b70, Func Offset: 0
	// Line 852, Address: 0x281b90, Func Offset: 0x20
	// Line 854, Address: 0x281bb8, Func Offset: 0x48
	// Line 855, Address: 0x281bc4, Func Offset: 0x54
	// Line 857, Address: 0x281bd0, Func Offset: 0x60
	// Line 858, Address: 0x281bdc, Func Offset: 0x6c
	// Line 860, Address: 0x281be4, Func Offset: 0x74
	// Line 861, Address: 0x281bf0, Func Offset: 0x80
	// Line 863, Address: 0x281bfc, Func Offset: 0x8c
	// Line 866, Address: 0x281c00, Func Offset: 0x90
	// Line 867, Address: 0x281c34, Func Offset: 0xc4
	// Line 868, Address: 0x281c68, Func Offset: 0xf8
	// Line 870, Address: 0x281c9c, Func Offset: 0x12c
	// Line 871, Address: 0x281cd0, Func Offset: 0x160
	// Line 872, Address: 0x281d04, Func Offset: 0x194
	// Line 873, Address: 0x281d38, Func Offset: 0x1c8
	// Line 874, Address: 0x281d50, Func Offset: 0x1e0
	// Line 876, Address: 0x281d60, Func Offset: 0x1f0
	// Line 877, Address: 0x281d64, Func Offset: 0x1f4
	// Line 878, Address: 0x281d6c, Func Offset: 0x1fc
	// Line 879, Address: 0x281d74, Func Offset: 0x204
	// Line 881, Address: 0x281d84, Func Offset: 0x214
	// Line 883, Address: 0x281da0, Func Offset: 0x230
	// Line 884, Address: 0x281dbc, Func Offset: 0x24c
	// Line 886, Address: 0x281dc0, Func Offset: 0x250
	// Line 887, Address: 0x281de4, Func Offset: 0x274
	// Func End, Address: 0x281e04, Func Offset: 0x294
}

// 
// Start address: 0x281e10
void Particle_Motion(HH_Object_Flame_01_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position, float Ratio)
{
	float alpha_ratio;
	float scale_ratio;
	float life_time_rev;
	float pre_time;
	// Line 900, Address: 0x281e10, Func Offset: 0
	// Line 901, Address: 0x281e40, Func Offset: 0x30
	// Line 902, Address: 0x281e58, Func Offset: 0x48
	// Line 903, Address: 0x281e60, Func Offset: 0x50
	// Line 904, Address: 0x281e6c, Func Offset: 0x5c
	// Line 912, Address: 0x281e80, Func Offset: 0x70
	// Line 913, Address: 0x281e94, Func Offset: 0x84
	// Line 914, Address: 0x281ea4, Func Offset: 0x94
	// Line 922, Address: 0x281eb0, Func Offset: 0xa0
	// Line 925, Address: 0x281f00, Func Offset: 0xf0
	// Line 926, Address: 0x281f10, Func Offset: 0x100
	// Line 927, Address: 0x281f2c, Func Offset: 0x11c
	// Line 929, Address: 0x281f38, Func Offset: 0x128
	// Line 930, Address: 0x281f54, Func Offset: 0x144
	// Line 931, Address: 0x281f64, Func Offset: 0x154
	// Line 933, Address: 0x281f74, Func Offset: 0x164
	// Func End, Address: 0x281f9c, Func Offset: 0x18c
}

// 
// Start address: 0x281fa0
void Particle_Calculator(HH_Object_Flame_01_Particle* pParticle, float* Position)
{
	float time_mat[4][4];
	// Line 945, Address: 0x281fa0, Func Offset: 0
	// Line 949, Address: 0x281fb8, Func Offset: 0x18
	// Line 950, Address: 0x281fc4, Func Offset: 0x24
	// Line 952, Address: 0x281fd8, Func Offset: 0x38
	// Line 953, Address: 0x281fe0, Func Offset: 0x40
	// Line 954, Address: 0x281fec, Func Offset: 0x4c
	// Line 955, Address: 0x281ff0, Func Offset: 0x50
	// Line 956, Address: 0x282004, Func Offset: 0x64
	// Func End, Address: 0x28201c, Func Offset: 0x7c
}

// 
// Start address: 0x282020
unsigned int Object_Draw(HH_Object_Flame_01* pThis, ImpactQueue_Element* pElement)
{
	HH_Object_Flame_01_Particle* pParticle;
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
	// Line 970, Address: 0x282020, Func Offset: 0
	// Line 972, Address: 0x282050, Func Offset: 0x30
	// Line 973, Address: 0x28206c, Func Offset: 0x4c
	// Line 974, Address: 0x282078, Func Offset: 0x58
	// Line 987, Address: 0x282080, Func Offset: 0x60
	// Line 990, Address: 0x28208c, Func Offset: 0x6c
	// Line 992, Address: 0x282098, Func Offset: 0x78
	// Line 994, Address: 0x2820a0, Func Offset: 0x80
	// Line 995, Address: 0x2820ac, Func Offset: 0x8c
	// Line 998, Address: 0x2820c0, Func Offset: 0xa0
	// Line 1003, Address: 0x2820d8, Func Offset: 0xb8
	// Line 1006, Address: 0x2820e4, Func Offset: 0xc4
	// Line 1007, Address: 0x2820fc, Func Offset: 0xdc
	// Line 1008, Address: 0x282110, Func Offset: 0xf0
	// Line 1011, Address: 0x282120, Func Offset: 0x100
	// Line 1012, Address: 0x282134, Func Offset: 0x114
	// Line 1013, Address: 0x282148, Func Offset: 0x128
	// Line 1014, Address: 0x28215c, Func Offset: 0x13c
	// Line 1017, Address: 0x282170, Func Offset: 0x150
	// Line 1020, Address: 0x282184, Func Offset: 0x164
	// Line 1021, Address: 0x28219c, Func Offset: 0x17c
	// Line 1023, Address: 0x2821ac, Func Offset: 0x18c
	// Line 1024, Address: 0x2821b4, Func Offset: 0x194
	// Line 1026, Address: 0x2821c4, Func Offset: 0x1a4
	// Line 1027, Address: 0x2821e4, Func Offset: 0x1c4
	// Line 1028, Address: 0x2821f0, Func Offset: 0x1d0
	// Line 1029, Address: 0x282200, Func Offset: 0x1e0
	// Line 1030, Address: 0x282210, Func Offset: 0x1f0
	// Line 1031, Address: 0x28222c, Func Offset: 0x20c
	// Line 1032, Address: 0x282238, Func Offset: 0x218
	// Line 1033, Address: 0x282244, Func Offset: 0x224
	// Line 1034, Address: 0x282254, Func Offset: 0x234
	// Line 1035, Address: 0x282260, Func Offset: 0x240
	// Line 1036, Address: 0x28226c, Func Offset: 0x24c
	// Line 1037, Address: 0x282280, Func Offset: 0x260
	// Line 1039, Address: 0x282288, Func Offset: 0x268
	// Line 1040, Address: 0x28228c, Func Offset: 0x26c
	// Func End, Address: 0x2822bc, Func Offset: 0x29c
}

// 
// Start address: 0x2822c0
unsigned int HH_Class_Prefix_Flame_01()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 1060, Address: 0x2822c0, Func Offset: 0
	// Line 1062, Address: 0x2822cc, Func Offset: 0xc
	// Line 1065, Address: 0x2822d8, Func Offset: 0x18
	// Line 1067, Address: 0x2822e0, Func Offset: 0x20
	// Line 1068, Address: 0x2822f0, Func Offset: 0x30
	// Line 1070, Address: 0x282304, Func Offset: 0x44
	// Line 1071, Address: 0x282328, Func Offset: 0x68
	// Line 1101, Address: 0x282344, Func Offset: 0x84
	// Line 1102, Address: 0x282350, Func Offset: 0x90
	// Line 1104, Address: 0x282358, Func Offset: 0x98
	// Line 1105, Address: 0x28235c, Func Offset: 0x9c
	// Func End, Address: 0x282370, Func Offset: 0xb0
}

// 
// Start address: 0x282370
unsigned int HH_Class_Suffix_Flame_01()
{
	unsigned int result;
	// Line 1118, Address: 0x282370, Func Offset: 0
	// Line 1121, Address: 0x282378, Func Offset: 0x8
	// Line 1123, Address: 0x282380, Func Offset: 0x10
	// Line 1124, Address: 0x282384, Func Offset: 0x14
	// Func End, Address: 0x282394, Func Offset: 0x24
}

// 
// Start address: 0x2823a0
unsigned int HH_Class_Flame_01(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Flame_01* pThis;
	unsigned int result;
	// Line 1137, Address: 0x2823a0, Func Offset: 0
	// Line 1145, Address: 0x2823b8, Func Offset: 0x18
	// Line 1146, Address: 0x2823bc, Func Offset: 0x1c
	// Line 1149, Address: 0x2823c0, Func Offset: 0x20
	// Line 1152, Address: 0x2823f4, Func Offset: 0x54
	// Line 1155, Address: 0x2823fc, Func Offset: 0x5c
	// Line 1157, Address: 0x282418, Func Offset: 0x78
	// Line 1158, Address: 0x282420, Func Offset: 0x80
	// Line 1161, Address: 0x282428, Func Offset: 0x88
	// Line 1163, Address: 0x282430, Func Offset: 0x90
	// Line 1166, Address: 0x282438, Func Offset: 0x98
	// Line 1167, Address: 0x282450, Func Offset: 0xb0
	// Line 1171, Address: 0x282454, Func Offset: 0xb4
	// Line 1172, Address: 0x28246c, Func Offset: 0xcc
	// Line 1173, Address: 0x282474, Func Offset: 0xd4
	// Line 1175, Address: 0x28247c, Func Offset: 0xdc
	// Line 1183, Address: 0x28248c, Func Offset: 0xec
	// Line 1214, Address: 0x28249c, Func Offset: 0xfc
	// Line 1215, Address: 0x2824b8, Func Offset: 0x118
	// Line 1218, Address: 0x2824c0, Func Offset: 0x120
	// Line 1219, Address: 0x2824c4, Func Offset: 0x124
	// Line 1222, Address: 0x2824c8, Func Offset: 0x128
	// Line 1223, Address: 0x2824cc, Func Offset: 0x12c
	// Func End, Address: 0x2824e8, Func Offset: 0x148
}

