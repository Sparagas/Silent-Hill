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
typedef struct HH_Object_Blood_Splash_Phenomenon_00;
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

unsigned int Object_Initialize(HH_Object_Blood_Splash_Phenomenon_00* pThis, ImpactQueue_Element* pElement);
void Impact_Parameter_Calculator(HH_Object_Blood_Splash_Phenomenon_00* pThis, float* src_location, float* src_direction, unsigned int Kind);
unsigned int HH_Class_Blood_Splash_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x256370
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
	// Line 159, Address: 0x256370, Func Offset: 0
	// Line 164, Address: 0x256390, Func Offset: 0x20
	// Line 166, Address: 0x256394, Func Offset: 0x24
	// Line 167, Address: 0x256398, Func Offset: 0x28
	// Line 169, Address: 0x25639c, Func Offset: 0x2c
	// Line 170, Address: 0x2563a0, Func Offset: 0x30
	// Line 174, Address: 0x2563a4, Func Offset: 0x34
	// Line 177, Address: 0x2563a8, Func Offset: 0x38
	// Line 179, Address: 0x2563b8, Func Offset: 0x48
	// Line 182, Address: 0x2563c4, Func Offset: 0x54
	// Line 184, Address: 0x2563c8, Func Offset: 0x58
	// Line 186, Address: 0x2563cc, Func Offset: 0x5c
	// Line 189, Address: 0x2563e8, Func Offset: 0x78
	// Line 190, Address: 0x256410, Func Offset: 0xa0
	// Line 191, Address: 0x256428, Func Offset: 0xb8
	// Line 195, Address: 0x256430, Func Offset: 0xc0
	// Line 198, Address: 0x256448, Func Offset: 0xd8
	// Line 206, Address: 0x256454, Func Offset: 0xe4
	// Line 207, Address: 0x256464, Func Offset: 0xf4
	// Line 208, Address: 0x256468, Func Offset: 0xf8
	// Line 209, Address: 0x256478, Func Offset: 0x108
	// Line 210, Address: 0x256490, Func Offset: 0x120
	// Line 215, Address: 0x2564a4, Func Offset: 0x134
	// Line 216, Address: 0x2564a8, Func Offset: 0x138
	// Line 217, Address: 0x2564c8, Func Offset: 0x158
	// Line 224, Address: 0x2564d4, Func Offset: 0x164
	// Line 226, Address: 0x2564d8, Func Offset: 0x168
	// Line 229, Address: 0x2564e0, Func Offset: 0x170
	// Line 230, Address: 0x2564e4, Func Offset: 0x174
	// Func End, Address: 0x256504, Func Offset: 0x194
}

// 
// Start address: 0x256510
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
	// Line 243, Address: 0x256510, Func Offset: 0
	// Line 245, Address: 0x256558, Func Offset: 0x48
	// Line 246, Address: 0x25657c, Func Offset: 0x6c
	// Line 247, Address: 0x2565ac, Func Offset: 0x9c
	// Line 248, Address: 0x2565b0, Func Offset: 0xa0
	// Line 249, Address: 0x2565e0, Func Offset: 0xd0
	// Line 250, Address: 0x2565f4, Func Offset: 0xe4
	// Line 251, Address: 0x2565fc, Func Offset: 0xec
	// Line 252, Address: 0x256600, Func Offset: 0xf0
	// Line 253, Address: 0x256604, Func Offset: 0xf4
	// Line 255, Address: 0x256608, Func Offset: 0xf8
	// Line 256, Address: 0x256650, Func Offset: 0x140
	// Line 258, Address: 0x2566c4, Func Offset: 0x1b4
	// Line 259, Address: 0x256710, Func Offset: 0x200
	// Line 263, Address: 0x25677c, Func Offset: 0x26c
	// Line 264, Address: 0x256794, Func Offset: 0x284
	// Line 268, Address: 0x2567a4, Func Offset: 0x294
	// Line 274, Address: 0x2567b4, Func Offset: 0x2a4
	// Line 275, Address: 0x2567c0, Func Offset: 0x2b0
	// Line 276, Address: 0x256880, Func Offset: 0x370
	// Line 277, Address: 0x256940, Func Offset: 0x430
	// Line 278, Address: 0x256954, Func Offset: 0x444
	// Line 279, Address: 0x256968, Func Offset: 0x458
	// Line 280, Address: 0x256978, Func Offset: 0x468
	// Line 281, Address: 0x256984, Func Offset: 0x474
	// Line 283, Address: 0x256990, Func Offset: 0x480
	// Line 284, Address: 0x256994, Func Offset: 0x484
	// Line 285, Address: 0x256998, Func Offset: 0x488
	// Line 286, Address: 0x25699c, Func Offset: 0x48c
	// Line 287, Address: 0x2569a0, Func Offset: 0x490
	// Line 288, Address: 0x2569b0, Func Offset: 0x4a0
	// Line 289, Address: 0x2569c0, Func Offset: 0x4b0
	// Line 291, Address: 0x2569c4, Func Offset: 0x4b4
	// Line 293, Address: 0x256a38, Func Offset: 0x528
	// Line 294, Address: 0x256a50, Func Offset: 0x540
	// Line 295, Address: 0x256a64, Func Offset: 0x554
	// Line 297, Address: 0x256a68, Func Offset: 0x558
	// Line 299, Address: 0x256adc, Func Offset: 0x5cc
	// Line 300, Address: 0x256ae8, Func Offset: 0x5d8
	// Line 302, Address: 0x256af4, Func Offset: 0x5e4
	// Line 305, Address: 0x256b08, Func Offset: 0x5f8
	// Line 306, Address: 0x256b0c, Func Offset: 0x5fc
	// Line 307, Address: 0x256b10, Func Offset: 0x600
	// Line 308, Address: 0x256b14, Func Offset: 0x604
	// Line 309, Address: 0x256b1c, Func Offset: 0x60c
	// Line 310, Address: 0x256b28, Func Offset: 0x618
	// Line 311, Address: 0x256b40, Func Offset: 0x630
	// Line 312, Address: 0x256b60, Func Offset: 0x650
	// Func End, Address: 0x256ba0, Func Offset: 0x690
}

