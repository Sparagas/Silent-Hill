typedef struct _anon0;
typedef struct ModelWork;
typedef struct _USXY;
typedef struct shSkelton;
typedef struct _SXY;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shAnime3d;
typedef struct shBattleShot;
typedef struct shClusterAnime;
typedef struct SubCharacter;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _AnimeInfo;
typedef struct SubCharacterDisp;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef int(*type_11)(void*, void*, void*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_5[4];
typedef shAttackInfo type_6[46];
typedef unsigned char type_8[4];
typedef float type_9[4];
typedef void* type_10[3];

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct ModelWork
{
	unsigned int id;
	float relatives[4][4];
	float matrices[4][4];
	float* cluster_weights;
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

int Model3WorkEquipmentFlag(void* work_, int id);
void Model3WorkSetEquipmentFlagMulti(void* work_, <unknown fundamental type (0xa510)> mask, <unknown fundamental type (0xa510)> flag);
int sh2gfw_Set_JMSequip(void* scp, int lhand, int rhand, int spotlight);

// 
// Start address: 0x130eb0
int Model3WorkEquipmentFlag(void* work_, int id)
{
	unsigned long result;
	unsigned long mask;
	<unknown fundamental type (0xa510)> data;
	ModelWork* work;
	// Line 35, Address: 0x130eb0, Func Offset: 0
	// Line 39, Address: 0x130eb4, Func Offset: 0x4
	// Line 44, Address: 0x130ec0, Func Offset: 0x10
	// Line 51, Address: 0x130ec4, Func Offset: 0x14
	// Line 52, Address: 0x130ec8, Func Offset: 0x18
	// Line 64, Address: 0x130ecc, Func Offset: 0x1c
	// Line 66, Address: 0x130ed0, Func Offset: 0x20
	// Line 68, Address: 0x130ee8, Func Offset: 0x38
	// Func End, Address: 0x130ef0, Func Offset: 0x40
}

// 
// Start address: 0x130ef0
void Model3WorkSetEquipmentFlagMulti(void* work_, <unknown fundamental type (0xa510)> mask, <unknown fundamental type (0xa510)> flag)
{
	<unknown fundamental type (0xa510)> tmp1;
	<unknown fundamental type (0xa510)> tmp0;
	<unknown fundamental type (0xa510)> result;
	<unknown fundamental type (0xa510)> data;
	ModelWork* work;
	// Line 147, Address: 0x130ef0, Func Offset: 0
	// Line 154, Address: 0x130ef4, Func Offset: 0x4
	// Line 155, Address: 0x130ef8, Func Offset: 0x8
	// Line 156, Address: 0x130efc, Func Offset: 0xc
	// Line 157, Address: 0x130f00, Func Offset: 0x10
	// Line 160, Address: 0x130f04, Func Offset: 0x14
	// Line 162, Address: 0x130f08, Func Offset: 0x18
	// Func End, Address: 0x130f10, Func Offset: 0x20
}

// 
// Start address: 0x130f10
int sh2gfw_Set_JMSequip(void* scp, int lhand, int rhand, int spotlight)
{
	SubCharacterDisp* scp_d;
	<unknown fundamental type (0xa510)> msk;
	<unknown fundamental type (0xa510)> flg;
	// Line 211, Address: 0x130f10, Func Offset: 0
	// Line 212, Address: 0x130f34, Func Offset: 0x24
	// Line 213, Address: 0x130f38, Func Offset: 0x28
	// Line 214, Address: 0x130f3c, Func Offset: 0x2c
	// Line 216, Address: 0x130f40, Func Offset: 0x30
	// Line 218, Address: 0x130f78, Func Offset: 0x68
	// Line 219, Address: 0x130f8c, Func Offset: 0x7c
	// Func End, Address: 0x130fa8, Func Offset: 0x98
}

