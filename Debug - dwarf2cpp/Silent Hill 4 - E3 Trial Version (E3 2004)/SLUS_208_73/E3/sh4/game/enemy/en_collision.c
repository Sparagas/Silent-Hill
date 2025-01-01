typedef struct EnemyClHitResult;
typedef struct sfObj;
typedef struct EnemyCollisionTmp;
typedef struct _anon0;
typedef struct sfCldObject;
typedef struct EnemyCollision;
typedef struct sfCldPart;
typedef enum EnemyCldResult : unsigned char;
typedef struct _anon1;
typedef struct sfAllocateList;
typedef struct EnemyObjHook2;
typedef struct EnClColis;
typedef struct _anon2;
typedef union sfCldBody;
typedef struct sgBone;
typedef struct _anon3;
typedef struct _anon4;
typedef struct EnemyClMapHitCache;
typedef struct EnemyMeasureResult;
typedef struct EnClPlayerPart;
typedef enum sgLightType : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef enum sgIKSolveResult : unsigned char;
typedef enum EnemyClTargetType : unsigned char;
typedef struct _anon7;
typedef struct sgSVModel;
typedef struct _anon8;
typedef struct sgIKHandle;
typedef enum EnemyCollisionType : unsigned char;
typedef struct sgAnime;
typedef struct sgQTNode;
typedef union _anon9;
typedef struct EnClColisChara;
typedef struct sfCharacter;
typedef enum EnemyPlayerType : unsigned char;
typedef enum EnemyClPriority : unsigned char;
typedef enum EnClType : unsigned char;
typedef struct sgQTObject;
typedef struct EnemyAreaBox;
typedef enum EnemyClHitResultType : unsigned char;
typedef struct sfOffsetAABB;
typedef enum EnemyClObjectKind : unsigned char;
typedef struct _anon10;
typedef struct EnemyCollisionWork;
typedef union _anon11;

typedef void(*type_1)(sfObj*, float*);
typedef void(*type_2)(sfObj*, float*);
typedef void(*type_3)(void*);
typedef void(*type_4)(sfObj*, float*);
typedef void(*type_6)(sfObj*, float*);
typedef void(*type_7)(sfObj*, float*);
typedef void(*type_8)(sfObj*, float*);
typedef void(*type_11)(sfObj*, float*);
typedef sgIKSolveResult(*type_13)();
typedef void(*type_16)(_anon7*, int, int, float*);
typedef void(*type_21)(sfObj*, float*);
typedef void(*type_22)(sfObj*);
typedef void(*type_25)(sfObj*, float*);
typedef void(*type_27)(sfObj*, float*);
typedef void(*type_31)(sfObj*);
typedef void(*type_36)(sgAnime*, int);

typedef sfCldPart* type_0[6];
typedef float type_5[4][4];
typedef float type_9[4];
typedef float type_10[4][2];
typedef float type_12[4];
typedef float type_14[3];
typedef float type_15[3];
typedef float type_17[4][8];
typedef _anon9 type_18[256];
typedef int type_19[8];
typedef sfCldPart* type_20[6];
typedef unsigned char type_23[3];
typedef float type_24[4];
typedef float type_26[4];
typedef float type_28[3];
typedef float type_29[3];
typedef void* type_30[4];
typedef float type_32[6];
typedef short type_33[2];
typedef unsigned short type_34[2];
typedef char type_35[4];
typedef unsigned char type_37[4];
typedef float type_38[1];
typedef int type_39[1];
typedef unsigned char type_40[4];
typedef EnemyClMapHitCache type_41[16];
typedef EnemyClHitResult type_42[4];
typedef unsigned char type_43[3];
typedef _anon10 type_44[4];
typedef _anon11 type_45[0];

