typedef struct sfObj;
typedef struct EnemyEffectAfterimageDataBuff;
typedef struct EnemyEffectActiveAfterimageWork;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct EnemyEffectAAiAnimeData;
typedef struct EnemyEffectAAiPosData;
typedef struct sgAnime;
typedef struct EnemyEffectAfterimageData;
typedef struct sgBone;
typedef struct EnemySubObjWorkList;
typedef struct sfCharacter;
typedef union _anon1;
typedef enum EnemyEffectAAiAnimeType : unsigned char;
typedef struct sgSVModel;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_0)(_anon2*, int, int, float*);
typedef void(*type_1)(sfObj*);
typedef void(*type_4)(sgAnime*, int);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef sgIKSolveResult(*type_23)();

typedef void* type_2[4];
typedef float type_3[4];
typedef float type_5[4];
typedef unsigned char type_6[4];
typedef _anon1 type_7[256];
typedef float type_8[4];
typedef float type_9[4][4];
typedef float type_12[3];
typedef float type_13[4];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef float type_22[4][2];

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

struct EnemyEffectAfterimageDataBuff
{
	float pos[4];
	float rot[4];
	void* model;
	void* texture;
	void* animework;
	float transparency;
	float speed;
};

struct EnemyEffectActiveAfterimageWork
{
	EnemySubObjWorkList pos_list;
	EnemySubObjWorkList anime_list;
	sfObj* original;
	float delay_time;
	float transparency_base;
	float transparency;
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
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct EnemyEffectAAiAnimeData
{
	EnemyEffectAAiAnimeType type;
	int param_i;
	float param_f;
	float time;
};

struct EnemyEffectAAiPosData
{
	float pos[3];
	float rot[4];
	float transparency;
	float time;
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

struct EnemyEffectAfterimageData
{
	float transparency;
	float speed;
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

struct EnemySubObjWorkList
{
	char* work_top;
	sfObj* obj_top;
	unsigned int size;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon0 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

enum EnemyEffectAAiAnimeType : unsigned char
{
	EN_EAAI_AT_ANIME_SET,
	EN_EAAI_AT_ANIME_SET_FORCE,
	EN_EAAI_AT_ANIME_SET_INTER,
	EN_EAAI_AT_ANIME_SET_SPEED,
	EN_EAAI_AT_ANIME_SET_FRAME,
	EN_EAAI_AT_ANIME_SKIP,
	EN_EAAI_AT_ANIME_STOP,
	EN_EAAI_AT_ANIME_RESTART,
	EN_EAAI_AT_ANIME_VOID
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

EnemyEffectAfterimageDataBuff* tmp_buff;
void(*EnemyEffectActiveAfterimageDrawHandle)(sfObj*);
void(*EnemyEffectActiveAfterimageDestruct)(sfObj*);
void(*EnemyEffectActiveAfterimageHandle)(sfObj*);

sfObj* EnemyEffectSetAfterimage(sfObj* obj, float* pos, float* rot, float transparency, float disappearance_time);
void EnemyEffectAfterimageConstruct(sfObj* obj);
void EnemyEffectAfterimageDestruct(sfObj* obj);
void EnemyEffectAfterimageHandle(sfObj* obj);
void EnemyEffectAfterimageDraw(sfObj* obj);
void EnemyEffectActiveAfterimageHandle(sfObj* obj);
void EnemyEffectActiveAfterimageDrawHandle(sfObj* obj);
void EnemyEffectActiveAfterimageDestruct(sfObj* obj);
sfObj* EnemyEffectSetActiveAfterimage(sfObj* o_obj, float delay_time, float transparency);
void EnemyEffectActiveAfterimageUpdate(sfObj* obj, float transparency);
void EnemyEffectActiveAfterimageAnimeSet(sfObj* obj, int anime);
void EnemyEffectActiveAfterimageAnimeSetForce(sfObj* obj, int anime);
void EnemyEffectActiveAfterimageAnimeSetInter(sfObj* obj, int anime, float time);
void EnemyEffectActiveAfterimageAnimeSetSpeed(sfObj* obj, float speed);
void EnemyEffectActiveAfterimageAnimeSetFrame(sfObj* obj, int frame);
void EnemyEffectActiveAfterimageAnimeSkip(sfObj* obj, float time);
void EnemyEffectActiveAfterimageAnimeStop(sfObj* obj);
void EnemyEffectActiveAfterimageAnimeRestart(sfObj* obj);
void EnemyEffectActiveAfterimageAnimeVoid(sfObj* obj);

// 
// Start address: 0x222fe0
sfObj* EnemyEffectSetAfterimage(sfObj* obj, float* pos, float* rot, float transparency, float disappearance_time)
{
	sfObj* obj2;
	EnemyEffectAfterimageDataBuff* pdb;
	_anon0* pmodelwork;
	// Line 48, Address: 0x222fe0, Func Offset: 0
	// Line 52, Address: 0x223008, Func Offset: 0x28
	// Line 48, Address: 0x22300c, Func Offset: 0x2c
	// Line 52, Address: 0x223018, Func Offset: 0x38
	// Line 53, Address: 0x223028, Func Offset: 0x48
	// Line 54, Address: 0x223050, Func Offset: 0x70
	// Line 55, Address: 0x223058, Func Offset: 0x78
	// Line 56, Address: 0x223064, Func Offset: 0x84
	// Line 57, Address: 0x22306c, Func Offset: 0x8c
	// Line 59, Address: 0x223070, Func Offset: 0x90
	// Line 57, Address: 0x223074, Func Offset: 0x94
	// Line 58, Address: 0x223078, Func Offset: 0x98
	// Line 59, Address: 0x22307c, Func Offset: 0x9c
	// Line 61, Address: 0x223084, Func Offset: 0xa4
	// Line 59, Address: 0x223088, Func Offset: 0xa8
	// Line 62, Address: 0x22308c, Func Offset: 0xac
	// Line 61, Address: 0x223090, Func Offset: 0xb0
	// Line 60, Address: 0x223094, Func Offset: 0xb4
	// Line 61, Address: 0x223098, Func Offset: 0xb8
	// Line 62, Address: 0x2230a0, Func Offset: 0xc0
	// Line 64, Address: 0x2230bc, Func Offset: 0xdc
	// Line 65, Address: 0x2230c0, Func Offset: 0xe0
	// Func End, Address: 0x2230e8, Func Offset: 0x108
}

// 
// Start address: 0x2230f0
void EnemyEffectAfterimageConstruct(sfObj* obj)
{
	sfCharacter* chara;
	EnemyEffectAfterimageData* ped;
	sgAnime* panime;
	// Line 71, Address: 0x2230f0, Func Offset: 0
	// Line 77, Address: 0x223110, Func Offset: 0x20
	// Line 78, Address: 0x223118, Func Offset: 0x28
	// Line 79, Address: 0x223120, Func Offset: 0x30
	// Line 81, Address: 0x223128, Func Offset: 0x38
	// Line 82, Address: 0x223134, Func Offset: 0x44
	// Line 83, Address: 0x223140, Func Offset: 0x50
	// Line 82, Address: 0x223144, Func Offset: 0x54
	// Line 83, Address: 0x223148, Func Offset: 0x58
	// Line 84, Address: 0x223154, Func Offset: 0x64
	// Line 86, Address: 0x223158, Func Offset: 0x68
	// Line 84, Address: 0x223160, Func Offset: 0x70
	// Line 85, Address: 0x223164, Func Offset: 0x74
	// Line 86, Address: 0x223168, Func Offset: 0x78
	// Line 87, Address: 0x223170, Func Offset: 0x80
	// Line 88, Address: 0x22317c, Func Offset: 0x8c
	// Line 89, Address: 0x223184, Func Offset: 0x94
	// Line 88, Address: 0x223188, Func Offset: 0x98
	// Line 89, Address: 0x22318c, Func Offset: 0x9c
	// Line 90, Address: 0x223194, Func Offset: 0xa4
	// Line 91, Address: 0x22319c, Func Offset: 0xac
	// Line 92, Address: 0x2231a8, Func Offset: 0xb8
	// Line 93, Address: 0x2231ac, Func Offset: 0xbc
	// Line 95, Address: 0x2231b8, Func Offset: 0xc8
	// Line 96, Address: 0x2231cc, Func Offset: 0xdc
	// Line 97, Address: 0x2231e0, Func Offset: 0xf0
	// Func End, Address: 0x2231fc, Func Offset: 0x10c
}

// 
// Start address: 0x223200
void EnemyEffectAfterimageDestruct(sfObj* obj)
{
	// Line 103, Address: 0x223200, Func Offset: 0
	// Line 104, Address: 0x223208, Func Offset: 0x8
	// Line 105, Address: 0x223218, Func Offset: 0x18
	// Func End, Address: 0x223224, Func Offset: 0x24
}

// 
// Start address: 0x223230
void EnemyEffectAfterimageHandle(sfObj* obj)
{
	EnemyEffectAfterimageData* ped;
	float dt;
	// Line 111, Address: 0x223230, Func Offset: 0
	// Line 114, Address: 0x223240, Func Offset: 0x10
	// Line 115, Address: 0x223244, Func Offset: 0x14
	// Line 116, Address: 0x22324c, Func Offset: 0x1c
	// Line 117, Address: 0x223250, Func Offset: 0x20
	// Line 116, Address: 0x223254, Func Offset: 0x24
	// Line 117, Address: 0x223258, Func Offset: 0x28
	// Line 116, Address: 0x223260, Func Offset: 0x30
	// Line 117, Address: 0x223268, Func Offset: 0x38
	// Line 118, Address: 0x223274, Func Offset: 0x44
	// Line 119, Address: 0x22327c, Func Offset: 0x4c
	// Line 120, Address: 0x223280, Func Offset: 0x50
	// Func End, Address: 0x223294, Func Offset: 0x64
}

// 
// Start address: 0x2232a0
void EnemyEffectAfterimageDraw(sfObj* obj)
{
	// Line 126, Address: 0x2232a0, Func Offset: 0
	// Line 129, Address: 0x2232ac, Func Offset: 0xc
	// Line 131, Address: 0x2232c4, Func Offset: 0x24
	// Func End, Address: 0x2232d4, Func Offset: 0x34
}

// 
// Start address: 0x2232e0
void EnemyEffectActiveAfterimageHandle(sfObj* obj)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemySubObjWorkList* psl;
	EnemyEffectAAiPosData* ppd;
	EnemyEffectAAiPosData* ppdn;
	EnemyEffectAAiAnimeData* pad;
	EnemyEffectAAiAnimeData* padn;
	float pos[4];
	float rot[4];
	float dt;
	// Line 178, Address: 0x2232e0, Func Offset: 0
	// Line 186, Address: 0x223314, Func Offset: 0x34
	// Line 187, Address: 0x22331c, Func Offset: 0x3c
	// Line 188, Address: 0x223328, Func Offset: 0x48
	// Line 189, Address: 0x223330, Func Offset: 0x50
	// Line 191, Address: 0x22333c, Func Offset: 0x5c
	// Line 192, Address: 0x223348, Func Offset: 0x68
	// Line 194, Address: 0x223368, Func Offset: 0x88
	// Line 193, Address: 0x22336c, Func Offset: 0x8c
	// Line 194, Address: 0x223370, Func Offset: 0x90
	// Line 193, Address: 0x223374, Func Offset: 0x94
	// Line 194, Address: 0x223378, Func Offset: 0x98
	// Line 195, Address: 0x223380, Func Offset: 0xa0
	// Line 196, Address: 0x223390, Func Offset: 0xb0
	// Line 198, Address: 0x223398, Func Offset: 0xb8
	// Line 197, Address: 0x22339c, Func Offset: 0xbc
	// Line 199, Address: 0x2233a0, Func Offset: 0xc0
	// Line 197, Address: 0x2233a4, Func Offset: 0xc4
	// Line 198, Address: 0x2233bc, Func Offset: 0xdc
	// Line 199, Address: 0x2233d8, Func Offset: 0xf8
	// Line 200, Address: 0x2233e0, Func Offset: 0x100
	// Line 201, Address: 0x2233ec, Func Offset: 0x10c
	// Line 202, Address: 0x2233f0, Func Offset: 0x110
	// Line 205, Address: 0x223400, Func Offset: 0x120
	// Line 206, Address: 0x223408, Func Offset: 0x128
	// Line 207, Address: 0x22340c, Func Offset: 0x12c
	// Line 208, Address: 0x223418, Func Offset: 0x138
	// Line 210, Address: 0x223420, Func Offset: 0x140
	// Line 209, Address: 0x223424, Func Offset: 0x144
	// Line 210, Address: 0x223428, Func Offset: 0x148
	// Line 209, Address: 0x22342c, Func Offset: 0x14c
	// Line 210, Address: 0x223430, Func Offset: 0x150
	// Line 211, Address: 0x223438, Func Offset: 0x158
	// Line 212, Address: 0x223450, Func Offset: 0x170
	// Line 214, Address: 0x223478, Func Offset: 0x198
	// Line 215, Address: 0x223484, Func Offset: 0x1a4
	// Line 216, Address: 0x22348c, Func Offset: 0x1ac
	// Line 217, Address: 0x223490, Func Offset: 0x1b0
	// Line 218, Address: 0x22349c, Func Offset: 0x1bc
	// Line 219, Address: 0x2234a4, Func Offset: 0x1c4
	// Line 220, Address: 0x2234a8, Func Offset: 0x1c8
	// Line 221, Address: 0x2234b8, Func Offset: 0x1d8
	// Line 223, Address: 0x2234c0, Func Offset: 0x1e0
	// Line 224, Address: 0x2234cc, Func Offset: 0x1ec
	// Line 225, Address: 0x2234d4, Func Offset: 0x1f4
	// Line 226, Address: 0x2234d8, Func Offset: 0x1f8
	// Line 227, Address: 0x2234e4, Func Offset: 0x204
	// Line 228, Address: 0x2234ec, Func Offset: 0x20c
	// Line 229, Address: 0x2234f0, Func Offset: 0x210
	// Line 230, Address: 0x2234fc, Func Offset: 0x21c
	// Line 231, Address: 0x223504, Func Offset: 0x224
	// Line 232, Address: 0x223508, Func Offset: 0x228
	// Line 233, Address: 0x223510, Func Offset: 0x230
	// Line 235, Address: 0x223518, Func Offset: 0x238
	// Line 236, Address: 0x223520, Func Offset: 0x240
	// Line 238, Address: 0x223528, Func Offset: 0x248
	// Line 240, Address: 0x223534, Func Offset: 0x254
	// Line 241, Address: 0x223538, Func Offset: 0x258
	// Line 242, Address: 0x223544, Func Offset: 0x264
	// Line 244, Address: 0x223548, Func Offset: 0x268
	// Line 245, Address: 0x223550, Func Offset: 0x270
	// Line 246, Address: 0x223558, Func Offset: 0x278
	// Func End, Address: 0x223590, Func Offset: 0x2b0
}

// 
// Start address: 0x223590
void EnemyEffectActiveAfterimageDrawHandle(sfObj* obj)
{
	EnemyEffectActiveAfterimageWork* ew;
	float d;
	// Line 250, Address: 0x223590, Func Offset: 0
	// Line 253, Address: 0x2235a0, Func Offset: 0x10
	// Line 254, Address: 0x2235a8, Func Offset: 0x18
	// Line 255, Address: 0x2235b0, Func Offset: 0x20
	// Line 256, Address: 0x2235d4, Func Offset: 0x44
	// Line 257, Address: 0x2235e0, Func Offset: 0x50
	// Line 258, Address: 0x2235f4, Func Offset: 0x64
	// Line 259, Address: 0x2235f8, Func Offset: 0x68
	// Func End, Address: 0x22360c, Func Offset: 0x7c
}

// 
// Start address: 0x223610
void EnemyEffectActiveAfterimageDestruct(sfObj* obj)
{
	EnemyEffectActiveAfterimageWork* ew;
	// Line 263, Address: 0x223610, Func Offset: 0
	// Line 265, Address: 0x223620, Func Offset: 0x10
	// Line 266, Address: 0x223628, Func Offset: 0x18
	// Line 267, Address: 0x223634, Func Offset: 0x24
	// Line 268, Address: 0x22363c, Func Offset: 0x2c
	// Line 269, Address: 0x223644, Func Offset: 0x34
	// Line 270, Address: 0x22364c, Func Offset: 0x3c
	// Func End, Address: 0x223664, Func Offset: 0x54
}

// 
// Start address: 0x223670
sfObj* EnemyEffectSetActiveAfterimage(sfObj* o_obj, float delay_time, float transparency)
{
	sfObj* obj;
	EnemyEffectActiveAfterimageWork* ew;
	int anime;
	// Line 280, Address: 0x223670, Func Offset: 0
	// Line 284, Address: 0x223694, Func Offset: 0x24
	// Line 289, Address: 0x2236d4, Func Offset: 0x64
	// Line 290, Address: 0x2236e8, Func Offset: 0x78
	// Line 291, Address: 0x2236fc, Func Offset: 0x8c
	// Line 293, Address: 0x223724, Func Offset: 0xb4
	// Line 294, Address: 0x223738, Func Offset: 0xc8
	// Line 296, Address: 0x223748, Func Offset: 0xd8
	// Line 297, Address: 0x223750, Func Offset: 0xe0
	// Line 298, Address: 0x223760, Func Offset: 0xf0
	// Line 299, Address: 0x223774, Func Offset: 0x104
	// Line 300, Address: 0x22377c, Func Offset: 0x10c
	// Line 301, Address: 0x223784, Func Offset: 0x114
	// Line 302, Address: 0x223788, Func Offset: 0x118
	// Line 303, Address: 0x223794, Func Offset: 0x124
	// Line 306, Address: 0x223798, Func Offset: 0x128
	// Line 304, Address: 0x22379c, Func Offset: 0x12c
	// Line 307, Address: 0x2237a0, Func Offset: 0x130
	// Line 305, Address: 0x2237a4, Func Offset: 0x134
	// Line 307, Address: 0x2237a8, Func Offset: 0x138
	// Line 309, Address: 0x2237b4, Func Offset: 0x144
	// Line 311, Address: 0x2237c0, Func Offset: 0x150
	// Line 312, Address: 0x2237d4, Func Offset: 0x164
	// Line 314, Address: 0x2237e8, Func Offset: 0x178
	// Line 315, Address: 0x2237f0, Func Offset: 0x180
	// Func End, Address: 0x223810, Func Offset: 0x1a0
}

// 
// Start address: 0x223810
void EnemyEffectActiveAfterimageUpdate(sfObj* obj, float transparency)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiPosData* pd;
	float pos[4];
	float rot[4];
	// Line 347, Address: 0x223810, Func Offset: 0
	// Line 352, Address: 0x223824, Func Offset: 0x14
	// Line 353, Address: 0x22382c, Func Offset: 0x1c
	// Line 354, Address: 0x223838, Func Offset: 0x28
	// Line 355, Address: 0x223844, Func Offset: 0x34
	// Line 356, Address: 0x22384c, Func Offset: 0x3c
	// Line 357, Address: 0x223858, Func Offset: 0x48
	// Line 358, Address: 0x223864, Func Offset: 0x54
	// Line 359, Address: 0x22387c, Func Offset: 0x6c
	// Line 360, Address: 0x22389c, Func Offset: 0x8c
	// Line 361, Address: 0x2238a4, Func Offset: 0x94
	// Line 362, Address: 0x2238a8, Func Offset: 0x98
	// Func End, Address: 0x2238c0, Func Offset: 0xb0
}

// 
// Start address: 0x2238c0
void EnemyEffectActiveAfterimageAnimeSet(sfObj* obj, int anime)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 369, Address: 0x2238c0, Func Offset: 0
	// Line 372, Address: 0x2238d0, Func Offset: 0x10
	// Line 373, Address: 0x2238d8, Func Offset: 0x18
	// Line 374, Address: 0x2238e4, Func Offset: 0x24
	// Line 375, Address: 0x2238ec, Func Offset: 0x2c
	// Line 376, Address: 0x2238f4, Func Offset: 0x34
	// Line 377, Address: 0x2238f8, Func Offset: 0x38
	// Line 378, Address: 0x223900, Func Offset: 0x40
	// Line 379, Address: 0x223904, Func Offset: 0x44
	// Func End, Address: 0x22391c, Func Offset: 0x5c
}

// 
// Start address: 0x223920
void EnemyEffectActiveAfterimageAnimeSetForce(sfObj* obj, int anime)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 386, Address: 0x223920, Func Offset: 0
	// Line 389, Address: 0x223930, Func Offset: 0x10
	// Line 390, Address: 0x223938, Func Offset: 0x18
	// Line 391, Address: 0x223944, Func Offset: 0x24
	// Line 392, Address: 0x22394c, Func Offset: 0x2c
	// Line 393, Address: 0x223954, Func Offset: 0x34
	// Line 394, Address: 0x223958, Func Offset: 0x38
	// Line 395, Address: 0x223960, Func Offset: 0x40
	// Line 396, Address: 0x223964, Func Offset: 0x44
	// Func End, Address: 0x22397c, Func Offset: 0x5c
}

// 
// Start address: 0x223980
void EnemyEffectActiveAfterimageAnimeSetInter(sfObj* obj, int anime, float time)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 405, Address: 0x223980, Func Offset: 0
	// Line 408, Address: 0x223998, Func Offset: 0x18
	// Line 409, Address: 0x2239a0, Func Offset: 0x20
	// Line 410, Address: 0x2239ac, Func Offset: 0x2c
	// Line 411, Address: 0x2239b4, Func Offset: 0x34
	// Line 412, Address: 0x2239bc, Func Offset: 0x3c
	// Line 413, Address: 0x2239c0, Func Offset: 0x40
	// Line 414, Address: 0x2239c8, Func Offset: 0x48
	// Line 415, Address: 0x2239cc, Func Offset: 0x4c
	// Line 416, Address: 0x2239d0, Func Offset: 0x50
	// Func End, Address: 0x2239e8, Func Offset: 0x68
}

