typedef struct SubCharacter;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon0;
typedef struct _CL_HITPOLY_HEAD;
typedef union _anon1;
typedef struct _anon2;
typedef struct _CL_SELECT_MAP;
typedef struct SPACK_OT_DATA;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _CL_CLDHEADER;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _VbWVSMATRIX;
typedef struct _CL_BATTLE_RESULT;
typedef struct SPACK_ENV_DATA;
typedef struct _VbSCREENINFO;
typedef struct _CL_HITPOLY_SPHERE;
typedef struct _CL_WALLHITDAT;
typedef struct _anon6;
typedef struct SPACK_STATIC_DATA;
typedef struct _CL_BATTLE_QUE;
typedef struct shSkelton;
typedef struct SPACK_DATA;
typedef struct _CL_CHARA_LIST;
typedef struct _CL_HITPOLY_BOX;
typedef struct shBattleFight;
typedef struct _CL_HITPOLY_BOX2;
typedef struct _CL_DYNAMICWALL_LIST;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct _CL_HITPOLY_BOX3;
typedef struct shBattleInfo;
typedef struct _CL_HITRESULT;
typedef struct shAttackInfo;
typedef union _anon7;
typedef struct _CL_VHIT_WALL;
typedef union _anon8;
typedef struct _CL_VHIT_CHARA;

typedef void(*type_23)();
typedef void(*type_40)(float*);
typedef void(*type_42)(SubCharacter*);
typedef void(*type_48)(SubCharacter*);
typedef void(*type_57)(SubCharacter*);

typedef _CL_BATTLE_RESULT type_0[65];
typedef int type_1[4];
typedef float type_2[4];
typedef float type_3[4][2];
typedef unsigned char type_4[4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_7[4][3];
typedef int type_8[5];
typedef float type_9[4][4];
typedef float type_10[5];
typedef int type_11[2];
typedef float type_12[4][11];
typedef float type_13[4][4];
typedef _CL_CHARA_LIST type_14[32];
typedef _CL_CHARA_LIST type_15[32][2];
typedef int type_16[16];
typedef int type_17[16];
typedef unsigned long type_18[2];
typedef int type_19[16];
typedef int type_20[16];
typedef int type_21[16];
typedef unsigned char type_22[256];
typedef float type_24[4][2];
typedef float type_25[4];
typedef float type_26[4][4];
typedef unsigned long type_27[2];
typedef float type_28[4][2];
typedef float type_29[4][3];
typedef int type_30[4][3];
typedef _CL_WALLHITDAT type_31[32];
typedef float type_32[4][32];
typedef unsigned long type_33[2];
typedef _CL_SELECT_MAP type_34[128];
typedef float type_35[4][2];
typedef int type_36[4][2];
typedef float type_37[4][4];
typedef float type_38[4][8];
typedef float type_39[2];
typedef int type_41[4][12];
typedef unsigned char type_43[12];
typedef _CL_HITPOLY_PLANE* type_44[32];
typedef float type_45[4][4];
typedef float type_46[4];
typedef shAttackInfo type_47[46];
typedef _CL_DYNAMICWALL_LIST type_49[2];
typedef unsigned char type_50[4];
typedef float type_51[4][2];
typedef unsigned char type_52[174];
typedef unsigned long type_53[2];
typedef unsigned char type_54[4];
typedef unsigned char type_55[4][6];
typedef _CL_VHIT_RESULT type_56[64];
typedef float type_58[4][4];
typedef _CL_BATTLE_QUE type_59[64];
typedef unsigned char* type_60[16];
typedef int type_61[4][4];
typedef float type_62[5];

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
	_anon6 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon4 b_pos;
	_anon4 b_rot;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct _anon0
{
	float v[4][2];
	unsigned char rgba[4];
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

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon2
{
	float v[4][3];
	unsigned char rgba[4];
};

struct _CL_SELECT_MAP
{
	unsigned char* base;
	unsigned char sect;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
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

struct _anon3
{
	float v[4][4];
	unsigned char rgba[4];
};

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon5
{
	unsigned char rgba[4];
	float v[4][11];
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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
	_anon7 obj;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct _CL_HITPOLY_SPHERE
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4];
};

struct _CL_WALLHITDAT
{
	int kind;
	float cv[4];
	_CL_HITPOLY_PLANE* pl;
	float normal[4];
	float nang;
};

struct _anon6
{
	float d[4][4];
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon6 src_m;
	_anon4 src_t;
	_anon6 des_m;
	_anon4 des_t;
	_anon4 axis;
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

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
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
	void(*heightfunc)(float*);
};

struct _CL_HITPOLY_BOX
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][8];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _CL_HITPOLY_BOX2
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][4];
};

struct _CL_DYNAMICWALL_LIST
{
	int use;
	_CL_HITPOLY_PLANE* dw[32];
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

struct _CL_HITPOLY_BOX3
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
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

struct _CL_HITRESULT
{
	int chk;
	float cp[4];
	float cv[4];
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
	_anon8 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon7
{
	SubCharacter* en;
	_CL_HITPOLY_PLANE* pl;
	_CL_HITPOLY_COLUMN* cl;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon8
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

shAttackInfo sh2_attack_list[46];
unsigned char clPermColExpFlg[174];
int clCollisionEnable;
int clUseBattleResult;
_CL_BATTLE_RESULT clBattleResult[65];
_CL_DYNAMICWALL_LIST clDynamicWallList[2];
int clCharaListUse[2];
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
unsigned char* CLDadr[16];
SPACK_DATA spack;
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;

void clAllInitCollisionData();
void clFrameInitCollisionData();
void clCollectCharaPosition();
void clSetCharaHitColumn(_CL_HITPOLY_COLUMN* col, _CL_HITPOLY_COLUMN* wcol, SubCharacter* sc, void(*func)());
void clAddDynamicWall(_CL_HITPOLY_PLANE* pl);
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
void clCheckHitSwordVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
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
void clCheckHitEyeVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr);
void clCheckHitEyeVectorBGColumn(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_COLUMN* cl, int* ptr);
void clCheckHitEyeVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min);
void clCheckHitEyeVectorCharacter(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, unsigned int id);
int clPermitColumnExpansion();
void clDbgDrawCharaColiPoly();
void clDbgDrawBGColiPoly();
void clDbgDrawHitPolygon(_CL_HITPOLY_HEAD* hp);
void clDbgDrawScissorHitPolygon(_CL_HITPOLY_HEAD* hp);
void clDbgDrawPolyCOLUMN(_CL_HITPOLY_COLUMN* col);
void clDbgDrawPolySPHERE(_CL_HITPOLY_SPHERE* sp);
void clDbgDrawPolyBOX(_CL_HITPOLY_BOX* box);
void clDbgDrawPolyBOX2(_CL_HITPOLY_BOX2* box2);
void clDbgDrawPolyBOX3(_CL_HITPOLY_BOX3* box3);
void clDbgDrawPolyLINE(_anon0* p);
void clDbgDrawPolyF3(_anon2* p);
void clDbgDrawPolyF4(_anon3* p);
void clDbgScissorDrawF3();
void clDbgScissorDrawF4(_anon3* p);
void clDbgDrawPolyFAN(_anon5* p);
void clDbgSetMaterialColor(unsigned char mat, unsigned char* rgba);

// 
// Start address: 0x13add0
void clAllInitCollisionData()
{
	// Line 275, Address: 0x13add0, Func Offset: 0
	// Line 276, Address: 0x13add8, Func Offset: 0x8
	// Line 277, Address: 0x13ade0, Func Offset: 0x10
	// Line 278, Address: 0x13ade8, Func Offset: 0x18
	// Line 279, Address: 0x13adf0, Func Offset: 0x20
	// Line 280, Address: 0x13adf8, Func Offset: 0x28
	// Line 281, Address: 0x13ae00, Func Offset: 0x30
	// Line 282, Address: 0x13ae08, Func Offset: 0x38
	// Line 283, Address: 0x13ae10, Func Offset: 0x40
	// Line 284, Address: 0x13ae1c, Func Offset: 0x4c
	// Func End, Address: 0x13ae24, Func Offset: 0x54
}

// 
// Start address: 0x13ae30
void clFrameInitCollisionData()
{
	// Line 287, Address: 0x13ae30, Func Offset: 0
	// Line 288, Address: 0x13ae3c, Func Offset: 0xc
	// Line 289, Address: 0x13ae64, Func Offset: 0x34
	// Line 290, Address: 0x13ae80, Func Offset: 0x50
	// Line 291, Address: 0x13ae88, Func Offset: 0x58
	// Line 292, Address: 0x13aeb0, Func Offset: 0x80
	// Line 293, Address: 0x13aed4, Func Offset: 0xa4
	// Func End, Address: 0x13aee8, Func Offset: 0xb8
}

// 
// Start address: 0x13aef0
void clCollectCharaPosition()
{
	unsigned char strbuf[256];
	float dif[4];
	int t0timer;
	int i;
	int debug_pri;
	float rplus;
	// Line 310, Address: 0x13aef0, Func Offset: 0
	// Line 329, Address: 0x13af00, Func Offset: 0x10
	// Line 331, Address: 0x13af14, Func Offset: 0x24
	// Line 333, Address: 0x13af24, Func Offset: 0x34
	// Line 335, Address: 0x13af3c, Func Offset: 0x4c
	// Line 336, Address: 0x13af5c, Func Offset: 0x6c
	// Line 337, Address: 0x13af64, Func Offset: 0x74
	// Line 339, Address: 0x13af7c, Func Offset: 0x8c
	// Line 342, Address: 0x13af9c, Func Offset: 0xac
	// Line 343, Address: 0x13afb4, Func Offset: 0xc4
	// Line 344, Address: 0x13afdc, Func Offset: 0xec
	// Line 346, Address: 0x13afe4, Func Offset: 0xf4
	// Line 348, Address: 0x13aff0, Func Offset: 0x100
	// Line 349, Address: 0x13b008, Func Offset: 0x118
	// Line 350, Address: 0x13b01c, Func Offset: 0x12c
	// Line 351, Address: 0x13b034, Func Offset: 0x144
	// Line 353, Address: 0x13b03c, Func Offset: 0x14c
	// Line 355, Address: 0x13b070, Func Offset: 0x180
	// Line 358, Address: 0x13b078, Func Offset: 0x188
	// Line 360, Address: 0x13b080, Func Offset: 0x190
	// Line 364, Address: 0x13b08c, Func Offset: 0x19c
	// Line 365, Address: 0x13b0c8, Func Offset: 0x1d8
	// Line 367, Address: 0x13b144, Func Offset: 0x254
	// Line 368, Address: 0x13b188, Func Offset: 0x298
	// Line 369, Address: 0x13b1cc, Func Offset: 0x2dc
	// Line 370, Address: 0x13b210, Func Offset: 0x320
	// Line 374, Address: 0x13b254, Func Offset: 0x364
	// Line 375, Address: 0x13b2d0, Func Offset: 0x3e0
	// Line 376, Address: 0x13b30c, Func Offset: 0x41c
	// Line 379, Address: 0x13b338, Func Offset: 0x448
	// Line 380, Address: 0x13b344, Func Offset: 0x454
	// Line 385, Address: 0x13b3e0, Func Offset: 0x4f0
	// Line 386, Address: 0x13b3f8, Func Offset: 0x508
	// Line 388, Address: 0x13b420, Func Offset: 0x530
	// Line 392, Address: 0x13b434, Func Offset: 0x544
	// Line 393, Address: 0x13b454, Func Offset: 0x564
	// Line 395, Address: 0x13b468, Func Offset: 0x578
	// Line 396, Address: 0x13b478, Func Offset: 0x588
	// Line 398, Address: 0x13b494, Func Offset: 0x5a4
	// Line 400, Address: 0x13b4a8, Func Offset: 0x5b8
	// Line 402, Address: 0x13b4bc, Func Offset: 0x5cc
	// Line 404, Address: 0x13b4cc, Func Offset: 0x5dc
	// Line 405, Address: 0x13b4d4, Func Offset: 0x5e4
	// Line 409, Address: 0x13b4dc, Func Offset: 0x5ec
	// Func End, Address: 0x13b4f4, Func Offset: 0x604
}

// 
// Start address: 0x13b500
void clSetCharaHitColumn(_CL_HITPOLY_COLUMN* col, _CL_HITPOLY_COLUMN* wcol, SubCharacter* sc, void(*func)())
{
	float dif[4];
	// Line 457, Address: 0x13b500, Func Offset: 0
	// Line 458, Address: 0x13b528, Func Offset: 0x28
	// Line 461, Address: 0x13b578, Func Offset: 0x78
	// Line 462, Address: 0x13b5d4, Func Offset: 0xd4
	// Line 467, Address: 0x13b634, Func Offset: 0x134
	// Line 468, Address: 0x13b650, Func Offset: 0x150
	// Line 469, Address: 0x13b6b8, Func Offset: 0x1b8
	// Line 470, Address: 0x13b720, Func Offset: 0x220
	// Line 474, Address: 0x13b77c, Func Offset: 0x27c
	// Line 477, Address: 0x13b7cc, Func Offset: 0x2cc
	// Line 478, Address: 0x13b834, Func Offset: 0x334
	// Line 481, Address: 0x13b904, Func Offset: 0x404
	// Line 482, Address: 0x13b960, Func Offset: 0x460
	// Line 485, Address: 0x13b968, Func Offset: 0x468
	// Line 489, Address: 0x13ba60, Func Offset: 0x560
	// Line 492, Address: 0x13bab4, Func Offset: 0x5b4
	// Line 493, Address: 0x13babc, Func Offset: 0x5bc
	// Line 495, Address: 0x13bb1c, Func Offset: 0x61c
	// Line 497, Address: 0x13bb6c, Func Offset: 0x66c
	// Line 498, Address: 0x13bbc0, Func Offset: 0x6c0
	// Line 500, Address: 0x13bc10, Func Offset: 0x710
	// Line 501, Address: 0x13bc34, Func Offset: 0x734
	// Func End, Address: 0x13bc54, Func Offset: 0x754
}

// 
// Start address: 0x13bc60
void clAddDynamicWall(_CL_HITPOLY_PLANE* pl)
{
	// Line 518, Address: 0x13bc60, Func Offset: 0
	// Line 519, Address: 0x13bc68, Func Offset: 0x8
	// Line 520, Address: 0x13bcbc, Func Offset: 0x5c
	// Line 521, Address: 0x13bce8, Func Offset: 0x88
	// Func End, Address: 0x13bcf4, Func Offset: 0x94
}

// 
// Start address: 0x13bd00
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
	// Line 538, Address: 0x13bd00, Func Offset: 0
	// Line 545, Address: 0x13bd20, Func Offset: 0x20
	// Line 547, Address: 0x13bd2c, Func Offset: 0x2c
	// Line 550, Address: 0x13bd38, Func Offset: 0x38
	// Line 552, Address: 0x13bd68, Func Offset: 0x68
	// Line 555, Address: 0x13bda8, Func Offset: 0xa8
	// Line 556, Address: 0x13bdf4, Func Offset: 0xf4
	// Line 559, Address: 0x13be3c, Func Offset: 0x13c
	// Line 560, Address: 0x13bec0, Func Offset: 0x1c0
	// Line 563, Address: 0x13bf08, Func Offset: 0x208
	// Line 564, Address: 0x13bf88, Func Offset: 0x288
	// Line 566, Address: 0x13bfd0, Func Offset: 0x2d0
	// Line 570, Address: 0x13c010, Func Offset: 0x310
	// Line 571, Address: 0x13c05c, Func Offset: 0x35c
	// Line 574, Address: 0x13c0a4, Func Offset: 0x3a4
	// Line 575, Address: 0x13c128, Func Offset: 0x428
	// Line 578, Address: 0x13c170, Func Offset: 0x470
	// Line 579, Address: 0x13c1f0, Func Offset: 0x4f0
	// Line 581, Address: 0x13c238, Func Offset: 0x538
	// Line 586, Address: 0x13c278, Func Offset: 0x578
	// Line 590, Address: 0x13c2f4, Func Offset: 0x5f4
	// Line 591, Address: 0x13c33c, Func Offset: 0x63c
	// Line 592, Address: 0x13c344, Func Offset: 0x644
	// Line 593, Address: 0x13c360, Func Offset: 0x660
	// Line 596, Address: 0x13c3e0, Func Offset: 0x6e0
	// Line 599, Address: 0x13c478, Func Offset: 0x778
	// Line 600, Address: 0x13c4b8, Func Offset: 0x7b8
	// Line 603, Address: 0x13c4c0, Func Offset: 0x7c0
	// Line 605, Address: 0x13c564, Func Offset: 0x864
	// Line 606, Address: 0x13c568, Func Offset: 0x868
	// Line 607, Address: 0x13c574, Func Offset: 0x874
	// Line 608, Address: 0x13c5b0, Func Offset: 0x8b0
	// Line 610, Address: 0x13c600, Func Offset: 0x900
	// Line 612, Address: 0x13c638, Func Offset: 0x938
	// Line 614, Address: 0x13c644, Func Offset: 0x944
	// Line 618, Address: 0x13c64c, Func Offset: 0x94c
	// Line 629, Address: 0x13c67c, Func Offset: 0x97c
	// Line 633, Address: 0x13c698, Func Offset: 0x998
	// Line 635, Address: 0x13c6a4, Func Offset: 0x9a4
	// Line 640, Address: 0x13c6c0, Func Offset: 0x9c0
	// Line 642, Address: 0x13c6dc, Func Offset: 0x9dc
	// Line 643, Address: 0x13c6e8, Func Offset: 0x9e8
	// Line 644, Address: 0x13c6f0, Func Offset: 0x9f0
	// Line 646, Address: 0x13c6fc, Func Offset: 0x9fc
	// Line 649, Address: 0x13c700, Func Offset: 0xa00
	// Line 653, Address: 0x13c738, Func Offset: 0xa38
	// Line 654, Address: 0x13c74c, Func Offset: 0xa4c
	// Line 661, Address: 0x13c760, Func Offset: 0xa60
	// Line 662, Address: 0x13c778, Func Offset: 0xa78
	// Line 663, Address: 0x13c780, Func Offset: 0xa80
	// Line 664, Address: 0x13c79c, Func Offset: 0xa9c
	// Line 667, Address: 0x13c7b8, Func Offset: 0xab8
	// Line 669, Address: 0x13c7f8, Func Offset: 0xaf8
	// Line 670, Address: 0x13c7fc, Func Offset: 0xafc
	// Line 788, Address: 0x13c800, Func Offset: 0xb00
	// Line 789, Address: 0x13c830, Func Offset: 0xb30
	// Line 791, Address: 0x13c868, Func Offset: 0xb68
	// Line 792, Address: 0x13c874, Func Offset: 0xb74
	// Line 793, Address: 0x13c8b0, Func Offset: 0xbb0
	// Line 795, Address: 0x13c900, Func Offset: 0xc00
	// Line 797, Address: 0x13c930, Func Offset: 0xc30
	// Line 800, Address: 0x13c938, Func Offset: 0xc38
	// Line 801, Address: 0x13c93c, Func Offset: 0xc3c
	// Line 802, Address: 0x13c950, Func Offset: 0xc50
	// Func End, Address: 0x13c978, Func Offset: 0xc78
}

