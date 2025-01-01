typedef struct EnemyObjHook;
typedef struct sfObj;
typedef struct sfCharacter;
typedef struct EnemyObjCommonWork;
typedef struct EnemyObjHook2;
typedef struct sgAnime;
typedef struct EnemySubObjWorkList;
typedef struct _anon0;
typedef union Q;
typedef struct _anon1;
typedef struct sgBone;
typedef struct _anon2;
typedef struct Model;
typedef struct BoxData;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef enum EnemyFirstStatus : unsigned char;
typedef enum EnemyKind : unsigned char;
typedef enum EnemyCondition : unsigned char;
typedef union _anon3;
typedef enum EnemyFlag : unsigned char;
typedef struct sgSVModel;

typedef void(*type_0)(void*);
typedef void(*type_1)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_18)(_anon0*, int, int, float*);
typedef void(*type_22)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_27)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef void(*type_29)(void*);
typedef void(*type_30)(sfObj*);
typedef void(*type_31)(sfObj*);
typedef void(*type_32)(sfObj*);
typedef void(*type_34)(sfObj*);
typedef sgIKSolveResult(*type_35)();
typedef void(*type_36)(sfObj*);
typedef void(*type_39)(sfObj*);
typedef void(*type_40)(sfObj*);
typedef void(*type_48)(sfObj*);
typedef void(*type_52)(sgAnime*, int);
typedef void(*type_53)(sfObj*);
typedef void(*type_54)(sfObj*);
typedef void(*type_55)(sfObj*);

typedef float type_2[4][4];
typedef unsigned char type_3[4];
typedef unsigned long type_9[2];
typedef unsigned int type_11[4];
typedef unsigned short type_12[8];
typedef unsigned char type_13[16];
typedef long type_14[2];
typedef float type_15[4];
typedef int type_16[4];
typedef short type_17[8];
typedef float type_19[4];
typedef char type_20[16];
typedef sfObj type_21[0];
typedef float type_24[3];
typedef int type_25[4];
typedef float type_26[4];
typedef float type_33[4][2];
typedef float type_37[4];
typedef _anon3 type_38[256];
typedef Q type_41[8];
typedef short type_42[2];
typedef unsigned short type_43[2];
typedef char type_44[4];
typedef unsigned char type_45[4];
typedef float type_46[1];
typedef int type_47[1];
typedef void* type_49[4];
typedef int type_50[4];
typedef _anon3 type_51[7];

