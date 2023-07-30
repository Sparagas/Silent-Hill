typedef struct SubCharacter;
typedef struct shBattleFight;
typedef struct shSkelton;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct ImpactQueue_ElementOption;
typedef struct ImpactQueue_Element;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _anon0;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_1)(SubCharacter*);

typedef unsigned char type_2[4];
typedef float type_3[4];
typedef float type_4[4][2];
typedef float type_5[2];
typedef int type_6[2];
typedef int type_7[4];
typedef float type_8[4];
typedef unsigned int type_9[1];
typedef shAttackInfo type_10[66];
typedef float type_11[4];
typedef float type_12[4][4];

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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon4 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon3 src_t;
	_anon4 des_m;
	_anon3 des_t;
	_anon3 axis;
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

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
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
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon4
{
	float d[4][4];
};

shAttackInfo sh2_attack_list[66];

void Prefix_Operation();
void Suffix_Operation();
void Debug_Functions();
void HH_Class_Object_Initialize();
void HH_Class_Object_Execute();
void HH_Class_Object_Packet_Kick();
void HH_Effect_Object_Blood_Pool_Impact_Post(float* Location);
void HH_Effect_Object_Blood_Splash_Impact_Post(float* Location, float* Direction, unsigned int Scp_Address, unsigned int Impact_Kind);
void HH_Effect_Object_Ground_Impact_Post(float* Toe, float* Heel, unsigned int Foot_Kind, unsigned int Character_ID);
void HH_Effect_Object_Ground_Impact_Post_forEnemy(float* Foot_Location, unsigned int Foot_Kind);
void HH_Effect_Object_WaterSplash_Impact_Post(float* Location);

// 
// Start address: 0x25a680
void Prefix_Operation()
{
	// Line 91, Address: 0x25a680, Func Offset: 0
	// Func End, Address: 0x25a688, Func Offset: 0x8
}

// 
// Start address: 0x25a690
void Suffix_Operation()
{
	// Line 98, Address: 0x25a690, Func Offset: 0
	// Func End, Address: 0x25a698, Func Offset: 0x8
}

// 
// Start address: 0x25a6a0
void Debug_Functions()
{
	// Line 111, Address: 0x25a6a0, Func Offset: 0
	// Func End, Address: 0x25a6a8, Func Offset: 0x8
}

// 
// Start address: 0x25a6b0
void HH_Class_Object_Initialize()
{
	// Line 329, Address: 0x25a6b0, Func Offset: 0
	// Line 331, Address: 0x25a6b8, Func Offset: 0x8
	// Line 334, Address: 0x25a6c0, Func Offset: 0x10
	// Line 335, Address: 0x25a6c8, Func Offset: 0x18
	// Func End, Address: 0x25a6d8, Func Offset: 0x28
}

// 
// Start address: 0x25a6e0
void HH_Class_Object_Execute()
{
	// Line 343, Address: 0x25a6e0, Func Offset: 0
	// Line 345, Address: 0x25a6e8, Func Offset: 0x8
	// Line 350, Address: 0x25a6f8, Func Offset: 0x18
	// Line 354, Address: 0x25a700, Func Offset: 0x20
	// Line 357, Address: 0x25a708, Func Offset: 0x28
	// Line 360, Address: 0x25a710, Func Offset: 0x30
	// Line 363, Address: 0x25a718, Func Offset: 0x38
	// Line 366, Address: 0x25a720, Func Offset: 0x40
	// Line 369, Address: 0x25a728, Func Offset: 0x48
	// Line 372, Address: 0x25a730, Func Offset: 0x50
	// Line 375, Address: 0x25a738, Func Offset: 0x58
	// Func End, Address: 0x25a748, Func Offset: 0x68
}

// 
// Start address: 0x25a750
void HH_Class_Object_Packet_Kick()
{
	// Line 383, Address: 0x25a750, Func Offset: 0
	// Line 384, Address: 0x25a758, Func Offset: 0x8
	// Line 389, Address: 0x25a768, Func Offset: 0x18
	// Line 390, Address: 0x25a770, Func Offset: 0x20
	// Func End, Address: 0x25a780, Func Offset: 0x30
}