// 
// Start address: 0x13c980
void clAddCollectVector(float* v0, float* v1)
{
	float tv[4];
	// Line 808, Address: 0x13c980, Func Offset: 0
	// Line 811, Address: 0x13c984, Func Offset: 0x4
	// Line 813, Address: 0x13c998, Func Offset: 0x18
	// Line 814, Address: 0x13c9b0, Func Offset: 0x30
	// Line 816, Address: 0x13ca0c, Func Offset: 0x8c
	// Line 818, Address: 0x13ca60, Func Offset: 0xe0
	// Line 819, Address: 0x13ca78, Func Offset: 0xf8
	// Line 821, Address: 0x13cad4, Func Offset: 0x154
	// Line 823, Address: 0x13cb28, Func Offset: 0x1a8
	// Line 824, Address: 0x13cb34, Func Offset: 0x1b4
	// Func End, Address: 0x13cb40, Func Offset: 0x1c0
}

// 
// Start address: 0x13cb40
void clCheckBg2Chara(int no)
{
	float dif;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* sw;
	_CL_HITPOLY_PLANE* wl;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	int whnum;
	// Line 849, Address: 0x13cb40, Func Offset: 0
	// Line 858, Address: 0x13cb58, Func Offset: 0x18
	// Line 860, Address: 0x13cb5c, Func Offset: 0x1c
	// Line 861, Address: 0x13cb90, Func Offset: 0x50
	// Line 864, Address: 0x13cbc8, Func Offset: 0x88
	// Line 867, Address: 0x13cc04, Func Offset: 0xc4
	// Line 868, Address: 0x13cc44, Func Offset: 0x104
	// Line 869, Address: 0x13cc48, Func Offset: 0x108
	// Line 872, Address: 0x13cc54, Func Offset: 0x114
	// Line 874, Address: 0x13cc5c, Func Offset: 0x11c
	// Line 876, Address: 0x13cc6c, Func Offset: 0x12c
	// Line 877, Address: 0x13cc8c, Func Offset: 0x14c
	// Line 878, Address: 0x13ccc8, Func Offset: 0x188
	// Line 881, Address: 0x13ccdc, Func Offset: 0x19c
	// Line 883, Address: 0x13cce8, Func Offset: 0x1a8
	// Line 885, Address: 0x13ccf8, Func Offset: 0x1b8
	// Line 886, Address: 0x13cd18, Func Offset: 0x1d8
	// Line 887, Address: 0x13cd54, Func Offset: 0x214
	// Line 890, Address: 0x13cd64, Func Offset: 0x224
	// Line 892, Address: 0x13cd70, Func Offset: 0x230
	// Line 894, Address: 0x13cd80, Func Offset: 0x240
	// Line 895, Address: 0x13cda0, Func Offset: 0x260
	// Line 896, Address: 0x13cddc, Func Offset: 0x29c
	// Line 899, Address: 0x13cdec, Func Offset: 0x2ac
	// Line 902, Address: 0x13ced0, Func Offset: 0x390
	// Line 905, Address: 0x13cf7c, Func Offset: 0x43c
	// Line 911, Address: 0x13d02c, Func Offset: 0x4ec
	// Line 915, Address: 0x13d0a4, Func Offset: 0x564
	// Line 917, Address: 0x13d0ac, Func Offset: 0x56c
	// Line 919, Address: 0x13d0f4, Func Offset: 0x5b4
	// Line 922, Address: 0x13d130, Func Offset: 0x5f0
	// Line 926, Address: 0x13d170, Func Offset: 0x630
	// Line 927, Address: 0x13d1b8, Func Offset: 0x678
	// Line 928, Address: 0x13d1cc, Func Offset: 0x68c
	// Line 930, Address: 0x13d248, Func Offset: 0x708
	// Line 933, Address: 0x13d288, Func Offset: 0x748
	// Func End, Address: 0x13d2a4, Func Offset: 0x764
}

// 
// Start address: 0x13d2b0
void clCheckHitWallCollision(_CL_HITPOLY_COLUMN* col, int* whnum, _CL_HITPOLY_PLANE* pl, int* ptr)
{
	_CL_HITRESULT cres;
	// Line 956, Address: 0x13d2b0, Func Offset: 0
	// Line 959, Address: 0x13d2d8, Func Offset: 0x28
	// Line 961, Address: 0x13d2e0, Func Offset: 0x30
	// Line 962, Address: 0x13d304, Func Offset: 0x54
	// Line 964, Address: 0x13d310, Func Offset: 0x60
	// Line 967, Address: 0x13d34c, Func Offset: 0x9c
	// Line 968, Address: 0x13d370, Func Offset: 0xc0
	// Line 969, Address: 0x13d394, Func Offset: 0xe4
	// Line 970, Address: 0x13d3a0, Func Offset: 0xf0
	// Line 972, Address: 0x13d3cc, Func Offset: 0x11c
	// Line 974, Address: 0x13d3d8, Func Offset: 0x128
	// Line 975, Address: 0x13d3f0, Func Offset: 0x140
	// Func End, Address: 0x13d410, Func Offset: 0x160
}

// 
// Start address: 0x13d410
void clCheckHitDynamicWallCollision(_CL_HITPOLY_COLUMN* col, int* whnum)
{
	int ac;
	_CL_HITRESULT cres;
	int j;
	int i;
	// Line 993, Address: 0x13d410, Func Offset: 0
	// Line 998, Address: 0x13d434, Func Offset: 0x24
	// Line 1000, Address: 0x13d454, Func Offset: 0x44
	// Line 1002, Address: 0x13d460, Func Offset: 0x50
	// Line 1004, Address: 0x13d46c, Func Offset: 0x5c
	// Line 1005, Address: 0x13d4b0, Func Offset: 0xa0
	// Line 1007, Address: 0x13d4bc, Func Offset: 0xac
	// Line 1010, Address: 0x13d4f4, Func Offset: 0xe4
	// Line 1011, Address: 0x13d518, Func Offset: 0x108
	// Line 1012, Address: 0x13d53c, Func Offset: 0x12c
	// Line 1013, Address: 0x13d548, Func Offset: 0x138
	// Line 1015, Address: 0x13d574, Func Offset: 0x164
	// Line 1017, Address: 0x13d580, Func Offset: 0x170
	// Line 1018, Address: 0x13d5cc, Func Offset: 0x1bc
	// Line 1019, Address: 0x13d5f8, Func Offset: 0x1e8
	// Func End, Address: 0x13d61c, Func Offset: 0x20c
}

// 
// Start address: 0x13d620
int clMakeWallHitCollectVector(SubCharacter* sc, float* wcv, float mang, int* flg, int num)
{
	float ang1;
	float ang0;
	int j;
	int i;
	// Line 1042, Address: 0x13d620, Func Offset: 0
	// Line 1046, Address: 0x13d65c, Func Offset: 0x3c
	// Line 1049, Address: 0x13d678, Func Offset: 0x58
	// Line 1051, Address: 0x13d690, Func Offset: 0x70
	// Line 1057, Address: 0x13d698, Func Offset: 0x78
	// Line 1059, Address: 0x13d6a4, Func Offset: 0x84
	// Line 1062, Address: 0x13d6cc, Func Offset: 0xac
	// Line 1063, Address: 0x13d70c, Func Offset: 0xec
	// Line 1064, Address: 0x13d764, Func Offset: 0x144
	// Line 1066, Address: 0x13d784, Func Offset: 0x164
	// Line 1068, Address: 0x13d7e0, Func Offset: 0x1c0
	// Line 1069, Address: 0x13d800, Func Offset: 0x1e0
	// Line 1070, Address: 0x13d810, Func Offset: 0x1f0
	// Line 1071, Address: 0x13d850, Func Offset: 0x230
	// Line 1073, Address: 0x13d870, Func Offset: 0x250
	// Line 1078, Address: 0x13d884, Func Offset: 0x264
	// Line 1080, Address: 0x13d890, Func Offset: 0x270
	// Line 1083, Address: 0x13d8b8, Func Offset: 0x298
	// Line 1085, Address: 0x13d8c4, Func Offset: 0x2a4
	// Line 1088, Address: 0x13d8cc, Func Offset: 0x2ac
	// Line 1091, Address: 0x13d8f4, Func Offset: 0x2d4
	// Line 1092, Address: 0x13d930, Func Offset: 0x310
	// Line 1093, Address: 0x13d93c, Func Offset: 0x31c
	// Line 1096, Address: 0x13d97c, Func Offset: 0x35c
	// Line 1097, Address: 0x13d99c, Func Offset: 0x37c
	// Line 1099, Address: 0x13d9a4, Func Offset: 0x384
	// Line 1100, Address: 0x13d9b8, Func Offset: 0x398
	// Line 1104, Address: 0x13d9cc, Func Offset: 0x3ac
	// Line 1107, Address: 0x13d9ec, Func Offset: 0x3cc
	// Line 1109, Address: 0x13d9f8, Func Offset: 0x3d8
	// Line 1112, Address: 0x13da20, Func Offset: 0x400
	// Line 1114, Address: 0x13da2c, Func Offset: 0x40c
	// Line 1117, Address: 0x13da54, Func Offset: 0x434
	// Line 1119, Address: 0x13dabc, Func Offset: 0x49c
	// Line 1121, Address: 0x13dac0, Func Offset: 0x4a0
	// Line 1125, Address: 0x13db28, Func Offset: 0x508
	// Line 1126, Address: 0x13db6c, Func Offset: 0x54c
	// Line 1127, Address: 0x13dbb0, Func Offset: 0x590
	// Line 1128, Address: 0x13dbb4, Func Offset: 0x594
	// Line 1129, Address: 0x13dbc4, Func Offset: 0x5a4
	// Line 1132, Address: 0x13dc08, Func Offset: 0x5e8
	// Line 1133, Address: 0x13dc28, Func Offset: 0x608
	// Line 1135, Address: 0x13dc48, Func Offset: 0x628
	// Line 1136, Address: 0x13dc5c, Func Offset: 0x63c
	// Line 1140, Address: 0x13dc78, Func Offset: 0x658
	// Line 1142, Address: 0x13dc84, Func Offset: 0x664
	// Line 1143, Address: 0x13dca8, Func Offset: 0x688
	// Line 1144, Address: 0x13dcd8, Func Offset: 0x6b8
	// Line 1145, Address: 0x13dcec, Func Offset: 0x6cc
	// Line 1147, Address: 0x13dcf0, Func Offset: 0x6d0
	// Line 1148, Address: 0x13dcf4, Func Offset: 0x6d4
	// Func End, Address: 0x13dd24, Func Offset: 0x704
}

// 
// Start address: 0x13dd30
void clAddWallCollectVector(float* v0, float* v1, int* flg)
{
	float tv[4];
	// Line 1165, Address: 0x13dd30, Func Offset: 0
	// Line 1168, Address: 0x13dd34, Func Offset: 0x4
	// Line 1169, Address: 0x13dd40, Func Offset: 0x10
	// Line 1172, Address: 0x13dd50, Func Offset: 0x20
	// Line 1174, Address: 0x13dd64, Func Offset: 0x34
	// Line 1175, Address: 0x13dd7c, Func Offset: 0x4c
	// Line 1177, Address: 0x13ddd8, Func Offset: 0xa8
	// Line 1179, Address: 0x13de2c, Func Offset: 0xfc
	// Line 1180, Address: 0x13de44, Func Offset: 0x114
	// Line 1182, Address: 0x13dea0, Func Offset: 0x170
	// Line 1184, Address: 0x13def4, Func Offset: 0x1c4
	// Line 1187, Address: 0x13df00, Func Offset: 0x1d0
	// Line 1188, Address: 0x13df0c, Func Offset: 0x1dc
	// Func End, Address: 0x13df18, Func Offset: 0x1e8
}

// 
// Start address: 0x13df20
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
	// Line 1207, Address: 0x13df20, Func Offset: 0
	// Line 1213, Address: 0x13df40, Func Offset: 0x20
	// Line 1216, Address: 0x13df44, Func Offset: 0x24
	// Line 1217, Address: 0x13df60, Func Offset: 0x40
	// Line 1218, Address: 0x13df70, Func Offset: 0x50
	// Line 1221, Address: 0x13dfb4, Func Offset: 0x94
	// Line 1224, Address: 0x13dfcc, Func Offset: 0xac
	// Line 1230, Address: 0x13dfd8, Func Offset: 0xb8
	// Line 1231, Address: 0x13dfe8, Func Offset: 0xc8
	// Line 1234, Address: 0x13dff8, Func Offset: 0xd8
	// Line 1235, Address: 0x13e014, Func Offset: 0xf4
	// Line 1236, Address: 0x13e020, Func Offset: 0x100
	// Line 1237, Address: 0x13e02c, Func Offset: 0x10c
	// Line 1239, Address: 0x13e058, Func Offset: 0x138
	// Line 1240, Address: 0x13e074, Func Offset: 0x154
	// Line 1241, Address: 0x13e090, Func Offset: 0x170
	// Line 1242, Address: 0x13e09c, Func Offset: 0x17c
	// Line 1243, Address: 0x13e0a8, Func Offset: 0x188
	// Line 1245, Address: 0x13e0d4, Func Offset: 0x1b4
	// Line 1255, Address: 0x13e134, Func Offset: 0x214
	// Line 1258, Address: 0x13e140, Func Offset: 0x220
	// Line 1259, Address: 0x13e144, Func Offset: 0x224
	// Line 1260, Address: 0x13e148, Func Offset: 0x228
	// Line 1261, Address: 0x13e14c, Func Offset: 0x22c
	// Line 1262, Address: 0x13e150, Func Offset: 0x230
	// Line 1263, Address: 0x13e154, Func Offset: 0x234
	// Line 1264, Address: 0x13e158, Func Offset: 0x238
	// Line 1266, Address: 0x13e15c, Func Offset: 0x23c
	// Line 1267, Address: 0x13e160, Func Offset: 0x240
	// Line 1268, Address: 0x13e164, Func Offset: 0x244
	// Line 1269, Address: 0x13e168, Func Offset: 0x248
	// Line 1270, Address: 0x13e16c, Func Offset: 0x24c
	// Line 1272, Address: 0x13e170, Func Offset: 0x250
	// Line 1273, Address: 0x13e174, Func Offset: 0x254
	// Line 1274, Address: 0x13e178, Func Offset: 0x258
	// Line 1275, Address: 0x13e17c, Func Offset: 0x25c
	// Line 1277, Address: 0x13e184, Func Offset: 0x264
	// Line 1278, Address: 0x13e188, Func Offset: 0x268
	// Line 1279, Address: 0x13e18c, Func Offset: 0x26c
	// Line 1283, Address: 0x13e194, Func Offset: 0x274
	// Line 1284, Address: 0x13e198, Func Offset: 0x278
	// Line 1285, Address: 0x13e19c, Func Offset: 0x27c
	// Line 1287, Address: 0x13e1a0, Func Offset: 0x280
	// Line 1288, Address: 0x13e1a4, Func Offset: 0x284
	// Line 1289, Address: 0x13e1a8, Func Offset: 0x288
	// Line 1290, Address: 0x13e1ac, Func Offset: 0x28c
	// Line 1291, Address: 0x13e1b0, Func Offset: 0x290
	// Line 1292, Address: 0x13e1b4, Func Offset: 0x294
	// Line 1293, Address: 0x13e1b8, Func Offset: 0x298
	// Line 1294, Address: 0x13e1bc, Func Offset: 0x29c
	// Line 1295, Address: 0x13e1c0, Func Offset: 0x2a0
	// Line 1296, Address: 0x13e1c4, Func Offset: 0x2a4
	// Line 1297, Address: 0x13e1c8, Func Offset: 0x2a8
	// Line 1298, Address: 0x13e1cc, Func Offset: 0x2ac
	// Line 1332, Address: 0x13e1d0, Func Offset: 0x2b0
	// Line 1333, Address: 0x13e1d8, Func Offset: 0x2b8
	// Line 1335, Address: 0x13e1e0, Func Offset: 0x2c0
	// Line 1336, Address: 0x13e1e8, Func Offset: 0x2c8
	// Line 1337, Address: 0x13e1ec, Func Offset: 0x2cc
	// Line 1339, Address: 0x13e1fc, Func Offset: 0x2dc
	// Func End, Address: 0x13e218, Func Offset: 0x2f8
}

// 
// Start address: 0x13e220
void clCheckColumn2ColumnHit(_CL_HITPOLY_COLUMN* col, int* whnum, _CL_HITPOLY_COLUMN* cl, int* ptr)
{
	int hitchk;
	_CL_HITRESULT cres;
	// Line 1361, Address: 0x13e220, Func Offset: 0
	// Line 1365, Address: 0x13e248, Func Offset: 0x28
	// Line 1367, Address: 0x13e250, Func Offset: 0x30
	// Line 1368, Address: 0x13e278, Func Offset: 0x58
	// Line 1370, Address: 0x13e284, Func Offset: 0x64
	// Line 1373, Address: 0x13e2bc, Func Offset: 0x9c
	// Line 1374, Address: 0x13e2e0, Func Offset: 0xc0
	// Line 1375, Address: 0x13e2ec, Func Offset: 0xcc
	// Line 1376, Address: 0x13e318, Func Offset: 0xf8
	// Line 1377, Address: 0x13e324, Func Offset: 0x104
	// Line 1378, Address: 0x13e328, Func Offset: 0x108
	// Line 1379, Address: 0x13e340, Func Offset: 0x120
	// Func End, Address: 0x13e360, Func Offset: 0x140
}

// 
// Start address: 0x13e360
void clCollectCharaHeightNormal(SubCharacter* sc)
{
	_CL_VHIT_RESULT res;
	float* matt;
	float* pos;
	float ed[4];
	float st[4];
	// Line 1396, Address: 0x13e360, Func Offset: 0
	// Line 1398, Address: 0x13e378, Func Offset: 0x18
	// Line 1399, Address: 0x13e37c, Func Offset: 0x1c
	// Line 1402, Address: 0x13e380, Func Offset: 0x20
	// Line 1403, Address: 0x13e388, Func Offset: 0x28
	// Line 1404, Address: 0x13e3a0, Func Offset: 0x40
	// Line 1405, Address: 0x13e3a8, Func Offset: 0x48
	// Line 1406, Address: 0x13e3b8, Func Offset: 0x58
	// Line 1407, Address: 0x13e3c0, Func Offset: 0x60
	// Line 1408, Address: 0x13e3dc, Func Offset: 0x7c
	// Line 1409, Address: 0x13e3e4, Func Offset: 0x84
	// Line 1411, Address: 0x13e3f4, Func Offset: 0x94
	// Line 1412, Address: 0x13e40c, Func Offset: 0xac
	// Line 1414, Address: 0x13e41c, Func Offset: 0xbc
	// Line 1415, Address: 0x13e424, Func Offset: 0xc4
	// Line 1417, Address: 0x13e42c, Func Offset: 0xcc
	// Line 1418, Address: 0x13e43c, Func Offset: 0xdc
	// Line 1420, Address: 0x13e444, Func Offset: 0xe4
	// Func End, Address: 0x13e460, Func Offset: 0x100
}

// 
// Start address: 0x13e460
void clBattleAddQue(_CL_BATTLE_QUE* que)
{
	// Line 1440, Address: 0x13e460, Func Offset: 0
	// Line 1441, Address: 0x13e46c, Func Offset: 0xc
	// Line 1444, Address: 0x13e4a8, Func Offset: 0x48
	// Line 1445, Address: 0x13e4d8, Func Offset: 0x78
	// Line 1446, Address: 0x13e4ec, Func Offset: 0x8c
	// Func End, Address: 0x13e4fc, Func Offset: 0x9c
}

