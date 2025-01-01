typedef struct SubCharacter;
typedef struct SubCharacterDisp;
typedef struct shSkelton;
typedef struct shAnime3d;
typedef struct _anon0;
typedef struct shItemScreenObjectSettingData;
typedef struct _USXY;
typedef struct _AnimeInfo;
typedef struct shClusterAnime;
typedef struct _SXY;
typedef struct _IXY;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct _anon2;
typedef struct shCharacterAll;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);

typedef shAttackInfo type_0[66];
typedef unsigned char type_1[14];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_6[69];
typedef unsigned char type_8[4];
typedef void* type_9[3];
typedef unsigned char type_10[14];
typedef float type_11[4];
typedef unsigned char type_12[97];
typedef unsigned char type_14[20];
typedef float type_15[4];
typedef float type_16[4][4];
typedef SubCharacterDisp type_17[32];

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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
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
	_anon2 src_m;
	_anon0 src_t;
	_anon2 des_m;
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
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon0 rot;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon2
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
shCharacterAll sh2chara;
_anon2 kt_unit_matrix;
int demo_status;

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
void SCAddRot(SubCharacter* scp, _anon0* rot);
void shCharacterSetClusterAnimeWork(SubCharacterDisp* scp_d, int index);
void shCharacterClusterAnimeSet(SubCharacter* scp, int anime);
void SCSetModel(SubCharacter* scp, int model);
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
void shCharacterAnimeCopyForReverseModel(SubCharacter* scp);
void SCNowDemoEventSwitch(SubCharacter* scp, int flag);
void SCNowPlayableEventSwitch(SubCharacter* scp, int flag);
void SCStayModelSwitch(SubCharacter* scp, int flag);
void SCAnimeTypeSwitch(SubCharacter* scp, int flag);
void SCRotZYXSwitch(SubCharacter* scp, int flag);
void SCFreefallSwitch(SubCharacter* scp, int sw);
void SCLightOnNowSwitch(SubCharacter* scp, int sw);
void shCharacterExecAnimeAll();
void shCharacterUpdateAll();
void shCharacterSetFunction(SubCharacter* scp, void(*func)(SubCharacter*));
void shCharacterExecFunctionAll();
void shCharacterAnimeSet(SubCharacter* scp, int ctrl_type, int inter_type, _AnimeInfo* anim_info, int anime);
void shCharacterStayObjectScaleSet(SubCharacter* scp, float scale);
void shCharacterItemScreenObjectSet(SubCharacter* scp, shItemScreenObjectSettingData* data);
void shCharacterStayObjectNthPartsGet1st(SubCharacter* scp, int n, float* pos, float* rot);
void shCharacterStayObjectNthPartsSet(SubCharacter* scp, int n, float* pos, float* rot);
short shCharacterAnimeSpeedGet_(SubCharacter* scp, unsigned int type);
void shCharacterAnimeSpeedAdd(SubCharacter* scp, short add);
void shCharacterAnimeSpeedAdd_(SubCharacter* scp, unsigned int type, short add);
void shCharacterAnimeSpeedAddY(SubCharacter* scp, short add);
void shCharacterAnimeSpeedAddY_(SubCharacter* scp, unsigned int type, short add);
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
int shCharacterAnimeCounterGet(SubCharacter* scp);
int shCharacterAnimeCounterGet_(SubCharacter* scp, unsigned int type);
void shCharacterAnimeCounterSet_(SubCharacter* scp, unsigned int type, int counter);
_AnimeInfo* shCharacterAnimeGetInfo(SubCharacter* scp);
_AnimeInfo* shCharacterAnimeGetInfo_(SubCharacter* scp, int ctrl_type);
void shCharacterPlayerModelToDrama();
void shCharacterPlayerModelToPlayable();
void shCharacterMariaModelToDrama();
void shCharacterMariaModelToPlayable();
void shCharacterSetPosAfterDemo(SubCharacter* scp, float* pos, float roty);
void shCharacterGetPartsMatrixForShadow(float mat[4], unsigned short kind, unsigned short id, unsigned int parts_name);
void shCharacterGetGroundInfoForShadow(float* pos, float* normal, float* height, unsigned short kind, unsigned short id);

// 
// Start address: 0x11cf10
SubCharacter* shCharacterGetFreeList()
{
	SubCharacter* scp;
	// Line 92, Address: 0x11cf10, Func Offset: 0
	// Line 93, Address: 0x11cf18, Func Offset: 0x8
	// Line 94, Address: 0x11cf20, Func Offset: 0x10
	// Line 97, Address: 0x11cf2c, Func Offset: 0x1c
	// Func End, Address: 0x11cf34, Func Offset: 0x24
}

// 
// Start address: 0x11cf40
void AddFreeList(SubCharacter* scp)
{
	// Line 106, Address: 0x11cf40, Func Offset: 0
	// Line 107, Address: 0x11cf4c, Func Offset: 0xc
	// Line 108, Address: 0x11cf54, Func Offset: 0x14
	// Func End, Address: 0x11cf5c, Func Offset: 0x1c
}

// 
// Start address: 0x11cf60
void shCharacterSortList(SubCharacter* scp)
{
	SubCharacter* next;
	SubCharacter* pre;
	// Line 130, Address: 0x11cf60, Func Offset: 0
	// Line 131, Address: 0x11cf70, Func Offset: 0x10
	// Line 132, Address: 0x11cf78, Func Offset: 0x18
	// Line 133, Address: 0x11cf7c, Func Offset: 0x1c
	// Line 134, Address: 0x11cf80, Func Offset: 0x20
	// Line 139, Address: 0x11cf88, Func Offset: 0x28
	// Line 140, Address: 0x11cf98, Func Offset: 0x38
	// Line 141, Address: 0x11cf9c, Func Offset: 0x3c
	// Line 142, Address: 0x11cfa0, Func Offset: 0x40
	// Line 143, Address: 0x11cfa8, Func Offset: 0x48
	// Line 146, Address: 0x11cfac, Func Offset: 0x4c
	// Line 153, Address: 0x11cfb4, Func Offset: 0x54
	// Line 155, Address: 0x11cfc8, Func Offset: 0x68
	// Line 156, Address: 0x11cfd0, Func Offset: 0x70
	// Line 157, Address: 0x11cfd4, Func Offset: 0x74
	// Line 158, Address: 0x11cfdc, Func Offset: 0x7c
	// Line 159, Address: 0x11cfe4, Func Offset: 0x84
	// Line 160, Address: 0x11cfe8, Func Offset: 0x88
	// Line 162, Address: 0x11cfec, Func Offset: 0x8c
	// Line 163, Address: 0x11cff0, Func Offset: 0x90
	// Line 165, Address: 0x11cff4, Func Offset: 0x94
	// Line 167, Address: 0x11cffc, Func Offset: 0x9c
	// Line 171, Address: 0x11d010, Func Offset: 0xb0
	// Line 172, Address: 0x11d014, Func Offset: 0xb4
	// Line 173, Address: 0x11d018, Func Offset: 0xb8
	// Line 174, Address: 0x11d01c, Func Offset: 0xbc
	// Func End, Address: 0x11d024, Func Offset: 0xc4
}

// 
// Start address: 0x11d030
void shCharacterTopOfList(SubCharacter* scp)
{
	// Line 187, Address: 0x11d030, Func Offset: 0
	// Line 188, Address: 0x11d040, Func Offset: 0x10
	// Line 190, Address: 0x11d044, Func Offset: 0x14
	// Line 191, Address: 0x11d050, Func Offset: 0x20
	// Line 192, Address: 0x11d054, Func Offset: 0x24
	// Line 193, Address: 0x11d05c, Func Offset: 0x2c
	// Func End, Address: 0x11d064, Func Offset: 0x34
}

// 
// Start address: 0x11d070
void shCharacterCutList(SubCharacter* scp)
{
	SubCharacter* next;
	SubCharacter* pre;
	// Line 209, Address: 0x11d070, Func Offset: 0
	// Line 210, Address: 0x11d074, Func Offset: 0x4
	// Line 212, Address: 0x11d078, Func Offset: 0x8
	// Line 213, Address: 0x11d080, Func Offset: 0x10
	// Line 214, Address: 0x11d084, Func Offset: 0x14
	// Line 215, Address: 0x11d088, Func Offset: 0x18
	// Line 216, Address: 0x11d090, Func Offset: 0x20
	// Line 218, Address: 0x11d098, Func Offset: 0x28
	// Line 219, Address: 0x11d0a0, Func Offset: 0x30
	// Line 220, Address: 0x11d0a4, Func Offset: 0x34
	// Line 223, Address: 0x11d0a8, Func Offset: 0x38
	// Func End, Address: 0x11d0b0, Func Offset: 0x40
}

