typedef struct shSkelton;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon1;
typedef struct _shLakeWaveInfo;
typedef union _anon2;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _anon3;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[2];
typedef shAttackInfo type_3[66];
typedef float type_4[4];
typedef _shLakeWaveInfo type_7[20];
typedef unsigned char type_8[4];
typedef float type_9[4];

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon3 src_t;
	_anon1 des_m;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

struct _anon1
{
	float d[4][4];
};

struct _shLakeWaveInfo
{
	float distance[2];
	float energy;
	float timer;
	char prev;
	char next;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
_anon3 base_point;
int newest_wave;
int rand_seed;
_shLakeWaveInfo wave[20];

void mizTestLakeWaveInit();
_shLakeWaveInfo* mizTestLakeWaveMain(SubCharacter* scp);

// 
// Start address: 0x26ef30
void mizTestLakeWaveInit()
{
	int i1;
	// Line 98, Address: 0x26ef30, Func Offset: 0
	// Line 102, Address: 0x26ef3c, Func Offset: 0xc
	// Line 106, Address: 0x26ef70, Func Offset: 0x40
	// Line 110, Address: 0x26ef90, Func Offset: 0x60
	// Line 116, Address: 0x26efb8, Func Offset: 0x88
	// Line 118, Address: 0x26efec, Func Offset: 0xbc
	// Line 119, Address: 0x26f000, Func Offset: 0xd0
	// Line 120, Address: 0x26f014, Func Offset: 0xe4
	// Line 121, Address: 0x26f024, Func Offset: 0xf4
	// Line 122, Address: 0x26f030, Func Offset: 0x100
	// Line 123, Address: 0x26f038, Func Offset: 0x108
	// Line 124, Address: 0x26f040, Func Offset: 0x110
	// Line 128, Address: 0x26f048, Func Offset: 0x118
	// Func End, Address: 0x26f050, Func Offset: 0x120
}

// 
// Start address: 0x26f050
_shLakeWaveInfo* mizTestLakeWaveMain(SubCharacter* scp)
{
	float distance;
	float angle;
	float pos_z;
	float pos_x;
	int i1;
	// Line 140, Address: 0x26f050, Func Offset: 0
	// Line 146, Address: 0x26f080, Func Offset: 0x30
	// Line 150, Address: 0x26f0c4, Func Offset: 0x74
	// Line 151, Address: 0x26f0d0, Func Offset: 0x80
	// Line 156, Address: 0x26f0fc, Func Offset: 0xac
	// Line 157, Address: 0x26f11c, Func Offset: 0xcc
	// Line 158, Address: 0x26f144, Func Offset: 0xf4
	// Line 159, Address: 0x26f178, Func Offset: 0x128
	// Line 163, Address: 0x26f198, Func Offset: 0x148
	// Line 164, Address: 0x26f1a0, Func Offset: 0x150
	// Line 165, Address: 0x26f1a4, Func Offset: 0x154
	// Line 166, Address: 0x26f1ac, Func Offset: 0x15c
	// Line 167, Address: 0x26f1b0, Func Offset: 0x160
	// Line 174, Address: 0x26f228, Func Offset: 0x1d8
	// Line 176, Address: 0x26f23c, Func Offset: 0x1ec
	// Line 181, Address: 0x26f27c, Func Offset: 0x22c
	// Line 182, Address: 0x26f298, Func Offset: 0x248
	// Line 184, Address: 0x26f2ac, Func Offset: 0x25c
	// Line 189, Address: 0x26f2bc, Func Offset: 0x26c
	// Line 190, Address: 0x26f2c8, Func Offset: 0x278
	// Line 192, Address: 0x26f304, Func Offset: 0x2b4
	// Line 199, Address: 0x26f34c, Func Offset: 0x2fc
	// Line 202, Address: 0x26f378, Func Offset: 0x328
	// Line 204, Address: 0x26f39c, Func Offset: 0x34c
	// Line 208, Address: 0x26f3b0, Func Offset: 0x360
	// Line 209, Address: 0x26f3c4, Func Offset: 0x374
	// Line 210, Address: 0x26f404, Func Offset: 0x3b4
	// Line 214, Address: 0x26f410, Func Offset: 0x3c0
	// Line 215, Address: 0x26f44c, Func Offset: 0x3fc
	// Line 217, Address: 0x26f470, Func Offset: 0x420
	// Line 219, Address: 0x26f4ac, Func Offset: 0x45c
	// Line 220, Address: 0x26f4b0, Func Offset: 0x460
	// Func End, Address: 0x26f4e4, Func Offset: 0x494
}