struct EnemyObjHook
{
	void(*func)(sfObj*);
	EnemyObjHook* next;
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon1 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct EnemyObjCommonWork
{
	float center[4];
	float target[4];
	EnemyKind kind;
	void* work;
	void* ghost_common_work;
	sfObj* nextobj;
	sfCharacter* chara;
	void* battle;
	void* collision;
	EnemyCondition condition;
	int param_type;
	int mode;
	int anime;
	int sound_no;
	int sound_slot;
	float sound_past_time;
	void* anime_work;
	unsigned int flags;
	float chara_scale;
	float center_height;
	float target_height;
	float float_height;
	float p_dist;
	float eye_pos[3];
	float draw_transparency;
	float leave_time;
	EnemyObjHook* destruct_hook;
	EnemyObjHook* animechange_hook;
	EnemyObjHook2* animechange_hook2;
	EnemyObjHook* animeupdate_hook;
	void* model_data;
	void* tex_data;
};

struct EnemyObjHook2
{
	void(*func)(void*);
	void* work;
	EnemyObjHook2* next;
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

struct EnemySubObjWorkList
{
	char* work_top;
	sfObj* obj_top;
	unsigned int size;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

union Q
{
	<unknown fundamental type (0xa510)> u128;
	unsigned long u64[2];
	unsigned int u32[4];
	unsigned short u16[8];
	unsigned char u8[16];
	long s64[2];
	int s32[4];
	short s16[8];
	char s8[16];
	int q[4];
	float fv[4];
	int iv[4];
};

struct _anon1
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

struct _anon2
{
	unsigned int id;
	float x;
	float y;
	float z;
	float rot;
	int ini;
	int dif;
	unsigned int id2;
	int serial;
	int eventdata;
	_anon3 dmy2[7];
	int flagcheck;
	int flagoffcheck;
};

struct Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	unsigned int hits_offset;
	unsigned int reserved_1d;
	unsigned int tanmparams;
	unsigned int textureextras;
};

struct BoxData
{
	Q pos[8];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

enum EnemyFirstStatus : unsigned char
{
	ENEMY_STATUS_NORMAL,
	ENEMY_STATUS_DYING,
	ENEMY_STATUS_EVER_DYING,
	ENEMY_STATUS_DEAD,
	ENEMY_STATUS_ANOTHERSCENE,
	ENEMY_STATUS_EVENT_WAIT,
	ENEMY_STATUS_EVENT_1,
	ENEMY_STATUS_EVENT_2,
	ENEMY_STATUS_BOSS
};

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

enum EnemyCondition : unsigned char
{
	ENEMY_CONDITION_NOENTRY,
	ENEMY_CONDITION_NORMAL,
	ENEMY_CONDITION_CAUTION,
	ENEMY_CONDITION_CHASE,
	ENEMY_CONDITION_ESCAPE,
	ENEMY_CONDITION_BATTLE,
	ENEMY_CONDITION_SEIZE,
	ENEMY_CONDITION_INVINCIBLE,
	ENEMY_CONDITION_RISE,
	ENEMY_CONDITION_DAMAGE,
	ENEMY_CONDITION_DYING,
	ENEMY_CONDITION_DEAD,
	ENEMY_CONDITION_SPECIAL,
	ENEMY_CONDITION_HIDDEN,
	ENEMY_CONDITION_FULLHIDDEN,
	ENEMY_CONDITION_ANOTHERSCENE,
	ENEMY_CONDITION_ERASE,
	ENEMY_CONDITION_FLAGWAIT,
	ENEMY_CONDITION_EVENT
};

union _anon3
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

enum EnemyFlag : unsigned char
{
	ENEMY_FLAG_STEP_CHANGE,
	ENEMY_FLAG_ANIME_STOP,
	ENEMY_FLAG_BLOOD_ENABLE,
	ENEMY_FLAG_SCALE_ENABLE,
	ENEMY_FLAG_TARGET_IS_CENTER,
	ENEMY_FLAG_TARGET_IS_CENTER_V,
	ENEMY_FLAG_TARGET_IS_MOVEPART,
	ENEMY_FLAG_LIGHT_OFF,
	ENEMY_FLAG_SHADOW_OFF
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

float sg_vector_unit_y[4];
void(*GameObjDestruct)(sfObj*);
void(*EnemyObjDestruct)(sfObj*);
void(*sfObjFuncDummy)(sfObj*);
float sg_vector_unit_z[4];
float en_quat_rot_y_270[4];
float en_quat_rot_x_90[4];
float en_quat_rot_y_90[4];
void(*normal_normalize)(sfObj*);
void(*no_update_zbuffer_post)(sfObj*);
void(*no_update_zbuffer_pre)(sfObj*);
void(*reset_transparency)(sfObj*);
void(*set_transparency)(sfObj*);
void(*set_transparency_nn)(sfObj*);
void(*set_reverse)(sfObj*);
void(*set_zbuffer)(sfObj*);
float en_vector_unit_y_minus[4];
sfObj sf_obj_work[0];

void EnemyObjConstruct(sfObj* obj, EnemyKind kind);
void EnemyObjCharaConstruct(sfObj* obj, int model_type, int tex_type);
void EnemyObjCharaConstructDirect(sfObj* obj, void* modeldata, void* texdata, void* shadowdata);
void EnemyObjCharaSetDefaultPos(sfObj* obj);
void EnemyObjCharaChange(sfObj* obj, int model_type, int tex_type, int base_anime);
void EnemyObjChangeShadow(sfObj* obj, int model_type);
void EnemyObjEraseShadow(sfObj* obj);
void EnemyObjDisplayShadow(sfObj* obj, int model_type);
void EnemyObjSetThread(sfObj* obj);
EnemyFirstStatus EnemyObjFirstStatus(sfObj* obj);
void EnemyObjGetDefaultPos(sfObj* obj, float* pos);
int EnemyObjType(sfObj* obj);
int EnemyObjType2(sfObj* obj);
int EnemyObjAppearLevel(sfObj* obj);
int EnemyObjFlagCheckData(sfObj* obj);
int EnemyObjFlagOffCheckData(sfObj* obj);
int EnemyObjStep(sfObj* obj);
void EnemyObjSetStep(sfObj* obj, int step);
int EnemyObjSubStep(sfObj* obj);
void EnemyObjSetSubStep(sfObj* obj, int sub_step);
void EnemyObjNextSubStep(sfObj* obj);
void EnemyObjPrevSubStep(sfObj* obj);
int EnemyObjIsCommonWorkExistence(sfObj* obj);
void* EnemyObjWork(sfObj* obj);
void EnemyObjSetWork(sfObj* obj, void* pw);
void* EnemyObjGhostCommonWork(sfObj* obj);
void EnemyObjSetGhostCommonWork(sfObj* obj, void* pw);
unsigned int EnemyObjID(sfObj* obj);
void EnemyObjSetID(sfObj* obj, unsigned int eid);
unsigned int EnemyObjFixingID(sfObj* obj);
int EnemyObjSerial(sfObj* obj);
EnemyKind EnemyObjKind(sfObj* obj);
void EnemyObjSetKind(sfObj* obj, EnemyKind ekind);
int EnemyObjParameterType(sfObj* obj);
void EnemyObjSetParameterType(sfObj* obj, int type);
sfCharacter* EnemyObjChara(sfObj* obj);
void EnemyObjSetChara(sfObj* obj, sfCharacter* ch);
void* EnemyObjCharaModel(sfObj* obj);
void* EnemyObjCharaAnime(sfObj* obj);
sfObj* EnemyObjNext(sfObj* obj);
void EnemyObjSetNext(sfObj* obj, sfObj* next);
void* EnemyObjBattleData(sfObj* obj);
void EnemyObjSetBattleData(sfObj* obj, void* pbtl);
void* EnemyObjCollisionData(sfObj* obj);
void EnemyObjSetCollisionData(sfObj* obj, void* pcol);
void* EnemyObjModelData(sfObj* obj);
void EnemyObjSetModelData(sfObj* obj, void* modeldata);
void* EnemyObjTexData(sfObj* obj);
void EnemyObjSetTexData(sfObj* obj, void* texdata);
EnemyCondition EnemyObjCondition(sfObj* obj);
void EnemyObjSetCondition(sfObj* obj, EnemyCondition cond);
int EnemyObjMode(sfObj* obj);
void EnemyObjSetMode(sfObj* obj, int m);
int EnemyObjAnimeNum(sfObj* obj);
void EnemyObjSetAnimeNum(sfObj* obj, int anm);
void* EnemyObjAnimeWork(sfObj* obj);
void EnemyObjSetAnimeWork(sfObj* obj, void* aw);
int EnemyObjFlagCheck(sfObj* obj, EnemyFlag flag);
void EnemyObjFlagSet(sfObj* obj, EnemyFlag flag);
void EnemyObjFlagReset(sfObj* obj, EnemyFlag flag);
float EnemyObjCharaScale(sfObj* obj);
void EnemyObjSetCharaScale(sfObj* obj, float scale);
float EnemyObjCenterHeight(sfObj* obj);
void EnemyObjSetCenterHeight(sfObj* obj, float height);
float EnemyObjTargetHeight(sfObj* obj);
void EnemyObjSetTargetHeight(sfObj* obj, float height);
float EnemyObjFloatHeight(sfObj* obj);
void EnemyObjSetFloatHeight(sfObj* obj, float height);
float EnemyObjPlayerDistance(sfObj* obj);
void EnemyObjSetPlayerDistance(sfObj* obj, float dist);
void EnemyObjSetSoundNumber(sfObj* obj, int sd_no, int sd_slot);
void EnemyObjResetSoundNumber(sfObj* obj);
void EnemyObjSoundTimeProgress(sfObj* obj);
int EnemyObjSoundNumber(sfObj* obj);
int EnemyObjSoundSlot(sfObj* obj);
float EnemyObjSoundPastTime(sfObj* obj);
void EnemyObjSetLeaveTime(sfObj* obj, float time);
float EnemyObjLeaveTime(sfObj* obj);
int EnemyObjIsExistence(sfObj* obj);
int EnemySubObjIsExistence(sfObj* obj);
int EnemyIsDying(sfObj* obj);
int EnemyIsDead(sfObj* obj);
EnemyObjHook* EnemyObjDestructHookTop(sfObj* obj);
EnemyObjHook* EnemyObjAnimeChangeHookTop(sfObj* obj);
void EnemyObjSetAnimeChangeHookTop(sfObj* obj, EnemyObjHook* hook);
EnemyObjHook2* EnemyObjAnimeChangeHook2Top(sfObj* obj);
void EnemyObjSetAnimeChangeHook2Top(sfObj* obj, EnemyObjHook2* hook);
EnemyObjHook* EnemyObjAnimeUpdateHookTop(sfObj* obj);
void EnemyObjSetAnimeUpdateHookTop(sfObj* obj, EnemyObjHook* hook);
int EnemyObjCheckAndSetStepChangeFlag(sfObj* obj);
void EnemyObjDestruct(sfObj* obj);
void EnemyObjCommitSuicideDirect(sfObj* obj);
void EnemyObjCommitSuicide(sfObj* obj);
EnemyObjHook* EnemyObjHookWorkAllocate(sfObj* obj);
EnemyObjHook2* EnemyObjHook2WorkAllocate(sfObj* obj);
void EnemyObjEntryAnimeChangeHook(sfObj* obj, EnemyObjHook* hook, void(*func)(sfObj*));
void EnemyObjLeaveAnimeChangeHook(sfObj* obj, EnemyObjHook* hook);
void EnemyObjCallAnimeChangeHook(sfObj* obj);
void EnemyObjEntryAnimeChangeHook2(sfObj* obj, EnemyObjHook2* hook, void(*func)(void*), void* work);
void EnemyObjCallAnimeChangeHook2(sfObj* obj, void* old_anime, void* new_anime);
void EnemyObjEntryAnimeUpdateHook(sfObj* obj, EnemyObjHook* hook, void(*func)(sfObj*));
void EnemyObjLeaveAnimeUpdateHook(sfObj* obj, EnemyObjHook* hook);
void EnemyObjCallAnimeUpdateHook(sfObj* obj);
int EnemyObjWorkRestCheck(sfObj* obj, unsigned int size);
void* EnemyObjWorkAllocateDirect(sfObj* obj, unsigned int size);
void* EnemyObjWorkAllocateDirectAlign16(sfObj* obj, unsigned int size);
void* EnemyObjWorkAllocate(sfObj* obj, unsigned int size);
void* EnemyObjWorkAllocateAlign16(sfObj* obj, unsigned int size);
sfObj* EnemySubObjAllocate();
sfObj* EnemySubObjAllocateWithFunc(void(*func)(sfObj*));
void EnemySubObjDestruct(sfObj* obj);
void* EnemySubObjWorkAllocate(sfObj* obj, unsigned int size);
void* EnemySubObjWorkAllocateAlign16(sfObj* obj, unsigned int size);
void* EnemySubObjWork2AllocateAlign16(sfObj* obj, unsigned int size);
sfCharacter* EnemySubObjCharacterAllocate(sfObj* obj);
sfCharacter* EnemySubObjCharacter(sfObj* obj);
void EnemySubObjWorkListConstruct(EnemySubObjWorkList* psl, unsigned int size);
void* EnemySubObjWorkListAllocate(EnemySubObjWorkList* psl);
void* EnemySubObjWorkListAllocateAlign16(EnemySubObjWorkList* psl);
void* EnemySubObjWorkListTop(EnemySubObjWorkList* psl);
void* EnemySubObjWorkListNext(EnemySubObjWorkList* psl, void* pwl);
void EnemySubObjWorkListFree(EnemySubObjWorkList* psl, void* pwl);
void EnemySubObjWorkListAllDestruct(EnemySubObjWorkList* psl);
sfObj* EnemyMakeNewObj(unsigned int id, float* pos, float rot, int ini, void(*exec_func)(sfObj*), void(*cnst_func)(sfObj*), void(*dest_func)(sfObj*), void(*rend_func)(sfObj*));
void EnemyDeleteObj(sfObj* obj);
void EnemyObjCalcCharaCenterPos(sfObj* obj);
void EnemyObjCalcCharaTargetPos(sfObj* obj);
float* EnemyObjCharaPos(sfObj* obj);
void EnemyObjGetCharaPos(sfObj* obj, float* pos);
float* EnemyObjCharaCenterPos(sfObj* obj);
void EnemyObjGetCharaCenterPos(sfObj* obj, float* pos);
float* EnemyObjCharaRot(sfObj* obj);
void EnemyObjGetCharaRot(sfObj* obj, float* rot);
float EnemyObjCharaAngle(sfObj* obj);
void EnemyObjSetCharaPos(sfObj* obj, float* pos);
void EnemyObjSetCharaCenterPos(sfObj* obj, float* pos);
void EnemyObjSetCharaRot(sfObj* obj, float* rot);
void EnemyObjSetCharaRotByCenter(sfObj* obj, float* rot);
float* EnemyObjTargetPos(sfObj* obj);
void EnemyObjGetTargetPos(sfObj* obj, float* pos);
void EnemyObjSetTargetPos(sfObj* obj, float* pos);
void EnemyObjTargetPosIsCenter(sfObj* obj);
void EnemyObjTargetPosIsMovePart(sfObj* obj, float height);
void EnemyObjRotateWithStatus(sfObj* obj, int status);
sgBone* EnemyObjGetCharaRoot(sfObj* obj);
int EnemyObjCharaNBones(sfObj* obj);
sgBone* EnemyObjGetCharaBone(sfObj* obj, int bone_num);
void EnemyObjGetCharaBonePos(sfObj* obj, int bone_num, float* pos);
void EnemyObjGetCharaBoneRot(sfObj* obj, int bone_num, float* rot);
void EnemyObjGetCharaBonePosAndRot(sfObj* obj, int bone_num, float* pos, float* rot);
sgBone* EnemyObjGetTargetCharaBone(sfObj* obj, int bone_num);
int EnemyCheckBoneIsLocal(sgBone* bone);
int EnemyCheckBoneIsGlobal(sgBone* bone);
void EnemyObjCharaBoneRelease(sfObj* obj, int bone_num);
void EnemyCharaBoneRelease(sgBone* bone);
void EnemyGetCameraPos(float* pos);
void EnemyGetCameraDir(float* dir);
float EnemyCameraDistance(float* pos);
float EnemyDotVectorWithCameraDir(float* pos, float* dir);
void EnemySystemPrepare();
void EnemySystemPutAway();
void EnemyObjCommonHandle(sfObj* obj);
void EnemyObjDrawCommonHandle();
void EnemyObjCharaDraw(sfObj* obj);
void normal_normalize();
void EnemyObjCharaDrawNormalNormalize(sfObj* obj);
void no_update_zbuffer_pre();
void no_update_zbuffer_post();
void EnemyObjCharaDrawNoUpdateZBuffer(sfObj* obj);
void EnemyObjCharaErase(sfObj* obj);
void set_transparency(sfObj* obj);
void set_transparency_nn(sfObj* obj);
void set_reverse();
void set_zbuffer();
void reset_transparency();
void EnemyObjCharaDrawTransparency(sfObj* obj, float transparency);
void EnemyObjCharaDrawTransparencyNN(sfObj* obj, float transparency);
void EnemyObjCharaDrawReverse(sfObj* obj);
void EnemyObjCharaDrawZBufferOnly(sfObj* obj);
void EnemyCharaDrawDirect(sfCharacter* chara);
void EnemyCharaDrawDirectNN(sfCharacter* chara);
void EnemyCharaDrawDirectTransparency(sfCharacter* chara, float transparency);
void EnemyCharaDrawDirectTransparencyWZ(sfCharacter* chara, float transparency);
int EnemyCheckConditionForDraw(sfObj* obj);
void EnemyObjTurnToPlayerHorizontal(sfObj* obj, int player, float* pos, float rate);
void EnemyObjTurnToPlayerHorizontalLimitAngle(sfObj* obj, int player, float* pos, float angle);
int EnemyAllPurposeObjGetPos(sfObj* obj, float* pos);
int EnemyCheckCharaClip(sfObj* obj);
int EnemyCheckCharaClipPos(sfObj* obj, float* target);

// 
// Start address: 0x193a80
void EnemyObjConstruct(sfObj* obj, EnemyKind kind)
{
	EnemyObjCommonWork* adr;
	// Line 125, Address: 0x193a80, Func Offset: 0
	// Line 128, Address: 0x193a9c, Func Offset: 0x1c
	// Line 135, Address: 0x193aa8, Func Offset: 0x28
	// Line 136, Address: 0x193ab8, Func Offset: 0x38
	// Line 138, Address: 0x193abc, Func Offset: 0x3c
	// Line 136, Address: 0x193ac0, Func Offset: 0x40
	// Line 138, Address: 0x193ac4, Func Offset: 0x44
	// Line 139, Address: 0x193acc, Func Offset: 0x4c
	// Line 140, Address: 0x193adc, Func Offset: 0x5c
	// Line 143, Address: 0x193af0, Func Offset: 0x70
	// Line 144, Address: 0x193afc, Func Offset: 0x7c
	// Line 145, Address: 0x193b08, Func Offset: 0x88
	// Line 146, Address: 0x193b14, Func Offset: 0x94
	// Line 147, Address: 0x193b20, Func Offset: 0xa0
	// Line 148, Address: 0x193b2c, Func Offset: 0xac
	// Line 150, Address: 0x193b34, Func Offset: 0xb4
	// Line 151, Address: 0x193b3c, Func Offset: 0xbc
	// Func End, Address: 0x193b54, Func Offset: 0xd4
}

// 
// Start address: 0x193b60
void EnemyObjCharaConstruct(sfObj* obj, int model_type, int tex_type)
{
	sfCharacter* chara;
	EnemyKind kind;
	void* modeldata;
	void* texdata;
	void* shadowdata;
	// Line 159, Address: 0x193b60, Func Offset: 0
	// Line 165, Address: 0x193b88, Func Offset: 0x28
	// Line 167, Address: 0x193b94, Func Offset: 0x34
	// Line 169, Address: 0x193ba4, Func Offset: 0x44
	// Line 170, Address: 0x193bb0, Func Offset: 0x50
	// Line 171, Address: 0x193bbc, Func Offset: 0x5c
	// Line 170, Address: 0x193bc0, Func Offset: 0x60
	// Line 171, Address: 0x193bc4, Func Offset: 0x64
	// Line 172, Address: 0x193bcc, Func Offset: 0x6c
	// Line 173, Address: 0x193be0, Func Offset: 0x80
	// Line 174, Address: 0x193bf0, Func Offset: 0x90
	// Line 175, Address: 0x193bfc, Func Offset: 0x9c
	// Line 176, Address: 0x193c08, Func Offset: 0xa8
	// Line 177, Address: 0x193c18, Func Offset: 0xb8
	// Line 179, Address: 0x193c20, Func Offset: 0xc0
	// Line 180, Address: 0x193c2c, Func Offset: 0xcc
	// Line 183, Address: 0x193c34, Func Offset: 0xd4
	// Line 186, Address: 0x193c60, Func Offset: 0x100
	// Func End, Address: 0x193c84, Func Offset: 0x124
}

// 
// Start address: 0x193c90
void EnemyObjCharaConstructDirect(sfObj* obj, void* modeldata, void* texdata, void* shadowdata)
{
	sfCharacter* chara;
	// Line 196, Address: 0x193c90, Func Offset: 0
	// Line 201, Address: 0x193cb8, Func Offset: 0x28
	// Line 203, Address: 0x193cc8, Func Offset: 0x38
	// Line 204, Address: 0x193cd4, Func Offset: 0x44
	// Line 205, Address: 0x193ce4, Func Offset: 0x54
	// Line 206, Address: 0x193cf0, Func Offset: 0x60
	// Line 207, Address: 0x193cfc, Func Offset: 0x6c
	// Line 208, Address: 0x193d08, Func Offset: 0x78
	// Func End, Address: 0x193d28, Func Offset: 0x98
}

// 
// Start address: 0x193d30
void EnemyObjCharaSetDefaultPos(sfObj* obj)
{
	sfCharacter* chara;
	_anon2* pse;
	float pos[4];
	float rot[4];
	// Line 214, Address: 0x193d30, Func Offset: 0
	// Line 219, Address: 0x193d48, Func Offset: 0x18
	// Line 221, Address: 0x193d54, Func Offset: 0x24
	// Line 222, Address: 0x193d60, Func Offset: 0x30
	// Line 223, Address: 0x193d70, Func Offset: 0x40
	// Line 227, Address: 0x193d74, Func Offset: 0x44
	// Line 223, Address: 0x193d78, Func Offset: 0x48
	// Line 227, Address: 0x193d7c, Func Offset: 0x4c
	// Line 223, Address: 0x193d84, Func Offset: 0x54
	// Line 224, Address: 0x193d88, Func Offset: 0x58
	// Line 225, Address: 0x193d90, Func Offset: 0x60
	// Line 226, Address: 0x193d98, Func Offset: 0x68
	// Line 227, Address: 0x193d9c, Func Offset: 0x6c
	// Line 228, Address: 0x193dac, Func Offset: 0x7c
	// Line 229, Address: 0x193dbc, Func Offset: 0x8c
	// Line 230, Address: 0x193dc0, Func Offset: 0x90
	// Line 231, Address: 0x193dd4, Func Offset: 0xa4
	// Line 232, Address: 0x193de0, Func Offset: 0xb0
	// Line 233, Address: 0x193dec, Func Offset: 0xbc
	// Line 234, Address: 0x193df4, Func Offset: 0xc4
	// Func End, Address: 0x193e14, Func Offset: 0xe4
}

// 
// Start address: 0x193e20
void EnemyObjCharaChange(sfObj* obj, int model_type, int tex_type, int base_anime)
{
	sfCharacter* chara;
	float pos[4];
	float rot[4];
	EnemyKind kind;
	void* modeldata;
	void* texdata;
	void* shadowdata;
	// Line 244, Address: 0x193e20, Func Offset: 0
	// Line 251, Address: 0x193e50, Func Offset: 0x30
	// Line 253, Address: 0x193e5c, Func Offset: 0x3c
	// Line 255, Address: 0x193e68, Func Offset: 0x48
	// Line 256, Address: 0x193e74, Func Offset: 0x54
	// Line 257, Address: 0x193e80, Func Offset: 0x60
	// Line 258, Address: 0x193e88, Func Offset: 0x68
	// Line 259, Address: 0x193e90, Func Offset: 0x70
	// Line 260, Address: 0x193e98, Func Offset: 0x78
	// Line 261, Address: 0x193ea4, Func Offset: 0x84
	// Line 262, Address: 0x193eb8, Func Offset: 0x98
	// Line 263, Address: 0x193ec8, Func Offset: 0xa8
	// Line 264, Address: 0x193ed4, Func Offset: 0xb4
	// Line 265, Address: 0x193ee0, Func Offset: 0xc0
	// Line 266, Address: 0x193eec, Func Offset: 0xcc
	// Line 267, Address: 0x193f00, Func Offset: 0xe0
	// Line 269, Address: 0x193f08, Func Offset: 0xe8
	// Line 270, Address: 0x193f10, Func Offset: 0xf0
	// Line 272, Address: 0x193f18, Func Offset: 0xf8
	// Line 275, Address: 0x193f20, Func Offset: 0x100
	// Line 276, Address: 0x193f2c, Func Offset: 0x10c
	// Line 277, Address: 0x193f38, Func Offset: 0x118
	// Func End, Address: 0x193f60, Func Offset: 0x140
}

// 
// Start address: 0x193f60
void EnemyObjChangeShadow(sfObj* obj, int model_type)
{
	sfCharacter* chara;
	EnemyKind kind;
	void* shadowdata;
	// Line 284, Address: 0x193f60, Func Offset: 0
	// Line 289, Address: 0x193f74, Func Offset: 0x14
	// Line 291, Address: 0x193f7c, Func Offset: 0x1c
	// Line 293, Address: 0x193f88, Func Offset: 0x28
	// Line 294, Address: 0x193f98, Func Offset: 0x38
	// Line 295, Address: 0x193fac, Func Offset: 0x4c
	// Line 296, Address: 0x193fb4, Func Offset: 0x54
	// Line 297, Address: 0x193fb8, Func Offset: 0x58
	// Func End, Address: 0x193fcc, Func Offset: 0x6c
}

// 
// Start address: 0x193fd0
void EnemyObjEraseShadow(sfObj* obj)
{
	// Line 303, Address: 0x193fd0, Func Offset: 0
	// Line 304, Address: 0x193fd8, Func Offset: 0x8
	// Line 305, Address: 0x193fec, Func Offset: 0x1c
	// Func End, Address: 0x193ff8, Func Offset: 0x28
}

// 
// Start address: 0x194000
void EnemyObjDisplayShadow(sfObj* obj, int model_type)
{
	void* shadowdata;
	// Line 311, Address: 0x194000, Func Offset: 0
	// Line 313, Address: 0x194014, Func Offset: 0x14
	// Line 314, Address: 0x19402c, Func Offset: 0x2c
	// Line 315, Address: 0x194044, Func Offset: 0x44
	// Line 317, Address: 0x194058, Func Offset: 0x58
	// Func End, Address: 0x19406c, Func Offset: 0x6c
}

// 
// Start address: 0x194070
void EnemyObjSetThread(sfObj* obj)
{
	// Line 326, Address: 0x194070, Func Offset: 0
	// Func End, Address: 0x194078, Func Offset: 0x8
}

// 
// Start address: 0x194080
EnemyFirstStatus EnemyObjFirstStatus(sfObj* obj)
{
	_anon2* pse;
	// Line 334, Address: 0x194080, Func Offset: 0
	// Line 336, Address: 0x194088, Func Offset: 0x8
	// Line 337, Address: 0x194090, Func Offset: 0x10
	// Line 339, Address: 0x1940ac, Func Offset: 0x2c
	// Func End, Address: 0x1940b8, Func Offset: 0x38
}

// 
// Start address: 0x1940c0
void EnemyObjGetDefaultPos(sfObj* obj, float* pos)
{
	_anon2* pse;
	// Line 346, Address: 0x1940c0, Func Offset: 0
	// Line 348, Address: 0x1940cc, Func Offset: 0xc
	// Line 349, Address: 0x1940d4, Func Offset: 0x14
	// Line 351, Address: 0x1940e4, Func Offset: 0x24
	// Line 352, Address: 0x1940ec, Func Offset: 0x2c
	// Line 353, Address: 0x1940f0, Func Offset: 0x30
	// Line 354, Address: 0x1940f8, Func Offset: 0x38
	// Line 355, Address: 0x194100, Func Offset: 0x40
	// Line 356, Address: 0x194108, Func Offset: 0x48
	// Line 357, Address: 0x19410c, Func Offset: 0x4c
	// Func End, Address: 0x194120, Func Offset: 0x60
}

// 
// Start address: 0x194120
int EnemyObjType(sfObj* obj)
{
	_anon2* pse;
	// Line 364, Address: 0x194120, Func Offset: 0
	// Line 366, Address: 0x194128, Func Offset: 0x8
	// Line 367, Address: 0x194130, Func Offset: 0x10
	// Line 369, Address: 0x194154, Func Offset: 0x34
	// Func End, Address: 0x194160, Func Offset: 0x40
}

// 
// Start address: 0x194160
int EnemyObjType2(sfObj* obj)
{
	_anon2* pse;
	// Line 376, Address: 0x194160, Func Offset: 0
	// Line 378, Address: 0x194168, Func Offset: 0x8
	// Line 379, Address: 0x194170, Func Offset: 0x10
	// Line 381, Address: 0x194194, Func Offset: 0x34
	// Func End, Address: 0x1941a0, Func Offset: 0x40
}

// 
// Start address: 0x1941a0
int EnemyObjAppearLevel(sfObj* obj)
{
	_anon2* pse;
	// Line 388, Address: 0x1941a0, Func Offset: 0
	// Line 390, Address: 0x1941a8, Func Offset: 0x8
	// Line 391, Address: 0x1941b0, Func Offset: 0x10
	// Line 393, Address: 0x1941cc, Func Offset: 0x2c
	// Func End, Address: 0x1941d8, Func Offset: 0x38
}

// 
// Start address: 0x1941e0
int EnemyObjFlagCheckData(sfObj* obj)
{
	_anon2* pse;
	// Line 412, Address: 0x1941e0, Func Offset: 0
	// Line 414, Address: 0x1941e8, Func Offset: 0x8
	// Line 415, Address: 0x1941f0, Func Offset: 0x10
	// Line 417, Address: 0x19420c, Func Offset: 0x2c
	// Func End, Address: 0x194218, Func Offset: 0x38
}

// 
// Start address: 0x194220
int EnemyObjFlagOffCheckData(sfObj* obj)
{
	_anon2* pse;
	// Line 424, Address: 0x194220, Func Offset: 0
	// Line 426, Address: 0x194228, Func Offset: 0x8
	// Line 427, Address: 0x194230, Func Offset: 0x10
	// Line 429, Address: 0x19424c, Func Offset: 0x2c
	// Func End, Address: 0x194258, Func Offset: 0x38
}

// 
// Start address: 0x194260
int EnemyObjStep(sfObj* obj)
{
	// Line 438, Address: 0x194260, Func Offset: 0
	// Func End, Address: 0x194268, Func Offset: 0x8
}

// 
// Start address: 0x194270
void EnemyObjSetStep(sfObj* obj, int step)
{
	// Line 446, Address: 0x194270, Func Offset: 0
	// Line 451, Address: 0x194274, Func Offset: 0x4
	// Func End, Address: 0x19427c, Func Offset: 0xc
}

// 
// Start address: 0x194280
int EnemyObjSubStep(sfObj* obj)
{
	// Line 460, Address: 0x194280, Func Offset: 0
	// Func End, Address: 0x194288, Func Offset: 0x8
}

// 
// Start address: 0x194290
void EnemyObjSetSubStep(sfObj* obj, int sub_step)
{
	// Line 469, Address: 0x194290, Func Offset: 0
	// Func End, Address: 0x194298, Func Offset: 0x8
}

// 
// Start address: 0x1942a0
void EnemyObjNextSubStep(sfObj* obj)
{
	// Line 476, Address: 0x1942a0, Func Offset: 0
	// Line 477, Address: 0x1942a8, Func Offset: 0x8
	// Func End, Address: 0x1942b0, Func Offset: 0x10
}

// 
// Start address: 0x1942b0
void EnemyObjPrevSubStep(sfObj* obj)
{
	// Line 484, Address: 0x1942b0, Func Offset: 0
	// Line 485, Address: 0x1942b8, Func Offset: 0x8
	// Func End, Address: 0x1942c0, Func Offset: 0x10
}

// 
// Start address: 0x1942c0
int EnemyObjIsCommonWorkExistence(sfObj* obj)
{
	EnemyKind kind;
	// Line 493, Address: 0x1942c0, Func Offset: 0
	// Line 494, Address: 0x1942d0, Func Offset: 0x10
	// Line 495, Address: 0x1942d4, Func Offset: 0x14
	// Line 496, Address: 0x1942e4, Func Offset: 0x24
	// Line 497, Address: 0x1942f0, Func Offset: 0x30
	// Line 500, Address: 0x1942f8, Func Offset: 0x38
	// Line 501, Address: 0x194300, Func Offset: 0x40
	// Func End, Address: 0x194308, Func Offset: 0x48
}

// 
// Start address: 0x194310
void* EnemyObjWork(sfObj* obj)
{
	// Line 509, Address: 0x194310, Func Offset: 0
	// Line 510, Address: 0x194314, Func Offset: 0x4
	// Func End, Address: 0x19431c, Func Offset: 0xc
}

// 
// Start address: 0x194320
void EnemyObjSetWork(sfObj* obj, void* pw)
{
	// Line 518, Address: 0x194320, Func Offset: 0
	// Line 519, Address: 0x194324, Func Offset: 0x4
	// Func End, Address: 0x19432c, Func Offset: 0xc
}

// 
// Start address: 0x194330
void* EnemyObjGhostCommonWork(sfObj* obj)
{
	// Line 527, Address: 0x194330, Func Offset: 0
	// Line 528, Address: 0x194334, Func Offset: 0x4
	// Func End, Address: 0x19433c, Func Offset: 0xc
}

// 
// Start address: 0x194340
void EnemyObjSetGhostCommonWork(sfObj* obj, void* pw)
{
	// Line 536, Address: 0x194340, Func Offset: 0
	// Line 537, Address: 0x194344, Func Offset: 0x4
	// Func End, Address: 0x19434c, Func Offset: 0xc
}

// 
// Start address: 0x194350
unsigned int EnemyObjID(sfObj* obj)
{
	_anon2* pse;
	// Line 544, Address: 0x194350, Func Offset: 0
	// Line 546, Address: 0x194358, Func Offset: 0x8
	// Line 547, Address: 0x194360, Func Offset: 0x10
	// Line 549, Address: 0x19437c, Func Offset: 0x2c
	// Func End, Address: 0x194388, Func Offset: 0x38
}

// 
// Start address: 0x194390
void EnemyObjSetID(sfObj* obj, unsigned int eid)
{
	_anon2* pse;
	// Line 556, Address: 0x194390, Func Offset: 0
	// Line 558, Address: 0x19439c, Func Offset: 0xc
	// Line 559, Address: 0x1943a4, Func Offset: 0x14
	// Line 560, Address: 0x1943b4, Func Offset: 0x24
	// Line 561, Address: 0x1943b8, Func Offset: 0x28
	// Func End, Address: 0x1943c8, Func Offset: 0x38
}

// 
// Start address: 0x1943d0
unsigned int EnemyObjFixingID(sfObj* obj)
{
	_anon2* pse;
	// Line 568, Address: 0x1943d0, Func Offset: 0
	// Line 570, Address: 0x1943d8, Func Offset: 0x8
	// Line 571, Address: 0x1943e0, Func Offset: 0x10
	// Line 573, Address: 0x1943fc, Func Offset: 0x2c
	// Func End, Address: 0x194408, Func Offset: 0x38
}

// 
// Start address: 0x194410
int EnemyObjSerial(sfObj* obj)
{
	_anon2* pse;
	// Line 580, Address: 0x194410, Func Offset: 0
	// Line 582, Address: 0x194418, Func Offset: 0x8
	// Line 583, Address: 0x194420, Func Offset: 0x10
	// Line 585, Address: 0x19443c, Func Offset: 0x2c
	// Func End, Address: 0x194448, Func Offset: 0x38
}

// 
// Start address: 0x194450
EnemyKind EnemyObjKind(sfObj* obj)
{
	// Line 593, Address: 0x194450, Func Offset: 0
	// Line 594, Address: 0x194454, Func Offset: 0x4
	// Func End, Address: 0x19445c, Func Offset: 0xc
}

// 
// Start address: 0x194460
void EnemyObjSetKind(sfObj* obj, EnemyKind ekind)
{
	// Line 602, Address: 0x194460, Func Offset: 0
	// Line 603, Address: 0x194464, Func Offset: 0x4
	// Line 602, Address: 0x194468, Func Offset: 0x8
	// Line 604, Address: 0x19446c, Func Offset: 0xc
	// Func End, Address: 0x194474, Func Offset: 0x14
}

// 
// Start address: 0x194480
int EnemyObjParameterType(sfObj* obj)
{
	// Line 612, Address: 0x194480, Func Offset: 0
	// Line 613, Address: 0x194484, Func Offset: 0x4
	// Func End, Address: 0x19448c, Func Offset: 0xc
}

// 
// Start address: 0x194490
void EnemyObjSetParameterType(sfObj* obj, int type)
{
	// Line 621, Address: 0x194490, Func Offset: 0
	// Line 622, Address: 0x194494, Func Offset: 0x4
	// Func End, Address: 0x19449c, Func Offset: 0xc
}

// 
// Start address: 0x1944a0
sfCharacter* EnemyObjChara(sfObj* obj)
{
	EnemyKind kind;
	// Line 629, Address: 0x1944a0, Func Offset: 0
	// Line 630, Address: 0x1944a8, Func Offset: 0x8
	// Line 631, Address: 0x1944ac, Func Offset: 0xc
	// Line 632, Address: 0x1944bc, Func Offset: 0x1c
	// Line 634, Address: 0x1944c8, Func Offset: 0x28
	// Line 636, Address: 0x1944d0, Func Offset: 0x30
	// Func End, Address: 0x1944dc, Func Offset: 0x3c
}

// 
// Start address: 0x1944e0
void EnemyObjSetChara(sfObj* obj, sfCharacter* ch)
{
	// Line 644, Address: 0x1944e0, Func Offset: 0
	// Line 645, Address: 0x1944e4, Func Offset: 0x4
	// Func End, Address: 0x1944ec, Func Offset: 0xc
}

// 
// Start address: 0x1944f0
void* EnemyObjCharaModel(sfObj* obj)
{
	// Line 652, Address: 0x1944f0, Func Offset: 0
	// Line 653, Address: 0x1944f8, Func Offset: 0x8
	// Line 654, Address: 0x194500, Func Offset: 0x10
	// Line 653, Address: 0x194504, Func Offset: 0x14
	// Line 654, Address: 0x194508, Func Offset: 0x18
	// Func End, Address: 0x194510, Func Offset: 0x20
}

// 
// Start address: 0x194510
void* EnemyObjCharaAnime(sfObj* obj)
{
	// Line 661, Address: 0x194510, Func Offset: 0
	// Line 662, Address: 0x194518, Func Offset: 0x8
	// Line 663, Address: 0x194528, Func Offset: 0x18
	// Func End, Address: 0x194534, Func Offset: 0x24
}

// 
// Start address: 0x194540
sfObj* EnemyObjNext(sfObj* obj)
{
	// Line 671, Address: 0x194540, Func Offset: 0
	// Line 672, Address: 0x194544, Func Offset: 0x4
	// Func End, Address: 0x19454c, Func Offset: 0xc
}

// 
// Start address: 0x194550
void EnemyObjSetNext(sfObj* obj, sfObj* next)
{
	// Line 680, Address: 0x194550, Func Offset: 0
	// Line 681, Address: 0x194554, Func Offset: 0x4
	// Func End, Address: 0x19455c, Func Offset: 0xc
}

// 
// Start address: 0x194560
void* EnemyObjBattleData(sfObj* obj)
{
	// Line 689, Address: 0x194560, Func Offset: 0
	// Line 690, Address: 0x194564, Func Offset: 0x4
	// Func End, Address: 0x19456c, Func Offset: 0xc
}

// 
// Start address: 0x194570
void EnemyObjSetBattleData(sfObj* obj, void* pbtl)
{
	// Line 698, Address: 0x194570, Func Offset: 0
	// Line 699, Address: 0x194574, Func Offset: 0x4
	// Func End, Address: 0x19457c, Func Offset: 0xc
}

// 
// Start address: 0x194580
void* EnemyObjCollisionData(sfObj* obj)
{
	// Line 707, Address: 0x194580, Func Offset: 0
	// Line 708, Address: 0x194584, Func Offset: 0x4
	// Func End, Address: 0x19458c, Func Offset: 0xc
}

// 
// Start address: 0x194590
void EnemyObjSetCollisionData(sfObj* obj, void* pcol)
{
	// Line 716, Address: 0x194590, Func Offset: 0
	// Line 717, Address: 0x194594, Func Offset: 0x4
	// Func End, Address: 0x19459c, Func Offset: 0xc
}

// 
// Start address: 0x1945a0
void* EnemyObjModelData(sfObj* obj)
{
	// Line 725, Address: 0x1945a0, Func Offset: 0
	// Line 726, Address: 0x1945a4, Func Offset: 0x4
	// Func End, Address: 0x1945ac, Func Offset: 0xc
}

// 
// Start address: 0x1945b0
void EnemyObjSetModelData(sfObj* obj, void* modeldata)
{
	// Line 736, Address: 0x1945b0, Func Offset: 0
	// Line 737, Address: 0x1945b4, Func Offset: 0x4
	// Func End, Address: 0x1945bc, Func Offset: 0xc
}

// 
// Start address: 0x1945c0
void* EnemyObjTexData(sfObj* obj)
{
	// Line 745, Address: 0x1945c0, Func Offset: 0
	// Line 746, Address: 0x1945c4, Func Offset: 0x4
	// Func End, Address: 0x1945cc, Func Offset: 0xc
}

// 
// Start address: 0x1945d0
void EnemyObjSetTexData(sfObj* obj, void* texdata)
{
	// Line 756, Address: 0x1945d0, Func Offset: 0
	// Line 757, Address: 0x1945d4, Func Offset: 0x4
	// Func End, Address: 0x1945dc, Func Offset: 0xc
}

// 
// Start address: 0x1945e0
EnemyCondition EnemyObjCondition(sfObj* obj)
{
	// Line 765, Address: 0x1945e0, Func Offset: 0
	// Line 766, Address: 0x1945e4, Func Offset: 0x4
	// Func End, Address: 0x1945ec, Func Offset: 0xc
}

// 
// Start address: 0x1945f0
void EnemyObjSetCondition(sfObj* obj, EnemyCondition cond)
{
	// Line 774, Address: 0x1945f0, Func Offset: 0
	// Line 775, Address: 0x1945f4, Func Offset: 0x4
	// Func End, Address: 0x1945fc, Func Offset: 0xc
}

// 
// Start address: 0x194600
int EnemyObjMode(sfObj* obj)
{
	// Line 783, Address: 0x194600, Func Offset: 0
	// Line 784, Address: 0x194604, Func Offset: 0x4
	// Func End, Address: 0x19460c, Func Offset: 0xc
}

// 
// Start address: 0x194610
void EnemyObjSetMode(sfObj* obj, int m)
{
	// Line 792, Address: 0x194610, Func Offset: 0
	// Line 793, Address: 0x194614, Func Offset: 0x4
	// Func End, Address: 0x19461c, Func Offset: 0xc
}

// 
// Start address: 0x194620
int EnemyObjAnimeNum(sfObj* obj)
{
	// Line 801, Address: 0x194620, Func Offset: 0
	// Line 802, Address: 0x194624, Func Offset: 0x4
	// Func End, Address: 0x19462c, Func Offset: 0xc
}

// 
// Start address: 0x194630
void EnemyObjSetAnimeNum(sfObj* obj, int anm)
{
	// Line 812, Address: 0x194630, Func Offset: 0
	// Line 813, Address: 0x194634, Func Offset: 0x4
	// Func End, Address: 0x19463c, Func Offset: 0xc
}

// 
// Start address: 0x194640
void* EnemyObjAnimeWork(sfObj* obj)
{
	// Line 821, Address: 0x194640, Func Offset: 0
	// Line 822, Address: 0x194644, Func Offset: 0x4
	// Func End, Address: 0x19464c, Func Offset: 0xc
}

// 
// Start address: 0x194650
void EnemyObjSetAnimeWork(sfObj* obj, void* aw)
{
	// Line 830, Address: 0x194650, Func Offset: 0
	// Line 831, Address: 0x194654, Func Offset: 0x4
	// Func End, Address: 0x19465c, Func Offset: 0xc
}

// 
// Start address: 0x194660
int EnemyObjFlagCheck(sfObj* obj, EnemyFlag flag)
{
	// Line 840, Address: 0x194660, Func Offset: 0
	// Line 841, Address: 0x194678, Func Offset: 0x18
	// Func End, Address: 0x194680, Func Offset: 0x20
}

// 
// Start address: 0x194680
void EnemyObjFlagSet(sfObj* obj, EnemyFlag flag)
{
	// Line 849, Address: 0x194680, Func Offset: 0
	// Line 850, Address: 0x194698, Func Offset: 0x18
	// Func End, Address: 0x1946a0, Func Offset: 0x20
}

// 
// Start address: 0x1946a0
void EnemyObjFlagReset(sfObj* obj, EnemyFlag flag)
{
	// Line 858, Address: 0x1946a0, Func Offset: 0
	// Line 859, Address: 0x1946bc, Func Offset: 0x1c
	// Func End, Address: 0x1946c4, Func Offset: 0x24
}

// 
// Start address: 0x1946d0
float EnemyObjCharaScale(sfObj* obj)
{
	// Line 867, Address: 0x1946d0, Func Offset: 0
	// Line 868, Address: 0x1946d4, Func Offset: 0x4
	// Func End, Address: 0x1946dc, Func Offset: 0xc
}

// 
// Start address: 0x1946e0
void EnemyObjSetCharaScale(sfObj* obj, float scale)
{
	// Line 875, Address: 0x1946e0, Func Offset: 0
	// Line 877, Address: 0x1946e4, Func Offset: 0x4
	// Line 875, Address: 0x1946e8, Func Offset: 0x8
	// Line 877, Address: 0x1946ec, Func Offset: 0xc
	// Line 875, Address: 0x1946f0, Func Offset: 0x10
	// Line 876, Address: 0x1946fc, Func Offset: 0x1c
	// Line 877, Address: 0x194704, Func Offset: 0x24
	// Line 878, Address: 0x194710, Func Offset: 0x30
	// Line 879, Address: 0x194718, Func Offset: 0x38
	// Line 880, Address: 0x194720, Func Offset: 0x40
	// Line 882, Address: 0x194728, Func Offset: 0x48
	// Line 883, Address: 0x194734, Func Offset: 0x54
	// Func End, Address: 0x194748, Func Offset: 0x68
}

// 
// Start address: 0x194750
float EnemyObjCenterHeight(sfObj* obj)
{
	// Line 891, Address: 0x194750, Func Offset: 0
	// Line 892, Address: 0x194754, Func Offset: 0x4
	// Func End, Address: 0x19475c, Func Offset: 0xc
}

// 
// Start address: 0x194760
void EnemyObjSetCenterHeight(sfObj* obj, float height)
{
	// Line 899, Address: 0x194760, Func Offset: 0
	// Line 900, Address: 0x19476c, Func Offset: 0xc
	// Line 901, Address: 0x194774, Func Offset: 0x14
	// Line 902, Address: 0x19477c, Func Offset: 0x1c
	// Line 904, Address: 0x1947a4, Func Offset: 0x44
	// Line 905, Address: 0x1947ac, Func Offset: 0x4c
	// Line 906, Address: 0x1947b0, Func Offset: 0x50
	// Func End, Address: 0x1947c0, Func Offset: 0x60
}

// 
// Start address: 0x1947c0
float EnemyObjTargetHeight(sfObj* obj)
{
	// Line 914, Address: 0x1947c0, Func Offset: 0
	// Line 915, Address: 0x1947c4, Func Offset: 0x4
	// Func End, Address: 0x1947cc, Func Offset: 0xc
}

// 
// Start address: 0x1947d0
void EnemyObjSetTargetHeight(sfObj* obj, float height)
{
	// Line 922, Address: 0x1947d0, Func Offset: 0
	// Line 924, Address: 0x1947d4, Func Offset: 0x4
	// Line 922, Address: 0x1947d8, Func Offset: 0x8
	// Line 923, Address: 0x1947e0, Func Offset: 0x10
	// Line 924, Address: 0x1947e8, Func Offset: 0x18
	// Line 925, Address: 0x1947f0, Func Offset: 0x20
	// Line 926, Address: 0x1947fc, Func Offset: 0x2c
	// Line 927, Address: 0x194808, Func Offset: 0x38
	// Line 928, Address: 0x194810, Func Offset: 0x40
	// Func End, Address: 0x194820, Func Offset: 0x50
}

// 
// Start address: 0x194820
float EnemyObjFloatHeight(sfObj* obj)
{
	// Line 936, Address: 0x194820, Func Offset: 0
	// Line 937, Address: 0x194824, Func Offset: 0x4
	// Func End, Address: 0x19482c, Func Offset: 0xc
}

// 
// Start address: 0x194830
void EnemyObjSetFloatHeight(sfObj* obj, float height)
{
	// Line 945, Address: 0x194830, Func Offset: 0
	// Line 946, Address: 0x194834, Func Offset: 0x4
	// Func End, Address: 0x19483c, Func Offset: 0xc
}

// 
// Start address: 0x194840
float EnemyObjPlayerDistance(sfObj* obj)
{
	// Line 954, Address: 0x194840, Func Offset: 0
	// Line 955, Address: 0x194844, Func Offset: 0x4
	// Func End, Address: 0x19484c, Func Offset: 0xc
}

// 
// Start address: 0x194850
void EnemyObjSetPlayerDistance(sfObj* obj, float dist)
{
	// Line 963, Address: 0x194850, Func Offset: 0
	// Line 964, Address: 0x194854, Func Offset: 0x4
	// Func End, Address: 0x19485c, Func Offset: 0xc
}

// 
// Start address: 0x194860
void EnemyObjSetSoundNumber(sfObj* obj, int sd_no, int sd_slot)
{
	// Line 973, Address: 0x194860, Func Offset: 0
	// Line 974, Address: 0x194868, Func Offset: 0x8
	// Line 975, Address: 0x194870, Func Offset: 0x10
	// Line 976, Address: 0x194874, Func Offset: 0x14
	// Func End, Address: 0x19487c, Func Offset: 0x1c
}

// 
// Start address: 0x194880
void EnemyObjResetSoundNumber(sfObj* obj)
{
	// Line 983, Address: 0x194880, Func Offset: 0
	// Line 984, Address: 0x194884, Func Offset: 0x4
	// Line 983, Address: 0x194888, Func Offset: 0x8
	// Line 984, Address: 0x19488c, Func Offset: 0xc
	// Line 985, Address: 0x194894, Func Offset: 0x14
	// Line 986, Address: 0x194898, Func Offset: 0x18
	// Func End, Address: 0x1948a0, Func Offset: 0x20
}

// 
// Start address: 0x1948a0
void EnemyObjSoundTimeProgress(sfObj* obj)
{
	float time;
	// Line 992, Address: 0x1948a0, Func Offset: 0
	// Line 994, Address: 0x1948b0, Func Offset: 0x10
	// Line 995, Address: 0x1948b8, Func Offset: 0x18
	// Line 996, Address: 0x1948c0, Func Offset: 0x20
	// Line 995, Address: 0x1948c4, Func Offset: 0x24
	// Line 996, Address: 0x1948c8, Func Offset: 0x28
	// Line 997, Address: 0x1948cc, Func Offset: 0x2c
	// Func End, Address: 0x1948e0, Func Offset: 0x40
}

// 
// Start address: 0x1948e0
int EnemyObjSoundNumber(sfObj* obj)
{
	// Line 1005, Address: 0x1948e0, Func Offset: 0
	// Line 1006, Address: 0x1948e4, Func Offset: 0x4
	// Func End, Address: 0x1948ec, Func Offset: 0xc
}

// 
// Start address: 0x1948f0
int EnemyObjSoundSlot(sfObj* obj)
{
	// Line 1014, Address: 0x1948f0, Func Offset: 0
	// Line 1015, Address: 0x1948f4, Func Offset: 0x4
	// Func End, Address: 0x1948fc, Func Offset: 0xc
}

// 
// Start address: 0x194900
float EnemyObjSoundPastTime(sfObj* obj)
{
	// Line 1023, Address: 0x194900, Func Offset: 0
	// Line 1024, Address: 0x194904, Func Offset: 0x4
	// Func End, Address: 0x19490c, Func Offset: 0xc
}

// 
// Start address: 0x194910
void EnemyObjSetLeaveTime(sfObj* obj, float time)
{
	// Line 1032, Address: 0x194910, Func Offset: 0
	// Line 1033, Address: 0x194914, Func Offset: 0x4
	// Func End, Address: 0x19491c, Func Offset: 0xc
}

// 
// Start address: 0x194920
float EnemyObjLeaveTime(sfObj* obj)
{
	// Line 1041, Address: 0x194920, Func Offset: 0
	// Line 1042, Address: 0x194924, Func Offset: 0x4
	// Func End, Address: 0x19492c, Func Offset: 0xc
}

// 
// Start address: 0x194930
int EnemyObjIsExistence(sfObj* obj)
{
	int r;
	// Line 1049, Address: 0x194930, Func Offset: 0
	// Line 1051, Address: 0x194944, Func Offset: 0x14
	// Line 1053, Address: 0x194978, Func Offset: 0x48
	// Line 1054, Address: 0x194980, Func Offset: 0x50
	// Line 1065, Address: 0x1949b0, Func Offset: 0x80
	// Line 1066, Address: 0x1949b4, Func Offset: 0x84
	// Line 1067, Address: 0x1949b8, Func Offset: 0x88
	// Line 1068, Address: 0x1949c0, Func Offset: 0x90
	// Func End, Address: 0x1949d4, Func Offset: 0xa4
}

// 
// Start address: 0x1949e0
int EnemySubObjIsExistence(sfObj* obj)
{
	// Line 1075, Address: 0x1949e0, Func Offset: 0
	// Line 1076, Address: 0x1949ec, Func Offset: 0xc
	// Line 1077, Address: 0x194a10, Func Offset: 0x30
	// Line 1078, Address: 0x194a18, Func Offset: 0x38
	// Line 1079, Address: 0x194a20, Func Offset: 0x40
	// Func End, Address: 0x194a30, Func Offset: 0x50
}

// 
// Start address: 0x194a30
int EnemyIsDying(sfObj* obj)
{
	// Line 1086, Address: 0x194a30, Func Offset: 0
	// Line 1087, Address: 0x194a3c, Func Offset: 0xc
	// Line 1089, Address: 0x194a68, Func Offset: 0x38
	// Func End, Address: 0x194a78, Func Offset: 0x48
}

// 
// Start address: 0x194a80
int EnemyIsDead(sfObj* obj)
{
	int r;
	// Line 1096, Address: 0x194a80, Func Offset: 0
	// Line 1098, Address: 0x194a94, Func Offset: 0x14
	// Line 1099, Address: 0x194ab0, Func Offset: 0x30
	// Line 1100, Address: 0x194adc, Func Offset: 0x5c
	// Line 1101, Address: 0x194ae0, Func Offset: 0x60
	// Line 1104, Address: 0x194b0c, Func Offset: 0x8c
	// Line 1105, Address: 0x194b14, Func Offset: 0x94
	// Line 1106, Address: 0x194b18, Func Offset: 0x98
	// Line 1108, Address: 0x194b1c, Func Offset: 0x9c
	// Line 1109, Address: 0x194b20, Func Offset: 0xa0
	// Line 1110, Address: 0x194b28, Func Offset: 0xa8
	// Func End, Address: 0x194b3c, Func Offset: 0xbc
}

// 
// Start address: 0x194b40
EnemyObjHook* EnemyObjDestructHookTop(sfObj* obj)
{
	// Line 1118, Address: 0x194b40, Func Offset: 0
	// Line 1119, Address: 0x194b44, Func Offset: 0x4
	// Func End, Address: 0x194b4c, Func Offset: 0xc
}

// 
// Start address: 0x194b50
EnemyObjHook* EnemyObjAnimeChangeHookTop(sfObj* obj)
{
	// Line 1136, Address: 0x194b50, Func Offset: 0
	// Line 1137, Address: 0x194b54, Func Offset: 0x4
	// Func End, Address: 0x194b5c, Func Offset: 0xc
}

// 
// Start address: 0x194b60
void EnemyObjSetAnimeChangeHookTop(sfObj* obj, EnemyObjHook* hook)
{
	// Line 1145, Address: 0x194b60, Func Offset: 0
	// Line 1146, Address: 0x194b64, Func Offset: 0x4
	// Func End, Address: 0x194b6c, Func Offset: 0xc
}

// 
// Start address: 0x194b70
EnemyObjHook2* EnemyObjAnimeChangeHook2Top(sfObj* obj)
{
	// Line 1154, Address: 0x194b70, Func Offset: 0
	// Line 1155, Address: 0x194b74, Func Offset: 0x4
	// Func End, Address: 0x194b7c, Func Offset: 0xc
}

// 
// Start address: 0x194b80
void EnemyObjSetAnimeChangeHook2Top(sfObj* obj, EnemyObjHook2* hook)
{
	// Line 1163, Address: 0x194b80, Func Offset: 0
	// Line 1164, Address: 0x194b84, Func Offset: 0x4
	// Func End, Address: 0x194b8c, Func Offset: 0xc
}

// 
// Start address: 0x194b90
EnemyObjHook* EnemyObjAnimeUpdateHookTop(sfObj* obj)
{
	// Line 1172, Address: 0x194b90, Func Offset: 0
	// Line 1173, Address: 0x194b94, Func Offset: 0x4
	// Func End, Address: 0x194b9c, Func Offset: 0xc
}

// 
// Start address: 0x194ba0
void EnemyObjSetAnimeUpdateHookTop(sfObj* obj, EnemyObjHook* hook)
{
	// Line 1181, Address: 0x194ba0, Func Offset: 0
	// Line 1182, Address: 0x194ba4, Func Offset: 0x4
	// Func End, Address: 0x194bac, Func Offset: 0xc
}

// 
// Start address: 0x194bb0
int EnemyObjCheckAndSetStepChangeFlag(sfObj* obj)
{
	// Line 1189, Address: 0x194bb0, Func Offset: 0
	// Line 1190, Address: 0x194bb4, Func Offset: 0x4
	// Line 1189, Address: 0x194bb8, Func Offset: 0x8
	// Line 1190, Address: 0x194bc0, Func Offset: 0x10
	// Line 1191, Address: 0x194bd8, Func Offset: 0x28
	// Line 1192, Address: 0x194be4, Func Offset: 0x34
	// Line 1193, Address: 0x194be8, Func Offset: 0x38
	// Func End, Address: 0x194bf8, Func Offset: 0x48
}

// 
// Start address: 0x194c00
void EnemyObjDestruct(sfObj* obj)
{
	EnemyObjHook* hook;
	EnemyObjHook* nhook;
	// Line 1199, Address: 0x194c00, Func Offset: 0
	// Line 1201, Address: 0x194c10, Func Offset: 0x10
	// Line 1202, Address: 0x194c30, Func Offset: 0x30
	// Line 1203, Address: 0x194c38, Func Offset: 0x38
	// Line 1204, Address: 0x194c40, Func Offset: 0x40
	// Line 1205, Address: 0x194c44, Func Offset: 0x44
	// Line 1206, Address: 0x194c50, Func Offset: 0x50
	// Line 1207, Address: 0x194c54, Func Offset: 0x54
	// Line 1208, Address: 0x194c60, Func Offset: 0x60
	// Line 1209, Address: 0x194c6c, Func Offset: 0x6c
	// Line 1210, Address: 0x194c74, Func Offset: 0x74
	// Line 1211, Address: 0x194c7c, Func Offset: 0x7c
	// Line 1212, Address: 0x194c8c, Func Offset: 0x8c
	// Line 1213, Address: 0x194c94, Func Offset: 0x94
	// Line 1214, Address: 0x194ca4, Func Offset: 0xa4
	// Line 1215, Address: 0x194ca8, Func Offset: 0xa8
	// Line 1216, Address: 0x194cb8, Func Offset: 0xb8
	// Line 1218, Address: 0x194cc0, Func Offset: 0xc0
	// Line 1219, Address: 0x194cd0, Func Offset: 0xd0
	// Line 1221, Address: 0x194cd8, Func Offset: 0xd8
	// Line 1222, Address: 0x194ce0, Func Offset: 0xe0
	// Line 1223, Address: 0x194ce8, Func Offset: 0xe8
	// Func End, Address: 0x194cfc, Func Offset: 0xfc
}

// 
// Start address: 0x194d00
void EnemyObjCommitSuicideDirect(sfObj* obj)
{
	// Line 1231, Address: 0x194d00, Func Offset: 0
	// Line 1232, Address: 0x194d04, Func Offset: 0x4
	// Line 1231, Address: 0x194d08, Func Offset: 0x8
	// Line 1232, Address: 0x194d0c, Func Offset: 0xc
	// Line 1231, Address: 0x194d10, Func Offset: 0x10
	// Line 1232, Address: 0x194d14, Func Offset: 0x14
	// Line 1233, Address: 0x194d1c, Func Offset: 0x1c
	// Line 1234, Address: 0x194d24, Func Offset: 0x24
	// Func End, Address: 0x194d34, Func Offset: 0x34
}

// 
// Start address: 0x194d40
void EnemyObjCommitSuicide(sfObj* obj)
{
	// Line 1243, Address: 0x194d40, Func Offset: 0
	// Line 1244, Address: 0x194d48, Func Offset: 0x8
	// Func End, Address: 0x194d50, Func Offset: 0x10
}

// 
// Start address: 0x194d50
EnemyObjHook* EnemyObjHookWorkAllocate(sfObj* obj)
{
	// Line 1254, Address: 0x194d50, Func Offset: 0
	// Func End, Address: 0x194d58, Func Offset: 0x8
}

// 
// Start address: 0x194d60
EnemyObjHook2* EnemyObjHook2WorkAllocate(sfObj* obj)
{
	// Line 1265, Address: 0x194d60, Func Offset: 0
	// Func End, Address: 0x194d68, Func Offset: 0x8
}

// 
// Start address: 0x194d70
void EnemyObjEntryAnimeChangeHook(sfObj* obj, EnemyObjHook* hook, void(*func)(sfObj*))
{
	// Line 1314, Address: 0x194d70, Func Offset: 0
	// Line 1317, Address: 0x194d78, Func Offset: 0x8
	// Line 1318, Address: 0x194d80, Func Offset: 0x10
	// Line 1319, Address: 0x194d88, Func Offset: 0x18
	// Func End, Address: 0x194d94, Func Offset: 0x24
}

// 
// Start address: 0x194da0
void EnemyObjLeaveAnimeChangeHook(sfObj* obj, EnemyObjHook* hook)
{
	EnemyObjHook* thook;
	// Line 1326, Address: 0x194da0, Func Offset: 0
	// Line 1329, Address: 0x194da4, Func Offset: 0x4
	// Line 1330, Address: 0x194dac, Func Offset: 0xc
	// Line 1332, Address: 0x194db8, Func Offset: 0x18
	// Line 1333, Address: 0x194dc0, Func Offset: 0x20
	// Line 1334, Address: 0x194dc8, Func Offset: 0x28
	// Line 1335, Address: 0x194dd0, Func Offset: 0x30
	// Line 1337, Address: 0x194dd8, Func Offset: 0x38
	// Line 1338, Address: 0x194de0, Func Offset: 0x40
	// Line 1339, Address: 0x194de4, Func Offset: 0x44
	// Line 1340, Address: 0x194dec, Func Offset: 0x4c
	// Line 1341, Address: 0x194df0, Func Offset: 0x50
	// Line 1342, Address: 0x194df4, Func Offset: 0x54
	// Line 1341, Address: 0x194df8, Func Offset: 0x58
	// Line 1342, Address: 0x194dfc, Func Offset: 0x5c
	// Line 1344, Address: 0x194e04, Func Offset: 0x64
	// Line 1345, Address: 0x194e08, Func Offset: 0x68
	// Func End, Address: 0x194e14, Func Offset: 0x74
}

// 
// Start address: 0x194e20
void EnemyObjCallAnimeChangeHook(sfObj* obj)
{
	EnemyObjHook* hook;
	EnemyObjHook* nhook;
	// Line 1353, Address: 0x194e20, Func Offset: 0
	// Line 1355, Address: 0x194e30, Func Offset: 0x10
	// Line 1356, Address: 0x194e3c, Func Offset: 0x1c
	// Line 1357, Address: 0x194e48, Func Offset: 0x28
	// Line 1358, Address: 0x194e4c, Func Offset: 0x2c
	// Line 1359, Address: 0x194e58, Func Offset: 0x38
	// Line 1360, Address: 0x194e5c, Func Offset: 0x3c
	// Line 1361, Address: 0x194e68, Func Offset: 0x48
	// Func End, Address: 0x194e7c, Func Offset: 0x5c
}

// 
// Start address: 0x194e80
void EnemyObjEntryAnimeChangeHook2(sfObj* obj, EnemyObjHook2* hook, void(*func)(void*), void* work)
{
	// Line 1370, Address: 0x194e80, Func Offset: 0
	// Line 1372, Address: 0x194e84, Func Offset: 0x4
	// Line 1373, Address: 0x194ea0, Func Offset: 0x20
	// Line 1375, Address: 0x194ea4, Func Offset: 0x24
	// Line 1376, Address: 0x194eac, Func Offset: 0x2c
	// Line 1377, Address: 0x194eb4, Func Offset: 0x34
	// Func End, Address: 0x194ec4, Func Offset: 0x44
}

// 
// Start address: 0x194ed0
void EnemyObjCallAnimeChangeHook2(sfObj* obj, void* old_anime, void* new_anime)
{
	EnemyObjHook2* hook;
	EnemyObjHook2* nhook;
	// Line 1412, Address: 0x194ed0, Func Offset: 0
	// Line 1414, Address: 0x194edc, Func Offset: 0xc
	// Line 1415, Address: 0x194ee4, Func Offset: 0x14
	// Line 1416, Address: 0x194ef0, Func Offset: 0x20
	// Line 1417, Address: 0x194ef8, Func Offset: 0x28
	// Line 1418, Address: 0x194f00, Func Offset: 0x30
	// Line 1419, Address: 0x194f04, Func Offset: 0x34
	// Line 1420, Address: 0x194f14, Func Offset: 0x44
	// Line 1421, Address: 0x194f18, Func Offset: 0x48
	// Line 1422, Address: 0x194f20, Func Offset: 0x50
	// Line 1423, Address: 0x194f28, Func Offset: 0x58
	// Func End, Address: 0x194f38, Func Offset: 0x68
}

// 
// Start address: 0x194f40
void EnemyObjEntryAnimeUpdateHook(sfObj* obj, EnemyObjHook* hook, void(*func)(sfObj*))
{
	// Line 1432, Address: 0x194f40, Func Offset: 0
	// Line 1434, Address: 0x194f44, Func Offset: 0x4
	// Line 1436, Address: 0x194f60, Func Offset: 0x20
	// Line 1437, Address: 0x194f68, Func Offset: 0x28
	// Line 1438, Address: 0x194f70, Func Offset: 0x30
	// Func End, Address: 0x194f7c, Func Offset: 0x3c
}

// 
// Start address: 0x194f80
void EnemyObjLeaveAnimeUpdateHook(sfObj* obj, EnemyObjHook* hook)
{
	EnemyObjHook* thook;
	// Line 1445, Address: 0x194f80, Func Offset: 0
	// Line 1448, Address: 0x194f84, Func Offset: 0x4
	// Line 1449, Address: 0x194f8c, Func Offset: 0xc
	// Line 1451, Address: 0x194f98, Func Offset: 0x18
	// Line 1452, Address: 0x194fa0, Func Offset: 0x20
	// Line 1453, Address: 0x194fa8, Func Offset: 0x28
	// Line 1454, Address: 0x194fb0, Func Offset: 0x30
	// Line 1456, Address: 0x194fb8, Func Offset: 0x38
	// Line 1457, Address: 0x194fc0, Func Offset: 0x40
	// Line 1458, Address: 0x194fc4, Func Offset: 0x44
	// Line 1459, Address: 0x194fcc, Func Offset: 0x4c
	// Line 1460, Address: 0x194fd0, Func Offset: 0x50
	// Line 1461, Address: 0x194fd4, Func Offset: 0x54
	// Line 1460, Address: 0x194fd8, Func Offset: 0x58
	// Line 1461, Address: 0x194fdc, Func Offset: 0x5c
	// Line 1463, Address: 0x194fe4, Func Offset: 0x64
	// Line 1464, Address: 0x194fe8, Func Offset: 0x68
	// Func End, Address: 0x194ff4, Func Offset: 0x74
}

// 
// Start address: 0x195000
void EnemyObjCallAnimeUpdateHook(sfObj* obj)
{
	EnemyObjHook* hook;
	EnemyObjHook* nhook;
	// Line 1472, Address: 0x195000, Func Offset: 0
	// Line 1474, Address: 0x195010, Func Offset: 0x10
	// Line 1475, Address: 0x19501c, Func Offset: 0x1c
	// Line 1476, Address: 0x195028, Func Offset: 0x28
	// Line 1477, Address: 0x19502c, Func Offset: 0x2c
	// Line 1478, Address: 0x195038, Func Offset: 0x38
	// Line 1479, Address: 0x19503c, Func Offset: 0x3c
	// Line 1480, Address: 0x195048, Func Offset: 0x48
	// Func End, Address: 0x19505c, Func Offset: 0x5c
}

// 
// Start address: 0x195060
int EnemyObjWorkRestCheck(sfObj* obj, unsigned int size)
{
	int rest;
	// Line 1488, Address: 0x195060, Func Offset: 0
	// Line 1489, Address: 0x19506c, Func Offset: 0xc
	// Line 1490, Address: 0x195074, Func Offset: 0x14
	// Line 1491, Address: 0x195078, Func Offset: 0x18
	// Line 1490, Address: 0x195080, Func Offset: 0x20
	// Line 1491, Address: 0x195084, Func Offset: 0x24
	// Func End, Address: 0x19508c, Func Offset: 0x2c
}

// 
// Start address: 0x195090
void* EnemyObjWorkAllocateDirect(sfObj* obj, unsigned int size)
{
	void* adr;
	// Line 1519, Address: 0x195090, Func Offset: 0
	// Func End, Address: 0x195098, Func Offset: 0x8
}

// 
// Start address: 0x1950a0
void* EnemyObjWorkAllocateDirectAlign16(sfObj* obj, unsigned int size)
{
	void* adr;
	// Line 1532, Address: 0x1950a0, Func Offset: 0
	// Func End, Address: 0x1950a8, Func Offset: 0x8
}

// 
// Start address: 0x1950b0
void* EnemyObjWorkAllocate(sfObj* obj, unsigned int size)
{
	void* adr;
	// Line 1542, Address: 0x1950b0, Func Offset: 0
	// Line 1544, Address: 0x1950bc, Func Offset: 0xc
	// Line 1546, Address: 0x1950c4, Func Offset: 0x14
	// Line 1548, Address: 0x1950d0, Func Offset: 0x20
	// Func End, Address: 0x1950e0, Func Offset: 0x30
}

// 
// Start address: 0x1950e0
void* EnemyObjWorkAllocateAlign16(sfObj* obj, unsigned int size)
{
	void* adr;
	// Line 1556, Address: 0x1950e0, Func Offset: 0
	// Line 1558, Address: 0x1950ec, Func Offset: 0xc
	// Line 1560, Address: 0x1950f4, Func Offset: 0x14
	// Line 1562, Address: 0x195100, Func Offset: 0x20
	// Func End, Address: 0x195110, Func Offset: 0x30
}

// 
// Start address: 0x195110
sfObj* EnemySubObjAllocate()
{
	sfObj* obj;
	// Line 1568, Address: 0x195110, Func Offset: 0
	// Line 1570, Address: 0x195118, Func Offset: 0x8
	// Line 1571, Address: 0x195124, Func Offset: 0x14
	// Line 1572, Address: 0x195138, Func Offset: 0x28
	// Line 1573, Address: 0x195148, Func Offset: 0x38
	// Line 1574, Address: 0x195150, Func Offset: 0x40
	// Func End, Address: 0x195160, Func Offset: 0x50
}

// 
// Start address: 0x195160
sfObj* EnemySubObjAllocateWithFunc(void(*func)(sfObj*))
{
	sfObj* obj;
	// Line 1581, Address: 0x195160, Func Offset: 0
	// Line 1583, Address: 0x195170, Func Offset: 0x10
	// Line 1584, Address: 0x19517c, Func Offset: 0x1c
	// Line 1585, Address: 0x195190, Func Offset: 0x30
	// Line 1586, Address: 0x19519c, Func Offset: 0x3c
	// Line 1587, Address: 0x1951a0, Func Offset: 0x40
	// Func End, Address: 0x1951b4, Func Offset: 0x54
}

// 
// Start address: 0x1951c0
void EnemySubObjDestruct(sfObj* obj)
{
	// Line 1594, Address: 0x1951c0, Func Offset: 0
	// Func End, Address: 0x1951c8, Func Offset: 0x8
}

// 
// Start address: 0x1951d0
void* EnemySubObjWorkAllocate(sfObj* obj, unsigned int size)
{
	// Line 1603, Address: 0x1951d0, Func Offset: 0
	// Line 1604, Address: 0x1951dc, Func Offset: 0xc
	// Line 1605, Address: 0x1951e8, Func Offset: 0x18
	// Func End, Address: 0x1951f8, Func Offset: 0x28
}

// 
// Start address: 0x195200
void* EnemySubObjWorkAllocateAlign16(sfObj* obj, unsigned int size)
{
	// Line 1613, Address: 0x195200, Func Offset: 0
	// Line 1614, Address: 0x19520c, Func Offset: 0xc
	// Line 1615, Address: 0x195218, Func Offset: 0x18
	// Func End, Address: 0x195228, Func Offset: 0x28
}

// 
// Start address: 0x195230
void* EnemySubObjWork2AllocateAlign16(sfObj* obj, unsigned int size)
{
	// Line 1633, Address: 0x195230, Func Offset: 0
	// Line 1634, Address: 0x19523c, Func Offset: 0xc
	// Line 1635, Address: 0x195248, Func Offset: 0x18
	// Func End, Address: 0x195258, Func Offset: 0x28
}

// 
// Start address: 0x195260
sfCharacter* EnemySubObjCharacterAllocate(sfObj* obj)
{
	sfCharacter* pc;
	// Line 1642, Address: 0x195260, Func Offset: 0
	// Line 1643, Address: 0x195264, Func Offset: 0x4
	// Line 1642, Address: 0x195268, Func Offset: 0x8
	// Line 1643, Address: 0x195270, Func Offset: 0x10
	// Line 1645, Address: 0x195278, Func Offset: 0x18
	// Line 1647, Address: 0x19527c, Func Offset: 0x1c
	// Func End, Address: 0x19528c, Func Offset: 0x2c
}

// 
// Start address: 0x195290
sfCharacter* EnemySubObjCharacter(sfObj* obj)
{
	// Line 1656, Address: 0x195290, Func Offset: 0
	// Func End, Address: 0x195298, Func Offset: 0x8
}

// 
// Start address: 0x1952a0
void EnemySubObjWorkListConstruct(EnemySubObjWorkList* psl, unsigned int size)
{
	// Line 1664, Address: 0x1952a0, Func Offset: 0
	// Line 1666, Address: 0x1952a4, Func Offset: 0x4
	// Line 1665, Address: 0x1952ac, Func Offset: 0xc
	// Line 1666, Address: 0x1952b0, Func Offset: 0x10
	// Line 1667, Address: 0x1952b4, Func Offset: 0x14
	// Func End, Address: 0x1952bc, Func Offset: 0x1c
}

// 
// Start address: 0x1952c0
void* EnemySubObjWorkListAllocate(EnemySubObjWorkList* psl)
{
	char* pwl;
	char* pwl_last;
	sfObj* obj;
	sfObj* obj_last;
	int i;
	int n;
	unsigned int* pnext;
	unsigned int tsize;
	unsigned int s;
	// Line 1674, Address: 0x1952c0, Func Offset: 0
	// Line 1680, Address: 0x1952e0, Func Offset: 0x20
	// Line 1679, Address: 0x1952e4, Func Offset: 0x24
	// Line 1682, Address: 0x1952e8, Func Offset: 0x28
	// Line 1684, Address: 0x1952f0, Func Offset: 0x30
	// Line 1682, Address: 0x1952f4, Func Offset: 0x34
	// Line 1683, Address: 0x1952f8, Func Offset: 0x38
	// Line 1684, Address: 0x195300, Func Offset: 0x40
	// Line 1686, Address: 0x19530c, Func Offset: 0x4c
	// Line 1687, Address: 0x195314, Func Offset: 0x54
	// Line 1688, Address: 0x195318, Func Offset: 0x58
	// Line 1689, Address: 0x19531c, Func Offset: 0x5c
	// Line 1690, Address: 0x195324, Func Offset: 0x64
	// Line 1692, Address: 0x195330, Func Offset: 0x70
	// Line 1694, Address: 0x195334, Func Offset: 0x74
	// Line 1695, Address: 0x195340, Func Offset: 0x80
	// Line 1696, Address: 0x195344, Func Offset: 0x84
	// Line 1697, Address: 0x195348, Func Offset: 0x88
	// Line 1699, Address: 0x195360, Func Offset: 0xa0
	// Line 1700, Address: 0x19536c, Func Offset: 0xac
	// Line 1701, Address: 0x195380, Func Offset: 0xc0
	// Line 1703, Address: 0x195388, Func Offset: 0xc8
	// Line 1704, Address: 0x195390, Func Offset: 0xd0
	// Line 1705, Address: 0x195394, Func Offset: 0xd4
	// Line 1708, Address: 0x195398, Func Offset: 0xd8
	// Line 1706, Address: 0x19539c, Func Offset: 0xdc
	// Line 1708, Address: 0x1953a0, Func Offset: 0xe0
	// Line 1709, Address: 0x1953ac, Func Offset: 0xec
	// Line 1708, Address: 0x1953b4, Func Offset: 0xf4
	// Line 1709, Address: 0x1953b8, Func Offset: 0xf8
	// Line 1711, Address: 0x1953c0, Func Offset: 0x100
	// Line 1715, Address: 0x1953d0, Func Offset: 0x110
	// Line 1718, Address: 0x1953dc, Func Offset: 0x11c
	// Line 1719, Address: 0x1953e0, Func Offset: 0x120
	// Line 1717, Address: 0x1953e4, Func Offset: 0x124
	// Line 1719, Address: 0x1953e8, Func Offset: 0x128
	// Line 1718, Address: 0x1953ec, Func Offset: 0x12c
	// Line 1719, Address: 0x1953f0, Func Offset: 0x130
	// Line 1720, Address: 0x195408, Func Offset: 0x148
	// Line 1721, Address: 0x19540c, Func Offset: 0x14c
	// Line 1722, Address: 0x195410, Func Offset: 0x150
	// Line 1719, Address: 0x195484, Func Offset: 0x1c4
	// Line 1722, Address: 0x195488, Func Offset: 0x1c8
	// Line 1723, Address: 0x19548c, Func Offset: 0x1cc
	// Line 1722, Address: 0x195490, Func Offset: 0x1d0
	// Line 1723, Address: 0x195494, Func Offset: 0x1d4
	// Line 1722, Address: 0x195498, Func Offset: 0x1d8
	// Line 1723, Address: 0x19549c, Func Offset: 0x1dc
	// Line 1724, Address: 0x1954a8, Func Offset: 0x1e8
	// Line 1725, Address: 0x1954ac, Func Offset: 0x1ec
	// Line 1726, Address: 0x1954b0, Func Offset: 0x1f0
	// Line 1727, Address: 0x1954b8, Func Offset: 0x1f8
	// Line 1726, Address: 0x1954bc, Func Offset: 0x1fc
	// Line 1727, Address: 0x1954c4, Func Offset: 0x204
	// Line 1728, Address: 0x1954c8, Func Offset: 0x208
	// Func End, Address: 0x1954e8, Func Offset: 0x228
}

// 
// Start address: 0x1954f0
void* EnemySubObjWorkListAllocateAlign16(EnemySubObjWorkList* psl)
{
	char* pwl;
	char* pwl_last;
	sfObj* obj;
	sfObj* obj_last;
	int i;
	int n;
	unsigned int* pnext;
	unsigned int tsize;
	unsigned int s;
	// Line 1735, Address: 0x1954f0, Func Offset: 0
	// Line 1742, Address: 0x195510, Func Offset: 0x20
	// Line 1740, Address: 0x195514, Func Offset: 0x24
	// Line 1744, Address: 0x195518, Func Offset: 0x28
	// Line 1746, Address: 0x195520, Func Offset: 0x30
	// Line 1744, Address: 0x195524, Func Offset: 0x34
	// Line 1745, Address: 0x195528, Func Offset: 0x38
	// Line 1746, Address: 0x195530, Func Offset: 0x40
	// Line 1748, Address: 0x19553c, Func Offset: 0x4c
	// Line 1749, Address: 0x195544, Func Offset: 0x54
	// Line 1750, Address: 0x195548, Func Offset: 0x58
	// Line 1751, Address: 0x19554c, Func Offset: 0x5c
	// Line 1752, Address: 0x195554, Func Offset: 0x64
	// Line 1754, Address: 0x195560, Func Offset: 0x70
	// Line 1756, Address: 0x195564, Func Offset: 0x74
	// Line 1757, Address: 0x195570, Func Offset: 0x80
	// Line 1758, Address: 0x195574, Func Offset: 0x84
	// Line 1759, Address: 0x195578, Func Offset: 0x88
	// Line 1761, Address: 0x195590, Func Offset: 0xa0
	// Line 1762, Address: 0x19559c, Func Offset: 0xac
	// Line 1763, Address: 0x1955b0, Func Offset: 0xc0
	// Line 1765, Address: 0x1955b8, Func Offset: 0xc8
	// Line 1766, Address: 0x1955c0, Func Offset: 0xd0
	// Line 1767, Address: 0x1955c4, Func Offset: 0xd4
	// Line 1769, Address: 0x1955c8, Func Offset: 0xd8
	// Line 1770, Address: 0x1955d0, Func Offset: 0xe0
	// Line 1769, Address: 0x1955d4, Func Offset: 0xe4
	// Line 1770, Address: 0x1955d8, Func Offset: 0xe8
	// Line 1771, Address: 0x1955e4, Func Offset: 0xf4
	// Line 1770, Address: 0x1955ec, Func Offset: 0xfc
	// Line 1771, Address: 0x1955f0, Func Offset: 0x100
	// Line 1773, Address: 0x1955f8, Func Offset: 0x108
	// Line 1777, Address: 0x195608, Func Offset: 0x118
	// Line 1780, Address: 0x195614, Func Offset: 0x124
	// Line 1781, Address: 0x195618, Func Offset: 0x128
	// Line 1779, Address: 0x19561c, Func Offset: 0x12c
	// Line 1781, Address: 0x195620, Func Offset: 0x130
	// Line 1780, Address: 0x195624, Func Offset: 0x134
	// Line 1781, Address: 0x195628, Func Offset: 0x138
	// Line 1782, Address: 0x195640, Func Offset: 0x150
	// Line 1783, Address: 0x195644, Func Offset: 0x154
	// Line 1784, Address: 0x195648, Func Offset: 0x158
	// Line 1781, Address: 0x1956bc, Func Offset: 0x1cc
	// Line 1784, Address: 0x1956c0, Func Offset: 0x1d0
	// Line 1785, Address: 0x1956c4, Func Offset: 0x1d4
	// Line 1784, Address: 0x1956c8, Func Offset: 0x1d8
	// Line 1785, Address: 0x1956cc, Func Offset: 0x1dc
	// Line 1784, Address: 0x1956d0, Func Offset: 0x1e0
	// Line 1785, Address: 0x1956d4, Func Offset: 0x1e4
	// Line 1786, Address: 0x1956e0, Func Offset: 0x1f0
	// Line 1787, Address: 0x1956e4, Func Offset: 0x1f4
	// Line 1788, Address: 0x1956e8, Func Offset: 0x1f8
	// Line 1789, Address: 0x1956f0, Func Offset: 0x200
	// Line 1788, Address: 0x1956f4, Func Offset: 0x204
	// Line 1789, Address: 0x1956fc, Func Offset: 0x20c
	// Line 1790, Address: 0x195700, Func Offset: 0x210
	// Func End, Address: 0x195720, Func Offset: 0x230
}

// 
// Start address: 0x195720
void* EnemySubObjWorkListTop(EnemySubObjWorkList* psl)
{
	char* pwl;
	unsigned int pnext;
	unsigned int s;
	// Line 1800, Address: 0x195720, Func Offset: 0
	// Line 1801, Address: 0x195724, Func Offset: 0x4
	// Line 1802, Address: 0x195738, Func Offset: 0x18
	// Line 1803, Address: 0x19573c, Func Offset: 0x1c
	// Line 1804, Address: 0x195758, Func Offset: 0x38
	// Line 1805, Address: 0x19575c, Func Offset: 0x3c
	// Line 1806, Address: 0x19576c, Func Offset: 0x4c
	// Line 1808, Address: 0x195788, Func Offset: 0x68
	// Func End, Address: 0x195790, Func Offset: 0x70
}

// 
// Start address: 0x195790
void* EnemySubObjWorkListNext(EnemySubObjWorkList* psl, void* pwl)
{
	unsigned int pnext;
	unsigned int s;
	// Line 1816, Address: 0x195790, Func Offset: 0
	// Line 1818, Address: 0x195794, Func Offset: 0x4
	// Line 1819, Address: 0x1957b0, Func Offset: 0x20
	// Line 1820, Address: 0x1957b4, Func Offset: 0x24
	// Line 1821, Address: 0x1957bc, Func Offset: 0x2c
	// Line 1822, Address: 0x1957c4, Func Offset: 0x34
	// Line 1823, Address: 0x1957d4, Func Offset: 0x44
	// Line 1824, Address: 0x1957d8, Func Offset: 0x48
	// Line 1825, Address: 0x1957dc, Func Offset: 0x4c
	// Line 1826, Address: 0x1957ec, Func Offset: 0x5c
	// Line 1828, Address: 0x195808, Func Offset: 0x78
	// Func End, Address: 0x195814, Func Offset: 0x84
}

// 
// Start address: 0x195820
void EnemySubObjWorkListFree(EnemySubObjWorkList* psl, void* pwl)
{
	// Line 1837, Address: 0x195820, Func Offset: 0
	// Line 1840, Address: 0x195828, Func Offset: 0x8
	// Line 1841, Address: 0x195840, Func Offset: 0x20
	// Func End, Address: 0x195848, Func Offset: 0x28
}

// 
// Start address: 0x195850
void EnemySubObjWorkListAllDestruct(EnemySubObjWorkList* psl)
{
	sfObj* obj;
	sfObj* nobj;
	// Line 1847, Address: 0x195850, Func Offset: 0
	// Line 1849, Address: 0x195864, Func Offset: 0x14
	// Line 1850, Address: 0x195868, Func Offset: 0x18
	// Line 1852, Address: 0x195870, Func Offset: 0x20
	// Line 1853, Address: 0x195878, Func Offset: 0x28
	// Line 1854, Address: 0x19587c, Func Offset: 0x2c
	// Line 1855, Address: 0x195890, Func Offset: 0x40
	// Line 1856, Address: 0x195894, Func Offset: 0x44
	// Line 1857, Address: 0x195898, Func Offset: 0x48
	// Func End, Address: 0x1958ac, Func Offset: 0x5c
}

// 
// Start address: 0x1958b0
sfObj* EnemyMakeNewObj(unsigned int id, float* pos, float rot, int ini, void(*exec_func)(sfObj*), void(*cnst_func)(sfObj*), void(*dest_func)(sfObj*), void(*rend_func)(sfObj*))
{
	sfObj* obj;
	_anon2* swork;
	// Line 1879, Address: 0x1958b0, Func Offset: 0
	// Line 1882, Address: 0x1958f8, Func Offset: 0x48
	// Line 1883, Address: 0x195904, Func Offset: 0x54
	// Line 1884, Address: 0x195914, Func Offset: 0x64
	// Line 1885, Address: 0x19593c, Func Offset: 0x8c
	// Line 1886, Address: 0x195950, Func Offset: 0xa0
	// Line 1887, Address: 0x195958, Func Offset: 0xa8
	// Line 1889, Address: 0x195960, Func Offset: 0xb0
	// Line 1890, Address: 0x19596c, Func Offset: 0xbc
	// Line 1891, Address: 0x195978, Func Offset: 0xc8
	// Line 1892, Address: 0x195984, Func Offset: 0xd4
	// Line 1893, Address: 0x195990, Func Offset: 0xe0
	// Line 1894, Address: 0x1959a0, Func Offset: 0xf0
	// Line 1895, Address: 0x1959a8, Func Offset: 0xf8
	// Line 1897, Address: 0x1959b0, Func Offset: 0x100
	// Line 1898, Address: 0x1959b8, Func Offset: 0x108
	// Line 1899, Address: 0x1959c4, Func Offset: 0x114
	// Line 1900, Address: 0x1959c8, Func Offset: 0x118
	// Line 1901, Address: 0x1959cc, Func Offset: 0x11c
	// Line 1906, Address: 0x1959d0, Func Offset: 0x120
	// Line 1907, Address: 0x1959d4, Func Offset: 0x124
	// Line 1901, Address: 0x1959d8, Func Offset: 0x128
	// Line 1902, Address: 0x1959dc, Func Offset: 0x12c
	// Line 1903, Address: 0x1959e4, Func Offset: 0x134
	// Line 1904, Address: 0x1959ec, Func Offset: 0x13c
	// Line 1905, Address: 0x1959f0, Func Offset: 0x140
	// Line 1907, Address: 0x1959f4, Func Offset: 0x144
	// Line 1908, Address: 0x1959fc, Func Offset: 0x14c
	// Line 1909, Address: 0x195a28, Func Offset: 0x178
	// Line 1910, Address: 0x195a30, Func Offset: 0x180
	// Func End, Address: 0x195a60, Func Offset: 0x1b0
}

// 
// Start address: 0x195a60
void EnemyDeleteObj(sfObj* obj)
{
	// Line 1916, Address: 0x195a60, Func Offset: 0
	// Line 1917, Address: 0x195a64, Func Offset: 0x4
	// Line 1918, Address: 0x195a6c, Func Offset: 0xc
	// Line 1919, Address: 0x195a74, Func Offset: 0x14
	// Line 1920, Address: 0x195a78, Func Offset: 0x18
	// Func End, Address: 0x195a84, Func Offset: 0x24
}

// 
// Start address: 0x195a90
void EnemyObjCalcCharaCenterPos(sfObj* obj)
{
	float mat[4][4];
	float vec[4];
	// Line 1928, Address: 0x195a90, Func Offset: 0
	// Line 1931, Address: 0x195a98, Func Offset: 0x8
	// Line 1928, Address: 0x195a9c, Func Offset: 0xc
	// Line 1932, Address: 0x195aa4, Func Offset: 0x14
	// Line 1933, Address: 0x195ab0, Func Offset: 0x20
	// Line 1934, Address: 0x195ac8, Func Offset: 0x38
	// Line 1935, Address: 0x195b00, Func Offset: 0x70
	// Line 1936, Address: 0x195b14, Func Offset: 0x84
	// Line 1937, Address: 0x195b20, Func Offset: 0x90
	// Line 1936, Address: 0x195b24, Func Offset: 0x94
	// Line 1937, Address: 0x195b28, Func Offset: 0x98
	// Line 1938, Address: 0x195b5c, Func Offset: 0xcc
	// Line 1939, Address: 0x195b7c, Func Offset: 0xec
	// Line 1941, Address: 0x195b90, Func Offset: 0x100
	// Func End, Address: 0x195ba0, Func Offset: 0x110
}

// 
// Start address: 0x195ba0
void EnemyObjCalcCharaTargetPos(sfObj* obj)
{
	float mat[4][4];
	float vec[4];
	// Line 1947, Address: 0x195ba0, Func Offset: 0
	// Line 1950, Address: 0x195ba4, Func Offset: 0x4
	// Line 1947, Address: 0x195ba8, Func Offset: 0x8
	// Line 1950, Address: 0x195bb0, Func Offset: 0x10
	// Line 1951, Address: 0x195bc0, Func Offset: 0x20
	// Line 1952, Address: 0x195bc8, Func Offset: 0x28
	// Line 1953, Address: 0x195bd4, Func Offset: 0x34
	// Line 1954, Address: 0x195bec, Func Offset: 0x4c
	// Line 1956, Address: 0x195c28, Func Offset: 0x88
	// Func End, Address: 0x195c38, Func Offset: 0x98
}

// 
// Start address: 0x195c40
float* EnemyObjCharaPos(sfObj* obj)
{
	// Line 1963, Address: 0x195c40, Func Offset: 0
	// Line 1964, Address: 0x195c48, Func Offset: 0x8
	// Line 1965, Address: 0x195c58, Func Offset: 0x18
	// Func End, Address: 0x195c64, Func Offset: 0x24
}

// 
// Start address: 0x195c70
void EnemyObjGetCharaPos(sfObj* obj, float* pos)
{
	// Line 1972, Address: 0x195c70, Func Offset: 0
	// Line 1973, Address: 0x195c7c, Func Offset: 0xc
	// Line 1974, Address: 0x195c90, Func Offset: 0x20
	// Func End, Address: 0x195ca0, Func Offset: 0x30
}

// 
// Start address: 0x195ca0
float* EnemyObjCharaCenterPos(sfObj* obj)
{
	// Line 1983, Address: 0x195ca0, Func Offset: 0
	// Func End, Address: 0x195ca8, Func Offset: 0x8
}

// 
// Start address: 0x195cb0
void EnemyObjGetCharaCenterPos(sfObj* obj, float* pos)
{
	// Line 1990, Address: 0x195cb0, Func Offset: 0
	// Line 1991, Address: 0x195cbc, Func Offset: 0xc
	// Line 1992, Address: 0x195ccc, Func Offset: 0x1c
	// Func End, Address: 0x195cdc, Func Offset: 0x2c
}

// 
// Start address: 0x195ce0
float* EnemyObjCharaRot(sfObj* obj)
{
	// Line 1999, Address: 0x195ce0, Func Offset: 0
	// Line 2000, Address: 0x195ce8, Func Offset: 0x8
	// Line 2001, Address: 0x195cf8, Func Offset: 0x18
	// Func End, Address: 0x195d04, Func Offset: 0x24
}

// 
// Start address: 0x195d10
void EnemyObjGetCharaRot(sfObj* obj, float* rot)
{
	// Line 2008, Address: 0x195d10, Func Offset: 0
	// Line 2009, Address: 0x195d1c, Func Offset: 0xc
	// Line 2010, Address: 0x195d30, Func Offset: 0x20
	// Func End, Address: 0x195d40, Func Offset: 0x30
}

// 
// Start address: 0x195d40
float EnemyObjCharaAngle(sfObj* obj)
{
	// Line 2017, Address: 0x195d40, Func Offset: 0
	// Line 2018, Address: 0x195d48, Func Offset: 0x8
	// Line 2019, Address: 0x195d58, Func Offset: 0x18
	// Func End, Address: 0x195d64, Func Offset: 0x24
}

// 
// Start address: 0x195d70
void EnemyObjSetCharaPos(sfObj* obj, float* pos)
{
	// Line 2026, Address: 0x195d70, Func Offset: 0
	// Line 2027, Address: 0x195d7c, Func Offset: 0xc
	// Line 2028, Address: 0x195d90, Func Offset: 0x20
	// Func End, Address: 0x195da0, Func Offset: 0x30
}

// 
// Start address: 0x195da0
void EnemyObjSetCharaCenterPos(sfObj* obj, float* pos)
{
	float* rot;
	float vec[4];
	// Line 2035, Address: 0x195da0, Func Offset: 0
	// Line 2038, Address: 0x195db8, Func Offset: 0x18
	// Line 2039, Address: 0x195dc0, Func Offset: 0x20
	// Line 2040, Address: 0x195dd0, Func Offset: 0x30
	// Line 2041, Address: 0x195ddc, Func Offset: 0x3c
	// Line 2042, Address: 0x195e04, Func Offset: 0x64
	// Line 2043, Address: 0x195e20, Func Offset: 0x80
	// Line 2044, Address: 0x195e34, Func Offset: 0x94
	// Func End, Address: 0x195e48, Func Offset: 0xa8
}

// 
// Start address: 0x195e50
void EnemyObjSetCharaRot(sfObj* obj, float* rot)
{
	float nrot[4];
	// Line 2062, Address: 0x195e50, Func Offset: 0
	// Line 2064, Address: 0x195e60, Func Offset: 0x10
	// Line 2068, Address: 0x195e68, Func Offset: 0x18
	// Line 2069, Address: 0x195e7c, Func Offset: 0x2c
	// Line 2070, Address: 0x195e84, Func Offset: 0x34
	// Func End, Address: 0x195e94, Func Offset: 0x44
}

// 
// Start address: 0x195ea0
void EnemyObjSetCharaRotByCenter(sfObj* obj, float* rot)
{
	float center[4];
	float nrot[4];
	// Line 2079, Address: 0x195ea0, Func Offset: 0
	// Line 2082, Address: 0x195eb8, Func Offset: 0x18
	// Line 2083, Address: 0x195ec0, Func Offset: 0x20
	// Line 2087, Address: 0x195ecc, Func Offset: 0x2c
	// Line 2088, Address: 0x195ee0, Func Offset: 0x40
	// Line 2089, Address: 0x195eec, Func Offset: 0x4c
	// Func End, Address: 0x195f00, Func Offset: 0x60
}

// 
// Start address: 0x195f00
float* EnemyObjTargetPos(sfObj* obj)
{
	// Line 2097, Address: 0x195f00, Func Offset: 0
	// Line 2098, Address: 0x195f04, Func Offset: 0x4
	// Func End, Address: 0x195f0c, Func Offset: 0xc
}

// 
// Start address: 0x195f10
void EnemyObjGetTargetPos(sfObj* obj, float* pos)
{
	// Line 2105, Address: 0x195f10, Func Offset: 0
	// Line 2106, Address: 0x195f14, Func Offset: 0x4
	// Line 2107, Address: 0x195f18, Func Offset: 0x8
	// Func End, Address: 0x195f20, Func Offset: 0x10
}

// 
// Start address: 0x195f20
void EnemyObjSetTargetPos(sfObj* obj, float* pos)
{
	// Line 2114, Address: 0x195f20, Func Offset: 0
	// Line 2115, Address: 0x195f34, Func Offset: 0x14
	// Line 2116, Address: 0x195f3c, Func Offset: 0x1c
	// Line 2117, Address: 0x195f44, Func Offset: 0x24
	// Line 2118, Address: 0x195f50, Func Offset: 0x30
	// Line 2119, Address: 0x195f5c, Func Offset: 0x3c
	// Func End, Address: 0x195f6c, Func Offset: 0x4c
}

// 
// Start address: 0x195f70
void EnemyObjTargetPosIsCenter(sfObj* obj)
{
	// Line 2128, Address: 0x195f70, Func Offset: 0
	// Line 2129, Address: 0x195f84, Func Offset: 0x14
	// Line 2130, Address: 0x195f8c, Func Offset: 0x1c
	// Line 2131, Address: 0x195f94, Func Offset: 0x24
	// Line 2132, Address: 0x195fa0, Func Offset: 0x30
	// Line 2133, Address: 0x195fb0, Func Offset: 0x40
	// Line 2134, Address: 0x195fb8, Func Offset: 0x48
	// Func End, Address: 0x195fc8, Func Offset: 0x58
}

// 
// Start address: 0x195fd0
void EnemyObjTargetPosIsMovePart(sfObj* obj, float height)
{
	// Line 2144, Address: 0x195fd0, Func Offset: 0
	// Line 2146, Address: 0x195fd4, Func Offset: 0x4
	// Line 2144, Address: 0x195fd8, Func Offset: 0x8
	// Line 2145, Address: 0x195fe0, Func Offset: 0x10
	// Line 2146, Address: 0x195fe8, Func Offset: 0x18
	// Line 2147, Address: 0x195ff0, Func Offset: 0x20
	// Line 2148, Address: 0x195ffc, Func Offset: 0x2c
	// Line 2149, Address: 0x196008, Func Offset: 0x38
	// Func End, Address: 0x196018, Func Offset: 0x48
}

// 
// Start address: 0x196020
void EnemyObjRotateWithStatus(sfObj* obj, int status)
{
	float rot[4];
	// Line 2158, Address: 0x196020, Func Offset: 0
	// Line 2160, Address: 0x196038, Func Offset: 0x18
	// Line 2161, Address: 0x196040, Func Offset: 0x20
	// Line 2163, Address: 0x196080, Func Offset: 0x60
	// Line 2164, Address: 0x196094, Func Offset: 0x74
	// Line 2165, Address: 0x19609c, Func Offset: 0x7c
	// Line 2166, Address: 0x1960a0, Func Offset: 0x80
	// Line 2167, Address: 0x1960b4, Func Offset: 0x94
	// Line 2168, Address: 0x1960c8, Func Offset: 0xa8
	// Line 2170, Address: 0x1960d0, Func Offset: 0xb0
	// Line 2171, Address: 0x1960e4, Func Offset: 0xc4
	// Line 2172, Address: 0x1960f8, Func Offset: 0xd8
	// Line 2174, Address: 0x196100, Func Offset: 0xe0
	// Line 2175, Address: 0x196114, Func Offset: 0xf4
	// Line 2176, Address: 0x196128, Func Offset: 0x108
	// Line 2178, Address: 0x196130, Func Offset: 0x110
	// Line 2180, Address: 0x196144, Func Offset: 0x124
	// Line 2181, Address: 0x196148, Func Offset: 0x128
	// Line 2182, Address: 0x196154, Func Offset: 0x134
	// Func End, Address: 0x196168, Func Offset: 0x148
}

// 
// Start address: 0x196170
sgBone* EnemyObjGetCharaRoot(sfObj* obj)
{
	// Line 2210, Address: 0x196170, Func Offset: 0
	// Func End, Address: 0x196178, Func Offset: 0x8
}

// 
// Start address: 0x196180
int EnemyObjCharaNBones(sfObj* obj)
{
	sfCharacter* chara;
	// Line 2218, Address: 0x196180, Func Offset: 0
	// Line 2219, Address: 0x196188, Func Offset: 0x8
	// Line 2220, Address: 0x196190, Func Offset: 0x10
	// Line 2221, Address: 0x196198, Func Offset: 0x18
	// Func End, Address: 0x1961a4, Func Offset: 0x24
}

// 
// Start address: 0x1961b0
sgBone* EnemyObjGetCharaBone(sfObj* obj, int bone_num)
{
	sfCharacter* chara;
	// Line 2229, Address: 0x1961b0, Func Offset: 0
	// Line 2230, Address: 0x1961bc, Func Offset: 0xc
	// Line 2232, Address: 0x1961c4, Func Offset: 0x14
	// Line 2235, Address: 0x1961dc, Func Offset: 0x2c
	// Func End, Address: 0x1961ec, Func Offset: 0x3c
}

// 
// Start address: 0x1961f0
void EnemyObjGetCharaBonePos(sfObj* obj, int bone_num, float* pos)
{
	sgBone* bone;
	// Line 2243, Address: 0x1961f0, Func Offset: 0
	// Line 2244, Address: 0x1961fc, Func Offset: 0xc
	// Line 2245, Address: 0x196204, Func Offset: 0x14
	// Line 2246, Address: 0x196210, Func Offset: 0x20
	// Func End, Address: 0x196220, Func Offset: 0x30
}

// 
// Start address: 0x196220
void EnemyObjGetCharaBoneRot(sfObj* obj, int bone_num, float* rot)
{
	sgBone* bone;
	// Line 2254, Address: 0x196220, Func Offset: 0
	// Line 2255, Address: 0x19622c, Func Offset: 0xc
	// Line 2256, Address: 0x196234, Func Offset: 0x14
	// Line 2257, Address: 0x196240, Func Offset: 0x20
	// Func End, Address: 0x196250, Func Offset: 0x30
}

// 
// Start address: 0x196250
void EnemyObjGetCharaBonePosAndRot(sfObj* obj, int bone_num, float* pos, float* rot)
{
	sgBone* bone;
	// Line 2267, Address: 0x196250, Func Offset: 0
	// Line 2268, Address: 0x196268, Func Offset: 0x18
	// Line 2269, Address: 0x196274, Func Offset: 0x24
	// Line 2270, Address: 0x196280, Func Offset: 0x30
	// Line 2271, Address: 0x19628c, Func Offset: 0x3c
	// Func End, Address: 0x1962a4, Func Offset: 0x54
}

// 
// Start address: 0x1962b0
sgBone* EnemyObjGetTargetCharaBone(sfObj* obj, int bone_num)
{
	// Line 2279, Address: 0x1962b0, Func Offset: 0
	// Line 2280, Address: 0x1962c0, Func Offset: 0x10
	// Line 2281, Address: 0x1962c8, Func Offset: 0x18
	// Line 2283, Address: 0x1962d8, Func Offset: 0x28
	// Line 2284, Address: 0x1962f0, Func Offset: 0x40
	// Func End, Address: 0x196300, Func Offset: 0x50
}

// 
// Start address: 0x196300
int EnemyCheckBoneIsLocal(sgBone* bone)
{
	// Line 2293, Address: 0x196300, Func Offset: 0
	// Line 2294, Address: 0x19630c, Func Offset: 0xc
	// Func End, Address: 0x196314, Func Offset: 0x14
}

// 
// Start address: 0x196320
int EnemyCheckBoneIsGlobal(sgBone* bone)
{
	// Line 2303, Address: 0x196320, Func Offset: 0
	// Line 2304, Address: 0x19632c, Func Offset: 0xc
	// Func End, Address: 0x196334, Func Offset: 0x14
}

// 
// Start address: 0x196340
void EnemyObjCharaBoneRelease(sfObj* obj, int bone_num)
{
	sgBone* bone;
	// Line 2325, Address: 0x196340, Func Offset: 0
	// Line 2326, Address: 0x196348, Func Offset: 0x8
	// Line 2327, Address: 0x196350, Func Offset: 0x10
	// Line 2328, Address: 0x196358, Func Offset: 0x18
	// Func End, Address: 0x196364, Func Offset: 0x24
}

// 
// Start address: 0x196370
void EnemyCharaBoneRelease(sgBone* bone)
{
	sgBone* pbone;
	float ppos[4];
	float pos[4];
	float vec[4];
	float prot[4];
	float rot[4];
	// Line 2334, Address: 0x196370, Func Offset: 0
	// Line 2343, Address: 0x196380, Func Offset: 0x10
	// Line 2344, Address: 0x196388, Func Offset: 0x18
	// Line 2345, Address: 0x196398, Func Offset: 0x28
	// Line 2346, Address: 0x1963a4, Func Offset: 0x34
	// Line 2347, Address: 0x1963ac, Func Offset: 0x3c
	// Line 2348, Address: 0x1963b4, Func Offset: 0x44
	// Line 2349, Address: 0x1963c0, Func Offset: 0x50
	// Line 2350, Address: 0x1963cc, Func Offset: 0x5c
	// Line 2351, Address: 0x1963d8, Func Offset: 0x68
	// Line 2352, Address: 0x1963f8, Func Offset: 0x88
	// Line 2353, Address: 0x196404, Func Offset: 0x94
	// Line 2354, Address: 0x196414, Func Offset: 0xa4
	// Line 2355, Address: 0x196420, Func Offset: 0xb0
	// Line 2356, Address: 0x196430, Func Offset: 0xc0
	// Line 2358, Address: 0x19643c, Func Offset: 0xcc
	// Func End, Address: 0x196454, Func Offset: 0xe4
}

// 
// Start address: 0x196460
void EnemyGetCameraPos(float* pos)
{
	// Line 2377, Address: 0x196460, Func Offset: 0
	// Line 2378, Address: 0x19646c, Func Offset: 0xc
	// Line 2379, Address: 0x19647c, Func Offset: 0x1c
	// Func End, Address: 0x19648c, Func Offset: 0x2c
}

// 
// Start address: 0x196490
void EnemyGetCameraDir(float* dir)
{
	// Line 2385, Address: 0x196490, Func Offset: 0
	// Line 2386, Address: 0x19649c, Func Offset: 0xc
	// Line 2387, Address: 0x1964b0, Func Offset: 0x20
	// Func End, Address: 0x1964c0, Func Offset: 0x30
}

// 
// Start address: 0x1964c0
float EnemyCameraDistance(float* pos)
{
	// Line 2394, Address: 0x1964c0, Func Offset: 0
	// Line 2395, Address: 0x1964cc, Func Offset: 0xc
	// Line 2396, Address: 0x1964e0, Func Offset: 0x20
	// Func End, Address: 0x1964f0, Func Offset: 0x30
}

// 
// Start address: 0x1964f0
float EnemyDotVectorWithCameraDir(float* pos, float* dir)
{
	float vec[4];
	// Line 2404, Address: 0x1964f0, Func Offset: 0
	// Line 2406, Address: 0x196504, Func Offset: 0x14
	// Line 2407, Address: 0x196524, Func Offset: 0x34
	// Line 2408, Address: 0x196544, Func Offset: 0x54
	// Func End, Address: 0x196558, Func Offset: 0x68
}

// 
// Start address: 0x196560
void EnemySystemPrepare()
{
	<unknown fundamental type (0xa510)>* tadr;
	// Line 2415, Address: 0x196560, Func Offset: 0
	// Line 2417, Address: 0x196568, Func Offset: 0x8
	// Line 2419, Address: 0x196570, Func Offset: 0x10
	// Line 2420, Address: 0x196578, Func Offset: 0x18
	// Line 2421, Address: 0x196580, Func Offset: 0x20
	// Line 2422, Address: 0x19658c, Func Offset: 0x2c
	// Line 2421, Address: 0x196590, Func Offset: 0x30
	// Line 2422, Address: 0x196594, Func Offset: 0x34
	// Line 2421, Address: 0x196598, Func Offset: 0x38
	// Line 2422, Address: 0x19659c, Func Offset: 0x3c
	// Line 2421, Address: 0x1965a0, Func Offset: 0x40
	// Line 2422, Address: 0x1965a4, Func Offset: 0x44
	// Line 2424, Address: 0x1965b0, Func Offset: 0x50
	// Line 2425, Address: 0x1965b8, Func Offset: 0x58
	// Func End, Address: 0x1965c8, Func Offset: 0x68
}

// 
// Start address: 0x1965d0
void EnemySystemPutAway()
{
	// Line 2432, Address: 0x1965d0, Func Offset: 0
	// Func End, Address: 0x1965d8, Func Offset: 0x8
}

// 
// Start address: 0x1965e0
void EnemyObjCommonHandle(sfObj* obj)
{
	float* pos;
	float* ppos;
	float t;
	// Line 2438, Address: 0x1965e0, Func Offset: 0
	// Line 2444, Address: 0x1965f4, Func Offset: 0x14
	// Line 2446, Address: 0x1965fc, Func Offset: 0x1c
	// Line 2447, Address: 0x196608, Func Offset: 0x28
	// Line 2448, Address: 0x196610, Func Offset: 0x30
	// Line 2450, Address: 0x196628, Func Offset: 0x48
	// Line 2452, Address: 0x196630, Func Offset: 0x50
	// Line 2454, Address: 0x196638, Func Offset: 0x58
	// Line 2456, Address: 0x196644, Func Offset: 0x64
	// Line 2458, Address: 0x19664c, Func Offset: 0x6c
	// Line 2461, Address: 0x19667c, Func Offset: 0x9c
	// Line 2462, Address: 0x196684, Func Offset: 0xa4
	// Line 2463, Address: 0x196690, Func Offset: 0xb0
	// Line 2464, Address: 0x19669c, Func Offset: 0xbc
	// Line 2465, Address: 0x1966a0, Func Offset: 0xc0
	// Func End, Address: 0x1966b8, Func Offset: 0xd8
}

// 
// Start address: 0x1966c0
void EnemyObjDrawCommonHandle()
{
	// Line 2476, Address: 0x1966c0, Func Offset: 0
	// Func End, Address: 0x1966c8, Func Offset: 0x8
}

// 
// Start address: 0x1966d0
void EnemyObjCharaDraw(sfObj* obj)
{
	// Line 2483, Address: 0x1966d0, Func Offset: 0
	// Line 2484, Address: 0x1966dc, Func Offset: 0xc
	// Line 2485, Address: 0x1966f0, Func Offset: 0x20
	// Line 2486, Address: 0x1966fc, Func Offset: 0x2c
	// Line 2487, Address: 0x196708, Func Offset: 0x38
	// Func End, Address: 0x196718, Func Offset: 0x48
}

// 
// Start address: 0x196720
void normal_normalize()
{
	// Line 2494, Address: 0x196720, Func Offset: 0
	// Func End, Address: 0x196728, Func Offset: 0x8
}

// 
// Start address: 0x196730
void EnemyObjCharaDrawNormalNormalize(sfObj* obj)
{
	// Line 2501, Address: 0x196730, Func Offset: 0
	// Line 2502, Address: 0x19673c, Func Offset: 0xc
	// Line 2503, Address: 0x196750, Func Offset: 0x20
	// Line 2504, Address: 0x196760, Func Offset: 0x30
	// Line 2505, Address: 0x19676c, Func Offset: 0x3c
	// Func End, Address: 0x19677c, Func Offset: 0x4c
}

// 
// Start address: 0x196780
void no_update_zbuffer_pre()
{
	// Line 2512, Address: 0x196780, Func Offset: 0
	// Func End, Address: 0x19678c, Func Offset: 0xc
}

// 
// Start address: 0x196790
void no_update_zbuffer_post()
{
	// Line 2520, Address: 0x196790, Func Offset: 0
	// Func End, Address: 0x196798, Func Offset: 0x8
}

// 
// Start address: 0x1967a0
void EnemyObjCharaDrawNoUpdateZBuffer(sfObj* obj)
{
	// Line 2527, Address: 0x1967a0, Func Offset: 0
	// Line 2528, Address: 0x1967ac, Func Offset: 0xc
	// Line 2529, Address: 0x1967c0, Func Offset: 0x20
	// Line 2530, Address: 0x1967d0, Func Offset: 0x30
	// Line 2531, Address: 0x1967e0, Func Offset: 0x40
	// Func End, Address: 0x1967f0, Func Offset: 0x50
}

// 
// Start address: 0x1967f0
void EnemyObjCharaErase(sfObj* obj)
{
	// Line 2537, Address: 0x1967f0, Func Offset: 0
	// Line 2538, Address: 0x1967f4, Func Offset: 0x4
	// Line 2537, Address: 0x1967f8, Func Offset: 0x8
	// Line 2538, Address: 0x196800, Func Offset: 0x10
	// Line 2539, Address: 0x196808, Func Offset: 0x18
	// Line 2540, Address: 0x196814, Func Offset: 0x24
	// Line 2541, Address: 0x196820, Func Offset: 0x30
	// Func End, Address: 0x196830, Func Offset: 0x40
}

// 
// Start address: 0x196830
void set_transparency(sfObj* obj)
{
	int a;
	// Line 2547, Address: 0x196830, Func Offset: 0
	// Line 2549, Address: 0x196834, Func Offset: 0x4
	// Line 2547, Address: 0x196838, Func Offset: 0x8
	// Line 2549, Address: 0x19683c, Func Offset: 0xc
	// Line 2550, Address: 0x196864, Func Offset: 0x34
	// Line 2552, Address: 0x196878, Func Offset: 0x48
	// Line 2553, Address: 0x196884, Func Offset: 0x54
	// Func End, Address: 0x196890, Func Offset: 0x60
}

// 
// Start address: 0x196890
void set_transparency_nn(sfObj* obj)
{
	int a;
	// Line 2559, Address: 0x196890, Func Offset: 0
	// Line 2561, Address: 0x196894, Func Offset: 0x4
	// Line 2559, Address: 0x196898, Func Offset: 0x8
	// Line 2561, Address: 0x19689c, Func Offset: 0xc
	// Line 2562, Address: 0x1968c4, Func Offset: 0x34
	// Line 2564, Address: 0x1968d8, Func Offset: 0x48
	// Line 2565, Address: 0x1968e4, Func Offset: 0x54
	// Line 2566, Address: 0x1968ec, Func Offset: 0x5c
	// Func End, Address: 0x1968f8, Func Offset: 0x68
}

// 
// Start address: 0x196900
void set_reverse()
{
	// Line 2572, Address: 0x196900, Func Offset: 0
	// Line 2573, Address: 0x196908, Func Offset: 0x8
	// Line 2575, Address: 0x196910, Func Offset: 0x10
	// Line 2576, Address: 0x19691c, Func Offset: 0x1c
	// Func End, Address: 0x196928, Func Offset: 0x28
}

// 
// Start address: 0x196930
void set_zbuffer()
{
	// Line 2583, Address: 0x196930, Func Offset: 0
	// Func End, Address: 0x19693c, Func Offset: 0xc
}

// 
// Start address: 0x196940
void reset_transparency()
{
	// Line 2592, Address: 0x196940, Func Offset: 0
	// Line 2593, Address: 0x196948, Func Offset: 0x8
	// Line 2594, Address: 0x196950, Func Offset: 0x10
	// Line 2595, Address: 0x196958, Func Offset: 0x18
	// Func End, Address: 0x196964, Func Offset: 0x24
}

// 
// Start address: 0x196970
void EnemyObjCharaDrawTransparency(sfObj* obj, float transparency)
{
	// Line 2602, Address: 0x196970, Func Offset: 0
	// Line 2603, Address: 0x196974, Func Offset: 0x4
	// Line 2602, Address: 0x196978, Func Offset: 0x8
	// Line 2603, Address: 0x19697c, Func Offset: 0xc
	// Line 2602, Address: 0x196980, Func Offset: 0x10
	// Line 2603, Address: 0x19698c, Func Offset: 0x1c
	// Line 2604, Address: 0x196998, Func Offset: 0x28
	// Line 2605, Address: 0x1969a0, Func Offset: 0x30
	// Line 2606, Address: 0x1969a8, Func Offset: 0x38
	// Line 2607, Address: 0x1969bc, Func Offset: 0x4c
	// Line 2608, Address: 0x1969c0, Func Offset: 0x50
	// Line 2609, Address: 0x1969e8, Func Offset: 0x78
	// Line 2610, Address: 0x1969f4, Func Offset: 0x84
	// Line 2611, Address: 0x196a00, Func Offset: 0x90
	// Line 2612, Address: 0x196a08, Func Offset: 0x98
	// Line 2613, Address: 0x196a0c, Func Offset: 0x9c
	// Line 2614, Address: 0x196a20, Func Offset: 0xb0
	// Line 2616, Address: 0x196a30, Func Offset: 0xc0
	// Func End, Address: 0x196a44, Func Offset: 0xd4
}

// 
// Start address: 0x196a50
void EnemyObjCharaDrawTransparencyNN(sfObj* obj, float transparency)
{
	// Line 2623, Address: 0x196a50, Func Offset: 0
	// Line 2624, Address: 0x196a54, Func Offset: 0x4
	// Line 2623, Address: 0x196a58, Func Offset: 0x8
	// Line 2624, Address: 0x196a5c, Func Offset: 0xc
	// Line 2623, Address: 0x196a60, Func Offset: 0x10
	// Line 2624, Address: 0x196a6c, Func Offset: 0x1c
	// Line 2625, Address: 0x196a78, Func Offset: 0x28
	// Line 2626, Address: 0x196a80, Func Offset: 0x30
	// Line 2627, Address: 0x196a88, Func Offset: 0x38
	// Line 2628, Address: 0x196a9c, Func Offset: 0x4c
	// Line 2629, Address: 0x196aa0, Func Offset: 0x50
	// Line 2630, Address: 0x196ac8, Func Offset: 0x78
	// Line 2631, Address: 0x196ad8, Func Offset: 0x88
	// Line 2632, Address: 0x196ae4, Func Offset: 0x94
	// Line 2633, Address: 0x196aec, Func Offset: 0x9c
	// Line 2634, Address: 0x196af4, Func Offset: 0xa4
	// Line 2635, Address: 0x196b08, Func Offset: 0xb8
	// Line 2637, Address: 0x196b18, Func Offset: 0xc8
	// Func End, Address: 0x196b2c, Func Offset: 0xdc
}

// 
// Start address: 0x196b30
void EnemyObjCharaDrawReverse(sfObj* obj)
{
	// Line 2643, Address: 0x196b30, Func Offset: 0
	// Line 2644, Address: 0x196b3c, Func Offset: 0xc
	// Line 2645, Address: 0x196b50, Func Offset: 0x20
	// Line 2646, Address: 0x196b60, Func Offset: 0x30
	// Line 2647, Address: 0x196b70, Func Offset: 0x40
	// Func End, Address: 0x196b80, Func Offset: 0x50
}

// 
// Start address: 0x196b80
void EnemyObjCharaDrawZBufferOnly(sfObj* obj)
{
	// Line 2653, Address: 0x196b80, Func Offset: 0
	// Line 2654, Address: 0x196b8c, Func Offset: 0xc
	// Line 2655, Address: 0x196ba0, Func Offset: 0x20
	// Line 2656, Address: 0x196bb0, Func Offset: 0x30
	// Line 2657, Address: 0x196bc0, Func Offset: 0x40
	// Func End, Address: 0x196bd0, Func Offset: 0x50
}

// 
// Start address: 0x196bd0
void EnemyCharaDrawDirect(sfCharacter* chara)
{
	// Line 2664, Address: 0x196bd0, Func Offset: 0
	// Func End, Address: 0x196bd8, Func Offset: 0x8
}

// 
// Start address: 0x196be0
void EnemyCharaDrawDirectNN(sfCharacter* chara)
{
	// Line 2671, Address: 0x196be0, Func Offset: 0
	// Line 2672, Address: 0x196bf0, Func Offset: 0x10
	// Line 2673, Address: 0x196bf8, Func Offset: 0x18
	// Line 2674, Address: 0x196c00, Func Offset: 0x20
	// Func End, Address: 0x196c10, Func Offset: 0x30
}

// 
// Start address: 0x196c10
void EnemyCharaDrawDirectTransparency(sfCharacter* chara, float transparency)
{
	int a;
	// Line 2682, Address: 0x196c10, Func Offset: 0
	// Line 2681, Address: 0x196c14, Func Offset: 0x4
	// Line 2682, Address: 0x196c1c, Func Offset: 0xc
	// Line 2681, Address: 0x196c20, Func Offset: 0x10
	// Line 2682, Address: 0x196c24, Func Offset: 0x14
	// Line 2683, Address: 0x196c2c, Func Offset: 0x1c
	// Line 2684, Address: 0x196c34, Func Offset: 0x24
	// Line 2686, Address: 0x196c58, Func Offset: 0x48
	// Line 2687, Address: 0x196c78, Func Offset: 0x68
	// Line 2689, Address: 0x196c8c, Func Offset: 0x7c
	// Line 2690, Address: 0x196c98, Func Offset: 0x88
	// Line 2691, Address: 0x196ca0, Func Offset: 0x90
	// Line 2692, Address: 0x196ca8, Func Offset: 0x98
	// Line 2694, Address: 0x196cb0, Func Offset: 0xa0
	// Func End, Address: 0x196cc0, Func Offset: 0xb0
}

// 
// Start address: 0x196cc0
void EnemyCharaDrawDirectTransparencyWZ(sfCharacter* chara, float transparency)
{
	int a;
	// Line 2702, Address: 0x196cc0, Func Offset: 0
	// Line 2701, Address: 0x196cc4, Func Offset: 0x4
	// Line 2702, Address: 0x196ccc, Func Offset: 0xc
	// Line 2701, Address: 0x196cd0, Func Offset: 0x10
	// Line 2702, Address: 0x196cd4, Func Offset: 0x14
	// Line 2703, Address: 0x196cdc, Func Offset: 0x1c
	// Line 2704, Address: 0x196ce4, Func Offset: 0x24
	// Line 2706, Address: 0x196d08, Func Offset: 0x48
	// Line 2707, Address: 0x196d28, Func Offset: 0x68
	// Line 2709, Address: 0x196d3c, Func Offset: 0x7c
	// Line 2710, Address: 0x196d48, Func Offset: 0x88
	// Line 2711, Address: 0x196d50, Func Offset: 0x90
	// Line 2712, Address: 0x196d58, Func Offset: 0x98
	// Line 2714, Address: 0x196d60, Func Offset: 0xa0
	// Func End, Address: 0x196d70, Func Offset: 0xb0
}

// 
// Start address: 0x196d70
int EnemyCheckConditionForDraw(sfObj* obj)
{
	// Line 2721, Address: 0x196d70, Func Offset: 0
	// Line 2722, Address: 0x196d78, Func Offset: 0x8
	// Line 2736, Address: 0x196da8, Func Offset: 0x38
	// Line 2738, Address: 0x196db0, Func Offset: 0x40
	// Line 2739, Address: 0x196db8, Func Offset: 0x48
	// Func End, Address: 0x196dc4, Func Offset: 0x54
}

// 
// Start address: 0x196dd0
void EnemyObjTurnToPlayerHorizontal(sfObj* obj, int player, float* pos, float rate)
{
	float* ppos;
	float rot[4];
	// Line 2749, Address: 0x196dd0, Func Offset: 0
	// Line 2752, Address: 0x196de8, Func Offset: 0x18
	// Line 2749, Address: 0x196dec, Func Offset: 0x1c
	// Line 2752, Address: 0x196dfc, Func Offset: 0x2c
	// Line 2753, Address: 0x196e0c, Func Offset: 0x3c
	// Line 2754, Address: 0x196e18, Func Offset: 0x48
	// Line 2755, Address: 0x196e24, Func Offset: 0x54
	// Line 2756, Address: 0x196e38, Func Offset: 0x68
	// Line 2757, Address: 0x196e44, Func Offset: 0x74
	// Func End, Address: 0x196e64, Func Offset: 0x94
}

// 
// Start address: 0x196e70
void EnemyObjTurnToPlayerHorizontalLimitAngle(sfObj* obj, int player, float* pos, float angle)
{
	float* ppos;
	float rot[4];
	// Line 2767, Address: 0x196e70, Func Offset: 0
	// Line 2770, Address: 0x196e88, Func Offset: 0x18
	// Line 2767, Address: 0x196e8c, Func Offset: 0x1c
	// Line 2770, Address: 0x196e9c, Func Offset: 0x2c
	// Line 2771, Address: 0x196eac, Func Offset: 0x3c
	// Line 2772, Address: 0x196eb8, Func Offset: 0x48
	// Line 2773, Address: 0x196ec4, Func Offset: 0x54
	// Line 2774, Address: 0x196ed8, Func Offset: 0x68
	// Line 2775, Address: 0x196ee4, Func Offset: 0x74
	// Func End, Address: 0x196f04, Func Offset: 0x94
}

// 
// Start address: 0x196f10
int EnemyAllPurposeObjGetPos(sfObj* obj, float* pos)
{
	int r;
	int n;
	// Line 2811, Address: 0x196f10, Func Offset: 0
	// Line 2814, Address: 0x196f2c, Func Offset: 0x1c
	// Line 2815, Address: 0x196f6c, Func Offset: 0x5c
	// Line 2816, Address: 0x196f70, Func Offset: 0x60
	// Line 2817, Address: 0x196f78, Func Offset: 0x68
	// Line 2818, Address: 0x196f84, Func Offset: 0x74
	// Line 2821, Address: 0x196f94, Func Offset: 0x84
	// Line 2822, Address: 0x196f9c, Func Offset: 0x8c
	// Line 2823, Address: 0x196fa0, Func Offset: 0x90
	// Line 2824, Address: 0x196fb0, Func Offset: 0xa0
	// Line 2826, Address: 0x196fb8, Func Offset: 0xa8
	// Line 2827, Address: 0x196fd0, Func Offset: 0xc0
	// Line 2830, Address: 0x196fe0, Func Offset: 0xd0
	// Line 2833, Address: 0x196fe8, Func Offset: 0xd8
	// Line 2834, Address: 0x196ffc, Func Offset: 0xec
	// Line 2838, Address: 0x197000, Func Offset: 0xf0
	// Line 2839, Address: 0x197004, Func Offset: 0xf4
	// Func End, Address: 0x19701c, Func Offset: 0x10c
}

// 
// Start address: 0x197020
int EnemyCheckCharaClip(sfObj* obj)
{
	float pos[4];
	// Line 2862, Address: 0x197020, Func Offset: 0
	// Line 2864, Address: 0x197024, Func Offset: 0x4
	// Line 2862, Address: 0x197028, Func Offset: 0x8
	// Line 2864, Address: 0x19702c, Func Offset: 0xc
	// Line 2862, Address: 0x197030, Func Offset: 0x10
	// Line 2864, Address: 0x197034, Func Offset: 0x14
	// Line 2865, Address: 0x19703c, Func Offset: 0x1c
	// Line 2866, Address: 0x197048, Func Offset: 0x28
	// Func End, Address: 0x197058, Func Offset: 0x38
}

// 
// Start address: 0x197060
int EnemyCheckCharaClipPos(sfObj* obj, float* target)
{
	Model* model;
	BoxData* box;
	float* rot;
	float pos[4];
	float vec[4];
	int i;
	float s;
	// Line 2874, Address: 0x197060, Func Offset: 0
	// Line 2875, Address: 0x197080, Func Offset: 0x20
	// Line 2876, Address: 0x19708c, Func Offset: 0x2c
	// Line 2881, Address: 0x197090, Func Offset: 0x30
	// Line 2882, Address: 0x1970b0, Func Offset: 0x50
	// Line 2883, Address: 0x1970b8, Func Offset: 0x58
	// Line 2884, Address: 0x1970c0, Func Offset: 0x60
	// Line 2885, Address: 0x1970cc, Func Offset: 0x6c
	// Line 2886, Address: 0x1970d8, Func Offset: 0x78
	// Line 2887, Address: 0x1970ec, Func Offset: 0x8c
	// Line 2888, Address: 0x19710c, Func Offset: 0xac
	// Line 2889, Address: 0x197128, Func Offset: 0xc8
	// Line 2890, Address: 0x197134, Func Offset: 0xd4
	// Line 2891, Address: 0x197144, Func Offset: 0xe4
	// Line 2892, Address: 0x197150, Func Offset: 0xf0
	// Func End, Address: 0x197170, Func Offset: 0x110
}

