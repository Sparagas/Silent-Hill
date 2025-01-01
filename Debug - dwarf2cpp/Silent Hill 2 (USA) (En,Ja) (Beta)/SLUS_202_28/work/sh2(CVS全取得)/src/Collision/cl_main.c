typedef struct _CL_SELECT_MAP;
typedef struct _CL_VHIT_RESULT;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _CL_WALLHITDAT;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct SubCharacter;
typedef struct _CL_BATTLE_RESULT;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_CLDHEADER;
typedef union _anon0;
typedef struct _CL_BATTLE_QUE;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef union _anon2;
typedef struct _CL_DYNAMICWALL_LIST;
typedef struct _anon3;
typedef struct shSkelton;
typedef struct _CL_DYNAMICFLOOR_LIST;
typedef struct _anon4;
typedef struct _CL_CHARA_LIST;
typedef struct _CL_HITRESULT;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;

typedef void(*type_6)();
typedef void(*type_20)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);
typedef void(*type_29)(float*);

typedef float type_0[5];
typedef float type_1[4][4];
typedef _CL_WALLHITDAT type_2[32];
typedef _CL_SELECT_MAP type_3[128];
typedef int type_4[5];
typedef float type_5[4];
typedef float type_7[4][2];
typedef _CL_HITPOLY_PLANE* type_8[32];
typedef _CL_DYNAMICWALL_LIST type_9[2];
typedef float type_10[4][4];
typedef int type_11[16];
typedef shAttackInfo type_12[66];
typedef int type_13[16];
typedef int type_14[16];
typedef int type_15[16];
typedef int type_16[16];
typedef float type_17[4];
typedef _CL_HITPOLY_PLANE* type_18[16];
typedef float type_19[4][2];
typedef float type_21[4];
typedef float type_22[4][4];
typedef _CL_DYNAMICFLOOR_LIST type_24[2];
typedef unsigned char type_26[4];
typedef unsigned char type_27[210];
typedef _CL_VHIT_RESULT type_28[64];
typedef _CL_BATTLE_QUE type_30[64];
typedef int type_31[2];
typedef _CL_CHARA_LIST type_32[32];
typedef _CL_CHARA_LIST type_33[32][2];
typedef float type_34[5];
typedef _CL_BATTLE_RESULT type_35[65];

struct _CL_SELECT_MAP
{
	unsigned char* base;
	unsigned char sect;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

struct _CL_HITPOLY_PLANE
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][4];
};

