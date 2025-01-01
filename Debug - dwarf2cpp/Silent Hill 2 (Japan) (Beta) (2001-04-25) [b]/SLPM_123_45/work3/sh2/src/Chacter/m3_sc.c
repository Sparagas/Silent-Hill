typedef struct SubCharacterDisp;
typedef struct SubCharacter;
typedef struct shBattleFight;
typedef struct SubObject;
typedef struct _AnimeInfo;
typedef struct shAnime3d;
typedef struct shBattleShot;
typedef struct shSkelton;
typedef struct shClusterAnime;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _anon0;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef struct shStayObjectSettingData;
typedef union _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct shItemScreenObjectSettingData;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;
typedef struct shCharacterAll;
typedef struct _USXY;
typedef struct _SXY;

typedef void(*type_1)(SubCharacter*);
typedef void(*type_4)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef unsigned char type_0[10];
typedef float type_2[4];
typedef shAttackInfo type_3[46];
typedef unsigned char type_5[4];
typedef float type_6[4];
typedef void* type_7[3];
typedef float type_8[4];
typedef unsigned char type_10[10];
typedef float type_11[4];
typedef float type_12[4][4];
typedef unsigned char type_15[13];
typedef SubCharacterDisp type_16[32];
typedef unsigned char type_17[34];

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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct SubObject
{
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
	_anon3 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon0 src_t;
	_anon3 des_m;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct shStayObjectSettingData
{
	int chara_id;
	int bg_name_id;
	int index;
	_anon0 scale;
	_anon0 rot;
	_anon0 trans;
};

union _anon1
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
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon3
{
	float d[4][4];
};

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
shCharacterAll sh2chara;
_anon3 kt_unit_matrix;
shCharacterAll sh2object;

SubCharacter* shCharacterGetFreeList();
void AddFreeList(SubCharacter* scp);
void shCharacterSortList(SubCharacter* scp);
void shCharacterTopOfList(SubCharacter* scp);
void shCharacterCutList(SubCharacter* scp);
void shCharacterInitialize(SubCharacter* scp, int id);
void UpdateMatrix(SubCharacter* scp, _anon0* rot, _anon0* trans);
int shCharacterNeckAngleExec(shAnime3d* ap);
int shCharacterKneeAngleExec(shAnime3d* ap);
void SCAddPos(SubCharacter* scp, _anon0* pos);
void SCSetRot(SubCharacter* scp, _anon0* rot);
void shCharacterSetClusterAnimeWork(SubCharacterDisp* scp_d, int index);
void shCharacterClusterAnimeSet(SubCharacter* scp, int anime);
void SCSetModel(SubCharacter* scp, int model, int anime);
void* shCharacterGetAnimeAdrForDrama(SubCharacter* scp);
void* shCharacterGetAnimeAdrForPlay(SubCharacter* scp);
void* shCharacterGetClusterAnimeAdr(SubCharacter* scp);
void shCharacterSetPlayer(SubCharacter* scp);
short shCharacterGetModelID(SubCharacter* scp);
SubCharacter* shCharacterGetSubCharacter(unsigned short kind, short id);
int shCharacterGetSkeltonNum(short kind);
int shCharacterAnimeOneFrameSize(unsigned short id);
void shCharacterInitSubCharacter();
void shCharacterSetHandler(SubCharacter* scp);
SubCharacter* shCharacterCreate(unsigned int id, int model, int anime, int clani, int chr_id);
void shCharacterDelete(SubCharacter* scp);
void shCharacterPlayingExecAnimeOne(SubCharacter* scp);
void shCharacterDramaExecAnimeOne(SubCharacter* scp);
void SCNowDemoEventSwitch(SubCharacter* scp, int flag);
void SCNowPlayableEventSwitch(SubCharacter* scp, int flag);
void SCStayModelSwitch(SubCharacter* scp, int flag);
void SCAnimeTypeSwitch(SubCharacter* scp, int flag);
void SCFreefallSwitch(SubCharacter* scp, int sw);
void shCharacterExecAnimeAll();
void shCharacterUpdateAll();
void shCharacterSetFunction(SubCharacter* scp, void(*func)(SubCharacter*));
void shCharacterExecFunctionAll();
void shCharacterAnimeSet(SubCharacter* scp, int ctrl_type, int inter_type, _AnimeInfo* anim_info, int anime);
void shCharacterStayObjectScaleSet(SubCharacter* scp, float scale);
void shCharacterItemScreenObjectSet(SubCharacter* scp, shItemScreenObjectSettingData* data);
short shCharacterAnimeSpeedGet(SubCharacter* scp);
short shCharacterAnimeSpeedGet_(SubCharacter* scp, unsigned int type);
void shCharacterAnimeSpeedAdd(SubCharacter* scp, short add);
void shCharacterAnimeSpeedAdd_(SubCharacter* scp, unsigned int type, short add);
void shCharacterAnimePause(SubCharacter* scp);
void shCharacterAnimePause_(SubCharacter* scp, unsigned int type);
void shCharacterAnimeRestart(SubCharacter* scp);
void shCharacterAnimeRestart_(SubCharacter* scp, unsigned int type);
int shCharacterAnimeIsEnd(SubCharacter* scp);
int shCharacterAnimeIsEnd_(SubCharacter* scp, unsigned int type);
short shCharacterAnimeFrameGet(SubCharacter* scp);
short shCharacterAnimeFrameGet_(SubCharacter* scp, unsigned int type);
void shCharacterAnimeFrameSet(SubCharacter* scp, unsigned short frame);
void shCharacterAnimeFrameSet_(SubCharacter* scp, unsigned int type, unsigned short frame);
_AnimeInfo* shCharacterAnimeGetInfo(SubCharacter* scp);
_AnimeInfo* shCharacterAnimeGetInfo_(SubCharacter* scp, int ctrl_type);
void shCharacterPlayerModelToDrama();
void shCharacterGetPartsMatrixForShadow(float mat[4], unsigned short kind, unsigned short id, unsigned int parts_name);
void shCharacterGetGroundInfoForShadow(float* pos, float* normal, float* height, unsigned short kind, unsigned short id);

// 
// Start address: 0x125cf0
SubCharacter* shCharacterGetFreeList()
{
	SubCharacter* scp;
	// Line 84, Address: 0x125cf0, Func Offset: 0
	// Line 87, Address: 0x125cf8, Func Offset: 0x8
	// Line 88, Address: 0x125d00, Func Offset: 0x10
	// Line 89, Address: 0x125d08, Func Offset: 0x18
	// Line 91, Address: 0x125d14, Func Offset: 0x24
	// Line 92, Address: 0x125d18, Func Offset: 0x28
	// Func End, Address: 0x125d28, Func Offset: 0x38
}

// 
// Start address: 0x125d30
void AddFreeList(SubCharacter* scp)
{
	// Line 100, Address: 0x125d30, Func Offset: 0
	// Line 101, Address: 0x125d38, Func Offset: 0x8
	// Line 102, Address: 0x125d48, Func Offset: 0x18
	// Line 103, Address: 0x125d54, Func Offset: 0x24
	// Func End, Address: 0x125d60, Func Offset: 0x30
}

// 
// Start address: 0x125d60
void shCharacterSortList(SubCharacter* scp)
{
	SubCharacter* next;
	SubCharacter* pre;
	// Line 119, Address: 0x125d60, Func Offset: 0
	// Line 123, Address: 0x125d70, Func Offset: 0x10
	// Line 124, Address: 0x125d80, Func Offset: 0x20
	// Line 125, Address: 0x125d8c, Func Offset: 0x2c
	// Line 126, Address: 0x125d94, Func Offset: 0x34
	// Line 127, Address: 0x125d9c, Func Offset: 0x3c
	// Line 132, Address: 0x125da4, Func Offset: 0x44
	// Line 134, Address: 0x125db4, Func Offset: 0x54
	// Line 135, Address: 0x125dbc, Func Offset: 0x5c
	// Line 136, Address: 0x125dc8, Func Offset: 0x68
	// Line 137, Address: 0x125dd0, Func Offset: 0x70
	// Line 138, Address: 0x125dd4, Func Offset: 0x74
	// Line 140, Address: 0x125ddc, Func Offset: 0x7c
	// Line 144, Address: 0x125de4, Func Offset: 0x84
	// Line 145, Address: 0x125e0c, Func Offset: 0xac
	// Line 146, Address: 0x125e14, Func Offset: 0xb4
	// Line 147, Address: 0x125e1c, Func Offset: 0xbc
	// Line 148, Address: 0x125e24, Func Offset: 0xc4
	// Line 150, Address: 0x125e30, Func Offset: 0xd0
	// Line 152, Address: 0x125e38, Func Offset: 0xd8
	// Line 153, Address: 0x125e40, Func Offset: 0xe0
	// Line 155, Address: 0x125e48, Func Offset: 0xe8
	// Line 157, Address: 0x125e50, Func Offset: 0xf0
	// Line 159, Address: 0x125e68, Func Offset: 0x108
	// Line 160, Address: 0x125e70, Func Offset: 0x110
	// Line 161, Address: 0x125e78, Func Offset: 0x118
	// Line 162, Address: 0x125e80, Func Offset: 0x120
	// Func End, Address: 0x125e94, Func Offset: 0x134
}

// 
// Start address: 0x125ea0
void shCharacterTopOfList(SubCharacter* scp)
{
	// Line 174, Address: 0x125ea0, Func Offset: 0
	// Line 175, Address: 0x125ea8, Func Offset: 0x8
	// Line 176, Address: 0x125eb8, Func Offset: 0x18
	// Line 178, Address: 0x125ec8, Func Offset: 0x28
	// Line 179, Address: 0x125ed8, Func Offset: 0x38
	// Line 180, Address: 0x125ee0, Func Offset: 0x40
	// Line 181, Address: 0x125eec, Func Offset: 0x4c
	// Func End, Address: 0x125ef8, Func Offset: 0x58
}

// 
// Start address: 0x125f00
void shCharacterCutList(SubCharacter* scp)
{
	SubCharacter* next;
	SubCharacter* pre;
	// Line 193, Address: 0x125f00, Func Offset: 0
	// Line 197, Address: 0x125f10, Func Offset: 0x10
	// Line 198, Address: 0x125f18, Func Offset: 0x18
	// Line 200, Address: 0x125f20, Func Offset: 0x20
	// Line 201, Address: 0x125f28, Func Offset: 0x28
	// Line 202, Address: 0x125f2c, Func Offset: 0x2c
	// Line 203, Address: 0x125f34, Func Offset: 0x34
	// Line 204, Address: 0x125f3c, Func Offset: 0x3c
	// Line 206, Address: 0x125f44, Func Offset: 0x44
	// Line 207, Address: 0x125f4c, Func Offset: 0x4c
	// Line 208, Address: 0x125f50, Func Offset: 0x50
	// Line 211, Address: 0x125f58, Func Offset: 0x58
	// Func End, Address: 0x125f6c, Func Offset: 0x6c
}

// 
// Start address: 0x125f70
void shCharacterInitialize(SubCharacter* scp, int id)
{
	// Line 221, Address: 0x125f70, Func Offset: 0
	// Line 222, Address: 0x125f8c, Func Offset: 0x1c
	// Line 225, Address: 0x125f98, Func Offset: 0x28
	// Line 226, Address: 0x125fa4, Func Offset: 0x34
	// Line 229, Address: 0x125fac, Func Offset: 0x3c
	// Line 230, Address: 0x125fb8, Func Offset: 0x48
	// Line 232, Address: 0x125fc0, Func Offset: 0x50
	// Line 233, Address: 0x126000, Func Offset: 0x90
	// Line 234, Address: 0x126040, Func Offset: 0xd0
	// Line 235, Address: 0x126080, Func Offset: 0x110
	// Line 236, Address: 0x1260b8, Func Offset: 0x148
	// Line 238, Address: 0x1260c4, Func Offset: 0x154
	// Line 241, Address: 0x1260cc, Func Offset: 0x15c
	// Func End, Address: 0x1260e8, Func Offset: 0x178
}

// 
// Start address: 0x1260f0
void UpdateMatrix(SubCharacter* scp, _anon0* rot, _anon0* trans)
{
	// Line 285, Address: 0x1260f0, Func Offset: 0
	// Line 286, Address: 0x126104, Func Offset: 0x14
	// Line 290, Address: 0x126118, Func Offset: 0x28
	// Line 291, Address: 0x126188, Func Offset: 0x98
	// Line 292, Address: 0x126190, Func Offset: 0xa0
	// Line 294, Address: 0x1261ac, Func Offset: 0xbc
	// Line 295, Address: 0x1261ec, Func Offset: 0xfc
	// Func End, Address: 0x1261fc, Func Offset: 0x10c
}

// 
// Start address: 0x126200
int shCharacterNeckAngleExec(shAnime3d* ap)
{
	shSkelton* stp;
	// Line 322, Address: 0x126200, Func Offset: 0
	// Line 325, Address: 0x126210, Func Offset: 0x10
	// Line 326, Address: 0x126220, Func Offset: 0x20
	// Line 327, Address: 0x12622c, Func Offset: 0x2c
	// Line 328, Address: 0x126244, Func Offset: 0x44
	// Line 329, Address: 0x126248, Func Offset: 0x48
	// Line 330, Address: 0x126258, Func Offset: 0x58
	// Line 331, Address: 0x12625c, Func Offset: 0x5c
	// Func End, Address: 0x126270, Func Offset: 0x70
}

// 
// Start address: 0x126270
int shCharacterKneeAngleExec(shAnime3d* ap)
{
	shSkelton* stp;
	// Line 333, Address: 0x126270, Func Offset: 0
	// Line 336, Address: 0x126280, Func Offset: 0x10
	// Line 337, Address: 0x126290, Func Offset: 0x20
	// Line 338, Address: 0x12629c, Func Offset: 0x2c
	// Line 339, Address: 0x1262b4, Func Offset: 0x44
	// Line 340, Address: 0x1262b8, Func Offset: 0x48
	// Line 341, Address: 0x1262c8, Func Offset: 0x58
	// Line 342, Address: 0x1262cc, Func Offset: 0x5c
	// Func End, Address: 0x1262e0, Func Offset: 0x70
}

// 
// Start address: 0x1262e0
void SCAddPos(SubCharacter* scp, _anon0* pos)
{
	// Line 380, Address: 0x1262e0, Func Offset: 0
	// Line 381, Address: 0x1262ec, Func Offset: 0xc
	// Line 382, Address: 0x126304, Func Offset: 0x24
	// Line 383, Address: 0x12631c, Func Offset: 0x3c
	// Line 386, Address: 0x126334, Func Offset: 0x54
	// Line 387, Address: 0x126344, Func Offset: 0x64
	// Func End, Address: 0x126350, Func Offset: 0x70
}

// 
// Start address: 0x126350
void SCSetRot(SubCharacter* scp, _anon0* rot)
{
	// Line 403, Address: 0x126350, Func Offset: 0
	// Line 404, Address: 0x12635c, Func Offset: 0xc
	// Line 405, Address: 0x126388, Func Offset: 0x38
	// Func End, Address: 0x126394, Func Offset: 0x44
}

// 
// Start address: 0x1263a0
void shCharacterSetClusterAnimeWork(SubCharacterDisp* scp_d, int index)
{
	// Line 449, Address: 0x1263a0, Func Offset: 0
	// Line 450, Address: 0x1263b0, Func Offset: 0x10
	// Line 451, Address: 0x1263c0, Func Offset: 0x20
	// Line 452, Address: 0x1263d4, Func Offset: 0x34
	// Line 454, Address: 0x1263dc, Func Offset: 0x3c
	// Line 457, Address: 0x1263ec, Func Offset: 0x4c
	// Line 459, Address: 0x126414, Func Offset: 0x74
	// Func End, Address: 0x126424, Func Offset: 0x84
}

// 
// Start address: 0x126430
void shCharacterClusterAnimeSet(SubCharacter* scp, int anime)
{
	void* anime_adr;
	SubCharacterDisp* scp_d;
	// Line 471, Address: 0x126430, Func Offset: 0
	// Line 472, Address: 0x126448, Func Offset: 0x18
	// Line 475, Address: 0x12644c, Func Offset: 0x1c
	// Line 478, Address: 0x126450, Func Offset: 0x20
	// Line 479, Address: 0x126460, Func Offset: 0x30
	// Func End, Address: 0x126478, Func Offset: 0x48
}

// 
// Start address: 0x126480
void SCSetModel(SubCharacter* scp, int model, int anime)
{
	SubCharacterDisp* scp_d;
	void* anime_adr;
	void* model_adr;
	// Line 548, Address: 0x126480, Func Offset: 0
	// Line 552, Address: 0x1264a4, Func Offset: 0x24
	// Line 554, Address: 0x1264a8, Func Offset: 0x28
	// Line 555, Address: 0x1264ac, Func Offset: 0x2c
	// Line 562, Address: 0x1264b0, Func Offset: 0x30
	// Line 563, Address: 0x1264bc, Func Offset: 0x3c
	// Line 567, Address: 0x1264d8, Func Offset: 0x58
	// Line 568, Address: 0x1264e0, Func Offset: 0x60
	// Line 569, Address: 0x1264ec, Func Offset: 0x6c
	// Line 580, Address: 0x126528, Func Offset: 0xa8
	// Line 597, Address: 0x126534, Func Offset: 0xb4
	// Line 598, Address: 0x126550, Func Offset: 0xd0
	// Line 605, Address: 0x126560, Func Offset: 0xe0
	// Line 606, Address: 0x126564, Func Offset: 0xe4
	// Line 607, Address: 0x126568, Func Offset: 0xe8
	// Line 613, Address: 0x12656c, Func Offset: 0xec
	// Line 616, Address: 0x126580, Func Offset: 0x100
	// Line 617, Address: 0x126594, Func Offset: 0x114
	// Func End, Address: 0x1265b4, Func Offset: 0x134
}

// 
// Start address: 0x1265c0
void* shCharacterGetAnimeAdrForDrama(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 632, Address: 0x1265c0, Func Offset: 0
	// Line 633, Address: 0x1265cc, Func Offset: 0xc
	// Line 634, Address: 0x1265d0, Func Offset: 0x10
	// Line 635, Address: 0x1265d4, Func Offset: 0x14
	// Func End, Address: 0x1265e4, Func Offset: 0x24
}

// 
// Start address: 0x1265f0
void* shCharacterGetAnimeAdrForPlay(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 645, Address: 0x1265f0, Func Offset: 0
	// Line 646, Address: 0x1265fc, Func Offset: 0xc
	// Line 647, Address: 0x126600, Func Offset: 0x10
	// Line 648, Address: 0x126604, Func Offset: 0x14
	// Func End, Address: 0x126614, Func Offset: 0x24
}

// 
// Start address: 0x126620
void* shCharacterGetClusterAnimeAdr(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 660, Address: 0x126620, Func Offset: 0
	// Line 662, Address: 0x12662c, Func Offset: 0xc
	// Line 664, Address: 0x126630, Func Offset: 0x10
	// Line 665, Address: 0x126634, Func Offset: 0x14
	// Func End, Address: 0x126644, Func Offset: 0x24
}

// 
// Start address: 0x126650
void shCharacterSetPlayer(SubCharacter* scp)
{
	// Line 680, Address: 0x126650, Func Offset: 0
	// Line 681, Address: 0x12665c, Func Offset: 0xc
	// Line 682, Address: 0x126668, Func Offset: 0x18
	// Line 683, Address: 0x126674, Func Offset: 0x24
	// Line 684, Address: 0x12667c, Func Offset: 0x2c
	// Line 688, Address: 0x12668c, Func Offset: 0x3c
	// Line 690, Address: 0x126698, Func Offset: 0x48
	// Line 691, Address: 0x1266a4, Func Offset: 0x54
	// Line 693, Address: 0x1266b0, Func Offset: 0x60
	// Line 695, Address: 0x1266bc, Func Offset: 0x6c
	// Func End, Address: 0x1266cc, Func Offset: 0x7c
}

// 
// Start address: 0x1266d0
short shCharacterGetModelID(SubCharacter* scp)
{
	// Line 727, Address: 0x1266d0, Func Offset: 0
	// Line 732, Address: 0x1266d8, Func Offset: 0x8
	// Line 734, Address: 0x1266e0, Func Offset: 0x10
	// Func End, Address: 0x1266ec, Func Offset: 0x1c
}

// 
// Start address: 0x1266f0
SubCharacter* shCharacterGetSubCharacter(unsigned short kind, short id)
{
	SubCharacter* next;
	SubCharacter* pre;
	// Line 792, Address: 0x1266f0, Func Offset: 0
	// Line 797, Address: 0x126704, Func Offset: 0x14
	// Line 798, Address: 0x12670c, Func Offset: 0x1c
	// Line 800, Address: 0x126718, Func Offset: 0x28
	// Line 801, Address: 0x126734, Func Offset: 0x44
	// Line 802, Address: 0x12676c, Func Offset: 0x7c
	// Line 805, Address: 0x126778, Func Offset: 0x88
	// Line 806, Address: 0x126794, Func Offset: 0xa4
	// Line 807, Address: 0x1267d0, Func Offset: 0xe0
	// Line 809, Address: 0x1267dc, Func Offset: 0xec
	// Line 818, Address: 0x1267f0, Func Offset: 0x100
	// Line 819, Address: 0x1267f4, Func Offset: 0x104
	// Func End, Address: 0x126808, Func Offset: 0x118
}

// 
// Start address: 0x126810
int shCharacterGetSkeltonNum(short kind)
{
	// Line 829, Address: 0x126810, Func Offset: 0
	// Line 830, Address: 0x126818, Func Offset: 0x8
	// Line 832, Address: 0x126850, Func Offset: 0x40
	// Line 835, Address: 0x12687c, Func Offset: 0x6c
	// Line 838, Address: 0x1268a8, Func Offset: 0x98
	// Line 841, Address: 0x1268d4, Func Offset: 0xc4
	// Line 846, Address: 0x126900, Func Offset: 0xf0
	// Line 849, Address: 0x12690c, Func Offset: 0xfc
	// Line 850, Address: 0x126910, Func Offset: 0x100
	// Func End, Address: 0x12691c, Func Offset: 0x10c
}

// 
// Start address: 0x126920
int shCharacterAnimeOneFrameSize(unsigned short id)
{
	unsigned short result;
	// Line 864, Address: 0x126920, Func Offset: 0
	// Line 870, Address: 0x12692c, Func Offset: 0xc
	// Line 873, Address: 0x126a8c, Func Offset: 0x16c
	// Line 875, Address: 0x126a9c, Func Offset: 0x17c
	// Line 877, Address: 0x126aac, Func Offset: 0x18c
	// Line 881, Address: 0x126abc, Func Offset: 0x19c
	// Line 883, Address: 0x126acc, Func Offset: 0x1ac
	// Line 885, Address: 0x126adc, Func Offset: 0x1bc
	// Line 890, Address: 0x126aec, Func Offset: 0x1cc
	// Line 893, Address: 0x126afc, Func Offset: 0x1dc
	// Line 895, Address: 0x126b0c, Func Offset: 0x1ec
	// Line 897, Address: 0x126b1c, Func Offset: 0x1fc
	// Line 899, Address: 0x126b2c, Func Offset: 0x20c
	// Line 901, Address: 0x126b3c, Func Offset: 0x21c
	// Line 903, Address: 0x126b4c, Func Offset: 0x22c
	// Line 906, Address: 0x126b5c, Func Offset: 0x23c
	// Line 908, Address: 0x126b6c, Func Offset: 0x24c
	// Line 911, Address: 0x126b7c, Func Offset: 0x25c
	// Line 913, Address: 0x126b8c, Func Offset: 0x26c
	// Line 915, Address: 0x126b9c, Func Offset: 0x27c
	// Line 917, Address: 0x126bac, Func Offset: 0x28c
	// Line 919, Address: 0x126bbc, Func Offset: 0x29c
	// Line 921, Address: 0x126bcc, Func Offset: 0x2ac
	// Line 923, Address: 0x126bdc, Func Offset: 0x2bc
	// Line 925, Address: 0x126bec, Func Offset: 0x2cc
	// Line 928, Address: 0x126bfc, Func Offset: 0x2dc
	// Line 932, Address: 0x126c00, Func Offset: 0x2e0
	// Line 933, Address: 0x126c04, Func Offset: 0x2e4
	// Func End, Address: 0x126c14, Func Offset: 0x2f4
}

// 
// Start address: 0x126c20
void shCharacterInitSubCharacter()
{
	SubCharacterDisp* scp_d;
	int i;
	// Line 979, Address: 0x126c20, Func Offset: 0
	// Line 984, Address: 0x126c30, Func Offset: 0x10
	// Line 986, Address: 0x126c48, Func Offset: 0x28
	// Line 987, Address: 0x126c50, Func Offset: 0x30
	// Line 992, Address: 0x126c58, Func Offset: 0x38
	// Line 993, Address: 0x126c64, Func Offset: 0x44
	// Line 994, Address: 0x126c6c, Func Offset: 0x4c
	// Line 995, Address: 0x126c84, Func Offset: 0x64
	// Line 1000, Address: 0x126c88, Func Offset: 0x68
	// Line 1001, Address: 0x126c94, Func Offset: 0x74
	// Line 1002, Address: 0x126cb8, Func Offset: 0x98
	// Line 1003, Address: 0x126ccc, Func Offset: 0xac
	// Func End, Address: 0x126ce4, Func Offset: 0xc4
}

// 
// Start address: 0x126cf0
void shCharacterSetHandler(SubCharacter* scp)
{
	// Line 1016, Address: 0x126cf0, Func Offset: 0
	// Line 1017, Address: 0x126cfc, Func Offset: 0xc
	// Line 1021, Address: 0x126df8, Func Offset: 0x108
	// Line 1022, Address: 0x126e04, Func Offset: 0x114
	// Line 1024, Address: 0x126e0c, Func Offset: 0x11c
	// Line 1025, Address: 0x126e20, Func Offset: 0x130
	// Line 1026, Address: 0x126e34, Func Offset: 0x144
	// Line 1027, Address: 0x126e48, Func Offset: 0x158
	// Line 1028, Address: 0x126e5c, Func Offset: 0x16c
	// Line 1029, Address: 0x126e70, Func Offset: 0x180
	// Line 1033, Address: 0x126e84, Func Offset: 0x194
	// Line 1034, Address: 0x126e98, Func Offset: 0x1a8
	// Line 1035, Address: 0x126eac, Func Offset: 0x1bc
	// Line 1036, Address: 0x126ec0, Func Offset: 0x1d0
	// Line 1037, Address: 0x126ed4, Func Offset: 0x1e4
	// Line 1038, Address: 0x126ee8, Func Offset: 0x1f8
	// Line 1039, Address: 0x126efc, Func Offset: 0x20c
	// Line 1040, Address: 0x126f10, Func Offset: 0x220
	// Line 1041, Address: 0x126f24, Func Offset: 0x234
	// Line 1042, Address: 0x126f38, Func Offset: 0x248
	// Line 1045, Address: 0x126f4c, Func Offset: 0x25c
	// Line 1047, Address: 0x126fa4, Func Offset: 0x2b4
	// Line 1048, Address: 0x126fb0, Func Offset: 0x2c0
	// Line 1049, Address: 0x126fcc, Func Offset: 0x2dc
	// Line 1051, Address: 0x126fd4, Func Offset: 0x2e4
	// Line 1053, Address: 0x126ff8, Func Offset: 0x308
	// Line 1054, Address: 0x127000, Func Offset: 0x310
	// Line 1056, Address: 0x127008, Func Offset: 0x318
	// Line 1059, Address: 0x127014, Func Offset: 0x324
	// Line 1061, Address: 0x12701c, Func Offset: 0x32c
	// Line 1062, Address: 0x127028, Func Offset: 0x338
	// Line 1064, Address: 0x127030, Func Offset: 0x340
	// Line 1065, Address: 0x12703c, Func Offset: 0x34c
	// Line 1067, Address: 0x127044, Func Offset: 0x354
	// Line 1074, Address: 0x127050, Func Offset: 0x360
	// Func End, Address: 0x127060, Func Offset: 0x370
}

// 
// Start address: 0x127060
SubCharacter* shCharacterCreate(unsigned int id, int model, int anime, int clani, int chr_id)
{
	SubCharacterDisp* scp_d;
	SubCharacter* scp;
	// Line 1107, Address: 0x127060, Func Offset: 0
	// Line 1113, Address: 0x127084, Func Offset: 0x24
	// Line 1114, Address: 0x127090, Func Offset: 0x30
	// Line 1116, Address: 0x127094, Func Offset: 0x34
	// Line 1117, Address: 0x12709c, Func Offset: 0x3c
	// Line 1121, Address: 0x1270b8, Func Offset: 0x58
	// Line 1123, Address: 0x1270cc, Func Offset: 0x6c
	// Line 1124, Address: 0x1270d4, Func Offset: 0x74
	// Line 1125, Address: 0x1270dc, Func Offset: 0x7c
	// Line 1127, Address: 0x1270e4, Func Offset: 0x84
	// Line 1130, Address: 0x1270ec, Func Offset: 0x8c
	// Line 1132, Address: 0x1270f8, Func Offset: 0x98
	// Line 1133, Address: 0x1270fc, Func Offset: 0x9c
	// Func End, Address: 0x127114, Func Offset: 0xb4
}

// 
// Start address: 0x127120
void shCharacterDelete(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 1151, Address: 0x127120, Func Offset: 0
	// Line 1183, Address: 0x127130, Func Offset: 0x10
	// Line 1186, Address: 0x12713c, Func Offset: 0x1c
	// Line 1187, Address: 0x127150, Func Offset: 0x30
	// Line 1191, Address: 0x12715c, Func Offset: 0x3c
	// Line 1192, Address: 0x127160, Func Offset: 0x40
	// Line 1193, Address: 0x127174, Func Offset: 0x54
	// Line 1194, Address: 0x127180, Func Offset: 0x60
	// Line 1198, Address: 0x127184, Func Offset: 0x64
	// Line 1201, Address: 0x127190, Func Offset: 0x70
	// Line 1204, Address: 0x127194, Func Offset: 0x74
	// Line 1207, Address: 0x1271a8, Func Offset: 0x88
	// Line 1208, Address: 0x1271b4, Func Offset: 0x94
	// Line 1209, Address: 0x1271c0, Func Offset: 0xa0
	// Line 1212, Address: 0x1271d4, Func Offset: 0xb4
	// Func End, Address: 0x1271e8, Func Offset: 0xc8
}

// 
// Start address: 0x1271f0
void shCharacterPlayingExecAnimeOne(SubCharacter* scp)
{
	unsigned char weapon;
	SubCharacter* scp_wp;
	shSkelton* stp;
	SubCharacterDisp* scp_d;
	// Line 1260, Address: 0x1271f0, Func Offset: 0
	// Line 1261, Address: 0x12720c, Func Offset: 0x1c
	// Line 1265, Address: 0x127210, Func Offset: 0x20
	// Line 1274, Address: 0x12724c, Func Offset: 0x5c
	// Line 1278, Address: 0x127268, Func Offset: 0x78
	// Line 1279, Address: 0x127278, Func Offset: 0x88
	// Line 1280, Address: 0x127288, Func Offset: 0x98
	// Line 1283, Address: 0x127298, Func Offset: 0xa8
	// Line 1284, Address: 0x1272a8, Func Offset: 0xb8
	// Line 1285, Address: 0x1272b8, Func Offset: 0xc8
	// Line 1286, Address: 0x1272c8, Func Offset: 0xd8
	// Line 1289, Address: 0x1272d0, Func Offset: 0xe0
	// Line 1290, Address: 0x1272e0, Func Offset: 0xf0
	// Line 1291, Address: 0x1272f0, Func Offset: 0x100
	// Line 1294, Address: 0x127300, Func Offset: 0x110
	// Line 1295, Address: 0x127310, Func Offset: 0x120
	// Line 1296, Address: 0x127320, Func Offset: 0x130
	// Line 1301, Address: 0x127330, Func Offset: 0x140
	// Line 1302, Address: 0x127340, Func Offset: 0x150
	// Line 1303, Address: 0x12734c, Func Offset: 0x15c
	// Line 1305, Address: 0x12735c, Func Offset: 0x16c
	// Line 1306, Address: 0x12736c, Func Offset: 0x17c
	// Line 1307, Address: 0x127378, Func Offset: 0x188
	// Line 1310, Address: 0x127388, Func Offset: 0x198
	// Line 1313, Address: 0x127390, Func Offset: 0x1a0
	// Line 1316, Address: 0x1273a0, Func Offset: 0x1b0
	// Line 1317, Address: 0x1273b0, Func Offset: 0x1c0
	// Line 1318, Address: 0x1273bc, Func Offset: 0x1cc
	// Line 1320, Address: 0x1273cc, Func Offset: 0x1dc
	// Line 1323, Address: 0x1273d4, Func Offset: 0x1e4
	// Line 1341, Address: 0x1273e4, Func Offset: 0x1f4
	// Line 1348, Address: 0x127420, Func Offset: 0x230
	// Line 1350, Address: 0x127430, Func Offset: 0x240
	// Line 1351, Address: 0x127454, Func Offset: 0x264
	// Line 1363, Address: 0x127460, Func Offset: 0x270
	// Line 1366, Address: 0x127468, Func Offset: 0x278
	// Line 1374, Address: 0x127478, Func Offset: 0x288
	// Line 1380, Address: 0x1274a8, Func Offset: 0x2b8
	// Line 1381, Address: 0x1274b0, Func Offset: 0x2c0
	// Line 1431, Address: 0x1274c4, Func Offset: 0x2d4
	// Func End, Address: 0x1274e4, Func Offset: 0x2f4
}

// 
// Start address: 0x1274f0
void shCharacterDramaExecAnimeOne(SubCharacter* scp)
{
	unsigned char weapon;
	SubCharacter* scp_wp;
	SubCharacterDisp* scp_d;
	// Line 1441, Address: 0x1274f0, Func Offset: 0
	// Line 1442, Address: 0x127508, Func Offset: 0x18
	// Line 1446, Address: 0x12750c, Func Offset: 0x1c
	// Line 1448, Address: 0x127528, Func Offset: 0x38
	// Line 1454, Address: 0x127534, Func Offset: 0x44
	// Line 1455, Address: 0x127550, Func Offset: 0x60
	// Line 1456, Address: 0x127568, Func Offset: 0x78
	// Line 1474, Address: 0x127578, Func Offset: 0x88
	// Line 1480, Address: 0x12759c, Func Offset: 0xac
	// Line 1482, Address: 0x1275ac, Func Offset: 0xbc
	// Line 1483, Address: 0x1275d0, Func Offset: 0xe0
	// Line 1492, Address: 0x1275dc, Func Offset: 0xec
	// Line 1499, Address: 0x12760c, Func Offset: 0x11c
	// Line 1500, Address: 0x127614, Func Offset: 0x124
	// Line 1516, Address: 0x127628, Func Offset: 0x138
	// Func End, Address: 0x127644, Func Offset: 0x154
}

// 
// Start address: 0x127650
void SCNowDemoEventSwitch(SubCharacter* scp, int flag)
{
	// Line 1569, Address: 0x127650, Func Offset: 0
	// Line 1570, Address: 0x12765c, Func Offset: 0xc
	// Line 1571, Address: 0x127668, Func Offset: 0x18
	// Line 1572, Address: 0x127678, Func Offset: 0x28
	// Line 1573, Address: 0x127680, Func Offset: 0x30
	// Line 1575, Address: 0x127694, Func Offset: 0x44
	// Func End, Address: 0x1276a0, Func Offset: 0x50
}

// 
// Start address: 0x1276a0
void SCNowPlayableEventSwitch(SubCharacter* scp, int flag)
{
	// Line 1580, Address: 0x1276a0, Func Offset: 0
	// Line 1581, Address: 0x1276ac, Func Offset: 0xc
	// Line 1582, Address: 0x1276b8, Func Offset: 0x18
	// Line 1583, Address: 0x1276c8, Func Offset: 0x28
	// Line 1584, Address: 0x1276d0, Func Offset: 0x30
	// Line 1586, Address: 0x1276e4, Func Offset: 0x44
	// Func End, Address: 0x1276f0, Func Offset: 0x50
}

// 
// Start address: 0x1276f0
void SCStayModelSwitch(SubCharacter* scp, int flag)
{
	// Line 1591, Address: 0x1276f0, Func Offset: 0
	// Line 1592, Address: 0x1276fc, Func Offset: 0xc
	// Line 1593, Address: 0x127708, Func Offset: 0x18
	// Line 1594, Address: 0x127718, Func Offset: 0x28
	// Line 1595, Address: 0x127720, Func Offset: 0x30
	// Line 1597, Address: 0x127734, Func Offset: 0x44
	// Func End, Address: 0x127740, Func Offset: 0x50
}

// 
// Start address: 0x127740
void SCAnimeTypeSwitch(SubCharacter* scp, int flag)
{
	// Line 1602, Address: 0x127740, Func Offset: 0
	// Line 1603, Address: 0x12774c, Func Offset: 0xc
	// Line 1604, Address: 0x127758, Func Offset: 0x18
	// Line 1605, Address: 0x127768, Func Offset: 0x28
	// Line 1606, Address: 0x127770, Func Offset: 0x30
	// Line 1608, Address: 0x127784, Func Offset: 0x44
	// Func End, Address: 0x127790, Func Offset: 0x50
}

// 
// Start address: 0x127790
void SCFreefallSwitch(SubCharacter* scp, int sw)
{
	// Line 1644, Address: 0x127790, Func Offset: 0
	// Line 1645, Address: 0x12779c, Func Offset: 0xc
	// Line 1646, Address: 0x1277a8, Func Offset: 0x18
	// Line 1647, Address: 0x1277bc, Func Offset: 0x2c
	// Line 1648, Address: 0x1277c4, Func Offset: 0x34
	// Line 1650, Address: 0x1277dc, Func Offset: 0x4c
	// Func End, Address: 0x1277e8, Func Offset: 0x58
}

// 
// Start address: 0x1277f0
void shCharacterExecAnimeAll()
{
	SubCharacter* scp;
	// Line 1671, Address: 0x1277f0, Func Offset: 0
	// Line 1675, Address: 0x1277fc, Func Offset: 0xc
	// Line 1676, Address: 0x12780c, Func Offset: 0x1c
	// Line 1682, Address: 0x12781c, Func Offset: 0x2c
	// Line 1684, Address: 0x12782c, Func Offset: 0x3c
	// Line 1685, Address: 0x12783c, Func Offset: 0x4c
	// Line 1686, Address: 0x127848, Func Offset: 0x58
	// Line 1687, Address: 0x127850, Func Offset: 0x60
	// Line 1688, Address: 0x12785c, Func Offset: 0x6c
	// Line 1692, Address: 0x127860, Func Offset: 0x70
	// Line 1701, Address: 0x127870, Func Offset: 0x80
	// Func End, Address: 0x127884, Func Offset: 0x94
}

// 
// Start address: 0x127890
void shCharacterUpdateAll()
{
	SubCharacter* scp;
	// Line 1709, Address: 0x127890, Func Offset: 0
	// Line 1712, Address: 0x12789c, Func Offset: 0xc
	// Line 1713, Address: 0x1278ac, Func Offset: 0x1c
	// Line 1714, Address: 0x1278bc, Func Offset: 0x2c
	// Line 1715, Address: 0x1278cc, Func Offset: 0x3c
	// Line 1716, Address: 0x1278d0, Func Offset: 0x40
	// Line 1717, Address: 0x1278e4, Func Offset: 0x54
	// Line 1719, Address: 0x1278f8, Func Offset: 0x68
	// Func End, Address: 0x12790c, Func Offset: 0x7c
}

// 
// Start address: 0x127910
void shCharacterSetFunction(SubCharacter* scp, void(*func)(SubCharacter*))
{
	// Line 1782, Address: 0x127910, Func Offset: 0
	// Line 1783, Address: 0x12791c, Func Offset: 0xc
	// Line 1784, Address: 0x127928, Func Offset: 0x18
	// Func End, Address: 0x127934, Func Offset: 0x24
}

// 
// Start address: 0x127940
void shCharacterExecFunctionAll()
{
	SubCharacter* next;
	SubCharacter* scp;
	// Line 1822, Address: 0x127940, Func Offset: 0
	// Line 1827, Address: 0x127950, Func Offset: 0x10
	// Line 1832, Address: 0x127958, Func Offset: 0x18
	// Line 1833, Address: 0x127960, Func Offset: 0x20
	// Line 1835, Address: 0x127964, Func Offset: 0x24
	// Line 1836, Address: 0x127970, Func Offset: 0x30
	// Line 1838, Address: 0x127980, Func Offset: 0x40
	// Line 1841, Address: 0x127990, Func Offset: 0x50
	// Line 1842, Address: 0x127998, Func Offset: 0x58
	// Func End, Address: 0x1279b0, Func Offset: 0x70
}

// 
// Start address: 0x1279b0
void shCharacterAnimeSet(SubCharacter* scp, int ctrl_type, int inter_type, _AnimeInfo* anim_info, int anime)
{
	SubCharacterDisp* scp_d;
	shAnime3d* anim;
	void* anime_adr;
	// Line 1984, Address: 0x1279b0, Func Offset: 0
	// Line 2002, Address: 0x1279d8, Func Offset: 0x28
	// Line 2008, Address: 0x1279dc, Func Offset: 0x2c
	// Line 2015, Address: 0x1279e0, Func Offset: 0x30
	// Line 2018, Address: 0x127a0c, Func Offset: 0x5c
	// Line 2019, Address: 0x127a10, Func Offset: 0x60
	// Line 2021, Address: 0x127a18, Func Offset: 0x68
	// Line 2026, Address: 0x127a1c, Func Offset: 0x6c
	// Line 2027, Address: 0x127a2c, Func Offset: 0x7c
	// Line 2032, Address: 0x127a3c, Func Offset: 0x8c
	// Line 2033, Address: 0x127a44, Func Offset: 0x94
	// Line 2035, Address: 0x127a4c, Func Offset: 0x9c
	// Line 2040, Address: 0x127a50, Func Offset: 0xa0
	// Line 2064, Address: 0x127a68, Func Offset: 0xb8
	// Line 2065, Address: 0x127a88, Func Offset: 0xd8
	// Line 2066, Address: 0x127a90, Func Offset: 0xe0
	// Line 2067, Address: 0x127a98, Func Offset: 0xe8
	// Line 2074, Address: 0x127a9c, Func Offset: 0xec
	// Line 2081, Address: 0x127af8, Func Offset: 0x148
	// Line 2082, Address: 0x127afc, Func Offset: 0x14c
	// Line 2083, Address: 0x127b14, Func Offset: 0x164
	// Line 2085, Address: 0x127b2c, Func Offset: 0x17c
	// Line 2088, Address: 0x127b3c, Func Offset: 0x18c
	// Line 2090, Address: 0x127b58, Func Offset: 0x1a8
	// Line 2091, Address: 0x127b68, Func Offset: 0x1b8
	// Line 2092, Address: 0x127b78, Func Offset: 0x1c8
	// Line 2093, Address: 0x127b80, Func Offset: 0x1d0
	// Line 2095, Address: 0x127b88, Func Offset: 0x1d8
	// Line 2121, Address: 0x127b90, Func Offset: 0x1e0
	// Line 2123, Address: 0x127bb4, Func Offset: 0x204
	// Line 2124, Address: 0x127bcc, Func Offset: 0x21c
	// Line 2125, Address: 0x127bd8, Func Offset: 0x228
	// Line 2126, Address: 0x127be0, Func Offset: 0x230
	// Line 2128, Address: 0x127bec, Func Offset: 0x23c
	// Line 2130, Address: 0x127bf4, Func Offset: 0x244
	// Line 2135, Address: 0x127bfc, Func Offset: 0x24c
	// Line 2137, Address: 0x127c18, Func Offset: 0x268
	// Line 2138, Address: 0x127c1c, Func Offset: 0x26c
	// Line 2139, Address: 0x127c20, Func Offset: 0x270
	// Line 2141, Address: 0x127c24, Func Offset: 0x274
	// Line 2144, Address: 0x127c30, Func Offset: 0x280
	// Line 2146, Address: 0x127c38, Func Offset: 0x288
	// Line 2147, Address: 0x127c40, Func Offset: 0x290
	// Line 2149, Address: 0x127c48, Func Offset: 0x298
	// Line 2150, Address: 0x127c50, Func Offset: 0x2a0
	// Line 2161, Address: 0x127c58, Func Offset: 0x2a8
	// Line 2164, Address: 0x127c60, Func Offset: 0x2b0
	// Line 2166, Address: 0x127c64, Func Offset: 0x2b4
	// Line 2167, Address: 0x127c6c, Func Offset: 0x2bc
	// Line 2168, Address: 0x127c70, Func Offset: 0x2c0
	// Line 2170, Address: 0x127c7c, Func Offset: 0x2cc
	// Line 2177, Address: 0x127c98, Func Offset: 0x2e8
	// Line 2178, Address: 0x127ca0, Func Offset: 0x2f0
	// Line 2180, Address: 0x127ca8, Func Offset: 0x2f8
	// Line 2187, Address: 0x127cb0, Func Offset: 0x300
	// Func End, Address: 0x127ccc, Func Offset: 0x31c
}

// 
// Start address: 0x127cd0
void shCharacterStayObjectScaleSet(SubCharacter* scp, float scale)
{
	SubCharacterDisp* scp_d;
	// Line 2192, Address: 0x127cd0, Func Offset: 0
	// Line 2193, Address: 0x127ce4, Func Offset: 0x14
	// Line 2195, Address: 0x127ce8, Func Offset: 0x18
	// Line 2196, Address: 0x127cf0, Func Offset: 0x20
	// Line 2197, Address: 0x127cfc, Func Offset: 0x2c
	// Func End, Address: 0x127d10, Func Offset: 0x40
}

// 
// Start address: 0x127d10
void shCharacterItemScreenObjectSet(SubCharacter* scp, shItemScreenObjectSettingData* data)
{
	shSkelton* sp;
	_anon0 rot_tmp;
	SubCharacterDisp* scp_d;
	// Line 2217, Address: 0x127d10, Func Offset: 0
	// Line 2219, Address: 0x127d28, Func Offset: 0x18
	// Line 2220, Address: 0x127d2c, Func Offset: 0x1c
	// Line 2223, Address: 0x127d40, Func Offset: 0x30
	// Line 2226, Address: 0x127d44, Func Offset: 0x34
	// Line 2230, Address: 0x127d58, Func Offset: 0x48
	// Line 2231, Address: 0x127d64, Func Offset: 0x54
	// Line 2233, Address: 0x127d70, Func Offset: 0x60
	// Line 2234, Address: 0x127d80, Func Offset: 0x70
	// Func End, Address: 0x127d98, Func Offset: 0x88
}

// 
// Start address: 0x127da0
short shCharacterAnimeSpeedGet(SubCharacter* scp)
{
	// Line 2291, Address: 0x127da0, Func Offset: 0
	// Line 2292, Address: 0x127dac, Func Offset: 0xc
	// Line 2293, Address: 0x127dbc, Func Offset: 0x1c
	// Func End, Address: 0x127dcc, Func Offset: 0x2c
}

// 
// Start address: 0x127dd0
short shCharacterAnimeSpeedGet_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2295, Address: 0x127dd0, Func Offset: 0
	// Line 2296, Address: 0x127de4, Func Offset: 0x14
	// Line 2299, Address: 0x127de8, Func Offset: 0x18
	// Line 2302, Address: 0x127e14, Func Offset: 0x44
	// Line 2303, Address: 0x127e18, Func Offset: 0x48
	// Line 2305, Address: 0x127e20, Func Offset: 0x50
	// Line 2313, Address: 0x127e24, Func Offset: 0x54
	// Line 2314, Address: 0x127e28, Func Offset: 0x58
	// Func End, Address: 0x127e3c, Func Offset: 0x6c
}