// 
// Start address: 0x13e500
_CL_BATTLE_RESULT* clBattleGetResult(unsigned int id, _CL_BATTLE_RESULT* before)
{
	int i;
	// Line 1466, Address: 0x13e500, Func Offset: 0
	// Line 1470, Address: 0x13e510, Func Offset: 0x10
	// Line 1471, Address: 0x13e51c, Func Offset: 0x1c
	// Line 1473, Address: 0x13e528, Func Offset: 0x28
	// Line 1475, Address: 0x13e538, Func Offset: 0x38
	// Line 1477, Address: 0x13e540, Func Offset: 0x40
	// Line 1479, Address: 0x13e57c, Func Offset: 0x7c
	// Line 1480, Address: 0x13e594, Func Offset: 0x94
	// Line 1482, Address: 0x13e5ac, Func Offset: 0xac
	// Line 1485, Address: 0x13e5c4, Func Offset: 0xc4
	// Line 1486, Address: 0x13e5cc, Func Offset: 0xcc
	// Func End, Address: 0x13e5dc, Func Offset: 0xdc
}

// 
// Start address: 0x13e5e0
void clBattleCheckExec()
{
	float dirc[4];
	_CL_VHIT_RESULT vres;
	int i;
	// Line 1503, Address: 0x13e5e0, Func Offset: 0
	// Line 1508, Address: 0x13e5ec, Func Offset: 0xc
	// Line 1510, Address: 0x13e5f4, Func Offset: 0x14
	// Line 1512, Address: 0x13e600, Func Offset: 0x20
	// Line 1515, Address: 0x13e648, Func Offset: 0x68
	// Line 1519, Address: 0x13e6e0, Func Offset: 0x100
	// Line 1521, Address: 0x13e6ec, Func Offset: 0x10c
	// Line 1522, Address: 0x13e738, Func Offset: 0x158
	// Line 1524, Address: 0x13e760, Func Offset: 0x180
	// Line 1528, Address: 0x13e768, Func Offset: 0x188
	// Line 1531, Address: 0x13e7c8, Func Offset: 0x1e8
	// Line 1533, Address: 0x13e7d4, Func Offset: 0x1f4
	// Line 1534, Address: 0x13e820, Func Offset: 0x240
	// Line 1536, Address: 0x13e848, Func Offset: 0x268
	// Line 1540, Address: 0x13e850, Func Offset: 0x270
	// Line 1545, Address: 0x13e8b0, Func Offset: 0x2d0
	// Line 1547, Address: 0x13e8dc, Func Offset: 0x2fc
	// Line 1549, Address: 0x13e8e0, Func Offset: 0x300
	// Line 1551, Address: 0x13e8ec, Func Offset: 0x30c
	// Line 1552, Address: 0x13e938, Func Offset: 0x358
	// Line 1554, Address: 0x13e960, Func Offset: 0x380
	// Line 1557, Address: 0x13e968, Func Offset: 0x388
	// Line 1560, Address: 0x13e9fc, Func Offset: 0x41c
	// Line 1561, Address: 0x13ea48, Func Offset: 0x468
	// Line 1562, Address: 0x13ea6c, Func Offset: 0x48c
	// Line 1565, Address: 0x13ea74, Func Offset: 0x494
	// Line 1567, Address: 0x13ead0, Func Offset: 0x4f0
	// Line 1568, Address: 0x13eb1c, Func Offset: 0x53c
	// Line 1569, Address: 0x13eb40, Func Offset: 0x560
	// Line 1580, Address: 0x13eb48, Func Offset: 0x568
	// Line 1583, Address: 0x13eb74, Func Offset: 0x594
	// Line 1586, Address: 0x13eb8c, Func Offset: 0x5ac
	// Line 1587, Address: 0x13eb94, Func Offset: 0x5b4
	// Func End, Address: 0x13eba8, Func Offset: 0x5c8
}

// 
// Start address: 0x13ebb0
void clModifiedBattleData()
{
	int j;
	int i;
	// Line 1605, Address: 0x13ebb0, Func Offset: 0
	// Line 1608, Address: 0x13ebbc, Func Offset: 0xc
	// Line 1610, Address: 0x13ebc8, Func Offset: 0x18
	// Line 1614, Address: 0x13ebe4, Func Offset: 0x34
	// Line 1617, Address: 0x13ec28, Func Offset: 0x78
	// Line 1619, Address: 0x13ec34, Func Offset: 0x84
	// Line 1621, Address: 0x13ec50, Func Offset: 0xa0
	// Line 1624, Address: 0x13ec58, Func Offset: 0xa8
	// Line 1627, Address: 0x13eca8, Func Offset: 0xf8
	// Line 1628, Address: 0x13ecc0, Func Offset: 0x110
	// Line 1630, Address: 0x13ecc8, Func Offset: 0x118
	// Line 1632, Address: 0x13ece8, Func Offset: 0x138
	// Line 1634, Address: 0x13ed08, Func Offset: 0x158
	// Line 1636, Address: 0x13ed14, Func Offset: 0x164
	// Line 1638, Address: 0x13ed30, Func Offset: 0x180
	// Line 1641, Address: 0x13ed38, Func Offset: 0x188
	// Line 1644, Address: 0x13ed88, Func Offset: 0x1d8
	// Line 1645, Address: 0x13eda0, Func Offset: 0x1f0
	// Line 1646, Address: 0x13edbc, Func Offset: 0x20c
	// Line 1648, Address: 0x13edc0, Func Offset: 0x210
	// Line 1649, Address: 0x13eddc, Func Offset: 0x22c
	// Func End, Address: 0x13edf0, Func Offset: 0x240
}

// 
// Start address: 0x13edf0
void clSetOneBattleResult(_CL_BATTLE_QUE* que, _CL_VHIT_RESULT* vres, float* vec)
{
	// Line 1670, Address: 0x13edf0, Func Offset: 0
	// Line 1671, Address: 0x13edf8, Func Offset: 0x8
	// Line 1673, Address: 0x13ee34, Func Offset: 0x44
	// Line 1677, Address: 0x13ee64, Func Offset: 0x74
	// Line 1678, Address: 0x13ee84, Func Offset: 0x94
	// Line 1679, Address: 0x13eea4, Func Offset: 0xb4
	// Line 1680, Address: 0x13eec4, Func Offset: 0xd4
	// Line 1681, Address: 0x13eeec, Func Offset: 0xfc
	// Line 1682, Address: 0x13ef0c, Func Offset: 0x11c
	// Line 1683, Address: 0x13ef20, Func Offset: 0x130
	// Line 1687, Address: 0x13ef28, Func Offset: 0x138
	// Line 1688, Address: 0x13ef48, Func Offset: 0x158
	// Line 1689, Address: 0x13ef68, Func Offset: 0x178
	// Line 1690, Address: 0x13ef88, Func Offset: 0x198
	// Line 1691, Address: 0x13efb0, Func Offset: 0x1c0
	// Line 1692, Address: 0x13efd0, Func Offset: 0x1e0
	// Line 1693, Address: 0x13efe4, Func Offset: 0x1f4
	// Line 1697, Address: 0x13efec, Func Offset: 0x1fc
	// Line 1698, Address: 0x13f00c, Func Offset: 0x21c
	// Line 1699, Address: 0x13f02c, Func Offset: 0x23c
	// Line 1700, Address: 0x13f04c, Func Offset: 0x25c
	// Line 1701, Address: 0x13f074, Func Offset: 0x284
	// Line 1702, Address: 0x13f094, Func Offset: 0x2a4
	// Line 1703, Address: 0x13f0b4, Func Offset: 0x2c4
	// Line 1704, Address: 0x13f0d4, Func Offset: 0x2e4
	// Line 1706, Address: 0x13f0e8, Func Offset: 0x2f8
	// Line 1707, Address: 0x13f108, Func Offset: 0x318
	// Line 1708, Address: 0x13f128, Func Offset: 0x338
	// Line 1709, Address: 0x13f148, Func Offset: 0x358
	// Line 1710, Address: 0x13f170, Func Offset: 0x380
	// Line 1711, Address: 0x13f194, Func Offset: 0x3a4
	// Line 1712, Address: 0x13f1b4, Func Offset: 0x3c4
	// Line 1713, Address: 0x13f1d4, Func Offset: 0x3e4
	// Line 1714, Address: 0x13f1f4, Func Offset: 0x404
	// Line 1717, Address: 0x13f208, Func Offset: 0x418
	// Func End, Address: 0x13f218, Func Offset: 0x428
}

// 
// Start address: 0x13f220
void clSetThrustBattleResult(_CL_BATTLE_QUE* que, float* vec)
{
	int j;
	int i;
	// Line 1740, Address: 0x13f220, Func Offset: 0
	// Line 1742, Address: 0x13f22c, Func Offset: 0xc
	// Line 1746, Address: 0x13f26c, Func Offset: 0x4c
	// Line 1747, Address: 0x13f28c, Func Offset: 0x6c
	// Line 1748, Address: 0x13f2ac, Func Offset: 0x8c
	// Line 1749, Address: 0x13f2cc, Func Offset: 0xac
	// Line 1750, Address: 0x13f304, Func Offset: 0xe4
	// Line 1751, Address: 0x13f334, Func Offset: 0x114
	// Line 1752, Address: 0x13f348, Func Offset: 0x128
	// Line 1756, Address: 0x13f350, Func Offset: 0x130
	// Line 1757, Address: 0x13f370, Func Offset: 0x150
	// Line 1758, Address: 0x13f390, Func Offset: 0x170
	// Line 1759, Address: 0x13f3b0, Func Offset: 0x190
	// Line 1760, Address: 0x13f3e8, Func Offset: 0x1c8
	// Line 1761, Address: 0x13f418, Func Offset: 0x1f8
	// Line 1762, Address: 0x13f42c, Func Offset: 0x20c
	// Line 1766, Address: 0x13f434, Func Offset: 0x214
	// Line 1768, Address: 0x13f440, Func Offset: 0x220
	// Line 1770, Address: 0x13f470, Func Offset: 0x250
	// Line 1771, Address: 0x13f474, Func Offset: 0x254
	// Line 1773, Address: 0x13f47c, Func Offset: 0x25c
	// Line 1774, Address: 0x13f490, Func Offset: 0x270
	// Line 1778, Address: 0x13f49c, Func Offset: 0x27c
	// Line 1779, Address: 0x13f4bc, Func Offset: 0x29c
	// Line 1780, Address: 0x13f4dc, Func Offset: 0x2bc
	// Line 1781, Address: 0x13f4fc, Func Offset: 0x2dc
	// Line 1782, Address: 0x13f534, Func Offset: 0x314
	// Line 1783, Address: 0x13f564, Func Offset: 0x344
	// Line 1784, Address: 0x13f584, Func Offset: 0x364
	// Line 1785, Address: 0x13f5a4, Func Offset: 0x384
	// Line 1787, Address: 0x13f5b8, Func Offset: 0x398
	// Line 1788, Address: 0x13f5d8, Func Offset: 0x3b8
	// Line 1789, Address: 0x13f608, Func Offset: 0x3e8
	// Line 1790, Address: 0x13f628, Func Offset: 0x408
	// Line 1791, Address: 0x13f660, Func Offset: 0x440
	// Line 1792, Address: 0x13f684, Func Offset: 0x464
	// Line 1793, Address: 0x13f6a4, Func Offset: 0x484
	// Line 1794, Address: 0x13f6c4, Func Offset: 0x4a4
	// Line 1795, Address: 0x13f6e4, Func Offset: 0x4c4
	// Line 1798, Address: 0x13f6f8, Func Offset: 0x4d8
	// Line 1799, Address: 0x13f714, Func Offset: 0x4f4
	// Func End, Address: 0x13f71c, Func Offset: 0x4fc
}

// 
// Start address: 0x13f720
void clCheckHitSwordWeapon(_CL_VHIT_RESULT* res, unsigned int id, float* svs, float* sve, float* evs, float* eve)
{
	float tmp[4];
	float ed[4];
	float st[4];
	int i;
	// Line 1826, Address: 0x13f720, Func Offset: 0
	// Line 1832, Address: 0x13f75c, Func Offset: 0x3c
	// Line 1834, Address: 0x13f768, Func Offset: 0x48
	// Line 1835, Address: 0x13f794, Func Offset: 0x74
	// Line 1836, Address: 0x13f7c8, Func Offset: 0xa8
	// Line 1837, Address: 0x13f7e4, Func Offset: 0xc4
	// Line 1838, Address: 0x13f810, Func Offset: 0xf0
	// Line 1839, Address: 0x13f844, Func Offset: 0x124
	// Line 1841, Address: 0x13f860, Func Offset: 0x140
	// Line 1842, Address: 0x13f878, Func Offset: 0x158
	// Line 1844, Address: 0x13f884, Func Offset: 0x164
	// Line 1845, Address: 0x13f898, Func Offset: 0x178
	// Func End, Address: 0x13f8c4, Func Offset: 0x1a4
}

// 
// Start address: 0x13f8d0
void clCheckHitGunWeapon(_CL_VHIT_RESULT* res, unsigned int id, float* st, float* ed)
{
	// Line 1867, Address: 0x13f8d0, Func Offset: 0
	// Line 1869, Address: 0x13f8e8, Func Offset: 0x18
	// Line 1870, Address: 0x13f900, Func Offset: 0x30
	// Func End, Address: 0x13f910, Func Offset: 0x40
}

// 
// Start address: 0x13f910
void clCheckHitSwordVector(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 1923, Address: 0x13f910, Func Offset: 0
	// Line 1932, Address: 0x13f940, Func Offset: 0x30
	// Line 1933, Address: 0x13f944, Func Offset: 0x34
	// Line 1934, Address: 0x13f948, Func Offset: 0x38
	// Line 1936, Address: 0x13f94c, Func Offset: 0x3c
	// Line 1937, Address: 0x13f950, Func Offset: 0x40
	// Line 1938, Address: 0x13f954, Func Offset: 0x44
	// Line 1939, Address: 0x13f958, Func Offset: 0x48
	// Line 1941, Address: 0x13f95c, Func Offset: 0x4c
	// Line 1942, Address: 0x13f960, Func Offset: 0x50
	// Line 1943, Address: 0x13f968, Func Offset: 0x58
	// Line 1948, Address: 0x13f96c, Func Offset: 0x5c
	// Line 1951, Address: 0x13f970, Func Offset: 0x60
	// Line 1952, Address: 0x13f984, Func Offset: 0x74
	// Line 1955, Address: 0x13f988, Func Offset: 0x78
	// Line 1957, Address: 0x13f9a0, Func Offset: 0x90
	// Line 1960, Address: 0x13f9ac, Func Offset: 0x9c
	// Line 1962, Address: 0x13f9b4, Func Offset: 0xa4
	// Line 1964, Address: 0x13f9c4, Func Offset: 0xb4
	// Line 1965, Address: 0x13f9e4, Func Offset: 0xd4
	// Line 1966, Address: 0x13f9fc, Func Offset: 0xec
	// Line 1969, Address: 0x13fa0c, Func Offset: 0xfc
	// Line 1971, Address: 0x13fa18, Func Offset: 0x108
	// Line 1973, Address: 0x13fa28, Func Offset: 0x118
	// Line 1974, Address: 0x13fa48, Func Offset: 0x138
	// Line 1975, Address: 0x13fa60, Func Offset: 0x150
	// Line 1978, Address: 0x13fa74, Func Offset: 0x164
	// Line 1980, Address: 0x13fa80, Func Offset: 0x170
	// Line 1982, Address: 0x13fa90, Func Offset: 0x180
	// Line 1983, Address: 0x13fab0, Func Offset: 0x1a0
	// Line 1984, Address: 0x13fac8, Func Offset: 0x1b8
	// Line 1987, Address: 0x13fadc, Func Offset: 0x1cc
	// Line 1989, Address: 0x13fae8, Func Offset: 0x1d8
	// Line 1991, Address: 0x13faf8, Func Offset: 0x1e8
	// Line 1992, Address: 0x13fb18, Func Offset: 0x208
	// Line 1993, Address: 0x13fb30, Func Offset: 0x220
	// Line 1994, Address: 0x13fb44, Func Offset: 0x234
	// Line 1997, Address: 0x13fb48, Func Offset: 0x238
	// Line 1998, Address: 0x13fb64, Func Offset: 0x254
	// Func End, Address: 0x13fb8c, Func Offset: 0x27c
}

// 
// Start address: 0x13fb90
void clCheckHitSwordVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr)
{
	float dist;
	_CL_HITRESULT cres;
	int ret;
	// Line 2026, Address: 0x13fb90, Func Offset: 0
	// Line 2031, Address: 0x13fbc8, Func Offset: 0x38
	// Line 2033, Address: 0x13fbd0, Func Offset: 0x40
	// Line 2036, Address: 0x13fbf4, Func Offset: 0x64
	// Line 2037, Address: 0x13fc18, Func Offset: 0x88
	// Line 2041, Address: 0x13fc7c, Func Offset: 0xec
	// Line 2046, Address: 0x13fcf0, Func Offset: 0x160
	// Line 2049, Address: 0x13fcf8, Func Offset: 0x168
	// Line 2050, Address: 0x13fd00, Func Offset: 0x170
	// Line 2051, Address: 0x13fd04, Func Offset: 0x174
	// Line 2053, Address: 0x13fd08, Func Offset: 0x178
	// Line 2054, Address: 0x13fd0c, Func Offset: 0x17c
	// Line 2055, Address: 0x13fd10, Func Offset: 0x180
	// Line 2056, Address: 0x13fd14, Func Offset: 0x184
	// Line 2058, Address: 0x13fd18, Func Offset: 0x188
	// Line 2059, Address: 0x13fd1c, Func Offset: 0x18c
	// Line 2060, Address: 0x13fd24, Func Offset: 0x194
	// Line 2065, Address: 0x13fd28, Func Offset: 0x198
	// Line 2068, Address: 0x13fd40, Func Offset: 0x1b0
	// Line 2069, Address: 0x13fd48, Func Offset: 0x1b8
	// Line 2070, Address: 0x13fd50, Func Offset: 0x1c0
	// Line 2071, Address: 0x13fd60, Func Offset: 0x1d0
	// Line 2072, Address: 0x13fd80, Func Offset: 0x1f0
	// Line 2075, Address: 0x13fd98, Func Offset: 0x208
	// Line 2076, Address: 0x13fdb0, Func Offset: 0x220
	// Func End, Address: 0x13fdd8, Func Offset: 0x248
}

