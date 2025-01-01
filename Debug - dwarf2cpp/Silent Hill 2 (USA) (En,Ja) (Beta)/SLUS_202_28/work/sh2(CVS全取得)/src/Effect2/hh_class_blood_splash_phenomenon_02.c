typedef struct _CL_VHIT_WALL;
typedef struct SubCharacter;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _anon2;
typedef struct Object_DataBlock_Header;
typedef struct shSkelton;
typedef struct ImpactQueue_ElementOption;
typedef struct HH_Object_Blood_Splash_Phenomenon_02;
typedef struct ImpactQueue_Element;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;

typedef void(*type_12)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);

typedef float type_0[2];
typedef shAttackInfo type_1[66];
typedef float type_2[4][2];
typedef float type_3[2];
typedef float type_4[2];
typedef int type_5[2];
typedef float type_6[4];
typedef float type_7[4][4];
typedef float type_8[4];
typedef unsigned int type_9[1];
typedef float type_10[4];
typedef float type_11[4][4];
typedef float type_13[2];
typedef unsigned short type_14[2];
typedef unsigned char type_16[4];
typedef float type_17[4];
typedef float type_18[2];

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon2 b_pos;
	_anon2 b_rot;
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
	_anon0 hit_check;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
	_anon2 des_t;
	_anon2 axis;
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

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

struct HH_Object_Blood_Splash_Phenomenon_02
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
	float Beta;
	float Alpha;
	float Gamma;
	float Delta;
	float Theta;
	float Phai;
	float Lambda;
	float Verocity_0;
	float Next_Discharge_Time[2];
	unsigned short Post_Count[2];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct _anon3
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

shAttackInfo sh2_attack_list[66];
float _unit_vector_x[4];
float _unit_vector_z[4];
float _discharge_full_number[2];
float _discharge_number[2];
float _discharge_time[2];