// 
// Start address: 0x127e40
void shCharacterAnimeSpeedAdd(SubCharacter* scp, short add)
{
	// Line 2335, Address: 0x127e40, Func Offset: 0
	// Line 2336, Address: 0x127e50, Func Offset: 0x10
	// Line 2337, Address: 0x127e64, Func Offset: 0x24
	// Func End, Address: 0x127e74, Func Offset: 0x34
}

// 
// Start address: 0x127e80
void shCharacterAnimeSpeedAdd_(SubCharacter* scp, unsigned int type, short add)
{
	shAnime3d* anime2;
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2339, Address: 0x127e80, Func Offset: 0
	// Line 2340, Address: 0x127e9c, Func Offset: 0x1c
	// Line 2343, Address: 0x127ea0, Func Offset: 0x20
	// Line 2344, Address: 0x127ea4, Func Offset: 0x24
	// Line 2345, Address: 0x127ea8, Func Offset: 0x28
	// Line 2347, Address: 0x127ed4, Func Offset: 0x54
	// Line 2348, Address: 0x127edc, Func Offset: 0x5c
	// Line 2349, Address: 0x127ee4, Func Offset: 0x64
	// Line 2351, Address: 0x127eec, Func Offset: 0x6c
	// Line 2352, Address: 0x127ef4, Func Offset: 0x74
	// Line 2354, Address: 0x127efc, Func Offset: 0x7c
	// Line 2358, Address: 0x127f04, Func Offset: 0x84
	// Func End, Address: 0x127f1c, Func Offset: 0x9c
}

