typedef struct _sfEvFather;
typedef struct sfObj;
typedef struct _anon0;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon1;
typedef struct sgQTNode;
typedef struct _anon2;
typedef struct sgSVModel;
typedef struct sgQTObject;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgIKHandle;
typedef struct _evBgObj;
typedef struct sgBone;
typedef struct sfOffsetAABB;
typedef struct _evBgCharData;
typedef struct _evBgchar;
typedef struct _anon5;
typedef union sfCldBody;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sfCldPart;
typedef struct sgAnime;
typedef struct _evCmnBgObjData;
typedef struct EventFlag;
typedef struct _SubtitleMessageData;
typedef union _anon8;
typedef struct sfCharacter;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct sfCldObject;
typedef struct _anon14;
typedef union _anon15;
typedef struct _EventDriver;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef sgIKSolveResult(*type_14)();
typedef void(*type_19)(_anon6*, int, int, float*);
typedef void(*type_25)(sgAnime*, int);
typedef void(*type_30)(sfObj*);
typedef void(*type_32)(sfObj*);
typedef void(*type_40)(sfObj*);
typedef void(*type_50)(sfObj*);

typedef _SubtitleMessageData type_2[2];
typedef _anon13 type_4[4];
typedef float type_6[4][4];
typedef _anon2 type_7[6];
typedef float type_8[4];
typedef float type_9[4][2];
typedef _SubtitleMessageData type_11[3];
typedef _anon8 type_12[4];
typedef float type_13[4][3];
typedef float type_15[4][5];
typedef float type_16[4][4];
typedef unsigned char type_17[3];
typedef _anon13 type_18[3];
typedef _SubtitleMessageData type_20[2];
typedef float type_21[4][4];
typedef void* type_22[4];
typedef unsigned char type_23[320];
typedef _SubtitleMessageData type_24[2];
typedef float type_26[4][64];
typedef float type_27[4][64][6];
typedef _anon8 type_28[256];
typedef _anon13 type_29[4];
typedef sfObj* type_31[6];
typedef _anon13 type_33[4];
typedef unsigned char type_34[4];
typedef _SubtitleMessageData type_35[2];
typedef short type_36[2];
typedef unsigned short type_37[2];
typedef float type_38[4][3];
typedef char type_39[4];
typedef unsigned char type_41[4];
typedef float type_42[1];
typedef int type_43[1];
typedef _SubtitleMessageData type_44[2];
typedef _anon13 type_45[3];
typedef float type_46[4];
typedef _anon13 type_47[5];
typedef _anon1 type_48[6];
typedef sfCldPart* type_49[6];
typedef float type_51[4][4];
typedef unsigned char type_52[3];
typedef float type_53[4];
typedef _anon14 type_54[4];
typedef _anon15 type_55[0];
typedef float type_56[4][4];
typedef _SubtitleMessageData type_57[3];