struct _CL_WALLHITDAT
{
	int kind;
	float cv[4];
	_CL_HITPOLY_PLANE* pl;
	float normal[4];
	float nang;
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
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
	_anon4 mat;
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

struct _CL_BATTLE_RESULT
{
	int enable;
	unsigned int id;
	int atr;
	float pos[4];
	float vec[4];
	unsigned short kind;
	unsigned short btlid;
	_anon0 obj;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _CL_CLDHEADER
{
	float sx;
	float sz;
	int b0size;
	int b1size;
	int b2size;
	int b3size;
	int csize;
	int disable;
	int b0ofs[16];
	int b1ofs[16];
	int b2ofs[16];
	int b3ofs[16];
	int clofs[16];
	unsigned int fldofs;
	unsigned int wldofs;
	unsigned int cedofs;
	unsigned int swdofs;
	unsigned int cldofs;
};

union _anon0
{
	SubCharacter* en;
	_CL_HITPOLY_PLANE* pl;
	_CL_HITPOLY_COLUMN* cl;
};

struct _CL_BATTLE_QUE
{
	unsigned short kind;
	unsigned short btlid;
	SubCharacter* sc;
	float svs[4];
	float sve[4];
	float evs[4];
	float eve[4];
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

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _CL_DYNAMICWALL_LIST
{
	int use;
	_CL_HITPOLY_PLANE* dw[32];
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon3 src_t;
	_anon4 des_m;
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

struct _CL_DYNAMICFLOOR_LIST
{
	int use;
	_CL_HITPOLY_PLANE* dw[16];
};

struct _anon4
{
	float d[4][4];
};

struct _CL_CHARA_LIST
{
	_CL_HITPOLY_COLUMN col;
	_CL_HITPOLY_COLUMN wcol;
	SubCharacter* sc;
	float opos[4];
	float pos[4];
	float mvec[4];
	float wallcv[4];
	float mang;
	int wflg;
	float ccvec[4];
	short movflg;
	short batflg;
	void(*heightfunc)(float*);
};

struct _CL_HITRESULT
{
	int chk;
	float cp[4];
	float cv[4];
	_CL_HITPOLY_HEAD* pd;
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

shAttackInfo sh2_attack_list[66];
unsigned char clPermColExpFlg[210];
int clCollisionEnable;
int clUseBattleResult;
_CL_BATTLE_RESULT clBattleResult[65];
_CL_DYNAMICFLOOR_LIST clDynamicFloorList[2];
_CL_DYNAMICWALL_LIST clDynamicWallList[2];
int clCharaListUse[2];
int clDynamicFloorListAct;
int clDynamicWallListAct;
int clCharaListAct;
int clUseBattleQue;
_CL_CHARA_LIST clCharaList[32][2];
void(*clCollectCharaHeightNormal)(SubCharacter*);
_CL_WALLHITDAT clWallHitData[32];
_CL_BATTLE_QUE clBattleQue[64];
int clVHitListUse;
_CL_VHIT_RESULT clVHitResult[64];
float clswPerc[5];
_CL_SELECT_MAP clSelectMap[128];

void clAllInitCollisionData();
void clFrameInitCollisionData();
void clCollectCharaPosition();
void clSetCharaHitColumn(_CL_HITPOLY_COLUMN* col, _CL_HITPOLY_COLUMN* wcol, SubCharacter* sc, void(*func)());
void clAddDynamicWall(_CL_HITPOLY_PLANE* pl);
void clAddDynamicFloor(_CL_HITPOLY_PLANE* pl);
void clCollectCharaALL();
void clAddCollectVector(float* v0, float* v1);
void clCheckBg2Chara(int no);
void clCheckHitWallCollision(_CL_HITPOLY_COLUMN* col, int* whnum, _CL_HITPOLY_PLANE* pl, int* ptr);
void clCheckHitDynamicWallCollision(_CL_HITPOLY_COLUMN* col, int* whnum);
int clMakeWallHitCollectVector(SubCharacter* sc, float* wcv, float mang, int* flg, int num);
void clAddWallCollectVector(float* v0, float* v1, int* flg);
void clCheckColumn2WallHit(_CL_HITRESULT* cres, _CL_HITPOLY_PLANE* pl, _CL_HITPOLY_COLUMN* col);
void clCheckColumn2ColumnHit(_CL_HITPOLY_COLUMN* col, int* whnum, _CL_HITPOLY_COLUMN* cl, int* ptr);
void clCollectCharaHeightNormal(SubCharacter* sc);
void clBattleAddQue(_CL_BATTLE_QUE* que);
_CL_BATTLE_RESULT* clBattleGetResult(unsigned int id, _CL_BATTLE_RESULT* before);
void clBattleCheckExec();
void clModifiedBattleData();
void clSetOneBattleResult(_CL_BATTLE_QUE* que, _CL_VHIT_RESULT* vres, float* vec);
void clSetThrustBattleResult(_CL_BATTLE_QUE* que, float* vec);
void clCheckHitSwordWeapon(_CL_VHIT_RESULT* res, unsigned int id, float* svs, float* sve, float* evs, float* eve);
void clCheckHitGunWeapon(_CL_VHIT_RESULT* res, unsigned int id, float* st, float* ed);
void clCheckHitSwordVector(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep);
void clCheckHitSwordVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr);
void clCheckHitNoThruVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr);
void clCheckHitSwordVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
void clCheckHitSwordVectorDynamicWallNoThru(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
void clCheckHitSwordVectorDynamicFloor(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
void clCheckHitSwordVectorDynamicFloorNoThru(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
void clCheckHitSwordWeaponThrust(unsigned int id, float* svs, float* sve, float* evs, float* eve);
int clCheckHitThrustSwordVector(unsigned int id, float* sp, float* ep);
void clCheckHitGunWeaponThrust(unsigned int id, float* st, float* ed);
void clCheckHitThrustGunVector(unsigned int id, float* sp, float* ep);
void clCheckHitThrustGunVectorCharacter(float* sp, float* ep, float min, unsigned int id);
_CL_SELECT_MAP* clGetHitSectListVECHIT(float* st, float* ed);
_CL_SELECT_MAP* clGetHitSectListVECHITOutDoor(float* st, float* ed);
_CL_SELECT_MAP* clGetHitSectListVECHITInDoor();
int Line2PlaneBoundaryCheckXZ(float l0[4], float l1[4], float p0[4], float p1[4], float p2[4], float p3[4]);
int clCheckCrossLine2BoxXZ(float box[4], float* st, float* ed);
int clCheckCrossLine2LineXZ(float* va0, float* va1, float* vb0, float* vb1);
_CL_SELECT_MAP* clGetHitSectListMOVE(float* bpos);
_CL_SELECT_MAP* clGetHitSectListMOVEOutDoor(float* bpos);
_CL_SELECT_MAP* clGetHitSectListMOVEInDoor();
void clCheckHitEyes(_CL_VHIT_RESULT* res, unsigned int id, float* st, float* ed, int thru);
void clCheckHitEyesOnlyFloor(_CL_VHIT_RESULT* res, float* sp, float* ep);
void clCheckHitEyesOnlyFloorThru(_CL_VHIT_RESULT* res, float* sp, float* ep);
void clCheckHitEyesOnlyWall(_CL_VHIT_RESULT* res, float* sp, float* ep);
void clCheckHitEyesOnlyFloorCeil(_CL_VHIT_RESULT* res, float* sp, float* ep);
void clCheckHitEyeVector(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep);
void clCheckHitEyeVectorNoThru(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep);
void clCheckHitEyeVectorAllNoThru(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep);
void clCheckHitEyeVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr);
void clCheckHitEyeVectorBGColumn(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_COLUMN* cl, int* ptr);
void clCheckHitEyeVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
void clCheckHitEyeVectorDynamicFloor(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
void clCheckHitEyeVectorCharacter(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, unsigned int id);
int clPermitColumnExpansion();

// 
// Start address: 0x1320b0
void clAllInitCollisionData()
{
	// Line 351, Address: 0x1320b0, Func Offset: 0
	// Line 352, Address: 0x1320b8, Func Offset: 0x8
	// Line 353, Address: 0x1320c0, Func Offset: 0x10
	// Line 354, Address: 0x1320c8, Func Offset: 0x18
	// Line 355, Address: 0x1320d0, Func Offset: 0x20
	// Line 356, Address: 0x1320d8, Func Offset: 0x28
	// Line 357, Address: 0x1320e0, Func Offset: 0x30
	// Line 358, Address: 0x1320e8, Func Offset: 0x38
	// Line 359, Address: 0x1320f0, Func Offset: 0x40
	// Line 360, Address: 0x1320f8, Func Offset: 0x48
	// Line 361, Address: 0x132100, Func Offset: 0x50
	// Line 362, Address: 0x132108, Func Offset: 0x58
	// Line 363, Address: 0x132114, Func Offset: 0x64
	// Func End, Address: 0x13211c, Func Offset: 0x6c
}

// 
// Start address: 0x132120
void clFrameInitCollisionData()
{
	// Line 367, Address: 0x132120, Func Offset: 0
	// Line 368, Address: 0x13213c, Func Offset: 0x1c
	// Line 369, Address: 0x132150, Func Offset: 0x30
	// Line 370, Address: 0x132158, Func Offset: 0x38
	// Line 371, Address: 0x132170, Func Offset: 0x50
	// Line 372, Address: 0x13218c, Func Offset: 0x6c
	// Line 373, Address: 0x1321a4, Func Offset: 0x84
	// Line 374, Address: 0x1321c0, Func Offset: 0xa0
	// Func End, Address: 0x1321c8, Func Offset: 0xa8
}

// 
// Start address: 0x1321d0
void clCollectCharaPosition()
{
	float dif[4];
	int i;
	// Line 391, Address: 0x1321d0, Func Offset: 0
	// Line 527, Address: 0x1321e0, Func Offset: 0x10
	// Line 529, Address: 0x1321e8, Func Offset: 0x18
	// Line 533, Address: 0x1321f4, Func Offset: 0x24
	// Line 534, Address: 0x13222c, Func Offset: 0x5c
	// Line 536, Address: 0x13227c, Func Offset: 0xac
	// Line 537, Address: 0x1322b4, Func Offset: 0xe4
	// Line 538, Address: 0x1322ec, Func Offset: 0x11c
	// Line 539, Address: 0x132324, Func Offset: 0x154
	// Line 543, Address: 0x13235c, Func Offset: 0x18c
	// Line 544, Address: 0x1323a8, Func Offset: 0x1d8
	// Line 547, Address: 0x1323d0, Func Offset: 0x200
	// Line 550, Address: 0x132414, Func Offset: 0x244
	// Line 551, Address: 0x13246c, Func Offset: 0x29c
	// Line 554, Address: 0x1324e8, Func Offset: 0x318
	// Line 555, Address: 0x1324fc, Func Offset: 0x32c
	// Line 556, Address: 0x132520, Func Offset: 0x350
	// Line 557, Address: 0x132558, Func Offset: 0x388
	// Line 558, Address: 0x13258c, Func Offset: 0x3bc
	// Line 559, Address: 0x132590, Func Offset: 0x3c0
	// Line 596, Address: 0x1325c0, Func Offset: 0x3f0
	// Func End, Address: 0x1325d8, Func Offset: 0x408
}

// 
// Start address: 0x1325e0
void clSetCharaHitColumn(_CL_HITPOLY_COLUMN* col, _CL_HITPOLY_COLUMN* wcol, SubCharacter* sc, void(*func)())
{
	float dif[4];
	// Line 644, Address: 0x1325e0, Func Offset: 0
	// Line 645, Address: 0x132608, Func Offset: 0x28
	// Line 647, Address: 0x132654, Func Offset: 0x74
	// Line 648, Address: 0x132670, Func Offset: 0x90
	// Line 650, Address: 0x1326b4, Func Offset: 0xd4
	// Line 652, Address: 0x1326f4, Func Offset: 0x114
	// Line 653, Address: 0x132710, Func Offset: 0x130
	// Line 655, Address: 0x132760, Func Offset: 0x180
	// Line 658, Address: 0x1327ac, Func Offset: 0x1cc
	// Line 659, Address: 0x132800, Func Offset: 0x220
	// Line 664, Address: 0x132858, Func Offset: 0x278
	// Line 665, Address: 0x132874, Func Offset: 0x294
	// Line 666, Address: 0x1328d0, Func Offset: 0x2f0
	// Line 667, Address: 0x132928, Func Offset: 0x348
	// Line 671, Address: 0x132974, Func Offset: 0x394
	// Line 674, Address: 0x1329bc, Func Offset: 0x3dc
	// Line 675, Address: 0x132a14, Func Offset: 0x434
	// Line 678, Address: 0x132ab4, Func Offset: 0x4d4
	// Line 679, Address: 0x132aec, Func Offset: 0x50c
	// Line 682, Address: 0x132af4, Func Offset: 0x514
	// Line 686, Address: 0x132bbc, Func Offset: 0x5dc
	// Line 689, Address: 0x132c04, Func Offset: 0x624
	// Line 690, Address: 0x132c0c, Func Offset: 0x62c
	// Line 692, Address: 0x132c64, Func Offset: 0x684
	// Line 694, Address: 0x132cac, Func Offset: 0x6cc
	// Line 695, Address: 0x132cf4, Func Offset: 0x714
	// Line 697, Address: 0x132d3c, Func Offset: 0x75c
	// Line 698, Address: 0x132d60, Func Offset: 0x780
	// Func End, Address: 0x132d80, Func Offset: 0x7a0
}

// 
// Start address: 0x132d80
void clAddDynamicWall(_CL_HITPOLY_PLANE* pl)
{
	// Line 716, Address: 0x132d80, Func Offset: 0
	// Line 717, Address: 0x132dbc, Func Offset: 0x3c
	// Line 718, Address: 0x132dc8, Func Offset: 0x48
	// Func End, Address: 0x132dd0, Func Offset: 0x50
}

// 
// Start address: 0x132dd0
void clAddDynamicFloor(_CL_HITPOLY_PLANE* pl)
{
	// Line 736, Address: 0x132dd0, Func Offset: 0
	// Line 737, Address: 0x132e0c, Func Offset: 0x3c
	// Line 738, Address: 0x132e18, Func Offset: 0x48
	// Func End, Address: 0x132e20, Func Offset: 0x50
}

// 
// Start address: 0x132e20
void clCollectCharaALL()
{
	float dist;
	float div[5];
	int wt;
	float vec1[4];
	float dist;
	_CL_HITRESULT cres;
	_CL_HITPOLY_COLUMN* col1;
	_CL_HITPOLY_COLUMN* col0;
	int limit;
	int hit;
	int j;
	int i;
	// Line 755, Address: 0x132e20, Func Offset: 0
	// Line 762, Address: 0x132e40, Func Offset: 0x20
	// Line 764, Address: 0x132e4c, Func Offset: 0x2c
	// Line 767, Address: 0x132e58, Func Offset: 0x38
	// Line 769, Address: 0x132e88, Func Offset: 0x68
	// Line 772, Address: 0x132ea0, Func Offset: 0x80
	// Line 773, Address: 0x132ee0, Func Offset: 0xc0
	// Line 776, Address: 0x132f08, Func Offset: 0xe8
	// Line 777, Address: 0x132f44, Func Offset: 0x124
	// Line 780, Address: 0x132f6c, Func Offset: 0x14c
	// Line 781, Address: 0x132fac, Func Offset: 0x18c
	// Line 783, Address: 0x132fd4, Func Offset: 0x1b4
	// Line 787, Address: 0x132ff8, Func Offset: 0x1d8
	// Line 788, Address: 0x133044, Func Offset: 0x224
	// Line 791, Address: 0x13306c, Func Offset: 0x24c
	// Line 792, Address: 0x1330a8, Func Offset: 0x288
	// Line 795, Address: 0x1330d0, Func Offset: 0x2b0
	// Line 796, Address: 0x133110, Func Offset: 0x2f0
	// Line 798, Address: 0x133138, Func Offset: 0x318
	// Line 803, Address: 0x133158, Func Offset: 0x338
	// Line 807, Address: 0x1331b4, Func Offset: 0x394
	// Line 808, Address: 0x1331ec, Func Offset: 0x3cc
	// Line 809, Address: 0x1331f4, Func Offset: 0x3d4
	// Line 810, Address: 0x133210, Func Offset: 0x3f0
	// Line 813, Address: 0x133250, Func Offset: 0x430
	// Line 816, Address: 0x1332c0, Func Offset: 0x4a0
	// Line 817, Address: 0x1332dc, Func Offset: 0x4bc
	// Line 820, Address: 0x1332e4, Func Offset: 0x4c4
	// Line 824, Address: 0x133368, Func Offset: 0x548
	// Line 826, Address: 0x1333a4, Func Offset: 0x584
	// Line 827, Address: 0x1333b0, Func Offset: 0x590
	// Line 828, Address: 0x1333ec, Func Offset: 0x5cc
	// Line 830, Address: 0x133418, Func Offset: 0x5f8
	// Line 832, Address: 0x13344c, Func Offset: 0x62c
	// Line 834, Address: 0x133458, Func Offset: 0x638
	// Line 837, Address: 0x133460, Func Offset: 0x640
	// Line 841, Address: 0x1334c4, Func Offset: 0x6a4
	// Line 852, Address: 0x1334d4, Func Offset: 0x6b4
	// Line 856, Address: 0x1334f0, Func Offset: 0x6d0
	// Line 858, Address: 0x1334f4, Func Offset: 0x6d4
	// Line 863, Address: 0x13350c, Func Offset: 0x6ec
	// Line 865, Address: 0x133528, Func Offset: 0x708
	// Line 866, Address: 0x133534, Func Offset: 0x714
	// Line 867, Address: 0x13353c, Func Offset: 0x71c
	// Line 869, Address: 0x133548, Func Offset: 0x728
	// Line 872, Address: 0x133550, Func Offset: 0x730
	// Line 876, Address: 0x133588, Func Offset: 0x768
	// Line 877, Address: 0x13359c, Func Offset: 0x77c
	// Line 884, Address: 0x1335a8, Func Offset: 0x788
	// Line 885, Address: 0x1335bc, Func Offset: 0x79c
	// Line 886, Address: 0x1335cc, Func Offset: 0x7ac
	// Line 887, Address: 0x1335dc, Func Offset: 0x7bc
	// Line 890, Address: 0x1335f0, Func Offset: 0x7d0
	// Line 892, Address: 0x133630, Func Offset: 0x810
	// Line 893, Address: 0x133634, Func Offset: 0x814
	// Line 1011, Address: 0x133638, Func Offset: 0x818
	// Line 1012, Address: 0x133668, Func Offset: 0x848
	// Line 1013, Address: 0x133694, Func Offset: 0x874
	// Line 1016, Address: 0x1336c4, Func Offset: 0x8a4
	// Line 1017, Address: 0x1336d0, Func Offset: 0x8b0
	// Line 1018, Address: 0x13370c, Func Offset: 0x8ec
	// Line 1020, Address: 0x133738, Func Offset: 0x918
	// Line 1022, Address: 0x133768, Func Offset: 0x948
	// Line 1025, Address: 0x133770, Func Offset: 0x950
	// Line 1026, Address: 0x133774, Func Offset: 0x954
	// Line 1027, Address: 0x133788, Func Offset: 0x968
	// Func End, Address: 0x1337b0, Func Offset: 0x990
}

// 
// Start address: 0x1337b0
void clAddCollectVector(float* v0, float* v1)
{
	float tv[4];
	// Line 1033, Address: 0x1337b0, Func Offset: 0
	// Line 1036, Address: 0x1337b4, Func Offset: 0x4
	// Line 1038, Address: 0x1337c8, Func Offset: 0x18
	// Line 1039, Address: 0x1337e0, Func Offset: 0x30
	// Line 1041, Address: 0x133828, Func Offset: 0x78
	// Line 1043, Address: 0x133868, Func Offset: 0xb8
	// Line 1044, Address: 0x133880, Func Offset: 0xd0
	// Line 1046, Address: 0x1338c8, Func Offset: 0x118
	// Line 1048, Address: 0x133908, Func Offset: 0x158
	// Line 1049, Address: 0x133914, Func Offset: 0x164
	// Func End, Address: 0x133920, Func Offset: 0x170
}

// 
// Start address: 0x133920
void clCheckBg2Chara(int no)
{
	float mang;
	float tmp[4];
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* sw;
	_CL_HITPOLY_PLANE* wl;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	int whnum;
	// Line 1074, Address: 0x133920, Func Offset: 0
	// Line 1083, Address: 0x133938, Func Offset: 0x18
	// Line 1085, Address: 0x13393c, Func Offset: 0x1c
	// Line 1086, Address: 0x133970, Func Offset: 0x50
	// Line 1089, Address: 0x133998, Func Offset: 0x78
	// Line 1092, Address: 0x1339c8, Func Offset: 0xa8
	// Line 1093, Address: 0x133a08, Func Offset: 0xe8
	// Line 1094, Address: 0x133a0c, Func Offset: 0xec
	// Line 1097, Address: 0x133a18, Func Offset: 0xf8
	// Line 1099, Address: 0x133a20, Func Offset: 0x100
	// Line 1101, Address: 0x133a2c, Func Offset: 0x10c
	// Line 1102, Address: 0x133a40, Func Offset: 0x120
	// Line 1103, Address: 0x133a7c, Func Offset: 0x15c
	// Line 1106, Address: 0x133a8c, Func Offset: 0x16c
	// Line 1108, Address: 0x133a98, Func Offset: 0x178
	// Line 1110, Address: 0x133aa4, Func Offset: 0x184
	// Line 1111, Address: 0x133ab8, Func Offset: 0x198
	// Line 1112, Address: 0x133af4, Func Offset: 0x1d4
	// Line 1115, Address: 0x133b04, Func Offset: 0x1e4
	// Line 1117, Address: 0x133b10, Func Offset: 0x1f0
	// Line 1119, Address: 0x133b1c, Func Offset: 0x1fc
	// Line 1120, Address: 0x133b30, Func Offset: 0x210
	// Line 1121, Address: 0x133b6c, Func Offset: 0x24c
	// Line 1122, Address: 0x133b7c, Func Offset: 0x25c
	// Line 1130, Address: 0x133b80, Func Offset: 0x260
	// Line 1131, Address: 0x133bdc, Func Offset: 0x2bc
	// Line 1132, Address: 0x133c18, Func Offset: 0x2f8
	// Line 1133, Address: 0x133c54, Func Offset: 0x334
	// Line 1134, Address: 0x133c80, Func Offset: 0x360
	// Line 1136, Address: 0x133c94, Func Offset: 0x374
	// Line 1138, Address: 0x133ca4, Func Offset: 0x384
	// Line 1141, Address: 0x133d18, Func Offset: 0x3f8
	// Line 1144, Address: 0x133d84, Func Offset: 0x464
	// Line 1162, Address: 0x133de8, Func Offset: 0x4c8
	// Line 1163, Address: 0x133e40, Func Offset: 0x520
	// Func End, Address: 0x133e5c, Func Offset: 0x53c
}

// 
// Start address: 0x133e60
void clCheckHitWallCollision(_CL_HITPOLY_COLUMN* col, int* whnum, _CL_HITPOLY_PLANE* pl, int* ptr)
{
	_CL_HITRESULT cres;
	// Line 1186, Address: 0x133e60, Func Offset: 0
	// Line 1189, Address: 0x133e88, Func Offset: 0x28
	// Line 1191, Address: 0x133e90, Func Offset: 0x30
	// Line 1192, Address: 0x133eb4, Func Offset: 0x54
	// Line 1194, Address: 0x133ec0, Func Offset: 0x60
	// Line 1197, Address: 0x133ef4, Func Offset: 0x94
	// Line 1198, Address: 0x133f10, Func Offset: 0xb0
	// Line 1199, Address: 0x133f34, Func Offset: 0xd4
	// Line 1200, Address: 0x133f38, Func Offset: 0xd8
	// Line 1202, Address: 0x133f60, Func Offset: 0x100
	// Line 1203, Address: 0x133f6c, Func Offset: 0x10c
	// Line 1204, Address: 0x133f70, Func Offset: 0x110
	// Line 1205, Address: 0x133f88, Func Offset: 0x128
	// Func End, Address: 0x133fa8, Func Offset: 0x148
}

// 
// Start address: 0x133fb0
void clCheckHitDynamicWallCollision(_CL_HITPOLY_COLUMN* col, int* whnum)
{
	int ac;
	_CL_HITRESULT cres;
	int j;
	int i;
	// Line 1223, Address: 0x133fb0, Func Offset: 0
	// Line 1228, Address: 0x133fd4, Func Offset: 0x24
	// Line 1230, Address: 0x133fe4, Func Offset: 0x34
	// Line 1232, Address: 0x133ff0, Func Offset: 0x40
	// Line 1234, Address: 0x133ffc, Func Offset: 0x4c
	// Line 1235, Address: 0x134040, Func Offset: 0x90
	// Line 1237, Address: 0x13404c, Func Offset: 0x9c
	// Line 1240, Address: 0x134084, Func Offset: 0xd4
	// Line 1241, Address: 0x1340a0, Func Offset: 0xf0
	// Line 1242, Address: 0x1340c4, Func Offset: 0x114
	// Line 1243, Address: 0x1340c8, Func Offset: 0x118
	// Line 1245, Address: 0x1340f0, Func Offset: 0x140
	// Line 1246, Address: 0x1340fc, Func Offset: 0x14c
	// Line 1247, Address: 0x134100, Func Offset: 0x150
	// Line 1248, Address: 0x134148, Func Offset: 0x198
	// Line 1249, Address: 0x134178, Func Offset: 0x1c8
	// Func End, Address: 0x13419c, Func Offset: 0x1ec
}

// 
// Start address: 0x1341a0
int clMakeWallHitCollectVector(SubCharacter* sc, float* wcv, float mang, int* flg, int num)
{
	float dif;
	float newpos[4];
	float ang1;
	float ang0;
	int j;
	int i;
	// Line 1272, Address: 0x1341a0, Func Offset: 0
	// Line 1276, Address: 0x1341dc, Func Offset: 0x3c
	// Line 1279, Address: 0x1341f8, Func Offset: 0x58
	// Line 1281, Address: 0x13420c, Func Offset: 0x6c
	// Line 1285, Address: 0x134214, Func Offset: 0x74
	// Line 1287, Address: 0x134220, Func Offset: 0x80
	// Line 1290, Address: 0x134248, Func Offset: 0xa8
	// Line 1291, Address: 0x134270, Func Offset: 0xd0
	// Line 1292, Address: 0x1342bc, Func Offset: 0x11c
	// Line 1294, Address: 0x134300, Func Offset: 0x160
	// Line 1299, Address: 0x134320, Func Offset: 0x180
	// Line 1303, Address: 0x13433c, Func Offset: 0x19c
	// Line 1305, Address: 0x134348, Func Offset: 0x1a8
	// Line 1308, Address: 0x134350, Func Offset: 0x1b0
	// Line 1311, Address: 0x134378, Func Offset: 0x1d8
	// Line 1312, Address: 0x1343a0, Func Offset: 0x200
	// Line 1313, Address: 0x1343b4, Func Offset: 0x214
	// Line 1314, Address: 0x1343c4, Func Offset: 0x224
	// Line 1315, Address: 0x1343e4, Func Offset: 0x244
	// Line 1316, Address: 0x1343f4, Func Offset: 0x254
	// Line 1318, Address: 0x134434, Func Offset: 0x294
	// Line 1319, Address: 0x134454, Func Offset: 0x2b4
	// Line 1321, Address: 0x13445c, Func Offset: 0x2bc
	// Line 1324, Address: 0x134470, Func Offset: 0x2d0
	// Line 1326, Address: 0x134498, Func Offset: 0x2f8
	// Line 1327, Address: 0x1344ac, Func Offset: 0x30c
	// Line 1328, Address: 0x1344bc, Func Offset: 0x31c
	// Line 1329, Address: 0x1344fc, Func Offset: 0x35c
	// Line 1332, Address: 0x134520, Func Offset: 0x380
	// Line 1337, Address: 0x134534, Func Offset: 0x394
	// Line 1339, Address: 0x134540, Func Offset: 0x3a0
	// Line 1342, Address: 0x134568, Func Offset: 0x3c8
	// Line 1344, Address: 0x134574, Func Offset: 0x3d4
	// Line 1347, Address: 0x13457c, Func Offset: 0x3dc
	// Line 1350, Address: 0x1345a4, Func Offset: 0x404
	// Line 1351, Address: 0x1345d4, Func Offset: 0x434
	// Line 1352, Address: 0x1345e0, Func Offset: 0x440
	// Line 1355, Address: 0x134620, Func Offset: 0x480
	// Line 1356, Address: 0x134640, Func Offset: 0x4a0
	// Line 1358, Address: 0x134648, Func Offset: 0x4a8
	// Line 1359, Address: 0x134660, Func Offset: 0x4c0
	// Line 1364, Address: 0x134674, Func Offset: 0x4d4
	// Line 1366, Address: 0x134688, Func Offset: 0x4e8
	// Line 1369, Address: 0x1346ac, Func Offset: 0x50c
	// Line 1371, Address: 0x1346b8, Func Offset: 0x518
	// Line 1375, Address: 0x1346c4, Func Offset: 0x524
	// Line 1378, Address: 0x1346ec, Func Offset: 0x54c
	// Line 1379, Address: 0x134700, Func Offset: 0x560
	// Line 1380, Address: 0x134710, Func Offset: 0x570
	// Line 1382, Address: 0x134750, Func Offset: 0x5b0
	// Line 1383, Address: 0x134788, Func Offset: 0x5e8
	// Line 1384, Address: 0x1347a4, Func Offset: 0x604
	// Line 1385, Address: 0x1347c0, Func Offset: 0x620
	// Line 1387, Address: 0x134800, Func Offset: 0x660
	// Line 1388, Address: 0x134814, Func Offset: 0x674
	// Line 1392, Address: 0x134820, Func Offset: 0x680
	// Line 1395, Address: 0x13483c, Func Offset: 0x69c
	// Line 1397, Address: 0x134848, Func Offset: 0x6a8
	// Line 1400, Address: 0x134870, Func Offset: 0x6d0
	// Line 1402, Address: 0x13487c, Func Offset: 0x6dc
	// Line 1405, Address: 0x1348a4, Func Offset: 0x704
	// Line 1409, Address: 0x1348f8, Func Offset: 0x758
	// Line 1411, Address: 0x13494c, Func Offset: 0x7ac
	// Line 1413, Address: 0x134950, Func Offset: 0x7b0
	// Line 1414, Address: 0x134988, Func Offset: 0x7e8
	// Line 1415, Address: 0x1349bc, Func Offset: 0x81c
	// Line 1416, Address: 0x1349c0, Func Offset: 0x820
	// Line 1417, Address: 0x1349d0, Func Offset: 0x830
	// Line 1420, Address: 0x134a10, Func Offset: 0x870
	// Line 1421, Address: 0x134a30, Func Offset: 0x890
	// Line 1422, Address: 0x134a4c, Func Offset: 0x8ac
	// Line 1423, Address: 0x134a50, Func Offset: 0x8b0
	// Line 1424, Address: 0x134a64, Func Offset: 0x8c4
	// Line 1428, Address: 0x134a80, Func Offset: 0x8e0
	// Line 1430, Address: 0x134a8c, Func Offset: 0x8ec
	// Line 1431, Address: 0x134ab0, Func Offset: 0x910
	// Line 1432, Address: 0x134ad0, Func Offset: 0x930
	// Line 1433, Address: 0x134ae4, Func Offset: 0x944
	// Line 1435, Address: 0x134ae8, Func Offset: 0x948
	// Line 1436, Address: 0x134aec, Func Offset: 0x94c
	// Func End, Address: 0x134b1c, Func Offset: 0x97c
}

// 
// Start address: 0x134b20
void clAddWallCollectVector(float* v0, float* v1, int* flg)
{
	float tv[4];
	// Line 1453, Address: 0x134b20, Func Offset: 0
	// Line 1456, Address: 0x134b24, Func Offset: 0x4
	// Line 1457, Address: 0x134b30, Func Offset: 0x10
	// Line 1460, Address: 0x134b40, Func Offset: 0x20
	// Line 1462, Address: 0x134b54, Func Offset: 0x34
	// Line 1463, Address: 0x134b6c, Func Offset: 0x4c
	// Line 1465, Address: 0x134bb4, Func Offset: 0x94
	// Line 1467, Address: 0x134bf4, Func Offset: 0xd4
	// Line 1468, Address: 0x134c0c, Func Offset: 0xec
	// Line 1470, Address: 0x134c54, Func Offset: 0x134
	// Line 1472, Address: 0x134c94, Func Offset: 0x174
	// Line 1475, Address: 0x134ca0, Func Offset: 0x180
	// Line 1476, Address: 0x134cac, Func Offset: 0x18c
	// Func End, Address: 0x134cb8, Func Offset: 0x198
}

// 
// Start address: 0x134cc0
void clCheckColumn2WallHit(_CL_HITRESULT* cres, _CL_HITPOLY_PLANE* pl, _CL_HITPOLY_COLUMN* col)
{
	float vp[4][2];
	float iv1;
	float iv0;
	float vec[4];
	int hitchk;
	float pos[4];
	float normal[4];
	_CL_HITRESULT tmp;
	// Line 1495, Address: 0x134cc0, Func Offset: 0
	// Line 1501, Address: 0x134ce0, Func Offset: 0x20
	// Line 1504, Address: 0x134ce4, Func Offset: 0x24
	// Line 1505, Address: 0x134d00, Func Offset: 0x40
	// Line 1506, Address: 0x134d10, Func Offset: 0x50
	// Line 1509, Address: 0x134d54, Func Offset: 0x94
	// Line 1512, Address: 0x134d6c, Func Offset: 0xac
	// Line 1518, Address: 0x134d78, Func Offset: 0xb8
	// Line 1519, Address: 0x134d84, Func Offset: 0xc4
	// Line 1522, Address: 0x134d90, Func Offset: 0xd0
	// Line 1523, Address: 0x134da4, Func Offset: 0xe4
	// Line 1524, Address: 0x134da8, Func Offset: 0xe8
	// Line 1525, Address: 0x134dac, Func Offset: 0xec
	// Line 1527, Address: 0x134dd4, Func Offset: 0x114
	// Line 1528, Address: 0x134de4, Func Offset: 0x124
	// Line 1529, Address: 0x134df8, Func Offset: 0x138
	// Line 1530, Address: 0x134dfc, Func Offset: 0x13c
	// Line 1531, Address: 0x134e00, Func Offset: 0x140
	// Line 1533, Address: 0x134e24, Func Offset: 0x164
	// Line 1543, Address: 0x134e74, Func Offset: 0x1b4
	// Line 1546, Address: 0x134e80, Func Offset: 0x1c0
	// Line 1547, Address: 0x134e84, Func Offset: 0x1c4
	// Line 1548, Address: 0x134e88, Func Offset: 0x1c8
	// Line 1549, Address: 0x134e8c, Func Offset: 0x1cc
	// Line 1550, Address: 0x134e90, Func Offset: 0x1d0
	// Line 1551, Address: 0x134e94, Func Offset: 0x1d4
	// Line 1552, Address: 0x134e98, Func Offset: 0x1d8
	// Line 1554, Address: 0x134e9c, Func Offset: 0x1dc
	// Line 1555, Address: 0x134ea0, Func Offset: 0x1e0
	// Line 1556, Address: 0x134ea4, Func Offset: 0x1e4
	// Line 1557, Address: 0x134ea8, Func Offset: 0x1e8
	// Line 1558, Address: 0x134eac, Func Offset: 0x1ec
	// Line 1560, Address: 0x134eb0, Func Offset: 0x1f0
	// Line 1561, Address: 0x134eb4, Func Offset: 0x1f4
	// Line 1562, Address: 0x134eb8, Func Offset: 0x1f8
	// Line 1563, Address: 0x134ebc, Func Offset: 0x1fc
	// Line 1565, Address: 0x134ec4, Func Offset: 0x204
	// Line 1566, Address: 0x134ec8, Func Offset: 0x208
	// Line 1567, Address: 0x134ecc, Func Offset: 0x20c
	// Line 1571, Address: 0x134ed4, Func Offset: 0x214
	// Line 1572, Address: 0x134ed8, Func Offset: 0x218
	// Line 1573, Address: 0x134edc, Func Offset: 0x21c
	// Line 1575, Address: 0x134ee0, Func Offset: 0x220
	// Line 1576, Address: 0x134ee4, Func Offset: 0x224
	// Line 1577, Address: 0x134ee8, Func Offset: 0x228
	// Line 1578, Address: 0x134eec, Func Offset: 0x22c
	// Line 1579, Address: 0x134ef0, Func Offset: 0x230
	// Line 1580, Address: 0x134ef4, Func Offset: 0x234
	// Line 1581, Address: 0x134ef8, Func Offset: 0x238
	// Line 1582, Address: 0x134efc, Func Offset: 0x23c
	// Line 1583, Address: 0x134f00, Func Offset: 0x240
	// Line 1584, Address: 0x134f04, Func Offset: 0x244
	// Line 1585, Address: 0x134f08, Func Offset: 0x248
	// Line 1586, Address: 0x134f0c, Func Offset: 0x24c
	// Line 1620, Address: 0x134f10, Func Offset: 0x250
	// Line 1621, Address: 0x134f18, Func Offset: 0x258
	// Line 1623, Address: 0x134f20, Func Offset: 0x260
	// Line 1624, Address: 0x134f28, Func Offset: 0x268
	// Line 1625, Address: 0x134f2c, Func Offset: 0x26c
	// Line 1627, Address: 0x134f38, Func Offset: 0x278
	// Func End, Address: 0x134f54, Func Offset: 0x294
}

// 
// Start address: 0x134f60
void clCheckColumn2ColumnHit(_CL_HITPOLY_COLUMN* col, int* whnum, _CL_HITPOLY_COLUMN* cl, int* ptr)
{
	int hitchk;
	_CL_HITRESULT cres;
	// Line 1649, Address: 0x134f60, Func Offset: 0
	// Line 1653, Address: 0x134f88, Func Offset: 0x28
	// Line 1655, Address: 0x134f90, Func Offset: 0x30
	// Line 1656, Address: 0x134fb8, Func Offset: 0x58
	// Line 1658, Address: 0x134fc4, Func Offset: 0x64
	// Line 1661, Address: 0x134ffc, Func Offset: 0x9c
	// Line 1662, Address: 0x13501c, Func Offset: 0xbc
	// Line 1663, Address: 0x135020, Func Offset: 0xc0
	// Line 1664, Address: 0x135048, Func Offset: 0xe8
	// Line 1665, Address: 0x135054, Func Offset: 0xf4
	// Line 1666, Address: 0x135058, Func Offset: 0xf8
	// Line 1667, Address: 0x135070, Func Offset: 0x110
	// Func End, Address: 0x135090, Func Offset: 0x130
}

// 
// Start address: 0x135090
void clCollectCharaHeightNormal(SubCharacter* sc)
{
	_CL_VHIT_RESULT res;
	float* matt;
	float* pos;
	float ed[4];
	float st[4];
	// Line 1684, Address: 0x135090, Func Offset: 0
	// Line 1686, Address: 0x1350a4, Func Offset: 0x14
	// Line 1690, Address: 0x1350a8, Func Offset: 0x18
	// Line 1691, Address: 0x1350b0, Func Offset: 0x20
	// Line 1692, Address: 0x1350c8, Func Offset: 0x38
	// Line 1693, Address: 0x1350d0, Func Offset: 0x40
	// Line 1694, Address: 0x1350d8, Func Offset: 0x48
	// Line 1695, Address: 0x1350e0, Func Offset: 0x50
	// Line 1696, Address: 0x1350fc, Func Offset: 0x6c
	// Line 1697, Address: 0x135104, Func Offset: 0x74
	// Line 1699, Address: 0x135108, Func Offset: 0x78
	// Line 1700, Address: 0x135120, Func Offset: 0x90
	// Line 1702, Address: 0x135130, Func Offset: 0xa0
	// Line 1703, Address: 0x135138, Func Offset: 0xa8
	// Line 1705, Address: 0x135140, Func Offset: 0xb0
	// Line 1706, Address: 0x13514c, Func Offset: 0xbc
	// Line 1708, Address: 0x135154, Func Offset: 0xc4
	// Func End, Address: 0x13516c, Func Offset: 0xdc
}

// 
// Start address: 0x135170
void clBattleAddQue(_CL_BATTLE_QUE* que)
{
	// Line 1728, Address: 0x135170, Func Offset: 0
	// Line 1729, Address: 0x13517c, Func Offset: 0xc
	// Line 1732, Address: 0x1351b4, Func Offset: 0x44
	// Line 1733, Address: 0x1351d8, Func Offset: 0x68
	// Line 1734, Address: 0x1351ec, Func Offset: 0x7c
	// Func End, Address: 0x1351fc, Func Offset: 0x8c
}

// 
// Start address: 0x135200
_CL_BATTLE_RESULT* clBattleGetResult(unsigned int id, _CL_BATTLE_RESULT* before)
{
	int i;
	// Line 1758, Address: 0x135200, Func Offset: 0
	// Line 1759, Address: 0x135208, Func Offset: 0x8
	// Line 1761, Address: 0x135214, Func Offset: 0x14
	// Line 1763, Address: 0x135220, Func Offset: 0x20
	// Line 1765, Address: 0x135228, Func Offset: 0x28
	// Line 1767, Address: 0x13525c, Func Offset: 0x5c
	// Line 1768, Address: 0x135264, Func Offset: 0x64
	// Line 1770, Address: 0x13526c, Func Offset: 0x6c
	// Line 1773, Address: 0x135284, Func Offset: 0x84
	// Line 1774, Address: 0x13528c, Func Offset: 0x8c
	// Func End, Address: 0x135294, Func Offset: 0x94
}

// 
// Start address: 0x1352a0
void clBattleCheckExec()
{
	float dirc[4];
	_CL_VHIT_RESULT vres;
	int i;
	// Line 1791, Address: 0x1352a0, Func Offset: 0
	// Line 1796, Address: 0x1352ac, Func Offset: 0xc
	// Line 1798, Address: 0x1352b4, Func Offset: 0x14
	// Line 1800, Address: 0x1352c0, Func Offset: 0x20
	// Line 1802, Address: 0x135304, Func Offset: 0x64
	// Line 1803, Address: 0x135308, Func Offset: 0x68
	// Line 1807, Address: 0x135370, Func Offset: 0xd0
	// Line 1809, Address: 0x13537c, Func Offset: 0xdc
	// Line 1810, Address: 0x1353bc, Func Offset: 0x11c
	// Line 1812, Address: 0x1353d4, Func Offset: 0x134
	// Line 1816, Address: 0x1353dc, Func Offset: 0x13c
	// Line 1819, Address: 0x135424, Func Offset: 0x184
	// Line 1821, Address: 0x135430, Func Offset: 0x190
	// Line 1822, Address: 0x135470, Func Offset: 0x1d0
	// Line 1824, Address: 0x135488, Func Offset: 0x1e8
	// Line 1828, Address: 0x135490, Func Offset: 0x1f0
	// Line 1833, Address: 0x1354d8, Func Offset: 0x238
	// Line 1838, Address: 0x135508, Func Offset: 0x268
	// Line 1840, Address: 0x135514, Func Offset: 0x274
	// Line 1841, Address: 0x135554, Func Offset: 0x2b4
	// Line 1843, Address: 0x13556c, Func Offset: 0x2cc
	// Line 1846, Address: 0x135574, Func Offset: 0x2d4
	// Line 1849, Address: 0x1355cc, Func Offset: 0x32c
	// Line 1850, Address: 0x13560c, Func Offset: 0x36c
	// Line 1851, Address: 0x135620, Func Offset: 0x380
	// Line 1854, Address: 0x135628, Func Offset: 0x388
	// Line 1856, Address: 0x135660, Func Offset: 0x3c0
	// Line 1857, Address: 0x1356a0, Func Offset: 0x400
	// Line 1858, Address: 0x1356b4, Func Offset: 0x414
	// Line 1869, Address: 0x1356bc, Func Offset: 0x41c
	// Line 1872, Address: 0x1356e4, Func Offset: 0x444
	// Line 1875, Address: 0x1356fc, Func Offset: 0x45c
	// Line 1876, Address: 0x135704, Func Offset: 0x464
	// Func End, Address: 0x135718, Func Offset: 0x478
}

// 
// Start address: 0x135720
void clModifiedBattleData()
{
	int k;
	int j;
	int i;
	// Line 1897, Address: 0x135720, Func Offset: 0
	// Line 1899, Address: 0x13572c, Func Offset: 0xc
	// Line 1903, Address: 0x135748, Func Offset: 0x28
	// Line 1906, Address: 0x135780, Func Offset: 0x60
	// Line 1908, Address: 0x13578c, Func Offset: 0x6c
	// Line 1910, Address: 0x1357a8, Func Offset: 0x88
	// Line 1913, Address: 0x1357b0, Func Offset: 0x90
	// Line 1916, Address: 0x1357f4, Func Offset: 0xd4
	// Line 1917, Address: 0x1357fc, Func Offset: 0xdc
	// Line 1919, Address: 0x135804, Func Offset: 0xe4
	// Line 1921, Address: 0x135818, Func Offset: 0xf8
	// Line 1923, Address: 0x135828, Func Offset: 0x108
	// Line 1925, Address: 0x135834, Func Offset: 0x114
	// Line 1927, Address: 0x135850, Func Offset: 0x130
	// Line 1930, Address: 0x135858, Func Offset: 0x138
	// Line 1933, Address: 0x13589c, Func Offset: 0x17c
	// Line 1934, Address: 0x1358a4, Func Offset: 0x184
	// Line 1936, Address: 0x1358bc, Func Offset: 0x19c
	// Line 1939, Address: 0x1358c0, Func Offset: 0x1a0
	// Line 1943, Address: 0x1358f8, Func Offset: 0x1d8
	// Line 1945, Address: 0x135904, Func Offset: 0x1e4
	// Line 1947, Address: 0x135920, Func Offset: 0x200
	// Line 1950, Address: 0x135928, Func Offset: 0x208
	// Line 1954, Address: 0x13596c, Func Offset: 0x24c
	// Line 1956, Address: 0x135974, Func Offset: 0x254
	// Line 1958, Address: 0x135980, Func Offset: 0x260
	// Line 1960, Address: 0x13599c, Func Offset: 0x27c
	// Line 1963, Address: 0x1359a4, Func Offset: 0x284
	// Line 1966, Address: 0x1359f8, Func Offset: 0x2d8
	// Line 1967, Address: 0x135a00, Func Offset: 0x2e0
	// Line 1969, Address: 0x135a14, Func Offset: 0x2f4
	// Line 1971, Address: 0x135a2c, Func Offset: 0x30c
	// Line 1972, Address: 0x135a4c, Func Offset: 0x32c
	// Func End, Address: 0x135a54, Func Offset: 0x334
}

// 
// Start address: 0x135a60
void clSetOneBattleResult(_CL_BATTLE_QUE* que, _CL_VHIT_RESULT* vres, float* vec)
{
	// Line 1993, Address: 0x135a60, Func Offset: 0
	// Line 1994, Address: 0x135a68, Func Offset: 0x8
	// Line 1996, Address: 0x135aa4, Func Offset: 0x44
	// Line 2000, Address: 0x135ad4, Func Offset: 0x74
	// Line 2001, Address: 0x135ae8, Func Offset: 0x88
	// Line 2002, Address: 0x135b08, Func Offset: 0xa8
	// Line 2003, Address: 0x135b24, Func Offset: 0xc4
	// Line 2004, Address: 0x135b44, Func Offset: 0xe4
	// Line 2005, Address: 0x135b64, Func Offset: 0x104
	// Line 2006, Address: 0x135b84, Func Offset: 0x124
	// Line 2007, Address: 0x135ba4, Func Offset: 0x144
	// Line 2008, Address: 0x135bb8, Func Offset: 0x158
	// Line 2012, Address: 0x135bc0, Func Offset: 0x160
	// Line 2013, Address: 0x135bd8, Func Offset: 0x178
	// Line 2014, Address: 0x135bf8, Func Offset: 0x198
	// Line 2015, Address: 0x135c14, Func Offset: 0x1b4
	// Line 2016, Address: 0x135c34, Func Offset: 0x1d4
	// Line 2017, Address: 0x135c54, Func Offset: 0x1f4
	// Line 2018, Address: 0x135c74, Func Offset: 0x214
	// Line 2019, Address: 0x135c94, Func Offset: 0x234
	// Line 2020, Address: 0x135ca8, Func Offset: 0x248
	// Line 2024, Address: 0x135cb0, Func Offset: 0x250
	// Line 2025, Address: 0x135cc8, Func Offset: 0x268
	// Line 2026, Address: 0x135ce8, Func Offset: 0x288
	// Line 2027, Address: 0x135d04, Func Offset: 0x2a4
	// Line 2028, Address: 0x135d24, Func Offset: 0x2c4
	// Line 2029, Address: 0x135d44, Func Offset: 0x2e4
	// Line 2030, Address: 0x135d64, Func Offset: 0x304
	// Line 2031, Address: 0x135d84, Func Offset: 0x324
	// Line 2033, Address: 0x135d98, Func Offset: 0x338
	// Line 2034, Address: 0x135db4, Func Offset: 0x354
	// Line 2035, Address: 0x135dd4, Func Offset: 0x374
	// Line 2036, Address: 0x135df4, Func Offset: 0x394
	// Line 2037, Address: 0x135e14, Func Offset: 0x3b4
	// Line 2038, Address: 0x135e34, Func Offset: 0x3d4
	// Line 2039, Address: 0x135e54, Func Offset: 0x3f4
	// Line 2040, Address: 0x135e74, Func Offset: 0x414
	// Line 2041, Address: 0x135e94, Func Offset: 0x434
	// Line 2044, Address: 0x135ea8, Func Offset: 0x448
	// Func End, Address: 0x135eb8, Func Offset: 0x458
}

// 
// Start address: 0x135ec0
void clSetThrustBattleResult(_CL_BATTLE_QUE* que, float* vec)
{
	int j;
	int i;
	// Line 2067, Address: 0x135ec0, Func Offset: 0
	// Line 2069, Address: 0x135ecc, Func Offset: 0xc
	// Line 2073, Address: 0x135f0c, Func Offset: 0x4c
	// Line 2074, Address: 0x135f28, Func Offset: 0x68
	// Line 2075, Address: 0x135f48, Func Offset: 0x88
	// Line 2076, Address: 0x135f64, Func Offset: 0xa4
	// Line 2077, Address: 0x135f84, Func Offset: 0xc4
	// Line 2078, Address: 0x135fa4, Func Offset: 0xe4
	// Line 2079, Address: 0x135fd0, Func Offset: 0x110
	// Line 2080, Address: 0x135ffc, Func Offset: 0x13c
	// Line 2081, Address: 0x136010, Func Offset: 0x150
	// Line 2085, Address: 0x136018, Func Offset: 0x158
	// Line 2086, Address: 0x136038, Func Offset: 0x178
	// Line 2087, Address: 0x136058, Func Offset: 0x198
	// Line 2088, Address: 0x136074, Func Offset: 0x1b4
	// Line 2089, Address: 0x136094, Func Offset: 0x1d4
	// Line 2090, Address: 0x1360b4, Func Offset: 0x1f4
	// Line 2091, Address: 0x1360e0, Func Offset: 0x220
	// Line 2092, Address: 0x13610c, Func Offset: 0x24c
	// Line 2093, Address: 0x136120, Func Offset: 0x260
	// Line 2097, Address: 0x136128, Func Offset: 0x268
	// Line 2099, Address: 0x136134, Func Offset: 0x274
	// Line 2101, Address: 0x136164, Func Offset: 0x2a4
	// Line 2102, Address: 0x136168, Func Offset: 0x2a8
	// Line 2104, Address: 0x136170, Func Offset: 0x2b0
	// Line 2105, Address: 0x136188, Func Offset: 0x2c8
	// Line 2109, Address: 0x136194, Func Offset: 0x2d4
	// Line 2110, Address: 0x1361b4, Func Offset: 0x2f4
	// Line 2111, Address: 0x1361d4, Func Offset: 0x314
	// Line 2112, Address: 0x1361f0, Func Offset: 0x330
	// Line 2113, Address: 0x136220, Func Offset: 0x360
	// Line 2114, Address: 0x13624c, Func Offset: 0x38c
	// Line 2115, Address: 0x13626c, Func Offset: 0x3ac
	// Line 2116, Address: 0x13628c, Func Offset: 0x3cc
	// Line 2118, Address: 0x1362a0, Func Offset: 0x3e0
	// Line 2119, Address: 0x1362bc, Func Offset: 0x3fc
	// Line 2120, Address: 0x1362e8, Func Offset: 0x428
	// Line 2121, Address: 0x136308, Func Offset: 0x448
	// Line 2122, Address: 0x136334, Func Offset: 0x474
	// Line 2123, Address: 0x136354, Func Offset: 0x494
	// Line 2124, Address: 0x136374, Func Offset: 0x4b4
	// Line 2125, Address: 0x136394, Func Offset: 0x4d4
	// Line 2126, Address: 0x1363b4, Func Offset: 0x4f4
	// Line 2129, Address: 0x1363c8, Func Offset: 0x508
	// Line 2130, Address: 0x1363e4, Func Offset: 0x524
	// Func End, Address: 0x1363ec, Func Offset: 0x52c
}

// 
// Start address: 0x1363f0
void clCheckHitSwordWeapon(_CL_VHIT_RESULT* res, unsigned int id, float* svs, float* sve, float* evs, float* eve)
{
	float tmp[4];
	float ed[4];
	float st[4];
	int i;
	// Line 2157, Address: 0x1363f0, Func Offset: 0
	// Line 2163, Address: 0x13642c, Func Offset: 0x3c
	// Line 2165, Address: 0x136438, Func Offset: 0x48
	// Line 2166, Address: 0x136464, Func Offset: 0x74
	// Line 2167, Address: 0x136498, Func Offset: 0xa8
	// Line 2168, Address: 0x1364a8, Func Offset: 0xb8
	// Line 2169, Address: 0x1364d0, Func Offset: 0xe0
	// Line 2170, Address: 0x1364f4, Func Offset: 0x104
	// Line 2172, Address: 0x136504, Func Offset: 0x114
	// Line 2173, Address: 0x136514, Func Offset: 0x124
	// Line 2175, Address: 0x136520, Func Offset: 0x130
	// Line 2176, Address: 0x136538, Func Offset: 0x148
	// Func End, Address: 0x136564, Func Offset: 0x174
}

// 
// Start address: 0x136570
void clCheckHitGunWeapon(_CL_VHIT_RESULT* res, unsigned int id, float* st, float* ed)
{
	// Line 2198, Address: 0x136570, Func Offset: 0
	// Line 2200, Address: 0x136578, Func Offset: 0x8
	// Line 2201, Address: 0x136580, Func Offset: 0x10
	// Func End, Address: 0x136590, Func Offset: 0x20
}

// 
// Start address: 0x136590
void clCheckHitSwordVector(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 2254, Address: 0x136590, Func Offset: 0
	// Line 2263, Address: 0x1365c0, Func Offset: 0x30
	// Line 2264, Address: 0x1365c4, Func Offset: 0x34
	// Line 2265, Address: 0x1365c8, Func Offset: 0x38
	// Line 2267, Address: 0x1365cc, Func Offset: 0x3c
	// Line 2268, Address: 0x1365d0, Func Offset: 0x40
	// Line 2269, Address: 0x1365d4, Func Offset: 0x44
	// Line 2270, Address: 0x1365d8, Func Offset: 0x48
	// Line 2272, Address: 0x1365dc, Func Offset: 0x4c
	// Line 2273, Address: 0x1365e0, Func Offset: 0x50
	// Line 2274, Address: 0x1365e4, Func Offset: 0x54
	// Line 2279, Address: 0x1365e8, Func Offset: 0x58
	// Line 2282, Address: 0x1365ec, Func Offset: 0x5c
	// Line 2283, Address: 0x136600, Func Offset: 0x70
	// Line 2286, Address: 0x136604, Func Offset: 0x74
	// Line 2289, Address: 0x13661c, Func Offset: 0x8c
	// Line 2291, Address: 0x136634, Func Offset: 0xa4
	// Line 2294, Address: 0x136640, Func Offset: 0xb0
	// Line 2296, Address: 0x136648, Func Offset: 0xb8
	// Line 2298, Address: 0x136654, Func Offset: 0xc4
	// Line 2299, Address: 0x136668, Func Offset: 0xd8
	// Line 2300, Address: 0x136680, Func Offset: 0xf0
	// Line 2303, Address: 0x136694, Func Offset: 0x104
	// Line 2305, Address: 0x1366a0, Func Offset: 0x110
	// Line 2307, Address: 0x1366ac, Func Offset: 0x11c
	// Line 2308, Address: 0x1366c0, Func Offset: 0x130
	// Line 2309, Address: 0x1366d8, Func Offset: 0x148
	// Line 2312, Address: 0x1366ec, Func Offset: 0x15c
	// Line 2314, Address: 0x1366f8, Func Offset: 0x168
	// Line 2316, Address: 0x136704, Func Offset: 0x174
	// Line 2317, Address: 0x136718, Func Offset: 0x188
	// Line 2318, Address: 0x136730, Func Offset: 0x1a0
	// Line 2321, Address: 0x136744, Func Offset: 0x1b4
	// Line 2323, Address: 0x136750, Func Offset: 0x1c0
	// Line 2325, Address: 0x13675c, Func Offset: 0x1cc
	// Line 2326, Address: 0x136770, Func Offset: 0x1e0
	// Line 2327, Address: 0x136788, Func Offset: 0x1f8
	// Line 2328, Address: 0x13679c, Func Offset: 0x20c
	// Line 2331, Address: 0x1367a0, Func Offset: 0x210
	// Line 2332, Address: 0x1367bc, Func Offset: 0x22c
	// Func End, Address: 0x1367e4, Func Offset: 0x254
}

// 
// Start address: 0x1367f0
void clCheckHitSwordVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr)
{
	float dist;
	_CL_HITRESULT cres;
	int ret;
	// Line 2360, Address: 0x1367f0, Func Offset: 0
	// Line 2365, Address: 0x136828, Func Offset: 0x38
	// Line 2367, Address: 0x136830, Func Offset: 0x40
	// Line 2370, Address: 0x136854, Func Offset: 0x64
	// Line 2371, Address: 0x136860, Func Offset: 0x70
	// Line 2375, Address: 0x136888, Func Offset: 0x98
	// Line 2380, Address: 0x1368b0, Func Offset: 0xc0
	// Line 2382, Address: 0x1368b8, Func Offset: 0xc8
	// Line 2383, Address: 0x1368e4, Func Offset: 0xf4
	// Line 2386, Address: 0x1368fc, Func Offset: 0x10c
	// Line 2387, Address: 0x136900, Func Offset: 0x110
	// Line 2388, Address: 0x136908, Func Offset: 0x118
	// Line 2389, Address: 0x136910, Func Offset: 0x120
	// Line 2390, Address: 0x136930, Func Offset: 0x140
	// Line 2393, Address: 0x136948, Func Offset: 0x158
	// Line 2394, Address: 0x136960, Func Offset: 0x170
	// Func End, Address: 0x136988, Func Offset: 0x198
}

// 
// Start address: 0x136990
void clCheckHitNoThruVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr)
{
	float dist;
	_CL_HITRESULT cres;
	int ret;
	// Line 2422, Address: 0x136990, Func Offset: 0
	// Line 2427, Address: 0x1369c8, Func Offset: 0x38
	// Line 2429, Address: 0x1369d0, Func Offset: 0x40
	// Line 2430, Address: 0x1369f0, Func Offset: 0x60
	// Line 2434, Address: 0x136a18, Func Offset: 0x88
	// Line 2439, Address: 0x136a40, Func Offset: 0xb0
	// Line 2441, Address: 0x136a48, Func Offset: 0xb8
	// Line 2442, Address: 0x136a74, Func Offset: 0xe4
	// Line 2445, Address: 0x136a8c, Func Offset: 0xfc
	// Line 2446, Address: 0x136a90, Func Offset: 0x100
	// Line 2447, Address: 0x136a98, Func Offset: 0x108
	// Line 2448, Address: 0x136aa0, Func Offset: 0x110
	// Line 2449, Address: 0x136ac0, Func Offset: 0x130
	// Line 2452, Address: 0x136ad8, Func Offset: 0x148
	// Line 2453, Address: 0x136af0, Func Offset: 0x160
	// Func End, Address: 0x136b18, Func Offset: 0x188
}

// 
// Start address: 0x136b20
void clCheckHitSwordVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 2477, Address: 0x136b20, Func Offset: 0
	// Line 2485, Address: 0x136b54, Func Offset: 0x34
	// Line 2487, Address: 0x136b64, Func Offset: 0x44
	// Line 2489, Address: 0x136b70, Func Offset: 0x50
	// Line 2491, Address: 0x136b7c, Func Offset: 0x5c
	// Line 2494, Address: 0x136bc0, Func Offset: 0xa0
	// Line 2495, Address: 0x136be4, Func Offset: 0xc4
	// Line 2499, Address: 0x136c54, Func Offset: 0x134
	// Line 2504, Address: 0x136cd8, Func Offset: 0x1b8
	// Line 2506, Address: 0x136ce0, Func Offset: 0x1c0
	// Line 2507, Address: 0x136d0c, Func Offset: 0x1ec
	// Line 2510, Address: 0x136d24, Func Offset: 0x204
	// Line 2511, Address: 0x136d28, Func Offset: 0x208
	// Line 2512, Address: 0x136d30, Func Offset: 0x210
	// Line 2513, Address: 0x136d38, Func Offset: 0x218
	// Line 2514, Address: 0x136d78, Func Offset: 0x258
	// Line 2517, Address: 0x136db0, Func Offset: 0x290
	// Line 2518, Address: 0x136df8, Func Offset: 0x2d8
	// Line 2520, Address: 0x136e28, Func Offset: 0x308
	// Func End, Address: 0x136e54, Func Offset: 0x334
}

// 
// Start address: 0x136e60
void clCheckHitSwordVectorDynamicWallNoThru(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 2544, Address: 0x136e60, Func Offset: 0
	// Line 2552, Address: 0x136e94, Func Offset: 0x34
	// Line 2554, Address: 0x136ea4, Func Offset: 0x44
	// Line 2556, Address: 0x136eb0, Func Offset: 0x50
	// Line 2558, Address: 0x136ebc, Func Offset: 0x5c
	// Line 2559, Address: 0x136efc, Func Offset: 0x9c
	// Line 2563, Address: 0x136f6c, Func Offset: 0x10c
	// Line 2568, Address: 0x136ff0, Func Offset: 0x190
	// Line 2570, Address: 0x136ff8, Func Offset: 0x198
	// Line 2571, Address: 0x137024, Func Offset: 0x1c4
	// Line 2574, Address: 0x13703c, Func Offset: 0x1dc
	// Line 2575, Address: 0x137040, Func Offset: 0x1e0
	// Line 2576, Address: 0x137048, Func Offset: 0x1e8
	// Line 2577, Address: 0x137050, Func Offset: 0x1f0
	// Line 2578, Address: 0x137090, Func Offset: 0x230
	// Line 2581, Address: 0x1370c8, Func Offset: 0x268
	// Line 2582, Address: 0x137110, Func Offset: 0x2b0
	// Line 2584, Address: 0x137140, Func Offset: 0x2e0
	// Func End, Address: 0x13716c, Func Offset: 0x30c
}

// 
// Start address: 0x137170
void clCheckHitSwordVectorDynamicFloor(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 2608, Address: 0x137170, Func Offset: 0
	// Line 2616, Address: 0x1371a4, Func Offset: 0x34
	// Line 2618, Address: 0x1371b4, Func Offset: 0x44
	// Line 2620, Address: 0x1371c0, Func Offset: 0x50
	// Line 2622, Address: 0x1371cc, Func Offset: 0x5c
	// Line 2625, Address: 0x137210, Func Offset: 0xa0
	// Line 2626, Address: 0x137234, Func Offset: 0xc4
	// Line 2630, Address: 0x1372a4, Func Offset: 0x134
	// Line 2635, Address: 0x137328, Func Offset: 0x1b8
	// Line 2637, Address: 0x137330, Func Offset: 0x1c0
	// Line 2638, Address: 0x13735c, Func Offset: 0x1ec
	// Line 2641, Address: 0x137374, Func Offset: 0x204
	// Line 2642, Address: 0x137378, Func Offset: 0x208
	// Line 2643, Address: 0x137380, Func Offset: 0x210
	// Line 2644, Address: 0x137388, Func Offset: 0x218
	// Line 2645, Address: 0x1373c8, Func Offset: 0x258
	// Line 2648, Address: 0x137400, Func Offset: 0x290
	// Line 2649, Address: 0x137448, Func Offset: 0x2d8
	// Line 2651, Address: 0x137478, Func Offset: 0x308
	// Func End, Address: 0x1374a4, Func Offset: 0x334
}

// 
// Start address: 0x1374b0
void clCheckHitSwordVectorDynamicFloorNoThru(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 2675, Address: 0x1374b0, Func Offset: 0
	// Line 2683, Address: 0x1374e4, Func Offset: 0x34
	// Line 2685, Address: 0x1374f4, Func Offset: 0x44
	// Line 2687, Address: 0x137500, Func Offset: 0x50
	// Line 2689, Address: 0x13750c, Func Offset: 0x5c
	// Line 2690, Address: 0x13754c, Func Offset: 0x9c
	// Line 2694, Address: 0x1375bc, Func Offset: 0x10c
	// Line 2699, Address: 0x137640, Func Offset: 0x190
	// Line 2701, Address: 0x137648, Func Offset: 0x198
	// Line 2702, Address: 0x137674, Func Offset: 0x1c4
	// Line 2705, Address: 0x13768c, Func Offset: 0x1dc
	// Line 2706, Address: 0x137690, Func Offset: 0x1e0
	// Line 2707, Address: 0x137698, Func Offset: 0x1e8
	// Line 2708, Address: 0x1376a0, Func Offset: 0x1f0
	// Line 2709, Address: 0x1376e0, Func Offset: 0x230
	// Line 2712, Address: 0x137718, Func Offset: 0x268
	// Line 2713, Address: 0x137760, Func Offset: 0x2b0
	// Line 2715, Address: 0x137790, Func Offset: 0x2e0
	// Func End, Address: 0x1377bc, Func Offset: 0x30c
}

// 
// Start address: 0x1377c0
void clCheckHitSwordWeaponThrust(unsigned int id, float* svs, float* sve, float* evs, float* eve)
{
	float tmp[4];
	float ed[4];
	float st[4];
	int i;
	// Line 2738, Address: 0x1377c0, Func Offset: 0
	// Line 2743, Address: 0x1377f4, Func Offset: 0x34
	// Line 2746, Address: 0x1377fc, Func Offset: 0x3c
	// Line 2748, Address: 0x137808, Func Offset: 0x48
	// Line 2749, Address: 0x137834, Func Offset: 0x74
	// Line 2750, Address: 0x137868, Func Offset: 0xa8
	// Line 2751, Address: 0x137878, Func Offset: 0xb8
	// Line 2752, Address: 0x1378a0, Func Offset: 0xe0
	// Line 2753, Address: 0x1378c4, Func Offset: 0x104
	// Line 2755, Address: 0x1378d4, Func Offset: 0x114
	// Line 2757, Address: 0x1378e8, Func Offset: 0x128
	// Line 2758, Address: 0x137900, Func Offset: 0x140
	// Func End, Address: 0x137928, Func Offset: 0x168
}

// 
// Start address: 0x137930
int clCheckHitThrustSwordVector(unsigned int id, float* sp, float* ep)
{
	int whflg;
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 2777, Address: 0x137930, Func Offset: 0
	// Line 2784, Address: 0x13795c, Func Offset: 0x2c
	// Line 2787, Address: 0x137960, Func Offset: 0x30
	// Line 2788, Address: 0x137964, Func Offset: 0x34
	// Line 2789, Address: 0x137968, Func Offset: 0x38
	// Line 2791, Address: 0x13796c, Func Offset: 0x3c
	// Line 2792, Address: 0x137970, Func Offset: 0x40
	// Line 2793, Address: 0x137974, Func Offset: 0x44
	// Line 2794, Address: 0x137978, Func Offset: 0x48
	// Line 2796, Address: 0x13797c, Func Offset: 0x4c
	// Line 2797, Address: 0x137980, Func Offset: 0x50
	// Line 2798, Address: 0x137984, Func Offset: 0x54
	// Line 2802, Address: 0x137988, Func Offset: 0x58
	// Line 2805, Address: 0x1379a4, Func Offset: 0x74
	// Line 2806, Address: 0x1379b8, Func Offset: 0x88
	// Line 2810, Address: 0x1379bc, Func Offset: 0x8c
	// Line 2813, Address: 0x1379e8, Func Offset: 0xb8
	// Line 2815, Address: 0x137a14, Func Offset: 0xe4
	// Line 2818, Address: 0x137a20, Func Offset: 0xf0
	// Line 2820, Address: 0x137a28, Func Offset: 0xf8
	// Line 2822, Address: 0x137a34, Func Offset: 0x104
	// Line 2823, Address: 0x137a48, Func Offset: 0x118
	// Line 2824, Address: 0x137a74, Func Offset: 0x144
	// Line 2827, Address: 0x137a84, Func Offset: 0x154
	// Line 2829, Address: 0x137a90, Func Offset: 0x160
	// Line 2831, Address: 0x137a9c, Func Offset: 0x16c
	// Line 2832, Address: 0x137ab0, Func Offset: 0x180
	// Line 2833, Address: 0x137adc, Func Offset: 0x1ac
	// Line 2836, Address: 0x137aec, Func Offset: 0x1bc
	// Line 2838, Address: 0x137af8, Func Offset: 0x1c8
	// Line 2840, Address: 0x137b04, Func Offset: 0x1d4
	// Line 2841, Address: 0x137b18, Func Offset: 0x1e8
	// Line 2842, Address: 0x137b44, Func Offset: 0x214
	// Line 2845, Address: 0x137b54, Func Offset: 0x224
	// Line 2847, Address: 0x137b60, Func Offset: 0x230
	// Line 2849, Address: 0x137b6c, Func Offset: 0x23c
	// Line 2850, Address: 0x137b80, Func Offset: 0x250
	// Line 2851, Address: 0x137bac, Func Offset: 0x27c
	// Line 2852, Address: 0x137bbc, Func Offset: 0x28c
	// Line 2854, Address: 0x137bc0, Func Offset: 0x290
	// Line 2856, Address: 0x137be4, Func Offset: 0x2b4
	// Line 2857, Address: 0x137bf0, Func Offset: 0x2c0
	// Line 2861, Address: 0x137bf4, Func Offset: 0x2c4
	// Line 2863, Address: 0x137c0c, Func Offset: 0x2dc
	// Line 2864, Address: 0x137c10, Func Offset: 0x2e0
	// Func End, Address: 0x137c38, Func Offset: 0x308
}

// 
// Start address: 0x137c40
void clCheckHitGunWeaponThrust(unsigned int id, float* st, float* ed)
{
	// Line 2883, Address: 0x137c40, Func Offset: 0
	// Line 2884, Address: 0x137c48, Func Offset: 0x8
	// Line 2886, Address: 0x137c50, Func Offset: 0x10
	// Line 2887, Address: 0x137c58, Func Offset: 0x18
	// Func End, Address: 0x137c68, Func Offset: 0x28
}

// 
// Start address: 0x137c70
void clCheckHitThrustGunVector(unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 2906, Address: 0x137c70, Func Offset: 0
	// Line 2915, Address: 0x137c98, Func Offset: 0x28
	// Line 2916, Address: 0x137c9c, Func Offset: 0x2c
	// Line 2917, Address: 0x137ca0, Func Offset: 0x30
	// Line 2919, Address: 0x137ca4, Func Offset: 0x34
	// Line 2920, Address: 0x137ca8, Func Offset: 0x38
	// Line 2921, Address: 0x137cac, Func Offset: 0x3c
	// Line 2922, Address: 0x137cb0, Func Offset: 0x40
	// Line 2924, Address: 0x137cb4, Func Offset: 0x44
	// Line 2925, Address: 0x137cb8, Func Offset: 0x48
	// Line 2926, Address: 0x137cbc, Func Offset: 0x4c
	// Line 2930, Address: 0x137cc0, Func Offset: 0x50
	// Line 2933, Address: 0x137cdc, Func Offset: 0x6c
	// Line 2934, Address: 0x137cf0, Func Offset: 0x80
	// Line 2939, Address: 0x137cf4, Func Offset: 0x84
	// Line 2942, Address: 0x137d20, Func Offset: 0xb0
	// Line 2944, Address: 0x137d4c, Func Offset: 0xdc
	// Line 2947, Address: 0x137d58, Func Offset: 0xe8
	// Line 2949, Address: 0x137d60, Func Offset: 0xf0
	// Line 2951, Address: 0x137d6c, Func Offset: 0xfc
	// Line 2952, Address: 0x137d80, Func Offset: 0x110
	// Line 2953, Address: 0x137dac, Func Offset: 0x13c
	// Line 2956, Address: 0x137dbc, Func Offset: 0x14c
	// Line 2958, Address: 0x137dc8, Func Offset: 0x158
	// Line 2960, Address: 0x137dd4, Func Offset: 0x164
	// Line 2961, Address: 0x137de8, Func Offset: 0x178
	// Line 2962, Address: 0x137e14, Func Offset: 0x1a4
	// Line 2965, Address: 0x137e24, Func Offset: 0x1b4
	// Line 2967, Address: 0x137e30, Func Offset: 0x1c0
	// Line 2969, Address: 0x137e3c, Func Offset: 0x1cc
	// Line 2970, Address: 0x137e50, Func Offset: 0x1e0
	// Line 2971, Address: 0x137e7c, Func Offset: 0x20c
	// Line 2974, Address: 0x137e8c, Func Offset: 0x21c
	// Line 2976, Address: 0x137e98, Func Offset: 0x228
	// Line 2978, Address: 0x137ea4, Func Offset: 0x234
	// Line 2979, Address: 0x137eb8, Func Offset: 0x248
	// Line 2980, Address: 0x137ee4, Func Offset: 0x274
	// Line 2981, Address: 0x137ef4, Func Offset: 0x284
	// Line 2983, Address: 0x137ef8, Func Offset: 0x288
	// Line 2984, Address: 0x137f1c, Func Offset: 0x2ac
	// Line 2987, Address: 0x137f28, Func Offset: 0x2b8
	// Line 2989, Address: 0x137f40, Func Offset: 0x2d0
	// Func End, Address: 0x137f64, Func Offset: 0x2f4
}

// 
// Start address: 0x137f70
void clCheckHitThrustGunVectorCharacter(float* sp, float* ep, float min, unsigned int id)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int i;
	// Line 3012, Address: 0x137f70, Func Offset: 0
	// Line 3019, Address: 0x137fa0, Func Offset: 0x30
	// Line 3021, Address: 0x137fb0, Func Offset: 0x40
	// Line 3023, Address: 0x137fbc, Func Offset: 0x4c
	// Line 3026, Address: 0x137ff0, Func Offset: 0x80
	// Line 3029, Address: 0x13800c, Func Offset: 0x9c
	// Line 3032, Address: 0x138034, Func Offset: 0xc4
	// Line 3034, Address: 0x13803c, Func Offset: 0xcc
	// Line 3035, Address: 0x138068, Func Offset: 0xf8
	// Line 3038, Address: 0x13807c, Func Offset: 0x10c
	// Line 3039, Address: 0x13809c, Func Offset: 0x12c
	// Line 3040, Address: 0x1380bc, Func Offset: 0x14c
	// Line 3041, Address: 0x138104, Func Offset: 0x194
	// Line 3044, Address: 0x138118, Func Offset: 0x1a8
	// Line 3045, Address: 0x138140, Func Offset: 0x1d0
	// Func End, Address: 0x138168, Func Offset: 0x1f8
}

// 
// Start address: 0x138170
_CL_SELECT_MAP* clGetHitSectListVECHIT(float* st, float* ed)
{
	// Line 3206, Address: 0x138170, Func Offset: 0
	// Line 3208, Address: 0x138188, Func Offset: 0x18
	// Line 3211, Address: 0x1381c4, Func Offset: 0x54
	// Func End, Address: 0x1381dc, Func Offset: 0x6c
}

// 
// Start address: 0x1381e0
_CL_SELECT_MAP* clGetHitSectListVECHITOutDoor(float* st, float* ed)
{
	void** list;
	float box[4][4];
	_CL_CLDHEADER* ch;
	int use;
	int k;
	int j;
	// Line 3214, Address: 0x1381e0, Func Offset: 0
	// Line 3216, Address: 0x13821c, Func Offset: 0x3c
	// Line 3221, Address: 0x138220, Func Offset: 0x40
	// Line 3225, Address: 0x138230, Func Offset: 0x50
	// Line 3226, Address: 0x13823c, Func Offset: 0x5c
	// Line 3232, Address: 0x138244, Func Offset: 0x64
	// Line 3240, Address: 0x138250, Func Offset: 0x70
	// Line 3241, Address: 0x138254, Func Offset: 0x74
	// Line 3243, Address: 0x138258, Func Offset: 0x78
	// Line 3244, Address: 0x13825c, Func Offset: 0x7c
	// Line 3245, Address: 0x138264, Func Offset: 0x84
	// Line 3246, Address: 0x13826c, Func Offset: 0x8c
	// Line 3247, Address: 0x138288, Func Offset: 0xa8
	// Line 3248, Address: 0x138294, Func Offset: 0xb4
	// Line 3249, Address: 0x13829c, Func Offset: 0xbc
	// Line 3250, Address: 0x1382a4, Func Offset: 0xc4
	// Line 3254, Address: 0x1382ac, Func Offset: 0xcc
	// Line 3258, Address: 0x1382d4, Func Offset: 0xf4
	// Line 3260, Address: 0x1382f0, Func Offset: 0x110
	// Line 3262, Address: 0x1382fc, Func Offset: 0x11c
	// Line 3264, Address: 0x138308, Func Offset: 0x128
	// Line 3265, Address: 0x13832c, Func Offset: 0x14c
	// Line 3266, Address: 0x138344, Func Offset: 0x164
	// Line 3267, Address: 0x13834c, Func Offset: 0x16c
	// Line 3268, Address: 0x13835c, Func Offset: 0x17c
	// Line 3269, Address: 0x138368, Func Offset: 0x188
	// Line 3270, Address: 0x138378, Func Offset: 0x198
	// Line 3271, Address: 0x138388, Func Offset: 0x1a8
	// Line 3275, Address: 0x138394, Func Offset: 0x1b4
	// Line 3279, Address: 0x1383bc, Func Offset: 0x1dc
	// Line 3281, Address: 0x1383d8, Func Offset: 0x1f8
	// Line 3282, Address: 0x1383ec, Func Offset: 0x20c
	// Line 3283, Address: 0x138404, Func Offset: 0x224
	// Line 3285, Address: 0x138408, Func Offset: 0x228
	// Line 3286, Address: 0x13841c, Func Offset: 0x23c
	// Line 3288, Address: 0x13842c, Func Offset: 0x24c
	// Line 3291, Address: 0x138450, Func Offset: 0x270
	// Line 3293, Address: 0x138464, Func Offset: 0x284
	// Line 3294, Address: 0x13846c, Func Offset: 0x28c
	// Func End, Address: 0x1384a8, Func Offset: 0x2c8
}

// 
// Start address: 0x1384b0
_CL_SELECT_MAP* clGetHitSectListVECHITInDoor()
{
	void** list;
	_CL_CLDHEADER* ch;
	int use;
	// Line 3298, Address: 0x1384b0, Func Offset: 0
	// Line 3300, Address: 0x1384bc, Func Offset: 0xc
	// Line 3303, Address: 0x1384c0, Func Offset: 0x10
	// Line 3307, Address: 0x1384d0, Func Offset: 0x20
	// Line 3308, Address: 0x1384d8, Func Offset: 0x28
	// Line 3314, Address: 0x1384e0, Func Offset: 0x30
	// Line 3322, Address: 0x1384ec, Func Offset: 0x3c
	// Line 3323, Address: 0x138500, Func Offset: 0x50
	// Line 3324, Address: 0x138510, Func Offset: 0x60
	// Line 3325, Address: 0x138514, Func Offset: 0x64
	// Line 3326, Address: 0x13852c, Func Offset: 0x7c
	// Line 3327, Address: 0x138530, Func Offset: 0x80
	// Line 3329, Address: 0x138544, Func Offset: 0x94
	// Line 3330, Address: 0x13854c, Func Offset: 0x9c
	// Func End, Address: 0x138560, Func Offset: 0xb0
}

// 
// Start address: 0x138560
int Line2PlaneBoundaryCheckXZ(float l0[4], float l1[4], float p0[4], float p1[4], float p2[4], float p3[4])
{
	int ret;
	// Line 3340, Address: 0x138560, Func Offset: 0
	// Line 3341, Address: 0x138564, Func Offset: 0x4
	// Line 3342, Address: 0x138568, Func Offset: 0x8
	// Line 3343, Address: 0x13856c, Func Offset: 0xc
	// Line 3344, Address: 0x138570, Func Offset: 0x10
	// Line 3345, Address: 0x138574, Func Offset: 0x14
	// Line 3346, Address: 0x138578, Func Offset: 0x18
	// Line 3347, Address: 0x13857c, Func Offset: 0x1c
	// Line 3348, Address: 0x138580, Func Offset: 0x20
	// Line 3349, Address: 0x138584, Func Offset: 0x24
	// Line 3350, Address: 0x138588, Func Offset: 0x28
	// Line 3351, Address: 0x13858c, Func Offset: 0x2c
	// Line 3352, Address: 0x138590, Func Offset: 0x30
	// Line 3353, Address: 0x138594, Func Offset: 0x34
	// Line 3354, Address: 0x138598, Func Offset: 0x38
	// Line 3355, Address: 0x13859c, Func Offset: 0x3c
	// Line 3356, Address: 0x1385a0, Func Offset: 0x40
	// Line 3357, Address: 0x1385a4, Func Offset: 0x44
	// Line 3358, Address: 0x1385a8, Func Offset: 0x48
	// Line 3359, Address: 0x1385ac, Func Offset: 0x4c
	// Line 3360, Address: 0x1385b0, Func Offset: 0x50
	// Line 3361, Address: 0x1385b4, Func Offset: 0x54
	// Line 3362, Address: 0x1385b8, Func Offset: 0x58
	// Line 3363, Address: 0x1385bc, Func Offset: 0x5c
	// Line 3364, Address: 0x1385c0, Func Offset: 0x60
	// Line 3374, Address: 0x1385c4, Func Offset: 0x64
	// Func End, Address: 0x1385cc, Func Offset: 0x6c
}

// 
// Start address: 0x1385d0
int clCheckCrossLine2BoxXZ(float box[4], float* st, float* ed)
{
	int jyun[5];
	float outer;
	float vb[4];
	float va[4];
	int i;
	// Line 3393, Address: 0x1385d0, Func Offset: 0
	// Line 3397, Address: 0x1385f4, Func Offset: 0x24
	// Line 3400, Address: 0x138610, Func Offset: 0x40
	// Line 3402, Address: 0x13861c, Func Offset: 0x4c
	// Line 3403, Address: 0x138650, Func Offset: 0x80
	// Line 3404, Address: 0x13866c, Func Offset: 0x9c
	// Line 3405, Address: 0x138684, Func Offset: 0xb4
	// Line 3407, Address: 0x13869c, Func Offset: 0xcc
	// Line 3408, Address: 0x1386b0, Func Offset: 0xe0
	// Line 3409, Address: 0x1386bc, Func Offset: 0xec
	// Line 3412, Address: 0x1386c8, Func Offset: 0xf8
	// Line 3414, Address: 0x1386d4, Func Offset: 0x104
	// Line 3415, Address: 0x138708, Func Offset: 0x138
	// Line 3416, Address: 0x138724, Func Offset: 0x154
	// Line 3417, Address: 0x13873c, Func Offset: 0x16c
	// Line 3419, Address: 0x138754, Func Offset: 0x184
	// Line 3420, Address: 0x138768, Func Offset: 0x198
	// Line 3421, Address: 0x138774, Func Offset: 0x1a4
	// Line 3424, Address: 0x138780, Func Offset: 0x1b0
	// Line 3426, Address: 0x13878c, Func Offset: 0x1bc
	// Line 3427, Address: 0x1387c4, Func Offset: 0x1f4
	// Line 3428, Address: 0x1387d0, Func Offset: 0x200
	// Line 3430, Address: 0x1387e4, Func Offset: 0x214
	// Line 3431, Address: 0x1387e8, Func Offset: 0x218
	// Func End, Address: 0x138808, Func Offset: 0x238
}

// 
// Start address: 0x138810
int clCheckCrossLine2LineXZ(float* va0, float* va1, float* vb0, float* vb1)
{
	float outer1;
	float outer0;
	float p1[4];
	float p0[4];
	float bp[4];
	// Line 3434, Address: 0x138810, Func Offset: 0
	// Line 3439, Address: 0x138814, Func Offset: 0x4
	// Line 3440, Address: 0x138828, Func Offset: 0x18
	// Line 3441, Address: 0x13883c, Func Offset: 0x2c
	// Line 3442, Address: 0x138850, Func Offset: 0x40
	// Line 3443, Address: 0x138868, Func Offset: 0x58
	// Line 3444, Address: 0x138878, Func Offset: 0x68
	// Line 3446, Address: 0x1388a0, Func Offset: 0x90
	// Line 3471, Address: 0x138a80, Func Offset: 0x270
	// Line 3473, Address: 0x138a8c, Func Offset: 0x27c
	// Line 3476, Address: 0x138a98, Func Offset: 0x288
	// Line 3477, Address: 0x138ab4, Func Offset: 0x2a4
	// Line 3479, Address: 0x138ac0, Func Offset: 0x2b0
	// Line 3480, Address: 0x138ad4, Func Offset: 0x2c4
	// Line 3481, Address: 0x138ae8, Func Offset: 0x2d8
	// Line 3482, Address: 0x138afc, Func Offset: 0x2ec
	// Line 3483, Address: 0x138b14, Func Offset: 0x304
	// Line 3484, Address: 0x138b24, Func Offset: 0x314
	// Line 3485, Address: 0x138b38, Func Offset: 0x328
	// Line 3487, Address: 0x138b44, Func Offset: 0x334
	// Line 3488, Address: 0x138b48, Func Offset: 0x338
	// Func End, Address: 0x138b54, Func Offset: 0x344
}

// 
// Start address: 0x138b60
_CL_SELECT_MAP* clGetHitSectListMOVE(float* bpos)
{
	// Line 3507, Address: 0x138b60, Func Offset: 0
	// Line 3509, Address: 0x138b70, Func Offset: 0x10
	// Line 3512, Address: 0x138ba4, Func Offset: 0x44
	// Func End, Address: 0x138bb8, Func Offset: 0x58
}

// 
// Start address: 0x138bc0
_CL_SELECT_MAP* clGetHitSectListMOVEOutDoor(float* bpos)
{
	void** list;
	float dist;
	float bcpos[4];
	float cpos[4];
	float pos[4];
	_CL_CLDHEADER* ch;
	int use;
	int k;
	int j;
	// Line 3516, Address: 0x138bc0, Func Offset: 0
	// Line 3518, Address: 0x138bd4, Func Offset: 0x14
	// Line 3523, Address: 0x138bd8, Func Offset: 0x18
	// Line 3524, Address: 0x138be4, Func Offset: 0x24
	// Line 3525, Address: 0x138be8, Func Offset: 0x28
	// Line 3526, Address: 0x138bf0, Func Offset: 0x30
	// Line 3528, Address: 0x138bf8, Func Offset: 0x38
	// Line 3532, Address: 0x138c08, Func Offset: 0x48
	// Line 3533, Address: 0x138c10, Func Offset: 0x50
	// Line 3539, Address: 0x138c18, Func Offset: 0x58
	// Line 3547, Address: 0x138c24, Func Offset: 0x64
	// Line 3548, Address: 0x138c2c, Func Offset: 0x6c
	// Line 3549, Address: 0x138c34, Func Offset: 0x74
	// Line 3551, Address: 0x138c44, Func Offset: 0x84
	// Line 3552, Address: 0x138c48, Func Offset: 0x88
	// Line 3553, Address: 0x138c4c, Func Offset: 0x8c
	// Line 3555, Address: 0x138c50, Func Offset: 0x90
	// Line 3556, Address: 0x138c54, Func Offset: 0x94
	// Line 3557, Address: 0x138c58, Func Offset: 0x98
	// Line 3559, Address: 0x138c5c, Func Offset: 0x9c
	// Line 3560, Address: 0x138c60, Func Offset: 0xa0
	// Line 3561, Address: 0x138c64, Func Offset: 0xa4
	// Line 3566, Address: 0x138c68, Func Offset: 0xa8
	// Line 3569, Address: 0x138c8c, Func Offset: 0xcc
	// Line 3571, Address: 0x138c98, Func Offset: 0xd8
	// Line 3573, Address: 0x138ca4, Func Offset: 0xe4
	// Line 3574, Address: 0x138ccc, Func Offset: 0x10c
	// Line 3575, Address: 0x138ce8, Func Offset: 0x128
	// Line 3576, Address: 0x138cf4, Func Offset: 0x134
	// Line 3577, Address: 0x138cf8, Func Offset: 0x138
	// Line 3579, Address: 0x138cfc, Func Offset: 0x13c
	// Line 3580, Address: 0x138d00, Func Offset: 0x140
	// Line 3581, Address: 0x138d04, Func Offset: 0x144
	// Line 3583, Address: 0x138d08, Func Offset: 0x148
	// Line 3584, Address: 0x138d0c, Func Offset: 0x14c
	// Line 3585, Address: 0x138d10, Func Offset: 0x150
	// Line 3590, Address: 0x138d14, Func Offset: 0x154
	// Line 3594, Address: 0x138d38, Func Offset: 0x178
	// Line 3595, Address: 0x138d4c, Func Offset: 0x18c
	// Line 3597, Address: 0x138d64, Func Offset: 0x1a4
	// Line 3600, Address: 0x138d68, Func Offset: 0x1a8
	// Line 3601, Address: 0x138d78, Func Offset: 0x1b8
	// Line 3602, Address: 0x138d8c, Func Offset: 0x1cc
	// Line 3603, Address: 0x138d9c, Func Offset: 0x1dc
	// Line 3604, Address: 0x138db4, Func Offset: 0x1f4
	// Line 3606, Address: 0x138db8, Func Offset: 0x1f8
	// Line 3608, Address: 0x138dcc, Func Offset: 0x20c
	// Line 3609, Address: 0x138dd4, Func Offset: 0x214
	// Func End, Address: 0x138dec, Func Offset: 0x22c
}

// 
// Start address: 0x138df0
_CL_SELECT_MAP* clGetHitSectListMOVEInDoor()
{
	void** list;
	_CL_CLDHEADER* ch;
	int use;
	// Line 3613, Address: 0x138df0, Func Offset: 0
	// Line 3615, Address: 0x138dfc, Func Offset: 0xc
	// Line 3618, Address: 0x138e00, Func Offset: 0x10
	// Line 3622, Address: 0x138e10, Func Offset: 0x20
	// Line 3623, Address: 0x138e18, Func Offset: 0x28
	// Line 3629, Address: 0x138e20, Func Offset: 0x30
	// Line 3637, Address: 0x138e2c, Func Offset: 0x3c
	// Line 3638, Address: 0x138e40, Func Offset: 0x50
	// Line 3639, Address: 0x138e50, Func Offset: 0x60
	// Line 3640, Address: 0x138e54, Func Offset: 0x64
	// Line 3641, Address: 0x138e6c, Func Offset: 0x7c
	// Line 3642, Address: 0x138e70, Func Offset: 0x80
	// Line 3644, Address: 0x138e84, Func Offset: 0x94
	// Line 3645, Address: 0x138e8c, Func Offset: 0x9c
	// Func End, Address: 0x138ea0, Func Offset: 0xb0
}

// 
// Start address: 0x138ea0
void clCheckHitEyes(_CL_VHIT_RESULT* res, unsigned int id, float* st, float* ed, int thru)
{
	// Line 3673, Address: 0x138ea0, Func Offset: 0
	// Line 3674, Address: 0x138ea8, Func Offset: 0x8
	// Line 3677, Address: 0x138ed0, Func Offset: 0x30
	// Line 3678, Address: 0x138ed8, Func Offset: 0x38
	// Line 3680, Address: 0x138ee0, Func Offset: 0x40
	// Line 3681, Address: 0x138ee8, Func Offset: 0x48
	// Line 3683, Address: 0x138ef0, Func Offset: 0x50
	// Line 3686, Address: 0x138ef8, Func Offset: 0x58
	// Func End, Address: 0x138f08, Func Offset: 0x68
}

// 
// Start address: 0x138f10
void clCheckHitEyesOnlyFloor(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3709, Address: 0x138f10, Func Offset: 0
	// Line 3717, Address: 0x138f34, Func Offset: 0x24
	// Line 3718, Address: 0x138f38, Func Offset: 0x28
	// Line 3719, Address: 0x138f3c, Func Offset: 0x2c
	// Line 3721, Address: 0x138f40, Func Offset: 0x30
	// Line 3722, Address: 0x138f44, Func Offset: 0x34
	// Line 3723, Address: 0x138f48, Func Offset: 0x38
	// Line 3724, Address: 0x138f4c, Func Offset: 0x3c
	// Line 3726, Address: 0x138f50, Func Offset: 0x40
	// Line 3727, Address: 0x138f54, Func Offset: 0x44
	// Line 3728, Address: 0x138f58, Func Offset: 0x48
	// Line 3733, Address: 0x138f5c, Func Offset: 0x4c
	// Line 3736, Address: 0x138f60, Func Offset: 0x50
	// Line 3739, Address: 0x138f70, Func Offset: 0x60
	// Line 3743, Address: 0x138f84, Func Offset: 0x74
	// Line 3746, Address: 0x138f90, Func Offset: 0x80
	// Line 3748, Address: 0x138f98, Func Offset: 0x88
	// Line 3750, Address: 0x138fa4, Func Offset: 0x94
	// Line 3751, Address: 0x138fb8, Func Offset: 0xa8
	// Line 3752, Address: 0x138fd0, Func Offset: 0xc0
	// Line 3753, Address: 0x138fe4, Func Offset: 0xd4
	// Line 3754, Address: 0x138fe8, Func Offset: 0xd8
	// Func End, Address: 0x139008, Func Offset: 0xf8
}

// 
// Start address: 0x139010
void clCheckHitEyesOnlyFloorThru(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3761, Address: 0x139010, Func Offset: 0
	// Line 3769, Address: 0x139034, Func Offset: 0x24
	// Line 3770, Address: 0x139038, Func Offset: 0x28
	// Line 3771, Address: 0x13903c, Func Offset: 0x2c
	// Line 3773, Address: 0x139040, Func Offset: 0x30
	// Line 3774, Address: 0x139044, Func Offset: 0x34
	// Line 3775, Address: 0x139048, Func Offset: 0x38
	// Line 3776, Address: 0x13904c, Func Offset: 0x3c
	// Line 3778, Address: 0x139050, Func Offset: 0x40
	// Line 3779, Address: 0x139054, Func Offset: 0x44
	// Line 3780, Address: 0x139058, Func Offset: 0x48
	// Line 3785, Address: 0x13905c, Func Offset: 0x4c
	// Line 3788, Address: 0x139060, Func Offset: 0x50
	// Line 3791, Address: 0x139070, Func Offset: 0x60
	// Line 3795, Address: 0x139084, Func Offset: 0x74
	// Line 3798, Address: 0x139090, Func Offset: 0x80
	// Line 3800, Address: 0x139098, Func Offset: 0x88
	// Line 3802, Address: 0x1390a4, Func Offset: 0x94
	// Line 3803, Address: 0x1390b8, Func Offset: 0xa8
	// Line 3804, Address: 0x1390d0, Func Offset: 0xc0
	// Line 3805, Address: 0x1390e4, Func Offset: 0xd4
	// Line 3806, Address: 0x1390e8, Func Offset: 0xd8
	// Func End, Address: 0x139108, Func Offset: 0xf8
}

// 
// Start address: 0x139110
void clCheckHitEyesOnlyWall(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3827, Address: 0x139110, Func Offset: 0
	// Line 3836, Address: 0x139138, Func Offset: 0x28
	// Line 3837, Address: 0x13913c, Func Offset: 0x2c
	// Line 3838, Address: 0x139140, Func Offset: 0x30
	// Line 3840, Address: 0x139144, Func Offset: 0x34
	// Line 3841, Address: 0x139148, Func Offset: 0x38
	// Line 3842, Address: 0x13914c, Func Offset: 0x3c
	// Line 3843, Address: 0x139150, Func Offset: 0x40
	// Line 3845, Address: 0x139154, Func Offset: 0x44
	// Line 3846, Address: 0x139158, Func Offset: 0x48
	// Line 3847, Address: 0x13915c, Func Offset: 0x4c
	// Line 3852, Address: 0x139160, Func Offset: 0x50
	// Line 3855, Address: 0x139164, Func Offset: 0x54
	// Line 3858, Address: 0x13916c, Func Offset: 0x5c
	// Line 3860, Address: 0x139180, Func Offset: 0x70
	// Line 3862, Address: 0x139184, Func Offset: 0x74
	// Line 3865, Address: 0x139190, Func Offset: 0x80
	// Line 3867, Address: 0x139198, Func Offset: 0x88
	// Line 3869, Address: 0x1391a4, Func Offset: 0x94
	// Line 3870, Address: 0x1391b8, Func Offset: 0xa8
	// Line 3871, Address: 0x1391d0, Func Offset: 0xc0
	// Line 3873, Address: 0x1391e4, Func Offset: 0xd4
	// Line 3875, Address: 0x1391f0, Func Offset: 0xe0
	// Line 3877, Address: 0x1391fc, Func Offset: 0xec
	// Line 3878, Address: 0x139210, Func Offset: 0x100
	// Line 3879, Address: 0x139228, Func Offset: 0x118
	// Line 3881, Address: 0x13923c, Func Offset: 0x12c
	// Line 3883, Address: 0x139248, Func Offset: 0x138
	// Line 3885, Address: 0x139254, Func Offset: 0x144
	// Line 3886, Address: 0x139268, Func Offset: 0x158
	// Line 3887, Address: 0x139280, Func Offset: 0x170
	// Line 3888, Address: 0x139294, Func Offset: 0x184
	// Line 3889, Address: 0x139298, Func Offset: 0x188
	// Func End, Address: 0x1392bc, Func Offset: 0x1ac
}

// 
// Start address: 0x1392c0
void clCheckHitEyesOnlyFloorCeil(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3910, Address: 0x1392c0, Func Offset: 0
	// Line 3918, Address: 0x1392e8, Func Offset: 0x28
	// Line 3919, Address: 0x1392ec, Func Offset: 0x2c
	// Line 3920, Address: 0x1392f0, Func Offset: 0x30
	// Line 3922, Address: 0x1392f4, Func Offset: 0x34
	// Line 3923, Address: 0x1392f8, Func Offset: 0x38
	// Line 3924, Address: 0x1392fc, Func Offset: 0x3c
	// Line 3925, Address: 0x139300, Func Offset: 0x40
	// Line 3927, Address: 0x139304, Func Offset: 0x44
	// Line 3928, Address: 0x139308, Func Offset: 0x48
	// Line 3929, Address: 0x13930c, Func Offset: 0x4c
	// Line 3934, Address: 0x139310, Func Offset: 0x50
	// Line 3937, Address: 0x139314, Func Offset: 0x54
	// Line 3940, Address: 0x13931c, Func Offset: 0x5c
	// Line 3942, Address: 0x139330, Func Offset: 0x70
	// Line 3944, Address: 0x139334, Func Offset: 0x74
	// Line 3947, Address: 0x139340, Func Offset: 0x80
	// Line 3949, Address: 0x139348, Func Offset: 0x88
	// Line 3951, Address: 0x139354, Func Offset: 0x94
	// Line 3952, Address: 0x139368, Func Offset: 0xa8
	// Line 3953, Address: 0x139380, Func Offset: 0xc0
	// Line 3955, Address: 0x139394, Func Offset: 0xd4
	// Line 3957, Address: 0x1393a0, Func Offset: 0xe0
	// Line 3959, Address: 0x1393ac, Func Offset: 0xec
	// Line 3960, Address: 0x1393c0, Func Offset: 0x100
	// Line 3961, Address: 0x1393d8, Func Offset: 0x118
	// Line 3962, Address: 0x1393ec, Func Offset: 0x12c
	// Line 3963, Address: 0x1393f0, Func Offset: 0x130
	// Func End, Address: 0x139414, Func Offset: 0x154
}

// 
// Start address: 0x139420
void clCheckHitEyeVector(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3987, Address: 0x139420, Func Offset: 0
	// Line 3996, Address: 0x139450, Func Offset: 0x30
	// Line 3997, Address: 0x139454, Func Offset: 0x34
	// Line 3998, Address: 0x139458, Func Offset: 0x38
	// Line 4000, Address: 0x13945c, Func Offset: 0x3c
	// Line 4001, Address: 0x139460, Func Offset: 0x40
	// Line 4002, Address: 0x139464, Func Offset: 0x44
	// Line 4003, Address: 0x139468, Func Offset: 0x48
	// Line 4005, Address: 0x13946c, Func Offset: 0x4c
	// Line 4006, Address: 0x139470, Func Offset: 0x50
	// Line 4007, Address: 0x139474, Func Offset: 0x54
	// Line 4011, Address: 0x139478, Func Offset: 0x58
	// Line 4014, Address: 0x13947c, Func Offset: 0x5c
	// Line 4015, Address: 0x139490, Func Offset: 0x70
	// Line 4018, Address: 0x139494, Func Offset: 0x74
	// Line 4021, Address: 0x1394ac, Func Offset: 0x8c
	// Line 4023, Address: 0x1394c4, Func Offset: 0xa4
	// Line 4026, Address: 0x1394d0, Func Offset: 0xb0
	// Line 4028, Address: 0x1394d8, Func Offset: 0xb8
	// Line 4030, Address: 0x1394e4, Func Offset: 0xc4
	// Line 4031, Address: 0x1394f8, Func Offset: 0xd8
	// Line 4032, Address: 0x139510, Func Offset: 0xf0
	// Line 4035, Address: 0x139524, Func Offset: 0x104
	// Line 4037, Address: 0x139530, Func Offset: 0x110
	// Line 4039, Address: 0x13953c, Func Offset: 0x11c
	// Line 4040, Address: 0x139550, Func Offset: 0x130
	// Line 4041, Address: 0x139568, Func Offset: 0x148
	// Line 4044, Address: 0x13957c, Func Offset: 0x15c
	// Line 4046, Address: 0x139588, Func Offset: 0x168
	// Line 4048, Address: 0x139594, Func Offset: 0x174
	// Line 4049, Address: 0x1395a8, Func Offset: 0x188
	// Line 4050, Address: 0x1395c0, Func Offset: 0x1a0
	// Line 4053, Address: 0x1395d4, Func Offset: 0x1b4
	// Line 4055, Address: 0x1395e0, Func Offset: 0x1c0
	// Line 4057, Address: 0x1395ec, Func Offset: 0x1cc
	// Line 4058, Address: 0x139600, Func Offset: 0x1e0
	// Line 4059, Address: 0x139618, Func Offset: 0x1f8
	// Line 4060, Address: 0x13962c, Func Offset: 0x20c
	// Line 4063, Address: 0x139630, Func Offset: 0x210
	// Line 4065, Address: 0x13964c, Func Offset: 0x22c
	// Func End, Address: 0x139674, Func Offset: 0x254
}

// 
// Start address: 0x139680
void clCheckHitEyeVectorNoThru(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 4089, Address: 0x139680, Func Offset: 0
	// Line 4098, Address: 0x1396b0, Func Offset: 0x30
	// Line 4099, Address: 0x1396b4, Func Offset: 0x34
	// Line 4100, Address: 0x1396b8, Func Offset: 0x38
	// Line 4102, Address: 0x1396bc, Func Offset: 0x3c
	// Line 4103, Address: 0x1396c0, Func Offset: 0x40
	// Line 4104, Address: 0x1396c4, Func Offset: 0x44
	// Line 4105, Address: 0x1396c8, Func Offset: 0x48
	// Line 4107, Address: 0x1396cc, Func Offset: 0x4c
	// Line 4108, Address: 0x1396d0, Func Offset: 0x50
	// Line 4109, Address: 0x1396d4, Func Offset: 0x54
	// Line 4113, Address: 0x1396d8, Func Offset: 0x58
	// Line 4116, Address: 0x1396dc, Func Offset: 0x5c
	// Line 4118, Address: 0x1396f0, Func Offset: 0x70
	// Line 4121, Address: 0x1396f4, Func Offset: 0x74
	// Line 4124, Address: 0x13970c, Func Offset: 0x8c
	// Line 4126, Address: 0x139724, Func Offset: 0xa4
	// Line 4129, Address: 0x139730, Func Offset: 0xb0
	// Line 4131, Address: 0x139738, Func Offset: 0xb8
	// Line 4133, Address: 0x139744, Func Offset: 0xc4
	// Line 4134, Address: 0x139758, Func Offset: 0xd8
	// Line 4135, Address: 0x139770, Func Offset: 0xf0
	// Line 4138, Address: 0x139784, Func Offset: 0x104
	// Line 4140, Address: 0x139790, Func Offset: 0x110
	// Line 4142, Address: 0x13979c, Func Offset: 0x11c
	// Line 4143, Address: 0x1397b0, Func Offset: 0x130
	// Line 4144, Address: 0x1397c8, Func Offset: 0x148
	// Line 4147, Address: 0x1397dc, Func Offset: 0x15c
	// Line 4149, Address: 0x1397e8, Func Offset: 0x168
	// Line 4151, Address: 0x1397f4, Func Offset: 0x174
	// Line 4152, Address: 0x139808, Func Offset: 0x188
	// Line 4153, Address: 0x139820, Func Offset: 0x1a0
	// Line 4156, Address: 0x139834, Func Offset: 0x1b4
	// Line 4158, Address: 0x139840, Func Offset: 0x1c0
	// Line 4160, Address: 0x13984c, Func Offset: 0x1cc
	// Line 4161, Address: 0x139860, Func Offset: 0x1e0
	// Line 4162, Address: 0x139878, Func Offset: 0x1f8
	// Line 4163, Address: 0x13988c, Func Offset: 0x20c
	// Line 4166, Address: 0x139890, Func Offset: 0x210
	// Line 4167, Address: 0x1398ac, Func Offset: 0x22c
	// Func End, Address: 0x1398d4, Func Offset: 0x254
}

// 
// Start address: 0x1398e0
void clCheckHitEyeVectorAllNoThru(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 4191, Address: 0x1398e0, Func Offset: 0
	// Line 4200, Address: 0x139910, Func Offset: 0x30
	// Line 4201, Address: 0x139914, Func Offset: 0x34
	// Line 4202, Address: 0x139918, Func Offset: 0x38
	// Line 4204, Address: 0x13991c, Func Offset: 0x3c
	// Line 4205, Address: 0x139920, Func Offset: 0x40
	// Line 4206, Address: 0x139924, Func Offset: 0x44
	// Line 4207, Address: 0x139928, Func Offset: 0x48
	// Line 4209, Address: 0x13992c, Func Offset: 0x4c
	// Line 4210, Address: 0x139930, Func Offset: 0x50
	// Line 4211, Address: 0x139934, Func Offset: 0x54
	// Line 4215, Address: 0x139938, Func Offset: 0x58
	// Line 4218, Address: 0x13993c, Func Offset: 0x5c
	// Line 4220, Address: 0x139950, Func Offset: 0x70
	// Line 4223, Address: 0x139954, Func Offset: 0x74
	// Line 4226, Address: 0x13996c, Func Offset: 0x8c
	// Line 4228, Address: 0x139984, Func Offset: 0xa4
	// Line 4231, Address: 0x139990, Func Offset: 0xb0
	// Line 4233, Address: 0x139998, Func Offset: 0xb8
	// Line 4235, Address: 0x1399a4, Func Offset: 0xc4
	// Line 4236, Address: 0x1399b8, Func Offset: 0xd8
	// Line 4237, Address: 0x1399d0, Func Offset: 0xf0
	// Line 4240, Address: 0x1399e4, Func Offset: 0x104
	// Line 4242, Address: 0x1399f0, Func Offset: 0x110
	// Line 4244, Address: 0x1399fc, Func Offset: 0x11c
	// Line 4245, Address: 0x139a10, Func Offset: 0x130
	// Line 4246, Address: 0x139a28, Func Offset: 0x148
	// Line 4249, Address: 0x139a3c, Func Offset: 0x15c
	// Line 4251, Address: 0x139a48, Func Offset: 0x168
	// Line 4253, Address: 0x139a54, Func Offset: 0x174
	// Line 4254, Address: 0x139a68, Func Offset: 0x188
	// Line 4255, Address: 0x139a80, Func Offset: 0x1a0
	// Line 4258, Address: 0x139a94, Func Offset: 0x1b4
	// Line 4260, Address: 0x139aa0, Func Offset: 0x1c0
	// Line 4262, Address: 0x139aac, Func Offset: 0x1cc
	// Line 4263, Address: 0x139ac0, Func Offset: 0x1e0
	// Line 4264, Address: 0x139ad8, Func Offset: 0x1f8
	// Line 4267, Address: 0x139aec, Func Offset: 0x20c
	// Line 4269, Address: 0x139af8, Func Offset: 0x218
	// Line 4271, Address: 0x139b04, Func Offset: 0x224
	// Line 4272, Address: 0x139b18, Func Offset: 0x238
	// Line 4273, Address: 0x139b30, Func Offset: 0x250
	// Line 4274, Address: 0x139b44, Func Offset: 0x264
	// Line 4277, Address: 0x139b48, Func Offset: 0x268
	// Line 4278, Address: 0x139b64, Func Offset: 0x284
	// Func End, Address: 0x139b8c, Func Offset: 0x2ac
}

// 
// Start address: 0x139b90
void clCheckHitEyeVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr)
{
	float dist;
	_CL_HITRESULT cres;
	int ret;
	// Line 4305, Address: 0x139b90, Func Offset: 0
	// Line 4310, Address: 0x139bc8, Func Offset: 0x38
	// Line 4312, Address: 0x139bd0, Func Offset: 0x40
	// Line 4317, Address: 0x139c0c, Func Offset: 0x7c
	// Line 4318, Address: 0x139c18, Func Offset: 0x88
	// Line 4322, Address: 0x139c40, Func Offset: 0xb0
	// Line 4327, Address: 0x139c68, Func Offset: 0xd8
	// Line 4329, Address: 0x139c70, Func Offset: 0xe0
	// Line 4330, Address: 0x139c9c, Func Offset: 0x10c
	// Line 4333, Address: 0x139cb4, Func Offset: 0x124
	// Line 4334, Address: 0x139cb8, Func Offset: 0x128
	// Line 4335, Address: 0x139cc0, Func Offset: 0x130
	// Line 4336, Address: 0x139cc8, Func Offset: 0x138
	// Line 4337, Address: 0x139ce8, Func Offset: 0x158
	// Line 4340, Address: 0x139d00, Func Offset: 0x170
	// Line 4341, Address: 0x139d18, Func Offset: 0x188
	// Func End, Address: 0x139d40, Func Offset: 0x1b0
}

// 
// Start address: 0x139d40
void clCheckHitEyeVectorBGColumn(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_COLUMN* cl, int* ptr)
{
	float dist;
	_CL_HITRESULT cres;
	int ret;
	// Line 4368, Address: 0x139d40, Func Offset: 0
	// Line 4373, Address: 0x139d78, Func Offset: 0x38
	// Line 4376, Address: 0x139d80, Func Offset: 0x40
	// Line 4379, Address: 0x139dac, Func Offset: 0x6c
	// Line 4381, Address: 0x139db4, Func Offset: 0x74
	// Line 4382, Address: 0x139de0, Func Offset: 0xa0
	// Line 4385, Address: 0x139df8, Func Offset: 0xb8
	// Line 4386, Address: 0x139dfc, Func Offset: 0xbc
	// Line 4387, Address: 0x139e04, Func Offset: 0xc4
	// Line 4388, Address: 0x139e0c, Func Offset: 0xcc
	// Line 4389, Address: 0x139e10, Func Offset: 0xd0
	// Line 4392, Address: 0x139e28, Func Offset: 0xe8
	// Line 4393, Address: 0x139e40, Func Offset: 0x100
	// Func End, Address: 0x139e68, Func Offset: 0x128
}

// 
// Start address: 0x139e70
void clCheckHitEyeVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 4416, Address: 0x139e70, Func Offset: 0
	// Line 4424, Address: 0x139ea4, Func Offset: 0x34
	// Line 4426, Address: 0x139eb4, Func Offset: 0x44
	// Line 4428, Address: 0x139ec0, Func Offset: 0x50
	// Line 4431, Address: 0x139ecc, Func Offset: 0x5c
	// Line 4436, Address: 0x139f60, Func Offset: 0xf0
	// Line 4437, Address: 0x139f84, Func Offset: 0x114
	// Line 4441, Address: 0x139ff4, Func Offset: 0x184
	// Line 4446, Address: 0x13a078, Func Offset: 0x208
	// Line 4448, Address: 0x13a080, Func Offset: 0x210
	// Line 4449, Address: 0x13a0ac, Func Offset: 0x23c
	// Line 4452, Address: 0x13a0c4, Func Offset: 0x254
	// Line 4453, Address: 0x13a0c8, Func Offset: 0x258
	// Line 4454, Address: 0x13a0d0, Func Offset: 0x260
	// Line 4455, Address: 0x13a0d8, Func Offset: 0x268
	// Line 4456, Address: 0x13a118, Func Offset: 0x2a8
	// Line 4459, Address: 0x13a150, Func Offset: 0x2e0
	// Line 4460, Address: 0x13a198, Func Offset: 0x328
	// Line 4462, Address: 0x13a1c8, Func Offset: 0x358
	// Func End, Address: 0x13a1f4, Func Offset: 0x384
}

