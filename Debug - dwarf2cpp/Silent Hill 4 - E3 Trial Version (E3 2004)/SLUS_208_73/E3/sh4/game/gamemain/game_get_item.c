typedef struct sfObj;
typedef struct _EnforceItemWork;
typedef struct _anon0;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _ObjHitCylinder;
typedef struct _EventHitWork;
typedef struct _ObjHitCube;
typedef struct _ObjHitSphere;
typedef struct _PutItemDisableData;
typedef struct _ObjHitDoor;
typedef struct _ObjHitData;
typedef struct sgAnime;
typedef struct _EventDriver;
typedef struct _EnforceItemData;
typedef struct _GAME_WORK;
typedef union _anon1;
typedef struct sfCharacter;
typedef struct sgSVModel;
typedef struct _EventHitHandler;
typedef struct _anon2;
typedef struct _anon3;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef sgIKSolveResult(*type_6)();
typedef void(*type_17)(sgAnime*, int);
typedef void(*type_18)(sfObj*);
typedef void(*type_27)(sfObj*);
typedef int(*type_30)(sfObj*);
typedef int(*type_32)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef int(*type_35)(sfObj*);
typedef void(*type_36)(_anon2*, int, int, float*);
typedef int(*type_37)(sfObj*);
typedef void(*type_38)(sfObj*);
typedef void(*type_41)(sfObj*);
typedef void(*type_42)(sfObj*);
typedef void(*type_43)(sfObj*);