// 
// Start address: 0x13fde0
void clCheckHitSwordVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 2100, Address: 0x13fde0, Func Offset: 0
	// Line 2108, Address: 0x13fe14, Func Offset: 0x34
	// Line 2110, Address: 0x13fe34, Func Offset: 0x54
	// Line 2112, Address: 0x13fe40, Func Offset: 0x60
	// Line 2114, Address: 0x13fe4c, Func Offset: 0x6c
	// Line 2117, Address: 0x13fe90, Func Offset: 0xb0
	// Line 2118, Address: 0x13fed4, Func Offset: 0xf4
	// Line 2122, Address: 0x13ff98, Func Offset: 0x1b8
	// Line 2127, Address: 0x140090, Func Offset: 0x2b0
	// Line 2130, Address: 0x140098, Func Offset: 0x2b8
	// Line 2131, Address: 0x1400a0, Func Offset: 0x2c0
	// Line 2132, Address: 0x1400a4, Func Offset: 0x2c4
	// Line 2134, Address: 0x1400a8, Func Offset: 0x2c8
	// Line 2135, Address: 0x1400ac, Func Offset: 0x2cc
	// Line 2136, Address: 0x1400b0, Func Offset: 0x2d0
	// Line 2137, Address: 0x1400b4, Func Offset: 0x2d4
	// Line 2139, Address: 0x1400b8, Func Offset: 0x2d8
	// Line 2140, Address: 0x1400bc, Func Offset: 0x2dc
	// Line 2141, Address: 0x1400c4, Func Offset: 0x2e4
	// Line 2146, Address: 0x1400c8, Func Offset: 0x2e8
	// Line 2149, Address: 0x1400e0, Func Offset: 0x300
	// Line 2150, Address: 0x1400e8, Func Offset: 0x308
	// Line 2151, Address: 0x1400f0, Func Offset: 0x310
	// Line 2152, Address: 0x140100, Func Offset: 0x320
	// Line 2153, Address: 0x140140, Func Offset: 0x360
	// Line 2156, Address: 0x140178, Func Offset: 0x398
	// Line 2157, Address: 0x1401c4, Func Offset: 0x3e4
	// Line 2159, Address: 0x1401f0, Func Offset: 0x410
	// Func End, Address: 0x14021c, Func Offset: 0x43c
}

// 
// Start address: 0x140220
void clCheckHitSwordWeaponThrust(unsigned int id, float* svs, float* sve, float* evs, float* eve)
{
	float tmp[4];
	float ed[4];
	float st[4];
	int i;
	// Line 2182, Address: 0x140220, Func Offset: 0
	// Line 2187, Address: 0x140254, Func Offset: 0x34
	// Line 2190, Address: 0x14025c, Func Offset: 0x3c
	// Line 2192, Address: 0x140268, Func Offset: 0x48
	// Line 2193, Address: 0x140294, Func Offset: 0x74
	// Line 2194, Address: 0x1402c8, Func Offset: 0xa8
	// Line 2195, Address: 0x1402e4, Func Offset: 0xc4
	// Line 2196, Address: 0x140310, Func Offset: 0xf0
	// Line 2197, Address: 0x140344, Func Offset: 0x124
	// Line 2199, Address: 0x140360, Func Offset: 0x140
	// Line 2201, Address: 0x14037c, Func Offset: 0x15c
	// Line 2202, Address: 0x140390, Func Offset: 0x170
	// Func End, Address: 0x1403b8, Func Offset: 0x198
}

// 
// Start address: 0x1403c0
int clCheckHitThrustSwordVector(unsigned int id, float* sp, float* ep)
{
	int whflg;
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 2221, Address: 0x1403c0, Func Offset: 0
	// Line 2228, Address: 0x1403ec, Func Offset: 0x2c
	// Line 2231, Address: 0x1403f0, Func Offset: 0x30
	// Line 2232, Address: 0x1403f4, Func Offset: 0x34
	// Line 2233, Address: 0x1403f8, Func Offset: 0x38
	// Line 2235, Address: 0x1403fc, Func Offset: 0x3c
	// Line 2236, Address: 0x140400, Func Offset: 0x40
	// Line 2237, Address: 0x140404, Func Offset: 0x44
	// Line 2238, Address: 0x140408, Func Offset: 0x48
	// Line 2240, Address: 0x14040c, Func Offset: 0x4c
	// Line 2241, Address: 0x140410, Func Offset: 0x50
	// Line 2242, Address: 0x140418, Func Offset: 0x58
	// Line 2246, Address: 0x14041c, Func Offset: 0x5c
	// Line 2249, Address: 0x140438, Func Offset: 0x78
	// Line 2250, Address: 0x14044c, Func Offset: 0x8c
	// Line 2254, Address: 0x140450, Func Offset: 0x90
	// Line 2256, Address: 0x14047c, Func Offset: 0xbc
	// Line 2259, Address: 0x140488, Func Offset: 0xc8
	// Line 2261, Address: 0x140490, Func Offset: 0xd0
	// Line 2263, Address: 0x1404a0, Func Offset: 0xe0
	// Line 2264, Address: 0x1404c0, Func Offset: 0x100
	// Line 2265, Address: 0x1404ec, Func Offset: 0x12c
	// Line 2268, Address: 0x1404fc, Func Offset: 0x13c
	// Line 2270, Address: 0x140508, Func Offset: 0x148
	// Line 2272, Address: 0x140518, Func Offset: 0x158
	// Line 2273, Address: 0x140538, Func Offset: 0x178
	// Line 2274, Address: 0x140564, Func Offset: 0x1a4
	// Line 2277, Address: 0x140574, Func Offset: 0x1b4
	// Line 2279, Address: 0x140580, Func Offset: 0x1c0
	// Line 2281, Address: 0x140590, Func Offset: 0x1d0
	// Line 2282, Address: 0x1405b0, Func Offset: 0x1f0
	// Line 2283, Address: 0x1405dc, Func Offset: 0x21c
	// Line 2286, Address: 0x1405ec, Func Offset: 0x22c
	// Line 2288, Address: 0x1405f8, Func Offset: 0x238
	// Line 2290, Address: 0x140608, Func Offset: 0x248
	// Line 2291, Address: 0x140628, Func Offset: 0x268
	// Line 2292, Address: 0x140654, Func Offset: 0x294
	// Line 2293, Address: 0x140664, Func Offset: 0x2a4
	// Line 2295, Address: 0x140668, Func Offset: 0x2a8
	// Line 2297, Address: 0x14068c, Func Offset: 0x2cc
	// Line 2298, Address: 0x1406a0, Func Offset: 0x2e0
	// Line 2302, Address: 0x1406a4, Func Offset: 0x2e4
	// Line 2304, Address: 0x1406bc, Func Offset: 0x2fc
	// Line 2305, Address: 0x1406c0, Func Offset: 0x300
	// Func End, Address: 0x1406e8, Func Offset: 0x328
}

// 
// Start address: 0x1406f0
void clCheckHitGunWeaponThrust(unsigned int id, float* st, float* ed)
{
	// Line 2324, Address: 0x1406f0, Func Offset: 0
	// Line 2325, Address: 0x140704, Func Offset: 0x14
	// Line 2327, Address: 0x14070c, Func Offset: 0x1c
	// Line 2328, Address: 0x140720, Func Offset: 0x30
	// Func End, Address: 0x140730, Func Offset: 0x40
}

// 
// Start address: 0x140730
void clCheckHitThrustGunVector(unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 2347, Address: 0x140730, Func Offset: 0
	// Line 2356, Address: 0x140758, Func Offset: 0x28
	// Line 2357, Address: 0x14075c, Func Offset: 0x2c
	// Line 2358, Address: 0x140760, Func Offset: 0x30
	// Line 2360, Address: 0x140764, Func Offset: 0x34
	// Line 2361, Address: 0x140768, Func Offset: 0x38
	// Line 2362, Address: 0x14076c, Func Offset: 0x3c
	// Line 2363, Address: 0x140770, Func Offset: 0x40
	// Line 2365, Address: 0x140774, Func Offset: 0x44
	// Line 2366, Address: 0x140778, Func Offset: 0x48
	// Line 2367, Address: 0x140780, Func Offset: 0x50
	// Line 2371, Address: 0x140784, Func Offset: 0x54
	// Line 2374, Address: 0x1407a0, Func Offset: 0x70
	// Line 2375, Address: 0x1407b4, Func Offset: 0x84
	// Line 2380, Address: 0x1407b8, Func Offset: 0x88
	// Line 2382, Address: 0x1407e4, Func Offset: 0xb4
	// Line 2385, Address: 0x1407f0, Func Offset: 0xc0
	// Line 2387, Address: 0x1407f8, Func Offset: 0xc8
	// Line 2389, Address: 0x140808, Func Offset: 0xd8
	// Line 2390, Address: 0x140828, Func Offset: 0xf8
	// Line 2391, Address: 0x140854, Func Offset: 0x124
	// Line 2394, Address: 0x140864, Func Offset: 0x134
	// Line 2396, Address: 0x140870, Func Offset: 0x140
	// Line 2398, Address: 0x140880, Func Offset: 0x150
	// Line 2399, Address: 0x1408a0, Func Offset: 0x170
	// Line 2400, Address: 0x1408cc, Func Offset: 0x19c
	// Line 2403, Address: 0x1408dc, Func Offset: 0x1ac
	// Line 2405, Address: 0x1408e8, Func Offset: 0x1b8
	// Line 2407, Address: 0x1408f8, Func Offset: 0x1c8
	// Line 2408, Address: 0x140918, Func Offset: 0x1e8
	// Line 2409, Address: 0x140944, Func Offset: 0x214
	// Line 2412, Address: 0x140954, Func Offset: 0x224
	// Line 2414, Address: 0x140960, Func Offset: 0x230
	// Line 2416, Address: 0x140970, Func Offset: 0x240
	// Line 2417, Address: 0x140990, Func Offset: 0x260
	// Line 2418, Address: 0x1409bc, Func Offset: 0x28c
	// Line 2419, Address: 0x1409cc, Func Offset: 0x29c
	// Line 2421, Address: 0x1409d0, Func Offset: 0x2a0
	// Line 2422, Address: 0x1409f4, Func Offset: 0x2c4
	// Line 2425, Address: 0x140a08, Func Offset: 0x2d8
	// Line 2427, Address: 0x140a20, Func Offset: 0x2f0
	// Func End, Address: 0x140a44, Func Offset: 0x314
}

// 
// Start address: 0x140a50
void clCheckHitThrustGunVectorCharacter(float* sp, float* ep, float min, unsigned int id)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int i;
	// Line 2450, Address: 0x140a50, Func Offset: 0
	// Line 2457, Address: 0x140a80, Func Offset: 0x30
	// Line 2459, Address: 0x140aa0, Func Offset: 0x50
	// Line 2461, Address: 0x140aac, Func Offset: 0x5c
	// Line 2464, Address: 0x140ae0, Func Offset: 0x90
	// Line 2467, Address: 0x140b20, Func Offset: 0xd0
	// Line 2470, Address: 0x140b28, Func Offset: 0xd8
	// Line 2471, Address: 0x140b30, Func Offset: 0xe0
	// Line 2472, Address: 0x140b34, Func Offset: 0xe4
	// Line 2474, Address: 0x140b38, Func Offset: 0xe8
	// Line 2475, Address: 0x140b3c, Func Offset: 0xec
	// Line 2476, Address: 0x140b40, Func Offset: 0xf0
	// Line 2477, Address: 0x140b44, Func Offset: 0xf4
	// Line 2479, Address: 0x140b48, Func Offset: 0xf8
	// Line 2480, Address: 0x140b4c, Func Offset: 0xfc
	// Line 2481, Address: 0x140b54, Func Offset: 0x104
	// Line 2486, Address: 0x140b58, Func Offset: 0x108
	// Line 2489, Address: 0x140b6c, Func Offset: 0x11c
	// Line 2490, Address: 0x140b8c, Func Offset: 0x13c
	// Line 2491, Address: 0x140bb4, Func Offset: 0x164
	// Line 2492, Address: 0x140bfc, Func Offset: 0x1ac
	// Line 2495, Address: 0x140c10, Func Offset: 0x1c0
	// Line 2496, Address: 0x140c38, Func Offset: 0x1e8
	// Func End, Address: 0x140c60, Func Offset: 0x210
}

// 
// Start address: 0x140c60
_CL_SELECT_MAP* clGetHitSectListVECHIT(float* st, float* ed)
{
	// Line 2635, Address: 0x140c60, Func Offset: 0
	// Line 2636, Address: 0x140c70, Func Offset: 0x10
	// Line 2637, Address: 0x140c84, Func Offset: 0x24
	// Line 2639, Address: 0x140c9c, Func Offset: 0x3c
	// Line 2640, Address: 0x140cac, Func Offset: 0x4c
	// Func End, Address: 0x140cbc, Func Offset: 0x5c
}

// 
// Start address: 0x140cc0
_CL_SELECT_MAP* clGetHitSectListVECHITOutDoor(float* st, float* ed)
{
	float cpos[4];
	float box[4][4];
	_CL_CLDHEADER* ch;
	int use;
	int k;
	int j;
	int i;
	// Line 2643, Address: 0x140cc0, Func Offset: 0
	// Line 2645, Address: 0x140ce4, Func Offset: 0x24
	// Line 2650, Address: 0x140ce8, Func Offset: 0x28
	// Line 2652, Address: 0x140cf8, Func Offset: 0x38
	// Line 2654, Address: 0x140d04, Func Offset: 0x44
	// Line 2656, Address: 0x140d18, Func Offset: 0x58
	// Line 2659, Address: 0x140d2c, Func Offset: 0x6c
	// Line 2660, Address: 0x140d34, Func Offset: 0x74
	// Line 2662, Address: 0x140d3c, Func Offset: 0x7c
	// Line 2663, Address: 0x140d44, Func Offset: 0x84
	// Line 2664, Address: 0x140d4c, Func Offset: 0x8c
	// Line 2665, Address: 0x140d54, Func Offset: 0x94
	// Line 2666, Address: 0x140d6c, Func Offset: 0xac
	// Line 2667, Address: 0x140d84, Func Offset: 0xc4
	// Line 2668, Address: 0x140d9c, Func Offset: 0xdc
	// Line 2669, Address: 0x140db4, Func Offset: 0xf4
	// Line 2673, Address: 0x140dbc, Func Offset: 0xfc
	// Line 2677, Address: 0x140de4, Func Offset: 0x124
	// Line 2679, Address: 0x140e00, Func Offset: 0x140
	// Line 2681, Address: 0x140e0c, Func Offset: 0x14c
	// Line 2683, Address: 0x140e18, Func Offset: 0x158
	// Line 2684, Address: 0x140e40, Func Offset: 0x180
	// Line 2685, Address: 0x140e68, Func Offset: 0x1a8
	// Line 2686, Address: 0x140e70, Func Offset: 0x1b0
	// Line 2687, Address: 0x140e88, Func Offset: 0x1c8
	// Line 2688, Address: 0x140ea0, Func Offset: 0x1e0
	// Line 2689, Address: 0x140eb8, Func Offset: 0x1f8
	// Line 2690, Address: 0x140ed0, Func Offset: 0x210
	// Line 2694, Address: 0x140ed8, Func Offset: 0x218
	// Line 2698, Address: 0x140f00, Func Offset: 0x240
	// Line 2700, Address: 0x140f1c, Func Offset: 0x25c
	// Line 2701, Address: 0x140f30, Func Offset: 0x270
	// Line 2702, Address: 0x140f50, Func Offset: 0x290
	// Line 2703, Address: 0x140f54, Func Offset: 0x294
	// Line 2704, Address: 0x140f58, Func Offset: 0x298
	// Line 2705, Address: 0x140f6c, Func Offset: 0x2ac
	// Line 2706, Address: 0x140f7c, Func Offset: 0x2bc
	// Line 2707, Address: 0x140f80, Func Offset: 0x2c0
	// Line 2708, Address: 0x140f94, Func Offset: 0x2d4
	// Line 2710, Address: 0x140f98, Func Offset: 0x2d8
	// Line 2712, Address: 0x140fac, Func Offset: 0x2ec
	// Line 2713, Address: 0x140fb4, Func Offset: 0x2f4
	// Func End, Address: 0x140fd8, Func Offset: 0x318
}

// 
// Start address: 0x140fe0
_CL_SELECT_MAP* clGetHitSectListVECHITInDoor()
{
	_CL_CLDHEADER* ch;
	int use;
	int i;
	// Line 2717, Address: 0x140fe0, Func Offset: 0
	// Line 2719, Address: 0x140ff0, Func Offset: 0x10
	// Line 2722, Address: 0x140ff4, Func Offset: 0x14
	// Line 2724, Address: 0x141004, Func Offset: 0x24
	// Line 2726, Address: 0x141010, Func Offset: 0x30
	// Line 2728, Address: 0x141024, Func Offset: 0x44
	// Line 2731, Address: 0x141038, Func Offset: 0x58
	// Line 2732, Address: 0x14104c, Func Offset: 0x6c
	// Line 2733, Address: 0x141060, Func Offset: 0x80
	// Line 2734, Address: 0x141064, Func Offset: 0x84
	// Line 2735, Address: 0x14107c, Func Offset: 0x9c
	// Line 2736, Address: 0x141080, Func Offset: 0xa0
	// Line 2738, Address: 0x141094, Func Offset: 0xb4
	// Line 2739, Address: 0x14109c, Func Offset: 0xbc
	// Func End, Address: 0x1410b4, Func Offset: 0xd4
}

// 
// Start address: 0x1410c0
int Line2PlaneBoundaryCheckXZ(float l0[4], float l1[4], float p0[4], float p1[4], float p2[4], float p3[4])
{
	int ret;
	// Line 2745, Address: 0x1410c0, Func Offset: 0
	// Line 2749, Address: 0x1410c4, Func Offset: 0x4
	// Line 2750, Address: 0x1410c8, Func Offset: 0x8
	// Line 2751, Address: 0x1410cc, Func Offset: 0xc
	// Line 2752, Address: 0x1410d0, Func Offset: 0x10
	// Line 2753, Address: 0x1410d4, Func Offset: 0x14
	// Line 2754, Address: 0x1410d8, Func Offset: 0x18
	// Line 2755, Address: 0x1410dc, Func Offset: 0x1c
	// Line 2756, Address: 0x1410e0, Func Offset: 0x20
	// Line 2757, Address: 0x1410e4, Func Offset: 0x24
	// Line 2758, Address: 0x1410e8, Func Offset: 0x28
	// Line 2759, Address: 0x1410ec, Func Offset: 0x2c
	// Line 2760, Address: 0x1410f0, Func Offset: 0x30
	// Line 2761, Address: 0x1410f4, Func Offset: 0x34
	// Line 2762, Address: 0x1410f8, Func Offset: 0x38
	// Line 2763, Address: 0x1410fc, Func Offset: 0x3c
	// Line 2764, Address: 0x141100, Func Offset: 0x40
	// Line 2765, Address: 0x141104, Func Offset: 0x44
	// Line 2766, Address: 0x141108, Func Offset: 0x48
	// Line 2767, Address: 0x14110c, Func Offset: 0x4c
	// Line 2768, Address: 0x141110, Func Offset: 0x50
	// Line 2769, Address: 0x141114, Func Offset: 0x54
	// Line 2770, Address: 0x141118, Func Offset: 0x58
	// Line 2771, Address: 0x14111c, Func Offset: 0x5c
	// Line 2772, Address: 0x141120, Func Offset: 0x60
	// Line 2773, Address: 0x141124, Func Offset: 0x64
	// Line 2783, Address: 0x141128, Func Offset: 0x68
	// Func End, Address: 0x141130, Func Offset: 0x70
}

