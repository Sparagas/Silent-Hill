typedef struct SubCharacter;
typedef struct _anon0;
typedef struct SubCharacterDisp;
typedef struct shSkelton;
typedef struct _USXY;
typedef struct _SXY;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shAnime3d;
typedef struct shClusterAnime;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _AnimeInfo;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct shItemScreenObjectSettingData;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[34];
typedef float type_2[4];
typedef float type_3[4][4];
typedef shItemScreenObjectSettingData type_4[58];
typedef unsigned char type_5[10];
typedef float type_8[4];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef void* type_12[3];
typedef unsigned char type_13[10];
typedef float type_15[4];

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

	void ItemScreenItemFunction();
	void WorldScreenItemFunction();
	void shCharacterWorldScreenObjectSet(float scale);
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct SubCharacterDisp
{
	SubCharacter sc;
	shAnime3d anime2;
	shAnime3d anime;
	shClusterAnime* cluster_anime;
	void* models[3];
	void* work;
	void* data;
	unsigned int model_adr;
	unsigned int anime_adr;
	unsigned int clani_adr;
	void* anime_list;
	void* clani_list;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _SXY
{
	short x;
	short y;
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

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
};

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
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

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon0 rot;
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
shItemScreenObjectSettingData item_screen_obj_data[58];
void(*ItemScreenItemFunction)(SubCharacter*);
void(*WorldScreenItemFunction)(SubCharacter*);

int shCharacterItemScreenItemInit(SubCharacter* scp);
int shCharacterWorldScreenItemInit(SubCharacter* scp);
void ItemScreenItemFunction();
void WorldScreenItemFunction();
void shCharacterWorldScreenObjectSet(float scale);
void shCharacterSetItemScreenItemLow(SubCharacter* scp);
void shCharacterSetWorldScreenItemLow(SubCharacter* scp);

// 
// Start address: 0x103bb0
int shCharacterItemScreenItemInit(SubCharacter* scp)
{
	// Line 39, Address: 0x103bb0, Func Offset: 0
	// Line 41, Address: 0x103bbc, Func Offset: 0xc
	// Line 42, Address: 0x103bcc, Func Offset: 0x1c
	// Line 43, Address: 0x103bd0, Func Offset: 0x20
	// Func End, Address: 0x103be0, Func Offset: 0x30
}

// 
// Start address: 0x103be0
int shCharacterWorldScreenItemInit(SubCharacter* scp)
{
	// Line 45, Address: 0x103be0, Func Offset: 0
	// Line 46, Address: 0x103bec, Func Offset: 0xc
	// Line 47, Address: 0x103bfc, Func Offset: 0x1c
	// Line 48, Address: 0x103c00, Func Offset: 0x20
	// Func End, Address: 0x103c10, Func Offset: 0x30
}

// 
// Start address: 0x103c10
void SubCharacter::ItemScreenItemFunction()
{
	int i1;
	// Line 62, Address: 0x103c10, Func Offset: 0
	// Line 67, Address: 0x103c20, Func Offset: 0x10
	// Line 69, Address: 0x103c40, Func Offset: 0x30
	// Line 71, Address: 0x103c4c, Func Offset: 0x3c
	// Line 72, Address: 0x103c50, Func Offset: 0x40
	// Line 73, Address: 0x103c58, Func Offset: 0x48
	// Line 74, Address: 0x103c80, Func Offset: 0x70
	// Line 75, Address: 0x103c9c, Func Offset: 0x8c
	// Line 76, Address: 0x103cc4, Func Offset: 0xb4
	// Line 78, Address: 0x103ccc, Func Offset: 0xbc
	// Line 79, Address: 0x103cd0, Func Offset: 0xc0
	// Line 82, Address: 0x103cf8, Func Offset: 0xe8
	// Line 88, Address: 0x103d04, Func Offset: 0xf4
	// Func End, Address: 0x103d18, Func Offset: 0x108
}

// 
// Start address: 0x103d20
void SubCharacter::WorldScreenItemFunction()
{
	float scale;
	// Line 100, Address: 0x103d20, Func Offset: 0
	// Line 109, Address: 0x103d2c, Func Offset: 0xc
	// Line 114, Address: 0x103d50, Func Offset: 0x30
	// Line 122, Address: 0x103d5c, Func Offset: 0x3c
	// Line 123, Address: 0x103e20, Func Offset: 0x100
	// Line 124, Address: 0x103e38, Func Offset: 0x118
	// Line 125, Address: 0x103e50, Func Offset: 0x130
	// Line 126, Address: 0x103e68, Func Offset: 0x148
	// Line 127, Address: 0x103e80, Func Offset: 0x160
	// Line 128, Address: 0x103e98, Func Offset: 0x178
	// Line 129, Address: 0x103eb0, Func Offset: 0x190
	// Line 130, Address: 0x103ec8, Func Offset: 0x1a8
	// Line 131, Address: 0x103ee0, Func Offset: 0x1c0
	// Line 132, Address: 0x103ef8, Func Offset: 0x1d8
	// Line 133, Address: 0x103f10, Func Offset: 0x1f0
	// Line 134, Address: 0x103f28, Func Offset: 0x208
	// Line 135, Address: 0x103f40, Func Offset: 0x220
	// Line 138, Address: 0x103f58, Func Offset: 0x238
	// Line 156, Address: 0x103f68, Func Offset: 0x248
	// Line 157, Address: 0x103f88, Func Offset: 0x268
	// Line 158, Address: 0x103f98, Func Offset: 0x278
	// Line 161, Address: 0x103fc0, Func Offset: 0x2a0
	// Line 163, Address: 0x103fd0, Func Offset: 0x2b0
	// Line 165, Address: 0x103fd8, Func Offset: 0x2b8
	// Line 168, Address: 0x104000, Func Offset: 0x2e0
	// Func End, Address: 0x104010, Func Offset: 0x2f0
}

// 
// Start address: 0x104010
void SubCharacter::shCharacterWorldScreenObjectSet(float scale)
{
	shSkelton* sp;
	_anon0 tmp;
	_anon0 rot_tmp;
	SubCharacterDisp* scp_d;
	// Line 184, Address: 0x104010, Func Offset: 0
	// Line 186, Address: 0x104028, Func Offset: 0x18
	// Line 190, Address: 0x10403c, Func Offset: 0x2c
	// Line 206, Address: 0x104040, Func Offset: 0x30
	// Line 207, Address: 0x104050, Func Offset: 0x40
	// Line 208, Address: 0x10405c, Func Offset: 0x4c
	// Line 212, Address: 0x10406c, Func Offset: 0x5c
	// Line 213, Address: 0x10407c, Func Offset: 0x6c
	// Func End, Address: 0x104094, Func Offset: 0x84
}

// 
// Start address: 0x1040a0
void shCharacterSetItemScreenItemLow(SubCharacter* scp)
{
	// Line 227, Address: 0x1040a0, Func Offset: 0
	// Line 228, Address: 0x1040ac, Func Offset: 0xc
	// Line 229, Address: 0x1040c0, Func Offset: 0x20
	// Func End, Address: 0x1040d0, Func Offset: 0x30
}

// 
// Start address: 0x1040d0
void shCharacterSetWorldScreenItemLow(SubCharacter* scp)
{
	// Line 242, Address: 0x1040d0, Func Offset: 0
	// Line 243, Address: 0x1040dc, Func Offset: 0xc
	// Line 244, Address: 0x1040f0, Func Offset: 0x20
	// Func End, Address: 0x104100, Func Offset: 0x30
}