// 
// Start address: 0x11d0b0
void shCharacterInitialize(SubCharacter* scp, int id)
{
	// Line 233, Address: 0x11d0b0, Func Offset: 0
	// Line 234, Address: 0x11d0c4, Func Offset: 0x14
	// Line 237, Address: 0x11d0cc, Func Offset: 0x1c
	// Line 238, Address: 0x11d0d4, Func Offset: 0x24
	// Line 239, Address: 0x11d0d8, Func Offset: 0x28
	// Line 240, Address: 0x11d0dc, Func Offset: 0x2c
	// Line 241, Address: 0x11d0e0, Func Offset: 0x30
	// Line 242, Address: 0x11d0e4, Func Offset: 0x34
	// Line 243, Address: 0x11d0e8, Func Offset: 0x38
	// Line 244, Address: 0x11d11c, Func Offset: 0x6c
	// Line 245, Address: 0x11d150, Func Offset: 0xa0
	// Line 246, Address: 0x11d184, Func Offset: 0xd4
	// Line 247, Address: 0x11d1b8, Func Offset: 0x108
	// Line 253, Address: 0x11d1d0, Func Offset: 0x120
	// Line 254, Address: 0x11d1e0, Func Offset: 0x130
	// Line 256, Address: 0x11d1e4, Func Offset: 0x134
	// Line 259, Address: 0x11d1e8, Func Offset: 0x138
	// Func End, Address: 0x11d1fc, Func Offset: 0x14c
}

// 
// Start address: 0x11d200
void UpdateMatrix(SubCharacter* scp, _anon0* rot, _anon0* trans)
{
	// Line 305, Address: 0x11d200, Func Offset: 0
	// Line 306, Address: 0x11d220, Func Offset: 0x20
	// Line 310, Address: 0x11d230, Func Offset: 0x30
	// Line 311, Address: 0x11d278, Func Offset: 0x78
	// Line 312, Address: 0x11d280, Func Offset: 0x80
	// Line 314, Address: 0x11d298, Func Offset: 0x98
	// Line 315, Address: 0x11d2b8, Func Offset: 0xb8
	// Func End, Address: 0x11d2d4, Func Offset: 0xd4
}

// 
// Start address: 0x11d2e0
int shCharacterNeckAngleExec(shAnime3d* ap)
{
	shSkelton* stp;
	// Line 343, Address: 0x11d2e0, Func Offset: 0
	// Line 346, Address: 0x11d2f4, Func Offset: 0x14
	// Line 347, Address: 0x11d300, Func Offset: 0x20
	// Line 348, Address: 0x11d30c, Func Offset: 0x2c
	// Line 350, Address: 0x11d320, Func Offset: 0x40
	// Line 351, Address: 0x11d330, Func Offset: 0x50
	// Line 352, Address: 0x11d334, Func Offset: 0x54
	// Func End, Address: 0x11d34c, Func Offset: 0x6c
}

// 
// Start address: 0x11d350
int shCharacterKneeAngleExec(shAnime3d* ap)
{
	shSkelton* stp;
	// Line 355, Address: 0x11d350, Func Offset: 0
	// Line 358, Address: 0x11d364, Func Offset: 0x14
	// Line 359, Address: 0x11d370, Func Offset: 0x20
	// Line 360, Address: 0x11d37c, Func Offset: 0x2c
	// Line 362, Address: 0x11d390, Func Offset: 0x40
	// Line 363, Address: 0x11d3a0, Func Offset: 0x50
	// Line 364, Address: 0x11d3a4, Func Offset: 0x54
	// Func End, Address: 0x11d3bc, Func Offset: 0x6c
}

// 
// Start address: 0x11d3c0
void SCAddPos(SubCharacter* scp, _anon0* pos)
{
	// Line 403, Address: 0x11d3c0, Func Offset: 0
	// Line 404, Address: 0x11d3d0, Func Offset: 0x10
	// Line 405, Address: 0x11d3e0, Func Offset: 0x20
	// Line 408, Address: 0x11d3f0, Func Offset: 0x30
	// Line 409, Address: 0x11d3f8, Func Offset: 0x38
	// Func End, Address: 0x11d400, Func Offset: 0x40
}

// 
// Start address: 0x11d400
void SCSetRot(SubCharacter* scp, _anon0* rot)
{
	// Line 426, Address: 0x11d400, Func Offset: 0
	// Line 427, Address: 0x11d420, Func Offset: 0x20
	// Func End, Address: 0x11d428, Func Offset: 0x28
}

// 
// Start address: 0x11d430
void SCAddRot(SubCharacter* scp, _anon0* rot)
{
	// Line 443, Address: 0x11d430, Func Offset: 0
	// Line 444, Address: 0x11d440, Func Offset: 0x10
	// Line 445, Address: 0x11d450, Func Offset: 0x20
	// Line 446, Address: 0x11d460, Func Offset: 0x30
	// Func End, Address: 0x11d468, Func Offset: 0x38
}

// 
// Start address: 0x11d470
void shCharacterSetClusterAnimeWork(SubCharacterDisp* scp_d, int index)
{
	// Line 471, Address: 0x11d470, Func Offset: 0
	// Line 472, Address: 0x11d488, Func Offset: 0x18
	// Line 473, Address: 0x11d494, Func Offset: 0x24
	// Line 474, Address: 0x11d49c, Func Offset: 0x2c
	// Line 476, Address: 0x11d4a0, Func Offset: 0x30
	// Line 479, Address: 0x11d4ac, Func Offset: 0x3c
	// Line 481, Address: 0x11d4c8, Func Offset: 0x58
	// Func End, Address: 0x11d4e0, Func Offset: 0x70
}

// 
// Start address: 0x11d4e0
void shCharacterClusterAnimeSet(SubCharacter* scp, int anime)
{
	SubCharacterDisp* scp_d;
	// Line 493, Address: 0x11d4e0, Func Offset: 0
	// Line 496, Address: 0x11d4e8, Func Offset: 0x8
	// Line 497, Address: 0x11d4f4, Func Offset: 0x14
	// Func End, Address: 0x11d504, Func Offset: 0x24
}

// 
// Start address: 0x11d510
void SCSetModel(SubCharacter* scp, int model)
{
	SubCharacterDisp* scp_d;
	void* model_adr;
	// Line 566, Address: 0x11d510, Func Offset: 0
	// Line 572, Address: 0x11d528, Func Offset: 0x18
	// Line 580, Address: 0x11d52c, Func Offset: 0x1c
	// Line 581, Address: 0x11d534, Func Offset: 0x24
	// Line 585, Address: 0x11d55c, Func Offset: 0x4c
	// Line 586, Address: 0x11d564, Func Offset: 0x54
	// Line 587, Address: 0x11d570, Func Offset: 0x60
	// Line 598, Address: 0x11d5ac, Func Offset: 0x9c
	// Line 615, Address: 0x11d5b4, Func Offset: 0xa4
	// Line 616, Address: 0x11d5d0, Func Offset: 0xc0
	// Line 623, Address: 0x11d5e0, Func Offset: 0xd0
	// Line 624, Address: 0x11d5e4, Func Offset: 0xd4
	// Line 625, Address: 0x11d5e8, Func Offset: 0xd8
	// Line 631, Address: 0x11d5ec, Func Offset: 0xdc
	// Line 634, Address: 0x11d5fc, Func Offset: 0xec
	// Line 635, Address: 0x11d610, Func Offset: 0x100
	// Func End, Address: 0x11d62c, Func Offset: 0x11c
}

// 
// Start address: 0x11d630
void* shCharacterGetAnimeAdrForDrama(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 652, Address: 0x11d630, Func Offset: 0
	// Line 653, Address: 0x11d634, Func Offset: 0x4
	// Func End, Address: 0x11d63c, Func Offset: 0xc
}

// 
// Start address: 0x11d640
void* shCharacterGetAnimeAdrForPlay(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 665, Address: 0x11d640, Func Offset: 0
	// Line 666, Address: 0x11d644, Func Offset: 0x4
	// Func End, Address: 0x11d64c, Func Offset: 0xc
}

// 
// Start address: 0x11d650
void* shCharacterGetClusterAnimeAdr(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 682, Address: 0x11d650, Func Offset: 0
	// Line 683, Address: 0x11d654, Func Offset: 0x4
	// Func End, Address: 0x11d65c, Func Offset: 0xc
}

// 
// Start address: 0x11d660
void shCharacterSetPlayer(SubCharacter* scp)
{
	// Line 699, Address: 0x11d660, Func Offset: 0
	// Line 702, Address: 0x11d668, Func Offset: 0x8
	// Line 708, Address: 0x11d670, Func Offset: 0x10
	// Line 709, Address: 0x11d678, Func Offset: 0x18
	// Line 710, Address: 0x11d680, Func Offset: 0x20
	// Line 715, Address: 0x11d688, Func Offset: 0x28
	// Line 717, Address: 0x11d690, Func Offset: 0x30
	// Line 718, Address: 0x11d698, Func Offset: 0x38
	// Line 720, Address: 0x11d6a0, Func Offset: 0x40
	// Line 722, Address: 0x11d6a8, Func Offset: 0x48
	// Func End, Address: 0x11d6b8, Func Offset: 0x58
}