// 
// Start address: 0x141130
int clCheckCrossLine2BoxXZ(float box[4], float* st, float* ed)
{
	int jyun[5];
	float outer;
	float vb[4];
	float va[4];
	int i;
	// Line 2802, Address: 0x141130, Func Offset: 0
	// Line 2806, Address: 0x141154, Func Offset: 0x24
	// Line 2809, Address: 0x141170, Func Offset: 0x40
	// Line 2811, Address: 0x14117c, Func Offset: 0x4c
	// Line 2812, Address: 0x1411a4, Func Offset: 0x74
	// Line 2813, Address: 0x1411c0, Func Offset: 0x90
	// Line 2814, Address: 0x1411dc, Func Offset: 0xac
	// Line 2816, Address: 0x1411f4, Func Offset: 0xc4
	// Line 2817, Address: 0x141208, Func Offset: 0xd8
	// Line 2818, Address: 0x141214, Func Offset: 0xe4
	// Line 2821, Address: 0x141220, Func Offset: 0xf0
	// Line 2823, Address: 0x14122c, Func Offset: 0xfc
	// Line 2824, Address: 0x141254, Func Offset: 0x124
	// Line 2825, Address: 0x141270, Func Offset: 0x140
	// Line 2826, Address: 0x14128c, Func Offset: 0x15c
	// Line 2828, Address: 0x1412a4, Func Offset: 0x174
	// Line 2829, Address: 0x1412b8, Func Offset: 0x188
	// Line 2830, Address: 0x1412c4, Func Offset: 0x194
	// Line 2833, Address: 0x1412d0, Func Offset: 0x1a0
	// Line 2835, Address: 0x1412dc, Func Offset: 0x1ac
	// Line 2836, Address: 0x141320, Func Offset: 0x1f0
	// Line 2837, Address: 0x14132c, Func Offset: 0x1fc
	// Line 2839, Address: 0x14133c, Func Offset: 0x20c
	// Line 2840, Address: 0x141340, Func Offset: 0x210
	// Func End, Address: 0x141360, Func Offset: 0x230
}

// 
// Start address: 0x141360
int clCheckCrossLine2LineXZ(float* va0, float* va1, float* vb0, float* vb1)
{
	float outer1;
	float outer0;
	float p1[4];
	float p0[4];
	float bp[4];
	// Line 2843, Address: 0x141360, Func Offset: 0
	// Line 2848, Address: 0x141364, Func Offset: 0x4
	// Line 2849, Address: 0x141378, Func Offset: 0x18
	// Line 2850, Address: 0x14138c, Func Offset: 0x2c
	// Line 2851, Address: 0x1413a0, Func Offset: 0x40
	// Line 2852, Address: 0x1413bc, Func Offset: 0x5c
	// Line 2853, Address: 0x1413d8, Func Offset: 0x78
	// Line 2855, Address: 0x141408, Func Offset: 0xa8
	// Line 2880, Address: 0x141608, Func Offset: 0x2a8
	// Line 2882, Address: 0x141614, Func Offset: 0x2b4
	// Line 2885, Address: 0x141620, Func Offset: 0x2c0
	// Line 2886, Address: 0x14163c, Func Offset: 0x2dc
	// Line 2888, Address: 0x141648, Func Offset: 0x2e8
	// Line 2889, Address: 0x14165c, Func Offset: 0x2fc
	// Line 2890, Address: 0x141670, Func Offset: 0x310
	// Line 2891, Address: 0x141684, Func Offset: 0x324
	// Line 2892, Address: 0x1416a0, Func Offset: 0x340
	// Line 2893, Address: 0x1416bc, Func Offset: 0x35c
	// Line 2894, Address: 0x1416d8, Func Offset: 0x378
	// Line 2896, Address: 0x1416e4, Func Offset: 0x384
	// Line 2897, Address: 0x1416e8, Func Offset: 0x388
	// Func End, Address: 0x1416f4, Func Offset: 0x394
}

// 
// Start address: 0x141700
_CL_SELECT_MAP* clGetHitSectListMOVE(float* bpos)
{
	// Line 2915, Address: 0x141700, Func Offset: 0
	// Line 2916, Address: 0x14170c, Func Offset: 0xc
	// Line 2917, Address: 0x141720, Func Offset: 0x20
	// Line 2919, Address: 0x141734, Func Offset: 0x34
	// Line 2920, Address: 0x141740, Func Offset: 0x40
	// Func End, Address: 0x141750, Func Offset: 0x50
}

// 
// Start address: 0x141750
_CL_SELECT_MAP* clGetHitSectListMOVEOutDoor(float* bpos)
{
	float dist;
	float bcpos[4];
	float cpos[4];
	float pos[4];
	_CL_CLDHEADER* ch;
	int use;
	int k;
	int j;
	int i;
	// Line 2924, Address: 0x141750, Func Offset: 0
	// Line 2926, Address: 0x141754, Func Offset: 0x4
	// Line 2931, Address: 0x141758, Func Offset: 0x8
	// Line 2932, Address: 0x141764, Func Offset: 0x14
	// Line 2933, Address: 0x141770, Func Offset: 0x20
	// Line 2934, Address: 0x141780, Func Offset: 0x30
	// Line 2936, Address: 0x141788, Func Offset: 0x38
	// Line 2938, Address: 0x141798, Func Offset: 0x48
	// Line 2940, Address: 0x1417a4, Func Offset: 0x54
	// Line 2942, Address: 0x1417b8, Func Offset: 0x68
	// Line 2945, Address: 0x1417cc, Func Offset: 0x7c
	// Line 2946, Address: 0x1417d4, Func Offset: 0x84
	// Line 2947, Address: 0x1417dc, Func Offset: 0x8c
	// Line 2949, Address: 0x1417ec, Func Offset: 0x9c
	// Line 2950, Address: 0x1417f4, Func Offset: 0xa4
	// Line 2951, Address: 0x1417f8, Func Offset: 0xa8
	// Line 2953, Address: 0x1417fc, Func Offset: 0xac
	// Line 2954, Address: 0x141800, Func Offset: 0xb0
	// Line 2955, Address: 0x141804, Func Offset: 0xb4
	// Line 2957, Address: 0x141808, Func Offset: 0xb8
	// Line 2958, Address: 0x14180c, Func Offset: 0xbc
	// Line 2959, Address: 0x141814, Func Offset: 0xc4
	// Line 2964, Address: 0x141818, Func Offset: 0xc8
	// Line 2967, Address: 0x14183c, Func Offset: 0xec
	// Line 2969, Address: 0x141848, Func Offset: 0xf8
	// Line 2971, Address: 0x141854, Func Offset: 0x104
	// Line 2972, Address: 0x14187c, Func Offset: 0x12c
	// Line 2973, Address: 0x1418a4, Func Offset: 0x154
	// Line 2974, Address: 0x1418b0, Func Offset: 0x160
	// Line 2975, Address: 0x1418b4, Func Offset: 0x164
	// Line 2977, Address: 0x1418b8, Func Offset: 0x168
	// Line 2978, Address: 0x1418bc, Func Offset: 0x16c
	// Line 2979, Address: 0x1418c0, Func Offset: 0x170
	// Line 2981, Address: 0x1418c4, Func Offset: 0x174
	// Line 2982, Address: 0x1418c8, Func Offset: 0x178
	// Line 2983, Address: 0x1418d0, Func Offset: 0x180
	// Line 2988, Address: 0x1418d4, Func Offset: 0x184
	// Line 2992, Address: 0x1418f8, Func Offset: 0x1a8
	// Line 2993, Address: 0x14190c, Func Offset: 0x1bc
	// Line 2995, Address: 0x14192c, Func Offset: 0x1dc
	// Line 2998, Address: 0x141930, Func Offset: 0x1e0
	// Line 2999, Address: 0x141940, Func Offset: 0x1f0
	// Line 3000, Address: 0x141954, Func Offset: 0x204
	// Line 3001, Address: 0x141964, Func Offset: 0x214
	// Line 3002, Address: 0x14197c, Func Offset: 0x22c
	// Line 3004, Address: 0x141980, Func Offset: 0x230
	// Line 3006, Address: 0x141994, Func Offset: 0x244
	// Line 3007, Address: 0x14199c, Func Offset: 0x24c
	// Func End, Address: 0x1419a8, Func Offset: 0x258
}

// 
// Start address: 0x1419b0
_CL_SELECT_MAP* clGetHitSectListMOVEInDoor()
{
	_CL_CLDHEADER* ch;
	int use;
	int i;
	// Line 3011, Address: 0x1419b0, Func Offset: 0
	// Line 3013, Address: 0x1419c0, Func Offset: 0x10
	// Line 3016, Address: 0x1419c4, Func Offset: 0x14
	// Line 3018, Address: 0x1419d4, Func Offset: 0x24
	// Line 3020, Address: 0x1419e0, Func Offset: 0x30
	// Line 3022, Address: 0x1419f4, Func Offset: 0x44
	// Line 3025, Address: 0x141a08, Func Offset: 0x58
	// Line 3026, Address: 0x141a1c, Func Offset: 0x6c
	// Line 3027, Address: 0x141a30, Func Offset: 0x80
	// Line 3028, Address: 0x141a34, Func Offset: 0x84
	// Line 3029, Address: 0x141a4c, Func Offset: 0x9c
	// Line 3030, Address: 0x141a50, Func Offset: 0xa0
	// Line 3032, Address: 0x141a64, Func Offset: 0xb4
	// Line 3033, Address: 0x141a6c, Func Offset: 0xbc
	// Func End, Address: 0x141a84, Func Offset: 0xd4
}

// 
// Start address: 0x141a90
void clCheckHitEyes(_CL_VHIT_RESULT* res, unsigned int id, float* st, float* ed, int thru)
{
	// Line 3059, Address: 0x141a90, Func Offset: 0
	// Line 3060, Address: 0x141aac, Func Offset: 0x1c
	// Line 3061, Address: 0x141ab8, Func Offset: 0x28
	// Line 3063, Address: 0x141ad8, Func Offset: 0x48
	// Line 3064, Address: 0x141af0, Func Offset: 0x60
	// Func End, Address: 0x141b00, Func Offset: 0x70
}

// 
// Start address: 0x141b00
void clCheckHitEyesOnlyFloor(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3087, Address: 0x141b00, Func Offset: 0
	// Line 3095, Address: 0x141b24, Func Offset: 0x24
	// Line 3096, Address: 0x141b28, Func Offset: 0x28
	// Line 3097, Address: 0x141b2c, Func Offset: 0x2c
	// Line 3099, Address: 0x141b30, Func Offset: 0x30
	// Line 3100, Address: 0x141b34, Func Offset: 0x34
	// Line 3101, Address: 0x141b38, Func Offset: 0x38
	// Line 3102, Address: 0x141b3c, Func Offset: 0x3c
	// Line 3104, Address: 0x141b40, Func Offset: 0x40
	// Line 3105, Address: 0x141b44, Func Offset: 0x44
	// Line 3106, Address: 0x141b4c, Func Offset: 0x4c
	// Line 3111, Address: 0x141b50, Func Offset: 0x50
	// Line 3114, Address: 0x141b54, Func Offset: 0x54
	// Line 3118, Address: 0x141b68, Func Offset: 0x68
	// Line 3121, Address: 0x141b74, Func Offset: 0x74
	// Line 3123, Address: 0x141b7c, Func Offset: 0x7c
	// Line 3125, Address: 0x141b8c, Func Offset: 0x8c
	// Line 3126, Address: 0x141bac, Func Offset: 0xac
	// Line 3127, Address: 0x141bc4, Func Offset: 0xc4
	// Line 3128, Address: 0x141bd4, Func Offset: 0xd4
	// Line 3129, Address: 0x141bd8, Func Offset: 0xd8
	// Func End, Address: 0x141bf8, Func Offset: 0xf8
}

// 
// Start address: 0x141c00
void clCheckHitEyesOnlyFloorThru(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3136, Address: 0x141c00, Func Offset: 0
	// Line 3144, Address: 0x141c24, Func Offset: 0x24
	// Line 3145, Address: 0x141c28, Func Offset: 0x28
	// Line 3146, Address: 0x141c2c, Func Offset: 0x2c
	// Line 3148, Address: 0x141c30, Func Offset: 0x30
	// Line 3149, Address: 0x141c34, Func Offset: 0x34
	// Line 3150, Address: 0x141c38, Func Offset: 0x38
	// Line 3151, Address: 0x141c3c, Func Offset: 0x3c
	// Line 3153, Address: 0x141c40, Func Offset: 0x40
	// Line 3154, Address: 0x141c44, Func Offset: 0x44
	// Line 3155, Address: 0x141c4c, Func Offset: 0x4c
	// Line 3160, Address: 0x141c50, Func Offset: 0x50
	// Line 3163, Address: 0x141c54, Func Offset: 0x54
	// Line 3167, Address: 0x141c68, Func Offset: 0x68
	// Line 3170, Address: 0x141c74, Func Offset: 0x74
	// Line 3172, Address: 0x141c7c, Func Offset: 0x7c
	// Line 3174, Address: 0x141c8c, Func Offset: 0x8c
	// Line 3175, Address: 0x141cac, Func Offset: 0xac
	// Line 3176, Address: 0x141cc4, Func Offset: 0xc4
	// Line 3177, Address: 0x141cd4, Func Offset: 0xd4
	// Line 3178, Address: 0x141cd8, Func Offset: 0xd8
	// Func End, Address: 0x141cf8, Func Offset: 0xf8
}

// 
// Start address: 0x141d00
void clCheckHitEyesOnlyWall(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3199, Address: 0x141d00, Func Offset: 0
	// Line 3208, Address: 0x141d28, Func Offset: 0x28
	// Line 3209, Address: 0x141d2c, Func Offset: 0x2c
	// Line 3210, Address: 0x141d30, Func Offset: 0x30
	// Line 3212, Address: 0x141d34, Func Offset: 0x34
	// Line 3213, Address: 0x141d38, Func Offset: 0x38
	// Line 3214, Address: 0x141d3c, Func Offset: 0x3c
	// Line 3215, Address: 0x141d40, Func Offset: 0x40
	// Line 3217, Address: 0x141d44, Func Offset: 0x44
	// Line 3218, Address: 0x141d48, Func Offset: 0x48
	// Line 3219, Address: 0x141d50, Func Offset: 0x50
	// Line 3224, Address: 0x141d54, Func Offset: 0x54
	// Line 3227, Address: 0x141d58, Func Offset: 0x58
	// Line 3229, Address: 0x141d6c, Func Offset: 0x6c
	// Line 3231, Address: 0x141d70, Func Offset: 0x70
	// Line 3234, Address: 0x141d7c, Func Offset: 0x7c
	// Line 3236, Address: 0x141d84, Func Offset: 0x84
	// Line 3238, Address: 0x141d94, Func Offset: 0x94
	// Line 3239, Address: 0x141db4, Func Offset: 0xb4
	// Line 3240, Address: 0x141dcc, Func Offset: 0xcc
	// Line 3242, Address: 0x141ddc, Func Offset: 0xdc
	// Line 3244, Address: 0x141de8, Func Offset: 0xe8
	// Line 3246, Address: 0x141df8, Func Offset: 0xf8
	// Line 3247, Address: 0x141e18, Func Offset: 0x118
	// Line 3248, Address: 0x141e30, Func Offset: 0x130
	// Line 3250, Address: 0x141e44, Func Offset: 0x144
	// Line 3252, Address: 0x141e50, Func Offset: 0x150
	// Line 3254, Address: 0x141e60, Func Offset: 0x160
	// Line 3255, Address: 0x141e80, Func Offset: 0x180
	// Line 3256, Address: 0x141e98, Func Offset: 0x198
	// Line 3257, Address: 0x141eac, Func Offset: 0x1ac
	// Line 3258, Address: 0x141eb0, Func Offset: 0x1b0
	// Func End, Address: 0x141ed4, Func Offset: 0x1d4
}

// 
// Start address: 0x141ee0
void clCheckHitEyesOnlyFloorCeil(_CL_VHIT_RESULT* res, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3279, Address: 0x141ee0, Func Offset: 0
	// Line 3287, Address: 0x141f08, Func Offset: 0x28
	// Line 3288, Address: 0x141f0c, Func Offset: 0x2c
	// Line 3289, Address: 0x141f10, Func Offset: 0x30
	// Line 3291, Address: 0x141f14, Func Offset: 0x34
	// Line 3292, Address: 0x141f18, Func Offset: 0x38
	// Line 3293, Address: 0x141f1c, Func Offset: 0x3c
	// Line 3294, Address: 0x141f20, Func Offset: 0x40
	// Line 3296, Address: 0x141f24, Func Offset: 0x44
	// Line 3297, Address: 0x141f28, Func Offset: 0x48
	// Line 3298, Address: 0x141f30, Func Offset: 0x50
	// Line 3303, Address: 0x141f34, Func Offset: 0x54
	// Line 3306, Address: 0x141f38, Func Offset: 0x58
	// Line 3308, Address: 0x141f4c, Func Offset: 0x6c
	// Line 3310, Address: 0x141f50, Func Offset: 0x70
	// Line 3313, Address: 0x141f5c, Func Offset: 0x7c
	// Line 3315, Address: 0x141f64, Func Offset: 0x84
	// Line 3317, Address: 0x141f74, Func Offset: 0x94
	// Line 3318, Address: 0x141f94, Func Offset: 0xb4
	// Line 3319, Address: 0x141fac, Func Offset: 0xcc
	// Line 3321, Address: 0x141fbc, Func Offset: 0xdc
	// Line 3323, Address: 0x141fc8, Func Offset: 0xe8
	// Line 3325, Address: 0x141fd8, Func Offset: 0xf8
	// Line 3326, Address: 0x141ff8, Func Offset: 0x118
	// Line 3327, Address: 0x142010, Func Offset: 0x130
	// Line 3328, Address: 0x142024, Func Offset: 0x144
	// Line 3329, Address: 0x142028, Func Offset: 0x148
	// Func End, Address: 0x14204c, Func Offset: 0x16c
}

// 
// Start address: 0x142050
void clCheckHitEyeVector(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3353, Address: 0x142050, Func Offset: 0
	// Line 3362, Address: 0x142080, Func Offset: 0x30
	// Line 3363, Address: 0x142084, Func Offset: 0x34
	// Line 3364, Address: 0x142088, Func Offset: 0x38
	// Line 3366, Address: 0x14208c, Func Offset: 0x3c
	// Line 3367, Address: 0x142090, Func Offset: 0x40
	// Line 3368, Address: 0x142094, Func Offset: 0x44
	// Line 3369, Address: 0x142098, Func Offset: 0x48
	// Line 3371, Address: 0x14209c, Func Offset: 0x4c
	// Line 3372, Address: 0x1420a0, Func Offset: 0x50
	// Line 3373, Address: 0x1420a8, Func Offset: 0x58
	// Line 3377, Address: 0x1420ac, Func Offset: 0x5c
	// Line 3380, Address: 0x1420b0, Func Offset: 0x60
	// Line 3381, Address: 0x1420c4, Func Offset: 0x74
	// Line 3384, Address: 0x1420c8, Func Offset: 0x78
	// Line 3386, Address: 0x1420e0, Func Offset: 0x90
	// Line 3389, Address: 0x1420ec, Func Offset: 0x9c
	// Line 3391, Address: 0x1420f4, Func Offset: 0xa4
	// Line 3393, Address: 0x142104, Func Offset: 0xb4
	// Line 3394, Address: 0x142124, Func Offset: 0xd4
	// Line 3395, Address: 0x14213c, Func Offset: 0xec
	// Line 3398, Address: 0x14214c, Func Offset: 0xfc
	// Line 3400, Address: 0x142158, Func Offset: 0x108
	// Line 3402, Address: 0x142168, Func Offset: 0x118
	// Line 3403, Address: 0x142188, Func Offset: 0x138
	// Line 3404, Address: 0x1421a0, Func Offset: 0x150
	// Line 3407, Address: 0x1421b4, Func Offset: 0x164
	// Line 3409, Address: 0x1421c0, Func Offset: 0x170
	// Line 3411, Address: 0x1421d0, Func Offset: 0x180
	// Line 3412, Address: 0x1421f0, Func Offset: 0x1a0
	// Line 3413, Address: 0x142208, Func Offset: 0x1b8
	// Line 3416, Address: 0x14221c, Func Offset: 0x1cc
	// Line 3418, Address: 0x142228, Func Offset: 0x1d8
	// Line 3420, Address: 0x142238, Func Offset: 0x1e8
	// Line 3421, Address: 0x142258, Func Offset: 0x208
	// Line 3422, Address: 0x142270, Func Offset: 0x220
	// Line 3423, Address: 0x142284, Func Offset: 0x234
	// Line 3426, Address: 0x142288, Func Offset: 0x238
	// Line 3428, Address: 0x1422a4, Func Offset: 0x254
	// Func End, Address: 0x1422cc, Func Offset: 0x27c
}