// 
// Start address: 0x127f20
void shCharacterAnimePause(SubCharacter* scp)
{
	// Line 2374, Address: 0x127f20, Func Offset: 0
	// Line 2375, Address: 0x127f2c, Func Offset: 0xc
	// Line 2376, Address: 0x127f3c, Func Offset: 0x1c
	// Func End, Address: 0x127f4c, Func Offset: 0x2c
}

// 
// Start address: 0x127f50
void shCharacterAnimePause_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime2;
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2378, Address: 0x127f50, Func Offset: 0
	// Line 2379, Address: 0x127f68, Func Offset: 0x18
	// Line 2382, Address: 0x127f6c, Func Offset: 0x1c
	// Line 2383, Address: 0x127f70, Func Offset: 0x20
	// Line 2384, Address: 0x127f74, Func Offset: 0x24
	// Line 2386, Address: 0x127fa0, Func Offset: 0x50
	// Line 2387, Address: 0x127fa8, Func Offset: 0x58
	// Line 2388, Address: 0x127fb0, Func Offset: 0x60
	// Line 2390, Address: 0x127fb8, Func Offset: 0x68
	// Line 2391, Address: 0x127fc0, Func Offset: 0x70
	// Line 2393, Address: 0x127fc8, Func Offset: 0x78
	// Line 2400, Address: 0x127fd0, Func Offset: 0x80
	// Func End, Address: 0x127fe8, Func Offset: 0x98
}

