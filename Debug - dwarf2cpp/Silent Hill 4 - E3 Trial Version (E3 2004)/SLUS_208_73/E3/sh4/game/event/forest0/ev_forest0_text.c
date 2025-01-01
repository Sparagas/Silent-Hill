typedef union _anon0;
typedef struct sfObj;
typedef struct _anon1;
typedef struct _EventInst;
typedef struct _GAME_WORK;
typedef struct EventFlag;
typedef struct _EventDriver;

typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef int(*type_35)(sfObj*);

typedef _anon0 type_0[0];
typedef _anon0 type_1[256];
typedef _anon0 type_5[0];
typedef float type_6[4];
typedef float type_7[4][4];
typedef _anon0 type_11[0];
typedef _anon0 type_12[4];
typedef int type_13[1];
typedef int type_15[1];
typedef int type_16[1];
typedef int type_17[1];
typedef int type_18[1];
typedef _anon0 type_19[0];
typedef int type_20[1];
typedef _anon0 type_21[0];
typedef _anon0 type_22[0];
typedef int type_23[1];
typedef float type_24[4];
typedef _anon0 type_25[0];
typedef _anon0 type_26[0];
typedef short type_27[2];
typedef unsigned short type_28[2];
typedef char type_29[4];
typedef _anon0 type_30[7];
typedef unsigned char type_31[4];
typedef float type_32[1];
typedef int type_33[1];
typedef _anon0 type_36[0];
typedef unsigned char type_37[320];
typedef _anon0 type_38[0];

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

struct _anon1
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
	_anon0 dmy[7];
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct EventFlag
{
	unsigned char flag[320];
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
	_anon0 val[4];
};

_EventDriver ev_forest0_fr16_092;
_EventDriver ev_forest0_fr17_094;
_EventDriver ev_forest0_fr09_096;
_EventDriver ev_forest0_fr22_182_01;
_EventDriver ev_forest0_fr22_182_02;
_EventDriver ev_forest0_fr22_183;
_EventDriver ev_forest0_fr22_185;
_EventDriver ev_forest0_fr22_185_move;
EventFlag event_flag;
_EventDriver ev_forest0_fr19_247;
_anon0 MsgForest0_249_01[0];
_anon0 MsgForest0_249_04[0];
_anon0 MsgForest0_249_03[0];
_anon0 MsgForest0_249_02[0];
_EventDriver ev_forest0_frxx_249;
_EventDriver ev_forest0_fr23_180;
_GAME_WORK gamew;
_EventDriver ev_forest0_fr20_098_msg;
_EventDriver ev_forest0_fr07_thing;
_EventDriver ev_forest0_candlestand;
_anon0 MsgForest0_2262[0];
_EventDriver ev_forest0_fr23_2262;
_EventDriver ev_forest0_fr23_2268;
_EventDriver ev_forest0_fr23_2268_01;
_EventDriver ev_forest0_fr23_2268_02;
_EventDriver ev_forest0_fr23_2268_03;
_EventDriver ev_forest0_fr23_2268_04;
_EventDriver ev_forest0_fr23_2268_05;
_EventDriver ev_forest0_fr20_2270;
_EventDriver ev_forest0_fr20_2271;
_EventDriver ev_forest0_msg_701_01;
_EventDriver ev_forest0_msg_701_02;
_EventDriver ev_forest0_msg_701_03;
_anon0 MsgForest0_701_05[0];
_anon0 MsgForest0_701_04[0];
_EventDriver ev_forest0_msg_701_0405;
_EventDriver ev_forest0_msg_701_04;
_EventDriver ev_forest0_msg_701_05;
_EventDriver ev_forest0_msg_701_06;
_EventDriver ev_forest0_msg_701_07;
_EventDriver ev_forest0_msg_702_01;
_EventDriver ev_forest0_msg_702_02;
_EventDriver ev_forest0_msg_709;
_EventDriver ev_forest0_msg_702_03;
_EventDriver ev_forest0_msg_702_04;
_EventDriver ev_forest0_msg_702_05;
_EventDriver ev_forest0_msg_702_05_FirstTouch;
_EventDriver ev_forest0_msg_703_01;
_EventDriver ev_forest0_msg_703_02;
_EventDriver ev_forest0_msg_703_03;
_EventDriver ev_forest0_msg_703_04;
_EventDriver ev_forest0_msg_704_01;
_EventDriver ev_forest0_msg_712_01;
_EventDriver ev_forest0_msg_712_02;
_EventDriver ev_forest0_msg_712_03;
_EventDriver ev_forest0_msg_712_04;
_EventDriver ev_forest0_msg_712_05;
_EventDriver ev_forest0_msg_712_06;
_EventDriver ev_forest0_msg_712_07;
_EventDriver ev_forest0_msg_712_08;
_EventDriver ev_forest0_msg_712_09;
_EventDriver ev_forest0_msg_712_10;
_EventDriver ev_forest0_msg_712_11;
_EventDriver ev_forest0_msg_712_12;
_EventDriver ev_forest0_msg_712_13;
_EventDriver ev_forest0_msg_712_14;
_anon0 MsgForest0_712_17[0];
_anon0 MsgForest0_712_16[0];
_anon0 MsgForest0_712_15[0];
_EventDriver ev_forest0_msg_712_lake;
_EventDriver ev_forest0_msg_712_18;
_EventDriver ev_forest0_msg_712_19;
_EventDriver ev_forest0_msg_712_20;
_EventDriver ev_forest0_msg_712_21;
_EventDriver ev_forest0_msg_806_01;
_EventDriver ev_forest0_msg_712_22;
_EventDriver ev_forest0_msg_712_23;
_EventDriver ev_forest0_msg_712_24;
_EventDriver ev_forest0_msg_candle_stand;