// 
// Start address: 0x1422d0
void clCheckHitEyeVectorNoThru(_CL_VHIT_RESULT* res, unsigned int id, float* sp, float* ep)
{
	float min;
	int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	// Line 3452, Address: 0x1422d0, Func Offset: 0
	// Line 3461, Address: 0x142300, Func Offset: 0x30
	// Line 3462, Address: 0x142304, Func Offset: 0x34
	// Line 3463, Address: 0x142308, Func Offset: 0x38
	// Line 3465, Address: 0x14230c, Func Offset: 0x3c
	// Line 3466, Address: 0x142310, Func Offset: 0x40
	// Line 3467, Address: 0x142314, Func Offset: 0x44
	// Line 3468, Address: 0x142318, Func Offset: 0x48
	// Line 3470, Address: 0x14231c, Func Offset: 0x4c
	// Line 3471, Address: 0x142320, Func Offset: 0x50
	// Line 3472, Address: 0x142328, Func Offset: 0x58
	// Line 3476, Address: 0x14232c, Func Offset: 0x5c
	// Line 3479, Address: 0x142330, Func Offset: 0x60
	// Line 3481, Address: 0x142344, Func Offset: 0x74
	// Line 3484, Address: 0x142348, Func Offset: 0x78
	// Line 3486, Address: 0x142360, Func Offset: 0x90
	// Line 3489, Address: 0x14236c, Func Offset: 0x9c
	// Line 3491, Address: 0x142374, Func Offset: 0xa4
	// Line 3493, Address: 0x142384, Func Offset: 0xb4
	// Line 3494, Address: 0x1423a4, Func Offset: 0xd4
	// Line 3495, Address: 0x1423bc, Func Offset: 0xec
	// Line 3498, Address: 0x1423cc, Func Offset: 0xfc
	// Line 3500, Address: 0x1423d8, Func Offset: 0x108
	// Line 3502, Address: 0x1423e8, Func Offset: 0x118
	// Line 3503, Address: 0x142408, Func Offset: 0x138
	// Line 3504, Address: 0x142420, Func Offset: 0x150
	// Line 3507, Address: 0x142434, Func Offset: 0x164
	// Line 3509, Address: 0x142440, Func Offset: 0x170
	// Line 3511, Address: 0x142450, Func Offset: 0x180
	// Line 3512, Address: 0x142470, Func Offset: 0x1a0
	// Line 3513, Address: 0x142488, Func Offset: 0x1b8
	// Line 3516, Address: 0x14249c, Func Offset: 0x1cc
	// Line 3518, Address: 0x1424a8, Func Offset: 0x1d8
	// Line 3520, Address: 0x1424b8, Func Offset: 0x1e8
	// Line 3521, Address: 0x1424d8, Func Offset: 0x208
	// Line 3522, Address: 0x1424f0, Func Offset: 0x220
	// Line 3523, Address: 0x142504, Func Offset: 0x234
	// Line 3526, Address: 0x142508, Func Offset: 0x238
	// Line 3527, Address: 0x142524, Func Offset: 0x254
	// Func End, Address: 0x14254c, Func Offset: 0x27c
}

// 
// Start address: 0x142550
void clCheckHitEyeVectorWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_PLANE* pl, int* ptr)
{
	float dist;
	_CL_HITRESULT cres;
	int ret;
	// Line 3554, Address: 0x142550, Func Offset: 0
	// Line 3559, Address: 0x142588, Func Offset: 0x38
	// Line 3561, Address: 0x142590, Func Offset: 0x40
	// Line 3566, Address: 0x1425fc, Func Offset: 0xac
	// Line 3567, Address: 0x142620, Func Offset: 0xd0
	// Line 3571, Address: 0x142684, Func Offset: 0x134
	// Line 3576, Address: 0x1426f8, Func Offset: 0x1a8
	// Line 3579, Address: 0x142700, Func Offset: 0x1b0
	// Line 3580, Address: 0x142708, Func Offset: 0x1b8
	// Line 3581, Address: 0x14270c, Func Offset: 0x1bc
	// Line 3583, Address: 0x142710, Func Offset: 0x1c0
	// Line 3584, Address: 0x142714, Func Offset: 0x1c4
	// Line 3585, Address: 0x142718, Func Offset: 0x1c8
	// Line 3586, Address: 0x14271c, Func Offset: 0x1cc
	// Line 3588, Address: 0x142720, Func Offset: 0x1d0
	// Line 3589, Address: 0x142724, Func Offset: 0x1d4
	// Line 3590, Address: 0x14272c, Func Offset: 0x1dc
	// Line 3595, Address: 0x142730, Func Offset: 0x1e0
	// Line 3598, Address: 0x142748, Func Offset: 0x1f8
	// Line 3599, Address: 0x142750, Func Offset: 0x200
	// Line 3600, Address: 0x142758, Func Offset: 0x208
	// Line 3601, Address: 0x142768, Func Offset: 0x218
	// Line 3602, Address: 0x142788, Func Offset: 0x238
	// Line 3605, Address: 0x1427a0, Func Offset: 0x250
	// Line 3606, Address: 0x1427b8, Func Offset: 0x268
	// Func End, Address: 0x1427e0, Func Offset: 0x290
}

// 
// Start address: 0x1427e0
void clCheckHitEyeVectorBGColumn(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, _CL_HITPOLY_COLUMN* cl, int* ptr)
{
	float dist;
	_CL_HITRESULT cres;
	int ret;
	// Line 3633, Address: 0x1427e0, Func Offset: 0
	// Line 3638, Address: 0x142818, Func Offset: 0x38
	// Line 3641, Address: 0x142820, Func Offset: 0x40
	// Line 3644, Address: 0x14284c, Func Offset: 0x6c
	// Line 3647, Address: 0x142854, Func Offset: 0x74
	// Line 3648, Address: 0x14285c, Func Offset: 0x7c
	// Line 3649, Address: 0x142860, Func Offset: 0x80
	// Line 3651, Address: 0x142864, Func Offset: 0x84
	// Line 3652, Address: 0x142868, Func Offset: 0x88
	// Line 3653, Address: 0x14286c, Func Offset: 0x8c
	// Line 3654, Address: 0x142870, Func Offset: 0x90
	// Line 3656, Address: 0x142874, Func Offset: 0x94
	// Line 3657, Address: 0x142878, Func Offset: 0x98
	// Line 3658, Address: 0x142880, Func Offset: 0xa0
	// Line 3663, Address: 0x142884, Func Offset: 0xa4
	// Line 3666, Address: 0x14289c, Func Offset: 0xbc
	// Line 3667, Address: 0x1428a4, Func Offset: 0xc4
	// Line 3668, Address: 0x1428ac, Func Offset: 0xcc
	// Line 3669, Address: 0x1428bc, Func Offset: 0xdc
	// Line 3670, Address: 0x1428c4, Func Offset: 0xe4
	// Line 3671, Address: 0x1428dc, Func Offset: 0xfc
	// Line 3673, Address: 0x1428e0, Func Offset: 0x100
	// Line 3674, Address: 0x1428f8, Func Offset: 0x118
	// Func End, Address: 0x142920, Func Offset: 0x140
}

// 
// Start address: 0x142920
void clCheckHitEyeVectorDynamicWall(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int j;
	int i;
	// Line 3697, Address: 0x142920, Func Offset: 0
	// Line 3705, Address: 0x142954, Func Offset: 0x34
	// Line 3707, Address: 0x142974, Func Offset: 0x54
	// Line 3709, Address: 0x142980, Func Offset: 0x60
	// Line 3712, Address: 0x14298c, Func Offset: 0x6c
	// Line 3717, Address: 0x142a58, Func Offset: 0x138
	// Line 3718, Address: 0x142a9c, Func Offset: 0x17c
	// Line 3722, Address: 0x142b60, Func Offset: 0x240
	// Line 3727, Address: 0x142c58, Func Offset: 0x338
	// Line 3730, Address: 0x142c60, Func Offset: 0x340
	// Line 3731, Address: 0x142c68, Func Offset: 0x348
	// Line 3732, Address: 0x142c6c, Func Offset: 0x34c
	// Line 3734, Address: 0x142c70, Func Offset: 0x350
	// Line 3735, Address: 0x142c74, Func Offset: 0x354
	// Line 3736, Address: 0x142c78, Func Offset: 0x358
	// Line 3737, Address: 0x142c7c, Func Offset: 0x35c
	// Line 3739, Address: 0x142c80, Func Offset: 0x360
	// Line 3740, Address: 0x142c84, Func Offset: 0x364
	// Line 3741, Address: 0x142c8c, Func Offset: 0x36c
	// Line 3746, Address: 0x142c90, Func Offset: 0x370
	// Line 3749, Address: 0x142ca8, Func Offset: 0x388
	// Line 3750, Address: 0x142cb0, Func Offset: 0x390
	// Line 3751, Address: 0x142cb8, Func Offset: 0x398
	// Line 3752, Address: 0x142cc8, Func Offset: 0x3a8
	// Line 3753, Address: 0x142d08, Func Offset: 0x3e8
	// Line 3756, Address: 0x142d40, Func Offset: 0x420
	// Line 3757, Address: 0x142d8c, Func Offset: 0x46c
	// Line 3759, Address: 0x142db8, Func Offset: 0x498
	// Func End, Address: 0x142de4, Func Offset: 0x4c4
}

// 
// Start address: 0x142df0
void clCheckHitEyeVectorCharacter(_CL_VHIT_RESULT* res, float* sp, float* ep, float* min, unsigned int id)
{
	int ac;
	float dist;
	_CL_HITRESULT cres;
	int ret;
	int i;
	// Line 3784, Address: 0x142df0, Func Offset: 0
	// Line 3791, Address: 0x142e28, Func Offset: 0x38
	// Line 3793, Address: 0x142e48, Func Offset: 0x58
	// Line 3795, Address: 0x142e54, Func Offset: 0x64
	// Line 3798, Address: 0x142e88, Func Offset: 0x98
	// Line 3801, Address: 0x142ec8, Func Offset: 0xd8
	// Line 3804, Address: 0x142ed0, Func Offset: 0xe0
	// Line 3805, Address: 0x142ed8, Func Offset: 0xe8
	// Line 3806, Address: 0x142edc, Func Offset: 0xec
	// Line 3808, Address: 0x142ee0, Func Offset: 0xf0
	// Line 3809, Address: 0x142ee4, Func Offset: 0xf4
	// Line 3810, Address: 0x142ee8, Func Offset: 0xf8
	// Line 3811, Address: 0x142eec, Func Offset: 0xfc
	// Line 3813, Address: 0x142ef0, Func Offset: 0x100
	// Line 3814, Address: 0x142ef4, Func Offset: 0x104
	// Line 3815, Address: 0x142efc, Func Offset: 0x10c
	// Line 3820, Address: 0x142f00, Func Offset: 0x110
	// Line 3823, Address: 0x142f18, Func Offset: 0x128
	// Line 3824, Address: 0x142f20, Func Offset: 0x130
	// Line 3825, Address: 0x142f28, Func Offset: 0x138
	// Line 3826, Address: 0x142f38, Func Offset: 0x148
	// Line 3829, Address: 0x142f68, Func Offset: 0x178
	// Line 3830, Address: 0x142f90, Func Offset: 0x1a0
	// Func End, Address: 0x142fbc, Func Offset: 0x1cc
}

// 
// Start address: 0x142fc0
int clPermitColumnExpansion()
{
	// Line 3847, Address: 0x142fc0, Func Offset: 0
	// Line 3848, Address: 0x142fc8, Func Offset: 0x8
	// Line 3849, Address: 0x142fe4, Func Offset: 0x24
	// Func End, Address: 0x142ff4, Func Offset: 0x34
}

// 
// Start address: 0x143000
void clDbgDrawCharaColiPoly()
{
	int i;
	// Line 3925, Address: 0x143000, Func Offset: 0
	// Line 3928, Address: 0x14300c, Func Offset: 0xc
	// Line 3929, Address: 0x143018, Func Offset: 0x18
	// Line 3930, Address: 0x143080, Func Offset: 0x80
	// Func End, Address: 0x143094, Func Offset: 0x94
}

// 
// Start address: 0x1430a0
void clDbgDrawBGColiPoly()
{
	int ac;
	int j;
	int i;
	unsigned int* ptr;
	_CL_HITPOLY_COLUMN* cl;
	_CL_HITPOLY_PLANE* sw;
	_CL_HITPOLY_PLANE* ce;
	_CL_HITPOLY_PLANE* wl;
	_CL_HITPOLY_PLANE* fl;
	_CL_SELECT_MAP* smap;
	float pos[4];
	// Line 3933, Address: 0x1430a0, Func Offset: 0
	// Line 3950, Address: 0x1430c4, Func Offset: 0x24
	// Line 3952, Address: 0x1430e4, Func Offset: 0x44
	// Line 3953, Address: 0x1430f0, Func Offset: 0x50
	// Line 3954, Address: 0x1430fc, Func Offset: 0x5c
	// Line 3958, Address: 0x1431b0, Func Offset: 0x110
	// Line 3959, Address: 0x1431e0, Func Offset: 0x140
	// Line 3960, Address: 0x1431f0, Func Offset: 0x150
	// Line 3963, Address: 0x1431f8, Func Offset: 0x158
	// Line 3964, Address: 0x143208, Func Offset: 0x168
	// Line 3965, Address: 0x143218, Func Offset: 0x178
	// Line 3966, Address: 0x143228, Func Offset: 0x188
	// Line 3967, Address: 0x143238, Func Offset: 0x198
	// Line 3969, Address: 0x143248, Func Offset: 0x1a8
	// Line 3970, Address: 0x143268, Func Offset: 0x1c8
	// Line 3971, Address: 0x143270, Func Offset: 0x1d0
	// Line 3973, Address: 0x1432a0, Func Offset: 0x200
	// Line 3974, Address: 0x1432c0, Func Offset: 0x220
	// Line 3975, Address: 0x1432c8, Func Offset: 0x228
	// Line 3977, Address: 0x1432f8, Func Offset: 0x258
	// Line 3978, Address: 0x143318, Func Offset: 0x278
	// Line 3979, Address: 0x143320, Func Offset: 0x280
	// Line 3981, Address: 0x143350, Func Offset: 0x2b0
	// Line 3982, Address: 0x143370, Func Offset: 0x2d0
	// Line 3983, Address: 0x143378, Func Offset: 0x2d8
	// Line 3985, Address: 0x1433a8, Func Offset: 0x308
	// Line 3986, Address: 0x1433c8, Func Offset: 0x328
	// Line 3987, Address: 0x1433d0, Func Offset: 0x330
	// Line 3989, Address: 0x143400, Func Offset: 0x360
	// Line 3990, Address: 0x143404, Func Offset: 0x364
	// Line 3991, Address: 0x143414, Func Offset: 0x374
	// Func End, Address: 0x143440, Func Offset: 0x3a0
}

// 
// Start address: 0x143440
void clDbgDrawHitPolygon(_CL_HITPOLY_HEAD* hp)
{
	_anon0 p;
	_anon3 p;
	_anon2 p;
	int i;
	// Line 3994, Address: 0x143440, Func Offset: 0
	// Line 3997, Address: 0x143448, Func Offset: 0x8
	// Line 4003, Address: 0x143478, Func Offset: 0x38
	// Line 4004, Address: 0x143484, Func Offset: 0x44
	// Line 4005, Address: 0x1434b4, Func Offset: 0x74
	// Line 4006, Address: 0x1434c8, Func Offset: 0x88
	// Line 4008, Address: 0x1434d4, Func Offset: 0x94
	// Line 4013, Address: 0x1434dc, Func Offset: 0x9c
	// Line 4014, Address: 0x1434e8, Func Offset: 0xa8
	// Line 4015, Address: 0x14351c, Func Offset: 0xdc
	// Line 4016, Address: 0x143530, Func Offset: 0xf0
	// Line 4018, Address: 0x14353c, Func Offset: 0xfc
	// Line 4023, Address: 0x143544, Func Offset: 0x104
	// Line 4024, Address: 0x143550, Func Offset: 0x110
	// Line 4025, Address: 0x143584, Func Offset: 0x144
	// Line 4026, Address: 0x143598, Func Offset: 0x158
	// Line 4028, Address: 0x1435a4, Func Offset: 0x164
	// Line 4030, Address: 0x1435ac, Func Offset: 0x16c
	// Line 4031, Address: 0x1435b4, Func Offset: 0x174
	// Line 4033, Address: 0x1435bc, Func Offset: 0x17c
	// Line 4034, Address: 0x1435c4, Func Offset: 0x184
	// Line 4036, Address: 0x1435cc, Func Offset: 0x18c
	// Line 4037, Address: 0x1435d4, Func Offset: 0x194
	// Line 4039, Address: 0x1435dc, Func Offset: 0x19c
	// Line 4040, Address: 0x1435e4, Func Offset: 0x1a4
	// Line 4042, Address: 0x1435ec, Func Offset: 0x1ac
	// Line 4045, Address: 0x1435f4, Func Offset: 0x1b4
	// Func End, Address: 0x143604, Func Offset: 0x1c4
}

// 
// Start address: 0x143610
void clDbgDrawScissorHitPolygon(_CL_HITPOLY_HEAD* hp)
{
	_anon3 p;
	_anon2 p;
	int i;
	// Line 4048, Address: 0x143610, Func Offset: 0
	// Line 4051, Address: 0x143618, Func Offset: 0x8
	// Line 4057, Address: 0x14363c, Func Offset: 0x2c
	// Line 4058, Address: 0x143648, Func Offset: 0x38
	// Line 4059, Address: 0x14367c, Func Offset: 0x6c
	// Line 4060, Address: 0x143690, Func Offset: 0x80
	// Line 4062, Address: 0x14369c, Func Offset: 0x8c
	// Line 4067, Address: 0x1436a4, Func Offset: 0x94
	// Line 4068, Address: 0x1436b0, Func Offset: 0xa0
	// Line 4069, Address: 0x1436e4, Func Offset: 0xd4
	// Line 4070, Address: 0x1436f8, Func Offset: 0xe8
	// Line 4074, Address: 0x143704, Func Offset: 0xf4
	// Func End, Address: 0x143714, Func Offset: 0x104
}