// 
// Start address: 0x127ff0
void shCharacterAnimeRestart(SubCharacter* scp)
{
	// Line 2416, Address: 0x127ff0, Func Offset: 0
	// Line 2417, Address: 0x127ffc, Func Offset: 0xc
	// Line 2418, Address: 0x12800c, Func Offset: 0x1c
	// Func End, Address: 0x12801c, Func Offset: 0x2c
}

// 
// Start address: 0x128020
void shCharacterAnimeRestart_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime2;
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2420, Address: 0x128020, Func Offset: 0
	// Line 2421, Address: 0x128038, Func Offset: 0x18
	// Line 2440, Address: 0x12803c, Func Offset: 0x1c
	// Line 2441, Address: 0x128040, Func Offset: 0x20
	// Line 2443, Address: 0x128044, Func Offset: 0x24
	// Line 2445, Address: 0x128070, Func Offset: 0x50
	// Line 2446, Address: 0x128088, Func Offset: 0x68
	// Line 2447, Address: 0x128090, Func Offset: 0x70
	// Line 2448, Address: 0x1280a8, Func Offset: 0x88
	// Line 2449, Address: 0x1280b0, Func Offset: 0x90
	// Line 2451, Address: 0x1280b8, Func Offset: 0x98
	// Line 2452, Address: 0x1280d0, Func Offset: 0xb0
	// Line 2453, Address: 0x1280d8, Func Offset: 0xb8
	// Line 2455, Address: 0x1280e0, Func Offset: 0xc0
	// Line 2456, Address: 0x1280f8, Func Offset: 0xd8
	// Line 2460, Address: 0x128100, Func Offset: 0xe0
	// Func End, Address: 0x128118, Func Offset: 0xf8
}

