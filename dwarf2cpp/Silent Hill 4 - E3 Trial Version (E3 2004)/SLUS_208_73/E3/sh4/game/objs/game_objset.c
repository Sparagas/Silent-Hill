typedef struct sfObj;
typedef enum EnemySeKind : unsigned char;
typedef struct _anon0;
typedef struct EnemyKindTable;
typedef union _anon1;
typedef enum EnemyKind : unsigned char;
typedef struct _GAME_WORK;

typedef void(*type_1)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_25)(sfObj*);
typedef void(*type_27)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef void(*type_29)(sfObj*);
typedef void(*type_32)(sfObj*);
typedef void(*type_34)(sfObj*);

typedef int type_0[1];
typedef unsigned int* type_2[13];
typedef _anon1 type_14[256];
typedef _anon1 type_15[24];
typedef unsigned int* type_17[13];
typedef int type_19[1];
typedef int type_20[1];
typedef float type_22[4];
typedef float type_24[4][4];
typedef int type_26[1];
typedef int type_30[1];
typedef short type_31[2];
typedef unsigned short type_33[2];
typedef char type_35[4];
typedef unsigned char type_36[4];
typedef unsigned int* type_37[256];
typedef int type_38[1];
typedef float type_39[1];
typedef float type_40[4];
typedef int type_41[1];
typedef int type_42[1];

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

enum EnemySeKind : unsigned char
{
	ENEMY_SE_KIND_NOTHING,
	ENEMY_SE_KIND_CELL,
	ENEMY_SE_KIND_MUSH,
	ENEMY_SE_KIND_BUZZ,
	ENEMY_SE_KIND_MM,
	ENEMY_SE_KIND_WALLMAN,
	ENEMY_SE_KIND_WHEEL,
	ENEMY_SE_KIND_JINMEN,
	ENEMY_SE_KIND_TWINS,
	ENEMY_SE_KIND_HIL,
	ENEMY_SE_KIND_HYENA,
	ENEMY_SE_KIND_MULTI,
	ENEMY_SE_KIND_PICKGIRL,
	ENEMY_SE_KIND_FLAMES,
	ENEMY_SE_KIND_FAT,
	ENEMY_SE_KIND_SCRATCH,
	ENEMY_SE_KIND_KILLER0,
	ENEMY_SE_KIND_KILLER1,
	ENEMY_SE_KIND_KILLER2,
	ENEMY_SE_KIND_KILLER3,
	ENEMY_SE_KIND_NURSE,
	ENEMY_SE_KIND_MAX
};

struct _anon0
{
	int type;
	void(*func)(sfObj*);
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon1 dmy[24];
};

