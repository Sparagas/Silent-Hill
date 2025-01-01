typedef struct _anon0;
typedef struct sfObj;
typedef struct sfCharacter;
typedef struct _anon1;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sgIKHandle;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _EventDriver;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct EventFlag;
typedef struct sgSVModel;
typedef struct _anon10;

typedef void(*type_3)(_anon0*, int, int, float*);
typedef void(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef sgIKSolveResult(*type_21)();
typedef void(*type_25)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_31)(sfObj*);
typedef int(*type_32)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef int(*type_36)(sfObj*);
typedef void(*type_39)(sfObj*);
typedef void(*type_45)(sgAnime*, int);
typedef void(*type_47)(sfObj*);
typedef void(*type_56)(sfObj*);
typedef void(*type_58)(sfObj*);

typedef float type_0[4][4];
typedef float type_1[4];
typedef _anon6 type_2[10];
typedef float type_4[4];
typedef _anon7 type_5[21];
typedef _anon6 type_6[5];
typedef _anon8 type_7[10];
typedef _anon6 type_10[5];
typedef _anon6 type_11[5];
typedef _anon6 type_12[10];
typedef sfObj* type_14[4];
typedef _anon6 type_15[1];
typedef float type_16[4][2];
typedef float type_17[2];
typedef _anon6 type_18[4];
typedef float type_19[2][2];
typedef sfObj* type_20[6];
typedef _anon4 type_22[4];
typedef float type_23[4];
typedef _anon6 type_24[10];
typedef _anon6 type_26[6];
typedef unsigned char type_27[4];
typedef _anon6 type_29[1];
typedef unsigned char type_30[4];
typedef _anon6 type_33[18];
typedef _anon6 type_35[3];
typedef void* type_37[4];
typedef _anon6 type_38[23];
typedef _anon9 type_40[4];
typedef short type_41[2];
typedef _anon6 type_42[1];
typedef unsigned short type_43[2];
typedef _anon9 type_44[256];
typedef char type_46[4];
typedef unsigned char type_48[4];
typedef _anon6 type_49[5];
typedef float type_50[1];
typedef int type_51[1];
typedef _anon6 type_52[14];
typedef unsigned char type_53[320];
typedef unsigned char type_54[4];
typedef _anon6 type_55[5];
typedef _anon6 type_57[10];
typedef _anon6 type_59[9];
typedef _anon6 type_60[3];

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sfObj
{
	_anon9 fwork[256];
	_anon9* work;
	void(*func)(sfObj*);
	_anon9* work_pt0;
	_anon9* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon9* sys_work;
	_anon9* scene_work;
	_anon9* event_work;
	_anon9* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon10 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon1
{
	int event_id;
	int n_chara;
	sfObj* obj[4];
	int timer;
	int se_no;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon2
{
	sfCharacter chara;
	unsigned int group_id;
	unsigned char action_no;
};

struct _anon3
{
	int event_id;
	sfCharacter chara;
	unsigned int anm;
	int loop;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct _anon4
{
	int event_id;
	float rot[2][2];
	float angle;
};

struct _anon5
{
	int n_obj;
	sfObj* chara[6];
};

struct _anon6
{
	unsigned int anm_id;
	unsigned char next_anm_no[4];
	unsigned char next_percent[4];
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon9 val[4];
};

struct _anon7
{
	unsigned int group_id;
	unsigned char chara_no;
	_anon6* action;
};

struct _anon8
{
	char id;
	unsigned int mdl;
	unsigned int tex;
};

union _anon9
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

struct EventFlag
{
	unsigned char flag[320];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon10
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

_anon8 room_chara_data[10];
_anon6 room_action_106re_0[23];
_anon6 room_action_106re_1[10];
_anon6 room_action_106ma_0[10];
_anon6 room_action_107ma_0[14];
_anon6 room_action_107ma_1[5];
_anon6 room_action_107ma_2[1];
_anon6 room_action_107ma_3[10];
_anon6 room_action_206ma_0[10];
_anon6 room_action_206fe_0[3];
_anon6 room_action_206ch0_0[3];
_anon6 room_action_206ch0_1[4];
_anon6 room_action_206ch0_2[5];
_anon6 room_action_206ch0_3[5];
_anon6 room_action_206ch1_0[6];
_anon6 room_action_206ch1_1[5];
_anon6 room_action_206ch1_2[5];
_anon6 room_action_207ri_0[18];
_anon6 room_action_207ri_1[9];
_anon6 room_action_207ri_2[1];
_anon6 room_action_207ki_0[1];
_anon7 group_room_action[21];
short couple_anm;
void(*RoomOutSideDemoMob)(sfObj*);
EventFlag event_flag;
_EventDriver ev_3ldk0_021a_chaim;
_anon4 mob_demo_event_param[4];
sfCharacter* ambul_chara;
void(*RoomOutSideDemoMobEvent)(sfObj*);
void(*RoomOutSideDemoMobNoanimeEvent)(sfObj*);
void(*RoomOutSideDemoMobAmbulEvent)(sfObj*);
int room_outside_mob_event_moving;
void(*RoomOutSideDemoMobEventControlDestruct)(sfObj*);
void(*RoomOutSideDemoMobControlDestruct)(sfObj*);

void RoomOutSideDemoMob(sfObj* obj);
void RoomOutSideDemoMobControlDestruct(sfObj* obj);
void SetMobObj(sfObj* obj);
int GetMobEventID();
void GetMobEventViewDirection(int pos, float* rot_rl, float* rot_ud);
float GetMobEventViewAngle();
void RoomOutSideDemoMobEvent(sfObj* obj);
void RoomOutSideDemoMobNoanimeEvent(sfObj* obj);
void RoomOutSideDemoMobAmbulEvent();
void MobEventObjCreate(sfObj** obj, unsigned int mdl, unsigned int tex, unsigned int anm, int loop);
void MobEventObjNoanmieCreate(sfObj** obj, unsigned int mdl, unsigned int tex, float* pos, float* rot);
void MobEventAmbulObjCreate(sfObj** obj, sfCharacter* chara);
void SetMobEventObj(sfObj* obj);
void SetMobEventObjAgain(sfObj* obj);
int RoomOutSideMobEventCanStartCheck();
int RoomOutSideEventMovingCheck();
void RoomOutSideEventMovingFlagSet(int flag);
void RoomOutSideEventFlagSet();
void RoomOutSideDemoMobEventControlDestruct(sfObj* obj);
void RoomOutSideDemoMobEventControl(sfObj* obj);
void RoomOutSideDemoMobEventAgainControl(sfObj* obj);
void RoomOutSideDemoMobControl(sfObj* obj);
void RoomOutSideDemoMobControlDraw();

// 
// Start address: 0x21d540
void RoomOutSideDemoMob(sfObj* obj)
{
	int i;
	int j;
	_anon2* wk;
	sgAnime* anm;
	int percent;
	void* mdl_data;
	void* tex_data;
	int percent;
	// Line 734, Address: 0x21d540, Func Offset: 0
	// Line 742, Address: 0x21d544, Func Offset: 0x4
	// Line 734, Address: 0x21d548, Func Offset: 0x8
	// Line 739, Address: 0x21d56c, Func Offset: 0x2c
	// Line 742, Address: 0x21d570, Func Offset: 0x30
	// Line 743, Address: 0x21d58c, Func Offset: 0x4c
	// Line 745, Address: 0x21d590, Func Offset: 0x50
	// Line 746, Address: 0x21d5b0, Func Offset: 0x70
	// Line 748, Address: 0x21d5bc, Func Offset: 0x7c
	// Line 751, Address: 0x21d5c8, Func Offset: 0x88
	// Line 748, Address: 0x21d5cc, Func Offset: 0x8c
	// Line 751, Address: 0x21d5d0, Func Offset: 0x90
	// Line 748, Address: 0x21d5f4, Func Offset: 0xb4
	// Line 751, Address: 0x21d5fc, Func Offset: 0xbc
	// Line 752, Address: 0x21d600, Func Offset: 0xc0
	// Line 753, Address: 0x21d610, Func Offset: 0xd0
	// Line 752, Address: 0x21d614, Func Offset: 0xd4
	// Line 753, Address: 0x21d618, Func Offset: 0xd8
	// Line 754, Address: 0x21d630, Func Offset: 0xf0
	// Line 755, Address: 0x21d644, Func Offset: 0x104
	// Line 757, Address: 0x21d64c, Func Offset: 0x10c
	// Line 755, Address: 0x21d650, Func Offset: 0x110
	// Line 757, Address: 0x21d654, Func Offset: 0x114
	// Line 758, Address: 0x21d660, Func Offset: 0x120
	// Line 759, Address: 0x21d670, Func Offset: 0x130
	// Line 760, Address: 0x21d67c, Func Offset: 0x13c
	// Line 761, Address: 0x21d698, Func Offset: 0x158
	// Line 762, Address: 0x21d69c, Func Offset: 0x15c
	// Line 761, Address: 0x21d6a0, Func Offset: 0x160
	// Line 762, Address: 0x21d6a8, Func Offset: 0x168
	// Line 764, Address: 0x21d6b8, Func Offset: 0x178
	// Line 762, Address: 0x21d6c0, Func Offset: 0x180
	// Line 764, Address: 0x21d6d4, Func Offset: 0x194
	// Line 765, Address: 0x21d6e4, Func Offset: 0x1a4
	// Line 767, Address: 0x21d710, Func Offset: 0x1d0
	// Line 769, Address: 0x21d71c, Func Offset: 0x1dc
	// Line 771, Address: 0x21d728, Func Offset: 0x1e8
	// Line 772, Address: 0x21d730, Func Offset: 0x1f0
	// Line 774, Address: 0x21d738, Func Offset: 0x1f8
	// Line 775, Address: 0x21d744, Func Offset: 0x204
	// Line 776, Address: 0x21d74c, Func Offset: 0x20c
	// Line 777, Address: 0x21d75c, Func Offset: 0x21c
	// Line 778, Address: 0x21d768, Func Offset: 0x228
	// Line 777, Address: 0x21d76c, Func Offset: 0x22c
	// Line 778, Address: 0x21d770, Func Offset: 0x230
	// Line 777, Address: 0x21d778, Func Offset: 0x238
	// Line 778, Address: 0x21d77c, Func Offset: 0x23c
	// Line 779, Address: 0x21d790, Func Offset: 0x250
	// Line 781, Address: 0x21d7a0, Func Offset: 0x260
	// Line 782, Address: 0x21d7c0, Func Offset: 0x280
	// Line 783, Address: 0x21d7c4, Func Offset: 0x284
	// Line 782, Address: 0x21d7c8, Func Offset: 0x288
	// Line 783, Address: 0x21d7d0, Func Offset: 0x290
	// Line 785, Address: 0x21d7e0, Func Offset: 0x2a0
	// Line 787, Address: 0x21d7e8, Func Offset: 0x2a8
	// Line 785, Address: 0x21d7ec, Func Offset: 0x2ac
	// Line 787, Address: 0x21d808, Func Offset: 0x2c8
	// Line 788, Address: 0x21d814, Func Offset: 0x2d4
	// Line 790, Address: 0x21d820, Func Offset: 0x2e0
	// Line 791, Address: 0x21d830, Func Offset: 0x2f0
	// Line 793, Address: 0x21d838, Func Offset: 0x2f8
	// Line 794, Address: 0x21d848, Func Offset: 0x308
	// Line 795, Address: 0x21d854, Func Offset: 0x314
	// Line 796, Address: 0x21d858, Func Offset: 0x318
	// Line 797, Address: 0x21d868, Func Offset: 0x328
	// Line 799, Address: 0x21d870, Func Offset: 0x330
	// Line 800, Address: 0x21d880, Func Offset: 0x340
	// Line 801, Address: 0x21d88c, Func Offset: 0x34c
	// Line 802, Address: 0x21d890, Func Offset: 0x350
	// Line 803, Address: 0x21d8a0, Func Offset: 0x360
	// Line 805, Address: 0x21d8a8, Func Offset: 0x368
	// Line 807, Address: 0x21d8d4, Func Offset: 0x394
	// Line 809, Address: 0x21d8e4, Func Offset: 0x3a4
	// Line 811, Address: 0x21d8f0, Func Offset: 0x3b0
	// Line 815, Address: 0x21d8f8, Func Offset: 0x3b8
	// Func End, Address: 0x21d920, Func Offset: 0x3e0
}

// 
// Start address: 0x21d920
void RoomOutSideDemoMobControlDestruct(sfObj* obj)
{
	_anon5* wk;
	int i;
	// Line 823, Address: 0x21d920, Func Offset: 0
	// Line 824, Address: 0x21d934, Func Offset: 0x14
	// Line 826, Address: 0x21d938, Func Offset: 0x18
	// Line 828, Address: 0x21d950, Func Offset: 0x30
	// Line 829, Address: 0x21d95c, Func Offset: 0x3c
	// Line 830, Address: 0x21d964, Func Offset: 0x44
	// Line 831, Address: 0x21d978, Func Offset: 0x58
	// Func End, Address: 0x21d990, Func Offset: 0x70
}

// 
// Start address: 0x21d990
void SetMobObj(sfObj* obj)
{
	_anon5* wk;
	int i;
	unsigned int mob_member;
	sfObj* optr;
	// Line 834, Address: 0x21d990, Func Offset: 0
	// Line 839, Address: 0x21d994, Func Offset: 0x4
	// Line 834, Address: 0x21d998, Func Offset: 0x8
	// Line 839, Address: 0x21d99c, Func Offset: 0xc
	// Line 834, Address: 0x21d9a0, Func Offset: 0x10
	// Line 835, Address: 0x21d9b0, Func Offset: 0x20
	// Line 839, Address: 0x21d9b4, Func Offset: 0x24
	// Line 905, Address: 0x21d9bc, Func Offset: 0x2c
	// Line 907, Address: 0x21d9d0, Func Offset: 0x40
	// Line 908, Address: 0x21d9ec, Func Offset: 0x5c
	// Line 909, Address: 0x21da08, Func Offset: 0x78
	// Line 910, Address: 0x21da10, Func Offset: 0x80
	// Line 911, Address: 0x21da14, Func Offset: 0x84
	// Line 913, Address: 0x21da18, Func Offset: 0x88
	// Line 914, Address: 0x21da24, Func Offset: 0x94
	// Line 918, Address: 0x21da28, Func Offset: 0x98
	// Line 919, Address: 0x21da44, Func Offset: 0xb4
	// Line 920, Address: 0x21da74, Func Offset: 0xe4
	// Line 921, Address: 0x21da80, Func Offset: 0xf0
	// Line 922, Address: 0x21da88, Func Offset: 0xf8
	// Line 923, Address: 0x21da90, Func Offset: 0x100
	// Line 924, Address: 0x21da94, Func Offset: 0x104
	// Line 927, Address: 0x21da98, Func Offset: 0x108
	// Line 928, Address: 0x21dab4, Func Offset: 0x124
	// Line 930, Address: 0x21dabc, Func Offset: 0x12c
	// Line 931, Address: 0x21dac8, Func Offset: 0x138
	// Line 932, Address: 0x21dacc, Func Offset: 0x13c
	// Line 934, Address: 0x21dad0, Func Offset: 0x140
	// Line 935, Address: 0x21daec, Func Offset: 0x15c
	// Line 936, Address: 0x21db1c, Func Offset: 0x18c
	// Line 937, Address: 0x21db28, Func Offset: 0x198
	// Line 938, Address: 0x21db30, Func Offset: 0x1a0
	// Line 939, Address: 0x21db38, Func Offset: 0x1a8
	// Line 940, Address: 0x21db3c, Func Offset: 0x1ac
	// Line 942, Address: 0x21db40, Func Offset: 0x1b0
	// Line 944, Address: 0x21db4c, Func Offset: 0x1bc
	// Line 946, Address: 0x21db64, Func Offset: 0x1d4
	// Line 947, Address: 0x21db70, Func Offset: 0x1e0
	// Line 948, Address: 0x21db74, Func Offset: 0x1e4
	// Line 951, Address: 0x21db78, Func Offset: 0x1e8
	// Line 958, Address: 0x21dbb4, Func Offset: 0x224
	// Line 961, Address: 0x21dbd8, Func Offset: 0x248
	// Line 962, Address: 0x21dbf4, Func Offset: 0x264
	// Line 970, Address: 0x21dbf8, Func Offset: 0x268
	// Line 973, Address: 0x21dc08, Func Offset: 0x278
	// Line 975, Address: 0x21dc10, Func Offset: 0x280
	// Line 976, Address: 0x21dc20, Func Offset: 0x290
	// Line 978, Address: 0x21dc28, Func Offset: 0x298
	// Line 982, Address: 0x21dc34, Func Offset: 0x2a4
	// Line 983, Address: 0x21dc3c, Func Offset: 0x2ac
	// Line 984, Address: 0x21dc40, Func Offset: 0x2b0
	// Line 986, Address: 0x21dc4c, Func Offset: 0x2bc
	// Line 987, Address: 0x21dc54, Func Offset: 0x2c4
	// Line 988, Address: 0x21dc58, Func Offset: 0x2c8
	// Line 989, Address: 0x21dc64, Func Offset: 0x2d4
	// Line 990, Address: 0x21dc6c, Func Offset: 0x2dc
	// Line 991, Address: 0x21dc70, Func Offset: 0x2e0
	// Line 992, Address: 0x21dc7c, Func Offset: 0x2ec
	// Line 993, Address: 0x21dc84, Func Offset: 0x2f4
	// Line 994, Address: 0x21dc88, Func Offset: 0x2f8
	// Line 995, Address: 0x21dc94, Func Offset: 0x304
	// Line 996, Address: 0x21dc9c, Func Offset: 0x30c
	// Line 997, Address: 0x21dca0, Func Offset: 0x310
	// Line 1001, Address: 0x21dcac, Func Offset: 0x31c
	// Line 1002, Address: 0x21dcb4, Func Offset: 0x324
	// Line 1003, Address: 0x21dcb8, Func Offset: 0x328
	// Line 1006, Address: 0x21dcc4, Func Offset: 0x334
	// Line 1007, Address: 0x21dccc, Func Offset: 0x33c
	// Line 1008, Address: 0x21dcd0, Func Offset: 0x340
	// Line 1010, Address: 0x21dcd8, Func Offset: 0x348
	// Line 1013, Address: 0x21dcf0, Func Offset: 0x360
	// Line 1014, Address: 0x21dd00, Func Offset: 0x370
	// Line 1015, Address: 0x21dd0c, Func Offset: 0x37c
	// Line 1016, Address: 0x21dd1c, Func Offset: 0x38c
	// Line 1017, Address: 0x21dd28, Func Offset: 0x398
	// Line 1018, Address: 0x21dd2c, Func Offset: 0x39c
	// Line 1017, Address: 0x21dd34, Func Offset: 0x3a4
	// Line 1018, Address: 0x21dd3c, Func Offset: 0x3ac
	// Line 1020, Address: 0x21dd48, Func Offset: 0x3b8
	// Line 1021, Address: 0x21dd54, Func Offset: 0x3c4
	// Line 1023, Address: 0x21dd64, Func Offset: 0x3d4
	// Line 1024, Address: 0x21dd70, Func Offset: 0x3e0
	// Func End, Address: 0x21dd8c, Func Offset: 0x3fc
}

// 
// Start address: 0x21dd90
int GetMobEventID()
{
	// Line 1089, Address: 0x21dd90, Func Offset: 0
	// Line 1090, Address: 0x21dd98, Func Offset: 0x8
	// Line 1091, Address: 0x21dda8, Func Offset: 0x18
	// Line 1093, Address: 0x21ddb0, Func Offset: 0x20
	// Line 1094, Address: 0x21ddc0, Func Offset: 0x30
	// Line 1096, Address: 0x21ddc8, Func Offset: 0x38
	// Line 1097, Address: 0x21ddd8, Func Offset: 0x48
	// Line 1100, Address: 0x21dde0, Func Offset: 0x50
	// Line 1104, Address: 0x21ddf8, Func Offset: 0x68
	// Func End, Address: 0x21de04, Func Offset: 0x74
}

// 
// Start address: 0x21de10
void GetMobEventViewDirection(int pos, float* rot_rl, float* rot_ud)
{
	int i;
	// Line 1107, Address: 0x21de10, Func Offset: 0
	// Line 1109, Address: 0x21de28, Func Offset: 0x18
	// Line 1107, Address: 0x21de2c, Func Offset: 0x1c
	// Line 1109, Address: 0x21de30, Func Offset: 0x20
	// Line 1107, Address: 0x21de34, Func Offset: 0x24
	// Line 1109, Address: 0x21de44, Func Offset: 0x34
	// Line 1110, Address: 0x21de48, Func Offset: 0x38
	// Line 1111, Address: 0x21de58, Func Offset: 0x48
	// Line 1110, Address: 0x21de5c, Func Offset: 0x4c
	// Line 1111, Address: 0x21de60, Func Offset: 0x50
	// Line 1112, Address: 0x21de70, Func Offset: 0x60
	// Line 1111, Address: 0x21de74, Func Offset: 0x64
	// Line 1112, Address: 0x21de78, Func Offset: 0x68
	// Line 1111, Address: 0x21de7c, Func Offset: 0x6c
	// Line 1112, Address: 0x21de80, Func Offset: 0x70
	// Line 1111, Address: 0x21de88, Func Offset: 0x78
	// Line 1112, Address: 0x21de8c, Func Offset: 0x7c
	// Line 1113, Address: 0x21de90, Func Offset: 0x80
	// Line 1115, Address: 0x21de98, Func Offset: 0x88
	// Line 1116, Address: 0x21dea8, Func Offset: 0x98
	// Func End, Address: 0x21decc, Func Offset: 0xbc
}

// 
// Start address: 0x21ded0
float GetMobEventViewAngle()
{
	int i;
	// Line 1119, Address: 0x21ded0, Func Offset: 0
	// Line 1121, Address: 0x21dee0, Func Offset: 0x10
	// Line 1119, Address: 0x21dee8, Func Offset: 0x18
	// Line 1121, Address: 0x21deec, Func Offset: 0x1c
	// Line 1122, Address: 0x21def0, Func Offset: 0x20
	// Line 1123, Address: 0x21df00, Func Offset: 0x30
	// Line 1125, Address: 0x21df1c, Func Offset: 0x4c
	// Line 1126, Address: 0x21df30, Func Offset: 0x60
	// Line 1127, Address: 0x21df38, Func Offset: 0x68
	// Func End, Address: 0x21df50, Func Offset: 0x80
}

// 
// Start address: 0x21df50
void RoomOutSideDemoMobEvent(sfObj* obj)
{
	_anon3* wk;
	sfCharacter* chara;
	sgAnime* anm;
	// Line 1131, Address: 0x21df50, Func Offset: 0
	// Line 1132, Address: 0x21df64, Func Offset: 0x14
	// Line 1133, Address: 0x21df68, Func Offset: 0x18
	// Line 1136, Address: 0x21df6c, Func Offset: 0x1c
	// Line 1137, Address: 0x21df78, Func Offset: 0x28
	// Line 1138, Address: 0x21df80, Func Offset: 0x30
	// Line 1139, Address: 0x21df8c, Func Offset: 0x3c
	// Line 1140, Address: 0x21df9c, Func Offset: 0x4c
	// Line 1142, Address: 0x21dfb0, Func Offset: 0x60
	// Line 1144, Address: 0x21dfbc, Func Offset: 0x6c
	// Line 1145, Address: 0x21dfc0, Func Offset: 0x70
	// Line 1146, Address: 0x21dfc8, Func Offset: 0x78
	// Func End, Address: 0x21dfe0, Func Offset: 0x90
}

// 
// Start address: 0x21dfe0
void RoomOutSideDemoMobNoanimeEvent(sfObj* obj)
{
	// Line 1153, Address: 0x21dfe0, Func Offset: 0
	// Func End, Address: 0x21dfec, Func Offset: 0xc
}

// 
// Start address: 0x21dff0
void RoomOutSideDemoMobAmbulEvent()
{
	sgAnime* anm;
	// Line 1160, Address: 0x21dff0, Func Offset: 0
	// Line 1161, Address: 0x21e004, Func Offset: 0x14
	// Line 1162, Address: 0x21e00c, Func Offset: 0x1c
	// Line 1163, Address: 0x21e018, Func Offset: 0x28
	// Line 1164, Address: 0x21e020, Func Offset: 0x30
	// Line 1167, Address: 0x21e028, Func Offset: 0x38
	// Line 1169, Address: 0x21e05c, Func Offset: 0x6c
	// Line 1170, Address: 0x21e064, Func Offset: 0x74
	// Line 1172, Address: 0x21e070, Func Offset: 0x80
	// Line 1177, Address: 0x21e078, Func Offset: 0x88
	// Func End, Address: 0x21e088, Func Offset: 0x98
}

// 
// Start address: 0x21e090
void MobEventObjCreate(sfObj** obj, unsigned int mdl, unsigned int tex, unsigned int anm, int loop)
{
	_anon3* wk;
	sfCharacter* chara;
	sgAnime* anime;
	// Line 1185, Address: 0x21e090, Func Offset: 0
	// Line 1190, Address: 0x21e0bc, Func Offset: 0x2c
	// Line 1191, Address: 0x21e0c8, Func Offset: 0x38
	// Line 1192, Address: 0x21e0d8, Func Offset: 0x48
	// Line 1193, Address: 0x21e0e4, Func Offset: 0x54
	// Line 1198, Address: 0x21e0f4, Func Offset: 0x64
	// Line 1193, Address: 0x21e0f8, Func Offset: 0x68
	// Line 1195, Address: 0x21e0fc, Func Offset: 0x6c
	// Line 1198, Address: 0x21e104, Func Offset: 0x74
	// Line 1201, Address: 0x21e128, Func Offset: 0x98
	// Line 1202, Address: 0x21e134, Func Offset: 0xa4
	// Line 1203, Address: 0x21e148, Func Offset: 0xb8
	// Line 1204, Address: 0x21e14c, Func Offset: 0xbc
	// Line 1205, Address: 0x21e150, Func Offset: 0xc0
	// Func End, Address: 0x21e170, Func Offset: 0xe0
}

// 
// Start address: 0x21e170
void MobEventObjNoanmieCreate(sfObj** obj, unsigned int mdl, unsigned int tex, float* pos, float* rot)
{
	sfCharacter* chara;
	// Line 1213, Address: 0x21e170, Func Offset: 0
	// Line 1218, Address: 0x21e19c, Func Offset: 0x2c
	// Line 1219, Address: 0x21e1a8, Func Offset: 0x38
	// Line 1220, Address: 0x21e1b8, Func Offset: 0x48
	// Line 1221, Address: 0x21e1c4, Func Offset: 0x54
	// Line 1226, Address: 0x21e1d4, Func Offset: 0x64
	// Line 1221, Address: 0x21e1d8, Func Offset: 0x68
	// Line 1224, Address: 0x21e1dc, Func Offset: 0x6c
	// Line 1226, Address: 0x21e1e4, Func Offset: 0x74
	// Line 1229, Address: 0x21e208, Func Offset: 0x98
	// Line 1230, Address: 0x21e214, Func Offset: 0xa4
	// Line 1231, Address: 0x21e220, Func Offset: 0xb0
	// Func End, Address: 0x21e240, Func Offset: 0xd0
}

// 
// Start address: 0x21e240
void MobEventAmbulObjCreate(sfObj** obj, sfCharacter* chara)
{
	sgAnime* anime;
	float rot[4];
	// Line 1235, Address: 0x21e240, Func Offset: 0
	// Line 1238, Address: 0x21e244, Func Offset: 0x4
	// Line 1235, Address: 0x21e248, Func Offset: 0x8
	// Line 1238, Address: 0x21e24c, Func Offset: 0xc
	// Line 1235, Address: 0x21e250, Func Offset: 0x10
	// Line 1238, Address: 0x21e254, Func Offset: 0x14
	// Line 1235, Address: 0x21e258, Func Offset: 0x18
	// Line 1238, Address: 0x21e260, Func Offset: 0x20
	// Line 1240, Address: 0x21e268, Func Offset: 0x28
	// Line 1241, Address: 0x21e274, Func Offset: 0x34
	// Line 1242, Address: 0x21e284, Func Offset: 0x44
	// Line 1244, Address: 0x21e290, Func Offset: 0x50
	// Line 1245, Address: 0x21e2a0, Func Offset: 0x60
	// Line 1247, Address: 0x21e2b8, Func Offset: 0x78
	// Line 1248, Address: 0x21e2c4, Func Offset: 0x84
	// Func End, Address: 0x21e2d8, Func Offset: 0x98
}

// 
// Start address: 0x21e2e0
void SetMobEventObj(sfObj* obj)
{
	_anon1* wk;
	float pos[4];
	float rot[4];
	// Line 1252, Address: 0x21e2e0, Func Offset: 0
	// Line 1255, Address: 0x21e2e4, Func Offset: 0x4
	// Line 1252, Address: 0x21e2e8, Func Offset: 0x8
	// Line 1255, Address: 0x21e2ec, Func Offset: 0xc
	// Line 1252, Address: 0x21e2f0, Func Offset: 0x10
	// Line 1255, Address: 0x21e2f4, Func Offset: 0x14
	// Line 1256, Address: 0x21e2fc, Func Offset: 0x1c
	// Line 1253, Address: 0x21e300, Func Offset: 0x20
	// Line 1258, Address: 0x21e304, Func Offset: 0x24
	// Line 1256, Address: 0x21e30c, Func Offset: 0x2c
	// Line 1255, Address: 0x21e314, Func Offset: 0x34
	// Line 1256, Address: 0x21e318, Func Offset: 0x38
	// Line 1258, Address: 0x21e31c, Func Offset: 0x3c
	// Line 1260, Address: 0x21e328, Func Offset: 0x48
	// Line 1262, Address: 0x21e334, Func Offset: 0x54
	// Line 1264, Address: 0x21e368, Func Offset: 0x88
	// Line 1265, Address: 0x21e374, Func Offset: 0x94
	// Line 1266, Address: 0x21e37c, Func Offset: 0x9c
	// Line 1267, Address: 0x21e380, Func Offset: 0xa0
	// Line 1266, Address: 0x21e384, Func Offset: 0xa4
	// Line 1267, Address: 0x21e388, Func Offset: 0xa8
	// Line 1272, Address: 0x21e3a8, Func Offset: 0xc8
	// Line 1274, Address: 0x21e3b0, Func Offset: 0xd0
	// Line 1275, Address: 0x21e3bc, Func Offset: 0xdc
	// Line 1276, Address: 0x21e3c8, Func Offset: 0xe8
	// Line 1277, Address: 0x21e3d0, Func Offset: 0xf0
	// Line 1278, Address: 0x21e3d4, Func Offset: 0xf4
	// Line 1277, Address: 0x21e3d8, Func Offset: 0xf8
	// Line 1278, Address: 0x21e3dc, Func Offset: 0xfc
	// Line 1283, Address: 0x21e3fc, Func Offset: 0x11c
	// Line 1288, Address: 0x21e420, Func Offset: 0x140
	// Line 1293, Address: 0x21e440, Func Offset: 0x160
	// Line 1295, Address: 0x21e444, Func Offset: 0x164
	// Line 1293, Address: 0x21e448, Func Offset: 0x168
	// Line 1295, Address: 0x21e44c, Func Offset: 0x16c
	// Line 1293, Address: 0x21e450, Func Offset: 0x170
	// Line 1295, Address: 0x21e454, Func Offset: 0x174
	// Line 1294, Address: 0x21e458, Func Offset: 0x178
	// Line 1295, Address: 0x21e464, Func Offset: 0x184
	// Line 1294, Address: 0x21e468, Func Offset: 0x188
	// Line 1295, Address: 0x21e46c, Func Offset: 0x18c
	// Line 1293, Address: 0x21e474, Func Offset: 0x194
	// Line 1295, Address: 0x21e478, Func Offset: 0x198
	// Line 1294, Address: 0x21e47c, Func Offset: 0x19c
	// Line 1293, Address: 0x21e480, Func Offset: 0x1a0
	// Line 1295, Address: 0x21e484, Func Offset: 0x1a4
	// Line 1300, Address: 0x21e48c, Func Offset: 0x1ac
	// Line 1301, Address: 0x21e498, Func Offset: 0x1b8
	// Line 1302, Address: 0x21e49c, Func Offset: 0x1bc
	// Line 1301, Address: 0x21e4a0, Func Offset: 0x1c0
	// Line 1302, Address: 0x21e4a4, Func Offset: 0x1c4
	// Line 1303, Address: 0x21e4c0, Func Offset: 0x1e0
	// Line 1305, Address: 0x21e4c8, Func Offset: 0x1e8
	// Line 1306, Address: 0x21e4d4, Func Offset: 0x1f4
	// Line 1308, Address: 0x21e4dc, Func Offset: 0x1fc
	// Line 1307, Address: 0x21e4e0, Func Offset: 0x200
	// Line 1308, Address: 0x21e4e4, Func Offset: 0x204
	// Line 1307, Address: 0x21e4f0, Func Offset: 0x210
	// Line 1308, Address: 0x21e4f4, Func Offset: 0x214
	// Line 1313, Address: 0x21e504, Func Offset: 0x224
	// Line 1314, Address: 0x21e510, Func Offset: 0x230
	// Line 1315, Address: 0x21e514, Func Offset: 0x234
	// Line 1314, Address: 0x21e518, Func Offset: 0x238
	// Line 1315, Address: 0x21e51c, Func Offset: 0x23c
	// Line 1316, Address: 0x21e538, Func Offset: 0x258
	// Line 1318, Address: 0x21e540, Func Offset: 0x260
	// Line 1319, Address: 0x21e54c, Func Offset: 0x26c
	// Line 1320, Address: 0x21e554, Func Offset: 0x274
	// Line 1321, Address: 0x21e558, Func Offset: 0x278
	// Line 1322, Address: 0x21e568, Func Offset: 0x288
	// Line 1323, Address: 0x21e578, Func Offset: 0x298
	// Line 1324, Address: 0x21e584, Func Offset: 0x2a4
	// Line 1325, Address: 0x21e588, Func Offset: 0x2a8
	// Line 1324, Address: 0x21e58c, Func Offset: 0x2ac
	// Line 1325, Address: 0x21e590, Func Offset: 0x2b0
	// Line 1327, Address: 0x21e5ac, Func Offset: 0x2cc
	// Line 1328, Address: 0x21e5b0, Func Offset: 0x2d0
	// Func End, Address: 0x21e5c0, Func Offset: 0x2e0
}

// 
// Start address: 0x21e5c0
void SetMobEventObjAgain(sfObj* obj)
{
	_anon1* wk;
	float pos[4];
	float rot[4];
	// Line 1332, Address: 0x21e5c0, Func Offset: 0
	// Line 1335, Address: 0x21e5c4, Func Offset: 0x4
	// Line 1332, Address: 0x21e5c8, Func Offset: 0x8
	// Line 1335, Address: 0x21e5cc, Func Offset: 0xc
	// Line 1332, Address: 0x21e5d0, Func Offset: 0x10
	// Line 1335, Address: 0x21e5d4, Func Offset: 0x14
	// Line 1336, Address: 0x21e5dc, Func Offset: 0x1c
	// Line 1333, Address: 0x21e5e0, Func Offset: 0x20
	// Line 1338, Address: 0x21e5e4, Func Offset: 0x24
	// Line 1336, Address: 0x21e5ec, Func Offset: 0x2c
	// Line 1335, Address: 0x21e5f4, Func Offset: 0x34
	// Line 1336, Address: 0x21e5f8, Func Offset: 0x38
	// Line 1338, Address: 0x21e5fc, Func Offset: 0x3c
	// Line 1340, Address: 0x21e608, Func Offset: 0x48
	// Line 1342, Address: 0x21e62c, Func Offset: 0x6c
	// Line 1343, Address: 0x21e638, Func Offset: 0x78
	// Line 1344, Address: 0x21e644, Func Offset: 0x84
	// Line 1345, Address: 0x21e64c, Func Offset: 0x8c
	// Line 1346, Address: 0x21e650, Func Offset: 0x90
	// Line 1345, Address: 0x21e654, Func Offset: 0x94
	// Line 1346, Address: 0x21e658, Func Offset: 0x98
	// Line 1351, Address: 0x21e678, Func Offset: 0xb8
	// Line 1356, Address: 0x21e69c, Func Offset: 0xdc
	// Line 1361, Address: 0x21e6bc, Func Offset: 0xfc
	// Line 1363, Address: 0x21e6c0, Func Offset: 0x100
	// Line 1361, Address: 0x21e6c4, Func Offset: 0x104
	// Line 1363, Address: 0x21e6c8, Func Offset: 0x108
	// Line 1361, Address: 0x21e6cc, Func Offset: 0x10c
	// Line 1363, Address: 0x21e6d0, Func Offset: 0x110
	// Line 1362, Address: 0x21e6d4, Func Offset: 0x114
	// Line 1363, Address: 0x21e6e0, Func Offset: 0x120
	// Line 1362, Address: 0x21e6e4, Func Offset: 0x124
	// Line 1363, Address: 0x21e6e8, Func Offset: 0x128
	// Line 1361, Address: 0x21e6f0, Func Offset: 0x130
	// Line 1363, Address: 0x21e6f4, Func Offset: 0x134
	// Line 1362, Address: 0x21e6f8, Func Offset: 0x138
	// Line 1361, Address: 0x21e6fc, Func Offset: 0x13c
	// Line 1363, Address: 0x21e700, Func Offset: 0x140
	// Line 1369, Address: 0x21e708, Func Offset: 0x148
	// Line 1371, Address: 0x21e72c, Func Offset: 0x16c
	// Line 1372, Address: 0x21e738, Func Offset: 0x178
	// Line 1374, Address: 0x21e740, Func Offset: 0x180
	// Line 1373, Address: 0x21e744, Func Offset: 0x184
	// Line 1374, Address: 0x21e748, Func Offset: 0x188
	// Line 1373, Address: 0x21e754, Func Offset: 0x194
	// Line 1374, Address: 0x21e758, Func Offset: 0x198
	// Line 1380, Address: 0x21e768, Func Offset: 0x1a8
	// Func End, Address: 0x21e778, Func Offset: 0x1b8
}

// 
// Start address: 0x21e780
int RoomOutSideMobEventCanStartCheck()
{
	// Line 1385, Address: 0x21e780, Func Offset: 0
	// Line 1387, Address: 0x21e788, Func Offset: 0x8
	// Line 1390, Address: 0x21e790, Func Offset: 0x10
	// Line 1387, Address: 0x21e794, Func Offset: 0x14
	// Line 1390, Address: 0x21e79c, Func Offset: 0x1c
	// Func End, Address: 0x21e7a4, Func Offset: 0x24
}

// 
// Start address: 0x21e7b0
int RoomOutSideEventMovingCheck()
{
	// Line 1397, Address: 0x21e7b0, Func Offset: 0
	// Line 1398, Address: 0x21e7b4, Func Offset: 0x4
	// Func End, Address: 0x21e7bc, Func Offset: 0xc
}

// 
// Start address: 0x21e7c0
void RoomOutSideEventMovingFlagSet(int flag)
{
	// Line 1403, Address: 0x21e7c0, Func Offset: 0
	// Line 1404, Address: 0x21e7c4, Func Offset: 0x4
	// Func End, Address: 0x21e7cc, Func Offset: 0xc
}

// 
// Start address: 0x21e7d0
void RoomOutSideEventFlagSet()
{
	// Line 1408, Address: 0x21e7d0, Func Offset: 0
	// Line 1409, Address: 0x21e7d8, Func Offset: 0x8
	// Line 1411, Address: 0x21e810, Func Offset: 0x40
	// Line 1412, Address: 0x21e818, Func Offset: 0x48
	// Line 1414, Address: 0x21e820, Func Offset: 0x50
	// Line 1415, Address: 0x21e828, Func Offset: 0x58
	// Line 1417, Address: 0x21e830, Func Offset: 0x60
	// Line 1418, Address: 0x21e838, Func Offset: 0x68
	// Line 1420, Address: 0x21e840, Func Offset: 0x70
	// Line 1423, Address: 0x21e848, Func Offset: 0x78
	// Func End, Address: 0x21e854, Func Offset: 0x84
}

// 
// Start address: 0x21e860
void RoomOutSideDemoMobEventControlDestruct(sfObj* obj)
{
	_anon1* wk;
	_anon3* wk_obj;
	int i;
	// Line 1426, Address: 0x21e860, Func Offset: 0
	// Line 1427, Address: 0x21e874, Func Offset: 0x14
	// Line 1431, Address: 0x21e878, Func Offset: 0x18
	// Line 1432, Address: 0x21e890, Func Offset: 0x30
	// Line 1433, Address: 0x21e898, Func Offset: 0x38
	// Line 1435, Address: 0x21e8a0, Func Offset: 0x40
	// Line 1437, Address: 0x21e8a8, Func Offset: 0x48
	// Line 1438, Address: 0x21e8b0, Func Offset: 0x50
	// Line 1448, Address: 0x21e8c8, Func Offset: 0x68
	// Func End, Address: 0x21e8e0, Func Offset: 0x80
}

// 
// Start address: 0x21e8e0
void RoomOutSideDemoMobEventControl(sfObj* obj)
{
	_anon1* wk;
	int mob_timer;
	// Line 1455, Address: 0x21e8e0, Func Offset: 0
	// Line 1458, Address: 0x21e8e4, Func Offset: 0x4
	// Line 1455, Address: 0x21e8e8, Func Offset: 0x8
	// Line 1458, Address: 0x21e8f8, Func Offset: 0x18
	// Line 1456, Address: 0x21e8fc, Func Offset: 0x1c
	// Line 1458, Address: 0x21e900, Func Offset: 0x20
	// Line 1459, Address: 0x21e924, Func Offset: 0x44
	// Line 1460, Address: 0x21e928, Func Offset: 0x48
	// Line 1462, Address: 0x21e934, Func Offset: 0x54
	// Line 1463, Address: 0x21e93c, Func Offset: 0x5c
	// Line 1464, Address: 0x21e94c, Func Offset: 0x6c
	// Line 1465, Address: 0x21e954, Func Offset: 0x74
	// Line 1466, Address: 0x21e95c, Func Offset: 0x7c
	// Line 1467, Address: 0x21e964, Func Offset: 0x84
	// Line 1468, Address: 0x21e96c, Func Offset: 0x8c
	// Line 1469, Address: 0x21e974, Func Offset: 0x94
	// Line 1470, Address: 0x21e978, Func Offset: 0x98
	// Line 1472, Address: 0x21e988, Func Offset: 0xa8
	// Line 1473, Address: 0x21e99c, Func Offset: 0xbc
	// Line 1474, Address: 0x21e9ac, Func Offset: 0xcc
	// Line 1475, Address: 0x21e9b4, Func Offset: 0xd4
	// Line 1476, Address: 0x21e9b8, Func Offset: 0xd8
	// Line 1477, Address: 0x21e9d4, Func Offset: 0xf4
	// Line 1478, Address: 0x21e9dc, Func Offset: 0xfc
	// Line 1479, Address: 0x21e9e0, Func Offset: 0x100
	// Line 1480, Address: 0x21e9fc, Func Offset: 0x11c
	// Line 1482, Address: 0x21ea04, Func Offset: 0x124
	// Line 1483, Address: 0x21ea08, Func Offset: 0x128
	// Line 1484, Address: 0x21ea1c, Func Offset: 0x13c
	// Line 1485, Address: 0x21ea2c, Func Offset: 0x14c
	// Line 1486, Address: 0x21ea34, Func Offset: 0x154
	// Line 1487, Address: 0x21ea38, Func Offset: 0x158
	// Line 1488, Address: 0x21ea54, Func Offset: 0x174
	// Line 1489, Address: 0x21ea5c, Func Offset: 0x17c
	// Line 1490, Address: 0x21ea60, Func Offset: 0x180
	// Line 1491, Address: 0x21ea7c, Func Offset: 0x19c
	// Line 1493, Address: 0x21ea84, Func Offset: 0x1a4
	// Line 1494, Address: 0x21ea90, Func Offset: 0x1b0
	// Line 1495, Address: 0x21eaa4, Func Offset: 0x1c4
	// Line 1496, Address: 0x21eab4, Func Offset: 0x1d4
	// Line 1497, Address: 0x21eabc, Func Offset: 0x1dc
	// Line 1498, Address: 0x21eac0, Func Offset: 0x1e0
	// Line 1499, Address: 0x21eadc, Func Offset: 0x1fc
	// Line 1501, Address: 0x21eae4, Func Offset: 0x204
	// Line 1504, Address: 0x21eae8, Func Offset: 0x208
	// Line 1505, Address: 0x21eaf8, Func Offset: 0x218
	// Line 1506, Address: 0x21eb08, Func Offset: 0x228
	// Line 1508, Address: 0x21eb30, Func Offset: 0x250
	// Line 1509, Address: 0x21eb44, Func Offset: 0x264
	// Line 1511, Address: 0x21eb64, Func Offset: 0x284
	// Line 1514, Address: 0x21eb68, Func Offset: 0x288
	// Line 1516, Address: 0x21eb7c, Func Offset: 0x29c
	// Line 1517, Address: 0x21eba0, Func Offset: 0x2c0
	// Line 1518, Address: 0x21ebb0, Func Offset: 0x2d0
	// Line 1519, Address: 0x21ebb8, Func Offset: 0x2d8
	// Line 1522, Address: 0x21ebc0, Func Offset: 0x2e0
	// Line 1524, Address: 0x21ebc8, Func Offset: 0x2e8
	// Line 1525, Address: 0x21ebd8, Func Offset: 0x2f8
	// Line 1527, Address: 0x21ebe4, Func Offset: 0x304
	// Line 1526, Address: 0x21ebe8, Func Offset: 0x308
	// Line 1527, Address: 0x21ebec, Func Offset: 0x30c
	// Line 1529, Address: 0x21ec08, Func Offset: 0x328
	// Line 1530, Address: 0x21ec10, Func Offset: 0x330
	// Line 1532, Address: 0x21ec18, Func Offset: 0x338
	// Line 1533, Address: 0x21ec20, Func Offset: 0x340
	// Line 1535, Address: 0x21ec48, Func Offset: 0x368
	// Line 1540, Address: 0x21ec54, Func Offset: 0x374
	// Line 1541, Address: 0x21ec58, Func Offset: 0x378
	// Func End, Address: 0x21ec70, Func Offset: 0x390
}

// 
// Start address: 0x21ec70
void RoomOutSideDemoMobEventAgainControl(sfObj* obj)
{
	// Line 1545, Address: 0x21ec70, Func Offset: 0
	// Line 1548, Address: 0x21ec7c, Func Offset: 0xc
	// Line 1550, Address: 0x21ec90, Func Offset: 0x20
	// Line 1552, Address: 0x21ec9c, Func Offset: 0x2c
	// Line 1553, Address: 0x21eca4, Func Offset: 0x34
	// Line 1554, Address: 0x21ecb4, Func Offset: 0x44
	// Line 1559, Address: 0x21ecc0, Func Offset: 0x50
	// Func End, Address: 0x21ecd0, Func Offset: 0x60
}

// 
// Start address: 0x21ecd0
void RoomOutSideDemoMobControl(sfObj* obj)
{
	// Line 1563, Address: 0x21ecd0, Func Offset: 0
	// Line 1565, Address: 0x21ecd4, Func Offset: 0x4
	// Line 1563, Address: 0x21ecd8, Func Offset: 0x8
	// Line 1565, Address: 0x21ece0, Func Offset: 0x10
	// Line 1566, Address: 0x21ecfc, Func Offset: 0x2c
	// Line 1567, Address: 0x21ed00, Func Offset: 0x30
	// Line 1569, Address: 0x21ed0c, Func Offset: 0x3c
	// Line 1570, Address: 0x21ed14, Func Offset: 0x44
	// Line 1571, Address: 0x21ed24, Func Offset: 0x54
	// Line 1576, Address: 0x21ed30, Func Offset: 0x60
	// Func End, Address: 0x21ed40, Func Offset: 0x70
}

// 
// Start address: 0x21ed40
void RoomOutSideDemoMobControlDraw()
{
	// Line 1580, Address: 0x21ed40, Func Offset: 0
	// Func End, Address: 0x21ed48, Func Offset: 0x8
}