// 
// Start address: 0x13a200
void clCheckHitEyeVectorDynamicFloor(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 4485, Address: 0x13a200, Func Offset: 0
	// Line 4493, Address: 0x13a234, Func Offset: 0x34
	// Line 4495, Address: 0x13a244, Func Offset: 0x44
	// Line 4497, Address: 0x13a250, Func Offset: 0x50
	// Line 4500, Address: 0x13a25c, Func Offset: 0x5c
	// Line 4505, Address: 0x13a2f0, Func Offset: 0xf0
	// Line 4506, Address: 0x13a314, Func Offset: 0x114
	// Line 4510, Address: 0x13a384, Func Offset: 0x184
	// Line 4515, Address: 0x13a408, Func Offset: 0x208
	// Line 4517, Address: 0x13a410, Func Offset: 0x210
	// Line 4518, Address: 0x13a43c, Func Offset: 0x23c
	// Line 4521, Address: 0x13a454, Func Offset: 0x254
	// Line 4522, Address: 0x13a458, Func Offset: 0x258
	// Line 4523, Address: 0x13a460, Func Offset: 0x260
	// Line 4524, Address: 0x13a468, Func Offset: 0x268
	// Line 4525, Address: 0x13a4a8, Func Offset: 0x2a8
	// Line 4528, Address: 0x13a4e0, Func Offset: 0x2e0
	// Line 4529, Address: 0x13a528, Func Offset: 0x328
	// Line 4531, Address: 0x13a558, Func Offset: 0x358
	// Func End, Address: 0x13a584, Func Offset: 0x384
}