// 
// Start address: 0x11d6c0
short shCharacterGetModelID(SubCharacter* scp)
{
	// Line 759, Address: 0x11d6c0, Func Offset: 0
	// Line 761, Address: 0x11d6c4, Func Offset: 0x4
	// Func End, Address: 0x11d6cc, Func Offset: 0xc
}

// 
// Start address: 0x11d6d0
SubCharacter* shCharacterGetSubCharacter(unsigned short kind, short id)
{
	SubCharacter* next;
	SubCharacter* pre;
	// Line 824, Address: 0x11d6d0, Func Offset: 0
	// Line 825, Address: 0x11d6d8, Func Offset: 0x8
	// Line 827, Address: 0x11d6dc, Func Offset: 0xc
	// Line 828, Address: 0x11d6ec, Func Offset: 0x1c
	// Line 829, Address: 0x11d70c, Func Offset: 0x3c
	// Line 832, Address: 0x11d714, Func Offset: 0x44
	// Line 833, Address: 0x11d720, Func Offset: 0x50
	// Line 834, Address: 0x11d740, Func Offset: 0x70
	// Line 836, Address: 0x11d74c, Func Offset: 0x7c
	// Line 845, Address: 0x11d760, Func Offset: 0x90
	// Line 846, Address: 0x11d764, Func Offset: 0x94
	// Func End, Address: 0x11d76c, Func Offset: 0x9c
}

// 
// Start address: 0x11d770
int shCharacterGetSkeltonNum(short kind)
{
	// Line 870, Address: 0x11d770, Func Offset: 0
	// Line 872, Address: 0x11d7a4, Func Offset: 0x34
	// Line 875, Address: 0x11d7bc, Func Offset: 0x4c
	// Line 878, Address: 0x11d7d4, Func Offset: 0x64
	// Line 881, Address: 0x11d7ec, Func Offset: 0x7c
	// Line 884, Address: 0x11d7f8, Func Offset: 0x88
	// Line 887, Address: 0x11d810, Func Offset: 0xa0
	// Line 891, Address: 0x11d828, Func Offset: 0xb8
	// Line 894, Address: 0x11d834, Func Offset: 0xc4
	// Line 896, Address: 0x11d838, Func Offset: 0xc8
	// Func End, Address: 0x11d840, Func Offset: 0xd0
}

// 
// Start address: 0x11d840
int shCharacterAnimeOneFrameSize(unsigned short id)
{
	unsigned short result;
	// Line 918, Address: 0x11d840, Func Offset: 0
	// Line 921, Address: 0x11da2c, Func Offset: 0x1ec
	// Line 923, Address: 0x11da38, Func Offset: 0x1f8
	// Line 925, Address: 0x11da44, Func Offset: 0x204
	// Line 930, Address: 0x11da50, Func Offset: 0x210
	// Line 932, Address: 0x11da5c, Func Offset: 0x21c
	// Line 934, Address: 0x11da68, Func Offset: 0x228
	// Line 936, Address: 0x11da74, Func Offset: 0x234
	// Line 938, Address: 0x11da80, Func Offset: 0x240
	// Line 940, Address: 0x11da8c, Func Offset: 0x24c
	// Line 942, Address: 0x11da98, Func Offset: 0x258
	// Line 946, Address: 0x11daa4, Func Offset: 0x264
	// Line 948, Address: 0x11dab0, Func Offset: 0x270
	// Line 950, Address: 0x11dabc, Func Offset: 0x27c
	// Line 955, Address: 0x11dac8, Func Offset: 0x288
	// Line 958, Address: 0x11dad4, Func Offset: 0x294
	// Line 960, Address: 0x11dae0, Func Offset: 0x2a0
	// Line 962, Address: 0x11daec, Func Offset: 0x2ac
	// Line 964, Address: 0x11daf8, Func Offset: 0x2b8
	// Line 966, Address: 0x11db04, Func Offset: 0x2c4
	// Line 968, Address: 0x11db10, Func Offset: 0x2d0
	// Line 970, Address: 0x11db1c, Func Offset: 0x2dc
	// Line 973, Address: 0x11db28, Func Offset: 0x2e8
	// Line 975, Address: 0x11db34, Func Offset: 0x2f4
	// Line 978, Address: 0x11db40, Func Offset: 0x300
	// Line 980, Address: 0x11db4c, Func Offset: 0x30c
	// Line 982, Address: 0x11db58, Func Offset: 0x318
	// Line 984, Address: 0x11db64, Func Offset: 0x324
	// Line 986, Address: 0x11db70, Func Offset: 0x330
	// Line 988, Address: 0x11db7c, Func Offset: 0x33c
	// Line 990, Address: 0x11db88, Func Offset: 0x348
	// Line 992, Address: 0x11db94, Func Offset: 0x354
	// Line 995, Address: 0x11dba0, Func Offset: 0x360
	// Line 998, Address: 0x11dbac, Func Offset: 0x36c
	// Line 1001, Address: 0x11dbb8, Func Offset: 0x378
	// Line 1004, Address: 0x11dbc4, Func Offset: 0x384
	// Line 1007, Address: 0x11dbd0, Func Offset: 0x390
	// Line 1011, Address: 0x11dbd4, Func Offset: 0x394
	// Line 1012, Address: 0x11dbd8, Func Offset: 0x398
	// Func End, Address: 0x11dbe0, Func Offset: 0x3a0
}

// 
// Start address: 0x11dbe0
void shCharacterInitSubCharacter()
{
	SubCharacterDisp* scp_d;
	int i;
	// Line 1058, Address: 0x11dbe0, Func Offset: 0
	// Line 1063, Address: 0x11dbe8, Func Offset: 0x8
	// Line 1065, Address: 0x11dc00, Func Offset: 0x20
	// Line 1066, Address: 0x11dc08, Func Offset: 0x28
	// Line 1071, Address: 0x11dc18, Func Offset: 0x38
	// Line 1072, Address: 0x11dc24, Func Offset: 0x44
	// Line 1073, Address: 0x11dc2c, Func Offset: 0x4c
	// Line 1074, Address: 0x11dc44, Func Offset: 0x64
	// Line 1079, Address: 0x11dc48, Func Offset: 0x68
	// Line 1080, Address: 0x11dc54, Func Offset: 0x74
	// Line 1081, Address: 0x11dc78, Func Offset: 0x98
	// Line 1082, Address: 0x11dc8c, Func Offset: 0xac
	// Func End, Address: 0x11dc9c, Func Offset: 0xbc
}

// 
// Start address: 0x11dca0
void shCharacterSetHandler(SubCharacter* scp)
{
	// Line 1095, Address: 0x11dca0, Func Offset: 0
	// Line 1096, Address: 0x11dcb0, Func Offset: 0x10
	// Line 1100, Address: 0x11de3c, Func Offset: 0x19c
	// Line 1103, Address: 0x11de50, Func Offset: 0x1b0
	// Line 1106, Address: 0x11de64, Func Offset: 0x1c4
	// Line 1109, Address: 0x11de78, Func Offset: 0x1d8
	// Line 1111, Address: 0x11de8c, Func Offset: 0x1ec
	// Line 1113, Address: 0x11de9c, Func Offset: 0x1fc
	// Line 1115, Address: 0x11deac, Func Offset: 0x20c
	// Line 1117, Address: 0x11debc, Func Offset: 0x21c
	// Line 1119, Address: 0x11decc, Func Offset: 0x22c
	// Line 1121, Address: 0x11dedc, Func Offset: 0x23c
	// Line 1123, Address: 0x11deec, Func Offset: 0x24c
	// Line 1125, Address: 0x11defc, Func Offset: 0x25c
	// Line 1127, Address: 0x11df0c, Func Offset: 0x26c
	// Line 1129, Address: 0x11df1c, Func Offset: 0x27c
	// Line 1131, Address: 0x11df2c, Func Offset: 0x28c
	// Line 1132, Address: 0x11df3c, Func Offset: 0x29c
	// Line 1133, Address: 0x11df4c, Func Offset: 0x2ac
	// Line 1134, Address: 0x11df5c, Func Offset: 0x2bc
	// Line 1135, Address: 0x11df6c, Func Offset: 0x2cc
	// Line 1136, Address: 0x11df7c, Func Offset: 0x2dc
	// Line 1137, Address: 0x11df8c, Func Offset: 0x2ec
	// Line 1139, Address: 0x11df9c, Func Offset: 0x2fc
	// Line 1140, Address: 0x11dfb0, Func Offset: 0x310
	// Line 1141, Address: 0x11dfc0, Func Offset: 0x320
	// Line 1142, Address: 0x11dfd0, Func Offset: 0x330
	// Line 1144, Address: 0x11dfe0, Func Offset: 0x340
	// Line 1148, Address: 0x11dff4, Func Offset: 0x354
	// Line 1150, Address: 0x11e024, Func Offset: 0x384
	// Line 1151, Address: 0x11e030, Func Offset: 0x390
	// Line 1152, Address: 0x11e03c, Func Offset: 0x39c
	// Line 1153, Address: 0x11e044, Func Offset: 0x3a4
	// Line 1154, Address: 0x11e050, Func Offset: 0x3b0
	// Line 1156, Address: 0x11e060, Func Offset: 0x3c0
	// Line 1158, Address: 0x11e068, Func Offset: 0x3c8
	// Line 1161, Address: 0x11e094, Func Offset: 0x3f4
	// Line 1162, Address: 0x11e0a0, Func Offset: 0x400
	// Line 1164, Address: 0x11e0a8, Func Offset: 0x408
	// Line 1165, Address: 0x11e0b0, Func Offset: 0x410
	// Line 1167, Address: 0x11e0b8, Func Offset: 0x418
	// Line 1170, Address: 0x11e0c0, Func Offset: 0x420
	// Line 1173, Address: 0x11e0c8, Func Offset: 0x428
	// Line 1174, Address: 0x11e0d4, Func Offset: 0x434
	// Line 1176, Address: 0x11e0dc, Func Offset: 0x43c
	// Line 1177, Address: 0x11e0e4, Func Offset: 0x444
	// Line 1179, Address: 0x11e0ec, Func Offset: 0x44c
	// Line 1186, Address: 0x11e0f4, Func Offset: 0x454
	// Func End, Address: 0x11e108, Func Offset: 0x468
}

