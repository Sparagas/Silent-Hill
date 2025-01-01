typedef union _anon0;
typedef struct AnimeProc;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgBone;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct _anon3;
typedef struct sfCharacter;
typedef struct sgSVModel;
typedef struct _anon4;
typedef struct _anon5;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;

typedef void(*type_1)(AnimeProc*);
typedef void(*type_2)(AnimeProc*);
typedef void(*type_3)(sfObj*);
typedef void(*type_9)(sgAnime*, int);
typedef void(*type_11)(_anon4*, int, int, float*);
typedef sgIKSolveResult(*type_15)();
typedef void(*type_16)(AnimeProc*);
typedef void(*type_22)(sfObj*);
typedef void(*type_25)(AnimeProc*);
typedef void(*type_26)(AnimeProc*);
typedef void(*type_29)(sfObj*);
typedef void(*type_30)(AnimeProc*);
typedef void(*type_31)(sgAnime*, int);
typedef void(*type_32)(AnimeProc*);
typedef void(*type_33)(AnimeProc*);
typedef void(*type_34)(AnimeProc*);

typedef unsigned char type_0[4];
typedef char* type_4[9];
typedef int type_5[19];
typedef sfObj* type_6[20];
typedef _anon3 type_7[30];
typedef float type_8[4][4];
typedef float type_10[4];
typedef float type_12[19];
typedef float type_13[4][2];
typedef float type_14[4];
typedef short type_17[2];
typedef unsigned short type_18[2];
typedef float type_19[4];
typedef char type_20[4];
typedef unsigned char type_21[4];
typedef float type_23[1];
typedef int type_24[1];
typedef void* type_27[4];
typedef _anon0 type_28[256];

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

struct AnimeProc
{
	sgAnime* current_anime;
	sgAnime anime;
	_anon2 mixer;
	int stopped;
	int status;
	int type;
	sgAnime* output;
	void(*time_update)(AnimeProc*);
	void(*status_update)(AnimeProc*);
	int using_slot0;
	int using_slot1;
};

struct _anon1
{
	AnimeProc proc;
	sfCharacter* target;
	void* default_anime;
	int current_last;
	int prev_last;
	sfObj* slots[20];
	_anon3 mixer_setting[30];
	int max_step;
};