struct _sfEvFather
{
	float hitpoly[4];
	int maphit_id;
	float alpha;
	float counter;
	int draw_flag;
	int subtitle_flag;
	int slot;
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

struct _anon0
{
	_anon15 vertex[0];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon1
{
	int model_id;
	int emt_id;
	float pos[4];
	float rot[4];
	int se_id;
	_SubtitleMessageData* subtitle;
	int flag;
};

struct sgQTNode
{
	int dummy;
};

struct _anon2
{
	int model;
	int emt;
	int flag;
	float pos[4];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct sgQTObject
{
	_anon10 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon3
{
	int dummy;
};

struct _anon4
{
	sfCharacter chara;
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

struct _evBgObj
{
	_anon5 emmodel;
	sgBone bone;
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

struct sfOffsetAABB
{
	_anon11 aabb;
	float offset[4];
};

struct _evBgCharData
{
	int model_id;
	int emt_id;
	int kage_id;
	int anim_id;
};

struct _evBgchar
{
	sfCharacter chara;
	_anon3* anime;
	sfCldObject cld_obj;
};

struct _anon5
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

union sfCldBody
{
	_anon12 obb;
	_anon11 aabb;
	sfOffsetAABB offset_aabb;
	_anon9 line;
	_anon10 sphere;
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon7
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon6*, int, int, float*);
	int equip_flag;
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

struct _evCmnBgObjData
{
	int model_id;
	int emt_id;
	int GB_emt_id;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon7 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon9
{
	float start[4];
	float end[4];
};

struct _anon10
{
	float center[4];
	float radius;
};

struct _anon11
{
	float bmin[4];
	float bmax[4];
};

struct _anon12
{
	float mat[4][4];
	float half_w[4];
};

struct _anon13
{
	unsigned int model;
	unsigned int emt;
	unsigned int anm;
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

struct _anon14
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon15
{
	float node[4];
	_anon14 data[4];
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
	_anon8 val[4];
};

EventFlag event_flag;
_EventDriver ev_pasthome_cm24_to_3ldk;
_SubtitleMessageData ev_204_mes[2];
_SubtitleMessageData ev_205_mes[2];
_SubtitleMessageData ev_206_mes[2];
_SubtitleMessageData ev_207_mes[2];
_SubtitleMessageData ev_208_mes[3];
_SubtitleMessageData ev_209_mes[2];
_anon1 father_data[6];
sfObj* obj_father[6];
float wk_hitpoly_father[4][64][6];
void(*ev_pasthome_cm_father_reset_transparency)(sfObj*);
void(*ev_pasthome_cm_father_set_transparency)(sfObj*);
_EventDriver ev_pasthome_cm02_204;
_EventDriver ev_pasthome_cm02_205;
_EventDriver ev_pasthome_cm02_206;
_EventDriver ev_pasthome_cm02_207;
_EventDriver ev_pasthome_cm02_208;
_EventDriver ev_pasthome_cm02_209;
_anon2 chain_data[6];
_EventDriver ev_pasthome0_cm03_213_check;
_SubtitleMessageData ev_203_mes[3];
int f_Childscry;
_EventDriver ev_psthome0_203;
_EventDriver ev_psthome0_curse_ringing;
float b_wall_hitpoly[4][4];
_anon13 w_cm01[5];
float pos_cm01[4][5];
_anon13 w_cm02[4];
float pos_cm02[4][4];
_anon13 w_cm03[3];
float pos_cm03[4][3];
_anon13 w_cm11[4];
float pos_cm11[4][4];
_anon13 w_cm12[3];
float pos_cm12[4][3];
_anon13 w_cm24[4];
float pos_cm24[4][4];

int ev_pasthome_bg_obj_init(sfObj* obj, int model_id, int emt_id, float* pos, float* rot);
int ev_pasthome_bg_obj_exec();
int ev_pasthome_bg_obj_draw(sfObj* obj);
int ev_pasthome_bg_obj_end(sfObj* obj);
int ev_pasthome_bg_char_init(sfObj* obj, int model_id, int emt_id, int kage_id, int anim_id, float* pos, float* rot);
int ev_pasthome_bg_char_exec();
int ev_pasthome_bg_char_draw();
int ev_pasthome_bg_char_end(sfObj* obj);
int ev_pasthome_cm24_to_3ldk_end();
int ev_pasthome_cm16_ch00_init(sfObj* obj);
int ev_pasthome_cm16_ch00_exec(sfObj* obj);
int ev_pasthome_cm16_ch00_draw(sfObj* obj);
int ev_pasthome_cm16_ch00_end(sfObj* obj);
int ev_pasthome_cm_father_init(sfObj* obj);
void ev_pasthome_cm_father_set_transparency(sfObj* obj);
void ev_pasthome_cm_father_reset_transparency();
int ev_pasthome_cm_father_exec(sfObj* obj);
int ev_pasthome_cm_father_draw(sfObj* obj);
int ev_pasthome_cm_father_end(sfObj* obj);
int ev_pasthome_cm_father_touch_end(sfObj* obj);
int ev_pasthome_cm03_chain_init(sfObj* obj);
int ev_pasthome_cm03_chain_exec(sfObj* obj);
int ev_pasthome_cm03_chain_draw(sfObj* obj);
int ev_pasthome_cm03_chain_end(sfObj* obj);
int ev_pasthome0_cm03_213_check_exec();
int ev_pasthome_cm09_bdoor_init(sfObj* obj);
int ev_pasthome_cm09_bdoor_exec(sfObj* obj);
int ev_pasthome_cm09_bdoor_draw(sfObj* obj);
int ev_pasthome_cm09_bdoor_end(sfObj* obj);
int ev_pasthome_cm24_bdoor_init(sfObj* obj);
int ev_pasthome_cm24_bdoor_exec(sfObj* obj);
int ev_pasthome_cm24_bdoor_draw(sfObj* obj);
int ev_pasthome_cm24_bdoor_end(sfObj* obj);
int ev_pasthome_cm01_skbook_init(sfObj* obj);
int ev_pasthome_cm01_skbook_exec(sfObj* obj);
int ev_pasthome_cm01_skbook_draw(sfObj* obj);
int ev_pasthome_cm01_skbook_end(sfObj* obj);
int ev_pasthome_cm01_cls_init(sfObj* obj);
int ev_pasthome_cm11_th_init(sfObj* obj);
int ev_pasthome_cm11_th_exec(sfObj* obj);
int ev_pasthome_cm11_th_draw(sfObj* obj);
int ev_pasthome_cm11_th_end(sfObj* obj);
int ev_pasthome_cm11_wm_init(sfObj* obj);
int ev_pasthome_cm11_wm_exec(sfObj* obj);
int ev_pasthome_cm11_wm_draw(sfObj* obj);
int ev_pasthome_cm11_wm_end(sfObj* obj);
int ev_pasthome_cm15_hiseki_init(sfObj* obj);
int ev_pasthome_cm15_hiseki_draw(sfObj* obj);
int ev_pasthome_cm12_th_init(sfObj* obj);
int ev_pasthome_cm12_th_exec(sfObj* obj);
int ev_pasthome_cm12_th_draw(sfObj* obj);
int ev_pasthome_cm12_th_end(sfObj* obj);
int ev_pasthome_cm12_ob_init(sfObj* obj);
int ev_pasthome_cm12_ob_exec(sfObj* obj);
int ev_pasthome_cm12_ob_draw(sfObj* obj);
int ev_pasthome_cm12_ob_end(sfObj* obj);
int ev_pasthome_cm24_th_init(sfObj* obj);
int ev_pasthome_cm24_th_exec(sfObj* obj);
int ev_pasthome_cm24_th_draw(sfObj* obj);
int ev_pasthome_cm24_th_end(sfObj* obj);
int ev_pasthome_cm24_wm_init(sfObj* obj);
int ev_pasthome_cm24_wm_exec(sfObj* obj);
int ev_pasthome_cm24_wm_draw(sfObj* obj);
int ev_pasthome_cm24_wm_end(sfObj* obj);
int ev_psthome0_203_trgchk();
int ev_psthome0_203_init();
int ev_psthome0_203_exec();
int ev_psthome0_203_end();
int ev_psthome0_curse_ringing_exec(sfObj* obj);
void wall_construct_cm01(_anon4* wk, int index);
void Cm01WallConstruct1(sfObj* obj);
void Cm01WallConstruct2(sfObj* obj);
void Cm01WallConstruct3(sfObj* obj);
void Cm01WallConstruct5(sfObj* obj);
void wall_construct_cm02(_anon4* wk, int index);
void Cm02WallConstruct1(sfObj* obj);
void Cm02WallConstruct2(sfObj* obj);
void Cm02WallConstruct3(sfObj* obj);
void Cm02WallConstruct4(sfObj* obj);
void wall_construct_cm03(_anon4* wk, int index);
void Cm03WallConstruct1(sfObj* obj);
void Cm03WallConstruct2(sfObj* obj);
void Cm03WallConstruct3(sfObj* obj);
void wall_construct_cm11(_anon4* wk, int index);
void Cm11WallConstruct1(sfObj* obj);
void Cm11WallConstruct2(sfObj* obj);
void Cm11WallConstruct3(sfObj* obj);
void Cm11WallConstruct4(sfObj* obj);
void wall_construct_cm12(_anon4* wk, int index);
void Cm12WallConstruct1(sfObj* obj);
void Cm12WallConstruct2(sfObj* obj);
void Cm12WallConstruct3(sfObj* obj);
void wall_construct_cm24(_anon4* wk, int index);
void Cm24WallConstruct1(sfObj* obj);
void Cm24WallConstruct2(sfObj* obj);
void Cm24WallConstruct3(sfObj* obj);
void Cm24WallConstruct4(sfObj* obj);
void CmWallExec(sfObj* obj);
void CmWallDestruct(sfObj* obj);
void CmWallDraw(sfObj* obj);

// 
// Start address: 0x1ed4e30
int ev_pasthome_bg_obj_init(sfObj* obj, int model_id, int emt_id, float* pos, float* rot)
{
	_evBgObj* wk;
	// Line 83, Address: 0x1ed4e30, Func Offset: 0
	// Line 89, Address: 0x1ed4e60, Func Offset: 0x30
	// Line 90, Address: 0x1ed4e70, Func Offset: 0x40
	// Line 95, Address: 0x1ed4e78, Func Offset: 0x48
	// Line 96, Address: 0x1ed4e80, Func Offset: 0x50
	// Line 97, Address: 0x1ed4e94, Func Offset: 0x64
	// Line 98, Address: 0x1ed4ea8, Func Offset: 0x78
	// Line 100, Address: 0x1ed4ec0, Func Offset: 0x90
	// Line 102, Address: 0x1ed4ec8, Func Offset: 0x98
	// Line 103, Address: 0x1ed4ecc, Func Offset: 0x9c
	// Line 104, Address: 0x1ed4ed8, Func Offset: 0xa8
	// Line 105, Address: 0x1ed4ee4, Func Offset: 0xb4
	// Line 109, Address: 0x1ed4ee8, Func Offset: 0xb8
	// Line 108, Address: 0x1ed4ef0, Func Offset: 0xc0
	// Line 109, Address: 0x1ed4ef4, Func Offset: 0xc4
	// Func End, Address: 0x1ed4f0c, Func Offset: 0xdc
}

// 
// Start address: 0x1ed4f10
int ev_pasthome_bg_obj_exec()
{
	// Line 997, Address: 0x1ed4f10, Func Offset: 0
	// Line 998, Address: 0x1ed4f38, Func Offset: 0x28
	// Func End, Address: 0x1ed4f40, Func Offset: 0x30
	// Line 571, Address: 0x1ed4f10, Func Offset: 0
	// Line 572, Address: 0x1ed4f1c, Func Offset: 0xc
	// Line 574, Address: 0x1ed4f24, Func Offset: 0x14
	// Line 575, Address: 0x1ed4f2c, Func Offset: 0x1c
	// Line 577, Address: 0x1ed4f30, Func Offset: 0x20
	// Line 576, Address: 0x1ed4f34, Func Offset: 0x24
	// Line 577, Address: 0x1ed4f38, Func Offset: 0x28
	// Func End, Address: 0x1ed4f40, Func Offset: 0x30
	// Line 113, Address: 0x1ed4f10, Func Offset: 0
	// Func End, Address: 0x1ed4f18, Func Offset: 0x8
}

// 
// Start address: 0x1ed4f20
int ev_pasthome_bg_obj_draw(sfObj* obj)
{
	// Line 115, Address: 0x1ed4f20, Func Offset: 0
	// Line 116, Address: 0x1ed4f2c, Func Offset: 0xc
	// Line 118, Address: 0x1ed4f34, Func Offset: 0x14
	// Line 119, Address: 0x1ed4f3c, Func Offset: 0x1c
	// Line 121, Address: 0x1ed4f40, Func Offset: 0x20
	// Line 120, Address: 0x1ed4f44, Func Offset: 0x24
	// Line 121, Address: 0x1ed4f48, Func Offset: 0x28
	// Func End, Address: 0x1ed4f50, Func Offset: 0x30
}

// 
// Start address: 0x1ed4f50
int ev_pasthome_bg_obj_end(sfObj* obj)
{
	// Line 551, Address: 0x1ed4f50, Func Offset: 0
	// Line 552, Address: 0x1ed4f5c, Func Offset: 0xc
	// Line 554, Address: 0x1ed4f64, Func Offset: 0x14
	// Line 555, Address: 0x1ed4f6c, Func Offset: 0x1c
	// Line 557, Address: 0x1ed4f70, Func Offset: 0x20
	// Line 556, Address: 0x1ed4f74, Func Offset: 0x24
	// Line 557, Address: 0x1ed4f78, Func Offset: 0x28
	// Func End, Address: 0x1ed4f80, Func Offset: 0x30
	// Line 123, Address: 0x1ed4f50, Func Offset: 0
	// Line 124, Address: 0x1ed4f5c, Func Offset: 0xc
	// Line 126, Address: 0x1ed4f64, Func Offset: 0x14
	// Line 127, Address: 0x1ed4f6c, Func Offset: 0x1c
	// Line 130, Address: 0x1ed4f70, Func Offset: 0x20
	// Line 128, Address: 0x1ed4f74, Func Offset: 0x24
	// Line 130, Address: 0x1ed4f78, Func Offset: 0x28
	// Func End, Address: 0x1ed4f80, Func Offset: 0x30
}

// 
// Start address: 0x1ed4f80
int ev_pasthome_bg_char_init(sfObj* obj, int model_id, int emt_id, int kage_id, int anim_id, float* pos, float* rot)
{
	_evBgchar* wk;
	// Line 559, Address: 0x1ed4f80, Func Offset: 0
	// Line 560, Address: 0x1ed4f90, Func Offset: 0x10
	// Line 562, Address: 0x1ed4f98, Func Offset: 0x18
	// Line 564, Address: 0x1ed4fa4, Func Offset: 0x24
	// Line 566, Address: 0x1ed4fb0, Func Offset: 0x30
	// Line 567, Address: 0x1ed4fb8, Func Offset: 0x38
	// Line 572, Address: 0x1ed4fc0, Func Offset: 0x40
	// Line 571, Address: 0x1ed4fc8, Func Offset: 0x48
	// Line 572, Address: 0x1ed4fcc, Func Offset: 0x4c
	// Func End, Address: 0x1ed4fd4, Func Offset: 0x54
	// Line 140, Address: 0x1ed4f80, Func Offset: 0
	// Line 146, Address: 0x1ed4fc0, Func Offset: 0x40
	// Line 147, Address: 0x1ed4fd4, Func Offset: 0x54
	// Line 151, Address: 0x1ed4fdc, Func Offset: 0x5c
	// Line 153, Address: 0x1ed5000, Func Offset: 0x80
	// Line 154, Address: 0x1ed500c, Func Offset: 0x8c
	// Line 156, Address: 0x1ed5018, Func Offset: 0x98
	// Line 157, Address: 0x1ed5020, Func Offset: 0xa0
	// Line 158, Address: 0x1ed5034, Func Offset: 0xb4
	// Line 160, Address: 0x1ed5038, Func Offset: 0xb8
	// Line 162, Address: 0x1ed5044, Func Offset: 0xc4
	// Line 163, Address: 0x1ed504c, Func Offset: 0xcc
	// Line 164, Address: 0x1ed5060, Func Offset: 0xe0
	// Line 165, Address: 0x1ed5068, Func Offset: 0xe8
	// Line 167, Address: 0x1ed506c, Func Offset: 0xec
	// Line 171, Address: 0x1ed5070, Func Offset: 0xf0
	// Line 170, Address: 0x1ed5078, Func Offset: 0xf8
	// Line 171, Address: 0x1ed507c, Func Offset: 0xfc
	// Func End, Address: 0x1ed50a0, Func Offset: 0x120
}

// 
// Start address: 0x1ed50a0
int ev_pasthome_bg_char_exec()
{
	// Line 826, Address: 0x1ed50a0, Func Offset: 0
	// Line 827, Address: 0x1ed50b8, Func Offset: 0x18
	// Line 830, Address: 0x1ed50c0, Func Offset: 0x20
	// Line 832, Address: 0x1ed5108, Func Offset: 0x68
	// Line 835, Address: 0x1ed511c, Func Offset: 0x7c
	// Line 837, Address: 0x1ed5128, Func Offset: 0x88
	// Line 839, Address: 0x1ed512c, Func Offset: 0x8c
	// Line 841, Address: 0x1ed5134, Func Offset: 0x94
	// Line 843, Address: 0x1ed5138, Func Offset: 0x98
	// Line 845, Address: 0x1ed514c, Func Offset: 0xac
	// Line 846, Address: 0x1ed5154, Func Offset: 0xb4
	// Line 848, Address: 0x1ed515c, Func Offset: 0xbc
	// Line 849, Address: 0x1ed5164, Func Offset: 0xc4
	// Line 851, Address: 0x1ed5168, Func Offset: 0xc8
	// Line 853, Address: 0x1ed5178, Func Offset: 0xd8
	// Line 855, Address: 0x1ed5194, Func Offset: 0xf4
	// Line 856, Address: 0x1ed5198, Func Offset: 0xf8
	// Line 858, Address: 0x1ed51a0, Func Offset: 0x100
	// Line 861, Address: 0x1ed51a8, Func Offset: 0x108
	// Line 873, Address: 0x1ed51ac, Func Offset: 0x10c
	// Line 862, Address: 0x1ed51b0, Func Offset: 0x110
	// Line 873, Address: 0x1ed51b4, Func Offset: 0x114
	// Line 861, Address: 0x1ed51b8, Func Offset: 0x118
	// Line 873, Address: 0x1ed51bc, Func Offset: 0x11c
	// Line 875, Address: 0x1ed51d0, Func Offset: 0x130
	// Line 876, Address: 0x1ed51d8, Func Offset: 0x138
	// Line 878, Address: 0x1ed51f4, Func Offset: 0x154
	// Line 879, Address: 0x1ed5204, Func Offset: 0x164
	// Line 882, Address: 0x1ed5218, Func Offset: 0x178
	// Line 884, Address: 0x1ed5228, Func Offset: 0x188
	// Line 886, Address: 0x1ed5230, Func Offset: 0x190
	// Line 889, Address: 0x1ed5238, Func Offset: 0x198
	// Line 890, Address: 0x1ed5248, Func Offset: 0x1a8
	// Line 901, Address: 0x1ed5250, Func Offset: 0x1b0
	// Line 900, Address: 0x1ed5258, Func Offset: 0x1b8
	// Line 901, Address: 0x1ed525c, Func Offset: 0x1bc
	// Func End, Address: 0x1ed526c, Func Offset: 0x1cc
	// Line 175, Address: 0x1ed50a0, Func Offset: 0
	// Func End, Address: 0x1ed50a8, Func Offset: 0x8
}

// 
// Start address: 0x1ed50b0
int ev_pasthome_bg_char_draw()
{
	// Line 659, Address: 0x1ed50b0, Func Offset: 0
	// Func End, Address: 0x1ed50b8, Func Offset: 0x8
	// Line 179, Address: 0x1ed50b0, Func Offset: 0
	// Func End, Address: 0x1ed50b8, Func Offset: 0x8
}

// 
// Start address: 0x1ed50c0
int ev_pasthome_bg_char_end(sfObj* obj)
{
	_evBgchar* wk;
	// Line 808, Address: 0x1ed50c0, Func Offset: 0
	// Line 809, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 808, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 811, Address: 0x1ed50d8, Func Offset: 0x18
	// Line 815, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 822, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 823, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 822, Address: 0x1ed50f8, Func Offset: 0x38
	// Line 823, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 827, Address: 0x1ed5128, Func Offset: 0x68
	// Line 829, Address: 0x1ed5130, Func Offset: 0x70
	// Line 828, Address: 0x1ed5134, Func Offset: 0x74
	// Line 829, Address: 0x1ed5138, Func Offset: 0x78
	// Line 828, Address: 0x1ed513c, Func Offset: 0x7c
	// Line 827, Address: 0x1ed5144, Func Offset: 0x84
	// Line 830, Address: 0x1ed5148, Func Offset: 0x88
	// Line 834, Address: 0x1ed5150, Func Offset: 0x90
	// Line 836, Address: 0x1ed5158, Func Offset: 0x98
	// Line 835, Address: 0x1ed515c, Func Offset: 0x9c
	// Line 836, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 835, Address: 0x1ed5164, Func Offset: 0xa4
	// Line 834, Address: 0x1ed516c, Func Offset: 0xac
	// Line 835, Address: 0x1ed5174, Func Offset: 0xb4
	// Line 840, Address: 0x1ed5178, Func Offset: 0xb8
	// Line 842, Address: 0x1ed5188, Func Offset: 0xc8
	// Line 843, Address: 0x1ed5194, Func Offset: 0xd4
	// Line 845, Address: 0x1ed5198, Func Offset: 0xd8
	// Line 846, Address: 0x1ed51ac, Func Offset: 0xec
	// Line 849, Address: 0x1ed51b0, Func Offset: 0xf0
	// Line 850, Address: 0x1ed51b4, Func Offset: 0xf4
	// Func End, Address: 0x1ed51d0, Func Offset: 0x110
	// Line 672, Address: 0x1ed50c0, Func Offset: 0
	// Line 673, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 672, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 673, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 674, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 675, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 676, Address: 0x1ed5104, Func Offset: 0x44
	// Line 677, Address: 0x1ed510c, Func Offset: 0x4c
	// Line 679, Address: 0x1ed5110, Func Offset: 0x50
	// Line 681, Address: 0x1ed5118, Func Offset: 0x58
	// Line 682, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 683, Address: 0x1ed5134, Func Offset: 0x74
	// Line 688, Address: 0x1ed5138, Func Offset: 0x78
	// Line 687, Address: 0x1ed5140, Func Offset: 0x80
	// Line 688, Address: 0x1ed5144, Func Offset: 0x84
	// Func End, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 652, Address: 0x1ed50c0, Func Offset: 0
	// Line 658, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 652, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 658, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 659, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 663, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 665, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 663, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 665, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 666, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 667, Address: 0x1ed5114, Func Offset: 0x54
	// Line 668, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 669, Address: 0x1ed5144, Func Offset: 0x84
	// Line 670, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 672, Address: 0x1ed5154, Func Offset: 0x94
	// Line 675, Address: 0x1ed5158, Func Offset: 0x98
	// Line 674, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 675, Address: 0x1ed5164, Func Offset: 0xa4
	// Func End, Address: 0x1ed516c, Func Offset: 0xac
	// Line 181, Address: 0x1ed50c0, Func Offset: 0
	// Line 182, Address: 0x1ed50cc, Func Offset: 0xc
	// Line 183, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 184, Address: 0x1ed50dc, Func Offset: 0x1c
	// Line 185, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 188, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 186, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 188, Address: 0x1ed50f8, Func Offset: 0x38
	// Func End, Address: 0x1ed5104, Func Offset: 0x44
}

// 
// Start address: 0x1ed5110
int ev_pasthome_cm24_to_3ldk_end()
{
	float pos[4];
	// Line 211, Address: 0x1ed5110, Func Offset: 0
	// Line 212, Address: 0x1ed5114, Func Offset: 0x4
	// Line 211, Address: 0x1ed5118, Func Offset: 0x8
	// Line 212, Address: 0x1ed511c, Func Offset: 0xc
	// Line 213, Address: 0x1ed5128, Func Offset: 0x18
	// Line 214, Address: 0x1ed5138, Func Offset: 0x28
	// Line 215, Address: 0x1ed514c, Func Offset: 0x3c
	// Line 218, Address: 0x1ed5170, Func Offset: 0x60
	// Line 219, Address: 0x1ed5178, Func Offset: 0x68
	// Line 221, Address: 0x1ed5180, Func Offset: 0x70
	// Line 225, Address: 0x1ed5188, Func Offset: 0x78
	// Line 227, Address: 0x1ed5190, Func Offset: 0x80
	// Line 229, Address: 0x1ed5198, Func Offset: 0x88
	// Line 228, Address: 0x1ed519c, Func Offset: 0x8c
	// Line 229, Address: 0x1ed51a0, Func Offset: 0x90
	// Func End, Address: 0x1ed51a8, Func Offset: 0x98
}

// 
// Start address: 0x1ed51b0
int ev_pasthome_cm16_ch00_init(sfObj* obj)
{
	_evBgCharData dat;
	float pos[4];
	float rot[4];
	// Line 1125, Address: 0x1ed51b0, Func Offset: 0
	// Line 1126, Address: 0x1ed51b4, Func Offset: 0x4
	// Line 1125, Address: 0x1ed51b8, Func Offset: 0x8
	// Line 1126, Address: 0x1ed51c0, Func Offset: 0x10
	// Line 1127, Address: 0x1ed51cc, Func Offset: 0x1c
	// Line 1128, Address: 0x1ed51e0, Func Offset: 0x30
	// Line 1130, Address: 0x1ed51e8, Func Offset: 0x38
	// Line 1129, Address: 0x1ed51ec, Func Offset: 0x3c
	// Line 1130, Address: 0x1ed51f0, Func Offset: 0x40
	// Func End, Address: 0x1ed51fc, Func Offset: 0x4c
	// Line 245, Address: 0x1ed51b0, Func Offset: 0
	// Line 246, Address: 0x1ed51b4, Func Offset: 0x4
	// Line 245, Address: 0x1ed51b8, Func Offset: 0x8
	// Line 247, Address: 0x1ed51bc, Func Offset: 0xc
	// Line 245, Address: 0x1ed51c0, Func Offset: 0x10
	// Line 246, Address: 0x1ed51c4, Func Offset: 0x14
	// Line 247, Address: 0x1ed51d0, Func Offset: 0x20
	// Line 248, Address: 0x1ed51d8, Func Offset: 0x28
	// Line 246, Address: 0x1ed51e0, Func Offset: 0x30
	// Line 248, Address: 0x1ed51e4, Func Offset: 0x34
	// Line 247, Address: 0x1ed51e8, Func Offset: 0x38
	// Line 248, Address: 0x1ed51ec, Func Offset: 0x3c
	// Line 247, Address: 0x1ed51f0, Func Offset: 0x40
	// Line 248, Address: 0x1ed51f4, Func Offset: 0x44
	// Line 250, Address: 0x1ed51f8, Func Offset: 0x48
	// Line 251, Address: 0x1ed5200, Func Offset: 0x50
	// Line 252, Address: 0x1ed520c, Func Offset: 0x5c
	// Line 262, Address: 0x1ed5218, Func Offset: 0x68
	// Line 261, Address: 0x1ed521c, Func Offset: 0x6c
	// Line 262, Address: 0x1ed5220, Func Offset: 0x70
	// Func End, Address: 0x1ed522c, Func Offset: 0x7c
}

// 
// Start address: 0x1ed5230
int ev_pasthome_cm16_ch00_exec(sfObj* obj)
{
	// Line 264, Address: 0x1ed5230, Func Offset: 0
	// Line 265, Address: 0x1ed5238, Func Offset: 0x8
	// Line 274, Address: 0x1ed5240, Func Offset: 0x10
	// Line 273, Address: 0x1ed5244, Func Offset: 0x14
	// Line 274, Address: 0x1ed5248, Func Offset: 0x18
	// Func End, Address: 0x1ed5250, Func Offset: 0x20
}

// 
// Start address: 0x1ed5250
int ev_pasthome_cm16_ch00_draw(sfObj* obj)
{
	// Line 276, Address: 0x1ed5250, Func Offset: 0
	// Line 277, Address: 0x1ed5258, Func Offset: 0x8
	// Line 289, Address: 0x1ed5260, Func Offset: 0x10
	// Line 288, Address: 0x1ed5264, Func Offset: 0x14
	// Line 289, Address: 0x1ed5268, Func Offset: 0x18
	// Func End, Address: 0x1ed5270, Func Offset: 0x20
}

// 
// Start address: 0x1ed5270
int ev_pasthome_cm16_ch00_end(sfObj* obj)
{
	// Line 883, Address: 0x1ed5270, Func Offset: 0
	// Line 884, Address: 0x1ed5278, Func Offset: 0x8
	// Line 885, Address: 0x1ed5280, Func Offset: 0x10
	// Line 888, Address: 0x1ed5288, Func Offset: 0x18
	// Line 894, Address: 0x1ed528c, Func Offset: 0x1c
	// Line 888, Address: 0x1ed52b0, Func Offset: 0x40
	// Line 889, Address: 0x1ed52b4, Func Offset: 0x44
	// Line 890, Address: 0x1ed52bc, Func Offset: 0x4c
	// Line 894, Address: 0x1ed52c4, Func Offset: 0x54
	// Line 895, Address: 0x1ed52cc, Func Offset: 0x5c
	// Line 897, Address: 0x1ed52d0, Func Offset: 0x60
	// Func End, Address: 0x1ed52dc, Func Offset: 0x6c
	// Line 904, Address: 0x1ed5270, Func Offset: 0
	// Line 905, Address: 0x1ed527c, Func Offset: 0xc
	// Line 908, Address: 0x1ed5284, Func Offset: 0x14
	// Line 909, Address: 0x1ed528c, Func Offset: 0x1c
	// Line 911, Address: 0x1ed5290, Func Offset: 0x20
	// Line 910, Address: 0x1ed5294, Func Offset: 0x24
	// Line 911, Address: 0x1ed5298, Func Offset: 0x28
	// Func End, Address: 0x1ed52a0, Func Offset: 0x30
	// Line 291, Address: 0x1ed5270, Func Offset: 0
	// Line 292, Address: 0x1ed5278, Func Offset: 0x8
	// Line 301, Address: 0x1ed5280, Func Offset: 0x10
	// Line 300, Address: 0x1ed5284, Func Offset: 0x14
	// Line 301, Address: 0x1ed5288, Func Offset: 0x18
	// Func End, Address: 0x1ed5290, Func Offset: 0x20
}

// 
// Start address: 0x1ed5290
int ev_pasthome_cm_father_init(sfObj* obj)
{
	_anon1* fd;
	_sfEvFather* wk;
	_anon0* pol;
	float r;
	// Line 381, Address: 0x1ed5290, Func Offset: 0
	// Line 382, Address: 0x1ed5294, Func Offset: 0x4
	// Line 381, Address: 0x1ed5298, Func Offset: 0x8
	// Line 382, Address: 0x1ed529c, Func Offset: 0xc
	// Line 381, Address: 0x1ed52a0, Func Offset: 0x10
	// Line 388, Address: 0x1ed52a4, Func Offset: 0x14
	// Line 381, Address: 0x1ed52a8, Func Offset: 0x18
	// Line 382, Address: 0x1ed52b8, Func Offset: 0x28
	// Line 388, Address: 0x1ed52c0, Func Offset: 0x30
	// Line 390, Address: 0x1ed52cc, Func Offset: 0x3c
	// Line 389, Address: 0x1ed52d8, Func Offset: 0x48
	// Line 392, Address: 0x1ed52dc, Func Offset: 0x4c
	// Line 394, Address: 0x1ed52e0, Func Offset: 0x50
	// Line 390, Address: 0x1ed52f0, Func Offset: 0x60
	// Line 391, Address: 0x1ed52fc, Func Offset: 0x6c
	// Line 392, Address: 0x1ed5300, Func Offset: 0x70
	// Line 394, Address: 0x1ed5304, Func Offset: 0x74
	// Line 397, Address: 0x1ed5314, Func Offset: 0x84
	// Line 398, Address: 0x1ed533c, Func Offset: 0xac
	// Line 399, Address: 0x1ed534c, Func Offset: 0xbc
	// Line 401, Address: 0x1ed5358, Func Offset: 0xc8
	// Line 399, Address: 0x1ed535c, Func Offset: 0xcc
	// Line 402, Address: 0x1ed5368, Func Offset: 0xd8
	// Func End, Address: 0x1ed5384, Func Offset: 0xf4
}

// 
// Start address: 0x1ed5390
void ev_pasthome_cm_father_set_transparency(sfObj* obj)
{
	_sfEvFather* wk;
	int a;
	// Line 152, Address: 0x1ed5390, Func Offset: 0
	// Line 155, Address: 0x1ed5394, Func Offset: 0x4
	// Line 152, Address: 0x1ed5398, Func Offset: 0x8
	// Line 155, Address: 0x1ed53a8, Func Offset: 0x18
	// Line 157, Address: 0x1ed53d0, Func Offset: 0x40
	// Line 158, Address: 0x1ed53d4, Func Offset: 0x44
	// Line 159, Address: 0x1ed53dc, Func Offset: 0x4c
	// Line 160, Address: 0x1ed53e8, Func Offset: 0x58
	// Line 161, Address: 0x1ed53f0, Func Offset: 0x60
	// Line 163, Address: 0x1ed53f8, Func Offset: 0x68
	// Line 164, Address: 0x1ed5408, Func Offset: 0x78
	// Line 165, Address: 0x1ed5410, Func Offset: 0x80
	// Line 166, Address: 0x1ed5418, Func Offset: 0x88
	// Line 167, Address: 0x1ed5424, Func Offset: 0x94
	// Line 168, Address: 0x1ed5428, Func Offset: 0x98
	// Line 169, Address: 0x1ed5430, Func Offset: 0xa0
	// Line 171, Address: 0x1ed5438, Func Offset: 0xa8
	// Line 186, Address: 0x1ed5440, Func Offset: 0xb0
	// Line 187, Address: 0x1ed5450, Func Offset: 0xc0
	// Line 188, Address: 0x1ed5494, Func Offset: 0x104
	// Line 189, Address: 0x1ed5498, Func Offset: 0x108
	// Line 190, Address: 0x1ed54b0, Func Offset: 0x120
	// Line 191, Address: 0x1ed54d4, Func Offset: 0x144
	// Line 193, Address: 0x1ed54d8, Func Offset: 0x148
	// Line 194, Address: 0x1ed54e8, Func Offset: 0x158
	// Line 195, Address: 0x1ed54f8, Func Offset: 0x168
	// Line 196, Address: 0x1ed5500, Func Offset: 0x170
	// Line 201, Address: 0x1ed550c, Func Offset: 0x17c
	// Line 203, Address: 0x1ed5510, Func Offset: 0x180
	// Line 204, Address: 0x1ed5514, Func Offset: 0x184
	// Func End, Address: 0x1ed5528, Func Offset: 0x198
	// Line 949, Address: 0x1ed5390, Func Offset: 0
	// Line 954, Address: 0x1ed5394, Func Offset: 0x4
	// Line 949, Address: 0x1ed5398, Func Offset: 0x8
	// Line 954, Address: 0x1ed53a8, Func Offset: 0x18
	// Line 956, Address: 0x1ed53cc, Func Offset: 0x3c
	// Line 958, Address: 0x1ed53d8, Func Offset: 0x48
	// Line 956, Address: 0x1ed53e0, Func Offset: 0x50
	// Line 958, Address: 0x1ed53e8, Func Offset: 0x58
	// Line 959, Address: 0x1ed53f0, Func Offset: 0x60
	// Line 960, Address: 0x1ed53f8, Func Offset: 0x68
	// Line 963, Address: 0x1ed5400, Func Offset: 0x70
	// Line 964, Address: 0x1ed5410, Func Offset: 0x80
	// Line 968, Address: 0x1ed5418, Func Offset: 0x88
	// Line 969, Address: 0x1ed541c, Func Offset: 0x8c
	// Line 971, Address: 0x1ed5424, Func Offset: 0x94
	// Line 975, Address: 0x1ed5450, Func Offset: 0xc0
	// Line 976, Address: 0x1ed546c, Func Offset: 0xdc
	// Line 977, Address: 0x1ed5478, Func Offset: 0xe8
	// Line 979, Address: 0x1ed5488, Func Offset: 0xf8
	// Line 980, Address: 0x1ed5494, Func Offset: 0x104
	// Line 981, Address: 0x1ed549c, Func Offset: 0x10c
	// Line 982, Address: 0x1ed54b4, Func Offset: 0x124
	// Line 984, Address: 0x1ed54b8, Func Offset: 0x128
	// Line 987, Address: 0x1ed54c4, Func Offset: 0x134
	// Line 988, Address: 0x1ed54cc, Func Offset: 0x13c
	// Line 990, Address: 0x1ed54d8, Func Offset: 0x148
	// Line 992, Address: 0x1ed54e0, Func Offset: 0x150
	// Line 994, Address: 0x1ed54e8, Func Offset: 0x158
	// Func End, Address: 0x1ed5500, Func Offset: 0x170
	// Line 414, Address: 0x1ed5390, Func Offset: 0
	// Line 417, Address: 0x1ed5394, Func Offset: 0x4
	// Line 418, Address: 0x1ed53b0, Func Offset: 0x20
	// Func End, Address: 0x1ed53c4, Func Offset: 0x34
}

// 
// Start address: 0x1ed53d0
void ev_pasthome_cm_father_reset_transparency()
{
	// Line 627, Address: 0x1ed53d0, Func Offset: 0
	// Line 638, Address: 0x1ed53f0, Func Offset: 0x20
	// Line 633, Address: 0x1ed53f4, Func Offset: 0x24
	// Line 637, Address: 0x1ed53f8, Func Offset: 0x28
	// Line 638, Address: 0x1ed53fc, Func Offset: 0x2c
	// Line 640, Address: 0x1ed5424, Func Offset: 0x54
	// Line 642, Address: 0x1ed5428, Func Offset: 0x58
	// Line 646, Address: 0x1ed5438, Func Offset: 0x68
	// Line 648, Address: 0x1ed5440, Func Offset: 0x70
	// Line 649, Address: 0x1ed544c, Func Offset: 0x7c
	// Line 652, Address: 0x1ed5450, Func Offset: 0x80
	// Line 649, Address: 0x1ed5454, Func Offset: 0x84
	// Line 650, Address: 0x1ed5458, Func Offset: 0x88
	// Line 652, Address: 0x1ed545c, Func Offset: 0x8c
	// Line 650, Address: 0x1ed5460, Func Offset: 0x90
	// Line 652, Address: 0x1ed5464, Func Offset: 0x94
	// Line 650, Address: 0x1ed5470, Func Offset: 0xa0
	// Line 652, Address: 0x1ed5478, Func Offset: 0xa8
	// Line 653, Address: 0x1ed5480, Func Offset: 0xb0
	// Line 655, Address: 0x1ed5488, Func Offset: 0xb8
	// Line 656, Address: 0x1ed5490, Func Offset: 0xc0
	// Line 658, Address: 0x1ed54a0, Func Offset: 0xd0
	// Line 661, Address: 0x1ed54a8, Func Offset: 0xd8
	// Line 662, Address: 0x1ed54b4, Func Offset: 0xe4
	// Line 661, Address: 0x1ed54b8, Func Offset: 0xe8
	// Line 662, Address: 0x1ed54c8, Func Offset: 0xf8
	// Line 661, Address: 0x1ed54cc, Func Offset: 0xfc
	// Line 662, Address: 0x1ed54d0, Func Offset: 0x100
	// Line 661, Address: 0x1ed54d4, Func Offset: 0x104
	// Line 662, Address: 0x1ed54dc, Func Offset: 0x10c
	// Line 663, Address: 0x1ed54e0, Func Offset: 0x110
	// Line 665, Address: 0x1ed54e4, Func Offset: 0x114
	// Line 664, Address: 0x1ed54e8, Func Offset: 0x118
	// Line 665, Address: 0x1ed54ec, Func Offset: 0x11c
	// Line 666, Address: 0x1ed54f8, Func Offset: 0x128
	// Line 665, Address: 0x1ed54fc, Func Offset: 0x12c
	// Line 668, Address: 0x1ed5500, Func Offset: 0x130
	// Line 665, Address: 0x1ed5504, Func Offset: 0x134
	// Line 668, Address: 0x1ed550c, Func Offset: 0x13c
	// Line 665, Address: 0x1ed5514, Func Offset: 0x144
	// Line 668, Address: 0x1ed5518, Func Offset: 0x148
	// Line 665, Address: 0x1ed551c, Func Offset: 0x14c
	// Line 668, Address: 0x1ed5520, Func Offset: 0x150
	// Line 665, Address: 0x1ed5524, Func Offset: 0x154
	// Line 668, Address: 0x1ed5528, Func Offset: 0x158
	// Line 665, Address: 0x1ed552c, Func Offset: 0x15c
	// Line 668, Address: 0x1ed5534, Func Offset: 0x164
	// Line 672, Address: 0x1ed5540, Func Offset: 0x170
	// Line 673, Address: 0x1ed554c, Func Offset: 0x17c
	// Line 672, Address: 0x1ed5550, Func Offset: 0x180
	// Line 674, Address: 0x1ed5554, Func Offset: 0x184
	// Line 675, Address: 0x1ed5570, Func Offset: 0x1a0
	// Line 676, Address: 0x1ed55b0, Func Offset: 0x1e0
	// Line 675, Address: 0x1ed55b4, Func Offset: 0x1e4
	// Line 676, Address: 0x1ed55c8, Func Offset: 0x1f8
	// Line 678, Address: 0x1ed55e0, Func Offset: 0x210
	// Line 679, Address: 0x1ed5618, Func Offset: 0x248
	// Line 678, Address: 0x1ed561c, Func Offset: 0x24c
	// Line 680, Address: 0x1ed5620, Func Offset: 0x250
	// Line 684, Address: 0x1ed5628, Func Offset: 0x258
	// Line 685, Address: 0x1ed5638, Func Offset: 0x268
	// Line 686, Address: 0x1ed5644, Func Offset: 0x274
	// Line 685, Address: 0x1ed5648, Func Offset: 0x278
	// Line 686, Address: 0x1ed564c, Func Offset: 0x27c
	// Line 685, Address: 0x1ed5654, Func Offset: 0x284
	// Line 686, Address: 0x1ed5660, Func Offset: 0x290
	// Line 687, Address: 0x1ed5678, Func Offset: 0x2a8
	// Line 689, Address: 0x1ed567c, Func Offset: 0x2ac
	// Line 690, Address: 0x1ed5688, Func Offset: 0x2b8
	// Line 691, Address: 0x1ed56a4, Func Offset: 0x2d4
	// Line 693, Address: 0x1ed56ac, Func Offset: 0x2dc
	// Line 695, Address: 0x1ed56b0, Func Offset: 0x2e0
	// Line 696, Address: 0x1ed56c4, Func Offset: 0x2f4
	// Line 697, Address: 0x1ed5710, Func Offset: 0x340
	// Line 698, Address: 0x1ed571c, Func Offset: 0x34c
	// Line 697, Address: 0x1ed5720, Func Offset: 0x350
	// Line 698, Address: 0x1ed5724, Func Offset: 0x354
	// Line 697, Address: 0x1ed5728, Func Offset: 0x358
	// Line 698, Address: 0x1ed5734, Func Offset: 0x364
	// Line 700, Address: 0x1ed5750, Func Offset: 0x380
	// Line 701, Address: 0x1ed577c, Func Offset: 0x3ac
	// Line 703, Address: 0x1ed5784, Func Offset: 0x3b4
	// Line 706, Address: 0x1ed5790, Func Offset: 0x3c0
	// Line 704, Address: 0x1ed5798, Func Offset: 0x3c8
	// Line 706, Address: 0x1ed579c, Func Offset: 0x3cc
	// Line 707, Address: 0x1ed57a8, Func Offset: 0x3d8
	// Line 708, Address: 0x1ed57b0, Func Offset: 0x3e0
	// Line 710, Address: 0x1ed57b4, Func Offset: 0x3e4
	// Line 713, Address: 0x1ed57bc, Func Offset: 0x3ec
	// Line 715, Address: 0x1ed57c0, Func Offset: 0x3f0
	// Line 714, Address: 0x1ed57c8, Func Offset: 0x3f8
	// Line 715, Address: 0x1ed57cc, Func Offset: 0x3fc
	// Line 717, Address: 0x1ed57d8, Func Offset: 0x408
	// Line 722, Address: 0x1ed57e0, Func Offset: 0x410
	// Line 723, Address: 0x1ed5800, Func Offset: 0x430
	// Line 724, Address: 0x1ed5840, Func Offset: 0x470
	// Line 725, Address: 0x1ed5848, Func Offset: 0x478
	// Line 726, Address: 0x1ed5864, Func Offset: 0x494
	// Line 727, Address: 0x1ed58ac, Func Offset: 0x4dc
	// Line 730, Address: 0x1ed58b0, Func Offset: 0x4e0
	// Line 728, Address: 0x1ed58b4, Func Offset: 0x4e4
	// Line 730, Address: 0x1ed58bc, Func Offset: 0x4ec
	// Line 728, Address: 0x1ed58c4, Func Offset: 0x4f4
	// Line 730, Address: 0x1ed58c8, Func Offset: 0x4f8
	// Line 731, Address: 0x1ed58d4, Func Offset: 0x504
	// Line 732, Address: 0x1ed58d8, Func Offset: 0x508
	// Line 735, Address: 0x1ed58e0, Func Offset: 0x510
	// Line 739, Address: 0x1ed58e8, Func Offset: 0x518
	// Line 740, Address: 0x1ed5908, Func Offset: 0x538
	// Line 741, Address: 0x1ed5948, Func Offset: 0x578
	// Line 742, Address: 0x1ed5950, Func Offset: 0x580
	// Line 743, Address: 0x1ed596c, Func Offset: 0x59c
	// Line 744, Address: 0x1ed59b4, Func Offset: 0x5e4
	// Line 745, Address: 0x1ed59b8, Func Offset: 0x5e8
	// Line 746, Address: 0x1ed59c0, Func Offset: 0x5f0
	// Line 745, Address: 0x1ed59c8, Func Offset: 0x5f8
	// Line 746, Address: 0x1ed59cc, Func Offset: 0x5fc
	// Line 747, Address: 0x1ed59d8, Func Offset: 0x608
	// Line 748, Address: 0x1ed59dc, Func Offset: 0x60c
	// Line 749, Address: 0x1ed59e4, Func Offset: 0x614
	// Line 755, Address: 0x1ed59e8, Func Offset: 0x618
	// Line 756, Address: 0x1ed59f0, Func Offset: 0x620
	// Line 759, Address: 0x1ed5a1c, Func Offset: 0x64c
	// Line 762, Address: 0x1ed5a20, Func Offset: 0x650
	// Line 763, Address: 0x1ed5a2c, Func Offset: 0x65c
	// Line 767, Address: 0x1ed5a3c, Func Offset: 0x66c
	// Line 764, Address: 0x1ed5a40, Func Offset: 0x670
	// Line 772, Address: 0x1ed5a48, Func Offset: 0x678
	// Line 767, Address: 0x1ed5a4c, Func Offset: 0x67c
	// Line 772, Address: 0x1ed5a58, Func Offset: 0x688
	// Line 773, Address: 0x1ed5a60, Func Offset: 0x690
	// Line 778, Address: 0x1ed5a6c, Func Offset: 0x69c
	// Line 780, Address: 0x1ed5a70, Func Offset: 0x6a0
	// Line 783, Address: 0x1ed5a78, Func Offset: 0x6a8
	// Line 786, Address: 0x1ed5a84, Func Offset: 0x6b4
	// Line 828, Address: 0x1ed5a8c, Func Offset: 0x6bc
	// Line 827, Address: 0x1ed5a98, Func Offset: 0x6c8
	// Line 828, Address: 0x1ed5a9c, Func Offset: 0x6cc
	// Func End, Address: 0x1ed5ab0, Func Offset: 0x6e0
	// Line 423, Address: 0x1ed53d0, Func Offset: 0
	// Line 425, Address: 0x1ed53d8, Func Offset: 0x8
	// Line 426, Address: 0x1ed53e0, Func Offset: 0x10
	// Line 427, Address: 0x1ed53e8, Func Offset: 0x18
	// Func End, Address: 0x1ed53f4, Func Offset: 0x24
}

// 
// Start address: 0x1ed5400
int ev_pasthome_cm_father_exec(sfObj* obj)
{
	_sfEvFather* wk;
	_anon1* fd;
	float pos[4];
	float r;
	// Line 811, Address: 0x1ed5400, Func Offset: 0
	// Line 812, Address: 0x1ed5404, Func Offset: 0x4
	// Line 811, Address: 0x1ed5408, Func Offset: 0x8
	// Line 813, Address: 0x1ed540c, Func Offset: 0xc
	// Line 811, Address: 0x1ed5410, Func Offset: 0x10
	// Line 812, Address: 0x1ed5414, Func Offset: 0x14
	// Line 813, Address: 0x1ed5420, Func Offset: 0x20
	// Line 812, Address: 0x1ed5424, Func Offset: 0x24
	// Line 813, Address: 0x1ed542c, Func Offset: 0x2c
	// Line 812, Address: 0x1ed5430, Func Offset: 0x30
	// Line 813, Address: 0x1ed5434, Func Offset: 0x34
	// Line 814, Address: 0x1ed543c, Func Offset: 0x3c
	// Line 815, Address: 0x1ed5444, Func Offset: 0x44
	// Line 816, Address: 0x1ed544c, Func Offset: 0x4c
	// Line 815, Address: 0x1ed5450, Func Offset: 0x50
	// Line 817, Address: 0x1ed5454, Func Offset: 0x54
	// Line 818, Address: 0x1ed545c, Func Offset: 0x5c
	// Line 820, Address: 0x1ed54a0, Func Offset: 0xa0
	// Line 823, Address: 0x1ed54a8, Func Offset: 0xa8
	// Line 824, Address: 0x1ed54b0, Func Offset: 0xb0
	// Line 825, Address: 0x1ed54b8, Func Offset: 0xb8
	// Func End, Address: 0x1ed54c8, Func Offset: 0xc8
	// Line 430, Address: 0x1ed5400, Func Offset: 0
	// Line 432, Address: 0x1ed5404, Func Offset: 0x4
	// Line 430, Address: 0x1ed5408, Func Offset: 0x8
	// Line 432, Address: 0x1ed540c, Func Offset: 0xc
	// Line 430, Address: 0x1ed5410, Func Offset: 0x10
	// Line 432, Address: 0x1ed5420, Func Offset: 0x20
	// Line 434, Address: 0x1ed5424, Func Offset: 0x24
	// Line 431, Address: 0x1ed5428, Func Offset: 0x28
	// Line 432, Address: 0x1ed542c, Func Offset: 0x2c
	// Line 434, Address: 0x1ed5430, Func Offset: 0x30
	// Line 436, Address: 0x1ed5458, Func Offset: 0x58
	// Line 437, Address: 0x1ed5464, Func Offset: 0x64
	// Line 438, Address: 0x1ed549c, Func Offset: 0x9c
	// Line 439, Address: 0x1ed54a0, Func Offset: 0xa0
	// Line 440, Address: 0x1ed54a4, Func Offset: 0xa4
	// Line 441, Address: 0x1ed54ac, Func Offset: 0xac
	// Line 442, Address: 0x1ed54b0, Func Offset: 0xb0
	// Line 443, Address: 0x1ed54b8, Func Offset: 0xb8
	// Line 444, Address: 0x1ed54c0, Func Offset: 0xc0
	// Line 445, Address: 0x1ed54cc, Func Offset: 0xcc
	// Line 446, Address: 0x1ed54d0, Func Offset: 0xd0
	// Line 447, Address: 0x1ed54d4, Func Offset: 0xd4
	// Line 448, Address: 0x1ed54e0, Func Offset: 0xe0
	// Line 447, Address: 0x1ed54ec, Func Offset: 0xec
	// Line 448, Address: 0x1ed54f0, Func Offset: 0xf0
	// Line 449, Address: 0x1ed54fc, Func Offset: 0xfc
	// Line 450, Address: 0x1ed552c, Func Offset: 0x12c
	// Line 452, Address: 0x1ed5534, Func Offset: 0x134
	// Line 453, Address: 0x1ed5560, Func Offset: 0x160
	// Line 455, Address: 0x1ed556c, Func Offset: 0x16c
	// Line 456, Address: 0x1ed5574, Func Offset: 0x174
	// Line 458, Address: 0x1ed5580, Func Offset: 0x180
	// Line 459, Address: 0x1ed558c, Func Offset: 0x18c
	// Line 460, Address: 0x1ed5594, Func Offset: 0x194
	// Line 475, Address: 0x1ed559c, Func Offset: 0x19c
	// Line 477, Address: 0x1ed55a8, Func Offset: 0x1a8
	// Line 475, Address: 0x1ed55ac, Func Offset: 0x1ac
	// Line 477, Address: 0x1ed55b8, Func Offset: 0x1b8
	// Line 479, Address: 0x1ed55bc, Func Offset: 0x1bc
	// Line 480, Address: 0x1ed55c0, Func Offset: 0x1c0
	// Line 481, Address: 0x1ed55d0, Func Offset: 0x1d0
	// Line 482, Address: 0x1ed55d4, Func Offset: 0x1d4
	// Line 483, Address: 0x1ed55dc, Func Offset: 0x1dc
	// Line 484, Address: 0x1ed55e0, Func Offset: 0x1e0
	// Line 485, Address: 0x1ed55e8, Func Offset: 0x1e8
	// Line 486, Address: 0x1ed55f8, Func Offset: 0x1f8
	// Line 485, Address: 0x1ed5600, Func Offset: 0x200
	// Line 486, Address: 0x1ed5604, Func Offset: 0x204
	// Line 488, Address: 0x1ed5610, Func Offset: 0x210
	// Line 489, Address: 0x1ed5614, Func Offset: 0x214
	// Line 492, Address: 0x1ed5618, Func Offset: 0x218
	// Line 494, Address: 0x1ed5638, Func Offset: 0x238
	// Line 496, Address: 0x1ed563c, Func Offset: 0x23c
	// Line 497, Address: 0x1ed5644, Func Offset: 0x244
	// Line 498, Address: 0x1ed5648, Func Offset: 0x248
	// Line 500, Address: 0x1ed564c, Func Offset: 0x24c
	// Line 501, Address: 0x1ed5654, Func Offset: 0x254
	// Line 502, Address: 0x1ed565c, Func Offset: 0x25c
	// Line 503, Address: 0x1ed5660, Func Offset: 0x260
	// Line 508, Address: 0x1ed5668, Func Offset: 0x268
	// Line 509, Address: 0x1ed5670, Func Offset: 0x270
	// Line 510, Address: 0x1ed567c, Func Offset: 0x27c
	// Line 511, Address: 0x1ed5684, Func Offset: 0x284
	// Line 512, Address: 0x1ed5694, Func Offset: 0x294
	// Line 518, Address: 0x1ed5698, Func Offset: 0x298
	// Line 519, Address: 0x1ed56a0, Func Offset: 0x2a0
	// Line 520, Address: 0x1ed56b0, Func Offset: 0x2b0
	// Line 521, Address: 0x1ed56c8, Func Offset: 0x2c8
	// Line 522, Address: 0x1ed56d4, Func Offset: 0x2d4
	// Line 523, Address: 0x1ed56ec, Func Offset: 0x2ec
	// Line 525, Address: 0x1ed56f0, Func Offset: 0x2f0
	// Line 529, Address: 0x1ed5710, Func Offset: 0x310
	// Line 528, Address: 0x1ed5714, Func Offset: 0x314
	// Line 529, Address: 0x1ed5718, Func Offset: 0x318
	// Func End, Address: 0x1ed572c, Func Offset: 0x32c
}

// 
// Start address: 0x1ed5730
int ev_pasthome_cm_father_draw(sfObj* obj)
{
	// Line 1377, Address: 0x1ed5730, Func Offset: 0
	// Line 1374, Address: 0x1ed5734, Func Offset: 0x4
	// Line 1377, Address: 0x1ed5738, Func Offset: 0x8
	// Line 1374, Address: 0x1ed5740, Func Offset: 0x10
	// Line 1377, Address: 0x1ed5744, Func Offset: 0x14
	// Line 1382, Address: 0x1ed5764, Func Offset: 0x34
	// Line 1381, Address: 0x1ed5768, Func Offset: 0x38
	// Line 1382, Address: 0x1ed576c, Func Offset: 0x3c
	// Func End, Address: 0x1ed5774, Func Offset: 0x44
	// Line 860, Address: 0x1ed5730, Func Offset: 0
	// Line 862, Address: 0x1ed5734, Func Offset: 0x4
	// Line 860, Address: 0x1ed5738, Func Offset: 0x8
	// Line 862, Address: 0x1ed573c, Func Offset: 0xc
	// Line 860, Address: 0x1ed5740, Func Offset: 0x10
	// Line 862, Address: 0x1ed5744, Func Offset: 0x14
	// Line 863, Address: 0x1ed575c, Func Offset: 0x2c
	// Line 864, Address: 0x1ed5764, Func Offset: 0x34
	// Func End, Address: 0x1ed5774, Func Offset: 0x44
	// Line 531, Address: 0x1ed5730, Func Offset: 0
	// Line 534, Address: 0x1ed5738, Func Offset: 0x8
	// Line 536, Address: 0x1ed5748, Func Offset: 0x18
	// Line 539, Address: 0x1ed5750, Func Offset: 0x20
	// Line 538, Address: 0x1ed5754, Func Offset: 0x24
	// Line 539, Address: 0x1ed5758, Func Offset: 0x28
	// Func End, Address: 0x1ed5760, Func Offset: 0x30
}

// 
// Start address: 0x1ed5760
int ev_pasthome_cm_father_end(sfObj* obj)
{
	_anon1* fd;
	_sfEvFather* wk;
	// Line 541, Address: 0x1ed5760, Func Offset: 0
	// Line 542, Address: 0x1ed5764, Func Offset: 0x4
	// Line 541, Address: 0x1ed5768, Func Offset: 0x8
	// Line 542, Address: 0x1ed576c, Func Offset: 0xc
	// Line 541, Address: 0x1ed5770, Func Offset: 0x10
	// Line 542, Address: 0x1ed5778, Func Offset: 0x18
	// Line 543, Address: 0x1ed577c, Func Offset: 0x1c
	// Line 542, Address: 0x1ed5780, Func Offset: 0x20
	// Line 544, Address: 0x1ed5784, Func Offset: 0x24
	// Line 545, Address: 0x1ed578c, Func Offset: 0x2c
	// Line 546, Address: 0x1ed5798, Func Offset: 0x38
	// Line 548, Address: 0x1ed57a0, Func Offset: 0x40
	// Line 550, Address: 0x1ed57a8, Func Offset: 0x48
	// Line 549, Address: 0x1ed57ac, Func Offset: 0x4c
	// Line 550, Address: 0x1ed57b0, Func Offset: 0x50
	// Func End, Address: 0x1ed57c0, Func Offset: 0x60
}

// 
// Start address: 0x1ed57c0
int ev_pasthome_cm_father_touch_end(sfObj* obj)
{
	// Line 556, Address: 0x1ed57c0, Func Offset: 0
	// Line 557, Address: 0x1ed57d0, Func Offset: 0x10
	// Line 556, Address: 0x1ed57d4, Func Offset: 0x14
	// Line 558, Address: 0x1ed57e0, Func Offset: 0x20
	// Func End, Address: 0x1ed57e8, Func Offset: 0x28
}

// 
// Start address: 0x1ed57f0
int ev_pasthome_cm03_chain_init(sfObj* obj)
{
	_anon2* cd;
	float rot[4];
	// Line 1410, Address: 0x1ed57f0, Func Offset: 0
	// Line 1414, Address: 0x1ed57f4, Func Offset: 0x4
	// Line 1410, Address: 0x1ed57f8, Func Offset: 0x8
	// Line 1414, Address: 0x1ed5804, Func Offset: 0x14
	// Line 1412, Address: 0x1ed5808, Func Offset: 0x18
	// Line 1414, Address: 0x1ed580c, Func Offset: 0x1c
	// Line 1416, Address: 0x1ed5838, Func Offset: 0x48
	// Line 1417, Address: 0x1ed585c, Func Offset: 0x6c
	// Line 1418, Address: 0x1ed5864, Func Offset: 0x74
	// Line 1419, Address: 0x1ed586c, Func Offset: 0x7c
	// Line 1421, Address: 0x1ed5870, Func Offset: 0x80
	// Line 1423, Address: 0x1ed5880, Func Offset: 0x90
	// Line 1425, Address: 0x1ed5888, Func Offset: 0x98
	// Line 1430, Address: 0x1ed58a4, Func Offset: 0xb4
	// Line 1432, Address: 0x1ed58b0, Func Offset: 0xc0
	// Line 1430, Address: 0x1ed58b4, Func Offset: 0xc4
	// Line 1432, Address: 0x1ed58b8, Func Offset: 0xc8
	// Line 1433, Address: 0x1ed58c4, Func Offset: 0xd4
	// Line 1434, Address: 0x1ed58c8, Func Offset: 0xd8
	// Line 1433, Address: 0x1ed58cc, Func Offset: 0xdc
	// Line 1434, Address: 0x1ed58d0, Func Offset: 0xe0
	// Line 1433, Address: 0x1ed58d4, Func Offset: 0xe4
	// Line 1435, Address: 0x1ed58d8, Func Offset: 0xe8
	// Line 1436, Address: 0x1ed58e4, Func Offset: 0xf4
	// Line 1439, Address: 0x1ed58f0, Func Offset: 0x100
	// Line 1440, Address: 0x1ed58fc, Func Offset: 0x10c
	// Line 1442, Address: 0x1ed5904, Func Offset: 0x114
	// Line 1443, Address: 0x1ed590c, Func Offset: 0x11c
	// Line 1445, Address: 0x1ed5910, Func Offset: 0x120
	// Line 1446, Address: 0x1ed5920, Func Offset: 0x130
	// Line 1449, Address: 0x1ed5944, Func Offset: 0x154
	// Line 1450, Address: 0x1ed5958, Func Offset: 0x168
	// Line 1452, Address: 0x1ed5960, Func Offset: 0x170
	// Line 1455, Address: 0x1ed5968, Func Offset: 0x178
	// Line 1456, Address: 0x1ed5978, Func Offset: 0x188
	// Line 1460, Address: 0x1ed5980, Func Offset: 0x190
	// Line 1461, Address: 0x1ed5988, Func Offset: 0x198
	// Func End, Address: 0x1ed599c, Func Offset: 0x1ac
	// Line 924, Address: 0x1ed57f0, Func Offset: 0
	// Line 925, Address: 0x1ed5808, Func Offset: 0x18
	// Line 926, Address: 0x1ed5814, Func Offset: 0x24
	// Line 928, Address: 0x1ed5828, Func Offset: 0x38
	// Line 929, Address: 0x1ed583c, Func Offset: 0x4c
	// Line 937, Address: 0x1ed5844, Func Offset: 0x54
	// Line 948, Address: 0x1ed584c, Func Offset: 0x5c
	// Line 949, Address: 0x1ed5864, Func Offset: 0x74
	// Line 950, Address: 0x1ed587c, Func Offset: 0x8c
	// Line 953, Address: 0x1ed5894, Func Offset: 0xa4
	// Line 952, Address: 0x1ed5898, Func Offset: 0xa8
	// Line 957, Address: 0x1ed589c, Func Offset: 0xac
	// Line 953, Address: 0x1ed58a0, Func Offset: 0xb0
	// Line 954, Address: 0x1ed58a4, Func Offset: 0xb4
	// Line 955, Address: 0x1ed58ac, Func Offset: 0xbc
	// Line 957, Address: 0x1ed58b4, Func Offset: 0xc4
	// Line 959, Address: 0x1ed58bc, Func Offset: 0xcc
	// Line 961, Address: 0x1ed58cc, Func Offset: 0xdc
	// Line 962, Address: 0x1ed58dc, Func Offset: 0xec
	// Line 963, Address: 0x1ed58f4, Func Offset: 0x104
	// Line 967, Address: 0x1ed5900, Func Offset: 0x110
	// Line 968, Address: 0x1ed5904, Func Offset: 0x114
	// Line 970, Address: 0x1ed5908, Func Offset: 0x118
	// Line 971, Address: 0x1ed5910, Func Offset: 0x120
	// Func End, Address: 0x1ed592c, Func Offset: 0x13c
	// Line 589, Address: 0x1ed57f0, Func Offset: 0
	// Line 591, Address: 0x1ed57f4, Func Offset: 0x4
	// Line 589, Address: 0x1ed57f8, Func Offset: 0x8
	// Line 591, Address: 0x1ed57fc, Func Offset: 0xc
	// Line 592, Address: 0x1ed580c, Func Offset: 0x1c
	// Line 595, Address: 0x1ed5820, Func Offset: 0x30
	// Line 597, Address: 0x1ed5830, Func Offset: 0x40
	// Line 596, Address: 0x1ed5834, Func Offset: 0x44
	// Line 597, Address: 0x1ed5838, Func Offset: 0x48
	// Func End, Address: 0x1ed5840, Func Offset: 0x50
}

// 
// Start address: 0x1ed5840
int ev_pasthome_cm03_chain_exec(sfObj* obj)
{
	_anon2* cd;
	// Line 1125, Address: 0x1ed5840, Func Offset: 0
	// Line 1126, Address: 0x1ed584c, Func Offset: 0xc
	// Line 1129, Address: 0x1ed5854, Func Offset: 0x14
	// Line 1130, Address: 0x1ed5860, Func Offset: 0x20
	// Line 1134, Address: 0x1ed5868, Func Offset: 0x28
	// Line 1133, Address: 0x1ed586c, Func Offset: 0x2c
	// Line 1134, Address: 0x1ed5870, Func Offset: 0x30
	// Func End, Address: 0x1ed5878, Func Offset: 0x38
	// Line 599, Address: 0x1ed5840, Func Offset: 0
	// Line 601, Address: 0x1ed5844, Func Offset: 0x4
	// Line 599, Address: 0x1ed5848, Func Offset: 0x8
	// Line 601, Address: 0x1ed584c, Func Offset: 0xc
	// Line 602, Address: 0x1ed5860, Func Offset: 0x20
	// Line 603, Address: 0x1ed5898, Func Offset: 0x58
	// Line 605, Address: 0x1ed58a0, Func Offset: 0x60
	// Line 604, Address: 0x1ed58a4, Func Offset: 0x64
	// Line 605, Address: 0x1ed58a8, Func Offset: 0x68
	// Func End, Address: 0x1ed58b0, Func Offset: 0x70
}

// 
// Start address: 0x1ed58b0
int ev_pasthome_cm03_chain_draw(sfObj* obj)
{
	_anon2* cd;
	// Line 607, Address: 0x1ed58b0, Func Offset: 0
	// Line 609, Address: 0x1ed58b4, Func Offset: 0x4
	// Line 607, Address: 0x1ed58b8, Func Offset: 0x8
	// Line 609, Address: 0x1ed58bc, Func Offset: 0xc
	// Line 610, Address: 0x1ed58d0, Func Offset: 0x20
	// Line 611, Address: 0x1ed5908, Func Offset: 0x58
	// Line 613, Address: 0x1ed5910, Func Offset: 0x60
	// Line 612, Address: 0x1ed5914, Func Offset: 0x64
	// Line 613, Address: 0x1ed5918, Func Offset: 0x68
	// Func End, Address: 0x1ed5920, Func Offset: 0x70
}

// 
// Start address: 0x1ed5920
int ev_pasthome_cm03_chain_end(sfObj* obj)
{
	// Line 94, Address: 0x1ed5920, Func Offset: 0
	// Line 95, Address: 0x1ed592c, Func Offset: 0xc
	// Func End, Address: 0x1ed5934, Func Offset: 0x14
	// Line 615, Address: 0x1ed5920, Func Offset: 0
	// Line 616, Address: 0x1ed5928, Func Offset: 0x8
	// Line 618, Address: 0x1ed5930, Func Offset: 0x10
	// Line 617, Address: 0x1ed5934, Func Offset: 0x14
	// Line 618, Address: 0x1ed5938, Func Offset: 0x18
	// Func End, Address: 0x1ed5940, Func Offset: 0x20
}

// 
// Start address: 0x1ed5940
int ev_pasthome0_cm03_213_check_exec()
{
	// Line 127, Address: 0x1ed5940, Func Offset: 0
	// Line 130, Address: 0x1ed594c, Func Offset: 0xc
	// Line 131, Address: 0x1ed5960, Func Offset: 0x20
	// Line 132, Address: 0x1ed5964, Func Offset: 0x24
	// Line 134, Address: 0x1ed5968, Func Offset: 0x28
	// Line 135, Address: 0x1ed597c, Func Offset: 0x3c
	// Line 138, Address: 0x1ed5980, Func Offset: 0x40
	// Line 139, Address: 0x1ed5984, Func Offset: 0x44
	// Func End, Address: 0x1ed5994, Func Offset: 0x54
	// Line 624, Address: 0x1ed5940, Func Offset: 0
	// Line 626, Address: 0x1ed5944, Func Offset: 0x4
	// Line 624, Address: 0x1ed5948, Func Offset: 0x8
	// Line 626, Address: 0x1ed594c, Func Offset: 0xc
	// Line 628, Address: 0x1ed595c, Func Offset: 0x1c
	// Line 627, Address: 0x1ed5960, Func Offset: 0x20
	// Line 628, Address: 0x1ed596c, Func Offset: 0x2c
	// Line 629, Address: 0x1ed5974, Func Offset: 0x34
	// Line 632, Address: 0x1ed5978, Func Offset: 0x38
	// Line 633, Address: 0x1ed5988, Func Offset: 0x48
	// Line 635, Address: 0x1ed599c, Func Offset: 0x5c
	// Line 637, Address: 0x1ed59b8, Func Offset: 0x78
	// Line 638, Address: 0x1ed59c0, Func Offset: 0x80
	// Func End, Address: 0x1ed59cc, Func Offset: 0x8c
}

// 
// Start address: 0x1ed59d0
int ev_pasthome_cm09_bdoor_init(sfObj* obj)
{
	float pos[4];
	float rot[4];
	// Line 655, Address: 0x1ed59d0, Func Offset: 0
	// Line 656, Address: 0x1ed59d4, Func Offset: 0x4
	// Line 655, Address: 0x1ed59d8, Func Offset: 0x8
	// Line 656, Address: 0x1ed59dc, Func Offset: 0xc
	// Line 657, Address: 0x1ed59e8, Func Offset: 0x18
	// Line 661, Address: 0x1ed59ec, Func Offset: 0x1c
	// Line 657, Address: 0x1ed59f0, Func Offset: 0x20
	// Line 661, Address: 0x1ed59f8, Func Offset: 0x28
	// Line 656, Address: 0x1ed5a00, Func Offset: 0x30
	// Line 661, Address: 0x1ed5a04, Func Offset: 0x34
	// Line 657, Address: 0x1ed5a08, Func Offset: 0x38
	// Line 661, Address: 0x1ed5a0c, Func Offset: 0x3c
	// Line 664, Address: 0x1ed5a14, Func Offset: 0x44
	// Line 663, Address: 0x1ed5a18, Func Offset: 0x48
	// Line 664, Address: 0x1ed5a1c, Func Offset: 0x4c
	// Func End, Address: 0x1ed5a24, Func Offset: 0x54
}

// 
// Start address: 0x1ed5a30
int ev_pasthome_cm09_bdoor_exec(sfObj* obj)
{
	// Line 666, Address: 0x1ed5a30, Func Offset: 0
	// Line 667, Address: 0x1ed5a38, Func Offset: 0x8
	// Line 669, Address: 0x1ed5a40, Func Offset: 0x10
	// Line 668, Address: 0x1ed5a44, Func Offset: 0x14
	// Line 669, Address: 0x1ed5a48, Func Offset: 0x18
	// Func End, Address: 0x1ed5a50, Func Offset: 0x20
}

// 
// Start address: 0x1ed5a50
int ev_pasthome_cm09_bdoor_draw(sfObj* obj)
{
	// Line 616, Address: 0x1ed5a50, Func Offset: 0
	// Line 618, Address: 0x1ed5a58, Func Offset: 0x8
	// Line 621, Address: 0x1ed5a60, Func Offset: 0x10
	// Line 624, Address: 0x1ed5a68, Func Offset: 0x18
	// Line 627, Address: 0x1ed5a74, Func Offset: 0x24
	// Line 626, Address: 0x1ed5a78, Func Offset: 0x28
	// Line 627, Address: 0x1ed5a7c, Func Offset: 0x2c
	// Func End, Address: 0x1ed5a84, Func Offset: 0x34
	// Line 671, Address: 0x1ed5a50, Func Offset: 0
	// Line 672, Address: 0x1ed5a58, Func Offset: 0x8
	// Line 674, Address: 0x1ed5a60, Func Offset: 0x10
	// Line 673, Address: 0x1ed5a64, Func Offset: 0x14
	// Line 674, Address: 0x1ed5a68, Func Offset: 0x18
	// Func End, Address: 0x1ed5a70, Func Offset: 0x20
}

// 
// Start address: 0x1ed5a70
int ev_pasthome_cm09_bdoor_end(sfObj* obj)
{
	// Line 676, Address: 0x1ed5a70, Func Offset: 0
	// Line 677, Address: 0x1ed5a78, Func Offset: 0x8
	// Line 679, Address: 0x1ed5a80, Func Offset: 0x10
	// Line 678, Address: 0x1ed5a84, Func Offset: 0x14
	// Line 679, Address: 0x1ed5a88, Func Offset: 0x18
	// Func End, Address: 0x1ed5a90, Func Offset: 0x20
}

// 
// Start address: 0x1ed5a90
int ev_pasthome_cm24_bdoor_init(sfObj* obj)
{
	float pos[4];
	float rot[4];
	// Line 649, Address: 0x1ed5a90, Func Offset: 0
	// Line 650, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 649, Address: 0x1ed5a98, Func Offset: 0x8
	// Line 650, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 649, Address: 0x1ed5aa0, Func Offset: 0x10
	// Line 651, Address: 0x1ed5aa4, Func Offset: 0x14
	// Line 650, Address: 0x1ed5aa8, Func Offset: 0x18
	// Line 655, Address: 0x1ed5ab4, Func Offset: 0x24
	// Line 651, Address: 0x1ed5ab8, Func Offset: 0x28
	// Line 650, Address: 0x1ed5abc, Func Offset: 0x2c
	// Line 651, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 655, Address: 0x1ed5ac8, Func Offset: 0x38
	// Line 656, Address: 0x1ed5ad0, Func Offset: 0x40
	// Line 657, Address: 0x1ed5aec, Func Offset: 0x5c
	// Line 659, Address: 0x1ed5b00, Func Offset: 0x70
	// Line 660, Address: 0x1ed5b08, Func Offset: 0x78
	// Func End, Address: 0x1ed5b18, Func Offset: 0x88
	// Line 709, Address: 0x1ed5a90, Func Offset: 0
	// Line 710, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 713, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 715, Address: 0x1ed5aa8, Func Offset: 0x18
	// Func End, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 1015, Address: 0x1ed5a90, Func Offset: 0
	// Line 1016, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 1018, Address: 0x1ed5aa4, Func Offset: 0x14
	// Line 1019, Address: 0x1ed5aac, Func Offset: 0x1c
	// Line 1021, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 1020, Address: 0x1ed5ab4, Func Offset: 0x24
	// Line 1021, Address: 0x1ed5ab8, Func Offset: 0x28
	// Func End, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 684, Address: 0x1ed5a90, Func Offset: 0
	// Line 685, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 684, Address: 0x1ed5a98, Func Offset: 0x8
	// Line 685, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 686, Address: 0x1ed5aa8, Func Offset: 0x18
	// Line 690, Address: 0x1ed5aac, Func Offset: 0x1c
	// Line 686, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 690, Address: 0x1ed5ab8, Func Offset: 0x28
	// Line 685, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 690, Address: 0x1ed5ac4, Func Offset: 0x34
	// Line 686, Address: 0x1ed5ac8, Func Offset: 0x38
	// Line 690, Address: 0x1ed5acc, Func Offset: 0x3c
	// Line 693, Address: 0x1ed5ad4, Func Offset: 0x44
	// Line 692, Address: 0x1ed5ad8, Func Offset: 0x48
	// Line 693, Address: 0x1ed5adc, Func Offset: 0x4c
	// Func End, Address: 0x1ed5ae4, Func Offset: 0x54
}

// 
// Start address: 0x1ed5af0
int ev_pasthome_cm24_bdoor_exec(sfObj* obj)
{
	// Line 1031, Address: 0x1ed5af0, Func Offset: 0
	// Line 1034, Address: 0x1ed5b04, Func Offset: 0x14
	// Line 1035, Address: 0x1ed5b14, Func Offset: 0x24
	// Line 1036, Address: 0x1ed5b20, Func Offset: 0x30
	// Line 1037, Address: 0x1ed5b2c, Func Offset: 0x3c
	// Line 1038, Address: 0x1ed5b38, Func Offset: 0x48
	// Line 1040, Address: 0x1ed5b40, Func Offset: 0x50
	// Line 1041, Address: 0x1ed5b50, Func Offset: 0x60
	// Line 1042, Address: 0x1ed5b58, Func Offset: 0x68
	// Func End, Address: 0x1ed5b70, Func Offset: 0x80
	// Line 695, Address: 0x1ed5af0, Func Offset: 0
	// Line 696, Address: 0x1ed5af8, Func Offset: 0x8
	// Line 698, Address: 0x1ed5b00, Func Offset: 0x10
	// Line 697, Address: 0x1ed5b04, Func Offset: 0x14
	// Line 698, Address: 0x1ed5b08, Func Offset: 0x18
	// Func End, Address: 0x1ed5b10, Func Offset: 0x20
}

// 
// Start address: 0x1ed5b10
int ev_pasthome_cm24_bdoor_draw(sfObj* obj)
{
	// Line 1568, Address: 0x1ed5b10, Func Offset: 0
	// Line 1571, Address: 0x1ed5b34, Func Offset: 0x24
	// Func End, Address: 0x1ed5b3c, Func Offset: 0x2c
	// Line 1060, Address: 0x1ed5b10, Func Offset: 0
	// Line 1062, Address: 0x1ed5b14, Func Offset: 0x4
	// Line 1060, Address: 0x1ed5b18, Func Offset: 0x8
	// Line 1062, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 1063, Address: 0x1ed5b2c, Func Offset: 0x1c
	// Line 1064, Address: 0x1ed5b34, Func Offset: 0x24
	// Line 1065, Address: 0x1ed5b40, Func Offset: 0x30
	// Line 1067, Address: 0x1ed5b58, Func Offset: 0x48
	// Line 1068, Address: 0x1ed5b5c, Func Offset: 0x4c
	// Line 1067, Address: 0x1ed5b60, Func Offset: 0x50
	// Line 1069, Address: 0x1ed5b64, Func Offset: 0x54
	// Func End, Address: 0x1ed5b74, Func Offset: 0x64
	// Line 875, Address: 0x1ed5b10, Func Offset: 0
	// Line 877, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 878, Address: 0x1ed5b28, Func Offset: 0x18
	// Line 879, Address: 0x1ed5b30, Func Offset: 0x20
	// Line 880, Address: 0x1ed5b38, Func Offset: 0x28
	// Line 883, Address: 0x1ed5b44, Func Offset: 0x34
	// Line 880, Address: 0x1ed5b48, Func Offset: 0x38
	// Line 883, Address: 0x1ed5b54, Func Offset: 0x44
	// Line 885, Address: 0x1ed5b5c, Func Offset: 0x4c
	// Line 886, Address: 0x1ed5b64, Func Offset: 0x54
	// Line 887, Address: 0x1ed5b68, Func Offset: 0x58
	// Line 889, Address: 0x1ed5b84, Func Offset: 0x74
	// Line 888, Address: 0x1ed5b88, Func Offset: 0x78
	// Line 889, Address: 0x1ed5b8c, Func Offset: 0x7c
	// Func End, Address: 0x1ed5b9c, Func Offset: 0x8c
	// Line 700, Address: 0x1ed5b10, Func Offset: 0
	// Line 701, Address: 0x1ed5b18, Func Offset: 0x8
	// Line 703, Address: 0x1ed5b20, Func Offset: 0x10
	// Line 702, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 703, Address: 0x1ed5b28, Func Offset: 0x18
	// Func End, Address: 0x1ed5b30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5b30
int ev_pasthome_cm24_bdoor_end(sfObj* obj)
{
	// Line 742, Address: 0x1ed5b30, Func Offset: 0
	// Line 743, Address: 0x1ed5b3c, Func Offset: 0xc
	// Line 746, Address: 0x1ed5b44, Func Offset: 0x14
	// Line 747, Address: 0x1ed5b4c, Func Offset: 0x1c
	// Line 748, Address: 0x1ed5b50, Func Offset: 0x20
	// Func End, Address: 0x1ed5b5c, Func Offset: 0x2c
	// Line 705, Address: 0x1ed5b30, Func Offset: 0
	// Line 706, Address: 0x1ed5b38, Func Offset: 0x8
	// Line 708, Address: 0x1ed5b40, Func Offset: 0x10
	// Line 707, Address: 0x1ed5b44, Func Offset: 0x14
	// Line 708, Address: 0x1ed5b48, Func Offset: 0x18
	// Func End, Address: 0x1ed5b50, Func Offset: 0x20
}

// 
// Start address: 0x1ed5b50
int ev_pasthome_cm01_skbook_init(sfObj* obj)
{
	float pos[4];
	float rot[4];
	// Line 713, Address: 0x1ed5b50, Func Offset: 0
	// Line 714, Address: 0x1ed5b54, Func Offset: 0x4
	// Line 713, Address: 0x1ed5b58, Func Offset: 0x8
	// Line 714, Address: 0x1ed5b5c, Func Offset: 0xc
	// Line 715, Address: 0x1ed5b68, Func Offset: 0x18
	// Line 719, Address: 0x1ed5b6c, Func Offset: 0x1c
	// Line 715, Address: 0x1ed5b70, Func Offset: 0x20
	// Line 719, Address: 0x1ed5b78, Func Offset: 0x28
	// Line 714, Address: 0x1ed5b80, Func Offset: 0x30
	// Line 719, Address: 0x1ed5b84, Func Offset: 0x34
	// Line 715, Address: 0x1ed5b88, Func Offset: 0x38
	// Line 719, Address: 0x1ed5b8c, Func Offset: 0x3c
	// Line 722, Address: 0x1ed5b94, Func Offset: 0x44
	// Line 721, Address: 0x1ed5b98, Func Offset: 0x48
	// Line 722, Address: 0x1ed5b9c, Func Offset: 0x4c
	// Func End, Address: 0x1ed5ba4, Func Offset: 0x54
}

// 
// Start address: 0x1ed5bb0
int ev_pasthome_cm01_skbook_exec(sfObj* obj)
{
	// Line 724, Address: 0x1ed5bb0, Func Offset: 0
	// Line 725, Address: 0x1ed5bb8, Func Offset: 0x8
	// Line 727, Address: 0x1ed5bc0, Func Offset: 0x10
	// Line 726, Address: 0x1ed5bc4, Func Offset: 0x14
	// Line 727, Address: 0x1ed5bc8, Func Offset: 0x18
	// Func End, Address: 0x1ed5bd0, Func Offset: 0x20
}

// 
// Start address: 0x1ed5bd0
int ev_pasthome_cm01_skbook_draw(sfObj* obj)
{
	// Line 1079, Address: 0x1ed5bd0, Func Offset: 0
	// Line 1080, Address: 0x1ed5bd8, Func Offset: 0x8
	// Func End, Address: 0x1ed5be0, Func Offset: 0x10
	// Line 729, Address: 0x1ed5bd0, Func Offset: 0
	// Line 730, Address: 0x1ed5bd4, Func Offset: 0x4
	// Line 729, Address: 0x1ed5bd8, Func Offset: 0x8
	// Line 730, Address: 0x1ed5bdc, Func Offset: 0xc
	// Line 731, Address: 0x1ed5bec, Func Offset: 0x1c
	// Line 733, Address: 0x1ed5bf8, Func Offset: 0x28
	// Line 732, Address: 0x1ed5bfc, Func Offset: 0x2c
	// Line 733, Address: 0x1ed5c00, Func Offset: 0x30
	// Func End, Address: 0x1ed5c08, Func Offset: 0x38
}

// 
// Start address: 0x1ed5c10
int ev_pasthome_cm01_skbook_end(sfObj* obj)
{
	// Line 112, Address: 0x1ed5c10, Func Offset: 0
	// Line 113, Address: 0x1ed5c1c, Func Offset: 0xc
	// Func End, Address: 0x1ed5c24, Func Offset: 0x14
	// Line 735, Address: 0x1ed5c10, Func Offset: 0
	// Line 736, Address: 0x1ed5c18, Func Offset: 0x8
	// Line 738, Address: 0x1ed5c20, Func Offset: 0x10
	// Line 737, Address: 0x1ed5c24, Func Offset: 0x14
	// Line 738, Address: 0x1ed5c28, Func Offset: 0x18
	// Func End, Address: 0x1ed5c30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5c30
int ev_pasthome_cm01_cls_init(sfObj* obj)
{
	_evCmnBgObjData dat;
	// Line 143, Address: 0x1ed5c30, Func Offset: 0
	// Line 145, Address: 0x1ed5c38, Func Offset: 0x8
	// Line 146, Address: 0x1ed5c48, Func Offset: 0x18
	// Line 149, Address: 0x1ed5c58, Func Offset: 0x28
	// Line 148, Address: 0x1ed5c5c, Func Offset: 0x2c
	// Line 149, Address: 0x1ed5c60, Func Offset: 0x30
	// Func End, Address: 0x1ed5c68, Func Offset: 0x38
	// Line 743, Address: 0x1ed5c30, Func Offset: 0
	// Line 744, Address: 0x1ed5c34, Func Offset: 0x4
	// Line 743, Address: 0x1ed5c38, Func Offset: 0x8
	// Line 744, Address: 0x1ed5c3c, Func Offset: 0xc
	// Line 745, Address: 0x1ed5c50, Func Offset: 0x20
	// Line 747, Address: 0x1ed5c58, Func Offset: 0x28
	// Line 746, Address: 0x1ed5c5c, Func Offset: 0x2c
	// Line 747, Address: 0x1ed5c60, Func Offset: 0x30
	// Func End, Address: 0x1ed5c68, Func Offset: 0x38
}

// 
// Start address: 0x1ed5c70
int ev_pasthome_cm11_th_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 1632, Address: 0x1ed5c70, Func Offset: 0
	// Line 1636, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1632, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1636, Address: 0x1ed5c84, Func Offset: 0x14
	// Line 1633, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 1636, Address: 0x1ed5c8c, Func Offset: 0x1c
	// Line 1637, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1636, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1639, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1641, Address: 0x1ed5cb8, Func Offset: 0x48
	// Line 1640, Address: 0x1ed5cbc, Func Offset: 0x4c
	// Line 1641, Address: 0x1ed5cc0, Func Offset: 0x50
	// Line 1642, Address: 0x1ed5cc4, Func Offset: 0x54
	// Line 1645, Address: 0x1ed5ccc, Func Offset: 0x5c
	// Line 1643, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1642, Address: 0x1ed5cd4, Func Offset: 0x64
	// Line 1643, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1645, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Line 1643, Address: 0x1ed5ce0, Func Offset: 0x70
	// Line 1644, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 1645, Address: 0x1ed5cf0, Func Offset: 0x80
	// Line 1650, Address: 0x1ed5d10, Func Offset: 0xa0
	// Line 1651, Address: 0x1ed5d18, Func Offset: 0xa8
	// Line 1650, Address: 0x1ed5d1c, Func Offset: 0xac
	// Line 1651, Address: 0x1ed5d2c, Func Offset: 0xbc
	// Line 1652, Address: 0x1ed5d30, Func Offset: 0xc0
	// Line 1655, Address: 0x1ed5d38, Func Offset: 0xc8
	// Line 1652, Address: 0x1ed5d3c, Func Offset: 0xcc
	// Line 1655, Address: 0x1ed5d40, Func Offset: 0xd0
	// Line 1652, Address: 0x1ed5d44, Func Offset: 0xd4
	// Line 1653, Address: 0x1ed5d48, Func Offset: 0xd8
	// Line 1654, Address: 0x1ed5d4c, Func Offset: 0xdc
	// Line 1652, Address: 0x1ed5d50, Func Offset: 0xe0
	// Line 1653, Address: 0x1ed5d54, Func Offset: 0xe4
	// Line 1654, Address: 0x1ed5d58, Func Offset: 0xe8
	// Line 1655, Address: 0x1ed5d5c, Func Offset: 0xec
	// Line 1652, Address: 0x1ed5d64, Func Offset: 0xf4
	// Line 1655, Address: 0x1ed5d68, Func Offset: 0xf8
	// Line 1652, Address: 0x1ed5d6c, Func Offset: 0xfc
	// Line 1653, Address: 0x1ed5d70, Func Offset: 0x100
	// Line 1652, Address: 0x1ed5d74, Func Offset: 0x104
	// Line 1653, Address: 0x1ed5d84, Func Offset: 0x114
	// Line 1654, Address: 0x1ed5d9c, Func Offset: 0x12c
	// Line 1653, Address: 0x1ed5da0, Func Offset: 0x130
	// Line 1654, Address: 0x1ed5da8, Func Offset: 0x138
	// Line 1655, Address: 0x1ed5dc8, Func Offset: 0x158
	// Line 1657, Address: 0x1ed5dd8, Func Offset: 0x168
	// Line 1659, Address: 0x1ed5de4, Func Offset: 0x174
	// Line 1660, Address: 0x1ed5de8, Func Offset: 0x178
	// Line 1661, Address: 0x1ed5dfc, Func Offset: 0x18c
	// Line 1663, Address: 0x1ed5e20, Func Offset: 0x1b0
	// Line 1665, Address: 0x1ed5e44, Func Offset: 0x1d4
	// Line 1667, Address: 0x1ed5e48, Func Offset: 0x1d8
	// Line 1668, Address: 0x1ed5e5c, Func Offset: 0x1ec
	// Line 1669, Address: 0x1ed5e64, Func Offset: 0x1f4
	// Line 1671, Address: 0x1ed5e6c, Func Offset: 0x1fc
	// Line 1672, Address: 0x1ed5e74, Func Offset: 0x204
	// Line 1673, Address: 0x1ed5e7c, Func Offset: 0x20c
	// Line 1676, Address: 0x1ed5e80, Func Offset: 0x210
	// Line 1675, Address: 0x1ed5e88, Func Offset: 0x218
	// Line 1676, Address: 0x1ed5e8c, Func Offset: 0x21c
	// Func End, Address: 0x1ed5e98, Func Offset: 0x228
	// Line 1104, Address: 0x1ed5c70, Func Offset: 0
	// Line 1108, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1104, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1108, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 1109, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 1110, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1111, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1112, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1113, Address: 0x1ed5cc8, Func Offset: 0x58
	// Line 1116, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1115, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1116, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Func End, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 166, Address: 0x1ed5c70, Func Offset: 0
	// Line 167, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 169, Address: 0x1ed5c98, Func Offset: 0x28
	// Line 171, Address: 0x1ed5ca0, Func Offset: 0x30
	// Line 172, Address: 0x1ed5ca8, Func Offset: 0x38
	// Func End, Address: 0x1ed5cb4, Func Offset: 0x44
	// Line 753, Address: 0x1ed5c70, Func Offset: 0
	// Line 754, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 753, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 754, Address: 0x1ed5c7c, Func Offset: 0xc
	// Line 755, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 757, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 756, Address: 0x1ed5c94, Func Offset: 0x24
	// Line 757, Address: 0x1ed5c98, Func Offset: 0x28
	// Func End, Address: 0x1ed5ca0, Func Offset: 0x30
}

// 
// Start address: 0x1ed5ca0
int ev_pasthome_cm11_th_exec(sfObj* obj)
{
	float pos[4];
	// Line 759, Address: 0x1ed5ca0, Func Offset: 0
	// Line 761, Address: 0x1ed5ca4, Func Offset: 0x4
	// Line 759, Address: 0x1ed5ca8, Func Offset: 0x8
	// Line 761, Address: 0x1ed5cb4, Func Offset: 0x14
	// Line 762, Address: 0x1ed5cbc, Func Offset: 0x1c
	// Line 763, Address: 0x1ed5ce8, Func Offset: 0x48
	// Line 765, Address: 0x1ed5cf0, Func Offset: 0x50
	// Line 764, Address: 0x1ed5cf4, Func Offset: 0x54
	// Line 765, Address: 0x1ed5cf8, Func Offset: 0x58
	// Func End, Address: 0x1ed5d04, Func Offset: 0x64
}

// 
// Start address: 0x1ed5d10
int ev_pasthome_cm11_th_draw(sfObj* obj)
{
	// Line 164, Address: 0x1ed5d10, Func Offset: 0
	// Func End, Address: 0x1ed5d18, Func Offset: 0x8
	// Line 767, Address: 0x1ed5d10, Func Offset: 0
	// Line 768, Address: 0x1ed5d18, Func Offset: 0x8
	// Line 770, Address: 0x1ed5d20, Func Offset: 0x10
	// Line 769, Address: 0x1ed5d24, Func Offset: 0x14
	// Line 770, Address: 0x1ed5d28, Func Offset: 0x18
	// Func End, Address: 0x1ed5d30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5d30
int ev_pasthome_cm11_th_end(sfObj* obj)
{
	// Line 173, Address: 0x1ed5d30, Func Offset: 0
	// Line 174, Address: 0x1ed5d44, Func Offset: 0x14
	// Line 179, Address: 0x1ed5d4c, Func Offset: 0x1c
	// Line 180, Address: 0x1ed5d54, Func Offset: 0x24
	// Line 181, Address: 0x1ed5d5c, Func Offset: 0x2c
	// Line 183, Address: 0x1ed5d68, Func Offset: 0x38
	// Func End, Address: 0x1ed5d7c, Func Offset: 0x4c
	// Line 920, Address: 0x1ed5d30, Func Offset: 0
	// Line 924, Address: 0x1ed5d34, Func Offset: 0x4
	// Line 920, Address: 0x1ed5d38, Func Offset: 0x8
	// Line 922, Address: 0x1ed5d40, Func Offset: 0x10
	// Line 924, Address: 0x1ed5d44, Func Offset: 0x14
	// Line 925, Address: 0x1ed5d4c, Func Offset: 0x1c
	// Line 926, Address: 0x1ed5d68, Func Offset: 0x38
	// Line 928, Address: 0x1ed5d78, Func Offset: 0x48
	// Line 930, Address: 0x1ed5d80, Func Offset: 0x50
	// Line 931, Address: 0x1ed5d8c, Func Offset: 0x5c
	// Line 938, Address: 0x1ed5d94, Func Offset: 0x64
	// Line 937, Address: 0x1ed5d98, Func Offset: 0x68
	// Line 938, Address: 0x1ed5d9c, Func Offset: 0x6c
	// Func End, Address: 0x1ed5da8, Func Offset: 0x78
	// Line 772, Address: 0x1ed5d30, Func Offset: 0
	// Line 773, Address: 0x1ed5d38, Func Offset: 0x8
	// Line 775, Address: 0x1ed5d40, Func Offset: 0x10
	// Line 774, Address: 0x1ed5d44, Func Offset: 0x14
	// Line 775, Address: 0x1ed5d48, Func Offset: 0x18
	// Func End, Address: 0x1ed5d50, Func Offset: 0x20
}

// 
// Start address: 0x1ed5d50
int ev_pasthome_cm11_wm_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 778, Address: 0x1ed5d50, Func Offset: 0
	// Line 779, Address: 0x1ed5d54, Func Offset: 0x4
	// Line 778, Address: 0x1ed5d58, Func Offset: 0x8
	// Line 779, Address: 0x1ed5d5c, Func Offset: 0xc
	// Line 780, Address: 0x1ed5d68, Func Offset: 0x18
	// Line 781, Address: 0x1ed5d70, Func Offset: 0x20
	// Func End, Address: 0x1ed5d7c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed5d80
int ev_pasthome_cm11_wm_exec(sfObj* obj)
{
	float pos[4];
	// Line 190, Address: 0x1ed5d80, Func Offset: 0
	// Line 192, Address: 0x1ed5d94, Func Offset: 0x14
	// Line 194, Address: 0x1ed5da0, Func Offset: 0x20
	// Line 195, Address: 0x1ed5da8, Func Offset: 0x28
	// Line 196, Address: 0x1ed5de0, Func Offset: 0x60
	// Line 197, Address: 0x1ed5dec, Func Offset: 0x6c
	// Line 198, Address: 0x1ed5df4, Func Offset: 0x74
	// Line 200, Address: 0x1ed5dfc, Func Offset: 0x7c
	// Line 198, Address: 0x1ed5e00, Func Offset: 0x80
	// Line 202, Address: 0x1ed5e04, Func Offset: 0x84
	// Line 203, Address: 0x1ed5e0c, Func Offset: 0x8c
	// Line 204, Address: 0x1ed5e44, Func Offset: 0xc4
	// Line 205, Address: 0x1ed5e50, Func Offset: 0xd0
	// Line 206, Address: 0x1ed5e58, Func Offset: 0xd8
	// Line 210, Address: 0x1ed5e60, Func Offset: 0xe0
	// Line 211, Address: 0x1ed5e74, Func Offset: 0xf4
	// Line 213, Address: 0x1ed5e7c, Func Offset: 0xfc
	// Line 215, Address: 0x1ed5e88, Func Offset: 0x108
	// Line 218, Address: 0x1ed5eb4, Func Offset: 0x134
	// Line 221, Address: 0x1ed5ebc, Func Offset: 0x13c
	// Line 225, Address: 0x1ed5ec0, Func Offset: 0x140
	// Line 221, Address: 0x1ed5ec8, Func Offset: 0x148
	// Line 222, Address: 0x1ed5ecc, Func Offset: 0x14c
	// Line 223, Address: 0x1ed5ed4, Func Offset: 0x154
	// Line 225, Address: 0x1ed5edc, Func Offset: 0x15c
	// Line 227, Address: 0x1ed5ee4, Func Offset: 0x164
	// Line 228, Address: 0x1ed5ee8, Func Offset: 0x168
	// Func End, Address: 0x1ed5f00, Func Offset: 0x180
	// Line 783, Address: 0x1ed5d80, Func Offset: 0
	// Line 785, Address: 0x1ed5d84, Func Offset: 0x4
	// Line 783, Address: 0x1ed5d88, Func Offset: 0x8
	// Line 785, Address: 0x1ed5d94, Func Offset: 0x14
	// Line 786, Address: 0x1ed5d9c, Func Offset: 0x1c
	// Line 787, Address: 0x1ed5dc8, Func Offset: 0x48
	// Line 789, Address: 0x1ed5dd0, Func Offset: 0x50
	// Line 788, Address: 0x1ed5dd4, Func Offset: 0x54
	// Line 789, Address: 0x1ed5dd8, Func Offset: 0x58
	// Func End, Address: 0x1ed5de4, Func Offset: 0x64
}

// 
// Start address: 0x1ed5df0
int ev_pasthome_cm11_wm_draw(sfObj* obj)
{
	// Line 791, Address: 0x1ed5df0, Func Offset: 0
	// Line 792, Address: 0x1ed5df8, Func Offset: 0x8
	// Line 794, Address: 0x1ed5e00, Func Offset: 0x10
	// Line 793, Address: 0x1ed5e04, Func Offset: 0x14
	// Line 794, Address: 0x1ed5e08, Func Offset: 0x18
	// Func End, Address: 0x1ed5e10, Func Offset: 0x20
}

// 
// Start address: 0x1ed5e10
int ev_pasthome_cm11_wm_end(sfObj* obj)
{
	// Line 123, Address: 0x1ed5e10, Func Offset: 0
	// Line 125, Address: 0x1ed5e18, Func Offset: 0x8
	// Line 127, Address: 0x1ed5e20, Func Offset: 0x10
	// Line 128, Address: 0x1ed5e34, Func Offset: 0x24
	// Line 129, Address: 0x1ed5e48, Func Offset: 0x38
	// Line 135, Address: 0x1ed5e50, Func Offset: 0x40
	// Line 132, Address: 0x1ed5e54, Func Offset: 0x44
	// Line 135, Address: 0x1ed5e58, Func Offset: 0x48
	// Line 132, Address: 0x1ed5e5c, Func Offset: 0x4c
	// Line 135, Address: 0x1ed5e68, Func Offset: 0x58
	// Line 138, Address: 0x1ed5e70, Func Offset: 0x60
	// Line 137, Address: 0x1ed5e74, Func Offset: 0x64
	// Line 138, Address: 0x1ed5e78, Func Offset: 0x68
	// Func End, Address: 0x1ed5e80, Func Offset: 0x70
	// Line 796, Address: 0x1ed5e10, Func Offset: 0
	// Line 797, Address: 0x1ed5e18, Func Offset: 0x8
	// Line 799, Address: 0x1ed5e20, Func Offset: 0x10
	// Line 798, Address: 0x1ed5e24, Func Offset: 0x14
	// Line 799, Address: 0x1ed5e28, Func Offset: 0x18
	// Func End, Address: 0x1ed5e30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5e30
int ev_pasthome_cm15_hiseki_init(sfObj* obj)
{
	_evCmnBgObjData dat;
	// Line 804, Address: 0x1ed5e30, Func Offset: 0
	// Line 805, Address: 0x1ed5e34, Func Offset: 0x4
	// Line 804, Address: 0x1ed5e38, Func Offset: 0x8
	// Line 805, Address: 0x1ed5e3c, Func Offset: 0xc
	// Line 806, Address: 0x1ed5e50, Func Offset: 0x20
	// Line 808, Address: 0x1ed5e58, Func Offset: 0x28
	// Line 807, Address: 0x1ed5e5c, Func Offset: 0x2c
	// Line 808, Address: 0x1ed5e60, Func Offset: 0x30
	// Func End, Address: 0x1ed5e68, Func Offset: 0x38
}

// 
// Start address: 0x1ed5e70
int ev_pasthome_cm15_hiseki_draw(sfObj* obj)
{
	// Line 809, Address: 0x1ed5e70, Func Offset: 0
	// Line 810, Address: 0x1ed5e74, Func Offset: 0x4
	// Line 809, Address: 0x1ed5e78, Func Offset: 0x8
	// Line 810, Address: 0x1ed5e7c, Func Offset: 0xc
	// Line 811, Address: 0x1ed5e8c, Func Offset: 0x1c
	// Line 813, Address: 0x1ed5e98, Func Offset: 0x28
	// Line 812, Address: 0x1ed5e9c, Func Offset: 0x2c
	// Line 813, Address: 0x1ed5ea0, Func Offset: 0x30
	// Func End, Address: 0x1ed5ea8, Func Offset: 0x38
}

// 
// Start address: 0x1ed5eb0
int ev_pasthome_cm12_th_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 971, Address: 0x1ed5eb0, Func Offset: 0
	// Line 974, Address: 0x1ed5eb4, Func Offset: 0x4
	// Line 971, Address: 0x1ed5eb8, Func Offset: 0x8
	// Line 974, Address: 0x1ed5ebc, Func Offset: 0xc
	// Line 971, Address: 0x1ed5ec0, Func Offset: 0x10
	// Line 974, Address: 0x1ed5ec4, Func Offset: 0x14
	// Line 971, Address: 0x1ed5ec8, Func Offset: 0x18
	// Line 974, Address: 0x1ed5ecc, Func Offset: 0x1c
	// Line 971, Address: 0x1ed5ed0, Func Offset: 0x20
	// Line 974, Address: 0x1ed5ef0, Func Offset: 0x40
	// Line 976, Address: 0x1ed5ef4, Func Offset: 0x44
	// Line 977, Address: 0x1ed5efc, Func Offset: 0x4c
	// Line 979, Address: 0x1ed5f00, Func Offset: 0x50
	// Line 982, Address: 0x1ed5f18, Func Offset: 0x68
	// Line 980, Address: 0x1ed5f24, Func Offset: 0x74
	// Line 982, Address: 0x1ed5f28, Func Offset: 0x78
	// Line 983, Address: 0x1ed5f38, Func Offset: 0x88
	// Line 982, Address: 0x1ed5f3c, Func Offset: 0x8c
	// Line 983, Address: 0x1ed5f48, Func Offset: 0x98
	// Line 984, Address: 0x1ed5f80, Func Offset: 0xd0
	// Line 983, Address: 0x1ed5f84, Func Offset: 0xd4
	// Line 984, Address: 0x1ed5f9c, Func Offset: 0xec
	// Line 985, Address: 0x1ed5fd8, Func Offset: 0x128
	// Line 984, Address: 0x1ed5fdc, Func Offset: 0x12c
	// Line 985, Address: 0x1ed5ff4, Func Offset: 0x144
	// Line 986, Address: 0x1ed6020, Func Offset: 0x170
	// Line 985, Address: 0x1ed6024, Func Offset: 0x174
	// Line 988, Address: 0x1ed6030, Func Offset: 0x180
	// Line 985, Address: 0x1ed603c, Func Offset: 0x18c
	// Line 986, Address: 0x1ed6044, Func Offset: 0x194
	// Line 988, Address: 0x1ed604c, Func Offset: 0x19c
	// Line 990, Address: 0x1ed605c, Func Offset: 0x1ac
	// Line 992, Address: 0x1ed6064, Func Offset: 0x1b4
	// Line 997, Address: 0x1ed6068, Func Offset: 0x1b8
	// Line 992, Address: 0x1ed6070, Func Offset: 0x1c0
	// Line 997, Address: 0x1ed607c, Func Offset: 0x1cc
	// Line 1000, Address: 0x1ed6084, Func Offset: 0x1d4
	// Line 1001, Address: 0x1ed6090, Func Offset: 0x1e0
	// Line 1003, Address: 0x1ed6098, Func Offset: 0x1e8
	// Line 1009, Address: 0x1ed60a0, Func Offset: 0x1f0
	// Line 1008, Address: 0x1ed60a4, Func Offset: 0x1f4
	// Line 1009, Address: 0x1ed60a8, Func Offset: 0x1f8
	// Line 1008, Address: 0x1ed60ac, Func Offset: 0x1fc
	// Line 1009, Address: 0x1ed60b0, Func Offset: 0x200
	// Line 1010, Address: 0x1ed60c8, Func Offset: 0x218
	// Line 1015, Address: 0x1ed60d4, Func Offset: 0x224
	// Line 1010, Address: 0x1ed60dc, Func Offset: 0x22c
	// Line 1011, Address: 0x1ed6128, Func Offset: 0x278
	// Line 1012, Address: 0x1ed6164, Func Offset: 0x2b4
	// Line 1014, Address: 0x1ed617c, Func Offset: 0x2cc
	// Line 1012, Address: 0x1ed6180, Func Offset: 0x2d0
	// Line 1013, Address: 0x1ed6184, Func Offset: 0x2d4
	// Line 1014, Address: 0x1ed618c, Func Offset: 0x2dc
	// Line 1015, Address: 0x1ed6190, Func Offset: 0x2e0
	// Line 1017, Address: 0x1ed6198, Func Offset: 0x2e8
	// Line 1016, Address: 0x1ed619c, Func Offset: 0x2ec
	// Line 1017, Address: 0x1ed61a0, Func Offset: 0x2f0
	// Line 1020, Address: 0x1ed61ac, Func Offset: 0x2fc
	// Line 1022, Address: 0x1ed61b4, Func Offset: 0x304
	// Line 1023, Address: 0x1ed61bc, Func Offset: 0x30c
	// Line 1024, Address: 0x1ed61c0, Func Offset: 0x310
	// Line 1027, Address: 0x1ed61c8, Func Offset: 0x318
	// Line 1028, Address: 0x1ed61d0, Func Offset: 0x320
	// Func End, Address: 0x1ed6200, Func Offset: 0x350
	// Line 820, Address: 0x1ed5eb0, Func Offset: 0
	// Line 821, Address: 0x1ed5eb4, Func Offset: 0x4
	// Line 820, Address: 0x1ed5eb8, Func Offset: 0x8
	// Line 821, Address: 0x1ed5ebc, Func Offset: 0xc
	// Line 822, Address: 0x1ed5ec8, Func Offset: 0x18
	// Line 824, Address: 0x1ed5ed0, Func Offset: 0x20
	// Line 823, Address: 0x1ed5ed4, Func Offset: 0x24
	// Line 824, Address: 0x1ed5ed8, Func Offset: 0x28
	// Func End, Address: 0x1ed5ee0, Func Offset: 0x30
}

// 
// Start address: 0x1ed5ee0
int ev_pasthome_cm12_th_exec(sfObj* obj)
{
	float pos[4];
	// Line 996, Address: 0x1ed5ee0, Func Offset: 0
	// Line 997, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 996, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 997, Address: 0x1ed5f00, Func Offset: 0x20
	// Line 998, Address: 0x1ed5f08, Func Offset: 0x28
	// Line 999, Address: 0x1ed5f24, Func Offset: 0x44
	// Line 1000, Address: 0x1ed5f34, Func Offset: 0x54
	// Line 1002, Address: 0x1ed5f4c, Func Offset: 0x6c
	// Line 1003, Address: 0x1ed5f5c, Func Offset: 0x7c
	// Line 1004, Address: 0x1ed5f78, Func Offset: 0x98
	// Line 1005, Address: 0x1ed5f88, Func Offset: 0xa8
	// Line 1006, Address: 0x1ed5fa4, Func Offset: 0xc4
	// Func End, Address: 0x1ed5fbc, Func Offset: 0xdc
	// Line 173, Address: 0x1ed5ee0, Func Offset: 0
	// Line 174, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 173, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 174, Address: 0x1ed5ef0, Func Offset: 0x10
	// Line 178, Address: 0x1ed5efc, Func Offset: 0x1c
	// Line 177, Address: 0x1ed5f00, Func Offset: 0x20
	// Line 178, Address: 0x1ed5f04, Func Offset: 0x24
	// Func End, Address: 0x1ed5f10, Func Offset: 0x30
	// Line 826, Address: 0x1ed5ee0, Func Offset: 0
	// Line 828, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 826, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 828, Address: 0x1ed5ef4, Func Offset: 0x14
	// Line 829, Address: 0x1ed5efc, Func Offset: 0x1c
	// Line 830, Address: 0x1ed5f28, Func Offset: 0x48
	// Line 832, Address: 0x1ed5f30, Func Offset: 0x50
	// Line 831, Address: 0x1ed5f34, Func Offset: 0x54
	// Line 832, Address: 0x1ed5f38, Func Offset: 0x58
	// Func End, Address: 0x1ed5f44, Func Offset: 0x64
}

// 
// Start address: 0x1ed5f50
int ev_pasthome_cm12_th_draw(sfObj* obj)
{
	// Line 248, Address: 0x1ed5f50, Func Offset: 0
	// Line 249, Address: 0x1ed5f5c, Func Offset: 0xc
	// Line 252, Address: 0x1ed5f64, Func Offset: 0x14
	// Line 253, Address: 0x1ed5f6c, Func Offset: 0x1c
	// Line 254, Address: 0x1ed5f70, Func Offset: 0x20
	// Func End, Address: 0x1ed5f7c, Func Offset: 0x2c
	// Line 834, Address: 0x1ed5f50, Func Offset: 0
	// Line 835, Address: 0x1ed5f58, Func Offset: 0x8
	// Line 837, Address: 0x1ed5f60, Func Offset: 0x10
	// Line 836, Address: 0x1ed5f64, Func Offset: 0x14
	// Line 837, Address: 0x1ed5f68, Func Offset: 0x18
	// Func End, Address: 0x1ed5f70, Func Offset: 0x20
}

// 
// Start address: 0x1ed5f70
int ev_pasthome_cm12_th_end(sfObj* obj)
{
	// Line 1719, Address: 0x1ed5f70, Func Offset: 0
	// Line 1720, Address: 0x1ed5f74, Func Offset: 0x4
	// Line 1719, Address: 0x1ed5f78, Func Offset: 0x8
	// Line 1720, Address: 0x1ed5f80, Func Offset: 0x10
	// Line 1722, Address: 0x1ed5f88, Func Offset: 0x18
	// Line 1723, Address: 0x1ed5f94, Func Offset: 0x24
	// Line 1724, Address: 0x1ed5fa0, Func Offset: 0x30
	// Func End, Address: 0x1ed5fb0, Func Offset: 0x40
	// Line 839, Address: 0x1ed5f70, Func Offset: 0
	// Line 840, Address: 0x1ed5f78, Func Offset: 0x8
	// Line 842, Address: 0x1ed5f80, Func Offset: 0x10
	// Line 841, Address: 0x1ed5f84, Func Offset: 0x14
	// Line 842, Address: 0x1ed5f88, Func Offset: 0x18
	// Func End, Address: 0x1ed5f90, Func Offset: 0x20
}

// 
// Start address: 0x1ed5f90
int ev_pasthome_cm12_ob_init(sfObj* obj)
{
	_evBgCharData dat;
	float rot[4];
	// Line 845, Address: 0x1ed5f90, Func Offset: 0
	// Line 846, Address: 0x1ed5f94, Func Offset: 0x4
	// Line 845, Address: 0x1ed5f98, Func Offset: 0x8
	// Line 846, Address: 0x1ed5f9c, Func Offset: 0xc
	// Line 845, Address: 0x1ed5fa0, Func Offset: 0x10
	// Line 846, Address: 0x1ed5fa4, Func Offset: 0x14
	// Line 847, Address: 0x1ed5fac, Func Offset: 0x1c
	// Line 846, Address: 0x1ed5fb8, Func Offset: 0x28
	// Line 847, Address: 0x1ed5fbc, Func Offset: 0x2c
	// Line 849, Address: 0x1ed5fc4, Func Offset: 0x34
	// Line 850, Address: 0x1ed5fcc, Func Offset: 0x3c
	// Line 852, Address: 0x1ed5fd8, Func Offset: 0x48
	// Line 851, Address: 0x1ed5fdc, Func Offset: 0x4c
	// Line 852, Address: 0x1ed5fe0, Func Offset: 0x50
	// Func End, Address: 0x1ed5fec, Func Offset: 0x5c
}

// 
// Start address: 0x1ed5ff0
int ev_pasthome_cm12_ob_exec(sfObj* obj)
{
	float pos[4];
	// Line 854, Address: 0x1ed5ff0, Func Offset: 0
	// Line 856, Address: 0x1ed5ff4, Func Offset: 0x4
	// Line 854, Address: 0x1ed5ff8, Func Offset: 0x8
	// Line 856, Address: 0x1ed6004, Func Offset: 0x14
	// Line 857, Address: 0x1ed600c, Func Offset: 0x1c
	// Line 858, Address: 0x1ed6038, Func Offset: 0x48
	// Line 860, Address: 0x1ed6040, Func Offset: 0x50
	// Line 859, Address: 0x1ed6044, Func Offset: 0x54
	// Line 860, Address: 0x1ed6048, Func Offset: 0x58
	// Func End, Address: 0x1ed6054, Func Offset: 0x64
}

// 
// Start address: 0x1ed6060
int ev_pasthome_cm12_ob_draw(sfObj* obj)
{
	// Line 862, Address: 0x1ed6060, Func Offset: 0
	// Line 863, Address: 0x1ed6068, Func Offset: 0x8
	// Line 865, Address: 0x1ed6070, Func Offset: 0x10
	// Line 864, Address: 0x1ed6074, Func Offset: 0x14
	// Line 865, Address: 0x1ed6078, Func Offset: 0x18
	// Func End, Address: 0x1ed6080, Func Offset: 0x20
}

// 
// Start address: 0x1ed6080
int ev_pasthome_cm12_ob_end(sfObj* obj)
{
	// Line 867, Address: 0x1ed6080, Func Offset: 0
	// Line 868, Address: 0x1ed6088, Func Offset: 0x8
	// Line 870, Address: 0x1ed6090, Func Offset: 0x10
	// Line 869, Address: 0x1ed6094, Func Offset: 0x14
	// Line 870, Address: 0x1ed6098, Func Offset: 0x18
	// Func End, Address: 0x1ed60a0, Func Offset: 0x20
}

// 
// Start address: 0x1ed60a0
int ev_pasthome_cm24_th_init(sfObj* obj)
{
	_evBgCharData dat;
	float rot[4];
	// Line 876, Address: 0x1ed60a0, Func Offset: 0
	// Line 877, Address: 0x1ed60a4, Func Offset: 0x4
	// Line 876, Address: 0x1ed60a8, Func Offset: 0x8
	// Line 877, Address: 0x1ed60ac, Func Offset: 0xc
	// Line 876, Address: 0x1ed60b0, Func Offset: 0x10
	// Line 877, Address: 0x1ed60b4, Func Offset: 0x14
	// Line 879, Address: 0x1ed60bc, Func Offset: 0x1c
	// Line 877, Address: 0x1ed60c8, Func Offset: 0x28
	// Line 879, Address: 0x1ed60cc, Func Offset: 0x2c
	// Line 880, Address: 0x1ed60d4, Func Offset: 0x34
	// Line 882, Address: 0x1ed60dc, Func Offset: 0x3c
	// Line 884, Address: 0x1ed60e8, Func Offset: 0x48
	// Line 883, Address: 0x1ed60ec, Func Offset: 0x4c
	// Line 884, Address: 0x1ed60f0, Func Offset: 0x50
	// Func End, Address: 0x1ed60fc, Func Offset: 0x5c
}

// 
// Start address: 0x1ed6100
int ev_pasthome_cm24_th_exec(sfObj* obj)
{
	float pos[4];
	// Line 126, Address: 0x1ed6100, Func Offset: 0
	// Line 127, Address: 0x1ed610c, Func Offset: 0xc
	// Line 128, Address: 0x1ed6114, Func Offset: 0x14
	// Line 129, Address: 0x1ed611c, Func Offset: 0x1c
	// Line 130, Address: 0x1ed6124, Func Offset: 0x24
	// Line 131, Address: 0x1ed612c, Func Offset: 0x2c
	// Func End, Address: 0x1ed613c, Func Offset: 0x3c
	// Line 886, Address: 0x1ed6100, Func Offset: 0
	// Line 888, Address: 0x1ed6104, Func Offset: 0x4
	// Line 886, Address: 0x1ed6108, Func Offset: 0x8
	// Line 888, Address: 0x1ed6114, Func Offset: 0x14
	// Line 889, Address: 0x1ed611c, Func Offset: 0x1c
	// Line 890, Address: 0x1ed6148, Func Offset: 0x48
	// Line 892, Address: 0x1ed6150, Func Offset: 0x50
	// Line 891, Address: 0x1ed6154, Func Offset: 0x54
	// Line 892, Address: 0x1ed6158, Func Offset: 0x58
	// Func End, Address: 0x1ed6164, Func Offset: 0x64
}

// 
// Start address: 0x1ed6170
int ev_pasthome_cm24_th_draw(sfObj* obj)
{
	// Line 894, Address: 0x1ed6170, Func Offset: 0
	// Line 895, Address: 0x1ed6178, Func Offset: 0x8
	// Line 897, Address: 0x1ed6180, Func Offset: 0x10
	// Line 896, Address: 0x1ed6184, Func Offset: 0x14
	// Line 897, Address: 0x1ed6188, Func Offset: 0x18
	// Func End, Address: 0x1ed6190, Func Offset: 0x20
}

// 
// Start address: 0x1ed6190
int ev_pasthome_cm24_th_end(sfObj* obj)
{
	// Line 269, Address: 0x1ed6190, Func Offset: 0
	// Line 274, Address: 0x1ed61a4, Func Offset: 0x14
	// Line 275, Address: 0x1ed61b4, Func Offset: 0x24
	// Line 276, Address: 0x1ed61bc, Func Offset: 0x2c
	// Line 277, Address: 0x1ed61c4, Func Offset: 0x34
	// Line 278, Address: 0x1ed61cc, Func Offset: 0x3c
	// Line 280, Address: 0x1ed61d0, Func Offset: 0x40
	// Line 281, Address: 0x1ed61e4, Func Offset: 0x54
	// Line 286, Address: 0x1ed61ec, Func Offset: 0x5c
	// Line 289, Address: 0x1ed61f8, Func Offset: 0x68
	// Line 291, Address: 0x1ed6200, Func Offset: 0x70
	// Line 294, Address: 0x1ed622c, Func Offset: 0x9c
	// Line 298, Address: 0x1ed6230, Func Offset: 0xa0
	// Line 294, Address: 0x1ed6238, Func Offset: 0xa8
	// Line 295, Address: 0x1ed623c, Func Offset: 0xac
	// Line 296, Address: 0x1ed6244, Func Offset: 0xb4
	// Line 298, Address: 0x1ed624c, Func Offset: 0xbc
	// Line 299, Address: 0x1ed6254, Func Offset: 0xc4
	// Line 300, Address: 0x1ed6264, Func Offset: 0xd4
	// Line 301, Address: 0x1ed6268, Func Offset: 0xd8
	// Func End, Address: 0x1ed6280, Func Offset: 0xf0
	// Line 899, Address: 0x1ed6190, Func Offset: 0
	// Line 900, Address: 0x1ed6198, Func Offset: 0x8
	// Line 902, Address: 0x1ed61a0, Func Offset: 0x10
	// Line 901, Address: 0x1ed61a4, Func Offset: 0x14
	// Line 902, Address: 0x1ed61a8, Func Offset: 0x18
	// Func End, Address: 0x1ed61b0, Func Offset: 0x20
}

// 
// Start address: 0x1ed61b0
int ev_pasthome_cm24_wm_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 905, Address: 0x1ed61b0, Func Offset: 0
	// Line 906, Address: 0x1ed61b4, Func Offset: 0x4
	// Line 905, Address: 0x1ed61b8, Func Offset: 0x8
	// Line 906, Address: 0x1ed61bc, Func Offset: 0xc
	// Line 907, Address: 0x1ed61c8, Func Offset: 0x18
	// Line 908, Address: 0x1ed61d0, Func Offset: 0x20
	// Func End, Address: 0x1ed61dc, Func Offset: 0x2c
}

// 
// Start address: 0x1ed61e0
int ev_pasthome_cm24_wm_exec(sfObj* obj)
{
	float pos[4];
	// Line 910, Address: 0x1ed61e0, Func Offset: 0
	// Line 913, Address: 0x1ed61e4, Func Offset: 0x4
	// Line 910, Address: 0x1ed61e8, Func Offset: 0x8
	// Line 913, Address: 0x1ed61f4, Func Offset: 0x14
	// Line 916, Address: 0x1ed61fc, Func Offset: 0x1c
	// Line 917, Address: 0x1ed6244, Func Offset: 0x64
	// Line 919, Address: 0x1ed624c, Func Offset: 0x6c
	// Line 918, Address: 0x1ed6250, Func Offset: 0x70
	// Line 919, Address: 0x1ed6254, Func Offset: 0x74
	// Func End, Address: 0x1ed6260, Func Offset: 0x80
}

// 
// Start address: 0x1ed6260
int ev_pasthome_cm24_wm_draw(sfObj* obj)
{
	// Line 921, Address: 0x1ed6260, Func Offset: 0
	// Line 922, Address: 0x1ed6268, Func Offset: 0x8
	// Line 924, Address: 0x1ed6270, Func Offset: 0x10
	// Line 923, Address: 0x1ed6274, Func Offset: 0x14
	// Line 924, Address: 0x1ed6278, Func Offset: 0x18
	// Func End, Address: 0x1ed6280, Func Offset: 0x20
}

// 
// Start address: 0x1ed6280
int ev_pasthome_cm24_wm_end(sfObj* obj)
{
	// Line 305, Address: 0x1ed6280, Func Offset: 0
	// Line 306, Address: 0x1ed6290, Func Offset: 0x10
	// Line 309, Address: 0x1ed6298, Func Offset: 0x18
	// Line 311, Address: 0x1ed62a8, Func Offset: 0x28
	// Line 313, Address: 0x1ed62ac, Func Offset: 0x2c
	// Line 314, Address: 0x1ed62b0, Func Offset: 0x30
	// Func End, Address: 0x1ed62c0, Func Offset: 0x40
	// Line 926, Address: 0x1ed6280, Func Offset: 0
	// Line 927, Address: 0x1ed6288, Func Offset: 0x8
	// Line 929, Address: 0x1ed6290, Func Offset: 0x10
	// Line 928, Address: 0x1ed6294, Func Offset: 0x14
	// Line 929, Address: 0x1ed6298, Func Offset: 0x18
	// Func End, Address: 0x1ed62a0, Func Offset: 0x20
}

// 
// Start address: 0x1ed62a0
int ev_psthome0_203_trgchk()
{
	float pos[4];
	// Line 1968, Address: 0x1ed62a0, Func Offset: 0
	// Line 1970, Address: 0x1ed62a4, Func Offset: 0x4
	// Line 1968, Address: 0x1ed62a8, Func Offset: 0x8
	// Line 1970, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 1968, Address: 0x1ed62b0, Func Offset: 0x10
	// Line 1970, Address: 0x1ed62b4, Func Offset: 0x14
	// Line 1968, Address: 0x1ed62b8, Func Offset: 0x18
	// Line 1974, Address: 0x1ed62bc, Func Offset: 0x1c
	// Line 1968, Address: 0x1ed62c0, Func Offset: 0x20
	// Line 1974, Address: 0x1ed62c4, Func Offset: 0x24
	// Line 1969, Address: 0x1ed62c8, Func Offset: 0x28
	// Line 1970, Address: 0x1ed62cc, Func Offset: 0x2c
	// Line 1974, Address: 0x1ed62d0, Func Offset: 0x30
	// Line 1970, Address: 0x1ed62d8, Func Offset: 0x38
	// Line 1974, Address: 0x1ed62dc, Func Offset: 0x3c
	// Line 1981, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 1974, Address: 0x1ed62e4, Func Offset: 0x44
	// Line 1981, Address: 0x1ed62ec, Func Offset: 0x4c
	// Line 1982, Address: 0x1ed62f4, Func Offset: 0x54
	// Line 1983, Address: 0x1ed630c, Func Offset: 0x6c
	// Line 1984, Address: 0x1ed6318, Func Offset: 0x78
	// Line 1983, Address: 0x1ed631c, Func Offset: 0x7c
	// Line 1984, Address: 0x1ed6320, Func Offset: 0x80
	// Line 1983, Address: 0x1ed6324, Func Offset: 0x84
	// Line 1985, Address: 0x1ed633c, Func Offset: 0x9c
	// Line 1986, Address: 0x1ed6348, Func Offset: 0xa8
	// Line 1987, Address: 0x1ed6354, Func Offset: 0xb4
	// Line 1988, Address: 0x1ed636c, Func Offset: 0xcc
	// Line 1989, Address: 0x1ed6378, Func Offset: 0xd8
	// Line 1988, Address: 0x1ed637c, Func Offset: 0xdc
	// Line 1989, Address: 0x1ed6380, Func Offset: 0xe0
	// Line 1988, Address: 0x1ed6384, Func Offset: 0xe4
	// Line 1989, Address: 0x1ed639c, Func Offset: 0xfc
	// Line 1993, Address: 0x1ed63a0, Func Offset: 0x100
	// Line 1996, Address: 0x1ed63b8, Func Offset: 0x118
	// Line 1999, Address: 0x1ed63c4, Func Offset: 0x124
	// Line 1998, Address: 0x1ed63c8, Func Offset: 0x128
	// Line 2000, Address: 0x1ed63cc, Func Offset: 0x12c
	// Line 2003, Address: 0x1ed63d8, Func Offset: 0x138
	// Line 2004, Address: 0x1ed63e0, Func Offset: 0x140
	// Line 2008, Address: 0x1ed63e8, Func Offset: 0x148
	// Line 2009, Address: 0x1ed6400, Func Offset: 0x160
	// Func End, Address: 0x1ed6418, Func Offset: 0x178
	// Line 290, Address: 0x1ed62a0, Func Offset: 0
	// Line 291, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 293, Address: 0x1ed62b0, Func Offset: 0x10
	// Line 294, Address: 0x1ed62b8, Func Offset: 0x18
	// Line 295, Address: 0x1ed62c0, Func Offset: 0x20
	// Line 296, Address: 0x1ed62d4, Func Offset: 0x34
	// Line 298, Address: 0x1ed62d8, Func Offset: 0x38
	// Line 296, Address: 0x1ed62dc, Func Offset: 0x3c
	// Line 298, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 296, Address: 0x1ed62e4, Func Offset: 0x44
	// Line 298, Address: 0x1ed62e8, Func Offset: 0x48
	// Line 296, Address: 0x1ed62ec, Func Offset: 0x4c
	// Line 298, Address: 0x1ed62f0, Func Offset: 0x50
	// Line 297, Address: 0x1ed62f8, Func Offset: 0x58
	// Line 299, Address: 0x1ed630c, Func Offset: 0x6c
	// Line 300, Address: 0x1ed6310, Func Offset: 0x70
	// Line 302, Address: 0x1ed6318, Func Offset: 0x78
	// Line 303, Address: 0x1ed6320, Func Offset: 0x80
	// Line 306, Address: 0x1ed6328, Func Offset: 0x88
	// Line 305, Address: 0x1ed632c, Func Offset: 0x8c
	// Line 306, Address: 0x1ed6330, Func Offset: 0x90
	// Func End, Address: 0x1ed633c, Func Offset: 0x9c
	// Line 946, Address: 0x1ed62a0, Func Offset: 0
	// Line 948, Address: 0x1ed62a4, Func Offset: 0x4
	// Line 946, Address: 0x1ed62a8, Func Offset: 0x8
	// Line 948, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 949, Address: 0x1ed62b4, Func Offset: 0x14
	// Line 950, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 951, Address: 0x1ed6300, Func Offset: 0x60
	// Func End, Address: 0x1ed630c, Func Offset: 0x6c
}

// 
// Start address: 0x1ed6310
int ev_psthome0_203_init()
{
	// Line 404, Address: 0x1ed6310, Func Offset: 0
	// Line 422, Address: 0x1ed6314, Func Offset: 0x4
	// Line 404, Address: 0x1ed6318, Func Offset: 0x8
	// Line 422, Address: 0x1ed6328, Func Offset: 0x18
	// Line 424, Address: 0x1ed6330, Func Offset: 0x20
	// Line 425, Address: 0x1ed6338, Func Offset: 0x28
	// Line 430, Address: 0x1ed6340, Func Offset: 0x30
	// Line 431, Address: 0x1ed6354, Func Offset: 0x44
	// Line 432, Address: 0x1ed636c, Func Offset: 0x5c
	// Line 434, Address: 0x1ed6370, Func Offset: 0x60
	// Line 432, Address: 0x1ed6374, Func Offset: 0x64
	// Line 434, Address: 0x1ed6378, Func Offset: 0x68
	// Line 432, Address: 0x1ed637c, Func Offset: 0x6c
	// Line 434, Address: 0x1ed6380, Func Offset: 0x70
	// Line 432, Address: 0x1ed6384, Func Offset: 0x74
	// Line 434, Address: 0x1ed6390, Func Offset: 0x80
	// Line 435, Address: 0x1ed6398, Func Offset: 0x88
	// Line 436, Address: 0x1ed63ac, Func Offset: 0x9c
	// Line 439, Address: 0x1ed63b0, Func Offset: 0xa0
	// Line 442, Address: 0x1ed63b8, Func Offset: 0xa8
	// Line 441, Address: 0x1ed63bc, Func Offset: 0xac
	// Line 442, Address: 0x1ed63c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed63d4, Func Offset: 0xc4
	// Line 331, Address: 0x1ed6310, Func Offset: 0
	// Line 332, Address: 0x1ed631c, Func Offset: 0xc
	// Line 336, Address: 0x1ed6324, Func Offset: 0x14
	// Line 337, Address: 0x1ed632c, Func Offset: 0x1c
	// Line 338, Address: 0x1ed6330, Func Offset: 0x20
	// Func End, Address: 0x1ed633c, Func Offset: 0x2c
	// Line 953, Address: 0x1ed6310, Func Offset: 0
	// Line 954, Address: 0x1ed6314, Func Offset: 0x4
	// Line 953, Address: 0x1ed6318, Func Offset: 0x8
	// Line 954, Address: 0x1ed631c, Func Offset: 0xc
	// Line 955, Address: 0x1ed6320, Func Offset: 0x10
	// Line 956, Address: 0x1ed6334, Func Offset: 0x24
	// Line 957, Address: 0x1ed633c, Func Offset: 0x2c
	// Line 958, Address: 0x1ed6348, Func Offset: 0x38
	// Line 959, Address: 0x1ed6350, Func Offset: 0x40
	// Line 958, Address: 0x1ed6354, Func Offset: 0x44
	// Line 959, Address: 0x1ed6358, Func Offset: 0x48
	// Line 960, Address: 0x1ed6360, Func Offset: 0x50
	// Line 961, Address: 0x1ed6368, Func Offset: 0x58
	// Line 964, Address: 0x1ed6388, Func Offset: 0x78
	// Line 963, Address: 0x1ed638c, Func Offset: 0x7c
	// Line 964, Address: 0x1ed6390, Func Offset: 0x80
	// Func End, Address: 0x1ed6398, Func Offset: 0x88
}

// 
// Start address: 0x1ed63a0
int ev_psthome0_203_exec()
{
	// Line 118, Address: 0x1ed63a0, Func Offset: 0
	// Line 119, Address: 0x1ed63a4, Func Offset: 0x4
	// Line 118, Address: 0x1ed63a8, Func Offset: 0x8
	// Line 119, Address: 0x1ed63ac, Func Offset: 0xc
	// Line 118, Address: 0x1ed63b0, Func Offset: 0x10
	// Line 119, Address: 0x1ed63b4, Func Offset: 0x14
	// Line 120, Address: 0x1ed63cc, Func Offset: 0x2c
	// Line 121, Address: 0x1ed63d4, Func Offset: 0x34
	// Func End, Address: 0x1ed63e4, Func Offset: 0x44
	// Line 967, Address: 0x1ed63a0, Func Offset: 0
	// Line 968, Address: 0x1ed63a4, Func Offset: 0x4
	// Line 967, Address: 0x1ed63a8, Func Offset: 0x8
	// Line 968, Address: 0x1ed63ac, Func Offset: 0xc
	// Line 969, Address: 0x1ed63b8, Func Offset: 0x18
	// Line 970, Address: 0x1ed63c0, Func Offset: 0x20
	// Line 971, Address: 0x1ed63d0, Func Offset: 0x30
	// Line 974, Address: 0x1ed63d8, Func Offset: 0x38
	// Line 973, Address: 0x1ed63dc, Func Offset: 0x3c
	// Line 974, Address: 0x1ed63e0, Func Offset: 0x40
	// Func End, Address: 0x1ed63e8, Func Offset: 0x48
}

// 
// Start address: 0x1ed63f0
int ev_psthome0_203_end()
{
	// Line 456, Address: 0x1ed63f0, Func Offset: 0
	// Line 458, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 460, Address: 0x1ed6400, Func Offset: 0x10
	// Line 459, Address: 0x1ed6404, Func Offset: 0x14
	// Line 460, Address: 0x1ed6408, Func Offset: 0x18
	// Func End, Address: 0x1ed6410, Func Offset: 0x20
	// Line 139, Address: 0x1ed63f0, Func Offset: 0
	// Func End, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 1110, Address: 0x1ed63f0, Func Offset: 0
	// Line 1111, Address: 0x1ed63f4, Func Offset: 0x4
	// Line 1110, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 1112, Address: 0x1ed6404, Func Offset: 0x14
	// Func End, Address: 0x1ed640c, Func Offset: 0x1c
	// Line 977, Address: 0x1ed63f0, Func Offset: 0
	// Line 979, Address: 0x1ed63f4, Func Offset: 0x4
	// Line 977, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 979, Address: 0x1ed63fc, Func Offset: 0xc
	// Line 980, Address: 0x1ed6408, Func Offset: 0x18
	// Line 981, Address: 0x1ed6410, Func Offset: 0x20
	// Line 982, Address: 0x1ed641c, Func Offset: 0x2c
	// Line 983, Address: 0x1ed6428, Func Offset: 0x38
	// Line 984, Address: 0x1ed6434, Func Offset: 0x44
	// Line 986, Address: 0x1ed6438, Func Offset: 0x48
	// Line 985, Address: 0x1ed643c, Func Offset: 0x4c
	// Line 986, Address: 0x1ed6440, Func Offset: 0x50
	// Func End, Address: 0x1ed6448, Func Offset: 0x58
}

// 
// Start address: 0x1ed6450
int ev_psthome0_curse_ringing_exec(sfObj* obj)
{
	int slot_id;
	// Line 1002, Address: 0x1ed6450, Func Offset: 0
	// Line 1005, Address: 0x1ed6454, Func Offset: 0x4
	// Line 1002, Address: 0x1ed6458, Func Offset: 0x8
	// Line 1005, Address: 0x1ed6460, Func Offset: 0x10
	// Line 1006, Address: 0x1ed647c, Func Offset: 0x2c
	// Line 1007, Address: 0x1ed6480, Func Offset: 0x30
	// Line 1009, Address: 0x1ed648c, Func Offset: 0x3c
	// Line 1010, Address: 0x1ed64a0, Func Offset: 0x50
	// Line 1011, Address: 0x1ed64bc, Func Offset: 0x6c
	// Line 1013, Address: 0x1ed64c4, Func Offset: 0x74
	// Line 1014, Address: 0x1ed64cc, Func Offset: 0x7c
	// Line 1015, Address: 0x1ed64d0, Func Offset: 0x80
	// Line 1019, Address: 0x1ed64f0, Func Offset: 0xa0
	// Line 1018, Address: 0x1ed64f8, Func Offset: 0xa8
	// Line 1019, Address: 0x1ed64fc, Func Offset: 0xac
	// Func End, Address: 0x1ed6504, Func Offset: 0xb4
}

// 
// Start address: 0x1ed6510
void wall_construct_cm01(_anon4* wk, int index)
{
	sgAnime* anm;
	// Line 1192, Address: 0x1ed6510, Func Offset: 0
	// Line 1193, Address: 0x1ed652c, Func Offset: 0x1c
	// Line 1196, Address: 0x1ed6538, Func Offset: 0x28
	// Line 1193, Address: 0x1ed653c, Func Offset: 0x2c
	// Line 1196, Address: 0x1ed6540, Func Offset: 0x30
	// Line 1200, Address: 0x1ed657c, Func Offset: 0x6c
	// Line 1201, Address: 0x1ed6588, Func Offset: 0x78
	// Line 1203, Address: 0x1ed65a8, Func Offset: 0x98
	// Line 1205, Address: 0x1ed65c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed65dc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed65e0
void Cm01WallConstruct1(sfObj* obj)
{
	// Line 1210, Address: 0x1ed65e0, Func Offset: 0
	// Line 1211, Address: 0x1ed65f0, Func Offset: 0x10
	// Line 1214, Address: 0x1ed65f8, Func Offset: 0x18
	// Line 1216, Address: 0x1ed6608, Func Offset: 0x28
	// Line 1219, Address: 0x1ed6610, Func Offset: 0x30
	// Line 1222, Address: 0x1ed6618, Func Offset: 0x38
	// Func End, Address: 0x1ed6628, Func Offset: 0x48
}

// 
// Start address: 0x1ed6630
void Cm01WallConstruct2(sfObj* obj)
{
	// Line 1241, Address: 0x1ed6630, Func Offset: 0
	// Line 1242, Address: 0x1ed6634, Func Offset: 0x4
	// Line 1241, Address: 0x1ed6638, Func Offset: 0x8
	// Line 1242, Address: 0x1ed663c, Func Offset: 0xc
	// Line 1244, Address: 0x1ed6650, Func Offset: 0x20
	// Line 1245, Address: 0x1ed6658, Func Offset: 0x28
	// Func End, Address: 0x1ed6664, Func Offset: 0x34
	// Line 1551, Address: 0x1ed6630, Func Offset: 0
	// Line 1552, Address: 0x1ed663c, Func Offset: 0xc
	// Line 1554, Address: 0x1ed6644, Func Offset: 0x14
	// Line 1555, Address: 0x1ed664c, Func Offset: 0x1c
	// Line 1557, Address: 0x1ed6650, Func Offset: 0x20
	// Line 1556, Address: 0x1ed6654, Func Offset: 0x24
	// Line 1557, Address: 0x1ed6658, Func Offset: 0x28
	// Func End, Address: 0x1ed6660, Func Offset: 0x30
	// Line 1226, Address: 0x1ed6630, Func Offset: 0
	// Line 1227, Address: 0x1ed6640, Func Offset: 0x10
	// Line 1230, Address: 0x1ed6648, Func Offset: 0x18
	// Line 1232, Address: 0x1ed6658, Func Offset: 0x28
	// Line 1235, Address: 0x1ed6660, Func Offset: 0x30
	// Line 1238, Address: 0x1ed6668, Func Offset: 0x38
	// Func End, Address: 0x1ed6678, Func Offset: 0x48
}

// 
// Start address: 0x1ed6680
void Cm01WallConstruct3(sfObj* obj)
{
	// Line 785, Address: 0x1ed6680, Func Offset: 0
	// Func End, Address: 0x1ed6688, Func Offset: 0x8
	// Line 1241, Address: 0x1ed6680, Func Offset: 0
	// Line 1242, Address: 0x1ed6690, Func Offset: 0x10
	// Line 1245, Address: 0x1ed6698, Func Offset: 0x18
	// Line 1247, Address: 0x1ed66a8, Func Offset: 0x28
	// Line 1250, Address: 0x1ed66b0, Func Offset: 0x30
	// Line 1253, Address: 0x1ed66b8, Func Offset: 0x38
	// Func End, Address: 0x1ed66c8, Func Offset: 0x48
}

// 
// Start address: 0x1ed66d0
void Cm01WallConstruct5(sfObj* obj)
{
	// Line 344, Address: 0x1ed66d0, Func Offset: 0
	// Line 346, Address: 0x1ed66d4, Func Offset: 0x4
	// Line 344, Address: 0x1ed66d8, Func Offset: 0x8
	// Line 346, Address: 0x1ed66dc, Func Offset: 0xc
	// Line 349, Address: 0x1ed66fc, Func Offset: 0x2c
	// Func End, Address: 0x1ed6708, Func Offset: 0x38
	// Line 1273, Address: 0x1ed66d0, Func Offset: 0
	// Line 1274, Address: 0x1ed66e0, Func Offset: 0x10
	// Line 1277, Address: 0x1ed66e8, Func Offset: 0x18
	// Line 1279, Address: 0x1ed66f8, Func Offset: 0x28
	// Line 1282, Address: 0x1ed6700, Func Offset: 0x30
	// Line 1285, Address: 0x1ed6708, Func Offset: 0x38
	// Func End, Address: 0x1ed6718, Func Offset: 0x48
}

// 
// Start address: 0x1ed6720
void wall_construct_cm02(_anon4* wk, int index)
{
	sgAnime* anm;
	// Line 52, Address: 0x1ed6720, Func Offset: 0
	// Line 55, Address: 0x1ed6730, Func Offset: 0x10
	// Func End, Address: 0x1ed6738, Func Offset: 0x18
	// Line 1289, Address: 0x1ed6720, Func Offset: 0
	// Line 1290, Address: 0x1ed673c, Func Offset: 0x1c
	// Line 1293, Address: 0x1ed6748, Func Offset: 0x28
	// Line 1290, Address: 0x1ed674c, Func Offset: 0x2c
	// Line 1293, Address: 0x1ed6750, Func Offset: 0x30
	// Line 1297, Address: 0x1ed678c, Func Offset: 0x6c
	// Line 1298, Address: 0x1ed6798, Func Offset: 0x78
	// Line 1300, Address: 0x1ed67b8, Func Offset: 0x98
	// Line 1302, Address: 0x1ed67d0, Func Offset: 0xb0
	// Func End, Address: 0x1ed67ec, Func Offset: 0xcc
}

// 
// Start address: 0x1ed67f0
void Cm02WallConstruct1(sfObj* obj)
{
	// Line 434, Address: 0x1ed67f0, Func Offset: 0
	// Line 442, Address: 0x1ed67f4, Func Offset: 0x4
	// Line 434, Address: 0x1ed67f8, Func Offset: 0x8
	// Line 442, Address: 0x1ed67fc, Func Offset: 0xc
	// Line 444, Address: 0x1ed6804, Func Offset: 0x14
	// Line 443, Address: 0x1ed6808, Func Offset: 0x18
	// Line 444, Address: 0x1ed680c, Func Offset: 0x1c
	// Func End, Address: 0x1ed6814, Func Offset: 0x24
	// Line 1301, Address: 0x1ed67f0, Func Offset: 0
	// Line 1302, Address: 0x1ed67f4, Func Offset: 0x4
	// Line 1301, Address: 0x1ed67f8, Func Offset: 0x8
	// Line 1302, Address: 0x1ed67fc, Func Offset: 0xc
	// Line 1303, Address: 0x1ed6808, Func Offset: 0x18
	// Line 1304, Address: 0x1ed6810, Func Offset: 0x20
	// Func End, Address: 0x1ed681c, Func Offset: 0x2c
	// Line 1307, Address: 0x1ed67f0, Func Offset: 0
	// Line 1308, Address: 0x1ed6800, Func Offset: 0x10
	// Line 1311, Address: 0x1ed6808, Func Offset: 0x18
	// Line 1313, Address: 0x1ed6818, Func Offset: 0x28
	// Line 1316, Address: 0x1ed6820, Func Offset: 0x30
	// Line 1319, Address: 0x1ed6828, Func Offset: 0x38
	// Func End, Address: 0x1ed6838, Func Offset: 0x48
}

// 
// Start address: 0x1ed6840
void Cm02WallConstruct2(sfObj* obj)
{
	// Line 1323, Address: 0x1ed6840, Func Offset: 0
	// Line 1324, Address: 0x1ed6850, Func Offset: 0x10
	// Line 1327, Address: 0x1ed6858, Func Offset: 0x18
	// Line 1329, Address: 0x1ed6868, Func Offset: 0x28
	// Line 1332, Address: 0x1ed6870, Func Offset: 0x30
	// Line 1335, Address: 0x1ed6878, Func Offset: 0x38
	// Func End, Address: 0x1ed6888, Func Offset: 0x48
}

// 
// Start address: 0x1ed6890
void Cm02WallConstruct3(sfObj* obj)
{
	// Line 886, Address: 0x1ed6890, Func Offset: 0
	// Func End, Address: 0x1ed6898, Func Offset: 0x8
	// Line 1320, Address: 0x1ed6890, Func Offset: 0
	// Line 1321, Address: 0x1ed6894, Func Offset: 0x4
	// Line 1320, Address: 0x1ed6898, Func Offset: 0x8
	// Line 1321, Address: 0x1ed68a0, Func Offset: 0x10
	// Line 1322, Address: 0x1ed68b4, Func Offset: 0x24
	// Line 1324, Address: 0x1ed68bc, Func Offset: 0x2c
	// Line 1323, Address: 0x1ed68c0, Func Offset: 0x30
	// Line 1324, Address: 0x1ed68c4, Func Offset: 0x34
	// Func End, Address: 0x1ed68d0, Func Offset: 0x40
	// Line 1339, Address: 0x1ed6890, Func Offset: 0
	// Line 1340, Address: 0x1ed68a0, Func Offset: 0x10
	// Line 1343, Address: 0x1ed68a8, Func Offset: 0x18
	// Line 1345, Address: 0x1ed68b8, Func Offset: 0x28
	// Line 1348, Address: 0x1ed68c0, Func Offset: 0x30
	// Line 1351, Address: 0x1ed68c8, Func Offset: 0x38
	// Func End, Address: 0x1ed68d8, Func Offset: 0x48
}

// 
// Start address: 0x1ed68e0
void Cm02WallConstruct4(sfObj* obj)
{
	// Line 1355, Address: 0x1ed68e0, Func Offset: 0
	// Line 1356, Address: 0x1ed68f0, Func Offset: 0x10
	// Line 1359, Address: 0x1ed68f8, Func Offset: 0x18
	// Line 1361, Address: 0x1ed6908, Func Offset: 0x28
	// Line 1364, Address: 0x1ed6910, Func Offset: 0x30
	// Line 1367, Address: 0x1ed6918, Func Offset: 0x38
	// Func End, Address: 0x1ed6928, Func Offset: 0x48
}

// 
// Start address: 0x1ed6930
void wall_construct_cm03(_anon4* wk, int index)
{
	sgAnime* anm;
	// Line 2188, Address: 0x1ed6930, Func Offset: 0
	// Line 2191, Address: 0x1ed6938, Func Offset: 0x8
	// Line 2193, Address: 0x1ed6944, Func Offset: 0x14
	// Line 2192, Address: 0x1ed6948, Func Offset: 0x18
	// Line 2193, Address: 0x1ed694c, Func Offset: 0x1c
	// Func End, Address: 0x1ed6954, Func Offset: 0x24
	// Line 579, Address: 0x1ed6930, Func Offset: 0
	// Line 580, Address: 0x1ed6934, Func Offset: 0x4
	// Line 579, Address: 0x1ed6938, Func Offset: 0x8
	// Line 581, Address: 0x1ed6944, Func Offset: 0x14
	// Func End, Address: 0x1ed694c, Func Offset: 0x1c
	// Line 1371, Address: 0x1ed6930, Func Offset: 0
	// Line 1372, Address: 0x1ed694c, Func Offset: 0x1c
	// Line 1375, Address: 0x1ed6958, Func Offset: 0x28
	// Line 1372, Address: 0x1ed695c, Func Offset: 0x2c
	// Line 1375, Address: 0x1ed6960, Func Offset: 0x30
	// Line 1379, Address: 0x1ed699c, Func Offset: 0x6c
	// Line 1380, Address: 0x1ed69a8, Func Offset: 0x78
	// Line 1382, Address: 0x1ed69c8, Func Offset: 0x98
	// Line 1384, Address: 0x1ed69e0, Func Offset: 0xb0
	// Func End, Address: 0x1ed69fc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed6a00
void Cm03WallConstruct1(sfObj* obj)
{
	// Line 95, Address: 0x1ed6a00, Func Offset: 0
	// Line 97, Address: 0x1ed6a04, Func Offset: 0x4
	// Line 95, Address: 0x1ed6a08, Func Offset: 0x8
	// Line 97, Address: 0x1ed6a0c, Func Offset: 0xc
	// Line 95, Address: 0x1ed6a10, Func Offset: 0x10
	// Line 97, Address: 0x1ed6a14, Func Offset: 0x14
	// Line 99, Address: 0x1ed6a1c, Func Offset: 0x1c
	// Line 100, Address: 0x1ed6a28, Func Offset: 0x28
	// Line 101, Address: 0x1ed6a30, Func Offset: 0x30
	// Line 102, Address: 0x1ed6a34, Func Offset: 0x34
	// Line 103, Address: 0x1ed6a3c, Func Offset: 0x3c
	// Line 104, Address: 0x1ed6a44, Func Offset: 0x44
	// Line 106, Address: 0x1ed6a48, Func Offset: 0x48
	// Line 107, Address: 0x1ed6a6c, Func Offset: 0x6c
	// Line 108, Address: 0x1ed6a70, Func Offset: 0x70
	// Line 110, Address: 0x1ed6ab0, Func Offset: 0xb0
	// Line 112, Address: 0x1ed6ad8, Func Offset: 0xd8
	// Line 111, Address: 0x1ed6adc, Func Offset: 0xdc
	// Line 112, Address: 0x1ed6ae0, Func Offset: 0xe0
	// Line 111, Address: 0x1ed6ae4, Func Offset: 0xe4
	// Line 112, Address: 0x1ed6ae8, Func Offset: 0xe8
	// Line 111, Address: 0x1ed6aec, Func Offset: 0xec
	// Line 112, Address: 0x1ed6af0, Func Offset: 0xf0
	// Line 114, Address: 0x1ed6af4, Func Offset: 0xf4
	// Line 115, Address: 0x1ed6afc, Func Offset: 0xfc
	// Line 116, Address: 0x1ed6b00, Func Offset: 0x100
	// Line 118, Address: 0x1ed6b1c, Func Offset: 0x11c
	// Line 120, Address: 0x1ed6b40, Func Offset: 0x140
	// Line 119, Address: 0x1ed6b44, Func Offset: 0x144
	// Line 120, Address: 0x1ed6b48, Func Offset: 0x148
	// Line 119, Address: 0x1ed6b4c, Func Offset: 0x14c
	// Line 120, Address: 0x1ed6b50, Func Offset: 0x150
	// Line 119, Address: 0x1ed6b54, Func Offset: 0x154
	// Line 120, Address: 0x1ed6b58, Func Offset: 0x158
	// Line 124, Address: 0x1ed6b60, Func Offset: 0x160
	// Func End, Address: 0x1ed6b70, Func Offset: 0x170
	// Line 1389, Address: 0x1ed6a00, Func Offset: 0
	// Line 1390, Address: 0x1ed6a10, Func Offset: 0x10
	// Line 1393, Address: 0x1ed6a18, Func Offset: 0x18
	// Line 1395, Address: 0x1ed6a28, Func Offset: 0x28
	// Line 1398, Address: 0x1ed6a30, Func Offset: 0x30
	// Line 1401, Address: 0x1ed6a38, Func Offset: 0x38
	// Func End, Address: 0x1ed6a48, Func Offset: 0x48
}

// 
// Start address: 0x1ed6a50
void Cm03WallConstruct2(sfObj* obj)
{
	// Line 1405, Address: 0x1ed6a50, Func Offset: 0
	// Line 1406, Address: 0x1ed6a60, Func Offset: 0x10
	// Line 1409, Address: 0x1ed6a68, Func Offset: 0x18
	// Line 1411, Address: 0x1ed6a78, Func Offset: 0x28
	// Line 1414, Address: 0x1ed6a80, Func Offset: 0x30
	// Line 1417, Address: 0x1ed6a88, Func Offset: 0x38
	// Func End, Address: 0x1ed6a98, Func Offset: 0x48
}

// 
// Start address: 0x1ed6aa0
void Cm03WallConstruct3(sfObj* obj)
{
	// Line 1421, Address: 0x1ed6aa0, Func Offset: 0
	// Line 1422, Address: 0x1ed6ab0, Func Offset: 0x10
	// Line 1425, Address: 0x1ed6ab8, Func Offset: 0x18
	// Line 1427, Address: 0x1ed6ac8, Func Offset: 0x28
	// Line 1430, Address: 0x1ed6ad0, Func Offset: 0x30
	// Line 1433, Address: 0x1ed6ad8, Func Offset: 0x38
	// Func End, Address: 0x1ed6ae8, Func Offset: 0x48
}

// 
// Start address: 0x1ed6af0
void wall_construct_cm11(_anon4* wk, int index)
{
	sgAnime* anm;
	// Line 1437, Address: 0x1ed6af0, Func Offset: 0
	// Line 1438, Address: 0x1ed6b0c, Func Offset: 0x1c
	// Line 1441, Address: 0x1ed6b18, Func Offset: 0x28
	// Line 1438, Address: 0x1ed6b1c, Func Offset: 0x2c
	// Line 1441, Address: 0x1ed6b20, Func Offset: 0x30
	// Line 1445, Address: 0x1ed6b5c, Func Offset: 0x6c
	// Line 1446, Address: 0x1ed6b68, Func Offset: 0x78
	// Line 1448, Address: 0x1ed6b88, Func Offset: 0x98
	// Line 1450, Address: 0x1ed6ba0, Func Offset: 0xb0
	// Func End, Address: 0x1ed6bbc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed6bc0
void Cm11WallConstruct1(sfObj* obj)
{
	// Line 1455, Address: 0x1ed6bc0, Func Offset: 0
	// Line 1456, Address: 0x1ed6bd0, Func Offset: 0x10
	// Line 1459, Address: 0x1ed6bd8, Func Offset: 0x18
	// Line 1461, Address: 0x1ed6be8, Func Offset: 0x28
	// Line 1464, Address: 0x1ed6bf0, Func Offset: 0x30
	// Line 1467, Address: 0x1ed6bf8, Func Offset: 0x38
	// Func End, Address: 0x1ed6c08, Func Offset: 0x48
}

// 
// Start address: 0x1ed6c10
void Cm11WallConstruct2(sfObj* obj)
{
	// Line 181, Address: 0x1ed6c10, Func Offset: 0
	// Line 184, Address: 0x1ed6c14, Func Offset: 0x4
	// Line 181, Address: 0x1ed6c18, Func Offset: 0x8
	// Line 184, Address: 0x1ed6c28, Func Offset: 0x18
	// Line 186, Address: 0x1ed6c50, Func Offset: 0x40
	// Line 187, Address: 0x1ed6c74, Func Offset: 0x64
	// Line 191, Address: 0x1ed6c80, Func Offset: 0x70
	// Line 194, Address: 0x1ed6c90, Func Offset: 0x80
	// Line 197, Address: 0x1ed6cac, Func Offset: 0x9c
	// Line 199, Address: 0x1ed6cb4, Func Offset: 0xa4
	// Line 201, Address: 0x1ed6cd8, Func Offset: 0xc8
	// Line 203, Address: 0x1ed6ce0, Func Offset: 0xd0
	// Line 206, Address: 0x1ed6ce8, Func Offset: 0xd8
	// Line 208, Address: 0x1ed6cf8, Func Offset: 0xe8
	// Line 211, Address: 0x1ed6d04, Func Offset: 0xf4
	// Line 213, Address: 0x1ed6d08, Func Offset: 0xf8
	// Line 214, Address: 0x1ed6d0c, Func Offset: 0xfc
	// Func End, Address: 0x1ed6d20, Func Offset: 0x110
	// Line 1471, Address: 0x1ed6c10, Func Offset: 0
	// Line 1472, Address: 0x1ed6c20, Func Offset: 0x10
	// Line 1475, Address: 0x1ed6c28, Func Offset: 0x18
	// Line 1477, Address: 0x1ed6c38, Func Offset: 0x28
	// Line 1480, Address: 0x1ed6c40, Func Offset: 0x30
	// Line 1483, Address: 0x1ed6c48, Func Offset: 0x38
	// Func End, Address: 0x1ed6c58, Func Offset: 0x48
}

// 
// Start address: 0x1ed6c60
void Cm11WallConstruct3(sfObj* obj)
{
	// Line 1511, Address: 0x1ed6c60, Func Offset: 0
	// Line 1512, Address: 0x1ed6c64, Func Offset: 0x4
	// Line 1511, Address: 0x1ed6c68, Func Offset: 0x8
	// Line 1512, Address: 0x1ed6c70, Func Offset: 0x10
	// Line 1517, Address: 0x1ed6c78, Func Offset: 0x18
	// Line 1519, Address: 0x1ed6c80, Func Offset: 0x20
	// Line 1522, Address: 0x1ed6c88, Func Offset: 0x28
	// Line 1521, Address: 0x1ed6c8c, Func Offset: 0x2c
	// Line 1522, Address: 0x1ed6c90, Func Offset: 0x30
	// Func End, Address: 0x1ed6c9c, Func Offset: 0x3c
	// Line 1487, Address: 0x1ed6c60, Func Offset: 0
	// Line 1488, Address: 0x1ed6c70, Func Offset: 0x10
	// Line 1491, Address: 0x1ed6c78, Func Offset: 0x18
	// Line 1493, Address: 0x1ed6c88, Func Offset: 0x28
	// Line 1496, Address: 0x1ed6c90, Func Offset: 0x30
	// Line 1499, Address: 0x1ed6c98, Func Offset: 0x38
	// Func End, Address: 0x1ed6ca8, Func Offset: 0x48
}

// 
// Start address: 0x1ed6cb0
void Cm11WallConstruct4(sfObj* obj)
{
	// Line 1503, Address: 0x1ed6cb0, Func Offset: 0
	// Line 1504, Address: 0x1ed6cc0, Func Offset: 0x10
	// Line 1507, Address: 0x1ed6cc8, Func Offset: 0x18
	// Line 1509, Address: 0x1ed6cd8, Func Offset: 0x28
	// Line 1512, Address: 0x1ed6ce0, Func Offset: 0x30
	// Line 1515, Address: 0x1ed6ce8, Func Offset: 0x38
	// Func End, Address: 0x1ed6cf8, Func Offset: 0x48
}

// 
// Start address: 0x1ed6d00
void wall_construct_cm12(_anon4* wk, int index)
{
	sgAnime* anm;
	// Line 1519, Address: 0x1ed6d00, Func Offset: 0
	// Line 1520, Address: 0x1ed6d1c, Func Offset: 0x1c
	// Line 1523, Address: 0x1ed6d28, Func Offset: 0x28
	// Line 1520, Address: 0x1ed6d2c, Func Offset: 0x2c
	// Line 1523, Address: 0x1ed6d30, Func Offset: 0x30
	// Line 1527, Address: 0x1ed6d6c, Func Offset: 0x6c
	// Line 1528, Address: 0x1ed6d78, Func Offset: 0x78
	// Line 1530, Address: 0x1ed6d98, Func Offset: 0x98
	// Line 1532, Address: 0x1ed6db0, Func Offset: 0xb0
	// Func End, Address: 0x1ed6dcc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed6dd0
void Cm12WallConstruct1(sfObj* obj)
{
	// Line 1537, Address: 0x1ed6dd0, Func Offset: 0
	// Line 1538, Address: 0x1ed6de0, Func Offset: 0x10
	// Line 1541, Address: 0x1ed6de8, Func Offset: 0x18
	// Line 1543, Address: 0x1ed6df8, Func Offset: 0x28
	// Line 1546, Address: 0x1ed6e00, Func Offset: 0x30
	// Line 1549, Address: 0x1ed6e08, Func Offset: 0x38
	// Func End, Address: 0x1ed6e18, Func Offset: 0x48
}

// 
// Start address: 0x1ed6e20
void Cm12WallConstruct2(sfObj* obj)
{
	// Line 1553, Address: 0x1ed6e20, Func Offset: 0
	// Line 1554, Address: 0x1ed6e30, Func Offset: 0x10
	// Line 1557, Address: 0x1ed6e38, Func Offset: 0x18
	// Line 1559, Address: 0x1ed6e48, Func Offset: 0x28
	// Line 1562, Address: 0x1ed6e50, Func Offset: 0x30
	// Line 1565, Address: 0x1ed6e58, Func Offset: 0x38
	// Func End, Address: 0x1ed6e68, Func Offset: 0x48
}

// 
// Start address: 0x1ed6e70
void Cm12WallConstruct3(sfObj* obj)
{
	// Line 2422, Address: 0x1ed6e70, Func Offset: 0
	// Line 2428, Address: 0x1ed6e74, Func Offset: 0x4
	// Line 2422, Address: 0x1ed6e78, Func Offset: 0x8
	// Line 2428, Address: 0x1ed6e7c, Func Offset: 0xc
	// Line 2431, Address: 0x1ed6e8c, Func Offset: 0x1c
	// Line 2432, Address: 0x1ed6ea8, Func Offset: 0x38
	// Line 2434, Address: 0x1ed6ec4, Func Offset: 0x54
	// Line 2439, Address: 0x1ed6ec8, Func Offset: 0x58
	// Line 2434, Address: 0x1ed6ecc, Func Offset: 0x5c
	// Line 2435, Address: 0x1ed6ed0, Func Offset: 0x60
	// Line 2439, Address: 0x1ed6ed8, Func Offset: 0x68
	// Line 2435, Address: 0x1ed6edc, Func Offset: 0x6c
	// Line 2436, Address: 0x1ed6ee0, Func Offset: 0x70
	// Line 2439, Address: 0x1ed6ee4, Func Offset: 0x74
	// Line 2440, Address: 0x1ed6eec, Func Offset: 0x7c
	// Line 2441, Address: 0x1ed6ef8, Func Offset: 0x88
	// Line 2442, Address: 0x1ed6f14, Func Offset: 0xa4
	// Func End, Address: 0x1ed6f20, Func Offset: 0xb0
	// Line 1569, Address: 0x1ed6e70, Func Offset: 0
	// Line 1570, Address: 0x1ed6e80, Func Offset: 0x10
	// Line 1573, Address: 0x1ed6e88, Func Offset: 0x18
	// Line 1575, Address: 0x1ed6e98, Func Offset: 0x28
	// Line 1578, Address: 0x1ed6ea0, Func Offset: 0x30
	// Line 1581, Address: 0x1ed6ea8, Func Offset: 0x38
	// Func End, Address: 0x1ed6eb8, Func Offset: 0x48
}

// 
// Start address: 0x1ed6ec0
void wall_construct_cm24(_anon4* wk, int index)
{
	sgAnime* anm;
	// Line 1585, Address: 0x1ed6ec0, Func Offset: 0
	// Line 1586, Address: 0x1ed6edc, Func Offset: 0x1c
	// Line 1589, Address: 0x1ed6ee8, Func Offset: 0x28
	// Line 1586, Address: 0x1ed6eec, Func Offset: 0x2c
	// Line 1589, Address: 0x1ed6ef0, Func Offset: 0x30
	// Line 1593, Address: 0x1ed6f2c, Func Offset: 0x6c
	// Line 1594, Address: 0x1ed6f38, Func Offset: 0x78
	// Line 1596, Address: 0x1ed6f58, Func Offset: 0x98
	// Line 1598, Address: 0x1ed6f70, Func Offset: 0xb0
	// Func End, Address: 0x1ed6f8c, Func Offset: 0xcc
}

// 
// Start address: 0x1ed6f90
void Cm24WallConstruct1(sfObj* obj)
{
	// Line 1603, Address: 0x1ed6f90, Func Offset: 0
	// Line 1604, Address: 0x1ed6fa0, Func Offset: 0x10
	// Line 1607, Address: 0x1ed6fa8, Func Offset: 0x18
	// Line 1609, Address: 0x1ed6fb8, Func Offset: 0x28
	// Line 1612, Address: 0x1ed6fc0, Func Offset: 0x30
	// Line 1615, Address: 0x1ed6fc8, Func Offset: 0x38
	// Func End, Address: 0x1ed6fd8, Func Offset: 0x48
}

// 
// Start address: 0x1ed6fe0
void Cm24WallConstruct2(sfObj* obj)
{
	// Line 281, Address: 0x1ed6fe0, Func Offset: 0
	// Line 282, Address: 0x1ed6fe4, Func Offset: 0x4
	// Line 281, Address: 0x1ed6fe8, Func Offset: 0x8
	// Line 283, Address: 0x1ed6ff4, Func Offset: 0x14
	// Func End, Address: 0x1ed6ffc, Func Offset: 0x1c
	// Line 1619, Address: 0x1ed6fe0, Func Offset: 0
	// Line 1620, Address: 0x1ed6ff0, Func Offset: 0x10
	// Line 1623, Address: 0x1ed6ff8, Func Offset: 0x18
	// Line 1625, Address: 0x1ed7008, Func Offset: 0x28
	// Line 1628, Address: 0x1ed7010, Func Offset: 0x30
	// Line 1631, Address: 0x1ed7018, Func Offset: 0x38
	// Func End, Address: 0x1ed7028, Func Offset: 0x48
}

// 
// Start address: 0x1ed7030
void Cm24WallConstruct3(sfObj* obj)
{
	// Line 1678, Address: 0x1ed7030, Func Offset: 0
	// Line 1679, Address: 0x1ed7034, Func Offset: 0x4
	// Line 1678, Address: 0x1ed7038, Func Offset: 0x8
	// Line 1679, Address: 0x1ed7040, Func Offset: 0x10
	// Line 1680, Address: 0x1ed7048, Func Offset: 0x18
	// Line 1681, Address: 0x1ed7064, Func Offset: 0x34
	// Line 1682, Address: 0x1ed7080, Func Offset: 0x50
	// Line 1683, Address: 0x1ed7090, Func Offset: 0x60
	// Line 1684, Address: 0x1ed70a8, Func Offset: 0x78
	// Line 1685, Address: 0x1ed70b8, Func Offset: 0x88
	// Line 1686, Address: 0x1ed70d4, Func Offset: 0xa4
	// Func End, Address: 0x1ed70e4, Func Offset: 0xb4
	// Line 1635, Address: 0x1ed7030, Func Offset: 0
	// Line 1636, Address: 0x1ed7040, Func Offset: 0x10
	// Line 1639, Address: 0x1ed7048, Func Offset: 0x18
	// Line 1641, Address: 0x1ed7058, Func Offset: 0x28
	// Line 1644, Address: 0x1ed7060, Func Offset: 0x30
	// Line 1647, Address: 0x1ed7068, Func Offset: 0x38
	// Func End, Address: 0x1ed7078, Func Offset: 0x48
}

// 
// Start address: 0x1ed7080
void Cm24WallConstruct4(sfObj* obj)
{
	// Line 1651, Address: 0x1ed7080, Func Offset: 0
	// Line 1652, Address: 0x1ed7090, Func Offset: 0x10
	// Line 1655, Address: 0x1ed7098, Func Offset: 0x18
	// Line 1657, Address: 0x1ed70a8, Func Offset: 0x28
	// Line 1660, Address: 0x1ed70b0, Func Offset: 0x30
	// Line 1663, Address: 0x1ed70b8, Func Offset: 0x38
	// Func End, Address: 0x1ed70c8, Func Offset: 0x48
}

// 
// Start address: 0x1ed70d0
void CmWallExec(sfObj* obj)
{
	sgAnime* anm;
	// Line 1680, Address: 0x1ed70d0, Func Offset: 0
	// Line 1681, Address: 0x1ed70d4, Func Offset: 0x4
	// Line 1683, Address: 0x1ed70dc, Func Offset: 0xc
	// Line 1685, Address: 0x1ed70e4, Func Offset: 0x14
	// Line 1686, Address: 0x1ed70ec, Func Offset: 0x1c
	// Line 1687, Address: 0x1ed70f0, Func Offset: 0x20
	// Func End, Address: 0x1ed70fc, Func Offset: 0x2c
}

// 
// Start address: 0x1ed7100
void CmWallDestruct(sfObj* obj)
{
	// Line 1690, Address: 0x1ed7100, Func Offset: 0
	// Line 1691, Address: 0x1ed7104, Func Offset: 0x4
	// Line 1694, Address: 0x1ed710c, Func Offset: 0xc
	// Line 1695, Address: 0x1ed7114, Func Offset: 0x14
	// Line 1696, Address: 0x1ed7118, Func Offset: 0x18
	// Func End, Address: 0x1ed7124, Func Offset: 0x24
}

// 
// Start address: 0x1ed7130
void CmWallDraw(sfObj* obj)
{
	_anon4* wk;
	int a;
	// Line 350, Address: 0x1ed7130, Func Offset: 0
	// Line 359, Address: 0x1ed7138, Func Offset: 0x8
	// Line 361, Address: 0x1ed714c, Func Offset: 0x1c
	// Line 362, Address: 0x1ed7154, Func Offset: 0x24
	// Line 363, Address: 0x1ed7158, Func Offset: 0x28
	// Line 366, Address: 0x1ed7160, Func Offset: 0x30
	// Func End, Address: 0x1ed7168, Func Offset: 0x38
	// Line 1699, Address: 0x1ed7130, Func Offset: 0
	// Line 1700, Address: 0x1ed7138, Func Offset: 0x8
	// Line 1701, Address: 0x1ed7140, Func Offset: 0x10
	// Line 1704, Address: 0x1ed7144, Func Offset: 0x14
	// Line 1705, Address: 0x1ed715c, Func Offset: 0x2c
	// Line 1709, Address: 0x1ed7170, Func Offset: 0x40
	// Line 1711, Address: 0x1ed7178, Func Offset: 0x48
	// Line 1712, Address: 0x1ed7180, Func Offset: 0x50
	// Line 1715, Address: 0x1ed7188, Func Offset: 0x58
	// Func End, Address: 0x1ed7198, Func Offset: 0x68
}

