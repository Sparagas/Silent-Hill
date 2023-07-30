typedef struct sgAnime;
typedef struct sgBone;
typedef struct _anon0;
typedef struct sfObj;
typedef struct _anon1;
typedef struct sfCharacter;
typedef struct _anon2;
typedef union _anon3;
typedef struct sgSVModel;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sgIKHandle;
typedef struct DemoEventTable;
typedef struct _anon8;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef sgIKSolveResult(*type_17)();
typedef void(*type_18)(_anon6*, int, int, float*);
typedef void(*type_28)(sgAnime*, int);
typedef void(*type_29)(sfObj*);

typedef float type_2[4];
typedef _anon3 type_4[10];
typedef unsigned char type_5[4];
typedef float type_7[4][20];
typedef sfObj* type_8[4];
typedef _anon3 type_9[256];
typedef unsigned int type_11[4];
typedef float type_12[4][4];
typedef float type_15[4][2];
typedef float type_16[4];
typedef short type_19[2];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef unsigned char type_22[4];
typedef float type_23[1];
typedef int type_24[1];
typedef sfObj* type_25[20];
typedef void* type_26[4];
typedef float type_27[4];
typedef unsigned char type_30[2];

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

struct _anon0
{
	unsigned int cbp;
	unsigned int ofs;
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

struct _anon1
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon8 tex_data;
	_anon0 clut_data;
	unsigned short ot;
	unsigned short z;
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

struct _anon2
{
	_anon1 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon4
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon5
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
	_anon3 dmy[10];
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

struct DemoEventTable
{
	int demo_id;
	void(*init)(sfObj*);
	void(*exec)(sfObj*);
	void(*end)(sfObj*);
	void(*draw)(sfObj*);
};

struct _anon8
{
	_anon4* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

void(*DemoEventDestructHyena019)(sfObj*);
void(*sfObjFuncDummy)(sfObj*);
DemoEventTable demo_event_ie019;
DemoEventTable demo_event_ie021;
DemoEventTable demo_event_cm022;
DemoEventTable demo_event_cm023;
DemoEventTable demo_event_cm024;
sfObj* wall_obj[4];
DemoEventTable demo_event_cm025;
float demo026_pos[4];
sgAnime* demo026_anime;
sfCharacter* demo026_chara;
DemoEventTable demo_event_cm026;
sfObj* candle_obj[20];
DemoEventTable demo_event_cm065;

void DemoEventDestructHyena019(sfObj* obj);
void DemoEventHyena019(float* pos, float rot);
void DemoEventInitIE019(sfObj* obj);
void DemoEventInitIE021();
void Demo022DrawTex(unsigned int texture);
void DemoEventInitCM022();
void DemoEventDrawCM022();
void DemoEventDrawCM023();
void DemoEventDrawCM024();
void DemoEventInitCM025();
void DemoEventExecCM025();
void DemoEventEndCM025();
void DemoEventDrawCM025();
void DemoEventInitCM026();
void DemoEventExecCM026();
void DemoEventInitCM065();
void DemoEventExecCM065();
void DemoEventEndCM065();
void DemoEventDrawCM065();

// 
// Start address: 0x274d00
void DemoEventDestructHyena019(sfObj* obj)
{
	// Line 26, Address: 0x274d00, Func Offset: 0
	// Func End, Address: 0x274d0c, Func Offset: 0xc
}

// 
// Start address: 0x274d10
void DemoEventHyena019(float* pos, float rot)
{
	sfObj* model_obj;
	sfCharacter* chara;
	sgAnime* anime;
	float q[4];
	// Line 30, Address: 0x274d10, Func Offset: 0
	// Line 36, Address: 0x274d30, Func Offset: 0x20
	// Line 37, Address: 0x274d3c, Func Offset: 0x2c
	// Line 39, Address: 0x274d4c, Func Offset: 0x3c
	// Line 42, Address: 0x274d5c, Func Offset: 0x4c
	// Line 39, Address: 0x274d60, Func Offset: 0x50
	// Line 41, Address: 0x274d64, Func Offset: 0x54
	// Line 42, Address: 0x274d6c, Func Offset: 0x5c
	// Line 45, Address: 0x274d94, Func Offset: 0x84
	// Line 48, Address: 0x274dac, Func Offset: 0x9c
	// Line 49, Address: 0x274db8, Func Offset: 0xa8
	// Line 50, Address: 0x274dc4, Func Offset: 0xb4
	// Line 51, Address: 0x274dd0, Func Offset: 0xc0
	// Line 52, Address: 0x274ddc, Func Offset: 0xcc
	// Line 53, Address: 0x274e14, Func Offset: 0x104
	// Line 54, Address: 0x274e20, Func Offset: 0x110
	// Line 55, Address: 0x274e2c, Func Offset: 0x11c
	// Line 56, Address: 0x274e44, Func Offset: 0x134
	// Line 57, Address: 0x274e4c, Func Offset: 0x13c
	// Line 58, Address: 0x274e5c, Func Offset: 0x14c
	// Func End, Address: 0x274e7c, Func Offset: 0x16c
}

// 
// Start address: 0x274e80
void DemoEventInitIE019(sfObj* obj)
{
	// Line 61, Address: 0x274e80, Func Offset: 0
	// Line 62, Address: 0x274e88, Func Offset: 0x8
	// Line 70, Address: 0x274e90, Func Offset: 0x10
	// Line 71, Address: 0x274eb4, Func Offset: 0x34
	// Line 72, Address: 0x274ed4, Func Offset: 0x54
	// Line 74, Address: 0x274ef8, Func Offset: 0x78
	// Func End, Address: 0x274f04, Func Offset: 0x84
}

// 
// Start address: 0x274f10
void DemoEventInitIE021()
{
	// Line 89, Address: 0x274f10, Func Offset: 0
	// Func End, Address: 0x274f18, Func Offset: 0x8
}

// 
// Start address: 0x274f20
void Demo022DrawTex(unsigned int texture)
{
	int width;
	int height;
	_anon4* tex;
	unsigned int cbp;
	_anon2 img;
	// Line 104, Address: 0x274f20, Func Offset: 0
	// Line 115, Address: 0x274f24, Func Offset: 0x4
	// Line 104, Address: 0x274f28, Func Offset: 0x8
	// Line 115, Address: 0x274f38, Func Offset: 0x18
	// Line 116, Address: 0x274f40, Func Offset: 0x20
	// Line 115, Address: 0x274f44, Func Offset: 0x24
	// Line 116, Address: 0x274f48, Func Offset: 0x28
	// Line 118, Address: 0x274f50, Func Offset: 0x30
	// Line 116, Address: 0x274f54, Func Offset: 0x34
	// Line 118, Address: 0x274f58, Func Offset: 0x38
	// Line 120, Address: 0x274f64, Func Offset: 0x44
	// Line 121, Address: 0x274f6c, Func Offset: 0x4c
	// Line 122, Address: 0x274f74, Func Offset: 0x54
	// Line 126, Address: 0x274f98, Func Offset: 0x78
	// Line 127, Address: 0x274fb8, Func Offset: 0x98
	// Line 128, Address: 0x274fcc, Func Offset: 0xac
	// Line 131, Address: 0x274fe8, Func Offset: 0xc8
	// Line 132, Address: 0x275008, Func Offset: 0xe8
	// Line 134, Address: 0x27501c, Func Offset: 0xfc
	// Line 135, Address: 0x275038, Func Offset: 0x118
	// Line 136, Address: 0x275050, Func Offset: 0x130
	// Line 137, Address: 0x275060, Func Offset: 0x140
	// Func End, Address: 0x275078, Func Offset: 0x158
}

// 
// Start address: 0x275080
void DemoEventInitCM022()
{
	// Line 146, Address: 0x275080, Func Offset: 0
	// Func End, Address: 0x275088, Func Offset: 0x8
}

// 
// Start address: 0x275090
void DemoEventDrawCM022()
{
	// Line 150, Address: 0x275090, Func Offset: 0
	// Line 151, Address: 0x275094, Func Offset: 0x4
	// Line 150, Address: 0x275098, Func Offset: 0x8
	// Line 151, Address: 0x27509c, Func Offset: 0xc
	// Line 152, Address: 0x2750ac, Func Offset: 0x1c
	// Line 154, Address: 0x2750b8, Func Offset: 0x28
	// Line 155, Address: 0x2750cc, Func Offset: 0x3c
	// Line 157, Address: 0x2750d8, Func Offset: 0x48
	// Line 158, Address: 0x2750ec, Func Offset: 0x5c
	// Line 160, Address: 0x2750f8, Func Offset: 0x68
	// Func End, Address: 0x275104, Func Offset: 0x74
}

// 
// Start address: 0x275110
void DemoEventDrawCM023()
{
	// Line 173, Address: 0x275110, Func Offset: 0
	// Line 174, Address: 0x275114, Func Offset: 0x4
	// Line 173, Address: 0x275118, Func Offset: 0x8
	// Line 174, Address: 0x27511c, Func Offset: 0xc
	// Line 175, Address: 0x27512c, Func Offset: 0x1c
	// Line 177, Address: 0x275138, Func Offset: 0x28
	// Line 178, Address: 0x27514c, Func Offset: 0x3c
	// Line 180, Address: 0x275158, Func Offset: 0x48
	// Line 181, Address: 0x27516c, Func Offset: 0x5c
	// Line 183, Address: 0x275178, Func Offset: 0x68
	// Func End, Address: 0x275184, Func Offset: 0x74
}

// 
// Start address: 0x275190
void DemoEventDrawCM024()
{
	// Line 196, Address: 0x275190, Func Offset: 0
	// Line 197, Address: 0x275194, Func Offset: 0x4
	// Line 196, Address: 0x275198, Func Offset: 0x8
	// Line 197, Address: 0x27519c, Func Offset: 0xc
	// Line 198, Address: 0x2751ac, Func Offset: 0x1c
	// Line 200, Address: 0x2751b8, Func Offset: 0x28
	// Line 201, Address: 0x2751cc, Func Offset: 0x3c
	// Line 203, Address: 0x2751d8, Func Offset: 0x48
	// Line 204, Address: 0x2751ec, Func Offset: 0x5c
	// Line 206, Address: 0x2751f8, Func Offset: 0x68
	// Func End, Address: 0x275204, Func Offset: 0x74
}

// 
// Start address: 0x275210
void DemoEventInitCM025()
{
	// Line 221, Address: 0x275210, Func Offset: 0
	// Line 225, Address: 0x275218, Func Offset: 0x8
	// Line 226, Address: 0x275228, Func Offset: 0x18
	// Line 227, Address: 0x275234, Func Offset: 0x24
	// Line 228, Address: 0x275244, Func Offset: 0x34
	// Line 229, Address: 0x275250, Func Offset: 0x40
	// Line 230, Address: 0x275260, Func Offset: 0x50
	// Line 231, Address: 0x27526c, Func Offset: 0x5c
	// Line 232, Address: 0x27527c, Func Offset: 0x6c
	// Line 233, Address: 0x275288, Func Offset: 0x78
	// Func End, Address: 0x275294, Func Offset: 0x84
}

// 
// Start address: 0x2752a0
void DemoEventExecCM025()
{
	int i;
	// Line 236, Address: 0x2752a0, Func Offset: 0
	// Line 241, Address: 0x2752b0, Func Offset: 0x10
	// Line 242, Address: 0x2752c0, Func Offset: 0x20
	// Line 243, Address: 0x2752c8, Func Offset: 0x28
	// Line 242, Address: 0x2752cc, Func Offset: 0x2c
	// Line 243, Address: 0x2752d0, Func Offset: 0x30
	// Line 244, Address: 0x2752dc, Func Offset: 0x3c
	// Func End, Address: 0x2752f0, Func Offset: 0x50
}

// 
// Start address: 0x2752f0
void DemoEventEndCM025()
{
	int i;
	// Line 247, Address: 0x2752f0, Func Offset: 0
	// Line 252, Address: 0x275300, Func Offset: 0x10
	// Line 253, Address: 0x275310, Func Offset: 0x20
	// Line 254, Address: 0x275318, Func Offset: 0x28
	// Line 253, Address: 0x27531c, Func Offset: 0x2c
	// Line 254, Address: 0x275320, Func Offset: 0x30
	// Line 255, Address: 0x27532c, Func Offset: 0x3c
	// Func End, Address: 0x275340, Func Offset: 0x50
}

// 
// Start address: 0x275340
void DemoEventDrawCM025()
{
	int i;
	// Line 258, Address: 0x275340, Func Offset: 0
	// Line 263, Address: 0x275350, Func Offset: 0x10
	// Line 264, Address: 0x275360, Func Offset: 0x20
	// Line 265, Address: 0x275368, Func Offset: 0x28
	// Line 264, Address: 0x27536c, Func Offset: 0x2c
	// Line 265, Address: 0x275370, Func Offset: 0x30
	// Line 266, Address: 0x27537c, Func Offset: 0x3c
	// Func End, Address: 0x275390, Func Offset: 0x50
}

// 
// Start address: 0x275390
void DemoEventInitCM026()
{
	float rot[4];
	sfObj* okimono_obj;
	// Line 283, Address: 0x275390, Func Offset: 0
	// Line 284, Address: 0x275394, Func Offset: 0x4
	// Line 283, Address: 0x275398, Func Offset: 0x8
	// Line 284, Address: 0x27539c, Func Offset: 0xc
	// Line 293, Address: 0x2753a8, Func Offset: 0x18
	// Line 294, Address: 0x2753b4, Func Offset: 0x24
	// Line 296, Address: 0x2753d8, Func Offset: 0x48
	// Line 297, Address: 0x2753e8, Func Offset: 0x58
	// Line 298, Address: 0x2753fc, Func Offset: 0x6c
	// Line 299, Address: 0x275418, Func Offset: 0x88
	// Func End, Address: 0x275424, Func Offset: 0x94
}

// 
// Start address: 0x275430
void DemoEventExecCM026()
{
	// Line 325, Address: 0x275430, Func Offset: 0
	// Func End, Address: 0x27543c, Func Offset: 0xc
}

// 
// Start address: 0x275440
void DemoEventInitCM065()
{
	float pos[4];
	float rot[4];
	float candle_pos[4][20];
	int i;
	_anon5* fig;
	// Line 343, Address: 0x275440, Func Offset: 0
	// Line 344, Address: 0x275444, Func Offset: 0x4
	// Line 343, Address: 0x275448, Func Offset: 0x8
	// Line 346, Address: 0x27544c, Func Offset: 0xc
	// Line 343, Address: 0x275450, Func Offset: 0x10
	// Line 344, Address: 0x275454, Func Offset: 0x14
	// Line 343, Address: 0x275458, Func Offset: 0x18
	// Line 344, Address: 0x27545c, Func Offset: 0x1c
	// Line 343, Address: 0x275460, Func Offset: 0x20
	// Line 345, Address: 0x275464, Func Offset: 0x24
	// Line 344, Address: 0x275468, Func Offset: 0x28
	// Line 346, Address: 0x27546c, Func Offset: 0x2c
	// Line 345, Address: 0x275478, Func Offset: 0x38
	// Line 344, Address: 0x27547c, Func Offset: 0x3c
	// Line 345, Address: 0x275480, Func Offset: 0x40
	// Line 346, Address: 0x27548c, Func Offset: 0x4c
	// Line 378, Address: 0x2754b0, Func Offset: 0x70
	// Line 384, Address: 0x2754d0, Func Offset: 0x90
	// Line 387, Address: 0x2754e0, Func Offset: 0xa0
	// Line 388, Address: 0x2754ec, Func Offset: 0xac
	// Line 389, Address: 0x2754f4, Func Offset: 0xb4
	// Line 390, Address: 0x2754fc, Func Offset: 0xbc
	// Line 391, Address: 0x275504, Func Offset: 0xc4
	// Line 392, Address: 0x27550c, Func Offset: 0xcc
	// Line 393, Address: 0x275514, Func Offset: 0xd4
	// Line 392, Address: 0x275518, Func Offset: 0xd8
	// Line 393, Address: 0x27551c, Func Offset: 0xdc
	// Line 394, Address: 0x275528, Func Offset: 0xe8
	// Func End, Address: 0x275540, Func Offset: 0x100
}

// 
// Start address: 0x275540
void DemoEventExecCM065()
{
	int i;
	// Line 397, Address: 0x275540, Func Offset: 0
	// Line 399, Address: 0x275550, Func Offset: 0x10
	// Line 400, Address: 0x275560, Func Offset: 0x20
	// Line 401, Address: 0x275568, Func Offset: 0x28
	// Line 400, Address: 0x27556c, Func Offset: 0x2c
	// Line 401, Address: 0x275570, Func Offset: 0x30
	// Line 402, Address: 0x27557c, Func Offset: 0x3c
	// Func End, Address: 0x275590, Func Offset: 0x50
}

// 
// Start address: 0x275590
void DemoEventEndCM065()
{
	int i;
	// Line 405, Address: 0x275590, Func Offset: 0
	// Line 407, Address: 0x2755a0, Func Offset: 0x10
	// Line 408, Address: 0x2755b0, Func Offset: 0x20
	// Line 409, Address: 0x2755b8, Func Offset: 0x28
	// Line 410, Address: 0x2755c0, Func Offset: 0x30
	// Line 411, Address: 0x2755d0, Func Offset: 0x40
	// Func End, Address: 0x2755e4, Func Offset: 0x54
}

// 
// Start address: 0x2755f0
void DemoEventDrawCM065()
{
	int i;
	// Line 414, Address: 0x2755f0, Func Offset: 0
	// Line 416, Address: 0x275600, Func Offset: 0x10
	// Line 417, Address: 0x275610, Func Offset: 0x20
	// Line 418, Address: 0x275618, Func Offset: 0x28
	// Line 417, Address: 0x27561c, Func Offset: 0x2c
	// Line 418, Address: 0x275620, Func Offset: 0x30
	// Line 419, Address: 0x27562c, Func Offset: 0x3c
	// Func End, Address: 0x275640, Func Offset: 0x50
}

