typedef struct _anon0;
typedef struct sgQTObject;
typedef struct sfObj;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgBone;
typedef struct _anon3;
typedef struct sfOffsetAABB;
typedef enum GameObjType : unsigned char;
typedef union sfCldBody;
typedef struct _anon4;
typedef struct SceneObjWork;
typedef struct _anon5;
typedef struct sfCldPart;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sfCharacter;
typedef union _anon8;
typedef struct sgAnime;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct sgSVModel;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _anon17;
typedef struct EventFlag;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_1)(sfObj*);
typedef sgIKSolveResult(*type_2)();
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sgAnime*, int);
typedef void(*type_14)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef void(*type_22)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_25)(sfObj*);
typedef void(*type_26)(sfObj*);
typedef void(*type_27)(sfObj*);
typedef void(*type_28)(_anon14*, int, int, float*);
typedef void(*type_31)(sfObj*);
typedef void(*type_33)(sfObj*);

typedef float type_0[4][2];
typedef _anon8 type_3[2];
typedef float type_4[4];
typedef _anon8 type_5[3];
typedef unsigned char type_6[3];
typedef _anon8 type_7[7];
typedef void* type_8[4];
typedef _anon8 type_10[256];
typedef _anon8 type_13[7];
typedef float type_15[4];
typedef float type_16[4][4];
typedef unsigned char type_17[4];
typedef _anon8 type_18[23];
typedef _anon8 type_21[7];
typedef _anon8 type_24[23];
typedef sfCldPart* type_29[6];
typedef float type_30[4];
typedef unsigned char type_32[3];
typedef _anon8 type_34[10];
typedef _anon8 type_35[23];
typedef unsigned char type_36[320];
typedef _anon8 type_37[32];
typedef short type_38[2];
typedef SceneObjWork type_39[300];
typedef unsigned short type_40[2];
typedef char type_41[4];
typedef unsigned char type_42[4];
typedef float type_43[1];
typedef _anon8 type_44[7];
typedef int type_45[1];

struct _anon0
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon8 dmy[7];
};

struct sgQTObject
{
	_anon4 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfObj
{
	_anon8 fwork[256];
	_anon8* work;
	void(*func)(sfObj*);
	_anon8* work_pt0;
	_anon8* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon8* sys_work;
	_anon8* scene_work;
	_anon8* event_work;
	_anon8* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _anon1
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int f1;
	int f2;
	int f3;
	int f4;
	_anon8 dmy[2];
	float vx;
	float vy;
	float vz;
	_anon8 dmy2[3];
	int flagcheck;
	int flagoffcheck;
};

struct _anon2
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon8 dmy[10];
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

struct _anon3
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon5 aabb;
	float offset[4];
};

enum GameObjType : unsigned char
{
	GAME_OBJ_TYPE_NONE,
	GAME_OBJ_TYPE_PLAYER,
	GAME_OBJ_TYPE_ENEMY,
	GAME_OBJ_TYPE_FIGURE,
	GAME_OBJ_TYPE_ITEM,
	GAME_OBJ_TYPE_SEARCH,
	GAME_OBJ_TYPE_EFFECT,
	GAME_OBJ_TYPE_TEXTEVENT,
	GAME_OBJ_TYPE_MEMOITEM,
	GAME_OBJ_TYPE_EVHIT,
	GAME_OBJ_TYPE_EVENT,
	GAME_OBJ_TYPE_EVCAMERA,
	GAME_OBJ_TYPE_LAST
};

union sfCldBody
{
	_anon6 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon3 line;
	_anon4 sphere;
};

struct _anon4
{
	float center[4];
	float radius;
};

struct SceneObjWork
{
	unsigned short scene_id;
	unsigned short set_id;
	unsigned short pad;
	unsigned short type;
	SceneObjWork* next;
	unsigned int flags;
	sfObj* obj;
	sfCharacter* chara;
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
	void(*prerend)(sfObj*);
	void(*postrend)(sfObj*);
	_anon8 idata[32];
};

struct _anon5
{
	float bmin[4];
	float bmax[4];
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

struct _anon6
{
	float mat[4][4];
	float half_w[4];
};

struct _anon7
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon8 dmy[7];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon16 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

union _anon8
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

struct _anon9
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon8 dmy[7];
};

struct _anon10
{
	sfCharacter chr;
	sfCldObject cld_obj;
	sfCldPart cld_part;
};

struct _anon11
{
	int id;
	float x;
	float y;
	float z;
	float rot;
};

struct _anon12
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon8 dmy[23];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon13
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
	_anon8 dmy2[7];
	int flagcheck;
	int flagoffcheck;
};

struct _anon14
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon15
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon8 dmy[23];
};

struct _anon16
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon14*, int, int, float*);
	int equip_flag;
};

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct sgQTNode
{
	int dummy;
};

struct _anon17
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon8 dmy[23];
};