struct EnemyKindTable
{
	void(*func)(sfObj*);
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
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

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
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

unsigned short tmp_kind;
_anon0 def_data;
unsigned int* obj_datas[13];
unsigned int* obj_datas_l[13];
unsigned int* scene_addr_tbl[256];
_anon0 tmp_data;
void(*EventCameraDraw)(sfObj*);
void(*EventCameraDestruct)(sfObj*);
void(*EventCameraConstruct)(sfObj*);
void(*EventCameraExec)(sfObj*);
void(*EventHitDraw)(sfObj*);
void(*EventHitDestruct)(sfObj*);
void(*EventHitConstruct)(sfObj*);
void(*EventHitExec)(sfObj*);
void(*GameObjDontMoveRender)(sfObj*);
void(*GameObjDontMoveDestruct)(sfObj*);
void(*GameObjDontMoveConstruct)(sfObj*);
void(*GameObjDontMove)(sfObj*);
int set_count;
_GAME_WORK gamew;

void GameObjSetInit(int stage);
void clear_sdata();
void set_sdata(int type, unsigned int* d);
void GameObjSetMakeIDSceneInit();
unsigned int GameObjSetMakeID(int latter, int stage, int scene);
int GameObjSetTableID_GetStage(unsigned int id);
int GameObjSetTableID_GetScene(unsigned int id);
int GameObjSetTableID_GetIndex(unsigned int id);
int GameObjSetTableID_IsValid(unsigned int id);
void GameObjSetScene(int scene);
void GameObjSetSceneOnlyEnemy(int scene);
sfObj* GameObjSetCreate1(_anon0* data, unsigned int set_id);
sfObj* GameObjAdd(_anon0* data, int scene);
int GameObjGetEnemySeKind(EnemySeKind* output_table, int limit, int scene);

// 
// Start address: 0x161070
void GameObjSetInit(int stage)
{
	int i;
	unsigned int* d;
	// Line 194, Address: 0x161070, Func Offset: 0
	// Line 198, Address: 0x16107c, Func Offset: 0xc
	// Line 201, Address: 0x161084, Func Offset: 0x14
	// Line 202, Address: 0x161090, Func Offset: 0x20
	// Line 207, Address: 0x1610c0, Func Offset: 0x50
	// Line 208, Address: 0x1610d0, Func Offset: 0x60
	// Line 210, Address: 0x1610e8, Func Offset: 0x78
	// Line 211, Address: 0x1610f8, Func Offset: 0x88
	// Line 213, Address: 0x161100, Func Offset: 0x90
	// Line 214, Address: 0x16110c, Func Offset: 0x9c
	// Line 216, Address: 0x161128, Func Offset: 0xb8
	// Line 217, Address: 0x161144, Func Offset: 0xd4
	// Line 220, Address: 0x161154, Func Offset: 0xe4
	// Func End, Address: 0x161164, Func Offset: 0xf4
}

// 
// Start address: 0x161170
void clear_sdata()
{
	// Line 241, Address: 0x161170, Func Offset: 0
	// Line 242, Address: 0x161174, Func Offset: 0x4
	// Line 241, Address: 0x16117c, Func Offset: 0xc
	// Line 242, Address: 0x161180, Func Offset: 0x10
	// Line 243, Address: 0x161190, Func Offset: 0x20
	// Line 245, Address: 0x161198, Func Offset: 0x28
	// Func End, Address: 0x1611a4, Func Offset: 0x34
}

// 
// Start address: 0x1611b0
void set_sdata(int type, unsigned int* d)
{
	float* f;
	EnemyKindTable* t;
	// Line 249, Address: 0x1611b0, Func Offset: 0
	// Line 252, Address: 0x1611b4, Func Offset: 0x4
	// Line 255, Address: 0x1611dc, Func Offset: 0x2c
	// Line 256, Address: 0x1611e0, Func Offset: 0x30
	// Line 257, Address: 0x1611e8, Func Offset: 0x38
	// Line 256, Address: 0x1611ec, Func Offset: 0x3c
	// Line 257, Address: 0x1611f4, Func Offset: 0x44
	// Line 259, Address: 0x1611fc, Func Offset: 0x4c
	// Line 260, Address: 0x161200, Func Offset: 0x50
	// Line 259, Address: 0x161204, Func Offset: 0x54
	// Line 260, Address: 0x161210, Func Offset: 0x60
	// Line 261, Address: 0x161218, Func Offset: 0x68
	// Line 260, Address: 0x16121c, Func Offset: 0x6c
	// Line 261, Address: 0x161220, Func Offset: 0x70
	// Line 262, Address: 0x161228, Func Offset: 0x78
	// Line 261, Address: 0x16122c, Func Offset: 0x7c
	// Line 262, Address: 0x161230, Func Offset: 0x80
	// Line 263, Address: 0x161238, Func Offset: 0x88
	// Line 264, Address: 0x161240, Func Offset: 0x90
	// Line 266, Address: 0x161268, Func Offset: 0xb8
	// Line 267, Address: 0x161278, Func Offset: 0xc8
	// Line 268, Address: 0x161288, Func Offset: 0xd8
	// Line 269, Address: 0x161298, Func Offset: 0xe8
	// Line 270, Address: 0x1612a4, Func Offset: 0xf4
	// Line 271, Address: 0x1612b0, Func Offset: 0x100
	// Line 272, Address: 0x1612bc, Func Offset: 0x10c
	// Line 273, Address: 0x1612c0, Func Offset: 0x110
	// Line 272, Address: 0x1612c4, Func Offset: 0x114
	// Line 273, Address: 0x1612d0, Func Offset: 0x120
	// Line 274, Address: 0x1612d8, Func Offset: 0x128
	// Line 273, Address: 0x1612dc, Func Offset: 0x12c
	// Line 274, Address: 0x1612e0, Func Offset: 0x130
	// Line 275, Address: 0x1612e8, Func Offset: 0x138
	// Line 274, Address: 0x1612ec, Func Offset: 0x13c
	// Line 275, Address: 0x1612f0, Func Offset: 0x140
	// Line 277, Address: 0x1612f8, Func Offset: 0x148
	// Line 279, Address: 0x161300, Func Offset: 0x150
	// Line 280, Address: 0x161308, Func Offset: 0x158
	// Line 282, Address: 0x161310, Func Offset: 0x160
	// Line 283, Address: 0x161318, Func Offset: 0x168
	// Line 285, Address: 0x161320, Func Offset: 0x170
	// Line 286, Address: 0x161328, Func Offset: 0x178
	// Line 288, Address: 0x161330, Func Offset: 0x180
	// Line 289, Address: 0x161338, Func Offset: 0x188
	// Line 291, Address: 0x161340, Func Offset: 0x190
	// Line 292, Address: 0x161354, Func Offset: 0x1a4
	// Line 293, Address: 0x16135c, Func Offset: 0x1ac
	// Line 296, Address: 0x161360, Func Offset: 0x1b0
	// Line 297, Address: 0x161368, Func Offset: 0x1b8
	// Line 298, Address: 0x161370, Func Offset: 0x1c0
	// Line 299, Address: 0x16137c, Func Offset: 0x1cc
	// Line 300, Address: 0x161388, Func Offset: 0x1d8
	// Line 301, Address: 0x161394, Func Offset: 0x1e4
	// Line 304, Address: 0x16139c, Func Offset: 0x1ec
	// Line 305, Address: 0x1613a4, Func Offset: 0x1f4
	// Line 306, Address: 0x1613a8, Func Offset: 0x1f8
	// Line 307, Address: 0x1613b8, Func Offset: 0x208
	// Line 309, Address: 0x1613c0, Func Offset: 0x210
	// Line 310, Address: 0x1613c8, Func Offset: 0x218
	// Line 312, Address: 0x1613d0, Func Offset: 0x220
	// Line 313, Address: 0x1613e0, Func Offset: 0x230
	// Line 315, Address: 0x1613e8, Func Offset: 0x238
	// Line 316, Address: 0x1613f0, Func Offset: 0x240
	// Line 318, Address: 0x1613f8, Func Offset: 0x248
	// Line 319, Address: 0x161400, Func Offset: 0x250
	// Line 321, Address: 0x161408, Func Offset: 0x258
	// Line 322, Address: 0x161410, Func Offset: 0x260
	// Line 324, Address: 0x161418, Func Offset: 0x268
	// Line 325, Address: 0x161420, Func Offset: 0x270
	// Line 327, Address: 0x161428, Func Offset: 0x278
	// Line 328, Address: 0x161430, Func Offset: 0x280
	// Line 330, Address: 0x161438, Func Offset: 0x288
	// Line 331, Address: 0x161440, Func Offset: 0x290
	// Line 333, Address: 0x161448, Func Offset: 0x298
	// Line 334, Address: 0x161458, Func Offset: 0x2a8
	// Line 336, Address: 0x161460, Func Offset: 0x2b0
	// Line 337, Address: 0x161470, Func Offset: 0x2c0
	// Line 339, Address: 0x161478, Func Offset: 0x2c8
	// Line 340, Address: 0x161480, Func Offset: 0x2d0
	// Line 342, Address: 0x161488, Func Offset: 0x2d8
	// Line 343, Address: 0x161490, Func Offset: 0x2e0
	// Line 345, Address: 0x161498, Func Offset: 0x2e8
	// Line 346, Address: 0x1614a0, Func Offset: 0x2f0
	// Line 348, Address: 0x1614a8, Func Offset: 0x2f8
	// Line 349, Address: 0x1614b0, Func Offset: 0x300
	// Line 351, Address: 0x1614b8, Func Offset: 0x308
	// Line 352, Address: 0x1614c0, Func Offset: 0x310
	// Line 354, Address: 0x1614c8, Func Offset: 0x318
	// Line 355, Address: 0x1614d0, Func Offset: 0x320
	// Line 357, Address: 0x1614d8, Func Offset: 0x328
	// Line 358, Address: 0x1614e0, Func Offset: 0x330
	// Line 360, Address: 0x1614e8, Func Offset: 0x338
	// Line 361, Address: 0x1614f0, Func Offset: 0x340
	// Line 363, Address: 0x1614f8, Func Offset: 0x348
	// Line 364, Address: 0x161500, Func Offset: 0x350
	// Line 366, Address: 0x161508, Func Offset: 0x358
	// Line 367, Address: 0x161510, Func Offset: 0x360
	// Line 369, Address: 0x161518, Func Offset: 0x368
	// Line 370, Address: 0x161528, Func Offset: 0x378
	// Line 372, Address: 0x161530, Func Offset: 0x380
	// Line 373, Address: 0x161538, Func Offset: 0x388
	// Line 375, Address: 0x161540, Func Offset: 0x390
	// Line 376, Address: 0x161550, Func Offset: 0x3a0
	// Line 380, Address: 0x161558, Func Offset: 0x3a8
	// Line 381, Address: 0x161568, Func Offset: 0x3b8
	// Line 383, Address: 0x161570, Func Offset: 0x3c0
	// Line 384, Address: 0x161580, Func Offset: 0x3d0
	// Line 386, Address: 0x161588, Func Offset: 0x3d8
	// Line 387, Address: 0x161598, Func Offset: 0x3e8
	// Line 389, Address: 0x1615a0, Func Offset: 0x3f0
	// Line 390, Address: 0x1615a8, Func Offset: 0x3f8
	// Line 392, Address: 0x1615b0, Func Offset: 0x400
	// Line 393, Address: 0x1615b8, Func Offset: 0x408
	// Line 395, Address: 0x1615c0, Func Offset: 0x410
	// Line 396, Address: 0x1615c8, Func Offset: 0x418
	// Line 398, Address: 0x1615d0, Func Offset: 0x420
	// Line 399, Address: 0x1615d8, Func Offset: 0x428
	// Line 401, Address: 0x1615e0, Func Offset: 0x430
	// Line 402, Address: 0x1615e8, Func Offset: 0x438
	// Line 404, Address: 0x1615f0, Func Offset: 0x440
	// Line 406, Address: 0x1615fc, Func Offset: 0x44c
	// Line 409, Address: 0x161600, Func Offset: 0x450
	// Func End, Address: 0x16160c, Func Offset: 0x45c
}

// 
// Start address: 0x161610
void GameObjSetMakeIDSceneInit()
{
	// Line 415, Address: 0x161610, Func Offset: 0
	// Line 416, Address: 0x161614, Func Offset: 0x4
	// Func End, Address: 0x16161c, Func Offset: 0xc
}

// 
// Start address: 0x161620
unsigned int GameObjSetMakeID(int latter, int stage, int scene)
{
	unsigned int set_id;
	// Line 423, Address: 0x161620, Func Offset: 0
	// Line 425, Address: 0x161624, Func Offset: 0x4
	// Line 423, Address: 0x161628, Func Offset: 0x8
	// Line 427, Address: 0x16162c, Func Offset: 0xc
	// Line 425, Address: 0x161630, Func Offset: 0x10
	// Line 429, Address: 0x161634, Func Offset: 0x14
	// Line 430, Address: 0x16163c, Func Offset: 0x1c
	// Line 431, Address: 0x161648, Func Offset: 0x28
	// Line 433, Address: 0x161658, Func Offset: 0x38
	// Func End, Address: 0x161660, Func Offset: 0x40
}

// 
// Start address: 0x161660
int GameObjSetTableID_GetStage(unsigned int id)
{
	// Line 439, Address: 0x161660, Func Offset: 0
	// Line 440, Address: 0x161664, Func Offset: 0x4
	// Func End, Address: 0x16166c, Func Offset: 0xc
}

// 
// Start address: 0x161670
int GameObjSetTableID_GetScene(unsigned int id)
{
	// Line 446, Address: 0x161670, Func Offset: 0
	// Line 447, Address: 0x161674, Func Offset: 0x4
	// Func End, Address: 0x16167c, Func Offset: 0xc
}

// 
// Start address: 0x161680
int GameObjSetTableID_GetIndex(unsigned int id)
{
	// Line 454, Address: 0x161680, Func Offset: 0
	// Func End, Address: 0x161688, Func Offset: 0x8
}

// 
// Start address: 0x161690
int GameObjSetTableID_IsValid(unsigned int id)
{
	// Line 470, Address: 0x161690, Func Offset: 0
	// Line 471, Address: 0x16169c, Func Offset: 0xc
	// Line 472, Address: 0x1616ac, Func Offset: 0x1c
	// Line 473, Address: 0x1616b8, Func Offset: 0x28
	// Line 474, Address: 0x1616c8, Func Offset: 0x38
	// Line 476, Address: 0x1616d0, Func Offset: 0x40
	// Line 478, Address: 0x1616e0, Func Offset: 0x50
	// Func End, Address: 0x1616f0, Func Offset: 0x60
}

// 
// Start address: 0x1616f0
void GameObjSetScene(int scene)
{
	unsigned int* d;
	int words;
	unsigned int set_id;
	// Line 496, Address: 0x1616f0, Func Offset: 0
	// Line 502, Address: 0x161704, Func Offset: 0x14
	// Line 503, Address: 0x16170c, Func Offset: 0x1c
	// Line 505, Address: 0x161714, Func Offset: 0x24
	// Line 506, Address: 0x161728, Func Offset: 0x38
	// Line 507, Address: 0x161730, Func Offset: 0x40
	// Line 508, Address: 0x16173c, Func Offset: 0x4c
	// Line 509, Address: 0x161744, Func Offset: 0x54
	// Line 511, Address: 0x161748, Func Offset: 0x58
	// Line 518, Address: 0x161754, Func Offset: 0x64
	// Line 517, Address: 0x161758, Func Offset: 0x68
	// Line 518, Address: 0x16175c, Func Offset: 0x6c
	// Line 517, Address: 0x161760, Func Offset: 0x70
	// Line 518, Address: 0x161764, Func Offset: 0x74
	// Line 519, Address: 0x16176c, Func Offset: 0x7c
	// Line 522, Address: 0x161770, Func Offset: 0x80
	// Line 519, Address: 0x161774, Func Offset: 0x84
	// Line 522, Address: 0x161778, Func Offset: 0x88
	// Line 519, Address: 0x16177c, Func Offset: 0x8c
	// Line 522, Address: 0x161780, Func Offset: 0x90
	// Line 523, Address: 0x161788, Func Offset: 0x98
	// Line 524, Address: 0x1617a4, Func Offset: 0xb4
	// Line 525, Address: 0x1617b8, Func Offset: 0xc8
	// Line 526, Address: 0x1617c0, Func Offset: 0xd0
	// Line 528, Address: 0x1617cc, Func Offset: 0xdc
	// Line 529, Address: 0x1617d4, Func Offset: 0xe4
	// Line 530, Address: 0x1617f0, Func Offset: 0x100
	// Line 531, Address: 0x161804, Func Offset: 0x114
	// Line 532, Address: 0x16180c, Func Offset: 0x11c
	// Line 533, Address: 0x161814, Func Offset: 0x124
	// Line 534, Address: 0x161818, Func Offset: 0x128
	// Line 535, Address: 0x161824, Func Offset: 0x134
	// Line 536, Address: 0x161840, Func Offset: 0x150
	// Line 537, Address: 0x161854, Func Offset: 0x164
	// Line 539, Address: 0x16185c, Func Offset: 0x16c
	// Line 541, Address: 0x161868, Func Offset: 0x178
	// Line 544, Address: 0x161870, Func Offset: 0x180
	// Func End, Address: 0x161888, Func Offset: 0x198
}

// 
// Start address: 0x161890
void GameObjSetSceneOnlyEnemy(int scene)
{
	unsigned int* d;
	int words;
	// Line 556, Address: 0x161890, Func Offset: 0
	// Line 562, Address: 0x1618a4, Func Offset: 0x14
	// Line 563, Address: 0x1618ac, Func Offset: 0x1c
	// Line 564, Address: 0x1618c0, Func Offset: 0x30
	// Line 565, Address: 0x1618c8, Func Offset: 0x38
	// Line 566, Address: 0x1618d4, Func Offset: 0x44
	// Line 567, Address: 0x1618dc, Func Offset: 0x4c
	// Line 568, Address: 0x1618e0, Func Offset: 0x50
	// Line 572, Address: 0x1618ec, Func Offset: 0x5c
	// Line 571, Address: 0x1618f0, Func Offset: 0x60
	// Line 572, Address: 0x1618f4, Func Offset: 0x64
	// Line 571, Address: 0x1618f8, Func Offset: 0x68
	// Line 572, Address: 0x1618fc, Func Offset: 0x6c
	// Line 573, Address: 0x161904, Func Offset: 0x74
	// Line 575, Address: 0x161908, Func Offset: 0x78
	// Line 573, Address: 0x16190c, Func Offset: 0x7c
	// Line 575, Address: 0x161910, Func Offset: 0x80
	// Line 573, Address: 0x161914, Func Offset: 0x84
	// Line 575, Address: 0x161918, Func Offset: 0x88
	// Line 577, Address: 0x161938, Func Offset: 0xa8
	// Line 579, Address: 0x16194c, Func Offset: 0xbc
	// Line 578, Address: 0x161950, Func Offset: 0xc0
	// Line 579, Address: 0x161954, Func Offset: 0xc4
	// Line 578, Address: 0x16195c, Func Offset: 0xcc
	// Line 579, Address: 0x161964, Func Offset: 0xd4
	// Line 580, Address: 0x16196c, Func Offset: 0xdc
	// Line 581, Address: 0x161970, Func Offset: 0xe0
	// Line 582, Address: 0x161978, Func Offset: 0xe8
	// Line 587, Address: 0x161988, Func Offset: 0xf8
	// Func End, Address: 0x1619a0, Func Offset: 0x110
}

// 
// Start address: 0x1619a0
sfObj* GameObjSetCreate1(_anon0* data, unsigned int set_id)
{
	sfObj* obj;
	_anon1* idata;
	// Line 592, Address: 0x1619a0, Func Offset: 0
	// Line 597, Address: 0x1619b8, Func Offset: 0x18
	// Line 598, Address: 0x1619c4, Func Offset: 0x24
	// Line 600, Address: 0x1619d8, Func Offset: 0x38
	// Line 601, Address: 0x1619e4, Func Offset: 0x44
	// Line 602, Address: 0x1619f8, Func Offset: 0x58
	// Line 603, Address: 0x161a00, Func Offset: 0x60
	// Line 606, Address: 0x161a08, Func Offset: 0x68
	// Line 609, Address: 0x161a14, Func Offset: 0x74
	// Line 610, Address: 0x161a20, Func Offset: 0x80
	// Line 611, Address: 0x161a2c, Func Offset: 0x8c
	// Line 612, Address: 0x161a38, Func Offset: 0x98
	// Line 614, Address: 0x161a40, Func Offset: 0xa0
	// Line 616, Address: 0x161a48, Func Offset: 0xa8
	// Line 620, Address: 0x161a58, Func Offset: 0xb8
	// Line 628, Address: 0x161a84, Func Offset: 0xe4
	// Line 630, Address: 0x161a88, Func Offset: 0xe8
	// Line 633, Address: 0x161a90, Func Offset: 0xf0
	// Line 635, Address: 0x161a9c, Func Offset: 0xfc
	// Line 641, Address: 0x161aa0, Func Offset: 0x100
	// Line 643, Address: 0x161aa8, Func Offset: 0x108
	// Line 644, Address: 0x161ab0, Func Offset: 0x110
	// Func End, Address: 0x161ac8, Func Offset: 0x128
}

// 
// Start address: 0x161ad0
sfObj* GameObjAdd(_anon0* data, int scene)
{
	// Line 662, Address: 0x161ad0, Func Offset: 0
	// Func End, Address: 0x161ad8, Func Offset: 0x8
}

// 
// Start address: 0x161ae0
int GameObjGetEnemySeKind(EnemySeKind* output_table, int limit, int scene)
{
	unsigned int* d;
	int words;
	int output_num;
	EnemyKind kind;
	EnemySeKind sekind;
	int enemy_type;
	int n;
	// Line 678, Address: 0x161ae0, Func Offset: 0
	// Line 688, Address: 0x161ae4, Func Offset: 0x4
	// Line 678, Address: 0x161ae8, Func Offset: 0x8
	// Line 688, Address: 0x161aec, Func Offset: 0xc
	// Line 678, Address: 0x161af0, Func Offset: 0x10
	// Line 688, Address: 0x161af4, Func Offset: 0x14
	// Line 678, Address: 0x161af8, Func Offset: 0x18
	// Line 688, Address: 0x161afc, Func Offset: 0x1c
	// Line 678, Address: 0x161b00, Func Offset: 0x20
	// Line 688, Address: 0x161b18, Func Offset: 0x38
	// Line 689, Address: 0x161b1c, Func Offset: 0x3c
	// Line 690, Address: 0x161b24, Func Offset: 0x44
	// Line 691, Address: 0x161b34, Func Offset: 0x54
	// Line 692, Address: 0x161b3c, Func Offset: 0x5c
	// Line 693, Address: 0x161b40, Func Offset: 0x60
	// Line 694, Address: 0x161b44, Func Offset: 0x64
	// Line 698, Address: 0x161b4c, Func Offset: 0x6c
	// Line 697, Address: 0x161b50, Func Offset: 0x70
	// Line 698, Address: 0x161b58, Func Offset: 0x78
	// Line 701, Address: 0x161b78, Func Offset: 0x98
	// Line 703, Address: 0x161b80, Func Offset: 0xa0
	// Line 705, Address: 0x161b8c, Func Offset: 0xac
	// Line 706, Address: 0x161b90, Func Offset: 0xb0
	// Line 708, Address: 0x161b9c, Func Offset: 0xbc
	// Line 710, Address: 0x161bc0, Func Offset: 0xe0
	// Line 711, Address: 0x161bc8, Func Offset: 0xe8
	// Line 712, Address: 0x161bd0, Func Offset: 0xf0
	// Line 713, Address: 0x161be0, Func Offset: 0x100
	// Line 716, Address: 0x161bf0, Func Offset: 0x110
	// Line 717, Address: 0x161c00, Func Offset: 0x120
	// Line 718, Address: 0x161c0c, Func Offset: 0x12c
	// Line 719, Address: 0x161c14, Func Offset: 0x134
	// Line 722, Address: 0x161c1c, Func Offset: 0x13c
	// Line 725, Address: 0x161c20, Func Offset: 0x140
	// Line 723, Address: 0x161c28, Func Offset: 0x148
	// Line 725, Address: 0x161c2c, Func Offset: 0x14c
	// Line 730, Address: 0x161c34, Func Offset: 0x154
	// Line 732, Address: 0x161c48, Func Offset: 0x168
	// Func End, Address: 0x161c68, Func Offset: 0x188
}

