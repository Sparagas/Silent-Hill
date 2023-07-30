typedef struct _CL_HITPOLY_HEAD;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct shSkelton;
typedef struct ModelWork;
typedef struct _USXY;
typedef struct _anon1;
typedef struct shClusterAnime;
typedef struct _SXY;
typedef struct _IXY;
typedef struct SubCharacterDisp;
typedef struct shAnime3d;
typedef struct _anon2;
typedef struct shBattleFight;
typedef struct _AnimeInfo;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon3;
typedef struct _CL_VHIT_RESULT;

typedef int(*type_2)(void*, void*, void*);
typedef void(*type_3)(SubCharacter*);
typedef void(*type_4)(SubCharacter*);

typedef shAttackInfo type_0[66];
typedef float type_1[4][4];
typedef unsigned char type_5[4];
typedef float type_6[4];
typedef void* type_7[3];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_11[4];

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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
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

struct _SXY
{
	short x;
	short y;
};

struct _IXY
{
	int x;
	int y;
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

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon1 rot_neck;
	_anon1 rot_arms;
	_anon1 rot_body_neck;
	_anon1 rot_body;
	float scale;
};

struct _anon2
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

shAttackInfo sh2_attack_list[66];

int Model3WorkEquipmentFlag(void* work_, int id);
void Model3WorkSetEquipmentFlagMulti(void* work_, <unknown fundamental type (0xa510)> mask, <unknown fundamental type (0xa510)> flag);
int sh2gfw_Set_JMSequip(void* scp, int lhand, int rhand, int spotlight);

// 
// Start address: 0x128030
int Model3WorkEquipmentFlag(void* work_, int id)
{
	unsigned long result;
	unsigned long mask;
	<unknown fundamental type (0xa510)> data;
	ModelWork* work;
	// Line 35, Address: 0x128030, Func Offset: 0
	// Line 39, Address: 0x128034, Func Offset: 0x4
	// Line 44, Address: 0x128040, Func Offset: 0x10
	// Line 51, Address: 0x128044, Func Offset: 0x14
	// Line 52, Address: 0x128048, Func Offset: 0x18
	// Line 64, Address: 0x12804c, Func Offset: 0x1c
	// Line 66, Address: 0x128050, Func Offset: 0x20
	// Line 68, Address: 0x128068, Func Offset: 0x38
	// Func End, Address: 0x128070, Func Offset: 0x40
}

// 
// Start address: 0x128070
void Model3WorkSetEquipmentFlagMulti(void* work_, <unknown fundamental type (0xa510)> mask, <unknown fundamental type (0xa510)> flag)
{
	<unknown fundamental type (0xa510)> tmp1;
	<unknown fundamental type (0xa510)> tmp0;
	<unknown fundamental type (0xa510)> result;
	<unknown fundamental type (0xa510)> data;
	ModelWork* work;
	// Line 147, Address: 0x128070, Func Offset: 0
	// Line 154, Address: 0x128074, Func Offset: 0x4
	// Line 155, Address: 0x128078, Func Offset: 0x8
	// Line 156, Address: 0x12807c, Func Offset: 0xc
	// Line 157, Address: 0x128080, Func Offset: 0x10
	// Line 160, Address: 0x128084, Func Offset: 0x14
	// Line 162, Address: 0x128088, Func Offset: 0x18
	// Func End, Address: 0x128090, Func Offset: 0x20
}

// 
// Start address: 0x128090
int sh2gfw_Set_JMSequip(void* scp, int lhand, int rhand, int spotlight)
{
	SubCharacterDisp* scp_d;
	<unknown fundamental type (0xa510)> msk;
	<unknown fundamental type (0xa510)> flg;
	// Line 211, Address: 0x128090, Func Offset: 0
	// Line 216, Address: 0x128098, Func Offset: 0x8
	// Line 218, Address: 0x1280bc, Func Offset: 0x2c
	// Line 219, Address: 0x1280cc, Func Offset: 0x3c
	// Func End, Address: 0x1280dc, Func Offset: 0x4c
}

