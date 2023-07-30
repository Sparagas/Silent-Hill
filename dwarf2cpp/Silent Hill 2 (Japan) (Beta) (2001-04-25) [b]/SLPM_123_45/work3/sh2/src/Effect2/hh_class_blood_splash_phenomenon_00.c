typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef struct ImpactQueue_Element;
typedef struct _CL_VHIT_RESULT;
typedef struct _CL_HITPOLY_HEAD;
typedef union _anon0;
typedef struct HH_Object_Blood_Splash_Phenomenon_00;
typedef struct _anon1;
typedef struct _anon2;
typedef struct shSkelton;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shAttackInfo;
typedef struct Object_DataBlock_Header;
typedef struct _CL_VHIT_WALL;
typedef struct ImpactQueue_ElementOption;
typedef union _anon3;

typedef void(*type_11)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef float type_0[4][2];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[2];
typedef float type_4[2];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef float type_10[4];
typedef shAttackInfo type_12[46];
typedef float type_13[2];
typedef unsigned short type_15[2];
typedef unsigned char type_16[4];
typedef float type_17[2];

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon2 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon1 b_pos;
	_anon1 b_rot;
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

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
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

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct HH_Object_Blood_Splash_Phenomenon_00
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon2
{
	float d[4][4];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
	_anon1 des_t;
	_anon1 axis;
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
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon3 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[46];
float _unit_vector_x[4];
float _unit_vector_z[4];
float _discharge_full_number[2];
float _discharge_number[2];
float _discharge_time[2];

unsigned int Object_Initialize(HH_Object_Blood_Splash_Phenomenon_00* pThis, ImpactQueue_Element* pElement);
void Impact_Parameter_Calculator(HH_Object_Blood_Splash_Phenomenon_00* pThis, float* src_location, float* src_direction, unsigned int Kind);
unsigned int HH_Class_Blood_Splash_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x245750
unsigned int Object_Initialize(HH_Object_Blood_Splash_Phenomenon_00* pThis, ImpactQueue_Element* pElement)
{
	SubCharacter* pSubChar;
	float lambda_2;
	float lambda_1;
	float p_xz[4];
	float* src_direction;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 150, Address: 0x245750, Func Offset: 0
	// Line 151, Address: 0x24576c, Func Offset: 0x1c
	// Line 155, Address: 0x245770, Func Offset: 0x20
	// Line 157, Address: 0x24577c, Func Offset: 0x2c
	// Line 158, Address: 0x245788, Func Offset: 0x38
	// Line 160, Address: 0x245794, Func Offset: 0x44
	// Line 161, Address: 0x24579c, Func Offset: 0x4c
	// Line 165, Address: 0x2457a4, Func Offset: 0x54
	// Line 168, Address: 0x2457ac, Func Offset: 0x5c
	// Line 169, Address: 0x2457c0, Func Offset: 0x70
	// Line 171, Address: 0x2457d0, Func Offset: 0x80
	// Line 173, Address: 0x2457dc, Func Offset: 0x8c
	// Line 175, Address: 0x2457e4, Func Offset: 0x94
	// Line 178, Address: 0x245824, Func Offset: 0xd4
	// Line 179, Address: 0x245854, Func Offset: 0x104
	// Line 180, Address: 0x245874, Func Offset: 0x124
	// Line 184, Address: 0x245888, Func Offset: 0x138
	// Line 187, Address: 0x2458a8, Func Offset: 0x158
	// Line 195, Address: 0x2458bc, Func Offset: 0x16c
	// Line 196, Address: 0x2458cc, Func Offset: 0x17c
	// Line 197, Address: 0x2458d8, Func Offset: 0x188
	// Line 198, Address: 0x2458e8, Func Offset: 0x198
	// Line 199, Address: 0x245900, Func Offset: 0x1b0
	// Line 204, Address: 0x245918, Func Offset: 0x1c8
	// Line 205, Address: 0x245924, Func Offset: 0x1d4
	// Line 206, Address: 0x245948, Func Offset: 0x1f8
	// Line 213, Address: 0x24595c, Func Offset: 0x20c
	// Line 215, Address: 0x245964, Func Offset: 0x214
	// Line 218, Address: 0x245970, Func Offset: 0x220
	// Line 219, Address: 0x245974, Func Offset: 0x224
	// Func End, Address: 0x245990, Func Offset: 0x240
}

// 
// Start address: 0x245990
void Impact_Parameter_Calculator(HH_Object_Blood_Splash_Phenomenon_00* pThis, float* src_location, float* src_direction, unsigned int Kind)
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
	// Line 232, Address: 0x245990, Func Offset: 0
	// Line 234, Address: 0x2459bc, Func Offset: 0x2c
	// Line 235, Address: 0x2459e4, Func Offset: 0x54
	// Line 236, Address: 0x245a18, Func Offset: 0x88
	// Line 237, Address: 0x245a24, Func Offset: 0x94
	// Line 238, Address: 0x245a9c, Func Offset: 0x10c
	// Line 239, Address: 0x245abc, Func Offset: 0x12c
	// Line 240, Address: 0x245ac8, Func Offset: 0x138
	// Line 241, Address: 0x245ad4, Func Offset: 0x144
	// Line 242, Address: 0x245ad8, Func Offset: 0x148
	// Line 244, Address: 0x245adc, Func Offset: 0x14c
	// Line 245, Address: 0x245b28, Func Offset: 0x198
	// Line 247, Address: 0x245ba8, Func Offset: 0x218
	// Line 248, Address: 0x245bf4, Func Offset: 0x264
	// Line 252, Address: 0x245c68, Func Offset: 0x2d8
	// Line 253, Address: 0x245c84, Func Offset: 0x2f4
	// Line 257, Address: 0x245c98, Func Offset: 0x308
	// Line 263, Address: 0x245ca8, Func Offset: 0x318
	// Line 264, Address: 0x245cb4, Func Offset: 0x324
	// Line 265, Address: 0x245dac, Func Offset: 0x41c
	// Line 266, Address: 0x245ea4, Func Offset: 0x514
	// Line 267, Address: 0x245eb8, Func Offset: 0x528
	// Line 268, Address: 0x245ecc, Func Offset: 0x53c
	// Line 269, Address: 0x245edc, Func Offset: 0x54c
	// Line 270, Address: 0x245eec, Func Offset: 0x55c
	// Line 272, Address: 0x245efc, Func Offset: 0x56c
	// Line 273, Address: 0x245f04, Func Offset: 0x574
	// Line 274, Address: 0x245f10, Func Offset: 0x580
	// Line 275, Address: 0x245f18, Func Offset: 0x588
	// Line 276, Address: 0x245f24, Func Offset: 0x594
	// Line 277, Address: 0x245f3c, Func Offset: 0x5ac
	// Line 278, Address: 0x245f58, Func Offset: 0x5c8
	// Line 280, Address: 0x245f64, Func Offset: 0x5d4
	// Line 282, Address: 0x245fdc, Func Offset: 0x64c
	// Line 283, Address: 0x245ff4, Func Offset: 0x664
	// Line 284, Address: 0x246010, Func Offset: 0x680
	// Line 286, Address: 0x24601c, Func Offset: 0x68c
	// Line 288, Address: 0x246094, Func Offset: 0x704
	// Line 289, Address: 0x2460a4, Func Offset: 0x714
	// Line 291, Address: 0x2460b4, Func Offset: 0x724
	// Line 294, Address: 0x2460c8, Func Offset: 0x738
	// Line 295, Address: 0x2460d0, Func Offset: 0x740
	// Line 296, Address: 0x2460d4, Func Offset: 0x744
	// Line 297, Address: 0x2460dc, Func Offset: 0x74c
	// Line 298, Address: 0x2460e8, Func Offset: 0x758
	// Line 299, Address: 0x246104, Func Offset: 0x774
	// Line 300, Address: 0x246138, Func Offset: 0x7a8
	// Func End, Address: 0x24615c, Func Offset: 0x7cc
}