struct _anon2
{
	sgAnime* out_anime;
	sgAnime* base_anime;
	sgAnime* target_anime;
	float blend_ratio;
	float blend_speed;
	float play_speed_ratio;
	int flag;
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

struct _anon3
{
	int bone_no;
	float ratio;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon5 model_work;
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

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon4*, int, int, float*);
	int equip_flag;
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

int upper_body[19];
float upper_body_ratios[19];
char* type_str[9];
void(*DefaultStatusUpdate)(AnimeProc*);
void(*DefaultTimeUpdate)(AnimeProc*);
void(*IKHandleToChest)(sgAnime*, int);
void(*sfObjFuncDummy)(sfObj*);
void(*SkipTimeUpdate)(AnimeProc*);
void(*LinkTimeUpdate)(AnimeProc*);
void(*IKChangeStatusUpdate)(AnimeProc*);
void(*IKChangeMixerBaseStatusUpdate)(AnimeProc*);
void(*IKChangeMixerStatusUpdate)(AnimeProc*);

void AnimeProcConstruct(AnimeProc* anm_proc, sfCharacter* chara);
void AnimeProcDestruct(AnimeProc* anm_proc);
void DefaultTimeUpdate(AnimeProc* proc);
void SkipTimeUpdate(AnimeProc* proc);
void LinkTimeUpdate(AnimeProc* proc);
void DefaultStatusUpdate(AnimeProc* proc);
void IKHandleToChest(sgAnime* anm, int n);
void IKHandleToRoot(sgAnime* anm);
void IKChangeStatusUpdate(AnimeProc* proc);
int GetProc(_anon1* anm_ctrl);
void KillProc(_anon1* anm_ctrl, int slot);
void sfAnimeControlConstruct(_anon1* anm_ctrl, sfCharacter* chara, void* default_anime_data);
_anon1* sfAnimeControlAllocate(sfCharacter* chara, void* default_anime_data);
void sfAnimeControlDestruct(_anon1* anm_ctrl);
int sfAnimeControlNormalNoEntry(_anon1* anm_ctrl, void* play_data);
void sfAnimeControlSetMaxStep(_anon1* anm_ctrl, int max_step);
int sfAnimeControlNormal(_anon1* anm_ctrl, void* play_data);
int sfAnimeControlLastPose(_anon1* anm_ctrl);
void sfAnimeControlSetDelay(_anon1* anm_ctrl, float delay_sec);
int sfAnimeControlDelay(_anon1* anm_ctrl, void* play_data, float delay_sec);
int sfAnimeControlMix(_anon1* anm_ctrl, void* base, void* target);
int sfAnimeControlLinkMix(_anon1* anm_ctrl, void* base, void* target);
int sfAnimeControlSlotMix(_anon1* anm_ctrl, int base, int target);
int sfAnimeControlPL_SubLowerBody(_anon1* anm_ctrl, void* base, void* lower);
void ProcProceedTime(_anon1* anm_ctrl, int slot, int current_step);
void ProcUpdate(_anon1* anm_ctrl, int slot, int current_step);
void CheckProc(_anon1* anm_ctrl, int slot, int last_slot);
void StopOverProc(_anon1* anm_ctrl, int slot, int current_step);
void sfAnimeControlUpdate(_anon1* anm_ctrl);
sgAnime* sfAnimeControlGetAnime(_anon1* anm_ctrl, int slot);
_anon2* sfAnimeControlGetMixer(_anon1* anm_ctrl, int slot);

// 
// Start address: 0x22c870
void AnimeProcConstruct(AnimeProc* anm_proc, sfCharacter* chara)
{
	// Line 214, Address: 0x22c870, Func Offset: 0
	// Line 215, Address: 0x22c880, Func Offset: 0x10
	// Line 216, Address: 0x22c88c, Func Offset: 0x1c
	// Line 218, Address: 0x22c894, Func Offset: 0x24
	// Line 221, Address: 0x22c898, Func Offset: 0x28
	// Line 218, Address: 0x22c89c, Func Offset: 0x2c
	// Line 219, Address: 0x22c8a0, Func Offset: 0x30
	// Line 222, Address: 0x22c8a8, Func Offset: 0x38
	// Line 221, Address: 0x22c8ac, Func Offset: 0x3c
	// Line 220, Address: 0x22c8b0, Func Offset: 0x40
	// Line 222, Address: 0x22c8b4, Func Offset: 0x44
	// Line 221, Address: 0x22c8b8, Func Offset: 0x48
	// Line 222, Address: 0x22c8bc, Func Offset: 0x4c
	// Line 223, Address: 0x22c8c0, Func Offset: 0x50
	// Func End, Address: 0x22c8d0, Func Offset: 0x60
}

// 
// Start address: 0x22c8d0
void AnimeProcDestruct(AnimeProc* anm_proc)
{
	// Line 227, Address: 0x22c8d0, Func Offset: 0
	// Func End, Address: 0x22c8d8, Func Offset: 0x8
}

// 
// Start address: 0x22c8e0
void DefaultTimeUpdate(AnimeProc* proc)
{
	// Line 252, Address: 0x22c8e0, Func Offset: 0
	// Line 253, Address: 0x22c8f0, Func Offset: 0x10
	// Line 255, Address: 0x22c900, Func Offset: 0x20
	// Line 257, Address: 0x22c908, Func Offset: 0x28
	// Line 259, Address: 0x22c910, Func Offset: 0x30
	// Line 260, Address: 0x22c918, Func Offset: 0x38
	// Func End, Address: 0x22c928, Func Offset: 0x48
}

// 
// Start address: 0x22c930
void SkipTimeUpdate(AnimeProc* proc)
{
	// Line 265, Address: 0x22c930, Func Offset: 0
	// Line 267, Address: 0x22c940, Func Offset: 0x10
	// Line 269, Address: 0x22c948, Func Offset: 0x18
	// Func End, Address: 0x22c950, Func Offset: 0x20
}

// 
// Start address: 0x22c950
void LinkTimeUpdate(AnimeProc* proc)
{
	sgAnime* base;
	sgAnime* target;
	float ratio;
	float base_delta;
	int cur_time;
	// Line 276, Address: 0x22c950, Func Offset: 0
	// Line 283, Address: 0x22c970, Func Offset: 0x20
	// Line 286, Address: 0x22c980, Func Offset: 0x30
	// Line 287, Address: 0x22c984, Func Offset: 0x34
	// Line 288, Address: 0x22c990, Func Offset: 0x40
	// Line 289, Address: 0x22c99c, Func Offset: 0x4c
	// Line 291, Address: 0x22c9a8, Func Offset: 0x58
	// Line 293, Address: 0x22c9cc, Func Offset: 0x7c
	// Line 291, Address: 0x22c9d0, Func Offset: 0x80
	// Line 293, Address: 0x22c9d4, Func Offset: 0x84
	// Line 291, Address: 0x22c9d8, Func Offset: 0x88
	// Line 293, Address: 0x22c9e4, Func Offset: 0x94
	// Line 294, Address: 0x22c9ec, Func Offset: 0x9c
	// Line 296, Address: 0x22ca00, Func Offset: 0xb0
	// Line 297, Address: 0x22ca10, Func Offset: 0xc0
	// Line 304, Address: 0x22ca20, Func Offset: 0xd0
	// Line 306, Address: 0x22ca28, Func Offset: 0xd8
	// Line 309, Address: 0x22ca48, Func Offset: 0xf8
	// Line 310, Address: 0x22ca58, Func Offset: 0x108
	// Line 313, Address: 0x22ca60, Func Offset: 0x110
	// Line 314, Address: 0x22ca6c, Func Offset: 0x11c
	// Func End, Address: 0x22ca94, Func Offset: 0x144
}

// 
// Start address: 0x22caa0
void DefaultStatusUpdate(AnimeProc* proc)
{
	// Line 319, Address: 0x22caa0, Func Offset: 0
	// Line 320, Address: 0x22cab0, Func Offset: 0x10
	// Line 321, Address: 0x22cab8, Func Offset: 0x18
	// Line 323, Address: 0x22cac8, Func Offset: 0x28
	// Line 325, Address: 0x22cad0, Func Offset: 0x30
	// Func End, Address: 0x22cae0, Func Offset: 0x40
}

// 
// Start address: 0x22cae0
void IKHandleToChest(sgAnime* anm, int n)
{
	sgBone* ik_r;
	sgBone* ik_l;
	sgBone* sh_l;
	sgBone* sh_r;
	// Line 329, Address: 0x22cae0, Func Offset: 0
	// Line 337, Address: 0x22cb00, Func Offset: 0x20
	// Line 338, Address: 0x22cb0c, Func Offset: 0x2c
	// Line 339, Address: 0x22cb18, Func Offset: 0x38
	// Line 342, Address: 0x22cb20, Func Offset: 0x40
	// Line 343, Address: 0x22cb2c, Func Offset: 0x4c
	// Line 342, Address: 0x22cb30, Func Offset: 0x50
	// Line 343, Address: 0x22cb34, Func Offset: 0x54
	// Line 345, Address: 0x22cb40, Func Offset: 0x60
	// Line 346, Address: 0x22cb4c, Func Offset: 0x6c
	// Line 348, Address: 0x22cb58, Func Offset: 0x78
	// Func End, Address: 0x22cb74, Func Offset: 0x94
}

// 
// Start address: 0x22cb80
void IKHandleToRoot(sgAnime* anm)
{
	sgBone* ik_r;
	sgBone* ik_l;
	// Line 352, Address: 0x22cb80, Func Offset: 0
	// Line 356, Address: 0x22cb84, Func Offset: 0x4
	// Line 352, Address: 0x22cb88, Func Offset: 0x8
	// Line 356, Address: 0x22cb98, Func Offset: 0x18
	// Line 357, Address: 0x22cba4, Func Offset: 0x24
	// Line 358, Address: 0x22cbb4, Func Offset: 0x34
	// Line 359, Address: 0x22cbc8, Func Offset: 0x48
	// Line 360, Address: 0x22cbdc, Func Offset: 0x5c
	// Func End, Address: 0x22cbf4, Func Offset: 0x74
}

// 
// Start address: 0x22cc00
void IKChangeStatusUpdate(AnimeProc* proc)
{
	// Line 366, Address: 0x22cc00, Func Offset: 0
	// Line 369, Address: 0x22cc04, Func Offset: 0x4
	// Line 366, Address: 0x22cc08, Func Offset: 0x8
	// Line 369, Address: 0x22cc0c, Func Offset: 0xc
	// Line 366, Address: 0x22cc10, Func Offset: 0x10
	// Line 367, Address: 0x22cc1c, Func Offset: 0x1c
	// Line 369, Address: 0x22cc20, Func Offset: 0x20
	// Line 370, Address: 0x22cc28, Func Offset: 0x28
	// Line 371, Address: 0x22cc30, Func Offset: 0x30
	// Line 373, Address: 0x22cc38, Func Offset: 0x38
	// Line 375, Address: 0x22cc48, Func Offset: 0x48
	// Line 377, Address: 0x22cc50, Func Offset: 0x50
	// Func End, Address: 0x22cc64, Func Offset: 0x64
}

// 
// Start address: 0x22cc70
int GetProc(_anon1* anm_ctrl)
{
	sfObj* optr;
	// Line 447, Address: 0x22cc70, Func Offset: 0
	// Line 453, Address: 0x22cc88, Func Offset: 0x18
	// Line 454, Address: 0x22ccc0, Func Offset: 0x50
	// Line 456, Address: 0x22ccc8, Func Offset: 0x58
	// Line 458, Address: 0x22ccd0, Func Offset: 0x60
	// Line 459, Address: 0x22ccdc, Func Offset: 0x6c
	// Line 461, Address: 0x22cce4, Func Offset: 0x74
	// Line 462, Address: 0x22ccec, Func Offset: 0x7c
	// Line 463, Address: 0x22ccf0, Func Offset: 0x80
	// Line 464, Address: 0x22ccf8, Func Offset: 0x88
	// Line 463, Address: 0x22cd00, Func Offset: 0x90
	// Line 464, Address: 0x22cd04, Func Offset: 0x94
	// Line 467, Address: 0x22cd0c, Func Offset: 0x9c
	// Line 469, Address: 0x22cd18, Func Offset: 0xa8
	// Line 468, Address: 0x22cd1c, Func Offset: 0xac
	// Line 469, Address: 0x22cd20, Func Offset: 0xb0
	// Line 470, Address: 0x22cd28, Func Offset: 0xb8
	// Line 471, Address: 0x22cd30, Func Offset: 0xc0
	// Line 472, Address: 0x22cd38, Func Offset: 0xc8
	// Func End, Address: 0x22cd50, Func Offset: 0xe0
}

// 
// Start address: 0x22cd50
void KillProc(_anon1* anm_ctrl, int slot)
{
	// Line 476, Address: 0x22cd50, Func Offset: 0
	// Line 480, Address: 0x22cd68, Func Offset: 0x18
	// Line 482, Address: 0x22cd70, Func Offset: 0x20
	// Line 483, Address: 0x22cd98, Func Offset: 0x48
	// Line 486, Address: 0x22cda4, Func Offset: 0x54
	// Line 487, Address: 0x22cdb0, Func Offset: 0x60
	// Line 489, Address: 0x22cdbc, Func Offset: 0x6c
	// Line 490, Address: 0x22cdc8, Func Offset: 0x78
	// Line 493, Address: 0x22cdd0, Func Offset: 0x80
	// Line 496, Address: 0x22cde0, Func Offset: 0x90
	// Line 498, Address: 0x22cdec, Func Offset: 0x9c
	// Line 502, Address: 0x22cdf0, Func Offset: 0xa0
	// Line 503, Address: 0x22cdfc, Func Offset: 0xac
	// Line 504, Address: 0x22ce00, Func Offset: 0xb0
	// Func End, Address: 0x22ce18, Func Offset: 0xc8
}

// 
// Start address: 0x22ce20
void sfAnimeControlConstruct(_anon1* anm_ctrl, sfCharacter* chara, void* default_anime_data)
{
	sgAnime* anime;
	int i;
	int bone_no;
	float ratio;
	// Line 515, Address: 0x22ce20, Func Offset: 0
	// Line 519, Address: 0x22ce40, Func Offset: 0x20
	// Line 520, Address: 0x22ce48, Func Offset: 0x28
	// Line 522, Address: 0x22ce4c, Func Offset: 0x2c
	// Line 521, Address: 0x22ce50, Func Offset: 0x30
	// Line 524, Address: 0x22ce54, Func Offset: 0x34
	// Line 522, Address: 0x22ce58, Func Offset: 0x38
	// Line 527, Address: 0x22ce5c, Func Offset: 0x3c
	// Line 523, Address: 0x22ce60, Func Offset: 0x40
	// Line 527, Address: 0x22ce64, Func Offset: 0x44
	// Line 528, Address: 0x22ce70, Func Offset: 0x50
	// Line 529, Address: 0x22ce7c, Func Offset: 0x5c
	// Line 531, Address: 0x22ce84, Func Offset: 0x64
	// Line 532, Address: 0x22cea0, Func Offset: 0x80
	// Line 534, Address: 0x22cea4, Func Offset: 0x84
	// Line 536, Address: 0x22ceac, Func Offset: 0x8c
	// Line 537, Address: 0x22ceb0, Func Offset: 0x90
	// Line 538, Address: 0x22cec0, Func Offset: 0xa0
	// Line 539, Address: 0x22cec8, Func Offset: 0xa8
	// Line 540, Address: 0x22ced8, Func Offset: 0xb8
	// Func End, Address: 0x22cef0, Func Offset: 0xd0
}

// 
// Start address: 0x22cef0
_anon1* sfAnimeControlAllocate(sfCharacter* chara, void* default_anime_data)
{
	sfObj* optr;
	_anon1* anm_ctrl;
	// Line 550, Address: 0x22cef0, Func Offset: 0
	// Line 553, Address: 0x22cf08, Func Offset: 0x18
	// Line 554, Address: 0x22cf14, Func Offset: 0x24
	// Line 555, Address: 0x22cf1c, Func Offset: 0x2c
	// Line 556, Address: 0x22cf28, Func Offset: 0x38
	// Line 558, Address: 0x22cf38, Func Offset: 0x48
	// Line 560, Address: 0x22cf48, Func Offset: 0x58
	// Line 561, Address: 0x22cf54, Func Offset: 0x64
	// Line 564, Address: 0x22cf60, Func Offset: 0x70
	// Line 565, Address: 0x22cf70, Func Offset: 0x80
	// Line 566, Address: 0x22cf78, Func Offset: 0x88
	// Func End, Address: 0x22cf90, Func Offset: 0xa0
}

// 
// Start address: 0x22cf90
void sfAnimeControlDestruct(_anon1* anm_ctrl)
{
	int i;
	// Line 574, Address: 0x22cf90, Func Offset: 0
	// Line 576, Address: 0x22cfa4, Func Offset: 0x14
	// Line 577, Address: 0x22cfa8, Func Offset: 0x18
	// Line 578, Address: 0x22cfb4, Func Offset: 0x24
	// Line 579, Address: 0x22cfc4, Func Offset: 0x34
	// Line 580, Address: 0x22cfcc, Func Offset: 0x3c
	// Func End, Address: 0x22cfe0, Func Offset: 0x50
}

// 
// Start address: 0x22cfe0
int sfAnimeControlNormalNoEntry(_anon1* anm_ctrl, void* play_data)
{
	int slot;
	// Line 592, Address: 0x22cfe0, Func Offset: 0
	// Line 598, Address: 0x22cff8, Func Offset: 0x18
	// Line 599, Address: 0x22d004, Func Offset: 0x24
	// Line 600, Address: 0x22d00c, Func Offset: 0x2c
	// Line 601, Address: 0x22d014, Func Offset: 0x34
	// Line 602, Address: 0x22d018, Func Offset: 0x38
	// Line 606, Address: 0x22d040, Func Offset: 0x60
	// Line 608, Address: 0x22d04c, Func Offset: 0x6c
	// Line 609, Address: 0x22d050, Func Offset: 0x70
	// Line 610, Address: 0x22d058, Func Offset: 0x78
	// Func End, Address: 0x22d070, Func Offset: 0x90
}

// 
// Start address: 0x22d070
void sfAnimeControlSetMaxStep(_anon1* anm_ctrl, int max_step)
{
	// Line 620, Address: 0x22d070, Func Offset: 0
	// Func End, Address: 0x22d078, Func Offset: 0x8
}

// 
// Start address: 0x22d080
int sfAnimeControlNormal(_anon1* anm_ctrl, void* play_data)
{
	int slot;
	// Line 629, Address: 0x22d080, Func Offset: 0
	// Line 635, Address: 0x22d09c, Func Offset: 0x1c
	// Line 636, Address: 0x22d0a8, Func Offset: 0x28
	// Line 637, Address: 0x22d0b0, Func Offset: 0x30
	// Line 639, Address: 0x22d0b8, Func Offset: 0x38
	// Line 640, Address: 0x22d0e0, Func Offset: 0x60
	// Line 644, Address: 0x22d0e4, Func Offset: 0x64
	// Line 642, Address: 0x22d0e8, Func Offset: 0x68
	// Line 640, Address: 0x22d0ec, Func Offset: 0x6c
	// Line 644, Address: 0x22d0f0, Func Offset: 0x70
	// Line 646, Address: 0x22d0f8, Func Offset: 0x78
	// Line 647, Address: 0x22d0fc, Func Offset: 0x7c
	// Line 648, Address: 0x22d100, Func Offset: 0x80
	// Func End, Address: 0x22d11c, Func Offset: 0x9c
}

// 
// Start address: 0x22d120
int sfAnimeControlLastPose(_anon1* anm_ctrl)
{
	int slot;
	// Line 656, Address: 0x22d120, Func Offset: 0
	// Line 661, Address: 0x22d124, Func Offset: 0x4
	// Line 656, Address: 0x22d128, Func Offset: 0x8
	// Line 661, Address: 0x22d138, Func Offset: 0x18
	// Line 662, Address: 0x22d144, Func Offset: 0x24
	// Line 663, Address: 0x22d150, Func Offset: 0x30
	// Line 665, Address: 0x22d158, Func Offset: 0x38
	// Line 667, Address: 0x22d178, Func Offset: 0x58
	// Line 668, Address: 0x22d18c, Func Offset: 0x6c
	// Line 669, Address: 0x22d198, Func Offset: 0x78
	// Line 670, Address: 0x22d1a4, Func Offset: 0x84
	// Line 671, Address: 0x22d1a8, Func Offset: 0x88
	// Line 670, Address: 0x22d1ac, Func Offset: 0x8c
	// Line 672, Address: 0x22d1b0, Func Offset: 0x90
	// Func End, Address: 0x22d1c8, Func Offset: 0xa8
}

// 
// Start address: 0x22d1d0
void sfAnimeControlSetDelay(_anon1* anm_ctrl, float delay_sec)
{
	int slot;
	int slot_pre;
	// Line 680, Address: 0x22d1d0, Func Offset: 0
	// Line 689, Address: 0x22d1d4, Func Offset: 0x4
	// Line 680, Address: 0x22d1d8, Func Offset: 0x8
	// Line 689, Address: 0x22d1f0, Func Offset: 0x20
	// Line 699, Address: 0x22d1fc, Func Offset: 0x2c
	// Line 700, Address: 0x22d200, Func Offset: 0x30
	// Line 702, Address: 0x22d208, Func Offset: 0x38
	// Line 703, Address: 0x22d214, Func Offset: 0x44
	// Line 705, Address: 0x22d220, Func Offset: 0x50
	// Line 706, Address: 0x22d240, Func Offset: 0x70
	// Line 707, Address: 0x22d254, Func Offset: 0x84
	// Line 710, Address: 0x22d258, Func Offset: 0x88
	// Line 711, Address: 0x22d268, Func Offset: 0x98
	// Line 712, Address: 0x22d290, Func Offset: 0xc0
	// Line 713, Address: 0x22d294, Func Offset: 0xc4
	// Line 714, Address: 0x22d29c, Func Offset: 0xcc
	// Line 716, Address: 0x22d2a0, Func Offset: 0xd0
	// Line 714, Address: 0x22d2a4, Func Offset: 0xd4
	// Line 716, Address: 0x22d2ac, Func Offset: 0xdc
	// Line 718, Address: 0x22d2b0, Func Offset: 0xe0
	// Func End, Address: 0x22d2cc, Func Offset: 0xfc
}

// 
// Start address: 0x22d2d0
int sfAnimeControlDelay(_anon1* anm_ctrl, void* play_data, float delay_sec)
{
	int slot;
	// Line 728, Address: 0x22d2d0, Func Offset: 0
	// Line 737, Address: 0x22d2fc, Func Offset: 0x2c
	// Line 738, Address: 0x22d308, Func Offset: 0x38
	// Line 739, Address: 0x22d310, Func Offset: 0x40
	// Line 741, Address: 0x22d318, Func Offset: 0x48
	// Line 748, Address: 0x22d340, Func Offset: 0x70
	// Line 741, Address: 0x22d344, Func Offset: 0x74
	// Line 745, Address: 0x22d348, Func Offset: 0x78
	// Line 748, Address: 0x22d34c, Func Offset: 0x7c
	// Line 746, Address: 0x22d350, Func Offset: 0x80
	// Line 743, Address: 0x22d354, Func Offset: 0x84
	// Line 748, Address: 0x22d358, Func Offset: 0x88
	// Line 751, Address: 0x22d360, Func Offset: 0x90
	// Line 752, Address: 0x22d36c, Func Offset: 0x9c
	// Line 753, Address: 0x22d378, Func Offset: 0xa8
	// Line 754, Address: 0x22d384, Func Offset: 0xb4
	// Line 758, Address: 0x22d388, Func Offset: 0xb8
	// Line 754, Address: 0x22d38c, Func Offset: 0xbc
	// Line 758, Address: 0x22d390, Func Offset: 0xc0
	// Line 759, Address: 0x22d3b0, Func Offset: 0xe0
	// Line 760, Address: 0x22d3b8, Func Offset: 0xe8
	// Line 762, Address: 0x22d3c4, Func Offset: 0xf4
	// Line 763, Address: 0x22d3d0, Func Offset: 0x100
	// Line 764, Address: 0x22d3dc, Func Offset: 0x10c
	// Line 765, Address: 0x22d3e0, Func Offset: 0x110
	// Line 766, Address: 0x22d3e4, Func Offset: 0x114
	// Line 767, Address: 0x22d3e8, Func Offset: 0x118
	// Line 765, Address: 0x22d3ec, Func Offset: 0x11c
	// Line 766, Address: 0x22d3f4, Func Offset: 0x124
	// Line 768, Address: 0x22d3f8, Func Offset: 0x128
	// Func End, Address: 0x22d420, Func Offset: 0x150
}

// 
// Start address: 0x22d420
int sfAnimeControlMix(_anon1* anm_ctrl, void* base, void* target)
{
	int slot0;
	int slot1;
	int slot;
	// Line 778, Address: 0x22d420, Func Offset: 0
	// Line 788, Address: 0x22d438, Func Offset: 0x18
	// Line 789, Address: 0x22d444, Func Offset: 0x24
	// Line 790, Address: 0x22d44c, Func Offset: 0x2c
	// Line 792, Address: 0x22d458, Func Offset: 0x38
	// Line 793, Address: 0x22d468, Func Offset: 0x48
	// Line 794, Address: 0x22d470, Func Offset: 0x50
	// Line 795, Address: 0x22d478, Func Offset: 0x58
	// Line 798, Address: 0x22d480, Func Offset: 0x60
	// Line 799, Address: 0x22d490, Func Offset: 0x70
	// Line 800, Address: 0x22d49c, Func Offset: 0x7c
	// Line 801, Address: 0x22d4a4, Func Offset: 0x84
	// Line 802, Address: 0x22d4b0, Func Offset: 0x90
	// Line 805, Address: 0x22d4b8, Func Offset: 0x98
	// Line 806, Address: 0x22d4d8, Func Offset: 0xb8
	// Line 808, Address: 0x22d4e0, Func Offset: 0xc0
	// Func End, Address: 0x22d4f8, Func Offset: 0xd8
}

// 
// Start address: 0x22d500
int sfAnimeControlLinkMix(_anon1* anm_ctrl, void* base, void* target)
{
	int slot;
	// Line 820, Address: 0x22d500, Func Offset: 0
	// Line 827, Address: 0x22d50c, Func Offset: 0xc
	// Line 828, Address: 0x22d514, Func Offset: 0x14
	// Line 829, Address: 0x22d520, Func Offset: 0x20
	// Line 830, Address: 0x22d528, Func Offset: 0x28
	// Line 831, Address: 0x22d548, Func Offset: 0x48
	// Line 834, Address: 0x22d554, Func Offset: 0x54
	// Line 835, Address: 0x22d580, Func Offset: 0x80
	// Line 836, Address: 0x22d58c, Func Offset: 0x8c
	// Line 837, Address: 0x22d5b8, Func Offset: 0xb8
	// Line 839, Address: 0x22d5c4, Func Offset: 0xc4
	// Line 840, Address: 0x22d5cc, Func Offset: 0xcc
	// Line 841, Address: 0x22d5d0, Func Offset: 0xd0
	// Func End, Address: 0x22d5e0, Func Offset: 0xe0
}

// 
// Start address: 0x22d5e0
int sfAnimeControlSlotMix(_anon1* anm_ctrl, int base, int target)
{
	int slot;
	// Line 853, Address: 0x22d5e0, Func Offset: 0
	// Line 862, Address: 0x22d608, Func Offset: 0x28
	// Line 863, Address: 0x22d614, Func Offset: 0x34
	// Line 864, Address: 0x22d61c, Func Offset: 0x3c
	// Line 865, Address: 0x22d624, Func Offset: 0x44
	// Line 867, Address: 0x22d628, Func Offset: 0x48
	// Line 868, Address: 0x22d650, Func Offset: 0x70
	// Line 870, Address: 0x22d654, Func Offset: 0x74
	// Line 868, Address: 0x22d658, Func Offset: 0x78
	// Line 870, Address: 0x22d65c, Func Offset: 0x7c
	// Line 871, Address: 0x22d680, Func Offset: 0xa0
	// Line 874, Address: 0x22d6a8, Func Offset: 0xc8
	// Line 873, Address: 0x22d6ac, Func Offset: 0xcc
	// Line 874, Address: 0x22d6b0, Func Offset: 0xd0
	// Line 875, Address: 0x22d6b8, Func Offset: 0xd8
	// Line 876, Address: 0x22d6c4, Func Offset: 0xe4
	// Line 877, Address: 0x22d6d0, Func Offset: 0xf0
	// Line 881, Address: 0x22d6d4, Func Offset: 0xf4
	// Line 882, Address: 0x22d6d8, Func Offset: 0xf8
	// Line 877, Address: 0x22d6dc, Func Offset: 0xfc
	// Line 878, Address: 0x22d6e4, Func Offset: 0x104
	// Line 879, Address: 0x22d6e8, Func Offset: 0x108
	// Line 881, Address: 0x22d6ec, Func Offset: 0x10c
	// Line 883, Address: 0x22d6f0, Func Offset: 0x110
	// Func End, Address: 0x22d714, Func Offset: 0x134
}

// 
// Start address: 0x22d720
int sfAnimeControlPL_SubLowerBody(_anon1* anm_ctrl, void* base, void* lower)
{
	int slot;
	// Line 897, Address: 0x22d720, Func Offset: 0
	// Line 903, Address: 0x22d738, Func Offset: 0x18
	// Line 904, Address: 0x22d744, Func Offset: 0x24
	// Line 905, Address: 0x22d750, Func Offset: 0x30
	// Line 907, Address: 0x22d758, Func Offset: 0x38
	// Line 909, Address: 0x22d778, Func Offset: 0x58
	// Line 908, Address: 0x22d77c, Func Offset: 0x5c
	// Line 909, Address: 0x22d780, Func Offset: 0x60
	// Line 910, Address: 0x22d788, Func Offset: 0x68
	// Line 912, Address: 0x22d78c, Func Offset: 0x6c
	// Line 910, Address: 0x22d790, Func Offset: 0x70
	// Line 912, Address: 0x22d794, Func Offset: 0x74
	// Line 914, Address: 0x22d79c, Func Offset: 0x7c
	// Line 915, Address: 0x22d7a0, Func Offset: 0x80
	// Line 914, Address: 0x22d7a4, Func Offset: 0x84
	// Line 916, Address: 0x22d7a8, Func Offset: 0x88
	// Func End, Address: 0x22d7c0, Func Offset: 0xa0
}

// 
// Start address: 0x22d7c0
void ProcProceedTime(_anon1* anm_ctrl, int slot, int current_step)
{
	// Line 1019, Address: 0x22d7c0, Func Offset: 0
	// Line 1021, Address: 0x22d7c4, Func Offset: 0x4
	// Line 1019, Address: 0x22d7c8, Func Offset: 0x8
	// Line 1021, Address: 0x22d7dc, Func Offset: 0x1c
	// Line 1024, Address: 0x22d7e4, Func Offset: 0x24
	// Line 1025, Address: 0x22d808, Func Offset: 0x48
	// Line 1029, Address: 0x22d818, Func Offset: 0x58
	// Line 1030, Address: 0x22d828, Func Offset: 0x68
	// Line 1032, Address: 0x22d83c, Func Offset: 0x7c
	// Line 1033, Address: 0x22d844, Func Offset: 0x84
	// Line 1035, Address: 0x22d850, Func Offset: 0x90
	// Line 1036, Address: 0x22d85c, Func Offset: 0x9c
	// Func End, Address: 0x22d878, Func Offset: 0xb8
}

// 
// Start address: 0x22d880
void ProcUpdate(_anon1* anm_ctrl, int slot, int current_step)
{
	// Line 1040, Address: 0x22d880, Func Offset: 0
	// Line 1042, Address: 0x22d884, Func Offset: 0x4
	// Line 1040, Address: 0x22d888, Func Offset: 0x8
	// Line 1042, Address: 0x22d89c, Func Offset: 0x1c
	// Line 1045, Address: 0x22d8a4, Func Offset: 0x24
	// Line 1046, Address: 0x22d8c8, Func Offset: 0x48
	// Line 1049, Address: 0x22d8d8, Func Offset: 0x58
	// Line 1050, Address: 0x22d8e8, Func Offset: 0x68
	// Line 1051, Address: 0x22d8fc, Func Offset: 0x7c
	// Line 1052, Address: 0x22d904, Func Offset: 0x84
	// Line 1054, Address: 0x22d910, Func Offset: 0x90
	// Line 1056, Address: 0x22d91c, Func Offset: 0x9c
	// Func End, Address: 0x22d938, Func Offset: 0xb8
}

// 
// Start address: 0x22d940
void CheckProc(_anon1* anm_ctrl, int slot, int last_slot)
{
	int target_slot;
	// Line 1060, Address: 0x22d940, Func Offset: 0
	// Line 1062, Address: 0x22d944, Func Offset: 0x4
	// Line 1060, Address: 0x22d948, Func Offset: 0x8
	// Line 1062, Address: 0x22d96c, Func Offset: 0x2c
	// Line 1065, Address: 0x22d974, Func Offset: 0x34
	// Line 1067, Address: 0x22d99c, Func Offset: 0x5c
	// Line 1069, Address: 0x22d9a8, Func Offset: 0x68
	// Line 1072, Address: 0x22d9c0, Func Offset: 0x80
	// Line 1073, Address: 0x22d9c8, Func Offset: 0x88
	// Line 1075, Address: 0x22d9cc, Func Offset: 0x8c
	// Line 1072, Address: 0x22d9d0, Func Offset: 0x90
	// Line 1073, Address: 0x22d9d8, Func Offset: 0x98
	// Line 1075, Address: 0x22d9dc, Func Offset: 0x9c
	// Line 1076, Address: 0x22d9f0, Func Offset: 0xb0
	// Line 1077, Address: 0x22da04, Func Offset: 0xc4
	// Line 1078, Address: 0x22da08, Func Offset: 0xc8
	// Line 1081, Address: 0x22da10, Func Offset: 0xd0
	// Line 1086, Address: 0x22da30, Func Offset: 0xf0
	// Line 1089, Address: 0x22da3c, Func Offset: 0xfc
	// Line 1090, Address: 0x22da48, Func Offset: 0x108
	// Line 1095, Address: 0x22da68, Func Offset: 0x128
	// Line 1097, Address: 0x22da74, Func Offset: 0x134
	// Line 1098, Address: 0x22daa4, Func Offset: 0x164
	// Line 1099, Address: 0x22daa8, Func Offset: 0x168
	// Line 1101, Address: 0x22dab4, Func Offset: 0x174
	// Line 1103, Address: 0x22dae4, Func Offset: 0x1a4
	// Line 1104, Address: 0x22dae8, Func Offset: 0x1a8
	// Line 1105, Address: 0x22daf0, Func Offset: 0x1b0
	// Line 1104, Address: 0x22daf4, Func Offset: 0x1b4
	// Line 1105, Address: 0x22dafc, Func Offset: 0x1bc
	// Line 1106, Address: 0x22db00, Func Offset: 0x1c0
	// Line 1111, Address: 0x22db04, Func Offset: 0x1c4
	// Line 1113, Address: 0x22db08, Func Offset: 0x1c8
	// Line 1114, Address: 0x22db18, Func Offset: 0x1d8
	// Line 1115, Address: 0x22db28, Func Offset: 0x1e8
	// Func End, Address: 0x22db4c, Func Offset: 0x20c
}

// 
// Start address: 0x22db50
void StopOverProc(_anon1* anm_ctrl, int slot, int current_step)
{
	// Line 1119, Address: 0x22db50, Func Offset: 0
	// Line 1121, Address: 0x22db54, Func Offset: 0x4
	// Line 1119, Address: 0x22db58, Func Offset: 0x8
	// Line 1121, Address: 0x22db6c, Func Offset: 0x1c
	// Line 1124, Address: 0x22db74, Func Offset: 0x24
	// Line 1126, Address: 0x22db98, Func Offset: 0x48
	// Line 1127, Address: 0x22dba8, Func Offset: 0x58
	// Line 1130, Address: 0x22dbb8, Func Offset: 0x68
	// Line 1132, Address: 0x22dbc8, Func Offset: 0x78
	// Line 1134, Address: 0x22dbd8, Func Offset: 0x88
	// Line 1135, Address: 0x22dbec, Func Offset: 0x9c
	// Line 1138, Address: 0x22dc00, Func Offset: 0xb0
	// Line 1140, Address: 0x22dc10, Func Offset: 0xc0
	// Line 1141, Address: 0x22dc1c, Func Offset: 0xcc
	// Line 1142, Address: 0x22dc28, Func Offset: 0xd8
	// Line 1144, Address: 0x22dc2c, Func Offset: 0xdc
	// Line 1142, Address: 0x22dc30, Func Offset: 0xe0
	// Line 1143, Address: 0x22dc34, Func Offset: 0xe4
	// Line 1144, Address: 0x22dc38, Func Offset: 0xe8
	// Line 1145, Address: 0x22dc3c, Func Offset: 0xec
	// Line 1146, Address: 0x22dc40, Func Offset: 0xf0
	// Line 1147, Address: 0x22dc44, Func Offset: 0xf4
	// Line 1148, Address: 0x22dc48, Func Offset: 0xf8
	// Func End, Address: 0x22dc60, Func Offset: 0x110
}

// 
// Start address: 0x22dc60
void sfAnimeControlUpdate(_anon1* anm_ctrl)
{
	int i;
	// Line 1157, Address: 0x22dc60, Func Offset: 0
	// Line 1162, Address: 0x22dc64, Func Offset: 0x4
	// Line 1157, Address: 0x22dc68, Func Offset: 0x8
	// Line 1165, Address: 0x22dc80, Func Offset: 0x20
	// Line 1163, Address: 0x22dc84, Func Offset: 0x24
	// Line 1164, Address: 0x22dca0, Func Offset: 0x40
	// Line 1165, Address: 0x22dca8, Func Offset: 0x48
	// Line 1167, Address: 0x22dcb4, Func Offset: 0x54
	// Line 1169, Address: 0x22dcc8, Func Offset: 0x68
	// Line 1170, Address: 0x22dcd8, Func Offset: 0x78
	// Line 1171, Address: 0x22dce8, Func Offset: 0x88
	// Line 1173, Address: 0x22dcf8, Func Offset: 0x98
	// Line 1175, Address: 0x22dd08, Func Offset: 0xa8
	// Line 1176, Address: 0x22dd10, Func Offset: 0xb0
	// Line 1177, Address: 0x22dd30, Func Offset: 0xd0
	// Line 1178, Address: 0x22dd38, Func Offset: 0xd8
	// Line 1179, Address: 0x22dd48, Func Offset: 0xe8
	// Line 1182, Address: 0x22dd50, Func Offset: 0xf0
	// Line 1184, Address: 0x22dd60, Func Offset: 0x100
	// Line 1185, Address: 0x22dd88, Func Offset: 0x128
	// Line 1186, Address: 0x22dd90, Func Offset: 0x130
	// Line 1187, Address: 0x22dda4, Func Offset: 0x144
	// Line 1189, Address: 0x22dda8, Func Offset: 0x148
	// Func End, Address: 0x22ddc0, Func Offset: 0x160
}

// 
// Start address: 0x22ddc0
sgAnime* sfAnimeControlGetAnime(_anon1* anm_ctrl, int slot)
{
	// Line 1195, Address: 0x22ddc0, Func Offset: 0
	// Line 1196, Address: 0x22dde8, Func Offset: 0x28
	// Line 1197, Address: 0x22ddf0, Func Offset: 0x30
	// Line 1199, Address: 0x22ddf8, Func Offset: 0x38
	// Line 1200, Address: 0x22de00, Func Offset: 0x40
	// Func End, Address: 0x22de08, Func Offset: 0x48
}

// 
// Start address: 0x22de10
_anon2* sfAnimeControlGetMixer(_anon1* anm_ctrl, int slot)
{
	// Line 1208, Address: 0x22de10, Func Offset: 0
	// Line 1209, Address: 0x22de38, Func Offset: 0x28
	// Line 1210, Address: 0x22de50, Func Offset: 0x40
	// Line 1212, Address: 0x22de58, Func Offset: 0x48
	// Line 1213, Address: 0x22de60, Func Offset: 0x50
	// Func End, Address: 0x22de68, Func Offset: 0x58
}