// 
// Start address: 0x25a780
void HH_Effect_Object_Blood_Pool_Impact_Post(float* Location)
{
	float dir[4];
	int room_name;
	ImpactQueue_Element descriptor;
	// Line 398, Address: 0x25a780, Func Offset: 0
	// Line 401, Address: 0x25a790, Func Offset: 0x10
	// Line 403, Address: 0x25a798, Func Offset: 0x18
	// Line 421, Address: 0x25a854, Func Offset: 0xd4
	// Line 423, Address: 0x25a868, Func Offset: 0xe8
	// Line 424, Address: 0x25a870, Func Offset: 0xf0
	// Line 426, Address: 0x25a87c, Func Offset: 0xfc
	// Line 428, Address: 0x25a884, Func Offset: 0x104
	// Line 432, Address: 0x25a88c, Func Offset: 0x10c
	// Line 433, Address: 0x25a890, Func Offset: 0x110
	// Line 434, Address: 0x25a894, Func Offset: 0x114
	// Line 436, Address: 0x25a8a4, Func Offset: 0x124
	// Line 438, Address: 0x25a8bc, Func Offset: 0x13c
	// Func End, Address: 0x25a8d0, Func Offset: 0x150
}

// 
// Start address: 0x25a8d0
void HH_Effect_Object_Blood_Splash_Impact_Post(float* Location, float* Direction, unsigned int Scp_Address, unsigned int Impact_Kind)
{
	float _Direction[4];
	float _Direction[4];
	SubCharacter* pSubChar;
	ImpactQueue_Element descriptor;
	int room_name;
	// Line 468, Address: 0x25a8d0, Func Offset: 0
	// Line 470, Address: 0x25a8f8, Func Offset: 0x28
	// Line 474, Address: 0x25a900, Func Offset: 0x30
	// Line 477, Address: 0x25a920, Func Offset: 0x50
	// Line 478, Address: 0x25a928, Func Offset: 0x58
	// Line 480, Address: 0x25a930, Func Offset: 0x60
	// Line 485, Address: 0x25a938, Func Offset: 0x68
	// Line 486, Address: 0x25a93c, Func Offset: 0x6c
	// Line 494, Address: 0x25a940, Func Offset: 0x70
	// Line 495, Address: 0x25a950, Func Offset: 0x80
	// Line 497, Address: 0x25a958, Func Offset: 0x88
	// Line 498, Address: 0x25a95c, Func Offset: 0x8c
	// Line 502, Address: 0x25a964, Func Offset: 0x94
	// Line 503, Address: 0x25a97c, Func Offset: 0xac
	// Line 504, Address: 0x25a990, Func Offset: 0xc0
	// Line 505, Address: 0x25a99c, Func Offset: 0xcc
	// Line 506, Address: 0x25a9ac, Func Offset: 0xdc
	// Line 510, Address: 0x25a9b4, Func Offset: 0xe4
	// Line 518, Address: 0x25a9c4, Func Offset: 0xf4
	// Line 524, Address: 0x25a9dc, Func Offset: 0x10c
	// Line 526, Address: 0x25a9ec, Func Offset: 0x11c
	// Line 528, Address: 0x25aa04, Func Offset: 0x134
	// Func End, Address: 0x25aa24, Func Offset: 0x154
}