typedef float type_4[4][2];
typedef _anon1 type_5[24];
typedef int type_7[1];
typedef float type_8[4];
typedef int type_9[1];
typedef int type_10[1];
typedef float type_11[4];
typedef float type_12[4][4];
typedef int type_13[1];
typedef void* type_14[4];
typedef _anon1 type_15[256];
typedef int type_16[1];
typedef int type_19[1];
typedef float type_20[4];
typedef unsigned char type_21[4];
typedef unsigned char type_22[5200];
typedef int type_23[1];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef char type_26[4];
typedef unsigned char type_28[4];
typedef float type_29[1];
typedef int type_31[1];
typedef int type_33[1];
typedef _EnforceItemWork type_39[32];
typedef _anon1 type_40[4];

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _anon0
{
	int type;
	void(*func)(sfObj*);
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon1 dmy[24];
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

struct _ObjHitCylinder
{
	float r;
	float h;
};

struct _EventHitWork
{
	_EventDriver* evdriver;
	sfObj* obj;
	_EventHitWork* prev;
	_EventHitWork* next;
	float pos[4];
	short setlevel;
	short item_id;
	short item_serial_no;
	float item_quat[4];
	sfCharacter* item_character;
	short is_enforce_item;
	void* enforce_item_work;
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

struct _PutItemDisableData
{
	unsigned char flag[5200];
};

struct _ObjHitDoor
{
	int num;
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon1 val[4];
};

struct _EnforceItemData
{
	_EnforceItemWork item_work[32];
};

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
};

union _anon1
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon3 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _EventHitHandler
{
	_EventHitWork* first_evhit;
	_EventHitWork* last_evhit;
	short enforce_itemset;
	_EventHitWork* lastconst_item;
	void* lastconst_enforce_item;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon3
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

_PutItemDisableData disable_put_item;
_EnforceItemData enforce_item_data;
float sg_vector_unit_y[4];
_GAME_WORK gamew;
_EventHitHandler evhit_handler;
void(*EventHitDraw)(sfObj*);
void(*EventHitDestruct)(sfObj*);
void(*EventHitConstruct)(sfObj*);
void(*EventHitExec)(sfObj*);
_ObjHitData* enforce_hitdt;

void GemaGetItemAllInit();
void GameGetItemSetPutDisable(unsigned char* buff, int stage, int scene, int serial);
void GameGetItemSetPutEnable(unsigned char* buff, int stage, int scene, int serial);
int GameGetItemCheckPutDisable(unsigned char* buff, int stage, int scene, int serial);
void GameGetItemDiasableDataReset();
void GameGetItemDiasableDataLoad(_PutItemDisableData* addr);
void GameGetItemDiasableDataSave(_PutItemDisableData* addr);
_PutItemDisableData* GameGetItemDiasableDataPtr();
unsigned char* GameGetItemDiasableDataFlagPtr();
_EnforceItemWork* getitem_enforceitem_regist_sub(_anon0* objdata, int no);
_EnforceItemWork* getitem_enforceitem_regist(_anon0* objdata);
void GameGetItemEnforceDataDelete(_EnforceItemWork* eitem);
int GameGetItemEnforceDataGetLive(_EnforceItemWork* eitem);
_EnforceItemData* GameGetItemEnforceDataPtr();
void GameGetItemEnforceDataReset();
void GameGetItemEnforceDataLoad(_EnforceItemData* addr);
void GameGetItemEnforceDataSave(_EnforceItemData* addr);
_EventHitWork* getitem_enforceitem_set_by_work(_EnforceItemWork* eitem);
_EventHitWork* GameGetItemEnforceSetWithObjHit(float* p, float rot, int model_id, int tex_id, int item_id, _ObjHitData* hitdt);
_EventHitWork* GameGetItemEnforceSet(float* p, float rot, int model_id, int tex_id, int item_id);
void GameGetItemEnforceSetQuat(_EventHitWork* item, float* quat);
_EnforceItemWork* GameGetItemEnforceCheckNearPos(float* p, float range);
void GameGetItemEnforceSetSceneInit();
void GameGetItemEnforceSetLostItemFlag(_EventHitWork* item);
void GameGetItemReplaceLostItem();
void GameGetItemEnforceSetVal(_EnforceItemWork* enforce, int idx, int val);
int GameGetItemEnforceVal(_EnforceItemWork* enforce, int idx);
int FinisherGetEventEnforceSet(float* p, int id);
void FinisherGetEventMoveScene(int id, int old_scene, int new_scene, int move_flag, float* move);

// 
// Start address: 0x218440
void GemaGetItemAllInit()
{
	// Line 72, Address: 0x218440, Func Offset: 0
	// Line 73, Address: 0x218448, Func Offset: 0x8
	// Line 74, Address: 0x218450, Func Offset: 0x10
	// Line 75, Address: 0x218458, Func Offset: 0x18
	// Func End, Address: 0x218464, Func Offset: 0x24
}

// 
// Start address: 0x218470
void GameGetItemSetPutDisable(unsigned char* buff, int stage, int scene, int serial)
{
	// Line 139, Address: 0x218470, Func Offset: 0
	// Line 140, Address: 0x218490, Func Offset: 0x20
	// Line 147, Address: 0x218498, Func Offset: 0x28
	// Line 148, Address: 0x2184f8, Func Offset: 0x88
	// Func End, Address: 0x218500, Func Offset: 0x90
}

// 
// Start address: 0x218500
void GameGetItemSetPutEnable(unsigned char* buff, int stage, int scene, int serial)
{
	// Line 168, Address: 0x218500, Func Offset: 0
	// Line 169, Address: 0x218520, Func Offset: 0x20
	// Line 176, Address: 0x218528, Func Offset: 0x28
	// Line 177, Address: 0x21858c, Func Offset: 0x8c
	// Func End, Address: 0x218598, Func Offset: 0x98
}

// 
// Start address: 0x2185a0
int GameGetItemCheckPutDisable(unsigned char* buff, int stage, int scene, int serial)
{
	// Line 199, Address: 0x2185a0, Func Offset: 0
	// Line 200, Address: 0x2185c0, Func Offset: 0x20
	// Line 207, Address: 0x2185c8, Func Offset: 0x28
	// Line 208, Address: 0x218628, Func Offset: 0x88
	// Func End, Address: 0x218630, Func Offset: 0x90
}

// 
// Start address: 0x218630
void GameGetItemDiasableDataReset()
{
	// Line 216, Address: 0x218630, Func Offset: 0
	// Line 217, Address: 0x218638, Func Offset: 0x8
	// Line 218, Address: 0x21864c, Func Offset: 0x1c
	// Func End, Address: 0x218658, Func Offset: 0x28
}

// 
// Start address: 0x218660
void GameGetItemDiasableDataLoad(_PutItemDisableData* addr)
{
	// Line 228, Address: 0x218660, Func Offset: 0
	// Line 229, Address: 0x21866c, Func Offset: 0xc
	// Line 230, Address: 0x218684, Func Offset: 0x24
	// Func End, Address: 0x218694, Func Offset: 0x34
}

// 
// Start address: 0x2186a0
void GameGetItemDiasableDataSave(_PutItemDisableData* addr)
{
	// Line 240, Address: 0x2186a0, Func Offset: 0
	// Line 241, Address: 0x2186ac, Func Offset: 0xc
	// Line 242, Address: 0x2186c4, Func Offset: 0x24
	// Func End, Address: 0x2186d4, Func Offset: 0x34
}

// 
// Start address: 0x2186e0
_PutItemDisableData* GameGetItemDiasableDataPtr()
{
	// Line 251, Address: 0x2186e0, Func Offset: 0
	// Line 252, Address: 0x2186e4, Func Offset: 0x4
	// Func End, Address: 0x2186ec, Func Offset: 0xc
}

// 
// Start address: 0x2186f0
unsigned char* GameGetItemDiasableDataFlagPtr()
{
	// Line 262, Address: 0x2186f0, Func Offset: 0
	// Func End, Address: 0x2186f8, Func Offset: 0x8
}

// 
// Start address: 0x218700
_EnforceItemWork* getitem_enforceitem_regist_sub(_anon0* objdata, int no)
{
	int i;
	// Line 269, Address: 0x218700, Func Offset: 0
	// Line 272, Address: 0x218704, Func Offset: 0x4
	// Line 269, Address: 0x218708, Func Offset: 0x8
	// Line 272, Address: 0x21870c, Func Offset: 0xc
	// Line 269, Address: 0x218710, Func Offset: 0x10
	// Line 272, Address: 0x218728, Func Offset: 0x28
	// Line 269, Address: 0x21872c, Func Offset: 0x2c
	// Line 273, Address: 0x218730, Func Offset: 0x30
	// Line 274, Address: 0x218744, Func Offset: 0x44
	// Line 273, Address: 0x218748, Func Offset: 0x48
	// Line 274, Address: 0x21874c, Func Offset: 0x4c
	// Line 277, Address: 0x218758, Func Offset: 0x58
	// Line 276, Address: 0x21875c, Func Offset: 0x5c
	// Line 277, Address: 0x218760, Func Offset: 0x60
	// Line 276, Address: 0x218764, Func Offset: 0x64
	// Line 277, Address: 0x218768, Func Offset: 0x68
	// Line 279, Address: 0x21876c, Func Offset: 0x6c
	// Line 277, Address: 0x218770, Func Offset: 0x70
	// Line 285, Address: 0x218774, Func Offset: 0x74
	// Line 278, Address: 0x218778, Func Offset: 0x78
	// Line 279, Address: 0x218788, Func Offset: 0x88
	// Line 280, Address: 0x218798, Func Offset: 0x98
	// Line 281, Address: 0x2187a4, Func Offset: 0xa4
	// Line 279, Address: 0x2187a8, Func Offset: 0xa8
	// Line 280, Address: 0x2187ac, Func Offset: 0xac
	// Line 281, Address: 0x2187b4, Func Offset: 0xb4
	// Line 285, Address: 0x2187bc, Func Offset: 0xbc
	// Line 282, Address: 0x2187c0, Func Offset: 0xc0
	// Line 283, Address: 0x2187cc, Func Offset: 0xcc
	// Line 280, Address: 0x2187d0, Func Offset: 0xd0
	// Line 283, Address: 0x2187d4, Func Offset: 0xd4
	// Line 281, Address: 0x2187d8, Func Offset: 0xd8
	// Line 283, Address: 0x2187dc, Func Offset: 0xdc
	// Line 284, Address: 0x2187e0, Func Offset: 0xe0
	// Line 281, Address: 0x2187ec, Func Offset: 0xec
	// Line 282, Address: 0x2187f0, Func Offset: 0xf0
	// Line 283, Address: 0x2187f8, Func Offset: 0xf8
	// Line 284, Address: 0x218800, Func Offset: 0x100
	// Line 285, Address: 0x218808, Func Offset: 0x108
	// Line 286, Address: 0x218814, Func Offset: 0x114
	// Line 287, Address: 0x218824, Func Offset: 0x124
	// Line 286, Address: 0x218830, Func Offset: 0x130
	// Line 288, Address: 0x218834, Func Offset: 0x134
	// Line 287, Address: 0x218838, Func Offset: 0x138
	// Line 288, Address: 0x21883c, Func Offset: 0x13c
	// Line 289, Address: 0x218844, Func Offset: 0x144
	// Line 292, Address: 0x218850, Func Offset: 0x150
	// Line 287, Address: 0x218854, Func Offset: 0x154
	// Line 292, Address: 0x218858, Func Offset: 0x158
	// Line 288, Address: 0x21885c, Func Offset: 0x15c
	// Line 292, Address: 0x218860, Func Offset: 0x160
	// Line 293, Address: 0x218864, Func Offset: 0x164
	// Line 295, Address: 0x218870, Func Offset: 0x170
	// Line 288, Address: 0x218878, Func Offset: 0x178
	// Line 295, Address: 0x21887c, Func Offset: 0x17c
	// Line 289, Address: 0x218880, Func Offset: 0x180
	// Line 292, Address: 0x218888, Func Offset: 0x188
	// Line 293, Address: 0x2188a0, Func Offset: 0x1a0
	// Line 294, Address: 0x2188a8, Func Offset: 0x1a8
	// Line 295, Address: 0x2188b0, Func Offset: 0x1b0
	// Line 296, Address: 0x2188b8, Func Offset: 0x1b8
	// Line 300, Address: 0x2188cc, Func Offset: 0x1cc
	// Line 301, Address: 0x2188d8, Func Offset: 0x1d8
	// Line 302, Address: 0x2188e0, Func Offset: 0x1e0
	// Line 301, Address: 0x2188e8, Func Offset: 0x1e8
	// Line 302, Address: 0x2188ec, Func Offset: 0x1ec
	// Line 301, Address: 0x2188f0, Func Offset: 0x1f0
	// Line 302, Address: 0x2188f4, Func Offset: 0x1f4
	// Line 301, Address: 0x2188f8, Func Offset: 0x1f8
	// Line 302, Address: 0x2188fc, Func Offset: 0x1fc
	// Line 303, Address: 0x218900, Func Offset: 0x200
	// Line 304, Address: 0x218908, Func Offset: 0x208
	// Line 305, Address: 0x218914, Func Offset: 0x214
	// Line 306, Address: 0x21891c, Func Offset: 0x21c
	// Line 305, Address: 0x218924, Func Offset: 0x224
	// Line 306, Address: 0x218928, Func Offset: 0x228
	// Line 305, Address: 0x21892c, Func Offset: 0x22c
	// Line 306, Address: 0x218930, Func Offset: 0x230
	// Line 307, Address: 0x218934, Func Offset: 0x234
	// Line 305, Address: 0x218938, Func Offset: 0x238
	// Line 307, Address: 0x21893c, Func Offset: 0x23c
	// Line 306, Address: 0x218940, Func Offset: 0x240
	// Line 307, Address: 0x218944, Func Offset: 0x244
	// Line 306, Address: 0x218948, Func Offset: 0x248
	// Line 307, Address: 0x21894c, Func Offset: 0x24c
	// Line 308, Address: 0x218950, Func Offset: 0x250
	// Line 309, Address: 0x218958, Func Offset: 0x258
	// Line 310, Address: 0x218964, Func Offset: 0x264
	// Line 313, Address: 0x218978, Func Offset: 0x278
	// Line 315, Address: 0x218980, Func Offset: 0x280
	// Line 317, Address: 0x218990, Func Offset: 0x290
	// Line 318, Address: 0x218998, Func Offset: 0x298
	// Func End, Address: 0x2189b8, Func Offset: 0x2b8
}

// 
// Start address: 0x2189c0
_EnforceItemWork* getitem_enforceitem_regist(_anon0* objdata)
{
	// Line 322, Address: 0x2189c0, Func Offset: 0
	// Func End, Address: 0x2189c8, Func Offset: 0x8
}

// 
// Start address: 0x2189d0
void GameGetItemEnforceDataDelete(_EnforceItemWork* eitem)
{
	// Line 332, Address: 0x2189d0, Func Offset: 0
	// Line 334, Address: 0x2189d4, Func Offset: 0x4
	// Func End, Address: 0x2189dc, Func Offset: 0xc
}

// 
// Start address: 0x2189e0
int GameGetItemEnforceDataGetLive(_EnforceItemWork* eitem)
{
	// Line 345, Address: 0x2189e0, Func Offset: 0
	// Func End, Address: 0x2189e8, Func Offset: 0x8
}

// 
// Start address: 0x2189f0
_EnforceItemData* GameGetItemEnforceDataPtr()
{
	// Line 354, Address: 0x2189f0, Func Offset: 0
	// Line 355, Address: 0x2189f4, Func Offset: 0x4
	// Func End, Address: 0x2189fc, Func Offset: 0xc
}

// 
// Start address: 0x218a00
void GameGetItemEnforceDataReset()
{
	// Line 363, Address: 0x218a00, Func Offset: 0
	// Line 364, Address: 0x218a08, Func Offset: 0x8
	// Line 365, Address: 0x218a1c, Func Offset: 0x1c
	// Func End, Address: 0x218a28, Func Offset: 0x28
}

// 
// Start address: 0x218a30
void GameGetItemEnforceDataLoad(_EnforceItemData* addr)
{
	// Line 373, Address: 0x218a30, Func Offset: 0
	// Line 374, Address: 0x218a3c, Func Offset: 0xc
	// Line 375, Address: 0x218a54, Func Offset: 0x24
	// Func End, Address: 0x218a64, Func Offset: 0x34
}

// 
// Start address: 0x218a70
void GameGetItemEnforceDataSave(_EnforceItemData* addr)
{
	// Line 383, Address: 0x218a70, Func Offset: 0
	// Line 384, Address: 0x218a7c, Func Offset: 0xc
	// Line 385, Address: 0x218a94, Func Offset: 0x24
	// Func End, Address: 0x218aa4, Func Offset: 0x34
}

// 
// Start address: 0x218ab0
_EventHitWork* getitem_enforceitem_set_by_work(_EnforceItemWork* eitem)
{
	_anon0 objdata;
	sfObj* obj;
	// Line 391, Address: 0x218ab0, Func Offset: 0
	// Line 395, Address: 0x218ab4, Func Offset: 0x4
	// Line 391, Address: 0x218ab8, Func Offset: 0x8
	// Line 395, Address: 0x218ac4, Func Offset: 0x14
	// Line 397, Address: 0x218acc, Func Offset: 0x1c
	// Line 398, Address: 0x218ad0, Func Offset: 0x20
	// Line 397, Address: 0x218ad4, Func Offset: 0x24
	// Line 398, Address: 0x218ad8, Func Offset: 0x28
	// Line 399, Address: 0x218adc, Func Offset: 0x2c
	// Line 398, Address: 0x218ae0, Func Offset: 0x30
	// Line 399, Address: 0x218ae4, Func Offset: 0x34
	// Line 400, Address: 0x218ae8, Func Offset: 0x38
	// Line 399, Address: 0x218aec, Func Offset: 0x3c
	// Line 400, Address: 0x218af0, Func Offset: 0x40
	// Line 401, Address: 0x218af4, Func Offset: 0x44
	// Line 400, Address: 0x218af8, Func Offset: 0x48
	// Line 401, Address: 0x218afc, Func Offset: 0x4c
	// Line 414, Address: 0x218b00, Func Offset: 0x50
	// Line 401, Address: 0x218b04, Func Offset: 0x54
	// Line 402, Address: 0x218b08, Func Offset: 0x58
	// Line 403, Address: 0x218b10, Func Offset: 0x60
	// Line 404, Address: 0x218b18, Func Offset: 0x68
	// Line 405, Address: 0x218b20, Func Offset: 0x70
	// Line 406, Address: 0x218b24, Func Offset: 0x74
	// Line 407, Address: 0x218b2c, Func Offset: 0x7c
	// Line 408, Address: 0x218b34, Func Offset: 0x84
	// Line 409, Address: 0x218b3c, Func Offset: 0x8c
	// Line 410, Address: 0x218b44, Func Offset: 0x94
	// Line 413, Address: 0x218b48, Func Offset: 0x98
	// Line 414, Address: 0x218b54, Func Offset: 0xa4
	// Line 415, Address: 0x218b5c, Func Offset: 0xac
	// Line 416, Address: 0x218b64, Func Offset: 0xb4
	// Line 417, Address: 0x218b68, Func Offset: 0xb8
	// Line 418, Address: 0x218b70, Func Offset: 0xc0
	// Line 419, Address: 0x218b7c, Func Offset: 0xcc
	// Line 420, Address: 0x218b84, Func Offset: 0xd4
	// Line 421, Address: 0x218b8c, Func Offset: 0xdc
	// Line 422, Address: 0x218b90, Func Offset: 0xe0
	// Line 423, Address: 0x218b98, Func Offset: 0xe8
	// Line 424, Address: 0x218ba4, Func Offset: 0xf4
	// Line 425, Address: 0x218bac, Func Offset: 0xfc
	// Line 426, Address: 0x218bb0, Func Offset: 0x100
	// Line 433, Address: 0x218bb4, Func Offset: 0x104
	// Line 432, Address: 0x218bb8, Func Offset: 0x108
	// Line 433, Address: 0x218bbc, Func Offset: 0x10c
	// Line 426, Address: 0x218bc4, Func Offset: 0x114
	// Line 427, Address: 0x218bc8, Func Offset: 0x118
	// Line 430, Address: 0x218bcc, Func Offset: 0x11c
	// Line 427, Address: 0x218bd4, Func Offset: 0x124
	// Line 432, Address: 0x218bd8, Func Offset: 0x128
	// Line 433, Address: 0x218bdc, Func Offset: 0x12c
	// Line 434, Address: 0x218be4, Func Offset: 0x134
	// Line 437, Address: 0x218be8, Func Offset: 0x138
	// Line 438, Address: 0x218bf0, Func Offset: 0x140
	// Line 439, Address: 0x218bf4, Func Offset: 0x144
	// Line 442, Address: 0x218c00, Func Offset: 0x150
	// Line 443, Address: 0x218c08, Func Offset: 0x158
	// Func End, Address: 0x218c18, Func Offset: 0x168
}

// 
// Start address: 0x218c20
_EventHitWork* GameGetItemEnforceSetWithObjHit(float* p, float rot, int model_id, int tex_id, int item_id, _ObjHitData* hitdt)
{
	_EventHitWork* item;
	// Line 462, Address: 0x218c20, Func Offset: 0
	// Line 465, Address: 0x218c24, Func Offset: 0x4
	// Line 462, Address: 0x218c28, Func Offset: 0x8
	// Line 466, Address: 0x218c2c, Func Offset: 0xc
	// Line 467, Address: 0x218c34, Func Offset: 0x14
	// Line 470, Address: 0x218c3c, Func Offset: 0x1c
	// Func End, Address: 0x218c48, Func Offset: 0x28
}

// 
// Start address: 0x218c50
_EventHitWork* GameGetItemEnforceSet(float* p, float rot, int model_id, int tex_id, int item_id)
{
	_anon0 objdata;
	sfObj* obj;
	// Line 485, Address: 0x218c50, Func Offset: 0
	// Line 489, Address: 0x218c80, Func Offset: 0x30
	// Line 491, Address: 0x218c8c, Func Offset: 0x3c
	// Line 492, Address: 0x218c90, Func Offset: 0x40
	// Line 491, Address: 0x218c94, Func Offset: 0x44
	// Line 492, Address: 0x218c98, Func Offset: 0x48
	// Line 493, Address: 0x218c9c, Func Offset: 0x4c
	// Line 492, Address: 0x218ca0, Func Offset: 0x50
	// Line 493, Address: 0x218ca4, Func Offset: 0x54
	// Line 494, Address: 0x218ca8, Func Offset: 0x58
	// Line 493, Address: 0x218cac, Func Offset: 0x5c
	// Line 494, Address: 0x218cb0, Func Offset: 0x60
	// Line 495, Address: 0x218cb4, Func Offset: 0x64
	// Line 494, Address: 0x218cb8, Func Offset: 0x68
	// Line 495, Address: 0x218cbc, Func Offset: 0x6c
	// Line 525, Address: 0x218cc0, Func Offset: 0x70
	// Line 495, Address: 0x218cc4, Func Offset: 0x74
	// Line 521, Address: 0x218cc8, Func Offset: 0x78
	// Line 496, Address: 0x218ccc, Func Offset: 0x7c
	// Line 525, Address: 0x218cd0, Func Offset: 0x80
	// Line 496, Address: 0x218cd4, Func Offset: 0x84
	// Line 497, Address: 0x218cd8, Func Offset: 0x88
	// Line 498, Address: 0x218ce0, Func Offset: 0x90
	// Line 500, Address: 0x218ce8, Func Offset: 0x98
	// Line 499, Address: 0x218cec, Func Offset: 0x9c
	// Line 501, Address: 0x218cf0, Func Offset: 0xa0
	// Line 502, Address: 0x218cf4, Func Offset: 0xa4
	// Line 521, Address: 0x218cf8, Func Offset: 0xa8
	// Line 528, Address: 0x218cfc, Func Offset: 0xac
	// Line 529, Address: 0x218d04, Func Offset: 0xb4
	// Line 531, Address: 0x218d08, Func Offset: 0xb8
	// Line 529, Address: 0x218d14, Func Offset: 0xc4
	// Line 530, Address: 0x218d18, Func Offset: 0xc8
	// Line 531, Address: 0x218d1c, Func Offset: 0xcc
	// Line 532, Address: 0x218d24, Func Offset: 0xd4
	// Line 535, Address: 0x218d30, Func Offset: 0xe0
	// Line 536, Address: 0x218d38, Func Offset: 0xe8
	// Line 537, Address: 0x218d44, Func Offset: 0xf4
	// Line 540, Address: 0x218d48, Func Offset: 0xf8
	// Line 542, Address: 0x218d58, Func Offset: 0x108
	// Line 543, Address: 0x218d64, Func Offset: 0x114
	// Line 544, Address: 0x218d74, Func Offset: 0x124
	// Line 547, Address: 0x218d78, Func Offset: 0x128
	// Line 548, Address: 0x218d80, Func Offset: 0x130
	// Line 549, Address: 0x218d8c, Func Offset: 0x13c
	// Line 550, Address: 0x218d90, Func Offset: 0x140
	// Line 551, Address: 0x218d9c, Func Offset: 0x14c
	// Line 553, Address: 0x218da0, Func Offset: 0x150
	// Line 554, Address: 0x218da8, Func Offset: 0x158
	// Func End, Address: 0x218dc8, Func Offset: 0x178
}

// 
// Start address: 0x218dd0
void GameGetItemEnforceSetQuat(_EventHitWork* item, float* quat)
{
	_EnforceItemWork* enforce;
	// Line 564, Address: 0x218dd0, Func Offset: 0
	// Line 565, Address: 0x218de4, Func Offset: 0x14
	// Line 566, Address: 0x218de8, Func Offset: 0x18
	// Line 567, Address: 0x218df0, Func Offset: 0x20
	// Line 568, Address: 0x218dfc, Func Offset: 0x2c
	// Func End, Address: 0x218e10, Func Offset: 0x40
}

// 
// Start address: 0x218e10
_EnforceItemWork* GameGetItemEnforceCheckNearPos(float* p, float range)
{
	int i;
	float v[4];
	float d;
	float dm;
	_EnforceItemWork* w;
	// Line 578, Address: 0x218e10, Func Offset: 0
	// Line 585, Address: 0x218e14, Func Offset: 0x4
	// Line 582, Address: 0x218e1c, Func Offset: 0xc
	// Line 585, Address: 0x218e20, Func Offset: 0x10
	// Line 586, Address: 0x218e38, Func Offset: 0x28
	// Line 587, Address: 0x218e58, Func Offset: 0x48
	// Line 588, Address: 0x218e70, Func Offset: 0x60
	// Line 589, Address: 0x218e94, Func Offset: 0x84
	// Line 590, Address: 0x218ea0, Func Offset: 0x90
	// Line 591, Address: 0x218ea4, Func Offset: 0x94
	// Line 594, Address: 0x218ea8, Func Offset: 0x98
	// Line 596, Address: 0x218ebc, Func Offset: 0xac
	// Func End, Address: 0x218ec4, Func Offset: 0xb4
}

// 
// Start address: 0x218ed0
void GameGetItemEnforceSetSceneInit()
{
	_EventHitWork* work;
	int i;
	// Line 604, Address: 0x218ed0, Func Offset: 0
	// Line 609, Address: 0x218ee0, Func Offset: 0x10
	// Line 611, Address: 0x218ef4, Func Offset: 0x24
	// Line 612, Address: 0x218f14, Func Offset: 0x44
	// Line 613, Address: 0x218f38, Func Offset: 0x68
	// Line 614, Address: 0x218f44, Func Offset: 0x74
	// Line 617, Address: 0x218f4c, Func Offset: 0x7c
	// Line 620, Address: 0x218f54, Func Offset: 0x84
	// Line 621, Address: 0x218f68, Func Offset: 0x98
	// Func End, Address: 0x218f7c, Func Offset: 0xac
}

// 
// Start address: 0x218f80
void GameGetItemEnforceSetLostItemFlag(_EventHitWork* item)
{
	// Line 632, Address: 0x218f80, Func Offset: 0
	// Line 633, Address: 0x218f88, Func Offset: 0x8
	// Func End, Address: 0x218f90, Func Offset: 0x10
}

// 
// Start address: 0x218f90
void GameGetItemReplaceLostItem()
{
	int i;
	// Line 641, Address: 0x218f90, Func Offset: 0
	// Line 644, Address: 0x218fa0, Func Offset: 0x10
	// Line 645, Address: 0x218fb0, Func Offset: 0x20
	// Line 646, Address: 0x218fc0, Func Offset: 0x30
	// Line 647, Address: 0x218fd0, Func Offset: 0x40
	// Line 652, Address: 0x218fd8, Func Offset: 0x48
	// Line 654, Address: 0x218fe8, Func Offset: 0x58
	// Line 655, Address: 0x218ff0, Func Offset: 0x60
	// Func End, Address: 0x219004, Func Offset: 0x74
}

// 
// Start address: 0x219010
void GameGetItemEnforceSetVal(_EnforceItemWork* enforce, int idx, int val)
{
	// Line 668, Address: 0x219010, Func Offset: 0
	// Line 669, Address: 0x219020, Func Offset: 0x10
	// Line 670, Address: 0x219024, Func Offset: 0x14
	// Line 672, Address: 0x219028, Func Offset: 0x18
	// Line 676, Address: 0x219030, Func Offset: 0x20
	// Line 677, Address: 0x219038, Func Offset: 0x28
	// Func End, Address: 0x219040, Func Offset: 0x30
}

// 
// Start address: 0x219040
int GameGetItemEnforceVal(_EnforceItemWork* enforce, int idx)
{
	// Line 689, Address: 0x219040, Func Offset: 0
	// Line 690, Address: 0x219050, Func Offset: 0x10
	// Line 691, Address: 0x219054, Func Offset: 0x14
	// Line 693, Address: 0x219058, Func Offset: 0x18
	// Line 694, Address: 0x219060, Func Offset: 0x20
	// Line 697, Address: 0x219068, Func Offset: 0x28
	// Line 698, Address: 0x219078, Func Offset: 0x38
	// Func End, Address: 0x219080, Func Offset: 0x40
}

// 
// Start address: 0x219080
int FinisherGetEventEnforceSet(float* p, int id)
{
	_ObjHitData hitdt;
	_EventHitWork* evhit;
	_EnforceItemWork* enforce;
	// Line 709, Address: 0x219080, Func Offset: 0
	// Line 714, Address: 0x219084, Func Offset: 0x4
	// Line 709, Address: 0x219088, Func Offset: 0x8
	// Line 715, Address: 0x21908c, Func Offset: 0xc
	// Line 709, Address: 0x219090, Func Offset: 0x10
	// Line 717, Address: 0x219094, Func Offset: 0x14
	// Line 709, Address: 0x219098, Func Offset: 0x18
	// Line 719, Address: 0x2190a4, Func Offset: 0x24
	// Line 714, Address: 0x2190a8, Func Offset: 0x28
	// Line 719, Address: 0x2190ac, Func Offset: 0x2c
	// Line 716, Address: 0x2190b0, Func Offset: 0x30
	// Line 715, Address: 0x2190b4, Func Offset: 0x34
	// Line 716, Address: 0x2190b8, Func Offset: 0x38
	// Line 719, Address: 0x2190bc, Func Offset: 0x3c
	// Line 717, Address: 0x2190c0, Func Offset: 0x40
	// Line 719, Address: 0x2190c4, Func Offset: 0x44
	// Line 720, Address: 0x2190d0, Func Offset: 0x50
	// Line 721, Address: 0x2190dc, Func Offset: 0x5c
	// Line 722, Address: 0x2190ec, Func Offset: 0x6c
	// Line 725, Address: 0x2190f0, Func Offset: 0x70
	// Line 722, Address: 0x2190f4, Func Offset: 0x74
	// Line 728, Address: 0x2190f8, Func Offset: 0x78
	// Func End, Address: 0x219110, Func Offset: 0x90
}

// 
// Start address: 0x219110
void FinisherGetEventMoveScene(int id, int old_scene, int new_scene, int move_flag, float* move)
{
	int now_stage;
	int i;
	_EnforceItemWork* eitem;
	// Line 740, Address: 0x219110, Func Offset: 0
	// Line 745, Address: 0x219114, Func Offset: 0x4
	// Line 740, Address: 0x219118, Func Offset: 0x8
	// Line 745, Address: 0x219150, Func Offset: 0x40
	// Line 747, Address: 0x219154, Func Offset: 0x44
	// Line 748, Address: 0x219160, Func Offset: 0x50
	// Line 749, Address: 0x219170, Func Offset: 0x60
	// Line 754, Address: 0x2191c0, Func Offset: 0xb0
	// Line 755, Address: 0x2191c8, Func Offset: 0xb8
	// Line 758, Address: 0x2191dc, Func Offset: 0xcc
	// Line 759, Address: 0x2191f4, Func Offset: 0xe4
	// Func End, Address: 0x219220, Func Offset: 0x110
}

