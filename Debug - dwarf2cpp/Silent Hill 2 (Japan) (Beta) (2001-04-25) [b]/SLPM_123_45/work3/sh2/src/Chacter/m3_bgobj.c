typedef struct _anon0;
typedef struct SubCharacter;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _AnimeInfo;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);

typedef unsigned char type_0[34];
typedef _AnimeInfo type_1[134];
typedef float type_2[4];
typedef float type_3[4][4];
typedef unsigned char type_4[10];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef unsigned char type_10[4];
typedef unsigned char type_11[10];
typedef int type_12[136];
typedef float type_13[4];
typedef unsigned char type_14[13];

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon1 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon0 b_pos;
	_anon0 b_rot;
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

	void ObjectAnimeInit(unsigned short kind, unsigned short anime);
	void ObjectFunction();
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct _anon1
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

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo bg_obj_anim[134];
int obj_anime_adr_list[136];
void(*ObjectFunction)(SubCharacter*);

int ObjectInit(SubCharacter* scp);
void ObjectAnimeInit(unsigned short kind, unsigned short anime);
void ObjectFunction();
void shCharacterSetObjectLow(SubCharacter* scp);
int shCharacterObjectAnimeSet(SubCharacter* scp, int anime_id);

// 
// Start address: 0x104f50
int ObjectInit(SubCharacter* scp)
{
	// Line 201, Address: 0x104f50, Func Offset: 0
	// Line 202, Address: 0x104f5c, Func Offset: 0xc
	// Line 203, Address: 0x104f6c, Func Offset: 0x1c
	// Line 204, Address: 0x104f70, Func Offset: 0x20
	// Func End, Address: 0x104f80, Func Offset: 0x30
}

// 
// Start address: 0x104f80
void SubCharacter::ObjectAnimeInit(unsigned short kind, unsigned short anime)
{
	_AnimeInfo* aip;
	// Line 213, Address: 0x104f80, Func Offset: 0
	// Line 216, Address: 0x104f98, Func Offset: 0x18
	// Line 217, Address: 0x104fac, Func Offset: 0x2c
	// Line 218, Address: 0x104fd0, Func Offset: 0x50
	// Line 226, Address: 0x105024, Func Offset: 0xa4
	// Func End, Address: 0x105038, Func Offset: 0xb8
}

