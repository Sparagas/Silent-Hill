typedef struct _ObjHitCylinder;
typedef struct sfObj;
typedef struct _ObjHitCube;
typedef struct _ObjHitSphere;
typedef struct _ObjHitDoor;
typedef struct _EnforceItemWork;
typedef struct _ObjHitData;
typedef union _anon0;

typedef void(*type_84)(sfObj*);
typedef void(*type_101)(sfObj*);

typedef _anon0 type_0[18];
typedef _anon0 type_1[16];
typedef _anon0 type_2[6];
typedef _anon0 type_3[16];
typedef _anon0 type_4[16];
typedef _anon0 type_5[6];
typedef _anon0 type_6[6];
typedef _anon0 type_7[6];
typedef _anon0 type_8[6];
typedef _anon0 type_9[6];
typedef _anon0 type_10[6];
typedef _anon0 type_11[16];
typedef _anon0 type_12[16];
typedef _anon0 type_13[16];
typedef _anon0 type_14[16];
typedef _anon0 type_15[16];
typedef _anon0 type_16[16];
typedef _anon0 type_17[6];
typedef _anon0 type_18[6];
typedef _anon0 type_19[16];
typedef _anon0 type_20[16];
typedef _anon0 type_21[16];
typedef _anon0 type_22[16];
typedef _anon0 type_23[16];
typedef _anon0 type_24[6];
typedef _anon0 type_25[16];
typedef _anon0 type_26[6];
typedef _anon0 type_27[6];
typedef _anon0 type_28[6];
typedef _anon0 type_29[13];
typedef _anon0 type_30[6];
typedef _anon0 type_31[16];
typedef _anon0 type_32[16];
typedef _anon0 type_33[16];
typedef float type_34[4];
typedef _anon0 type_35[16];
typedef _anon0 type_36[6];
typedef _anon0 type_37[16];
typedef _anon0 type_38[6];
typedef _anon0 type_39[16];
typedef _anon0 type_40[9];
typedef _anon0 type_41[16];
typedef _anon0 type_42[16];
typedef _anon0 type_43[6];
typedef _anon0 type_44[16];
typedef _anon0 type_45[16];
typedef _anon0 type_46[16];
typedef _anon0 type_47[6];
typedef int type_48[1];
typedef _anon0 type_49[6];
typedef _anon0 type_50[11];
typedef _anon0 type_51[6];
typedef _anon0 type_52[16];
typedef _anon0 type_53[6];
typedef _anon0 type_54[6];
typedef _anon0 type_55[16];
typedef _anon0 type_56[16];
typedef _anon0 type_57[16];
typedef _anon0 type_58[16];
typedef _anon0 type_59[16];
typedef _anon0 type_60[16];
typedef _anon0 type_61[6];
typedef _anon0 type_62[16];
typedef float type_63[4];
typedef _anon0 type_64[16];
typedef _anon0 type_65[16];
typedef _anon0 type_66[6];
typedef _anon0 type_67[6];
typedef _anon0 type_68[6];
typedef _anon0 type_69[6];
typedef short type_70[2];
typedef unsigned short type_71[2];
typedef _anon0 type_72[6];
typedef char type_73[4];
typedef _anon0 type_74[17];
typedef _anon0 type_75[16];
typedef unsigned char type_76[4];
typedef _anon0 type_77[256];
typedef _anon0 type_78[6];
typedef _anon0 type_79[16];
typedef _anon0 type_80[16];
typedef float type_81[1];
typedef _anon0 type_82[16];
typedef _anon0 type_83[16];
typedef _anon0 type_85[16];
typedef _anon0 type_86[6];
typedef int type_87[1];
typedef _anon0 type_88[16];
typedef _anon0 type_89[16];
typedef _anon0 type_90[16];
typedef _anon0 type_91[16];
typedef _anon0 type_92[6];
typedef _anon0 type_93[6];
typedef _anon0 type_94[16];
typedef _anon0 type_95[16];
typedef _anon0 type_96[6];
typedef _anon0 type_97[6];
typedef _anon0 type_98[11];
typedef _anon0 type_99[6];
typedef _anon0 type_100[6];
typedef _anon0 type_102[16];
typedef _anon0 type_103[16];
typedef _anon0 type_104[16];
typedef _anon0 type_105[16];
typedef _anon0 type_106[6];
typedef _anon0 type_107[16];
typedef _anon0 type_108[16];
typedef _anon0 type_109[16];
typedef _anon0 type_110[6];