// 
// Start address: 0x2239f0
void EnemyEffectActiveAfterimageAnimeSetSpeed(sfObj* obj, float speed)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 423, Address: 0x2239f0, Func Offset: 0
	// Line 426, Address: 0x223a00, Func Offset: 0x10
	// Line 427, Address: 0x223a08, Func Offset: 0x18
	// Line 428, Address: 0x223a14, Func Offset: 0x24
	// Line 429, Address: 0x223a1c, Func Offset: 0x2c
	// Line 430, Address: 0x223a24, Func Offset: 0x34
	// Line 431, Address: 0x223a28, Func Offset: 0x38
	// Line 432, Address: 0x223a30, Func Offset: 0x40
	// Line 433, Address: 0x223a34, Func Offset: 0x44
	// Func End, Address: 0x223a4c, Func Offset: 0x5c
}

// 
// Start address: 0x223a50
void EnemyEffectActiveAfterimageAnimeSetFrame(sfObj* obj, int frame)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 440, Address: 0x223a50, Func Offset: 0
	// Line 443, Address: 0x223a60, Func Offset: 0x10
	// Line 444, Address: 0x223a68, Func Offset: 0x18
	// Line 445, Address: 0x223a74, Func Offset: 0x24
	// Line 446, Address: 0x223a7c, Func Offset: 0x2c
	// Line 447, Address: 0x223a84, Func Offset: 0x34
	// Line 448, Address: 0x223a88, Func Offset: 0x38
	// Line 449, Address: 0x223a90, Func Offset: 0x40
	// Line 450, Address: 0x223a94, Func Offset: 0x44
	// Func End, Address: 0x223aac, Func Offset: 0x5c
}