// 
// Start address: 0x128120
int shCharacterAnimeIsEnd(SubCharacter* scp)
{
	// Line 2477, Address: 0x128120, Func Offset: 0
	// Line 2478, Address: 0x12812c, Func Offset: 0xc
	// Line 2479, Address: 0x12813c, Func Offset: 0x1c
	// Func End, Address: 0x12814c, Func Offset: 0x2c
}

// 
// Start address: 0x128150
int shCharacterAnimeIsEnd_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2481, Address: 0x128150, Func Offset: 0
	// Line 2482, Address: 0x128164, Func Offset: 0x14
	// Line 2485, Address: 0x128168, Func Offset: 0x18
	// Line 2487, Address: 0x128194, Func Offset: 0x44
	// Line 2488, Address: 0x128198, Func Offset: 0x48
	// Line 2490, Address: 0x1281a0, Func Offset: 0x50
	// Line 2496, Address: 0x1281a4, Func Offset: 0x54
	// Line 2506, Address: 0x1281c0, Func Offset: 0x70
	// Line 2507, Address: 0x1281d4, Func Offset: 0x84
	// Line 2509, Address: 0x1281e8, Func Offset: 0x98
	// Line 2512, Address: 0x128214, Func Offset: 0xc4
	// Func End, Address: 0x128228, Func Offset: 0xd8
}