// 
// Start address: 0x11e110
SubCharacter* shCharacterCreate(unsigned int id, int model, int anime, int clani, int chr_id)
{
	SubCharacterDisp* scp_d;
	SubCharacter* scp;
	// Line 1219, Address: 0x11e110, Func Offset: 0
	// Line 1225, Address: 0x11e138, Func Offset: 0x28
	// Line 1228, Address: 0x11e144, Func Offset: 0x34
	// Line 1229, Address: 0x11e14c, Func Offset: 0x3c
	// Line 1233, Address: 0x11e174, Func Offset: 0x64
	// Line 1235, Address: 0x11e178, Func Offset: 0x68
	// Line 1237, Address: 0x11e18c, Func Offset: 0x7c
	// Line 1238, Address: 0x11e190, Func Offset: 0x80
	// Line 1239, Address: 0x11e194, Func Offset: 0x84
	// Line 1243, Address: 0x11e198, Func Offset: 0x88
	// Line 1245, Address: 0x11e1a4, Func Offset: 0x94
	// Line 1246, Address: 0x11e1a8, Func Offset: 0x98
	// Func End, Address: 0x11e1c8, Func Offset: 0xb8
}

// 
// Start address: 0x11e1d0
void shCharacterDelete(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	// Line 1264, Address: 0x11e1d0, Func Offset: 0
	// Line 1267, Address: 0x11e1e0, Func Offset: 0x10
	// Line 1270, Address: 0x11e1e8, Func Offset: 0x18
	// Line 1271, Address: 0x11e1f8, Func Offset: 0x28
	// Line 1278, Address: 0x11e204, Func Offset: 0x34
	// Line 1279, Address: 0x11e210, Func Offset: 0x40
	// Line 1283, Address: 0x11e214, Func Offset: 0x44
	// Line 1286, Address: 0x11e220, Func Offset: 0x50
	// Line 1289, Address: 0x11e224, Func Offset: 0x54
	// Line 1292, Address: 0x11e234, Func Offset: 0x64
	// Line 1295, Address: 0x11e240, Func Offset: 0x70
	// Line 1296, Address: 0x11e244, Func Offset: 0x74
	// Line 1297, Address: 0x11e248, Func Offset: 0x78
	// Line 1298, Address: 0x11e24c, Func Offset: 0x7c
	// Line 1299, Address: 0x11e250, Func Offset: 0x80
	// Line 1300, Address: 0x11e254, Func Offset: 0x84
	// Line 1301, Address: 0x11e258, Func Offset: 0x88
	// Line 1303, Address: 0x11e25c, Func Offset: 0x8c
	// Line 1304, Address: 0x11e264, Func Offset: 0x94
	// Line 1306, Address: 0x11e278, Func Offset: 0xa8
	// Func End, Address: 0x11e28c, Func Offset: 0xbc
}

// 
// Start address: 0x11e290
void shCharacterPlayingExecAnimeOne(SubCharacter* scp)
{
	unsigned char weapon;
	SubCharacter* scp_wp;
	shSkelton* stp;
	SubCharacterDisp* scp_d;
	// Line 1355, Address: 0x11e290, Func Offset: 0
	// Line 1362, Address: 0x11e2a0, Func Offset: 0x10
	// Line 1374, Address: 0x11e2d0, Func Offset: 0x40
	// Line 1375, Address: 0x11e2dc, Func Offset: 0x4c
	// Line 1376, Address: 0x11e2ec, Func Offset: 0x5c
	// Line 1384, Address: 0x11e2f8, Func Offset: 0x68
	// Line 1385, Address: 0x11e304, Func Offset: 0x74
	// Line 1386, Address: 0x11e314, Func Offset: 0x84
	// Line 1390, Address: 0x11e320, Func Offset: 0x90
	// Line 1391, Address: 0x11e32c, Func Offset: 0x9c
	// Line 1392, Address: 0x11e338, Func Offset: 0xa8
	// Line 1397, Address: 0x11e344, Func Offset: 0xb4
	// Line 1399, Address: 0x11e358, Func Offset: 0xc8
	// Line 1400, Address: 0x11e364, Func Offset: 0xd4
	// Line 1401, Address: 0x11e370, Func Offset: 0xe0
	// Line 1409, Address: 0x11e37c, Func Offset: 0xec
	// Line 1412, Address: 0x11e384, Func Offset: 0xf4
	// Line 1415, Address: 0x11e394, Func Offset: 0x104
	// Line 1416, Address: 0x11e3a0, Func Offset: 0x110
	// Line 1417, Address: 0x11e3ac, Func Offset: 0x11c
	// Line 1418, Address: 0x11e3b8, Func Offset: 0x128
	// Line 1421, Address: 0x11e3c0, Func Offset: 0x130
	// Line 1430, Address: 0x11e3d0, Func Offset: 0x140
	// Line 1437, Address: 0x11e418, Func Offset: 0x188
	// Line 1439, Address: 0x11e424, Func Offset: 0x194
	// Line 1440, Address: 0x11e444, Func Offset: 0x1b4
	// Line 1454, Address: 0x11e450, Func Offset: 0x1c0
	// Line 1457, Address: 0x11e458, Func Offset: 0x1c8
	// Line 1458, Address: 0x11e460, Func Offset: 0x1d0
	// Line 1461, Address: 0x11e468, Func Offset: 0x1d8
	// Line 1462, Address: 0x11e474, Func Offset: 0x1e4
	// Line 1464, Address: 0x11e47c, Func Offset: 0x1ec
	// Line 1472, Address: 0x11e488, Func Offset: 0x1f8
	// Line 1475, Address: 0x11e4ac, Func Offset: 0x21c
	// Line 1476, Address: 0x11e4b4, Func Offset: 0x224
	// Line 1479, Address: 0x11e4cc, Func Offset: 0x23c
	// Line 1480, Address: 0x11e4dc, Func Offset: 0x24c
	// Line 1481, Address: 0x11e4e4, Func Offset: 0x254
	// Line 1571, Address: 0x11e4fc, Func Offset: 0x26c
	// Func End, Address: 0x11e510, Func Offset: 0x280
}

// 
// Start address: 0x11e510
void shCharacterDramaExecAnimeOne(SubCharacter* scp)
{
	unsigned char weapon;
	SubCharacter* scp_wp;
	SubCharacterDisp* scp_d;
	// Line 1581, Address: 0x11e510, Func Offset: 0
	// Line 1585, Address: 0x11e520, Func Offset: 0x10
	// Line 1590, Address: 0x11e52c, Func Offset: 0x1c
	// Line 1595, Address: 0x11e540, Func Offset: 0x30
	// Line 1603, Address: 0x11e570, Func Offset: 0x60
	// Line 1605, Address: 0x11e57c, Func Offset: 0x6c
	// Line 1606, Address: 0x11e59c, Func Offset: 0x8c
	// Line 1615, Address: 0x11e5a8, Func Offset: 0x98
	// Line 1621, Address: 0x11e5e4, Func Offset: 0xd4
	// Line 1622, Address: 0x11e5ec, Func Offset: 0xdc
	// Line 1637, Address: 0x11e604, Func Offset: 0xf4
	// Func End, Address: 0x11e618, Func Offset: 0x108
}

