typedef struct sfCldPart;
typedef struct EnemyAiCommandDataSphere;
typedef struct EnemyAiCommandDataCylinder;
typedef struct sgBone;
typedef struct EnemyAiTarget;
typedef struct EnemyAiCommandDataCircle;
typedef struct sfCldObject;
typedef struct EnemyAiParameter;
typedef struct EnemyAiCommandDataFan;
typedef struct sfObj;
typedef struct sfAllocateList2;
typedef struct EnemyAiCommand;
typedef struct _anon0;
typedef struct _anon1;
typedef struct EnemyAiWork;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sgQTNode;
typedef union _anon4;
typedef struct sgQTObject;
typedef enum EnemyAiCommandType : unsigned char;
typedef struct sfOffsetAABB;
typedef enum EnemyClObjectKind : unsigned char;
typedef union sfCldBody;

typedef void(*type_1)(EnemyAiTarget*);
typedef int(*type_3)(sfObj*, EnemyAiTarget*);
typedef void(*type_8)(sfObj*);
typedef void(*type_12)(EnemyAiTarget*);
typedef void(*type_19)(sfObj*);

typedef unsigned char type_0[3];
typedef float type_2[5];
typedef float type_4[4];
typedef float type_5[4];
typedef _anon4 type_6[256];
typedef sfCldPart* type_7[6];
typedef unsigned char type_9[3];
typedef float type_10[4];
typedef float type_11[4][4];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[5];
typedef float type_18[1];
typedef int type_20[1];
typedef float type_21[4];

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

struct EnemyAiCommandDataSphere
{
	float radius;
};

struct EnemyAiCommandDataCylinder
{
	float radius;
	float height_u;
	float height_l;
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

struct EnemyAiTarget
{
	sfObj* target;
	sfCldObject* target_cld;
	EnemyClObjectKind kind;
	float interest;
	float distaste;
	EnemyAiTarget* next;
};

struct EnemyAiCommandDataCircle
{
	float radius;
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

struct EnemyAiParameter
{
	EnemyAiCommand* command;
	EnemyAiTarget* target_top;
	float fear;
	int mode;
	int flag;
	void(*target_construct)(EnemyAiTarget*);
};

struct EnemyAiCommandDataFan
{
	float radius;
	float height_u;
	float height_l;
	float angle;
};

struct sfObj
{
	_anon4 fwork[256];
	_anon4* work;
	void(*func)(sfObj*);
	_anon4* work_pt0;
	_anon4* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon4* sys_work;
	_anon4* scene_work;
	_anon4* event_work;
	_anon4* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sfAllocateList2
{
	char* work_top;
	unsigned int size;
	unsigned int lsize;
	int number;
};

struct EnemyAiCommand
{
	EnemyAiCommandType type;
	int(*exec_func)(sfObj*, EnemyAiTarget*);
	int check;
	float distance;
	float direction;
	int level_influence;
	float interest;
	float distaste;
	union
	{
		float dummy[4];
		EnemyAiCommandDataSphere sphere;
		EnemyAiCommandDataCylinder cylinder;
		EnemyAiCommandDataCircle circle;
		EnemyAiCommandDataFan fan;
	};
};

struct _anon0
{
	float start[4];
	float end[4];
};

struct _anon1
{
	float center[4];
	float radius;
};

struct EnemyAiWork
{
	sfAllocateList2 t_list;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
};

struct sgQTNode
{
	int dummy;
};

union _anon4
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

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

enum EnemyAiCommandType : unsigned char
{
	ENEMY_AI_COMMAND_ALWAYS,
	ENEMY_AI_COMMAND_SPHERE,
	ENEMY_AI_COMMAND_CYLINDER,
	ENEMY_AI_COMMAND_CIRCLE,
	ENEMY_AI_COMMAND_FAN,
	ENEMY_AI_COMMAND_END
};

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
};

enum EnemyClObjectKind : unsigned char
{
	EN_CL_OBJKIND_NONE,
	EN_CL_OBJKIND_HENRY,
	EN_CL_OBJKIND_EILEEN,
	EN_CL_OBJKIND_ENEMY,
	EN_CL_OBJKIND_OTHER
};

union sfCldBody
{
	_anon3 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
};

float modify_table1[5];
float modify_table1d[5];
EnemyAiWork en_ai_work;
float sg_vector_unit_y[4];

void EnemyAiWorkInit();
void EnemyAiWorkAllDestruct();

// 
// Start address: 0x1f8ca0
void EnemyAiWorkInit()
{
	// Line 48, Address: 0x1f8ca0, Func Offset: 0
	// Func End, Address: 0x1f8cb0, Func Offset: 0x10
}

// 
// Start address: 0x1f8cb0
void EnemyAiWorkAllDestruct()
{
	// Line 100, Address: 0x1f8cb0, Func Offset: 0
	// Func End, Address: 0x1f8cbc, Func Offset: 0xc
}

