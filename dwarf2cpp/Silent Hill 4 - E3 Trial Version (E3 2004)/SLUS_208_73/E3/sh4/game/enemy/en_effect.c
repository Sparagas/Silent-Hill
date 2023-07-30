typedef struct sgSpkWork;
typedef struct _anon0;
typedef struct EnemyTexParameter;
typedef enum EnemyTexIdentity : unsigned char;
typedef struct _GAME_WORK;


typedef int type_0[1];
typedef float type_1[4];
typedef _anon0 type_2[2];
typedef float type_3[4][9];
typedef float type_4[4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef int type_7[1];
typedef int type_8[1];
typedef int type_9[1];
typedef int type_10[1];
typedef int type_11[1];
typedef float type_12[4][2];
typedef int type_13[1];

struct sgSpkWork
{
	<unknown fundamental type (0xa510)>* packet;
	unsigned int packet_max;
	unsigned long* pk_last;
	unsigned long* pos;
	unsigned long* pgiftag;
	unsigned long giftag_b;
};

struct _anon0
{
	float S;
	float T;
};

struct EnemyTexParameter
{
	_anon0 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

enum EnemyTexIdentity : unsigned char
{
	EN_TEX_ID_COALTAR,
	EN_TEX_ID_GHOSTSTAIN,
	EN_TEX_ID_CELL,
	EN_TEX_ID_CELL2,
	EN_TEX_ID_MUCUS,
	EN_TEX_ID_CRUSH_HIL,
	EN_TEX_ID_EARTHWORM,
	EN_TEX_ID_EARTHWORM2,
	EN_TEX_ID_EARTHWORM3,
	EN_TEX_ID_EARTHWORM4,
	EN_TEX_ID_BLOODPOOL,
	EN_TEX_ID_FLAME1,
	EN_TEX_ID_FLAME2,
	EN_TEX_ID_TOACH,
	EN_TEX_ID_FIRE,
	EN_TEX_ID_FIRELIGHT,
	EN_TEX_ID_WALL,
	EN_TEX_ID_MAX
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

int effect_sotenvid;
float vertex_clip_data[4][2];
_GAME_WORK gamew;
float en_quat_rot_y_270[4];
float sphere_rot[4][9];
float en_quat_rot_y_90[4];

void EnemyEffectWorkInit();
void EnemyEffectDrawStuckPolygonWithRot(float* center, float* normal, float width, float height, float rotate, EnemyTexParameter* tex, unsigned int color, int mode);
int eedbpww_calc_vertex(float plist[4], float vlist[4], int vnum, float* normal, float* def, float width, float float_height);
void* eedbpww_make_packet(<unknown fundamental type (0xa510)>* pk_top, float plist[4], int vnum, EnemyTexParameter* tex, unsigned int rgba);
void* eedbpww_make_packet_rev(<unknown fundamental type (0xa510)>* pk_top, float plist[4], int vnum, EnemyTexParameter* tex, unsigned int rgba);
int EnemyEffectDrawBoardParallelWithWall(float vlist[4], int vnum, float* normal, float* def, float width, float float_height, EnemyTexParameter* tex, unsigned int rgba);
int EnemyEffectDrawBoardParallelWithWallSub(float vlist[4], int vnum, float* normal, float* def, float width, float float_height, EnemyTexParameter* tex, unsigned int rgba);
void EnemyEffectDrawBoard(float* center, float* rot, float w, float h, EnemyTexParameter* tex, unsigned int rgba);
void EnemyEffectDrawBoardThinEdge2(float* center, float* rot, float w, float h, float margin, EnemyTexParameter* tex, unsigned int rgba1, unsigned int rgba2);
void EnemyEffectDrawParallelogramThinEdge(float* center, float* rot, float w, float h, float left_gap, float right_gap, float margin, EnemyTexParameter* tex, unsigned int rgba);
void EnemyEffectDrawBillboard(float* center, float w, float h, EnemyTexParameter* tex, unsigned int rgba, int sotenvid);
void EnemyEffectDrawBlinds(float center[4], float w, int div, EnemyTexParameter* tex, unsigned int rgba, int sotenvid);
void EnemyEffectDrawString(float* pos1, float* pos2, float width, int dir, float alpha, EnemyTexParameter* tex);
void EnemyEffectDrawSnappedString(float* pos1, float* pos2, float width, int dir, float snap_rate, float alpha, EnemyTexParameter* tex);
void draw_divide_texture(float pvtx[4], int width_div, int height_div, EnemyTexParameter* tex, float* alpha, int sheet);
void EnemyEffectDrawTexture(float* center, float* normal, float* width, float* height, int width_div, int height_div, float* alpha, EnemyTexParameter* tex, int sheet);
void EnemyEffectDrawTextureOnCylinder(float* center, float* normal, float* c_center, float* width, float* height, int width_div, int height_div, float* alpha, EnemyTexParameter* tex, int sheet);
void EnemyEffectDrawTextureOnDrum(float* center, float* normal, float* c_center, float* c_dir, float* width, float* height, int width_div, int height_div, float* alpha, EnemyTexParameter* tex, int sheet);

// 
// Start address: 0x197b20
void EnemyEffectWorkInit()
{
	// Line 30, Address: 0x197b20, Func Offset: 0
	// Line 31, Address: 0x197b28, Func Offset: 0x8
	// Func End, Address: 0x197b30, Func Offset: 0x10
}

// 
// Start address: 0x197b30
void EnemyEffectDrawStuckPolygonWithRot(float* center, float* normal, float width, float height, float rotate, EnemyTexParameter* tex, unsigned int color, int mode)
{
	sgSpkWork* pkw;
	float* cpos;
	float* pos;
	float* vec;
	float* vec2;
	float* vertical;
	float* quat;
	void* tagadr;
	unsigned long* ptex0;
	// Line 180, Address: 0x197b30, Func Offset: 0
	// Line 186, Address: 0x197b34, Func Offset: 0x4
	// Line 180, Address: 0x197b38, Func Offset: 0x8
	// Line 186, Address: 0x197b58, Func Offset: 0x28
	// Line 180, Address: 0x197b5c, Func Offset: 0x2c
	// Line 186, Address: 0x197b88, Func Offset: 0x58
	// Line 187, Address: 0x197b90, Func Offset: 0x60
	// Line 194, Address: 0x197b94, Func Offset: 0x64
	// Line 187, Address: 0x197b98, Func Offset: 0x68
	// Line 194, Address: 0x197b9c, Func Offset: 0x6c
	// Line 187, Address: 0x197ba0, Func Offset: 0x70
	// Line 191, Address: 0x197bb4, Func Offset: 0x84
	// Line 187, Address: 0x197bb8, Func Offset: 0x88
	// Line 188, Address: 0x197bbc, Func Offset: 0x8c
	// Line 189, Address: 0x197bc0, Func Offset: 0x90
	// Line 190, Address: 0x197bc4, Func Offset: 0x94
	// Line 191, Address: 0x197bc8, Func Offset: 0x98
	// Line 192, Address: 0x197bcc, Func Offset: 0x9c
	// Line 194, Address: 0x197bd0, Func Offset: 0xa0
	// Line 195, Address: 0x197bec, Func Offset: 0xbc
	// Line 197, Address: 0x197c00, Func Offset: 0xd0
	// Line 199, Address: 0x197c0c, Func Offset: 0xdc
	// Line 200, Address: 0x197c18, Func Offset: 0xe8
	// Line 206, Address: 0x197c50, Func Offset: 0x120
	// Line 207, Address: 0x197c64, Func Offset: 0x134
	// Line 208, Address: 0x197c6c, Func Offset: 0x13c
	// Line 209, Address: 0x197c80, Func Offset: 0x150
	// Line 210, Address: 0x197c90, Func Offset: 0x160
	// Line 211, Address: 0x197c98, Func Offset: 0x168
	// Line 212, Address: 0x197cb8, Func Offset: 0x188
	// Line 213, Address: 0x197cd8, Func Offset: 0x1a8
	// Line 214, Address: 0x197ce8, Func Offset: 0x1b8
	// Line 215, Address: 0x197cf8, Func Offset: 0x1c8
	// Line 216, Address: 0x197d14, Func Offset: 0x1e4
	// Line 218, Address: 0x197d24, Func Offset: 0x1f4
	// Line 219, Address: 0x197d38, Func Offset: 0x208
	// Line 220, Address: 0x197d4c, Func Offset: 0x21c
	// Line 223, Address: 0x197d6c, Func Offset: 0x23c
	// Line 224, Address: 0x197d80, Func Offset: 0x250
	// Line 225, Address: 0x197d94, Func Offset: 0x264
	// Line 228, Address: 0x197db4, Func Offset: 0x284
	// Line 229, Address: 0x197dc8, Func Offset: 0x298
	// Line 230, Address: 0x197ddc, Func Offset: 0x2ac
	// Line 233, Address: 0x197dfc, Func Offset: 0x2cc
	// Line 234, Address: 0x197e10, Func Offset: 0x2e0
	// Line 235, Address: 0x197e24, Func Offset: 0x2f4
	// Line 238, Address: 0x197e44, Func Offset: 0x314
	// Line 241, Address: 0x197e54, Func Offset: 0x324
	// Line 242, Address: 0x197e5c, Func Offset: 0x32c
	// Line 243, Address: 0x197e64, Func Offset: 0x334
	// Line 244, Address: 0x197e78, Func Offset: 0x348
	// Line 245, Address: 0x197e84, Func Offset: 0x354
	// Line 247, Address: 0x197eb0, Func Offset: 0x380
	// Line 248, Address: 0x197eb8, Func Offset: 0x388
	// Line 249, Address: 0x197ec8, Func Offset: 0x398
	// Line 252, Address: 0x197ed4, Func Offset: 0x3a4
	// Line 253, Address: 0x197edc, Func Offset: 0x3ac
	// Line 254, Address: 0x197ee0, Func Offset: 0x3b0
	// Line 256, Address: 0x197ee8, Func Offset: 0x3b8
	// Line 257, Address: 0x197efc, Func Offset: 0x3cc
	// Func End, Address: 0x197f3c, Func Offset: 0x40c
}

// 
// Start address: 0x197f40
int eedbpww_calc_vertex(float plist[4], float vlist[4], int vnum, float* normal, float* def, float width, float float_height)
{
	float* pos;
	float* vec;
	float* dif;
	float* pdif;
	float* floatv;
	float* ndef;
	float* lpos;
	float* rpos;
	int i;
	int r;
	float d;
	// Line 272, Address: 0x197f40, Func Offset: 0
	// Line 278, Address: 0x197f44, Func Offset: 0x4
	// Line 272, Address: 0x197f48, Func Offset: 0x8
	// Line 277, Address: 0x197f78, Func Offset: 0x38
	// Line 278, Address: 0x197f8c, Func Offset: 0x4c
	// Line 282, Address: 0x197fa4, Func Offset: 0x64
	// Line 278, Address: 0x197fa8, Func Offset: 0x68
	// Line 279, Address: 0x197fac, Func Offset: 0x6c
	// Line 282, Address: 0x197fb0, Func Offset: 0x70
	// Line 280, Address: 0x197fb4, Func Offset: 0x74
	// Line 285, Address: 0x197fb8, Func Offset: 0x78
	// Line 281, Address: 0x197fbc, Func Offset: 0x7c
	// Line 285, Address: 0x197fc0, Func Offset: 0x80
	// Line 283, Address: 0x197fc4, Func Offset: 0x84
	// Line 286, Address: 0x197fc8, Func Offset: 0x88
	// Line 284, Address: 0x197fcc, Func Offset: 0x8c
	// Line 286, Address: 0x197fd0, Func Offset: 0x90
	// Line 287, Address: 0x197ff0, Func Offset: 0xb0
	// Line 288, Address: 0x197ff4, Func Offset: 0xb4
	// Line 289, Address: 0x198018, Func Offset: 0xd8
	// Line 290, Address: 0x198020, Func Offset: 0xe0
	// Line 291, Address: 0x198034, Func Offset: 0xf4
	// Line 292, Address: 0x19805c, Func Offset: 0x11c
	// Line 293, Address: 0x19806c, Func Offset: 0x12c
	// Line 294, Address: 0x198078, Func Offset: 0x138
	// Line 296, Address: 0x198080, Func Offset: 0x140
	// Line 297, Address: 0x19809c, Func Offset: 0x15c
	// Line 298, Address: 0x1980b4, Func Offset: 0x174
	// Line 300, Address: 0x1980e0, Func Offset: 0x1a0
	// Line 301, Address: 0x1980e8, Func Offset: 0x1a8
	// Line 302, Address: 0x198104, Func Offset: 0x1c4
	// Line 303, Address: 0x198120, Func Offset: 0x1e0
	// Line 304, Address: 0x19813c, Func Offset: 0x1fc
	// Line 305, Address: 0x198150, Func Offset: 0x210
	// Line 306, Address: 0x198158, Func Offset: 0x218
	// Line 307, Address: 0x19816c, Func Offset: 0x22c
	// Line 308, Address: 0x19819c, Func Offset: 0x25c
	// Line 309, Address: 0x1981a0, Func Offset: 0x260
	// Line 312, Address: 0x1981a8, Func Offset: 0x268
	// Line 313, Address: 0x1981b0, Func Offset: 0x270
	// Line 315, Address: 0x1981b8, Func Offset: 0x278
	// Line 317, Address: 0x1981d4, Func Offset: 0x294
	// Line 318, Address: 0x1981dc, Func Offset: 0x29c
	// Line 319, Address: 0x1981e0, Func Offset: 0x2a0
	// Line 320, Address: 0x1981fc, Func Offset: 0x2bc
	// Line 321, Address: 0x198210, Func Offset: 0x2d0
	// Line 322, Address: 0x198218, Func Offset: 0x2d8
	// Line 323, Address: 0x198230, Func Offset: 0x2f0
	// Line 324, Address: 0x198260, Func Offset: 0x320
	// Line 325, Address: 0x198268, Func Offset: 0x328
	// Line 328, Address: 0x198270, Func Offset: 0x330
	// Line 329, Address: 0x198278, Func Offset: 0x338
	// Line 330, Address: 0x198284, Func Offset: 0x344
	// Line 331, Address: 0x198288, Func Offset: 0x348
	// Line 333, Address: 0x1982ac, Func Offset: 0x36c
	// Line 335, Address: 0x1982b4, Func Offset: 0x374
	// Line 337, Address: 0x1982d0, Func Offset: 0x390
	// Line 338, Address: 0x1982d8, Func Offset: 0x398
	// Line 337, Address: 0x1982dc, Func Offset: 0x39c
	// Line 520, Address: 0x1982e8, Func Offset: 0x3a8
	// Func End, Address: 0x19831c, Func Offset: 0x3dc
}

// 
// Start address: 0x198320
void* eedbpww_make_packet(<unknown fundamental type (0xa510)>* pk_top, float plist[4], int vnum, EnemyTexParameter* tex, unsigned int rgba)
{
	unsigned long* pcur;
	float plp[4];
	float q;
	float t;
	float rm;
	int i;
	// Line 532, Address: 0x198320, Func Offset: 0
	// Line 539, Address: 0x198324, Func Offset: 0x4
	// Line 532, Address: 0x198328, Func Offset: 0x8
	// Line 539, Address: 0x19832c, Func Offset: 0xc
	// Line 532, Address: 0x198330, Func Offset: 0x10
	// Line 539, Address: 0x198334, Func Offset: 0x14
	// Line 532, Address: 0x198338, Func Offset: 0x18
	// Line 537, Address: 0x198354, Func Offset: 0x34
	// Line 560, Address: 0x198358, Func Offset: 0x38
	// Line 532, Address: 0x19835c, Func Offset: 0x3c
	// Line 556, Address: 0x198360, Func Offset: 0x40
	// Line 551, Address: 0x198364, Func Offset: 0x44
	// Line 539, Address: 0x198368, Func Offset: 0x48
	// Line 556, Address: 0x19836c, Func Offset: 0x4c
	// Line 541, Address: 0x198370, Func Offset: 0x50
	// Line 539, Address: 0x198374, Func Offset: 0x54
	// Line 532, Address: 0x198378, Func Offset: 0x58
	// Line 541, Address: 0x19837c, Func Offset: 0x5c
	// Line 532, Address: 0x198380, Func Offset: 0x60
	// Line 539, Address: 0x198384, Func Offset: 0x64
	// Line 541, Address: 0x198388, Func Offset: 0x68
	// Line 539, Address: 0x19838c, Func Offset: 0x6c
	// Line 532, Address: 0x198390, Func Offset: 0x70
	// Line 541, Address: 0x198394, Func Offset: 0x74
	// Line 539, Address: 0x198398, Func Offset: 0x78
	// Line 541, Address: 0x19839c, Func Offset: 0x7c
	// Line 543, Address: 0x1983a4, Func Offset: 0x84
	// Line 559, Address: 0x1983ac, Func Offset: 0x8c
	// Line 543, Address: 0x1983b0, Func Offset: 0x90
	// Line 562, Address: 0x1983b4, Func Offset: 0x94
	// Line 543, Address: 0x1983b8, Func Offset: 0x98
	// Line 548, Address: 0x1983c0, Func Offset: 0xa0
	// Line 543, Address: 0x1983c4, Func Offset: 0xa4
	// Line 554, Address: 0x1983c8, Func Offset: 0xa8
	// Line 548, Address: 0x1983cc, Func Offset: 0xac
	// Line 550, Address: 0x1983d0, Func Offset: 0xb0
	// Line 556, Address: 0x1983d4, Func Offset: 0xb4
	// Line 551, Address: 0x1983d8, Func Offset: 0xb8
	// Line 556, Address: 0x1983dc, Func Offset: 0xbc
	// Line 553, Address: 0x1983e0, Func Offset: 0xc0
	// Line 556, Address: 0x1983e4, Func Offset: 0xc4
	// Line 561, Address: 0x1983f0, Func Offset: 0xd0
	// Line 557, Address: 0x1983f4, Func Offset: 0xd4
	// Line 561, Address: 0x1983f8, Func Offset: 0xd8
	// Line 557, Address: 0x1983fc, Func Offset: 0xdc
	// Line 553, Address: 0x198400, Func Offset: 0xe0
	// Line 561, Address: 0x198404, Func Offset: 0xe4
	// Line 554, Address: 0x198408, Func Offset: 0xe8
	// Line 556, Address: 0x19840c, Func Offset: 0xec
	// Line 557, Address: 0x198410, Func Offset: 0xf0
	// Line 561, Address: 0x198414, Func Offset: 0xf4
	// Line 562, Address: 0x19841c, Func Offset: 0xfc
	// Line 564, Address: 0x198428, Func Offset: 0x108
	// Line 565, Address: 0x198430, Func Offset: 0x110
	// Line 564, Address: 0x198434, Func Offset: 0x114
	// Line 563, Address: 0x198438, Func Offset: 0x118
	// Line 565, Address: 0x19843c, Func Offset: 0x11c
	// Line 563, Address: 0x198440, Func Offset: 0x120
	// Line 564, Address: 0x198444, Func Offset: 0x124
	// Line 563, Address: 0x198448, Func Offset: 0x128
	// Line 565, Address: 0x19844c, Func Offset: 0x12c
	// Line 567, Address: 0x19845c, Func Offset: 0x13c
	// Line 566, Address: 0x198460, Func Offset: 0x140
	// Line 567, Address: 0x19846c, Func Offset: 0x14c
	// Line 569, Address: 0x198498, Func Offset: 0x178
	// Line 567, Address: 0x19849c, Func Offset: 0x17c
	// Line 568, Address: 0x1984a0, Func Offset: 0x180
	// Line 569, Address: 0x1984ac, Func Offset: 0x18c
	// Line 568, Address: 0x1984b8, Func Offset: 0x198
	// Line 569, Address: 0x1984bc, Func Offset: 0x19c
	// Line 571, Address: 0x1984c8, Func Offset: 0x1a8
	// Line 570, Address: 0x1984cc, Func Offset: 0x1ac
	// Line 571, Address: 0x1984d8, Func Offset: 0x1b8
	// Line 573, Address: 0x198508, Func Offset: 0x1e8
	// Line 571, Address: 0x19850c, Func Offset: 0x1ec
	// Line 574, Address: 0x198510, Func Offset: 0x1f0
	// Line 572, Address: 0x198514, Func Offset: 0x1f4
	// Line 574, Address: 0x198518, Func Offset: 0x1f8
	// Line 575, Address: 0x198524, Func Offset: 0x204
	// Line 576, Address: 0x198528, Func Offset: 0x208
	// Func End, Address: 0x198558, Func Offset: 0x238
}

// 
// Start address: 0x198560
void* eedbpww_make_packet_rev(<unknown fundamental type (0xa510)>* pk_top, float plist[4], int vnum, EnemyTexParameter* tex, unsigned int rgba)
{
	unsigned long* pcur;
	float plp[4];
	float q;
	float t;
	float rm;
	int i;
	int f;
	unsigned int rgb;
	unsigned int a;
	unsigned int at;
	// Line 588, Address: 0x198560, Func Offset: 0
	// Line 596, Address: 0x198564, Func Offset: 0x4
	// Line 588, Address: 0x198568, Func Offset: 0x8
	// Line 596, Address: 0x19856c, Func Offset: 0xc
	// Line 588, Address: 0x198570, Func Offset: 0x10
	// Line 594, Address: 0x198588, Func Offset: 0x28
	// Line 617, Address: 0x19858c, Func Offset: 0x2c
	// Line 588, Address: 0x198590, Func Offset: 0x30
	// Line 613, Address: 0x198594, Func Offset: 0x34
	// Line 588, Address: 0x198598, Func Offset: 0x38
	// Line 596, Address: 0x19859c, Func Offset: 0x3c
	// Line 588, Address: 0x1985a0, Func Offset: 0x40
	// Line 596, Address: 0x1985a4, Func Offset: 0x44
	// Line 619, Address: 0x1985a8, Func Offset: 0x48
	// Line 596, Address: 0x1985ac, Func Offset: 0x4c
	// Line 613, Address: 0x1985b0, Func Offset: 0x50
	// Line 588, Address: 0x1985b4, Func Offset: 0x54
	// Line 598, Address: 0x1985b8, Func Offset: 0x58
	// Line 596, Address: 0x1985c0, Func Offset: 0x60
	// Line 588, Address: 0x1985c4, Func Offset: 0x64
	// Line 598, Address: 0x1985c8, Func Offset: 0x68
	// Line 588, Address: 0x1985cc, Func Offset: 0x6c
	// Line 596, Address: 0x1985d0, Func Offset: 0x70
	// Line 598, Address: 0x1985d8, Func Offset: 0x78
	// Line 611, Address: 0x1985e0, Func Offset: 0x80
	// Line 600, Address: 0x1985e4, Func Offset: 0x84
	// Line 598, Address: 0x1985e8, Func Offset: 0x88
	// Line 600, Address: 0x1985ec, Func Offset: 0x8c
	// Line 616, Address: 0x1985f0, Func Offset: 0x90
	// Line 600, Address: 0x1985f4, Func Offset: 0x94
	// Line 619, Address: 0x1985f8, Func Offset: 0x98
	// Line 600, Address: 0x1985fc, Func Offset: 0x9c
	// Line 620, Address: 0x198600, Func Offset: 0xa0
	// Line 600, Address: 0x198604, Func Offset: 0xa4
	// Line 621, Address: 0x198608, Func Offset: 0xa8
	// Line 600, Address: 0x19860c, Func Offset: 0xac
	// Line 605, Address: 0x198610, Func Offset: 0xb0
	// Line 608, Address: 0x198618, Func Offset: 0xb8
	// Line 607, Address: 0x19861c, Func Offset: 0xbc
	// Line 613, Address: 0x198620, Func Offset: 0xc0
	// Line 608, Address: 0x198624, Func Offset: 0xc4
	// Line 613, Address: 0x198628, Func Offset: 0xc8
	// Line 610, Address: 0x19862c, Func Offset: 0xcc
	// Line 613, Address: 0x198630, Func Offset: 0xd0
	// Line 614, Address: 0x19863c, Func Offset: 0xdc
	// Line 618, Address: 0x198640, Func Offset: 0xe0
	// Line 614, Address: 0x198644, Func Offset: 0xe4
	// Line 618, Address: 0x198648, Func Offset: 0xe8
	// Line 610, Address: 0x19864c, Func Offset: 0xec
	// Line 611, Address: 0x198650, Func Offset: 0xf0
	// Line 618, Address: 0x198654, Func Offset: 0xf4
	// Line 613, Address: 0x198658, Func Offset: 0xf8
	// Line 614, Address: 0x19865c, Func Offset: 0xfc
	// Line 618, Address: 0x198660, Func Offset: 0x100
	// Line 621, Address: 0x198668, Func Offset: 0x108
	// Line 623, Address: 0x198670, Func Offset: 0x110
	// Line 624, Address: 0x198678, Func Offset: 0x118
	// Line 623, Address: 0x19867c, Func Offset: 0x11c
	// Line 622, Address: 0x198680, Func Offset: 0x120
	// Line 624, Address: 0x198684, Func Offset: 0x124
	// Line 622, Address: 0x198688, Func Offset: 0x128
	// Line 623, Address: 0x19868c, Func Offset: 0x12c
	// Line 622, Address: 0x198690, Func Offset: 0x130
	// Line 624, Address: 0x198694, Func Offset: 0x134
	// Line 625, Address: 0x1986a4, Func Offset: 0x144
	// Line 626, Address: 0x1986ac, Func Offset: 0x14c
	// Line 627, Address: 0x1986b0, Func Offset: 0x150
	// Line 626, Address: 0x1986b4, Func Offset: 0x154
	// Line 627, Address: 0x1986b8, Func Offset: 0x158
	// Line 628, Address: 0x1986c8, Func Offset: 0x168
	// Line 630, Address: 0x1986ec, Func Offset: 0x18c
	// Line 628, Address: 0x1986f0, Func Offset: 0x190
	// Line 629, Address: 0x1986f4, Func Offset: 0x194
	// Line 630, Address: 0x198700, Func Offset: 0x1a0
	// Line 629, Address: 0x19870c, Func Offset: 0x1ac
	// Line 630, Address: 0x198710, Func Offset: 0x1b0
	// Line 631, Address: 0x19871c, Func Offset: 0x1bc
	// Line 632, Address: 0x198724, Func Offset: 0x1c4
	// Line 634, Address: 0x198728, Func Offset: 0x1c8
	// Line 633, Address: 0x19872c, Func Offset: 0x1cc
	// Line 632, Address: 0x198730, Func Offset: 0x1d0
	// Line 633, Address: 0x198734, Func Offset: 0x1d4
	// Line 634, Address: 0x198744, Func Offset: 0x1e4
	// Line 636, Address: 0x198768, Func Offset: 0x208
	// Line 634, Address: 0x19876c, Func Offset: 0x20c
	// Line 637, Address: 0x198770, Func Offset: 0x210
	// Line 635, Address: 0x198774, Func Offset: 0x214
	// Line 637, Address: 0x198778, Func Offset: 0x218
	// Line 638, Address: 0x198784, Func Offset: 0x224
	// Line 639, Address: 0x198788, Func Offset: 0x228
	// Func End, Address: 0x1987bc, Func Offset: 0x25c
}

// 
// Start address: 0x1987c0
int EnemyEffectDrawBoardParallelWithWall(float vlist[4], int vnum, float* normal, float* def, float width, float float_height, EnemyTexParameter* tex, unsigned int rgba)
{
	float plist[4];
	<unknown fundamental type (0xa510)>* pk_top;
	<unknown fundamental type (0xa510)>* pk_last;
	int r;
	unsigned long* padr;
	// Line 656, Address: 0x1987c0, Func Offset: 0
	// Line 661, Address: 0x198800, Func Offset: 0x40
	// Line 663, Address: 0x198814, Func Offset: 0x54
	// Line 661, Address: 0x19881c, Func Offset: 0x5c
	// Line 662, Address: 0x198820, Func Offset: 0x60
	// Line 663, Address: 0x198824, Func Offset: 0x64
	// Line 662, Address: 0x198830, Func Offset: 0x70
	// Line 663, Address: 0x198834, Func Offset: 0x74
	// Line 665, Address: 0x198844, Func Offset: 0x84
	// Line 668, Address: 0x198850, Func Offset: 0x90
	// Line 669, Address: 0x198864, Func Offset: 0xa4
	// Line 671, Address: 0x198874, Func Offset: 0xb4
	// Line 672, Address: 0x198880, Func Offset: 0xc0
	// Line 674, Address: 0x198888, Func Offset: 0xc8
	// Line 675, Address: 0x198894, Func Offset: 0xd4
	// Line 676, Address: 0x198898, Func Offset: 0xd8
	// Func End, Address: 0x1988c4, Func Offset: 0x104
}

// 
// Start address: 0x1988d0
int EnemyEffectDrawBoardParallelWithWallSub(float vlist[4], int vnum, float* normal, float* def, float width, float float_height, EnemyTexParameter* tex, unsigned int rgba)
{
	float plist[4];
	<unknown fundamental type (0xa510)>* pk_top;
	<unknown fundamental type (0xa510)>* pk_last;
	int r;
	unsigned long* padr;
	// Line 693, Address: 0x1988d0, Func Offset: 0
	// Line 698, Address: 0x198910, Func Offset: 0x40
	// Line 700, Address: 0x198924, Func Offset: 0x54
	// Line 698, Address: 0x19892c, Func Offset: 0x5c
	// Line 699, Address: 0x198930, Func Offset: 0x60
	// Line 700, Address: 0x198934, Func Offset: 0x64
	// Line 699, Address: 0x198940, Func Offset: 0x70
	// Line 700, Address: 0x198944, Func Offset: 0x74
	// Line 702, Address: 0x198954, Func Offset: 0x84
	// Line 705, Address: 0x198960, Func Offset: 0x90
	// Line 706, Address: 0x198974, Func Offset: 0xa4
	// Line 708, Address: 0x198984, Func Offset: 0xb4
	// Line 709, Address: 0x198990, Func Offset: 0xc0
	// Line 711, Address: 0x198998, Func Offset: 0xc8
	// Line 712, Address: 0x1989a4, Func Offset: 0xd4
	// Line 713, Address: 0x1989a8, Func Offset: 0xd8
	// Func End, Address: 0x1989d4, Func Offset: 0x104
}

// 
// Start address: 0x1989e0
void EnemyEffectDrawBoard(float* center, float* rot, float w, float h, EnemyTexParameter* tex, unsigned int rgba)
{
	sgSpkWork* pkw;
	float* pos;
	float* pos0;
	float* dir;
	float* dirv;
	float* rotv;
	void* tagadr;
	unsigned long* ptex0;
	// Line 726, Address: 0x1989e0, Func Offset: 0
	// Line 732, Address: 0x1989e4, Func Offset: 0x4
	// Line 726, Address: 0x1989e8, Func Offset: 0x8
	// Line 732, Address: 0x198a28, Func Offset: 0x48
	// Line 734, Address: 0x198a48, Func Offset: 0x68
	// Line 732, Address: 0x198a4c, Func Offset: 0x6c
	// Line 737, Address: 0x198a50, Func Offset: 0x70
	// Line 733, Address: 0x198a54, Func Offset: 0x74
	// Line 735, Address: 0x198a58, Func Offset: 0x78
	// Line 737, Address: 0x198a5c, Func Offset: 0x7c
	// Line 738, Address: 0x198a64, Func Offset: 0x84
	// Line 739, Address: 0x198a78, Func Offset: 0x98
	// Line 740, Address: 0x198a84, Func Offset: 0xa4
	// Line 741, Address: 0x198aa0, Func Offset: 0xc0
	// Line 742, Address: 0x198ab8, Func Offset: 0xd8
	// Line 743, Address: 0x198ac4, Func Offset: 0xe4
	// Line 752, Address: 0x198af8, Func Offset: 0x118
	// Line 743, Address: 0x198afc, Func Offset: 0x11c
	// Line 752, Address: 0x198b00, Func Offset: 0x120
	// Line 753, Address: 0x198b10, Func Offset: 0x130
	// Line 754, Address: 0x198b18, Func Offset: 0x138
	// Line 755, Address: 0x198b28, Func Offset: 0x148
	// Line 756, Address: 0x198b3c, Func Offset: 0x15c
	// Line 757, Address: 0x198b50, Func Offset: 0x170
	// Line 758, Address: 0x198b60, Func Offset: 0x180
	// Line 759, Address: 0x198b68, Func Offset: 0x188
	// Line 762, Address: 0x198b88, Func Offset: 0x1a8
	// Line 763, Address: 0x198b9c, Func Offset: 0x1bc
	// Line 766, Address: 0x198bbc, Func Offset: 0x1dc
	// Line 767, Address: 0x198bd0, Func Offset: 0x1f0
	// Line 768, Address: 0x198be4, Func Offset: 0x204
	// Line 771, Address: 0x198c04, Func Offset: 0x224
	// Line 772, Address: 0x198c18, Func Offset: 0x238
	// Line 775, Address: 0x198c38, Func Offset: 0x258
	// Line 778, Address: 0x198c48, Func Offset: 0x268
	// Line 779, Address: 0x198c50, Func Offset: 0x270
	// Line 780, Address: 0x198c58, Func Offset: 0x278
	// Line 781, Address: 0x198c64, Func Offset: 0x284
	// Line 783, Address: 0x198c90, Func Offset: 0x2b0
	// Line 785, Address: 0x198c98, Func Offset: 0x2b8
	// Line 787, Address: 0x198ca0, Func Offset: 0x2c0
	// Line 788, Address: 0x198cb4, Func Offset: 0x2d4
	// Func End, Address: 0x198cec, Func Offset: 0x30c
}

// 
// Start address: 0x198cf0
void EnemyEffectDrawBoardThinEdge2(float* center, float* rot, float w, float h, float margin, EnemyTexParameter* tex, unsigned int rgba1, unsigned int rgba2)
{
	sgSpkWork* pkw;
	float* pos;
	float* dir;
	float* dirv;
	float* rotv;
	float vtx[4];
	void* tagadr;
	unsigned long* ptex0;
	unsigned int rgb01;
	unsigned int rgb02;
	float m2;
	// Line 935, Address: 0x198cf0, Func Offset: 0
	// Line 944, Address: 0x198cf4, Func Offset: 0x4
	// Line 935, Address: 0x198cf8, Func Offset: 0x8
	// Line 944, Address: 0x198d44, Func Offset: 0x54
	// Line 945, Address: 0x198d64, Func Offset: 0x74
	// Line 944, Address: 0x198d68, Func Offset: 0x78
	// Line 949, Address: 0x198d6c, Func Offset: 0x7c
	// Line 946, Address: 0x198d70, Func Offset: 0x80
	// Line 947, Address: 0x198d74, Func Offset: 0x84
	// Line 949, Address: 0x198d78, Func Offset: 0x88
	// Line 950, Address: 0x198d80, Func Offset: 0x90
	// Line 951, Address: 0x198d94, Func Offset: 0xa4
	// Line 952, Address: 0x198da0, Func Offset: 0xb0
	// Line 953, Address: 0x198dbc, Func Offset: 0xcc
	// Line 954, Address: 0x198dd8, Func Offset: 0xe8
	// Line 955, Address: 0x198dec, Func Offset: 0xfc
	// Line 956, Address: 0x198e00, Func Offset: 0x110
	// Line 957, Address: 0x198e18, Func Offset: 0x128
	// Line 958, Address: 0x198e2c, Func Offset: 0x13c
	// Line 959, Address: 0x198e44, Func Offset: 0x154
	// Line 960, Address: 0x198e5c, Func Offset: 0x16c
	// Line 961, Address: 0x198e78, Func Offset: 0x188
	// Line 962, Address: 0x198e94, Func Offset: 0x1a4
	// Line 963, Address: 0x198eb0, Func Offset: 0x1c0
	// Line 964, Address: 0x198ec4, Func Offset: 0x1d4
	// Line 965, Address: 0x198edc, Func Offset: 0x1ec
	// Line 966, Address: 0x198ef4, Func Offset: 0x204
	// Line 967, Address: 0x198f08, Func Offset: 0x218
	// Line 968, Address: 0x198f20, Func Offset: 0x230
	// Line 969, Address: 0x198f38, Func Offset: 0x248
	// Line 970, Address: 0x198f3c, Func Offset: 0x24c
	// Line 969, Address: 0x198f40, Func Offset: 0x250
	// Line 970, Address: 0x198f44, Func Offset: 0x254
	// Line 971, Address: 0x198f48, Func Offset: 0x258
	// Line 972, Address: 0x198f50, Func Offset: 0x260
	// Line 973, Address: 0x198f5c, Func Offset: 0x26c
	// Line 976, Address: 0x198f78, Func Offset: 0x288
	// Line 973, Address: 0x198f7c, Func Offset: 0x28c
	// Line 980, Address: 0x198f80, Func Offset: 0x290
	// Line 976, Address: 0x198f8c, Func Offset: 0x29c
	// Line 980, Address: 0x198f90, Func Offset: 0x2a0
	// Line 976, Address: 0x198f9c, Func Offset: 0x2ac
	// Line 977, Address: 0x198fa8, Func Offset: 0x2b8
	// Line 978, Address: 0x198fac, Func Offset: 0x2bc
	// Line 979, Address: 0x198fb8, Func Offset: 0x2c8
	// Line 980, Address: 0x198fc8, Func Offset: 0x2d8
	// Line 983, Address: 0x198fd0, Func Offset: 0x2e0
	// Line 984, Address: 0x198fd8, Func Offset: 0x2e8
	// Line 987, Address: 0x198ff0, Func Offset: 0x300
	// Line 990, Address: 0x199008, Func Offset: 0x318
	// Line 994, Address: 0x199024, Func Offset: 0x334
	// Line 998, Address: 0x199040, Func Offset: 0x350
	// Line 1002, Address: 0x19905c, Func Offset: 0x36c
	// Line 1005, Address: 0x199074, Func Offset: 0x384
	// Line 1008, Address: 0x19908c, Func Offset: 0x39c
	// Line 1011, Address: 0x1990a8, Func Offset: 0x3b8
	// Line 1014, Address: 0x1990c0, Func Offset: 0x3d0
	// Line 1017, Address: 0x1990dc, Func Offset: 0x3ec
	// Line 1021, Address: 0x1990f8, Func Offset: 0x408
	// Line 1025, Address: 0x199114, Func Offset: 0x424
	// Line 1029, Address: 0x199130, Func Offset: 0x440
	// Line 1032, Address: 0x199148, Func Offset: 0x458
	// Line 1035, Address: 0x199160, Func Offset: 0x470
	// Line 1038, Address: 0x199170, Func Offset: 0x480
	// Line 1039, Address: 0x199178, Func Offset: 0x488
	// Line 1045, Address: 0x199180, Func Offset: 0x490
	// Line 1046, Address: 0x19918c, Func Offset: 0x49c
	// Line 1048, Address: 0x199198, Func Offset: 0x4a8
	// Line 1050, Address: 0x1991a0, Func Offset: 0x4b0
	// Line 1052, Address: 0x1991a8, Func Offset: 0x4b8
	// Line 1053, Address: 0x1991bc, Func Offset: 0x4cc
	// Func End, Address: 0x1991f8, Func Offset: 0x508
}

// 
// Start address: 0x199200
void EnemyEffectDrawParallelogramThinEdge(float* center, float* rot, float w, float h, float left_gap, float right_gap, float margin, EnemyTexParameter* tex, unsigned int rgba)
{
	sgSpkWork* pkw;
	float* pos;
	float* dir;
	float* dirv;
	float* vec;
	float* rotv;
	float vtx[4];
	void* tagadr;
	unsigned long* ptex0;
	unsigned int rgb0;
	float lg;
	float rg;
	float m2;
	// Line 1071, Address: 0x199200, Func Offset: 0
	// Line 1080, Address: 0x199204, Func Offset: 0x4
	// Line 1071, Address: 0x199208, Func Offset: 0x8
	// Line 1080, Address: 0x19925c, Func Offset: 0x5c
	// Line 1081, Address: 0x199284, Func Offset: 0x84
	// Line 1080, Address: 0x199288, Func Offset: 0x88
	// Line 1086, Address: 0x19928c, Func Offset: 0x8c
	// Line 1082, Address: 0x199290, Func Offset: 0x90
	// Line 1083, Address: 0x199294, Func Offset: 0x94
	// Line 1084, Address: 0x199298, Func Offset: 0x98
	// Line 1086, Address: 0x19929c, Func Offset: 0x9c
	// Line 1087, Address: 0x1992a4, Func Offset: 0xa4
	// Line 1088, Address: 0x1992b8, Func Offset: 0xb8
	// Line 1089, Address: 0x1992c4, Func Offset: 0xc4
	// Line 1090, Address: 0x1992e0, Func Offset: 0xe0
	// Line 1091, Address: 0x1992fc, Func Offset: 0xfc
	// Line 1092, Address: 0x199314, Func Offset: 0x114
	// Line 1091, Address: 0x199320, Func Offset: 0x120
	// Line 1092, Address: 0x199324, Func Offset: 0x124
	// Line 1093, Address: 0x199338, Func Offset: 0x138
	// Line 1094, Address: 0x19934c, Func Offset: 0x14c
	// Line 1095, Address: 0x199368, Func Offset: 0x168
	// Line 1096, Address: 0x19937c, Func Offset: 0x17c
	// Line 1097, Address: 0x199398, Func Offset: 0x198
	// Line 1098, Address: 0x1993b0, Func Offset: 0x1b0
	// Line 1099, Address: 0x1993c4, Func Offset: 0x1c4
	// Line 1100, Address: 0x1993e0, Func Offset: 0x1e0
	// Line 1101, Address: 0x1993f8, Func Offset: 0x1f8
	// Line 1102, Address: 0x199414, Func Offset: 0x214
	// Line 1103, Address: 0x19942c, Func Offset: 0x22c
	// Line 1106, Address: 0x19943c, Func Offset: 0x23c
	// Line 1104, Address: 0x199440, Func Offset: 0x240
	// Line 1105, Address: 0x199444, Func Offset: 0x244
	// Line 1106, Address: 0x199448, Func Offset: 0x248
	// Line 1107, Address: 0x199454, Func Offset: 0x254
	// Line 1108, Address: 0x199470, Func Offset: 0x270
	// Line 1109, Address: 0x199484, Func Offset: 0x284
	// Line 1110, Address: 0x1994a0, Func Offset: 0x2a0
	// Line 1111, Address: 0x1994b8, Func Offset: 0x2b8
	// Line 1112, Address: 0x1994d4, Func Offset: 0x2d4
	// Line 1113, Address: 0x1994ec, Func Offset: 0x2ec
	// Line 1114, Address: 0x199500, Func Offset: 0x300
	// Line 1115, Address: 0x19951c, Func Offset: 0x31c
	// Line 1116, Address: 0x199534, Func Offset: 0x334
	// Line 1117, Address: 0x199550, Func Offset: 0x350
	// Line 1118, Address: 0x199568, Func Offset: 0x368
	// Line 1120, Address: 0x19956c, Func Offset: 0x36c
	// Line 1118, Address: 0x199570, Func Offset: 0x370
	// Line 1119, Address: 0x199574, Func Offset: 0x374
	// Line 1121, Address: 0x19957c, Func Offset: 0x37c
	// Line 1122, Address: 0x199580, Func Offset: 0x380
	// Line 1123, Address: 0x19958c, Func Offset: 0x38c
	// Line 1126, Address: 0x1995a8, Func Offset: 0x3a8
	// Line 1123, Address: 0x1995ac, Func Offset: 0x3ac
	// Line 1130, Address: 0x1995b0, Func Offset: 0x3b0
	// Line 1126, Address: 0x1995bc, Func Offset: 0x3bc
	// Line 1130, Address: 0x1995c0, Func Offset: 0x3c0
	// Line 1126, Address: 0x1995cc, Func Offset: 0x3cc
	// Line 1127, Address: 0x1995d8, Func Offset: 0x3d8
	// Line 1128, Address: 0x1995dc, Func Offset: 0x3dc
	// Line 1129, Address: 0x1995e8, Func Offset: 0x3e8
	// Line 1130, Address: 0x1995f8, Func Offset: 0x3f8
	// Line 1133, Address: 0x199600, Func Offset: 0x400
	// Line 1134, Address: 0x199608, Func Offset: 0x408
	// Line 1138, Address: 0x19962c, Func Offset: 0x42c
	// Line 1142, Address: 0x199654, Func Offset: 0x454
	// Line 1146, Address: 0x199674, Func Offset: 0x474
	// Line 1150, Address: 0x199694, Func Offset: 0x494
	// Line 1154, Address: 0x1996c0, Func Offset: 0x4c0
	// Line 1158, Address: 0x1996e8, Func Offset: 0x4e8
	// Line 1162, Address: 0x199710, Func Offset: 0x510
	// Line 1165, Address: 0x19972c, Func Offset: 0x52c
	// Line 1169, Address: 0x199758, Func Offset: 0x558
	// Line 1172, Address: 0x199774, Func Offset: 0x574
	// Line 1176, Address: 0x1997a0, Func Offset: 0x5a0
	// Line 1180, Address: 0x1997cc, Func Offset: 0x5cc
	// Line 1184, Address: 0x1997ec, Func Offset: 0x5ec
	// Line 1188, Address: 0x199818, Func Offset: 0x618
	// Line 1192, Address: 0x19983c, Func Offset: 0x63c
	// Line 1195, Address: 0x19984c, Func Offset: 0x64c
	// Line 1196, Address: 0x199854, Func Offset: 0x654
	// Line 1202, Address: 0x19985c, Func Offset: 0x65c
	// Line 1203, Address: 0x199868, Func Offset: 0x668
	// Line 1205, Address: 0x199874, Func Offset: 0x674
	// Line 1206, Address: 0x19987c, Func Offset: 0x67c
	// Line 1207, Address: 0x199880, Func Offset: 0x680
	// Line 1209, Address: 0x199888, Func Offset: 0x688
	// Line 1210, Address: 0x19989c, Func Offset: 0x69c
	// Func End, Address: 0x1998e4, Func Offset: 0x6e4
}

// 
// Start address: 0x1998f0
void EnemyEffectDrawBillboard(float* center, float w, float h, EnemyTexParameter* tex, unsigned int rgba, int sotenvid)
{
	sgSpkWork* pkw;
	float vtx[4];
	float* vec;
	float q;
	int f;
	void* tagadr;
	unsigned long* ppkt;
	unsigned long* ptex0;
	// Line 1223, Address: 0x1998f0, Func Offset: 0
	// Line 1231, Address: 0x1998f4, Func Offset: 0x4
	// Line 1223, Address: 0x1998f8, Func Offset: 0x8
	// Line 1231, Address: 0x199934, Func Offset: 0x44
	// Line 1232, Address: 0x199954, Func Offset: 0x64
	// Line 1234, Address: 0x199958, Func Offset: 0x68
	// Line 1235, Address: 0x199974, Func Offset: 0x84
	// Line 1236, Address: 0x199998, Func Offset: 0xa8
	// Line 1237, Address: 0x1999b0, Func Offset: 0xc0
	// Line 1238, Address: 0x1999b8, Func Offset: 0xc8
	// Line 1241, Address: 0x1999d4, Func Offset: 0xe4
	// Line 1244, Address: 0x1999e4, Func Offset: 0xf4
	// Line 1245, Address: 0x1999e8, Func Offset: 0xf8
	// Line 1247, Address: 0x1999f0, Func Offset: 0x100
	// Line 1248, Address: 0x1999f8, Func Offset: 0x108
	// Line 1249, Address: 0x199a0c, Func Offset: 0x11c
	// Line 1254, Address: 0x199a30, Func Offset: 0x140
	// Line 1259, Address: 0x199a34, Func Offset: 0x144
	// Line 1249, Address: 0x199a38, Func Offset: 0x148
	// Line 1254, Address: 0x199a3c, Func Offset: 0x14c
	// Line 1259, Address: 0x199a40, Func Offset: 0x150
	// Line 1254, Address: 0x199a44, Func Offset: 0x154
	// Line 1260, Address: 0x199a48, Func Offset: 0x158
	// Line 1254, Address: 0x199a4c, Func Offset: 0x15c
	// Line 1260, Address: 0x199a50, Func Offset: 0x160
	// Line 1254, Address: 0x199a54, Func Offset: 0x164
	// Line 1260, Address: 0x199a58, Func Offset: 0x168
	// Line 1255, Address: 0x199a5c, Func Offset: 0x16c
	// Line 1256, Address: 0x199a60, Func Offset: 0x170
	// Line 1257, Address: 0x199a64, Func Offset: 0x174
	// Line 1258, Address: 0x199a68, Func Offset: 0x178
	// Line 1260, Address: 0x199a70, Func Offset: 0x180
	// Line 1261, Address: 0x199a7c, Func Offset: 0x18c
	// Line 1262, Address: 0x199aa8, Func Offset: 0x1b8
	// Line 1261, Address: 0x199ab0, Func Offset: 0x1c0
	// Line 1262, Address: 0x199ab4, Func Offset: 0x1c4
	// Line 1263, Address: 0x199ac0, Func Offset: 0x1d0
	// Line 1264, Address: 0x199aec, Func Offset: 0x1fc
	// Line 1265, Address: 0x199af4, Func Offset: 0x204
	// Line 1266, Address: 0x199b00, Func Offset: 0x210
	// Line 1273, Address: 0x199b34, Func Offset: 0x244
	// Line 1278, Address: 0x199b38, Func Offset: 0x248
	// Line 1266, Address: 0x199b3c, Func Offset: 0x24c
	// Line 1273, Address: 0x199b40, Func Offset: 0x250
	// Line 1278, Address: 0x199b44, Func Offset: 0x254
	// Line 1273, Address: 0x199b48, Func Offset: 0x258
	// Line 1279, Address: 0x199b4c, Func Offset: 0x25c
	// Line 1273, Address: 0x199b50, Func Offset: 0x260
	// Line 1279, Address: 0x199b54, Func Offset: 0x264
	// Line 1273, Address: 0x199b58, Func Offset: 0x268
	// Line 1279, Address: 0x199b5c, Func Offset: 0x26c
	// Line 1274, Address: 0x199b60, Func Offset: 0x270
	// Line 1275, Address: 0x199b64, Func Offset: 0x274
	// Line 1276, Address: 0x199b68, Func Offset: 0x278
	// Line 1277, Address: 0x199b6c, Func Offset: 0x27c
	// Line 1279, Address: 0x199b74, Func Offset: 0x284
	// Line 1280, Address: 0x199b80, Func Offset: 0x290
	// Line 1281, Address: 0x199bac, Func Offset: 0x2bc
	// Line 1280, Address: 0x199bb0, Func Offset: 0x2c0
	// Line 1281, Address: 0x199bb4, Func Offset: 0x2c4
	// Line 1282, Address: 0x199bc4, Func Offset: 0x2d4
	// Line 1283, Address: 0x199bf0, Func Offset: 0x300
	// Line 1282, Address: 0x199bf4, Func Offset: 0x304
	// Line 1283, Address: 0x199bf8, Func Offset: 0x308
	// Line 1284, Address: 0x199c08, Func Offset: 0x318
	// Line 1285, Address: 0x199c34, Func Offset: 0x344
	// Line 1284, Address: 0x199c3c, Func Offset: 0x34c
	// Line 1285, Address: 0x199c40, Func Offset: 0x350
	// Line 1286, Address: 0x199c4c, Func Offset: 0x35c
	// Line 1287, Address: 0x199c78, Func Offset: 0x388
	// Line 1288, Address: 0x199c84, Func Offset: 0x394
	// Line 1289, Address: 0x199c88, Func Offset: 0x398
	// Line 1290, Address: 0x199c90, Func Offset: 0x3a0
	// Line 1291, Address: 0x199c98, Func Offset: 0x3a8
	// Line 1292, Address: 0x199ca4, Func Offset: 0x3b4
	// Line 1293, Address: 0x199cb0, Func Offset: 0x3c0
	// Line 1296, Address: 0x199cd8, Func Offset: 0x3e8
	// Line 1297, Address: 0x199cec, Func Offset: 0x3fc
	// Func End, Address: 0x199d20, Func Offset: 0x430
}

// 
// Start address: 0x199d20
void EnemyEffectDrawBlinds(float center[4], float w, int div, EnemyTexParameter* tex, unsigned int rgba, int sotenvid)
{
	sgSpkWork* pkw;
	float vtx[4];
	float tvtx[4];
	float q;
	float t;
	float tv;
	int i;
	int f;
	void* tagadr;
	unsigned long* ppkt;
	unsigned long* ptex0;
	// Line 1310, Address: 0x199d20, Func Offset: 0
	// Line 1317, Address: 0x199d48, Func Offset: 0x28
	// Line 1310, Address: 0x199d4c, Func Offset: 0x2c
	// Line 1317, Address: 0x199d70, Func Offset: 0x50
	// Line 1318, Address: 0x199d78, Func Offset: 0x58
	// Line 1319, Address: 0x199d9c, Func Offset: 0x7c
	// Line 1320, Address: 0x199da4, Func Offset: 0x84
	// Line 1321, Address: 0x199da8, Func Offset: 0x88
	// Line 1322, Address: 0x199db0, Func Offset: 0x90
	// Line 1326, Address: 0x199dcc, Func Offset: 0xac
	// Line 1327, Address: 0x199dd0, Func Offset: 0xb0
	// Line 1328, Address: 0x199de4, Func Offset: 0xc4
	// Line 1331, Address: 0x199df4, Func Offset: 0xd4
	// Line 1332, Address: 0x199e00, Func Offset: 0xe0
	// Line 1335, Address: 0x199e20, Func Offset: 0x100
	// Line 1341, Address: 0x199e28, Func Offset: 0x108
	// Line 1335, Address: 0x199e44, Func Offset: 0x124
	// Line 1336, Address: 0x199e50, Func Offset: 0x130
	// Line 1338, Address: 0x199e54, Func Offset: 0x134
	// Line 1339, Address: 0x199e58, Func Offset: 0x138
	// Line 1340, Address: 0x199e60, Func Offset: 0x140
	// Line 1341, Address: 0x199e68, Func Offset: 0x148
	// Line 1346, Address: 0x199e70, Func Offset: 0x150
	// Line 1345, Address: 0x199e74, Func Offset: 0x154
	// Line 1346, Address: 0x199e78, Func Offset: 0x158
	// Line 1347, Address: 0x199e7c, Func Offset: 0x15c
	// Line 1348, Address: 0x199e80, Func Offset: 0x160
	// Line 1346, Address: 0x199e84, Func Offset: 0x164
	// Line 1348, Address: 0x199e90, Func Offset: 0x170
	// Line 1349, Address: 0x199e98, Func Offset: 0x178
	// Line 1350, Address: 0x199e9c, Func Offset: 0x17c
	// Line 1349, Address: 0x199ea0, Func Offset: 0x180
	// Line 1351, Address: 0x199ea8, Func Offset: 0x188
	// Line 1353, Address: 0x199eb4, Func Offset: 0x194
	// Line 1352, Address: 0x199eb8, Func Offset: 0x198
	// Line 1353, Address: 0x199ec0, Func Offset: 0x1a0
	// Line 1352, Address: 0x199ecc, Func Offset: 0x1ac
	// Line 1353, Address: 0x199ed0, Func Offset: 0x1b0
	// Line 1354, Address: 0x199edc, Func Offset: 0x1bc
	// Line 1355, Address: 0x199f08, Func Offset: 0x1e8
	// Line 1354, Address: 0x199f10, Func Offset: 0x1f0
	// Line 1355, Address: 0x199f14, Func Offset: 0x1f4
	// Line 1356, Address: 0x199f28, Func Offset: 0x208
	// Line 1358, Address: 0x199f50, Func Offset: 0x230
	// Line 1356, Address: 0x199f54, Func Offset: 0x234
	// Line 1359, Address: 0x199f58, Func Offset: 0x238
	// Line 1357, Address: 0x199f5c, Func Offset: 0x23c
	// Line 1359, Address: 0x199f60, Func Offset: 0x240
	// Line 1360, Address: 0x199f6c, Func Offset: 0x24c
	// Line 1361, Address: 0x199f78, Func Offset: 0x258
	// Line 1360, Address: 0x199f7c, Func Offset: 0x25c
	// Line 1361, Address: 0x199f84, Func Offset: 0x264
	// Line 1362, Address: 0x199f8c, Func Offset: 0x26c
	// Line 1363, Address: 0x199f94, Func Offset: 0x274
	// Line 1364, Address: 0x199fa0, Func Offset: 0x280
	// Line 1365, Address: 0x199fb0, Func Offset: 0x290
	// Line 1367, Address: 0x199fdc, Func Offset: 0x2bc
	// Line 1368, Address: 0x199fe0, Func Offset: 0x2c0
	// Line 1369, Address: 0x199ffc, Func Offset: 0x2dc
	// Func End, Address: 0x19a03c, Func Offset: 0x31c
}

// 
// Start address: 0x19a040
void EnemyEffectDrawString(float* pos1, float* pos2, float width, int dir, float alpha, EnemyTexParameter* tex)
{
	sgSpkWork* pkw;
	float tpos[4];
	float* vec;
	unsigned int color;
	void* tagadr;
	unsigned long* ptex0;
	// Line 1695, Address: 0x19a040, Func Offset: 0
	// Line 1702, Address: 0x19a048, Func Offset: 0x8
	// Line 1695, Address: 0x19a04c, Func Offset: 0xc
	// Line 1702, Address: 0x19a054, Func Offset: 0x14
	// Line 1695, Address: 0x19a058, Func Offset: 0x18
	// Line 1702, Address: 0x19a078, Func Offset: 0x38
	// Line 1703, Address: 0x19a080, Func Offset: 0x40
	// Line 1704, Address: 0x19a090, Func Offset: 0x50
	// Line 1703, Address: 0x19a094, Func Offset: 0x54
	// Line 1704, Address: 0x19a098, Func Offset: 0x58
	// Line 1703, Address: 0x19a09c, Func Offset: 0x5c
	// Line 1704, Address: 0x19a0a4, Func Offset: 0x64
	// Line 1703, Address: 0x19a0b4, Func Offset: 0x74
	// Line 1704, Address: 0x19a0b8, Func Offset: 0x78
	// Line 1705, Address: 0x19a0c0, Func Offset: 0x80
	// Line 1703, Address: 0x19a0c4, Func Offset: 0x84
	// Line 1706, Address: 0x19a0cc, Func Offset: 0x8c
	// Line 1707, Address: 0x19a0d4, Func Offset: 0x94
	// Line 1708, Address: 0x19a0e0, Func Offset: 0xa0
	// Line 1709, Address: 0x19a0ec, Func Offset: 0xac
	// Line 1710, Address: 0x19a0f8, Func Offset: 0xb8
	// Line 1711, Address: 0x19a10c, Func Offset: 0xcc
	// Line 1712, Address: 0x19a134, Func Offset: 0xf4
	// Line 1713, Address: 0x19a138, Func Offset: 0xf8
	// Line 1715, Address: 0x19a14c, Func Offset: 0x10c
	// Line 1716, Address: 0x19a150, Func Offset: 0x110
	// Line 1717, Address: 0x19a15c, Func Offset: 0x11c
	// Line 1718, Address: 0x19a198, Func Offset: 0x158
	// Line 1720, Address: 0x19a1a0, Func Offset: 0x160
	// Line 1721, Address: 0x19a1a4, Func Offset: 0x164
	// Line 1724, Address: 0x19a1a8, Func Offset: 0x168
	// Line 1725, Address: 0x19a1b4, Func Offset: 0x174
	// Line 1726, Address: 0x19a1c8, Func Offset: 0x188
	// Line 1727, Address: 0x19a1dc, Func Offset: 0x19c
	// Line 1728, Address: 0x19a1e8, Func Offset: 0x1a8
	// Line 1729, Address: 0x19a200, Func Offset: 0x1c0
	// Line 1731, Address: 0x19a218, Func Offset: 0x1d8
	// Line 1732, Address: 0x19a224, Func Offset: 0x1e4
	// Line 1741, Address: 0x19a258, Func Offset: 0x218
	// Line 1732, Address: 0x19a25c, Func Offset: 0x21c
	// Line 1741, Address: 0x19a260, Func Offset: 0x220
	// Line 1742, Address: 0x19a270, Func Offset: 0x230
	// Line 1743, Address: 0x19a274, Func Offset: 0x234
	// Line 1744, Address: 0x19a280, Func Offset: 0x240
	// Line 1745, Address: 0x19a290, Func Offset: 0x250
	// Line 1746, Address: 0x19a298, Func Offset: 0x258
	// Line 1749, Address: 0x19a2b8, Func Offset: 0x278
	// Line 1752, Address: 0x19a2d4, Func Offset: 0x294
	// Line 1755, Address: 0x19a2f0, Func Offset: 0x2b0
	// Line 1758, Address: 0x19a30c, Func Offset: 0x2cc
	// Line 1761, Address: 0x19a31c, Func Offset: 0x2dc
	// Line 1762, Address: 0x19a324, Func Offset: 0x2e4
	// Line 1763, Address: 0x19a32c, Func Offset: 0x2ec
	// Line 1764, Address: 0x19a338, Func Offset: 0x2f8
	// Line 1767, Address: 0x19a360, Func Offset: 0x320
	// Line 1769, Address: 0x19a368, Func Offset: 0x328
	// Line 1771, Address: 0x19a370, Func Offset: 0x330
	// Line 1772, Address: 0x19a384, Func Offset: 0x344
	// Func End, Address: 0x19a3b0, Func Offset: 0x370
}

// 
// Start address: 0x19a3b0
void EnemyEffectDrawSnappedString(float* pos1, float* pos2, float width, int dir, float snap_rate, float alpha, EnemyTexParameter* tex)
{
	sgSpkWork* pkw;
	float tpos[4];
	float* vec;
	unsigned int color;
	void* tagadr;
	unsigned long* ptex0;
	// Line 1786, Address: 0x19a3b0, Func Offset: 0
	// Line 1793, Address: 0x19a3b8, Func Offset: 0x8
	// Line 1786, Address: 0x19a3bc, Func Offset: 0xc
	// Line 1793, Address: 0x19a3c4, Func Offset: 0x14
	// Line 1786, Address: 0x19a3c8, Func Offset: 0x18
	// Line 1793, Address: 0x19a3f4, Func Offset: 0x44
	// Line 1794, Address: 0x19a3fc, Func Offset: 0x4c
	// Line 1795, Address: 0x19a40c, Func Offset: 0x5c
	// Line 1794, Address: 0x19a410, Func Offset: 0x60
	// Line 1795, Address: 0x19a414, Func Offset: 0x64
	// Line 1794, Address: 0x19a418, Func Offset: 0x68
	// Line 1795, Address: 0x19a420, Func Offset: 0x70
	// Line 1794, Address: 0x19a430, Func Offset: 0x80
	// Line 1795, Address: 0x19a434, Func Offset: 0x84
	// Line 1796, Address: 0x19a43c, Func Offset: 0x8c
	// Line 1794, Address: 0x19a440, Func Offset: 0x90
	// Line 1797, Address: 0x19a448, Func Offset: 0x98
	// Line 1798, Address: 0x19a450, Func Offset: 0xa0
	// Line 1799, Address: 0x19a45c, Func Offset: 0xac
	// Line 1800, Address: 0x19a468, Func Offset: 0xb8
	// Line 1801, Address: 0x19a474, Func Offset: 0xc4
	// Line 1802, Address: 0x19a488, Func Offset: 0xd8
	// Line 1804, Address: 0x19a4b0, Func Offset: 0x100
	// Line 1806, Address: 0x19a4c4, Func Offset: 0x114
	// Line 1807, Address: 0x19a4c8, Func Offset: 0x118
	// Line 1808, Address: 0x19a4d4, Func Offset: 0x124
	// Line 1809, Address: 0x19a510, Func Offset: 0x160
	// Line 1811, Address: 0x19a518, Func Offset: 0x168
	// Line 1812, Address: 0x19a51c, Func Offset: 0x16c
	// Line 1815, Address: 0x19a520, Func Offset: 0x170
	// Line 1816, Address: 0x19a52c, Func Offset: 0x17c
	// Line 1817, Address: 0x19a540, Func Offset: 0x190
	// Line 1818, Address: 0x19a554, Func Offset: 0x1a4
	// Line 1819, Address: 0x19a560, Func Offset: 0x1b0
	// Line 1820, Address: 0x19a578, Func Offset: 0x1c8
	// Line 1822, Address: 0x19a590, Func Offset: 0x1e0
	// Line 1823, Address: 0x19a59c, Func Offset: 0x1ec
	// Line 1826, Address: 0x19a5b0, Func Offset: 0x200
	// Line 1823, Address: 0x19a5b4, Func Offset: 0x204
	// Line 1826, Address: 0x19a5b8, Func Offset: 0x208
	// Line 1827, Address: 0x19a5c8, Func Offset: 0x218
	// Line 1828, Address: 0x19a5cc, Func Offset: 0x21c
	// Line 1829, Address: 0x19a5d8, Func Offset: 0x228
	// Line 1830, Address: 0x19a5e8, Func Offset: 0x238
	// Line 1831, Address: 0x19a5f0, Func Offset: 0x240
	// Line 1838, Address: 0x19a620, Func Offset: 0x270
	// Line 1841, Address: 0x19a640, Func Offset: 0x290
	// Line 1844, Address: 0x19a65c, Func Offset: 0x2ac
	// Line 1845, Address: 0x19a674, Func Offset: 0x2c4
	// Line 1844, Address: 0x19a678, Func Offset: 0x2c8
	// Line 1845, Address: 0x19a67c, Func Offset: 0x2cc
	// Line 1846, Address: 0x19a6a4, Func Offset: 0x2f4
	// Line 1849, Address: 0x19a6cc, Func Offset: 0x31c
	// Line 1850, Address: 0x19a6f8, Func Offset: 0x348
	// Line 1853, Address: 0x19a724, Func Offset: 0x374
	// Line 1854, Address: 0x19a728, Func Offset: 0x378
	// Line 1853, Address: 0x19a72c, Func Offset: 0x37c
	// Line 1854, Address: 0x19a738, Func Offset: 0x388
	// Line 1855, Address: 0x19a760, Func Offset: 0x3b0
	// Line 1858, Address: 0x19a788, Func Offset: 0x3d8
	// Line 1859, Address: 0x19a7b4, Func Offset: 0x404
	// Line 1862, Address: 0x19a7e0, Func Offset: 0x430
	// Line 1865, Address: 0x19a7fc, Func Offset: 0x44c
	// Line 1868, Address: 0x19a818, Func Offset: 0x468
	// Line 1871, Address: 0x19a828, Func Offset: 0x478
	// Line 1872, Address: 0x19a830, Func Offset: 0x480
	// Line 1873, Address: 0x19a838, Func Offset: 0x488
	// Line 1874, Address: 0x19a844, Func Offset: 0x494
	// Line 1877, Address: 0x19a86c, Func Offset: 0x4bc
	// Line 1878, Address: 0x19a874, Func Offset: 0x4c4
	// Line 1879, Address: 0x19a878, Func Offset: 0x4c8
	// Line 1881, Address: 0x19a880, Func Offset: 0x4d0
	// Line 1882, Address: 0x19a894, Func Offset: 0x4e4
	// Func End, Address: 0x19a8c8, Func Offset: 0x518
}

// 
// Start address: 0x19a8d0
void draw_divide_texture(float pvtx[4], int width_div, int height_div, EnemyTexParameter* tex, float* alpha, int sheet)
{
	sgSpkWork* pkw;
	int x;
	int y;
	int i;
	unsigned int color;
	void* tagadr;
	unsigned long* ptex0;
	unsigned long* pline;
	unsigned long* pbu;
	unsigned long* pbub;
	float pvt[4];
	float s;
	float t;
	// Line 1894, Address: 0x19a8d0, Func Offset: 0
	// Line 1904, Address: 0x19a8f4, Func Offset: 0x24
	// Line 1894, Address: 0x19a8f8, Func Offset: 0x28
	// Line 1904, Address: 0x19a90c, Func Offset: 0x3c
	// Line 1894, Address: 0x19a910, Func Offset: 0x40
	// Line 1904, Address: 0x19a914, Func Offset: 0x44
	// Line 1907, Address: 0x19a930, Func Offset: 0x60
	// Line 1908, Address: 0x19a93c, Func Offset: 0x6c
	// Line 1911, Address: 0x19a958, Func Offset: 0x88
	// Line 1913, Address: 0x19a97c, Func Offset: 0xac
	// Line 1912, Address: 0x19a980, Func Offset: 0xb0
	// Line 1911, Address: 0x19a984, Func Offset: 0xb4
	// Line 1914, Address: 0x19a988, Func Offset: 0xb8
	// Line 1915, Address: 0x19a98c, Func Offset: 0xbc
	// Line 1912, Address: 0x19a994, Func Offset: 0xc4
	// Line 1913, Address: 0x19a998, Func Offset: 0xc8
	// Line 1915, Address: 0x19a99c, Func Offset: 0xcc
	// Line 1911, Address: 0x19a9ac, Func Offset: 0xdc
	// Line 1913, Address: 0x19a9b0, Func Offset: 0xe0
	// Line 1911, Address: 0x19a9c0, Func Offset: 0xf0
	// Line 1914, Address: 0x19a9cc, Func Offset: 0xfc
	// Line 1915, Address: 0x19a9e0, Func Offset: 0x110
	// Line 1918, Address: 0x19a9e8, Func Offset: 0x118
	// Line 1920, Address: 0x19a9f0, Func Offset: 0x120
	// Line 1921, Address: 0x19a9f8, Func Offset: 0x128
	// Line 1922, Address: 0x19aa00, Func Offset: 0x130
	// Line 1923, Address: 0x19aa08, Func Offset: 0x138
	// Line 1922, Address: 0x19aa0c, Func Offset: 0x13c
	// Line 1923, Address: 0x19aa2c, Func Offset: 0x15c
	// Line 1924, Address: 0x19aa38, Func Offset: 0x168
	// Line 1925, Address: 0x19aa64, Func Offset: 0x194
	// Line 1926, Address: 0x19aa6c, Func Offset: 0x19c
	// Line 1927, Address: 0x19aa80, Func Offset: 0x1b0
	// Line 1928, Address: 0x19aa94, Func Offset: 0x1c4
	// Line 1929, Address: 0x19aaa4, Func Offset: 0x1d4
	// Line 1930, Address: 0x19aab8, Func Offset: 0x1e8
	// Line 1931, Address: 0x19aacc, Func Offset: 0x1fc
	// Line 1932, Address: 0x19aae0, Func Offset: 0x210
	// Line 1933, Address: 0x19aaf4, Func Offset: 0x224
	// Line 1935, Address: 0x19aaf8, Func Offset: 0x228
	// Line 1939, Address: 0x19ab20, Func Offset: 0x250
	// Line 1940, Address: 0x19ab38, Func Offset: 0x268
	// Line 1941, Address: 0x19ab4c, Func Offset: 0x27c
	// Line 1942, Address: 0x19ab60, Func Offset: 0x290
	// Line 1944, Address: 0x19ab70, Func Offset: 0x2a0
	// Line 1945, Address: 0x19ab78, Func Offset: 0x2a8
	// Line 1950, Address: 0x19ab98, Func Offset: 0x2c8
	// Line 1951, Address: 0x19ab9c, Func Offset: 0x2cc
	// Line 1952, Address: 0x19aba0, Func Offset: 0x2d0
	// Line 1950, Address: 0x19aba4, Func Offset: 0x2d4
	// Line 1952, Address: 0x19abac, Func Offset: 0x2dc
	// Line 1953, Address: 0x19abbc, Func Offset: 0x2ec
	// Line 1954, Address: 0x19abcc, Func Offset: 0x2fc
	// Line 1957, Address: 0x19abdc, Func Offset: 0x30c
	// Line 1958, Address: 0x19abe4, Func Offset: 0x314
	// Line 1959, Address: 0x19abec, Func Offset: 0x31c
	// Line 1960, Address: 0x19abf8, Func Offset: 0x328
	// Line 1962, Address: 0x19ac04, Func Offset: 0x334
	// Line 1964, Address: 0x19ac10, Func Offset: 0x340
	// Line 1965, Address: 0x19ac1c, Func Offset: 0x34c
	// Line 1968, Address: 0x19ac38, Func Offset: 0x368
	// Line 1971, Address: 0x19ac6c, Func Offset: 0x39c
	// Line 1970, Address: 0x19ac70, Func Offset: 0x3a0
	// Line 1968, Address: 0x19ac74, Func Offset: 0x3a4
	// Line 1972, Address: 0x19ac78, Func Offset: 0x3a8
	// Line 1973, Address: 0x19ac7c, Func Offset: 0x3ac
	// Line 1970, Address: 0x19ac84, Func Offset: 0x3b4
	// Line 1971, Address: 0x19ac88, Func Offset: 0x3b8
	// Line 1973, Address: 0x19ac8c, Func Offset: 0x3bc
	// Line 1968, Address: 0x19ac9c, Func Offset: 0x3cc
	// Line 1971, Address: 0x19aca0, Func Offset: 0x3d0
	// Line 1968, Address: 0x19acb0, Func Offset: 0x3e0
	// Line 1972, Address: 0x19acbc, Func Offset: 0x3ec
	// Line 1973, Address: 0x19acd0, Func Offset: 0x400
	// Line 1976, Address: 0x19acd8, Func Offset: 0x408
	// Line 1977, Address: 0x19ace0, Func Offset: 0x410
	// Line 1978, Address: 0x19ace8, Func Offset: 0x418
	// Line 1979, Address: 0x19acf0, Func Offset: 0x420
	// Line 1980, Address: 0x19acfc, Func Offset: 0x42c
	// Line 1981, Address: 0x19ad04, Func Offset: 0x434
	// Line 1982, Address: 0x19ad18, Func Offset: 0x448
	// Line 1983, Address: 0x19ad2c, Func Offset: 0x45c
	// Line 1984, Address: 0x19ad3c, Func Offset: 0x46c
	// Line 1985, Address: 0x19ad50, Func Offset: 0x480
	// Line 1986, Address: 0x19ad64, Func Offset: 0x494
	// Line 1987, Address: 0x19ad78, Func Offset: 0x4a8
	// Line 1988, Address: 0x19ad8c, Func Offset: 0x4bc
	// Line 1990, Address: 0x19ad90, Func Offset: 0x4c0
	// Line 1993, Address: 0x19ad98, Func Offset: 0x4c8
	// Line 1989, Address: 0x19ad9c, Func Offset: 0x4cc
	// Line 1990, Address: 0x19ada0, Func Offset: 0x4d0
	// Line 1991, Address: 0x19adac, Func Offset: 0x4dc
	// Line 1992, Address: 0x19adc0, Func Offset: 0x4f0
	// Line 1993, Address: 0x19add0, Func Offset: 0x500
	// Line 1994, Address: 0x19ade8, Func Offset: 0x518
	// Line 1995, Address: 0x19adfc, Func Offset: 0x52c
	// Line 1996, Address: 0x19ae10, Func Offset: 0x540
	// Line 1998, Address: 0x19ae24, Func Offset: 0x554
	// Line 1999, Address: 0x19ae28, Func Offset: 0x558
	// Line 2000, Address: 0x19ae2c, Func Offset: 0x55c
	// Line 2001, Address: 0x19ae3c, Func Offset: 0x56c
	// Line 2002, Address: 0x19ae4c, Func Offset: 0x57c
	// Line 2003, Address: 0x19ae54, Func Offset: 0x584
	// Line 2004, Address: 0x19ae5c, Func Offset: 0x58c
	// Line 2006, Address: 0x19ae68, Func Offset: 0x598
	// Line 2007, Address: 0x19ae74, Func Offset: 0x5a4
	// Line 2009, Address: 0x19ae94, Func Offset: 0x5c4
	// Line 2011, Address: 0x19ae9c, Func Offset: 0x5cc
	// Line 2012, Address: 0x19aea0, Func Offset: 0x5d0
	// Line 2015, Address: 0x19aea8, Func Offset: 0x5d8
	// Line 2016, Address: 0x19aeb4, Func Offset: 0x5e4
	// Func End, Address: 0x19aee8, Func Offset: 0x618
}

// 
// Start address: 0x19aef0
void EnemyEffectDrawTexture(float* center, float* normal, float* width, float* height, int width_div, int height_div, float* alpha, EnemyTexParameter* tex, int sheet)
{
	float* cpos;
	float* pos;
	float* vec;
	float* vertical;
	float* horizontal;
	float pvtx[4];
	float pvt[4];
	int x;
	int y;
	// Line 2033, Address: 0x19aef0, Func Offset: 0
	// Line 2037, Address: 0x19aef4, Func Offset: 0x4
	// Line 2033, Address: 0x19aef8, Func Offset: 0x8
	// Line 2042, Address: 0x19af18, Func Offset: 0x28
	// Line 2033, Address: 0x19af1c, Func Offset: 0x2c
	// Line 2042, Address: 0x19af30, Func Offset: 0x40
	// Line 2037, Address: 0x19af4c, Func Offset: 0x5c
	// Line 2038, Address: 0x19af64, Func Offset: 0x74
	// Line 2037, Address: 0x19af68, Func Offset: 0x78
	// Line 2039, Address: 0x19af6c, Func Offset: 0x7c
	// Line 2040, Address: 0x19af70, Func Offset: 0x80
	// Line 2042, Address: 0x19af74, Func Offset: 0x84
	// Line 2045, Address: 0x19af80, Func Offset: 0x90
	// Line 2046, Address: 0x19afa4, Func Offset: 0xb4
	// Line 2048, Address: 0x19afbc, Func Offset: 0xcc
	// Line 2049, Address: 0x19afc8, Func Offset: 0xd8
	// Line 2050, Address: 0x19afd4, Func Offset: 0xe4
	// Line 2051, Address: 0x19afe4, Func Offset: 0xf4
	// Line 2052, Address: 0x19aff4, Func Offset: 0x104
	// Line 2053, Address: 0x19aff8, Func Offset: 0x108
	// Line 2054, Address: 0x19b000, Func Offset: 0x110
	// Line 2055, Address: 0x19b02c, Func Offset: 0x13c
	// Line 2056, Address: 0x19b040, Func Offset: 0x150
	// Line 2057, Address: 0x19b048, Func Offset: 0x158
	// Line 2058, Address: 0x19b074, Func Offset: 0x184
	// Line 2060, Address: 0x19b088, Func Offset: 0x198
	// Line 2059, Address: 0x19b08c, Func Offset: 0x19c
	// Line 2060, Address: 0x19b090, Func Offset: 0x1a0
	// Line 2061, Address: 0x19b09c, Func Offset: 0x1ac
	// Line 2063, Address: 0x19b0ac, Func Offset: 0x1bc
	// Line 2065, Address: 0x19b0c8, Func Offset: 0x1d8
	// Line 2066, Address: 0x19b0d4, Func Offset: 0x1e4
	// Line 2067, Address: 0x19b0e8, Func Offset: 0x1f8
	// Func End, Address: 0x19b118, Func Offset: 0x228
}

// 
// Start address: 0x19b120
void EnemyEffectDrawTextureOnCylinder(float* center, float* normal, float* c_center, float* width, float* height, int width_div, int height_div, float* alpha, EnemyTexParameter* tex, int sheet)
{
	float* cpos;
	float* pos;
	float* tpos;
	float* vec;
	float* vertical;
	float* horizontal;
	float pvtx[4];
	float pvt[4];
	int x;
	int y;
	// Line 2086, Address: 0x19b120, Func Offset: 0
	// Line 2090, Address: 0x19b124, Func Offset: 0x4
	// Line 2086, Address: 0x19b128, Func Offset: 0x8
	// Line 2096, Address: 0x19b148, Func Offset: 0x28
	// Line 2086, Address: 0x19b14c, Func Offset: 0x2c
	// Line 2096, Address: 0x19b168, Func Offset: 0x48
	// Line 2090, Address: 0x19b17c, Func Offset: 0x5c
	// Line 2091, Address: 0x19b194, Func Offset: 0x74
	// Line 2090, Address: 0x19b198, Func Offset: 0x78
	// Line 2093, Address: 0x19b19c, Func Offset: 0x7c
	// Line 2091, Address: 0x19b1a0, Func Offset: 0x80
	// Line 2094, Address: 0x19b1a4, Func Offset: 0x84
	// Line 2092, Address: 0x19b1a8, Func Offset: 0x88
	// Line 2095, Address: 0x19b1ac, Func Offset: 0x8c
	// Line 2096, Address: 0x19b1b0, Func Offset: 0x90
	// Line 2099, Address: 0x19b1bc, Func Offset: 0x9c
	// Line 2100, Address: 0x19b1e0, Func Offset: 0xc0
	// Line 2102, Address: 0x19b1f8, Func Offset: 0xd8
	// Line 2103, Address: 0x19b204, Func Offset: 0xe4
	// Line 2104, Address: 0x19b210, Func Offset: 0xf0
	// Line 2105, Address: 0x19b220, Func Offset: 0x100
	// Line 2107, Address: 0x19b230, Func Offset: 0x110
	// Line 2108, Address: 0x19b240, Func Offset: 0x120
	// Line 2109, Address: 0x19b26c, Func Offset: 0x14c
	// Line 2110, Address: 0x19b284, Func Offset: 0x164
	// Line 2111, Address: 0x19b290, Func Offset: 0x170
	// Line 2112, Address: 0x19b2bc, Func Offset: 0x19c
	// Line 2113, Address: 0x19b2d8, Func Offset: 0x1b8
	// Line 2114, Address: 0x19b2f0, Func Offset: 0x1d0
	// Line 2115, Address: 0x19b2f4, Func Offset: 0x1d4
	// Line 2114, Address: 0x19b2f8, Func Offset: 0x1d8
	// Line 2115, Address: 0x19b300, Func Offset: 0x1e0
	// Line 2116, Address: 0x19b30c, Func Offset: 0x1ec
	// Line 2118, Address: 0x19b31c, Func Offset: 0x1fc
	// Line 2120, Address: 0x19b338, Func Offset: 0x218
	// Line 2121, Address: 0x19b344, Func Offset: 0x224
	// Line 2122, Address: 0x19b358, Func Offset: 0x238
	// Func End, Address: 0x19b388, Func Offset: 0x268
}

// 
// Start address: 0x19b390
void EnemyEffectDrawTextureOnDrum(float* center, float* normal, float* c_center, float* c_dir, float* width, float* height, int width_div, int height_div, float* alpha, EnemyTexParameter* tex, int sheet)
{
	float* cpos;
	float* pos;
	float* tpos;
	float* vec;
	float* vertical;
	float* horizontal;
	float pvtx[4];
	float pvt[4];
	int x;
	int y;
	// Line 2142, Address: 0x19b390, Func Offset: 0
	// Line 2146, Address: 0x19b394, Func Offset: 0x4
	// Line 2142, Address: 0x19b398, Func Offset: 0x8
	// Line 2152, Address: 0x19b3b8, Func Offset: 0x28
	// Line 2142, Address: 0x19b3bc, Func Offset: 0x2c
	// Line 2152, Address: 0x19b3d8, Func Offset: 0x48
	// Line 2146, Address: 0x19b3ec, Func Offset: 0x5c
	// Line 2147, Address: 0x19b404, Func Offset: 0x74
	// Line 2146, Address: 0x19b408, Func Offset: 0x78
	// Line 2149, Address: 0x19b40c, Func Offset: 0x7c
	// Line 2147, Address: 0x19b410, Func Offset: 0x80
	// Line 2150, Address: 0x19b414, Func Offset: 0x84
	// Line 2148, Address: 0x19b418, Func Offset: 0x88
	// Line 2151, Address: 0x19b41c, Func Offset: 0x8c
	// Line 2152, Address: 0x19b420, Func Offset: 0x90
	// Line 2155, Address: 0x19b42c, Func Offset: 0x9c
	// Line 2156, Address: 0x19b450, Func Offset: 0xc0
	// Line 2158, Address: 0x19b468, Func Offset: 0xd8
	// Line 2159, Address: 0x19b474, Func Offset: 0xe4
	// Line 2160, Address: 0x19b480, Func Offset: 0xf0
	// Line 2161, Address: 0x19b490, Func Offset: 0x100
	// Line 2163, Address: 0x19b4a0, Func Offset: 0x110
	// Line 2164, Address: 0x19b4b0, Func Offset: 0x120
	// Line 2165, Address: 0x19b4dc, Func Offset: 0x14c
	// Line 2166, Address: 0x19b4f4, Func Offset: 0x164
	// Line 2167, Address: 0x19b500, Func Offset: 0x170
	// Line 2168, Address: 0x19b52c, Func Offset: 0x19c
	// Line 2169, Address: 0x19b548, Func Offset: 0x1b8
	// Line 2170, Address: 0x19b564, Func Offset: 0x1d4
	// Line 2171, Address: 0x19b568, Func Offset: 0x1d8
	// Line 2170, Address: 0x19b56c, Func Offset: 0x1dc
	// Line 2171, Address: 0x19b574, Func Offset: 0x1e4
	// Line 2172, Address: 0x19b584, Func Offset: 0x1f4
	// Line 2174, Address: 0x19b594, Func Offset: 0x204
	// Line 2176, Address: 0x19b5b0, Func Offset: 0x220
	// Line 2177, Address: 0x19b5bc, Func Offset: 0x22c
	// Line 2178, Address: 0x19b5d0, Func Offset: 0x240
	// Func End, Address: 0x19b600, Func Offset: 0x270
}

