typedef struct _anon0;
typedef struct _anon1;
typedef struct sfObj;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _EventInst;
typedef enum _enum : unsigned char;
typedef struct _anon4;
typedef struct EventFlag;
typedef struct _anon5;
typedef struct _ElvWork;
typedef union _anon6;
typedef struct _EventDriver;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _sfMenuObjRect;
typedef struct sgBone;
typedef struct _evBgCharData;
typedef struct _anon13;
typedef struct _sfMenuObj;
typedef struct _anon14;
typedef struct _evCmnBgObjData;
typedef struct _anon15;
typedef struct _anon16;
typedef union _anon17;
typedef union _anon18;
typedef struct _anon19;

typedef int(*type_4)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef void(*type_41)();

typedef float type_0[4][4];
typedef float type_1[4][8];
typedef float type_2[4][2];
typedef float type_3[4][3];
typedef unsigned char type_5[320];
typedef char type_6[4];
typedef float type_8[4];
typedef _anon6 type_9[256];
typedef unsigned int type_10[4];
typedef _evCmnBgObjData type_13[2];
typedef char type_15[16];
typedef unsigned char type_18[2];
typedef sfObj* type_20[2];
typedef _anon6 type_22[4];
typedef float type_23[4];
typedef int type_24[3];
typedef int type_25[3][2];
typedef char type_26[4];
typedef unsigned int type_27[4];
typedef short type_28[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef float type_32[1];
typedef int type_33[1];
typedef unsigned int type_34[4];
typedef _anon9 type_35[12];
typedef _anon4 type_36[4];
typedef _anon16 type_37[4];
typedef _anon17 type_38[0];
typedef _anon13 type_39[4];
typedef char type_40[16];
typedef sgBone type_42[4];
typedef float type_43[4][3];
typedef float type_44[4][3][2];

struct _anon0
{
	_anon7 panel;
	_anon1 img;
	_anon1 button_img;
	_anon1 asterisk;
	_anon1 cursor;
	unsigned char btn_timer;
	char pushed_btn;
	unsigned char is_panel_ok;
	unsigned char step;
	unsigned char step_s;
	unsigned char is_panel_func_end;
	unsigned char wait;
};

struct _anon1
{
	_anon12 base;
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

struct sfObj
{
	_anon6 fwork[256];
	_anon6* work;
	void(*func)(sfObj*);
	_anon6* work_pt0;
	_anon6* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon6* sys_work;
	_anon6* scene_work;
	_anon6* event_work;
	_anon6* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon2
{
	int se_slot;
};

struct _anon3
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

enum _enum : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

struct _anon4
{
	float pos[4][3];
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon5
{
	_anon17 vertex[0];
};

struct _ElvWork
{
	_anon13 emmodel;
	_anon13 em_door[4];
	sgBone bone;
	sgBone bone_door[4];
	_anon18 p;
	float move_speed;
	float move_time;
	float elv_timer;
	float hitpoly[4][4];
	float hitpoly_door[4][8];
	int se_slot;
	int maphit_id;
	int maphit_id_door;
	float door_tarance_rate;
	float door_tarance_speed;
	unsigned char now_floor;
	unsigned char next_floor;
};

union _anon6
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon6 val[4];
};

struct _anon7
{
	_anon15 menu;
	char result_stack[16];
	unsigned char max_figure;
	unsigned char cur_figure;
	unsigned char number_disp_ok;
};

struct _anon8
{
	_anon3* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon9
{
	short x;
	short y;
	short w;
	short h;
};

struct _anon10
{
	int sd_track;
	float ViewVec[4];
	float ViewOmegaVec[4];
	float WatchTgtPos[4];
	float CamPos[4];
	float MaxOmega;
	float RotAcclVal;
	float DragCoffForYaw;
	float counter;
};

struct _anon11
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon12
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon8 tex_data;
	_anon11 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _sfMenuObjRect
{
	int x;
	int y;
	int w;
	int h;
	_sfMenuObjRect* next;
	_sfMenuObjRect* prev;
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

struct _evBgCharData
{
	int model_id;
	int emt_id;
	int kage_id;
	int anim_id;
};

struct _anon13
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

struct _anon14
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _evCmnBgObjData
{
	int model_id;
	int emt_id;
	int GB_emt_id;
};

struct _anon15
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon14 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};

struct _anon16
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon17
{
	float node[4];
	_anon16 data[4];
};

union _anon18
{
	_anon19 str;
	float pos[4];
};

struct _anon19
{
	float pos_x;
	float pos_y;
	float pos_z;
	float pos_padding;
};

_anon4 elvdoor_pos[4];
unsigned int model_elvdoor[4];
unsigned int emt_elvdoor[4];
float elvpos[4][3][2];
int ev_building0_elvflag[3][2];
EventFlag event_flag;
sfObj* elvobj[2];
float elvCamViewAngle;
float sg_vector_unit_y[4];
float sg_vector_unit_z[4];
float clock_timer;
_EventDriver ev_building0_bd24_2246;
_EventDriver ev_building0_bd_null;
_EventDriver ev_building0_bd_2245;
_EventDriver ev_building0_bd20_2249_03;
_EventDriver ev_building0_bd20_2249_01;
_EventDriver ev_building0_bd20_2249_02;
float sg_vector_zero[4];
_EventDriver ev_building0_bd16_2251;
_anon9 button_atari[12];
char answer_f[4];
char answer_l[4];
_anon0 ev_panel_work;
void(*pausefunc_ev_panel_main)();
_EventDriver ev_building0_password_2235;
_EventDriver ev_building0_password_2248;

int ev_building0_stage_init();
int ev_building0_bd12_elv_modelinit(sfObj* obj);
int ev_building0_bd12_elv_flaginit(int no);
int ev_building0_bd12_elv_posinit(sfObj* obj, int no);
int ev_building0_bd12_elv_init_camera(sfObj* obj, int no);
int ev_building0_bd12_elv_init(sfObj* obj);
void ev_building0_bd12_elv_move_door(sfObj* obj);
void ev_building0_bd12_elv_set_door_hitpoly(sfObj* obj, int fMove);
int ev_building0_bd12_elv_exec(sfObj* obj);
int ev_building0_bd12_elv_draw(sfObj* obj);
int ev_building0_bd12_elv_end(sfObj* obj);
int ev_building0_bd12_elv_select_floor(int no, int floor);
int ev_building0_bd12_elv_get_into_player();
int ev_building0_bd12_elv_set_player_pos(sfObj* obj);
int ev_building0_bd12_elv_set_camera(int no);
int ev_building0_bd12_elv_set_floor(int no, int floor);
int ev_building0_bd17_fan_init(sfObj* obj);
int ev_building0_bd17_fan_exec(sfObj* obj);
int ev_building0_bd17_fan_draw(sfObj* obj);
int ev_building0_bd17_fan_end(sfObj* obj);
int ev_building0_bd24_mhari_init(sfObj* obj);
int ev_building0_bd24_mhari_exec(sfObj* obj);
int ev_building0_bd24_mhari_draw(sfObj* obj);
int ev_building0_bd24_mhari_end(sfObj* obj);
int ev_building0_bd24_furi_init(sfObj* obj);
int ev_building0_bd24_furi_exec(sfObj* obj);
int ev_building0_bd24_furi_draw(sfObj* obj);
int ev_building0_bd24_furi_end(sfObj* obj);
int ev_building0_bd24_sabi_init(sfObj* obj);
int ev_building0_bd24_sabi_exec(sfObj* obj);
int ev_building0_bd24_sabi_draw(sfObj* obj);
int ev_building0_bd24_sabi_end(sfObj* obj);
int ev_building0_bd07_candle_init(sfObj* obj);
int ev_building0_bd07_candle_exec(sfObj* obj);
int ev_building0_bd08_valley_init(sfObj* obj);
int ev_building0_bd08_valley_exec(sfObj* obj);
int ev_building0_bd23_cat_init(sfObj* obj);
int ev_building0_bd23_cat_exec(sfObj* obj);
int ev_building0_bd14_ball_init(sfObj* obj);
int ev_building0_bd14_ball_exec(sfObj* obj);
int ev_building0_bd20_kami_init(sfObj* obj);
int ev_building0_bd_2249_03_exec();
int ev_building0_bd_2249_01_exec(sfObj* obj);
int ev_building0_bd_2249_02_exec(sfObj* obj);
int ev_building0_bd_2249_01_init(sfObj* obj);
int ev_building0_bd_2249_01_end(sfObj* obj);
int ev_building0_bd_2249_02_end(sfObj* obj);
int ev_building0_bd11_dropliquid_init();
int ev_building0_bd16_2251_init(sfObj* obj);
int ev_building0_bd16_2251_exec(sfObj* obj);
void bg_init(_anon1* img);
void button_img_init(_anon1* img);
void asterisk_init(_anon1* img);
void cursor_init(_anon1* img, float x, float y);
void bg_draw(_anon1* img);
void button_img_draw(_anon1* img, int pushed_number);
void asterisk_draw(_anon1* img, int ast_num);
void cursor_draw(_anon1* img);
void cursor_set_xy(_anon1* img, float x, float y);
void pausefunc_ev_panel_init();
void pausefunc_ev_panel_draw();
void pausefunc_ev_panel_main();
int ev_building0_password_init(sfObj* obj);
int ev_building0_password_exec(sfObj* obj);
int ev_building0_password_draw();
int ev_building0_password_end();
int ev_building0_bd12_elvdoor_init(sfObj* obj);
int ev_building0_bd24_camera_func();
int ev_building0_bd16_plate_of_chaos_init(sfObj* obj);
int ev_building0_bd16_plate_of_chaos_exec(sfObj* obj);

// 
// Start address: 0x1ed48f0
int ev_building0_stage_init()
{
	// Line 168, Address: 0x1ed48f0, Func Offset: 0
	// Line 170, Address: 0x1ed48f8, Func Offset: 0x8
	// Line 171, Address: 0x1ed4900, Func Offset: 0x10
	// Line 173, Address: 0x1ed4908, Func Offset: 0x18
	// Line 172, Address: 0x1ed490c, Func Offset: 0x1c
	// Line 173, Address: 0x1ed4910, Func Offset: 0x20
	// Func End, Address: 0x1ed4918, Func Offset: 0x28
}

// 
// Start address: 0x1ed4920
int ev_building0_bd12_elv_modelinit(sfObj* obj)
{
	int i;
	_ElvWork* wk;
	// Line 297, Address: 0x1ed4920, Func Offset: 0
	// Line 299, Address: 0x1ed4924, Func Offset: 0x4
	// Line 297, Address: 0x1ed4928, Func Offset: 0x8
	// Line 299, Address: 0x1ed493c, Func Offset: 0x1c
	// Line 300, Address: 0x1ed494c, Func Offset: 0x2c
	// Line 304, Address: 0x1ed4954, Func Offset: 0x34
	// Line 305, Address: 0x1ed495c, Func Offset: 0x3c
	// Line 306, Address: 0x1ed4974, Func Offset: 0x54
	// Line 307, Address: 0x1ed498c, Func Offset: 0x6c
	// Line 309, Address: 0x1ed49a4, Func Offset: 0x84
	// Line 310, Address: 0x1ed49b8, Func Offset: 0x98
	// Line 311, Address: 0x1ed49cc, Func Offset: 0xac
	// Line 312, Address: 0x1ed49e0, Func Offset: 0xc0
	// Line 313, Address: 0x1ed49f8, Func Offset: 0xd8
	// Line 312, Address: 0x1ed49fc, Func Offset: 0xdc
	// Line 313, Address: 0x1ed4a00, Func Offset: 0xe0
	// Line 312, Address: 0x1ed4a04, Func Offset: 0xe4
	// Line 313, Address: 0x1ed4a08, Func Offset: 0xe8
	// Line 315, Address: 0x1ed4a10, Func Offset: 0xf0
	// Line 317, Address: 0x1ed4a18, Func Offset: 0xf8
	// Line 318, Address: 0x1ed4a20, Func Offset: 0x100
	// Func End, Address: 0x1ed4a3c, Func Offset: 0x11c
}

// 
// Start address: 0x1ed4a40
int ev_building0_bd12_elv_flaginit(int no)
{
	// Line 763, Address: 0x1ed4a40, Func Offset: 0
	// Line 764, Address: 0x1ed4a50, Func Offset: 0x10
	// Func End, Address: 0x1ed4a58, Func Offset: 0x18
	// Line 338, Address: 0x1ed4a44, Func Offset: 0x4
	// Line 340, Address: 0x1ed4a5c, Func Offset: 0x1c
	// Line 341, Address: 0x1ed4b34, Func Offset: 0xf4
	// Line 343, Address: 0x1ed4b3c, Func Offset: 0xfc
	// Line 344, Address: 0x1ed4b48, Func Offset: 0x108
	// Line 345, Address: 0x1ed4b50, Func Offset: 0x110
	// Line 347, Address: 0x1ed4b5c, Func Offset: 0x11c
	// Line 348, Address: 0x1ed4b64, Func Offset: 0x124
	// Line 349, Address: 0x1ed4b68, Func Offset: 0x128
	// Line 351, Address: 0x1ed4b70, Func Offset: 0x130
	// Line 352, Address: 0x1ed4b78, Func Offset: 0x138
	// Func End, Address: 0x1ed4b80, Func Offset: 0x140
}

// 
// Start address: 0x1ed4b80
int ev_building0_bd12_elv_posinit(sfObj* obj, int no)
{
	float x;
	float z;
	int i;
	float pos[4];
	_ElvWork* wk;
	int floor;
	_anon4* dp;
	float pp[4];
	_anon5* pol;
	_anon5* pol;
	// Line 357, Address: 0x1ed4b80, Func Offset: 0
	// Line 358, Address: 0x1ed4bc0, Func Offset: 0x40
	// Line 365, Address: 0x1ed4bcc, Func Offset: 0x4c
	// Line 367, Address: 0x1ed4be8, Func Offset: 0x68
	// Line 368, Address: 0x1ed4c44, Func Offset: 0xc4
	// Line 369, Address: 0x1ed4c9c, Func Offset: 0x11c
	// Line 371, Address: 0x1ed4cd8, Func Offset: 0x158
	// Line 372, Address: 0x1ed4cec, Func Offset: 0x16c
	// Line 373, Address: 0x1ed4d08, Func Offset: 0x188
	// Line 377, Address: 0x1ed4d0c, Func Offset: 0x18c
	// Line 373, Address: 0x1ed4d14, Func Offset: 0x194
	// Line 377, Address: 0x1ed4d18, Func Offset: 0x198
	// Line 374, Address: 0x1ed4d1c, Func Offset: 0x19c
	// Line 377, Address: 0x1ed4d20, Func Offset: 0x1a0
	// Line 374, Address: 0x1ed4d24, Func Offset: 0x1a4
	// Line 377, Address: 0x1ed4d28, Func Offset: 0x1a8
	// Line 378, Address: 0x1ed4d2c, Func Offset: 0x1ac
	// Line 377, Address: 0x1ed4d3c, Func Offset: 0x1bc
	// Line 379, Address: 0x1ed4d40, Func Offset: 0x1c0
	// Line 378, Address: 0x1ed4d44, Func Offset: 0x1c4
	// Line 379, Address: 0x1ed4d48, Func Offset: 0x1c8
	// Line 378, Address: 0x1ed4d54, Func Offset: 0x1d4
	// Line 379, Address: 0x1ed4d58, Func Offset: 0x1d8
	// Line 385, Address: 0x1ed4d60, Func Offset: 0x1e0
	// Line 382, Address: 0x1ed4d64, Func Offset: 0x1e4
	// Line 385, Address: 0x1ed4d68, Func Offset: 0x1e8
	// Line 386, Address: 0x1ed4d70, Func Offset: 0x1f0
	// Line 388, Address: 0x1ed4d80, Func Offset: 0x200
	// Line 394, Address: 0x1ed4d88, Func Offset: 0x208
	// Line 393, Address: 0x1ed4d8c, Func Offset: 0x20c
	// Line 394, Address: 0x1ed4d90, Func Offset: 0x210
	// Line 393, Address: 0x1ed4d94, Func Offset: 0x214
	// Line 394, Address: 0x1ed4d98, Func Offset: 0x218
	// Line 395, Address: 0x1ed4db0, Func Offset: 0x230
	// Line 396, Address: 0x1ed4dbc, Func Offset: 0x23c
	// Line 395, Address: 0x1ed4dc0, Func Offset: 0x240
	// Line 396, Address: 0x1ed4e00, Func Offset: 0x280
	// Line 397, Address: 0x1ed4e0c, Func Offset: 0x28c
	// Line 396, Address: 0x1ed4e18, Func Offset: 0x298
	// Line 402, Address: 0x1ed4e1c, Func Offset: 0x29c
	// Line 397, Address: 0x1ed4e24, Func Offset: 0x2a4
	// Line 398, Address: 0x1ed4e5c, Func Offset: 0x2dc
	// Line 399, Address: 0x1ed4e78, Func Offset: 0x2f8
	// Line 401, Address: 0x1ed4e90, Func Offset: 0x310
	// Line 402, Address: 0x1ed4e94, Func Offset: 0x314
	// Line 403, Address: 0x1ed4e9c, Func Offset: 0x31c
	// Line 405, Address: 0x1ed4ea0, Func Offset: 0x320
	// Line 403, Address: 0x1ed4ea4, Func Offset: 0x324
	// Line 404, Address: 0x1ed4ea8, Func Offset: 0x328
	// Line 405, Address: 0x1ed4eac, Func Offset: 0x32c
	// Line 404, Address: 0x1ed4eb0, Func Offset: 0x330
	// Line 405, Address: 0x1ed4eb4, Func Offset: 0x334
	// Line 410, Address: 0x1ed4ebc, Func Offset: 0x33c
	// Line 409, Address: 0x1ed4ec0, Func Offset: 0x340
	// Line 410, Address: 0x1ed4ec4, Func Offset: 0x344
	// Line 428, Address: 0x1ed4ec8, Func Offset: 0x348
	// Line 410, Address: 0x1ed4ecc, Func Offset: 0x34c
	// Line 413, Address: 0x1ed4ed4, Func Offset: 0x354
	// Line 428, Address: 0x1ed4ed8, Func Offset: 0x358
	// Line 423, Address: 0x1ed4ee0, Func Offset: 0x360
	// Line 413, Address: 0x1ed4ee8, Func Offset: 0x368
	// Line 418, Address: 0x1ed4ef8, Func Offset: 0x378
	// Line 420, Address: 0x1ed4efc, Func Offset: 0x37c
	// Line 423, Address: 0x1ed4f00, Func Offset: 0x380
	// Line 418, Address: 0x1ed4f04, Func Offset: 0x384
	// Line 423, Address: 0x1ed4f08, Func Offset: 0x388
	// Line 420, Address: 0x1ed4f0c, Func Offset: 0x38c
	// Line 423, Address: 0x1ed4f14, Func Offset: 0x394
	// Line 425, Address: 0x1ed4f18, Func Offset: 0x398
	// Line 423, Address: 0x1ed4f1c, Func Offset: 0x39c
	// Line 425, Address: 0x1ed4f20, Func Offset: 0x3a0
	// Line 428, Address: 0x1ed4f24, Func Offset: 0x3a4
	// Line 429, Address: 0x1ed4f30, Func Offset: 0x3b0
	// Line 435, Address: 0x1ed4f3c, Func Offset: 0x3bc
	// Line 456, Address: 0x1ed4f40, Func Offset: 0x3c0
	// Line 435, Address: 0x1ed4f44, Func Offset: 0x3c4
	// Line 456, Address: 0x1ed4f48, Func Offset: 0x3c8
	// Line 435, Address: 0x1ed4f4c, Func Offset: 0x3cc
	// Line 436, Address: 0x1ed4f50, Func Offset: 0x3d0
	// Line 437, Address: 0x1ed4f54, Func Offset: 0x3d4
	// Line 445, Address: 0x1ed4f58, Func Offset: 0x3d8
	// Line 437, Address: 0x1ed4f5c, Func Offset: 0x3dc
	// Line 456, Address: 0x1ed4f60, Func Offset: 0x3e0
	// Line 440, Address: 0x1ed4f64, Func Offset: 0x3e4
	// Line 462, Address: 0x1ed4f68, Func Offset: 0x3e8
	// Line 440, Address: 0x1ed4f6c, Func Offset: 0x3ec
	// Line 467, Address: 0x1ed4f70, Func Offset: 0x3f0
	// Line 440, Address: 0x1ed4f74, Func Offset: 0x3f4
	// Line 473, Address: 0x1ed4f78, Func Offset: 0x3f8
	// Line 440, Address: 0x1ed4f7c, Func Offset: 0x3fc
	// Line 462, Address: 0x1ed4f80, Func Offset: 0x400
	// Line 445, Address: 0x1ed4f84, Func Offset: 0x404
	// Line 473, Address: 0x1ed4f88, Func Offset: 0x408
	// Line 445, Address: 0x1ed4f8c, Func Offset: 0x40c
	// Line 462, Address: 0x1ed4f90, Func Offset: 0x410
	// Line 445, Address: 0x1ed4f94, Func Offset: 0x414
	// Line 450, Address: 0x1ed4f9c, Func Offset: 0x41c
	// Line 456, Address: 0x1ed4fac, Func Offset: 0x42c
	// Line 462, Address: 0x1ed4fbc, Func Offset: 0x43c
	// Line 467, Address: 0x1ed4fcc, Func Offset: 0x44c
	// Line 473, Address: 0x1ed4fd8, Func Offset: 0x458
	// Line 474, Address: 0x1ed4fe4, Func Offset: 0x464
	// Line 477, Address: 0x1ed4ff0, Func Offset: 0x470
	// Line 480, Address: 0x1ed5004, Func Offset: 0x484
	// Line 481, Address: 0x1ed5014, Func Offset: 0x494
	// Line 482, Address: 0x1ed501c, Func Offset: 0x49c
	// Line 484, Address: 0x1ed5020, Func Offset: 0x4a0
	// Line 487, Address: 0x1ed5028, Func Offset: 0x4a8
	// Line 488, Address: 0x1ed5030, Func Offset: 0x4b0
	// Func End, Address: 0x1ed506c, Func Offset: 0x4ec
	// Line 643, Address: 0x1ed4b80, Func Offset: 0
	// Line 644, Address: 0x1ed4b84, Func Offset: 0x4
	// Line 643, Address: 0x1ed4b88, Func Offset: 0x8
	// Line 644, Address: 0x1ed4b90, Func Offset: 0x10
	// Line 645, Address: 0x1ed4ba0, Func Offset: 0x20
	// Line 648, Address: 0x1ed4ba8, Func Offset: 0x28
	// Line 650, Address: 0x1ed4bb0, Func Offset: 0x30
	// Line 651, Address: 0x1ed4bc4, Func Offset: 0x44
	// Line 652, Address: 0x1ed4bd8, Func Offset: 0x58
	// Line 654, Address: 0x1ed4be0, Func Offset: 0x60
	// Line 656, Address: 0x1ed4bf8, Func Offset: 0x78
	// Line 657, Address: 0x1ed4c10, Func Offset: 0x90
	// Line 659, Address: 0x1ed4c28, Func Offset: 0xa8
	// Line 662, Address: 0x1ed4c30, Func Offset: 0xb0
	// Line 661, Address: 0x1ed4c38, Func Offset: 0xb8
	// Line 662, Address: 0x1ed4c3c, Func Offset: 0xbc
	// Func End, Address: 0x1ed4c44, Func Offset: 0xc4
}

// 
// Start address: 0x1ed5070
int ev_building0_bd12_elv_init_camera(sfObj* obj, int no)
{
	_ElvWork* wk;
	float pos[4];
	// Line 493, Address: 0x1ed5070, Func Offset: 0
	// Line 494, Address: 0x1ed5080, Func Offset: 0x10
	// Line 497, Address: 0x1ed5084, Func Offset: 0x14
	// Line 498, Address: 0x1ed5094, Func Offset: 0x24
	// Line 500, Address: 0x1ed509c, Func Offset: 0x2c
	// Line 498, Address: 0x1ed50a0, Func Offset: 0x30
	// Line 500, Address: 0x1ed50a4, Func Offset: 0x34
	// Line 502, Address: 0x1ed50b4, Func Offset: 0x44
	// Line 503, Address: 0x1ed50bc, Func Offset: 0x4c
	// Line 505, Address: 0x1ed50e0, Func Offset: 0x70
	// Line 508, Address: 0x1ed5100, Func Offset: 0x90
	// Line 507, Address: 0x1ed5104, Func Offset: 0x94
	// Line 508, Address: 0x1ed5110, Func Offset: 0xa0
	// Line 507, Address: 0x1ed5114, Func Offset: 0xa4
	// Line 512, Address: 0x1ed5118, Func Offset: 0xa8
	// Line 507, Address: 0x1ed511c, Func Offset: 0xac
	// Line 508, Address: 0x1ed5120, Func Offset: 0xb0
	// Line 509, Address: 0x1ed5124, Func Offset: 0xb4
	// Line 507, Address: 0x1ed512c, Func Offset: 0xbc
	// Line 508, Address: 0x1ed513c, Func Offset: 0xcc
	// Line 509, Address: 0x1ed5148, Func Offset: 0xd8
	// Line 512, Address: 0x1ed5150, Func Offset: 0xe0
	// Line 514, Address: 0x1ed5158, Func Offset: 0xe8
	// Line 517, Address: 0x1ed5164, Func Offset: 0xf4
	// Line 518, Address: 0x1ed5170, Func Offset: 0x100
	// Line 517, Address: 0x1ed5178, Func Offset: 0x108
	// Line 518, Address: 0x1ed517c, Func Offset: 0x10c
	// Line 520, Address: 0x1ed5184, Func Offset: 0x114
	// Line 525, Address: 0x1ed5188, Func Offset: 0x118
	// Line 524, Address: 0x1ed5190, Func Offset: 0x120
	// Line 525, Address: 0x1ed5194, Func Offset: 0x124
	// Func End, Address: 0x1ed51a0, Func Offset: 0x130
}

// 
// Start address: 0x1ed51a0
int ev_building0_bd12_elv_init(sfObj* obj)
{
	// Line 529, Address: 0x1ed51a0, Func Offset: 0
	// Line 531, Address: 0x1ed51ac, Func Offset: 0xc
	// Line 533, Address: 0x1ed51c0, Func Offset: 0x20
	// Line 536, Address: 0x1ed51c8, Func Offset: 0x28
	// Line 538, Address: 0x1ed51d4, Func Offset: 0x34
	// Line 539, Address: 0x1ed51e0, Func Offset: 0x40
	// Line 541, Address: 0x1ed51e8, Func Offset: 0x48
	// Line 542, Address: 0x1ed51f0, Func Offset: 0x50
	// Func End, Address: 0x1ed5200, Func Offset: 0x60
	// Line 238, Address: 0x1ed51a0, Func Offset: 0
	// Line 239, Address: 0x1ed51ac, Func Offset: 0xc
	// Line 241, Address: 0x1ed51bc, Func Offset: 0x1c
	// Line 242, Address: 0x1ed51c4, Func Offset: 0x24
	// Line 243, Address: 0x1ed51cc, Func Offset: 0x2c
	// Line 244, Address: 0x1ed51d4, Func Offset: 0x34
	// Line 245, Address: 0x1ed51dc, Func Offset: 0x3c
	// Line 246, Address: 0x1ed51e4, Func Offset: 0x44
	// Line 247, Address: 0x1ed51ec, Func Offset: 0x4c
	// Line 249, Address: 0x1ed51f4, Func Offset: 0x54
	// Line 250, Address: 0x1ed5204, Func Offset: 0x64
	// Line 251, Address: 0x1ed520c, Func Offset: 0x6c
	// Line 252, Address: 0x1ed5214, Func Offset: 0x74
	// Line 253, Address: 0x1ed5220, Func Offset: 0x80
	// Line 254, Address: 0x1ed5228, Func Offset: 0x88
	// Line 256, Address: 0x1ed5230, Func Offset: 0x90
	// Func End, Address: 0x1ed5240, Func Offset: 0xa0
}

// 
// Start address: 0x1ed5200
void ev_building0_bd12_elv_move_door(sfObj* obj)
{
	_ElvWork* wk;
	_anon4* dp;
	int i;
	int no;
	float pos[4];
	float pp[4];
	// Line 1132, Address: 0x1ed5200, Func Offset: 0
	// Line 1136, Address: 0x1ed5204, Func Offset: 0x4
	// Line 1132, Address: 0x1ed5208, Func Offset: 0x8
	// Line 1136, Address: 0x1ed5214, Func Offset: 0x14
	// Line 1134, Address: 0x1ed5218, Func Offset: 0x18
	// Line 1136, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 1138, Address: 0x1ed5248, Func Offset: 0x48
	// Line 1139, Address: 0x1ed5258, Func Offset: 0x58
	// Line 1140, Address: 0x1ed527c, Func Offset: 0x7c
	// Line 1142, Address: 0x1ed5284, Func Offset: 0x84
	// Line 1143, Address: 0x1ed528c, Func Offset: 0x8c
	// Line 1145, Address: 0x1ed5290, Func Offset: 0x90
	// Line 1147, Address: 0x1ed52a0, Func Offset: 0xa0
	// Line 1149, Address: 0x1ed52a8, Func Offset: 0xa8
	// Line 1150, Address: 0x1ed52c4, Func Offset: 0xc4
	// Line 1151, Address: 0x1ed52d0, Func Offset: 0xd0
	// Line 1153, Address: 0x1ed52d8, Func Offset: 0xd8
	// Line 1156, Address: 0x1ed52e0, Func Offset: 0xe0
	// Line 1157, Address: 0x1ed52f0, Func Offset: 0xf0
	// Line 1160, Address: 0x1ed5314, Func Offset: 0x114
	// Line 1161, Address: 0x1ed5328, Func Offset: 0x128
	// Line 1163, Address: 0x1ed5330, Func Offset: 0x130
	// Line 1166, Address: 0x1ed5338, Func Offset: 0x138
	// Line 1167, Address: 0x1ed5348, Func Offset: 0x148
	// Line 1171, Address: 0x1ed5350, Func Offset: 0x150
	// Line 1172, Address: 0x1ed5358, Func Offset: 0x158
	// Func End, Address: 0x1ed536c, Func Offset: 0x16c
	// Line 724, Address: 0x1ed5200, Func Offset: 0
	// Line 725, Address: 0x1ed5204, Func Offset: 0x4
	// Line 724, Address: 0x1ed5208, Func Offset: 0x8
	// Line 725, Address: 0x1ed520c, Func Offset: 0xc
	// Line 724, Address: 0x1ed5210, Func Offset: 0x10
	// Line 725, Address: 0x1ed5214, Func Offset: 0x14
	// Line 730, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 725, Address: 0x1ed5220, Func Offset: 0x20
	// Line 730, Address: 0x1ed522c, Func Offset: 0x2c
	// Line 731, Address: 0x1ed523c, Func Offset: 0x3c
	// Line 732, Address: 0x1ed5248, Func Offset: 0x48
	// Line 733, Address: 0x1ed5254, Func Offset: 0x54
	// Line 734, Address: 0x1ed5260, Func Offset: 0x60
	// Line 735, Address: 0x1ed5268, Func Offset: 0x68
	// Line 736, Address: 0x1ed5274, Func Offset: 0x74
	// Line 737, Address: 0x1ed5278, Func Offset: 0x78
	// Line 739, Address: 0x1ed5280, Func Offset: 0x80
	// Line 738, Address: 0x1ed5284, Func Offset: 0x84
	// Line 739, Address: 0x1ed5288, Func Offset: 0x88
	// Func End, Address: 0x1ed5294, Func Offset: 0x94
	// Line 549, Address: 0x1ed5200, Func Offset: 0
	// Line 558, Address: 0x1ed5204, Func Offset: 0x4
	// Line 549, Address: 0x1ed5208, Func Offset: 0x8
	// Line 558, Address: 0x1ed520c, Func Offset: 0xc
	// Line 549, Address: 0x1ed5210, Func Offset: 0x10
	// Line 558, Address: 0x1ed5218, Func Offset: 0x18
	// Line 549, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 558, Address: 0x1ed5220, Func Offset: 0x20
	// Line 549, Address: 0x1ed5224, Func Offset: 0x24
	// Line 558, Address: 0x1ed5228, Func Offset: 0x28
	// Line 549, Address: 0x1ed522c, Func Offset: 0x2c
	// Line 557, Address: 0x1ed5234, Func Offset: 0x34
	// Line 549, Address: 0x1ed5238, Func Offset: 0x38
	// Line 557, Address: 0x1ed523c, Func Offset: 0x3c
	// Line 549, Address: 0x1ed5240, Func Offset: 0x40
	// Line 558, Address: 0x1ed5244, Func Offset: 0x44
	// Line 549, Address: 0x1ed5248, Func Offset: 0x48
	// Line 558, Address: 0x1ed524c, Func Offset: 0x4c
	// Line 550, Address: 0x1ed5250, Func Offset: 0x50
	// Line 556, Address: 0x1ed5254, Func Offset: 0x54
	// Line 558, Address: 0x1ed5260, Func Offset: 0x60
	// Line 559, Address: 0x1ed5270, Func Offset: 0x70
	// Line 564, Address: 0x1ed527c, Func Offset: 0x7c
	// Line 559, Address: 0x1ed5284, Func Offset: 0x84
	// Line 560, Address: 0x1ed52d0, Func Offset: 0xd0
	// Line 561, Address: 0x1ed530c, Func Offset: 0x10c
	// Line 562, Address: 0x1ed5328, Func Offset: 0x128
	// Line 563, Address: 0x1ed5330, Func Offset: 0x130
	// Line 564, Address: 0x1ed5334, Func Offset: 0x134
	// Line 566, Address: 0x1ed533c, Func Offset: 0x13c
	// Line 565, Address: 0x1ed5340, Func Offset: 0x140
	// Line 566, Address: 0x1ed5344, Func Offset: 0x144
	// Line 567, Address: 0x1ed5350, Func Offset: 0x150
	// Func End, Address: 0x1ed5380, Func Offset: 0x180
}

// 
// Start address: 0x1ed5380
void ev_building0_bd12_elv_set_door_hitpoly(sfObj* obj, int fMove)
{
	_ElvWork* wk;
	_anon5* pol;
	// Line 776, Address: 0x1ed5380, Func Offset: 0
	// Line 777, Address: 0x1ed5388, Func Offset: 0x8
	// Line 779, Address: 0x1ed5390, Func Offset: 0x10
	// Line 778, Address: 0x1ed5394, Func Offset: 0x14
	// Line 779, Address: 0x1ed5398, Func Offset: 0x18
	// Func End, Address: 0x1ed53a0, Func Offset: 0x20
	// Line 573, Address: 0x1ed5380, Func Offset: 0
	// Line 577, Address: 0x1ed5384, Func Offset: 0x4
	// Line 578, Address: 0x1ed5398, Func Offset: 0x18
	// Line 580, Address: 0x1ed53a4, Func Offset: 0x24
	// Line 582, Address: 0x1ed53a8, Func Offset: 0x28
	// Line 583, Address: 0x1ed53b0, Func Offset: 0x30
	// Line 585, Address: 0x1ed53bc, Func Offset: 0x3c
	// Line 587, Address: 0x1ed53c4, Func Offset: 0x44
	// Line 588, Address: 0x1ed53c8, Func Offset: 0x48
	// Func End, Address: 0x1ed53d0, Func Offset: 0x50
}

// 
// Start address: 0x1ed53d0
int ev_building0_bd12_elv_exec(sfObj* obj)
{
	int fMove;
	float start_pos_y;
	float end_pos_y;
	int no;
	_ElvWork* wk;
	float dir;
	_anon5* pol;
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
// Start address: 0x1ed5ab0
int ev_building0_bd12_elv_draw(sfObj* obj)
{
	int i;
	_ElvWork* wk;
	// Line 1540, Address: 0x1ed5ab0, Func Offset: 0
	// Line 1543, Address: 0x1ed5ab8, Func Offset: 0x8
	// Line 1545, Address: 0x1ed5ac0, Func Offset: 0x10
	// Line 1544, Address: 0x1ed5ac4, Func Offset: 0x14
	// Line 1545, Address: 0x1ed5ac8, Func Offset: 0x18
	// Func End, Address: 0x1ed5ad0, Func Offset: 0x20
	// Line 833, Address: 0x1ed5ab0, Func Offset: 0
	// Line 835, Address: 0x1ed5ac4, Func Offset: 0x14
	// Line 838, Address: 0x1ed5acc, Func Offset: 0x1c
	// Line 839, Address: 0x1ed5ad4, Func Offset: 0x24
	// Line 840, Address: 0x1ed5ad8, Func Offset: 0x28
	// Line 841, Address: 0x1ed5af4, Func Offset: 0x44
	// Line 871, Address: 0x1ed5af8, Func Offset: 0x48
	// Line 870, Address: 0x1ed5b00, Func Offset: 0x50
	// Line 871, Address: 0x1ed5b04, Func Offset: 0x54
	// Func End, Address: 0x1ed5b10, Func Offset: 0x60
	// Line 718, Address: 0x1ed5ab0, Func Offset: 0
	// Line 719, Address: 0x1ed5ac0, Func Offset: 0x10
	// Line 723, Address: 0x1ed5ad8, Func Offset: 0x28
	// Line 727, Address: 0x1ed5ae0, Func Offset: 0x30
	// Line 734, Address: 0x1ed5b04, Func Offset: 0x54
	// Line 737, Address: 0x1ed5b0c, Func Offset: 0x5c
	// Line 738, Address: 0x1ed5b14, Func Offset: 0x64
	// Line 739, Address: 0x1ed5b18, Func Offset: 0x68
	// Func End, Address: 0x1ed5b24, Func Offset: 0x74
}

// 
// Start address: 0x1ed5b10
int ev_building0_bd12_elv_end(sfObj* obj)
{
	int i;
	_ElvWork* wk;
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
// Start address: 0x1ed5ba0
int ev_building0_bd12_elv_select_floor(int no, int floor)
{
	_ElvWork* wk;
	// Line 895, Address: 0x1ed5ba0, Func Offset: 0
	// Line 896, Address: 0x1ed5bac, Func Offset: 0xc
	// Line 895, Address: 0x1ed5bb0, Func Offset: 0x10
	// Line 896, Address: 0x1ed5bbc, Func Offset: 0x1c
	// Line 897, Address: 0x1ed5bc8, Func Offset: 0x28
	// Line 898, Address: 0x1ed5bec, Func Offset: 0x4c
	// Line 897, Address: 0x1ed5bf0, Func Offset: 0x50
	// Line 898, Address: 0x1ed5bf4, Func Offset: 0x54
	// Line 899, Address: 0x1ed5c2c, Func Offset: 0x8c
	// Line 898, Address: 0x1ed5c30, Func Offset: 0x90
	// Line 899, Address: 0x1ed5c48, Func Offset: 0xa8
	// Line 900, Address: 0x1ed5c84, Func Offset: 0xe4
	// Line 899, Address: 0x1ed5c88, Func Offset: 0xe8
	// Line 900, Address: 0x1ed5ca0, Func Offset: 0x100
	// Line 903, Address: 0x1ed5cc4, Func Offset: 0x124
	// Line 900, Address: 0x1ed5cc8, Func Offset: 0x128
	// Line 903, Address: 0x1ed5cd8, Func Offset: 0x138
	// Line 905, Address: 0x1ed5ce0, Func Offset: 0x140
	// Line 907, Address: 0x1ed5ce8, Func Offset: 0x148
	// Func End, Address: 0x1ed5cf0, Func Offset: 0x150
}

// 
// Start address: 0x1ed5cf0
int ev_building0_bd12_elv_get_into_player()
{
	float pos[4];
	// Line 1120, Address: 0x1ed5cf0, Func Offset: 0
	// Func End, Address: 0x1ed5cf8, Func Offset: 0x8
	// Line 912, Address: 0x1ed5cf0, Func Offset: 0
	// Line 914, Address: 0x1ed5cf4, Func Offset: 0x4
	// Line 912, Address: 0x1ed5cf8, Func Offset: 0x8
	// Line 914, Address: 0x1ed5cfc, Func Offset: 0xc
	// Line 915, Address: 0x1ed5d04, Func Offset: 0x14
	// Line 916, Address: 0x1ed5d24, Func Offset: 0x34
	// Func End, Address: 0x1ed5d30, Func Offset: 0x40
}

// 
// Start address: 0x1ed5d30
int ev_building0_bd12_elv_set_player_pos(sfObj* obj)
{
	float pos[4];
	_ElvWork* wk;
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
// Start address: 0x1ed5db0
int ev_building0_bd12_elv_set_camera(int no)
{
	_ElvWork* wk;
	float pos[4];
	float pl_pos[4];
	// Line 943, Address: 0x1ed5db0, Func Offset: 0
	// Line 945, Address: 0x1ed5db4, Func Offset: 0x4
	// Line 943, Address: 0x1ed5db8, Func Offset: 0x8
	// Line 945, Address: 0x1ed5dbc, Func Offset: 0xc
	// Line 943, Address: 0x1ed5dc0, Func Offset: 0x10
	// Line 945, Address: 0x1ed5dc4, Func Offset: 0x14
	// Line 943, Address: 0x1ed5dc8, Func Offset: 0x18
	// Line 945, Address: 0x1ed5dcc, Func Offset: 0x1c
	// Line 946, Address: 0x1ed5dd8, Func Offset: 0x28
	// Line 950, Address: 0x1ed5de8, Func Offset: 0x38
	// Line 951, Address: 0x1ed5df0, Func Offset: 0x40
	// Line 953, Address: 0x1ed5e10, Func Offset: 0x60
	// Line 954, Address: 0x1ed5e18, Func Offset: 0x68
	// Line 956, Address: 0x1ed5e38, Func Offset: 0x88
	// Line 958, Address: 0x1ed5e54, Func Offset: 0xa4
	// Line 961, Address: 0x1ed5e60, Func Offset: 0xb0
	// Line 958, Address: 0x1ed5e68, Func Offset: 0xb8
	// Line 961, Address: 0x1ed5e6c, Func Offset: 0xbc
	// Line 963, Address: 0x1ed5e74, Func Offset: 0xc4
	// Line 964, Address: 0x1ed5e80, Func Offset: 0xd0
	// Line 963, Address: 0x1ed5e88, Func Offset: 0xd8
	// Line 964, Address: 0x1ed5e8c, Func Offset: 0xdc
	// Line 965, Address: 0x1ed5e94, Func Offset: 0xe4
	// Line 967, Address: 0x1ed5e98, Func Offset: 0xe8
	// Line 966, Address: 0x1ed5ea0, Func Offset: 0xf0
	// Line 967, Address: 0x1ed5ea4, Func Offset: 0xf4
	// Func End, Address: 0x1ed5eb0, Func Offset: 0x100
	// Line 329, Address: 0x1ed5db0, Func Offset: 0
	// Line 331, Address: 0x1ed5db4, Func Offset: 0x4
	// Line 329, Address: 0x1ed5db8, Func Offset: 0x8
	// Line 331, Address: 0x1ed5dbc, Func Offset: 0xc
	// Line 329, Address: 0x1ed5dc0, Func Offset: 0x10
	// Line 331, Address: 0x1ed5dc8, Func Offset: 0x18
	// Func End, Address: 0x1ed5dd0, Func Offset: 0x20
}

// 
// Start address: 0x1ed5eb0
int ev_building0_bd12_elv_set_floor(int no, int floor)
{
	int i;
	float pos[4];
	sfObj* obj;
	_ElvWork* wk;
	_anon5* pol;
	_anon4* dp;
	float pp[4];
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
// Start address: 0x1ed6200
int ev_building0_bd17_fan_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 1054, Address: 0x1ed6200, Func Offset: 0
	// Line 1055, Address: 0x1ed621c, Func Offset: 0x1c
	// Line 1056, Address: 0x1ed6224, Func Offset: 0x24
	// Line 1057, Address: 0x1ed6238, Func Offset: 0x38
	// Line 1060, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 1061, Address: 0x1ed6264, Func Offset: 0x64
	// Line 1063, Address: 0x1ed6278, Func Offset: 0x78
	// Line 1064, Address: 0x1ed6288, Func Offset: 0x88
	// Line 1069, Address: 0x1ed62c8, Func Offset: 0xc8
	// Line 1072, Address: 0x1ed62e0, Func Offset: 0xe0
	// Line 1073, Address: 0x1ed62ec, Func Offset: 0xec
	// Line 1074, Address: 0x1ed62fc, Func Offset: 0xfc
	// Line 1075, Address: 0x1ed6300, Func Offset: 0x100
	// Func End, Address: 0x1ed631c, Func Offset: 0x11c
	// Line 1132, Address: 0x1ed6200, Func Offset: 0
	// Line 1133, Address: 0x1ed6204, Func Offset: 0x4
	// Line 1132, Address: 0x1ed6208, Func Offset: 0x8
	// Line 1133, Address: 0x1ed620c, Func Offset: 0xc
	// Line 1132, Address: 0x1ed6210, Func Offset: 0x10
	// Line 1133, Address: 0x1ed6214, Func Offset: 0x14
	// Line 1134, Address: 0x1ed6220, Func Offset: 0x20
	// Line 1136, Address: 0x1ed6230, Func Offset: 0x30
	// Line 1137, Address: 0x1ed623c, Func Offset: 0x3c
	// Func End, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 269, Address: 0x1ed6200, Func Offset: 0
	// Line 270, Address: 0x1ed620c, Func Offset: 0xc
	// Line 272, Address: 0x1ed6210, Func Offset: 0x10
	// Line 273, Address: 0x1ed621c, Func Offset: 0x1c
	// Line 274, Address: 0x1ed6224, Func Offset: 0x24
	// Line 275, Address: 0x1ed6234, Func Offset: 0x34
	// Line 276, Address: 0x1ed6244, Func Offset: 0x44
	// Line 277, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 278, Address: 0x1ed6254, Func Offset: 0x54
	// Line 279, Address: 0x1ed6268, Func Offset: 0x68
	// Line 280, Address: 0x1ed627c, Func Offset: 0x7c
	// Line 285, Address: 0x1ed6284, Func Offset: 0x84
	// Line 287, Address: 0x1ed6288, Func Offset: 0x88
	// Line 286, Address: 0x1ed6290, Func Offset: 0x90
	// Line 287, Address: 0x1ed6294, Func Offset: 0x94
	// Func End, Address: 0x1ed629c, Func Offset: 0x9c
}

// 
// Start address: 0x1ed6250
int ev_building0_bd17_fan_exec(sfObj* obj)
{
	float rot[4];
	float* r;
	// Line 1913, Address: 0x1ed6250, Func Offset: 0
	// Line 1916, Address: 0x1ed625c, Func Offset: 0xc
	// Func End, Address: 0x1ed6264, Func Offset: 0x14
	// Line 1139, Address: 0x1ed6250, Func Offset: 0
	// Line 1141, Address: 0x1ed6260, Func Offset: 0x10
	// Line 1143, Address: 0x1ed6264, Func Offset: 0x14
	// Line 1145, Address: 0x1ed626c, Func Offset: 0x1c
	// Line 1146, Address: 0x1ed6288, Func Offset: 0x38
	// Line 1147, Address: 0x1ed629c, Func Offset: 0x4c
	// Line 1149, Address: 0x1ed62a8, Func Offset: 0x58
	// Line 1148, Address: 0x1ed62ac, Func Offset: 0x5c
	// Line 1149, Address: 0x1ed62b0, Func Offset: 0x60
	// Func End, Address: 0x1ed62c0, Func Offset: 0x70
}

// 
// Start address: 0x1ed62c0
int ev_building0_bd17_fan_draw(sfObj* obj)
{
	// Line 318, Address: 0x1ed62c0, Func Offset: 0
	// Line 319, Address: 0x1ed62d0, Func Offset: 0x10
	// Line 322, Address: 0x1ed62d8, Func Offset: 0x18
	// Line 323, Address: 0x1ed62e4, Func Offset: 0x24
	// Line 324, Address: 0x1ed62ec, Func Offset: 0x2c
	// Line 326, Address: 0x1ed62f4, Func Offset: 0x34
	// Line 327, Address: 0x1ed62f8, Func Offset: 0x38
	// Func End, Address: 0x1ed6308, Func Offset: 0x48
	// Line 1151, Address: 0x1ed62c0, Func Offset: 0
	// Line 1152, Address: 0x1ed62c8, Func Offset: 0x8
	// Line 1154, Address: 0x1ed62d0, Func Offset: 0x10
	// Line 1153, Address: 0x1ed62d4, Func Offset: 0x14
	// Line 1154, Address: 0x1ed62d8, Func Offset: 0x18
	// Func End, Address: 0x1ed62e0, Func Offset: 0x20
}

// 
// Start address: 0x1ed62e0
int ev_building0_bd17_fan_end(sfObj* obj)
{
	// Line 1156, Address: 0x1ed62e0, Func Offset: 0
	// Line 1157, Address: 0x1ed62e8, Func Offset: 0x8
	// Line 1159, Address: 0x1ed62f0, Func Offset: 0x10
	// Line 1158, Address: 0x1ed62f4, Func Offset: 0x14
	// Line 1159, Address: 0x1ed62f8, Func Offset: 0x18
	// Func End, Address: 0x1ed6300, Func Offset: 0x20
	// Line 1321, Address: 0x1ed62e0, Func Offset: 0
	// Line 1322, Address: 0x1ed62f0, Func Offset: 0x10
	// Line 1324, Address: 0x1ed62f8, Func Offset: 0x18
	// Line 1325, Address: 0x1ed6300, Func Offset: 0x20
	// Line 1328, Address: 0x1ed6308, Func Offset: 0x28
	// Line 1327, Address: 0x1ed6310, Func Offset: 0x30
	// Line 1328, Address: 0x1ed6314, Func Offset: 0x34
	// Func End, Address: 0x1ed631c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6300
int ev_building0_bd24_mhari_init(sfObj* obj)
{
	_evCmnBgObjData dat[2];
	// Line 1170, Address: 0x1ed6300, Func Offset: 0
	// Line 1171, Address: 0x1ed6304, Func Offset: 0x4
	// Line 1170, Address: 0x1ed6308, Func Offset: 0x8
	// Line 1171, Address: 0x1ed630c, Func Offset: 0xc
	// Line 1176, Address: 0x1ed6324, Func Offset: 0x24
	// Line 1177, Address: 0x1ed6340, Func Offset: 0x40
	// Func End, Address: 0x1ed634c, Func Offset: 0x4c
}

// 
// Start address: 0x1ed6350
int ev_building0_bd24_mhari_exec(sfObj* obj)
{
	float rot[4];
	// Line 1179, Address: 0x1ed6350, Func Offset: 0
	// Line 1181, Address: 0x1ed635c, Func Offset: 0xc
	// Line 1182, Address: 0x1ed6368, Func Offset: 0x18
	// Line 1183, Address: 0x1ed63a8, Func Offset: 0x58
	// Line 1184, Address: 0x1ed63d8, Func Offset: 0x88
	// Line 1185, Address: 0x1ed6424, Func Offset: 0xd4
	// Line 1186, Address: 0x1ed6430, Func Offset: 0xe0
	// Line 1187, Address: 0x1ed647c, Func Offset: 0x12c
	// Line 1188, Address: 0x1ed6480, Func Offset: 0x130
	// Line 1190, Address: 0x1ed648c, Func Offset: 0x13c
	// Line 1192, Address: 0x1ed6494, Func Offset: 0x144
	// Line 1191, Address: 0x1ed6498, Func Offset: 0x148
	// Line 1192, Address: 0x1ed649c, Func Offset: 0x14c
	// Func End, Address: 0x1ed64a8, Func Offset: 0x158
}

// 
// Start address: 0x1ed64b0
int ev_building0_bd24_mhari_draw(sfObj* obj)
{
	// Line 1194, Address: 0x1ed64b0, Func Offset: 0
	// Line 1195, Address: 0x1ed64b8, Func Offset: 0x8
	// Line 1197, Address: 0x1ed64c0, Func Offset: 0x10
	// Line 1196, Address: 0x1ed64c4, Func Offset: 0x14
	// Line 1197, Address: 0x1ed64c8, Func Offset: 0x18
	// Func End, Address: 0x1ed64d0, Func Offset: 0x20
}

// 
// Start address: 0x1ed64d0
int ev_building0_bd24_mhari_end(sfObj* obj)
{
	// Line 1144, Address: 0x1ed64d0, Func Offset: 0
	// Line 1151, Address: 0x1ed64d4, Func Offset: 0x4
	// Line 1144, Address: 0x1ed64d8, Func Offset: 0x8
	// Line 1151, Address: 0x1ed64dc, Func Offset: 0xc
	// Line 1144, Address: 0x1ed64e0, Func Offset: 0x10
	// Line 1146, Address: 0x1ed64e8, Func Offset: 0x18
	// Line 1144, Address: 0x1ed64ec, Func Offset: 0x1c
	// Line 1147, Address: 0x1ed64f0, Func Offset: 0x20
	// Line 1144, Address: 0x1ed64f4, Func Offset: 0x24
	// Line 1147, Address: 0x1ed64f8, Func Offset: 0x28
	// Line 1151, Address: 0x1ed64fc, Func Offset: 0x2c
	// Line 1152, Address: 0x1ed6504, Func Offset: 0x34
	// Line 1154, Address: 0x1ed6518, Func Offset: 0x48
	// Line 1156, Address: 0x1ed652c, Func Offset: 0x5c
	// Line 1159, Address: 0x1ed653c, Func Offset: 0x6c
	// Line 1160, Address: 0x1ed6554, Func Offset: 0x84
	// Line 1161, Address: 0x1ed6564, Func Offset: 0x94
	// Line 1167, Address: 0x1ed6570, Func Offset: 0xa0
	// Line 1169, Address: 0x1ed6580, Func Offset: 0xb0
	// Line 1170, Address: 0x1ed6588, Func Offset: 0xb8
	// Line 1172, Address: 0x1ed6594, Func Offset: 0xc4
	// Line 1173, Address: 0x1ed65a0, Func Offset: 0xd0
	// Line 1174, Address: 0x1ed65ac, Func Offset: 0xdc
	// Line 1177, Address: 0x1ed65b0, Func Offset: 0xe0
	// Line 1178, Address: 0x1ed65bc, Func Offset: 0xec
	// Line 1181, Address: 0x1ed65c8, Func Offset: 0xf8
	// Line 1178, Address: 0x1ed65d0, Func Offset: 0x100
	// Line 1181, Address: 0x1ed65d4, Func Offset: 0x104
	// Line 1182, Address: 0x1ed65dc, Func Offset: 0x10c
	// Line 1184, Address: 0x1ed65e0, Func Offset: 0x110
	// Line 1185, Address: 0x1ed65ec, Func Offset: 0x11c
	// Line 1186, Address: 0x1ed65fc, Func Offset: 0x12c
	// Line 1188, Address: 0x1ed6600, Func Offset: 0x130
	// Line 1189, Address: 0x1ed6610, Func Offset: 0x140
	// Line 1190, Address: 0x1ed661c, Func Offset: 0x14c
	// Line 1191, Address: 0x1ed6624, Func Offset: 0x154
	// Func End, Address: 0x1ed6644, Func Offset: 0x174
	// Line 1199, Address: 0x1ed64d0, Func Offset: 0
	// Line 1200, Address: 0x1ed64d8, Func Offset: 0x8
	// Line 1202, Address: 0x1ed64e0, Func Offset: 0x10
	// Line 1201, Address: 0x1ed64e4, Func Offset: 0x14
	// Line 1202, Address: 0x1ed64e8, Func Offset: 0x18
	// Func End, Address: 0x1ed64f0, Func Offset: 0x20
}

// 
// Start address: 0x1ed64f0
int ev_building0_bd24_furi_init(sfObj* obj)
{
	_evCmnBgObjData dat;
	// Line 2041, Address: 0x1ed64f0, Func Offset: 0
	// Line 2047, Address: 0x1ed64f4, Func Offset: 0x4
	// Line 2041, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 2047, Address: 0x1ed64fc, Func Offset: 0xc
	// Line 2041, Address: 0x1ed6500, Func Offset: 0x10
	// Line 2042, Address: 0x1ed650c, Func Offset: 0x1c
	// Line 2047, Address: 0x1ed6518, Func Offset: 0x28
	// Line 2048, Address: 0x1ed6520, Func Offset: 0x30
	// Line 2049, Address: 0x1ed6534, Func Offset: 0x44
	// Line 2050, Address: 0x1ed6548, Func Offset: 0x58
	// Line 2051, Address: 0x1ed6558, Func Offset: 0x68
	// Line 2052, Address: 0x1ed6568, Func Offset: 0x78
	// Line 2053, Address: 0x1ed6578, Func Offset: 0x88
	// Func End, Address: 0x1ed6590, Func Offset: 0xa0
	// Line 597, Address: 0x1ed64f0, Func Offset: 0
	// Func End, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 1212, Address: 0x1ed64f0, Func Offset: 0
	// Line 1213, Address: 0x1ed64f4, Func Offset: 0x4
	// Line 1212, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 1213, Address: 0x1ed64fc, Func Offset: 0xc
	// Line 1215, Address: 0x1ed6510, Func Offset: 0x20
	// Line 1216, Address: 0x1ed6518, Func Offset: 0x28
	// Func End, Address: 0x1ed6524, Func Offset: 0x34
}

// 
// Start address: 0x1ed6530
int ev_building0_bd24_furi_exec(sfObj* obj)
{
	float rot[4];
	// Line 1218, Address: 0x1ed6530, Func Offset: 0
	// Line 1220, Address: 0x1ed6534, Func Offset: 0x4
	// Line 1218, Address: 0x1ed6538, Func Offset: 0x8
	// Line 1220, Address: 0x1ed653c, Func Offset: 0xc
	// Line 1218, Address: 0x1ed6540, Func Offset: 0x10
	// Line 1220, Address: 0x1ed6544, Func Offset: 0x14
	// Line 1222, Address: 0x1ed65c0, Func Offset: 0x90
	// Line 1224, Address: 0x1ed65cc, Func Offset: 0x9c
	// Line 1226, Address: 0x1ed65d4, Func Offset: 0xa4
	// Line 1225, Address: 0x1ed65d8, Func Offset: 0xa8
	// Line 1226, Address: 0x1ed65dc, Func Offset: 0xac
	// Func End, Address: 0x1ed65e8, Func Offset: 0xb8
}

// 
// Start address: 0x1ed65f0
int ev_building0_bd24_furi_draw(sfObj* obj)
{
	// Line 1228, Address: 0x1ed65f0, Func Offset: 0
	// Line 1229, Address: 0x1ed65f8, Func Offset: 0x8
	// Line 1231, Address: 0x1ed6600, Func Offset: 0x10
	// Line 1230, Address: 0x1ed6604, Func Offset: 0x14
	// Line 1231, Address: 0x1ed6608, Func Offset: 0x18
	// Func End, Address: 0x1ed6610, Func Offset: 0x20
}

// 
// Start address: 0x1ed6610
int ev_building0_bd24_furi_end(sfObj* obj)
{
	// Line 1233, Address: 0x1ed6610, Func Offset: 0
	// Line 1234, Address: 0x1ed6618, Func Offset: 0x8
	// Line 1236, Address: 0x1ed6620, Func Offset: 0x10
	// Line 1235, Address: 0x1ed6624, Func Offset: 0x14
	// Line 1236, Address: 0x1ed6628, Func Offset: 0x18
	// Func End, Address: 0x1ed6630, Func Offset: 0x20
}

// 
// Start address: 0x1ed6630
int ev_building0_bd24_sabi_init(sfObj* obj)
{
	_evCmnBgObjData dat;
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
// Start address: 0x1ed6670
int ev_building0_bd24_sabi_exec(sfObj* obj)
{
	// Line 301, Address: 0x1ed6670, Func Offset: 0
	// Line 324, Address: 0x1ed6674, Func Offset: 0x4
	// Line 301, Address: 0x1ed6678, Func Offset: 0x8
	// Line 324, Address: 0x1ed667c, Func Offset: 0xc
	// Line 325, Address: 0x1ed668c, Func Offset: 0x1c
	// Line 327, Address: 0x1ed6694, Func Offset: 0x24
	// Line 329, Address: 0x1ed6698, Func Offset: 0x28
	// Line 327, Address: 0x1ed669c, Func Offset: 0x2c
	// Line 329, Address: 0x1ed66a0, Func Offset: 0x30
	// Line 327, Address: 0x1ed66a4, Func Offset: 0x34
	// Line 329, Address: 0x1ed66a8, Func Offset: 0x38
	// Line 331, Address: 0x1ed66ac, Func Offset: 0x3c
	// Line 332, Address: 0x1ed66b4, Func Offset: 0x44
	// Line 335, Address: 0x1ed66c0, Func Offset: 0x50
	// Func End, Address: 0x1ed66cc, Func Offset: 0x5c
	// Line 1247, Address: 0x1ed6670, Func Offset: 0
	// Line 1248, Address: 0x1ed6674, Func Offset: 0x4
	// Line 1247, Address: 0x1ed6678, Func Offset: 0x8
	// Line 1248, Address: 0x1ed667c, Func Offset: 0xc
	// Line 1250, Address: 0x1ed6698, Func Offset: 0x28
	// Line 1249, Address: 0x1ed669c, Func Offset: 0x2c
	// Line 1250, Address: 0x1ed66a0, Func Offset: 0x30
	// Func End, Address: 0x1ed66a8, Func Offset: 0x38
}

// 
// Start address: 0x1ed66b0
int ev_building0_bd24_sabi_draw(sfObj* obj)
{
	// Line 1252, Address: 0x1ed66b0, Func Offset: 0
	// Line 1253, Address: 0x1ed66b4, Func Offset: 0x4
	// Line 1252, Address: 0x1ed66b8, Func Offset: 0x8
	// Line 1253, Address: 0x1ed66bc, Func Offset: 0xc
	// Line 1255, Address: 0x1ed66d8, Func Offset: 0x28
	// Line 1254, Address: 0x1ed66dc, Func Offset: 0x2c
	// Line 1255, Address: 0x1ed66e0, Func Offset: 0x30
	// Func End, Address: 0x1ed66e8, Func Offset: 0x38
}

// 
// Start address: 0x1ed66f0
int ev_building0_bd24_sabi_end(sfObj* obj)
{
	// Line 1257, Address: 0x1ed66f0, Func Offset: 0
	// Line 1258, Address: 0x1ed66f8, Func Offset: 0x8
	// Line 1260, Address: 0x1ed6700, Func Offset: 0x10
	// Line 1259, Address: 0x1ed6704, Func Offset: 0x14
	// Line 1260, Address: 0x1ed6708, Func Offset: 0x18
	// Func End, Address: 0x1ed6710, Func Offset: 0x20
	// Line 1589, Address: 0x1ed66f0, Func Offset: 0
	// Line 1592, Address: 0x1ed66f4, Func Offset: 0x4
	// Line 1589, Address: 0x1ed66f8, Func Offset: 0x8
	// Line 1592, Address: 0x1ed66fc, Func Offset: 0xc
	// Line 1594, Address: 0x1ed670c, Func Offset: 0x1c
	// Line 1593, Address: 0x1ed6710, Func Offset: 0x20
	// Line 1594, Address: 0x1ed6714, Func Offset: 0x24
	// Func End, Address: 0x1ed671c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed6710
int ev_building0_bd07_candle_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 2100, Address: 0x1ed6710, Func Offset: 0
	// Line 2103, Address: 0x1ed6714, Func Offset: 0x4
	// Line 2100, Address: 0x1ed6718, Func Offset: 0x8
	// Line 2103, Address: 0x1ed6728, Func Offset: 0x18
	// Line 2104, Address: 0x1ed6734, Func Offset: 0x24
	// Line 2106, Address: 0x1ed6738, Func Offset: 0x28
	// Line 2107, Address: 0x1ed6764, Func Offset: 0x54
	// Line 2108, Address: 0x1ed6770, Func Offset: 0x60
	// Line 2109, Address: 0x1ed677c, Func Offset: 0x6c
	// Line 2110, Address: 0x1ed6784, Func Offset: 0x74
	// Line 2113, Address: 0x1ed678c, Func Offset: 0x7c
	// Line 2119, Address: 0x1ed67b8, Func Offset: 0xa8
	// Line 2118, Address: 0x1ed67bc, Func Offset: 0xac
	// Line 2119, Address: 0x1ed67c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed67d4, Func Offset: 0xc4
	// Line 822, Address: 0x1ed6710, Func Offset: 0
	// Line 825, Address: 0x1ed6724, Func Offset: 0x14
	// Line 828, Address: 0x1ed6750, Func Offset: 0x40
	// Line 830, Address: 0x1ed676c, Func Offset: 0x5c
	// Line 831, Address: 0x1ed6778, Func Offset: 0x68
	// Line 834, Address: 0x1ed6784, Func Offset: 0x74
	// Line 835, Address: 0x1ed6788, Func Offset: 0x78
	// Line 839, Address: 0x1ed6798, Func Offset: 0x88
	// Line 843, Address: 0x1ed67a4, Func Offset: 0x94
	// Line 844, Address: 0x1ed67b8, Func Offset: 0xa8
	// Line 848, Address: 0x1ed67d0, Func Offset: 0xc0
	// Line 850, Address: 0x1ed67d8, Func Offset: 0xc8
	// Line 855, Address: 0x1ed67e0, Func Offset: 0xd0
	// Line 857, Address: 0x1ed6804, Func Offset: 0xf4
	// Line 858, Address: 0x1ed680c, Func Offset: 0xfc
	// Line 860, Address: 0x1ed6814, Func Offset: 0x104
	// Line 861, Address: 0x1ed6818, Func Offset: 0x108
	// Line 862, Address: 0x1ed6828, Func Offset: 0x118
	// Line 863, Address: 0x1ed6830, Func Offset: 0x120
	// Line 865, Address: 0x1ed6838, Func Offset: 0x128
	// Line 869, Address: 0x1ed6840, Func Offset: 0x130
	// Line 870, Address: 0x1ed6850, Func Offset: 0x140
	// Line 872, Address: 0x1ed6858, Func Offset: 0x148
	// Line 875, Address: 0x1ed6860, Func Offset: 0x150
	// Line 876, Address: 0x1ed6868, Func Offset: 0x158
	// Line 878, Address: 0x1ed686c, Func Offset: 0x15c
	// Line 880, Address: 0x1ed6870, Func Offset: 0x160
	// Line 881, Address: 0x1ed6874, Func Offset: 0x164
	// Func End, Address: 0x1ed6888, Func Offset: 0x178
	// Line 351, Address: 0x1ed6710, Func Offset: 0
	// Line 353, Address: 0x1ed6714, Func Offset: 0x4
	// Line 351, Address: 0x1ed6718, Func Offset: 0x8
	// Line 353, Address: 0x1ed6724, Func Offset: 0x14
	// Line 354, Address: 0x1ed672c, Func Offset: 0x1c
	// Line 355, Address: 0x1ed6734, Func Offset: 0x24
	// Func End, Address: 0x1ed6744, Func Offset: 0x34
	// Line 1272, Address: 0x1ed6710, Func Offset: 0
	// Line 1273, Address: 0x1ed6714, Func Offset: 0x4
	// Line 1272, Address: 0x1ed6718, Func Offset: 0x8
	// Line 1273, Address: 0x1ed671c, Func Offset: 0xc
	// Line 1275, Address: 0x1ed6728, Func Offset: 0x18
	// Line 1276, Address: 0x1ed6730, Func Offset: 0x20
	// Func End, Address: 0x1ed673c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed6740
int ev_building0_bd07_candle_exec(sfObj* obj)
{
	// Line 1278, Address: 0x1ed6740, Func Offset: 0
	// Line 1279, Address: 0x1ed6744, Func Offset: 0x4
	// Line 1278, Address: 0x1ed6748, Func Offset: 0x8
	// Line 1279, Address: 0x1ed6750, Func Offset: 0x10
	// Line 1280, Address: 0x1ed6764, Func Offset: 0x24
	// Line 1282, Address: 0x1ed676c, Func Offset: 0x2c
	// Line 1281, Address: 0x1ed6770, Func Offset: 0x30
	// Line 1282, Address: 0x1ed6774, Func Offset: 0x34
	// Func End, Address: 0x1ed6780, Func Offset: 0x40
	// Line 57, Address: 0x1ed6740, Func Offset: 0
	// Line 58, Address: 0x1ed674c, Func Offset: 0xc
	// Line 59, Address: 0x1ed675c, Func Offset: 0x1c
	// Line 61, Address: 0x1ed6768, Func Offset: 0x28
	// Line 60, Address: 0x1ed6770, Func Offset: 0x30
	// Line 61, Address: 0x1ed6774, Func Offset: 0x34
	// Func End, Address: 0x1ed677c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6780
int ev_building0_bd08_valley_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 1287, Address: 0x1ed6780, Func Offset: 0
	// Line 1288, Address: 0x1ed6784, Func Offset: 0x4
	// Line 1287, Address: 0x1ed6788, Func Offset: 0x8
	// Line 1288, Address: 0x1ed678c, Func Offset: 0xc
	// Line 1289, Address: 0x1ed6798, Func Offset: 0x18
	// Line 1290, Address: 0x1ed67a0, Func Offset: 0x20
	// Func End, Address: 0x1ed67ac, Func Offset: 0x2c
	// Line 86, Address: 0x1ed6780, Func Offset: 0
	// Func End, Address: 0x1ed6788, Func Offset: 0x8
}

// 
// Start address: 0x1ed67b0
int ev_building0_bd08_valley_exec(sfObj* obj)
{
	// Line 1292, Address: 0x1ed67b0, Func Offset: 0
	// Line 1293, Address: 0x1ed67b4, Func Offset: 0x4
	// Line 1292, Address: 0x1ed67b8, Func Offset: 0x8
	// Line 1293, Address: 0x1ed67c0, Func Offset: 0x10
	// Line 1294, Address: 0x1ed67d4, Func Offset: 0x24
	// Line 1296, Address: 0x1ed67dc, Func Offset: 0x2c
	// Line 1295, Address: 0x1ed67e0, Func Offset: 0x30
	// Line 1296, Address: 0x1ed67e4, Func Offset: 0x34
	// Func End, Address: 0x1ed67f0, Func Offset: 0x40
	// Line 137, Address: 0x1ed67b0, Func Offset: 0
	// Line 139, Address: 0x1ed67b4, Func Offset: 0x4
	// Line 137, Address: 0x1ed67b8, Func Offset: 0x8
	// Line 139, Address: 0x1ed67bc, Func Offset: 0xc
	// Line 141, Address: 0x1ed67cc, Func Offset: 0x1c
	// Line 140, Address: 0x1ed67d0, Func Offset: 0x20
	// Line 141, Address: 0x1ed67d4, Func Offset: 0x24
	// Func End, Address: 0x1ed67dc, Func Offset: 0x2c
}

// 
// Start address: 0x1ed67f0
int ev_building0_bd23_cat_init(sfObj* obj)
{
	_evBgCharData dat;
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
// Start address: 0x1ed6820
int ev_building0_bd23_cat_exec(sfObj* obj)
{
	// Line 472, Address: 0x1ed6820, Func Offset: 0
	// Line 473, Address: 0x1ed6828, Func Offset: 0x8
	// Line 474, Address: 0x1ed6838, Func Offset: 0x18
	// Line 475, Address: 0x1ed6854, Func Offset: 0x34
	// Line 476, Address: 0x1ed685c, Func Offset: 0x3c
	// Line 477, Address: 0x1ed6860, Func Offset: 0x40
	// Line 478, Address: 0x1ed6868, Func Offset: 0x48
	// Func End, Address: 0x1ed6874, Func Offset: 0x54
	// Line 1306, Address: 0x1ed6820, Func Offset: 0
	// Line 1307, Address: 0x1ed6824, Func Offset: 0x4
	// Line 1306, Address: 0x1ed6828, Func Offset: 0x8
	// Line 1307, Address: 0x1ed6830, Func Offset: 0x10
	// Line 1308, Address: 0x1ed6844, Func Offset: 0x24
	// Line 1310, Address: 0x1ed684c, Func Offset: 0x2c
	// Line 1309, Address: 0x1ed6850, Func Offset: 0x30
	// Line 1310, Address: 0x1ed6854, Func Offset: 0x34
	// Func End, Address: 0x1ed6860, Func Offset: 0x40
}

// 
// Start address: 0x1ed6860
int ev_building0_bd14_ball_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 1315, Address: 0x1ed6860, Func Offset: 0
	// Line 1316, Address: 0x1ed6864, Func Offset: 0x4
	// Line 1315, Address: 0x1ed6868, Func Offset: 0x8
	// Line 1316, Address: 0x1ed686c, Func Offset: 0xc
	// Line 1317, Address: 0x1ed6878, Func Offset: 0x18
	// Line 1318, Address: 0x1ed6880, Func Offset: 0x20
	// Func End, Address: 0x1ed688c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed6890
int ev_building0_bd14_ball_exec(sfObj* obj)
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
// Start address: 0x1ed68d0
int ev_building0_bd20_kami_init(sfObj* obj)
{
	_evCmnBgObjData dat;
	// Line 520, Address: 0x1ed68d0, Func Offset: 0
	// Line 521, Address: 0x1ed68d4, Func Offset: 0x4
	// Line 520, Address: 0x1ed68d8, Func Offset: 0x8
	// Line 522, Address: 0x1ed68e4, Func Offset: 0x14
	// Func End, Address: 0x1ed68ec, Func Offset: 0x1c
	// Line 1340, Address: 0x1ed68d0, Func Offset: 0
	// Line 1341, Address: 0x1ed68d4, Func Offset: 0x4
	// Line 1340, Address: 0x1ed68d8, Func Offset: 0x8
	// Line 1341, Address: 0x1ed68dc, Func Offset: 0xc
	// Line 1343, Address: 0x1ed68f0, Func Offset: 0x20
	// Line 1344, Address: 0x1ed68f8, Func Offset: 0x28
	// Func End, Address: 0x1ed6904, Func Offset: 0x34
}

// 
// Start address: 0x1ed6910
int ev_building0_bd_2249_03_exec()
{
	// Line 1350, Address: 0x1ed6910, Func Offset: 0
	// Line 1347, Address: 0x1ed6914, Func Offset: 0x4
	// Line 1350, Address: 0x1ed6918, Func Offset: 0x8
	// Line 1347, Address: 0x1ed691c, Func Offset: 0xc
	// Line 1350, Address: 0x1ed6920, Func Offset: 0x10
	// Line 1352, Address: 0x1ed693c, Func Offset: 0x2c
	// Line 1351, Address: 0x1ed6940, Func Offset: 0x30
	// Line 1352, Address: 0x1ed6944, Func Offset: 0x34
	// Func End, Address: 0x1ed694c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6950
int ev_building0_bd_2249_01_exec(sfObj* obj)
{
	_anon2* wk;
	float pos[4][2];
	// Line 968, Address: 0x1ed6950, Func Offset: 0
	// Func End, Address: 0x1ed6958, Func Offset: 0x8
	// Line 674, Address: 0x1ed6950, Func Offset: 0
	// Line 681, Address: 0x1ed6954, Func Offset: 0x4
	// Line 674, Address: 0x1ed6958, Func Offset: 0x8
	// Line 681, Address: 0x1ed695c, Func Offset: 0xc
	// Line 682, Address: 0x1ed696c, Func Offset: 0x1c
	// Line 683, Address: 0x1ed6974, Func Offset: 0x24
	// Line 684, Address: 0x1ed6980, Func Offset: 0x30
	// Line 687, Address: 0x1ed6994, Func Offset: 0x44
	// Line 688, Address: 0x1ed699c, Func Offset: 0x4c
	// Line 692, Address: 0x1ed69a8, Func Offset: 0x58
	// Line 693, Address: 0x1ed69b4, Func Offset: 0x64
	// Line 697, Address: 0x1ed69c8, Func Offset: 0x78
	// Line 696, Address: 0x1ed69cc, Func Offset: 0x7c
	// Line 697, Address: 0x1ed69d0, Func Offset: 0x80
	// Func End, Address: 0x1ed69d8, Func Offset: 0x88
	// Line 1372, Address: 0x1ed6950, Func Offset: 0
	// Line 1374, Address: 0x1ed6954, Func Offset: 0x4
	// Line 1372, Address: 0x1ed6958, Func Offset: 0x8
	// Line 1374, Address: 0x1ed695c, Func Offset: 0xc
	// Line 1372, Address: 0x1ed6960, Func Offset: 0x10
	// Line 1374, Address: 0x1ed6964, Func Offset: 0x14
	// Line 1372, Address: 0x1ed6968, Func Offset: 0x18
	// Line 1380, Address: 0x1ed696c, Func Offset: 0x1c
	// Line 1374, Address: 0x1ed6970, Func Offset: 0x20
	// Line 1380, Address: 0x1ed6980, Func Offset: 0x30
	// Line 1378, Address: 0x1ed6984, Func Offset: 0x34
	// Line 1380, Address: 0x1ed6988, Func Offset: 0x38
	// Line 1383, Address: 0x1ed69a0, Func Offset: 0x50
	// Line 1386, Address: 0x1ed69d8, Func Offset: 0x88
	// Line 1387, Address: 0x1ed69e0, Func Offset: 0x90
	// Line 1389, Address: 0x1ed69ec, Func Offset: 0x9c
	// Line 1390, Address: 0x1ed6a30, Func Offset: 0xe0
	// Line 1391, Address: 0x1ed6a44, Func Offset: 0xf4
	// Line 1393, Address: 0x1ed6a50, Func Offset: 0x100
	// Line 1394, Address: 0x1ed6a58, Func Offset: 0x108
	// Line 1397, Address: 0x1ed6a64, Func Offset: 0x114
	// Line 1399, Address: 0x1ed6a68, Func Offset: 0x118
	// Line 1398, Address: 0x1ed6a70, Func Offset: 0x120
	// Line 1399, Address: 0x1ed6a74, Func Offset: 0x124
	// Func End, Address: 0x1ed6a80, Func Offset: 0x130
	// Line 227, Address: 0x1ed6950, Func Offset: 0
	// Line 229, Address: 0x1ed6958, Func Offset: 0x8
	// Line 231, Address: 0x1ed6968, Func Offset: 0x18
	// Line 232, Address: 0x1ed6974, Func Offset: 0x24
	// Line 234, Address: 0x1ed6978, Func Offset: 0x28
	// Line 233, Address: 0x1ed697c, Func Offset: 0x2c
	// Line 234, Address: 0x1ed6980, Func Offset: 0x30
	// Func End, Address: 0x1ed6988, Func Offset: 0x38
}

// 
// Start address: 0x1ed6a80
int ev_building0_bd_2249_02_exec(sfObj* obj)
{
	_anon2* wk;
	// Line 2298, Address: 0x1ed6a80, Func Offset: 0
	// Line 2299, Address: 0x1ed6a84, Func Offset: 0x4
	// Line 2298, Address: 0x1ed6a88, Func Offset: 0x8
	// Line 2299, Address: 0x1ed6aa0, Func Offset: 0x20
	// Line 2300, Address: 0x1ed6aa8, Func Offset: 0x28
	// Line 2301, Address: 0x1ed6ac4, Func Offset: 0x44
	// Line 2302, Address: 0x1ed6ad4, Func Offset: 0x54
	// Line 2304, Address: 0x1ed6aec, Func Offset: 0x6c
	// Line 2305, Address: 0x1ed6afc, Func Offset: 0x7c
	// Line 2306, Address: 0x1ed6b18, Func Offset: 0x98
	// Line 2307, Address: 0x1ed6b28, Func Offset: 0xa8
	// Line 2308, Address: 0x1ed6b44, Func Offset: 0xc4
	// Func End, Address: 0x1ed6b5c, Func Offset: 0xdc
	// Line 1402, Address: 0x1ed6a80, Func Offset: 0
	// Line 1405, Address: 0x1ed6a84, Func Offset: 0x4
	// Line 1402, Address: 0x1ed6a88, Func Offset: 0x8
	// Line 1405, Address: 0x1ed6a94, Func Offset: 0x14
	// Line 1404, Address: 0x1ed6a98, Func Offset: 0x18
	// Line 1405, Address: 0x1ed6a9c, Func Offset: 0x1c
	// Line 1406, Address: 0x1ed6ab4, Func Offset: 0x34
	// Line 1408, Address: 0x1ed6ab8, Func Offset: 0x38
	// Line 1411, Address: 0x1ed6ad4, Func Offset: 0x54
	// Line 1412, Address: 0x1ed6adc, Func Offset: 0x5c
	// Line 1413, Address: 0x1ed6ae4, Func Offset: 0x64
	// Line 1412, Address: 0x1ed6ae8, Func Offset: 0x68
	// Line 1414, Address: 0x1ed6aec, Func Offset: 0x6c
	// Line 1415, Address: 0x1ed6b10, Func Offset: 0x90
	// Line 1416, Address: 0x1ed6b24, Func Offset: 0xa4
	// Line 1418, Address: 0x1ed6b30, Func Offset: 0xb0
	// Line 1419, Address: 0x1ed6b38, Func Offset: 0xb8
	// Line 1422, Address: 0x1ed6b44, Func Offset: 0xc4
	// Line 1424, Address: 0x1ed6b48, Func Offset: 0xc8
	// Line 1423, Address: 0x1ed6b50, Func Offset: 0xd0
	// Line 1424, Address: 0x1ed6b54, Func Offset: 0xd4
	// Func End, Address: 0x1ed6b60, Func Offset: 0xe0
}

// 
// Start address: 0x1ed6b60
int ev_building0_bd_2249_01_init(sfObj* obj)
{
	// Line 2311, Address: 0x1ed6b60, Func Offset: 0
	// Line 2312, Address: 0x1ed6b64, Func Offset: 0x4
	// Line 2311, Address: 0x1ed6b68, Func Offset: 0x8
	// Line 2312, Address: 0x1ed6b6c, Func Offset: 0xc
	// Line 2311, Address: 0x1ed6b70, Func Offset: 0x10
	// Line 2312, Address: 0x1ed6b7c, Func Offset: 0x1c
	// Line 2313, Address: 0x1ed6b8c, Func Offset: 0x2c
	// Line 2315, Address: 0x1ed6ba0, Func Offset: 0x40
	// Line 2316, Address: 0x1ed6bb8, Func Offset: 0x58
	// Line 2317, Address: 0x1ed6bcc, Func Offset: 0x6c
	// Line 2318, Address: 0x1ed6bd8, Func Offset: 0x78
	// Func End, Address: 0x1ed6bf0, Func Offset: 0x90
	// Line 1426, Address: 0x1ed6b60, Func Offset: 0
	// Line 1428, Address: 0x1ed6b64, Func Offset: 0x4
	// Line 1426, Address: 0x1ed6b68, Func Offset: 0x8
	// Line 1428, Address: 0x1ed6b70, Func Offset: 0x10
	// Line 1430, Address: 0x1ed6b7c, Func Offset: 0x1c
	// Line 1431, Address: 0x1ed6b84, Func Offset: 0x24
	// Line 1430, Address: 0x1ed6b88, Func Offset: 0x28
	// Line 1432, Address: 0x1ed6b8c, Func Offset: 0x2c
	// Func End, Address: 0x1ed6b9c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6ba0
int ev_building0_bd_2249_01_end(sfObj* obj)
{
	_anon2* wk;
	// Line 1435, Address: 0x1ed6ba0, Func Offset: 0
	// Line 1438, Address: 0x1ed6ba4, Func Offset: 0x4
	// Line 1435, Address: 0x1ed6ba8, Func Offset: 0x8
	// Line 1437, Address: 0x1ed6bb0, Func Offset: 0x10
	// Line 1438, Address: 0x1ed6bb8, Func Offset: 0x18
	// Line 1439, Address: 0x1ed6bc0, Func Offset: 0x20
	// Line 1442, Address: 0x1ed6bc8, Func Offset: 0x28
	// Line 1444, Address: 0x1ed6bd0, Func Offset: 0x30
	// Line 1446, Address: 0x1ed6bdc, Func Offset: 0x3c
	// Line 1445, Address: 0x1ed6be0, Func Offset: 0x40
	// Line 1446, Address: 0x1ed6be4, Func Offset: 0x44
	// Func End, Address: 0x1ed6bf0, Func Offset: 0x50
}

// 
// Start address: 0x1ed6bf0
int ev_building0_bd_2249_02_end(sfObj* obj)
{
	_anon2* wk;
	// Line 2321, Address: 0x1ed6bf0, Func Offset: 0
	// Line 2340, Address: 0x1ed6bf4, Func Offset: 0x4
	// Line 2321, Address: 0x1ed6bf8, Func Offset: 0x8
	// Line 2340, Address: 0x1ed6c10, Func Offset: 0x20
	// Line 2341, Address: 0x1ed6c18, Func Offset: 0x28
	// Line 2342, Address: 0x1ed6c2c, Func Offset: 0x3c
	// Line 2345, Address: 0x1ed6c40, Func Offset: 0x50
	// Line 2343, Address: 0x1ed6c44, Func Offset: 0x54
	// Line 2345, Address: 0x1ed6c50, Func Offset: 0x60
	// Line 2343, Address: 0x1ed6c54, Func Offset: 0x64
	// Line 2345, Address: 0x1ed6c58, Func Offset: 0x68
	// Line 2346, Address: 0x1ed6c68, Func Offset: 0x78
	// Line 2365, Address: 0x1ed6c7c, Func Offset: 0x8c
	// Line 2366, Address: 0x1ed6cac, Func Offset: 0xbc
	// Line 2369, Address: 0x1ed6cc8, Func Offset: 0xd8
	// Line 2372, Address: 0x1ed6cd4, Func Offset: 0xe4
	// Line 2369, Address: 0x1ed6cd8, Func Offset: 0xe8
	// Line 2372, Address: 0x1ed6cdc, Func Offset: 0xec
	// Line 2382, Address: 0x1ed6d00, Func Offset: 0x110
	// Line 2383, Address: 0x1ed6d10, Func Offset: 0x120
	// Line 2385, Address: 0x1ed6d18, Func Offset: 0x128
	// Line 2386, Address: 0x1ed6d20, Func Offset: 0x130
	// Line 2388, Address: 0x1ed6d28, Func Offset: 0x138
	// Line 2389, Address: 0x1ed6d30, Func Offset: 0x140
	// Line 2391, Address: 0x1ed6d38, Func Offset: 0x148
	// Line 2395, Address: 0x1ed6d40, Func Offset: 0x150
	// Line 2396, Address: 0x1ed6d88, Func Offset: 0x198
	// Line 2398, Address: 0x1ed6d94, Func Offset: 0x1a4
	// Line 2399, Address: 0x1ed6d98, Func Offset: 0x1a8
	// Func End, Address: 0x1ed6db4, Func Offset: 0x1c4
	// Line 1449, Address: 0x1ed6bf0, Func Offset: 0
	// Line 1452, Address: 0x1ed6bf4, Func Offset: 0x4
	// Line 1449, Address: 0x1ed6bf8, Func Offset: 0x8
	// Line 1451, Address: 0x1ed6c00, Func Offset: 0x10
	// Line 1452, Address: 0x1ed6c08, Func Offset: 0x18
	// Line 1453, Address: 0x1ed6c10, Func Offset: 0x20
	// Line 1455, Address: 0x1ed6c18, Func Offset: 0x28
	// Line 1458, Address: 0x1ed6c20, Func Offset: 0x30
	// Line 1457, Address: 0x1ed6c28, Func Offset: 0x38
	// Line 1458, Address: 0x1ed6c2c, Func Offset: 0x3c
	// Func End, Address: 0x1ed6c34, Func Offset: 0x44
}

// 
// Start address: 0x1ed6c40
int ev_building0_bd11_dropliquid_init()
{
	// Line 1485, Address: 0x1ed6c40, Func Offset: 0
	// Line 1486, Address: 0x1ed6c48, Func Offset: 0x8
	// Line 1488, Address: 0x1ed6c50, Func Offset: 0x10
	// Line 1487, Address: 0x1ed6c54, Func Offset: 0x14
	// Line 1488, Address: 0x1ed6c58, Func Offset: 0x18
	// Func End, Address: 0x1ed6c60, Func Offset: 0x20
}

// 
// Start address: 0x1ed6c60
int ev_building0_bd16_2251_init(sfObj* obj)
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
// Start address: 0x1ed6ca0
int ev_building0_bd16_2251_exec(sfObj* obj)
{
	int ret;
	_anon10* wk;
	float targetVec[4];
	float targetPos[4];
	float target_pos[4];
	// Line 1524, Address: 0x1ed6ca0, Func Offset: 0
	// Line 1528, Address: 0x1ed6cb8, Func Offset: 0x18
	// Line 1529, Address: 0x1ed6cc8, Func Offset: 0x28
	// Line 1530, Address: 0x1ed6cfc, Func Offset: 0x5c
	// Line 1534, Address: 0x1ed6d00, Func Offset: 0x60
	// Line 1535, Address: 0x1ed6d10, Func Offset: 0x70
	// Line 1541, Address: 0x1ed6d20, Func Offset: 0x80
	// Line 1538, Address: 0x1ed6d24, Func Offset: 0x84
	// Line 1539, Address: 0x1ed6d2c, Func Offset: 0x8c
	// Line 1540, Address: 0x1ed6d34, Func Offset: 0x94
	// Line 1539, Address: 0x1ed6d38, Func Offset: 0x98
	// Line 1541, Address: 0x1ed6d3c, Func Offset: 0x9c
	// Line 1543, Address: 0x1ed6d44, Func Offset: 0xa4
	// Line 1544, Address: 0x1ed6d68, Func Offset: 0xc8
	// Line 1545, Address: 0x1ed6d90, Func Offset: 0xf0
	// Line 1547, Address: 0x1ed6d9c, Func Offset: 0xfc
	// Line 1548, Address: 0x1ed6da0, Func Offset: 0x100
	// Line 1549, Address: 0x1ed6da8, Func Offset: 0x108
	// Line 1552, Address: 0x1ed6db0, Func Offset: 0x110
	// Line 1553, Address: 0x1ed6dbc, Func Offset: 0x11c
	// Line 1552, Address: 0x1ed6dc8, Func Offset: 0x128
	// Line 1553, Address: 0x1ed6dcc, Func Offset: 0x12c
	// Line 1554, Address: 0x1ed6dd8, Func Offset: 0x138
	// Line 1555, Address: 0x1ed6de0, Func Offset: 0x140
	// Line 1556, Address: 0x1ed6de8, Func Offset: 0x148
	// Line 1565, Address: 0x1ed6dec, Func Offset: 0x14c
	// Line 1570, Address: 0x1ed6df8, Func Offset: 0x158
	// Line 1579, Address: 0x1ed6e18, Func Offset: 0x178
	// Line 1580, Address: 0x1ed6e34, Func Offset: 0x194
	// Line 1582, Address: 0x1ed6e4c, Func Offset: 0x1ac
	// Line 1583, Address: 0x1ed6e8c, Func Offset: 0x1ec
	// Line 1584, Address: 0x1ed6e98, Func Offset: 0x1f8
	// Line 1583, Address: 0x1ed6ea4, Func Offset: 0x204
	// Line 1584, Address: 0x1ed6ea8, Func Offset: 0x208
	// Line 1586, Address: 0x1ed6ebc, Func Offset: 0x21c
	// Line 1587, Address: 0x1ed6ec4, Func Offset: 0x224
	// Line 1589, Address: 0x1ed6ec8, Func Offset: 0x228
	// Line 1591, Address: 0x1ed6ed0, Func Offset: 0x230
	// Line 1593, Address: 0x1ed6ed8, Func Offset: 0x238
	// Line 1592, Address: 0x1ed6edc, Func Offset: 0x23c
	// Line 1593, Address: 0x1ed6ee0, Func Offset: 0x240
	// Line 1596, Address: 0x1ed6ee8, Func Offset: 0x248
	// Line 1597, Address: 0x1ed6eec, Func Offset: 0x24c
	// Func End, Address: 0x1ed6f04, Func Offset: 0x264
}

// 
// Start address: 0x1ed6f10
void bg_init(_anon1* img)
{
	// Line 306, Address: 0x1ed6f10, Func Offset: 0
	// Line 307, Address: 0x1ed6f20, Func Offset: 0x10
	// Line 306, Address: 0x1ed6f24, Func Offset: 0x14
	// Line 307, Address: 0x1ed6f30, Func Offset: 0x20
	// Line 308, Address: 0x1ed6f38, Func Offset: 0x28
	// Line 309, Address: 0x1ed6f50, Func Offset: 0x40
	// Line 310, Address: 0x1ed6f60, Func Offset: 0x50
	// Line 312, Address: 0x1ed6f68, Func Offset: 0x58
	// Func End, Address: 0x1ed6f80, Func Offset: 0x70
	// Line 1660, Address: 0x1ed6f10, Func Offset: 0
	// Line 1661, Address: 0x1ed6f14, Func Offset: 0x4
	// Line 1660, Address: 0x1ed6f18, Func Offset: 0x8
	// Line 1661, Address: 0x1ed6f20, Func Offset: 0x10
	// Line 1662, Address: 0x1ed6f28, Func Offset: 0x18
	// Line 1663, Address: 0x1ed6f48, Func Offset: 0x38
	// Line 1664, Address: 0x1ed6f64, Func Offset: 0x54
	// Line 1665, Address: 0x1ed6f74, Func Offset: 0x64
	// Line 1666, Address: 0x1ed6f8c, Func Offset: 0x7c
	// Func End, Address: 0x1ed6f9c, Func Offset: 0x8c
}

// 
// Start address: 0x1ed6fa0
void button_img_init(_anon1* img)
{
	// Line 1669, Address: 0x1ed6fa0, Func Offset: 0
	// Line 1670, Address: 0x1ed6fa4, Func Offset: 0x4
	// Line 1669, Address: 0x1ed6fa8, Func Offset: 0x8
	// Line 1670, Address: 0x1ed6fb0, Func Offset: 0x10
	// Line 1671, Address: 0x1ed6fb8, Func Offset: 0x18
	// Line 1672, Address: 0x1ed6fd4, Func Offset: 0x34
	// Line 1673, Address: 0x1ed6ff0, Func Offset: 0x50
	// Line 1674, Address: 0x1ed7000, Func Offset: 0x60
	// Line 1675, Address: 0x1ed7018, Func Offset: 0x78
	// Func End, Address: 0x1ed7028, Func Offset: 0x88
}

// 
// Start address: 0x1ed7030
void asterisk_init(_anon1* img)
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
// Start address: 0x1ed70f0
void cursor_init(_anon1* img, float x, float y)
{
	// Line 1689, Address: 0x1ed70f0, Func Offset: 0
	// Line 1690, Address: 0x1ed70f4, Func Offset: 0x4
	// Line 1689, Address: 0x1ed70f8, Func Offset: 0x8
	// Line 1690, Address: 0x1ed7110, Func Offset: 0x20
	// Line 1691, Address: 0x1ed7118, Func Offset: 0x28
	// Line 1692, Address: 0x1ed7134, Func Offset: 0x44
	// Line 1693, Address: 0x1ed7144, Func Offset: 0x54
	// Line 1695, Address: 0x1ed715c, Func Offset: 0x6c
	// Line 1696, Address: 0x1ed716c, Func Offset: 0x7c
	// Line 1697, Address: 0x1ed7188, Func Offset: 0x98
	// Line 1698, Address: 0x1ed7198, Func Offset: 0xa8
	// Line 1699, Address: 0x1ed71b4, Func Offset: 0xc4
	// Func End, Address: 0x1ed71cc, Func Offset: 0xdc
}

// 
// Start address: 0x1ed71d0
void bg_draw(_anon1* img)
{
	_anon3* tex;
	unsigned int cbp;
	// Line 1702, Address: 0x1ed71d0, Func Offset: 0
	// Line 1703, Address: 0x1ed71d4, Func Offset: 0x4
	// Line 1702, Address: 0x1ed71d8, Func Offset: 0x8
	// Line 1703, Address: 0x1ed71dc, Func Offset: 0xc
	// Line 1702, Address: 0x1ed71e0, Func Offset: 0x10
	// Line 1703, Address: 0x1ed71ec, Func Offset: 0x1c
	// Line 1704, Address: 0x1ed71fc, Func Offset: 0x2c
	// Line 1706, Address: 0x1ed7210, Func Offset: 0x40
	// Line 1707, Address: 0x1ed7228, Func Offset: 0x58
	// Line 1708, Address: 0x1ed723c, Func Offset: 0x6c
	// Line 1709, Address: 0x1ed7248, Func Offset: 0x78
	// Func End, Address: 0x1ed7260, Func Offset: 0x90
	// Line 77, Address: 0x1ed71d0, Func Offset: 0
	// Line 80, Address: 0x1ed71dc, Func Offset: 0xc
	// Line 81, Address: 0x1ed71f0, Func Offset: 0x20
	// Line 82, Address: 0x1ed71f4, Func Offset: 0x24
	// Line 84, Address: 0x1ed71f8, Func Offset: 0x28
	// Line 85, Address: 0x1ed720c, Func Offset: 0x3c
	// Line 88, Address: 0x1ed7210, Func Offset: 0x40
	// Line 89, Address: 0x1ed7214, Func Offset: 0x44
	// Func End, Address: 0x1ed7224, Func Offset: 0x54
}

// 
// Start address: 0x1ed7260
void button_img_draw(_anon1* img, int pushed_number)
{
	_anon3* tex;
	unsigned int cbp;
	int i;
	_anon9* b;
	float u;
	float v;
	// Line 1712, Address: 0x1ed7260, Func Offset: 0
	// Line 1713, Address: 0x1ed7264, Func Offset: 0x4
	// Line 1712, Address: 0x1ed7268, Func Offset: 0x8
	// Line 1713, Address: 0x1ed7284, Func Offset: 0x24
	// Line 1712, Address: 0x1ed7288, Func Offset: 0x28
	// Line 1713, Address: 0x1ed728c, Func Offset: 0x2c
	// Line 1714, Address: 0x1ed729c, Func Offset: 0x3c
	// Line 1718, Address: 0x1ed72ac, Func Offset: 0x4c
	// Line 1714, Address: 0x1ed72b0, Func Offset: 0x50
	// Line 1716, Address: 0x1ed72b4, Func Offset: 0x54
	// Line 1718, Address: 0x1ed72b8, Func Offset: 0x58
	// Line 1719, Address: 0x1ed72d0, Func Offset: 0x70
	// Line 1721, Address: 0x1ed72e4, Func Offset: 0x84
	// Line 1725, Address: 0x1ed72e8, Func Offset: 0x88
	// Line 1723, Address: 0x1ed72f0, Func Offset: 0x90
	// Line 1725, Address: 0x1ed72f8, Func Offset: 0x98
	// Line 1722, Address: 0x1ed72fc, Func Offset: 0x9c
	// Line 1725, Address: 0x1ed7300, Func Offset: 0xa0
	// Line 1727, Address: 0x1ed7324, Func Offset: 0xc4
	// Line 1729, Address: 0x1ed732c, Func Offset: 0xcc
	// Line 1732, Address: 0x1ed7330, Func Offset: 0xd0
	// Line 1734, Address: 0x1ed733c, Func Offset: 0xdc
	// Line 1735, Address: 0x1ed7354, Func Offset: 0xf4
	// Line 1738, Address: 0x1ed7360, Func Offset: 0x100
	// Line 1739, Address: 0x1ed7384, Func Offset: 0x124
	// Line 1740, Address: 0x1ed7388, Func Offset: 0x128
	// Line 1741, Address: 0x1ed73c4, Func Offset: 0x164
	// Line 1743, Address: 0x1ed73d0, Func Offset: 0x170
	// Line 1744, Address: 0x1ed73e0, Func Offset: 0x180
	// Func End, Address: 0x1ed7404, Func Offset: 0x1a4
}

// 
// Start address: 0x1ed7410
void asterisk_draw(_anon1* img, int ast_num)
{
	_anon3* tex;
	unsigned int cbp;
	int i;
	// Line 1747, Address: 0x1ed7410, Func Offset: 0
	// Line 1748, Address: 0x1ed742c, Func Offset: 0x1c
	// Line 1749, Address: 0x1ed7434, Func Offset: 0x24
	// Line 1750, Address: 0x1ed7448, Func Offset: 0x38
	// Line 1753, Address: 0x1ed745c, Func Offset: 0x4c
	// Line 1754, Address: 0x1ed7474, Func Offset: 0x64
	// Line 1756, Address: 0x1ed7488, Func Offset: 0x78
	// Line 1757, Address: 0x1ed7498, Func Offset: 0x88
	// Line 1762, Address: 0x1ed74dc, Func Offset: 0xcc
	// Line 1765, Address: 0x1ed74f4, Func Offset: 0xe4
	// Line 1766, Address: 0x1ed7500, Func Offset: 0xf0
	// Line 1768, Address: 0x1ed7510, Func Offset: 0x100
	// Func End, Address: 0x1ed752c, Func Offset: 0x11c
}

// 
// Start address: 0x1ed7530
void cursor_draw(_anon1* img)
{
	_anon3* tex;
	unsigned int cbp;
	// Line 1771, Address: 0x1ed7530, Func Offset: 0
	// Line 1772, Address: 0x1ed7534, Func Offset: 0x4
	// Line 1771, Address: 0x1ed7538, Func Offset: 0x8
	// Line 1772, Address: 0x1ed753c, Func Offset: 0xc
	// Line 1771, Address: 0x1ed7540, Func Offset: 0x10
	// Line 1772, Address: 0x1ed754c, Func Offset: 0x1c
	// Line 1773, Address: 0x1ed755c, Func Offset: 0x2c
	// Line 1775, Address: 0x1ed7570, Func Offset: 0x40
	// Line 1776, Address: 0x1ed7588, Func Offset: 0x58
	// Line 1777, Address: 0x1ed759c, Func Offset: 0x6c
	// Line 1778, Address: 0x1ed75a8, Func Offset: 0x78
	// Func End, Address: 0x1ed75c0, Func Offset: 0x90
}

// 
// Start address: 0x1ed75c0
void cursor_set_xy(_anon1* img, float x, float y)
{
	// Line 2644, Address: 0x1ed75c0, Func Offset: 0
	// Line 2646, Address: 0x1ed75c4, Func Offset: 0x4
	// Line 2644, Address: 0x1ed75c8, Func Offset: 0x8
	// Line 2646, Address: 0x1ed75d0, Func Offset: 0x10
	// Line 2652, Address: 0x1ed75d8, Func Offset: 0x18
	// Line 2649, Address: 0x1ed75dc, Func Offset: 0x1c
	// Line 2652, Address: 0x1ed75e0, Func Offset: 0x20
	// Line 2647, Address: 0x1ed75e8, Func Offset: 0x28
	// Line 2649, Address: 0x1ed75ec, Func Offset: 0x2c
	// Line 2652, Address: 0x1ed75f0, Func Offset: 0x30
	// Line 2653, Address: 0x1ed7644, Func Offset: 0x84
	// Line 2654, Address: 0x1ed7648, Func Offset: 0x88
	// Line 2655, Address: 0x1ed766c, Func Offset: 0xac
	// Line 2656, Address: 0x1ed7674, Func Offset: 0xb4
	// Line 2659, Address: 0x1ed7684, Func Offset: 0xc4
	// Line 2660, Address: 0x1ed7688, Func Offset: 0xc8
	// Line 2661, Address: 0x1ed7698, Func Offset: 0xd8
	// Line 2663, Address: 0x1ed76a4, Func Offset: 0xe4
	// Line 2665, Address: 0x1ed76ac, Func Offset: 0xec
	// Line 2667, Address: 0x1ed76b0, Func Offset: 0xf0
	// Line 2668, Address: 0x1ed76c0, Func Offset: 0x100
	// Line 2670, Address: 0x1ed76d0, Func Offset: 0x110
	// Line 2671, Address: 0x1ed76e4, Func Offset: 0x124
	// Line 2673, Address: 0x1ed76f0, Func Offset: 0x130
	// Line 2675, Address: 0x1ed76fc, Func Offset: 0x13c
	// Line 2677, Address: 0x1ed7704, Func Offset: 0x144
	// Line 2678, Address: 0x1ed770c, Func Offset: 0x14c
	// Line 2696, Address: 0x1ed7710, Func Offset: 0x150
	// Line 2698, Address: 0x1ed7718, Func Offset: 0x158
	// Line 2699, Address: 0x1ed7720, Func Offset: 0x160
	// Line 2701, Address: 0x1ed7728, Func Offset: 0x168
	// Line 2703, Address: 0x1ed7738, Func Offset: 0x178
	// Line 2705, Address: 0x1ed774c, Func Offset: 0x18c
	// Line 2704, Address: 0x1ed7750, Func Offset: 0x190
	// Line 2705, Address: 0x1ed7754, Func Offset: 0x194
	// Line 2706, Address: 0x1ed7758, Func Offset: 0x198
	// Line 2707, Address: 0x1ed7760, Func Offset: 0x1a0
	// Line 2708, Address: 0x1ed7778, Func Offset: 0x1b8
	// Line 2709, Address: 0x1ed7780, Func Offset: 0x1c0
	// Line 2713, Address: 0x1ed7788, Func Offset: 0x1c8
	// Line 2715, Address: 0x1ed7790, Func Offset: 0x1d0
	// Line 2719, Address: 0x1ed7798, Func Offset: 0x1d8
	// Line 2721, Address: 0x1ed77b0, Func Offset: 0x1f0
	// Line 2720, Address: 0x1ed77b4, Func Offset: 0x1f4
	// Line 2721, Address: 0x1ed77b8, Func Offset: 0x1f8
	// Line 2722, Address: 0x1ed77bc, Func Offset: 0x1fc
	// Line 2726, Address: 0x1ed77c8, Func Offset: 0x208
	// Line 2729, Address: 0x1ed77d0, Func Offset: 0x210
	// Line 2730, Address: 0x1ed77d8, Func Offset: 0x218
	// Line 2732, Address: 0x1ed77e4, Func Offset: 0x224
	// Line 2733, Address: 0x1ed77e8, Func Offset: 0x228
	// Line 2736, Address: 0x1ed77f0, Func Offset: 0x230
	// Line 2740, Address: 0x1ed77f8, Func Offset: 0x238
	// Line 2741, Address: 0x1ed7808, Func Offset: 0x248
	// Line 2742, Address: 0x1ed780c, Func Offset: 0x24c
	// Line 2744, Address: 0x1ed7814, Func Offset: 0x254
	// Line 2747, Address: 0x1ed781c, Func Offset: 0x25c
	// Line 2748, Address: 0x1ed7820, Func Offset: 0x260
	// Line 2749, Address: 0x1ed7830, Func Offset: 0x270
	// Line 2750, Address: 0x1ed7834, Func Offset: 0x274
	// Line 2752, Address: 0x1ed783c, Func Offset: 0x27c
	// Line 2755, Address: 0x1ed7844, Func Offset: 0x284
	// Line 2756, Address: 0x1ed7848, Func Offset: 0x288
	// Line 2757, Address: 0x1ed7858, Func Offset: 0x298
	// Line 2758, Address: 0x1ed785c, Func Offset: 0x29c
	// Line 2760, Address: 0x1ed7864, Func Offset: 0x2a4
	// Line 2762, Address: 0x1ed786c, Func Offset: 0x2ac
	// Line 2763, Address: 0x1ed7870, Func Offset: 0x2b0
	// Line 2768, Address: 0x1ed78c8, Func Offset: 0x308
	// Line 2770, Address: 0x1ed78d8, Func Offset: 0x318
	// Line 2771, Address: 0x1ed78fc, Func Offset: 0x33c
	// Line 2773, Address: 0x1ed7904, Func Offset: 0x344
	// Line 2775, Address: 0x1ed790c, Func Offset: 0x34c
	// Line 2777, Address: 0x1ed7910, Func Offset: 0x350
	// Line 2778, Address: 0x1ed7920, Func Offset: 0x360
	// Line 2779, Address: 0x1ed7928, Func Offset: 0x368
	// Line 2780, Address: 0x1ed7930, Func Offset: 0x370
	// Line 2784, Address: 0x1ed7938, Func Offset: 0x378
	// Line 2786, Address: 0x1ed7944, Func Offset: 0x384
	// Line 2787, Address: 0x1ed7958, Func Offset: 0x398
	// Line 2788, Address: 0x1ed7960, Func Offset: 0x3a0
	// Line 2790, Address: 0x1ed7964, Func Offset: 0x3a4
	// Line 2793, Address: 0x1ed7968, Func Offset: 0x3a8
	// Line 2794, Address: 0x1ed7970, Func Offset: 0x3b0
	// Func End, Address: 0x1ed7984, Func Offset: 0x3c4
	// Line 1782, Address: 0x1ed75c0, Func Offset: 0
	// Func End, Address: 0x1ed75d4, Func Offset: 0x14
}

// 
// Start address: 0x1ed75e0
void pausefunc_ev_panel_init()
{
	// Line 1792, Address: 0x1ed75e0, Func Offset: 0
	// Line 1800, Address: 0x1ed75e4, Func Offset: 0x4
	// Line 1792, Address: 0x1ed75e8, Func Offset: 0x8
	// Line 1800, Address: 0x1ed75ec, Func Offset: 0xc
	// Line 1803, Address: 0x1ed75fc, Func Offset: 0x1c
	// Line 1804, Address: 0x1ed7618, Func Offset: 0x38
	// Line 1806, Address: 0x1ed7634, Func Offset: 0x54
	// Line 1811, Address: 0x1ed7638, Func Offset: 0x58
	// Line 1806, Address: 0x1ed763c, Func Offset: 0x5c
	// Line 1807, Address: 0x1ed7640, Func Offset: 0x60
	// Line 1811, Address: 0x1ed7648, Func Offset: 0x68
	// Line 1807, Address: 0x1ed764c, Func Offset: 0x6c
	// Line 1808, Address: 0x1ed7650, Func Offset: 0x70
	// Line 1811, Address: 0x1ed7654, Func Offset: 0x74
	// Line 1812, Address: 0x1ed765c, Func Offset: 0x7c
	// Line 1813, Address: 0x1ed7668, Func Offset: 0x88
	// Line 1814, Address: 0x1ed7674, Func Offset: 0x94
	// Line 1815, Address: 0x1ed7690, Func Offset: 0xb0
	// Func End, Address: 0x1ed769c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed76a0
void pausefunc_ev_panel_draw()
{
	int ast_num;
	_anon0* wk;
	int i;
	int val;
	int mes_id;
	char buf[16];
	// Line 1818, Address: 0x1ed76a0, Func Offset: 0
	// Line 1825, Address: 0x1ed76a4, Func Offset: 0x4
	// Line 1818, Address: 0x1ed76a8, Func Offset: 0x8
	// Line 1825, Address: 0x1ed76ac, Func Offset: 0xc
	// Line 1818, Address: 0x1ed76b0, Func Offset: 0x10
	// Line 1820, Address: 0x1ed76b8, Func Offset: 0x18
	// Line 1818, Address: 0x1ed76bc, Func Offset: 0x1c
	// Line 1821, Address: 0x1ed76c0, Func Offset: 0x20
	// Line 1818, Address: 0x1ed76c4, Func Offset: 0x24
	// Line 1821, Address: 0x1ed76c8, Func Offset: 0x28
	// Line 1825, Address: 0x1ed76cc, Func Offset: 0x2c
	// Line 1826, Address: 0x1ed76d4, Func Offset: 0x34
	// Line 1828, Address: 0x1ed76e8, Func Offset: 0x48
	// Line 1830, Address: 0x1ed76fc, Func Offset: 0x5c
	// Line 1833, Address: 0x1ed770c, Func Offset: 0x6c
	// Line 1834, Address: 0x1ed7724, Func Offset: 0x84
	// Line 1836, Address: 0x1ed772c, Func Offset: 0x8c
	// Line 1837, Address: 0x1ed7744, Func Offset: 0xa4
	// Line 1843, Address: 0x1ed7750, Func Offset: 0xb0
	// Line 1845, Address: 0x1ed7760, Func Offset: 0xc0
	// Line 1846, Address: 0x1ed7768, Func Offset: 0xc8
	// Line 1848, Address: 0x1ed7774, Func Offset: 0xd4
	// Line 1849, Address: 0x1ed7780, Func Offset: 0xe0
	// Line 1850, Address: 0x1ed778c, Func Offset: 0xec
	// Line 1853, Address: 0x1ed7790, Func Offset: 0xf0
	// Line 1854, Address: 0x1ed779c, Func Offset: 0xfc
	// Line 1857, Address: 0x1ed77a8, Func Offset: 0x108
	// Line 1854, Address: 0x1ed77b0, Func Offset: 0x110
	// Line 1857, Address: 0x1ed77b4, Func Offset: 0x114
	// Line 1858, Address: 0x1ed77bc, Func Offset: 0x11c
	// Line 1860, Address: 0x1ed77c0, Func Offset: 0x120
	// Line 1861, Address: 0x1ed77cc, Func Offset: 0x12c
	// Line 1862, Address: 0x1ed77dc, Func Offset: 0x13c
	// Line 1864, Address: 0x1ed77e0, Func Offset: 0x140
	// Line 1865, Address: 0x1ed77f0, Func Offset: 0x150
	// Line 1866, Address: 0x1ed77fc, Func Offset: 0x15c
	// Line 1867, Address: 0x1ed7804, Func Offset: 0x164
	// Func End, Address: 0x1ed7824, Func Offset: 0x184
}

// 
// Start address: 0x1ed7830
void pausefunc_ev_panel_main()
{
	int f_rtv;
	float x;
	float y;
	_anon0* wk;
	int id;
	// Line 1870, Address: 0x1ed7830, Func Offset: 0
	// Line 1872, Address: 0x1ed7834, Func Offset: 0x4
	// Line 1870, Address: 0x1ed7838, Func Offset: 0x8
	// Line 1872, Address: 0x1ed7840, Func Offset: 0x10
	// Line 1878, Address: 0x1ed7848, Func Offset: 0x18
	// Line 1875, Address: 0x1ed784c, Func Offset: 0x1c
	// Line 1878, Address: 0x1ed7850, Func Offset: 0x20
	// Line 1873, Address: 0x1ed7858, Func Offset: 0x28
	// Line 1875, Address: 0x1ed785c, Func Offset: 0x2c
	// Line 1878, Address: 0x1ed7860, Func Offset: 0x30
	// Line 1880, Address: 0x1ed7898, Func Offset: 0x68
	// Line 1881, Address: 0x1ed78bc, Func Offset: 0x8c
	// Line 1882, Address: 0x1ed78c4, Func Offset: 0x94
	// Line 1885, Address: 0x1ed78d4, Func Offset: 0xa4
	// Line 1886, Address: 0x1ed78d8, Func Offset: 0xa8
	// Line 1887, Address: 0x1ed78e8, Func Offset: 0xb8
	// Line 1889, Address: 0x1ed78f4, Func Offset: 0xc4
	// Line 1891, Address: 0x1ed78fc, Func Offset: 0xcc
	// Line 1893, Address: 0x1ed7900, Func Offset: 0xd0
	// Line 1894, Address: 0x1ed7910, Func Offset: 0xe0
	// Line 1896, Address: 0x1ed7920, Func Offset: 0xf0
	// Line 1897, Address: 0x1ed7934, Func Offset: 0x104
	// Line 1899, Address: 0x1ed7940, Func Offset: 0x110
	// Line 1901, Address: 0x1ed794c, Func Offset: 0x11c
	// Line 1903, Address: 0x1ed7968, Func Offset: 0x138
	// Line 1904, Address: 0x1ed7970, Func Offset: 0x140
	// Line 1906, Address: 0x1ed7974, Func Offset: 0x144
	// Line 1923, Address: 0x1ed7978, Func Offset: 0x148
	// Line 1925, Address: 0x1ed7980, Func Offset: 0x150
	// Line 1926, Address: 0x1ed7988, Func Offset: 0x158
	// Line 1930, Address: 0x1ed7990, Func Offset: 0x160
	// Line 1956, Address: 0x1ed7998, Func Offset: 0x168
	// Line 1957, Address: 0x1ed79b4, Func Offset: 0x184
	// Line 1962, Address: 0x1ed79bc, Func Offset: 0x18c
	// Line 1963, Address: 0x1ed79c0, Func Offset: 0x190
	// Line 1964, Address: 0x1ed79c4, Func Offset: 0x194
	// Line 1966, Address: 0x1ed79d0, Func Offset: 0x1a0
	// Line 1969, Address: 0x1ed79d8, Func Offset: 0x1a8
	// Line 1974, Address: 0x1ed7a30, Func Offset: 0x200
	// Line 1976, Address: 0x1ed7a40, Func Offset: 0x210
	// Line 1977, Address: 0x1ed7a64, Func Offset: 0x234
	// Line 1979, Address: 0x1ed7a6c, Func Offset: 0x23c
	// Line 1981, Address: 0x1ed7a74, Func Offset: 0x244
	// Line 1983, Address: 0x1ed7a78, Func Offset: 0x248
	// Line 1984, Address: 0x1ed7a88, Func Offset: 0x258
	// Line 1985, Address: 0x1ed7a90, Func Offset: 0x260
	// Line 1986, Address: 0x1ed7a98, Func Offset: 0x268
	// Line 1990, Address: 0x1ed7aa0, Func Offset: 0x270
	// Line 1992, Address: 0x1ed7aac, Func Offset: 0x27c
	// Line 1993, Address: 0x1ed7ac0, Func Offset: 0x290
	// Line 1994, Address: 0x1ed7ac8, Func Offset: 0x298
	// Line 1996, Address: 0x1ed7acc, Func Offset: 0x29c
	// Line 1999, Address: 0x1ed7ad0, Func Offset: 0x2a0
	// Line 2000, Address: 0x1ed7ad8, Func Offset: 0x2a8
	// Func End, Address: 0x1ed7aec, Func Offset: 0x2bc
}

// 
// Start address: 0x1ed7af0
int ev_building0_password_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 2006, Address: 0x1ed7af0, Func Offset: 0
	// Line 2007, Address: 0x1ed7af8, Func Offset: 0x8
	// Line 2009, Address: 0x1ed7b00, Func Offset: 0x10
	// Line 2012, Address: 0x1ed7b08, Func Offset: 0x18
	// Line 2015, Address: 0x1ed7b14, Func Offset: 0x24
	// Line 2014, Address: 0x1ed7b18, Func Offset: 0x28
	// Line 2015, Address: 0x1ed7b1c, Func Offset: 0x2c
	// Func End, Address: 0x1ed7b28, Func Offset: 0x38
}

// 
// Start address: 0x1ed7b30
int ev_building0_password_exec(sfObj* obj)
{
	int rtv;
	_EventInst* inst;
	// Line 2018, Address: 0x1ed7b30, Func Offset: 0
	// Line 2021, Address: 0x1ed7b34, Func Offset: 0x4
	// Line 2018, Address: 0x1ed7b38, Func Offset: 0x8
	// Line 2021, Address: 0x1ed7b48, Func Offset: 0x18
	// Line 2023, Address: 0x1ed7b78, Func Offset: 0x48
	// Line 2024, Address: 0x1ed7b9c, Func Offset: 0x6c
	// Line 2028, Address: 0x1ed7ba8, Func Offset: 0x78
	// Line 2029, Address: 0x1ed7bb8, Func Offset: 0x88
	// Line 2030, Address: 0x1ed7bc0, Func Offset: 0x90
	// Line 2031, Address: 0x1ed7bc8, Func Offset: 0x98
	// Line 2033, Address: 0x1ed7bd4, Func Offset: 0xa4
	// Line 2035, Address: 0x1ed7bdc, Func Offset: 0xac
	// Line 2036, Address: 0x1ed7be0, Func Offset: 0xb0
	// Line 2037, Address: 0x1ed7bf0, Func Offset: 0xc0
	// Line 2038, Address: 0x1ed7bf8, Func Offset: 0xc8
	// Line 2039, Address: 0x1ed7c1c, Func Offset: 0xec
	// Line 2041, Address: 0x1ed7c24, Func Offset: 0xf4
	// Line 2043, Address: 0x1ed7c2c, Func Offset: 0xfc
	// Line 2044, Address: 0x1ed7c30, Func Offset: 0x100
	// Line 2047, Address: 0x1ed7c40, Func Offset: 0x110
	// Line 2048, Address: 0x1ed7c48, Func Offset: 0x118
	// Line 2049, Address: 0x1ed7c58, Func Offset: 0x128
	// Line 2050, Address: 0x1ed7c60, Func Offset: 0x130
	// Line 2051, Address: 0x1ed7c68, Func Offset: 0x138
	// Line 2052, Address: 0x1ed7c74, Func Offset: 0x144
	// Line 2053, Address: 0x1ed7c78, Func Offset: 0x148
	// Line 2057, Address: 0x1ed7c7c, Func Offset: 0x14c
	// Line 2059, Address: 0x1ed7c80, Func Offset: 0x150
	// Line 2060, Address: 0x1ed7c84, Func Offset: 0x154
	// Func End, Address: 0x1ed7c98, Func Offset: 0x168
}

// 
// Start address: 0x1ed7ca0
int ev_building0_password_draw()
{
	// Line 2065, Address: 0x1ed7ca0, Func Offset: 0
	// Func End, Address: 0x1ed7ca8, Func Offset: 0x8
}

// 
// Start address: 0x1ed7cb0
int ev_building0_password_end()
{
	// Line 2068, Address: 0x1ed7cb0, Func Offset: 0
	// Line 2073, Address: 0x1ed7cb4, Func Offset: 0x4
	// Line 2068, Address: 0x1ed7cb8, Func Offset: 0x8
	// Line 2073, Address: 0x1ed7cbc, Func Offset: 0xc
	// Line 2076, Address: 0x1ed7cc4, Func Offset: 0x14
	// Line 2075, Address: 0x1ed7cc8, Func Offset: 0x18
	// Line 2076, Address: 0x1ed7ccc, Func Offset: 0x1c
	// Func End, Address: 0x1ed7cd4, Func Offset: 0x24
}

// 
// Start address: 0x1ed7ce0
int ev_building0_bd12_elvdoor_init(sfObj* obj)
{
	_evCmnBgObjData dat;
	// Line 2106, Address: 0x1ed7ce0, Func Offset: 0
	// Line 2107, Address: 0x1ed7ce4, Func Offset: 0x4
	// Line 2106, Address: 0x1ed7ce8, Func Offset: 0x8
	// Line 2107, Address: 0x1ed7cec, Func Offset: 0xc
	// Line 2110, Address: 0x1ed7d00, Func Offset: 0x20
	// Line 2111, Address: 0x1ed7d08, Func Offset: 0x28
	// Func End, Address: 0x1ed7d14, Func Offset: 0x34
}

// 
// Start address: 0x1ed7d20
int ev_building0_bd24_camera_func()
{
	float cam_pos[4];
	float watch_pos[4];
	// Line 2116, Address: 0x1ed7d20, Func Offset: 0
	// Line 2122, Address: 0x1ed7d24, Func Offset: 0x4
	// Line 2116, Address: 0x1ed7d28, Func Offset: 0x8
	// Line 2122, Address: 0x1ed7d2c, Func Offset: 0xc
	// Line 2123, Address: 0x1ed7d3c, Func Offset: 0x1c
	// Line 2124, Address: 0x1ed7d44, Func Offset: 0x24
	// Line 2125, Address: 0x1ed7d4c, Func Offset: 0x2c
	// Line 2126, Address: 0x1ed7d68, Func Offset: 0x48
	// Line 2127, Address: 0x1ed7d80, Func Offset: 0x60
	// Line 2128, Address: 0x1ed7d94, Func Offset: 0x74
	// Line 2130, Address: 0x1ed7d98, Func Offset: 0x78
	// Line 2129, Address: 0x1ed7d9c, Func Offset: 0x7c
	// Line 2130, Address: 0x1ed7da0, Func Offset: 0x80
	// Func End, Address: 0x1ed7da8, Func Offset: 0x88
}

// 
// Start address: 0x1ed7db0
int ev_building0_bd16_plate_of_chaos_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 2150, Address: 0x1ed7db0, Func Offset: 0
	// Line 2151, Address: 0x1ed7db4, Func Offset: 0x4
	// Line 2150, Address: 0x1ed7db8, Func Offset: 0x8
	// Line 2151, Address: 0x1ed7dbc, Func Offset: 0xc
	// Line 2152, Address: 0x1ed7dc8, Func Offset: 0x18
	// Line 2153, Address: 0x1ed7dd0, Func Offset: 0x20
	// Func End, Address: 0x1ed7ddc, Func Offset: 0x2c
}

// 
// Start address: 0x1ed7de0
int ev_building0_bd16_plate_of_chaos_exec(sfObj* obj)
{
	// Line 2156, Address: 0x1ed7de0, Func Offset: 0
	// Line 2157, Address: 0x1ed7de4, Func Offset: 0x4
	// Line 2156, Address: 0x1ed7de8, Func Offset: 0x8
	// Line 2157, Address: 0x1ed7df0, Func Offset: 0x10
	// Line 2158, Address: 0x1ed7e08, Func Offset: 0x28
	// Line 2159, Address: 0x1ed7e10, Func Offset: 0x30
	// Func End, Address: 0x1ed7e20, Func Offset: 0x40
}