int ev_forest0_fr22_183_init(sfObj* obj);
int ev_forest0_fr22_185_init(sfObj* obj);
int ev_forest0_fr22_185_exec(sfObj* obj);
int ev_forest0_fr19_247_init(sfObj* obj);
int ev_forest0_fr19_247_exec(sfObj* obj);
int ev_forest0_frxx_249_init(sfObj* obj);
int ev_forest0_frxx_249_end();
void ev_forest0_fr23_180_MoveExecute();
int ev_forest0_fr20_098_msg_trgchk(sfObj* obj);
int ev_forest0_fr20_098_msg_init(sfObj* obj);
int ev_forest0_fr07_thing_trgchk();
int ev_forest0_fr07_thing_end(sfObj* obj);
int ev_forest0_candlestand_trgchk();
int ev_forest0_candlestand_end();
int ev_forest0_fr23_2262_init();
int ev_forest0_fr23_2268_cmn_exec(sfObj* obj);
int ev_forest0_msg_701_0405_init();
int ev_forest0_msg_701_0405_end();
int ev_forest0_msg_702_05_FirstTouch_trgchk(sfObj* obj);
int ev_forest0_msg_702_05_FirstTouch_end();
int ev_forest0_msg_712_lake_init();

// 
// Start address: 0x1ed63a0
int ev_forest0_fr22_183_init(sfObj* obj)
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
int ev_forest0_fr22_185_init(sfObj* obj)
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
// Start address: 0x1ed6400
int ev_forest0_fr22_185_exec(sfObj* obj)
{
	int ret;
	// Line 142, Address: 0x1ed6400, Func Offset: 0
	// Line 145, Address: 0x1ed6408, Func Offset: 0x8
	// Line 147, Address: 0x1ed6414, Func Offset: 0x14
	// Line 148, Address: 0x1ed641c, Func Offset: 0x1c
	// Line 149, Address: 0x1ed6438, Func Offset: 0x38
	// Line 152, Address: 0x1ed6440, Func Offset: 0x40
	// Line 153, Address: 0x1ed6444, Func Offset: 0x44
	// Func End, Address: 0x1ed6454, Func Offset: 0x54
	// Line 444, Address: 0x1ed6400, Func Offset: 0
	// Line 445, Address: 0x1ed6408, Func Offset: 0x8
	// Line 446, Address: 0x1ed6410, Func Offset: 0x10
	// Line 447, Address: 0x1ed6418, Func Offset: 0x18
	// Func End, Address: 0x1ed6424, Func Offset: 0x24
}

// 
// Start address: 0x1ed6460
int ev_forest0_fr19_247_init(sfObj* obj)
{
	// Line 183, Address: 0x1ed6460, Func Offset: 0
	// Line 187, Address: 0x1ed6464, Func Offset: 0x4
	// Line 183, Address: 0x1ed6468, Func Offset: 0x8
	// Line 187, Address: 0x1ed646c, Func Offset: 0xc
	// Line 192, Address: 0x1ed6494, Func Offset: 0x34
	// Func End, Address: 0x1ed64a0, Func Offset: 0x40
}

