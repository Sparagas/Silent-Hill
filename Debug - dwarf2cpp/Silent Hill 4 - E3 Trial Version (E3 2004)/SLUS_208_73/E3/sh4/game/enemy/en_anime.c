typedef struct sfObj;
typedef struct EnemyAnimeMixer;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _anon2;
typedef struct EnemyAnimeWork;
typedef struct EnemyFootStepData;
typedef struct EnemyFootStepsData;
typedef union _anon3;
typedef struct sfCharacter;
typedef struct EnemyAnimeLocalWork;
typedef struct sfAllocateList2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;

typedef sgIKSolveResult(*type_3)();
typedef void(*type_4)(_anon1*, int, int, float*);
typedef void(*type_7)(sgAnime*, int);
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(sfObj*);

typedef float type_0[4][4];
typedef float type_1[4][2];
typedef float type_2[4];
typedef EnemyFootStepData type_5[0];
typedef void* type_6[4];
typedef _anon3 type_8[256];
typedef unsigned char type_10[4];
typedef float type_12[4];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef float type_19[4];

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

struct EnemyAnimeMixer
{
	_anon0 mixer;
	sgAnime* target;
	EnemyAnimeMixer* next;
	EnemyAnimeMixer* prev;
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

struct _anon0
{
	sgAnime* out_anime;
	sgAnime* base_anime;
	sgAnime* target_anime;
	float blend_ratio;
	float blend_speed;
	float play_speed_ratio;
	int flag;
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

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
};

struct EnemyAnimeWork
{
	EnemyAnimeMixer* mixer;
	sgAnime* base;
	void* base_anime_data;
	int use_default;
	int prev_frame;
	void* over_write;
	EnemyFootStepsData* footsteps;
};

struct EnemyFootStepData
{
	unsigned short frame;
	char dir;
	unsigned char bone_num;
};

struct EnemyFootStepsData
{
	int sound;
	int data_number;
	EnemyFootStepData data[0];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct EnemyAnimeLocalWork
{
	sfAllocateList2 work;
	sfAllocateList2 mixer;
	sfAllocateList2 anime;
	_anon0* last_mixer;
	sgBone** tmp_bone_table;
	int tmp_bone_max;
};

struct sfAllocateList2
{
	char* work_top;
	unsigned int size;
	unsigned int lsize;
	int number;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

EnemyAnimeLocalWork en_anime_work;

void EnemyAnimeWorkInit();
void animemixer_destruct(sfObj* obj, EnemyAnimeMixer* pam);
int EnemyAnimeConstruct(sfObj* obj, int base_anime);
void EnemyAnimeDestruct(sfObj* obj);
void EnemyAnimeWorkAllDestruct();
void* EnemyAnimeTarget(sfObj* obj);
int check_use_scale(sgBone* bone);
void set_all_scale(sgAnime* anime, float scale);
float anime_last_time(sgAnime* panime);
void EnemyAnimeSet(sfObj* obj, int anime);
void EnemyAnimeSetForce(sfObj* obj, int anime);
void EnemyAnimeSetInterWithTime(sfObj* obj, int anime, float time);
void EnemyAnimeSetFootStepsData(sfObj* obj, EnemyFootStepsData* footsteps);
void EnemyAnimeStop(sfObj* obj);
void EnemyAnimeStart(sfObj* obj);
void EnemyAnimeProcess(sfObj* obj);
void EnemyAnimeUpdate(sfObj* obj);
void EnemyAnimeChangeAllScale();
void EnemyAnimeSetSpeed(sfObj* obj, float speed);
float EnemyAnimeNowSpeed(sfObj* obj);
int anime_is_loop(sgAnime* anime);
int EnemyAnimeIsEnd(sfObj* obj);
int EnemyAnimeIsOver(sfObj* obj);
int EnemyAnimeIsOverFrame(sfObj* obj, int frame);
int EnemyAnimeIsEndSoon(sfObj* obj, float second);
int EnemyAnimeIsLoop(sfObj* obj);
int EnemyAnimeIsStop(sfObj* obj);
int EnemyAnimeIsSynthesizing(sfObj* obj);
float EnemyAnimeMixerRatio(sfObj* obj);
int EnemyAnimeNowFrame(sfObj* obj);
float EnemyAnimeNowFrameF(sfObj* obj);
int EnemyAnimeEndFrame(sfObj* obj);
float EnemyAnimeFrameRatio(sfObj* obj);
void EnemyAnimeSetFrame(sfObj* obj, int frame);
void EnemyAnimeSkip(sfObj* obj, float second);
int EnemyEDAnimeIsEnd(void* obj);
int EnemyEDAnimeIsOver(void* obj);
int EnemyEDAnimeIsEndSoon(void* obj);
int EnemyEDAnimeIsEndSoon1(void* obj);
int EnemyAnimeCheckBonesPre(void* old_anime, void* new_anime);
sgBone* EnemyAnimeCheckBones(sgBone* bone);
void EnemyAnimeCheckBonesPost();

// 
// Start address: 0x1842b0
void EnemyAnimeWorkInit()
{
	// Line 73, Address: 0x1842b0, Func Offset: 0
	// Line 74, Address: 0x1842b4, Func Offset: 0x4
	// Line 73, Address: 0x1842b8, Func Offset: 0x8
	// Line 74, Address: 0x1842bc, Func Offset: 0xc
	// Line 75, Address: 0x1842c8, Func Offset: 0x18
	// Line 76, Address: 0x1842d8, Func Offset: 0x28
	// Line 77, Address: 0x1842e8, Func Offset: 0x38
	// Func End, Address: 0x1842f4, Func Offset: 0x44
}

// 
// Start address: 0x184300
void animemixer_destruct(sfObj* obj, EnemyAnimeMixer* pam)
{
	EnemyAnimeWork* paw;
	EnemyAnimeMixer* pnext;
	sfCharacter* chara;
	sgAnime* panime;
	EnemyAnimeMixer* tpam;
	// Line 93, Address: 0x184300, Func Offset: 0
	// Line 98, Address: 0x184320, Func Offset: 0x20
	// Line 100, Address: 0x18432c, Func Offset: 0x2c
	// Line 101, Address: 0x184348, Func Offset: 0x48
	// Line 102, Address: 0x184354, Func Offset: 0x54
	// Line 103, Address: 0x184368, Func Offset: 0x68
	// Line 104, Address: 0x184384, Func Offset: 0x84
	// Line 105, Address: 0x184390, Func Offset: 0x90
	// Line 106, Address: 0x18439c, Func Offset: 0x9c
	// Line 107, Address: 0x1843a4, Func Offset: 0xa4
	// Line 108, Address: 0x1843ac, Func Offset: 0xac
	// Line 109, Address: 0x1843bc, Func Offset: 0xbc
	// Line 110, Address: 0x1843c8, Func Offset: 0xc8
	// Line 111, Address: 0x1843d4, Func Offset: 0xd4
	// Line 113, Address: 0x1843dc, Func Offset: 0xdc
	// Line 114, Address: 0x1843e4, Func Offset: 0xe4
	// Line 117, Address: 0x1843e8, Func Offset: 0xe8
	// Line 118, Address: 0x1843ec, Func Offset: 0xec
	// Line 119, Address: 0x1843f0, Func Offset: 0xf0
	// Line 120, Address: 0x1843fc, Func Offset: 0xfc
	// Line 121, Address: 0x184408, Func Offset: 0x108
	// Line 123, Address: 0x184414, Func Offset: 0x114
	// Line 124, Address: 0x184420, Func Offset: 0x120
	// Line 125, Address: 0x184424, Func Offset: 0x124
	// Line 126, Address: 0x184428, Func Offset: 0x128
	// Line 128, Address: 0x18442c, Func Offset: 0x12c
	// Line 126, Address: 0x184434, Func Offset: 0x134
	// Line 127, Address: 0x184438, Func Offset: 0x138
	// Line 128, Address: 0x18443c, Func Offset: 0x13c
	// Line 129, Address: 0x184444, Func Offset: 0x144
	// Line 130, Address: 0x184450, Func Offset: 0x150
	// Line 131, Address: 0x184454, Func Offset: 0x154
	// Line 132, Address: 0x18445c, Func Offset: 0x15c
	// Line 133, Address: 0x184464, Func Offset: 0x164
	// Line 134, Address: 0x184474, Func Offset: 0x174
	// Line 135, Address: 0x184480, Func Offset: 0x180
	// Line 136, Address: 0x18448c, Func Offset: 0x18c
	// Line 138, Address: 0x184490, Func Offset: 0x190
	// Line 139, Address: 0x1844a0, Func Offset: 0x1a0
	// Line 140, Address: 0x1844a8, Func Offset: 0x1a8
	// Func End, Address: 0x1844c8, Func Offset: 0x1c8
}

// 
// Start address: 0x1844d0
int EnemyAnimeConstruct(sfObj* obj, int base_anime)
{
	EnemyAnimeWork* paw;
	sgAnime* panime;
	sfCharacter* chara;
	void* animedata;
	// Line 148, Address: 0x1844d0, Func Offset: 0
	// Line 153, Address: 0x1844f4, Func Offset: 0x24
	// Line 156, Address: 0x18451c, Func Offset: 0x4c
	// Line 158, Address: 0x184524, Func Offset: 0x54
	// Line 160, Address: 0x184540, Func Offset: 0x70
	// Line 161, Address: 0x18455c, Func Offset: 0x8c
	// Line 162, Address: 0x184568, Func Offset: 0x98
	// Line 163, Address: 0x184570, Func Offset: 0xa0
	// Line 164, Address: 0x18457c, Func Offset: 0xac
	// Line 168, Address: 0x184584, Func Offset: 0xb4
	// Line 170, Address: 0x18458c, Func Offset: 0xbc
	// Line 168, Address: 0x184590, Func Offset: 0xc0
	// Line 171, Address: 0x184594, Func Offset: 0xc4
	// Line 172, Address: 0x18459c, Func Offset: 0xcc
	// Line 173, Address: 0x1845a4, Func Offset: 0xd4
	// Line 172, Address: 0x1845a8, Func Offset: 0xd8
	// Line 174, Address: 0x1845ac, Func Offset: 0xdc
	// Line 175, Address: 0x1845b4, Func Offset: 0xe4
	// Line 176, Address: 0x1845bc, Func Offset: 0xec
	// Line 178, Address: 0x1845cc, Func Offset: 0xfc
	// Line 179, Address: 0x1845d0, Func Offset: 0x100
	// Line 180, Address: 0x1845d8, Func Offset: 0x108
	// Line 183, Address: 0x1845dc, Func Offset: 0x10c
	// Line 181, Address: 0x1845e0, Func Offset: 0x110
	// Line 186, Address: 0x1845e4, Func Offset: 0x114
	// Line 182, Address: 0x1845e8, Func Offset: 0x118
	// Line 186, Address: 0x1845ec, Func Offset: 0x11c
	// Line 183, Address: 0x1845f0, Func Offset: 0x120
	// Line 184, Address: 0x1845f4, Func Offset: 0x124
	// Line 186, Address: 0x1845f8, Func Offset: 0x128
	// Line 188, Address: 0x184600, Func Offset: 0x130
	// Line 189, Address: 0x18460c, Func Offset: 0x13c
	// Line 190, Address: 0x184618, Func Offset: 0x148
	// Line 191, Address: 0x184624, Func Offset: 0x154
	// Line 192, Address: 0x184634, Func Offset: 0x164
	// Line 193, Address: 0x184640, Func Offset: 0x170
	// Line 194, Address: 0x18464c, Func Offset: 0x17c
	// Line 196, Address: 0x18465c, Func Offset: 0x18c
	// Line 197, Address: 0x184664, Func Offset: 0x194
	// Line 198, Address: 0x184668, Func Offset: 0x198
	// Line 199, Address: 0x184670, Func Offset: 0x1a0
	// Line 200, Address: 0x184678, Func Offset: 0x1a8
	// Line 201, Address: 0x184680, Func Offset: 0x1b0
	// Func End, Address: 0x1846a4, Func Offset: 0x1d4
}

// 
// Start address: 0x1846b0
void EnemyAnimeDestruct(sfObj* obj)
{
	EnemyAnimeWork* paw;
	sgAnime* panime;
	sfCharacter* chara;
	// Line 209, Address: 0x1846b0, Func Offset: 0
	// Line 213, Address: 0x1846c8, Func Offset: 0x18
	// Line 214, Address: 0x1846d4, Func Offset: 0x24
	// Line 215, Address: 0x1846dc, Func Offset: 0x2c
	// Line 216, Address: 0x1846e8, Func Offset: 0x38
	// Line 217, Address: 0x1846f0, Func Offset: 0x40
	// Line 219, Address: 0x18470c, Func Offset: 0x5c
	// Line 220, Address: 0x184714, Func Offset: 0x64
	// Line 221, Address: 0x18471c, Func Offset: 0x6c
	// Line 220, Address: 0x184720, Func Offset: 0x70
	// Line 222, Address: 0x184724, Func Offset: 0x74
	// Line 224, Address: 0x18472c, Func Offset: 0x7c
	// Line 225, Address: 0x184734, Func Offset: 0x84
	// Line 226, Address: 0x18473c, Func Offset: 0x8c
	// Line 227, Address: 0x18474c, Func Offset: 0x9c
	// Line 228, Address: 0x184750, Func Offset: 0xa0
	// Line 230, Address: 0x18475c, Func Offset: 0xac
	// Line 231, Address: 0x184764, Func Offset: 0xb4
	// Line 232, Address: 0x18476c, Func Offset: 0xbc
	// Line 233, Address: 0x18477c, Func Offset: 0xcc
	// Line 235, Address: 0x184780, Func Offset: 0xd0
	// Line 236, Address: 0x184784, Func Offset: 0xd4
	// Line 237, Address: 0x18478c, Func Offset: 0xdc
	// Line 238, Address: 0x184794, Func Offset: 0xe4
	// Line 239, Address: 0x1847a4, Func Offset: 0xf4
	// Line 240, Address: 0x1847b0, Func Offset: 0x100
	// Func End, Address: 0x1847cc, Func Offset: 0x11c
}

// 
// Start address: 0x1847d0
void EnemyAnimeWorkAllDestruct()
{
	sgAnime* panime;
	sgAnime* pnext;
	// Line 245, Address: 0x1847d0, Func Offset: 0
	// Line 250, Address: 0x1847d4, Func Offset: 0x4
	// Line 245, Address: 0x1847d8, Func Offset: 0x8
	// Line 250, Address: 0x1847dc, Func Offset: 0xc
	// Line 245, Address: 0x1847e0, Func Offset: 0x10
	// Line 250, Address: 0x1847e4, Func Offset: 0x14
	// Line 254, Address: 0x1847ec, Func Offset: 0x1c
	// Line 255, Address: 0x1847f8, Func Offset: 0x28
	// Line 259, Address: 0x184808, Func Offset: 0x38
	// Line 260, Address: 0x184810, Func Offset: 0x40
	// Line 261, Address: 0x184824, Func Offset: 0x54
	// Line 263, Address: 0x18482c, Func Offset: 0x5c
	// Line 264, Address: 0x184838, Func Offset: 0x68
	// Line 265, Address: 0x184844, Func Offset: 0x74
	// Func End, Address: 0x184858, Func Offset: 0x88
}

// 
// Start address: 0x184860
void* EnemyAnimeTarget(sfObj* obj)
{
	EnemyAnimeWork* paw;
	EnemyAnimeMixer* pam;
	// Line 288, Address: 0x184860, Func Offset: 0
	// Line 291, Address: 0x18486c, Func Offset: 0xc
	// Line 292, Address: 0x184874, Func Offset: 0x14
	// Line 293, Address: 0x184888, Func Offset: 0x28
	// Line 295, Address: 0x18489c, Func Offset: 0x3c
	// Line 296, Address: 0x1848b8, Func Offset: 0x58
	// Func End, Address: 0x1848c8, Func Offset: 0x68
}

// 
// Start address: 0x1848d0
int check_use_scale(sgBone* bone)
{
	// Line 340, Address: 0x1848d0, Func Offset: 0
	// Line 341, Address: 0x1848d8, Func Offset: 0x8
	// Func End, Address: 0x1848e0, Func Offset: 0x10
}

// 
// Start address: 0x1848e0
void set_all_scale(sgAnime* anime, float scale)
{
	int i;
	int m;
	int f;
	float sv[4];
	float sv2[4];
	sgBone* bone;
	// Line 348, Address: 0x1848e0, Func Offset: 0
	// Line 352, Address: 0x184904, Func Offset: 0x24
	// Line 354, Address: 0x184910, Func Offset: 0x30
	// Line 355, Address: 0x184914, Func Offset: 0x34
	// Line 353, Address: 0x18491c, Func Offset: 0x3c
	// Line 355, Address: 0x184920, Func Offset: 0x40
	// Line 353, Address: 0x184924, Func Offset: 0x44
	// Line 355, Address: 0x18492c, Func Offset: 0x4c
	// Line 356, Address: 0x18494c, Func Offset: 0x6c
	// Line 357, Address: 0x184958, Func Offset: 0x78
	// Line 358, Address: 0x184964, Func Offset: 0x84
	// Line 359, Address: 0x18496c, Func Offset: 0x8c
	// Line 360, Address: 0x184974, Func Offset: 0x94
	// Line 361, Address: 0x184980, Func Offset: 0xa0
	// Line 362, Address: 0x184990, Func Offset: 0xb0
	// Line 363, Address: 0x1849b0, Func Offset: 0xd0
	// Line 364, Address: 0x1849bc, Func Offset: 0xdc
	// Line 365, Address: 0x1849c8, Func Offset: 0xe8
	// Line 368, Address: 0x1849d0, Func Offset: 0xf0
	// Line 369, Address: 0x1849e4, Func Offset: 0x104
	// Line 370, Address: 0x1849f0, Func Offset: 0x110
	// Line 371, Address: 0x1849f8, Func Offset: 0x118
	// Line 372, Address: 0x184a00, Func Offset: 0x120
	// Line 373, Address: 0x184a08, Func Offset: 0x128
	// Line 374, Address: 0x184a10, Func Offset: 0x130
	// Line 375, Address: 0x184a20, Func Offset: 0x140
	// Line 376, Address: 0x184a40, Func Offset: 0x160
	// Line 377, Address: 0x184a4c, Func Offset: 0x16c
	// Line 378, Address: 0x184a58, Func Offset: 0x178
	// Line 382, Address: 0x184a60, Func Offset: 0x180
	// Func End, Address: 0x184a84, Func Offset: 0x1a4
}

// 
// Start address: 0x184a90
float anime_last_time(sgAnime* panime)
{
	float speed;
	float frame;
	// Line 389, Address: 0x184a90, Func Offset: 0
	// Line 390, Address: 0x184aa4, Func Offset: 0x14
	// Line 391, Address: 0x184ab0, Func Offset: 0x20
	// Line 390, Address: 0x184ab4, Func Offset: 0x24
	// Line 391, Address: 0x184ab8, Func Offset: 0x28
	// Line 392, Address: 0x184ac4, Func Offset: 0x34
	// Line 393, Address: 0x184ad8, Func Offset: 0x48
	// Line 394, Address: 0x184af4, Func Offset: 0x64
	// Line 395, Address: 0x184b04, Func Offset: 0x74
	// Line 396, Address: 0x184b24, Func Offset: 0x94
	// Line 399, Address: 0x184b28, Func Offset: 0x98
	// Func End, Address: 0x184b40, Func Offset: 0xb0
}

// 
// Start address: 0x184b40
void EnemyAnimeSet(sfObj* obj, int anime)
{
	sgAnime* panime;
	sgAnime* tanime;
	EnemyAnimeWork* paw;
	EnemyAnimeMixer* pam;
	_anon0* pmixer;
	sfCharacter* chara;
	void* animedata;
	float last_time;
	// Line 406, Address: 0x184b40, Func Offset: 0
	// Line 414, Address: 0x184b70, Func Offset: 0x30
	// Line 416, Address: 0x184b7c, Func Offset: 0x3c
	// Line 419, Address: 0x184b84, Func Offset: 0x44
	// Line 421, Address: 0x184b8c, Func Offset: 0x4c
	// Line 422, Address: 0x184ba0, Func Offset: 0x60
	// Line 423, Address: 0x184bc4, Func Offset: 0x84
	// Line 424, Address: 0x184be0, Func Offset: 0xa0
	// Line 425, Address: 0x184bec, Func Offset: 0xac
	// Line 427, Address: 0x184bf4, Func Offset: 0xb4
	// Line 438, Address: 0x184bf8, Func Offset: 0xb8
	// Line 441, Address: 0x184c20, Func Offset: 0xe0
	// Line 442, Address: 0x184c28, Func Offset: 0xe8
	// Line 443, Address: 0x184c40, Func Offset: 0x100
	// Line 444, Address: 0x184c4c, Func Offset: 0x10c
	// Line 445, Address: 0x184c60, Func Offset: 0x120
	// Line 447, Address: 0x184c70, Func Offset: 0x130
	// Line 448, Address: 0x184c80, Func Offset: 0x140
	// Line 449, Address: 0x184c88, Func Offset: 0x148
	// Line 450, Address: 0x184c94, Func Offset: 0x154
	// Line 451, Address: 0x184ca0, Func Offset: 0x160
	// Line 452, Address: 0x184ca8, Func Offset: 0x168
	// Line 454, Address: 0x184cb4, Func Offset: 0x174
	// Line 457, Address: 0x184cc0, Func Offset: 0x180
	// Line 458, Address: 0x184cc8, Func Offset: 0x188
	// Line 460, Address: 0x184cd0, Func Offset: 0x190
	// Line 459, Address: 0x184cd4, Func Offset: 0x194
	// Line 463, Address: 0x184cd8, Func Offset: 0x198
	// Line 466, Address: 0x184ce0, Func Offset: 0x1a0
	// Line 467, Address: 0x184ce4, Func Offset: 0x1a4
	// Line 468, Address: 0x184cec, Func Offset: 0x1ac
	// Line 469, Address: 0x184cf4, Func Offset: 0x1b4
	// Line 470, Address: 0x184cfc, Func Offset: 0x1bc
	// Line 472, Address: 0x184d00, Func Offset: 0x1c0
	// Line 473, Address: 0x184d04, Func Offset: 0x1c4
	// Line 474, Address: 0x184d0c, Func Offset: 0x1cc
	// Line 476, Address: 0x184d14, Func Offset: 0x1d4
	// Line 477, Address: 0x184d20, Func Offset: 0x1e0
	// Line 478, Address: 0x184d28, Func Offset: 0x1e8
	// Line 479, Address: 0x184d34, Func Offset: 0x1f4
	// Line 481, Address: 0x184d38, Func Offset: 0x1f8
	// Line 482, Address: 0x184d3c, Func Offset: 0x1fc
	// Line 485, Address: 0x184d40, Func Offset: 0x200
	// Line 486, Address: 0x184d4c, Func Offset: 0x20c
	// Line 487, Address: 0x184d70, Func Offset: 0x230
	// Line 488, Address: 0x184d78, Func Offset: 0x238
	// Line 489, Address: 0x184d84, Func Offset: 0x244
	// Line 490, Address: 0x184d88, Func Offset: 0x248
	// Line 491, Address: 0x184d90, Func Offset: 0x250
	// Line 492, Address: 0x184d98, Func Offset: 0x258
	// Line 493, Address: 0x184da4, Func Offset: 0x264
	// Line 494, Address: 0x184db0, Func Offset: 0x270
	// Line 495, Address: 0x184db4, Func Offset: 0x274
	// Line 497, Address: 0x184dc0, Func Offset: 0x280
	// Line 498, Address: 0x184dcc, Func Offset: 0x28c
	// Line 499, Address: 0x184ddc, Func Offset: 0x29c
	// Line 500, Address: 0x184dec, Func Offset: 0x2ac
	// Line 501, Address: 0x184e00, Func Offset: 0x2c0
	// Line 502, Address: 0x184e0c, Func Offset: 0x2cc
	// Line 503, Address: 0x184e10, Func Offset: 0x2d0
	// Line 504, Address: 0x184e18, Func Offset: 0x2d8
	// Line 505, Address: 0x184e24, Func Offset: 0x2e4
	// Line 506, Address: 0x184e30, Func Offset: 0x2f0
	// Line 507, Address: 0x184e3c, Func Offset: 0x2fc
	// Line 509, Address: 0x184e50, Func Offset: 0x310
	// Line 510, Address: 0x184e54, Func Offset: 0x314
	// Line 511, Address: 0x184e64, Func Offset: 0x324
	// Line 512, Address: 0x184e6c, Func Offset: 0x32c
	// Line 513, Address: 0x184e74, Func Offset: 0x334
	// Line 515, Address: 0x184e84, Func Offset: 0x344
	// Line 516, Address: 0x184e8c, Func Offset: 0x34c
	// Line 517, Address: 0x184e90, Func Offset: 0x350
	// Func End, Address: 0x184ec0, Func Offset: 0x380
}

// 
// Start address: 0x184ec0
void EnemyAnimeSetForce(sfObj* obj, int anime)
{
	EnemyAnimeWork* paw;
	sgAnime* panime;
	sfCharacter* chara;
	void* animedata;
	// Line 524, Address: 0x184ec0, Func Offset: 0
	// Line 535, Address: 0x184ee4, Func Offset: 0x24
	// Line 537, Address: 0x184ef0, Func Offset: 0x30
	// Line 538, Address: 0x184ef8, Func Offset: 0x38
	// Line 540, Address: 0x184f00, Func Offset: 0x40
	// Line 543, Address: 0x184f2c, Func Offset: 0x6c
	// Line 544, Address: 0x184f38, Func Offset: 0x78
	// Line 545, Address: 0x184f40, Func Offset: 0x80
	// Line 547, Address: 0x184f48, Func Offset: 0x88
	// Line 548, Address: 0x184f54, Func Offset: 0x94
	// Line 549, Address: 0x184f58, Func Offset: 0x98
	// Line 550, Address: 0x184f64, Func Offset: 0xa4
	// Line 551, Address: 0x184f70, Func Offset: 0xb0
	// Line 552, Address: 0x184f80, Func Offset: 0xc0
	// Line 553, Address: 0x184f90, Func Offset: 0xd0
	// Line 554, Address: 0x184f9c, Func Offset: 0xdc
	// Line 555, Address: 0x184fa8, Func Offset: 0xe8
	// Line 556, Address: 0x184fb4, Func Offset: 0xf4
	// Line 557, Address: 0x184fbc, Func Offset: 0xfc
	// Line 558, Address: 0x184fc4, Func Offset: 0x104
	// Line 559, Address: 0x184fc8, Func Offset: 0x108
	// Line 560, Address: 0x184fd0, Func Offset: 0x110
	// Line 561, Address: 0x184fe0, Func Offset: 0x120
	// Line 562, Address: 0x184fe8, Func Offset: 0x128
	// Line 563, Address: 0x184fec, Func Offset: 0x12c
	// Line 564, Address: 0x184ff0, Func Offset: 0x130
	// Line 565, Address: 0x184ff8, Func Offset: 0x138
	// Line 566, Address: 0x185000, Func Offset: 0x140
	// Func End, Address: 0x185024, Func Offset: 0x164
}

// 
// Start address: 0x185030
void EnemyAnimeSetInterWithTime(sfObj* obj, int anime, float time)
{
	// Line 574, Address: 0x185030, Func Offset: 0
	// Line 575, Address: 0x185034, Func Offset: 0x4
	// Line 574, Address: 0x185038, Func Offset: 0x8
	// Line 576, Address: 0x185054, Func Offset: 0x24
	// Line 577, Address: 0x185064, Func Offset: 0x34
	// Line 578, Address: 0x18506c, Func Offset: 0x3c
	// Line 579, Address: 0x185070, Func Offset: 0x40
	// Line 580, Address: 0x185084, Func Offset: 0x54
	// Line 581, Address: 0x18508c, Func Offset: 0x5c
	// Line 582, Address: 0x185094, Func Offset: 0x64
	// Line 583, Address: 0x185098, Func Offset: 0x68
	// Func End, Address: 0x1850b0, Func Offset: 0x80
}

// 
// Start address: 0x1850b0
void EnemyAnimeSetFootStepsData(sfObj* obj, EnemyFootStepsData* footsteps)
{
	EnemyAnimeWork* paw;
	// Line 643, Address: 0x1850b0, Func Offset: 0
	// Line 645, Address: 0x1850bc, Func Offset: 0xc
	// Line 646, Address: 0x1850c4, Func Offset: 0x14
	// Line 647, Address: 0x1850cc, Func Offset: 0x1c
	// Line 648, Address: 0x1850d0, Func Offset: 0x20
	// Func End, Address: 0x1850e0, Func Offset: 0x30
}

// 
// Start address: 0x1850e0
void EnemyAnimeStop(sfObj* obj)
{
	// Line 655, Address: 0x1850e0, Func Offset: 0
	// Func End, Address: 0x1850e8, Func Offset: 0x8
}

// 
// Start address: 0x1850f0
void EnemyAnimeStart(sfObj* obj)
{
	// Line 663, Address: 0x1850f0, Func Offset: 0
	// Func End, Address: 0x1850f8, Func Offset: 0x8
}

// 
// Start address: 0x185100
void EnemyAnimeProcess(sfObj* obj)
{
	EnemyAnimeWork* paw;
	EnemyAnimeMixer* pam;
	EnemyAnimeMixer* pnext;
	sgAnime* panime;
	EnemyFootStepsData* pfsd;
	int old_frame;
	int new_frame;
	int f;
	float base_speed_bk;
	float target_speed_bk;
	float s;
	int i;
	int n;
	int frame;
	EnemyFootStepData* pfs;
	float pos[4];
	// Line 670, Address: 0x185100, Func Offset: 0
	// Line 678, Address: 0x18512c, Func Offset: 0x2c
	// Line 680, Address: 0x185138, Func Offset: 0x38
	// Line 681, Address: 0x185140, Func Offset: 0x40
	// Line 682, Address: 0x18514c, Func Offset: 0x4c
	// Line 683, Address: 0x18515c, Func Offset: 0x5c
	// Line 684, Address: 0x185164, Func Offset: 0x64
	// Line 685, Address: 0x185174, Func Offset: 0x74
	// Line 686, Address: 0x185178, Func Offset: 0x78
	// Line 687, Address: 0x185184, Func Offset: 0x84
	// Line 688, Address: 0x185190, Func Offset: 0x90
	// Line 689, Address: 0x1851a4, Func Offset: 0xa4
	// Line 690, Address: 0x1851ac, Func Offset: 0xac
	// Line 691, Address: 0x1851b8, Func Offset: 0xb8
	// Line 693, Address: 0x1851c0, Func Offset: 0xc0
	// Line 694, Address: 0x1851cc, Func Offset: 0xcc
	// Line 695, Address: 0x1851e8, Func Offset: 0xe8
	// Line 696, Address: 0x1851f8, Func Offset: 0xf8
	// Line 697, Address: 0x18520c, Func Offset: 0x10c
	// Line 700, Address: 0x185218, Func Offset: 0x118
	// Line 701, Address: 0x185220, Func Offset: 0x120
	// Line 702, Address: 0x185224, Func Offset: 0x124
	// Line 701, Address: 0x185228, Func Offset: 0x128
	// Line 702, Address: 0x18522c, Func Offset: 0x12c
	// Line 705, Address: 0x185240, Func Offset: 0x140
	// Line 706, Address: 0x185244, Func Offset: 0x144
	// Line 707, Address: 0x18524c, Func Offset: 0x14c
	// Line 708, Address: 0x18525c, Func Offset: 0x15c
	// Line 709, Address: 0x185264, Func Offset: 0x164
	// Line 711, Address: 0x185268, Func Offset: 0x168
	// Line 712, Address: 0x185274, Func Offset: 0x174
	// Line 713, Address: 0x18527c, Func Offset: 0x17c
	// Line 714, Address: 0x18528c, Func Offset: 0x18c
	// Line 716, Address: 0x185298, Func Offset: 0x198
	// Line 718, Address: 0x18529c, Func Offset: 0x19c
	// Line 719, Address: 0x1852ac, Func Offset: 0x1ac
	// Line 720, Address: 0x1852b4, Func Offset: 0x1b4
	// Line 721, Address: 0x1852bc, Func Offset: 0x1bc
	// Line 722, Address: 0x1852c8, Func Offset: 0x1c8
	// Line 723, Address: 0x1852d4, Func Offset: 0x1d4
	// Line 724, Address: 0x1852e8, Func Offset: 0x1e8
	// Line 725, Address: 0x1852f0, Func Offset: 0x1f0
	// Line 727, Address: 0x1852fc, Func Offset: 0x1fc
	// Line 728, Address: 0x185300, Func Offset: 0x200
	// Line 729, Address: 0x185308, Func Offset: 0x208
	// Line 730, Address: 0x185314, Func Offset: 0x214
	// Line 733, Address: 0x185328, Func Offset: 0x228
	// Line 734, Address: 0x18532c, Func Offset: 0x22c
	// Line 736, Address: 0x18534c, Func Offset: 0x24c
	// Line 739, Address: 0x18535c, Func Offset: 0x25c
	// Line 736, Address: 0x185360, Func Offset: 0x260
	// Line 740, Address: 0x185364, Func Offset: 0x264
	// Line 742, Address: 0x185378, Func Offset: 0x278
	// Line 743, Address: 0x18537c, Func Offset: 0x27c
	// Line 754, Address: 0x185438, Func Offset: 0x338
	// Line 756, Address: 0x185454, Func Offset: 0x354
	// Line 757, Address: 0x18545c, Func Offset: 0x35c
	// Line 758, Address: 0x185468, Func Offset: 0x368
	// Line 759, Address: 0x185470, Func Offset: 0x370
	// Line 762, Address: 0x185480, Func Offset: 0x380
	// Line 765, Address: 0x185490, Func Offset: 0x390
	// Line 766, Address: 0x185498, Func Offset: 0x398
	// Func End, Address: 0x1854c8, Func Offset: 0x3c8
}

// 
// Start address: 0x1854d0
void EnemyAnimeUpdate(sfObj* obj)
{
	EnemyAnimeWork* paw;
	EnemyAnimeMixer* pam;
	sgAnime* panime;
	int f;
	// Line 772, Address: 0x1854d0, Func Offset: 0
	// Line 777, Address: 0x1854e8, Func Offset: 0x18
	// Line 779, Address: 0x1854f4, Func Offset: 0x24
	// Line 780, Address: 0x1854fc, Func Offset: 0x2c
	// Line 781, Address: 0x185508, Func Offset: 0x38
	// Line 782, Address: 0x185518, Func Offset: 0x48
	// Line 783, Address: 0x185520, Func Offset: 0x50
	// Line 785, Address: 0x185530, Func Offset: 0x60
	// Line 786, Address: 0x18553c, Func Offset: 0x6c
	// Line 787, Address: 0x185544, Func Offset: 0x74
	// Line 789, Address: 0x18554c, Func Offset: 0x7c
	// Line 790, Address: 0x185550, Func Offset: 0x80
	// Line 791, Address: 0x185554, Func Offset: 0x84
	// Line 790, Address: 0x185558, Func Offset: 0x88
	// Line 791, Address: 0x18555c, Func Offset: 0x8c
	// Line 792, Address: 0x185570, Func Offset: 0xa0
	// Line 793, Address: 0x185578, Func Offset: 0xa8
	// Line 794, Address: 0x185588, Func Offset: 0xb8
	// Line 795, Address: 0x185598, Func Offset: 0xc8
	// Line 796, Address: 0x1855a0, Func Offset: 0xd0
	// Line 797, Address: 0x1855ac, Func Offset: 0xdc
	// Line 798, Address: 0x1855b0, Func Offset: 0xe0
	// Line 799, Address: 0x1855b8, Func Offset: 0xe8
	// Line 800, Address: 0x1855c4, Func Offset: 0xf4
	// Line 802, Address: 0x1855d8, Func Offset: 0x108
	// Line 803, Address: 0x1855e0, Func Offset: 0x110
	// Func End, Address: 0x1855fc, Func Offset: 0x12c
}

// 
// Start address: 0x185600
void EnemyAnimeChangeAllScale()
{
	// Line 814, Address: 0x185600, Func Offset: 0
	// Func End, Address: 0x185608, Func Offset: 0x8
}

// 
// Start address: 0x185610
void EnemyAnimeSetSpeed(sfObj* obj, float speed)
{
	// Line 821, Address: 0x185610, Func Offset: 0
	// Line 822, Address: 0x18561c, Func Offset: 0xc
	// Line 823, Address: 0x185630, Func Offset: 0x20
	// Func End, Address: 0x185640, Func Offset: 0x30
}

// 
// Start address: 0x185640
float EnemyAnimeNowSpeed(sfObj* obj)
{
	// Line 830, Address: 0x185640, Func Offset: 0
	// Line 831, Address: 0x185648, Func Offset: 0x8
	// Line 832, Address: 0x185658, Func Offset: 0x18
	// Func End, Address: 0x185664, Func Offset: 0x24
}

// 
// Start address: 0x185670
int anime_is_loop(sgAnime* anime)
{
	// Line 839, Address: 0x185670, Func Offset: 0
	// Line 840, Address: 0x185678, Func Offset: 0x8
	// Line 841, Address: 0x185688, Func Offset: 0x18
	// Func End, Address: 0x185694, Func Offset: 0x24
}

// 
// Start address: 0x1856a0
int EnemyAnimeIsEnd(sfObj* obj)
{
	sgAnime* panime;
	int r;
	// Line 848, Address: 0x1856a0, Func Offset: 0
	// Line 851, Address: 0x1856ac, Func Offset: 0xc
	// Line 852, Address: 0x1856c8, Func Offset: 0x28
	// Line 853, Address: 0x1856d0, Func Offset: 0x30
	// Line 855, Address: 0x1856d8, Func Offset: 0x38
	// Func End, Address: 0x1856e8, Func Offset: 0x48
}

// 
// Start address: 0x1856f0
int EnemyAnimeIsOver(sfObj* obj)
{
	EnemyAnimeWork* paw;
	sgAnime* panime;
	int r;
	int f;
	// Line 862, Address: 0x1856f0, Func Offset: 0
	// Line 866, Address: 0x185704, Func Offset: 0x14
	// Line 867, Address: 0x185720, Func Offset: 0x30
	// Line 868, Address: 0x18572c, Func Offset: 0x3c
	// Line 869, Address: 0x185740, Func Offset: 0x50
	// Line 870, Address: 0x18574c, Func Offset: 0x5c
	// Line 871, Address: 0x185758, Func Offset: 0x68
	// Line 870, Address: 0x18575c, Func Offset: 0x6c
	// Line 872, Address: 0x185760, Func Offset: 0x70
	// Line 873, Address: 0x185790, Func Offset: 0xa0
	// Line 874, Address: 0x185794, Func Offset: 0xa4
	// Line 875, Address: 0x185798, Func Offset: 0xa8
	// Line 876, Address: 0x1857a0, Func Offset: 0xb0
	// Func End, Address: 0x1857b8, Func Offset: 0xc8
}

// 
// Start address: 0x1857c0
int EnemyAnimeIsOverFrame(sfObj* obj, int frame)
{
	EnemyAnimeWork* paw;
	sgAnime* panime;
	int r;
	// Line 884, Address: 0x1857c0, Func Offset: 0
	// Line 888, Address: 0x1857d8, Func Offset: 0x18
	// Line 889, Address: 0x1857f8, Func Offset: 0x38
	// Line 890, Address: 0x185804, Func Offset: 0x44
	// Line 891, Address: 0x185818, Func Offset: 0x58
	// Line 892, Address: 0x185820, Func Offset: 0x60
	// Line 894, Address: 0x185844, Func Offset: 0x84
	// Line 895, Address: 0x185850, Func Offset: 0x90
	// Line 896, Address: 0x185854, Func Offset: 0x94
	// Line 898, Address: 0x185858, Func Offset: 0x98
	// Func End, Address: 0x185870, Func Offset: 0xb0
}

// 
// Start address: 0x185870
int EnemyAnimeIsEndSoon(sfObj* obj, float second)
{
	sgAnime* panime;
	int r;
	int s;
	float as;
	// Line 906, Address: 0x185870, Func Offset: 0
	// Line 910, Address: 0x18588c, Func Offset: 0x1c
	// Line 911, Address: 0x1858a8, Func Offset: 0x38
	// Line 912, Address: 0x1858b4, Func Offset: 0x44
	// Line 913, Address: 0x1858d0, Func Offset: 0x60
	// Line 914, Address: 0x1858d8, Func Offset: 0x68
	// Line 916, Address: 0x1858e0, Func Offset: 0x70
	// Line 914, Address: 0x1858e4, Func Offset: 0x74
	// Line 916, Address: 0x1858e8, Func Offset: 0x78
	// Line 914, Address: 0x1858ec, Func Offset: 0x7c
	// Line 916, Address: 0x1858fc, Func Offset: 0x8c
	// Line 917, Address: 0x185904, Func Offset: 0x94
	// Line 920, Address: 0x185918, Func Offset: 0xa8
	// Line 921, Address: 0x185920, Func Offset: 0xb0
	// Line 922, Address: 0x185944, Func Offset: 0xd4
	// Line 925, Address: 0x185948, Func Offset: 0xd8
	// Line 926, Address: 0x185950, Func Offset: 0xe0
	// Func End, Address: 0x18596c, Func Offset: 0xfc
}

// 
// Start address: 0x185970
int EnemyAnimeIsLoop(sfObj* obj)
{
	// Line 933, Address: 0x185970, Func Offset: 0
	// Line 934, Address: 0x185978, Func Offset: 0x8
	// Line 935, Address: 0x185988, Func Offset: 0x18
	// Func End, Address: 0x185994, Func Offset: 0x24
}

// 
// Start address: 0x1859a0
int EnemyAnimeIsStop(sfObj* obj)
{
	// Line 943, Address: 0x1859a0, Func Offset: 0
	// Func End, Address: 0x1859a8, Func Offset: 0x8
}

// 
// Start address: 0x1859b0
int EnemyAnimeIsSynthesizing(sfObj* obj)
{
	EnemyAnimeWork* paw;
	// Line 951, Address: 0x1859b0, Func Offset: 0
	// Line 953, Address: 0x1859b8, Func Offset: 0x8
	// Line 954, Address: 0x1859c0, Func Offset: 0x10
	// Line 955, Address: 0x1859e0, Func Offset: 0x30
	// Line 956, Address: 0x1859e8, Func Offset: 0x38
	// Func End, Address: 0x1859f4, Func Offset: 0x44
}

// 
// Start address: 0x185a00
float EnemyAnimeMixerRatio(sfObj* obj)
{
	EnemyAnimeWork* paw;
	// Line 963, Address: 0x185a00, Func Offset: 0
	// Line 965, Address: 0x185a08, Func Offset: 0x8
	// Line 966, Address: 0x185a10, Func Offset: 0x10
	// Line 967, Address: 0x185a38, Func Offset: 0x38
	// Line 968, Address: 0x185a40, Func Offset: 0x40
	// Func End, Address: 0x185a4c, Func Offset: 0x4c
}

// 
// Start address: 0x185a50
int EnemyAnimeNowFrame(sfObj* obj)
{
	sgAnime* panime;
	// Line 975, Address: 0x185a50, Func Offset: 0
	// Line 977, Address: 0x185a5c, Func Offset: 0xc
	// Line 978, Address: 0x185a78, Func Offset: 0x28
	// Line 979, Address: 0x185a80, Func Offset: 0x30
	// Line 980, Address: 0x185a88, Func Offset: 0x38
	// Func End, Address: 0x185a98, Func Offset: 0x48
}

// 
// Start address: 0x185aa0
float EnemyAnimeNowFrameF(sfObj* obj)
{
	sgAnime* panime;
	// Line 987, Address: 0x185aa0, Func Offset: 0
	// Line 989, Address: 0x185aac, Func Offset: 0xc
	// Line 990, Address: 0x185ad0, Func Offset: 0x30
	// Line 991, Address: 0x185ad8, Func Offset: 0x38
	// Line 992, Address: 0x185ae0, Func Offset: 0x40
	// Func End, Address: 0x185af0, Func Offset: 0x50
}

// 
// Start address: 0x185af0
int EnemyAnimeEndFrame(sfObj* obj)
{
	sgAnime* panime;
	// Line 999, Address: 0x185af0, Func Offset: 0
	// Line 1001, Address: 0x185afc, Func Offset: 0xc
	// Line 1002, Address: 0x185b18, Func Offset: 0x28
	// Line 1003, Address: 0x185b20, Func Offset: 0x30
	// Line 1004, Address: 0x185b28, Func Offset: 0x38
	// Func End, Address: 0x185b38, Func Offset: 0x48
}

// 
// Start address: 0x185b40
float EnemyAnimeFrameRatio(sfObj* obj)
{
	sgAnime* panime;
	float frame;
	float eframe;
	// Line 1011, Address: 0x185b40, Func Offset: 0
	// Line 1014, Address: 0x185b50, Func Offset: 0x10
	// Line 1015, Address: 0x185b70, Func Offset: 0x30
	// Line 1016, Address: 0x185b7c, Func Offset: 0x3c
	// Line 1017, Address: 0x185b88, Func Offset: 0x48
	// Line 1019, Address: 0x185b94, Func Offset: 0x54
	// Line 1017, Address: 0x185b98, Func Offset: 0x58
	// Line 1019, Address: 0x185b9c, Func Offset: 0x5c
	// Line 1020, Address: 0x185bb8, Func Offset: 0x78
	// Line 1021, Address: 0x185bc4, Func Offset: 0x84
	// Line 1022, Address: 0x185bc8, Func Offset: 0x88
	// Line 1024, Address: 0x185bd0, Func Offset: 0x90
	// Func End, Address: 0x185be4, Func Offset: 0xa4
}

// 
// Start address: 0x185bf0
void EnemyAnimeSetFrame(sfObj* obj, int frame)
{
	sgAnime* panime;
	int eframe;
	// Line 1031, Address: 0x185bf0, Func Offset: 0
	// Line 1034, Address: 0x185c08, Func Offset: 0x18
	// Line 1035, Address: 0x185c1c, Func Offset: 0x2c
	// Line 1036, Address: 0x185c28, Func Offset: 0x38
	// Line 1037, Address: 0x185c30, Func Offset: 0x40
	// Line 1038, Address: 0x185c38, Func Offset: 0x48
	// Line 1039, Address: 0x185c3c, Func Offset: 0x4c
	// Line 1040, Address: 0x185c58, Func Offset: 0x68
	// Line 1041, Address: 0x185c68, Func Offset: 0x78
	// Line 1042, Address: 0x185c6c, Func Offset: 0x7c
	// Line 1043, Address: 0x185c88, Func Offset: 0x98
	// Line 1044, Address: 0x185c94, Func Offset: 0xa4
	// Line 1045, Address: 0x185c9c, Func Offset: 0xac
	// Line 1046, Address: 0x185ca4, Func Offset: 0xb4
	// Func End, Address: 0x185cc0, Func Offset: 0xd0
}

// 
// Start address: 0x185cc0
void EnemyAnimeSkip(sfObj* obj, float second)
{
	sgAnime* panime;
	float frame;
	float eframe;
	// Line 1085, Address: 0x185cc0, Func Offset: 0
	// Line 1088, Address: 0x185ce0, Func Offset: 0x20
	// Line 1089, Address: 0x185cf4, Func Offset: 0x34
	// Line 1090, Address: 0x185d00, Func Offset: 0x40
	// Line 1091, Address: 0x185d0c, Func Offset: 0x4c
	// Line 1092, Address: 0x185d18, Func Offset: 0x58
	// Line 1093, Address: 0x185d2c, Func Offset: 0x6c
	// Line 1092, Address: 0x185d30, Func Offset: 0x70
	// Line 1093, Address: 0x185d3c, Func Offset: 0x7c
	// Line 1094, Address: 0x185d4c, Func Offset: 0x8c
	// Line 1095, Address: 0x185d58, Func Offset: 0x98
	// Line 1096, Address: 0x185d5c, Func Offset: 0x9c
	// Line 1097, Address: 0x185d78, Func Offset: 0xb8
	// Line 1098, Address: 0x185d80, Func Offset: 0xc0
	// Line 1099, Address: 0x185d84, Func Offset: 0xc4
	// Line 1100, Address: 0x185da0, Func Offset: 0xe0
	// Line 1101, Address: 0x185da8, Func Offset: 0xe8
	// Line 1102, Address: 0x185dbc, Func Offset: 0xfc
	// Line 1103, Address: 0x185dc0, Func Offset: 0x100
	// Line 1104, Address: 0x185dd0, Func Offset: 0x110
	// Line 1105, Address: 0x185dd8, Func Offset: 0x118
	// Line 1106, Address: 0x185de0, Func Offset: 0x120
	// Func End, Address: 0x185e00, Func Offset: 0x140
}

// 
// Start address: 0x185e00
int EnemyEDAnimeIsEnd(void* obj)
{
	// Line 1128, Address: 0x185e00, Func Offset: 0
	// Func End, Address: 0x185e08, Func Offset: 0x8
}

// 
// Start address: 0x185e10
int EnemyEDAnimeIsOver(void* obj)
{
	// Line 1138, Address: 0x185e10, Func Offset: 0
	// Func End, Address: 0x185e18, Func Offset: 0x8
}

// 
// Start address: 0x185e20
int EnemyEDAnimeIsEndSoon(void* obj)
{
	// Line 1147, Address: 0x185e20, Func Offset: 0
	// Func End, Address: 0x185e34, Func Offset: 0x14
}

// 
// Start address: 0x185e40
int EnemyEDAnimeIsEndSoon1(void* obj)
{
	// Line 1156, Address: 0x185e40, Func Offset: 0
	// Func End, Address: 0x185e54, Func Offset: 0x14
}

// 
// Start address: 0x185e60
int EnemyAnimeCheckBonesPre(void* old_anime, void* new_anime)
{
	sgAnime* po;
	sgAnime* pn;
	sgBone** bone_table;
	int m;
	int nm;
	int i;
	// Line 1175, Address: 0x185e60, Func Offset: 0
	// Line 1179, Address: 0x185e70, Func Offset: 0x10
	// Line 1175, Address: 0x185e74, Func Offset: 0x14
	// Line 1180, Address: 0x185e80, Func Offset: 0x20
	// Line 1181, Address: 0x185e84, Func Offset: 0x24
	// Line 1182, Address: 0x185e90, Func Offset: 0x30
	// Line 1183, Address: 0x185e98, Func Offset: 0x38
	// Line 1184, Address: 0x185ea4, Func Offset: 0x44
	// Line 1186, Address: 0x185ea8, Func Offset: 0x48
	// Line 1187, Address: 0x185eb8, Func Offset: 0x58
	// Line 1190, Address: 0x185ec4, Func Offset: 0x64
	// Line 1187, Address: 0x185ec8, Func Offset: 0x68
	// Line 1190, Address: 0x185ecc, Func Offset: 0x6c
	// Line 1189, Address: 0x185ed0, Func Offset: 0x70
	// Line 1191, Address: 0x185ed8, Func Offset: 0x78
	// Line 1192, Address: 0x185ee8, Func Offset: 0x88
	// Line 1193, Address: 0x185ef8, Func Offset: 0x98
	// Line 1194, Address: 0x185f08, Func Offset: 0xa8
	// Line 1195, Address: 0x185f18, Func Offset: 0xb8
	// Line 1196, Address: 0x185f2c, Func Offset: 0xcc
	// Line 1195, Address: 0x185f30, Func Offset: 0xd0
	// Line 1196, Address: 0x185f34, Func Offset: 0xd4
	// Line 1197, Address: 0x185f40, Func Offset: 0xe0
	// Line 1198, Address: 0x185f48, Func Offset: 0xe8
	// Func End, Address: 0x185f6c, Func Offset: 0x10c
}

// 
// Start address: 0x185f70
sgBone* EnemyAnimeCheckBones(sgBone* bone)
{
	int i;
	int m;
	sgBone** pbt;
	// Line 1211, Address: 0x185f70, Func Offset: 0
	// Line 1212, Address: 0x185f80, Func Offset: 0x10
	// Line 1213, Address: 0x185f88, Func Offset: 0x18
	// Line 1214, Address: 0x185f90, Func Offset: 0x20
	// Line 1215, Address: 0x185fa0, Func Offset: 0x30
	// Line 1216, Address: 0x185fac, Func Offset: 0x3c
	// Line 1218, Address: 0x185fb8, Func Offset: 0x48
	// Line 1219, Address: 0x185fc8, Func Offset: 0x58
	// Line 1220, Address: 0x185fd0, Func Offset: 0x60
	// Func End, Address: 0x185fd8, Func Offset: 0x68
}

// 
// Start address: 0x185fe0
void EnemyAnimeCheckBonesPost()
{
	// Line 1225, Address: 0x185fe0, Func Offset: 0
	// Line 1226, Address: 0x185ff0, Func Offset: 0x10
	// Line 1227, Address: 0x185ff8, Func Offset: 0x18
	// Line 1228, Address: 0x186000, Func Offset: 0x20
	// Line 1230, Address: 0x186008, Func Offset: 0x28
	// Line 1231, Address: 0x186010, Func Offset: 0x30
	// Func End, Address: 0x18601c, Func Offset: 0x3c
}

