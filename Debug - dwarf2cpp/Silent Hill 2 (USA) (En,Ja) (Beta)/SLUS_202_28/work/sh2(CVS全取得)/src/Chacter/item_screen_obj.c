typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef struct SubCharacterDisp;
typedef union _anon1;
typedef struct shSkelton;
typedef struct _anon2;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct ModelWork;
typedef struct _USXY;
typedef struct fsMgcFile;
typedef struct _anon3;
typedef struct shClusterAnime;
typedef struct _SXY;
typedef struct fsMgfFile;
typedef struct _IXY;
typedef struct shAnime3d;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct shBattleFight;
typedef struct _anon4;
typedef struct _AnimeInfo;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shItemScreenObjectSettingData;
typedef struct shBattleInfo;
typedef union fsFileIndex;
typedef struct _anon5;
typedef struct _CL_VHIT_WALL;

typedef void(*type_2)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);
typedef int(*type_13)(void*, void*, void*);
typedef void(*type_17)(SubCharacter*);

typedef unsigned char type_0[20];
typedef float type_1[4];
typedef shItemScreenObjectSettingData type_3[58];
typedef shAttackInfo type_4[66];
typedef unsigned char type_5[14];
typedef float type_7[4][4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned char type_10[69];
typedef float type_12[4];
typedef unsigned char type_14[4];
typedef void* type_15[3];
typedef unsigned char type_16[14];
typedef float type_18[4];
typedef float type_19[4][4];
typedef float type_20[4];
typedef unsigned char type_21[97];

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

	void ItemScreenItemFunction();
	void WorldScreenItemFunction();
	void shCharacterWorldScreenObjectSetNew(float scale);
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
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

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

union fsFile
{
	_anon4 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
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

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct _anon3
{
	float d[4][4];
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

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct _IXY
{
	int x;
	int y;
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
	_anon2 rot_neck;
	_anon2 rot_arms;
	_anon2 rot_body_neck;
	_anon2 rot_body;
	float scale;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon4
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
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

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon2 rot;
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

union fsFileIndex
{
	_anon5 index;
	unsigned long pack;
};

struct _anon5
{
	fsFile* fp;
	char* name;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
shItemScreenObjectSettingData item_screen_obj_data[58];
void(*ItemScreenItemFunction)(SubCharacter*);
void(*WorldScreenItemFunction)(SubCharacter*);

int shCharacterItemScreenItemInit(SubCharacter* scp);
int shCharacterWorldScreenItemInit(SubCharacter* scp);
void ItemScreenItemFunction();
void WorldScreenItemFunction();
void getRmat(float mat[4]);
void shCharacterWorldScreenObjectSetNew(float scale);
void shCharacterSetItemScreenItemLow(SubCharacter* scp);
void shCharacterSetWorldScreenItemLow(SubCharacter* scp);

// 
// Start address: 0x102f70
int shCharacterItemScreenItemInit(SubCharacter* scp)
{
	// Line 41, Address: 0x102f70, Func Offset: 0
	// Line 43, Address: 0x102f78, Func Offset: 0x8
	// Line 44, Address: 0x102f84, Func Offset: 0x14
	// Line 45, Address: 0x102f88, Func Offset: 0x18
	// Func End, Address: 0x102f98, Func Offset: 0x28
}

// 
// Start address: 0x102fa0
int shCharacterWorldScreenItemInit(SubCharacter* scp)
{
	// Line 47, Address: 0x102fa0, Func Offset: 0
	// Line 48, Address: 0x102fa8, Func Offset: 0x8
	// Line 49, Address: 0x102fb4, Func Offset: 0x14
	// Line 50, Address: 0x102fb8, Func Offset: 0x18
	// Func End, Address: 0x102fc8, Func Offset: 0x28
}

// 
// Start address: 0x102fd0
void SubCharacter::ItemScreenItemFunction()
{
	int i1;
	// Line 64, Address: 0x102fd0, Func Offset: 0
	// Line 69, Address: 0x102fe0, Func Offset: 0x10
	// Line 71, Address: 0x103000, Func Offset: 0x30
	// Line 73, Address: 0x103008, Func Offset: 0x38
	// Line 74, Address: 0x10300c, Func Offset: 0x3c
	// Line 75, Address: 0x103014, Func Offset: 0x44
	// Line 76, Address: 0x103034, Func Offset: 0x64
	// Line 77, Address: 0x10304c, Func Offset: 0x7c
	// Line 78, Address: 0x103074, Func Offset: 0xa4
	// Line 80, Address: 0x10307c, Func Offset: 0xac
	// Line 81, Address: 0x103080, Func Offset: 0xb0
	// Line 84, Address: 0x1030a0, Func Offset: 0xd0
	// Line 90, Address: 0x1030ac, Func Offset: 0xdc
	// Func End, Address: 0x1030c0, Func Offset: 0xf0
}

// 
// Start address: 0x1030c0
void SubCharacter::WorldScreenItemFunction()
{
	float scale;
	// Line 102, Address: 0x1030c0, Func Offset: 0
	// Line 111, Address: 0x1030d0, Func Offset: 0x10
	// Line 116, Address: 0x1030f0, Func Offset: 0x30
	// Line 123, Address: 0x1030f8, Func Offset: 0x38
	// Line 125, Address: 0x1031c8, Func Offset: 0x108
	// Line 126, Address: 0x1031d8, Func Offset: 0x118
	// Line 127, Address: 0x1031e8, Func Offset: 0x128
	// Line 128, Address: 0x1031f8, Func Offset: 0x138
	// Line 130, Address: 0x103208, Func Offset: 0x148
	// Line 131, Address: 0x103218, Func Offset: 0x158
	// Line 132, Address: 0x103228, Func Offset: 0x168
	// Line 133, Address: 0x103238, Func Offset: 0x178
	// Line 134, Address: 0x103248, Func Offset: 0x188
	// Line 135, Address: 0x103258, Func Offset: 0x198
	// Line 136, Address: 0x103268, Func Offset: 0x1a8
	// Line 137, Address: 0x103278, Func Offset: 0x1b8
	// Line 138, Address: 0x103288, Func Offset: 0x1c8
	// Line 139, Address: 0x103298, Func Offset: 0x1d8
	// Line 140, Address: 0x1032a8, Func Offset: 0x1e8
	// Line 142, Address: 0x1032b8, Func Offset: 0x1f8
	// Line 147, Address: 0x1032c0, Func Offset: 0x200
	// Line 149, Address: 0x1032cc, Func Offset: 0x20c
	// Line 150, Address: 0x1032d4, Func Offset: 0x214
	// Line 151, Address: 0x1032dc, Func Offset: 0x21c
	// Line 156, Address: 0x1032f8, Func Offset: 0x238
	// Line 158, Address: 0x103310, Func Offset: 0x250
	// Line 162, Address: 0x103328, Func Offset: 0x268
	// Line 168, Address: 0x103334, Func Offset: 0x274
	// Func End, Address: 0x103348, Func Offset: 0x288
}

// 
// Start address: 0x103350
void getRmat(float mat[4])
{
	float rot[4][4];
	// Line 193, Address: 0x103350, Func Offset: 0
	// Line 194, Address: 0x103360, Func Offset: 0x10
	// Line 195, Address: 0x10338c, Func Offset: 0x3c
	// Line 196, Address: 0x1033b0, Func Offset: 0x60
	// Line 197, Address: 0x1033f0, Func Offset: 0xa0
	// Line 198, Address: 0x103430, Func Offset: 0xe0
	// Func End, Address: 0x103444, Func Offset: 0xf4
}

// 
// Start address: 0x103450
void SubCharacter::shCharacterWorldScreenObjectSetNew(float scale)
{
	float rm[4][4];
	ModelWork* work;
	int i;
	shSkelton* sp;
	SubCharacterDisp* scp_d;
	// Line 277, Address: 0x103450, Func Offset: 0
	// Line 282, Address: 0x103474, Func Offset: 0x24
	// Line 288, Address: 0x103478, Func Offset: 0x28
	// Line 296, Address: 0x10347c, Func Offset: 0x2c
	// Line 300, Address: 0x103488, Func Offset: 0x38
	// Line 301, Address: 0x103498, Func Offset: 0x48
	// Line 302, Address: 0x10349c, Func Offset: 0x4c
	// Line 303, Address: 0x1034a4, Func Offset: 0x54
	// Line 304, Address: 0x1034dc, Func Offset: 0x8c
	// Line 306, Address: 0x1034f0, Func Offset: 0xa0
	// Line 307, Address: 0x103524, Func Offset: 0xd4
	// Line 309, Address: 0x103564, Func Offset: 0x114
	// Line 312, Address: 0x103578, Func Offset: 0x128
	// Line 313, Address: 0x103588, Func Offset: 0x138
	// Func End, Address: 0x1035ac, Func Offset: 0x15c
}

// 
// Start address: 0x1035b0
void shCharacterSetItemScreenItemLow(SubCharacter* scp)
{
	// Line 343, Address: 0x1035b0, Func Offset: 0
	// Line 344, Address: 0x1035b8, Func Offset: 0x8
	// Line 345, Address: 0x1035c8, Func Offset: 0x18
	// Func End, Address: 0x1035d8, Func Offset: 0x28
}

// 
// Start address: 0x1035e0
void shCharacterSetWorldScreenItemLow(SubCharacter* scp)
{
	// Line 358, Address: 0x1035e0, Func Offset: 0
	// Line 359, Address: 0x1035e8, Func Offset: 0x8
	// Line 360, Address: 0x1035f8, Func Offset: 0x18
	// Func End, Address: 0x103608, Func Offset: 0x28
}