// 
// Start address: 0x128230
short shCharacterAnimeFrameGet(SubCharacter* scp)
{
	// Line 2526, Address: 0x128230, Func Offset: 0
	// Line 2527, Address: 0x12823c, Func Offset: 0xc
	// Line 2528, Address: 0x12824c, Func Offset: 0x1c
	// Func End, Address: 0x12825c, Func Offset: 0x2c
}

// 
// Start address: 0x128260
short shCharacterAnimeFrameGet_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2530, Address: 0x128260, Func Offset: 0
	// Line 2531, Address: 0x128274, Func Offset: 0x14
	// Line 2534, Address: 0x128278, Func Offset: 0x18
	// Line 2536, Address: 0x1282a4, Func Offset: 0x44
	// Line 2537, Address: 0x1282a8, Func Offset: 0x48
	// Line 2539, Address: 0x1282b0, Func Offset: 0x50
	// Line 2549, Address: 0x1282b4, Func Offset: 0x54
	// Line 2551, Address: 0x1282d4, Func Offset: 0x74
	// Line 2552, Address: 0x1282f4, Func Offset: 0x94
	// Line 2554, Address: 0x12831c, Func Offset: 0xbc
	// Line 2558, Address: 0x128344, Func Offset: 0xe4
	// Line 2559, Address: 0x128364, Func Offset: 0x104
	// Line 2561, Address: 0x12838c, Func Offset: 0x12c
	// Line 2566, Address: 0x1283ac, Func Offset: 0x14c
	// Func End, Address: 0x1283c0, Func Offset: 0x160
}