struct EnemyClHitResult
{
	EnemyClHitResultType type;
	union
	{
		_anon0* poly;
		sfCldObject* cld;
	};
	float dist;
	float sdist;
	float cp[4];
	float normal[4];
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

struct EnemyCollisionTmp
{
	EnemyCollision* pcld;
	int priority;
	float move_dist;
};

struct _anon0
{
	_anon11 vertex[0];
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

struct EnemyCollision
{
	sfCldObject cld;
	EnemyCollisionType type;
	sfObj* obj;
	void(*getfunc)(sfObj*, float*);
	void(*setfunc)(sfObj*, float*);
	EnemyClPriority priority;
	float move[3];
	float old_pos[3];
	float expand;
	int reset;
	EnemyCldResult result;
	int move_part_n;
	int player_ignore;
	EnemyCollision* next;
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

enum EnemyCldResult : unsigned char
{
	CLD_MAP = 0x1,
	CLD_CHARA,
	CLD_PLAYER = 0x4,
	CLD_FLOOR = 0x8
};

struct _anon1
{
	float abcd[4];
};

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
};

struct EnemyObjHook2
{
};

struct EnClColis
{
	float cpos[4];
	_anon1 plane;
	float dist;
	float push;
	_anon0* poly;
	EnClType htype;
};

struct _anon2
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

union sfCldBody
{
	_anon5 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon3 line;
	_anon4 sphere;
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

struct _anon4
{
	float center[4];
	float radius;
};

struct EnemyClMapHitCache
{
	EnemyClHitResult result;
	float start[3];
	int type;
	float end[3];
	int lru;
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

struct EnClPlayerPart
{
	sfCldBody original;
	sfCldPart* part;
	sgBone* parent;
	int player;
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct _anon5
{
	float mat[4][4];
	float half_w[4];
};

struct _anon6
{
	float bmin[4];
	float bmax[4];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

enum EnemyClTargetType : unsigned char
{
	EN_CL_TTYPE_THROUGH,
	EN_CL_TTYPE_ENEMY,
	EN_CL_TTYPE_ENEMY_TARGET,
	EN_CL_TTYPE_BOTH
};

struct _anon7
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon8
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon7*, int, int, float*);
	int equip_flag;
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

enum EnemyCollisionType : unsigned char
{
	EN_CL_TYPE_NORMAL,
	EN_CL_TYPE_NORMAL_H,
	EN_CL_TYPE_NORMAL_W,
	EN_CL_TYPE_THROUGH_WALL,
	EN_CL_TYPE_THROUGH_WALL_H,
	EN_CL_TYPE_THROUGH_CHARA,
	EN_CL_TYPE_THROUGH_CHARA_W,
	EN_CL_TYPE_THROUGH_ALL,
	EN_CL_TYPE_NOMOVE
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

struct sgQTNode
{
	int dummy;
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

struct EnClColisChara
{
	float cpos[4];
	float repel[4];
	EnClType htype;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon8 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

enum EnemyPlayerType : unsigned char
{
	ENEMY_PLAYER_TYPE_PLAYER,
	ENEMY_PLAYER_TYPE_HEROINE,
	ENEMY_PLAYER_TYPE_NPC,
	ENEMY_PLAYER_TYPE_MAX,
	ENEMY_PLAYER_TYPE_NOTHING = 0xff
};

enum EnemyClPriority : unsigned char
{
	EN_CL_PRIO_PLAYER,
	EN_CL_PRIO_S_HEAVY,
	EN_CL_PRIO_HEAVY,
	EN_CL_PRIO_MIDDLE,
	EN_CL_PRIO_LIGHT,
	EN_CL_PRIO_FEATHER
};

enum EnClType : unsigned char
{
	EN_CL_HTYPE_NOHIT,
	EN_CL_HTYPE_NORMAL,
	EN_CL_HTYPE_GRAZE
};

struct sgQTObject
{
	_anon4 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct EnemyAreaBox
{
	float x_mini;
	float y_mini;
	float z_mini;
	float x_max;
	float y_max;
	float z_max;
};

enum EnemyClHitResultType : unsigned char
{
	EN_CL_RESULT_NOTHING,
	EN_CL_RESULT_WALL,
	EN_CL_RESULT_CHARA,
	EN_CL_RESULT_VOID
};

struct sfOffsetAABB
{
	_anon6 aabb;
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

struct _anon10
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct EnemyCollisionWork
{
	EnemyClMapHitCache hit_cache[16];
	EnemyClHitResult tmp_result[4];
	sfCldObject* testobj;
	sfCldObject* camobj;
	sfCldObject* donotenterareaobj;
	EnemyMeasureResult my_floor;
	sfObj* my_floor_obj;
	EnemyCollision* colli_top;
	sfAllocateList result_list;
	void* tmp;
	EnClColis* tmp_ecc;
	EnClColis* tmp_ecc2;
	short polygon_vertices;
	int number;
	sfAllocateList player_cld_part_list;
	int player_only;
	int player_ignore;
	int polygon_check_type;
	_anon0* lasthit_poly;
	_anon1 lasthit_plane;
};

union _anon11
{
	float node[4];
	_anon10 data[4];
};

float weight_rate[6];
EnemyCollisionWork en_cl_work;
void(*EnemyClPartTransferBonesParents)(void*);
void(*EnemyClSetPosByMovePart)(sfObj*, float*);
void(*EnemyClMovePartGetPos)(sfObj*, float*);
float sg_vector_unit_z[4];
float sg_vector_zero[4];
float sg_vector_unit_y[4];
float en_vector_unit_y_minus[4];
float sg_vector_unit_x[4];
float en_quat_rot_y_90[4];
float en_quat_rot_y_30[4];
float en_quat_rot_y_330[4];
float stungun_light_color[4];

void EnemyCollisionWorkInit();
void EnemyCollisionReset();
void EnemyCollisionWorkAllDestruct();
void EnemyClConstruct(sfObj* obj, void(*getfunc)(sfObj*, float*), void(*setfunc)(sfObj*, float*), EnemyClPriority priority, EnemyCollisionType type, float radius);
void EnemyClConstruct2(sfObj* obj, void(*getfunc)(sfObj*, float*), void(*setfunc)(sfObj*, float*), float radius);
void EnemyClDestruct(sfObj* obj);
sfCldObject* EnemyClGetCldObj(sfObj* obj);
void EnemyClResetPos(sfObj* obj);
void EnemyClSetPriority(sfObj* obj, EnemyClPriority priority);
void EnemyClSetType(sfObj* obj, EnemyCollisionType type);
EnemyCollisionType EnemyClType(sfObj* obj);
float EnemyClMovePartSize(sfObj* obj);
void EnemyClMovePartChangeSize(sfObj* obj, float size);
void EnemyClMovePartSetParent(sfObj* obj, sgBone* parent);
void EnemyClMovePartSetLocalPos(sfObj* obj, float* trans);
void EnemyClMovePartGetPos(sfObj* obj, float* pos);
void EnemyClMovePartUpdate(sfObj* obj);
void EnemyClMovePartUpdateByCenter(sfObj* obj);
void EnemyClSetPosByMovePart(sfObj* obj, float* pos);
int EnemyClPartAdd(sfObj* obj);
void EnemyClPartSetSphere(sfObj* obj, int part_n, float* center, float radius, EnemyClTargetType type);
void EnemyClPartSetSphereFollowBone(sfObj* obj, int part_n, int bone_n, float* center, float radius, EnemyClTargetType type);
void EnemyClPartSetObbFollowBone(sfObj* obj, int part_n, int bone_n, _anon5* obb, EnemyClTargetType type);
void EnemyClPartChangeType(sfObj* obj, int part_n, EnemyClTargetType type);
void EnemyClPartTransSphereCenter(sfObj* obj, int part_n, float* center);
void EnemyClPartChangeRadius(sfObj* obj, int part_n, float radius);
void EnemyClPartTransferBonesParents(void* work);
void EnemyClBackupBoneNumber(sfObj* obj);
void EnemyClRestoreBoneNumber(sfObj* obj);
int EnemyClCheckLastCollideMap(sfObj* obj);
int EnemyClCheckLastCollideFloor(sfObj* obj);
int EnemyClCheckLastCollideChara(sfObj* obj);
int EnemyClCheckLastCollidePlayer(sfObj* obj);
int EnemyEDClCheckLastCollidePlayer(void* obj);
void EnemyClGetMove(sfObj* obj, float* move);
void EnemyClAddMove(sfObj* obj, float* move);
void EnemyClAddMoveDirect(sfObj* obj, float* move);
int EnemyClLimitMove(sfObj* obj, float* pos, _anon6* limit);
void EnemyClMoveBalanceByFloor(sfObj* obj, float h_range, float v_range);
void EnemyClMoveForce(sfObj* obj);
void EnemyClIgnorePlayer();
void EnemyClExistPlayer();
void EnemyClIgnorePlayerMove(sfObj* obj);
void EnemyClExistPlayerMove(sfObj* obj);
void entry_data(EnemyCollision* pec);
void set_target(sfObj* obj);
void EnemyClExecMove(sfObj* obj);
void EnemyClExecMoveCenter(sfObj* obj);
EnemyClHitResult* check_cache(_anon3* line, int type);
void set_cache(_anon3* line, EnemyClHitResult* res, int type);
float plane_dist(_anon1* plane, float* pos);
float get_cross_point(_anon0* pp, float* vertex, float* pos);
void get_graze_push(EnClColis* pecc, _anon4* psp);
void get_polydata(EnClColis* pecc, _anon0* pp, _anon4* psp);
void collide_nearest_poly(EnClColis* pecc, int npolys, _anon4* psp, float* move, _anon0** ppoly, int pcount);
int hit_test_map(float* pos, float radius, float* move, _anon0** ppoly, int pcount);
int collide_map(EnemyCollision* pec, float* pos, float* move, _anon0** ppoly, int pcount);
void calc_repel();
void calc_repel_aabb(EnClColisChara* pecc, _anon4* psp, _anon6* paabb, int horizontal);
void calc_repel_obb(EnClColisChara* pecc, _anon4* psp, _anon5* pobb, float* center);
void move_part(sfCldPart* pp, float* move);
void move_player_part(int player, float* move);
void move_enemy_part(EnemyCollision* cld, float* move);
void collide_nearest_chara(EnClColisChara* pecc, _anon4* psp, EnemyCollision* pec, sfCldObject** pobj, int pcount);
int hit_test_chara(EnemyCollision* pec, float* pos, float radius, sfCldObject** pobj, int pcount);
int collide_chara(EnemyCollision* pec, float* pos, sfCldObject** pobj, int pcount);
int check_collide_line(float* tpos, float* pos);
int check_collide_line_with_type(float* tpos, float* pos);
int collide_one_main(EnemyCollision* pec, float* pos, float* move);
void collide_one(EnemyCollision* pec, float* pos);
void player_cld_set();
void player_cld_recovery();
void set_camera_obj();
void set_donotenterarea();
void delete_donotenterarea();
void sort_data();
void EnemyCollide();
EnemyClHitResult* EnemyClHitResultTmpNew();
void EnemyClHitResultTmpDelete(EnemyClHitResult* res);
float EnemyClHitResultGetDistance(EnemyClHitResult* res);
void EnemyClHitResultGetPos(EnemyClHitResult* res, float* pos);
void EnemyClHitResultGetNormal(EnemyClHitResult* res, float* normal);
_anon0* EnemyClHitResultPolygon(EnemyClHitResult* res);
sfCldObject* EnemyClHitResultObject(EnemyClHitResult* res);
int EnemyClHitResultCheckEffective(EnemyClHitResult* res, float error);
int get_near_poly_data(EnemyClHitResult* res, int npolys, _anon3* line, float* normal, float theta_mini, float theta_max);
int get_near_poly_data_s(EnemyClHitResult* res, int npolys, _anon4* sphere, float* normal, float theta_mini, float theta_max);
EnemyClHitResultType EnemyClCheckHitUnder(EnemyClHitResult* res, float* pos, float* rot, float limit);
float get_cross_point_line_sphere(float* cross, float* vtx1, float* vtx2, float* center, float radius);
void check_hit_chara_sphere(EnemyClHitResult* res, _anon4* sphere, sfCldObject* ignore_cld);
void check_hit_line(EnemyClHitResult* res, _anon3* line);
void check_hit_line2(EnemyClHitResult* res, _anon3* line);
void common_init(EnemyClHitResult* res, _anon3* line, float* start, float* end);
EnemyClHitResultType EnemyClCheckHitOnlyWall(EnemyClHitResult* res, float* start, float* end);
EnemyClHitResultType EnemyClCheckHitOnlyWallPlus(EnemyClHitResult* res, float* start, float* end, float height);
EnemyClHitResultType EnemyClCheckHitOnlyFloor(EnemyClHitResult* res, float* start, float* end);
int check_polygon_on_same_plane(_anon0* poly1, _anon0* poly2);
EnemyClHitResultType EnemyClCheckHitToWall(EnemyClHitResult* res, float* start, float* end, float range);
EnemyClHitResultType EnemyClCheckHitToWallTwoWay(EnemyClHitResult* res, float* start, float* end, float range);
EnemyClHitResultType EnemyClCheckHitEyeOnlyWall(EnemyClHitResult* res, float* start, float* end);
EnemyClHitResultType EnemyClCheckHitSphereOnlyWall(EnemyClHitResult* res, float* pos, float radius);
EnemyClHitResultType EnemyClCheckHitSphereOnlyWallN(EnemyClHitResult* res, float* pos, float radius, float* normal);
EnemyClHitResultType EnemyClCheckHitSphereOnlyChara(EnemyClHitResult* res, float* pos, float radius, sfObj* ignore_obj);
EnemyClHitResultType EnemyClCheckHitSphereOnlyPlayer(EnemyClHitResult* res, float* pos, float radius);
EnemyClHitResultType EnemyClCheckHitSphereEnemyTarget(EnemyClHitResult* res, float* pos, float radius, sfObj* ignore_obj);
int EnemyClGetHitPos(sfCldObject* cld, float* pos, float* hpos, float* hdir, float size);
int EnemyClCheckInWall(float* pos);
_anon0* EnemyClCheckJustWallOldType(float* pos, float range);
_anon0* EnemyClCheckJustWall(float* pos, float range);
int EnemyClGetWallNormal(float* normal, float* pos, float range);
int EnemyClGetWallPos(float* wpos, float* pos, float* normal, float range);
int exist_stairs();
int fix_stairs(float* pos);
int EnemyClCheckStairs(float* pos, float* normal);
int EnemyClCheckNarrowPassage(float* pos, float range);
_anon0* EnemyClGetLastHitPolygon();
void EnemyClGetLastHitPlane(_anon1* plane);
int check_fix_normal(sfObj* obj);
int EnemyClStickFloor(sfObj* obj);
void EnemyClFreeFall(sfObj* obj);
int EnemyClLanding(sfObj* obj, float size);
sfObj* EnemyClGetObj(sfCldObject* cld);
sfObj* EnemyClGetControlObj(sfCldObject* cld);
int EnemyClWhichRotRightOrLeft(float* pos, float* rot, float limit);
int EnemyClWhichRoundRightOrLeft(float* pos, float* tpos, float limit);
void EnemyClSetTargetEvadeWall(float* target, float* pos, float* rot, float range);
float EnemyClGetTargetSpace(float* pos, float* normal, float width, float range);
int EnemyClCheckTargetSpace(float* pos, float* normal, float width, float range);
int EnemyClCheckRepelWall(float* pos, float radius, float* move, int mode);
int EnemyClCheckRepelWallLine(float* pos, float* old_pos, int mode);
void EnemyGetRandomPointInPassage(float* pos, float range);
int EnemyMeasureFloor(EnemyMeasureResult* mres, float* pos);
int EnemyMeasureMyFloor(EnemyMeasureResult* mres, sfObj* obj);
void EnemyCalcLightColor(float* color, float* pos, float* normal);
int EnemySetLightingOffByFloor(sfObj* obj);
int EnemySetLightingOffByLasthitPolygon(sfObj* obj);
int EnemySetLightingOffBySphereHit(sfObj* obj, float radius);
int EnemySetShadowOffBySphereHit(sfObj* obj, float radius);
int EnemySetShadowOffBySphereHitDirect(void* chara, float* pos, float radius);
void EnemySetLightingAndShadowByObj(sfObj* obj, sfObj* base);
void EnemyClSetTargetHeight(float* target, float* pos, float height);
int EnemyClRaiseTargetHeight(float* target, float* pos, float height);
int EnemyMapPolygonIsNoThrough(_anon0* poly);
int EnemyMapPolygonCanCatch(_anon0* poly);
int EnemyMapPolygonIsExistence(_anon0* poly);
int EnemyClCheckHitCamera(sfObj* obj, int part);

// 
// Start address: 0x188810
void EnemyCollisionWorkInit()
{
	// Line 296, Address: 0x188810, Func Offset: 0
	// Line 298, Address: 0x188814, Func Offset: 0x4
	// Line 296, Address: 0x188818, Func Offset: 0x8
	// Line 298, Address: 0x18881c, Func Offset: 0xc
	// Line 301, Address: 0x188828, Func Offset: 0x18
	// Line 304, Address: 0x188834, Func Offset: 0x24
	// Line 301, Address: 0x188838, Func Offset: 0x28
	// Line 304, Address: 0x18883c, Func Offset: 0x2c
	// Line 301, Address: 0x188840, Func Offset: 0x30
	// Line 304, Address: 0x188844, Func Offset: 0x34
	// Line 301, Address: 0x188848, Func Offset: 0x38
	// Line 304, Address: 0x188854, Func Offset: 0x44
	// Line 306, Address: 0x18885c, Func Offset: 0x4c
	// Line 308, Address: 0x18886c, Func Offset: 0x5c
	// Func End, Address: 0x188878, Func Offset: 0x68
}

// 
// Start address: 0x188880
void EnemyCollisionReset()
{
	int i;
	EnemyClMapHitCache* p;
	// Line 316, Address: 0x188880, Func Offset: 0
	// Line 319, Address: 0x188884, Func Offset: 0x4
	// Line 316, Address: 0x188888, Func Offset: 0x8
	// Line 319, Address: 0x18888c, Func Offset: 0xc
	// Line 317, Address: 0x188890, Func Offset: 0x10
	// Line 320, Address: 0x188894, Func Offset: 0x14
	// Line 317, Address: 0x188898, Func Offset: 0x18
	// Line 321, Address: 0x18889c, Func Offset: 0x1c
	// Line 322, Address: 0x1888b0, Func Offset: 0x30
	// Line 329, Address: 0x1888c0, Func Offset: 0x40
	// Line 330, Address: 0x1888c8, Func Offset: 0x48
	// Line 331, Address: 0x1888cc, Func Offset: 0x4c
	// Func End, Address: 0x1888d4, Func Offset: 0x54
}

// 
// Start address: 0x1888e0
void EnemyCollisionWorkAllDestruct()
{
	// Line 338, Address: 0x1888e0, Func Offset: 0
	// Func End, Address: 0x1888ec, Func Offset: 0xc
}

// 
// Start address: 0x1888f0
void EnemyClConstruct(sfObj* obj, void(*getfunc)(sfObj*, float*), void(*setfunc)(sfObj*, float*), EnemyClPriority priority, EnemyCollisionType type, float radius)
{
	EnemyCollision* pec;
	sfCharacter* chara;
	EnemyObjHook2* phook;
	sfCldPart* pp;
	sgBone* bone;
	sfCldBody* pcb;
	float* pos;
	// Line 353, Address: 0x1888f0, Func Offset: 0
	// Line 359, Address: 0x18892c, Func Offset: 0x3c
	// Line 361, Address: 0x188938, Func Offset: 0x48
	// Line 362, Address: 0x188940, Func Offset: 0x50
	// Line 363, Address: 0x188948, Func Offset: 0x58
	// Line 364, Address: 0x188954, Func Offset: 0x64
	// Line 366, Address: 0x18895c, Func Offset: 0x6c
	// Line 368, Address: 0x188964, Func Offset: 0x74
	// Line 369, Address: 0x188970, Func Offset: 0x80
	// Line 370, Address: 0x18897c, Func Offset: 0x8c
	// Line 371, Address: 0x188980, Func Offset: 0x90
	// Line 373, Address: 0x188988, Func Offset: 0x98
	// Line 374, Address: 0x188990, Func Offset: 0xa0
	// Line 375, Address: 0x18899c, Func Offset: 0xac
	// Line 376, Address: 0x1889a0, Func Offset: 0xb0
	// Line 377, Address: 0x1889ac, Func Offset: 0xbc
	// Line 378, Address: 0x1889b4, Func Offset: 0xc4
	// Line 379, Address: 0x1889bc, Func Offset: 0xcc
	// Line 378, Address: 0x1889c0, Func Offset: 0xd0
	// Line 380, Address: 0x1889c4, Func Offset: 0xd4
	// Line 381, Address: 0x1889cc, Func Offset: 0xdc
	// Line 382, Address: 0x1889d4, Func Offset: 0xe4
	// Line 383, Address: 0x1889d8, Func Offset: 0xe8
	// Line 384, Address: 0x1889dc, Func Offset: 0xec
	// Line 386, Address: 0x1889e0, Func Offset: 0xf0
	// Line 388, Address: 0x1889ec, Func Offset: 0xfc
	// Line 389, Address: 0x1889fc, Func Offset: 0x10c
	// Line 390, Address: 0x188a04, Func Offset: 0x114
	// Line 391, Address: 0x188a0c, Func Offset: 0x11c
	// Line 396, Address: 0x188a3c, Func Offset: 0x14c
	// Line 398, Address: 0x188a58, Func Offset: 0x168
	// Line 399, Address: 0x188a68, Func Offset: 0x178
	// Line 400, Address: 0x188a78, Func Offset: 0x188
	// Line 404, Address: 0x188aac, Func Offset: 0x1bc
	// Line 405, Address: 0x188ab0, Func Offset: 0x1c0
	// Line 406, Address: 0x188ab8, Func Offset: 0x1c8
	// Line 408, Address: 0x188ac0, Func Offset: 0x1d0
	// Line 409, Address: 0x188acc, Func Offset: 0x1dc
	// Line 410, Address: 0x188ad0, Func Offset: 0x1e0
	// Line 411, Address: 0x188ad4, Func Offset: 0x1e4
	// Line 412, Address: 0x188ae0, Func Offset: 0x1f0
	// Line 413, Address: 0x188aec, Func Offset: 0x1fc
	// Line 414, Address: 0x188af4, Func Offset: 0x204
	// Line 415, Address: 0x188b0c, Func Offset: 0x21c
	// Line 416, Address: 0x188b10, Func Offset: 0x220
	// Line 417, Address: 0x188b18, Func Offset: 0x228
	// Line 419, Address: 0x188b30, Func Offset: 0x240
	// Func End, Address: 0x188b58, Func Offset: 0x268
}

// 
// Start address: 0x188b60
void EnemyClConstruct2(sfObj* obj, void(*getfunc)(sfObj*, float*), void(*setfunc)(sfObj*, float*), float radius)
{
	EnemyCollision* pec;
	sfCharacter* chara;
	sfCldPart* pp;
	sgBone* bone;
	sfCldBody* pcb;
	float* pos;
	// Line 432, Address: 0x188b60, Func Offset: 0
	// Line 437, Address: 0x188b84, Func Offset: 0x24
	// Line 432, Address: 0x188b88, Func Offset: 0x28
	// Line 437, Address: 0x188b90, Func Offset: 0x30
	// Line 439, Address: 0x188b9c, Func Offset: 0x3c
	// Line 440, Address: 0x188ba4, Func Offset: 0x44
	// Line 441, Address: 0x188bac, Func Offset: 0x4c
	// Line 443, Address: 0x188bb4, Func Offset: 0x54
	// Line 445, Address: 0x188bbc, Func Offset: 0x5c
	// Line 446, Address: 0x188bc8, Func Offset: 0x68
	// Line 447, Address: 0x188bd4, Func Offset: 0x74
	// Line 448, Address: 0x188bd8, Func Offset: 0x78
	// Line 450, Address: 0x188be0, Func Offset: 0x80
	// Line 451, Address: 0x188be8, Func Offset: 0x88
	// Line 452, Address: 0x188bf4, Func Offset: 0x94
	// Line 453, Address: 0x188bf8, Func Offset: 0x98
	// Line 454, Address: 0x188c04, Func Offset: 0xa4
	// Line 455, Address: 0x188c10, Func Offset: 0xb0
	// Line 456, Address: 0x188c14, Func Offset: 0xb4
	// Line 455, Address: 0x188c18, Func Offset: 0xb8
	// Line 457, Address: 0x188c1c, Func Offset: 0xbc
	// Line 458, Address: 0x188c28, Func Offset: 0xc8
	// Line 460, Address: 0x188c2c, Func Offset: 0xcc
	// Line 459, Address: 0x188c30, Func Offset: 0xd0
	// Line 460, Address: 0x188c34, Func Offset: 0xd4
	// Line 461, Address: 0x188c38, Func Offset: 0xd8
	// Line 462, Address: 0x188c3c, Func Offset: 0xdc
	// Line 466, Address: 0x188c68, Func Offset: 0x108
	// Line 468, Address: 0x188c80, Func Offset: 0x120
	// Line 469, Address: 0x188c90, Func Offset: 0x130
	// Line 470, Address: 0x188ca0, Func Offset: 0x140
	// Line 471, Address: 0x188cb0, Func Offset: 0x150
	// Line 472, Address: 0x188cb4, Func Offset: 0x154
	// Line 473, Address: 0x188cc0, Func Offset: 0x160
	// Line 474, Address: 0x188ccc, Func Offset: 0x16c
	// Line 475, Address: 0x188cd4, Func Offset: 0x174
	// Line 476, Address: 0x188cec, Func Offset: 0x18c
	// Line 477, Address: 0x188cf0, Func Offset: 0x190
	// Func End, Address: 0x188d14, Func Offset: 0x1b4
}

// 
// Start address: 0x188d20
void EnemyClDestruct(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 483, Address: 0x188d20, Func Offset: 0
	// Line 485, Address: 0x188d2c, Func Offset: 0xc
	// Line 486, Address: 0x188d38, Func Offset: 0x18
	// Line 487, Address: 0x188d40, Func Offset: 0x20
	// Line 488, Address: 0x188d48, Func Offset: 0x28
	// Line 489, Address: 0x188d54, Func Offset: 0x34
	// Line 490, Address: 0x188d58, Func Offset: 0x38
	// Func End, Address: 0x188d68, Func Offset: 0x48
}

// 
// Start address: 0x188d70
sfCldObject* EnemyClGetCldObj(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 529, Address: 0x188d70, Func Offset: 0
	// Line 531, Address: 0x188d74, Func Offset: 0x4
	// Line 532, Address: 0x188d88, Func Offset: 0x18
	// Line 533, Address: 0x188d90, Func Offset: 0x20
	// Line 535, Address: 0x188da8, Func Offset: 0x38
	// Func End, Address: 0x188db4, Func Offset: 0x44
}

// 
// Start address: 0x188dc0
void EnemyClResetPos(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 541, Address: 0x188dc0, Func Offset: 0
	// Line 543, Address: 0x188dc8, Func Offset: 0x8
	// Line 544, Address: 0x188dd0, Func Offset: 0x10
	// Line 545, Address: 0x188dd8, Func Offset: 0x18
	// Line 546, Address: 0x188ddc, Func Offset: 0x1c
	// Line 547, Address: 0x188de0, Func Offset: 0x20
	// Func End, Address: 0x188dec, Func Offset: 0x2c
}

// 
// Start address: 0x188df0
void EnemyClSetPriority(sfObj* obj, EnemyClPriority priority)
{
	EnemyCollision* pec;
	// Line 554, Address: 0x188df0, Func Offset: 0
	// Line 556, Address: 0x188dfc, Func Offset: 0xc
	// Line 557, Address: 0x188e04, Func Offset: 0x14
	// Line 558, Address: 0x188e0c, Func Offset: 0x1c
	// Line 559, Address: 0x188e10, Func Offset: 0x20
	// Func End, Address: 0x188e20, Func Offset: 0x30
}

// 
// Start address: 0x188e20
void EnemyClSetType(sfObj* obj, EnemyCollisionType type)
{
	EnemyCollision* pec;
	// Line 566, Address: 0x188e20, Func Offset: 0
	// Line 569, Address: 0x188e2c, Func Offset: 0xc
	// Line 570, Address: 0x188e34, Func Offset: 0x14
	// Line 571, Address: 0x188e3c, Func Offset: 0x1c
	// Line 572, Address: 0x188e40, Func Offset: 0x20
	// Line 573, Address: 0x188e64, Func Offset: 0x44
	// Line 574, Address: 0x188e6c, Func Offset: 0x4c
	// Line 578, Address: 0x188e9c, Func Offset: 0x7c
	// Line 579, Address: 0x188ea0, Func Offset: 0x80
	// Line 580, Address: 0x188ea8, Func Offset: 0x88
	// Line 582, Address: 0x188eb0, Func Offset: 0x90
	// Line 583, Address: 0x188ebc, Func Offset: 0x9c
	// Line 584, Address: 0x188ec0, Func Offset: 0xa0
	// Func End, Address: 0x188ed0, Func Offset: 0xb0
}

// 
// Start address: 0x188ed0
EnemyCollisionType EnemyClType(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 591, Address: 0x188ed0, Func Offset: 0
	// Line 593, Address: 0x188ed8, Func Offset: 0x8
	// Line 594, Address: 0x188ee0, Func Offset: 0x10
	// Line 596, Address: 0x188ef4, Func Offset: 0x24
	// Func End, Address: 0x188f00, Func Offset: 0x30
}

// 
// Start address: 0x188f00
float EnemyClMovePartSize(sfObj* obj)
{
	EnemyCollision* pec;
	sfCldBody* pcb;
	// Line 603, Address: 0x188f00, Func Offset: 0
	// Line 607, Address: 0x188f10, Func Offset: 0x10
	// Line 608, Address: 0x188f18, Func Offset: 0x18
	// Line 609, Address: 0x188f40, Func Offset: 0x40
	// Line 610, Address: 0x188f60, Func Offset: 0x60
	// Line 615, Address: 0x188f74, Func Offset: 0x74
	// Line 614, Address: 0x188f78, Func Offset: 0x78
	// Line 616, Address: 0x188fbc, Func Offset: 0xbc
	// Line 617, Address: 0x188fd8, Func Offset: 0xd8
	// Func End, Address: 0x188fec, Func Offset: 0xec
}

// 
// Start address: 0x188ff0
void EnemyClMovePartChangeSize(sfObj* obj, float size)
{
	EnemyCollision* pec;
	sfCldBody* pcb;
	// Line 624, Address: 0x188ff0, Func Offset: 0
	// Line 628, Address: 0x18900c, Func Offset: 0x1c
	// Line 629, Address: 0x189018, Func Offset: 0x28
	// Line 630, Address: 0x189038, Func Offset: 0x48
	// Line 631, Address: 0x189058, Func Offset: 0x68
	// Line 635, Address: 0x189060, Func Offset: 0x70
	// Line 637, Address: 0x1890a4, Func Offset: 0xb4
	// Line 638, Address: 0x1890b8, Func Offset: 0xc8
	// Line 639, Address: 0x1890d8, Func Offset: 0xe8
	// Line 640, Address: 0x1890dc, Func Offset: 0xec
	// Func End, Address: 0x1890fc, Func Offset: 0x10c
}

// 
// Start address: 0x189100
void EnemyClMovePartSetParent(sfObj* obj, sgBone* parent)
{
	EnemyCollision* pec;
	// Line 647, Address: 0x189100, Func Offset: 0
	// Line 650, Address: 0x18910c, Func Offset: 0xc
	// Line 651, Address: 0x189114, Func Offset: 0x14
	// Line 652, Address: 0x189130, Func Offset: 0x30
	// Line 653, Address: 0x189150, Func Offset: 0x50
	// Line 654, Address: 0x189158, Func Offset: 0x58
	// Line 655, Address: 0x189168, Func Offset: 0x68
	// Func End, Address: 0x189178, Func Offset: 0x78
}

// 
// Start address: 0x189180
void EnemyClMovePartSetLocalPos(sfObj* obj, float* trans)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	// Line 662, Address: 0x189180, Func Offset: 0
	// Line 666, Address: 0x189198, Func Offset: 0x18
	// Line 667, Address: 0x1891a0, Func Offset: 0x20
	// Line 668, Address: 0x1891c0, Func Offset: 0x40
	// Line 669, Address: 0x1891e8, Func Offset: 0x68
	// Line 670, Address: 0x1891f0, Func Offset: 0x70
	// Line 671, Address: 0x189210, Func Offset: 0x90
	// Line 672, Address: 0x189228, Func Offset: 0xa8
	// Line 674, Address: 0x189254, Func Offset: 0xd4
	// Line 675, Address: 0x189260, Func Offset: 0xe0
	// Line 676, Address: 0x189270, Func Offset: 0xf0
	// Line 678, Address: 0x189278, Func Offset: 0xf8
	// Func End, Address: 0x189290, Func Offset: 0x110
}

// 
// Start address: 0x189290
void EnemyClMovePartGetPos(sfObj* obj, float* pos)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	// Line 713, Address: 0x189290, Func Offset: 0
	// Line 717, Address: 0x18929c, Func Offset: 0xc
	// Line 718, Address: 0x1892a4, Func Offset: 0x14
	// Line 720, Address: 0x1892b8, Func Offset: 0x28
	// Line 722, Address: 0x1892c0, Func Offset: 0x30
	// Line 723, Address: 0x1892e0, Func Offset: 0x50
	// Line 725, Address: 0x1892e8, Func Offset: 0x58
	// Line 727, Address: 0x1892f0, Func Offset: 0x60
	// Line 728, Address: 0x189304, Func Offset: 0x74
	// Line 729, Address: 0x18930c, Func Offset: 0x7c
	// Func End, Address: 0x189320, Func Offset: 0x90
}

// 
// Start address: 0x189320
void EnemyClMovePartUpdate(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 735, Address: 0x189320, Func Offset: 0
	// Line 737, Address: 0x189330, Func Offset: 0x10
	// Line 738, Address: 0x189338, Func Offset: 0x18
	// Line 739, Address: 0x189344, Func Offset: 0x24
	// Line 740, Address: 0x189360, Func Offset: 0x40
	// Line 741, Address: 0x189368, Func Offset: 0x48
	// Line 742, Address: 0x189370, Func Offset: 0x50
	// Func End, Address: 0x189380, Func Offset: 0x60
}

// 
// Start address: 0x189380
void EnemyClMovePartUpdateByCenter(sfObj* obj)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	sgBone* cbone;
	sgBone* pbone;
	float* cpos;
	float* ppos;
	float* crot;
	float center[4];
	float vec[4];
	float rrot[4];
	float d;
	// Line 748, Address: 0x189380, Func Offset: 0
	// Line 758, Address: 0x1893a4, Func Offset: 0x24
	// Line 759, Address: 0x1893ac, Func Offset: 0x2c
	// Line 760, Address: 0x1893b8, Func Offset: 0x38
	// Line 761, Address: 0x1893d8, Func Offset: 0x58
	// Line 762, Address: 0x189400, Func Offset: 0x80
	// Line 763, Address: 0x189408, Func Offset: 0x88
	// Line 764, Address: 0x189420, Func Offset: 0xa0
	// Line 765, Address: 0x189428, Func Offset: 0xa8
	// Line 766, Address: 0x189430, Func Offset: 0xb0
	// Line 769, Address: 0x189468, Func Offset: 0xe8
	// Line 770, Address: 0x189474, Func Offset: 0xf4
	// Line 771, Address: 0x18947c, Func Offset: 0xfc
	// Line 772, Address: 0x18948c, Func Offset: 0x10c
	// Line 773, Address: 0x189494, Func Offset: 0x114
	// Line 774, Address: 0x1894ac, Func Offset: 0x12c
	// Line 775, Address: 0x1894b8, Func Offset: 0x138
	// Line 776, Address: 0x1894c8, Func Offset: 0x148
	// Line 778, Address: 0x1894e0, Func Offset: 0x160
	// Line 776, Address: 0x1894ec, Func Offset: 0x16c
	// Line 778, Address: 0x1894f4, Func Offset: 0x174
	// Line 779, Address: 0x1894fc, Func Offset: 0x17c
	// Line 780, Address: 0x189510, Func Offset: 0x190
	// Line 782, Address: 0x189520, Func Offset: 0x1a0
	// Line 783, Address: 0x189538, Func Offset: 0x1b8
	// Line 784, Address: 0x189544, Func Offset: 0x1c4
	// Line 785, Address: 0x18954c, Func Offset: 0x1cc
	// Line 786, Address: 0x189554, Func Offset: 0x1d4
	// Func End, Address: 0x189580, Func Offset: 0x200
}

// 
// Start address: 0x189580
void EnemyClSetPosByMovePart(sfObj* obj, float* pos)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	sgBone* cbone;
	sgBone* pbone;
	float* prot;
	float tpos[4];
	float vec[4];
	// Line 793, Address: 0x189580, Func Offset: 0
	// Line 801, Address: 0x1895a4, Func Offset: 0x24
	// Line 802, Address: 0x1895ac, Func Offset: 0x2c
	// Line 803, Address: 0x1895c0, Func Offset: 0x40
	// Line 804, Address: 0x1895e8, Func Offset: 0x68
	// Line 805, Address: 0x1895f0, Func Offset: 0x70
	// Line 808, Address: 0x189608, Func Offset: 0x88
	// Line 809, Address: 0x189610, Func Offset: 0x90
	// Line 810, Address: 0x189618, Func Offset: 0x98
	// Line 811, Address: 0x189620, Func Offset: 0xa0
	// Line 812, Address: 0x189628, Func Offset: 0xa8
	// Line 813, Address: 0x189640, Func Offset: 0xc0
	// Line 814, Address: 0x189648, Func Offset: 0xc8
	// Line 815, Address: 0x189658, Func Offset: 0xd8
	// Line 816, Address: 0x189670, Func Offset: 0xf0
	// Line 817, Address: 0x189678, Func Offset: 0xf8
	// Line 818, Address: 0x1896a4, Func Offset: 0x124
	// Line 819, Address: 0x1896c4, Func Offset: 0x144
	// Line 820, Address: 0x1896c8, Func Offset: 0x148
	// Line 821, Address: 0x1896d4, Func Offset: 0x154
	// Line 822, Address: 0x1896d8, Func Offset: 0x158
	// Func End, Address: 0x1896f8, Func Offset: 0x178
}

// 
// Start address: 0x189700
int EnemyClPartAdd(sfObj* obj)
{
	EnemyCollision* pec;
	int n;
	// Line 829, Address: 0x189700, Func Offset: 0
	// Line 832, Address: 0x18970c, Func Offset: 0xc
	// Line 833, Address: 0x189714, Func Offset: 0x14
	// Line 832, Address: 0x189718, Func Offset: 0x18
	// Line 834, Address: 0x18971c, Func Offset: 0x1c
	// Line 835, Address: 0x189728, Func Offset: 0x28
	// Line 836, Address: 0x189758, Func Offset: 0x58
	// Line 837, Address: 0x189760, Func Offset: 0x60
	// Func End, Address: 0x189774, Func Offset: 0x74
}

// 
// Start address: 0x189780
void EnemyClPartSetSphere(sfObj* obj, int part_n, float* center, float radius, EnemyClTargetType type)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	int kind;
	// Line 848, Address: 0x189780, Func Offset: 0
	// Line 853, Address: 0x1897ac, Func Offset: 0x2c
	// Line 854, Address: 0x1897b4, Func Offset: 0x34
	// Line 855, Address: 0x1897d4, Func Offset: 0x54
	// Line 856, Address: 0x1897f0, Func Offset: 0x70
	// Line 857, Address: 0x1897f8, Func Offset: 0x78
	// Line 858, Address: 0x189808, Func Offset: 0x88
	// Line 860, Address: 0x18981c, Func Offset: 0x9c
	// Line 861, Address: 0x189838, Func Offset: 0xb8
	// Line 862, Address: 0x18983c, Func Offset: 0xbc
	// Line 863, Address: 0x189840, Func Offset: 0xc0
	// Line 864, Address: 0x189858, Func Offset: 0xd8
	// Line 865, Address: 0x18985c, Func Offset: 0xdc
	// Line 866, Address: 0x189860, Func Offset: 0xe0
	// Line 868, Address: 0x189870, Func Offset: 0xf0
	// Line 869, Address: 0x189880, Func Offset: 0x100
	// Line 870, Address: 0x189888, Func Offset: 0x108
	// Line 871, Address: 0x189898, Func Offset: 0x118
	// Func End, Address: 0x1898b8, Func Offset: 0x138
}

// 
// Start address: 0x1898c0
void EnemyClPartSetSphereFollowBone(sfObj* obj, int part_n, int bone_n, float* center, float radius, EnemyClTargetType type)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	sgBone* bone;
	int kind;
	// Line 884, Address: 0x1898c0, Func Offset: 0
	// Line 890, Address: 0x1898f4, Func Offset: 0x34
	// Line 891, Address: 0x1898fc, Func Offset: 0x3c
	// Line 892, Address: 0x18991c, Func Offset: 0x5c
	// Line 893, Address: 0x189938, Func Offset: 0x78
	// Line 894, Address: 0x189940, Func Offset: 0x80
	// Line 895, Address: 0x189948, Func Offset: 0x88
	// Line 896, Address: 0x189958, Func Offset: 0x98
	// Line 898, Address: 0x18996c, Func Offset: 0xac
	// Line 899, Address: 0x189988, Func Offset: 0xc8
	// Line 900, Address: 0x18998c, Func Offset: 0xcc
	// Line 901, Address: 0x189990, Func Offset: 0xd0
	// Line 902, Address: 0x1899a8, Func Offset: 0xe8
	// Line 903, Address: 0x1899ac, Func Offset: 0xec
	// Line 904, Address: 0x1899b0, Func Offset: 0xf0
	// Line 906, Address: 0x1899c0, Func Offset: 0x100
	// Line 907, Address: 0x1899d8, Func Offset: 0x118
	// Line 908, Address: 0x1899e0, Func Offset: 0x120
	// Line 909, Address: 0x1899f0, Func Offset: 0x130
	// Func End, Address: 0x189a14, Func Offset: 0x154
}

// 
// Start address: 0x189a20
void EnemyClPartSetObbFollowBone(sfObj* obj, int part_n, int bone_n, _anon5* obb, EnemyClTargetType type)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	sgBone* bone;
	int kind;
	// Line 920, Address: 0x189a20, Func Offset: 0
	// Line 926, Address: 0x189a4c, Func Offset: 0x2c
	// Line 927, Address: 0x189a54, Func Offset: 0x34
	// Line 928, Address: 0x189a70, Func Offset: 0x50
	// Line 929, Address: 0x189a98, Func Offset: 0x78
	// Line 930, Address: 0x189aa0, Func Offset: 0x80
	// Line 931, Address: 0x189aa8, Func Offset: 0x88
	// Line 932, Address: 0x189ab8, Func Offset: 0x98
	// Line 934, Address: 0x189ac8, Func Offset: 0xa8
	// Line 935, Address: 0x189ae8, Func Offset: 0xc8
	// Line 936, Address: 0x189aec, Func Offset: 0xcc
	// Line 937, Address: 0x189af0, Func Offset: 0xd0
	// Line 938, Address: 0x189b08, Func Offset: 0xe8
	// Line 939, Address: 0x189b0c, Func Offset: 0xec
	// Line 940, Address: 0x189b10, Func Offset: 0xf0
	// Line 942, Address: 0x189b20, Func Offset: 0x100
	// Line 943, Address: 0x189b38, Func Offset: 0x118
	// Line 944, Address: 0x189b40, Func Offset: 0x120
	// Line 943, Address: 0x189b44, Func Offset: 0x124
	// Line 944, Address: 0x189b60, Func Offset: 0x140
	// Line 946, Address: 0x189b88, Func Offset: 0x168
	// Func End, Address: 0x189ba8, Func Offset: 0x188
}

// 
// Start address: 0x189bb0
void EnemyClPartChangeType(sfObj* obj, int part_n, EnemyClTargetType type)
{
	EnemyCollision* pec;
	int kind;
	// Line 970, Address: 0x189bb0, Func Offset: 0
	// Line 974, Address: 0x189bc4, Func Offset: 0x14
	// Line 975, Address: 0x189bcc, Func Offset: 0x1c
	// Line 976, Address: 0x189be8, Func Offset: 0x38
	// Line 977, Address: 0x189c08, Func Offset: 0x58
	// Line 979, Address: 0x189c10, Func Offset: 0x60
	// Line 980, Address: 0x189c28, Func Offset: 0x78
	// Line 981, Address: 0x189c2c, Func Offset: 0x7c
	// Line 982, Address: 0x189c30, Func Offset: 0x80
	// Line 983, Address: 0x189c48, Func Offset: 0x98
	// Line 984, Address: 0x189c4c, Func Offset: 0x9c
	// Line 985, Address: 0x189c50, Func Offset: 0xa0
	// Line 986, Address: 0x189c60, Func Offset: 0xb0
	// Func End, Address: 0x189c74, Func Offset: 0xc4
}

// 
// Start address: 0x189c80
void EnemyClPartTransSphereCenter(sfObj* obj, int part_n, float* center)
{
	EnemyCollision* pec;
	sfCldPart* pp;
	sfCldBody* pcb;
	// Line 995, Address: 0x189c80, Func Offset: 0
	// Line 999, Address: 0x189c94, Func Offset: 0x14
	// Line 1000, Address: 0x189c9c, Func Offset: 0x1c
	// Line 1001, Address: 0x189cbc, Func Offset: 0x3c
	// Line 1002, Address: 0x189cd8, Func Offset: 0x58
	// Line 1003, Address: 0x189ce0, Func Offset: 0x60
	// Line 1004, Address: 0x189cf4, Func Offset: 0x74
	// Line 1005, Address: 0x189d08, Func Offset: 0x88
	// Line 1006, Address: 0x189d10, Func Offset: 0x90
	// Line 1007, Address: 0x189d24, Func Offset: 0xa4
	// Line 1008, Address: 0x189d28, Func Offset: 0xa8
	// Line 1009, Address: 0x189d30, Func Offset: 0xb0
	// Func End, Address: 0x189d44, Func Offset: 0xc4
}

// 
// Start address: 0x189d50
void EnemyClPartChangeRadius(sfObj* obj, int part_n, float radius)
{
	EnemyCollision* pec;
	sfCldBody* pcb;
	// Line 1017, Address: 0x189d50, Func Offset: 0
	// Line 1021, Address: 0x189d6c, Func Offset: 0x1c
	// Line 1022, Address: 0x189d74, Func Offset: 0x24
	// Line 1023, Address: 0x189d90, Func Offset: 0x40
	// Line 1024, Address: 0x189db0, Func Offset: 0x60
	// Line 1028, Address: 0x189db8, Func Offset: 0x68
	// Line 1030, Address: 0x189dfc, Func Offset: 0xac
	// Line 1031, Address: 0x189e10, Func Offset: 0xc0
	// Func End, Address: 0x189e28, Func Offset: 0xd8
}

// 
// Start address: 0x189e30
void EnemyClPartTransferBonesParents(void* work)
{
	EnemyCollision* pec;
	sfCldObject* pco;
	int n;
	int nm;
	sgBone* nparent;
	// Line 1143, Address: 0x189e30, Func Offset: 0
	// Line 1151, Address: 0x189e4c, Func Offset: 0x1c
	// Line 1152, Address: 0x189e50, Func Offset: 0x20
	// Line 1153, Address: 0x189e58, Func Offset: 0x28
	// Line 1154, Address: 0x189e68, Func Offset: 0x38
	// Line 1155, Address: 0x189e88, Func Offset: 0x58
	// Line 1156, Address: 0x189e90, Func Offset: 0x60
	// Line 1157, Address: 0x189e9c, Func Offset: 0x6c
	// Line 1158, Address: 0x189ea4, Func Offset: 0x74
	// Line 1159, Address: 0x189eac, Func Offset: 0x7c
	// Line 1160, Address: 0x189ebc, Func Offset: 0x8c
	// Line 1162, Address: 0x189ec8, Func Offset: 0x98
	// Line 1163, Address: 0x189ed8, Func Offset: 0xa8
	// Func End, Address: 0x189ef8, Func Offset: 0xc8
}

// 
// Start address: 0x189f00
void EnemyClBackupBoneNumber(sfObj* obj)
{
	EnemyCollision* pec;
	sgAnime* panime;
	int i;
	int m;
	int n;
	int nm;
	sgBone** bone_table;
	int* num_table;
	int* pn;
	// Line 1170, Address: 0x189f00, Func Offset: 0
	// Line 1179, Address: 0x189f2c, Func Offset: 0x2c
	// Line 1180, Address: 0x189f38, Func Offset: 0x38
	// Line 1182, Address: 0x189f44, Func Offset: 0x44
	// Line 1184, Address: 0x189f50, Func Offset: 0x50
	// Line 1185, Address: 0x189f68, Func Offset: 0x68
	// Line 1186, Address: 0x189f7c, Func Offset: 0x7c
	// Line 1187, Address: 0x189f88, Func Offset: 0x88
	// Line 1186, Address: 0x189f8c, Func Offset: 0x8c
	// Line 1187, Address: 0x189f90, Func Offset: 0x90
	// Line 1188, Address: 0x189f94, Func Offset: 0x94
	// Line 1189, Address: 0x189fa8, Func Offset: 0xa8
	// Line 1190, Address: 0x189fb8, Func Offset: 0xb8
	// Line 1191, Address: 0x189fc8, Func Offset: 0xc8
	// Line 1193, Address: 0x189fd0, Func Offset: 0xd0
	// Line 1194, Address: 0x189fd4, Func Offset: 0xd4
	// Line 1201, Address: 0x189fe4, Func Offset: 0xe4
	// Line 1196, Address: 0x189fe8, Func Offset: 0xe8
	// Line 1194, Address: 0x189fec, Func Offset: 0xec
	// Line 1195, Address: 0x189ff0, Func Offset: 0xf0
	// Line 1197, Address: 0x18a010, Func Offset: 0x110
	// Line 1198, Address: 0x18a018, Func Offset: 0x118
	// Line 1199, Address: 0x18a024, Func Offset: 0x124
	// Line 1200, Address: 0x18a02c, Func Offset: 0x12c
	// Line 1202, Address: 0x18a034, Func Offset: 0x134
	// Line 1203, Address: 0x18a040, Func Offset: 0x140
	// Line 1204, Address: 0x18a050, Func Offset: 0x150
	// Line 1206, Address: 0x18a05c, Func Offset: 0x15c
	// Line 1208, Address: 0x18a064, Func Offset: 0x164
	// Line 1211, Address: 0x18a078, Func Offset: 0x178
	// Line 1212, Address: 0x18a088, Func Offset: 0x188
	// Line 1213, Address: 0x18a094, Func Offset: 0x194
	// Func End, Address: 0x18a0c8, Func Offset: 0x1c8
}

// 
// Start address: 0x18a0d0
void EnemyClRestoreBoneNumber(sfObj* obj)
{
	EnemyCollision* pec;
	sfCldObject* pco;
	sfCldPart* pcp;
	int n;
	int nm;
	int* num_table;
	int* pn;
	// Line 1220, Address: 0x18a0d0, Func Offset: 0
	// Line 1226, Address: 0x18a0d4, Func Offset: 0x4
	// Line 1220, Address: 0x18a0d8, Func Offset: 0x8
	// Line 1226, Address: 0x18a0f8, Func Offset: 0x28
	// Line 1227, Address: 0x18a0fc, Func Offset: 0x2c
	// Line 1228, Address: 0x18a104, Func Offset: 0x34
	// Line 1231, Address: 0x18a10c, Func Offset: 0x3c
	// Line 1229, Address: 0x18a110, Func Offset: 0x40
	// Line 1230, Address: 0x18a114, Func Offset: 0x44
	// Line 1231, Address: 0x18a118, Func Offset: 0x48
	// Line 1232, Address: 0x18a124, Func Offset: 0x54
	// Line 1233, Address: 0x18a128, Func Offset: 0x58
	// Line 1234, Address: 0x18a130, Func Offset: 0x60
	// Line 1235, Address: 0x18a140, Func Offset: 0x70
	// Line 1236, Address: 0x18a168, Func Offset: 0x98
	// Line 1237, Address: 0x18a170, Func Offset: 0xa0
	// Line 1240, Address: 0x18a188, Func Offset: 0xb8
	// Line 1241, Address: 0x18a19c, Func Offset: 0xcc
	// Line 1242, Address: 0x18a1a8, Func Offset: 0xd8
	// Line 1243, Address: 0x18a1b0, Func Offset: 0xe0
	// Func End, Address: 0x18a1d8, Func Offset: 0x108
}

// 
// Start address: 0x18a1e0
int EnemyClCheckLastCollideMap(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1250, Address: 0x18a1e0, Func Offset: 0
	// Line 1252, Address: 0x18a1e8, Func Offset: 0x8
	// Line 1253, Address: 0x18a1f0, Func Offset: 0x10
	// Line 1254, Address: 0x18a1f4, Func Offset: 0x14
	// Line 1253, Address: 0x18a1f8, Func Offset: 0x18
	// Line 1254, Address: 0x18a200, Func Offset: 0x20
	// Func End, Address: 0x18a208, Func Offset: 0x28
}

// 
// Start address: 0x18a210
int EnemyClCheckLastCollideFloor(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1261, Address: 0x18a210, Func Offset: 0
	// Line 1263, Address: 0x18a218, Func Offset: 0x8
	// Line 1264, Address: 0x18a220, Func Offset: 0x10
	// Line 1265, Address: 0x18a224, Func Offset: 0x14
	// Line 1264, Address: 0x18a228, Func Offset: 0x18
	// Line 1265, Address: 0x18a230, Func Offset: 0x20
	// Func End, Address: 0x18a238, Func Offset: 0x28
}

// 
// Start address: 0x18a240
int EnemyClCheckLastCollideChara(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1272, Address: 0x18a240, Func Offset: 0
	// Line 1274, Address: 0x18a248, Func Offset: 0x8
	// Line 1275, Address: 0x18a250, Func Offset: 0x10
	// Line 1276, Address: 0x18a254, Func Offset: 0x14
	// Line 1275, Address: 0x18a258, Func Offset: 0x18
	// Line 1276, Address: 0x18a260, Func Offset: 0x20
	// Func End, Address: 0x18a268, Func Offset: 0x28
}

// 
// Start address: 0x18a270
int EnemyClCheckLastCollidePlayer(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1283, Address: 0x18a270, Func Offset: 0
	// Line 1285, Address: 0x18a278, Func Offset: 0x8
	// Line 1286, Address: 0x18a280, Func Offset: 0x10
	// Line 1287, Address: 0x18a284, Func Offset: 0x14
	// Line 1286, Address: 0x18a288, Func Offset: 0x18
	// Line 1287, Address: 0x18a290, Func Offset: 0x20
	// Func End, Address: 0x18a298, Func Offset: 0x28
}

// 
// Start address: 0x18a2a0
int EnemyEDClCheckLastCollidePlayer(void* obj)
{
	// Line 1295, Address: 0x18a2a0, Func Offset: 0
	// Func End, Address: 0x18a2a8, Func Offset: 0x8
}

// 
// Start address: 0x18a2b0
void EnemyClGetMove(sfObj* obj, float* move)
{
	EnemyCollision* pec;
	// Line 1315, Address: 0x18a2b0, Func Offset: 0
	// Line 1317, Address: 0x18a2bc, Func Offset: 0xc
	// Line 1318, Address: 0x18a2c4, Func Offset: 0x14
	// Line 1319, Address: 0x18a2cc, Func Offset: 0x1c
	// Line 1320, Address: 0x18a2e4, Func Offset: 0x34
	// Line 1321, Address: 0x18a2f0, Func Offset: 0x40
	// Line 1322, Address: 0x18a2f4, Func Offset: 0x44
	// Line 1323, Address: 0x18a2f8, Func Offset: 0x48
	// Func End, Address: 0x18a308, Func Offset: 0x58
}

// 
// Start address: 0x18a310
void EnemyClAddMove(sfObj* obj, float* move)
{
	EnemyCollision* pec;
	float vec[4];
	// Line 1332, Address: 0x18a310, Func Offset: 0
	// Line 1335, Address: 0x18a328, Func Offset: 0x18
	// Line 1336, Address: 0x18a334, Func Offset: 0x24
	// Line 1337, Address: 0x18a33c, Func Offset: 0x2c
	// Line 1338, Address: 0x18a364, Func Offset: 0x54
	// Line 1339, Address: 0x18a394, Func Offset: 0x84
	// Line 1340, Address: 0x18a398, Func Offset: 0x88
	// Func End, Address: 0x18a3b0, Func Offset: 0xa0
}

// 
// Start address: 0x18a3b0
void EnemyClAddMoveDirect(sfObj* obj, float* move)
{
	EnemyCollision* pec;
	// Line 1349, Address: 0x18a3b0, Func Offset: 0
	// Line 1351, Address: 0x18a3bc, Func Offset: 0xc
	// Line 1352, Address: 0x18a3c4, Func Offset: 0x14
	// Line 1353, Address: 0x18a3cc, Func Offset: 0x1c
	// Line 1354, Address: 0x18a3fc, Func Offset: 0x4c
	// Line 1355, Address: 0x18a400, Func Offset: 0x50
	// Func End, Address: 0x18a410, Func Offset: 0x60
}

// 
// Start address: 0x18a410
int EnemyClLimitMove(sfObj* obj, float* pos, _anon6* limit)
{
	EnemyCollision* pec;
	int i;
	int f;
	float d;
	float p;
	// Line 1364, Address: 0x18a410, Func Offset: 0
	// Line 1368, Address: 0x18a424, Func Offset: 0x14
	// Line 1369, Address: 0x18a42c, Func Offset: 0x1c
	// Line 1370, Address: 0x18a440, Func Offset: 0x30
	// Line 1371, Address: 0x18a444, Func Offset: 0x34
	// Line 1379, Address: 0x18a448, Func Offset: 0x38
	// Line 1371, Address: 0x18a44c, Func Offset: 0x3c
	// Line 1372, Address: 0x18a450, Func Offset: 0x40
	// Line 1373, Address: 0x18a458, Func Offset: 0x48
	// Line 1372, Address: 0x18a45c, Func Offset: 0x4c
	// Line 1373, Address: 0x18a460, Func Offset: 0x50
	// Line 1374, Address: 0x18a464, Func Offset: 0x54
	// Line 1375, Address: 0x18a470, Func Offset: 0x60
	// Line 1376, Address: 0x18a474, Func Offset: 0x64
	// Line 1375, Address: 0x18a478, Func Offset: 0x68
	// Line 1377, Address: 0x18a47c, Func Offset: 0x6c
	// Line 1378, Address: 0x18a480, Func Offset: 0x70
	// Line 1379, Address: 0x18a488, Func Offset: 0x78
	// Line 1380, Address: 0x18a494, Func Offset: 0x84
	// Line 1381, Address: 0x18a498, Func Offset: 0x88
	// Line 1380, Address: 0x18a49c, Func Offset: 0x8c
	// Line 1383, Address: 0x18a4a4, Func Offset: 0x94
	// Line 1381, Address: 0x18a4b0, Func Offset: 0xa0
	// Line 1383, Address: 0x18a4b8, Func Offset: 0xa8
	// Line 1384, Address: 0x18a4c0, Func Offset: 0xb0
	// Line 1385, Address: 0x18a4c8, Func Offset: 0xb8
	// Func End, Address: 0x18a4dc, Func Offset: 0xcc
}

// 
// Start address: 0x18a4e0
void EnemyClMoveBalanceByFloor(sfObj* obj, float h_range, float v_range)
{
	EnemyCollision* pec;
	float* pos;
	float* rot;
	float fvec[4];
	float dnom[4];
	float dvec[4];
	float vec[4];
	float trot[4];
	_anon3 line;
	_anon0* poly;
	_anon1 plane1;
	_anon1 plane2;
	float d1;
	float d2;
	// Line 1393, Address: 0x18a4e0, Func Offset: 0
	// Line 1403, Address: 0x18a504, Func Offset: 0x24
	// Line 1404, Address: 0x18a510, Func Offset: 0x30
	// Line 1405, Address: 0x18a518, Func Offset: 0x38
	// Line 1406, Address: 0x18a524, Func Offset: 0x44
	// Line 1409, Address: 0x18a534, Func Offset: 0x54
	// Line 1410, Address: 0x18a540, Func Offset: 0x60
	// Line 1411, Address: 0x18a54c, Func Offset: 0x6c
	// Line 1412, Address: 0x18a56c, Func Offset: 0x8c
	// Line 1413, Address: 0x18a578, Func Offset: 0x98
	// Line 1415, Address: 0x18a59c, Func Offset: 0xbc
	// Line 1416, Address: 0x18a5a8, Func Offset: 0xc8
	// Line 1417, Address: 0x18a5c4, Func Offset: 0xe4
	// Line 1418, Address: 0x18a5d0, Func Offset: 0xf0
	// Line 1419, Address: 0x18a5d8, Func Offset: 0xf8
	// Line 1420, Address: 0x18a5e8, Func Offset: 0x108
	// Line 1421, Address: 0x18a608, Func Offset: 0x128
	// Line 1422, Address: 0x18a614, Func Offset: 0x134
	// Line 1425, Address: 0x18a61c, Func Offset: 0x13c
	// Line 1426, Address: 0x18a620, Func Offset: 0x140
	// Line 1427, Address: 0x18a628, Func Offset: 0x148
	// Line 1431, Address: 0x18a668, Func Offset: 0x188
	// Line 1432, Address: 0x18a670, Func Offset: 0x190
	// Line 1433, Address: 0x18a68c, Func Offset: 0x1ac
	// Line 1434, Address: 0x18a698, Func Offset: 0x1b8
	// Line 1435, Address: 0x18a6a0, Func Offset: 0x1c0
	// Line 1436, Address: 0x18a6b0, Func Offset: 0x1d0
	// Line 1437, Address: 0x18a6d0, Func Offset: 0x1f0
	// Line 1438, Address: 0x18a6dc, Func Offset: 0x1fc
	// Line 1441, Address: 0x18a6e4, Func Offset: 0x204
	// Line 1442, Address: 0x18a6e8, Func Offset: 0x208
	// Line 1443, Address: 0x18a6f0, Func Offset: 0x210
	// Line 1447, Address: 0x18a730, Func Offset: 0x250
	// Line 1450, Address: 0x18a76c, Func Offset: 0x28c
	// Line 1451, Address: 0x18a778, Func Offset: 0x298
	// Line 1452, Address: 0x18a780, Func Offset: 0x2a0
	// Line 1453, Address: 0x18a788, Func Offset: 0x2a8
	// Line 1455, Address: 0x18a798, Func Offset: 0x2b8
	// Line 1456, Address: 0x18a7a4, Func Offset: 0x2c4
	// Line 1457, Address: 0x18a7b4, Func Offset: 0x2d4
	// Line 1458, Address: 0x18a7cc, Func Offset: 0x2ec
	// Line 1459, Address: 0x18a7d8, Func Offset: 0x2f8
	// Line 1460, Address: 0x18a7e8, Func Offset: 0x308
	// Line 1461, Address: 0x18a7ec, Func Offset: 0x30c
	// Line 1460, Address: 0x18a7f8, Func Offset: 0x318
	// Line 1461, Address: 0x18a80c, Func Offset: 0x32c
	// Line 1462, Address: 0x18a814, Func Offset: 0x334
	// Line 1463, Address: 0x18a82c, Func Offset: 0x34c
	// Func End, Address: 0x18a850, Func Offset: 0x370
}

// 
// Start address: 0x18a850
void EnemyClMoveForce(sfObj* obj)
{
	EnemyCollision* pec;
	float pos[4];
	// Line 1471, Address: 0x18a850, Func Offset: 0
	// Line 1474, Address: 0x18a860, Func Offset: 0x10
	// Line 1475, Address: 0x18a86c, Func Offset: 0x1c
	// Line 1476, Address: 0x18a874, Func Offset: 0x24
	// Line 1477, Address: 0x18a87c, Func Offset: 0x2c
	// Line 1478, Address: 0x18a880, Func Offset: 0x30
	// Line 1477, Address: 0x18a884, Func Offset: 0x34
	// Line 1478, Address: 0x18a888, Func Offset: 0x38
	// Line 1477, Address: 0x18a88c, Func Offset: 0x3c
	// Line 1478, Address: 0x18a8b0, Func Offset: 0x60
	// Line 1479, Address: 0x18a8b8, Func Offset: 0x68
	// Line 1480, Address: 0x18a8bc, Func Offset: 0x6c
	// Line 1479, Address: 0x18a8c0, Func Offset: 0x70
	// Line 1480, Address: 0x18a8c8, Func Offset: 0x78
	// Line 1481, Address: 0x18a8cc, Func Offset: 0x7c
	// Line 1482, Address: 0x18a8d0, Func Offset: 0x80
	// Func End, Address: 0x18a8e4, Func Offset: 0x94
}

// 
// Start address: 0x18a8f0
void EnemyClIgnorePlayer()
{
	// Line 1490, Address: 0x18a8f0, Func Offset: 0
	// Line 1491, Address: 0x18a8f8, Func Offset: 0x8
	// Func End, Address: 0x18a900, Func Offset: 0x10
}

// 
// Start address: 0x18a900
void EnemyClExistPlayer()
{
	// Line 1499, Address: 0x18a900, Func Offset: 0
	// Line 1500, Address: 0x18a904, Func Offset: 0x4
	// Func End, Address: 0x18a90c, Func Offset: 0xc
}

// 
// Start address: 0x18a910
void EnemyClIgnorePlayerMove(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1507, Address: 0x18a910, Func Offset: 0
	// Line 1509, Address: 0x18a918, Func Offset: 0x8
	// Line 1510, Address: 0x18a920, Func Offset: 0x10
	// Line 1511, Address: 0x18a928, Func Offset: 0x18
	// Line 1512, Address: 0x18a92c, Func Offset: 0x1c
	// Line 1513, Address: 0x18a930, Func Offset: 0x20
	// Func End, Address: 0x18a93c, Func Offset: 0x2c
}

// 
// Start address: 0x18a940
void EnemyClExistPlayerMove(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1520, Address: 0x18a940, Func Offset: 0
	// Line 1522, Address: 0x18a948, Func Offset: 0x8
	// Line 1523, Address: 0x18a950, Func Offset: 0x10
	// Line 1524, Address: 0x18a958, Func Offset: 0x18
	// Line 1525, Address: 0x18a95c, Func Offset: 0x1c
	// Line 1526, Address: 0x18a960, Func Offset: 0x20
	// Func End, Address: 0x18a96c, Func Offset: 0x2c
}

// 
// Start address: 0x18a970
void entry_data(EnemyCollision* pec)
{
	EnemyCollision* ppec;
	// Line 1534, Address: 0x18a970, Func Offset: 0
	// Line 1535, Address: 0x18a978, Func Offset: 0x8
	// Line 1536, Address: 0x18a984, Func Offset: 0x14
	// Line 1537, Address: 0x18a990, Func Offset: 0x20
	// Line 1538, Address: 0x18a998, Func Offset: 0x28
	// Line 1540, Address: 0x18a9b0, Func Offset: 0x40
	// Line 1541, Address: 0x18a9b8, Func Offset: 0x48
	// Line 1543, Address: 0x18a9c0, Func Offset: 0x50
	// Line 1544, Address: 0x18a9d4, Func Offset: 0x64
	// Line 1546, Address: 0x18a9d8, Func Offset: 0x68
	// Func End, Address: 0x18a9e0, Func Offset: 0x70
}

// 
// Start address: 0x18a9e0
void set_target(sfObj* obj)
{
	EnemyCollision* pec;
	EnemyClHitResult* cres;
	sfCldPart* pp;
	sfCldBody* pcb;
	float tpos[4];
	float cpos[4];
	float h;
	// Line 1552, Address: 0x18a9e0, Func Offset: 0
	// Line 1559, Address: 0x18a9e4, Func Offset: 0x4
	// Line 1552, Address: 0x18a9e8, Func Offset: 0x8
	// Line 1559, Address: 0x18a9f8, Func Offset: 0x18
	// Line 1562, Address: 0x18aa08, Func Offset: 0x28
	// Line 1563, Address: 0x18aa10, Func Offset: 0x30
	// Line 1564, Address: 0x18aa30, Func Offset: 0x50
	// Line 1565, Address: 0x18aa50, Func Offset: 0x70
	// Line 1566, Address: 0x18aa58, Func Offset: 0x78
	// Line 1567, Address: 0x18aa6c, Func Offset: 0x8c
	// Line 1568, Address: 0x18aa7c, Func Offset: 0x9c
	// Line 1569, Address: 0x18aa88, Func Offset: 0xa8
	// Line 1570, Address: 0x18aa94, Func Offset: 0xb4
	// Line 1571, Address: 0x18aaa8, Func Offset: 0xc8
	// Line 1572, Address: 0x18aab4, Func Offset: 0xd4
	// Line 1573, Address: 0x18aacc, Func Offset: 0xec
	// Line 1574, Address: 0x18aad4, Func Offset: 0xf4
	// Line 1576, Address: 0x18aae0, Func Offset: 0x100
	// Line 1577, Address: 0x18aaec, Func Offset: 0x10c
	// Line 1578, Address: 0x18aaf8, Func Offset: 0x118
	// Line 1579, Address: 0x18ab00, Func Offset: 0x120
	// Func End, Address: 0x18ab18, Func Offset: 0x138
}

// 
// Start address: 0x18ab20
void EnemyClExecMove(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1585, Address: 0x18ab20, Func Offset: 0
	// Line 1587, Address: 0x18ab2c, Func Offset: 0xc
	// Line 1588, Address: 0x18ab38, Func Offset: 0x18
	// Line 1592, Address: 0x18ab40, Func Offset: 0x20
	// Line 1593, Address: 0x18ab48, Func Offset: 0x28
	// Line 1594, Address: 0x18ab50, Func Offset: 0x30
	// Line 1595, Address: 0x18ab58, Func Offset: 0x38
	// Func End, Address: 0x18ab68, Func Offset: 0x48
}

// 
// Start address: 0x18ab70
void EnemyClExecMoveCenter(sfObj* obj)
{
	EnemyCollision* pec;
	// Line 1601, Address: 0x18ab70, Func Offset: 0
	// Line 1603, Address: 0x18ab80, Func Offset: 0x10
	// Line 1604, Address: 0x18ab8c, Func Offset: 0x1c
	// Line 1608, Address: 0x18ab94, Func Offset: 0x24
	// Line 1609, Address: 0x18ab9c, Func Offset: 0x2c
	// Line 1610, Address: 0x18aba4, Func Offset: 0x34
	// Line 1611, Address: 0x18abac, Func Offset: 0x3c
	// Line 1612, Address: 0x18abb4, Func Offset: 0x44
	// Func End, Address: 0x18abcc, Func Offset: 0x5c
}

// 
// Start address: 0x18abd0
EnemyClHitResult* check_cache(_anon3* line, int type)
{
	int i;
	EnemyClMapHitCache* pmhc;
	EnemyClHitResult* pres;
	float vec[4];
	// Line 1627, Address: 0x18abd0, Func Offset: 0
	// Line 1620, Address: 0x18abd4, Func Offset: 0x4
	// Line 1626, Address: 0x18abd8, Func Offset: 0x8
	// Line 1625, Address: 0x18abdc, Func Offset: 0xc
	// Line 1627, Address: 0x18abe0, Func Offset: 0x10
	// Line 1626, Address: 0x18abe4, Func Offset: 0x14
	// Line 1627, Address: 0x18abe8, Func Offset: 0x18
	// Line 1628, Address: 0x18abf8, Func Offset: 0x28
	// Line 1629, Address: 0x18ac10, Func Offset: 0x40
	// Line 1630, Address: 0x18ac24, Func Offset: 0x54
	// Line 1631, Address: 0x18ac48, Func Offset: 0x78
	// Line 1632, Address: 0x18ac60, Func Offset: 0x90
	// Line 1633, Address: 0x18ac84, Func Offset: 0xb4
	// Line 1635, Address: 0x18ac88, Func Offset: 0xb8
	// Line 1639, Address: 0x18ac90, Func Offset: 0xc0
	// Line 1640, Address: 0x18aca8, Func Offset: 0xd8
	// Line 1642, Address: 0x18acb0, Func Offset: 0xe0
	// Line 1641, Address: 0x18acb4, Func Offset: 0xe4
	// Line 1642, Address: 0x18acb8, Func Offset: 0xe8
	// Line 1643, Address: 0x18acc0, Func Offset: 0xf0
	// Line 1644, Address: 0x18accc, Func Offset: 0xfc
	// Line 1646, Address: 0x18acd4, Func Offset: 0x104
	// Line 1647, Address: 0x18ace0, Func Offset: 0x110
	// Line 1650, Address: 0x18ace8, Func Offset: 0x118
	// Line 1651, Address: 0x18acfc, Func Offset: 0x12c
	// Line 1653, Address: 0x18ad00, Func Offset: 0x130
	// Func End, Address: 0x18ad08, Func Offset: 0x138
}

// 
// Start address: 0x18ad10
void set_cache(_anon3* line, EnemyClHitResult* res, int type)
{
	int i;
	int m;
	EnemyClMapHitCache* pmhc;
	EnemyClMapHitCache* ptmhc;
	// Line 1661, Address: 0x18ad10, Func Offset: 0
	// Line 1664, Address: 0x18ad20, Func Offset: 0x10
	// Line 1666, Address: 0x18ad30, Func Offset: 0x20
	// Line 1665, Address: 0x18ad34, Func Offset: 0x24
	// Line 1667, Address: 0x18ad38, Func Offset: 0x28
	// Line 1668, Address: 0x18ad3c, Func Offset: 0x2c
	// Line 1669, Address: 0x18ad44, Func Offset: 0x34
	// Line 1671, Address: 0x18ad4c, Func Offset: 0x3c
	// Line 1672, Address: 0x18ad54, Func Offset: 0x44
	// Line 1673, Address: 0x18ad58, Func Offset: 0x48
	// Line 1674, Address: 0x18ad64, Func Offset: 0x54
	// Line 1675, Address: 0x18ad68, Func Offset: 0x58
	// Line 1677, Address: 0x18ad6c, Func Offset: 0x5c
	// Line 1679, Address: 0x18ad80, Func Offset: 0x70
	// Line 1680, Address: 0x18ad88, Func Offset: 0x78
	// Line 1688, Address: 0x18ad8c, Func Offset: 0x7c
	// Line 1680, Address: 0x18ad90, Func Offset: 0x80
	// Line 1681, Address: 0x18ada4, Func Offset: 0x94
	// Line 1682, Address: 0x18adac, Func Offset: 0x9c
	// Line 1683, Address: 0x18adb4, Func Offset: 0xa4
	// Line 1684, Address: 0x18adbc, Func Offset: 0xac
	// Line 1685, Address: 0x18adc4, Func Offset: 0xb4
	// Line 1686, Address: 0x18adcc, Func Offset: 0xbc
	// Line 1687, Address: 0x18add4, Func Offset: 0xc4
	// Line 1688, Address: 0x18add8, Func Offset: 0xc8
	// Line 1689, Address: 0x18addc, Func Offset: 0xcc
	// Func End, Address: 0x18adec, Func Offset: 0xdc
}

// 
// Start address: 0x18adf0
float plane_dist(_anon1* plane, float* pos)
{
	float r;
	// Line 1740, Address: 0x18adf0, Func Offset: 0
	// Line 1741, Address: 0x18adf4, Func Offset: 0x4
	// Line 1742, Address: 0x18adf8, Func Offset: 0x8
	// Line 1743, Address: 0x18adfc, Func Offset: 0xc
	// Line 1744, Address: 0x18ae00, Func Offset: 0x10
	// Line 1745, Address: 0x18ae04, Func Offset: 0x14
	// Line 1746, Address: 0x18ae08, Func Offset: 0x18
	// Line 1747, Address: 0x18ae0c, Func Offset: 0x1c
	// Line 1748, Address: 0x18ae10, Func Offset: 0x20
	// Line 1754, Address: 0x18ae14, Func Offset: 0x24
	// Func End, Address: 0x18ae1c, Func Offset: 0x2c
}

// 
// Start address: 0x18ae20
float get_cross_point(_anon0* pp, float* vertex, float* pos)
{
	int i;
	int m;
	float d;
	float dm;
	float* cp;
	float* vtx1;
	float* vtx2;
	_anon0* tpp;
	// Line 1764, Address: 0x18ae20, Func Offset: 0
	// Line 1770, Address: 0x18ae24, Func Offset: 0x4
	// Line 1764, Address: 0x18ae28, Func Offset: 0x8
	// Line 1770, Address: 0x18ae50, Func Offset: 0x30
	// Line 1771, Address: 0x18ae6c, Func Offset: 0x4c
	// Line 1772, Address: 0x18aee0, Func Offset: 0xc0
	// Line 1773, Address: 0x18aee8, Func Offset: 0xc8
	// Line 1776, Address: 0x18af08, Func Offset: 0xe8
	// Line 1777, Address: 0x18af20, Func Offset: 0x100
	// Line 1778, Address: 0x18af28, Func Offset: 0x108
	// Line 1779, Address: 0x18af38, Func Offset: 0x118
	// Line 1780, Address: 0x18af44, Func Offset: 0x124
	// Line 1781, Address: 0x18af48, Func Offset: 0x128
	// Line 1784, Address: 0x18af50, Func Offset: 0x130
	// Line 1785, Address: 0x18af60, Func Offset: 0x140
	// Line 1787, Address: 0x18af68, Func Offset: 0x148
	// Line 1785, Address: 0x18af6c, Func Offset: 0x14c
	// Line 1786, Address: 0x18af80, Func Offset: 0x160
	// Line 1788, Address: 0x18af94, Func Offset: 0x174
	// Func End, Address: 0x18afc0, Func Offset: 0x1a0
}

// 
// Start address: 0x18afc0
void get_graze_push(EnClColis* pecc, _anon4* psp)
{
	float nom[4];
	float vec[4];
	float d;
	// Line 1795, Address: 0x18afc0, Func Offset: 0
	// Line 1798, Address: 0x18afd4, Func Offset: 0x14
	// Line 1799, Address: 0x18afe8, Func Offset: 0x28
	// Line 1800, Address: 0x18b000, Func Offset: 0x40
	// Line 1801, Address: 0x18b028, Func Offset: 0x68
	// Line 1802, Address: 0x18b048, Func Offset: 0x88
	// Line 1803, Address: 0x18b06c, Func Offset: 0xac
	// Line 1804, Address: 0x18b074, Func Offset: 0xb4
	// Line 1803, Address: 0x18b078, Func Offset: 0xb8
	// Line 1804, Address: 0x18b088, Func Offset: 0xc8
	// Line 1805, Address: 0x18b090, Func Offset: 0xd0
	// Func End, Address: 0x18b0a4, Func Offset: 0xe4
}

// 
// Start address: 0x18b0b0
void get_polydata(EnClColis* pecc, _anon0* pp, _anon4* psp)
{
	_anon3* line;
	float* cpos;
	float* vec;
	_anon0* tpp;
	// Line 1814, Address: 0x18b0b0, Func Offset: 0
	// Line 1818, Address: 0x18b0b4, Func Offset: 0x4
	// Line 1814, Address: 0x18b0b8, Func Offset: 0x8
	// Line 1818, Address: 0x18b0dc, Func Offset: 0x2c
	// Line 1819, Address: 0x18b0f4, Func Offset: 0x44
	// Line 1818, Address: 0x18b0f8, Func Offset: 0x48
	// Line 1821, Address: 0x18b0fc, Func Offset: 0x4c
	// Line 1822, Address: 0x18b100, Func Offset: 0x50
	// Line 1823, Address: 0x18b170, Func Offset: 0xc0
	// Line 1824, Address: 0x18b17c, Func Offset: 0xcc
	// Line 1825, Address: 0x18b188, Func Offset: 0xd8
	// Line 1827, Address: 0x18b1a0, Func Offset: 0xf0
	// Line 1829, Address: 0x18b1a8, Func Offset: 0xf8
	// Line 1830, Address: 0x18b1cc, Func Offset: 0x11c
	// Line 1831, Address: 0x18b1d4, Func Offset: 0x124
	// Line 1832, Address: 0x18b1ec, Func Offset: 0x13c
	// Line 1834, Address: 0x18b204, Func Offset: 0x154
	// Line 1835, Address: 0x18b228, Func Offset: 0x178
	// Line 1836, Address: 0x18b23c, Func Offset: 0x18c
	// Line 1837, Address: 0x18b244, Func Offset: 0x194
	// Line 1838, Address: 0x18b248, Func Offset: 0x198
	// Line 1840, Address: 0x18b250, Func Offset: 0x1a0
	// Line 1839, Address: 0x18b254, Func Offset: 0x1a4
	// Line 1840, Address: 0x18b264, Func Offset: 0x1b4
	// Line 1842, Address: 0x18b268, Func Offset: 0x1b8
	// Line 1843, Address: 0x18b284, Func Offset: 0x1d4
	// Line 1844, Address: 0x18b298, Func Offset: 0x1e8
	// Func End, Address: 0x18b2bc, Func Offset: 0x20c
}

// 
// Start address: 0x18b2c0
void collide_nearest_poly(EnClColis* pecc, int npolys, _anon4* psp, float* move, _anon0** ppoly, int pcount)
{
	_anon0* pp;
	EnClColis* ecc;
	int i;
	int j;
	int t;
	float d;
	float dn;
	float dnd;
	// Line 1857, Address: 0x18b2c0, Func Offset: 0
	// Line 1862, Address: 0x18b2c4, Func Offset: 0x4
	// Line 1857, Address: 0x18b2c8, Func Offset: 0x8
	// Line 1863, Address: 0x18b2cc, Func Offset: 0xc
	// Line 1857, Address: 0x18b2d0, Func Offset: 0x10
	// Line 1862, Address: 0x18b310, Func Offset: 0x50
	// Line 1863, Address: 0x18b314, Func Offset: 0x54
	// Line 1864, Address: 0x18b31c, Func Offset: 0x5c
	// Line 1865, Address: 0x18b320, Func Offset: 0x60
	// Line 1866, Address: 0x18b324, Func Offset: 0x64
	// Line 1867, Address: 0x18b32c, Func Offset: 0x6c
	// Line 1868, Address: 0x18b338, Func Offset: 0x78
	// Line 1869, Address: 0x18b344, Func Offset: 0x84
	// Line 1870, Address: 0x18b350, Func Offset: 0x90
	// Line 1871, Address: 0x18b368, Func Offset: 0xa8
	// Line 1872, Address: 0x18b380, Func Offset: 0xc0
	// Line 1873, Address: 0x18b38c, Func Offset: 0xcc
	// Line 1874, Address: 0x18b408, Func Offset: 0x148
	// Line 1875, Address: 0x18b418, Func Offset: 0x158
	// Line 1876, Address: 0x18b4b8, Func Offset: 0x1f8
	// Line 1877, Address: 0x18b4d8, Func Offset: 0x218
	// Line 1879, Address: 0x18b500, Func Offset: 0x240
	// Line 1883, Address: 0x18b548, Func Offset: 0x288
	// Line 1882, Address: 0x18b54c, Func Offset: 0x28c
	// Line 1883, Address: 0x18b550, Func Offset: 0x290
	// Line 1881, Address: 0x18b558, Func Offset: 0x298
	// Line 1883, Address: 0x18b55c, Func Offset: 0x29c
	// Line 1885, Address: 0x18b564, Func Offset: 0x2a4
	// Line 1886, Address: 0x18b56c, Func Offset: 0x2ac
	// Line 1887, Address: 0x18b570, Func Offset: 0x2b0
	// Line 1891, Address: 0x18b5c0, Func Offset: 0x300
	// Line 1890, Address: 0x18b5c4, Func Offset: 0x304
	// Line 1891, Address: 0x18b5c8, Func Offset: 0x308
	// Line 1889, Address: 0x18b5d0, Func Offset: 0x310
	// Line 1891, Address: 0x18b5d4, Func Offset: 0x314
	// Line 1895, Address: 0x18b5e0, Func Offset: 0x320
	// Line 1907, Address: 0x18b5f4, Func Offset: 0x334
	// Line 1908, Address: 0x18b604, Func Offset: 0x344
	// Line 1910, Address: 0x18b610, Func Offset: 0x350
	// Func End, Address: 0x18b648, Func Offset: 0x388
}

// 
// Start address: 0x18b650
int hit_test_map(float* pos, float radius, float* move, _anon0** ppoly, int pcount)
{
	float vec[4];
	_anon4* sphere;
	int npolys;
	int retv;
	EnClColis* ecc;
	// Line 1922, Address: 0x18b650, Func Offset: 0
	// Line 1928, Address: 0x18b654, Func Offset: 0x4
	// Line 1922, Address: 0x18b658, Func Offset: 0x8
	// Line 1926, Address: 0x18b688, Func Offset: 0x38
	// Line 1928, Address: 0x18b68c, Func Offset: 0x3c
	// Line 1929, Address: 0x18b690, Func Offset: 0x40
	// Line 1930, Address: 0x18b6b0, Func Offset: 0x60
	// Line 1932, Address: 0x18b6b8, Func Offset: 0x68
	// Line 1933, Address: 0x18b6c4, Func Offset: 0x74
	// Line 1943, Address: 0x18b6cc, Func Offset: 0x7c
	// Line 1945, Address: 0x18b6e4, Func Offset: 0x94
	// Line 1947, Address: 0x18b704, Func Offset: 0xb4
	// Line 1948, Address: 0x18b708, Func Offset: 0xb8
	// Line 1953, Address: 0x18b740, Func Offset: 0xf0
	// Line 1954, Address: 0x18b758, Func Offset: 0x108
	// Line 1955, Address: 0x18b760, Func Offset: 0x110
	// Line 1954, Address: 0x18b76c, Func Offset: 0x11c
	// Line 1955, Address: 0x18b774, Func Offset: 0x124
	// Line 1957, Address: 0x18b784, Func Offset: 0x134
	// Line 1958, Address: 0x18b790, Func Offset: 0x140
	// Line 1960, Address: 0x18b794, Func Offset: 0x144
	// Line 1961, Address: 0x18b798, Func Offset: 0x148
	// Line 1962, Address: 0x18b7a0, Func Offset: 0x150
	// Line 1961, Address: 0x18b7a4, Func Offset: 0x154
	// Line 1963, Address: 0x18b7b0, Func Offset: 0x160
	// Func End, Address: 0x18b7d8, Func Offset: 0x188
}

// 
// Start address: 0x18b7e0
int collide_map(EnemyCollision* pec, float* pos, float* move, _anon0** ppoly, int pcount)
{
	int r;
	// Line 1975, Address: 0x18b7e0, Func Offset: 0
	// Line 1979, Address: 0x18b7e8, Func Offset: 0x8
	// Line 1980, Address: 0x18b80c, Func Offset: 0x2c
	// Line 1981, Address: 0x18b81c, Func Offset: 0x3c
	// Line 1982, Address: 0x18b82c, Func Offset: 0x4c
	// Line 1988, Address: 0x18b868, Func Offset: 0x88
	// Line 1989, Address: 0x18b880, Func Offset: 0xa0
	// Line 1991, Address: 0x18b888, Func Offset: 0xa8
	// Line 1993, Address: 0x18b88c, Func Offset: 0xac
	// Line 1995, Address: 0x18b890, Func Offset: 0xb0
	// Func End, Address: 0x18b89c, Func Offset: 0xbc
}

// 
// Start address: 0x18b8a0
void calc_repel()
{
	// Line 2042, Address: 0x18b8a0, Func Offset: 0
	// Line 2043, Address: 0x18b8a4, Func Offset: 0x4
	// Line 2044, Address: 0x18b8a8, Func Offset: 0x8
	// Line 2045, Address: 0x18b8ac, Func Offset: 0xc
	// Line 2046, Address: 0x18b8b0, Func Offset: 0x10
	// Line 2047, Address: 0x18b8b4, Func Offset: 0x14
	// Line 2048, Address: 0x18b8b8, Func Offset: 0x18
	// Line 2049, Address: 0x18b8bc, Func Offset: 0x1c
	// Line 2050, Address: 0x18b8c0, Func Offset: 0x20
	// Line 2051, Address: 0x18b8c4, Func Offset: 0x24
	// Line 2052, Address: 0x18b8c8, Func Offset: 0x28
	// Line 2053, Address: 0x18b8cc, Func Offset: 0x2c
	// Line 2054, Address: 0x18b8d0, Func Offset: 0x30
	// Line 2055, Address: 0x18b8d4, Func Offset: 0x34
	// Line 2056, Address: 0x18b8d8, Func Offset: 0x38
	// Line 2057, Address: 0x18b8dc, Func Offset: 0x3c
	// Line 2058, Address: 0x18b8e0, Func Offset: 0x40
	// Line 2059, Address: 0x18b8e4, Func Offset: 0x44
	// Line 2060, Address: 0x18b8e8, Func Offset: 0x48
	// Line 2061, Address: 0x18b8ec, Func Offset: 0x4c
	// Line 2062, Address: 0x18b8f0, Func Offset: 0x50
	// Line 2063, Address: 0x18b8f4, Func Offset: 0x54
	// Line 2064, Address: 0x18b8f8, Func Offset: 0x58
	// Line 2065, Address: 0x18b8fc, Func Offset: 0x5c
	// Line 2066, Address: 0x18b900, Func Offset: 0x60
	// Line 2067, Address: 0x18b904, Func Offset: 0x64
	// Line 2068, Address: 0x18b908, Func Offset: 0x68
	// Line 2069, Address: 0x18b90c, Func Offset: 0x6c
	// Line 2070, Address: 0x18b910, Func Offset: 0x70
	// Line 2071, Address: 0x18b914, Func Offset: 0x74
	// Line 2072, Address: 0x18b918, Func Offset: 0x78
	// Line 2073, Address: 0x18b91c, Func Offset: 0x7c
	// Line 2074, Address: 0x18b920, Func Offset: 0x80
	// Line 2075, Address: 0x18b924, Func Offset: 0x84
	// Line 2076, Address: 0x18b928, Func Offset: 0x88
	// Line 2077, Address: 0x18b92c, Func Offset: 0x8c
	// Line 2078, Address: 0x18b930, Func Offset: 0x90
	// Line 2079, Address: 0x18b934, Func Offset: 0x94
	// Line 2080, Address: 0x18b938, Func Offset: 0x98
	// Line 2081, Address: 0x18b93c, Func Offset: 0x9c
	// Line 2082, Address: 0x18b940, Func Offset: 0xa0
	// Line 2083, Address: 0x18b944, Func Offset: 0xa4
	// Line 2084, Address: 0x18b948, Func Offset: 0xa8
	// Line 2085, Address: 0x18b94c, Func Offset: 0xac
	// Line 2086, Address: 0x18b950, Func Offset: 0xb0
	// Line 2087, Address: 0x18b954, Func Offset: 0xb4
	// Line 2088, Address: 0x18b958, Func Offset: 0xb8
	// Line 2089, Address: 0x18b95c, Func Offset: 0xbc
	// Line 2092, Address: 0x18b964, Func Offset: 0xc4
	// Line 2095, Address: 0x18b968, Func Offset: 0xc8
	// Line 2096, Address: 0x18b96c, Func Offset: 0xcc
	// Line 2097, Address: 0x18b970, Func Offset: 0xd0
	// Line 2098, Address: 0x18b974, Func Offset: 0xd4
	// Line 2099, Address: 0x18b978, Func Offset: 0xd8
	// Line 2100, Address: 0x18b97c, Func Offset: 0xdc
	// Func End, Address: 0x18b984, Func Offset: 0xe4
}

// 
// Start address: 0x18b990
void calc_repel_aabb(EnClColisChara* pecc, _anon4* psp, _anon6* paabb, int horizontal)
{
	float* center;
	float* half;
	float* tpos;
	float* vec;
	float d;
	float r;
	int i;
	int t;
	int f;
	// Line 2114, Address: 0x18b990, Func Offset: 0
	// Line 2118, Address: 0x18b994, Func Offset: 0x4
	// Line 2114, Address: 0x18b998, Func Offset: 0x8
	// Line 2122, Address: 0x18b99c, Func Offset: 0xc
	// Line 2114, Address: 0x18b9a0, Func Offset: 0x10
	// Line 2118, Address: 0x18b9c8, Func Offset: 0x38
	// Line 2119, Address: 0x18b9e0, Func Offset: 0x50
	// Line 2118, Address: 0x18b9e4, Func Offset: 0x54
	// Line 2120, Address: 0x18b9e8, Func Offset: 0x58
	// Line 2121, Address: 0x18b9ec, Func Offset: 0x5c
	// Line 2122, Address: 0x18b9f0, Func Offset: 0x60
	// Line 2123, Address: 0x18ba04, Func Offset: 0x74
	// Line 2124, Address: 0x18ba28, Func Offset: 0x98
	// Line 2125, Address: 0x18ba3c, Func Offset: 0xac
	// Line 2126, Address: 0x18ba50, Func Offset: 0xc0
	// Line 2127, Address: 0x18ba7c, Func Offset: 0xec
	// Line 2128, Address: 0x18baa8, Func Offset: 0x118
	// Line 2129, Address: 0x18babc, Func Offset: 0x12c
	// Line 2130, Address: 0x18bac4, Func Offset: 0x134
	// Line 2132, Address: 0x18bac8, Func Offset: 0x138
	// Line 2131, Address: 0x18bacc, Func Offset: 0x13c
	// Line 2132, Address: 0x18bad0, Func Offset: 0x140
	// Line 2133, Address: 0x18bad8, Func Offset: 0x148
	// Line 2134, Address: 0x18baf4, Func Offset: 0x164
	// Line 2133, Address: 0x18baf8, Func Offset: 0x168
	// Line 2134, Address: 0x18bafc, Func Offset: 0x16c
	// Line 2135, Address: 0x18bb10, Func Offset: 0x180
	// Line 2136, Address: 0x18bb14, Func Offset: 0x184
	// Line 2138, Address: 0x18bb18, Func Offset: 0x188
	// Line 2139, Address: 0x18bb2c, Func Offset: 0x19c
	// Line 2140, Address: 0x18bb38, Func Offset: 0x1a8
	// Line 2141, Address: 0x18bb48, Func Offset: 0x1b8
	// Line 2146, Address: 0x18bb70, Func Offset: 0x1e0
	// Line 2149, Address: 0x18bb78, Func Offset: 0x1e8
	// Line 2151, Address: 0x18bb80, Func Offset: 0x1f0
	// Line 2153, Address: 0x18bb84, Func Offset: 0x1f4
	// Line 2154, Address: 0x18bb8c, Func Offset: 0x1fc
	// Line 2155, Address: 0x18bb90, Func Offset: 0x200
	// Line 2156, Address: 0x18bb94, Func Offset: 0x204
	// Line 2157, Address: 0x18bba8, Func Offset: 0x218
	// Line 2158, Address: 0x18bbb0, Func Offset: 0x220
	// Line 2159, Address: 0x18bbbc, Func Offset: 0x22c
	// Line 2160, Address: 0x18bbd4, Func Offset: 0x244
	// Line 2161, Address: 0x18bbdc, Func Offset: 0x24c
	// Line 2162, Address: 0x18bbe0, Func Offset: 0x250
	// Line 2163, Address: 0x18bbf4, Func Offset: 0x264
	// Line 2164, Address: 0x18bbfc, Func Offset: 0x26c
	// Line 2165, Address: 0x18bc08, Func Offset: 0x278
	// Line 2166, Address: 0x18bc20, Func Offset: 0x290
	// Line 2168, Address: 0x18bc28, Func Offset: 0x298
	// Line 2169, Address: 0x18bc3c, Func Offset: 0x2ac
	// Line 2170, Address: 0x18bc44, Func Offset: 0x2b4
	// Line 2171, Address: 0x18bc50, Func Offset: 0x2c0
	// Line 2172, Address: 0x18bc68, Func Offset: 0x2d8
	// Line 2174, Address: 0x18bc70, Func Offset: 0x2e0
	// Line 2175, Address: 0x18bc8c, Func Offset: 0x2fc
	// Line 2176, Address: 0x18bc94, Func Offset: 0x304
	// Line 2179, Address: 0x18bcb0, Func Offset: 0x320
	// Line 2181, Address: 0x18bcbc, Func Offset: 0x32c
	// Line 2180, Address: 0x18bcc0, Func Offset: 0x330
	// Line 2182, Address: 0x18bcc4, Func Offset: 0x334
	// Line 2183, Address: 0x18bcc8, Func Offset: 0x338
	// Line 2184, Address: 0x18bcd0, Func Offset: 0x340
	// Line 2185, Address: 0x18bcd8, Func Offset: 0x348
	// Line 2187, Address: 0x18bce0, Func Offset: 0x350
	// Line 2190, Address: 0x18bcf4, Func Offset: 0x364
	// Line 2191, Address: 0x18bcfc, Func Offset: 0x36c
	// Line 2192, Address: 0x18bd00, Func Offset: 0x370
	// Line 2193, Address: 0x18bd08, Func Offset: 0x378
	// Line 2194, Address: 0x18bd2c, Func Offset: 0x39c
	// Line 2195, Address: 0x18bd44, Func Offset: 0x3b4
	// Line 2196, Address: 0x18bd58, Func Offset: 0x3c8
	// Line 2197, Address: 0x18bd6c, Func Offset: 0x3dc
	// Line 2198, Address: 0x18bd84, Func Offset: 0x3f4
	// Line 2199, Address: 0x18bd88, Func Offset: 0x3f8
	// Line 2200, Address: 0x18bd9c, Func Offset: 0x40c
	// Func End, Address: 0x18bdc4, Func Offset: 0x434
}

// 
// Start address: 0x18bdd0
void calc_repel_obb(EnClColisChara* pecc, _anon4* psp, _anon5* pobb, float* center)
{
	float* tpos;
	float* vec;
	float* cp;
	float inv[4];
	float d;
	float r;
	int i;
	int t;
	int f;
	// Line 2210, Address: 0x18bdd0, Func Offset: 0
	// Line 2215, Address: 0x18bdd4, Func Offset: 0x4
	// Line 2210, Address: 0x18bdd8, Func Offset: 0x8
	// Line 2219, Address: 0x18be04, Func Offset: 0x34
	// Line 2210, Address: 0x18be08, Func Offset: 0x38
	// Line 2215, Address: 0x18be10, Func Offset: 0x40
	// Line 2219, Address: 0x18be28, Func Offset: 0x58
	// Line 2215, Address: 0x18be2c, Func Offset: 0x5c
	// Line 2216, Address: 0x18be30, Func Offset: 0x60
	// Line 2217, Address: 0x18be34, Func Offset: 0x64
	// Line 2219, Address: 0x18be38, Func Offset: 0x68
	// Line 2220, Address: 0x18be40, Func Offset: 0x70
	// Line 2221, Address: 0x18be6c, Func Offset: 0x9c
	// Line 2222, Address: 0x18be98, Func Offset: 0xc8
	// Line 2223, Address: 0x18beac, Func Offset: 0xdc
	// Line 2224, Address: 0x18bed0, Func Offset: 0x100
	// Line 2223, Address: 0x18bed4, Func Offset: 0x104
	// Line 2224, Address: 0x18bedc, Func Offset: 0x10c
	// Line 2225, Address: 0x18bef0, Func Offset: 0x120
	// Line 2227, Address: 0x18bef8, Func Offset: 0x128
	// Line 2228, Address: 0x18befc, Func Offset: 0x12c
	// Line 2229, Address: 0x18bf10, Func Offset: 0x140
	// Line 2230, Address: 0x18bf2c, Func Offset: 0x15c
	// Line 2229, Address: 0x18bf30, Func Offset: 0x160
	// Line 2230, Address: 0x18bf34, Func Offset: 0x164
	// Line 2231, Address: 0x18bf48, Func Offset: 0x178
	// Line 2232, Address: 0x18bf4c, Func Offset: 0x17c
	// Line 2234, Address: 0x18bf50, Func Offset: 0x180
	// Line 2235, Address: 0x18bf64, Func Offset: 0x194
	// Line 2236, Address: 0x18bf70, Func Offset: 0x1a0
	// Line 2235, Address: 0x18bf74, Func Offset: 0x1a4
	// Line 2236, Address: 0x18bf78, Func Offset: 0x1a8
	// Line 2239, Address: 0x18bf9c, Func Offset: 0x1cc
	// Line 2241, Address: 0x18bfa0, Func Offset: 0x1d0
	// Line 2244, Address: 0x18bfa8, Func Offset: 0x1d8
	// Line 2246, Address: 0x18bfb0, Func Offset: 0x1e0
	// Line 2248, Address: 0x18bfb4, Func Offset: 0x1e4
	// Line 2249, Address: 0x18bfbc, Func Offset: 0x1ec
	// Line 2250, Address: 0x18bfc0, Func Offset: 0x1f0
	// Line 2251, Address: 0x18bfc4, Func Offset: 0x1f4
	// Line 2252, Address: 0x18bfd8, Func Offset: 0x208
	// Line 2253, Address: 0x18bfe0, Func Offset: 0x210
	// Line 2254, Address: 0x18bfec, Func Offset: 0x21c
	// Line 2255, Address: 0x18c004, Func Offset: 0x234
	// Line 2256, Address: 0x18c00c, Func Offset: 0x23c
	// Line 2257, Address: 0x18c010, Func Offset: 0x240
	// Line 2258, Address: 0x18c024, Func Offset: 0x254
	// Line 2259, Address: 0x18c02c, Func Offset: 0x25c
	// Line 2260, Address: 0x18c038, Func Offset: 0x268
	// Line 2261, Address: 0x18c050, Func Offset: 0x280
	// Line 2263, Address: 0x18c058, Func Offset: 0x288
	// Line 2264, Address: 0x18c06c, Func Offset: 0x29c
	// Line 2265, Address: 0x18c074, Func Offset: 0x2a4
	// Line 2266, Address: 0x18c080, Func Offset: 0x2b0
	// Line 2267, Address: 0x18c098, Func Offset: 0x2c8
	// Line 2269, Address: 0x18c0a0, Func Offset: 0x2d0
	// Line 2270, Address: 0x18c0bc, Func Offset: 0x2ec
	// Line 2271, Address: 0x18c0c4, Func Offset: 0x2f4
	// Line 2274, Address: 0x18c0e0, Func Offset: 0x310
	// Line 2277, Address: 0x18c0ec, Func Offset: 0x31c
	// Line 2278, Address: 0x18c0f4, Func Offset: 0x324
	// Line 2279, Address: 0x18c104, Func Offset: 0x334
	// Line 2278, Address: 0x18c108, Func Offset: 0x338
	// Line 2279, Address: 0x18c10c, Func Offset: 0x33c
	// Line 2280, Address: 0x18c120, Func Offset: 0x350
	// Line 2281, Address: 0x18c13c, Func Offset: 0x36c
	// Line 2282, Address: 0x18c148, Func Offset: 0x378
	// Line 2283, Address: 0x18c150, Func Offset: 0x380
	// Line 2284, Address: 0x18c15c, Func Offset: 0x38c
	// Line 2287, Address: 0x18c178, Func Offset: 0x3a8
	// Line 2288, Address: 0x18c180, Func Offset: 0x3b0
	// Line 2289, Address: 0x18c184, Func Offset: 0x3b4
	// Line 2290, Address: 0x18c188, Func Offset: 0x3b8
	// Line 2292, Address: 0x18c190, Func Offset: 0x3c0
	// Line 2293, Address: 0x18c198, Func Offset: 0x3c8
	// Line 2295, Address: 0x18c1a0, Func Offset: 0x3d0
	// Line 2298, Address: 0x18c1b4, Func Offset: 0x3e4
	// Line 2299, Address: 0x18c1bc, Func Offset: 0x3ec
	// Line 2300, Address: 0x18c1c0, Func Offset: 0x3f0
	// Line 2301, Address: 0x18c1d0, Func Offset: 0x400
	// Line 2302, Address: 0x18c204, Func Offset: 0x434
	// Line 2304, Address: 0x18c228, Func Offset: 0x458
	// Line 2305, Address: 0x18c24c, Func Offset: 0x47c
	// Line 2306, Address: 0x18c264, Func Offset: 0x494
	// Line 2307, Address: 0x18c278, Func Offset: 0x4a8
	// Line 2308, Address: 0x18c2a4, Func Offset: 0x4d4
	// Line 2309, Address: 0x18c2bc, Func Offset: 0x4ec
	// Line 2310, Address: 0x18c2c0, Func Offset: 0x4f0
	// Line 2311, Address: 0x18c2d4, Func Offset: 0x504
	// Func End, Address: 0x18c300, Func Offset: 0x530
}

// 
// Start address: 0x18c300
void move_part(sfCldPart* pp, float* move)
{
	sfCldBody* pcb;
	// Line 2320, Address: 0x18c300, Func Offset: 0
	// Line 2321, Address: 0x18c308, Func Offset: 0x8
	// Line 2322, Address: 0x18c320, Func Offset: 0x20
	// Line 2324, Address: 0x18c380, Func Offset: 0x80
	// Line 2325, Address: 0x18c394, Func Offset: 0x94
	// Line 2326, Address: 0x18c3ac, Func Offset: 0xac
	// Line 2327, Address: 0x18c3b4, Func Offset: 0xb4
	// Line 2328, Address: 0x18c3b8, Func Offset: 0xb8
	// Line 2329, Address: 0x18c3c8, Func Offset: 0xc8
	// Line 2332, Address: 0x18c3d0, Func Offset: 0xd0
	// Line 2333, Address: 0x18c3e4, Func Offset: 0xe4
	// Line 2334, Address: 0x18c3fc, Func Offset: 0xfc
	// Line 2335, Address: 0x18c404, Func Offset: 0x104
	// Line 2336, Address: 0x18c408, Func Offset: 0x108
	// Line 2338, Address: 0x18c424, Func Offset: 0x124
	// Line 2339, Address: 0x18c428, Func Offset: 0x128
	// Func End, Address: 0x18c430, Func Offset: 0x130
}

// 
// Start address: 0x18c430
void move_player_part(int player, float* move)
{
	sfAllocateList* plist;
	sfCldObject* pco;
	EnClPlayerPart* pcp;
	// Line 2346, Address: 0x18c430, Func Offset: 0
	// Line 2351, Address: 0x18c448, Func Offset: 0x18
	// Line 2350, Address: 0x18c44c, Func Offset: 0x1c
	// Line 2351, Address: 0x18c454, Func Offset: 0x24
	// Line 2346, Address: 0x18c458, Func Offset: 0x28
	// Line 2351, Address: 0x18c45c, Func Offset: 0x2c
	// Line 2352, Address: 0x18c468, Func Offset: 0x38
	// Line 2353, Address: 0x18c470, Func Offset: 0x40
	// Line 2354, Address: 0x18c478, Func Offset: 0x48
	// Line 2355, Address: 0x18c484, Func Offset: 0x54
	// Line 2357, Address: 0x18c490, Func Offset: 0x60
	// Line 2358, Address: 0x18c49c, Func Offset: 0x6c
	// Line 2359, Address: 0x18c4a8, Func Offset: 0x78
	// Line 2360, Address: 0x18c4b0, Func Offset: 0x80
	// Func End, Address: 0x18c4cc, Func Offset: 0x9c
}

// 
// Start address: 0x18c4d0
void move_enemy_part(EnemyCollision* cld, float* move)
{
	int i;
	int n;
	sfCldObject* pco;
	// Line 2367, Address: 0x18c4d0, Func Offset: 0
	// Line 2371, Address: 0x18c4d4, Func Offset: 0x4
	// Line 2367, Address: 0x18c4d8, Func Offset: 0x8
	// Line 2372, Address: 0x18c4dc, Func Offset: 0xc
	// Line 2373, Address: 0x18c4e0, Func Offset: 0x10
	// Line 2374, Address: 0x18c4f0, Func Offset: 0x20
	// Line 2375, Address: 0x18c510, Func Offset: 0x40
	// Line 2376, Address: 0x18c518, Func Offset: 0x48
	// Line 2378, Address: 0x18c520, Func Offset: 0x50
	// Line 2379, Address: 0x18c530, Func Offset: 0x60
	// Func End, Address: 0x18c53c, Func Offset: 0x6c
}

// 
// Start address: 0x18c540
void collide_nearest_chara(EnClColisChara* pecc, _anon4* psp, EnemyCollision* pec, sfCldObject** pobj, int pcount)
{
	sfCldObject* pc;
	sfCldObject* pcm;
	sfCldObject* myobj;
	sfCldPart* pp;
	sfCldPart* ppm;
	int i;
	int j;
	int nm;
	int npm;
	int p_ig;
	float vec[4];
	float tpos[4];
	float d;
	float dm;
	float pr;
	sfCldPart* parts[6];
	_anon5 obb;
	_anon5* pobb;
	_anon4 sphere;
	int myweight;
	int tweight;
	sfObj* tobj;
	EnemyCollision* tcld;
	EnemyPlayerType pn;
	// Line 2390, Address: 0x18c540, Func Offset: 0
	// Line 2398, Address: 0x18c580, Func Offset: 0x40
	// Line 2399, Address: 0x18c588, Func Offset: 0x48
	// Line 2398, Address: 0x18c58c, Func Offset: 0x4c
	// Line 2399, Address: 0x18c590, Func Offset: 0x50
	// Line 2400, Address: 0x18c594, Func Offset: 0x54
	// Line 2404, Address: 0x18c598, Func Offset: 0x58
	// Line 2402, Address: 0x18c59c, Func Offset: 0x5c
	// Line 2404, Address: 0x18c5a0, Func Offset: 0x60
	// Line 2405, Address: 0x18c5a8, Func Offset: 0x68
	// Line 2406, Address: 0x18c5b4, Func Offset: 0x74
	// Line 2407, Address: 0x18c5e8, Func Offset: 0xa8
	// Line 2408, Address: 0x18c5f0, Func Offset: 0xb0
	// Line 2411, Address: 0x18c608, Func Offset: 0xc8
	// Line 2412, Address: 0x18c620, Func Offset: 0xe0
	// Line 2413, Address: 0x18c62c, Func Offset: 0xec
	// Line 2414, Address: 0x18c634, Func Offset: 0xf4
	// Line 2415, Address: 0x18c64c, Func Offset: 0x10c
	// Line 2416, Address: 0x18c674, Func Offset: 0x134
	// Line 2417, Address: 0x18c680, Func Offset: 0x140
	// Line 2418, Address: 0x18c684, Func Offset: 0x144
	// Line 2422, Address: 0x18c688, Func Offset: 0x148
	// Line 2423, Address: 0x18c6a0, Func Offset: 0x160
	// Line 2425, Address: 0x18c6a8, Func Offset: 0x168
	// Line 2428, Address: 0x18c6b0, Func Offset: 0x170
	// Line 2429, Address: 0x18c6b4, Func Offset: 0x174
	// Line 2430, Address: 0x18c6c0, Func Offset: 0x180
	// Line 2431, Address: 0x18c6f0, Func Offset: 0x1b0
	// Line 2430, Address: 0x18c6f4, Func Offset: 0x1b4
	// Line 2431, Address: 0x18c6f8, Func Offset: 0x1b8
	// Line 2432, Address: 0x18c708, Func Offset: 0x1c8
	// Line 2433, Address: 0x18c710, Func Offset: 0x1d0
	// Line 2432, Address: 0x18c714, Func Offset: 0x1d4
	// Line 2433, Address: 0x18c718, Func Offset: 0x1d8
	// Line 2434, Address: 0x18c71c, Func Offset: 0x1dc
	// Line 2435, Address: 0x18c720, Func Offset: 0x1e0
	// Line 2436, Address: 0x18c728, Func Offset: 0x1e8
	// Line 2437, Address: 0x18c734, Func Offset: 0x1f4
	// Line 2438, Address: 0x18c740, Func Offset: 0x200
	// Line 2439, Address: 0x18c758, Func Offset: 0x218
	// Line 2440, Address: 0x18c760, Func Offset: 0x220
	// Line 2441, Address: 0x18c77c, Func Offset: 0x23c
	// Line 2442, Address: 0x18c7a4, Func Offset: 0x264
	// Line 2444, Address: 0x18c7b0, Func Offset: 0x270
	// Line 2446, Address: 0x18c7b4, Func Offset: 0x274
	// Line 2448, Address: 0x18c7bc, Func Offset: 0x27c
	// Line 2449, Address: 0x18c7d8, Func Offset: 0x298
	// Line 2450, Address: 0x18c7f0, Func Offset: 0x2b0
	// Line 2452, Address: 0x18c7f8, Func Offset: 0x2b8
	// Line 2454, Address: 0x18c800, Func Offset: 0x2c0
	// Line 2455, Address: 0x18c82c, Func Offset: 0x2ec
	// Line 2458, Address: 0x18c838, Func Offset: 0x2f8
	// Line 2460, Address: 0x18c858, Func Offset: 0x318
	// Line 2461, Address: 0x18c860, Func Offset: 0x320
	// Line 2463, Address: 0x18c8a4, Func Offset: 0x364
	// Line 2464, Address: 0x18c8a8, Func Offset: 0x368
	// Line 2465, Address: 0x18c8cc, Func Offset: 0x38c
	// Line 2466, Address: 0x18c8d4, Func Offset: 0x394
	// Line 2469, Address: 0x18c8d8, Func Offset: 0x398
	// Line 2470, Address: 0x18c8e8, Func Offset: 0x3a8
	// Line 2471, Address: 0x18c910, Func Offset: 0x3d0
	// Line 2472, Address: 0x18c918, Func Offset: 0x3d8
	// Line 2473, Address: 0x18c920, Func Offset: 0x3e0
	// Line 2475, Address: 0x18c928, Func Offset: 0x3e8
	// Line 2477, Address: 0x18c93c, Func Offset: 0x3fc
	// Line 2478, Address: 0x18c944, Func Offset: 0x404
	// Line 2481, Address: 0x18c948, Func Offset: 0x408
	// Line 2482, Address: 0x18c954, Func Offset: 0x414
	// Line 2483, Address: 0x18c95c, Func Offset: 0x41c
	// Line 2484, Address: 0x18c964, Func Offset: 0x424
	// Line 2485, Address: 0x18c96c, Func Offset: 0x42c
	// Line 2486, Address: 0x18c970, Func Offset: 0x430
	// Line 2489, Address: 0x18c984, Func Offset: 0x444
	// Line 2490, Address: 0x18c988, Func Offset: 0x448
	// Line 2497, Address: 0x18c98c, Func Offset: 0x44c
	// Line 2490, Address: 0x18c990, Func Offset: 0x450
	// Line 2497, Address: 0x18c99c, Func Offset: 0x45c
	// Line 2498, Address: 0x18c9a4, Func Offset: 0x464
	// Line 2499, Address: 0x18c9a8, Func Offset: 0x468
	// Line 2503, Address: 0x18c9b4, Func Offset: 0x474
	// Line 2505, Address: 0x18c9bc, Func Offset: 0x47c
	// Line 2506, Address: 0x18c9c4, Func Offset: 0x484
	// Line 2505, Address: 0x18c9c8, Func Offset: 0x488
	// Line 2507, Address: 0x18c9cc, Func Offset: 0x48c
	// Line 2508, Address: 0x18c9d0, Func Offset: 0x490
	// Line 2507, Address: 0x18c9d4, Func Offset: 0x494
	// Line 2508, Address: 0x18c9d8, Func Offset: 0x498
	// Line 2511, Address: 0x18c9f8, Func Offset: 0x4b8
	// Line 2513, Address: 0x18ca00, Func Offset: 0x4c0
	// Line 2516, Address: 0x18ca1c, Func Offset: 0x4dc
	// Line 2517, Address: 0x18ca2c, Func Offset: 0x4ec
	// Line 2519, Address: 0x18ca34, Func Offset: 0x4f4
	// Line 2520, Address: 0x18ca3c, Func Offset: 0x4fc
	// Line 2521, Address: 0x18ca40, Func Offset: 0x500
	// Line 2524, Address: 0x18ca48, Func Offset: 0x508
	// Line 2526, Address: 0x18ca50, Func Offset: 0x510
	// Line 2528, Address: 0x18ca5c, Func Offset: 0x51c
	// Line 2530, Address: 0x18ca60, Func Offset: 0x520
	// Line 2532, Address: 0x18ca68, Func Offset: 0x528
	// Line 2533, Address: 0x18ca7c, Func Offset: 0x53c
	// Line 2534, Address: 0x18ca80, Func Offset: 0x540
	// Line 2535, Address: 0x18ca88, Func Offset: 0x548
	// Line 2538, Address: 0x18cab0, Func Offset: 0x570
	// Line 2539, Address: 0x18cae0, Func Offset: 0x5a0
	// Line 2540, Address: 0x18cb00, Func Offset: 0x5c0
	// Line 2541, Address: 0x18cb08, Func Offset: 0x5c8
	// Line 2542, Address: 0x18cb10, Func Offset: 0x5d0
	// Line 2543, Address: 0x18cb3c, Func Offset: 0x5fc
	// Line 2544, Address: 0x18cb48, Func Offset: 0x608
	// Line 2545, Address: 0x18cb54, Func Offset: 0x614
	// Line 2548, Address: 0x18cb60, Func Offset: 0x620
	// Func End, Address: 0x18cb94, Func Offset: 0x654
}

// 
// Start address: 0x18cba0
int hit_test_chara(EnemyCollision* pec, float* pos, float radius, sfCldObject** pobj, int pcount)
{
	int nobjs;
	EnClColisChara ecc;
	sfCldObject* pco;
	sfCldPart* pcp;
	sfCldBody* pcb;
	// Line 2560, Address: 0x18cba0, Func Offset: 0
	// Line 2567, Address: 0x18cba4, Func Offset: 0x4
	// Line 2560, Address: 0x18cba8, Func Offset: 0x8
	// Line 2567, Address: 0x18cbd0, Func Offset: 0x30
	// Line 2568, Address: 0x18cbd4, Func Offset: 0x34
	// Line 2569, Address: 0x18cbe8, Func Offset: 0x48
	// Line 2570, Address: 0x18cc08, Func Offset: 0x68
	// Line 2571, Address: 0x18cc18, Func Offset: 0x78
	// Line 2572, Address: 0x18cc30, Func Offset: 0x90
	// Line 2573, Address: 0x18cc40, Func Offset: 0xa0
	// Line 2575, Address: 0x18cc48, Func Offset: 0xa8
	// Line 2576, Address: 0x18cc54, Func Offset: 0xb4
	// Line 2577, Address: 0x18cc60, Func Offset: 0xc0
	// Line 2578, Address: 0x18cc70, Func Offset: 0xd0
	// Line 2580, Address: 0x18cc88, Func Offset: 0xe8
	// Line 2582, Address: 0x18ccac, Func Offset: 0x10c
	// Line 2583, Address: 0x18ccb0, Func Offset: 0x110
	// Line 2585, Address: 0x18ccd0, Func Offset: 0x130
	// Line 2586, Address: 0x18ccd4, Func Offset: 0x134
	// Line 2587, Address: 0x18ccd8, Func Offset: 0x138
	// Line 2588, Address: 0x18ccec, Func Offset: 0x14c
	// Line 2589, Address: 0x18ccf4, Func Offset: 0x154
	// Line 2590, Address: 0x18ccf8, Func Offset: 0x158
	// Line 2592, Address: 0x18cd00, Func Offset: 0x160
	// Line 2593, Address: 0x18cd08, Func Offset: 0x168
	// Func End, Address: 0x18cd2c, Func Offset: 0x18c
}

// 
// Start address: 0x18cd30
int collide_chara(EnemyCollision* pec, float* pos, sfCldObject** pobj, int pcount)
{
	int r;
	// Line 2604, Address: 0x18cd30, Func Offset: 0
	// Line 2608, Address: 0x18cd38, Func Offset: 0x8
	// Line 2609, Address: 0x18cd5c, Func Offset: 0x2c
	// Line 2610, Address: 0x18cd6c, Func Offset: 0x3c
	// Line 2611, Address: 0x18cd7c, Func Offset: 0x4c
	// Line 2617, Address: 0x18cdb8, Func Offset: 0x88
	// Line 2618, Address: 0x18cdc0, Func Offset: 0x90
	// Line 2620, Address: 0x18cdc8, Func Offset: 0x98
	// Line 2622, Address: 0x18cdcc, Func Offset: 0x9c
	// Line 2624, Address: 0x18cdd0, Func Offset: 0xa0
	// Func End, Address: 0x18cddc, Func Offset: 0xac
}

// 
// Start address: 0x18cde0
int check_collide_line(float* tpos, float* pos)
{
	_anon0* poly;
	_anon3* line;
	_anon1* plane;
	int r;
	// Line 2632, Address: 0x18cde0, Func Offset: 0
	// Line 2637, Address: 0x18cde4, Func Offset: 0x4
	// Line 2632, Address: 0x18cde8, Func Offset: 0x8
	// Line 2637, Address: 0x18ce00, Func Offset: 0x20
	// Line 2636, Address: 0x18ce04, Func Offset: 0x24
	// Line 2637, Address: 0x18ce08, Func Offset: 0x28
	// Line 2639, Address: 0x18ce24, Func Offset: 0x44
	// Line 2640, Address: 0x18ce2c, Func Offset: 0x4c
	// Line 2641, Address: 0x18ce34, Func Offset: 0x54
	// Line 2642, Address: 0x18ce3c, Func Offset: 0x5c
	// Line 2643, Address: 0x18ce44, Func Offset: 0x64
	// Line 2644, Address: 0x18ce4c, Func Offset: 0x6c
	// Line 2645, Address: 0x18ce64, Func Offset: 0x84
	// Line 2648, Address: 0x18ce68, Func Offset: 0x88
	// Line 2649, Address: 0x18ce70, Func Offset: 0x90
	// Line 2648, Address: 0x18ce74, Func Offset: 0x94
	// Line 2650, Address: 0x18ce80, Func Offset: 0xa0
	// Func End, Address: 0x18ce9c, Func Offset: 0xbc
}

// 
// Start address: 0x18cea0
int check_collide_line_with_type(float* tpos, float* pos)
{
	_anon0* poly;
	_anon3* line;
	_anon1* plane;
	int i;
	int npolys;
	int t;
	int r;
	// Line 2658, Address: 0x18cea0, Func Offset: 0
	// Line 2663, Address: 0x18cea4, Func Offset: 0x4
	// Line 2658, Address: 0x18cea8, Func Offset: 0x8
	// Line 2663, Address: 0x18ced4, Func Offset: 0x34
	// Line 2665, Address: 0x18cef4, Func Offset: 0x54
	// Line 2666, Address: 0x18cefc, Func Offset: 0x5c
	// Line 2667, Address: 0x18cf04, Func Offset: 0x64
	// Line 2669, Address: 0x18cf10, Func Offset: 0x70
	// Line 2672, Address: 0x18cf18, Func Offset: 0x78
	// Line 2673, Address: 0x18cf20, Func Offset: 0x80
	// Line 2674, Address: 0x18cf38, Func Offset: 0x98
	// Line 2675, Address: 0x18cf40, Func Offset: 0xa0
	// Line 2676, Address: 0x18cfb8, Func Offset: 0x118
	// Line 2677, Address: 0x18cfc4, Func Offset: 0x124
	// Line 2678, Address: 0x18d048, Func Offset: 0x1a8
	// Line 2679, Address: 0x18d060, Func Offset: 0x1c0
	// Line 2680, Address: 0x18d068, Func Offset: 0x1c8
	// Line 2682, Address: 0x18d06c, Func Offset: 0x1cc
	// Line 2684, Address: 0x18d080, Func Offset: 0x1e0
	// Line 2685, Address: 0x18d088, Func Offset: 0x1e8
	// Line 2684, Address: 0x18d08c, Func Offset: 0x1ec
	// Line 2686, Address: 0x18d098, Func Offset: 0x1f8
	// Func End, Address: 0x18d0c8, Func Offset: 0x228
}

// 
// Start address: 0x18d0d0
int collide_one_main(EnemyCollision* pec, float* pos, float* move)
{
	float* tpos;
	float* tmove;
	float move_dist;
	int count;
	int retv;
	sfCldObject** pobj;
	sfCldPart* pp;
	sfCldBody* pcb;
	float r;
	float tpos2[4];
	_anon0** ppoly;
	float d;
	// Line 2696, Address: 0x18d0d0, Func Offset: 0
	// Line 2702, Address: 0x18d0d4, Func Offset: 0x4
	// Line 2696, Address: 0x18d0d8, Func Offset: 0x8
	// Line 2701, Address: 0x18d104, Func Offset: 0x34
	// Line 2702, Address: 0x18d108, Func Offset: 0x38
	// Line 2703, Address: 0x18d124, Func Offset: 0x54
	// Line 2706, Address: 0x18d138, Func Offset: 0x68
	// Line 2708, Address: 0x18d13c, Func Offset: 0x6c
	// Line 2709, Address: 0x18d148, Func Offset: 0x78
	// Line 2710, Address: 0x18d14c, Func Offset: 0x7c
	// Line 2709, Address: 0x18d154, Func Offset: 0x84
	// Line 2710, Address: 0x18d158, Func Offset: 0x88
	// Line 2713, Address: 0x18d160, Func Offset: 0x90
	// Line 2717, Address: 0x18d17c, Func Offset: 0xac
	// Line 2723, Address: 0x18d1c0, Func Offset: 0xf0
	// Line 2728, Address: 0x18d1cc, Func Offset: 0xfc
	// Line 2730, Address: 0x18d200, Func Offset: 0x130
	// Line 2731, Address: 0x18d210, Func Offset: 0x140
	// Line 2732, Address: 0x18d214, Func Offset: 0x144
	// Line 2733, Address: 0x18d22c, Func Offset: 0x15c
	// Line 2734, Address: 0x18d258, Func Offset: 0x188
	// Line 2735, Address: 0x18d290, Func Offset: 0x1c0
	// Line 2736, Address: 0x18d2ac, Func Offset: 0x1dc
	// Line 2742, Address: 0x18d2b8, Func Offset: 0x1e8
	// Line 2743, Address: 0x18d2bc, Func Offset: 0x1ec
	// Line 2744, Address: 0x18d2d0, Func Offset: 0x200
	// Line 2748, Address: 0x18d2e8, Func Offset: 0x218
	// Line 2744, Address: 0x18d2ec, Func Offset: 0x21c
	// Line 2749, Address: 0x18d2f0, Func Offset: 0x220
	// Line 2744, Address: 0x18d2f4, Func Offset: 0x224
	// Line 2750, Address: 0x18d2f8, Func Offset: 0x228
	// Line 2751, Address: 0x18d300, Func Offset: 0x230
	// Line 2752, Address: 0x18d304, Func Offset: 0x234
	// Line 2751, Address: 0x18d308, Func Offset: 0x238
	// Line 2752, Address: 0x18d30c, Func Offset: 0x23c
	// Line 2753, Address: 0x18d314, Func Offset: 0x244
	// Line 2755, Address: 0x18d320, Func Offset: 0x250
	// Line 2758, Address: 0x18d330, Func Offset: 0x260
	// Line 2759, Address: 0x18d344, Func Offset: 0x274
	// Line 2764, Address: 0x18d368, Func Offset: 0x298
	// Line 2765, Address: 0x18d380, Func Offset: 0x2b0
	// Line 2766, Address: 0x18d390, Func Offset: 0x2c0
	// Line 2767, Address: 0x18d3b0, Func Offset: 0x2e0
	// Line 2768, Address: 0x18d3c4, Func Offset: 0x2f4
	// Line 2772, Address: 0x18d3c8, Func Offset: 0x2f8
	// Line 2773, Address: 0x18d3d0, Func Offset: 0x300
	// Line 2775, Address: 0x18d3d4, Func Offset: 0x304
	// Line 2776, Address: 0x18d3d8, Func Offset: 0x308
	// Line 2777, Address: 0x18d3e0, Func Offset: 0x310
	// Line 2776, Address: 0x18d3e4, Func Offset: 0x314
	// Line 2778, Address: 0x18d3f0, Func Offset: 0x320
	// Func End, Address: 0x18d41c, Func Offset: 0x34c
}

// 
// Start address: 0x18d420
void collide_one(EnemyCollision* pec, float* pos)
{
	float* move;
	float* tpos;
	int ct;
	float r;
	float d;
	sfCldPart* pp;
	sfCldBody* pcb;
	float tpos2[4];
	float d2;
	// Line 2786, Address: 0x18d420, Func Offset: 0
	// Line 2792, Address: 0x18d424, Func Offset: 0x4
	// Line 2786, Address: 0x18d428, Func Offset: 0x8
	// Line 2794, Address: 0x18d42c, Func Offset: 0xc
	// Line 2786, Address: 0x18d430, Func Offset: 0x10
	// Line 2792, Address: 0x18d448, Func Offset: 0x28
	// Line 2793, Address: 0x18d460, Func Offset: 0x40
	// Line 2792, Address: 0x18d464, Func Offset: 0x44
	// Line 2794, Address: 0x18d468, Func Offset: 0x48
	// Line 2795, Address: 0x18d484, Func Offset: 0x64
	// Line 2796, Address: 0x18d498, Func Offset: 0x78
	// Line 2797, Address: 0x18d4a4, Func Offset: 0x84
	// Line 2799, Address: 0x18d4c0, Func Offset: 0xa0
	// Line 2804, Address: 0x18d4fc, Func Offset: 0xdc
	// Line 2805, Address: 0x18d500, Func Offset: 0xe0
	// Line 2806, Address: 0x18d50c, Func Offset: 0xec
	// Line 2808, Address: 0x18d540, Func Offset: 0x120
	// Line 2810, Address: 0x18d550, Func Offset: 0x130
	// Line 2809, Address: 0x18d554, Func Offset: 0x134
	// Line 2810, Address: 0x18d558, Func Offset: 0x138
	// Line 2811, Address: 0x18d56c, Func Offset: 0x14c
	// Line 2812, Address: 0x18d598, Func Offset: 0x178
	// Line 2813, Address: 0x18d5d0, Func Offset: 0x1b0
	// Line 2814, Address: 0x18d5ec, Func Offset: 0x1cc
	// Line 2817, Address: 0x18d5f8, Func Offset: 0x1d8
	// Line 2818, Address: 0x18d60c, Func Offset: 0x1ec
	// Line 2819, Address: 0x18d62c, Func Offset: 0x20c
	// Line 2820, Address: 0x18d638, Func Offset: 0x218
	// Line 2821, Address: 0x18d63c, Func Offset: 0x21c
	// Line 2822, Address: 0x18d644, Func Offset: 0x224
	// Line 2823, Address: 0x18d648, Func Offset: 0x228
	// Line 2824, Address: 0x18d670, Func Offset: 0x250
	// Line 2825, Address: 0x18d678, Func Offset: 0x258
	// Line 2826, Address: 0x18d67c, Func Offset: 0x25c
	// Line 2827, Address: 0x18d684, Func Offset: 0x264
	// Line 2828, Address: 0x18d688, Func Offset: 0x268
	// Line 2829, Address: 0x18d698, Func Offset: 0x278
	// Line 2831, Address: 0x18d69c, Func Offset: 0x27c
	// Line 2832, Address: 0x18d6b0, Func Offset: 0x290
	// Line 2833, Address: 0x18d6d0, Func Offset: 0x2b0
	// Line 2837, Address: 0x18d6dc, Func Offset: 0x2bc
	// Line 2835, Address: 0x18d6e4, Func Offset: 0x2c4
	// Line 2836, Address: 0x18d6e8, Func Offset: 0x2c8
	// Line 2837, Address: 0x18d6ec, Func Offset: 0x2cc
	// Line 2838, Address: 0x18d6fc, Func Offset: 0x2dc
	// Line 2839, Address: 0x18d70c, Func Offset: 0x2ec
	// Line 2842, Address: 0x18d724, Func Offset: 0x304
	// Line 2843, Address: 0x18d730, Func Offset: 0x310
	// Line 2844, Address: 0x18d748, Func Offset: 0x328
	// Line 2845, Address: 0x18d758, Func Offset: 0x338
	// Line 2846, Address: 0x18d768, Func Offset: 0x348
	// Line 2849, Address: 0x18d778, Func Offset: 0x358
	// Line 2850, Address: 0x18d78c, Func Offset: 0x36c
	// Func End, Address: 0x18d7a8, Func Offset: 0x388
}

// 
// Start address: 0x18d7b0
void player_cld_set()
{
	sfAllocateList* plist;
	int i;
	int j;
	int n;
	sfCldObject* pco;
	EnClPlayerPart* pcp;
	float* move;
	// Line 2855, Address: 0x18d7b0, Func Offset: 0
	// Line 2862, Address: 0x18d7c0, Func Offset: 0x10
	// Line 2855, Address: 0x18d7c4, Func Offset: 0x14
	// Line 2862, Address: 0x18d7c8, Func Offset: 0x18
	// Line 2855, Address: 0x18d7cc, Func Offset: 0x1c
	// Line 2863, Address: 0x18d7d0, Func Offset: 0x20
	// Line 2855, Address: 0x18d7d4, Func Offset: 0x24
	// Line 2863, Address: 0x18d7dc, Func Offset: 0x2c
	// Line 2864, Address: 0x18d7e0, Func Offset: 0x30
	// Line 2865, Address: 0x18d7f4, Func Offset: 0x44
	// Line 2866, Address: 0x18d800, Func Offset: 0x50
	// Line 2867, Address: 0x18d808, Func Offset: 0x58
	// Line 2868, Address: 0x18d814, Func Offset: 0x64
	// Line 2867, Address: 0x18d818, Func Offset: 0x68
	// Line 2869, Address: 0x18d81c, Func Offset: 0x6c
	// Line 2870, Address: 0x18d828, Func Offset: 0x78
	// Line 2871, Address: 0x18d830, Func Offset: 0x80
	// Line 2872, Address: 0x18d838, Func Offset: 0x88
	// Line 2873, Address: 0x18d858, Func Offset: 0xa8
	// Line 2874, Address: 0x18d860, Func Offset: 0xb0
	// Line 2876, Address: 0x18d894, Func Offset: 0xe4
	// Line 2877, Address: 0x18d8b0, Func Offset: 0x100
	// Line 2878, Address: 0x18d8bc, Func Offset: 0x10c
	// Line 2880, Address: 0x18d8c0, Func Offset: 0x110
	// Line 2883, Address: 0x18d8cc, Func Offset: 0x11c
	// Line 2884, Address: 0x18d8e0, Func Offset: 0x130
	// Line 2886, Address: 0x18d8e8, Func Offset: 0x138
	// Line 2887, Address: 0x18d8f8, Func Offset: 0x148
	// Func End, Address: 0x18d91c, Func Offset: 0x16c
}

// 
// Start address: 0x18d920
void player_cld_recovery()
{
	sfAllocateList* plist;
	EnClPlayerPart* pcp;
	EnClPlayerPart* npcp;
	// Line 2892, Address: 0x18d920, Func Offset: 0
	// Line 2895, Address: 0x18d92c, Func Offset: 0xc
	// Line 2892, Address: 0x18d930, Func Offset: 0x10
	// Line 2895, Address: 0x18d934, Func Offset: 0x14
	// Line 2892, Address: 0x18d938, Func Offset: 0x18
	// Line 2896, Address: 0x18d93c, Func Offset: 0x1c
	// Line 2897, Address: 0x18d948, Func Offset: 0x28
	// Line 2898, Address: 0x18d950, Func Offset: 0x30
	// Line 2899, Address: 0x18d960, Func Offset: 0x40
	// Line 2900, Address: 0x18d970, Func Offset: 0x50
	// Line 2901, Address: 0x18d98c, Func Offset: 0x6c
	// Line 2900, Address: 0x18d990, Func Offset: 0x70
	// Line 2901, Address: 0x18d994, Func Offset: 0x74
	// Line 2900, Address: 0x18d998, Func Offset: 0x78
	// Line 2901, Address: 0x18d9b4, Func Offset: 0x94
	// Line 2903, Address: 0x18d9bc, Func Offset: 0x9c
	// Line 2904, Address: 0x18d9c8, Func Offset: 0xa8
	// Func End, Address: 0x18d9e0, Func Offset: 0xc0
}

// 
// Start address: 0x18d9e0
void set_camera_obj()
{
	sfCldObject* pco;
	// Line 2909, Address: 0x18d9e0, Func Offset: 0
	// Line 2914, Address: 0x18d9e4, Func Offset: 0x4
	// Line 2909, Address: 0x18d9e8, Func Offset: 0x8
	// Line 2914, Address: 0x18d9f8, Func Offset: 0x18
	// Line 2915, Address: 0x18d9fc, Func Offset: 0x1c
	// Line 2916, Address: 0x18da04, Func Offset: 0x24
	// Line 2917, Address: 0x18da20, Func Offset: 0x40
	// Line 2918, Address: 0x18da28, Func Offset: 0x48
	// Line 2919, Address: 0x18da34, Func Offset: 0x54
	// Line 2920, Address: 0x18da3c, Func Offset: 0x5c
	// Line 2921, Address: 0x18da48, Func Offset: 0x68
	// Line 2922, Address: 0x18da50, Func Offset: 0x70
	// Line 2923, Address: 0x18da58, Func Offset: 0x78
	// Line 2924, Address: 0x18da68, Func Offset: 0x88
	// Line 2925, Address: 0x18da70, Func Offset: 0x90
	// Func End, Address: 0x18da88, Func Offset: 0xa8
}

// 
// Start address: 0x18da90
void set_donotenterarea()
{
	sfCldObject* pco;
	int n;
	EnemyAreaBox* pa;
	// Line 2930, Address: 0x18da90, Func Offset: 0
	// Line 2935, Address: 0x18da94, Func Offset: 0x4
	// Line 2930, Address: 0x18da98, Func Offset: 0x8
	// Line 2935, Address: 0x18daa4, Func Offset: 0x14
	// Line 2936, Address: 0x18dab0, Func Offset: 0x20
	// Line 2937, Address: 0x18dab8, Func Offset: 0x28
	// Line 2939, Address: 0x18dac4, Func Offset: 0x34
	// Line 2940, Address: 0x18dad0, Func Offset: 0x40
	// Line 2942, Address: 0x18dad8, Func Offset: 0x48
	// Line 2943, Address: 0x18dae0, Func Offset: 0x50
	// Line 2944, Address: 0x18daec, Func Offset: 0x5c
	// Line 2945, Address: 0x18db0c, Func Offset: 0x7c
	// Line 2946, Address: 0x18db14, Func Offset: 0x84
	// Line 2947, Address: 0x18db1c, Func Offset: 0x8c
	// Line 2948, Address: 0x18db24, Func Offset: 0x94
	// Line 2949, Address: 0x18db30, Func Offset: 0xa0
	// Line 2951, Address: 0x18db34, Func Offset: 0xa4
	// Line 2952, Address: 0x18db3c, Func Offset: 0xac
	// Line 2953, Address: 0x18db40, Func Offset: 0xb0
	// Line 2954, Address: 0x18db4c, Func Offset: 0xbc
	// Line 2955, Address: 0x18db5c, Func Offset: 0xcc
	// Line 2956, Address: 0x18db64, Func Offset: 0xd4
	// Line 2957, Address: 0x18db6c, Func Offset: 0xdc
	// Line 2958, Address: 0x18db74, Func Offset: 0xe4
	// Line 2959, Address: 0x18db7c, Func Offset: 0xec
	// Line 2960, Address: 0x18db84, Func Offset: 0xf4
	// Line 2961, Address: 0x18db88, Func Offset: 0xf8
	// Line 2963, Address: 0x18db98, Func Offset: 0x108
	// Line 2964, Address: 0x18dba8, Func Offset: 0x118
	// Line 2965, Address: 0x18dbb0, Func Offset: 0x120
	// Line 2966, Address: 0x18dbb8, Func Offset: 0x128
	// Line 2969, Address: 0x18dbc0, Func Offset: 0x130
	// Line 2970, Address: 0x18dbc8, Func Offset: 0x138
	// Line 2972, Address: 0x18dbd0, Func Offset: 0x140
	// Func End, Address: 0x18dbe8, Func Offset: 0x158
}

// 
// Start address: 0x18dbf0
void delete_donotenterarea()
{
	// Line 2977, Address: 0x18dbf0, Func Offset: 0
	// Line 2978, Address: 0x18dc00, Func Offset: 0x10
	// Line 2979, Address: 0x18dc08, Func Offset: 0x18
	// Line 2980, Address: 0x18dc10, Func Offset: 0x20
	// Line 2981, Address: 0x18dc20, Func Offset: 0x30
	// Line 2983, Address: 0x18dc28, Func Offset: 0x38
	// Func End, Address: 0x18dc34, Func Offset: 0x44
}

// 
// Start address: 0x18dc40
void sort_data()
{
	EnemyCollisionTmp* ptmp;
	EnemyCollisionTmp* pst;
	EnemyCollisionTmp* ptbase;
	EnemyCollisionTmp* ptt;
	EnemyCollision* pec;
	EnemyCollision** pprev;
	int i;
	int j;
	int m;
	int pm;
	int pt;
	float dm;
	// Line 2988, Address: 0x18dc40, Func Offset: 0
	// Line 2994, Address: 0x18dc44, Func Offset: 0x4
	// Line 2988, Address: 0x18dc48, Func Offset: 0x8
	// Line 2994, Address: 0x18dc50, Func Offset: 0x10
	// Line 2995, Address: 0x18dc54, Func Offset: 0x14
	// Line 2996, Address: 0x18dc5c, Func Offset: 0x1c
	// Line 3000, Address: 0x18dc70, Func Offset: 0x30
	// Line 3001, Address: 0x18dc78, Func Offset: 0x38
	// Line 3002, Address: 0x18dc80, Func Offset: 0x40
	// Line 3003, Address: 0x18dc84, Func Offset: 0x44
	// Line 3005, Address: 0x18dca0, Func Offset: 0x60
	// Line 3007, Address: 0x18dcac, Func Offset: 0x6c
	// Line 3006, Address: 0x18dcb0, Func Offset: 0x70
	// Line 3008, Address: 0x18dcb4, Func Offset: 0x74
	// Line 3010, Address: 0x18dcc0, Func Offset: 0x80
	// Line 3011, Address: 0x18dcc4, Func Offset: 0x84
	// Line 3012, Address: 0x18dcc8, Func Offset: 0x88
	// Line 3014, Address: 0x18dcd0, Func Offset: 0x90
	// Line 3015, Address: 0x18dcdc, Func Offset: 0x9c
	// Line 3017, Address: 0x18dce0, Func Offset: 0xa0
	// Line 3019, Address: 0x18dce8, Func Offset: 0xa8
	// Line 3020, Address: 0x18dcec, Func Offset: 0xac
	// Line 3021, Address: 0x18dcf0, Func Offset: 0xb0
	// Line 3022, Address: 0x18dcf8, Func Offset: 0xb8
	// Line 3023, Address: 0x18dd00, Func Offset: 0xc0
	// Line 3024, Address: 0x18dd0c, Func Offset: 0xcc
	// Line 3025, Address: 0x18dd10, Func Offset: 0xd0
	// Line 3027, Address: 0x18dd38, Func Offset: 0xf8
	// Line 3028, Address: 0x18dd3c, Func Offset: 0xfc
	// Line 3026, Address: 0x18dd40, Func Offset: 0x100
	// Line 3030, Address: 0x18dd44, Func Offset: 0x104
	// Line 3031, Address: 0x18dd5c, Func Offset: 0x11c
	// Line 3032, Address: 0x18dd60, Func Offset: 0x120
	// Line 3033, Address: 0x18dd64, Func Offset: 0x124
	// Line 3035, Address: 0x18dd68, Func Offset: 0x128
	// Line 3036, Address: 0x18dd70, Func Offset: 0x130
	// Line 3037, Address: 0x18dd74, Func Offset: 0x134
	// Line 3039, Address: 0x18dd78, Func Offset: 0x138
	// Line 3040, Address: 0x18dd84, Func Offset: 0x144
	// Line 3041, Address: 0x18dd88, Func Offset: 0x148
	// Line 3042, Address: 0x18dd94, Func Offset: 0x154
	// Func End, Address: 0x18dda8, Func Offset: 0x168
}

// 
// Start address: 0x18ddb0
void EnemyCollide()
{
	EnemyCollision* pec;
	float* pos;
	// Line 3047, Address: 0x18ddb0, Func Offset: 0
	// Line 3057, Address: 0x18ddc4, Func Offset: 0x14
	// Line 3060, Address: 0x18ddcc, Func Offset: 0x1c
	// Line 3062, Address: 0x18dde0, Func Offset: 0x30
	// Line 3063, Address: 0x18ddec, Func Offset: 0x3c
	// Line 3064, Address: 0x18ddfc, Func Offset: 0x4c
	// Line 3066, Address: 0x18de10, Func Offset: 0x60
	// Line 3067, Address: 0x18de1c, Func Offset: 0x6c
	// Line 3068, Address: 0x18de2c, Func Offset: 0x7c
	// Line 3069, Address: 0x18de34, Func Offset: 0x84
	// Line 3071, Address: 0x18de44, Func Offset: 0x94
	// Line 3069, Address: 0x18de48, Func Offset: 0x98
	// Line 3071, Address: 0x18de4c, Func Offset: 0x9c
	// Line 3073, Address: 0x18de5c, Func Offset: 0xac
	// Line 3075, Address: 0x18de78, Func Offset: 0xc8
	// Line 3076, Address: 0x18de80, Func Offset: 0xd0
	// Line 3078, Address: 0x18de88, Func Offset: 0xd8
	// Line 3079, Address: 0x18de90, Func Offset: 0xe0
	// Line 3080, Address: 0x18dea0, Func Offset: 0xf0
	// Line 3081, Address: 0x18deb4, Func Offset: 0x104
	// Line 3082, Address: 0x18dec0, Func Offset: 0x110
	// Line 3083, Address: 0x18dec4, Func Offset: 0x114
	// Line 3084, Address: 0x18dec8, Func Offset: 0x118
	// Line 3085, Address: 0x18decc, Func Offset: 0x11c
	// Line 3086, Address: 0x18ded0, Func Offset: 0x120
	// Line 3087, Address: 0x18dee8, Func Offset: 0x138
	// Line 3089, Address: 0x18deec, Func Offset: 0x13c
	// Line 3090, Address: 0x18def4, Func Offset: 0x144
	// Line 3091, Address: 0x18def8, Func Offset: 0x148
	// Line 3093, Address: 0x18df04, Func Offset: 0x154
	// Line 3094, Address: 0x18df30, Func Offset: 0x180
	// Line 3095, Address: 0x18df38, Func Offset: 0x188
	// Line 3096, Address: 0x18df44, Func Offset: 0x194
	// Line 3097, Address: 0x18df48, Func Offset: 0x198
	// Line 3099, Address: 0x18df58, Func Offset: 0x1a8
	// Line 3105, Address: 0x18df5c, Func Offset: 0x1ac
	// Line 3100, Address: 0x18df60, Func Offset: 0x1b0
	// Line 3101, Address: 0x18df64, Func Offset: 0x1b4
	// Line 3102, Address: 0x18df68, Func Offset: 0x1b8
	// Line 3103, Address: 0x18df6c, Func Offset: 0x1bc
	// Line 3105, Address: 0x18df84, Func Offset: 0x1d4
	// Line 3109, Address: 0x18df8c, Func Offset: 0x1dc
	// Line 3110, Address: 0x18df90, Func Offset: 0x1e0
	// Line 3112, Address: 0x18df98, Func Offset: 0x1e8
	// Line 3113, Address: 0x18dfa0, Func Offset: 0x1f0
	// Line 3114, Address: 0x18dfa8, Func Offset: 0x1f8
	// Line 3115, Address: 0x18dfb0, Func Offset: 0x200
	// Line 3116, Address: 0x18dfb4, Func Offset: 0x204
	// Line 3118, Address: 0x18dfc8, Func Offset: 0x218
	// Line 3119, Address: 0x18dfd0, Func Offset: 0x220
	// Line 3120, Address: 0x18dfe4, Func Offset: 0x234
	// Line 3121, Address: 0x18dff4, Func Offset: 0x244
	// Line 3122, Address: 0x18e004, Func Offset: 0x254
	// Line 3123, Address: 0x18e00c, Func Offset: 0x25c
	// Line 3124, Address: 0x18e018, Func Offset: 0x268
	// Line 3125, Address: 0x18e028, Func Offset: 0x278
	// Line 3126, Address: 0x18e034, Func Offset: 0x284
	// Line 3132, Address: 0x18e044, Func Offset: 0x294
	// Func End, Address: 0x18e060, Func Offset: 0x2b0
}

// 
// Start address: 0x18e060
EnemyClHitResult* EnemyClHitResultTmpNew()
{
	EnemyClHitResult* res;
	int i;
	// Line 3162, Address: 0x18e060, Func Offset: 0
	// Line 3164, Address: 0x18e064, Func Offset: 0x4
	// Line 3162, Address: 0x18e068, Func Offset: 0x8
	// Line 3164, Address: 0x18e06c, Func Offset: 0xc
	// Line 3166, Address: 0x18e078, Func Offset: 0x18
	// Line 3169, Address: 0x18e088, Func Offset: 0x28
	// Line 3172, Address: 0x18e098, Func Offset: 0x38
	// Func End, Address: 0x18e0a0, Func Offset: 0x40
}

// 
// Start address: 0x18e0a0
void EnemyClHitResultTmpDelete(EnemyClHitResult* res)
{
	// Line 3179, Address: 0x18e0a0, Func Offset: 0
	// Line 3180, Address: 0x18e0a4, Func Offset: 0x4
	// Func End, Address: 0x18e0ac, Func Offset: 0xc
}

// 
// Start address: 0x18e0b0
float EnemyClHitResultGetDistance(EnemyClHitResult* res)
{
	// Line 3200, Address: 0x18e0b0, Func Offset: 0
	// Func End, Address: 0x18e0b8, Func Offset: 0x8
}

// 
// Start address: 0x18e0c0
void EnemyClHitResultGetPos(EnemyClHitResult* res, float* pos)
{
	// Line 3209, Address: 0x18e0c0, Func Offset: 0
	// Line 3210, Address: 0x18e0c4, Func Offset: 0x4
	// Func End, Address: 0x18e0cc, Func Offset: 0xc
}

// 
// Start address: 0x18e0d0
void EnemyClHitResultGetNormal(EnemyClHitResult* res, float* normal)
{
	// Line 3219, Address: 0x18e0d0, Func Offset: 0
	// Line 3220, Address: 0x18e0d4, Func Offset: 0x4
	// Func End, Address: 0x18e0dc, Func Offset: 0xc
}

// 
// Start address: 0x18e0e0
_anon0* EnemyClHitResultPolygon(EnemyClHitResult* res)
{
	// Line 3230, Address: 0x18e0e0, Func Offset: 0
	// Func End, Address: 0x18e0e8, Func Offset: 0x8
}

// 
// Start address: 0x18e0f0
sfCldObject* EnemyClHitResultObject(EnemyClHitResult* res)
{
	// Line 3240, Address: 0x18e0f0, Func Offset: 0
	// Func End, Address: 0x18e0f8, Func Offset: 0x8
}

// 
// Start address: 0x18e100
int EnemyClHitResultCheckEffective(EnemyClHitResult* res, float error)
{
	int r;
	// Line 3255, Address: 0x18e100, Func Offset: 0
	// Line 3256, Address: 0x18e124, Func Offset: 0x24
	// Line 3257, Address: 0x18e128, Func Offset: 0x28
	// Line 3260, Address: 0x18e140, Func Offset: 0x40
	// Line 3262, Address: 0x18e148, Func Offset: 0x48
	// Line 3264, Address: 0x18e14c, Func Offset: 0x4c
	// Line 3266, Address: 0x18e150, Func Offset: 0x50
	// Func End, Address: 0x18e158, Func Offset: 0x58
}

// 
// Start address: 0x18e160
int get_near_poly_data(EnemyClHitResult* res, int npolys, _anon3* line, float* normal, float theta_mini, float theta_max)
{
	float dist;
	float d;
	int i;
	int t;
	_anon0* poly;
	_anon1 plane;
	float cpos[4];
	_anon3 cline;
	// Line 3282, Address: 0x18e160, Func Offset: 0
	// Line 3289, Address: 0x18e1a8, Func Offset: 0x48
	// Line 3290, Address: 0x18e1b0, Func Offset: 0x50
	// Line 3291, Address: 0x18e1b4, Func Offset: 0x54
	// Line 3293, Address: 0x18e1c0, Func Offset: 0x60
	// Line 3296, Address: 0x18e1c8, Func Offset: 0x68
	// Line 3297, Address: 0x18e1d0, Func Offset: 0x70
	// Line 3295, Address: 0x18e1d4, Func Offset: 0x74
	// Line 3298, Address: 0x18e1d8, Func Offset: 0x78
	// Line 3295, Address: 0x18e1dc, Func Offset: 0x7c
	// Line 3293, Address: 0x18e1e0, Func Offset: 0x80
	// Line 3296, Address: 0x18e1e4, Func Offset: 0x84
	// Line 3297, Address: 0x18e1f0, Func Offset: 0x90
	// Line 3298, Address: 0x18e1f4, Func Offset: 0x94
	// Line 3299, Address: 0x18e200, Func Offset: 0xa0
	// Line 3300, Address: 0x18e208, Func Offset: 0xa8
	// Line 3301, Address: 0x18e280, Func Offset: 0x120
	// Line 3302, Address: 0x18e28c, Func Offset: 0x12c
	// Line 3304, Address: 0x18e330, Func Offset: 0x1d0
	// Line 3305, Address: 0x18e354, Func Offset: 0x1f4
	// Line 3307, Address: 0x18e36c, Func Offset: 0x20c
	// Line 3308, Address: 0x18e378, Func Offset: 0x218
	// Line 3309, Address: 0x18e39c, Func Offset: 0x23c
	// Line 3310, Address: 0x18e3b4, Func Offset: 0x254
	// Line 3312, Address: 0x18e3b8, Func Offset: 0x258
	// Line 3310, Address: 0x18e3bc, Func Offset: 0x25c
	// Line 3312, Address: 0x18e3c0, Func Offset: 0x260
	// Line 3311, Address: 0x18e3c4, Func Offset: 0x264
	// Line 3312, Address: 0x18e3c8, Func Offset: 0x268
	// Line 3313, Address: 0x18e3d0, Func Offset: 0x270
	// Line 3314, Address: 0x18e3e0, Func Offset: 0x280
	// Line 3317, Address: 0x18e3e4, Func Offset: 0x284
	// Line 3314, Address: 0x18e3ec, Func Offset: 0x28c
	// Line 3317, Address: 0x18e3f0, Func Offset: 0x290
	// Line 3315, Address: 0x18e3f4, Func Offset: 0x294
	// Line 3317, Address: 0x18e3f8, Func Offset: 0x298
	// Line 3316, Address: 0x18e3fc, Func Offset: 0x29c
	// Line 3317, Address: 0x18e400, Func Offset: 0x2a0
	// Line 3321, Address: 0x18e404, Func Offset: 0x2a4
	// Line 3322, Address: 0x18e41c, Func Offset: 0x2bc
	// Line 3323, Address: 0x18e42c, Func Offset: 0x2cc
	// Line 3324, Address: 0x18e434, Func Offset: 0x2d4
	// Line 3325, Address: 0x18e438, Func Offset: 0x2d8
	// Line 3326, Address: 0x18e444, Func Offset: 0x2e4
	// Line 3327, Address: 0x18e448, Func Offset: 0x2e8
	// Func End, Address: 0x18e480, Func Offset: 0x320
}

// 
// Start address: 0x18e480
int get_near_poly_data_s(EnemyClHitResult* res, int npolys, _anon4* sphere, float* normal, float theta_mini, float theta_max)
{
	float dist;
	float dist2;
	float d;
	int i;
	int t;
	int c;
	_anon0* poly;
	_anon1 plane;
	float cpos[4];
	_anon3 cline;
	// Line 3344, Address: 0x18e480, Func Offset: 0
	// Line 3351, Address: 0x18e4d0, Func Offset: 0x50
	// Line 3352, Address: 0x18e4d8, Func Offset: 0x58
	// Line 3353, Address: 0x18e4dc, Func Offset: 0x5c
	// Line 3355, Address: 0x18e4e8, Func Offset: 0x68
	// Line 3358, Address: 0x18e4f0, Func Offset: 0x70
	// Line 3359, Address: 0x18e4f8, Func Offset: 0x78
	// Line 3357, Address: 0x18e4fc, Func Offset: 0x7c
	// Line 3355, Address: 0x18e504, Func Offset: 0x84
	// Line 3356, Address: 0x18e508, Func Offset: 0x88
	// Line 3359, Address: 0x18e50c, Func Offset: 0x8c
	// Line 3360, Address: 0x18e518, Func Offset: 0x98
	// Line 3361, Address: 0x18e520, Func Offset: 0xa0
	// Line 3362, Address: 0x18e598, Func Offset: 0x118
	// Line 3363, Address: 0x18e5a4, Func Offset: 0x124
	// Line 3365, Address: 0x18e648, Func Offset: 0x1c8
	// Line 3366, Address: 0x18e66c, Func Offset: 0x1ec
	// Line 3368, Address: 0x18e684, Func Offset: 0x204
	// Line 3369, Address: 0x18e690, Func Offset: 0x210
	// Line 3370, Address: 0x18e6b4, Func Offset: 0x234
	// Line 3371, Address: 0x18e6dc, Func Offset: 0x25c
	// Line 3372, Address: 0x18e6f8, Func Offset: 0x278
	// Line 3374, Address: 0x18e714, Func Offset: 0x294
	// Line 3375, Address: 0x18e730, Func Offset: 0x2b0
	// Line 3376, Address: 0x18e73c, Func Offset: 0x2bc
	// Line 3378, Address: 0x18e740, Func Offset: 0x2c0
	// Line 3376, Address: 0x18e744, Func Offset: 0x2c4
	// Line 3380, Address: 0x18e748, Func Offset: 0x2c8
	// Line 3382, Address: 0x18e774, Func Offset: 0x2f4
	// Line 3383, Address: 0x18e778, Func Offset: 0x2f8
	// Line 3384, Address: 0x18e77c, Func Offset: 0x2fc
	// Line 3385, Address: 0x18e780, Func Offset: 0x300
	// Line 3386, Address: 0x18e788, Func Offset: 0x308
	// Line 3388, Address: 0x18e78c, Func Offset: 0x30c
	// Line 3386, Address: 0x18e790, Func Offset: 0x310
	// Line 3388, Address: 0x18e794, Func Offset: 0x314
	// Line 3387, Address: 0x18e798, Func Offset: 0x318
	// Line 3388, Address: 0x18e79c, Func Offset: 0x31c
	// Line 3389, Address: 0x18e7a4, Func Offset: 0x324
	// Line 3390, Address: 0x18e7b4, Func Offset: 0x334
	// Line 3392, Address: 0x18e7b8, Func Offset: 0x338
	// Line 3390, Address: 0x18e7c0, Func Offset: 0x340
	// Line 3392, Address: 0x18e7c4, Func Offset: 0x344
	// Line 3391, Address: 0x18e7c8, Func Offset: 0x348
	// Line 3392, Address: 0x18e7cc, Func Offset: 0x34c
	// Line 3396, Address: 0x18e7d4, Func Offset: 0x354
	// Line 3397, Address: 0x18e7ec, Func Offset: 0x36c
	// Line 3398, Address: 0x18e7fc, Func Offset: 0x37c
	// Line 3399, Address: 0x18e804, Func Offset: 0x384
	// Line 3400, Address: 0x18e808, Func Offset: 0x388
	// Line 3401, Address: 0x18e80c, Func Offset: 0x38c
	// Line 3400, Address: 0x18e810, Func Offset: 0x390
	// Line 3401, Address: 0x18e814, Func Offset: 0x394
	// Line 3402, Address: 0x18e820, Func Offset: 0x3a0
	// Line 3406, Address: 0x18e828, Func Offset: 0x3a8
	// Func End, Address: 0x18e868, Func Offset: 0x3e8
}

// 
// Start address: 0x18e870
EnemyClHitResultType EnemyClCheckHitUnder(EnemyClHitResult* res, float* pos, float* rot, float limit)
{
	_anon3 line;
	int npolys;
	float under[4];
	float vec[4];
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 3416, Address: 0x18e870, Func Offset: 0
	// Line 3423, Address: 0x18e898, Func Offset: 0x28
	// Line 3425, Address: 0x18e8a0, Func Offset: 0x30
	// Line 3426, Address: 0x18e8a8, Func Offset: 0x38
	// Line 3427, Address: 0x18e8b4, Func Offset: 0x44
	// Line 3428, Address: 0x18e8b8, Func Offset: 0x48
	// Line 3429, Address: 0x18e8c4, Func Offset: 0x54
	// Line 3430, Address: 0x18e8e8, Func Offset: 0x78
	// Line 3431, Address: 0x18e904, Func Offset: 0x94
	// Line 3432, Address: 0x18e920, Func Offset: 0xb0
	// Line 3434, Address: 0x18e928, Func Offset: 0xb8
	// Line 3437, Address: 0x18e954, Func Offset: 0xe4
	// Line 3438, Address: 0x18e95c, Func Offset: 0xec
	// Line 3439, Address: 0x18e964, Func Offset: 0xf4
	// Line 3440, Address: 0x18e968, Func Offset: 0xf8
	// Line 3441, Address: 0x18e96c, Func Offset: 0xfc
	// Func End, Address: 0x18e98c, Func Offset: 0x11c
}

// 
// Start address: 0x18e990
float get_cross_point_line_sphere(float* cross, float* vtx1, float* vtx2, float* center, float radius)
{
	float vec[4];
	float vec2[4];
	float d;
	float d2;
	float d3;
	// Line 3454, Address: 0x18e990, Func Offset: 0
	// Line 3457, Address: 0x18e994, Func Offset: 0x4
	// Line 3458, Address: 0x18e9ac, Func Offset: 0x1c
	// Line 3459, Address: 0x18e9c4, Func Offset: 0x34
	// Line 3460, Address: 0x18e9e8, Func Offset: 0x58
	// Line 3461, Address: 0x18ea0c, Func Offset: 0x7c
	// Line 3462, Address: 0x18ea30, Func Offset: 0xa0
	// Line 3463, Address: 0x18ea34, Func Offset: 0xa4
	// Line 3464, Address: 0x18ea5c, Func Offset: 0xcc
	// Line 3465, Address: 0x18ea74, Func Offset: 0xe4
	// Line 3466, Address: 0x18ea98, Func Offset: 0x108
	// Line 3467, Address: 0x18eaa0, Func Offset: 0x110
	// Line 3468, Address: 0x18eac0, Func Offset: 0x130
	// Line 3469, Address: 0x18eac8, Func Offset: 0x138
	// Line 3470, Address: 0x18eacc, Func Offset: 0x13c
	// Line 3471, Address: 0x18eae0, Func Offset: 0x150
	// Line 3473, Address: 0x18eaf0, Func Offset: 0x160
	// Line 3474, Address: 0x18eaf8, Func Offset: 0x168
	// Line 3475, Address: 0x18eb04, Func Offset: 0x174
	// Line 3476, Address: 0x18eb08, Func Offset: 0x178
	// Line 3478, Address: 0x18eb18, Func Offset: 0x188
	// Line 3479, Address: 0x18eb30, Func Offset: 0x1a0
	// Line 3480, Address: 0x18eb3c, Func Offset: 0x1ac
	// Line 3481, Address: 0x18eb40, Func Offset: 0x1b0
	// Line 3482, Address: 0x18eb68, Func Offset: 0x1d8
	// Line 3483, Address: 0x18eb70, Func Offset: 0x1e0
	// Func End, Address: 0x18eb78, Func Offset: 0x1e8
}

// 
// Start address: 0x18eb80
void check_hit_chara_sphere(EnemyClHitResult* res, _anon4* sphere, sfCldObject* ignore_cld)
{
	int ncld;
	int i;
	sfCldObject* pc;
	sfCldObject* pcm;
	sfCldPart* pp;
	float cp[4];
	float vec[4];
	float dir[4];
	float d;
	float dm;
	// Line 3547, Address: 0x18eb80, Func Offset: 0
	// Line 3554, Address: 0x18eba8, Func Offset: 0x28
	// Line 3547, Address: 0x18ebac, Func Offset: 0x2c
	// Line 3554, Address: 0x18ebb0, Func Offset: 0x30
	// Line 3547, Address: 0x18ebb4, Func Offset: 0x34
	// Line 3554, Address: 0x18ebb8, Func Offset: 0x38
	// Line 3555, Address: 0x18ebc4, Func Offset: 0x44
	// Line 3556, Address: 0x18ebcc, Func Offset: 0x4c
	// Line 3557, Address: 0x18ebd8, Func Offset: 0x58
	// Line 3558, Address: 0x18ebf8, Func Offset: 0x78
	// Line 3560, Address: 0x18ec00, Func Offset: 0x80
	// Line 3561, Address: 0x18ec08, Func Offset: 0x88
	// Line 3562, Address: 0x18ec18, Func Offset: 0x98
	// Line 3563, Address: 0x18ec30, Func Offset: 0xb0
	// Line 3562, Address: 0x18ec34, Func Offset: 0xb4
	// Line 3563, Address: 0x18ec38, Func Offset: 0xb8
	// Line 3565, Address: 0x18ec40, Func Offset: 0xc0
	// Line 3566, Address: 0x18ec64, Func Offset: 0xe4
	// Line 3568, Address: 0x18ec68, Func Offset: 0xe8
	// Line 3571, Address: 0x18ec70, Func Offset: 0xf0
	// Line 3574, Address: 0x18ec78, Func Offset: 0xf8
	// Line 3575, Address: 0x18ec88, Func Offset: 0x108
	// Line 3577, Address: 0x18ec8c, Func Offset: 0x10c
	// Line 3578, Address: 0x18ec90, Func Offset: 0x110
	// Line 3581, Address: 0x18eca0, Func Offset: 0x120
	// Line 3582, Address: 0x18eca8, Func Offset: 0x128
	// Line 3583, Address: 0x18ecb4, Func Offset: 0x134
	// Line 3587, Address: 0x18ecbc, Func Offset: 0x13c
	// Line 3586, Address: 0x18ecc0, Func Offset: 0x140
	// Line 3588, Address: 0x18ecc4, Func Offset: 0x144
	// Line 3589, Address: 0x18ecd0, Func Offset: 0x150
	// Line 3590, Address: 0x18ecdc, Func Offset: 0x15c
	// Line 3591, Address: 0x18ece4, Func Offset: 0x164
	// Line 3592, Address: 0x18ecec, Func Offset: 0x16c
	// Line 3593, Address: 0x18ed04, Func Offset: 0x184
	// Line 3594, Address: 0x18ed2c, Func Offset: 0x1ac
	// Line 3597, Address: 0x18ed38, Func Offset: 0x1b8
	// Line 3596, Address: 0x18ed3c, Func Offset: 0x1bc
	// Line 3595, Address: 0x18ed40, Func Offset: 0x1c0
	// Line 3597, Address: 0x18ed44, Func Offset: 0x1c4
	// Line 3600, Address: 0x18ed50, Func Offset: 0x1d0
	// Line 3601, Address: 0x18ed64, Func Offset: 0x1e4
	// Line 3606, Address: 0x18ed6c, Func Offset: 0x1ec
	// Line 3607, Address: 0x18eda0, Func Offset: 0x220
	// Line 3610, Address: 0x18edc0, Func Offset: 0x240
	// Line 3611, Address: 0x18eddc, Func Offset: 0x25c
	// Line 3612, Address: 0x18ee00, Func Offset: 0x280
	// Line 3613, Address: 0x18ee20, Func Offset: 0x2a0
	// Line 3616, Address: 0x18ee28, Func Offset: 0x2a8
	// Line 3614, Address: 0x18ee2c, Func Offset: 0x2ac
	// Line 3616, Address: 0x18ee30, Func Offset: 0x2b0
	// Line 3615, Address: 0x18ee34, Func Offset: 0x2b4
	// Line 3616, Address: 0x18ee38, Func Offset: 0x2b8
	// Line 3618, Address: 0x18ee40, Func Offset: 0x2c0
	// Func End, Address: 0x18ee6c, Func Offset: 0x2ec
}

// 
// Start address: 0x18ee70
void check_hit_line(EnemyClHitResult* res, _anon3* line)
{
	_anon0* poly;
	_anon1 plane;
	EnemyClHitResult* cres;
	// Line 3627, Address: 0x18ee70, Func Offset: 0
	// Line 3631, Address: 0x18ee88, Func Offset: 0x18
	// Line 3632, Address: 0x18ee98, Func Offset: 0x28
	// Line 3633, Address: 0x18eea0, Func Offset: 0x30
	// Line 3634, Address: 0x18eeb4, Func Offset: 0x44
	// Line 3635, Address: 0x18eec0, Func Offset: 0x50
	// Line 3636, Address: 0x18eecc, Func Offset: 0x5c
	// Line 3637, Address: 0x18eed4, Func Offset: 0x64
	// Line 3638, Address: 0x18eedc, Func Offset: 0x6c
	// Line 3639, Address: 0x18eef4, Func Offset: 0x84
	// Line 3641, Address: 0x18eef8, Func Offset: 0x88
	// Line 3639, Address: 0x18eefc, Func Offset: 0x8c
	// Line 3640, Address: 0x18ef00, Func Offset: 0x90
	// Line 3641, Address: 0x18ef04, Func Offset: 0x94
	// Line 3643, Address: 0x18ef0c, Func Offset: 0x9c
	// Line 3644, Address: 0x18ef1c, Func Offset: 0xac
	// Line 3645, Address: 0x18ef2c, Func Offset: 0xbc
	// Line 3649, Address: 0x18ef40, Func Offset: 0xd0
	// Line 3650, Address: 0x18ef4c, Func Offset: 0xdc
	// Func End, Address: 0x18ef64, Func Offset: 0xf4
}

// 
// Start address: 0x18ef70
void check_hit_line2(EnemyClHitResult* res, _anon3* line)
{
	_anon0* poly;
	_anon1 plane;
	int npolys;
	int i;
	float d;
	float dist;
	float cpos[4];
	EnemyClHitResult* cres;
	_anon3 tline;
	// Line 3659, Address: 0x18ef70, Func Offset: 0
	// Line 3666, Address: 0x18ef90, Func Offset: 0x20
	// Line 3667, Address: 0x18efa0, Func Offset: 0x30
	// Line 3668, Address: 0x18efa8, Func Offset: 0x38
	// Line 3669, Address: 0x18efbc, Func Offset: 0x4c
	// Line 3670, Address: 0x18efc8, Func Offset: 0x58
	// Line 3671, Address: 0x18efd4, Func Offset: 0x64
	// Line 3672, Address: 0x18efdc, Func Offset: 0x6c
	// Line 3673, Address: 0x18efe4, Func Offset: 0x74
	// Line 3674, Address: 0x18effc, Func Offset: 0x8c
	// Line 3675, Address: 0x18f00c, Func Offset: 0x9c
	// Line 3677, Address: 0x18f010, Func Offset: 0xa0
	// Line 3675, Address: 0x18f014, Func Offset: 0xa4
	// Line 3676, Address: 0x18f018, Func Offset: 0xa8
	// Line 3677, Address: 0x18f01c, Func Offset: 0xac
	// Line 3678, Address: 0x18f024, Func Offset: 0xb4
	// Line 3680, Address: 0x18f030, Func Offset: 0xc0
	// Line 3681, Address: 0x18f040, Func Offset: 0xd0
	// Line 3682, Address: 0x18f050, Func Offset: 0xe0
	// Line 3683, Address: 0x18f060, Func Offset: 0xf0
	// Line 3686, Address: 0x18f068, Func Offset: 0xf8
	// Line 3687, Address: 0x18f078, Func Offset: 0x108
	// Line 3688, Address: 0x18f080, Func Offset: 0x110
	// Line 3689, Address: 0x18f08c, Func Offset: 0x11c
	// Line 3690, Address: 0x18f094, Func Offset: 0x124
	// Line 3691, Address: 0x18f0a0, Func Offset: 0x130
	// Line 3692, Address: 0x18f0ac, Func Offset: 0x13c
	// Line 3693, Address: 0x18f0bc, Func Offset: 0x14c
	// Line 3694, Address: 0x18f0c4, Func Offset: 0x154
	// Line 3695, Address: 0x18f0d0, Func Offset: 0x160
	// Line 3696, Address: 0x18f0dc, Func Offset: 0x16c
	// Line 3699, Address: 0x18f0e0, Func Offset: 0x170
	// Line 3697, Address: 0x18f0e4, Func Offset: 0x174
	// Line 3700, Address: 0x18f0e8, Func Offset: 0x178
	// Line 3698, Address: 0x18f0ec, Func Offset: 0x17c
	// Line 3700, Address: 0x18f0f0, Func Offset: 0x180
	// Line 3703, Address: 0x18f100, Func Offset: 0x190
	// Line 3704, Address: 0x18f110, Func Offset: 0x1a0
	// Line 3705, Address: 0x18f120, Func Offset: 0x1b0
	// Line 3706, Address: 0x18f12c, Func Offset: 0x1bc
	// Line 3707, Address: 0x18f13c, Func Offset: 0x1cc
	// Line 3708, Address: 0x18f148, Func Offset: 0x1d8
	// Line 3710, Address: 0x18f154, Func Offset: 0x1e4
	// Line 3711, Address: 0x18f168, Func Offset: 0x1f8
	// Line 3716, Address: 0x18f17c, Func Offset: 0x20c
	// Line 3717, Address: 0x18f180, Func Offset: 0x210
	// Line 3718, Address: 0x18f18c, Func Offset: 0x21c
	// Func End, Address: 0x18f1ac, Func Offset: 0x23c
}

// 
// Start address: 0x18f1b0
void common_init(EnemyClHitResult* res, _anon3* line, float* start, float* end)
{
	// Line 3728, Address: 0x18f1b0, Func Offset: 0
	// Line 3729, Address: 0x18f1bc, Func Offset: 0xc
	// Line 3730, Address: 0x18f1c4, Func Offset: 0x14
	// Line 3731, Address: 0x18f1cc, Func Offset: 0x1c
	// Line 3732, Address: 0x18f1d4, Func Offset: 0x24
	// Line 3733, Address: 0x18f1e4, Func Offset: 0x34
	// Func End, Address: 0x18f1f4, Func Offset: 0x44
}

// 
// Start address: 0x18f200
EnemyClHitResultType EnemyClCheckHitOnlyWall(EnemyClHitResult* res, float* start, float* end)
{
	_anon3 line;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 3822, Address: 0x18f200, Func Offset: 0
	// Line 3830, Address: 0x18f220, Func Offset: 0x20
	// Line 3832, Address: 0x18f23c, Func Offset: 0x3c
	// Line 3833, Address: 0x18f250, Func Offset: 0x50
	// Line 3836, Address: 0x18f25c, Func Offset: 0x5c
	// Line 3837, Address: 0x18f264, Func Offset: 0x64
	// Line 3838, Address: 0x18f26c, Func Offset: 0x6c
	// Line 3839, Address: 0x18f270, Func Offset: 0x70
	// Line 3840, Address: 0x18f274, Func Offset: 0x74
	// Func End, Address: 0x18f290, Func Offset: 0x90
}

// 
// Start address: 0x18f290
EnemyClHitResultType EnemyClCheckHitOnlyWallPlus(EnemyClHitResult* res, float* start, float* end, float height)
{
	float sp[4];
	float ep[4];
	// Line 3855, Address: 0x18f290, Func Offset: 0
	// Line 3857, Address: 0x18f298, Func Offset: 0x8
	// Line 3858, Address: 0x18f2a4, Func Offset: 0x14
	// Line 3861, Address: 0x18f2b0, Func Offset: 0x20
	// Line 3859, Address: 0x18f2b4, Func Offset: 0x24
	// Line 3861, Address: 0x18f2b8, Func Offset: 0x28
	// Line 3860, Address: 0x18f2bc, Func Offset: 0x2c
	// Line 3859, Address: 0x18f2c0, Func Offset: 0x30
	// Line 3860, Address: 0x18f2c4, Func Offset: 0x34
	// Line 3859, Address: 0x18f2c8, Func Offset: 0x38
	// Line 3861, Address: 0x18f2cc, Func Offset: 0x3c
	// Line 3862, Address: 0x18f2d4, Func Offset: 0x44
	// Func End, Address: 0x18f2e0, Func Offset: 0x50
}

// 
// Start address: 0x18f2e0
EnemyClHitResultType EnemyClCheckHitOnlyFloor(EnemyClHitResult* res, float* start, float* end)
{
	_anon3 line;
	int npolys;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 3874, Address: 0x18f2e0, Func Offset: 0
	// Line 3883, Address: 0x18f300, Func Offset: 0x20
	// Line 3885, Address: 0x18f31c, Func Offset: 0x3c
	// Line 3886, Address: 0x18f330, Func Offset: 0x50
	// Line 3887, Address: 0x18f338, Func Offset: 0x58
	// Line 3891, Address: 0x18f364, Func Offset: 0x84
	// Line 3892, Address: 0x18f36c, Func Offset: 0x8c
	// Line 3893, Address: 0x18f374, Func Offset: 0x94
	// Line 3894, Address: 0x18f378, Func Offset: 0x98
	// Line 3895, Address: 0x18f37c, Func Offset: 0x9c
	// Func End, Address: 0x18f398, Func Offset: 0xb8
}

// 
// Start address: 0x18f3a0
int check_polygon_on_same_plane(_anon0* poly1, _anon0* poly2)
{
	_anon1 plane1;
	_anon1 plane2;
	float vec[4];
	// Line 3903, Address: 0x18f3a0, Func Offset: 0
	// Line 3906, Address: 0x18f3ac, Func Offset: 0xc
	// Line 3907, Address: 0x18f3c8, Func Offset: 0x28
	// Line 3908, Address: 0x18f3d8, Func Offset: 0x38
	// Line 3909, Address: 0x18f3e0, Func Offset: 0x40
	// Line 3910, Address: 0x18f3ec, Func Offset: 0x4c
	// Line 3911, Address: 0x18f408, Func Offset: 0x68
	// Line 3913, Address: 0x18f464, Func Offset: 0xc4
	// Line 3914, Address: 0x18f46c, Func Offset: 0xcc
	// Line 3915, Address: 0x18f470, Func Offset: 0xd0
	// Line 3916, Address: 0x18f478, Func Offset: 0xd8
	// Func End, Address: 0x18f488, Func Offset: 0xe8
}

// 
// Start address: 0x18f490
EnemyClHitResultType EnemyClCheckHitToWall(EnemyClHitResult* res, float* start, float* end, float range)
{
	_anon3 line;
	_anon0* poly;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 3931, Address: 0x18f490, Func Offset: 0
	// Line 3940, Address: 0x18f4b8, Func Offset: 0x28
	// Line 3942, Address: 0x18f4d4, Func Offset: 0x44
	// Line 3943, Address: 0x18f4e8, Func Offset: 0x58
	// Line 3944, Address: 0x18f4f4, Func Offset: 0x64
	// Line 3945, Address: 0x18f500, Func Offset: 0x70
	// Line 3946, Address: 0x18f508, Func Offset: 0x78
	// Line 3948, Address: 0x18f51c, Func Offset: 0x8c
	// Line 3953, Address: 0x18f520, Func Offset: 0x90
	// Line 3954, Address: 0x18f528, Func Offset: 0x98
	// Line 3956, Address: 0x18f530, Func Offset: 0xa0
	// Line 3957, Address: 0x18f534, Func Offset: 0xa4
	// Func End, Address: 0x18f554, Func Offset: 0xc4
}

// 
// Start address: 0x18f560
EnemyClHitResultType EnemyClCheckHitToWallTwoWay(EnemyClHitResult* res, float* start, float* end, float range)
{
	_anon3 line;
	_anon0* poly;
	float vec[4];
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 3973, Address: 0x18f560, Func Offset: 0
	// Line 3980, Address: 0x18f588, Func Offset: 0x28
	// Line 3982, Address: 0x18f590, Func Offset: 0x30
	// Line 3983, Address: 0x18f598, Func Offset: 0x38
	// Line 3984, Address: 0x18f5a4, Func Offset: 0x44
	// Line 3985, Address: 0x18f5a8, Func Offset: 0x48
	// Line 3986, Address: 0x18f5bc, Func Offset: 0x5c
	// Line 3987, Address: 0x18f5c8, Func Offset: 0x68
	// Line 3988, Address: 0x18f5d4, Func Offset: 0x74
	// Line 3989, Address: 0x18f5dc, Func Offset: 0x7c
	// Line 3991, Address: 0x18f5f0, Func Offset: 0x90
	// Line 3993, Address: 0x18f5f4, Func Offset: 0x94
	// Line 3994, Address: 0x18f610, Func Offset: 0xb0
	// Line 3995, Address: 0x18f63c, Func Offset: 0xdc
	// Line 3997, Address: 0x18f65c, Func Offset: 0xfc
	// Line 3998, Address: 0x18f660, Func Offset: 0x100
	// Line 4000, Address: 0x18f66c, Func Offset: 0x10c
	// Line 4001, Address: 0x18f680, Func Offset: 0x120
	// Line 4002, Address: 0x18f68c, Func Offset: 0x12c
	// Line 4005, Address: 0x18f690, Func Offset: 0x130
	// Line 4006, Address: 0x18f698, Func Offset: 0x138
	// Line 4008, Address: 0x18f6a0, Func Offset: 0x140
	// Line 4009, Address: 0x18f6a4, Func Offset: 0x144
	// Func End, Address: 0x18f6c4, Func Offset: 0x164
}

// 
// Start address: 0x18f6d0
EnemyClHitResultType EnemyClCheckHitEyeOnlyWall(EnemyClHitResult* res, float* start, float* end)
{
	_anon3 line;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 4052, Address: 0x18f6d0, Func Offset: 0
	// Line 4060, Address: 0x18f6f0, Func Offset: 0x20
	// Line 4062, Address: 0x18f70c, Func Offset: 0x3c
	// Line 4063, Address: 0x18f720, Func Offset: 0x50
	// Line 4066, Address: 0x18f72c, Func Offset: 0x5c
	// Line 4067, Address: 0x18f734, Func Offset: 0x64
	// Line 4068, Address: 0x18f73c, Func Offset: 0x6c
	// Line 4069, Address: 0x18f740, Func Offset: 0x70
	// Line 4070, Address: 0x18f744, Func Offset: 0x74
	// Func End, Address: 0x18f760, Func Offset: 0x90
}

// 
// Start address: 0x18f760
EnemyClHitResultType EnemyClCheckHitSphereOnlyWall(EnemyClHitResult* res, float* pos, float radius)
{
	_anon4 sphere;
	int npolys;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 4243, Address: 0x18f760, Func Offset: 0
	// Line 4252, Address: 0x18f780, Func Offset: 0x20
	// Line 4254, Address: 0x18f79c, Func Offset: 0x3c
	// Line 4256, Address: 0x18f7a8, Func Offset: 0x48
	// Line 4259, Address: 0x18f7b0, Func Offset: 0x50
	// Line 4257, Address: 0x18f7bc, Func Offset: 0x5c
	// Line 4259, Address: 0x18f7c0, Func Offset: 0x60
	// Line 4263, Address: 0x18f7e0, Func Offset: 0x80
	// Line 4264, Address: 0x18f7e8, Func Offset: 0x88
	// Line 4266, Address: 0x18f7f0, Func Offset: 0x90
	// Line 4267, Address: 0x18f7f4, Func Offset: 0x94
	// Func End, Address: 0x18f810, Func Offset: 0xb0
}

// 
// Start address: 0x18f810
EnemyClHitResultType EnemyClCheckHitSphereOnlyWallN(EnemyClHitResult* res, float* pos, float radius, float* normal)
{
	_anon4 sphere;
	int npolys;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 4282, Address: 0x18f810, Func Offset: 0
	// Line 4291, Address: 0x18f838, Func Offset: 0x28
	// Line 4293, Address: 0x18f854, Func Offset: 0x44
	// Line 4295, Address: 0x18f860, Func Offset: 0x50
	// Line 4298, Address: 0x18f868, Func Offset: 0x58
	// Line 4296, Address: 0x18f86c, Func Offset: 0x5c
	// Line 4298, Address: 0x18f870, Func Offset: 0x60
	// Line 4301, Address: 0x18f898, Func Offset: 0x88
	// Line 4302, Address: 0x18f8a0, Func Offset: 0x90
	// Line 4304, Address: 0x18f8a8, Func Offset: 0x98
	// Line 4305, Address: 0x18f8ac, Func Offset: 0x9c
	// Func End, Address: 0x18f8cc, Func Offset: 0xbc
}

// 
// Start address: 0x18f8d0
EnemyClHitResultType EnemyClCheckHitSphereOnlyChara(EnemyClHitResult* res, float* pos, float radius, sfObj* ignore_obj)
{
	_anon4 sphere;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	EnemyCollision* pec;
	sfCldObject* ignore_cld;
	// Line 4355, Address: 0x18f8d0, Func Offset: 0
	// Line 4365, Address: 0x18f8f8, Func Offset: 0x28
	// Line 4368, Address: 0x18f910, Func Offset: 0x40
	// Line 4365, Address: 0x18f914, Func Offset: 0x44
	// Line 4369, Address: 0x18f918, Func Offset: 0x48
	// Line 4370, Address: 0x18f91c, Func Offset: 0x4c
	// Line 4372, Address: 0x18f928, Func Offset: 0x58
	// Line 4373, Address: 0x18f92c, Func Offset: 0x5c
	// Line 4374, Address: 0x18f934, Func Offset: 0x64
	// Line 4375, Address: 0x18f93c, Func Offset: 0x6c
	// Line 4376, Address: 0x18f944, Func Offset: 0x74
	// Line 4379, Address: 0x18f948, Func Offset: 0x78
	// Line 4382, Address: 0x18f958, Func Offset: 0x88
	// Line 4383, Address: 0x18f960, Func Offset: 0x90
	// Line 4385, Address: 0x18f968, Func Offset: 0x98
	// Line 4386, Address: 0x18f96c, Func Offset: 0x9c
	// Func End, Address: 0x18f98c, Func Offset: 0xbc
}

// 
// Start address: 0x18f990
EnemyClHitResultType EnemyClCheckHitSphereOnlyPlayer(EnemyClHitResult* res, float* pos, float radius)
{
	_anon4 sphere;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	// Line 4398, Address: 0x18f990, Func Offset: 0
	// Line 4406, Address: 0x18f9b0, Func Offset: 0x20
	// Line 4409, Address: 0x18f9c8, Func Offset: 0x38
	// Line 4406, Address: 0x18f9cc, Func Offset: 0x3c
	// Line 4410, Address: 0x18f9d0, Func Offset: 0x40
	// Line 4411, Address: 0x18f9d4, Func Offset: 0x44
	// Line 4413, Address: 0x18f9e0, Func Offset: 0x50
	// Line 4414, Address: 0x18f9e8, Func Offset: 0x58
	// Line 4413, Address: 0x18f9ec, Func Offset: 0x5c
	// Line 4414, Address: 0x18f9f0, Func Offset: 0x60
	// Line 4415, Address: 0x18f9fc, Func Offset: 0x6c
	// Line 4417, Address: 0x18fa04, Func Offset: 0x74
	// Line 4418, Address: 0x18fa0c, Func Offset: 0x7c
	// Line 4419, Address: 0x18fa14, Func Offset: 0x84
	// Line 4420, Address: 0x18fa18, Func Offset: 0x88
	// Line 4421, Address: 0x18fa1c, Func Offset: 0x8c
	// Func End, Address: 0x18fa38, Func Offset: 0xa8
}

// 
// Start address: 0x18fa40
EnemyClHitResultType EnemyClCheckHitSphereEnemyTarget(EnemyClHitResult* res, float* pos, float radius, sfObj* ignore_obj)
{
	_anon4 sphere;
	EnemyClHitResult* tres;
	EnemyClHitResultType r;
	EnemyCollision* pec;
	sfCldObject* ignore_cld;
	// Line 4434, Address: 0x18fa40, Func Offset: 0
	// Line 4444, Address: 0x18fa68, Func Offset: 0x28
	// Line 4447, Address: 0x18fa80, Func Offset: 0x40
	// Line 4444, Address: 0x18fa84, Func Offset: 0x44
	// Line 4448, Address: 0x18fa88, Func Offset: 0x48
	// Line 4449, Address: 0x18fa8c, Func Offset: 0x4c
	// Line 4451, Address: 0x18fa98, Func Offset: 0x58
	// Line 4452, Address: 0x18fa9c, Func Offset: 0x5c
	// Line 4453, Address: 0x18faa4, Func Offset: 0x64
	// Line 4454, Address: 0x18faac, Func Offset: 0x6c
	// Line 4455, Address: 0x18fab4, Func Offset: 0x74
	// Line 4458, Address: 0x18fab8, Func Offset: 0x78
	// Line 4459, Address: 0x18fac0, Func Offset: 0x80
	// Line 4458, Address: 0x18fac8, Func Offset: 0x88
	// Line 4459, Address: 0x18facc, Func Offset: 0x8c
	// Line 4460, Address: 0x18fad4, Func Offset: 0x94
	// Line 4462, Address: 0x18fadc, Func Offset: 0x9c
	// Line 4463, Address: 0x18fae4, Func Offset: 0xa4
	// Line 4464, Address: 0x18faec, Func Offset: 0xac
	// Line 4465, Address: 0x18faf0, Func Offset: 0xb0
	// Line 4466, Address: 0x18faf4, Func Offset: 0xb4
	// Func End, Address: 0x18fb14, Func Offset: 0xd4
}

// 
// Start address: 0x18fb20
int EnemyClGetHitPos(sfCldObject* cld, float* pos, float* hpos, float* hdir, float size)
{
	sfCldPart* tcp;
	sfCldBody* tcb;
	float tpos[4];
	float vec[4];
	_anon4 sphere;
	_anon3 line;
	_anon3 line2;
	int i;
	int m;
	float d;
	float dm;
	float dn;
	// Line 4590, Address: 0x18fb20, Func Offset: 0
	// Line 4599, Address: 0x18fb28, Func Offset: 0x8
	// Line 4590, Address: 0x18fb2c, Func Offset: 0xc
	// Line 4599, Address: 0x18fb60, Func Offset: 0x40
	// Line 4601, Address: 0x18fb68, Func Offset: 0x48
	// Line 4600, Address: 0x18fb74, Func Offset: 0x54
	// Line 4601, Address: 0x18fb78, Func Offset: 0x58
	// Line 4602, Address: 0x18fb98, Func Offset: 0x78
	// Line 4603, Address: 0x18fbb4, Func Offset: 0x94
	// Line 4604, Address: 0x18fbd4, Func Offset: 0xb4
	// Line 4607, Address: 0x18fbf0, Func Offset: 0xd0
	// Line 4608, Address: 0x18fbf8, Func Offset: 0xd8
	// Line 4606, Address: 0x18fbfc, Func Offset: 0xdc
	// Line 4608, Address: 0x18fc00, Func Offset: 0xe0
	// Line 4609, Address: 0x18fc08, Func Offset: 0xe8
	// Line 4610, Address: 0x18fc30, Func Offset: 0x110
	// Line 4614, Address: 0x18fc64, Func Offset: 0x144
	// Line 4616, Address: 0x18fc80, Func Offset: 0x160
	// Line 4618, Address: 0x18fcd4, Func Offset: 0x1b4
	// Line 4619, Address: 0x18fcd8, Func Offset: 0x1b8
	// Line 4620, Address: 0x18fcec, Func Offset: 0x1cc
	// Line 4621, Address: 0x18fd04, Func Offset: 0x1e4
	// Line 4622, Address: 0x18fd24, Func Offset: 0x204
	// Line 4623, Address: 0x18fd48, Func Offset: 0x228
	// Line 4624, Address: 0x18fd50, Func Offset: 0x230
	// Line 4625, Address: 0x18fd6c, Func Offset: 0x24c
	// Line 4626, Address: 0x18fd98, Func Offset: 0x278
	// Line 4627, Address: 0x18fdb4, Func Offset: 0x294
	// Line 4628, Address: 0x18fde0, Func Offset: 0x2c0
	// Line 4629, Address: 0x18fe10, Func Offset: 0x2f0
	// Line 4630, Address: 0x18fe2c, Func Offset: 0x30c
	// Line 4631, Address: 0x18fe50, Func Offset: 0x330
	// Line 4632, Address: 0x18fe6c, Func Offset: 0x34c
	// Line 4633, Address: 0x18fe84, Func Offset: 0x364
	// Line 4634, Address: 0x18fea4, Func Offset: 0x384
	// Line 4638, Address: 0x18fec8, Func Offset: 0x3a8
	// Line 4640, Address: 0x18fed0, Func Offset: 0x3b0
	// Line 4641, Address: 0x18fee8, Func Offset: 0x3c8
	// Line 4642, Address: 0x18ff0c, Func Offset: 0x3ec
	// Line 4643, Address: 0x18ff20, Func Offset: 0x400
	// Line 4645, Address: 0x18ff34, Func Offset: 0x414
	// Line 4647, Address: 0x18ff48, Func Offset: 0x428
	// Line 4648, Address: 0x18ff50, Func Offset: 0x430
	// Line 4649, Address: 0x18ff68, Func Offset: 0x448
	// Line 4650, Address: 0x18ff94, Func Offset: 0x474
	// Line 4651, Address: 0x18ffc4, Func Offset: 0x4a4
	// Line 4652, Address: 0x18ffe0, Func Offset: 0x4c0
	// Line 4653, Address: 0x190004, Func Offset: 0x4e4
	// Line 4654, Address: 0x190020, Func Offset: 0x500
	// Line 4657, Address: 0x190038, Func Offset: 0x518
	// Line 4662, Address: 0x19004c, Func Offset: 0x52c
	// Line 4663, Address: 0x190054, Func Offset: 0x534
	// Line 4664, Address: 0x190058, Func Offset: 0x538
	// Line 4665, Address: 0x19006c, Func Offset: 0x54c
	// Line 4666, Address: 0x190084, Func Offset: 0x564
	// Line 4667, Address: 0x1900a4, Func Offset: 0x584
	// Line 4668, Address: 0x1900c8, Func Offset: 0x5a8
	// Line 4669, Address: 0x1900d0, Func Offset: 0x5b0
	// Line 4670, Address: 0x1900ec, Func Offset: 0x5cc
	// Line 4671, Address: 0x190118, Func Offset: 0x5f8
	// Line 4672, Address: 0x190148, Func Offset: 0x628
	// Line 4673, Address: 0x190164, Func Offset: 0x644
	// Line 4674, Address: 0x190180, Func Offset: 0x660
	// Line 4675, Address: 0x190198, Func Offset: 0x678
	// Line 4676, Address: 0x1901b4, Func Offset: 0x694
	// Line 4682, Address: 0x1901d8, Func Offset: 0x6b8
	// Line 4684, Address: 0x1901e4, Func Offset: 0x6c4
	// Line 4683, Address: 0x1901e8, Func Offset: 0x6c8
	// Line 4684, Address: 0x1901ec, Func Offset: 0x6cc
	// Line 4686, Address: 0x1901f4, Func Offset: 0x6d4
	// Line 4687, Address: 0x19020c, Func Offset: 0x6ec
	// Line 4688, Address: 0x190228, Func Offset: 0x708
	// Func End, Address: 0x190258, Func Offset: 0x738
}

// 
// Start address: 0x190260
int EnemyClCheckInWall(float* pos)
{
	// Line 4698, Address: 0x190260, Func Offset: 0
	// Func End, Address: 0x190268, Func Offset: 0x8
}

// 
// Start address: 0x190270
_anon0* EnemyClCheckJustWallOldType(float* pos, float range)
{
	_anon0* poly;
	_anon0* rpoly;
	_anon3 line;
	_anon1 plane;
	float dm;
	float d;
	int i;
	// Line 4709, Address: 0x190270, Func Offset: 0
	// Line 4716, Address: 0x190274, Func Offset: 0x4
	// Line 4709, Address: 0x190278, Func Offset: 0x8
	// Line 4717, Address: 0x19027c, Func Offset: 0xc
	// Line 4709, Address: 0x190280, Func Offset: 0x10
	// Line 4715, Address: 0x190294, Func Offset: 0x24
	// Line 4709, Address: 0x190298, Func Offset: 0x28
	// Line 4716, Address: 0x1902a0, Func Offset: 0x30
	// Line 4717, Address: 0x1902a8, Func Offset: 0x38
	// Line 4718, Address: 0x1902b0, Func Offset: 0x40
	// Line 4719, Address: 0x1902bc, Func Offset: 0x4c
	// Line 4721, Address: 0x1902dc, Func Offset: 0x6c
	// Line 4722, Address: 0x1902e0, Func Offset: 0x70
	// Line 4723, Address: 0x1902e4, Func Offset: 0x74
	// Line 4724, Address: 0x1902e8, Func Offset: 0x78
	// Line 4725, Address: 0x1902f0, Func Offset: 0x80
	// Line 4726, Address: 0x19030c, Func Offset: 0x9c
	// Line 4727, Address: 0x190310, Func Offset: 0xa0
	// Line 4728, Address: 0x19031c, Func Offset: 0xac
	// Line 4729, Address: 0x190324, Func Offset: 0xb4
	// Line 4730, Address: 0x19032c, Func Offset: 0xbc
	// Line 4731, Address: 0x190330, Func Offset: 0xc0
	// Line 4732, Address: 0x19033c, Func Offset: 0xcc
	// Line 4733, Address: 0x190348, Func Offset: 0xd8
	// Line 4734, Address: 0x190350, Func Offset: 0xe0
	// Line 4735, Address: 0x190354, Func Offset: 0xe4
	// Line 4736, Address: 0x19035c, Func Offset: 0xec
	// Line 4737, Address: 0x190360, Func Offset: 0xf0
	// Line 4739, Address: 0x190378, Func Offset: 0x108
	// Line 4740, Address: 0x190384, Func Offset: 0x114
	// Line 4741, Address: 0x19038c, Func Offset: 0x11c
	// Line 4742, Address: 0x190394, Func Offset: 0x124
	// Line 4743, Address: 0x1903a0, Func Offset: 0x130
	// Line 4746, Address: 0x1903ac, Func Offset: 0x13c
	// Line 4744, Address: 0x1903b8, Func Offset: 0x148
	// Line 4745, Address: 0x1903bc, Func Offset: 0x14c
	// Line 4746, Address: 0x1903c0, Func Offset: 0x150
	// Line 4749, Address: 0x1903c4, Func Offset: 0x154
	// Line 4751, Address: 0x1903dc, Func Offset: 0x16c
	// Line 4750, Address: 0x1903e0, Func Offset: 0x170
	// Line 4752, Address: 0x1903e4, Func Offset: 0x174
	// Func End, Address: 0x190408, Func Offset: 0x198
}

// 
// Start address: 0x190410
_anon0* EnemyClCheckJustWall(float* pos, float range)
{
	_anon0* poly;
	_anon0* rpoly;
	_anon4 sphere;
	_anon1 plane;
	float dm;
	float d;
	int i;
	int n;
	// Line 4762, Address: 0x190410, Func Offset: 0
	// Line 4768, Address: 0x190418, Func Offset: 0x8
	// Line 4762, Address: 0x19041c, Func Offset: 0xc
	// Line 4768, Address: 0x190440, Func Offset: 0x30
	// Line 4770, Address: 0x190448, Func Offset: 0x38
	// Line 4771, Address: 0x190458, Func Offset: 0x48
	// Line 4772, Address: 0x190460, Func Offset: 0x50
	// Line 4774, Address: 0x190470, Func Offset: 0x60
	// Line 4776, Address: 0x190478, Func Offset: 0x68
	// Line 4775, Address: 0x19047c, Func Offset: 0x6c
	// Line 4776, Address: 0x190480, Func Offset: 0x70
	// Line 4777, Address: 0x190490, Func Offset: 0x80
	// Line 4778, Address: 0x19049c, Func Offset: 0x8c
	// Line 4779, Address: 0x1904ac, Func Offset: 0x9c
	// Line 4784, Address: 0x1904e0, Func Offset: 0xd0
	// Line 4785, Address: 0x1904e8, Func Offset: 0xd8
	// Line 4788, Address: 0x1904f4, Func Offset: 0xe4
	// Line 4786, Address: 0x190500, Func Offset: 0xf0
	// Line 4787, Address: 0x190504, Func Offset: 0xf4
	// Line 4788, Address: 0x190508, Func Offset: 0xf8
	// Line 4790, Address: 0x19050c, Func Offset: 0xfc
	// Line 4791, Address: 0x190520, Func Offset: 0x110
	// Line 4792, Address: 0x190528, Func Offset: 0x118
	// Line 4793, Address: 0x190530, Func Offset: 0x120
	// Line 4794, Address: 0x19053c, Func Offset: 0x12c
	// Line 4796, Address: 0x190548, Func Offset: 0x138
	// Line 4797, Address: 0x190554, Func Offset: 0x144
	// Line 4800, Address: 0x190560, Func Offset: 0x150
	// Line 4798, Address: 0x19056c, Func Offset: 0x15c
	// Line 4799, Address: 0x190570, Func Offset: 0x160
	// Line 4800, Address: 0x190574, Func Offset: 0x164
	// Line 4802, Address: 0x190578, Func Offset: 0x168
	// Line 4804, Address: 0x190588, Func Offset: 0x178
	// Line 4805, Address: 0x190590, Func Offset: 0x180
	// Line 4806, Address: 0x190598, Func Offset: 0x188
	// Func End, Address: 0x1905c0, Func Offset: 0x1b0
}

// 
// Start address: 0x1905c0
int EnemyClGetWallNormal(float* normal, float* pos, float range)
{
	_anon0* poly;
	_anon1* plane;
	// Line 4850, Address: 0x1905c0, Func Offset: 0
	// Line 4853, Address: 0x1905d4, Func Offset: 0x14
	// Line 4854, Address: 0x1905dc, Func Offset: 0x1c
	// Line 4855, Address: 0x1905f0, Func Offset: 0x30
	// Line 4856, Address: 0x1905f8, Func Offset: 0x38
	// Line 4857, Address: 0x190604, Func Offset: 0x44
	// Line 4858, Address: 0x19060c, Func Offset: 0x4c
	// Line 4859, Address: 0x190614, Func Offset: 0x54
	// Line 4861, Address: 0x190618, Func Offset: 0x58
	// Line 4862, Address: 0x190620, Func Offset: 0x60
	// Func End, Address: 0x190634, Func Offset: 0x74
}

// 
// Start address: 0x190640
int EnemyClGetWallPos(float* wpos, float* pos, float* normal, float range)
{
	float vec[4];
	_anon3 line;
	_anon1 plane;
	_anon0* poly;
	// Line 4875, Address: 0x190640, Func Offset: 0
	// Line 4880, Address: 0x190648, Func Offset: 0x8
	// Line 4875, Address: 0x19064c, Func Offset: 0xc
	// Line 4880, Address: 0x190654, Func Offset: 0x14
	// Line 4881, Address: 0x190670, Func Offset: 0x30
	// Line 4882, Address: 0x19068c, Func Offset: 0x4c
	// Line 4883, Address: 0x1906a8, Func Offset: 0x68
	// Line 4884, Address: 0x1906b0, Func Offset: 0x70
	// Line 4885, Address: 0x1906b8, Func Offset: 0x78
	// Line 4887, Address: 0x1906c0, Func Offset: 0x80
	// Line 4888, Address: 0x1906cc, Func Offset: 0x8c
	// Line 4889, Address: 0x1906e4, Func Offset: 0xa4
	// Line 4890, Address: 0x1906ec, Func Offset: 0xac
	// Line 4891, Address: 0x1906f0, Func Offset: 0xb0
	// Line 4892, Address: 0x1906f8, Func Offset: 0xb8
	// Func End, Address: 0x190708, Func Offset: 0xc8
}

// 
// Start address: 0x190710
int exist_stairs()
{
	int r;
	// Line 4896, Address: 0x190710, Func Offset: 0
	// Line 4898, Address: 0x19071c, Func Offset: 0xc
	// Line 4901, Address: 0x190740, Func Offset: 0x30
	// Line 4903, Address: 0x190748, Func Offset: 0x38
	// Line 4904, Address: 0x19075c, Func Offset: 0x4c
	// Line 4908, Address: 0x190760, Func Offset: 0x50
	// Line 4909, Address: 0x190764, Func Offset: 0x54
	// Func End, Address: 0x190774, Func Offset: 0x64
}

// 
// Start address: 0x190780
int fix_stairs(float* pos)
{
	// Line 4913, Address: 0x190780, Func Offset: 0
	// Line 4914, Address: 0x19078c, Func Offset: 0xc
	// Line 4916, Address: 0x1907d0, Func Offset: 0x50
	// Line 4918, Address: 0x1907d8, Func Offset: 0x58
	// Line 4919, Address: 0x1907e0, Func Offset: 0x60
	// Func End, Address: 0x1907f0, Func Offset: 0x70
}

// 
// Start address: 0x1907f0
int EnemyClCheckStairs(float* pos, float* normal)
{
	EnemyClHitResult* cres;
	float pos2[4];
	float vec[4];
	float vec2[4];
	float dvec[4];
	float cpos[4];
	float spos[4][8];
	int ignore[8];
	_anon0* poly;
	_anon3 line;
	_anon1 plane;
	int npolys;
	int i;
	int j;
	int n;
	int r;
	float d1;
	float d2;
	float hmin;
	float hmax;
	// Line 4927, Address: 0x1907f0, Func Offset: 0
	// Line 4938, Address: 0x190810, Func Offset: 0x20
	// Line 4939, Address: 0x190828, Func Offset: 0x38
	// Line 4941, Address: 0x190840, Func Offset: 0x50
	// Line 4942, Address: 0x19084c, Func Offset: 0x5c
	// Line 4944, Address: 0x190850, Func Offset: 0x60
	// Line 4945, Address: 0x19085c, Func Offset: 0x6c
	// Line 4946, Address: 0x19088c, Func Offset: 0x9c
	// Line 4947, Address: 0x1908a8, Func Offset: 0xb8
	// Line 4948, Address: 0x1908b8, Func Offset: 0xc8
	// Line 4949, Address: 0x1908c0, Func Offset: 0xd0
	// Line 4950, Address: 0x1908c8, Func Offset: 0xd8
	// Line 4951, Address: 0x1908d0, Func Offset: 0xe0
	// Line 4953, Address: 0x1908e8, Func Offset: 0xf8
	// Line 4957, Address: 0x190900, Func Offset: 0x110
	// Line 4958, Address: 0x190910, Func Offset: 0x120
	// Line 4959, Address: 0x190940, Func Offset: 0x150
	// Line 4960, Address: 0x190960, Func Offset: 0x170
	// Line 4961, Address: 0x190968, Func Offset: 0x178
	// Line 4962, Address: 0x19096c, Func Offset: 0x17c
	// Line 4963, Address: 0x190974, Func Offset: 0x184
	// Line 4962, Address: 0x190978, Func Offset: 0x188
	// Line 4963, Address: 0x19097c, Func Offset: 0x18c
	// Line 4967, Address: 0x1909ac, Func Offset: 0x1bc
	// Line 4968, Address: 0x1909b0, Func Offset: 0x1c0
	// Line 4969, Address: 0x1909bc, Func Offset: 0x1cc
	// Line 4973, Address: 0x1909d4, Func Offset: 0x1e4
	// Line 4974, Address: 0x1909e0, Func Offset: 0x1f0
	// Line 4975, Address: 0x1909f0, Func Offset: 0x200
	// Line 4976, Address: 0x190a1c, Func Offset: 0x22c
	// Line 4977, Address: 0x190a28, Func Offset: 0x238
	// Line 4978, Address: 0x190a44, Func Offset: 0x254
	// Line 4979, Address: 0x190a4c, Func Offset: 0x25c
	// Line 4978, Address: 0x190a50, Func Offset: 0x260
	// Line 4979, Address: 0x190a54, Func Offset: 0x264
	// Line 4980, Address: 0x190a5c, Func Offset: 0x26c
	// Line 4981, Address: 0x190a64, Func Offset: 0x274
	// Line 4982, Address: 0x190a74, Func Offset: 0x284
	// Line 4983, Address: 0x190a94, Func Offset: 0x2a4
	// Line 4984, Address: 0x190a9c, Func Offset: 0x2ac
	// Line 4985, Address: 0x190aa4, Func Offset: 0x2b4
	// Line 4986, Address: 0x190aac, Func Offset: 0x2bc
	// Line 4989, Address: 0x190ac4, Func Offset: 0x2d4
	// Line 4990, Address: 0x190ae0, Func Offset: 0x2f0
	// Line 4991, Address: 0x190b04, Func Offset: 0x314
	// Line 4992, Address: 0x190b3c, Func Offset: 0x34c
	// Line 4994, Address: 0x190b5c, Func Offset: 0x36c
	// Line 4995, Address: 0x190b60, Func Offset: 0x370
	// Line 4996, Address: 0x190b70, Func Offset: 0x380
	// Line 4997, Address: 0x190b90, Func Offset: 0x3a0
	// Line 4998, Address: 0x190b98, Func Offset: 0x3a8
	// Line 4999, Address: 0x190ba0, Func Offset: 0x3b0
	// Line 5000, Address: 0x190bac, Func Offset: 0x3bc
	// Line 4999, Address: 0x190bb0, Func Offset: 0x3c0
	// Line 5000, Address: 0x190bb4, Func Offset: 0x3c4
	// Line 5001, Address: 0x190bbc, Func Offset: 0x3cc
	// Line 5003, Address: 0x190bc0, Func Offset: 0x3d0
	// Line 5005, Address: 0x190bf8, Func Offset: 0x408
	// Line 5006, Address: 0x190bfc, Func Offset: 0x40c
	// Line 5007, Address: 0x190c08, Func Offset: 0x418
	// Line 5008, Address: 0x190c28, Func Offset: 0x438
	// Line 5011, Address: 0x190c34, Func Offset: 0x444
	// Line 5012, Address: 0x190c4c, Func Offset: 0x45c
	// Line 5015, Address: 0x190c50, Func Offset: 0x460
	// Line 5013, Address: 0x190c54, Func Offset: 0x464
	// Line 5015, Address: 0x190c58, Func Offset: 0x468
	// Line 5014, Address: 0x190c60, Func Offset: 0x470
	// Line 5015, Address: 0x190c64, Func Offset: 0x474
	// Line 5013, Address: 0x190c8c, Func Offset: 0x49c
	// Line 5015, Address: 0x190c90, Func Offset: 0x4a0
	// Line 5016, Address: 0x190ca8, Func Offset: 0x4b8
	// Line 5017, Address: 0x190cbc, Func Offset: 0x4cc
	// Line 5018, Address: 0x190cd0, Func Offset: 0x4e0
	// Line 5019, Address: 0x190cd8, Func Offset: 0x4e8
	// Line 5021, Address: 0x190cec, Func Offset: 0x4fc
	// Line 5022, Address: 0x190cf4, Func Offset: 0x504
	// Line 5023, Address: 0x190cf8, Func Offset: 0x508
	// Line 5024, Address: 0x190d08, Func Offset: 0x518
	// Line 5025, Address: 0x190d18, Func Offset: 0x528
	// Line 5026, Address: 0x190d38, Func Offset: 0x548
	// Line 5027, Address: 0x190d58, Func Offset: 0x568
	// Line 5028, Address: 0x190d5c, Func Offset: 0x56c
	// Line 5027, Address: 0x190d60, Func Offset: 0x570
	// Line 5029, Address: 0x190d64, Func Offset: 0x574
	// Line 5032, Address: 0x190d7c, Func Offset: 0x58c
	// Line 5033, Address: 0x190d80, Func Offset: 0x590
	// Line 5037, Address: 0x190d98, Func Offset: 0x5a8
	// Line 5038, Address: 0x190db0, Func Offset: 0x5c0
	// Line 5039, Address: 0x190dd4, Func Offset: 0x5e4
	// Line 5040, Address: 0x190de8, Func Offset: 0x5f8
	// Line 5041, Address: 0x190dec, Func Offset: 0x5fc
	// Line 5042, Address: 0x190e04, Func Offset: 0x614
	// Line 5044, Address: 0x190e24, Func Offset: 0x634
	// Line 5045, Address: 0x190e2c, Func Offset: 0x63c
	// Line 5048, Address: 0x190e54, Func Offset: 0x664
	// Line 5049, Address: 0x190e58, Func Offset: 0x668
	// Line 5050, Address: 0x190e5c, Func Offset: 0x66c
	// Line 5051, Address: 0x190e68, Func Offset: 0x678
	// Line 5052, Address: 0x190e70, Func Offset: 0x680
	// Func End, Address: 0x190e90, Func Offset: 0x6a0
}

// 
// Start address: 0x190e90
int EnemyClCheckNarrowPassage(float* pos, float range)
{
	_anon3 line;
	// Line 5060, Address: 0x190e90, Func Offset: 0
	// Line 5062, Address: 0x190e98, Func Offset: 0x8
	// Line 5060, Address: 0x190e9c, Func Offset: 0xc
	// Line 5062, Address: 0x190eb0, Func Offset: 0x20
	// Line 5063, Address: 0x190ebc, Func Offset: 0x2c
	// Line 5064, Address: 0x190ec4, Func Offset: 0x34
	// Line 5065, Address: 0x190ecc, Func Offset: 0x3c
	// Line 5066, Address: 0x190ee0, Func Offset: 0x50
	// Line 5067, Address: 0x190ee4, Func Offset: 0x54
	// Line 5066, Address: 0x190ee8, Func Offset: 0x58
	// Line 5067, Address: 0x190eec, Func Offset: 0x5c
	// Line 5068, Address: 0x190efc, Func Offset: 0x6c
	// Line 5070, Address: 0x190f04, Func Offset: 0x74
	// Line 5068, Address: 0x190f08, Func Offset: 0x78
	// Line 5071, Address: 0x190f0c, Func Offset: 0x7c
	// Line 5072, Address: 0x190f10, Func Offset: 0x80
	// Line 5071, Address: 0x190f14, Func Offset: 0x84
	// Line 5072, Address: 0x190f18, Func Offset: 0x88
	// Line 5073, Address: 0x190f28, Func Offset: 0x98
	// Line 5074, Address: 0x190f2c, Func Offset: 0x9c
	// Line 5073, Address: 0x190f30, Func Offset: 0xa0
	// Line 5074, Address: 0x190f34, Func Offset: 0xa4
	// Line 5075, Address: 0x190f44, Func Offset: 0xb4
	// Line 5077, Address: 0x190f4c, Func Offset: 0xbc
	// Line 5078, Address: 0x190f50, Func Offset: 0xc0
	// Line 5079, Address: 0x190f58, Func Offset: 0xc8
	// Func End, Address: 0x190f70, Func Offset: 0xe0
}

// 
// Start address: 0x190f70
_anon0* EnemyClGetLastHitPolygon()
{
	// Line 5086, Address: 0x190f70, Func Offset: 0
	// Line 5087, Address: 0x190f74, Func Offset: 0x4
	// Func End, Address: 0x190f7c, Func Offset: 0xc
}

// 
// Start address: 0x190f80
void EnemyClGetLastHitPlane(_anon1* plane)
{
	// Line 5094, Address: 0x190f80, Func Offset: 0
	// Line 5095, Address: 0x190f8c, Func Offset: 0xc
	// Func End, Address: 0x190f94, Func Offset: 0x14
}

// 
// Start address: 0x190fa0
int check_fix_normal(sfObj* obj)
{
	// Line 5099, Address: 0x190fa0, Func Offset: 0
	// Line 5100, Address: 0x190fa8, Func Offset: 0x8
	// Line 5106, Address: 0x190fe8, Func Offset: 0x48
	// Line 5108, Address: 0x190ff0, Func Offset: 0x50
	// Line 5109, Address: 0x190ff8, Func Offset: 0x58
	// Func End, Address: 0x191004, Func Offset: 0x64
}

// 
// Start address: 0x191010
int EnemyClStickFloor(sfObj* obj)
{
	float pos[4];
	float cpos[4];
	float under[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float h;
	float fh;
	float d;
	_anon3 line;
	_anon3 line2;
	_anon0* poly;
	_anon0* poly2;
	_anon1 plane;
	int f;
	// Line 5116, Address: 0x191010, Func Offset: 0
	// Line 5125, Address: 0x191018, Func Offset: 0x8
	// Line 5116, Address: 0x19101c, Func Offset: 0xc
	// Line 5125, Address: 0x191034, Func Offset: 0x24
	// Line 5126, Address: 0x19103c, Func Offset: 0x2c
	// Line 5128, Address: 0x191060, Func Offset: 0x50
	// Line 5129, Address: 0x19106c, Func Offset: 0x5c
	// Line 5130, Address: 0x191070, Func Offset: 0x60
	// Line 5129, Address: 0x191074, Func Offset: 0x64
	// Line 5130, Address: 0x191078, Func Offset: 0x68
	// Line 5131, Address: 0x19107c, Func Offset: 0x6c
	// Line 5132, Address: 0x191080, Func Offset: 0x70
	// Line 5133, Address: 0x19108c, Func Offset: 0x7c
	// Line 5134, Address: 0x191098, Func Offset: 0x88
	// Line 5135, Address: 0x1910b4, Func Offset: 0xa4
	// Line 5136, Address: 0x1910c0, Func Offset: 0xb0
	// Line 5137, Address: 0x1910d8, Func Offset: 0xc8
	// Line 5138, Address: 0x1910e4, Func Offset: 0xd4
	// Line 5139, Address: 0x19111c, Func Offset: 0x10c
	// Line 5140, Address: 0x19113c, Func Offset: 0x12c
	// Line 5141, Address: 0x191180, Func Offset: 0x170
	// Line 5142, Address: 0x1911a0, Func Offset: 0x190
	// Line 5143, Address: 0x1911ac, Func Offset: 0x19c
	// Line 5144, Address: 0x1911b0, Func Offset: 0x1a0
	// Line 5145, Address: 0x1911c8, Func Offset: 0x1b8
	// Line 5147, Address: 0x1911d0, Func Offset: 0x1c0
	// Line 5148, Address: 0x1911dc, Func Offset: 0x1cc
	// Line 5149, Address: 0x1911ec, Func Offset: 0x1dc
	// Line 5153, Address: 0x191214, Func Offset: 0x204
	// Line 5154, Address: 0x191218, Func Offset: 0x208
	// Line 5155, Address: 0x191238, Func Offset: 0x228
	// Line 5158, Address: 0x191240, Func Offset: 0x230
	// Line 5159, Address: 0x191254, Func Offset: 0x244
	// Line 5160, Address: 0x191260, Func Offset: 0x250
	// Line 5161, Address: 0x191268, Func Offset: 0x258
	// Line 5162, Address: 0x19127c, Func Offset: 0x26c
	// Line 5163, Address: 0x191280, Func Offset: 0x270
	// Line 5164, Address: 0x191290, Func Offset: 0x280
	// Line 5165, Address: 0x19129c, Func Offset: 0x28c
	// Line 5164, Address: 0x1912a0, Func Offset: 0x290
	// Line 5165, Address: 0x1912a4, Func Offset: 0x294
	// Line 5167, Address: 0x1912bc, Func Offset: 0x2ac
	// Line 5168, Address: 0x1912c4, Func Offset: 0x2b4
	// Line 5169, Address: 0x1912c8, Func Offset: 0x2b8
	// Line 5170, Address: 0x1912f4, Func Offset: 0x2e4
	// Line 5172, Address: 0x191318, Func Offset: 0x308
	// Line 5174, Address: 0x191338, Func Offset: 0x328
	// Line 5175, Address: 0x191368, Func Offset: 0x358
	// Line 5176, Address: 0x191388, Func Offset: 0x378
	// Line 5178, Address: 0x1913d0, Func Offset: 0x3c0
	// Line 5179, Address: 0x1913f0, Func Offset: 0x3e0
	// Line 5180, Address: 0x1913f4, Func Offset: 0x3e4
	// Line 5181, Address: 0x191400, Func Offset: 0x3f0
	// Line 5183, Address: 0x191420, Func Offset: 0x410
	// Line 5184, Address: 0x191424, Func Offset: 0x414
	// Line 5185, Address: 0x191434, Func Offset: 0x424
	// Line 5186, Address: 0x191454, Func Offset: 0x444
	// Line 5187, Address: 0x191464, Func Offset: 0x454
	// Line 5186, Address: 0x191468, Func Offset: 0x458
	// Line 5189, Address: 0x19146c, Func Offset: 0x45c
	// Line 5190, Address: 0x191470, Func Offset: 0x460
	// Line 5191, Address: 0x191478, Func Offset: 0x468
	// Line 5192, Address: 0x191488, Func Offset: 0x478
	// Line 5193, Address: 0x1914c0, Func Offset: 0x4b0
	// Line 5195, Address: 0x1914c8, Func Offset: 0x4b8
	// Line 5196, Address: 0x1914f4, Func Offset: 0x4e4
	// Line 5197, Address: 0x1914f8, Func Offset: 0x4e8
	// Line 5196, Address: 0x191504, Func Offset: 0x4f4
	// Line 5197, Address: 0x191508, Func Offset: 0x4f8
	// Line 5198, Address: 0x19151c, Func Offset: 0x50c
	// Line 5199, Address: 0x19153c, Func Offset: 0x52c
	// Line 5200, Address: 0x191548, Func Offset: 0x538
	// Line 5202, Address: 0x191568, Func Offset: 0x558
	// Line 5203, Address: 0x19156c, Func Offset: 0x55c
	// Line 5204, Address: 0x19157c, Func Offset: 0x56c
	// Line 5205, Address: 0x19159c, Func Offset: 0x58c
	// Line 5206, Address: 0x1915ac, Func Offset: 0x59c
	// Line 5205, Address: 0x1915b0, Func Offset: 0x5a0
	// Line 5208, Address: 0x1915b4, Func Offset: 0x5a4
	// Line 5209, Address: 0x1915b8, Func Offset: 0x5a8
	// Line 5210, Address: 0x1915c0, Func Offset: 0x5b0
	// Line 5217, Address: 0x1915c8, Func Offset: 0x5b8
	// Line 5218, Address: 0x1915d4, Func Offset: 0x5c4
	// Line 5219, Address: 0x1915dc, Func Offset: 0x5cc
	// Line 5220, Address: 0x1915e8, Func Offset: 0x5d8
	// Line 5221, Address: 0x1915f4, Func Offset: 0x5e4
	// Line 5223, Address: 0x191618, Func Offset: 0x608
	// Line 5224, Address: 0x191624, Func Offset: 0x614
	// Line 5225, Address: 0x191628, Func Offset: 0x618
	// Line 5224, Address: 0x19162c, Func Offset: 0x61c
	// Line 5225, Address: 0x191630, Func Offset: 0x620
	// Line 5226, Address: 0x191634, Func Offset: 0x624
	// Line 5227, Address: 0x191638, Func Offset: 0x628
	// Line 5228, Address: 0x191644, Func Offset: 0x634
	// Line 5229, Address: 0x191664, Func Offset: 0x654
	// Line 5230, Address: 0x191690, Func Offset: 0x680
	// Line 5231, Address: 0x1916b0, Func Offset: 0x6a0
	// Line 5232, Address: 0x1916f4, Func Offset: 0x6e4
	// Line 5233, Address: 0x191714, Func Offset: 0x704
	// Line 5238, Address: 0x19172c, Func Offset: 0x71c
	// Line 5239, Address: 0x191730, Func Offset: 0x720
	// Line 5240, Address: 0x191748, Func Offset: 0x738
	// Line 5243, Address: 0x191750, Func Offset: 0x740
	// Line 5244, Address: 0x191770, Func Offset: 0x760
	// Line 5245, Address: 0x191794, Func Offset: 0x784
	// Line 5244, Address: 0x191798, Func Offset: 0x788
	// Line 5245, Address: 0x19179c, Func Offset: 0x78c
	// Line 5244, Address: 0x1917a0, Func Offset: 0x790
	// Line 5245, Address: 0x1917a4, Func Offset: 0x794
	// Line 5246, Address: 0x1917bc, Func Offset: 0x7ac
	// Line 5247, Address: 0x1917cc, Func Offset: 0x7bc
	// Line 5246, Address: 0x1917d0, Func Offset: 0x7c0
	// Line 5247, Address: 0x1917d4, Func Offset: 0x7c4
	// Line 5248, Address: 0x1917f0, Func Offset: 0x7e0
	// Line 5249, Address: 0x191800, Func Offset: 0x7f0
	// Line 5250, Address: 0x191824, Func Offset: 0x814
	// Line 5251, Address: 0x191834, Func Offset: 0x824
	// Line 5252, Address: 0x191840, Func Offset: 0x830
	// Line 5254, Address: 0x191860, Func Offset: 0x850
	// Line 5255, Address: 0x19186c, Func Offset: 0x85c
	// Line 5256, Address: 0x191870, Func Offset: 0x860
	// Func End, Address: 0x191894, Func Offset: 0x884
}

// 
// Start address: 0x1918a0
void EnemyClFreeFall(sfObj* obj)
{
	EnemyClHitResult* tres;
	_anon3 line;
	float pos[4];
	float vec[4];
	float h;
	float hd;
	int r;
	int npolys;
	// Line 5262, Address: 0x1918a0, Func Offset: 0
	// Line 5268, Address: 0x1918a8, Func Offset: 0x8
	// Line 5262, Address: 0x1918ac, Func Offset: 0xc
	// Line 5268, Address: 0x1918bc, Func Offset: 0x1c
	// Line 5269, Address: 0x1918c4, Func Offset: 0x24
	// Line 5271, Address: 0x1918dc, Func Offset: 0x3c
	// Line 5270, Address: 0x1918e0, Func Offset: 0x40
	// Line 5271, Address: 0x1918e4, Func Offset: 0x44
	// Line 5273, Address: 0x191904, Func Offset: 0x64
	// Line 5276, Address: 0x19190c, Func Offset: 0x6c
	// Line 5274, Address: 0x191914, Func Offset: 0x74
	// Line 5275, Address: 0x191918, Func Offset: 0x78
	// Line 5276, Address: 0x19191c, Func Offset: 0x7c
	// Line 5274, Address: 0x191920, Func Offset: 0x80
	// Line 5276, Address: 0x191924, Func Offset: 0x84
	// Line 5277, Address: 0x19192c, Func Offset: 0x8c
	// Line 5280, Address: 0x191930, Func Offset: 0x90
	// Line 5281, Address: 0x19193c, Func Offset: 0x9c
	// Line 5282, Address: 0x191958, Func Offset: 0xb8
	// Line 5283, Address: 0x19197c, Func Offset: 0xdc
	// Line 5284, Address: 0x1919b0, Func Offset: 0x110
	// Line 5285, Address: 0x1919d0, Func Offset: 0x130
	// Line 5286, Address: 0x1919f8, Func Offset: 0x158
	// Line 5287, Address: 0x191a14, Func Offset: 0x174
	// Line 5289, Address: 0x191a50, Func Offset: 0x1b0
	// Line 5290, Address: 0x191a70, Func Offset: 0x1d0
	// Line 5291, Address: 0x191a78, Func Offset: 0x1d8
	// Line 5294, Address: 0x191a80, Func Offset: 0x1e0
	// Line 5291, Address: 0x191a88, Func Offset: 0x1e8
	// Line 5292, Address: 0x191a8c, Func Offset: 0x1ec
	// Line 5293, Address: 0x191a90, Func Offset: 0x1f0
	// Line 5294, Address: 0x191a9c, Func Offset: 0x1fc
	// Line 5296, Address: 0x191ac0, Func Offset: 0x220
	// Line 5297, Address: 0x191ac4, Func Offset: 0x224
	// Line 5298, Address: 0x191acc, Func Offset: 0x22c
	// Line 5299, Address: 0x191aec, Func Offset: 0x24c
	// Line 5300, Address: 0x191af0, Func Offset: 0x250
	// Line 5301, Address: 0x191af8, Func Offset: 0x258
	// Line 5302, Address: 0x191b04, Func Offset: 0x264
	// Func End, Address: 0x191b20, Func Offset: 0x280
}

// 
// Start address: 0x191b20
int EnemyClLanding(sfObj* obj, float size)
{
	EnemyCollision* pec;
	EnemyClHitResult* tres;
	float pos[4];
	float vec[4];
	float move[4];
	_anon3 line;
	_anon4 sphere;
	float d;
	float h;
	float hd;
	int r;
	int npolys;
	// Line 5310, Address: 0x191b20, Func Offset: 0
	// Line 5318, Address: 0x191b28, Func Offset: 0x8
	// Line 5310, Address: 0x191b2c, Func Offset: 0xc
	// Line 5318, Address: 0x191b50, Func Offset: 0x30
	// Line 5319, Address: 0x191b58, Func Offset: 0x38
	// Line 5320, Address: 0x191b5c, Func Offset: 0x3c
	// Line 5322, Address: 0x191b80, Func Offset: 0x60
	// Line 5325, Address: 0x191b8c, Func Offset: 0x6c
	// Line 5323, Address: 0x191b94, Func Offset: 0x74
	// Line 5324, Address: 0x191b98, Func Offset: 0x78
	// Line 5325, Address: 0x191b9c, Func Offset: 0x7c
	// Line 5323, Address: 0x191ba0, Func Offset: 0x80
	// Line 5325, Address: 0x191ba4, Func Offset: 0x84
	// Line 5327, Address: 0x191bb0, Func Offset: 0x90
	// Line 5328, Address: 0x191bbc, Func Offset: 0x9c
	// Line 5329, Address: 0x191bc4, Func Offset: 0xa4
	// Line 5330, Address: 0x191bc8, Func Offset: 0xa8
	// Line 5329, Address: 0x191bd4, Func Offset: 0xb4
	// Line 5330, Address: 0x191bec, Func Offset: 0xcc
	// Line 5331, Address: 0x191c00, Func Offset: 0xe0
	// Line 5332, Address: 0x191c08, Func Offset: 0xe8
	// Line 5333, Address: 0x191c20, Func Offset: 0x100
	// Line 5334, Address: 0x191c30, Func Offset: 0x110
	// Line 5337, Address: 0x191c48, Func Offset: 0x128
	// Line 5339, Address: 0x191c68, Func Offset: 0x148
	// Line 5340, Address: 0x191c74, Func Offset: 0x154
	// Line 5339, Address: 0x191c78, Func Offset: 0x158
	// Line 5340, Address: 0x191c84, Func Offset: 0x164
	// Line 5339, Address: 0x191c88, Func Offset: 0x168
	// Line 5340, Address: 0x191c8c, Func Offset: 0x16c
	// Line 5342, Address: 0x191c94, Func Offset: 0x174
	// Line 5343, Address: 0x191ca0, Func Offset: 0x180
	// Line 5344, Address: 0x191cac, Func Offset: 0x18c
	// Line 5345, Address: 0x191cb0, Func Offset: 0x190
	// Line 5346, Address: 0x191cbc, Func Offset: 0x19c
	// Line 5348, Address: 0x191cec, Func Offset: 0x1cc
	// Line 5349, Address: 0x191cf4, Func Offset: 0x1d4
	// Line 5350, Address: 0x191d24, Func Offset: 0x204
	// Line 5351, Address: 0x191d44, Func Offset: 0x224
	// Line 5352, Address: 0x191d6c, Func Offset: 0x24c
	// Line 5353, Address: 0x191d8c, Func Offset: 0x26c
	// Line 5354, Address: 0x191d98, Func Offset: 0x278
	// Line 5357, Address: 0x191dc8, Func Offset: 0x2a8
	// Line 5358, Address: 0x191dcc, Func Offset: 0x2ac
	// Line 5360, Address: 0x191ddc, Func Offset: 0x2bc
	// Line 5362, Address: 0x191de0, Func Offset: 0x2c0
	// Line 5364, Address: 0x191de8, Func Offset: 0x2c8
	// Line 5365, Address: 0x191e08, Func Offset: 0x2e8
	// Line 5366, Address: 0x191e2c, Func Offset: 0x30c
	// Line 5367, Address: 0x191e50, Func Offset: 0x330
	// Line 5368, Address: 0x191e58, Func Offset: 0x338
	// Line 5370, Address: 0x191e68, Func Offset: 0x348
	// Line 5371, Address: 0x191e74, Func Offset: 0x354
	// Line 5374, Address: 0x191e78, Func Offset: 0x358
	// Line 5375, Address: 0x191e80, Func Offset: 0x360
	// Line 5376, Address: 0x191e84, Func Offset: 0x364
	// Func End, Address: 0x191eb0, Func Offset: 0x390
}

// 
// Start address: 0x191eb0
sfObj* EnemyClGetObj(sfCldObject* cld)
{
	EnemyCollision* pec;
	// Line 5385, Address: 0x191eb0, Func Offset: 0
	// Line 5386, Address: 0x191eb8, Func Offset: 0x8
	// Line 5387, Address: 0x191ec0, Func Offset: 0x10
	// Line 5388, Address: 0x191ec8, Func Offset: 0x18
	// Line 5390, Address: 0x191ed0, Func Offset: 0x20
	// Line 5391, Address: 0x191ed4, Func Offset: 0x24
	// Line 5392, Address: 0x191ee0, Func Offset: 0x30
	// Line 5393, Address: 0x191ee8, Func Offset: 0x38
	// Func End, Address: 0x191ef0, Func Offset: 0x40
}

// 
// Start address: 0x191ef0
sfObj* EnemyClGetControlObj(sfCldObject* cld)
{
	sfObj* obj;
	// Line 5400, Address: 0x191ef0, Func Offset: 0
	// Line 5402, Address: 0x191f04, Func Offset: 0x14
	// Line 5403, Address: 0x191f10, Func Offset: 0x20
	// Line 5404, Address: 0x191f18, Func Offset: 0x28
	// Line 5405, Address: 0x191f28, Func Offset: 0x38
	// Line 5407, Address: 0x191f30, Func Offset: 0x40
	// Line 5408, Address: 0x191f3c, Func Offset: 0x4c
	// Line 5409, Address: 0x191f48, Func Offset: 0x58
	// Line 5410, Address: 0x191f50, Func Offset: 0x60
	// Func End, Address: 0x191f64, Func Offset: 0x74
}

// 
// Start address: 0x191f70
int EnemyClWhichRotRightOrLeft(float* pos, float* rot, float limit)
{
	EnemyClHitResult* cres;
	float pos2[4];
	float tpos[4];
	float vec[4];
	float vec2[4];
	float dl;
	float dr;
	// Line 5433, Address: 0x191f70, Func Offset: 0
	// Line 5437, Address: 0x191f94, Func Offset: 0x24
	// Line 5438, Address: 0x191fa0, Func Offset: 0x30
	// Line 5439, Address: 0x191fc0, Func Offset: 0x50
	// Line 5440, Address: 0x191fd4, Func Offset: 0x64
	// Line 5441, Address: 0x191ff8, Func Offset: 0x88
	// Line 5442, Address: 0x192018, Func Offset: 0xa8
	// Line 5443, Address: 0x192030, Func Offset: 0xc0
	// Line 5444, Address: 0x192038, Func Offset: 0xc8
	// Line 5445, Address: 0x192058, Func Offset: 0xe8
	// Line 5446, Address: 0x19207c, Func Offset: 0x10c
	// Line 5447, Address: 0x192088, Func Offset: 0x118
	// Line 5448, Address: 0x19208c, Func Offset: 0x11c
	// Line 5449, Address: 0x192090, Func Offset: 0x120
	// Line 5450, Address: 0x1920b0, Func Offset: 0x140
	// Line 5451, Address: 0x1920c8, Func Offset: 0x158
	// Line 5452, Address: 0x1920d0, Func Offset: 0x160
	// Line 5453, Address: 0x1920f0, Func Offset: 0x180
	// Line 5454, Address: 0x192114, Func Offset: 0x1a4
	// Line 5457, Address: 0x192120, Func Offset: 0x1b0
	// Line 5458, Address: 0x192128, Func Offset: 0x1b8
	// Line 5459, Address: 0x192178, Func Offset: 0x208
	// Func End, Address: 0x192198, Func Offset: 0x228
}

// 
// Start address: 0x1921a0
int EnemyClWhichRoundRightOrLeft(float* pos, float* tpos, float limit)
{
	EnemyClHitResult* cres;
	float pos2[4];
	float tpos2[4];
	float tpos3[4];
	float vec[4];
	float vec2[4];
	float dl;
	float dr;
	// Line 5469, Address: 0x1921a0, Func Offset: 0
	// Line 5473, Address: 0x1921c4, Func Offset: 0x24
	// Line 5474, Address: 0x1921d0, Func Offset: 0x30
	// Line 5475, Address: 0x1921f0, Func Offset: 0x50
	// Line 5476, Address: 0x192210, Func Offset: 0x70
	// Line 5477, Address: 0x19222c, Func Offset: 0x8c
	// Line 5478, Address: 0x192258, Func Offset: 0xb8
	// Line 5479, Address: 0x19226c, Func Offset: 0xcc
	// Line 5480, Address: 0x192290, Func Offset: 0xf0
	// Line 5481, Address: 0x1922b0, Func Offset: 0x110
	// Line 5482, Address: 0x1922c8, Func Offset: 0x128
	// Line 5483, Address: 0x1922d0, Func Offset: 0x130
	// Line 5484, Address: 0x1922f0, Func Offset: 0x150
	// Line 5485, Address: 0x192314, Func Offset: 0x174
	// Line 5486, Address: 0x192320, Func Offset: 0x180
	// Line 5487, Address: 0x192324, Func Offset: 0x184
	// Line 5488, Address: 0x192328, Func Offset: 0x188
	// Line 5489, Address: 0x192348, Func Offset: 0x1a8
	// Line 5490, Address: 0x192360, Func Offset: 0x1c0
	// Line 5491, Address: 0x192368, Func Offset: 0x1c8
	// Line 5492, Address: 0x192388, Func Offset: 0x1e8
	// Line 5493, Address: 0x1923ac, Func Offset: 0x20c
	// Line 5496, Address: 0x1923b8, Func Offset: 0x218
	// Line 5497, Address: 0x1923c0, Func Offset: 0x220
	// Line 5498, Address: 0x192410, Func Offset: 0x270
	// Func End, Address: 0x192430, Func Offset: 0x290
}

// 
// Start address: 0x192430
void EnemyClSetTargetEvadeWall(float* target, float* pos, float* rot, float range)
{
	EnemyClHitResult* cres;
	float* qp;
	float trot[4];
	float pos2[4];
	float tpos[4];
	float vec[4];
	float vec2[4];
	int rf;
	int c;
	// Line 5508, Address: 0x192430, Func Offset: 0
	// Line 5514, Address: 0x192458, Func Offset: 0x28
	// Line 5515, Address: 0x192464, Func Offset: 0x34
	// Line 5516, Address: 0x192484, Func Offset: 0x54
	// Line 5517, Address: 0x192490, Func Offset: 0x60
	// Line 5518, Address: 0x1924b4, Func Offset: 0x84
	// Line 5519, Address: 0x1924d4, Func Offset: 0xa4
	// Line 5520, Address: 0x1924ec, Func Offset: 0xbc
	// Line 5521, Address: 0x192514, Func Offset: 0xe4
	// Line 5522, Address: 0x192524, Func Offset: 0xf4
	// Line 5524, Address: 0x19252c, Func Offset: 0xfc
	// Line 5525, Address: 0x192538, Func Offset: 0x108
	// Line 5527, Address: 0x192540, Func Offset: 0x110
	// Line 5528, Address: 0x19254c, Func Offset: 0x11c
	// Line 5530, Address: 0x192550, Func Offset: 0x120
	// Line 5531, Address: 0x192560, Func Offset: 0x130
	// Line 5532, Address: 0x192570, Func Offset: 0x140
	// Line 5533, Address: 0x192590, Func Offset: 0x160
	// Line 5536, Address: 0x1925a8, Func Offset: 0x178
	// Line 5537, Address: 0x1925b8, Func Offset: 0x188
	// Line 5538, Address: 0x1925c8, Func Offset: 0x198
	// Line 5539, Address: 0x1925d8, Func Offset: 0x1a8
	// Line 5540, Address: 0x1925f0, Func Offset: 0x1c0
	// Line 5541, Address: 0x1925f8, Func Offset: 0x1c8
	// Line 5542, Address: 0x192604, Func Offset: 0x1d4
	// Line 5543, Address: 0x192608, Func Offset: 0x1d8
	// Line 5544, Address: 0x192610, Func Offset: 0x1e0
	// Func End, Address: 0x192630, Func Offset: 0x200
}

// 
// Start address: 0x192630
float EnemyClGetTargetSpace(float* pos, float* normal, float width, float range)
{
	EnemyClHitResult* cres;
	float pos2[4];
	float tpos[4];
	float vec[4];
	float rot[4];
	float dist;
	int i;
	// Line 5557, Address: 0x192630, Func Offset: 0
	// Line 5564, Address: 0x192658, Func Offset: 0x28
	// Line 5565, Address: 0x192664, Func Offset: 0x34
	// Line 5566, Address: 0x192684, Func Offset: 0x54
	// Line 5567, Address: 0x1926a0, Func Offset: 0x70
	// Line 5568, Address: 0x1926a8, Func Offset: 0x78
	// Line 5569, Address: 0x1926cc, Func Offset: 0x9c
	// Line 5570, Address: 0x1926e0, Func Offset: 0xb0
	// Line 5571, Address: 0x192704, Func Offset: 0xd4
	// Line 5572, Address: 0x192724, Func Offset: 0xf4
	// Line 5573, Address: 0x19273c, Func Offset: 0x10c
	// Line 5575, Address: 0x192748, Func Offset: 0x118
	// Line 5576, Address: 0x19275c, Func Offset: 0x12c
	// Line 5577, Address: 0x192764, Func Offset: 0x134
	// Line 5578, Address: 0x192768, Func Offset: 0x138
	// Func End, Address: 0x192788, Func Offset: 0x158
}

// 
// Start address: 0x192790
int EnemyClCheckTargetSpace(float* pos, float* normal, float width, float range)
{
	EnemyClHitResult* cres;
	float pos2[4];
	float tpos[4];
	float cpos[4];
	float cvec[4];
	float vec[4];
	float vv[4];
	_anon0* poly;
	float rot[4];
	int c;
	int r;
	// Line 5590, Address: 0x192790, Func Offset: 0
	// Line 5596, Address: 0x1927b8, Func Offset: 0x28
	// Line 5590, Address: 0x1927bc, Func Offset: 0x2c
	// Line 5597, Address: 0x1927c4, Func Offset: 0x34
	// Line 5598, Address: 0x1927d0, Func Offset: 0x40
	// Line 5599, Address: 0x1927f0, Func Offset: 0x60
	// Line 5600, Address: 0x19280c, Func Offset: 0x7c
	// Line 5601, Address: 0x192834, Func Offset: 0xa4
	// Line 5602, Address: 0x192844, Func Offset: 0xb4
	// Line 5603, Address: 0x192850, Func Offset: 0xc0
	// Line 5604, Address: 0x192874, Func Offset: 0xe4
	// Line 5605, Address: 0x19288c, Func Offset: 0xfc
	// Line 5606, Address: 0x192898, Func Offset: 0x108
	// Line 5607, Address: 0x1928b8, Func Offset: 0x128
	// Line 5609, Address: 0x1928d0, Func Offset: 0x140
	// Line 5612, Address: 0x1928d8, Func Offset: 0x148
	// Line 5614, Address: 0x1928e0, Func Offset: 0x150
	// Line 5615, Address: 0x1928e8, Func Offset: 0x158
	// Line 5616, Address: 0x1928ec, Func Offset: 0x15c
	// Line 5617, Address: 0x1928f8, Func Offset: 0x168
	// Line 5619, Address: 0x192934, Func Offset: 0x1a4
	// Line 5621, Address: 0x19293c, Func Offset: 0x1ac
	// Line 5622, Address: 0x192940, Func Offset: 0x1b0
	// Line 5626, Address: 0x192954, Func Offset: 0x1c4
	// Line 5627, Address: 0x192958, Func Offset: 0x1c8
	// Line 5628, Address: 0x192978, Func Offset: 0x1e8
	// Line 5629, Address: 0x192988, Func Offset: 0x1f8
	// Line 5630, Address: 0x19299c, Func Offset: 0x20c
	// Line 5632, Address: 0x1929ac, Func Offset: 0x21c
	// Line 5633, Address: 0x1929b8, Func Offset: 0x228
	// Line 5635, Address: 0x1929bc, Func Offset: 0x22c
	// Line 5636, Address: 0x1929c0, Func Offset: 0x230
	// Line 5637, Address: 0x1929c8, Func Offset: 0x238
	// Line 5638, Address: 0x1929cc, Func Offset: 0x23c
	// Func End, Address: 0x1929f4, Func Offset: 0x264
}

// 
// Start address: 0x192a00
int EnemyClCheckRepelWall(float* pos, float radius, float* move, int mode)
{
	int retv;
	int retvr;
	int count;
	int mcount;
	_anon0** ppoly;
	float* tpos;
	float* tmove;
	// Line 5652, Address: 0x192a00, Func Offset: 0
	// Line 5656, Address: 0x192a04, Func Offset: 0x4
	// Line 5652, Address: 0x192a08, Func Offset: 0x8
	// Line 5659, Address: 0x192a30, Func Offset: 0x30
	// Line 5652, Address: 0x192a34, Func Offset: 0x34
	// Line 5659, Address: 0x192a38, Func Offset: 0x38
	// Line 5652, Address: 0x192a3c, Func Offset: 0x3c
	// Line 5656, Address: 0x192a40, Func Offset: 0x40
	// Line 5657, Address: 0x192a5c, Func Offset: 0x5c
	// Line 5656, Address: 0x192a60, Func Offset: 0x60
	// Line 5659, Address: 0x192a64, Func Offset: 0x64
	// Line 5661, Address: 0x192a70, Func Offset: 0x70
	// Line 5659, Address: 0x192a74, Func Offset: 0x74
	// Line 5661, Address: 0x192a78, Func Offset: 0x78
	// Line 5663, Address: 0x192a88, Func Offset: 0x88
	// Line 5664, Address: 0x192a90, Func Offset: 0x90
	// Line 5665, Address: 0x192aa4, Func Offset: 0xa4
	// Line 5666, Address: 0x192aa8, Func Offset: 0xa8
	// Line 5667, Address: 0x192ab8, Func Offset: 0xb8
	// Line 5668, Address: 0x192abc, Func Offset: 0xbc
	// Line 5671, Address: 0x192ac0, Func Offset: 0xc0
	// Line 5673, Address: 0x192ac8, Func Offset: 0xc8
	// Line 5675, Address: 0x192ad8, Func Offset: 0xd8
	// Line 5677, Address: 0x192ae0, Func Offset: 0xe0
	// Line 5678, Address: 0x192aec, Func Offset: 0xec
	// Line 5680, Address: 0x192af0, Func Offset: 0xf0
	// Line 5681, Address: 0x192b04, Func Offset: 0x104
	// Line 5682, Address: 0x192b28, Func Offset: 0x128
	// Line 5683, Address: 0x192b40, Func Offset: 0x140
	// Line 5685, Address: 0x192b48, Func Offset: 0x148
	// Line 5686, Address: 0x192b50, Func Offset: 0x150
	// Line 5687, Address: 0x192b60, Func Offset: 0x160
	// Line 5688, Address: 0x192b70, Func Offset: 0x170
	// Line 5689, Address: 0x192b74, Func Offset: 0x174
	// Line 5688, Address: 0x192b78, Func Offset: 0x178
	// Line 5690, Address: 0x192b88, Func Offset: 0x188
	// Func End, Address: 0x192bb4, Func Offset: 0x1b4
}

// 
// Start address: 0x192bc0
int EnemyClCheckRepelWallLine(float* pos, float* old_pos, int mode)
{
	int retv;
	// Line 5702, Address: 0x192bc0, Func Offset: 0
	// Line 5704, Address: 0x192bc4, Func Offset: 0x4
	// Line 5702, Address: 0x192bc8, Func Offset: 0x8
	// Line 5705, Address: 0x192bcc, Func Offset: 0xc
	// Line 5706, Address: 0x192bd4, Func Offset: 0x14
	// Line 5708, Address: 0x192bdc, Func Offset: 0x1c
	// Func End, Address: 0x192be8, Func Offset: 0x28
}

// 
// Start address: 0x192bf0
void EnemyGetRandomPointInPassage(float* pos, float range)
{
	_anon6 aabb;
	float base[4];
	float offset[4];
	float vec[4];
	float tpos[4];
	EnemyClHitResult* cres;
	int n;
	// Line 5779, Address: 0x192bf0, Func Offset: 0
	// Line 5784, Address: 0x192c0c, Func Offset: 0x1c
	// Line 5785, Address: 0x192c18, Func Offset: 0x28
	// Line 5786, Address: 0x192c20, Func Offset: 0x30
	// Line 5791, Address: 0x192c40, Func Offset: 0x50
	// Line 5792, Address: 0x192c48, Func Offset: 0x58
	// Line 5795, Address: 0x192c50, Func Offset: 0x60
	// Line 5791, Address: 0x192c54, Func Offset: 0x64
	// Line 5793, Address: 0x192c58, Func Offset: 0x68
	// Line 5792, Address: 0x192c5c, Func Offset: 0x6c
	// Line 5790, Address: 0x192c68, Func Offset: 0x78
	// Line 5787, Address: 0x192c6c, Func Offset: 0x7c
	// Line 5792, Address: 0x192c70, Func Offset: 0x80
	// Line 5790, Address: 0x192c74, Func Offset: 0x84
	// Line 5793, Address: 0x192c78, Func Offset: 0x88
	// Line 5791, Address: 0x192c7c, Func Offset: 0x8c
	// Line 5788, Address: 0x192c80, Func Offset: 0x90
	// Line 5787, Address: 0x192c84, Func Offset: 0x94
	// Line 5788, Address: 0x192c8c, Func Offset: 0x9c
	// Line 5791, Address: 0x192c90, Func Offset: 0xa0
	// Line 5789, Address: 0x192c94, Func Offset: 0xa4
	// Line 5788, Address: 0x192c98, Func Offset: 0xa8
	// Line 5793, Address: 0x192c9c, Func Offset: 0xac
	// Line 5789, Address: 0x192ca4, Func Offset: 0xb4
	// Line 5793, Address: 0x192ca8, Func Offset: 0xb8
	// Line 5789, Address: 0x192cac, Func Offset: 0xbc
	// Line 5794, Address: 0x192cb0, Func Offset: 0xc0
	// Line 5791, Address: 0x192cb4, Func Offset: 0xc4
	// Line 5793, Address: 0x192cb8, Func Offset: 0xc8
	// Line 5794, Address: 0x192cbc, Func Offset: 0xcc
	// Line 5797, Address: 0x192cc0, Func Offset: 0xd0
	// Line 5798, Address: 0x192cd8, Func Offset: 0xe8
	// Line 5799, Address: 0x192cf0, Func Offset: 0x100
	// Line 5800, Address: 0x192cfc, Func Offset: 0x10c
	// Line 5799, Address: 0x192d00, Func Offset: 0x110
	// Line 5800, Address: 0x192d0c, Func Offset: 0x11c
	// Line 5804, Address: 0x192d1c, Func Offset: 0x12c
	// Line 5806, Address: 0x192d24, Func Offset: 0x134
	// Line 5805, Address: 0x192d28, Func Offset: 0x138
	// Line 5806, Address: 0x192d2c, Func Offset: 0x13c
	// Line 5805, Address: 0x192d30, Func Offset: 0x140
	// Line 5806, Address: 0x192d34, Func Offset: 0x144
	// Line 5805, Address: 0x192d38, Func Offset: 0x148
	// Line 5806, Address: 0x192d4c, Func Offset: 0x15c
	// Line 5810, Address: 0x192d6c, Func Offset: 0x17c
	// Line 5815, Address: 0x192d80, Func Offset: 0x190
	// Line 5816, Address: 0x192db4, Func Offset: 0x1c4
	// Line 5817, Address: 0x192dcc, Func Offset: 0x1dc
	// Line 5821, Address: 0x192de4, Func Offset: 0x1f4
	// Line 5823, Address: 0x192df8, Func Offset: 0x208
	// Line 5824, Address: 0x192e00, Func Offset: 0x210
	// Func End, Address: 0x192e1c, Func Offset: 0x22c
}

// 
// Start address: 0x192e20
int EnemyMeasureFloor(EnemyMeasureResult* mres, float* pos)
{
	EnemyClHitResult* cres;
	float vec[4];
	float spos[4];
	float epos[4];
	int r;
	// Line 5832, Address: 0x192e20, Func Offset: 0
	// Line 5836, Address: 0x192e40, Func Offset: 0x20
	// Line 5838, Address: 0x192e4c, Func Offset: 0x2c
	// Line 5839, Address: 0x192e7c, Func Offset: 0x5c
	// Line 5841, Address: 0x192e98, Func Offset: 0x78
	// Line 5842, Address: 0x192ec8, Func Offset: 0xa8
	// Line 5843, Address: 0x192ee4, Func Offset: 0xc4
	// Line 5845, Address: 0x192efc, Func Offset: 0xdc
	// Line 5846, Address: 0x192f0c, Func Offset: 0xec
	// Line 5847, Address: 0x192f3c, Func Offset: 0x11c
	// Line 5848, Address: 0x192f5c, Func Offset: 0x13c
	// Line 5850, Address: 0x192f74, Func Offset: 0x154
	// Line 5851, Address: 0x192f84, Func Offset: 0x164
	// Line 5852, Address: 0x192fb4, Func Offset: 0x194
	// Line 5853, Address: 0x192fd4, Func Offset: 0x1b4
	// Line 5858, Address: 0x192fec, Func Offset: 0x1cc
	// Line 5859, Address: 0x192ff0, Func Offset: 0x1d0
	// Line 5860, Address: 0x192ff8, Func Offset: 0x1d8
	// Line 5861, Address: 0x193000, Func Offset: 0x1e0
	// Line 5862, Address: 0x19300c, Func Offset: 0x1ec
	// Line 5863, Address: 0x193018, Func Offset: 0x1f8
	// Line 5865, Address: 0x193020, Func Offset: 0x200
	// Line 5866, Address: 0x193024, Func Offset: 0x204
	// Line 5867, Address: 0x193028, Func Offset: 0x208
	// Line 5868, Address: 0x193030, Func Offset: 0x210
	// Line 5869, Address: 0x193038, Func Offset: 0x218
	// Line 5870, Address: 0x19303c, Func Offset: 0x21c
	// Line 5871, Address: 0x193040, Func Offset: 0x220
	// Line 5872, Address: 0x193044, Func Offset: 0x224
	// Func End, Address: 0x193060, Func Offset: 0x240
}

// 
// Start address: 0x193060
int EnemyMeasureMyFloor(EnemyMeasureResult* mres, sfObj* obj)
{
	// Line 5880, Address: 0x193060, Func Offset: 0
	// Line 5881, Address: 0x193064, Func Offset: 0x4
	// Line 5880, Address: 0x193068, Func Offset: 0x8
	// Line 5881, Address: 0x193070, Func Offset: 0x10
	// Line 5882, Address: 0x19307c, Func Offset: 0x1c
	// Line 5883, Address: 0x193080, Func Offset: 0x20
	// Line 5884, Address: 0x19309c, Func Offset: 0x3c
	// Line 5885, Address: 0x1930a0, Func Offset: 0x40
	// Line 5886, Address: 0x1930a8, Func Offset: 0x48
	// Line 5887, Address: 0x1930c4, Func Offset: 0x64
	// Line 5888, Address: 0x1930c8, Func Offset: 0x68
	// Line 5889, Address: 0x1930cc, Func Offset: 0x6c
	// Line 5888, Address: 0x1930d4, Func Offset: 0x74
	// Line 5889, Address: 0x1930d8, Func Offset: 0x78
	// Func End, Address: 0x1930e0, Func Offset: 0x80
}

// 
// Start address: 0x1930e0
void EnemyCalcLightColor(float* color, float* pos, float* normal)
{
	int i;
	int n;
	float d;
	float d2;
	_anon2* light;
	float vec[4];
	// Line 5900, Address: 0x1930e0, Func Offset: 0
	// Line 5905, Address: 0x193110, Func Offset: 0x30
	// Line 5906, Address: 0x19311c, Func Offset: 0x3c
	// Line 5907, Address: 0x193120, Func Offset: 0x40
	// Line 5908, Address: 0x193128, Func Offset: 0x48
	// Line 5909, Address: 0x193134, Func Offset: 0x54
	// Line 5910, Address: 0x19315c, Func Offset: 0x7c
	// Line 5913, Address: 0x19318c, Func Offset: 0xac
	// Line 5914, Address: 0x1931ac, Func Offset: 0xcc
	// Line 5915, Address: 0x1931d8, Func Offset: 0xf8
	// Line 5916, Address: 0x1931f8, Func Offset: 0x118
	// Line 5917, Address: 0x19320c, Func Offset: 0x12c
	// Line 5918, Address: 0x193218, Func Offset: 0x138
	// Line 5919, Address: 0x193244, Func Offset: 0x164
	// Line 5921, Address: 0x19325c, Func Offset: 0x17c
	// Line 5922, Address: 0x193274, Func Offset: 0x194
	// Func End, Address: 0x1932a0, Func Offset: 0x1c0
}

// 
// Start address: 0x1932a0
int EnemySetLightingOffByFloor(sfObj* obj)
{
	EnemyMeasureResult mres;
	int f;
	// Line 5931, Address: 0x1932a0, Func Offset: 0
	// Line 5934, Address: 0x1932b4, Func Offset: 0x14
	// Line 5935, Address: 0x1932c8, Func Offset: 0x28
	// Line 5936, Address: 0x1932d4, Func Offset: 0x34
	// Line 5937, Address: 0x1932e8, Func Offset: 0x48
	// Line 5938, Address: 0x1932f8, Func Offset: 0x58
	// Line 5939, Address: 0x193300, Func Offset: 0x60
	// Line 5940, Address: 0x193308, Func Offset: 0x68
	// Line 5941, Address: 0x193310, Func Offset: 0x70
	// Line 5943, Address: 0x19331c, Func Offset: 0x7c
	// Line 5944, Address: 0x193320, Func Offset: 0x80
	// Line 5946, Address: 0x193328, Func Offset: 0x88
	// Line 5947, Address: 0x193330, Func Offset: 0x90
	// Func End, Address: 0x193344, Func Offset: 0xa4
}

// 
// Start address: 0x193350
int EnemySetLightingOffByLasthitPolygon(sfObj* obj)
{
	int f;
	// Line 5956, Address: 0x193350, Func Offset: 0
	// Line 5958, Address: 0x19336c, Func Offset: 0x1c
	// Line 5959, Address: 0x193380, Func Offset: 0x30
	// Line 5960, Address: 0x19338c, Func Offset: 0x3c
	// Line 5961, Address: 0x1933a0, Func Offset: 0x50
	// Line 5962, Address: 0x1933b0, Func Offset: 0x60
	// Line 5963, Address: 0x1933b8, Func Offset: 0x68
	// Line 5964, Address: 0x1933c0, Func Offset: 0x70
	// Line 5965, Address: 0x1933c8, Func Offset: 0x78
	// Line 5967, Address: 0x1933d4, Func Offset: 0x84
	// Line 5968, Address: 0x1933d8, Func Offset: 0x88
	// Line 5969, Address: 0x1933e0, Func Offset: 0x90
	// Func End, Address: 0x1933f4, Func Offset: 0xa4
}

// 
// Start address: 0x193400
int EnemySetLightingOffBySphereHit(sfObj* obj, float radius)
{
	_anon4 sphere;
	int f;
	// Line 5979, Address: 0x193400, Func Offset: 0
	// Line 5982, Address: 0x193408, Func Offset: 0x8
	// Line 5979, Address: 0x19340c, Func Offset: 0xc
	// Line 5982, Address: 0x19341c, Func Offset: 0x1c
	// Line 5983, Address: 0x193424, Func Offset: 0x24
	// Line 5984, Address: 0x193430, Func Offset: 0x30
	// Line 5985, Address: 0x193444, Func Offset: 0x44
	// Line 5986, Address: 0x193458, Func Offset: 0x58
	// Line 5987, Address: 0x19346c, Func Offset: 0x6c
	// Line 5988, Address: 0x19347c, Func Offset: 0x7c
	// Line 5989, Address: 0x193484, Func Offset: 0x84
	// Line 5990, Address: 0x19348c, Func Offset: 0x8c
	// Line 5991, Address: 0x193498, Func Offset: 0x98
	// Line 5993, Address: 0x1934a4, Func Offset: 0xa4
	// Line 5994, Address: 0x1934a8, Func Offset: 0xa8
	// Line 5996, Address: 0x1934b0, Func Offset: 0xb0
	// Line 5997, Address: 0x1934b8, Func Offset: 0xb8
	// Func End, Address: 0x1934d0, Func Offset: 0xd0
}

// 
// Start address: 0x1934d0
int EnemySetShadowOffBySphereHit(sfObj* obj, float radius)
{
	sfCldObject* pc;
	int r;
	// Line 6007, Address: 0x1934d0, Func Offset: 0
	// Line 6012, Address: 0x1934d4, Func Offset: 0x4
	// Line 6007, Address: 0x1934d8, Func Offset: 0x8
	// Line 6011, Address: 0x1934e8, Func Offset: 0x18
	// Line 6007, Address: 0x1934ec, Func Offset: 0x1c
	// Line 6012, Address: 0x1934f8, Func Offset: 0x28
	// Line 6013, Address: 0x193508, Func Offset: 0x38
	// Line 6014, Address: 0x193518, Func Offset: 0x48
	// Line 6015, Address: 0x193520, Func Offset: 0x50
	// Line 6016, Address: 0x19352c, Func Offset: 0x5c
	// Line 6017, Address: 0x193548, Func Offset: 0x78
	// Line 6018, Address: 0x193550, Func Offset: 0x80
	// Line 6019, Address: 0x19355c, Func Offset: 0x8c
	// Line 6020, Address: 0x19356c, Func Offset: 0x9c
	// Line 6021, Address: 0x193578, Func Offset: 0xa8
	// Line 6022, Address: 0x193584, Func Offset: 0xb4
	// Line 6023, Address: 0x193590, Func Offset: 0xc0
	// Line 6025, Address: 0x1935a0, Func Offset: 0xd0
	// Line 6026, Address: 0x1935b4, Func Offset: 0xe4
	// Line 6027, Address: 0x1935c4, Func Offset: 0xf4
	// Line 6028, Address: 0x1935cc, Func Offset: 0xfc
	// Line 6029, Address: 0x1935d4, Func Offset: 0x104
	// Line 6030, Address: 0x1935e0, Func Offset: 0x110
	// Line 6032, Address: 0x1935ec, Func Offset: 0x11c
	// Line 6033, Address: 0x1935f0, Func Offset: 0x120
	// Line 6034, Address: 0x1935f8, Func Offset: 0x128
	// Line 6035, Address: 0x193604, Func Offset: 0x134
	// Line 6036, Address: 0x193608, Func Offset: 0x138
	// Func End, Address: 0x193628, Func Offset: 0x158
}

// 
// Start address: 0x193630
int EnemySetShadowOffBySphereHitDirect(void* chara, float* pos, float radius)
{
	sfCldObject* pc;
	sfCldPart* pp;
	sfCldBody* pcb;
	int r;
	// Line 6048, Address: 0x193630, Func Offset: 0
	// Line 6052, Address: 0x193640, Func Offset: 0x10
	// Line 6048, Address: 0x193644, Func Offset: 0x14
	// Line 6053, Address: 0x193658, Func Offset: 0x28
	// Line 6054, Address: 0x19366c, Func Offset: 0x3c
	// Line 6055, Address: 0x193680, Func Offset: 0x50
	// Line 6056, Address: 0x193688, Func Offset: 0x58
	// Line 6057, Address: 0x193698, Func Offset: 0x68
	// Line 6058, Address: 0x1936b0, Func Offset: 0x80
	// Line 6059, Address: 0x1936b8, Func Offset: 0x88
	// Line 6060, Address: 0x1936c8, Func Offset: 0x98
	// Line 6061, Address: 0x1936e0, Func Offset: 0xb0
	// Line 6063, Address: 0x1936e8, Func Offset: 0xb8
	// Line 6064, Address: 0x1936f0, Func Offset: 0xc0
	// Line 6066, Address: 0x193700, Func Offset: 0xd0
	// Line 6067, Address: 0x19370c, Func Offset: 0xdc
	// Line 6068, Address: 0x193714, Func Offset: 0xe4
	// Line 6069, Address: 0x193720, Func Offset: 0xf0
	// Line 6070, Address: 0x193728, Func Offset: 0xf8
	// Func End, Address: 0x193748, Func Offset: 0x118
}

// 
// Start address: 0x193750
void EnemySetLightingAndShadowByObj(sfObj* obj, sfObj* base)
{
	sfCharacter* chara;
	// Line 6077, Address: 0x193750, Func Offset: 0
	// Line 6079, Address: 0x193764, Func Offset: 0x14
	// Line 6080, Address: 0x193790, Func Offset: 0x40
	// Line 6081, Address: 0x19379c, Func Offset: 0x4c
	// Line 6082, Address: 0x1937a4, Func Offset: 0x54
	// Line 6084, Address: 0x1937b8, Func Offset: 0x68
	// Line 6086, Address: 0x1937d0, Func Offset: 0x80
	// Func End, Address: 0x1937e4, Func Offset: 0x94
}

// 
// Start address: 0x1937f0
void EnemyClSetTargetHeight(float* target, float* pos, float height)
{
	EnemyMeasureResult mres;
	// Line 6097, Address: 0x1937f0, Func Offset: 0
	// Line 6099, Address: 0x193808, Func Offset: 0x18
	// Line 6100, Address: 0x193810, Func Offset: 0x20
	// Line 6101, Address: 0x193820, Func Offset: 0x30
	// Line 6102, Address: 0x19382c, Func Offset: 0x3c
	// Line 6103, Address: 0x193830, Func Offset: 0x40
	// Func End, Address: 0x193844, Func Offset: 0x54
}

// 
// Start address: 0x193850
int EnemyClRaiseTargetHeight(float* target, float* pos, float height)
{
	EnemyMeasureResult mres;
	// Line 6115, Address: 0x193850, Func Offset: 0
	// Line 6117, Address: 0x193868, Func Offset: 0x18
	// Line 6118, Address: 0x193870, Func Offset: 0x20
	// Line 6119, Address: 0x19388c, Func Offset: 0x3c
	// Line 6120, Address: 0x1938a0, Func Offset: 0x50
	// Line 6121, Address: 0x1938a4, Func Offset: 0x54
	// Line 6123, Address: 0x1938ac, Func Offset: 0x5c
	// Line 6124, Address: 0x1938b0, Func Offset: 0x60
	// Line 6125, Address: 0x1938b8, Func Offset: 0x68
	// Func End, Address: 0x1938cc, Func Offset: 0x7c
}

// 
// Start address: 0x1938d0
int EnemyMapPolygonIsNoThrough(_anon0* poly)
{
	int r;
	// Line 6132, Address: 0x1938d0, Func Offset: 0
	// Line 6134, Address: 0x1938dc, Func Offset: 0xc
	// Line 6139, Address: 0x193910, Func Offset: 0x40
	// Line 6140, Address: 0x193914, Func Offset: 0x44
	// Line 6141, Address: 0x193918, Func Offset: 0x48
	// Line 6142, Address: 0x19391c, Func Offset: 0x4c
	// Func End, Address: 0x19392c, Func Offset: 0x5c
}

// 
// Start address: 0x193930
int EnemyMapPolygonCanCatch(_anon0* poly)
{
	int r;
	_anon1 plane;
	// Line 6149, Address: 0x193930, Func Offset: 0
	// Line 6151, Address: 0x193944, Func Offset: 0x14
	// Line 6156, Address: 0x193980, Func Offset: 0x50
	// Line 6157, Address: 0x19398c, Func Offset: 0x5c
	// Line 6163, Address: 0x1939ac, Func Offset: 0x7c
	// Line 6164, Address: 0x1939b0, Func Offset: 0x80
	// Line 6165, Address: 0x1939b4, Func Offset: 0x84
	// Line 6166, Address: 0x1939b8, Func Offset: 0x88
	// Line 6167, Address: 0x1939bc, Func Offset: 0x8c
	// Func End, Address: 0x1939d0, Func Offset: 0xa0
}

// 
// Start address: 0x1939d0
int EnemyMapPolygonIsExistence(_anon0* poly)
{
	int r;
	// Line 6174, Address: 0x1939d0, Func Offset: 0
	// Line 6176, Address: 0x1939dc, Func Offset: 0xc
	// Line 6178, Address: 0x1939f8, Func Offset: 0x28
	// Line 6179, Address: 0x1939fc, Func Offset: 0x2c
	// Line 6180, Address: 0x193a00, Func Offset: 0x30
	// Line 6181, Address: 0x193a04, Func Offset: 0x34
	// Func End, Address: 0x193a14, Func Offset: 0x44
}

// 
// Start address: 0x193a20
int EnemyClCheckHitCamera(sfObj* obj, int part)
{
	EnemyCollision* pec;
	int r;
	// Line 6189, Address: 0x193a20, Func Offset: 0
	// Line 6192, Address: 0x193a2c, Func Offset: 0xc
	// Line 6193, Address: 0x193a34, Func Offset: 0x14
	// Line 6194, Address: 0x193a48, Func Offset: 0x28
	// Line 6195, Address: 0x193a50, Func Offset: 0x30
	// Line 6196, Address: 0x193a54, Func Offset: 0x34
	// Line 6197, Address: 0x193a58, Func Offset: 0x38
	// Line 6198, Address: 0x193a68, Func Offset: 0x48
	// Line 6199, Address: 0x193a70, Func Offset: 0x50
	// Func End, Address: 0x193a80, Func Offset: 0x60
}