// 
// Start address: 0x143720
void clDbgDrawPolyCOLUMN(_CL_HITPOLY_COLUMN* col)
{
	float mat1[4][4];
	float mat0[4][4];
	float v1[4];
	float v0[4];
	int j;
	int i;
	int dang;
	_anon3 f4;
	_anon2 f3;
	// Line 4077, Address: 0x143720, Func Offset: 0
	// Line 4085, Address: 0x143738, Func Offset: 0x18
	// Line 4086, Address: 0x14374c, Func Offset: 0x2c
	// Line 4087, Address: 0x143760, Func Offset: 0x40
	// Line 4088, Address: 0x143770, Func Offset: 0x50
	// Line 4089, Address: 0x143780, Func Offset: 0x60
	// Line 4090, Address: 0x143790, Func Offset: 0x70
	// Line 4091, Address: 0x1437a0, Func Offset: 0x80
	// Line 4092, Address: 0x1437b0, Func Offset: 0x90
	// Line 4093, Address: 0x1437c0, Func Offset: 0xa0
	// Line 4096, Address: 0x1437d0, Func Offset: 0xb0
	// Line 4097, Address: 0x1437d8, Func Offset: 0xb8
	// Line 4098, Address: 0x1437e0, Func Offset: 0xc0
	// Line 4099, Address: 0x1437e8, Func Offset: 0xc8
	// Line 4100, Address: 0x1437f4, Func Offset: 0xd4
	// Line 4101, Address: 0x143800, Func Offset: 0xe0
	// Line 4102, Address: 0x143810, Func Offset: 0xf0
	// Line 4105, Address: 0x143838, Func Offset: 0x118
	// Line 4106, Address: 0x143840, Func Offset: 0x120
	// Line 4107, Address: 0x143848, Func Offset: 0x128
	// Line 4108, Address: 0x143850, Func Offset: 0x130
	// Line 4110, Address: 0x143858, Func Offset: 0x138
	// Line 4112, Address: 0x143864, Func Offset: 0x144
	// Line 4113, Address: 0x14389c, Func Offset: 0x17c
	// Line 4114, Address: 0x1438d0, Func Offset: 0x1b0
	// Line 4115, Address: 0x1438e0, Func Offset: 0x1c0
	// Line 4116, Address: 0x1438f0, Func Offset: 0x1d0
	// Line 4117, Address: 0x1438f8, Func Offset: 0x1d8
	// Line 4118, Address: 0x143900, Func Offset: 0x1e0
	// Line 4119, Address: 0x143908, Func Offset: 0x1e8
	// Line 4120, Address: 0x143910, Func Offset: 0x1f0
	// Line 4121, Address: 0x143950, Func Offset: 0x230
	// Line 4122, Address: 0x143984, Func Offset: 0x264
	// Line 4123, Address: 0x143994, Func Offset: 0x274
	// Line 4124, Address: 0x1439a4, Func Offset: 0x284
	// Line 4125, Address: 0x1439ac, Func Offset: 0x28c
	// Line 4126, Address: 0x1439b4, Func Offset: 0x294
	// Line 4127, Address: 0x1439bc, Func Offset: 0x29c
	// Line 4129, Address: 0x1439c4, Func Offset: 0x2a4
	// Line 4131, Address: 0x1439d0, Func Offset: 0x2b0
	// Line 4132, Address: 0x1439dc, Func Offset: 0x2bc
	// Line 4134, Address: 0x1439fc, Func Offset: 0x2dc
	// Line 4136, Address: 0x143a08, Func Offset: 0x2e8
	// Line 4138, Address: 0x143a14, Func Offset: 0x2f4
	// Line 4139, Address: 0x143a20, Func Offset: 0x300
	// Line 4140, Address: 0x143a44, Func Offset: 0x324
	// Line 4141, Address: 0x143a54, Func Offset: 0x334
	// Line 4142, Address: 0x143a64, Func Offset: 0x344
	// Func End, Address: 0x143a80, Func Offset: 0x360
}

// 
// Start address: 0x143a80
void clDbgDrawPolySPHERE(_CL_HITPOLY_SPHERE* sp)
{
	int dangy;
	int dangz;
	float m1[4][4];
	float m0[4][4];
	float v1[4];
	float v0[4];
	_anon3 f4;
	// Line 4145, Address: 0x143a80, Func Offset: 0
	// Line 4151, Address: 0x143a98, Func Offset: 0x18
	// Line 4153, Address: 0x143aac, Func Offset: 0x2c
	// Line 4154, Address: 0x143ab4, Func Offset: 0x34
	// Line 4155, Address: 0x143ac0, Func Offset: 0x40
	// Line 4156, Address: 0x143acc, Func Offset: 0x4c
	// Line 4158, Address: 0x143adc, Func Offset: 0x5c
	// Line 4159, Address: 0x143aec, Func Offset: 0x6c
	// Line 4160, Address: 0x143afc, Func Offset: 0x7c
	// Line 4161, Address: 0x143b0c, Func Offset: 0x8c
	// Line 4163, Address: 0x143b1c, Func Offset: 0x9c
	// Line 4164, Address: 0x143b44, Func Offset: 0xc4
	// Line 4166, Address: 0x143b50, Func Offset: 0xd0
	// Line 4168, Address: 0x143b5c, Func Offset: 0xdc
	// Line 4169, Address: 0x143b94, Func Offset: 0x114
	// Line 4170, Address: 0x143bcc, Func Offset: 0x14c
	// Line 4171, Address: 0x143c00, Func Offset: 0x180
	// Line 4172, Address: 0x143c10, Func Offset: 0x190
	// Line 4173, Address: 0x143c20, Func Offset: 0x1a0
	// Line 4175, Address: 0x143c30, Func Offset: 0x1b0
	// Line 4176, Address: 0x143c68, Func Offset: 0x1e8
	// Line 4177, Address: 0x143ca8, Func Offset: 0x228
	// Line 4178, Address: 0x143cdc, Func Offset: 0x25c
	// Line 4179, Address: 0x143cec, Func Offset: 0x26c
	// Line 4180, Address: 0x143cfc, Func Offset: 0x27c
	// Line 4182, Address: 0x143d0c, Func Offset: 0x28c
	// Line 4183, Address: 0x143d4c, Func Offset: 0x2cc
	// Line 4184, Address: 0x143d8c, Func Offset: 0x30c
	// Line 4185, Address: 0x143dc0, Func Offset: 0x340
	// Line 4186, Address: 0x143dd0, Func Offset: 0x350
	// Line 4187, Address: 0x143de0, Func Offset: 0x360
	// Line 4189, Address: 0x143df0, Func Offset: 0x370
	// Line 4190, Address: 0x143e30, Func Offset: 0x3b0
	// Line 4191, Address: 0x143e68, Func Offset: 0x3e8
	// Line 4192, Address: 0x143e9c, Func Offset: 0x41c
	// Line 4193, Address: 0x143eac, Func Offset: 0x42c
	// Line 4194, Address: 0x143ebc, Func Offset: 0x43c
	// Line 4196, Address: 0x143ecc, Func Offset: 0x44c
	// Line 4197, Address: 0x143ed8, Func Offset: 0x458
	// Line 4198, Address: 0x143eec, Func Offset: 0x46c
	// Line 4199, Address: 0x143efc, Func Offset: 0x47c
	// Func End, Address: 0x143f18, Func Offset: 0x498
}

// 
// Start address: 0x143f20
void clDbgDrawPolyBOX(_CL_HITPOLY_BOX* box)
{
	int j;
	int i;
	_anon3 p;
	unsigned char no[4][6];
	// Line 4202, Address: 0x143f20, Func Offset: 0
	// Line 4203, Address: 0x143f34, Func Offset: 0x14
	// Line 4209, Address: 0x143f50, Func Offset: 0x30
	// Line 4211, Address: 0x143f64, Func Offset: 0x44
	// Line 4213, Address: 0x143f70, Func Offset: 0x50
	// Line 4214, Address: 0x143f7c, Func Offset: 0x5c
	// Line 4215, Address: 0x143fc4, Func Offset: 0xa4
	// Line 4216, Address: 0x143fd0, Func Offset: 0xb0
	// Line 4217, Address: 0x143fe4, Func Offset: 0xc4
	// Func End, Address: 0x143ffc, Func Offset: 0xdc
}

// 
// Start address: 0x144000
void clDbgDrawPolyBOX2(_CL_HITPOLY_BOX2* box2)
{
	_CL_HITPOLY_BOX box;
	// Line 4220, Address: 0x144000, Func Offset: 0
	// Line 4223, Address: 0x144008, Func Offset: 0x8
	// Line 4224, Address: 0x144010, Func Offset: 0x10
	// Line 4225, Address: 0x144018, Func Offset: 0x18
	// Line 4226, Address: 0x144020, Func Offset: 0x20
	// Line 4228, Address: 0x144028, Func Offset: 0x28
	// Line 4229, Address: 0x144038, Func Offset: 0x38
	// Line 4230, Address: 0x144040, Func Offset: 0x40
	// Line 4231, Address: 0x144050, Func Offset: 0x50
	// Line 4232, Address: 0x144058, Func Offset: 0x58
	// Line 4233, Address: 0x144068, Func Offset: 0x68
	// Line 4234, Address: 0x144070, Func Offset: 0x70
	// Line 4235, Address: 0x144080, Func Offset: 0x80
	// Line 4236, Address: 0x144088, Func Offset: 0x88
	// Line 4237, Address: 0x144098, Func Offset: 0x98
	// Line 4238, Address: 0x1440a0, Func Offset: 0xa0
	// Line 4239, Address: 0x1440b0, Func Offset: 0xb0
	// Line 4240, Address: 0x1440b8, Func Offset: 0xb8
	// Line 4241, Address: 0x1440c8, Func Offset: 0xc8
	// Line 4242, Address: 0x1440d0, Func Offset: 0xd0
	// Line 4243, Address: 0x1440e0, Func Offset: 0xe0
	// Line 4245, Address: 0x1440e8, Func Offset: 0xe8
	// Line 4246, Address: 0x1440f4, Func Offset: 0xf4
	// Func End, Address: 0x144104, Func Offset: 0x104
}

// 
// Start address: 0x144110
void clDbgDrawPolyBOX3(_CL_HITPOLY_BOX3* box3)
{
	_CL_HITPOLY_BOX box;
	// Line 4249, Address: 0x144110, Func Offset: 0
	// Line 4252, Address: 0x144118, Func Offset: 0x8
	// Line 4253, Address: 0x144120, Func Offset: 0x10
	// Line 4254, Address: 0x144128, Func Offset: 0x18
	// Line 4255, Address: 0x144130, Func Offset: 0x20
	// Line 4257, Address: 0x144138, Func Offset: 0x28
	// Line 4258, Address: 0x144148, Func Offset: 0x38
	// Line 4259, Address: 0x144158, Func Offset: 0x48
	// Line 4260, Address: 0x144160, Func Offset: 0x50
	// Line 4261, Address: 0x144170, Func Offset: 0x60
	// Line 4262, Address: 0x144180, Func Offset: 0x70
	// Line 4264, Address: 0x144188, Func Offset: 0x78
	// Line 4265, Address: 0x144190, Func Offset: 0x80
	// Line 4266, Address: 0x144198, Func Offset: 0x88
	// Line 4267, Address: 0x1441a0, Func Offset: 0x90
	// Line 4268, Address: 0x1441b0, Func Offset: 0xa0
	// Line 4269, Address: 0x1441c0, Func Offset: 0xb0
	// Line 4271, Address: 0x1441c8, Func Offset: 0xb8
	// Line 4272, Address: 0x1441d0, Func Offset: 0xc0
	// Line 4273, Address: 0x1441d8, Func Offset: 0xc8
	// Line 4274, Address: 0x1441e0, Func Offset: 0xd0
	// Line 4275, Address: 0x1441f0, Func Offset: 0xe0
	// Line 4276, Address: 0x144200, Func Offset: 0xf0
	// Line 4278, Address: 0x144208, Func Offset: 0xf8
	// Line 4279, Address: 0x144214, Func Offset: 0x104
	// Func End, Address: 0x144224, Func Offset: 0x114
}

// 
// Start address: 0x144230
void clDbgDrawPolyLINE(_anon0* p)
{
	unsigned int aaa;
	float zn;
	unsigned char fog;
	int i;
	int sp[4][2];
	float vp[4][2];
	float z;
	float q;
	unsigned long giftag_quad[2];
	// Line 4282, Address: 0x144230, Func Offset: 0
	// Line 4283, Address: 0x144244, Func Offset: 0x14
	// Line 4285, Address: 0x144258, Func Offset: 0x28
	// Line 4286, Address: 0x144268, Func Offset: 0x38
	// Line 4292, Address: 0x14426c, Func Offset: 0x3c
	// Line 4294, Address: 0x144278, Func Offset: 0x48
	// Line 4295, Address: 0x1442bc, Func Offset: 0x8c
	// Line 4296, Address: 0x1442cc, Func Offset: 0x9c
	// Line 4305, Address: 0x1442dc, Func Offset: 0xac
	// Line 4307, Address: 0x1442e8, Func Offset: 0xb8
	// Line 4308, Address: 0x144314, Func Offset: 0xe4
	// Line 4310, Address: 0x144388, Func Offset: 0x158
	// Line 4311, Address: 0x144390, Func Offset: 0x160
	// Line 4317, Address: 0x1443a4, Func Offset: 0x174
	// Line 4319, Address: 0x1443ac, Func Offset: 0x17c
	// Line 4321, Address: 0x1443bc, Func Offset: 0x18c
	// Line 4322, Address: 0x1443d8, Func Offset: 0x1a8
	// Line 4323, Address: 0x1443e4, Func Offset: 0x1b4
	// Line 4325, Address: 0x1443f4, Func Offset: 0x1c4
	// Line 4329, Address: 0x1443f8, Func Offset: 0x1c8
	// Line 4330, Address: 0x14440c, Func Offset: 0x1dc
	// Line 4333, Address: 0x144428, Func Offset: 0x1f8
	// Line 4335, Address: 0x14448c, Func Offset: 0x25c
	// Line 4336, Address: 0x1444e4, Func Offset: 0x2b4
	// Line 4338, Address: 0x14453c, Func Offset: 0x30c
	// Line 4339, Address: 0x144544, Func Offset: 0x314
	// Func End, Address: 0x14455c, Func Offset: 0x32c
}

// 
// Start address: 0x144560
void clDbgDrawPolyF3(_anon2* p)
{
	unsigned int aaa;
	float zn;
	float pparam[4];
	float e2[4];
	float e1[4];
	unsigned char fog;
	int i;
	int sp[4][3];
	float vp[4][3];
	float z;
	float q;
	unsigned long giftag_quad[2];
	// Line 4342, Address: 0x144560, Func Offset: 0
	// Line 4343, Address: 0x144574, Func Offset: 0x14
	// Line 4345, Address: 0x144588, Func Offset: 0x28
	// Line 4346, Address: 0x144598, Func Offset: 0x38
	// Line 4353, Address: 0x14459c, Func Offset: 0x3c
	// Line 4355, Address: 0x1445a8, Func Offset: 0x48
	// Line 4356, Address: 0x1445ec, Func Offset: 0x8c
	// Line 4357, Address: 0x1445fc, Func Offset: 0x9c
	// Line 4360, Address: 0x14460c, Func Offset: 0xac
	// Line 4361, Address: 0x144628, Func Offset: 0xc8
	// Line 4362, Address: 0x144644, Func Offset: 0xe4
	// Line 4363, Address: 0x144668, Func Offset: 0x108
	// Line 4367, Address: 0x144684, Func Offset: 0x124
	// Line 4368, Address: 0x144694, Func Offset: 0x134
	// Line 4369, Address: 0x1446d0, Func Offset: 0x170
	// Line 4371, Address: 0x1446d8, Func Offset: 0x178
	// Line 4373, Address: 0x1446e4, Func Offset: 0x184
	// Line 4374, Address: 0x144710, Func Offset: 0x1b0
	// Line 4376, Address: 0x144788, Func Offset: 0x228
	// Line 4377, Address: 0x144790, Func Offset: 0x230
	// Line 4383, Address: 0x1447a4, Func Offset: 0x244
	// Line 4385, Address: 0x1447ac, Func Offset: 0x24c
	// Line 4387, Address: 0x1447bc, Func Offset: 0x25c
	// Line 4388, Address: 0x1447d8, Func Offset: 0x278
	// Line 4389, Address: 0x1447e4, Func Offset: 0x284
	// Line 4391, Address: 0x1447f4, Func Offset: 0x294
	// Line 4395, Address: 0x1447f8, Func Offset: 0x298
	// Line 4396, Address: 0x14480c, Func Offset: 0x2ac
	// Line 4399, Address: 0x144828, Func Offset: 0x2c8
	// Line 4401, Address: 0x14488c, Func Offset: 0x32c
	// Line 4402, Address: 0x1448e4, Func Offset: 0x384
	// Line 4403, Address: 0x14493c, Func Offset: 0x3dc
	// Line 4405, Address: 0x144994, Func Offset: 0x434
	// Line 4406, Address: 0x14499c, Func Offset: 0x43c
	// Func End, Address: 0x1449b4, Func Offset: 0x454
}

// 
// Start address: 0x1449c0
void clDbgDrawPolyF4(_anon3* p)
{
	unsigned int aaa;
	float zn;
	float pparam[4];
	float e2[4];
	float e1[4];
	unsigned char fog;
	int i;
	int sp[4][4];
	float vp[4][4];
	float z;
	float q;
	unsigned long giftag_quad[2];
	// Line 4409, Address: 0x1449c0, Func Offset: 0
	// Line 4410, Address: 0x1449d4, Func Offset: 0x14
	// Line 4412, Address: 0x1449e8, Func Offset: 0x28
	// Line 4413, Address: 0x1449f8, Func Offset: 0x38
	// Line 4420, Address: 0x1449fc, Func Offset: 0x3c
	// Line 4422, Address: 0x144a08, Func Offset: 0x48
	// Line 4423, Address: 0x144a4c, Func Offset: 0x8c
	// Line 4424, Address: 0x144a5c, Func Offset: 0x9c
	// Line 4427, Address: 0x144a6c, Func Offset: 0xac
	// Line 4428, Address: 0x144a88, Func Offset: 0xc8
	// Line 4429, Address: 0x144aa4, Func Offset: 0xe4
	// Line 4430, Address: 0x144ac8, Func Offset: 0x108
	// Line 4434, Address: 0x144ae4, Func Offset: 0x124
	// Line 4435, Address: 0x144af4, Func Offset: 0x134
	// Line 4436, Address: 0x144b30, Func Offset: 0x170
	// Line 4438, Address: 0x144b38, Func Offset: 0x178
	// Line 4440, Address: 0x144b44, Func Offset: 0x184
	// Line 4441, Address: 0x144b70, Func Offset: 0x1b0
	// Line 4443, Address: 0x144be8, Func Offset: 0x228
	// Line 4444, Address: 0x144bf0, Func Offset: 0x230
	// Line 4450, Address: 0x144c04, Func Offset: 0x244
	// Line 4452, Address: 0x144c0c, Func Offset: 0x24c
	// Line 4454, Address: 0x144c1c, Func Offset: 0x25c
	// Line 4455, Address: 0x144c38, Func Offset: 0x278
	// Line 4456, Address: 0x144c44, Func Offset: 0x284
	// Line 4458, Address: 0x144c54, Func Offset: 0x294
	// Line 4462, Address: 0x144c58, Func Offset: 0x298
	// Line 4463, Address: 0x144c6c, Func Offset: 0x2ac
	// Line 4466, Address: 0x144c88, Func Offset: 0x2c8
	// Line 4468, Address: 0x144cec, Func Offset: 0x32c
	// Line 4469, Address: 0x144d44, Func Offset: 0x384
	// Line 4470, Address: 0x144d9c, Func Offset: 0x3dc
	// Line 4472, Address: 0x144df4, Func Offset: 0x434
	// Line 4474, Address: 0x144e4c, Func Offset: 0x48c
	// Line 4475, Address: 0x144e54, Func Offset: 0x494
	// Func End, Address: 0x144e6c, Func Offset: 0x4ac
}

