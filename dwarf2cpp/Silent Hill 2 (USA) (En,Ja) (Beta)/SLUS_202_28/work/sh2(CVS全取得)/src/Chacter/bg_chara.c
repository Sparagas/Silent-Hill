typedef union fsFileIndex;
typedef struct shBattleFight;
typedef struct shSkelton;
typedef struct shBattleShot;
typedef struct SubCharacter;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct _CL_VHIT_WALL;
typedef struct sh2gfw_Model_Header;
typedef struct _CL_HITPOLY_HEAD;
typedef struct fsMgcFile;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef struct fsMgfFile;
typedef union _anon1;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct FilesBgBlock;

typedef void(*type_10)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4];
typedef int type_2[4];
typedef unsigned char type_3[3];
typedef void* type_4[8];
typedef shAttackInfo type_5[66];
typedef sh2gfw_Model_Header* type_6[2];
typedef int type_7[2];
typedef void* type_8[2];
typedef int type_9[2];
typedef float type_11[4];
typedef float type_12[4][4];
typedef void* type_13[2];
typedef fsFileIndex* type_14[3];
typedef unsigned char type_16[4];

union fsFileIndex
{
	_anon6 index;
	unsigned long pack;
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
	_anon5 src_m;
	_anon2 src_t;
	_anon5 des_m;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon5 mat;
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

union fsFile
{
	_anon3 check;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct sh2gfw_Model_Header
{
	unsigned char NoTextureID;
	unsigned char padc[3];
	unsigned int chara_id;
	unsigned int texnum;
	unsigned int toTexHead_offset;
	unsigned int toClutsHead_offset;
	unsigned int toModel_offset;
	int toKg1_offset;
	int padi;
	void* pTexMAN[8];
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

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon3
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

struct _anon4
{
	int now[2];
	void* nowp[2];
	int pre[2];
	void* prep[2];
	int cnt;
};

struct _anon5
{
	float d[4][4];
};

struct _anon6
{
	fsFile* fp;
	char* name;
};

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
};

shAttackInfo sh2_attack_list[66];
_anon4 d;
sh2gfw_Model_Header* model[2];

int get_block_num(fsFileIndex* id);
int BgCharaGetBlockSize(fsFileIndex* id);
int BgCharaRelocateItemSet(int glb_crd, int mapno, int chara_id);
void BgCharaRelocateItemSetXZ(int glb_crd, float x, float z, int chara_id);
void BgCharaRelocateSet(int glb_crd, float x, float z, int chara_id);
int BgCharaIsId(int chara_id);
void* BgCharaIsLoad(int chara_id);
void init(void* adr, int chara_id);
void BgCharaManInit();
void BgCharaMan(int cnt);
void BgCharaDelSlot(int slot);
int BgCharaGetSlotId(int slot);

// 
// Start address: 0x2532b0
int get_block_num(fsFileIndex* id)
{
	unsigned long size;
	// Line 31, Address: 0x2532b0, Func Offset: 0
	// Line 35, Address: 0x2532b8, Func Offset: 0x8
	// Line 41, Address: 0x2532c8, Func Offset: 0x18
	// Line 42, Address: 0x2532f4, Func Offset: 0x44
	// Func End, Address: 0x253304, Func Offset: 0x54
}

// 
// Start address: 0x253310
int BgCharaGetBlockSize(fsFileIndex* id)
{
	// Line 45, Address: 0x253310, Func Offset: 0
	// Line 46, Address: 0x253318, Func Offset: 0x8
	// Line 47, Address: 0x253320, Func Offset: 0x10
	// Func End, Address: 0x253330, Func Offset: 0x20
}

// 
// Start address: 0x253330
int BgCharaRelocateItemSet(int glb_crd, int mapno, int chara_id)
{
	fsFileIndex* p1;
	fsFileIndex* p0;
	FilesBgBlock* bp;
	int n;
	int result;
	fsFileIndex* cid;
	fsFileIndex* file[3];
	// Line 50, Address: 0x253330, Func Offset: 0
	// Line 58, Address: 0x253350, Func Offset: 0x20
	// Line 59, Address: 0x25336c, Func Offset: 0x3c
	// Line 60, Address: 0x25337c, Func Offset: 0x4c
	// Line 61, Address: 0x253380, Func Offset: 0x50
	// Line 62, Address: 0x2533ac, Func Offset: 0x7c
	// Line 63, Address: 0x2533bc, Func Offset: 0x8c
	// Line 64, Address: 0x2533d0, Func Offset: 0xa0
	// Line 65, Address: 0x2533fc, Func Offset: 0xcc
	// Line 66, Address: 0x253404, Func Offset: 0xd4
	// Line 67, Address: 0x253414, Func Offset: 0xe4
	// Line 69, Address: 0x253418, Func Offset: 0xe8
	// Line 70, Address: 0x253420, Func Offset: 0xf0
	// Line 71, Address: 0x253430, Func Offset: 0x100
	// Line 73, Address: 0x253434, Func Offset: 0x104
	// Line 74, Address: 0x253440, Func Offset: 0x110
	// Line 75, Address: 0x253450, Func Offset: 0x120
	// Line 76, Address: 0x25345c, Func Offset: 0x12c
	// Line 77, Address: 0x25347c, Func Offset: 0x14c
	// Line 78, Address: 0x25348c, Func Offset: 0x15c
	// Line 79, Address: 0x253498, Func Offset: 0x168
	// Line 81, Address: 0x2534b8, Func Offset: 0x188
	// Line 82, Address: 0x2534c8, Func Offset: 0x198
	// Line 83, Address: 0x2534dc, Func Offset: 0x1ac
	// Line 84, Address: 0x2534f4, Func Offset: 0x1c4
	// Line 85, Address: 0x25350c, Func Offset: 0x1dc
	// Line 88, Address: 0x253520, Func Offset: 0x1f0
	// Line 89, Address: 0x253534, Func Offset: 0x204
	// Line 90, Address: 0x253554, Func Offset: 0x224
	// Line 92, Address: 0x253560, Func Offset: 0x230
	// Line 94, Address: 0x253580, Func Offset: 0x250
	// Line 95, Address: 0x253590, Func Offset: 0x260
	// Line 96, Address: 0x2535a4, Func Offset: 0x274
	// Line 97, Address: 0x2535bc, Func Offset: 0x28c
	// Line 98, Address: 0x2535d4, Func Offset: 0x2a4
	// Line 101, Address: 0x2535e8, Func Offset: 0x2b8
	// Line 102, Address: 0x2535f0, Func Offset: 0x2c0
	// Line 103, Address: 0x253600, Func Offset: 0x2d0
	// Line 104, Address: 0x253614, Func Offset: 0x2e4
	// Line 105, Address: 0x253644, Func Offset: 0x314
	// Line 106, Address: 0x253674, Func Offset: 0x344
	// Line 109, Address: 0x2536a0, Func Offset: 0x370
	// Line 110, Address: 0x2536a4, Func Offset: 0x374
	// Func End, Address: 0x2536c4, Func Offset: 0x394
}

// 
// Start address: 0x2536d0
void BgCharaRelocateItemSetXZ(int glb_crd, float x, float z, int chara_id)
{
	int mapid;
	float r;
	int result;
	int block[4];
	// Line 113, Address: 0x2536d0, Func Offset: 0
	// Line 119, Address: 0x2536ec, Func Offset: 0x1c
	// Line 120, Address: 0x2536fc, Func Offset: 0x2c
	// Line 122, Address: 0x25372c, Func Offset: 0x5c
	// Line 123, Address: 0x253738, Func Offset: 0x68
	// Line 141, Address: 0x25374c, Func Offset: 0x7c
	// Func End, Address: 0x253768, Func Offset: 0x98
}

// 
// Start address: 0x253770
void BgCharaRelocateSet(int glb_crd, float x, float z, int chara_id)
{
	// Line 144, Address: 0x253770, Func Offset: 0
	// Line 145, Address: 0x253778, Func Offset: 0x8
	// Line 147, Address: 0x253780, Func Offset: 0x10
	// Func End, Address: 0x253790, Func Offset: 0x20
}

// 
// Start address: 0x253790
int BgCharaIsId(int chara_id)
{
	// Line 151, Address: 0x253790, Func Offset: 0
	// Line 152, Address: 0x25379c, Func Offset: 0xc
	// Func End, Address: 0x2537a4, Func Offset: 0x14
}

// 
// Start address: 0x2537b0
void* BgCharaIsLoad(int chara_id)
{
	int i;
	// Line 155, Address: 0x2537b0, Func Offset: 0
	// Line 159, Address: 0x2537bc, Func Offset: 0xc
	// Line 161, Address: 0x2537e0, Func Offset: 0x30
	// Line 162, Address: 0x2537ec, Func Offset: 0x3c
	// Line 163, Address: 0x253808, Func Offset: 0x58
	// Line 164, Address: 0x25381c, Func Offset: 0x6c
	// Line 169, Address: 0x253834, Func Offset: 0x84
	// Line 170, Address: 0x253848, Func Offset: 0x98
	// Line 171, Address: 0x25384c, Func Offset: 0x9c
	// Func End, Address: 0x253860, Func Offset: 0xb0
}

// 
// Start address: 0x253860
void init(void* adr, int chara_id)
{
	SubCharacter* scp;
	// Line 174, Address: 0x253860, Func Offset: 0
	// Line 176, Address: 0x253878, Func Offset: 0x18
	// Line 177, Address: 0x253894, Func Offset: 0x34
	// Line 178, Address: 0x2538a0, Func Offset: 0x40
	// Line 179, Address: 0x2538a8, Func Offset: 0x48
	// Line 180, Address: 0x2538b4, Func Offset: 0x54
	// Line 181, Address: 0x2538d0, Func Offset: 0x70
	// Func End, Address: 0x2538e8, Func Offset: 0x88
}

// 
// Start address: 0x2538f0
void BgCharaManInit()
{
	// Line 189, Address: 0x2538f0, Func Offset: 0
	// Line 190, Address: 0x2538f8, Func Offset: 0x8
	// Line 191, Address: 0x253910, Func Offset: 0x20
	// Func End, Address: 0x253920, Func Offset: 0x30
}

// 
// Start address: 0x253920
void BgCharaMan(int cnt)
{
	int i;
	// Line 194, Address: 0x253920, Func Offset: 0
	// Line 197, Address: 0x253934, Func Offset: 0x14
	// Line 198, Address: 0x25393c, Func Offset: 0x1c
	// Line 199, Address: 0x253944, Func Offset: 0x24
	// Line 201, Address: 0x25395c, Func Offset: 0x3c
	// Line 202, Address: 0x25396c, Func Offset: 0x4c
	// Line 203, Address: 0x25398c, Func Offset: 0x6c
	// Line 204, Address: 0x2539ac, Func Offset: 0x8c
	// Line 205, Address: 0x2539c0, Func Offset: 0xa0
	// Line 206, Address: 0x2539dc, Func Offset: 0xbc
	// Line 207, Address: 0x2539ec, Func Offset: 0xcc
	// Line 208, Address: 0x2539f4, Func Offset: 0xd4
	// Line 209, Address: 0x253a00, Func Offset: 0xe0
	// Line 210, Address: 0x253a1c, Func Offset: 0xfc
	// Line 211, Address: 0x253a2c, Func Offset: 0x10c
	// Line 213, Address: 0x253a44, Func Offset: 0x124
	// Line 214, Address: 0x253a48, Func Offset: 0x128
	// Line 215, Address: 0x253a5c, Func Offset: 0x13c
	// Line 216, Address: 0x253a60, Func Offset: 0x140
	// Func End, Address: 0x253a7c, Func Offset: 0x15c
}

// 
// Start address: 0x253a80
void BgCharaDelSlot(int slot)
{
	// Line 220, Address: 0x253a84, Func Offset: 0x4
	// Line 221, Address: 0x253aa4, Func Offset: 0x24
	// Line 222, Address: 0x253ac4, Func Offset: 0x44
	// Line 223, Address: 0x253ac8, Func Offset: 0x48
	// Line 224, Address: 0x253acc, Func Offset: 0x4c
	// Func End, Address: 0x253ad4, Func Offset: 0x54
}

// 
// Start address: 0x253ae0
int BgCharaGetSlotId(int slot)
{
	// Line 228, Address: 0x253ae0, Func Offset: 0
	// Line 229, Address: 0x253af4, Func Offset: 0x14
	// Func End, Address: 0x253afc, Func Offset: 0x1c
}