// 
// Start address: 0x105040
void SubCharacter::ObjectFunction()
{
	short id;
	// Line 237, Address: 0x105040, Func Offset: 0
	// Line 242, Address: 0x105050, Func Offset: 0x10
	// Line 247, Address: 0x105074, Func Offset: 0x34
	// Line 249, Address: 0x105088, Func Offset: 0x48
	// Line 252, Address: 0x105094, Func Offset: 0x54
	// Line 254, Address: 0x1050c8, Func Offset: 0x88
	// Line 255, Address: 0x1050dc, Func Offset: 0x9c
	// Line 257, Address: 0x1050e4, Func Offset: 0xa4
	// Line 258, Address: 0x1050f8, Func Offset: 0xb8
	// Line 260, Address: 0x105100, Func Offset: 0xc0
	// Line 261, Address: 0x105114, Func Offset: 0xd4
	// Line 263, Address: 0x10511c, Func Offset: 0xdc
	// Line 264, Address: 0x105130, Func Offset: 0xf0
	// Line 266, Address: 0x105138, Func Offset: 0xf8
	// Line 267, Address: 0x10514c, Func Offset: 0x10c
	// Line 269, Address: 0x105154, Func Offset: 0x114
	// Line 270, Address: 0x105168, Func Offset: 0x128
	// Line 272, Address: 0x105170, Func Offset: 0x130
	// Line 273, Address: 0x105184, Func Offset: 0x144
	// Line 275, Address: 0x10518c, Func Offset: 0x14c
	// Line 276, Address: 0x1051a0, Func Offset: 0x160
	// Line 278, Address: 0x1051a8, Func Offset: 0x168
	// Line 279, Address: 0x1051bc, Func Offset: 0x17c
	// Line 281, Address: 0x1051c4, Func Offset: 0x184
	// Line 282, Address: 0x1051d8, Func Offset: 0x198
	// Line 284, Address: 0x1051e0, Func Offset: 0x1a0
	// Line 285, Address: 0x1051f4, Func Offset: 0x1b4
	// Line 287, Address: 0x1051fc, Func Offset: 0x1bc
	// Line 288, Address: 0x105210, Func Offset: 0x1d0
	// Line 290, Address: 0x105218, Func Offset: 0x1d8
	// Line 291, Address: 0x10522c, Func Offset: 0x1ec
	// Line 293, Address: 0x105234, Func Offset: 0x1f4
	// Line 294, Address: 0x105248, Func Offset: 0x208
	// Line 296, Address: 0x105250, Func Offset: 0x210
	// Line 297, Address: 0x105264, Func Offset: 0x224
	// Line 299, Address: 0x10526c, Func Offset: 0x22c
	// Line 300, Address: 0x105280, Func Offset: 0x240
	// Line 302, Address: 0x105288, Func Offset: 0x248
	// Line 303, Address: 0x10529c, Func Offset: 0x25c
	// Line 305, Address: 0x1052a4, Func Offset: 0x264
	// Line 306, Address: 0x1052b8, Func Offset: 0x278
	// Line 308, Address: 0x1052c0, Func Offset: 0x280
	// Line 309, Address: 0x1052d4, Func Offset: 0x294
	// Line 311, Address: 0x1052dc, Func Offset: 0x29c
	// Line 312, Address: 0x1052f0, Func Offset: 0x2b0
	// Line 314, Address: 0x1052f8, Func Offset: 0x2b8
	// Line 315, Address: 0x10530c, Func Offset: 0x2cc
	// Line 317, Address: 0x105314, Func Offset: 0x2d4
	// Line 318, Address: 0x105328, Func Offset: 0x2e8
	// Line 320, Address: 0x105330, Func Offset: 0x2f0
	// Line 321, Address: 0x105344, Func Offset: 0x304
	// Line 323, Address: 0x10534c, Func Offset: 0x30c
	// Line 324, Address: 0x105360, Func Offset: 0x320
	// Line 326, Address: 0x105368, Func Offset: 0x328
	// Line 327, Address: 0x10537c, Func Offset: 0x33c
	// Line 329, Address: 0x105384, Func Offset: 0x344
	// Line 330, Address: 0x105398, Func Offset: 0x358
	// Line 332, Address: 0x1053a0, Func Offset: 0x360
	// Line 333, Address: 0x1053b4, Func Offset: 0x374
	// Line 335, Address: 0x1053bc, Func Offset: 0x37c
	// Line 336, Address: 0x1053d0, Func Offset: 0x390
	// Line 338, Address: 0x1053d8, Func Offset: 0x398
	// Line 339, Address: 0x1053ec, Func Offset: 0x3ac
	// Line 341, Address: 0x1053f4, Func Offset: 0x3b4
	// Line 342, Address: 0x105408, Func Offset: 0x3c8
	// Line 344, Address: 0x105410, Func Offset: 0x3d0
	// Line 345, Address: 0x105424, Func Offset: 0x3e4
	// Line 347, Address: 0x10542c, Func Offset: 0x3ec
	// Line 348, Address: 0x105440, Func Offset: 0x400
	// Line 350, Address: 0x105448, Func Offset: 0x408
	// Line 353, Address: 0x10545c, Func Offset: 0x41c
	// Line 359, Address: 0x10546c, Func Offset: 0x42c
	// Func End, Address: 0x105480, Func Offset: 0x440
}

// 
// Start address: 0x105480
void shCharacterSetObjectLow(SubCharacter* scp)
{
	// Line 374, Address: 0x105480, Func Offset: 0
	// Line 375, Address: 0x10548c, Func Offset: 0xc
	// Line 376, Address: 0x1054a0, Func Offset: 0x20
	// Func End, Address: 0x1054b0, Func Offset: 0x30
}

// 
// Start address: 0x1054b0
int shCharacterObjectAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 389, Address: 0x1054b0, Func Offset: 0
	// Line 393, Address: 0x1054c8, Func Offset: 0x18
	// Line 395, Address: 0x1054dc, Func Offset: 0x2c
	// Line 396, Address: 0x1054f4, Func Offset: 0x44
	// Line 397, Address: 0x105514, Func Offset: 0x64
	// Line 405, Address: 0x105560, Func Offset: 0xb0
	// Line 407, Address: 0x10556c, Func Offset: 0xbc
	// Line 409, Address: 0x105570, Func Offset: 0xc0
	// Func End, Address: 0x105588, Func Offset: 0xd8
}