// 
// Start address: 0x144e70
void clDbgScissorDrawF3()
{
	// Line 4478, Address: 0x144e70, Func Offset: 0
	// Line 4480, Address: 0x144e74, Func Offset: 0x4
	// Func End, Address: 0x144e80, Func Offset: 0x10
}

// 
// Start address: 0x144e80
void clDbgScissorDrawF4(_anon3* p)
{
	float scrw;
	float tv[4];
	float t1;
	float t0;
	int usecnt;
	float rlclip;
	float tvec[4];
	float tmp1;
	float tmp0;
	int usecnt;
	float farz;
	float tvec[4];
	float tmp1;
	float tmp0;
	int usecnt;
	float scrz;
	float e2[4];
	float e1[4];
	float pparam[4];
	float tp[2];
	float vp1[4];
	float vp0[4];
	float tmp[4][32];
	int i;
	_anon5 fan;
	// Line 4483, Address: 0x144e80, Func Offset: 0
	// Line 4490, Address: 0x144e88, Func Offset: 0x8
	// Line 4491, Address: 0x144e90, Func Offset: 0x10
	// Line 4492, Address: 0x144e98, Func Offset: 0x18
	// Line 4493, Address: 0x144ea0, Func Offset: 0x20
	// Line 4495, Address: 0x144ea8, Func Offset: 0x28
	// Line 4497, Address: 0x144eb4, Func Offset: 0x34
	// Line 4498, Address: 0x144ef8, Func Offset: 0x78
	// Line 4499, Address: 0x144f0c, Func Offset: 0x8c
	// Line 4500, Address: 0x144f1c, Func Offset: 0x9c
	// Line 4506, Address: 0x144f2c, Func Offset: 0xac
	// Line 4507, Address: 0x144f48, Func Offset: 0xc8
	// Line 4508, Address: 0x144f64, Func Offset: 0xe4
	// Line 4509, Address: 0x144f88, Func Offset: 0x108
	// Line 4516, Address: 0x144fa4, Func Offset: 0x124
	// Line 4518, Address: 0x144fa8, Func Offset: 0x128
	// Line 4520, Address: 0x144fbc, Func Offset: 0x13c
	// Line 4522, Address: 0x144fc8, Func Offset: 0x148
	// Line 4523, Address: 0x144fe0, Func Offset: 0x160
	// Line 4524, Address: 0x14500c, Func Offset: 0x18c
	// Line 4526, Address: 0x145024, Func Offset: 0x1a4
	// Line 4528, Address: 0x145040, Func Offset: 0x1c0
	// Line 4530, Address: 0x145068, Func Offset: 0x1e8
	// Line 4534, Address: 0x145090, Func Offset: 0x210
	// Line 4535, Address: 0x1450a8, Func Offset: 0x228
	// Line 4536, Address: 0x1450b4, Func Offset: 0x234
	// Line 4538, Address: 0x1450c4, Func Offset: 0x244
	// Line 4539, Address: 0x1450d0, Func Offset: 0x250
	// Line 4541, Address: 0x1450e0, Func Offset: 0x260
	// Line 4543, Address: 0x1450e4, Func Offset: 0x264
	// Line 4545, Address: 0x1450f4, Func Offset: 0x274
	// Line 4547, Address: 0x145108, Func Offset: 0x288
	// Line 4548, Address: 0x145128, Func Offset: 0x2a8
	// Line 4551, Address: 0x145130, Func Offset: 0x2b0
	// Line 4552, Address: 0x145150, Func Offset: 0x2d0
	// Line 4554, Address: 0x145170, Func Offset: 0x2f0
	// Line 4556, Address: 0x145178, Func Offset: 0x2f8
	// Line 4557, Address: 0x145198, Func Offset: 0x318
	// Line 4558, Address: 0x1451c8, Func Offset: 0x348
	// Line 4564, Address: 0x1451dc, Func Offset: 0x35c
	// Line 4566, Address: 0x1451e0, Func Offset: 0x360
	// Line 4569, Address: 0x1451e8, Func Offset: 0x368
	// Line 4571, Address: 0x1451f4, Func Offset: 0x374
	// Line 4572, Address: 0x14520c, Func Offset: 0x38c
	// Line 4573, Address: 0x145238, Func Offset: 0x3b8
	// Line 4575, Address: 0x145250, Func Offset: 0x3d0
	// Line 4577, Address: 0x145270, Func Offset: 0x3f0
	// Line 4579, Address: 0x145298, Func Offset: 0x418
	// Line 4584, Address: 0x1452c0, Func Offset: 0x440
	// Line 4585, Address: 0x1452d8, Func Offset: 0x458
	// Line 4586, Address: 0x1452e4, Func Offset: 0x464
	// Line 4588, Address: 0x1452f4, Func Offset: 0x474
	// Line 4589, Address: 0x145300, Func Offset: 0x480
	// Line 4591, Address: 0x145310, Func Offset: 0x490
	// Line 4593, Address: 0x145314, Func Offset: 0x494
	// Line 4595, Address: 0x145324, Func Offset: 0x4a4
	// Line 4597, Address: 0x145338, Func Offset: 0x4b8
	// Line 4598, Address: 0x145358, Func Offset: 0x4d8
	// Line 4601, Address: 0x145360, Func Offset: 0x4e0
	// Line 4602, Address: 0x145380, Func Offset: 0x500
	// Line 4604, Address: 0x1453a0, Func Offset: 0x520
	// Line 4606, Address: 0x1453a8, Func Offset: 0x528
	// Line 4607, Address: 0x1453c8, Func Offset: 0x548
	// Line 4608, Address: 0x1453f8, Func Offset: 0x578
	// Line 4615, Address: 0x14540c, Func Offset: 0x58c
	// Line 4621, Address: 0x145410, Func Offset: 0x590
	// Line 4624, Address: 0x145418, Func Offset: 0x598
	// Line 4626, Address: 0x14542c, Func Offset: 0x5ac
	// Line 4628, Address: 0x145438, Func Offset: 0x5b8
	// Line 4629, Address: 0x145450, Func Offset: 0x5d0
	// Line 4630, Address: 0x14547c, Func Offset: 0x5fc
	// Line 4632, Address: 0x145494, Func Offset: 0x614
	// Line 4634, Address: 0x1454b0, Func Offset: 0x630
	// Line 4635, Address: 0x1454c0, Func Offset: 0x640
	// Line 4637, Address: 0x1454d0, Func Offset: 0x650
	// Line 4639, Address: 0x145500, Func Offset: 0x680
	// Line 4641, Address: 0x145530, Func Offset: 0x6b0
	// Line 4643, Address: 0x145548, Func Offset: 0x6c8
	// Line 4644, Address: 0x145564, Func Offset: 0x6e4
	// Line 4645, Address: 0x145584, Func Offset: 0x704
	// Line 4647, Address: 0x14558c, Func Offset: 0x70c
	// Line 4648, Address: 0x1455a8, Func Offset: 0x728
	// Line 4649, Address: 0x1455b4, Func Offset: 0x734
	// Line 4651, Address: 0x1455c4, Func Offset: 0x744
	// Line 4652, Address: 0x1455e0, Func Offset: 0x760
	// Line 4653, Address: 0x1455f0, Func Offset: 0x770
	// Line 4656, Address: 0x1455f8, Func Offset: 0x778
	// Line 4657, Address: 0x145600, Func Offset: 0x780
	// Line 4658, Address: 0x145610, Func Offset: 0x790
	// Line 4659, Address: 0x14562c, Func Offset: 0x7ac
	// Line 4660, Address: 0x145638, Func Offset: 0x7b8
	// Line 4663, Address: 0x145648, Func Offset: 0x7c8
	// Line 4665, Address: 0x145658, Func Offset: 0x7d8
	// Line 4667, Address: 0x145670, Func Offset: 0x7f0
	// Line 4668, Address: 0x145690, Func Offset: 0x810
	// Line 4671, Address: 0x145698, Func Offset: 0x818
	// Line 4672, Address: 0x1456b8, Func Offset: 0x838
	// Line 4674, Address: 0x1456d8, Func Offset: 0x858
	// Line 4676, Address: 0x1456e0, Func Offset: 0x860
	// Line 4677, Address: 0x145700, Func Offset: 0x880
	// Line 4678, Address: 0x145730, Func Offset: 0x8b0
	// Line 4681, Address: 0x145744, Func Offset: 0x8c4
	// Line 4682, Address: 0x145748, Func Offset: 0x8c8
	// Line 4684, Address: 0x145754, Func Offset: 0x8d4
	// Line 4685, Address: 0x14576c, Func Offset: 0x8ec
	// Line 4686, Address: 0x145798, Func Offset: 0x918
	// Line 4688, Address: 0x1457b0, Func Offset: 0x930
	// Line 4690, Address: 0x1457d0, Func Offset: 0x950
	// Line 4691, Address: 0x1457dc, Func Offset: 0x95c
	// Line 4693, Address: 0x1457e8, Func Offset: 0x968
	// Line 4695, Address: 0x145818, Func Offset: 0x998
	// Line 4697, Address: 0x145848, Func Offset: 0x9c8
	// Line 4699, Address: 0x145860, Func Offset: 0x9e0
	// Line 4700, Address: 0x14587c, Func Offset: 0x9fc
	// Line 4701, Address: 0x1458a0, Func Offset: 0xa20
	// Line 4703, Address: 0x1458a8, Func Offset: 0xa28
	// Line 4704, Address: 0x1458c4, Func Offset: 0xa44
	// Line 4705, Address: 0x1458d0, Func Offset: 0xa50
	// Line 4707, Address: 0x1458e0, Func Offset: 0xa60
	// Line 4708, Address: 0x1458fc, Func Offset: 0xa7c
	// Line 4709, Address: 0x14590c, Func Offset: 0xa8c
	// Line 4712, Address: 0x145914, Func Offset: 0xa94
	// Line 4713, Address: 0x14591c, Func Offset: 0xa9c
	// Line 4714, Address: 0x145928, Func Offset: 0xaa8
	// Line 4715, Address: 0x145944, Func Offset: 0xac4
	// Line 4716, Address: 0x145950, Func Offset: 0xad0
	// Line 4719, Address: 0x145960, Func Offset: 0xae0
	// Line 4721, Address: 0x145970, Func Offset: 0xaf0
	// Line 4723, Address: 0x145988, Func Offset: 0xb08
	// Line 4724, Address: 0x1459a8, Func Offset: 0xb28
	// Line 4727, Address: 0x1459b0, Func Offset: 0xb30
	// Line 4728, Address: 0x1459d0, Func Offset: 0xb50
	// Line 4730, Address: 0x1459f0, Func Offset: 0xb70
	// Line 4732, Address: 0x1459f8, Func Offset: 0xb78
	// Line 4733, Address: 0x145a18, Func Offset: 0xb98
	// Line 4734, Address: 0x145a48, Func Offset: 0xbc8
	// Line 4864, Address: 0x145a5c, Func Offset: 0xbdc
	// Line 4865, Address: 0x145a68, Func Offset: 0xbe8
	// Line 4866, Address: 0x145ab8, Func Offset: 0xc38
	// Line 4868, Address: 0x145acc, Func Offset: 0xc4c
	// Line 4869, Address: 0x145ad8, Func Offset: 0xc58
	// Func End, Address: 0x145ae8, Func Offset: 0xc68
}

// 
// Start address: 0x145af0
void clDbgDrawPolyFAN(_anon5* p)
{
	int j;
	unsigned int aaa;
	float zn;
	int vno;
	unsigned char fog[12];
	int i;
	int sp[4][12];
	float z;
	float q;
	unsigned long giftag_quad[2];
	// Line 4872, Address: 0x145af0, Func Offset: 0
	// Line 4874, Address: 0x145b14, Func Offset: 0x24
	// Line 4875, Address: 0x145b24, Func Offset: 0x34
	// Line 4882, Address: 0x145b30, Func Offset: 0x40
	// Line 4883, Address: 0x145b3c, Func Offset: 0x4c
	// Line 4885, Address: 0x145b48, Func Offset: 0x58
	// Line 4887, Address: 0x145b74, Func Offset: 0x84
	// Line 4888, Address: 0x145b88, Func Offset: 0x98
	// Line 4889, Address: 0x145bb0, Func Offset: 0xc0
	// Line 4890, Address: 0x145bbc, Func Offset: 0xcc
	// Line 4892, Address: 0x145bfc, Func Offset: 0x10c
	// Line 4893, Address: 0x145c18, Func Offset: 0x128
	// Line 4897, Address: 0x145c24, Func Offset: 0x134
	// Line 4898, Address: 0x145c54, Func Offset: 0x164
	// Line 4899, Address: 0x145c80, Func Offset: 0x190
	// Line 4900, Address: 0x145c8c, Func Offset: 0x19c
	// Line 4902, Address: 0x145ca0, Func Offset: 0x1b0
	// Line 4907, Address: 0x145ca8, Func Offset: 0x1b8
	// Line 4909, Address: 0x145cb4, Func Offset: 0x1c4
	// Line 4910, Address: 0x145cd0, Func Offset: 0x1e0
	// Line 4911, Address: 0x145ce8, Func Offset: 0x1f8
	// Line 4912, Address: 0x145d0c, Func Offset: 0x21c
	// Line 4913, Address: 0x145d28, Func Offset: 0x238
	// Line 4915, Address: 0x145d3c, Func Offset: 0x24c
	// Line 4918, Address: 0x145d4c, Func Offset: 0x25c
	// Line 4919, Address: 0x145d64, Func Offset: 0x274
	// Line 4921, Address: 0x145d80, Func Offset: 0x290
	// Line 4923, Address: 0x145df0, Func Offset: 0x300
	// Line 4924, Address: 0x145dfc, Func Offset: 0x30c
	// Line 4926, Address: 0x145e84, Func Offset: 0x394
	// Line 4927, Address: 0x145e8c, Func Offset: 0x39c
	// Func End, Address: 0x145eb4, Func Offset: 0x3c4
}

// 
// Start address: 0x145ec0
void clDbgSetMaterialColor(unsigned char mat, unsigned char* rgba)
{
	// Line 4930, Address: 0x145ec0, Func Offset: 0
	// Line 4931, Address: 0x145ecc, Func Offset: 0xc
	// Line 4934, Address: 0x145efc, Func Offset: 0x3c
	// Line 4935, Address: 0x145f04, Func Offset: 0x44
	// Line 4936, Address: 0x145f0c, Func Offset: 0x4c
	// Line 4937, Address: 0x145f18, Func Offset: 0x58
	// Line 4938, Address: 0x145f20, Func Offset: 0x60
	// Line 4940, Address: 0x145f28, Func Offset: 0x68
	// Line 4941, Address: 0x145f34, Func Offset: 0x74
	// Line 4942, Address: 0x145f3c, Func Offset: 0x7c
	// Line 4943, Address: 0x145f44, Func Offset: 0x84
	// Line 4944, Address: 0x145f4c, Func Offset: 0x8c
	// Line 4946, Address: 0x145f54, Func Offset: 0x94
	// Line 4947, Address: 0x145f5c, Func Offset: 0x9c
	// Line 4948, Address: 0x145f68, Func Offset: 0xa8
	// Line 4949, Address: 0x145f70, Func Offset: 0xb0
	// Line 4950, Address: 0x145f78, Func Offset: 0xb8
	// Line 4952, Address: 0x145f80, Func Offset: 0xc0
	// Line 4953, Address: 0x145f8c, Func Offset: 0xcc
	// Line 4954, Address: 0x145f98, Func Offset: 0xd8
	// Line 4955, Address: 0x145fa0, Func Offset: 0xe0
	// Line 4956, Address: 0x145fa8, Func Offset: 0xe8
	// Line 4958, Address: 0x145fb0, Func Offset: 0xf0
	// Line 4959, Address: 0x145fbc, Func Offset: 0xfc
	// Line 4960, Address: 0x145fc8, Func Offset: 0x108
	// Line 4961, Address: 0x145fd0, Func Offset: 0x110
	// Line 4962, Address: 0x145fd8, Func Offset: 0x118
	// Line 4964, Address: 0x145fe0, Func Offset: 0x120
	// Line 4965, Address: 0x145fec, Func Offset: 0x12c
	// Line 4966, Address: 0x145ff8, Func Offset: 0x138
	// Line 4967, Address: 0x146004, Func Offset: 0x144
	// Line 4968, Address: 0x14600c, Func Offset: 0x14c
	// Line 4970, Address: 0x146014, Func Offset: 0x154
	// Line 4971, Address: 0x146020, Func Offset: 0x160
	// Line 4972, Address: 0x14602c, Func Offset: 0x16c
	// Line 4973, Address: 0x146034, Func Offset: 0x174
	// Line 4974, Address: 0x14603c, Func Offset: 0x17c
	// Line 4976, Address: 0x146044, Func Offset: 0x184
	// Line 4977, Address: 0x146050, Func Offset: 0x190
	// Line 4978, Address: 0x14605c, Func Offset: 0x19c
	// Line 4979, Address: 0x146064, Func Offset: 0x1a4
	// Line 4980, Address: 0x14606c, Func Offset: 0x1ac
	// Line 4982, Address: 0x146074, Func Offset: 0x1b4
	// Line 4983, Address: 0x146080, Func Offset: 0x1c0
	// Line 4984, Address: 0x14608c, Func Offset: 0x1cc
	// Line 4985, Address: 0x146098, Func Offset: 0x1d8
	// Line 4986, Address: 0x1460a0, Func Offset: 0x1e0
	// Line 4988, Address: 0x1460a8, Func Offset: 0x1e8
	// Line 4989, Address: 0x1460b4, Func Offset: 0x1f4
	// Line 4990, Address: 0x1460c0, Func Offset: 0x200
	// Line 4991, Address: 0x1460cc, Func Offset: 0x20c
	// Line 4992, Address: 0x1460d4, Func Offset: 0x214
	// Line 4994, Address: 0x1460dc, Func Offset: 0x21c
	// Line 4995, Address: 0x1460e8, Func Offset: 0x228
	// Line 4996, Address: 0x1460f4, Func Offset: 0x234
	// Line 4997, Address: 0x146100, Func Offset: 0x240
	// Line 4998, Address: 0x146108, Func Offset: 0x248
	// Line 5000, Address: 0x146110, Func Offset: 0x250
	// Line 5001, Address: 0x14611c, Func Offset: 0x25c
	// Line 5002, Address: 0x146128, Func Offset: 0x268
	// Line 5003, Address: 0x146134, Func Offset: 0x274
	// Line 5006, Address: 0x14613c, Func Offset: 0x27c
	// Func End, Address: 0x146148, Func Offset: 0x288
}