// 
// Start address: 0x1ed64a0
int ev_forest0_fr19_247_exec(sfObj* obj)
{
	int ret;
	// Line 194, Address: 0x1ed64a0, Func Offset: 0
	// Line 200, Address: 0x1ed64a4, Func Offset: 0x4
	// Line 194, Address: 0x1ed64a8, Func Offset: 0x8
	// Line 200, Address: 0x1ed64b8, Func Offset: 0x18
	// Line 202, Address: 0x1ed64c8, Func Offset: 0x28
	// Line 203, Address: 0x1ed64d0, Func Offset: 0x30
	// Line 206, Address: 0x1ed64d8, Func Offset: 0x38
	// Line 208, Address: 0x1ed64f8, Func Offset: 0x58
	// Line 209, Address: 0x1ed6508, Func Offset: 0x68
	// Line 210, Address: 0x1ed6524, Func Offset: 0x84
	// Line 213, Address: 0x1ed6530, Func Offset: 0x90
	// Line 214, Address: 0x1ed6540, Func Offset: 0xa0
	// Line 218, Address: 0x1ed6544, Func Offset: 0xa4
	// Line 219, Address: 0x1ed6548, Func Offset: 0xa8
	// Line 220, Address: 0x1ed654c, Func Offset: 0xac
	// Func End, Address: 0x1ed6560, Func Offset: 0xc0
}

// 
// Start address: 0x1ed6560
int ev_forest0_frxx_249_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 659, Address: 0x1ed6560, Func Offset: 0
	// Line 664, Address: 0x1ed6564, Func Offset: 0x4
	// Line 659, Address: 0x1ed6568, Func Offset: 0x8
	// Line 660, Address: 0x1ed657c, Func Offset: 0x1c
	// Line 659, Address: 0x1ed6580, Func Offset: 0x20
	// Line 661, Address: 0x1ed6584, Func Offset: 0x24
	// Line 664, Address: 0x1ed6588, Func Offset: 0x28
	// Line 665, Address: 0x1ed65a4, Func Offset: 0x44
	// Line 666, Address: 0x1ed65a8, Func Offset: 0x48
	// Line 667, Address: 0x1ed65b8, Func Offset: 0x58
	// Line 668, Address: 0x1ed65c0, Func Offset: 0x60
	// Line 670, Address: 0x1ed65c8, Func Offset: 0x68
	// Line 672, Address: 0x1ed65d0, Func Offset: 0x70
	// Line 673, Address: 0x1ed65e0, Func Offset: 0x80
	// Line 675, Address: 0x1ed65e8, Func Offset: 0x88
	// Line 677, Address: 0x1ed65f0, Func Offset: 0x90
	// Line 679, Address: 0x1ed65f4, Func Offset: 0x94
	// Line 681, Address: 0x1ed65f8, Func Offset: 0x98
	// Line 682, Address: 0x1ed6604, Func Offset: 0xa4
	// Line 685, Address: 0x1ed6610, Func Offset: 0xb0
	// Line 686, Address: 0x1ed6620, Func Offset: 0xc0
	// Line 687, Address: 0x1ed6624, Func Offset: 0xc4
	// Line 689, Address: 0x1ed6628, Func Offset: 0xc8
	// Line 690, Address: 0x1ed662c, Func Offset: 0xcc
	// Func End, Address: 0x1ed6648, Func Offset: 0xe8
	// Line 251, Address: 0x1ed6560, Func Offset: 0
	// Line 252, Address: 0x1ed6568, Func Offset: 0x8
	// Line 255, Address: 0x1ed6570, Func Offset: 0x10
	// Line 257, Address: 0x1ed657c, Func Offset: 0x1c
	// Line 258, Address: 0x1ed6590, Func Offset: 0x30
	// Line 259, Address: 0x1ed65d4, Func Offset: 0x74
	// Line 260, Address: 0x1ed65d8, Func Offset: 0x78
	// Line 261, Address: 0x1ed65e4, Func Offset: 0x84
	// Line 262, Address: 0x1ed65ec, Func Offset: 0x8c
	// Line 263, Address: 0x1ed65f0, Func Offset: 0x90
	// Line 264, Address: 0x1ed65fc, Func Offset: 0x9c
	// Line 265, Address: 0x1ed6604, Func Offset: 0xa4
	// Line 266, Address: 0x1ed6608, Func Offset: 0xa8
	// Line 269, Address: 0x1ed6614, Func Offset: 0xb4
	// Line 270, Address: 0x1ed6620, Func Offset: 0xc0
	// Line 271, Address: 0x1ed662c, Func Offset: 0xcc
	// Line 273, Address: 0x1ed6630, Func Offset: 0xd0
	// Line 272, Address: 0x1ed6634, Func Offset: 0xd4
	// Line 273, Address: 0x1ed6638, Func Offset: 0xd8
	// Func End, Address: 0x1ed6640, Func Offset: 0xe0
}

// 
// Start address: 0x1ed6640
int ev_forest0_frxx_249_end()
{
	// Line 276, Address: 0x1ed6640, Func Offset: 0
	// Line 277, Address: 0x1ed6654, Func Offset: 0x14
	// Line 278, Address: 0x1ed665c, Func Offset: 0x1c
	// Line 280, Address: 0x1ed6660, Func Offset: 0x20
	// Func End, Address: 0x1ed6668, Func Offset: 0x28
}