// 
// Start address: 0x11e620
void shCharacterAnimeCopyForReverseModel(SubCharacter* scp)
{
	unsigned char weapon;
	SubCharacter* scp_wp;
	SubCharacterDisp* scp_d;
	SubCharacterDisp* org_d;
	SubCharacter* org;
	// Line 1650, Address: 0x11e620, Func Offset: 0
	// Line 1655, Address: 0x11e630, Func Offset: 0x10
	// Line 1656, Address: 0x11e648, Func Offset: 0x28
	// Line 1657, Address: 0x11e650, Func Offset: 0x30
	// Line 1662, Address: 0x11e674, Func Offset: 0x54
	// Line 1663, Address: 0x11e67c, Func Offset: 0x5c
	// Line 1666, Address: 0x11e684, Func Offset: 0x64
	// Line 1673, Address: 0x11e6a8, Func Offset: 0x88
	// Line 1675, Address: 0x11e6b4, Func Offset: 0x94
	// Line 1676, Address: 0x11e6d4, Func Offset: 0xb4
	// Line 1682, Address: 0x11e6e0, Func Offset: 0xc0
	// Line 1702, Address: 0x11e714, Func Offset: 0xf4
	// Func End, Address: 0x11e728, Func Offset: 0x108
}

// 
// Start address: 0x11e730
void SCNowDemoEventSwitch(SubCharacter* scp, int flag)
{
	// Line 1754, Address: 0x11e730, Func Offset: 0
	// Line 1755, Address: 0x11e738, Func Offset: 0x8
	// Line 1756, Address: 0x11e744, Func Offset: 0x14
	// Line 1757, Address: 0x11e74c, Func Offset: 0x1c
	// Line 1759, Address: 0x11e75c, Func Offset: 0x2c
	// Func End, Address: 0x11e764, Func Offset: 0x34
}

// 
// Start address: 0x11e770
void SCNowPlayableEventSwitch(SubCharacter* scp, int flag)
{
	// Line 1765, Address: 0x11e770, Func Offset: 0
	// Line 1766, Address: 0x11e778, Func Offset: 0x8
	// Line 1767, Address: 0x11e784, Func Offset: 0x14
	// Line 1768, Address: 0x11e78c, Func Offset: 0x1c
	// Line 1770, Address: 0x11e79c, Func Offset: 0x2c
	// Func End, Address: 0x11e7a4, Func Offset: 0x34
}

// 
// Start address: 0x11e7b0
void SCStayModelSwitch(SubCharacter* scp, int flag)
{
	// Line 1776, Address: 0x11e7b0, Func Offset: 0
	// Line 1777, Address: 0x11e7b8, Func Offset: 0x8
	// Line 1778, Address: 0x11e7c4, Func Offset: 0x14
	// Line 1779, Address: 0x11e7cc, Func Offset: 0x1c
	// Line 1781, Address: 0x11e7dc, Func Offset: 0x2c
	// Func End, Address: 0x11e7e4, Func Offset: 0x34
}

// 
// Start address: 0x11e7f0
void SCAnimeTypeSwitch(SubCharacter* scp, int flag)
{
	// Line 1787, Address: 0x11e7f0, Func Offset: 0
	// Line 1788, Address: 0x11e7f8, Func Offset: 0x8
	// Line 1789, Address: 0x11e804, Func Offset: 0x14
	// Line 1790, Address: 0x11e80c, Func Offset: 0x1c
	// Line 1792, Address: 0x11e81c, Func Offset: 0x2c
	// Func End, Address: 0x11e824, Func Offset: 0x34
}

// 
// Start address: 0x11e830
void SCRotZYXSwitch(SubCharacter* scp, int flag)
{
	// Line 1795, Address: 0x11e830, Func Offset: 0
	// Line 1796, Address: 0x11e838, Func Offset: 0x8
	// Line 1797, Address: 0x11e844, Func Offset: 0x14
	// Line 1798, Address: 0x11e84c, Func Offset: 0x1c
	// Line 1801, Address: 0x11e85c, Func Offset: 0x2c
	// Func End, Address: 0x11e864, Func Offset: 0x34
}

// 
// Start address: 0x11e870
void SCFreefallSwitch(SubCharacter* scp, int sw)
{
	// Line 1829, Address: 0x11e870, Func Offset: 0
	// Line 1830, Address: 0x11e878, Func Offset: 0x8
	// Line 1831, Address: 0x11e888, Func Offset: 0x18
	// Line 1832, Address: 0x11e890, Func Offset: 0x20
	// Line 1834, Address: 0x11e8a4, Func Offset: 0x34
	// Func End, Address: 0x11e8ac, Func Offset: 0x3c
}

// 
// Start address: 0x11e8b0
void SCLightOnNowSwitch(SubCharacter* scp, int sw)
{
	// Line 1840, Address: 0x11e8b0, Func Offset: 0
	// Line 1841, Address: 0x11e8b8, Func Offset: 0x8
	// Line 1842, Address: 0x11e8c4, Func Offset: 0x14
	// Line 1843, Address: 0x11e8cc, Func Offset: 0x1c
	// Line 1845, Address: 0x11e8dc, Func Offset: 0x2c
	// Func End, Address: 0x11e8e4, Func Offset: 0x34
}

// 
// Start address: 0x11e8f0
void shCharacterExecAnimeAll()
{
	SubCharacter* scp;
	// Line 1866, Address: 0x11e8f0, Func Offset: 0
	// Line 1870, Address: 0x11e8fc, Func Offset: 0xc
	// Line 1871, Address: 0x11e90c, Func Offset: 0x1c
	// Line 1877, Address: 0x11e91c, Func Offset: 0x2c
	// Line 1878, Address: 0x11e928, Func Offset: 0x38
	// Line 1880, Address: 0x11e934, Func Offset: 0x44
	// Line 1881, Address: 0x11e940, Func Offset: 0x50
	// Line 1882, Address: 0x11e948, Func Offset: 0x58
	// Line 1883, Address: 0x11e954, Func Offset: 0x64
	// Line 1884, Address: 0x11e960, Func Offset: 0x70
	// Line 1885, Address: 0x11e968, Func Offset: 0x78
	// Line 1889, Address: 0x11e974, Func Offset: 0x84
	// Line 1890, Address: 0x11e978, Func Offset: 0x88
	// Line 1893, Address: 0x11e988, Func Offset: 0x98
	// Line 1903, Address: 0x11e9a0, Func Offset: 0xb0
	// Func End, Address: 0x11e9b4, Func Offset: 0xc4
}

// 
// Start address: 0x11e9c0
void shCharacterUpdateAll()
{
	SubCharacter* scp;
	// Line 1911, Address: 0x11e9c0, Func Offset: 0
	// Line 1914, Address: 0x11e9cc, Func Offset: 0xc
	// Line 1915, Address: 0x11e9dc, Func Offset: 0x1c
	// Line 1916, Address: 0x11e9ec, Func Offset: 0x2c
	// Line 1918, Address: 0x11e9f8, Func Offset: 0x38
	// Line 1919, Address: 0x11ea0c, Func Offset: 0x4c
	// Line 1921, Address: 0x11ea20, Func Offset: 0x60
	// Func End, Address: 0x11ea34, Func Offset: 0x74
}

// 
// Start address: 0x11ea40
void shCharacterSetFunction(SubCharacter* scp, void(*func)(SubCharacter*))
{
	// Line 1985, Address: 0x11ea40, Func Offset: 0
	// Line 1986, Address: 0x11ea44, Func Offset: 0x4
	// Func End, Address: 0x11ea4c, Func Offset: 0xc
}

// 
// Start address: 0x11ea50
void shCharacterExecFunctionAll()
{
	SubCharacter* next;
	SubCharacter* scp;
	// Line 2024, Address: 0x11ea50, Func Offset: 0
	// Line 2029, Address: 0x11ea5c, Func Offset: 0xc
	// Line 2034, Address: 0x11ea64, Func Offset: 0x14
	// Line 2035, Address: 0x11ea6c, Func Offset: 0x1c
	// Line 2037, Address: 0x11ea70, Func Offset: 0x20
	// Line 2038, Address: 0x11ea7c, Func Offset: 0x2c
	// Line 2039, Address: 0x11ea84, Func Offset: 0x34
	// Line 2040, Address: 0x11ea88, Func Offset: 0x38
	// Line 2043, Address: 0x11ea98, Func Offset: 0x48
	// Line 2044, Address: 0x11eaa0, Func Offset: 0x50
	// Func End, Address: 0x11eab4, Func Offset: 0x64
}