// 
// Start address: 0x1283c0
void shCharacterAnimeFrameSet(SubCharacter* scp, unsigned short frame)
{
	// Line 2583, Address: 0x1283c0, Func Offset: 0
	// Line 2584, Address: 0x1283d0, Func Offset: 0x10
	// Line 2585, Address: 0x1283e4, Func Offset: 0x24
	// Func End, Address: 0x1283f4, Func Offset: 0x34
}

// 
// Start address: 0x128400
void shCharacterAnimeFrameSet_(SubCharacter* scp, unsigned int type, unsigned short frame)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2587, Address: 0x128400, Func Offset: 0
	// Line 2588, Address: 0x128418, Func Offset: 0x18
	// Line 2591, Address: 0x12841c, Func Offset: 0x1c
	// Line 2593, Address: 0x128448, Func Offset: 0x48
	// Line 2594, Address: 0x12844c, Func Offset: 0x4c
	// Line 2596, Address: 0x128454, Func Offset: 0x54
	// Line 2599, Address: 0x128458, Func Offset: 0x58
	// Line 2600, Address: 0x128460, Func Offset: 0x60
	// Line 2601, Address: 0x128470, Func Offset: 0x70
	// Line 2602, Address: 0x128474, Func Offset: 0x74
	// Func End, Address: 0x128488, Func Offset: 0x88
}