// 
// Start address: 0x1ed6670
void ev_forest0_fr23_180_MoveExecute()
{
	int* door;
	int next_scene;
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
// Start address: 0x1ed66d0
int ev_forest0_fr20_098_msg_trgchk(sfObj* obj)
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
// Start address: 0x1ed6710
int ev_forest0_fr20_098_msg_init(sfObj* obj)
{
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
// Start address: 0x1ed6750
int ev_forest0_fr07_thing_trgchk()
{
	// Line 374, Address: 0x1ed6750, Func Offset: 0
	// Line 377, Address: 0x1ed6760, Func Offset: 0x10
	// Func End, Address: 0x1ed6768, Func Offset: 0x18
}

// 
// Start address: 0x1ed6770
int ev_forest0_fr07_thing_end(sfObj* obj)
{
	// Line 379, Address: 0x1ed6770, Func Offset: 0
	// Line 382, Address: 0x1ed6778, Func Offset: 0x8
	// Line 384, Address: 0x1ed6780, Func Offset: 0x10
	// Line 383, Address: 0x1ed6784, Func Offset: 0x14
	// Line 384, Address: 0x1ed6788, Func Offset: 0x18
	// Func End, Address: 0x1ed6790, Func Offset: 0x20
}

// 
// Start address: 0x1ed6790
int ev_forest0_candlestand_trgchk()
{
	// Line 402, Address: 0x1ed6790, Func Offset: 0
	// Line 407, Address: 0x1ed6798, Func Offset: 0x8
	// Line 410, Address: 0x1ed67a0, Func Offset: 0x10
	// Line 407, Address: 0x1ed67a4, Func Offset: 0x14
	// Line 410, Address: 0x1ed67b0, Func Offset: 0x20
	// Func End, Address: 0x1ed67b8, Func Offset: 0x28
	// Line 109, Address: 0x1ed6790, Func Offset: 0
	// Line 112, Address: 0x1ed679c, Func Offset: 0xc
	// Func End, Address: 0x1ed67a4, Func Offset: 0x14
}

// 
// Start address: 0x1ed67c0
int ev_forest0_candlestand_end()
{
	// Line 412, Address: 0x1ed67c0, Func Offset: 0
	// Line 413, Address: 0x1ed67c8, Func Offset: 0x8
	// Line 414, Address: 0x1ed67d8, Func Offset: 0x18
	// Line 416, Address: 0x1ed67e0, Func Offset: 0x20
	// Line 415, Address: 0x1ed67e4, Func Offset: 0x24
	// Line 416, Address: 0x1ed67e8, Func Offset: 0x28
	// Func End, Address: 0x1ed67f0, Func Offset: 0x30
}

// 
// Start address: 0x1ed67f0
int ev_forest0_fr23_2262_init()
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
// Start address: 0x1ed6820
int ev_forest0_fr23_2268_cmn_exec(sfObj* obj)
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
// Start address: 0x1ed6880
int ev_forest0_msg_701_0405_init()
{
	// Line 511, Address: 0x1ed6880, Func Offset: 0
	// Line 512, Address: 0x1ed6884, Func Offset: 0x4
	// Line 511, Address: 0x1ed6888, Func Offset: 0x8
	// Line 512, Address: 0x1ed688c, Func Offset: 0xc
	// Line 513, Address: 0x1ed689c, Func Offset: 0x1c
	// Line 515, Address: 0x1ed68b0, Func Offset: 0x30
	// Line 517, Address: 0x1ed68c0, Func Offset: 0x40
	// Line 516, Address: 0x1ed68c4, Func Offset: 0x44
	// Line 517, Address: 0x1ed68c8, Func Offset: 0x48
	// Func End, Address: 0x1ed68d0, Func Offset: 0x50
}

// 
// Start address: 0x1ed68d0
int ev_forest0_msg_701_0405_end()
{
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
// Start address: 0x1ed68f0
int ev_forest0_msg_702_05_FirstTouch_trgchk(sfObj* obj)
{
	// Line 573, Address: 0x1ed68f0, Func Offset: 0
	// Line 574, Address: 0x1ed68f4, Func Offset: 0x4
	// Line 573, Address: 0x1ed68f8, Func Offset: 0x8
	// Line 574, Address: 0x1ed68fc, Func Offset: 0xc
	// Line 576, Address: 0x1ed691c, Func Offset: 0x2c
	// Func End, Address: 0x1ed6928, Func Offset: 0x38
}

// 
// Start address: 0x1ed6930
int ev_forest0_msg_702_05_FirstTouch_end()
{
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
// Start address: 0x1ed6950
int ev_forest0_msg_712_lake_init()
{
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