// 
// Start address: 0x223ab0
void EnemyEffectActiveAfterimageAnimeSkip(sfObj* obj, float time)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 457, Address: 0x223ab0, Func Offset: 0
	// Line 460, Address: 0x223ac0, Func Offset: 0x10
	// Line 461, Address: 0x223ac8, Func Offset: 0x18
	// Line 462, Address: 0x223ad4, Func Offset: 0x24
	// Line 463, Address: 0x223adc, Func Offset: 0x2c
	// Line 464, Address: 0x223ae4, Func Offset: 0x34
	// Line 465, Address: 0x223ae8, Func Offset: 0x38
	// Line 466, Address: 0x223af0, Func Offset: 0x40
	// Line 467, Address: 0x223af4, Func Offset: 0x44
	// Func End, Address: 0x223b0c, Func Offset: 0x5c
}

// 
// Start address: 0x223b10
void EnemyEffectActiveAfterimageAnimeStop(sfObj* obj)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 473, Address: 0x223b10, Func Offset: 0
	// Line 476, Address: 0x223b18, Func Offset: 0x8
	// Line 477, Address: 0x223b20, Func Offset: 0x10
	// Line 478, Address: 0x223b2c, Func Offset: 0x1c
	// Line 479, Address: 0x223b34, Func Offset: 0x24
	// Line 480, Address: 0x223b3c, Func Offset: 0x2c
	// Line 481, Address: 0x223b40, Func Offset: 0x30
	// Line 482, Address: 0x223b48, Func Offset: 0x38
	// Func End, Address: 0x223b58, Func Offset: 0x48
}