// 
// Start address: 0x25aa30
void HH_Effect_Object_Ground_Impact_Post(float* Toe, float* Heel, unsigned int Foot_Kind, unsigned int Character_ID)
{
	float e_pos[4];
	_CL_VHIT_RESULT hit_result;
	ImpactQueue_Element descriptor;
	int room_name;
	// Line 546, Address: 0x25aa30, Func Offset: 0
	// Line 548, Address: 0x25aa60, Func Offset: 0x30
	// Line 551, Address: 0x25aa6c, Func Offset: 0x3c
	// Line 552, Address: 0x25aa70, Func Offset: 0x40
	// Line 553, Address: 0x25aa74, Func Offset: 0x44
	// Line 554, Address: 0x25aa88, Func Offset: 0x58
	// Line 556, Address: 0x25aa98, Func Offset: 0x68
	// Line 574, Address: 0x25ab6c, Func Offset: 0x13c
	// Line 575, Address: 0x25ab74, Func Offset: 0x144
	// Line 576, Address: 0x25ab8c, Func Offset: 0x15c
	// Line 577, Address: 0x25ab98, Func Offset: 0x168
	// Line 581, Address: 0x25aba0, Func Offset: 0x170
	// Line 583, Address: 0x25abb4, Func Offset: 0x184
	// Line 585, Address: 0x25abc8, Func Offset: 0x198
	// Line 587, Address: 0x25abdc, Func Offset: 0x1ac
	// Line 589, Address: 0x25abf4, Func Offset: 0x1c4
	// Line 590, Address: 0x25ac04, Func Offset: 0x1d4
	// Line 594, Address: 0x25ac10, Func Offset: 0x1e0
	// Line 602, Address: 0x25ac18, Func Offset: 0x1e8
	// Line 603, Address: 0x25ac1c, Func Offset: 0x1ec
	// Line 604, Address: 0x25ac20, Func Offset: 0x1f0
	// Line 606, Address: 0x25ac38, Func Offset: 0x208
	// Func End, Address: 0x25ac60, Func Offset: 0x230
}

// 
// Start address: 0x25ac60
void HH_Effect_Object_Ground_Impact_Post_forEnemy(float* Foot_Location, unsigned int Foot_Kind)
{
	ImpactQueue_Element descriptor;
	int room_name;
	// Line 609, Address: 0x25ac60, Func Offset: 0
	// Line 612, Address: 0x25ac78, Func Offset: 0x18
	// Line 616, Address: 0x25ac80, Func Offset: 0x20
	// Line 631, Address: 0x25ad30, Func Offset: 0xd0
	// Line 632, Address: 0x25ad34, Func Offset: 0xd4
	// Line 633, Address: 0x25ad38, Func Offset: 0xd8
	// Line 634, Address: 0x25ad48, Func Offset: 0xe8
	// Line 636, Address: 0x25ad58, Func Offset: 0xf8
	// Line 637, Address: 0x25ad60, Func Offset: 0x100
	// Line 638, Address: 0x25ad78, Func Offset: 0x118
	// Line 644, Address: 0x25ad84, Func Offset: 0x124
	// Line 646, Address: 0x25ad88, Func Offset: 0x128
	// Line 652, Address: 0x25ada0, Func Offset: 0x140
	// Func End, Address: 0x25adb8, Func Offset: 0x158
}

// 
// Start address: 0x25adc0
void HH_Effect_Object_WaterSplash_Impact_Post(float* Location)
{
	ImpactQueue_Element descriptor;
	float hoge;
	float direction[4];
	// Line 655, Address: 0x25adc0, Func Offset: 0
	// Line 660, Address: 0x25adcc, Func Offset: 0xc
	// Line 661, Address: 0x25add0, Func Offset: 0x10
	// Line 662, Address: 0x25add4, Func Offset: 0x14
	// Line 663, Address: 0x25ade0, Func Offset: 0x20
	// Line 664, Address: 0x25adf4, Func Offset: 0x34
	// Line 665, Address: 0x25adfc, Func Offset: 0x3c
	// Line 666, Address: 0x25ae14, Func Offset: 0x54
	// Line 669, Address: 0x25ae20, Func Offset: 0x60
	// Line 671, Address: 0x25ae2c, Func Offset: 0x6c
	// Line 673, Address: 0x25ae34, Func Offset: 0x74
	// Line 675, Address: 0x25ae4c, Func Offset: 0x8c
	// Func End, Address: 0x25ae5c, Func Offset: 0x9c
}