// 
// Start address: 0x11eac0
void shCharacterAnimeSet(SubCharacter* scp, int ctrl_type, int inter_type, _AnimeInfo* anim_info, int anime)
{
	SubCharacterDisp* scp_d;
	shAnime3d* anim;
	void* anime_adr;
	// Line 2186, Address: 0x11eac0, Func Offset: 0
	// Line 2217, Address: 0x11eae4, Func Offset: 0x24
	// Line 2220, Address: 0x11eb0c, Func Offset: 0x4c
	// Line 2221, Address: 0x11eb10, Func Offset: 0x50
	// Line 2223, Address: 0x11eb18, Func Offset: 0x58
	// Line 2228, Address: 0x11eb1c, Func Offset: 0x5c
	// Line 2229, Address: 0x11eb24, Func Offset: 0x64
	// Line 2234, Address: 0x11eb28, Func Offset: 0x68
	// Line 2235, Address: 0x11eb30, Func Offset: 0x70
	// Line 2237, Address: 0x11eb38, Func Offset: 0x78
	// Line 2243, Address: 0x11eb3c, Func Offset: 0x7c
	// Line 2267, Address: 0x11eb4c, Func Offset: 0x8c
	// Line 2268, Address: 0x11eb60, Func Offset: 0xa0
	// Line 2269, Address: 0x11eb68, Func Offset: 0xa8
	// Line 2270, Address: 0x11eb70, Func Offset: 0xb0
	// Line 2277, Address: 0x11eb74, Func Offset: 0xb4
	// Line 2284, Address: 0x11ebcc, Func Offset: 0x10c
	// Line 2285, Address: 0x11ebd0, Func Offset: 0x110
	// Line 2286, Address: 0x11ebdc, Func Offset: 0x11c
	// Line 2288, Address: 0x11ebf0, Func Offset: 0x130
	// Line 2291, Address: 0x11ebfc, Func Offset: 0x13c
	// Line 2293, Address: 0x11ec14, Func Offset: 0x154
	// Line 2294, Address: 0x11ec1c, Func Offset: 0x15c
	// Line 2295, Address: 0x11ec24, Func Offset: 0x164
	// Line 2296, Address: 0x11ec28, Func Offset: 0x168
	// Line 2298, Address: 0x11ec2c, Func Offset: 0x16c
	// Line 2324, Address: 0x11ec34, Func Offset: 0x174
	// Line 2326, Address: 0x11ec54, Func Offset: 0x194
	// Line 2327, Address: 0x11ec60, Func Offset: 0x1a0
	// Line 2328, Address: 0x11ec68, Func Offset: 0x1a8
	// Line 2329, Address: 0x11ec70, Func Offset: 0x1b0
	// Line 2331, Address: 0x11ec78, Func Offset: 0x1b8
	// Line 2333, Address: 0x11ec80, Func Offset: 0x1c0
	// Line 2338, Address: 0x11ec88, Func Offset: 0x1c8
	// Line 2340, Address: 0x11eca0, Func Offset: 0x1e0
	// Line 2341, Address: 0x11eca4, Func Offset: 0x1e4
	// Line 2342, Address: 0x11eca8, Func Offset: 0x1e8
	// Line 2345, Address: 0x11ecac, Func Offset: 0x1ec
	// Line 2348, Address: 0x11ecb8, Func Offset: 0x1f8
	// Line 2350, Address: 0x11ecbc, Func Offset: 0x1fc
	// Line 2351, Address: 0x11ecc4, Func Offset: 0x204
	// Line 2353, Address: 0x11eccc, Func Offset: 0x20c
	// Line 2354, Address: 0x11ecd0, Func Offset: 0x210
	// Line 2365, Address: 0x11ecd8, Func Offset: 0x218
	// Line 2368, Address: 0x11ece0, Func Offset: 0x220
	// Line 2370, Address: 0x11ece4, Func Offset: 0x224
	// Line 2371, Address: 0x11ecec, Func Offset: 0x22c
	// Line 2372, Address: 0x11ecf0, Func Offset: 0x230
	// Line 2374, Address: 0x11ecfc, Func Offset: 0x23c
	// Line 2382, Address: 0x11ed24, Func Offset: 0x264
	// Line 2384, Address: 0x11ed2c, Func Offset: 0x26c
	// Line 2391, Address: 0x11ed30, Func Offset: 0x270
	// Func End, Address: 0x11ed50, Func Offset: 0x290
}

// 
// Start address: 0x11ed50
void shCharacterStayObjectScaleSet(SubCharacter* scp, float scale)
{
	SubCharacterDisp* scp_d;
	// Line 2396, Address: 0x11ed50, Func Offset: 0
	// Line 2399, Address: 0x11ed58, Func Offset: 0x8
	// Line 2400, Address: 0x11ed5c, Func Offset: 0xc
	// Line 2401, Address: 0x11ed68, Func Offset: 0x18
	// Func End, Address: 0x11ed78, Func Offset: 0x28
}

// 
// Start address: 0x11ed80
void shCharacterItemScreenObjectSet(SubCharacter* scp, shItemScreenObjectSettingData* data)
{
	shSkelton* sp;
	_anon0 rot_tmp;
	SubCharacterDisp* scp_d;
	// Line 2421, Address: 0x11ed80, Func Offset: 0
	// Line 2424, Address: 0x11ed98, Func Offset: 0x18
	// Line 2427, Address: 0x11edac, Func Offset: 0x2c
	// Line 2430, Address: 0x11edb0, Func Offset: 0x30
	// Line 2434, Address: 0x11edbc, Func Offset: 0x3c
	// Line 2435, Address: 0x11edc4, Func Offset: 0x44
	// Line 2437, Address: 0x11edd0, Func Offset: 0x50
	// Line 2438, Address: 0x11ede0, Func Offset: 0x60
	// Func End, Address: 0x11edf8, Func Offset: 0x78
}

// 
// Start address: 0x11ee00
void shCharacterStayObjectNthPartsGet1st(SubCharacter* scp, int n, float* pos, float* rot)
{
	shSkelton* sp;
	SubCharacterDisp* scp_d;
	int i;
	// Line 2455, Address: 0x11ee00, Func Offset: 0
	// Line 2457, Address: 0x11ee04, Func Offset: 0x4
	// Line 2458, Address: 0x11ee10, Func Offset: 0x10
	// Line 2460, Address: 0x11ee2c, Func Offset: 0x2c
	// Line 2461, Address: 0x11ee34, Func Offset: 0x34
	// Line 2462, Address: 0x11ee3c, Func Offset: 0x3c
	// Line 2463, Address: 0x11ee44, Func Offset: 0x44
	// Line 2467, Address: 0x11ee50, Func Offset: 0x50
	// Func End, Address: 0x11ee58, Func Offset: 0x58
}

// 
// Start address: 0x11ee60
void shCharacterStayObjectNthPartsSet(SubCharacter* scp, int n, float* pos, float* rot)
{
	shSkelton* sp;
	SubCharacterDisp* scp_d;
	int i;
	// Line 2503, Address: 0x11ee60, Func Offset: 0
	// Line 2510, Address: 0x11ee74, Func Offset: 0x14
	// Line 2511, Address: 0x11ee78, Func Offset: 0x18
	// Line 2513, Address: 0x11ee80, Func Offset: 0x20
	// Line 2514, Address: 0x11ee8c, Func Offset: 0x2c
	// Line 2518, Address: 0x11eeac, Func Offset: 0x4c
	// Line 2520, Address: 0x11eec0, Func Offset: 0x60
	// Line 2521, Address: 0x11eec8, Func Offset: 0x68
	// Line 2522, Address: 0x11eed0, Func Offset: 0x70
	// Line 2523, Address: 0x11eed8, Func Offset: 0x78
	// Func End, Address: 0x11eef0, Func Offset: 0x90
}

// 
// Start address: 0x11eef0
short shCharacterAnimeSpeedGet_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2610, Address: 0x11eef0, Func Offset: 0
	// Line 2613, Address: 0x11ef18, Func Offset: 0x28
	// Line 2614, Address: 0x11ef1c, Func Offset: 0x2c
	// Line 2616, Address: 0x11ef24, Func Offset: 0x34
	// Line 2620, Address: 0x11ef28, Func Offset: 0x38
	// Line 2621, Address: 0x11ef2c, Func Offset: 0x3c
	// Func End, Address: 0x11ef34, Func Offset: 0x44
}

// 
// Start address: 0x11ef40
void shCharacterAnimeSpeedAdd(SubCharacter* scp, short add)
{
	// Line 2641, Address: 0x11ef40, Func Offset: 0
	// Line 2642, Address: 0x11ef4c, Func Offset: 0xc
	// Line 2643, Address: 0x11ef58, Func Offset: 0x18
	// Func End, Address: 0x11ef68, Func Offset: 0x28
}

