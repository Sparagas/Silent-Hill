typedef struct sfObj;
typedef union _anon0;
typedef struct _anon1;
typedef struct _GAME_WORK;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct EventFlag;
typedef struct sgSot;
typedef struct sgSotTag;
typedef struct sgTexData;
typedef struct sgClutData;

typedef void(*type_1)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_15)(sfObj*);

typedef int type_0[1];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_5[1];
typedef float type_6[4];
typedef float type_7[4][4];
typedef int type_8[1];
typedef unsigned char type_9[320];
typedef _anon4 type_10[48];
typedef float type_12[4];
typedef short type_14[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef _anon0 type_18[10];
typedef unsigned char type_19[4];
typedef float type_20[4][2];
typedef float type_21[1];
typedef int type_22[1];
typedef float type_23[4][2];
typedef _anon4 type_24[4];
typedef int type_25[1];
typedef int type_26[1];
typedef _anon0 type_27[256];

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

struct _anon1
{
	float pos[4];
	int glow_count;
	int flame_count;
	float scale_f;
	float scale_g;
	int flag;
	int flagoff;
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

struct _anon2
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

struct _anon3
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
	_anon0 dmy[10];
};

struct _anon4
{
	int u0;
	int v0;
	int u1;
	int v1;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct sgSot
{
	sgSotTag** ot_top;
	sgSotTag** ot_last;
	unsigned short ot_size;
	unsigned short ot_width;
	unsigned int flag;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int dma_max;
	sgSotTag* dma_top;
	sgSotTag* dmabuf_pos;
	sgSotTag* dmakick_buf;
	unsigned short* ot_max;
	unsigned int dmatag_num;
};

struct sgSotTag
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

void(*PlayerCandleEffectObjDestruct)(sfObj*);
void(*PlayerCandleEffectObjRender)(sfObj*);
void(*PlayerCandleEffectObjFunc)(sfObj*);
EventFlag event_flag;
_anon4 flame_uv[48];
_anon4 glow_uv[4];
_GAME_WORK gamew;
unsigned long* sg_packet_cur;
unsigned long candle_tex0;

void PlayerCandleEffectObjConstruct(sfObj* obj);
void PlayerCandleEffectObjFunc(sfObj* obj);
void PlayerCandleEffectObjRender(sfObj* obj);
void PlayerCandleEffectObjDestruct();
int PlayerCandleEffectNextNum(int num);
void PlayerCandleEffectInit();
int PlayerCandleEffectDraw(float* pos, int id_flame, int id_glow, int alpha, float scale_f, float scale_g);

// 
// Start address: 0x2b7fc0
void PlayerCandleEffectObjConstruct(sfObj* obj)
{
	_anon1* w;
	_anon3* d;
	// Line 59, Address: 0x2b7fc0, Func Offset: 0
	// Line 61, Address: 0x2b7fd0, Func Offset: 0x10
	// Line 63, Address: 0x2b7fdc, Func Offset: 0x1c
	// Line 64, Address: 0x2b7fec, Func Offset: 0x2c
	// Line 65, Address: 0x2b7ff0, Func Offset: 0x30
	// Line 66, Address: 0x2b7ff8, Func Offset: 0x38
	// Line 67, Address: 0x2b8000, Func Offset: 0x40
	// Line 69, Address: 0x2b8008, Func Offset: 0x48
	// Line 70, Address: 0x2b8024, Func Offset: 0x64
	// Line 71, Address: 0x2b8034, Func Offset: 0x74
	// Line 70, Address: 0x2b803c, Func Offset: 0x7c
	// Line 71, Address: 0x2b8048, Func Offset: 0x88
	// Line 72, Address: 0x2b8054, Func Offset: 0x94
	// Line 73, Address: 0x2b8058, Func Offset: 0x98
	// Line 74, Address: 0x2b805c, Func Offset: 0x9c
	// Line 76, Address: 0x2b8068, Func Offset: 0xa8
	// Line 77, Address: 0x2b8070, Func Offset: 0xb0
	// Line 78, Address: 0x2b8074, Func Offset: 0xb4
	// Line 79, Address: 0x2b8078, Func Offset: 0xb8
	// Line 80, Address: 0x2b8080, Func Offset: 0xc0
	// Line 84, Address: 0x2b8088, Func Offset: 0xc8
	// Func End, Address: 0x2b809c, Func Offset: 0xdc
}

// 
// Start address: 0x2b80a0
void PlayerCandleEffectObjFunc(sfObj* obj)
{
	_anon1* w;
	// Line 119, Address: 0x2b80a0, Func Offset: 0
	// Line 120, Address: 0x2b80ac, Func Offset: 0xc
	// Line 121, Address: 0x2b80b0, Func Offset: 0x10
	// Line 122, Address: 0x2b80bc, Func Offset: 0x1c
	// Line 124, Address: 0x2b80c8, Func Offset: 0x28
	// Line 126, Address: 0x2b80d4, Func Offset: 0x34
	// Func End, Address: 0x2b80e4, Func Offset: 0x44
}

// 
// Start address: 0x2b80f0
void PlayerCandleEffectObjRender(sfObj* obj)
{
	_anon1* w;
	float scale_f;
	// Line 130, Address: 0x2b80f0, Func Offset: 0
	// Line 131, Address: 0x2b80f8, Func Offset: 0x8
	// Line 138, Address: 0x2b8100, Func Offset: 0x10
	// Line 139, Address: 0x2b8108, Func Offset: 0x18
	// Line 142, Address: 0x2b8144, Func Offset: 0x54
	// Line 143, Address: 0x2b814c, Func Offset: 0x5c
	// Line 145, Address: 0x2b8184, Func Offset: 0x94
	// Line 143, Address: 0x2b8188, Func Offset: 0x98
	// Line 150, Address: 0x2b818c, Func Offset: 0x9c
	// Line 155, Address: 0x2b81b0, Func Offset: 0xc0
	// Line 158, Address: 0x2b81e0, Func Offset: 0xf0
	// Func End, Address: 0x2b81ec, Func Offset: 0xfc
}

// 
// Start address: 0x2b81f0
void PlayerCandleEffectObjDestruct()
{
	// Line 165, Address: 0x2b81f0, Func Offset: 0
	// Func End, Address: 0x2b81f8, Func Offset: 0x8
}

// 
// Start address: 0x2b8200
int PlayerCandleEffectNextNum(int num)
{
	int ret;
	int ri;
	// Line 229, Address: 0x2b8200, Func Offset: 0
	// Line 225, Address: 0x2b8204, Func Offset: 0x4
	// Line 229, Address: 0x2b8208, Func Offset: 0x8
	// Line 225, Address: 0x2b820c, Func Offset: 0xc
	// Line 229, Address: 0x2b8214, Func Offset: 0x14
	// Line 230, Address: 0x2b8218, Func Offset: 0x18
	// Line 231, Address: 0x2b8224, Func Offset: 0x24
	// Line 230, Address: 0x2b8228, Func Offset: 0x28
	// Line 231, Address: 0x2b8238, Func Offset: 0x38
	// Line 233, Address: 0x2b8240, Func Offset: 0x40
	// Line 236, Address: 0x2b8248, Func Offset: 0x48
	// Line 237, Address: 0x2b8250, Func Offset: 0x50
	// Line 238, Address: 0x2b825c, Func Offset: 0x5c
	// Line 240, Address: 0x2b8264, Func Offset: 0x64
	// Line 244, Address: 0x2b8270, Func Offset: 0x70
	// Line 245, Address: 0x2b8278, Func Offset: 0x78
	// Line 246, Address: 0x2b8284, Func Offset: 0x84
	// Line 249, Address: 0x2b828c, Func Offset: 0x8c
	// Line 250, Address: 0x2b8298, Func Offset: 0x98
	// Line 251, Address: 0x2b82a8, Func Offset: 0xa8
	// Line 253, Address: 0x2b82b0, Func Offset: 0xb0
	// Line 255, Address: 0x2b82b8, Func Offset: 0xb8
	// Line 257, Address: 0x2b82bc, Func Offset: 0xbc
	// Line 259, Address: 0x2b82c0, Func Offset: 0xc0
	// Line 260, Address: 0x2b82c4, Func Offset: 0xc4
	// Func End, Address: 0x2b82d4, Func Offset: 0xd4
}

// 
// Start address: 0x2b82e0
void PlayerCandleEffectInit()
{
	sgTexData* tex_dat;
	sgClutData* clut_dat;
	// Line 264, Address: 0x2b82e0, Func Offset: 0
	// Line 271, Address: 0x2b82e4, Func Offset: 0x4
	// Line 264, Address: 0x2b82e8, Func Offset: 0x8
	// Line 271, Address: 0x2b82ec, Func Offset: 0xc
	// Line 264, Address: 0x2b82f0, Func Offset: 0x10
	// Line 271, Address: 0x2b82f8, Func Offset: 0x18
	// Line 276, Address: 0x2b8304, Func Offset: 0x24
	// Line 278, Address: 0x2b8320, Func Offset: 0x40
	// Line 281, Address: 0x2b833c, Func Offset: 0x5c
	// Line 282, Address: 0x2b8348, Func Offset: 0x68
	// Line 288, Address: 0x2b8354, Func Offset: 0x74
	// Line 290, Address: 0x2b835c, Func Offset: 0x7c
	// Line 291, Address: 0x2b8360, Func Offset: 0x80
	// Func End, Address: 0x2b8374, Func Offset: 0x94
}

// 
// Start address: 0x2b8380
int PlayerCandleEffectDraw(float* pos, int id_flame, int id_glow, int alpha, float scale_f, float scale_g)
{
	sgSot* ot;
	void* pkt;
	float m[4][4];
	_anon4* fuv;
	_anon4* guv;
	float camera_Z[4];
	float tmp[4];
	float g_vec[4][2];
	float f_vec[4][2];
	int ret;
	_anon2* tex;
	unsigned long cbp;
	float angle_y;
	float snf;
	float csf;
	float center[4];
	float c_w;
	float vsm[4][4];
	float sw;
	float sh;
	float cent_x;
	float cent_y;
	float wid_x;
	float wid_y;
	float vsm[4][4];
	float sw;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 321, Address: 0x2b8380, Func Offset: 0
	// Line 295, Address: 0x2b8384, Func Offset: 0x4
	// Line 321, Address: 0x2b8388, Func Offset: 0x8
	// Line 295, Address: 0x2b838c, Func Offset: 0xc
	// Line 322, Address: 0x2b8394, Func Offset: 0x14
	// Line 295, Address: 0x2b8398, Func Offset: 0x18
	// Line 321, Address: 0x2b83a4, Func Offset: 0x24
	// Line 295, Address: 0x2b83a8, Func Offset: 0x28
	// Line 321, Address: 0x2b83b4, Func Offset: 0x34
	// Line 295, Address: 0x2b83b8, Func Offset: 0x38
	// Line 325, Address: 0x2b83bc, Func Offset: 0x3c
	// Line 295, Address: 0x2b83c0, Func Offset: 0x40
	// Line 313, Address: 0x2b83c4, Func Offset: 0x44
	// Line 295, Address: 0x2b83c8, Func Offset: 0x48
	// Line 321, Address: 0x2b83e4, Func Offset: 0x64
	// Line 322, Address: 0x2b83e8, Func Offset: 0x68
	// Line 321, Address: 0x2b83f4, Func Offset: 0x74
	// Line 322, Address: 0x2b83fc, Func Offset: 0x7c
	// Line 325, Address: 0x2b8404, Func Offset: 0x84
	// Line 326, Address: 0x2b840c, Func Offset: 0x8c
	// Line 332, Address: 0x2b8414, Func Offset: 0x94
	// Line 334, Address: 0x2b8438, Func Offset: 0xb8
	// Line 336, Address: 0x2b8440, Func Offset: 0xc0
	// Line 337, Address: 0x2b844c, Func Offset: 0xcc
	// Line 338, Address: 0x2b8454, Func Offset: 0xd4
	// Line 339, Address: 0x2b8460, Func Offset: 0xe0
	// Line 340, Address: 0x2b8468, Func Offset: 0xe8
	// Line 366, Address: 0x2b8488, Func Offset: 0x108
	// Line 340, Address: 0x2b848c, Func Offset: 0x10c
	// Line 366, Address: 0x2b8490, Func Offset: 0x110
	// Line 367, Address: 0x2b849c, Func Offset: 0x11c
	// Line 368, Address: 0x2b84b4, Func Offset: 0x134
	// Line 369, Address: 0x2b84bc, Func Offset: 0x13c
	// Line 381, Address: 0x2b84cc, Func Offset: 0x14c
	// Line 382, Address: 0x2b8508, Func Offset: 0x188
	// Line 387, Address: 0x2b8510, Func Offset: 0x190
	// Line 382, Address: 0x2b8514, Func Offset: 0x194
	// Line 387, Address: 0x2b8518, Func Offset: 0x198
	// Line 388, Address: 0x2b8520, Func Offset: 0x1a0
	// Line 390, Address: 0x2b8524, Func Offset: 0x1a4
	// Line 388, Address: 0x2b8528, Func Offset: 0x1a8
	// Line 389, Address: 0x2b8530, Func Offset: 0x1b0
	// Line 388, Address: 0x2b8538, Func Offset: 0x1b8
	// Line 390, Address: 0x2b853c, Func Offset: 0x1bc
	// Line 389, Address: 0x2b8540, Func Offset: 0x1c0
	// Line 388, Address: 0x2b8544, Func Offset: 0x1c4
	// Line 389, Address: 0x2b8548, Func Offset: 0x1c8
	// Line 388, Address: 0x2b8550, Func Offset: 0x1d0
	// Line 389, Address: 0x2b8554, Func Offset: 0x1d4
	// Line 390, Address: 0x2b8558, Func Offset: 0x1d8
	// Line 391, Address: 0x2b8560, Func Offset: 0x1e0
	// Line 400, Address: 0x2b8570, Func Offset: 0x1f0
	// Line 394, Address: 0x2b8574, Func Offset: 0x1f4
	// Line 399, Address: 0x2b8578, Func Offset: 0x1f8
	// Line 401, Address: 0x2b8580, Func Offset: 0x200
	// Line 392, Address: 0x2b8584, Func Offset: 0x204
	// Line 403, Address: 0x2b8588, Func Offset: 0x208
	// Line 395, Address: 0x2b858c, Func Offset: 0x20c
	// Line 402, Address: 0x2b8590, Func Offset: 0x210
	// Line 393, Address: 0x2b8594, Func Offset: 0x214
	// Line 403, Address: 0x2b8598, Func Offset: 0x218
	// Line 399, Address: 0x2b859c, Func Offset: 0x21c
	// Line 403, Address: 0x2b85a0, Func Offset: 0x220
	// Line 394, Address: 0x2b85a4, Func Offset: 0x224
	// Line 392, Address: 0x2b85ac, Func Offset: 0x22c
	// Line 393, Address: 0x2b85b0, Func Offset: 0x230
	// Line 395, Address: 0x2b85b4, Func Offset: 0x234
	// Line 393, Address: 0x2b85b8, Func Offset: 0x238
	// Line 395, Address: 0x2b85bc, Func Offset: 0x23c
	// Line 392, Address: 0x2b85c0, Func Offset: 0x240
	// Line 399, Address: 0x2b85c4, Func Offset: 0x244
	// Line 400, Address: 0x2b85cc, Func Offset: 0x24c
	// Line 401, Address: 0x2b85d0, Func Offset: 0x250
	// Line 400, Address: 0x2b85d8, Func Offset: 0x258
	// Line 399, Address: 0x2b85dc, Func Offset: 0x25c
	// Line 400, Address: 0x2b85e4, Func Offset: 0x264
	// Line 401, Address: 0x2b85e8, Func Offset: 0x268
	// Line 400, Address: 0x2b85ec, Func Offset: 0x26c
	// Line 401, Address: 0x2b85f4, Func Offset: 0x274
	// Line 402, Address: 0x2b85fc, Func Offset: 0x27c
	// Line 401, Address: 0x2b8604, Func Offset: 0x284
	// Line 402, Address: 0x2b8608, Func Offset: 0x288
	// Line 401, Address: 0x2b860c, Func Offset: 0x28c
	// Line 403, Address: 0x2b8610, Func Offset: 0x290
	// Line 404, Address: 0x2b8644, Func Offset: 0x2c4
	// Line 406, Address: 0x2b864c, Func Offset: 0x2cc
	// Line 408, Address: 0x2b8650, Func Offset: 0x2d0
	// Line 404, Address: 0x2b8658, Func Offset: 0x2d8
	// Line 405, Address: 0x2b865c, Func Offset: 0x2dc
	// Line 408, Address: 0x2b8660, Func Offset: 0x2e0
	// Line 405, Address: 0x2b8664, Func Offset: 0x2e4
	// Line 404, Address: 0x2b8668, Func Offset: 0x2e8
	// Line 407, Address: 0x2b8670, Func Offset: 0x2f0
	// Line 404, Address: 0x2b8674, Func Offset: 0x2f4
	// Line 405, Address: 0x2b867c, Func Offset: 0x2fc
	// Line 406, Address: 0x2b8684, Func Offset: 0x304
	// Line 407, Address: 0x2b8688, Func Offset: 0x308
	// Line 406, Address: 0x2b8690, Func Offset: 0x310
	// Line 405, Address: 0x2b8694, Func Offset: 0x314
	// Line 406, Address: 0x2b869c, Func Offset: 0x31c
	// Line 407, Address: 0x2b86a4, Func Offset: 0x324
	// Line 406, Address: 0x2b86a8, Func Offset: 0x328
	// Line 408, Address: 0x2b86b0, Func Offset: 0x330
	// Line 437, Address: 0x2b86e4, Func Offset: 0x364
	// Line 441, Address: 0x2b86ec, Func Offset: 0x36c
	// Line 438, Address: 0x2b86f0, Func Offset: 0x370
	// Line 437, Address: 0x2b86f8, Func Offset: 0x378
	// Line 439, Address: 0x2b8700, Func Offset: 0x380
	// Line 440, Address: 0x2b8710, Func Offset: 0x390
	// Line 438, Address: 0x2b8718, Func Offset: 0x398
	// Line 437, Address: 0x2b871c, Func Offset: 0x39c
	// Line 440, Address: 0x2b8720, Func Offset: 0x3a0
	// Line 438, Address: 0x2b8724, Func Offset: 0x3a4
	// Line 439, Address: 0x2b8728, Func Offset: 0x3a8
	// Line 440, Address: 0x2b872c, Func Offset: 0x3ac
	// Line 438, Address: 0x2b8730, Func Offset: 0x3b0
	// Line 439, Address: 0x2b8734, Func Offset: 0x3b4
	// Line 440, Address: 0x2b8738, Func Offset: 0x3b8
	// Line 437, Address: 0x2b8744, Func Offset: 0x3c4
	// Line 438, Address: 0x2b8748, Func Offset: 0x3c8
	// Line 439, Address: 0x2b874c, Func Offset: 0x3cc
	// Line 441, Address: 0x2b8750, Func Offset: 0x3d0
	// Line 442, Address: 0x2b8758, Func Offset: 0x3d8
	// Line 443, Address: 0x2b8768, Func Offset: 0x3e8
	// Line 442, Address: 0x2b876c, Func Offset: 0x3ec
	// Line 443, Address: 0x2b8774, Func Offset: 0x3f4
	// Line 444, Address: 0x2b8790, Func Offset: 0x410
	// Line 445, Address: 0x2b8794, Func Offset: 0x414
	// Line 446, Address: 0x2b8798, Func Offset: 0x418
	// Line 447, Address: 0x2b87b8, Func Offset: 0x438
	// Line 448, Address: 0x2b87bc, Func Offset: 0x43c
	// Line 450, Address: 0x2b87c0, Func Offset: 0x440
	// Line 448, Address: 0x2b87c4, Func Offset: 0x444
	// Line 450, Address: 0x2b87c8, Func Offset: 0x448
	// Line 449, Address: 0x2b87cc, Func Offset: 0x44c
	// Line 451, Address: 0x2b87d0, Func Offset: 0x450
	// Line 449, Address: 0x2b87d4, Func Offset: 0x454
	// Line 451, Address: 0x2b87d8, Func Offset: 0x458
	// Line 452, Address: 0x2b87dc, Func Offset: 0x45c
	// Line 455, Address: 0x2b87e0, Func Offset: 0x460
	// Line 457, Address: 0x2b8830, Func Offset: 0x4b0
	// Line 459, Address: 0x2b8838, Func Offset: 0x4b8
	// Line 461, Address: 0x2b8878, Func Offset: 0x4f8
	// Line 463, Address: 0x2b8880, Func Offset: 0x500
	// Line 465, Address: 0x2b88d0, Func Offset: 0x550
	// Line 467, Address: 0x2b88d8, Func Offset: 0x558
	// Line 469, Address: 0x2b8918, Func Offset: 0x598
	// Line 472, Address: 0x2b8920, Func Offset: 0x5a0
	// Line 475, Address: 0x2b8930, Func Offset: 0x5b0
	// Line 476, Address: 0x2b893c, Func Offset: 0x5bc
	// Line 477, Address: 0x2b8940, Func Offset: 0x5c0
	// Line 480, Address: 0x2b8948, Func Offset: 0x5c8
	// Line 477, Address: 0x2b894c, Func Offset: 0x5cc
	// Line 480, Address: 0x2b8950, Func Offset: 0x5d0
	// Line 477, Address: 0x2b895c, Func Offset: 0x5dc
	// Line 480, Address: 0x2b8960, Func Offset: 0x5e0
	// Line 481, Address: 0x2b896c, Func Offset: 0x5ec
	// Line 499, Address: 0x2b8970, Func Offset: 0x5f0
	// Line 500, Address: 0x2b897c, Func Offset: 0x5fc
	// Line 501, Address: 0x2b8984, Func Offset: 0x604
	// Line 503, Address: 0x2b899c, Func Offset: 0x61c
	// Line 504, Address: 0x2b89b0, Func Offset: 0x630
	// Line 505, Address: 0x2b89b8, Func Offset: 0x638
	// Line 506, Address: 0x2b89c0, Func Offset: 0x640
	// Line 509, Address: 0x2b89cc, Func Offset: 0x64c
	// Line 512, Address: 0x2b89d0, Func Offset: 0x650
	// Line 509, Address: 0x2b89d4, Func Offset: 0x654
	// Line 512, Address: 0x2b89d8, Func Offset: 0x658
	// Line 509, Address: 0x2b89dc, Func Offset: 0x65c
	// Line 510, Address: 0x2b89e0, Func Offset: 0x660
	// Line 511, Address: 0x2b89e4, Func Offset: 0x664
	// Line 512, Address: 0x2b89e8, Func Offset: 0x668
	// Line 513, Address: 0x2b89ec, Func Offset: 0x66c
	// Line 514, Address: 0x2b89f4, Func Offset: 0x674
	// Line 516, Address: 0x2b89fc, Func Offset: 0x67c
	// Line 509, Address: 0x2b8a00, Func Offset: 0x680
	// Line 510, Address: 0x2b8a10, Func Offset: 0x690
	// Line 509, Address: 0x2b8a14, Func Offset: 0x694
	// Line 510, Address: 0x2b8a1c, Func Offset: 0x69c
	// Line 511, Address: 0x2b8a38, Func Offset: 0x6b8
	// Line 510, Address: 0x2b8a3c, Func Offset: 0x6bc
	// Line 511, Address: 0x2b8a44, Func Offset: 0x6c4
	// Line 512, Address: 0x2b8a58, Func Offset: 0x6d8
	// Line 511, Address: 0x2b8a5c, Func Offset: 0x6dc
	// Line 512, Address: 0x2b8a64, Func Offset: 0x6e4
	// Line 513, Address: 0x2b8a78, Func Offset: 0x6f8
	// Line 512, Address: 0x2b8a7c, Func Offset: 0x6fc
	// Line 513, Address: 0x2b8a84, Func Offset: 0x704
	// Line 514, Address: 0x2b8a98, Func Offset: 0x718
	// Line 513, Address: 0x2b8a9c, Func Offset: 0x71c
	// Line 514, Address: 0x2b8aa4, Func Offset: 0x724
	// Line 516, Address: 0x2b8ab8, Func Offset: 0x738
	// Line 514, Address: 0x2b8abc, Func Offset: 0x73c
	// Line 516, Address: 0x2b8ac4, Func Offset: 0x744
	// Line 517, Address: 0x2b8afc, Func Offset: 0x77c
	// Line 516, Address: 0x2b8b00, Func Offset: 0x780
	// Line 517, Address: 0x2b8b04, Func Offset: 0x784
	// Line 516, Address: 0x2b8b08, Func Offset: 0x788
	// Line 520, Address: 0x2b8b0c, Func Offset: 0x78c
	// Line 516, Address: 0x2b8b10, Func Offset: 0x790
	// Line 517, Address: 0x2b8b14, Func Offset: 0x794
	// Line 520, Address: 0x2b8b28, Func Offset: 0x7a8
	// Line 517, Address: 0x2b8b2c, Func Offset: 0x7ac
	// Line 520, Address: 0x2b8b34, Func Offset: 0x7b4
	// Line 523, Address: 0x2b8b58, Func Offset: 0x7d8
	// Line 525, Address: 0x2b8b68, Func Offset: 0x7e8
	// Line 526, Address: 0x2b8b6c, Func Offset: 0x7ec
	// Line 523, Address: 0x2b8b70, Func Offset: 0x7f0
	// Line 525, Address: 0x2b8b88, Func Offset: 0x808
	// Line 523, Address: 0x2b8b8c, Func Offset: 0x80c
	// Line 525, Address: 0x2b8b94, Func Offset: 0x814
	// Line 526, Address: 0x2b8bb0, Func Offset: 0x830
	// Line 525, Address: 0x2b8bb4, Func Offset: 0x834
	// Line 526, Address: 0x2b8be4, Func Offset: 0x864
	// Line 528, Address: 0x2b8c24, Func Offset: 0x8a4
	// Line 526, Address: 0x2b8c28, Func Offset: 0x8a8
	// Line 528, Address: 0x2b8c2c, Func Offset: 0x8ac
	// Line 529, Address: 0x2b8c34, Func Offset: 0x8b4
	// Line 528, Address: 0x2b8c38, Func Offset: 0x8b8
	// Line 529, Address: 0x2b8c50, Func Offset: 0x8d0
	// Line 528, Address: 0x2b8c54, Func Offset: 0x8d4
	// Line 529, Address: 0x2b8c84, Func Offset: 0x904
	// Line 534, Address: 0x2b8cc8, Func Offset: 0x948
	// Line 536, Address: 0x2b8ce0, Func Offset: 0x960
	// Line 534, Address: 0x2b8ce4, Func Offset: 0x964
	// Line 536, Address: 0x2b8ce8, Func Offset: 0x968
	// Line 534, Address: 0x2b8cec, Func Offset: 0x96c
	// Line 538, Address: 0x2b8cf8, Func Offset: 0x978
	// Line 534, Address: 0x2b8cfc, Func Offset: 0x97c
	// Line 539, Address: 0x2b8d00, Func Offset: 0x980
	// Line 534, Address: 0x2b8d04, Func Offset: 0x984
	// Line 536, Address: 0x2b8d14, Func Offset: 0x994
	// Line 534, Address: 0x2b8d18, Func Offset: 0x998
	// Line 536, Address: 0x2b8d20, Func Offset: 0x9a0
	// Line 538, Address: 0x2b8d3c, Func Offset: 0x9bc
	// Line 536, Address: 0x2b8d40, Func Offset: 0x9c0
	// Line 538, Address: 0x2b8d48, Func Offset: 0x9c8
	// Line 539, Address: 0x2b8d64, Func Offset: 0x9e4
	// Line 538, Address: 0x2b8d68, Func Offset: 0x9e8
	// Line 539, Address: 0x2b8d98, Func Offset: 0xa18
	// Line 541, Address: 0x2b8dd8, Func Offset: 0xa58
	// Line 539, Address: 0x2b8ddc, Func Offset: 0xa5c
	// Line 541, Address: 0x2b8de0, Func Offset: 0xa60
	// Line 542, Address: 0x2b8de8, Func Offset: 0xa68
	// Line 541, Address: 0x2b8dec, Func Offset: 0xa6c
	// Line 542, Address: 0x2b8e04, Func Offset: 0xa84
	// Line 541, Address: 0x2b8e08, Func Offset: 0xa88
	// Line 542, Address: 0x2b8e38, Func Offset: 0xab8
	// Line 544, Address: 0x2b8e78, Func Offset: 0xaf8
	// Line 542, Address: 0x2b8e7c, Func Offset: 0xafc
	// Line 544, Address: 0x2b8e80, Func Offset: 0xb00
	// Line 546, Address: 0x2b8eac, Func Offset: 0xb2c
	// Line 547, Address: 0x2b8eb4, Func Offset: 0xb34
	// Line 548, Address: 0x2b8f14, Func Offset: 0xb94
	// Line 549, Address: 0x2b8f24, Func Offset: 0xba4
	// Line 611, Address: 0x2b8f28, Func Offset: 0xba8
	// Line 612, Address: 0x2b8f30, Func Offset: 0xbb0
	// Func End, Address: 0x2b8f6c, Func Offset: 0xbec
}