struct EventFlag
{
	unsigned char flag[320];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

int sobj_num;
SceneObjWork sobj_work[300];
float sg_vector_unit_y[4];
EventFlag event_flag;

void GameObjInit();
void GameObjClearControl();
int GameObjConstruct(sfObj* obj, GameObjType type);
void GameObjSetConstructor(sfObj* obj, void(*func)(sfObj*));
void GameObjSetDestructor(sfObj* obj, void(*func)(sfObj*));
void GameObjSetRenderFunc(sfObj* obj, void(*func)(sfObj*));
void GameObjSetPreRenderFunc(sfObj* obj, void(*func)(sfObj*));
void GameObjSetPostRenderFunc(sfObj* obj, void(*func)(sfObj*));
void GameObjExecuteConstructor(sfObj* obj);
void GameObjExecuteDestructor(sfObj* obj);
void GameObjExecuteRenderFunc(sfObj* obj);
void GameObjEntryCharacter(sfObj* obj, sfCharacter* chara);
sfCharacter* GameObjCharacter(sfObj* obj);
void GameObjRender();
void GameObjEffectRender();
void GameObjRenderDemo();
void GameObjEffectRenderDemo();
void GameObjRenderCharacters();
void GameObjRenderCharactersDemo();
void GameObjRenderCharactersShadow();
void GameObjRenderCharactersShadowDemo();
void GameObjDestruct(sfObj* obj);
void GameObjDestructSpecifiedThread(int thread_no);
void GameObjDestructAll();
void GameObjSetExistence(sfObj* obj);
void GameObjRemoveExistence(sfObj* obj);
int GameObjGetExistence(sfObj* obj);
int GameObjGetPos(sfObj* obj, float* pos);
int GameObjGetTypeN(GameObjType type);
sfObj* GameObjGetTypeObj(GameObjType type, int num);
int GameObjGetAllN();
void GameObjDontMoveConstruct(sfObj* obj);
void GameObjDontMove(sfObj* obj);
void GameObjDontMoveRender(sfObj* obj);
void GameObjDontMoveDestruct(sfObj* obj);
GameObjType GameObjGetType(sfObj* obj);
int GameObjGetID(sfObj* obj);
void GameObjSet_SetTableID(sfObj* obj, unsigned int id);
_anon8* GameObjGetWorkCommon(sfObj* obj);
_anon11* GameObjGetWorkPlayer(sfObj* obj);
_anon13* GameObjGetWorkEnemy(sfObj* obj);
_anon1* GameObjGetWorkSearch(sfObj* obj);
_anon2* GameObjGetWorkFigure(sfObj* obj);
_anon7* GameObjGetWorkTEvent(sfObj* obj);
_anon12* GameObjGetWorkEHit(sfObj* obj);
_anon15* GameObjGetWorkEvent(sfObj* obj);
_anon17* GameObjGetWorkEvCamera(sfObj* obj);

// 
// Start address: 0x28a450
void GameObjInit()
{
	int i;
	// Line 131, Address: 0x28a450, Func Offset: 0
	// Line 132, Address: 0x28a460, Func Offset: 0x10
	// Line 133, Address: 0x28a464, Func Offset: 0x14
	// Line 135, Address: 0x28a4ec, Func Offset: 0x9c
	// Line 133, Address: 0x28a4f0, Func Offset: 0xa0
	// Line 136, Address: 0x28a51c, Func Offset: 0xcc
	// Func End, Address: 0x28a524, Func Offset: 0xd4
}

// 
// Start address: 0x28a530
void GameObjClearControl()
{
	int i;
	sfObj* obj;
	// Line 149, Address: 0x28a530, Func Offset: 0
	// Line 150, Address: 0x28a540, Func Offset: 0x10
	// Line 151, Address: 0x28a544, Func Offset: 0x14
	// Line 152, Address: 0x28a548, Func Offset: 0x18
	// Line 153, Address: 0x28a550, Func Offset: 0x20
	// Line 154, Address: 0x28a554, Func Offset: 0x24
	// Line 156, Address: 0x28a558, Func Offset: 0x28
	// Line 157, Address: 0x28a568, Func Offset: 0x38
	// Line 158, Address: 0x28a56c, Func Offset: 0x3c
	// Func End, Address: 0x28a574, Func Offset: 0x44
}

// 
// Start address: 0x28a580
int GameObjConstruct(sfObj* obj, GameObjType type)
{
	int th;
	// Line 177, Address: 0x28a580, Func Offset: 0
	// Line 180, Address: 0x28a5a4, Func Offset: 0x24
	// Line 181, Address: 0x28a630, Func Offset: 0xb0
	// Line 182, Address: 0x28a638, Func Offset: 0xb8
	// Line 183, Address: 0x28a640, Func Offset: 0xc0
	// Line 190, Address: 0x28a648, Func Offset: 0xc8
	// Line 189, Address: 0x28a64c, Func Offset: 0xcc
	// Line 190, Address: 0x28a650, Func Offset: 0xd0
	// Line 191, Address: 0x28a658, Func Offset: 0xd8
	// Line 192, Address: 0x28a660, Func Offset: 0xe0
	// Line 193, Address: 0x28a668, Func Offset: 0xe8
	// Line 194, Address: 0x28a670, Func Offset: 0xf0
	// Line 200, Address: 0x28a678, Func Offset: 0xf8
	// Line 202, Address: 0x28a684, Func Offset: 0x104
	// Line 203, Address: 0x28a688, Func Offset: 0x108
	// Func End, Address: 0x28a6a4, Func Offset: 0x124
}

// 
// Start address: 0x28a6b0
void GameObjSetConstructor(sfObj* obj, void(*func)(sfObj*))
{
	// Line 207, Address: 0x28a6b0, Func Offset: 0
	// Line 208, Address: 0x28a6bc, Func Offset: 0xc
	// Line 210, Address: 0x28a6c4, Func Offset: 0x14
	// Line 211, Address: 0x28a6c8, Func Offset: 0x18
	// Func End, Address: 0x28a6d0, Func Offset: 0x20
}

// 
// Start address: 0x28a6d0
void GameObjSetDestructor(sfObj* obj, void(*func)(sfObj*))
{
	// Line 224, Address: 0x28a6d0, Func Offset: 0
	// Line 225, Address: 0x28a6dc, Func Offset: 0xc
	// Line 227, Address: 0x28a6e4, Func Offset: 0x14
	// Line 228, Address: 0x28a6e8, Func Offset: 0x18
	// Func End, Address: 0x28a6f0, Func Offset: 0x20
}

// 
// Start address: 0x28a6f0
void GameObjSetRenderFunc(sfObj* obj, void(*func)(sfObj*))
{
	// Line 237, Address: 0x28a6f0, Func Offset: 0
	// Line 238, Address: 0x28a6fc, Func Offset: 0xc
	// Line 240, Address: 0x28a704, Func Offset: 0x14
	// Line 241, Address: 0x28a708, Func Offset: 0x18
	// Func End, Address: 0x28a710, Func Offset: 0x20
}

// 
// Start address: 0x28a710
void GameObjSetPreRenderFunc(sfObj* obj, void(*func)(sfObj*))
{
	// Line 250, Address: 0x28a710, Func Offset: 0
	// Line 251, Address: 0x28a71c, Func Offset: 0xc
	// Line 253, Address: 0x28a724, Func Offset: 0x14
	// Line 254, Address: 0x28a728, Func Offset: 0x18
	// Func End, Address: 0x28a730, Func Offset: 0x20
}

// 
// Start address: 0x28a730
void GameObjSetPostRenderFunc(sfObj* obj, void(*func)(sfObj*))
{
	// Line 263, Address: 0x28a730, Func Offset: 0
	// Line 264, Address: 0x28a73c, Func Offset: 0xc
	// Line 266, Address: 0x28a744, Func Offset: 0x14
	// Line 267, Address: 0x28a748, Func Offset: 0x18
	// Func End, Address: 0x28a750, Func Offset: 0x20
}

// 
// Start address: 0x28a750
void GameObjExecuteConstructor(sfObj* obj)
{
	// Line 270, Address: 0x28a750, Func Offset: 0
	// Line 271, Address: 0x28a754, Func Offset: 0x4
	// Line 273, Address: 0x28a768, Func Offset: 0x18
	// Line 275, Address: 0x28a774, Func Offset: 0x24
	// Line 276, Address: 0x28a77c, Func Offset: 0x2c
	// Line 277, Address: 0x28a788, Func Offset: 0x38
	// Func End, Address: 0x28a794, Func Offset: 0x44
}

// 
// Start address: 0x28a7a0
void GameObjExecuteDestructor(sfObj* obj)
{
	void(*destruct_func)(sfObj*);
	// Line 280, Address: 0x28a7a0, Func Offset: 0
	// Line 282, Address: 0x28a7a4, Func Offset: 0x4
	// Line 284, Address: 0x28a7b8, Func Offset: 0x18
	// Line 286, Address: 0x28a7c0, Func Offset: 0x20
	// Line 287, Address: 0x28a7c4, Func Offset: 0x24
	// Line 289, Address: 0x28a7cc, Func Offset: 0x2c
	// Line 290, Address: 0x28a7d4, Func Offset: 0x34
	// Line 291, Address: 0x28a7d8, Func Offset: 0x38
	// Func End, Address: 0x28a7e4, Func Offset: 0x44
}

// 
// Start address: 0x28a7f0
void GameObjExecuteRenderFunc(sfObj* obj)
{
	// Line 294, Address: 0x28a7f0, Func Offset: 0
	// Line 295, Address: 0x28a7f4, Func Offset: 0x4
	// Line 296, Address: 0x28a808, Func Offset: 0x18
	// Line 298, Address: 0x28a814, Func Offset: 0x24
	// Line 299, Address: 0x28a81c, Func Offset: 0x2c
	// Line 300, Address: 0x28a828, Func Offset: 0x38
	// Func End, Address: 0x28a834, Func Offset: 0x44
}

// 
// Start address: 0x28a840
void GameObjEntryCharacter(sfObj* obj, sfCharacter* chara)
{
	// Line 315, Address: 0x28a840, Func Offset: 0
	// Line 316, Address: 0x28a84c, Func Offset: 0xc
	// Line 318, Address: 0x28a854, Func Offset: 0x14
	// Line 319, Address: 0x28a858, Func Offset: 0x18
	// Func End, Address: 0x28a860, Func Offset: 0x20
}

// 
// Start address: 0x28a860
sfCharacter* GameObjCharacter(sfObj* obj)
{
	// Line 328, Address: 0x28a860, Func Offset: 0
	// Line 329, Address: 0x28a86c, Func Offset: 0xc
	// Line 330, Address: 0x28a874, Func Offset: 0x14
	// Line 331, Address: 0x28a880, Func Offset: 0x20
	// Line 332, Address: 0x28a888, Func Offset: 0x28
	// Func End, Address: 0x28a890, Func Offset: 0x30
}

// 
// Start address: 0x28a890
void GameObjRender()
{
	int i;
	sfObj* obj;
	// Line 344, Address: 0x28a890, Func Offset: 0
	// Line 349, Address: 0x28a8ac, Func Offset: 0x1c
	// Line 350, Address: 0x28a8b4, Func Offset: 0x24
	// Line 351, Address: 0x28a8c8, Func Offset: 0x38
	// Line 352, Address: 0x28a8cc, Func Offset: 0x3c
	// Line 354, Address: 0x28a8d4, Func Offset: 0x44
	// Line 356, Address: 0x28a8fc, Func Offset: 0x6c
	// Line 357, Address: 0x28a904, Func Offset: 0x74
	// Line 361, Address: 0x28a920, Func Offset: 0x90
	// Func End, Address: 0x28a938, Func Offset: 0xa8
}

// 
// Start address: 0x28a940
void GameObjEffectRender()
{
	int i;
	sfObj* obj;
	// Line 366, Address: 0x28a940, Func Offset: 0
	// Line 369, Address: 0x28a95c, Func Offset: 0x1c
	// Line 370, Address: 0x28a964, Func Offset: 0x24
	// Line 371, Address: 0x28a978, Func Offset: 0x38
	// Line 372, Address: 0x28a97c, Func Offset: 0x3c
	// Line 374, Address: 0x28a984, Func Offset: 0x44
	// Line 376, Address: 0x28a9ac, Func Offset: 0x6c
	// Line 377, Address: 0x28a9b4, Func Offset: 0x74
	// Line 379, Address: 0x28a9d0, Func Offset: 0x90
	// Func End, Address: 0x28a9e8, Func Offset: 0xa8
}

// 
// Start address: 0x28a9f0
void GameObjRenderDemo()
{
	int i;
	sfObj* obj;
	// Line 390, Address: 0x28a9f0, Func Offset: 0
	// Line 395, Address: 0x28aa0c, Func Offset: 0x1c
	// Line 396, Address: 0x28aa14, Func Offset: 0x24
	// Line 397, Address: 0x28aa28, Func Offset: 0x38
	// Line 398, Address: 0x28aa2c, Func Offset: 0x3c
	// Line 400, Address: 0x28aa34, Func Offset: 0x44
	// Line 402, Address: 0x28aa5c, Func Offset: 0x6c
	// Line 403, Address: 0x28aa64, Func Offset: 0x74
	// Line 407, Address: 0x28aa80, Func Offset: 0x90
	// Func End, Address: 0x28aa98, Func Offset: 0xa8
}

// 
// Start address: 0x28aaa0
void GameObjEffectRenderDemo()
{
	int i;
	sfObj* obj;
	// Line 412, Address: 0x28aaa0, Func Offset: 0
	// Line 415, Address: 0x28aabc, Func Offset: 0x1c
	// Line 416, Address: 0x28aac4, Func Offset: 0x24
	// Line 417, Address: 0x28aad8, Func Offset: 0x38
	// Line 418, Address: 0x28aadc, Func Offset: 0x3c
	// Line 420, Address: 0x28aae4, Func Offset: 0x44
	// Line 422, Address: 0x28ab0c, Func Offset: 0x6c
	// Line 423, Address: 0x28ab14, Func Offset: 0x74
	// Line 426, Address: 0x28ab30, Func Offset: 0x90
	// Func End, Address: 0x28ab48, Func Offset: 0xa8
}

// 
// Start address: 0x28ab50
void GameObjRenderCharacters()
{
	int i;
	sfCharacter* chara;
	sfObj* obj;
	// Line 435, Address: 0x28ab50, Func Offset: 0
	// Line 442, Address: 0x28ab74, Func Offset: 0x24
	// Line 443, Address: 0x28ab7c, Func Offset: 0x2c
	// Line 444, Address: 0x28ab90, Func Offset: 0x40
	// Line 445, Address: 0x28ab94, Func Offset: 0x44
	// Line 447, Address: 0x28ab9c, Func Offset: 0x4c
	// Line 449, Address: 0x28abac, Func Offset: 0x5c
	// Line 450, Address: 0x28abbc, Func Offset: 0x6c
	// Line 451, Address: 0x28abc4, Func Offset: 0x74
	// Line 452, Address: 0x28abcc, Func Offset: 0x7c
	// Line 453, Address: 0x28abd0, Func Offset: 0x80
	// Line 454, Address: 0x28abd4, Func Offset: 0x84
	// Line 455, Address: 0x28abdc, Func Offset: 0x8c
	// Line 456, Address: 0x28abec, Func Offset: 0x9c
	// Line 457, Address: 0x28abf8, Func Offset: 0xa8
	// Line 459, Address: 0x28ac04, Func Offset: 0xb4
	// Line 460, Address: 0x28ac0c, Func Offset: 0xbc
	// Line 462, Address: 0x28ac14, Func Offset: 0xc4
	// Line 465, Address: 0x28ac30, Func Offset: 0xe0
	// Func End, Address: 0x28ac50, Func Offset: 0x100
}

// 
// Start address: 0x28ac50
void GameObjRenderCharactersDemo()
{
	int i;
	sfCharacter* chara;
	sfObj* obj;
	// Line 474, Address: 0x28ac50, Func Offset: 0
	// Line 481, Address: 0x28ac70, Func Offset: 0x20
	// Line 482, Address: 0x28ac78, Func Offset: 0x28
	// Line 483, Address: 0x28ac88, Func Offset: 0x38
	// Line 484, Address: 0x28ac8c, Func Offset: 0x3c
	// Line 486, Address: 0x28ac94, Func Offset: 0x44
	// Line 488, Address: 0x28aca4, Func Offset: 0x54
	// Line 489, Address: 0x28acb4, Func Offset: 0x64
	// Line 490, Address: 0x28acbc, Func Offset: 0x6c
	// Line 491, Address: 0x28acc4, Func Offset: 0x74
	// Line 492, Address: 0x28acc8, Func Offset: 0x78
	// Line 493, Address: 0x28accc, Func Offset: 0x7c
	// Line 494, Address: 0x28acd4, Func Offset: 0x84
	// Line 495, Address: 0x28acdc, Func Offset: 0x8c
	// Line 494, Address: 0x28ace0, Func Offset: 0x90
	// Line 496, Address: 0x28ace4, Func Offset: 0x94
	// Line 497, Address: 0x28acec, Func Offset: 0x9c
	// Line 499, Address: 0x28acf4, Func Offset: 0xa4
	// Line 502, Address: 0x28ad10, Func Offset: 0xc0
	// Func End, Address: 0x28ad2c, Func Offset: 0xdc
}

// 
// Start address: 0x28ad30
void GameObjRenderCharactersShadow()
{
	int i;
	sfCharacter* chara;
	sfObj* obj;
	// Line 511, Address: 0x28ad30, Func Offset: 0
	// Line 518, Address: 0x28ad48, Func Offset: 0x18
	// Line 519, Address: 0x28ad50, Func Offset: 0x20
	// Line 520, Address: 0x28ad60, Func Offset: 0x30
	// Line 521, Address: 0x28ad64, Func Offset: 0x34
	// Line 523, Address: 0x28ad6c, Func Offset: 0x3c
	// Line 526, Address: 0x28ad7c, Func Offset: 0x4c
	// Line 527, Address: 0x28ad8c, Func Offset: 0x5c
	// Line 528, Address: 0x28ad94, Func Offset: 0x64
	// Line 530, Address: 0x28ad9c, Func Offset: 0x6c
	// Line 533, Address: 0x28adb8, Func Offset: 0x88
	// Func End, Address: 0x28adcc, Func Offset: 0x9c
}

// 
// Start address: 0x28add0
void GameObjRenderCharactersShadowDemo()
{
	int i;
	sfCharacter* chara;
	sfObj* obj;
	// Line 542, Address: 0x28add0, Func Offset: 0
	// Line 549, Address: 0x28ade8, Func Offset: 0x18
	// Line 550, Address: 0x28adf0, Func Offset: 0x20
	// Line 551, Address: 0x28ae00, Func Offset: 0x30
	// Line 552, Address: 0x28ae04, Func Offset: 0x34
	// Line 554, Address: 0x28ae0c, Func Offset: 0x3c
	// Line 557, Address: 0x28ae1c, Func Offset: 0x4c
	// Line 558, Address: 0x28ae2c, Func Offset: 0x5c
	// Line 559, Address: 0x28ae34, Func Offset: 0x64
	// Line 561, Address: 0x28ae3c, Func Offset: 0x6c
	// Line 564, Address: 0x28ae58, Func Offset: 0x88
	// Func End, Address: 0x28ae6c, Func Offset: 0x9c
}

// 
// Start address: 0x28ae70
void GameObjDestruct(sfObj* obj)
{
	// Line 576, Address: 0x28ae70, Func Offset: 0
	// Line 578, Address: 0x28ae80, Func Offset: 0x10
	// Line 580, Address: 0x28ae88, Func Offset: 0x18
	// Line 581, Address: 0x28ae90, Func Offset: 0x20
	// Line 582, Address: 0x28ae9c, Func Offset: 0x2c
	// Line 583, Address: 0x28aea4, Func Offset: 0x34
	// Line 584, Address: 0x28aea8, Func Offset: 0x38
	// Line 586, Address: 0x28aeb0, Func Offset: 0x40
	// Func End, Address: 0x28aec0, Func Offset: 0x50
}

// 
// Start address: 0x28aec0
void GameObjDestructSpecifiedThread(int thread_no)
{
	int i;
	sfObj* obj;
	// Line 592, Address: 0x28aec0, Func Offset: 0
	// Line 595, Address: 0x28aec4, Func Offset: 0x4
	// Line 592, Address: 0x28aec8, Func Offset: 0x8
	// Line 595, Address: 0x28aedc, Func Offset: 0x1c
	// Line 596, Address: 0x28aef8, Func Offset: 0x38
	// Line 597, Address: 0x28aefc, Func Offset: 0x3c
	// Line 599, Address: 0x28af04, Func Offset: 0x44
	// Line 600, Address: 0x28af10, Func Offset: 0x50
	// Line 601, Address: 0x28af18, Func Offset: 0x58
	// Line 603, Address: 0x28af30, Func Offset: 0x70
	// Func End, Address: 0x28af48, Func Offset: 0x88
}

// 
// Start address: 0x28af50
void GameObjDestructAll()
{
	int i;
	sfObj* obj;
	// Line 613, Address: 0x28af50, Func Offset: 0
	// Line 616, Address: 0x28af54, Func Offset: 0x4
	// Line 613, Address: 0x28af58, Func Offset: 0x8
	// Line 616, Address: 0x28af64, Func Offset: 0x14
	// Line 617, Address: 0x28af80, Func Offset: 0x30
	// Line 618, Address: 0x28af84, Func Offset: 0x34
	// Line 620, Address: 0x28af8c, Func Offset: 0x3c
	// Line 621, Address: 0x28af94, Func Offset: 0x44
	// Line 623, Address: 0x28afb0, Func Offset: 0x60
	// Line 625, Address: 0x28afb8, Func Offset: 0x68
	// Line 628, Address: 0x28afc0, Func Offset: 0x70
	// Func End, Address: 0x28afd4, Func Offset: 0x84
}

// 
// Start address: 0x28afe0
void GameObjSetExistence(sfObj* obj)
{
	// Line 645, Address: 0x28afe0, Func Offset: 0
	// Line 646, Address: 0x28aff4, Func Offset: 0x14
	// Line 647, Address: 0x28affc, Func Offset: 0x1c
	// Line 650, Address: 0x28b008, Func Offset: 0x28
	// Func End, Address: 0x28b010, Func Offset: 0x30
}

// 
// Start address: 0x28b010
void GameObjRemoveExistence(sfObj* obj)
{
	// Line 662, Address: 0x28b010, Func Offset: 0
	// Line 663, Address: 0x28b01c, Func Offset: 0xc
	// Line 664, Address: 0x28b024, Func Offset: 0x14
	// Line 667, Address: 0x28b038, Func Offset: 0x28
	// Func End, Address: 0x28b040, Func Offset: 0x30
}

// 
// Start address: 0x28b040
int GameObjGetExistence(sfObj* obj)
{
	// Line 682, Address: 0x28b040, Func Offset: 0
	// Line 688, Address: 0x28b04c, Func Offset: 0xc
	// Line 689, Address: 0x28b064, Func Offset: 0x24
	// Func End, Address: 0x28b06c, Func Offset: 0x2c
}

// 
// Start address: 0x28b070
int GameObjGetPos(sfObj* obj, float* pos)
{
	_anon2* fig;
	int ret;
	// Line 703, Address: 0x28b070, Func Offset: 0
	// Line 708, Address: 0x28b088, Func Offset: 0x18
	// Line 709, Address: 0x28b090, Func Offset: 0x20
	// Line 711, Address: 0x28b098, Func Offset: 0x28
	// Line 712, Address: 0x28b0a4, Func Offset: 0x34
	// Line 714, Address: 0x28b0ac, Func Offset: 0x3c
	// Line 715, Address: 0x28b0b4, Func Offset: 0x44
	// Line 718, Address: 0x28b0b8, Func Offset: 0x48
	// Line 715, Address: 0x28b0bc, Func Offset: 0x4c
	// Line 716, Address: 0x28b0c0, Func Offset: 0x50
	// Line 717, Address: 0x28b0c8, Func Offset: 0x58
	// Line 718, Address: 0x28b0d0, Func Offset: 0x60
	// Line 719, Address: 0x28b0d4, Func Offset: 0x64
	// Line 721, Address: 0x28b0d8, Func Offset: 0x68
	// Line 722, Address: 0x28b0e0, Func Offset: 0x70
	// Func End, Address: 0x28b0f8, Func Offset: 0x88
}

// 
// Start address: 0x28b100
int GameObjGetTypeN(GameObjType type)
{
	int i;
	int num;
	sfObj* obj;
	// Line 735, Address: 0x28b100, Func Offset: 0
	// Line 740, Address: 0x28b104, Func Offset: 0x4
	// Line 735, Address: 0x28b108, Func Offset: 0x8
	// Line 740, Address: 0x28b120, Func Offset: 0x20
	// Line 741, Address: 0x28b140, Func Offset: 0x40
	// Line 742, Address: 0x28b144, Func Offset: 0x44
	// Line 744, Address: 0x28b14c, Func Offset: 0x4c
	// Line 745, Address: 0x28b170, Func Offset: 0x70
	// Line 747, Address: 0x28b174, Func Offset: 0x74
	// Line 749, Address: 0x28b190, Func Offset: 0x90
	// Line 750, Address: 0x28b194, Func Offset: 0x94
	// Func End, Address: 0x28b1b4, Func Offset: 0xb4
}

// 
// Start address: 0x28b1c0
sfObj* GameObjGetTypeObj(GameObjType type, int num)
{
	int i;
	int inum;
	sfObj* obj;
	// Line 764, Address: 0x28b1c0, Func Offset: 0
	// Line 769, Address: 0x28b1c4, Func Offset: 0x4
	// Line 764, Address: 0x28b1c8, Func Offset: 0x8
	// Line 769, Address: 0x28b1e0, Func Offset: 0x20
	// Line 764, Address: 0x28b1e4, Func Offset: 0x24
	// Line 769, Address: 0x28b1ec, Func Offset: 0x2c
	// Line 770, Address: 0x28b208, Func Offset: 0x48
	// Line 771, Address: 0x28b20c, Func Offset: 0x4c
	// Line 773, Address: 0x28b214, Func Offset: 0x54
	// Line 774, Address: 0x28b238, Func Offset: 0x78
	// Line 775, Address: 0x28b240, Func Offset: 0x80
	// Line 777, Address: 0x28b248, Func Offset: 0x88
	// Line 779, Address: 0x28b24c, Func Offset: 0x8c
	// Line 781, Address: 0x28b268, Func Offset: 0xa8
	// Line 782, Address: 0x28b270, Func Offset: 0xb0
	// Func End, Address: 0x28b294, Func Offset: 0xd4
}

// 
// Start address: 0x28b2a0
int GameObjGetAllN()
{
	int i;
	int num;
	sfObj* obj;
	// Line 795, Address: 0x28b2a0, Func Offset: 0
	// Line 800, Address: 0x28b2a4, Func Offset: 0x4
	// Line 795, Address: 0x28b2a8, Func Offset: 0x8
	// Line 800, Address: 0x28b2b4, Func Offset: 0x14
	// Line 795, Address: 0x28b2b8, Func Offset: 0x18
	// Line 800, Address: 0x28b2bc, Func Offset: 0x1c
	// Line 801, Address: 0x28b2d8, Func Offset: 0x38
	// Line 802, Address: 0x28b2dc, Func Offset: 0x3c
	// Line 804, Address: 0x28b2e4, Func Offset: 0x44
	// Line 805, Address: 0x28b2f4, Func Offset: 0x54
	// Line 807, Address: 0x28b2f8, Func Offset: 0x58
	// Line 809, Address: 0x28b310, Func Offset: 0x70
	// Line 810, Address: 0x28b314, Func Offset: 0x74
	// Func End, Address: 0x28b32c, Func Offset: 0x8c
}

// 
// Start address: 0x28b330
void GameObjDontMoveConstruct(sfObj* obj)
{
	float vec[4];
	float quat[4];
	_anon2* ow;
	_anon10* w;
	// Line 863, Address: 0x28b330, Func Offset: 0
	// Line 866, Address: 0x28b344, Func Offset: 0x14
	// Line 872, Address: 0x28b350, Func Offset: 0x20
	// Line 873, Address: 0x28b358, Func Offset: 0x28
	// Line 876, Address: 0x28b390, Func Offset: 0x60
	// Line 877, Address: 0x28b39c, Func Offset: 0x6c
	// Line 878, Address: 0x28b3a4, Func Offset: 0x74
	// Line 880, Address: 0x28b3ac, Func Offset: 0x7c
	// Line 878, Address: 0x28b3b0, Func Offset: 0x80
	// Line 883, Address: 0x28b3b4, Func Offset: 0x84
	// Line 884, Address: 0x28b3bc, Func Offset: 0x8c
	// Line 887, Address: 0x28b3f4, Func Offset: 0xc4
	// Line 888, Address: 0x28b400, Func Offset: 0xd0
	// Line 889, Address: 0x28b408, Func Offset: 0xd8
	// Line 893, Address: 0x28b410, Func Offset: 0xe0
	// Line 894, Address: 0x28b420, Func Offset: 0xf0
	// Line 896, Address: 0x28b424, Func Offset: 0xf4
	// Line 899, Address: 0x28b448, Func Offset: 0x118
	// Line 903, Address: 0x28b44c, Func Offset: 0x11c
	// Line 899, Address: 0x28b454, Func Offset: 0x124
	// Line 900, Address: 0x28b458, Func Offset: 0x128
	// Line 901, Address: 0x28b460, Func Offset: 0x130
	// Line 902, Address: 0x28b468, Func Offset: 0x138
	// Line 903, Address: 0x28b46c, Func Offset: 0x13c
	// Line 904, Address: 0x28b478, Func Offset: 0x148
	// Line 905, Address: 0x28b484, Func Offset: 0x154
	// Line 908, Address: 0x28b490, Func Offset: 0x160
	// Line 909, Address: 0x28b498, Func Offset: 0x168
	// Line 911, Address: 0x28b4a4, Func Offset: 0x174
	// Line 913, Address: 0x28b4ac, Func Offset: 0x17c
	// Line 914, Address: 0x28b4b0, Func Offset: 0x180
	// Func End, Address: 0x28b4c8, Func Offset: 0x198
}

// 
// Start address: 0x28b4d0
void GameObjDontMove(sfObj* obj)
{
	// Line 918, Address: 0x28b4d0, Func Offset: 0
	// Func End, Address: 0x28b4d8, Func Offset: 0x8
}

// 
// Start address: 0x28b4e0
void GameObjDontMoveRender(sfObj* obj)
{
	// Line 936, Address: 0x28b4e0, Func Offset: 0
	// Line 937, Address: 0x28b4ec, Func Offset: 0xc
	// Line 941, Address: 0x28b4f4, Func Offset: 0x14
	// Line 944, Address: 0x28b4fc, Func Offset: 0x1c
	// Func End, Address: 0x28b50c, Func Offset: 0x2c
}

// 
// Start address: 0x28b510
void GameObjDontMoveDestruct(sfObj* obj)
{
	_anon10* w;
	// Line 947, Address: 0x28b510, Func Offset: 0
	// Line 948, Address: 0x28b51c, Func Offset: 0xc
	// Line 949, Address: 0x28b524, Func Offset: 0x14
	// Line 951, Address: 0x28b528, Func Offset: 0x18
	// Line 952, Address: 0x28b530, Func Offset: 0x20
	// Line 953, Address: 0x28b538, Func Offset: 0x28
	// Line 956, Address: 0x28b540, Func Offset: 0x30
	// Func End, Address: 0x28b550, Func Offset: 0x40
}

// 
// Start address: 0x28b550
GameObjType GameObjGetType(sfObj* obj)
{
	SceneObjWork* s;
	// Line 972, Address: 0x28b550, Func Offset: 0
	// Line 973, Address: 0x28b558, Func Offset: 0x8
	// Line 974, Address: 0x28b560, Func Offset: 0x10
	// Line 976, Address: 0x28b564, Func Offset: 0x14
	// Line 978, Address: 0x28b578, Func Offset: 0x28
	// Func End, Address: 0x28b580, Func Offset: 0x30
}

// 
// Start address: 0x28b580
int GameObjGetID(sfObj* obj)
{
	SceneObjWork* s;
	// Line 991, Address: 0x28b580, Func Offset: 0
	// Line 993, Address: 0x28b584, Func Offset: 0x4
	// Line 996, Address: 0x28b598, Func Offset: 0x18
	// Func End, Address: 0x28b5a0, Func Offset: 0x20
}

// 
// Start address: 0x28b5a0
void GameObjSet_SetTableID(sfObj* obj, unsigned int id)
{
	SceneObjWork* s;
	// Line 1005, Address: 0x28b5a0, Func Offset: 0
	// Line 1006, Address: 0x28b5a4, Func Offset: 0x4
	// Line 1007, Address: 0x28b5ac, Func Offset: 0xc
	// Line 1009, Address: 0x28b5b0, Func Offset: 0x10
	// Func End, Address: 0x28b5b8, Func Offset: 0x18
}

// 
// Start address: 0x28b5c0
_anon8* GameObjGetWorkCommon(sfObj* obj)
{
	// Line 1040, Address: 0x28b5c0, Func Offset: 0
	// Line 1041, Address: 0x28b5c4, Func Offset: 0x4
	// Func End, Address: 0x28b5cc, Func Offset: 0xc
}

// 
// Start address: 0x28b5d0
_anon11* GameObjGetWorkPlayer(sfObj* obj)
{
	// Line 1056, Address: 0x28b5d0, Func Offset: 0
	// Line 1057, Address: 0x28b5d4, Func Offset: 0x4
	// Func End, Address: 0x28b5dc, Func Offset: 0xc
}

// 
// Start address: 0x28b5e0
_anon13* GameObjGetWorkEnemy(sfObj* obj)
{
	// Line 1062, Address: 0x28b5e0, Func Offset: 0
	// Line 1063, Address: 0x28b5e4, Func Offset: 0x4
	// Func End, Address: 0x28b5ec, Func Offset: 0xc
}

// 
// Start address: 0x28b5f0
_anon1* GameObjGetWorkSearch(sfObj* obj)
{
	// Line 1074, Address: 0x28b5f0, Func Offset: 0
	// Line 1075, Address: 0x28b5f4, Func Offset: 0x4
	// Func End, Address: 0x28b5fc, Func Offset: 0xc
}

// 
// Start address: 0x28b600
_anon2* GameObjGetWorkFigure(sfObj* obj)
{
	// Line 1080, Address: 0x28b600, Func Offset: 0
	// Line 1081, Address: 0x28b604, Func Offset: 0x4
	// Func End, Address: 0x28b60c, Func Offset: 0xc
}

// 
// Start address: 0x28b610
_anon7* GameObjGetWorkTEvent(sfObj* obj)
{
	// Line 1085, Address: 0x28b610, Func Offset: 0
	// Line 1086, Address: 0x28b614, Func Offset: 0x4
	// Func End, Address: 0x28b61c, Func Offset: 0xc
}

// 
// Start address: 0x28b620
_anon12* GameObjGetWorkEHit(sfObj* obj)
{
	SceneObjWork* s;
	// Line 1096, Address: 0x28b620, Func Offset: 0
	// Line 1098, Address: 0x28b624, Func Offset: 0x4
	// Line 1100, Address: 0x28b638, Func Offset: 0x18
	// Func End, Address: 0x28b640, Func Offset: 0x20
}

// 
// Start address: 0x28b640
_anon15* GameObjGetWorkEvent(sfObj* obj)
{
	// Line 1105, Address: 0x28b640, Func Offset: 0
	// Line 1106, Address: 0x28b644, Func Offset: 0x4
	// Func End, Address: 0x28b64c, Func Offset: 0xc
}

// 
// Start address: 0x28b650
_anon17* GameObjGetWorkEvCamera(sfObj* obj)
{
	// Line 1111, Address: 0x28b650, Func Offset: 0
	// Line 1112, Address: 0x28b654, Func Offset: 0x4
	// Func End, Address: 0x28b65c, Func Offset: 0xc
}