// 
// Start address: 0x11ef70
void shCharacterAnimeSpeedAdd_(SubCharacter* scp, unsigned int type, short add)
{
	shAnime3d* anime2;
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2649, Address: 0x11ef70, Func Offset: 0
	// Line 2650, Address: 0x11ef74, Func Offset: 0x4
	// Line 2651, Address: 0x11ef78, Func Offset: 0x8
	// Line 2653, Address: 0x11efa0, Func Offset: 0x30
	// Line 2654, Address: 0x11efa4, Func Offset: 0x34
	// Line 2655, Address: 0x11efa8, Func Offset: 0x38
	// Line 2657, Address: 0x11efb0, Func Offset: 0x40
	// Line 2658, Address: 0x11efb4, Func Offset: 0x44
	// Line 2660, Address: 0x11efbc, Func Offset: 0x4c
	// Line 2663, Address: 0x11efc0, Func Offset: 0x50
	// Func End, Address: 0x11efc8, Func Offset: 0x58
}

// 
// Start address: 0x11efd0
void shCharacterAnimeSpeedAddY(SubCharacter* scp, short add)
{
	// Line 2668, Address: 0x11efd0, Func Offset: 0
	// Line 2669, Address: 0x11efdc, Func Offset: 0xc
	// Line 2670, Address: 0x11efe8, Func Offset: 0x18
	// Func End, Address: 0x11eff8, Func Offset: 0x28
}

// 
// Start address: 0x11f000
void shCharacterAnimeSpeedAddY_(SubCharacter* scp, unsigned int type, short add)
{
	shAnime3d* anime2;
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2676, Address: 0x11f000, Func Offset: 0
	// Line 2677, Address: 0x11f004, Func Offset: 0x4
	// Line 2678, Address: 0x11f008, Func Offset: 0x8
	// Line 2680, Address: 0x11f030, Func Offset: 0x30
	// Line 2681, Address: 0x11f034, Func Offset: 0x34
	// Line 2682, Address: 0x11f038, Func Offset: 0x38
	// Line 2684, Address: 0x11f040, Func Offset: 0x40
	// Line 2685, Address: 0x11f044, Func Offset: 0x44
	// Line 2687, Address: 0x11f04c, Func Offset: 0x4c
	// Line 2690, Address: 0x11f050, Func Offset: 0x50
	// Func End, Address: 0x11f058, Func Offset: 0x58
}

// 
// Start address: 0x11f060
void shCharacterAnimePause(SubCharacter* scp)
{
	// Line 2706, Address: 0x11f060, Func Offset: 0
	// Line 2707, Address: 0x11f068, Func Offset: 0x8
	// Line 2708, Address: 0x11f074, Func Offset: 0x14
	// Func End, Address: 0x11f084, Func Offset: 0x24
}

// 
// Start address: 0x11f090
void shCharacterAnimePause_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime2;
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2714, Address: 0x11f090, Func Offset: 0
	// Line 2715, Address: 0x11f094, Func Offset: 0x4
	// Line 2716, Address: 0x11f098, Func Offset: 0x8
	// Line 2718, Address: 0x11f0c0, Func Offset: 0x30
	// Line 2719, Address: 0x11f0c8, Func Offset: 0x38
	// Line 2720, Address: 0x11f0cc, Func Offset: 0x3c
	// Line 2722, Address: 0x11f0d4, Func Offset: 0x44
	// Line 2723, Address: 0x11f0dc, Func Offset: 0x4c
	// Line 2725, Address: 0x11f0e4, Func Offset: 0x54
	// Line 2732, Address: 0x11f0ec, Func Offset: 0x5c
	// Func End, Address: 0x11f0f4, Func Offset: 0x64
}

// 
// Start address: 0x11f100
void shCharacterAnimeRestart(SubCharacter* scp)
{
	// Line 2748, Address: 0x11f100, Func Offset: 0
	// Line 2749, Address: 0x11f108, Func Offset: 0x8
	// Line 2750, Address: 0x11f114, Func Offset: 0x14
	// Func End, Address: 0x11f124, Func Offset: 0x24
}

// 
// Start address: 0x11f130
void shCharacterAnimeRestart_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime2;
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2772, Address: 0x11f130, Func Offset: 0
	// Line 2773, Address: 0x11f134, Func Offset: 0x4
	// Line 2775, Address: 0x11f138, Func Offset: 0x8
	// Line 2777, Address: 0x11f160, Func Offset: 0x30
	// Line 2779, Address: 0x11f170, Func Offset: 0x40
	// Line 2780, Address: 0x11f174, Func Offset: 0x44
	// Line 2782, Address: 0x11f184, Func Offset: 0x54
	// Line 2783, Address: 0x11f18c, Func Offset: 0x5c
	// Line 2785, Address: 0x11f194, Func Offset: 0x64
	// Line 2787, Address: 0x11f1a4, Func Offset: 0x74
	// Line 2788, Address: 0x11f1a8, Func Offset: 0x78
	// Line 2790, Address: 0x11f1b0, Func Offset: 0x80
	// Line 2792, Address: 0x11f1c0, Func Offset: 0x90
	// Line 2796, Address: 0x11f1c8, Func Offset: 0x98
	// Func End, Address: 0x11f1d0, Func Offset: 0xa0
}

// 
// Start address: 0x11f1d0
int shCharacterAnimeIsEnd(SubCharacter* scp)
{
	// Line 2813, Address: 0x11f1d0, Func Offset: 0
	// Line 2814, Address: 0x11f1d8, Func Offset: 0x8
	// Line 2815, Address: 0x11f1e4, Func Offset: 0x14
	// Func End, Address: 0x11f1f4, Func Offset: 0x24
}

// 
// Start address: 0x11f200
int shCharacterAnimeIsEnd_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2821, Address: 0x11f200, Func Offset: 0
	// Line 2823, Address: 0x11f228, Func Offset: 0x28
	// Line 2824, Address: 0x11f22c, Func Offset: 0x2c
	// Line 2826, Address: 0x11f234, Func Offset: 0x34
	// Line 2832, Address: 0x11f238, Func Offset: 0x38
	// Line 2843, Address: 0x11f254, Func Offset: 0x54
	// Line 2848, Address: 0x11f290, Func Offset: 0x90
	// Func End, Address: 0x11f298, Func Offset: 0x98
}

// 
// Start address: 0x11f2a0
short shCharacterAnimeFrameGet(SubCharacter* scp)
{
	// Line 2862, Address: 0x11f2a0, Func Offset: 0
	// Line 2863, Address: 0x11f2a8, Func Offset: 0x8
	// Line 2864, Address: 0x11f2b4, Func Offset: 0x14
	// Func End, Address: 0x11f2c4, Func Offset: 0x24
}

// 
// Start address: 0x11f2d0
short shCharacterAnimeFrameGet_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2870, Address: 0x11f2d0, Func Offset: 0
	// Line 2872, Address: 0x11f2f8, Func Offset: 0x28
	// Line 2873, Address: 0x11f2fc, Func Offset: 0x2c
	// Line 2875, Address: 0x11f304, Func Offset: 0x34
	// Line 2885, Address: 0x11f308, Func Offset: 0x38
	// Line 2888, Address: 0x11f320, Func Offset: 0x50
	// Line 2895, Address: 0x11f370, Func Offset: 0xa0
	// Line 2902, Address: 0x11f3b8, Func Offset: 0xe8
	// Func End, Address: 0x11f3c0, Func Offset: 0xf0
}

// 
// Start address: 0x11f3c0
void shCharacterAnimeFrameSet(SubCharacter* scp, unsigned short frame)
{
	// Line 2921, Address: 0x11f3c0, Func Offset: 0
	// Line 2922, Address: 0x11f3cc, Func Offset: 0xc
	// Line 2923, Address: 0x11f3d8, Func Offset: 0x18
	// Func End, Address: 0x11f3e8, Func Offset: 0x28
}

// 
// Start address: 0x11f3f0
void shCharacterAnimeFrameSet_(SubCharacter* scp, unsigned int type, unsigned short frame)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2929, Address: 0x11f3f0, Func Offset: 0
	// Line 2931, Address: 0x11f418, Func Offset: 0x28
	// Line 2932, Address: 0x11f41c, Func Offset: 0x2c
	// Line 2934, Address: 0x11f424, Func Offset: 0x34
	// Line 2937, Address: 0x11f428, Func Offset: 0x38
	// Line 2938, Address: 0x11f42c, Func Offset: 0x3c
	// Line 2939, Address: 0x11f430, Func Offset: 0x40
	// Line 2940, Address: 0x11f43c, Func Offset: 0x4c
	// Line 2941, Address: 0x11f440, Func Offset: 0x50
	// Line 2942, Address: 0x11f458, Func Offset: 0x68
	// Func End, Address: 0x11f460, Func Offset: 0x70
}

