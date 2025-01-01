typedef struct shSkelton;
typedef struct _anon0;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SubCharacter;
typedef struct HH_Object_Boat_Mask;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct Object_DataBlock_Header;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct ImpactQueue_ElementOption;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct ImpactQueue_Element;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shBattleFight;

typedef void(*type_24)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef float type_3[4][2];
typedef unsigned char type_4[20];
typedef float type_5[4][4];
typedef float type_6[4][2];
typedef float type_7[4][4];
typedef float type_8[4][4];
typedef float type_9[4][2];
typedef float type_10[2];
typedef int type_11[2];
typedef unsigned char type_12[14];
typedef int type_13[4];
typedef float type_14[4][2];
typedef unsigned int type_15[1];
typedef float type_16[4];
typedef float type_17[4][4];
typedef shAttackInfo type_18[66];
typedef unsigned char type_19[69];
typedef float type_20[4][4];
typedef float type_21[4];
typedef float type_22[4][4];
typedef float type_23[4][4];
typedef unsigned char type_26[14];
typedef unsigned char type_27[4];
typedef float type_28[4][2];
typedef unsigned char type_29[97];
typedef float type_30[4][4];

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

struct HH_Object_Boat_Mask
{
	Object_DataBlock_Header Header;
	float Timer;
	unsigned short Step;
	unsigned short Vertex_Kind;
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

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
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
	float x;
	float y;
	float z;
	float w;
};

struct _anon4
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float _square_00_vertex[4][4];
float _square_stq[4][4];
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_10_stq[4][4];
float _square_11_stq[4][4];
float _square_0x_stq_list[4][2];
float _square_1x_stq_list[4][2];
float _square_00_rgba[4][4];