unsigned int Object_Initialize(HH_Object_Blood_Splash_Phenomenon_02* pThis, ImpactQueue_Element* pElement);
void Impact_Parameter_Calculator(HH_Object_Blood_Splash_Phenomenon_02* pThis, float* src_location, float* src_direction, unsigned int Kind);
unsigned int HH_Class_Blood_Splash_Phenomenon_02(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2955c0
unsigned int Object_Initialize(HH_Object_Blood_Splash_Phenomenon_02* pThis, ImpactQueue_Element* pElement)
{
	SubCharacter* pSubChar;
	float lambda_2;
	float lambda_1;
	float p_xz[4];
	float* src_direction;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 159, Address: 0x2955c0, Func Offset: 0
	// Line 164, Address: 0x2955e0, Func Offset: 0x20
	// Line 166, Address: 0x2955e4, Func Offset: 0x24
	// Line 167, Address: 0x2955e8, Func Offset: 0x28
	// Line 169, Address: 0x2955ec, Func Offset: 0x2c
	// Line 170, Address: 0x2955f0, Func Offset: 0x30
	// Line 174, Address: 0x2955f4, Func Offset: 0x34
	// Line 177, Address: 0x2955f8, Func Offset: 0x38
	// Line 179, Address: 0x295608, Func Offset: 0x48
	// Line 182, Address: 0x295614, Func Offset: 0x54
	// Line 184, Address: 0x295618, Func Offset: 0x58
	// Line 186, Address: 0x29561c, Func Offset: 0x5c
	// Line 189, Address: 0x295638, Func Offset: 0x78
	// Line 190, Address: 0x295660, Func Offset: 0xa0
	// Line 191, Address: 0x295678, Func Offset: 0xb8
	// Line 195, Address: 0x295680, Func Offset: 0xc0
	// Line 198, Address: 0x295698, Func Offset: 0xd8
	// Line 206, Address: 0x2956a4, Func Offset: 0xe4
	// Line 207, Address: 0x2956b4, Func Offset: 0xf4
	// Line 208, Address: 0x2956b8, Func Offset: 0xf8
	// Line 209, Address: 0x2956c8, Func Offset: 0x108
	// Line 210, Address: 0x2956e0, Func Offset: 0x120
	// Line 215, Address: 0x2956f4, Func Offset: 0x134
	// Line 216, Address: 0x2956f8, Func Offset: 0x138
	// Line 217, Address: 0x295718, Func Offset: 0x158
	// Line 224, Address: 0x295724, Func Offset: 0x164
	// Line 226, Address: 0x295728, Func Offset: 0x168
	// Line 227, Address: 0x295738, Func Offset: 0x178
	// Line 230, Address: 0x295748, Func Offset: 0x188
	// Line 231, Address: 0x29574c, Func Offset: 0x18c
	// Func End, Address: 0x29576c, Func Offset: 0x1ac
}

// 
// Start address: 0x295770
void Impact_Parameter_Calculator(HH_Object_Blood_Splash_Phenomenon_02* pThis, float* src_location, float* src_direction, unsigned int Kind)
{
	float vz0_plus;
	float vz0_range;
	float vx0_plus;
	float vx0_range;
	float mat[4][4];
	float* dst_direction;
	float* dst_location;
	float theta;
	float phai;
	float ratio;
	float v0_plus;
	float v0_range;
	unsigned int theta_range;
	unsigned int phai_range;
	ImpactQueue_Element descriptor;
	// Line 244, Address: 0x295770, Func Offset: 0
	// Line 246, Address: 0x2957b8, Func Offset: 0x48
	// Line 247, Address: 0x2957dc, Func Offset: 0x6c
	// Line 248, Address: 0x29580c, Func Offset: 0x9c
	// Line 249, Address: 0x295810, Func Offset: 0xa0
	// Line 250, Address: 0x295840, Func Offset: 0xd0
	// Line 251, Address: 0x295854, Func Offset: 0xe4
	// Line 252, Address: 0x29585c, Func Offset: 0xec
	// Line 253, Address: 0x295860, Func Offset: 0xf0
	// Line 254, Address: 0x295864, Func Offset: 0xf4
	// Line 256, Address: 0x295868, Func Offset: 0xf8
	// Line 257, Address: 0x2958b0, Func Offset: 0x140
	// Line 259, Address: 0x295924, Func Offset: 0x1b4
	// Line 260, Address: 0x295970, Func Offset: 0x200
	// Line 264, Address: 0x2959dc, Func Offset: 0x26c
	// Line 265, Address: 0x2959f4, Func Offset: 0x284
	// Line 269, Address: 0x295a04, Func Offset: 0x294
	// Line 275, Address: 0x295a14, Func Offset: 0x2a4
	// Line 276, Address: 0x295a20, Func Offset: 0x2b0
	// Line 277, Address: 0x295ae0, Func Offset: 0x370
	// Line 278, Address: 0x295ba0, Func Offset: 0x430
	// Line 279, Address: 0x295bb4, Func Offset: 0x444
	// Line 280, Address: 0x295bc8, Func Offset: 0x458
	// Line 281, Address: 0x295bd8, Func Offset: 0x468
	// Line 282, Address: 0x295be4, Func Offset: 0x474
	// Line 284, Address: 0x295bf0, Func Offset: 0x480
	// Line 285, Address: 0x295bf4, Func Offset: 0x484
	// Line 286, Address: 0x295bf8, Func Offset: 0x488
	// Line 287, Address: 0x295bfc, Func Offset: 0x48c
	// Line 288, Address: 0x295c00, Func Offset: 0x490
	// Line 289, Address: 0x295c10, Func Offset: 0x4a0
	// Line 290, Address: 0x295c20, Func Offset: 0x4b0
	// Line 292, Address: 0x295c24, Func Offset: 0x4b4
	// Line 294, Address: 0x295c98, Func Offset: 0x528
	// Line 295, Address: 0x295cb0, Func Offset: 0x540
	// Line 296, Address: 0x295cc4, Func Offset: 0x554
	// Line 298, Address: 0x295cc8, Func Offset: 0x558
	// Line 300, Address: 0x295d3c, Func Offset: 0x5cc
	// Line 301, Address: 0x295d48, Func Offset: 0x5d8
	// Line 303, Address: 0x295d54, Func Offset: 0x5e4
	// Line 306, Address: 0x295d68, Func Offset: 0x5f8
	// Line 307, Address: 0x295d6c, Func Offset: 0x5fc
	// Line 308, Address: 0x295d70, Func Offset: 0x600
	// Line 309, Address: 0x295d74, Func Offset: 0x604
	// Line 310, Address: 0x295d7c, Func Offset: 0x60c
	// Line 311, Address: 0x295d88, Func Offset: 0x618
	// Line 312, Address: 0x295da0, Func Offset: 0x630
	// Line 313, Address: 0x295dc0, Func Offset: 0x650
	// Func End, Address: 0x295e00, Func Offset: 0x690
}

// 
// Start address: 0x295e00
unsigned int HH_Class_Blood_Splash_Phenomenon_02(void* pBlock, ImpactQueue_Element* pElement)
{
	float src_direction[4];
	float src_location[4];
	unsigned int free;
	unsigned int max;
	unsigned int i;
	unsigned int count_i;
	float count;
	float diff_time;
	float current_h;
	float y_ratio;
	float def_vec[4];
	SubCharacter* pSubChar;
	unsigned int j;
	HH_Object_Blood_Splash_Phenomenon_02* pThis;
	unsigned int result;
	// Line 332, Address: 0x295e00, Func Offset: 0
	// Line 339, Address: 0x295e34, Func Offset: 0x34
	// Line 340, Address: 0x295e38, Func Offset: 0x38
	// Line 343, Address: 0x295e3c, Func Offset: 0x3c
	// Line 345, Address: 0x295e64, Func Offset: 0x64
	// Line 346, Address: 0x295e6c, Func Offset: 0x6c
	// Line 347, Address: 0x295e78, Func Offset: 0x78
	// Line 355, Address: 0x295e80, Func Offset: 0x80
	// Line 357, Address: 0x295e84, Func Offset: 0x84
	// Line 358, Address: 0x295e88, Func Offset: 0x88
	// Line 360, Address: 0x295e94, Func Offset: 0x94
	// Line 361, Address: 0x295eac, Func Offset: 0xac
	// Line 362, Address: 0x295ec0, Func Offset: 0xc0
	// Line 363, Address: 0x295ed0, Func Offset: 0xd0
	// Line 366, Address: 0x295ee0, Func Offset: 0xe0
	// Line 367, Address: 0x295ef4, Func Offset: 0xf4
	// Line 369, Address: 0x295f08, Func Offset: 0x108
	// Line 370, Address: 0x295f14, Func Offset: 0x114
	// Line 376, Address: 0x295f24, Func Offset: 0x124
	// Line 380, Address: 0x295f28, Func Offset: 0x128
	// Line 381, Address: 0x295f34, Func Offset: 0x134
	// Line 382, Address: 0x295f54, Func Offset: 0x154
	// Line 383, Address: 0x295f58, Func Offset: 0x158
	// Line 384, Address: 0x295f78, Func Offset: 0x178
	// Line 386, Address: 0x295f84, Func Offset: 0x184
	// Line 387, Address: 0x295f88, Func Offset: 0x188
	// Line 390, Address: 0x295fb0, Func Offset: 0x1b0
	// Line 391, Address: 0x295fc0, Func Offset: 0x1c0
	// Line 393, Address: 0x295fd0, Func Offset: 0x1d0
	// Line 394, Address: 0x295fdc, Func Offset: 0x1dc
	// Line 395, Address: 0x295fe0, Func Offset: 0x1e0
	// Line 396, Address: 0x295fe8, Func Offset: 0x1e8
	// Line 397, Address: 0x295fec, Func Offset: 0x1ec
	// Line 399, Address: 0x295ff0, Func Offset: 0x1f0
	// Line 403, Address: 0x295ff8, Func Offset: 0x1f8
	// Line 404, Address: 0x296000, Func Offset: 0x200
	// Line 405, Address: 0x296004, Func Offset: 0x204
	// Line 407, Address: 0x29600c, Func Offset: 0x20c
	// Line 408, Address: 0x296018, Func Offset: 0x218
	// Line 410, Address: 0x29601c, Func Offset: 0x21c
	// Line 411, Address: 0x296020, Func Offset: 0x220
	// Line 412, Address: 0x29602c, Func Offset: 0x22c
	// Line 413, Address: 0x296044, Func Offset: 0x244
	// Line 415, Address: 0x296054, Func Offset: 0x254
	// Line 417, Address: 0x29606c, Func Offset: 0x26c
	// Line 418, Address: 0x29608c, Func Offset: 0x28c
	// Line 420, Address: 0x296094, Func Offset: 0x294
	// Line 423, Address: 0x29609c, Func Offset: 0x29c
	// Line 424, Address: 0x2960a0, Func Offset: 0x2a0
	// Line 428, Address: 0x2960a4, Func Offset: 0x2a4
	// Line 429, Address: 0x2960c0, Func Offset: 0x2c0
	// Line 430, Address: 0x2960c4, Func Offset: 0x2c4
	// Func End, Address: 0x2960fc, Func Offset: 0x2fc
}

