typedef struct _CL_HITPOLY_HEAD;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _anon1;
typedef struct SubCharacterDisp;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct _USXY;
typedef struct shSkelton;
typedef struct _SXY;
typedef struct _anon2;
typedef struct shBattleFight;
typedef struct shAnime3d;
typedef struct shCharacterAll;
typedef struct shBattleShot;
typedef struct shClusterAnime;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _AnimeInfo;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon3;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;

typedef void(*type_7)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[34];
typedef float type_2[4];
typedef float type_3[4][4];
typedef SubCharacterDisp type_4[32];
typedef float type_5[4];
typedef unsigned char type_6[10];
typedef shAttackInfo type_8[46];
typedef unsigned char type_10[4];
typedef unsigned short type_11[4];
typedef unsigned short type_12[4];
typedef void* type_13[3];
typedef unsigned short type_14[2];
typedef unsigned short type_15[2];
typedef int type_16[6];
typedef int type_17[6];
typedef void* type_18[6];
typedef unsigned char type_19[10];
typedef float type_20[4];

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

struct _anon1
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

struct sh2gfw_ModelDraw_MAN
{
	unsigned int chara_id;
	SubCharacter* testSubChar;
	void* Model_Head;
	void* pModel_Header;
	void* sh_Model;
	void* pAnime;
	void* pCluster;
	void* pKg1Work;
	short allnum;
	short nowtex;
	unsigned short TB_change_VU1num;
	unsigned short TB_change_VU1now;
	unsigned short TB_change_VU1[4];
	unsigned short TB_index_VU1[4];
	unsigned short TB_change_VU0num;
	unsigned short TB_change_VU0now;
	unsigned short TB_change_VU0[2];
	unsigned short TB_index_VU0[2];
	int chr_slotid[6];
	int chr_cid[6];
	int d1cid;
	int d2c1d;
	void* pTexMAN[6];
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

struct _SXY
{
	short x;
	short y;
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
	_anon1 rot_neck;
	_anon1 rot_arms;
	_anon1 rot_body_neck;
	_anon1 rot_body;
	float scale;
};

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
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
	_anon3 hit_check;
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

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
int id_counter;
shCharacterAll sh2chara;

int shCharacter_Manage_Init();
int shCharacter_Manage_Create(short kind, short id, float* pos, float* rot, unsigned int status);
int shCharacter_Manage_Delete(SubCharacter* scp, short kind, short id);
SubCharacter* shCharacter_Manage_GetCharacterList();

// 
// Start address: 0x1cc950
int shCharacter_Manage_Init()
{
	// Line 63, Address: 0x1cc950, Func Offset: 0
	// Line 64, Address: 0x1cc958, Func Offset: 0x8
	// Line 65, Address: 0x1cc964, Func Offset: 0x14
	// Line 66, Address: 0x1cc96c, Func Offset: 0x1c
	// Func End, Address: 0x1cc97c, Func Offset: 0x2c
}

// 
// Start address: 0x1cc980
int shCharacter_Manage_Create(short kind, short id, float* pos, float* rot, unsigned int status)
{
	SubCharacter* scp;
	// Line 97, Address: 0x1cc980, Func Offset: 0
	// Line 101, Address: 0x1cc9ac, Func Offset: 0x2c
	// Line 104, Address: 0x1cc9c0, Func Offset: 0x40
	// Line 108, Address: 0x1cc9c8, Func Offset: 0x48
	// Line 110, Address: 0x1cc9d8, Func Offset: 0x58
	// Line 111, Address: 0x1cc9ec, Func Offset: 0x6c
	// Line 112, Address: 0x1cc9f0, Func Offset: 0x70
	// Line 114, Address: 0x1cca2c, Func Offset: 0xac
	// Line 116, Address: 0x1cca38, Func Offset: 0xb8
	// Line 118, Address: 0x1cca50, Func Offset: 0xd0
	// Line 119, Address: 0x1cca64, Func Offset: 0xe4
	// Line 120, Address: 0x1cca78, Func Offset: 0xf8
	// Line 124, Address: 0x1cca84, Func Offset: 0x104
	// Line 125, Address: 0x1cca90, Func Offset: 0x110
	// Line 126, Address: 0x1ccaac, Func Offset: 0x12c
	// Line 130, Address: 0x1ccab8, Func Offset: 0x138
	// Line 133, Address: 0x1ccac4, Func Offset: 0x144
	// Line 137, Address: 0x1ccac8, Func Offset: 0x148
	// Line 139, Address: 0x1ccadc, Func Offset: 0x15c
	// Line 140, Address: 0x1ccae0, Func Offset: 0x160
	// Func End, Address: 0x1ccb04, Func Offset: 0x184
}

// 
// Start address: 0x1ccb10
int shCharacter_Manage_Delete(SubCharacter* scp, short kind, short id)
{
	SubCharacterDisp* del_scp_d;
	SubCharacter* del_scp;
	// Line 160, Address: 0x1ccb10, Func Offset: 0
	// Line 165, Address: 0x1ccb2c, Func Offset: 0x1c
	// Line 166, Address: 0x1ccb38, Func Offset: 0x28
	// Line 167, Address: 0x1ccb3c, Func Offset: 0x2c
	// Line 171, Address: 0x1ccb44, Func Offset: 0x34
	// Line 172, Address: 0x1ccb54, Func Offset: 0x44
	// Line 174, Address: 0x1ccb94, Func Offset: 0x84
	// Line 175, Address: 0x1ccb98, Func Offset: 0x88
	// Line 179, Address: 0x1ccba8, Func Offset: 0x98
	// Line 180, Address: 0x1ccbb0, Func Offset: 0xa0
	// Line 184, Address: 0x1ccbbc, Func Offset: 0xac
	// Line 187, Address: 0x1ccbc0, Func Offset: 0xb0
	// Line 191, Address: 0x1ccbcc, Func Offset: 0xbc
	// Line 192, Address: 0x1ccbe8, Func Offset: 0xd8
	// Line 198, Address: 0x1ccbf4, Func Offset: 0xe4
	// Line 200, Address: 0x1ccc08, Func Offset: 0xf8
	// Line 201, Address: 0x1ccc0c, Func Offset: 0xfc
	// Func End, Address: 0x1ccc24, Func Offset: 0x114
}

// 
// Start address: 0x1ccc30
SubCharacter* shCharacter_Manage_GetCharacterList()
{
	// Line 264, Address: 0x1ccc30, Func Offset: 0
	// Line 265, Address: 0x1ccc38, Func Offset: 0x8
	// Func End, Address: 0x1ccc40, Func Offset: 0x10
}