unsigned int Object_Initialize(HH_Object_Boat_Mask* pThis);
unsigned int Object_Draw();
unsigned int HH_Class_Prefix_Boat_Mask();
unsigned int HH_Class_Suffix_Boat_Mask();
unsigned int HH_Class_Boat_Mask(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2981b0
unsigned int Object_Initialize(HH_Object_Boat_Mask* pThis)
{
	unsigned int result;
	// Line 206, Address: 0x2981b0, Func Offset: 0
	// Line 208, Address: 0x2981b4, Func Offset: 0x4
	// Line 209, Address: 0x2981b8, Func Offset: 0x8
	// Func End, Address: 0x2981c0, Func Offset: 0x10
}

// 
// Start address: 0x2981c0
unsigned int Object_Draw()
{
	float now_s;
	float now_x;
	float stq_list[4][2];
	float vec[4][2];
	float _lwm[4][4];
	SubCharacter* pSub_Char;
	float t_w;
	float s_w;
	float z_w;
	float x_w;
	int rgba[4];
	int xyzf[4];
	float stq[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int j;
	unsigned int i;
	unsigned int v;
	unsigned int vertex_num;
	float pStq[4];
	float Rgba[4];
	float pVertex[4];
	_anon0* pPk;
	unsigned int result;
	unsigned int div_j;
	unsigned int div_i;
	// Line 223, Address: 0x2981c0, Func Offset: 0
	// Line 225, Address: 0x2981f4, Func Offset: 0x34
	// Line 226, Address: 0x298200, Func Offset: 0x40
	// Line 227, Address: 0x298208, Func Offset: 0x48
	// Line 229, Address: 0x29821c, Func Offset: 0x5c
	// Line 238, Address: 0x298224, Func Offset: 0x64
	// Line 239, Address: 0x298284, Func Offset: 0xc4
	// Line 240, Address: 0x2982e4, Func Offset: 0x124
	// Line 241, Address: 0x29833c, Func Offset: 0x17c
	// Line 242, Address: 0x298398, Func Offset: 0x1d8
	// Line 244, Address: 0x2983a8, Func Offset: 0x1e8
	// Line 245, Address: 0x2983b0, Func Offset: 0x1f0
	// Line 250, Address: 0x2983bc, Func Offset: 0x1fc
	// Line 252, Address: 0x2983c8, Func Offset: 0x208
	// Line 258, Address: 0x2983d4, Func Offset: 0x214
	// Line 259, Address: 0x2983ec, Func Offset: 0x22c
	// Line 261, Address: 0x298400, Func Offset: 0x240
	// Line 264, Address: 0x298414, Func Offset: 0x254
	// Line 265, Address: 0x298420, Func Offset: 0x260
	// Line 268, Address: 0x298434, Func Offset: 0x274
	// Line 270, Address: 0x29843c, Func Offset: 0x27c
	// Line 272, Address: 0x29844c, Func Offset: 0x28c
	// Line 273, Address: 0x298458, Func Offset: 0x298
	// Line 279, Address: 0x2984f8, Func Offset: 0x338
	// Line 286, Address: 0x2985a8, Func Offset: 0x3e8
	// Line 287, Address: 0x2985c0, Func Offset: 0x400
	// Line 289, Address: 0x2985d0, Func Offset: 0x410
	// Line 290, Address: 0x2985d8, Func Offset: 0x418
	// Line 291, Address: 0x2985e4, Func Offset: 0x424
	// Line 292, Address: 0x298620, Func Offset: 0x460
	// Line 300, Address: 0x29865c, Func Offset: 0x49c
	// Line 301, Address: 0x298668, Func Offset: 0x4a8
	// Line 302, Address: 0x298674, Func Offset: 0x4b4
	// Line 303, Address: 0x298680, Func Offset: 0x4c0
	// Line 307, Address: 0x29868c, Func Offset: 0x4cc
	// Line 308, Address: 0x298698, Func Offset: 0x4d8
	// Line 310, Address: 0x2986b0, Func Offset: 0x4f0
	// Line 312, Address: 0x2986d0, Func Offset: 0x510
	// Line 313, Address: 0x2986e0, Func Offset: 0x520
	// Line 314, Address: 0x2986f0, Func Offset: 0x530
	// Line 315, Address: 0x298700, Func Offset: 0x540
	// Line 316, Address: 0x29870c, Func Offset: 0x54c
	// Line 317, Address: 0x29871c, Func Offset: 0x55c
	// Line 318, Address: 0x298734, Func Offset: 0x574
	// Line 319, Address: 0x298740, Func Offset: 0x580
	// Line 320, Address: 0x29875c, Func Offset: 0x59c
	// Line 322, Address: 0x298764, Func Offset: 0x5a4
	// Line 323, Address: 0x298768, Func Offset: 0x5a8
	// Func End, Address: 0x2987a4, Func Offset: 0x5e4
}

// 
// Start address: 0x2987b0
unsigned int HH_Class_Prefix_Boat_Mask()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 342, Address: 0x2987b0, Func Offset: 0
	// Line 344, Address: 0x2987bc, Func Offset: 0xc
	// Line 347, Address: 0x2987c8, Func Offset: 0x18
	// Line 348, Address: 0x2987d0, Func Offset: 0x20
	// Line 350, Address: 0x2987e4, Func Offset: 0x34
	// Line 351, Address: 0x2987ec, Func Offset: 0x3c
	// Line 354, Address: 0x2987f8, Func Offset: 0x48
	// Line 356, Address: 0x298808, Func Offset: 0x58
	// Line 359, Address: 0x298830, Func Offset: 0x80
	// Line 361, Address: 0x29884c, Func Offset: 0x9c
	// Line 373, Address: 0x298864, Func Offset: 0xb4
	// Line 374, Address: 0x298870, Func Offset: 0xc0
	// Line 376, Address: 0x298878, Func Offset: 0xc8
	// Line 377, Address: 0x29887c, Func Offset: 0xcc
	// Func End, Address: 0x298890, Func Offset: 0xe0
}

// 
// Start address: 0x298890
unsigned int HH_Class_Suffix_Boat_Mask()
{
	_anon0* pPk;
	unsigned int result;
	// Line 390, Address: 0x298890, Func Offset: 0
	// Line 392, Address: 0x29889c, Func Offset: 0xc
	// Line 394, Address: 0x2988a8, Func Offset: 0x18
	// Line 396, Address: 0x2988b0, Func Offset: 0x20
	// Line 397, Address: 0x2988b8, Func Offset: 0x28
	// Line 398, Address: 0x2988cc, Func Offset: 0x3c
	// Line 399, Address: 0x2988d8, Func Offset: 0x48
	// Line 412, Address: 0x2988f0, Func Offset: 0x60
	// Line 414, Address: 0x2988f8, Func Offset: 0x68
	// Line 415, Address: 0x2988fc, Func Offset: 0x6c
	// Func End, Address: 0x298910, Func Offset: 0x80
}

// 
// Start address: 0x298910
unsigned int HH_Class_Boat_Mask(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Boat_Mask* pThis;
	unsigned int result;
	// Line 428, Address: 0x298910, Func Offset: 0
	// Line 435, Address: 0x29891c, Func Offset: 0xc
	// Line 438, Address: 0x298920, Func Offset: 0x10
	// Line 441, Address: 0x298948, Func Offset: 0x38
	// Line 442, Address: 0x298950, Func Offset: 0x40
	// Line 443, Address: 0x298958, Func Offset: 0x48
	// Line 446, Address: 0x298960, Func Offset: 0x50
	// Line 448, Address: 0x298968, Func Offset: 0x58
	// Line 451, Address: 0x298970, Func Offset: 0x60
	// Line 452, Address: 0x298974, Func Offset: 0x64
	// Line 455, Address: 0x298978, Func Offset: 0x68
	// Line 456, Address: 0x29897c, Func Offset: 0x6c
	// Func End, Address: 0x298990, Func Offset: 0x80
}

