typedef struct _anon0;
typedef struct SubCharacter;
typedef struct Flame_Initialize_Parameter;
typedef struct HH_Object_Flame_03_Particle;
typedef struct HH_Object_Flame_03;
typedef struct shBattleFight;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct shSkelton;
typedef struct shBattleShot;
typedef struct ImpactQueue_ElementOption;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _anon1;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct _anon4;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);

typedef float type_0[4][4];
typedef float type_1[4][4];
typedef float type_2[4][4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef float type_6[4][4];
typedef float type_7[4][4];
typedef float type_8[4][4];
typedef float type_9[4][4];
typedef float type_10[4][4];
typedef float type_12[4][4];
typedef float type_13[4][4];
typedef float type_14[4][4];
typedef unsigned char type_15[4];
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
typedef float type_26[4];
typedef float type_27[4][4];
typedef float type_28[4][4];
typedef float type_29[4];
typedef float type_30[4][64];
typedef float type_31[4][4];
typedef float type_32[4][4];
typedef float type_33[4][2];
typedef float type_34[4][4];
typedef float type_35[2];
typedef float type_36[4][4];
typedef int type_37[2];
typedef float type_38[4][4];
typedef float type_39[4][4];
typedef float type_40[4][4];
typedef int type_41[4];
typedef float type_42[4][4];
typedef float type_43[4][4];
typedef float type_44[4][4];
typedef unsigned int type_45[1];
typedef float type_46[4];
typedef float type_47[4][4];
typedef float type_48[4][4];
typedef float type_49[4][4];
typedef unsigned int type_50[3];
typedef float type_51[4][4];
typedef float type_52[4][4];
typedef float type_53[4][4];
typedef float type_54[4][4];
typedef float type_55[4][4];
typedef float type_56[4][4];
typedef float type_57[4][4];
typedef float type_58[4][4];
typedef float type_59[4][4];
typedef float type_60[4][4];
typedef float type_61[4][4];
typedef float type_62[4][4];
typedef float type_63[4][4];
typedef float type_64[4][4];
typedef float type_65[4][4];
typedef float type_66[4][4];
typedef float type_67[4][4];
typedef HH_Object_Flame_03_Particle type_68[100];
typedef float type_69[4][4];
typedef float type_70[4][4];
typedef float type_71[4][4];
typedef float type_72[4][4];
typedef float type_73[4][4];
typedef float type_74[4][4];
typedef Flame_Initialize_Parameter type_75[8];
typedef float type_76[4][4];
typedef float type_77[4][4];
typedef shAttackInfo type_78[66];
typedef float type_79[4][4];
typedef float type_80[4][4];
typedef float type_81[4][4];
typedef float type_82[4][4];
typedef float type_83[4][4];

struct _anon0
{
	float d[4][4];
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
	_anon0 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon4 b_pos;
	_anon4 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
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

struct HH_Object_Flame_03_Particle
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

struct HH_Object_Flame_03
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	float Timer;
	unsigned int Particle_DrawNum;
	float Ratio;
	float Wind[4];
	HH_Object_Flame_03_Particle Particle[100];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon4 src_t;
	_anon0 des_m;
	_anon4 des_t;
	_anon4 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

struct shBattleArea
{
	float center;
	float radius;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
	unsigned char se;
};

struct _anon1
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
};

shAttackInfo sh2_attack_list[66];
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

unsigned int Object_Initialize(HH_Object_Flame_03* pThis, ImpactQueue_Element* pElement);
void Particle_Initialize(HH_Object_Flame_03_Particle* pParticle, Flame_Initialize_Parameter* pParameter);
void Particle_Motion(HH_Object_Flame_03_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position, float Ratio);
void Particle_Calculator(HH_Object_Flame_03_Particle* pParticle, float* Position);
unsigned int Object_Draw(HH_Object_Flame_03* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Flame_03();
unsigned int HH_Class_Suffix_Flame_03();
unsigned int HH_Class_Flame_03(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2930c0
unsigned int Object_Initialize(HH_Object_Flame_03* pThis, ImpactQueue_Element* pElement)
{
	float ratio;
	HH_Object_Flame_03_Particle* pParticle;
	Flame_Initialize_Parameter* pParameter;
	unsigned int i;
	unsigned int result;
	// Line 802, Address: 0x2930c0, Func Offset: 0
	// Line 808, Address: 0x2930dc, Func Offset: 0x1c
	// Line 814, Address: 0x2930e0, Func Offset: 0x20
	// Line 819, Address: 0x293100, Func Offset: 0x40
	// Line 821, Address: 0x29311c, Func Offset: 0x5c
	// Line 822, Address: 0x293128, Func Offset: 0x68
	// Line 824, Address: 0x29313c, Func Offset: 0x7c
	// Line 829, Address: 0x29314c, Func Offset: 0x8c
	// Line 831, Address: 0x293188, Func Offset: 0xc8
	// Line 833, Address: 0x293194, Func Offset: 0xd4
	// Line 836, Address: 0x2931a8, Func Offset: 0xe8
	// Line 839, Address: 0x2931b0, Func Offset: 0xf0
	// Line 840, Address: 0x2931b4, Func Offset: 0xf4
	// Func End, Address: 0x2931d4, Func Offset: 0x114
}

// 
// Start address: 0x2931e0
void Particle_Initialize(HH_Object_Flame_03_Particle* pParticle, Flame_Initialize_Parameter* pParameter)
{
	float length_max_pow_f;
	float ratio;
	// Line 851, Address: 0x2931e0, Func Offset: 0
	// Line 853, Address: 0x293200, Func Offset: 0x20
	// Line 855, Address: 0x293228, Func Offset: 0x48
	// Line 856, Address: 0x293234, Func Offset: 0x54
	// Line 858, Address: 0x293240, Func Offset: 0x60
	// Line 859, Address: 0x29324c, Func Offset: 0x6c
	// Line 861, Address: 0x293254, Func Offset: 0x74
	// Line 862, Address: 0x293260, Func Offset: 0x80
	// Line 864, Address: 0x29326c, Func Offset: 0x8c
	// Line 867, Address: 0x293270, Func Offset: 0x90
	// Line 868, Address: 0x2932a4, Func Offset: 0xc4
	// Line 869, Address: 0x2932d8, Func Offset: 0xf8
	// Line 871, Address: 0x29330c, Func Offset: 0x12c
	// Line 872, Address: 0x293340, Func Offset: 0x160
	// Line 873, Address: 0x293374, Func Offset: 0x194
	// Line 874, Address: 0x2933a8, Func Offset: 0x1c8
	// Line 875, Address: 0x2933c0, Func Offset: 0x1e0
	// Line 877, Address: 0x2933d0, Func Offset: 0x1f0
	// Line 878, Address: 0x2933d4, Func Offset: 0x1f4
	// Line 879, Address: 0x2933dc, Func Offset: 0x1fc
	// Line 880, Address: 0x2933e4, Func Offset: 0x204
	// Line 882, Address: 0x2933f4, Func Offset: 0x214
	// Line 884, Address: 0x293410, Func Offset: 0x230
	// Line 885, Address: 0x29342c, Func Offset: 0x24c
	// Line 887, Address: 0x293430, Func Offset: 0x250
	// Line 888, Address: 0x293454, Func Offset: 0x274
	// Func End, Address: 0x293474, Func Offset: 0x294
}

// 
// Start address: 0x293480
void Particle_Motion(HH_Object_Flame_03_Particle* pParticle, Flame_Initialize_Parameter* pParameter, float* Position, float Ratio)
{
	float alpha_ratio;
	float scale_ratio;
	float life_time_rev;
	float pre_time;
	// Line 901, Address: 0x293480, Func Offset: 0
	// Line 902, Address: 0x2934b0, Func Offset: 0x30
	// Line 903, Address: 0x2934c8, Func Offset: 0x48
	// Line 904, Address: 0x2934d0, Func Offset: 0x50
	// Line 905, Address: 0x2934dc, Func Offset: 0x5c
	// Line 913, Address: 0x2934f0, Func Offset: 0x70
	// Line 914, Address: 0x293504, Func Offset: 0x84
	// Line 915, Address: 0x293514, Func Offset: 0x94
	// Line 923, Address: 0x293520, Func Offset: 0xa0
	// Line 926, Address: 0x293570, Func Offset: 0xf0
	// Line 927, Address: 0x293580, Func Offset: 0x100
	// Line 928, Address: 0x29359c, Func Offset: 0x11c
	// Line 930, Address: 0x2935a8, Func Offset: 0x128
	// Line 931, Address: 0x2935c4, Func Offset: 0x144
	// Line 932, Address: 0x2935d4, Func Offset: 0x154
	// Line 934, Address: 0x2935e4, Func Offset: 0x164
	// Func End, Address: 0x29360c, Func Offset: 0x18c
}

// 
// Start address: 0x293610
void Particle_Calculator(HH_Object_Flame_03_Particle* pParticle, float* Position)
{
	float time_mat[4][4];
	// Line 946, Address: 0x293610, Func Offset: 0
	// Line 950, Address: 0x293628, Func Offset: 0x18
	// Line 951, Address: 0x293634, Func Offset: 0x24
	// Line 953, Address: 0x293648, Func Offset: 0x38
	// Line 954, Address: 0x293650, Func Offset: 0x40
	// Line 955, Address: 0x29365c, Func Offset: 0x4c
	// Line 956, Address: 0x293660, Func Offset: 0x50
	// Line 957, Address: 0x293674, Func Offset: 0x64
	// Func End, Address: 0x29368c, Func Offset: 0x7c
}

// 
// Start address: 0x293690
unsigned int Object_Draw(HH_Object_Flame_03* pThis, ImpactQueue_Element* pElement)
{
	HH_Object_Flame_03_Particle* pParticle;
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
	_anon1* pPk;
	Flame_Initialize_Parameter* pParameter;
	unsigned int result;
	// Line 971, Address: 0x293690, Func Offset: 0
	// Line 973, Address: 0x2936c0, Func Offset: 0x30
	// Line 974, Address: 0x2936dc, Func Offset: 0x4c
	// Line 975, Address: 0x2936e8, Func Offset: 0x58
	// Line 988, Address: 0x2936f0, Func Offset: 0x60
	// Line 991, Address: 0x2936fc, Func Offset: 0x6c
	// Line 993, Address: 0x293708, Func Offset: 0x78
	// Line 995, Address: 0x293710, Func Offset: 0x80
	// Line 996, Address: 0x29371c, Func Offset: 0x8c
	// Line 999, Address: 0x293730, Func Offset: 0xa0
	// Line 1002, Address: 0x293748, Func Offset: 0xb8
	// Line 1005, Address: 0x29375c, Func Offset: 0xcc
	// Line 1008, Address: 0x293768, Func Offset: 0xd8
	// Line 1009, Address: 0x293780, Func Offset: 0xf0
	// Line 1010, Address: 0x293794, Func Offset: 0x104
	// Line 1013, Address: 0x2937a4, Func Offset: 0x114
	// Line 1014, Address: 0x2937b8, Func Offset: 0x128
	// Line 1015, Address: 0x2937cc, Func Offset: 0x13c
	// Line 1016, Address: 0x2937e0, Func Offset: 0x150
	// Line 1019, Address: 0x2937f4, Func Offset: 0x164
	// Line 1022, Address: 0x293808, Func Offset: 0x178
	// Line 1023, Address: 0x293820, Func Offset: 0x190
	// Line 1025, Address: 0x293830, Func Offset: 0x1a0
	// Line 1026, Address: 0x293838, Func Offset: 0x1a8
	// Line 1028, Address: 0x293848, Func Offset: 0x1b8
	// Line 1029, Address: 0x293868, Func Offset: 0x1d8
	// Line 1030, Address: 0x293874, Func Offset: 0x1e4
	// Line 1031, Address: 0x293884, Func Offset: 0x1f4
	// Line 1032, Address: 0x293894, Func Offset: 0x204
	// Line 1033, Address: 0x2938b0, Func Offset: 0x220
	// Line 1034, Address: 0x2938bc, Func Offset: 0x22c
	// Line 1035, Address: 0x2938c8, Func Offset: 0x238
	// Line 1036, Address: 0x2938d8, Func Offset: 0x248
	// Line 1037, Address: 0x2938e4, Func Offset: 0x254
	// Line 1038, Address: 0x2938f0, Func Offset: 0x260
	// Line 1039, Address: 0x293908, Func Offset: 0x278
	// Line 1041, Address: 0x293910, Func Offset: 0x280
	// Line 1042, Address: 0x293914, Func Offset: 0x284
	// Func End, Address: 0x293944, Func Offset: 0x2b4
}

// 
// Start address: 0x293950
unsigned int HH_Class_Prefix_Flame_03()
{
	unsigned long tex0;
	_anon1* pPk;
	unsigned int result;
	// Line 1062, Address: 0x293950, Func Offset: 0
	// Line 1064, Address: 0x29395c, Func Offset: 0xc
	// Line 1067, Address: 0x293968, Func Offset: 0x18
	// Line 1069, Address: 0x293970, Func Offset: 0x20
	// Line 1070, Address: 0x293980, Func Offset: 0x30
	// Line 1072, Address: 0x293994, Func Offset: 0x44
	// Line 1073, Address: 0x2939b8, Func Offset: 0x68
	// Line 1074, Address: 0x2939d4, Func Offset: 0x84
	// Line 1075, Address: 0x2939e0, Func Offset: 0x90
	// Line 1077, Address: 0x2939e8, Func Offset: 0x98
	// Line 1078, Address: 0x2939ec, Func Offset: 0x9c
	// Func End, Address: 0x293a00, Func Offset: 0xb0
}

// 
// Start address: 0x293a00
unsigned int HH_Class_Suffix_Flame_03()
{
	unsigned int result;
	// Line 1091, Address: 0x293a00, Func Offset: 0
	// Line 1094, Address: 0x293a08, Func Offset: 0x8
	// Line 1096, Address: 0x293a10, Func Offset: 0x10
	// Line 1097, Address: 0x293a14, Func Offset: 0x14
	// Func End, Address: 0x293a24, Func Offset: 0x24
}

// 
// Start address: 0x293a30
unsigned int HH_Class_Flame_03(void* pBlock, ImpactQueue_Element* pElement)
{
	SubCharacter* pSubChar;
	float clip_mat[4][4];
	HH_Object_Flame_03* pThis;
	unsigned int result;
	// Line 1110, Address: 0x293a30, Func Offset: 0
	// Line 1118, Address: 0x293a4c, Func Offset: 0x1c
	// Line 1119, Address: 0x293a50, Func Offset: 0x20
	// Line 1122, Address: 0x293a54, Func Offset: 0x24
	// Line 1125, Address: 0x293a88, Func Offset: 0x58
	// Line 1128, Address: 0x293a90, Func Offset: 0x60
	// Line 1130, Address: 0x293aac, Func Offset: 0x7c
	// Line 1131, Address: 0x293ab4, Func Offset: 0x84
	// Line 1134, Address: 0x293abc, Func Offset: 0x8c
	// Line 1136, Address: 0x293ac4, Func Offset: 0x94
	// Line 1139, Address: 0x293acc, Func Offset: 0x9c
	// Line 1140, Address: 0x293ae4, Func Offset: 0xb4
	// Line 1144, Address: 0x293ae8, Func Offset: 0xb8
	// Line 1145, Address: 0x293b00, Func Offset: 0xd0
	// Line 1146, Address: 0x293b08, Func Offset: 0xd8
	// Line 1148, Address: 0x293b10, Func Offset: 0xe0
	// Line 1150, Address: 0x293b20, Func Offset: 0xf0
	// Line 1151, Address: 0x293b2c, Func Offset: 0xfc
	// Line 1153, Address: 0x293b48, Func Offset: 0x118
	// Line 1155, Address: 0x293b4c, Func Offset: 0x11c
	// Line 1157, Address: 0x293b5c, Func Offset: 0x12c
	// Line 1160, Address: 0x293b64, Func Offset: 0x134
	// Line 1161, Address: 0x293b78, Func Offset: 0x148
	// Line 1165, Address: 0x293b94, Func Offset: 0x164
	// Line 1198, Address: 0x293ba4, Func Offset: 0x174
	// Line 1199, Address: 0x293bc0, Func Offset: 0x190
	// Line 1202, Address: 0x293bc8, Func Offset: 0x198
	// Line 1203, Address: 0x293bcc, Func Offset: 0x19c
	// Line 1206, Address: 0x293bd0, Func Offset: 0x1a0
	// Line 1207, Address: 0x293bd4, Func Offset: 0x1a4
	// Func End, Address: 0x293bf4, Func Offset: 0x1c4
}