// 
// Start address: 0x11f460
int shCharacterAnimeCounterGet(SubCharacter* scp)
{
	// Line 2956, Address: 0x11f460, Func Offset: 0
	// Line 2957, Address: 0x11f468, Func Offset: 0x8
	// Line 2958, Address: 0x11f474, Func Offset: 0x14
	// Func End, Address: 0x11f484, Func Offset: 0x24
}

// 
// Start address: 0x11f490
int shCharacterAnimeCounterGet_(SubCharacter* scp, unsigned int type)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 2964, Address: 0x11f490, Func Offset: 0
	// Line 2966, Address: 0x11f4b8, Func Offset: 0x28
	// Line 2967, Address: 0x11f4bc, Func Offset: 0x2c
	// Line 2969, Address: 0x11f4c4, Func Offset: 0x34
	// Line 2973, Address: 0x11f4c8, Func Offset: 0x38
	// Line 2974, Address: 0x11f4cc, Func Offset: 0x3c
	// Func End, Address: 0x11f4d4, Func Offset: 0x44
}

// 
// Start address: 0x11f4e0
void shCharacterAnimeCounterSet_(SubCharacter* scp, unsigned int type, int counter)
{
	shAnime3d* anime;
	SubCharacterDisp* scp_d;
	// Line 3000, Address: 0x11f4e0, Func Offset: 0
	// Line 3002, Address: 0x11f508, Func Offset: 0x28
	// Line 3003, Address: 0x11f50c, Func Offset: 0x2c
	// Line 3005, Address: 0x11f514, Func Offset: 0x34
	// Line 3008, Address: 0x11f518, Func Offset: 0x38
	// Line 3009, Address: 0x11f51c, Func Offset: 0x3c
	// Line 3010, Address: 0x11f528, Func Offset: 0x48
	// Line 3011, Address: 0x11f544, Func Offset: 0x64
	// Line 3012, Address: 0x11f55c, Func Offset: 0x7c
	// Func End, Address: 0x11f564, Func Offset: 0x84
}

// 
// Start address: 0x11f570
_AnimeInfo* shCharacterAnimeGetInfo(SubCharacter* scp)
{
	// Line 3035, Address: 0x11f570, Func Offset: 0
	// Line 3036, Address: 0x11f578, Func Offset: 0x8
	// Line 3037, Address: 0x11f584, Func Offset: 0x14
	// Func End, Address: 0x11f594, Func Offset: 0x24
}

// 
// Start address: 0x11f5a0
_AnimeInfo* shCharacterAnimeGetInfo_(SubCharacter* scp, int ctrl_type)
{
	SubCharacterDisp* scp_d;
	shAnime3d* ap;
	// Line 3039, Address: 0x11f5a0, Func Offset: 0
	// Line 3043, Address: 0x11f5a8, Func Offset: 0x8
	// Line 3046, Address: 0x11f5d0, Func Offset: 0x30
	// Line 3047, Address: 0x11f5d4, Func Offset: 0x34
	// Line 3049, Address: 0x11f5dc, Func Offset: 0x3c
	// Line 3050, Address: 0x11f5e0, Func Offset: 0x40
	// Line 3053, Address: 0x11f5e8, Func Offset: 0x48
	// Line 3054, Address: 0x11f5f8, Func Offset: 0x58
	// Line 3057, Address: 0x11f604, Func Offset: 0x64
	// Line 3058, Address: 0x11f60c, Func Offset: 0x6c
	// Func End, Address: 0x11f61c, Func Offset: 0x7c
}

// 
// Start address: 0x11f620
void shCharacterPlayerModelToDrama()
{
	SubCharacter* p;
	// Line 3068, Address: 0x11f620, Func Offset: 0
	// Line 3071, Address: 0x11f628, Func Offset: 0x8
	// Line 3072, Address: 0x11f63c, Func Offset: 0x1c
	// Line 3073, Address: 0x11f644, Func Offset: 0x24
	// Line 3074, Address: 0x11f658, Func Offset: 0x38
	// Line 3078, Address: 0x11f660, Func Offset: 0x40
	// Line 3079, Address: 0x11f66c, Func Offset: 0x4c
	// Func End, Address: 0x11f67c, Func Offset: 0x5c
}

// 
// Start address: 0x11f680
void shCharacterPlayerModelToPlayable()
{
	SubCharacter* p;
	// Line 3088, Address: 0x11f680, Func Offset: 0
	// Line 3091, Address: 0x11f688, Func Offset: 0x8
	// Line 3092, Address: 0x11f69c, Func Offset: 0x1c
	// Line 3093, Address: 0x11f6a4, Func Offset: 0x24
	// Line 3094, Address: 0x11f6b8, Func Offset: 0x38
	// Line 3098, Address: 0x11f6c0, Func Offset: 0x40
	// Line 3101, Address: 0x11f6c4, Func Offset: 0x44
	// Line 3102, Address: 0x11f6d0, Func Offset: 0x50
	// Func End, Address: 0x11f6e0, Func Offset: 0x60
}

// 
// Start address: 0x11f6e0
void shCharacterMariaModelToDrama()
{
	SubCharacter* p;
	// Line 3109, Address: 0x11f6e0, Func Offset: 0
	// Line 3112, Address: 0x11f6e8, Func Offset: 0x8
	// Line 3113, Address: 0x11f6fc, Func Offset: 0x1c
	// Line 3117, Address: 0x11f704, Func Offset: 0x24
	// Line 3118, Address: 0x11f710, Func Offset: 0x30
	// Func End, Address: 0x11f720, Func Offset: 0x40
}

// 
// Start address: 0x11f720
void shCharacterMariaModelToPlayable()
{
	SubCharacter* p;
	// Line 3125, Address: 0x11f720, Func Offset: 0
	// Line 3128, Address: 0x11f728, Func Offset: 0x8
	// Line 3129, Address: 0x11f73c, Func Offset: 0x1c
	// Line 3133, Address: 0x11f744, Func Offset: 0x24
	// Line 3136, Address: 0x11f748, Func Offset: 0x28
	// Line 3137, Address: 0x11f754, Func Offset: 0x34
	// Func End, Address: 0x11f764, Func Offset: 0x44
}

// 
// Start address: 0x11f770
void shCharacterSetPosAfterDemo(SubCharacter* scp, float* pos, float roty)
{
	// Line 3151, Address: 0x11f770, Func Offset: 0
	// Line 3152, Address: 0x11f77c, Func Offset: 0xc
	// Line 3153, Address: 0x11f788, Func Offset: 0x18
	// Line 3154, Address: 0x11f794, Func Offset: 0x24
	// Line 3155, Address: 0x11f79c, Func Offset: 0x2c
	// Line 3156, Address: 0x11f7a4, Func Offset: 0x34
	// Line 3159, Address: 0x11f7ac, Func Offset: 0x3c
	// Line 3160, Address: 0x11f7b4, Func Offset: 0x44
	// Func End, Address: 0x11f7bc, Func Offset: 0x4c
}

// 
// Start address: 0x11f7c0
void shCharacterGetPartsMatrixForShadow(float mat[4], unsigned short kind, unsigned short id, unsigned int parts_name)
{
	shSkelton* sk;
	SubCharacter* p;
	int i1;
	// Line 3172, Address: 0x11f7c0, Func Offset: 0
	// Line 3178, Address: 0x11f7d8, Func Offset: 0x18
	// Line 3179, Address: 0x11f7f0, Func Offset: 0x30
	// Line 3181, Address: 0x11f7f8, Func Offset: 0x38
	// Line 3182, Address: 0x11f7fc, Func Offset: 0x3c
	// Line 3183, Address: 0x11f808, Func Offset: 0x48
	// Line 3187, Address: 0x11f80c, Func Offset: 0x4c
	// Line 3189, Address: 0x11f824, Func Offset: 0x64
	// Line 3194, Address: 0x11f838, Func Offset: 0x78
	// Func End, Address: 0x11f850, Func Offset: 0x90
}

// 
// Start address: 0x11f850
void shCharacterGetGroundInfoForShadow(float* pos, float* normal, float* height, unsigned short kind, unsigned short id)
{
	SubCharacter* p;
	// Line 3206, Address: 0x11f850, Func Offset: 0
	// Line 3210, Address: 0x11f870, Func Offset: 0x20
	// Line 3211, Address: 0x11f884, Func Offset: 0x34
	// Line 3213, Address: 0x11f88c, Func Offset: 0x3c
	// Line 3214, Address: 0x11f894, Func Offset: 0x44
	// Line 3215, Address: 0x11f89c, Func Offset: 0x4c
	// Line 3216, Address: 0x11f8a4, Func Offset: 0x54
	// Func End, Address: 0x11f8c0, Func Offset: 0x70
}