// 
// Start address: 0x128490
_AnimeInfo* shCharacterAnimeGetInfo(SubCharacter* scp)
{
	// Line 2626, Address: 0x128490, Func Offset: 0
	// Line 2627, Address: 0x12849c, Func Offset: 0xc
	// Line 2628, Address: 0x1284ac, Func Offset: 0x1c
	// Func End, Address: 0x1284bc, Func Offset: 0x2c
}

// 
// Start address: 0x1284c0
_AnimeInfo* shCharacterAnimeGetInfo_(SubCharacter* scp, int ctrl_type)
{
	SubCharacterDisp* scp_d;
	shAnime3d* ap;
	// Line 2630, Address: 0x1284c0, Func Offset: 0
	// Line 2632, Address: 0x1284d8, Func Offset: 0x18
	// Line 2634, Address: 0x1284dc, Func Offset: 0x1c
	// Line 2637, Address: 0x128508, Func Offset: 0x48
	// Line 2638, Address: 0x12850c, Func Offset: 0x4c
	// Line 2640, Address: 0x128514, Func Offset: 0x54
	// Line 2641, Address: 0x128518, Func Offset: 0x58
	// Line 2644, Address: 0x128520, Func Offset: 0x60
	// Line 2645, Address: 0x128530, Func Offset: 0x70
	// Line 2648, Address: 0x12853c, Func Offset: 0x7c
	// Line 2649, Address: 0x128544, Func Offset: 0x84
	// Func End, Address: 0x12855c, Func Offset: 0x9c
}

// 
// Start address: 0x128560
void shCharacterPlayerModelToDrama()
{
	SubCharacter* p;
	// Line 2659, Address: 0x128560, Func Offset: 0
	// Line 2662, Address: 0x12856c, Func Offset: 0xc
	// Line 2663, Address: 0x128580, Func Offset: 0x20
	// Line 2664, Address: 0x128588, Func Offset: 0x28
	// Line 2665, Address: 0x12859c, Func Offset: 0x3c
	// Line 2669, Address: 0x1285a4, Func Offset: 0x44
	// Line 2670, Address: 0x1285b4, Func Offset: 0x54
	// Func End, Address: 0x1285c8, Func Offset: 0x68
}

// 
// Start address: 0x1285d0
void shCharacterGetPartsMatrixForShadow(float mat[4], unsigned short kind, unsigned short id, unsigned int parts_name)
{
	shSkelton* sk;
	SubCharacter* p;
	int i1;
	// Line 2682, Address: 0x1285d0, Func Offset: 0
	// Line 2688, Address: 0x1285f4, Func Offset: 0x24
	// Line 2689, Address: 0x128610, Func Offset: 0x40
	// Line 2691, Address: 0x128618, Func Offset: 0x48
	// Line 2692, Address: 0x12861c, Func Offset: 0x4c
	// Line 2693, Address: 0x128628, Func Offset: 0x58
	// Line 2694, Address: 0x12862c, Func Offset: 0x5c
	// Line 2696, Address: 0x128644, Func Offset: 0x74
	// Line 2701, Address: 0x128658, Func Offset: 0x88
	// Func End, Address: 0x128674, Func Offset: 0xa4
}

// 
// Start address: 0x128680
void shCharacterGetGroundInfoForShadow(float* pos, float* normal, float* height, unsigned short kind, unsigned short id)
{
	SubCharacter* p;
	// Line 2713, Address: 0x128680, Func Offset: 0
	// Line 2717, Address: 0x1286a0, Func Offset: 0x20
	// Line 2718, Address: 0x1286b4, Func Offset: 0x34
	// Line 2720, Address: 0x1286bc, Func Offset: 0x3c
	// Line 2721, Address: 0x1286c8, Func Offset: 0x48
	// Line 2722, Address: 0x1286d4, Func Offset: 0x54
	// Line 2723, Address: 0x1286dc, Func Offset: 0x5c
	// Func End, Address: 0x1286f8, Func Offset: 0x78
}