// 
// Start address: 0x13a590
void clCheckHitEyeVectorCharacter(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, unsigned int id)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int i;
	// Line 4556, Address: 0x13a590, Func Offset: 0
	// Line 4563, Address: 0x13a5c8, Func Offset: 0x38
	// Line 4565, Address: 0x13a5d8, Func Offset: 0x48
	// Line 4567, Address: 0x13a5e4, Func Offset: 0x54
	// Line 4570, Address: 0x13a618, Func Offset: 0x88
	// Line 4573, Address: 0x13a634, Func Offset: 0xa4
	// Line 4576, Address: 0x13a65c, Func Offset: 0xcc
	// Line 4578, Address: 0x13a664, Func Offset: 0xd4
	// Line 4579, Address: 0x13a690, Func Offset: 0x100
	// Line 4582, Address: 0x13a6a8, Func Offset: 0x118
	// Line 4583, Address: 0x13a6ac, Func Offset: 0x11c
	// Line 4584, Address: 0x13a6b4, Func Offset: 0x124
	// Line 4585, Address: 0x13a6bc, Func Offset: 0x12c
	// Line 4586, Address: 0x13a6ec, Func Offset: 0x15c
	// Line 4588, Address: 0x13a6f0, Func Offset: 0x160
	// Line 4589, Address: 0x13a718, Func Offset: 0x188
	// Func End, Address: 0x13a744, Func Offset: 0x1b4
}

// 
// Start address: 0x13a750
int clPermitColumnExpansion()
{
	// Line 4606, Address: 0x13a750, Func Offset: 0
	// Line 4607, Address: 0x13a758, Func Offset: 0x8
	// Line 4608, Address: 0x13a770, Func Offset: 0x20
	// Func End, Address: 0x13a780, Func Offset: 0x30
}