// 
// Start address: 0x256ba0
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
	// Line 331, Address: 0x256ba0, Func Offset: 0
	// Line 338, Address: 0x256bd0, Func Offset: 0x30
	// Line 339, Address: 0x256bd4, Func Offset: 0x34
	// Line 342, Address: 0x256bd8, Func Offset: 0x38
	// Line 344, Address: 0x256c00, Func Offset: 0x60
	// Line 345, Address: 0x256c08, Func Offset: 0x68
	// Line 346, Address: 0x256c14, Func Offset: 0x74
	// Line 354, Address: 0x256c1c, Func Offset: 0x7c
	// Line 356, Address: 0x256c20, Func Offset: 0x80
	// Line 358, Address: 0x256c24, Func Offset: 0x84
	// Line 359, Address: 0x256c38, Func Offset: 0x98
	// Line 361, Address: 0x256c44, Func Offset: 0xa4
	// Line 362, Address: 0x256c58, Func Offset: 0xb8
	// Line 363, Address: 0x256c6c, Func Offset: 0xcc
	// Line 367, Address: 0x256c78, Func Offset: 0xd8
	// Line 370, Address: 0x256c80, Func Offset: 0xe0
	// Line 371, Address: 0x256c8c, Func Offset: 0xec
	// Line 372, Address: 0x256cac, Func Offset: 0x10c
	// Line 373, Address: 0x256cb0, Func Offset: 0x110
	// Line 374, Address: 0x256cd0, Func Offset: 0x130
	// Line 376, Address: 0x256cdc, Func Offset: 0x13c
	// Line 377, Address: 0x256ce0, Func Offset: 0x140
	// Line 380, Address: 0x256d08, Func Offset: 0x168
	// Line 381, Address: 0x256d18, Func Offset: 0x178
	// Line 383, Address: 0x256d28, Func Offset: 0x188
	// Line 384, Address: 0x256d34, Func Offset: 0x194
	// Line 385, Address: 0x256d38, Func Offset: 0x198
	// Line 386, Address: 0x256d40, Func Offset: 0x1a0
	// Line 387, Address: 0x256d44, Func Offset: 0x1a4
	// Line 389, Address: 0x256d48, Func Offset: 0x1a8
	// Line 393, Address: 0x256d50, Func Offset: 0x1b0
	// Line 394, Address: 0x256d58, Func Offset: 0x1b8
	// Line 395, Address: 0x256d5c, Func Offset: 0x1bc
	// Line 397, Address: 0x256d64, Func Offset: 0x1c4
	// Line 398, Address: 0x256d70, Func Offset: 0x1d0
	// Line 400, Address: 0x256d74, Func Offset: 0x1d4
	// Line 401, Address: 0x256d78, Func Offset: 0x1d8
	// Line 402, Address: 0x256d84, Func Offset: 0x1e4
	// Line 403, Address: 0x256d9c, Func Offset: 0x1fc
	// Line 405, Address: 0x256dac, Func Offset: 0x20c
	// Line 407, Address: 0x256dc4, Func Offset: 0x224
	// Line 408, Address: 0x256de4, Func Offset: 0x244
	// Line 410, Address: 0x256dec, Func Offset: 0x24c
	// Line 413, Address: 0x256df4, Func Offset: 0x254
	// Line 414, Address: 0x256df8, Func Offset: 0x258
	// Line 418, Address: 0x256dfc, Func Offset: 0x25c
	// Line 419, Address: 0x256e18, Func Offset: 0x278
	// Line 420, Address: 0x256e1c, Func Offset: 0x27c
	// Func End, Address: 0x256e50, Func Offset: 0x2b0
}