// 
// Start address: 0x223b60
void EnemyEffectActiveAfterimageAnimeRestart(sfObj* obj)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 488, Address: 0x223b60, Func Offset: 0
	// Line 491, Address: 0x223b68, Func Offset: 0x8
	// Line 492, Address: 0x223b70, Func Offset: 0x10
	// Line 493, Address: 0x223b7c, Func Offset: 0x1c
	// Line 494, Address: 0x223b84, Func Offset: 0x24
	// Line 495, Address: 0x223b8c, Func Offset: 0x2c
	// Line 496, Address: 0x223b90, Func Offset: 0x30
	// Line 497, Address: 0x223b98, Func Offset: 0x38
	// Func End, Address: 0x223ba8, Func Offset: 0x48
}

// 
// Start address: 0x223bb0
void EnemyEffectActiveAfterimageAnimeVoid(sfObj* obj)
{
	EnemyEffectActiveAfterimageWork* ew;
	EnemyEffectAAiAnimeData* pd;
	// Line 503, Address: 0x223bb0, Func Offset: 0
	// Line 506, Address: 0x223bb8, Func Offset: 0x8
	// Line 507, Address: 0x223bc0, Func Offset: 0x10
	// Line 508, Address: 0x223bcc, Func Offset: 0x1c
	// Line 509, Address: 0x223bd4, Func Offset: 0x24
	// Line 510, Address: 0x223bdc, Func Offset: 0x2c
	// Line 511, Address: 0x223be0, Func Offset: 0x30
	// Line 512, Address: 0x223be8, Func Offset: 0x38
	// Func End, Address: 0x223bf8, Func Offset: 0x48
}