// 
// Start address: 0x246160
unsigned int HH_Class_Blood_Splash_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float src_direction[4];
	float src_location[4];
	unsigned int free;
	unsigned int max;
	unsigned int i;
	unsigned int count_i;
	float count;
	float diff_time;
	float y_ratio;
	float def_vec[4];
	SubCharacter* pSubChar;
	unsigned int j;
	HH_Object_Blood_Splash_Phenomenon_00* pThis;
	unsigned int result;
	// Line 319, Address: 0x246160, Func Offset: 0
	// Line 326, Address: 0x246194, Func Offset: 0x34
	// Line 327, Address: 0x246198, Func Offset: 0x38
	// Line 328, Address: 0x24619c, Func Offset: 0x3c
	// Line 330, Address: 0x2461a0, Func Offset: 0x40
	// Line 332, Address: 0x2461cc, Func Offset: 0x6c
	// Line 333, Address: 0x2461dc, Func Offset: 0x7c
	// Line 334, Address: 0x2461e8, Func Offset: 0x88
	// Line 342, Address: 0x2461f0, Func Offset: 0x90
	// Line 344, Address: 0x2461f8, Func Offset: 0x98
	// Line 346, Address: 0x246204, Func Offset: 0xa4
	// Line 347, Address: 0x246224, Func Offset: 0xc4
	// Line 349, Address: 0x246238, Func Offset: 0xd8
	// Line 350, Address: 0x24624c, Func Offset: 0xec
	// Line 351, Address: 0x246268, Func Offset: 0x108
	// Line 355, Address: 0x24627c, Func Offset: 0x11c
	// Line 358, Address: 0x246288, Func Offset: 0x128
	// Line 359, Address: 0x246294, Func Offset: 0x134
	// Line 360, Address: 0x2462b4, Func Offset: 0x154
	// Line 361, Address: 0x2462cc, Func Offset: 0x16c
	// Line 362, Address: 0x2462f0, Func Offset: 0x190
	// Line 364, Address: 0x246300, Func Offset: 0x1a0
	// Line 365, Address: 0x246304, Func Offset: 0x1a4
	// Line 368, Address: 0x246334, Func Offset: 0x1d4
	// Line 369, Address: 0x246348, Func Offset: 0x1e8
	// Line 371, Address: 0x24635c, Func Offset: 0x1fc
	// Line 372, Address: 0x246368, Func Offset: 0x208
	// Line 373, Address: 0x246374, Func Offset: 0x214
	// Line 374, Address: 0x246384, Func Offset: 0x224
	// Line 377, Address: 0x246390, Func Offset: 0x230
	// Line 381, Address: 0x246398, Func Offset: 0x238
	// Line 382, Address: 0x2463a4, Func Offset: 0x244
	// Line 383, Address: 0x2463a8, Func Offset: 0x248
	// Line 385, Address: 0x2463b0, Func Offset: 0x250
	// Line 386, Address: 0x2463bc, Func Offset: 0x25c
	// Line 389, Address: 0x2463c0, Func Offset: 0x260
	// Line 390, Address: 0x2463cc, Func Offset: 0x26c
	// Line 391, Address: 0x2463e4, Func Offset: 0x284
	// Line 392, Address: 0x2463f4, Func Offset: 0x294
	// Line 393, Address: 0x2463f8, Func Offset: 0x298
	// Line 395, Address: 0x24640c, Func Offset: 0x2ac
	// Line 396, Address: 0x24642c, Func Offset: 0x2cc
	// Line 398, Address: 0x246434, Func Offset: 0x2d4
	// Line 401, Address: 0x24643c, Func Offset: 0x2dc
	// Line 402, Address: 0x246440, Func Offset: 0x2e0
	// Line 406, Address: 0x246444, Func Offset: 0x2e4
	// Line 407, Address: 0x246460, Func Offset: 0x300
	// Line 408, Address: 0x246464, Func Offset: 0x304
	// Func End, Address: 0x246498, Func Offset: 0x338
}