struct _ObjHitCylinder
{
	float r;
	float h;
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _ObjHitCube
{
	float w;
	float h;
	float d;
};

struct _ObjHitSphere
{
	float r;
};

struct _ObjHitDoor
{
	int num;
};

struct _EnforceItemWork
{
	char use;
	char finisher;
	short live;
	short no;
	short stage;
	short scene;
	short type;
	float p[4];
	float quat[4];
	int model_id;
	int tex_id;
	int item_id;
	short level;
	_ObjHitData hitdt;
	int val[1];
};

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
};

union _anon0
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

_anon0 MsgCommon_QustionEnterHole[9];
_anon0 MsgCommon_ItemFull[6];
_anon0 MsgCommon_LockedKey[6];
_anon0 MsgCommon_OpenKey[6];
_anon0 MsgCommon_BrokenKey[6];
_anon0 MsgCommon_HardClose[6];
_anon0 MsgCommon_BacksideLock[6];
_anon0 MsgCommon_NotWorrisome[6];
_anon0 MsgCommon_DontCare[6];
_anon0 MsgCommon_CantUse[6];
_anon0 MsgCommon_EileenCantPlaced[6];
_anon0 MsgCommon_LadderUp[11];
_anon0 MsgCommon_LadderDown[11];
_anon0 MsgCommon_LadderUpDown[13];
_anon0 MsgCommon_DummyQustionGet[16];
_anon0 MsgCommon_QustionGetSilverBullet[16];
_anon0 MsgCommon_QustionGetCandle[16];
_anon0 MsgCommon_QustionGetMedallion[16];
_anon0 MsgCommon_QustionGetBulletS[16];
_anon0 MsgCommon_QustionGetBulletL[16];
_anon0 MsgCommon_QustionGetRedChrism[16];
_anon0 MsgCommon_QustionGetLoadsPrayer[16];
_anon0 MsgCommon_QustionGetHealthDrink[16];
_anon0 MsgCommon_QustionGetFirstAid[16];
_anon0 MsgCommon_QustionGetAmple[16];
_anon0 MsgCommon_QustionGetCutter[16];
_anon0 MsgCommon_QustionGetBat[16];
_anon0 MsgCommon_QustionGetDriver[16];
_anon0 MsgCommon_QustionGetSpoon[16];
_anon0 MsgCommon_QustionGet3rdIron[16];
_anon0 MsgCommon_QustionGet4shIron[16];
_anon0 MsgCommon_QustionGet5thIron[16];
_anon0 MsgCommon_QustionGet6thIron[16];
_anon0 MsgCommon_QustionGet7thIron[16];
_anon0 MsgCommon_QustionGet8thIron[16];
_anon0 MsgCommon_QustionGet9thIron[16];
_anon0 MsgCommon_QustionGetPitchingWedge[16];
_anon0 MsgCommon_QustionGetSandWedge[16];
_anon0 MsgCommon_QustionGetPutter[16];
_anon0 MsgCommon_QustionGetDriver_Broken[16];
_anon0 MsgCommon_QustionGetSpoon_Broken[16];
_anon0 MsgCommon_QustionGet3rdIron_Broken[16];
_anon0 MsgCommon_QustionGet4shIron_Broken[16];
_anon0 MsgCommon_QustionGet5thIron_Broken[16];
_anon0 MsgCommon_QustionGet6thIron_Broken[16];
_anon0 MsgCommon_QustionGet7thIron_Broken[16];
_anon0 MsgCommon_QustionGet8thIron_Broken[16];
_anon0 MsgCommon_QustionGet9thIron_Broken[16];
_anon0 MsgCommon_QustionGetPitchingWedge_Broken[16];
_anon0 MsgCommon_QustionGetSandWedge_Broken[16];
_anon0 MsgCommon_QustionGetPutter_Broken[16];
_anon0 MsgCommon_QustionGetWine[16];
_anon0 MsgCommon_QustionGetBrokenWine[16];
_anon0 MsgCommon_QustionGetStangun[16];
_anon0 MsgCommon_QustionGetSpray[16];
_anon0 MsgCommon_QustionPipe[16];
sfObj* mcd_obj;
_anon0 MsgCommon_QustionGetFinisherEnforce[18];
_anon0 MsgCommon_QustionGetFinisher[16];
_anon0 MsgCommon_QuestionMetalBat[16];
_anon0 MsgCommon_QuestionChainsaw[16];
_anon0 MsgCommon_QuestionBrownJack[16];
_anon0 MsgCommon_QuestionChain[16];
_anon0 MsgCommon_QuestionRevolver[16];
_anon0 MsgCommon_QuestionSubMachineGun[16];
_anon0 MsgCommon_QuestionHorseWhip[16];
_anon0 MsgCommon_QuestionDirtyStone1[16];
_anon0 MsgCommon_QuestionDirtyStone2[16];
_anon0 MsgCommon_QuestionDirtyStone3[16];
_anon0 MsgCommon_QuestionDirtyStone4[16];
_anon0 MsgCommon_QuestionDirtyStone5[16];
_anon0 MsgHome0_ie22_porno[6];
_anon0 MsgHome0_ie22_floor[6];
_anon0 MsgHome0_ie22_desk[6];
_anon0 MsgHome0_ie22_report[17];
_anon0 MsgHome0_ie03_doorplate[6];
_anon0 MsgHome0_ie03_end_of_the_holl[6];
_anon0 MsgHome0_ie11_end_of_the_holl[6];
_anon0 MsgHome0_ie07_uniform[6];
_anon0 MsgHome0_ie08_speeker[6];
_anon0 MsgHome0_ie08_turntable[6];
_anon0 MsgHome0_ie08_rack[6];
_anon0 MsgHome0_ie04_light[6];
_anon0 MsgHome0_ie05_lamp[6];
_anon0 MsgHome0_ie06_bookrack[6];
_anon0 MsgHome0_ie06_gun_1st[6];
_anon0 MsgHome0_ie06_gun[6];
_anon0 MsgHome0_ie06_target[6];
_anon0 MsgHome0_ie18_console[6];
_anon0 MsgHome0_ie18_tv[6];
_anon0 MsgHome0_ie18_bookrack[6];
_anon0 MsgHome0_ie18_barbell[6];
_anon0 MsgHome0_ie16_toys[6];
_anon0 MsgHome0_ie16_bed[6];
_anon0 MsgHome0_ie16_wall[6];
_anon0 MsgHome0_ie19_kitchen[6];
_anon0 MsgHome0_ie19_bottle[6];
_anon0 MsgHome0_ie19_bottle_on_the_floor[6];
_anon0 MsgHome0_ie19_bottle_in_the_box[6];
_anon0 MsgHome0_ie15_plate[6];

void MsgCommon_QustionGetFinisherEnforce_func();

// 
// Start address: 0x2944b0
void MsgCommon_QustionGetFinisherEnforce_func()
{
	_EnforceItemWork* enforce;
	int id;
	// Line 499, Address: 0x2944b0, Func Offset: 0
	// Line 503, Address: 0x2944b4, Func Offset: 0x4
	// Line 499, Address: 0x2944b8, Func Offset: 0x8
	// Line 503, Address: 0x2944bc, Func Offset: 0xc
	// Line 504, Address: 0x2944c4, Func Offset: 0x14
	// Line 505, Address: 0x2944d0, Func Offset: 0x20
	// Line 506, Address: 0x2944d8, Func Offset: 0x28
	// Func End, Address: 0x2944e4, Func Offset: 0x34
}

