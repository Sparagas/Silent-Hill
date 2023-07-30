typedef enum _enum : unsigned char;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct EventFlag;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _GAME_WORK;

typedef _enum(*type_38)();
typedef _enum(*type_52)();
typedef _enum(*type_55)();

typedef _anon1 type_0[21];
typedef int type_1[1];
typedef _anon2 type_2[3];
typedef _anon2 type_3[8];
typedef _anon2 type_4[7];
typedef _anon2 type_5[4];
typedef _anon2 type_6[7];
typedef _anon2 type_7[14];
typedef _anon2 type_8[14];
typedef _anon5 type_9[5];
typedef _anon2 type_10[8];
typedef _anon2 type_11[14];
typedef _anon2 type_12[8];
typedef _anon2 type_13[7];
typedef _anon2 type_14[4];
typedef _anon2 type_15[14];
typedef _anon2 type_16[14];
typedef float type_17[4];
typedef float type_18[4][4];
typedef unsigned char type_19[320];
typedef float type_20[4];
typedef _anon2 type_21[4];
typedef _anon2 type_22[1];
typedef _anon2 type_23[8];
typedef _anon2 type_24[8];
typedef _anon2 type_25[7];
typedef _anon2 type_26[14];
typedef _anon2 type_27[14];
typedef _anon2 type_28[14];
typedef int type_29[1];
typedef int type_30[1];
typedef _anon2 type_31[15];
typedef _anon2 type_32[8];
typedef _anon2 type_33[7];
typedef _anon2 type_34[14];
typedef _anon2 type_35[7];
typedef _anon2 type_36[4];
typedef _anon2 type_37[14];
typedef float type_39[3];
typedef int type_40[1];
typedef _anon4 type_41[7];
typedef int type_42[1];
typedef _anon2 type_43[14];
typedef _anon3 type_44[34];
typedef _anon2 type_45[8];
typedef _anon2 type_46[8];
typedef _anon2 type_47[7];
typedef _anon2 type_48[3];
typedef _anon2 type_49[14];
typedef int type_50[1];
typedef _anon2 type_51[14];
typedef int type_53[1];
typedef _anon0 type_54[8];

enum _enum : unsigned char
{
	EIL_DEMO_TELEPHONE,
	EIL_DEMO_SLEEPING,
	EIL_DEMO_R_TO_L,
	EIL_DEMO_LIE_READING,
	EIL_DEMO_WITH_SUPER,
	EIL_DEMO_MAKEUP,
	EIL_DEMO_SITTING,
	EIL_DEMO_SLEEPING2,
	EIL_DEMO_R_TO_L_FAST,
	EIL_DEMO_L_TO_R_FAST,
	EIL_DEMO_CROSS_LEGS,
	EIL_DEMO_BLANK,
	EIL_DEMO_MANICURE,
	EIL_DEMO_PEDICURE,
	EIL_DEMO_SHAVING,
	EIL_DEMO_READING,
	EIL_DEMO_EATING,
	EIL_DEMO_THINKING,
	EIL_DEMO_STRETCH,
	EIL_DEMO_NOTICE,
	EIL_DEMO_STANDUP_AND_RUNAWAY,
	EIL_DEMO_TV1,
	EIL_DEMO_TV2,
	EIL_DEMO_TV3,
	EIL_DEMO_TV4,
	EIL_DEMO_TV5,
	EIL_DEMO_TV6,
	EIL_DEMO_TV7,
	EIL_DEMO_TV8,
	EIL_DEMO_TV9,
	EIL_DEMO_TV10,
	EIL_DEMO_SLEEPING3,
	EIL_DEMO_SLEEPING4,
	EIL_DEMO_NOBODY,
	EIL_DEMO_NUM
};

struct _anon0
{
	_enum(*func)();
	_enum index;
};

struct _anon1
{
	_enum(*func)();
	_enum index;
};

struct _anon2
{
	float prob[3];
	_enum index;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon3
{
	unsigned short demo_no;
	unsigned char is_loop;
	unsigned char demo_type;
};

struct _anon4
{
	_enum(*func)();
	_enum index;
};

struct _anon5
{
	unsigned char base;
	unsigned char range;
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

_anon3 eil_demo_info[34];
_anon5 interval_tbl[5];
_GAME_WORK gamew;
EventFlag event_flag;

int EileenDemoDemoNoToDemoType(int demo_no);
int EileenDemoIndexToDemoNo(_enum index);
int EileenDemoIndexToDemoType(_enum index);
int ev_peep_is_loop_demo(int demo_no);
void Eileen3ldkDemoSet(_enum demo_index);
int is_event_flag_ok();
_enum prob_check(_anon2* s0, int n);
_enum demo_after_with_super();
_enum demo_after_standup_and_runaway();
_enum demo_after_r_to_l();
_enum demo_after_r_to_l_fast();
_enum demo_after_telephon();
_enum demo_after_cross_leg();
_enum demo_after_blank();
_enum demo_after_notice();
_enum demo_after_tv1();
_enum demo_after_tv2();
_enum demo_after_tv3();
_enum demo_after_tv4();
_enum demo_after_tv5();
_enum demo_after_tv6();
_enum demo_after_tv7();
_enum demo_after_tv8();
_enum demo_after_tv9();
_enum demo_after_tv10();
_enum demo_after_l_to_r_fast();
_enum demo_after_stretch();
_enum demo_after_nobody_1();
_enum demo_after_sleeping();
_enum demo_after_lie_reading();
_enum demo_after_shaving();
_enum demo_after_eating();
_enum demo_after_sleeping2();
_enum demo_after_sitting();
_enum demo_after_reading();
_enum demo_after_nobody_2();
_enum demo_after_makeup();
_enum demo_after_manicure();
_enum demo_after_pedicure();
_enum demo_after_round();
_enum demo_after_sleeping_3();
_enum demo_after_sleeping_4();
_enum demo_after_nobody_3();
_enum demo_after_nobody();
_enum EileenDemoGetNextDemoIndex_ChangableUndress();
_enum EileenDemoGetNextDemoIndex_SingleUndress();
_enum EileenDemoGetNextDemoIndex_SingleDressup();
int ev_peep_next_demo_decide();

// 
// Start address: 0x2b5fb0
int EileenDemoDemoNoToDemoType(int demo_no)
{
	int i;
	int rtv;
	_anon3* p;
	// Line 154, Address: 0x2b5fb0, Func Offset: 0
	// Line 153, Address: 0x2b5fb4, Func Offset: 0x4
	// Line 154, Address: 0x2b5fb8, Func Offset: 0x8
	// Line 156, Address: 0x2b5fbc, Func Offset: 0xc
	// Line 157, Address: 0x2b5fc0, Func Offset: 0x10
	// Line 159, Address: 0x2b5fcc, Func Offset: 0x1c
	// Line 160, Address: 0x2b5fd4, Func Offset: 0x24
	// Line 162, Address: 0x2b5fd8, Func Offset: 0x28
	// Line 165, Address: 0x2b5fe8, Func Offset: 0x38
	// Func End, Address: 0x2b5ff0, Func Offset: 0x40
}

// 
// Start address: 0x2b5ff0
int EileenDemoIndexToDemoNo(_enum index)
{
	int demo_no;
	// Line 176, Address: 0x2b5ff4, Func Offset: 0x4
	// Line 177, Address: 0x2b6008, Func Offset: 0x18
	// Line 178, Address: 0x2b601c, Func Offset: 0x2c
	// Line 181, Address: 0x2b6020, Func Offset: 0x30
	// Func End, Address: 0x2b6028, Func Offset: 0x38
}

// 
// Start address: 0x2b6030
int EileenDemoIndexToDemoType(_enum index)
{
	int demo_type;
	// Line 192, Address: 0x2b6034, Func Offset: 0x4
	// Line 193, Address: 0x2b6048, Func Offset: 0x18
	// Line 194, Address: 0x2b605c, Func Offset: 0x2c
	// Line 197, Address: 0x2b6060, Func Offset: 0x30
	// Func End, Address: 0x2b6068, Func Offset: 0x38
}

// 
// Start address: 0x2b6070
int ev_peep_is_loop_demo(int demo_no)
{
	int i;
	_anon3* p;
	// Line 208, Address: 0x2b6070, Func Offset: 0
	// Line 210, Address: 0x2b6074, Func Offset: 0x4
	// Line 208, Address: 0x2b6078, Func Offset: 0x8
	// Line 210, Address: 0x2b607c, Func Offset: 0xc
	// Line 211, Address: 0x2b6080, Func Offset: 0x10
	// Line 212, Address: 0x2b608c, Func Offset: 0x1c
	// Line 213, Address: 0x2b6094, Func Offset: 0x24
	// Line 215, Address: 0x2b6098, Func Offset: 0x28
	// Line 217, Address: 0x2b60a8, Func Offset: 0x38
	// Line 218, Address: 0x2b60b0, Func Offset: 0x40
	// Func End, Address: 0x2b60b8, Func Offset: 0x48
}

// 
// Start address: 0x2b60c0
void Eileen3ldkDemoSet(_enum demo_index)
{
	int demo_type;
	_anon5* p;
	unsigned int interval;
	// Line 227, Address: 0x2b60c0, Func Offset: 0
	// Line 228, Address: 0x2b60d8, Func Offset: 0x18
	// Line 232, Address: 0x2b60e4, Func Offset: 0x24
	// Line 234, Address: 0x2b60f0, Func Offset: 0x30
	// Line 235, Address: 0x2b6100, Func Offset: 0x40
	// Line 237, Address: 0x2b610c, Func Offset: 0x4c
	// Line 235, Address: 0x2b6110, Func Offset: 0x50
	// Line 237, Address: 0x2b6114, Func Offset: 0x54
	// Line 238, Address: 0x2b611c, Func Offset: 0x5c
	// Line 239, Address: 0x2b6158, Func Offset: 0x98
	// Line 238, Address: 0x2b615c, Func Offset: 0x9c
	// Line 241, Address: 0x2b6170, Func Offset: 0xb0
	// Line 244, Address: 0x2b6178, Func Offset: 0xb8
	// Line 246, Address: 0x2b6198, Func Offset: 0xd8
	// Line 248, Address: 0x2b61a4, Func Offset: 0xe4
	// Line 246, Address: 0x2b61a8, Func Offset: 0xe8
	// Line 248, Address: 0x2b61ac, Func Offset: 0xec
	// Line 249, Address: 0x2b61b4, Func Offset: 0xf4
	// Line 250, Address: 0x2b61f0, Func Offset: 0x130
	// Line 249, Address: 0x2b61f4, Func Offset: 0x134
	// Line 250, Address: 0x2b6208, Func Offset: 0x148
	// Line 252, Address: 0x2b620c, Func Offset: 0x14c
	// Line 254, Address: 0x2b6210, Func Offset: 0x150
	// Line 253, Address: 0x2b6218, Func Offset: 0x158
	// Line 255, Address: 0x2b6224, Func Offset: 0x164
	// Func End, Address: 0x2b6240, Func Offset: 0x180
}

// 
// Start address: 0x2b6240
int is_event_flag_ok()
{
	// Line 277, Address: 0x2b6240, Func Offset: 0
	// Line 302, Address: 0x2b6248, Func Offset: 0x8
	// Line 303, Address: 0x2b6258, Func Offset: 0x18
	// Line 306, Address: 0x2b6260, Func Offset: 0x20
	// Line 307, Address: 0x2b6274, Func Offset: 0x34
	// Line 311, Address: 0x2b6280, Func Offset: 0x40
	// Line 312, Address: 0x2b6290, Func Offset: 0x50
	// Line 316, Address: 0x2b6298, Func Offset: 0x58
	// Line 317, Address: 0x2b62a8, Func Offset: 0x68
	// Line 321, Address: 0x2b62b0, Func Offset: 0x70
	// Line 325, Address: 0x2b62c8, Func Offset: 0x88
	// Func End, Address: 0x2b62d4, Func Offset: 0x94
}

// 
// Start address: 0x2b62e0
_enum prob_check(_anon2* s0, int n)
{
	int i;
	float prob;
	float prob_sum;
	int pl;
	int start;
	_anon2* s;
	// Line 329, Address: 0x2b62e0, Func Offset: 0
	// Line 331, Address: 0x2b6300, Func Offset: 0x20
	// Line 332, Address: 0x2b6308, Func Offset: 0x28
	// Line 333, Address: 0x2b630c, Func Offset: 0x2c
	// Line 334, Address: 0x2b6314, Func Offset: 0x34
	// Line 336, Address: 0x2b6320, Func Offset: 0x40
	// Line 334, Address: 0x2b6328, Func Offset: 0x48
	// Line 336, Address: 0x2b632c, Func Offset: 0x4c
	// Line 337, Address: 0x2b6338, Func Offset: 0x58
	// Line 339, Address: 0x2b6354, Func Offset: 0x74
	// Line 340, Address: 0x2b6360, Func Offset: 0x80
	// Line 341, Address: 0x2b637c, Func Offset: 0x9c
	// Line 343, Address: 0x2b6384, Func Offset: 0xa4
	// Line 345, Address: 0x2b6398, Func Offset: 0xb8
	// Line 346, Address: 0x2b63a0, Func Offset: 0xc0
	// Func End, Address: 0x2b63c0, Func Offset: 0xe0
}

// 
// Start address: 0x2b63c0
_enum demo_after_with_super()
{
	_anon2 state[1];
	// Line 366, Address: 0x2b63c0, Func Offset: 0
	// Func End, Address: 0x2b63d0, Func Offset: 0x10
}

// 
// Start address: 0x2b63d0
_enum demo_after_standup_and_runaway()
{
	_anon2 state[4];
	// Line 380, Address: 0x2b63d0, Func Offset: 0
	// Func End, Address: 0x2b63e0, Func Offset: 0x10
}

// 
// Start address: 0x2b63e0
_enum demo_after_r_to_l()
{
	_anon2 state[4];
	// Line 394, Address: 0x2b63e0, Func Offset: 0
	// Func End, Address: 0x2b63f0, Func Offset: 0x10
}

// 
// Start address: 0x2b63f0
_enum demo_after_r_to_l_fast()
{
	_anon2 state[4];
	// Line 408, Address: 0x2b63f0, Func Offset: 0
	// Func End, Address: 0x2b6400, Func Offset: 0x10
}

// 
// Start address: 0x2b6400
_enum demo_after_telephon()
{
	_anon2 state[3];
	// Line 421, Address: 0x2b6400, Func Offset: 0
	// Func End, Address: 0x2b6410, Func Offset: 0x10
}

// 
// Start address: 0x2b6410
_enum demo_after_cross_leg()
{
	_anon2 state[14];
	// Line 446, Address: 0x2b6410, Func Offset: 0
	// Func End, Address: 0x2b6420, Func Offset: 0x10
}

// 
// Start address: 0x2b6420
_enum demo_after_blank()
{
	_anon2 state[14];
	// Line 470, Address: 0x2b6420, Func Offset: 0
	// Func End, Address: 0x2b6430, Func Offset: 0x10
}

// 
// Start address: 0x2b6430
_enum demo_after_notice()
{
	_anon2 state[14];
	// Line 494, Address: 0x2b6430, Func Offset: 0
	// Func End, Address: 0x2b6440, Func Offset: 0x10
}

// 
// Start address: 0x2b6440
_enum demo_after_tv1()
{
	_anon2 state[14];
	// Line 518, Address: 0x2b6440, Func Offset: 0
	// Func End, Address: 0x2b6450, Func Offset: 0x10
}

// 
// Start address: 0x2b6450
_enum demo_after_tv2()
{
	_anon2 state[14];
	// Line 542, Address: 0x2b6450, Func Offset: 0
	// Func End, Address: 0x2b6460, Func Offset: 0x10
}

// 
// Start address: 0x2b6460
_enum demo_after_tv3()
{
	_anon2 state[14];
	// Line 566, Address: 0x2b6460, Func Offset: 0
	// Func End, Address: 0x2b6470, Func Offset: 0x10
}

// 
// Start address: 0x2b6470
_enum demo_after_tv4()
{
	_anon2 state[14];
	// Line 590, Address: 0x2b6470, Func Offset: 0
	// Func End, Address: 0x2b6480, Func Offset: 0x10
}

// 
// Start address: 0x2b6480
_enum demo_after_tv5()
{
	_anon2 state[14];
	// Line 614, Address: 0x2b6480, Func Offset: 0
	// Func End, Address: 0x2b6490, Func Offset: 0x10
}

// 
// Start address: 0x2b6490
_enum demo_after_tv6()
{
	_anon2 state[14];
	// Line 638, Address: 0x2b6490, Func Offset: 0
	// Func End, Address: 0x2b64a0, Func Offset: 0x10
}

// 
// Start address: 0x2b64a0
_enum demo_after_tv7()
{
	_anon2 state[14];
	// Line 662, Address: 0x2b64a0, Func Offset: 0
	// Func End, Address: 0x2b64b0, Func Offset: 0x10
}

// 
// Start address: 0x2b64b0
_enum demo_after_tv8()
{
	_anon2 state[14];
	// Line 686, Address: 0x2b64b0, Func Offset: 0
	// Func End, Address: 0x2b64c0, Func Offset: 0x10
}

// 
// Start address: 0x2b64c0
_enum demo_after_tv9()
{
	_anon2 state[14];
	// Line 710, Address: 0x2b64c0, Func Offset: 0
	// Func End, Address: 0x2b64d0, Func Offset: 0x10
}

// 
// Start address: 0x2b64d0
_enum demo_after_tv10()
{
	_anon2 state[14];
	// Line 734, Address: 0x2b64d0, Func Offset: 0
	// Func End, Address: 0x2b64e0, Func Offset: 0x10
}

// 
// Start address: 0x2b64e0
_enum demo_after_l_to_r_fast()
{
	_anon2 state[4];
	// Line 751, Address: 0x2b64e0, Func Offset: 0
	// Func End, Address: 0x2b64f0, Func Offset: 0x10
}

// 
// Start address: 0x2b64f0
_enum demo_after_stretch()
{
	_anon2 state[3];
	// Line 764, Address: 0x2b64f0, Func Offset: 0
	// Func End, Address: 0x2b6500, Func Offset: 0x10
}

// 
// Start address: 0x2b6500
_enum demo_after_nobody_1()
{
	_anon2 state[15];
	// Line 789, Address: 0x2b6500, Func Offset: 0
	// Func End, Address: 0x2b6510, Func Offset: 0x10
}

// 
// Start address: 0x2b6510
_enum demo_after_sleeping()
{
	_anon2 state[8];
	// Line 814, Address: 0x2b6510, Func Offset: 0
	// Func End, Address: 0x2b6520, Func Offset: 0x10
}

// 
// Start address: 0x2b6520
_enum demo_after_lie_reading()
{
	_anon2 state[8];
	// Line 833, Address: 0x2b6520, Func Offset: 0
	// Func End, Address: 0x2b6530, Func Offset: 0x10
}

// 
// Start address: 0x2b6530
_enum demo_after_shaving()
{
	_anon2 state[8];
	// Line 851, Address: 0x2b6530, Func Offset: 0
	// Func End, Address: 0x2b6540, Func Offset: 0x10
}

// 
// Start address: 0x2b6540
_enum demo_after_eating()
{
	_anon2 state[8];
	// Line 869, Address: 0x2b6540, Func Offset: 0
	// Func End, Address: 0x2b6550, Func Offset: 0x10
}

// 
// Start address: 0x2b6550
_enum demo_after_sleeping2()
{
	_anon2 state[8];
	// Line 887, Address: 0x2b6550, Func Offset: 0
	// Func End, Address: 0x2b6560, Func Offset: 0x10
}

// 
// Start address: 0x2b6560
_enum demo_after_sitting()
{
	_anon2 state[8];
	// Line 905, Address: 0x2b6560, Func Offset: 0
	// Func End, Address: 0x2b6570, Func Offset: 0x10
}

// 
// Start address: 0x2b6570
_enum demo_after_reading()
{
	_anon2 state[8];
	// Line 923, Address: 0x2b6570, Func Offset: 0
	// Func End, Address: 0x2b6580, Func Offset: 0x10
}

// 
// Start address: 0x2b6580
_enum demo_after_nobody_2()
{
	_anon2 state[8];
	// Line 941, Address: 0x2b6580, Func Offset: 0
	// Func End, Address: 0x2b6590, Func Offset: 0x10
}

// 
// Start address: 0x2b6590
_enum demo_after_makeup()
{
	_anon2 state[7];
	// Line 965, Address: 0x2b6590, Func Offset: 0
	// Func End, Address: 0x2b65a0, Func Offset: 0x10
}

// 
// Start address: 0x2b65a0
_enum demo_after_manicure()
{
	_anon2 state[7];
	// Line 982, Address: 0x2b65a0, Func Offset: 0
	// Func End, Address: 0x2b65b0, Func Offset: 0x10
}

// 
// Start address: 0x2b65b0
_enum demo_after_pedicure()
{
	_anon2 state[7];
	// Line 999, Address: 0x2b65b0, Func Offset: 0
	// Func End, Address: 0x2b65c0, Func Offset: 0x10
}

// 
// Start address: 0x2b65c0
_enum demo_after_round()
{
	_anon2 state[7];
	// Line 1016, Address: 0x2b65c0, Func Offset: 0
	// Func End, Address: 0x2b65d0, Func Offset: 0x10
}

// 
// Start address: 0x2b65d0
_enum demo_after_sleeping_3()
{
	_anon2 state[7];
	// Line 1033, Address: 0x2b65d0, Func Offset: 0
	// Func End, Address: 0x2b65e0, Func Offset: 0x10
}

// 
// Start address: 0x2b65e0
_enum demo_after_sleeping_4()
{
	_anon2 state[7];
	// Line 1050, Address: 0x2b65e0, Func Offset: 0
	// Func End, Address: 0x2b65f0, Func Offset: 0x10
}

// 
// Start address: 0x2b65f0
_enum demo_after_nobody_3()
{
	_anon2 state[7];
	// Line 1068, Address: 0x2b65f0, Func Offset: 0
	// Func End, Address: 0x2b6600, Func Offset: 0x10
}

// 
// Start address: 0x2b6600
_enum demo_after_nobody()
{
	_enum next_demo_index;
	// Line 1073, Address: 0x2b6600, Func Offset: 0
	// Line 1076, Address: 0x2b6604, Func Offset: 0x4
	// Line 1073, Address: 0x2b6608, Func Offset: 0x8
	// Line 1076, Address: 0x2b660c, Func Offset: 0xc
	// Line 1078, Address: 0x2b661c, Func Offset: 0x1c
	// Line 1079, Address: 0x2b6624, Func Offset: 0x24
	// Line 1081, Address: 0x2b6630, Func Offset: 0x30
	// Line 1083, Address: 0x2b6640, Func Offset: 0x40
	// Line 1084, Address: 0x2b6648, Func Offset: 0x48
	// Line 1087, Address: 0x2b6650, Func Offset: 0x50
	// Line 1091, Address: 0x2b6658, Func Offset: 0x58
	// Func End, Address: 0x2b6664, Func Offset: 0x64
}

// 
// Start address: 0x2b6670
_enum EileenDemoGetNextDemoIndex_ChangableUndress()
{
	_anon1* p;
	_enum pre;
	int i;
	_anon1 d[21];
	// Line 1099, Address: 0x2b6670, Func Offset: 0
	// Line 1127, Address: 0x2b6674, Func Offset: 0x4
	// Line 1099, Address: 0x2b6678, Func Offset: 0x8
	// Line 1128, Address: 0x2b667c, Func Offset: 0xc
	// Line 1127, Address: 0x2b6684, Func Offset: 0x14
	// Line 1131, Address: 0x2b6688, Func Offset: 0x18
	// Line 1132, Address: 0x2b6690, Func Offset: 0x20
	// Line 1133, Address: 0x2b669c, Func Offset: 0x2c
	// Line 1136, Address: 0x2b66b0, Func Offset: 0x40
	// Line 1138, Address: 0x2b66c0, Func Offset: 0x50
	// Line 1139, Address: 0x2b66c8, Func Offset: 0x58
	// Func End, Address: 0x2b66d4, Func Offset: 0x64
}

// 
// Start address: 0x2b66e0
_enum EileenDemoGetNextDemoIndex_SingleUndress()
{
	_anon0* p;
	_enum pre;
	int i;
	_anon0 d[8];
	// Line 1146, Address: 0x2b66e0, Func Offset: 0
	// Line 1161, Address: 0x2b66e4, Func Offset: 0x4
	// Line 1146, Address: 0x2b66e8, Func Offset: 0x8
	// Line 1162, Address: 0x2b66ec, Func Offset: 0xc
	// Line 1161, Address: 0x2b66f4, Func Offset: 0x14
	// Line 1165, Address: 0x2b66f8, Func Offset: 0x18
	// Line 1166, Address: 0x2b6700, Func Offset: 0x20
	// Line 1167, Address: 0x2b670c, Func Offset: 0x2c
	// Line 1170, Address: 0x2b6720, Func Offset: 0x40
	// Line 1171, Address: 0x2b6730, Func Offset: 0x50
	// Line 1172, Address: 0x2b6738, Func Offset: 0x58
	// Func End, Address: 0x2b6744, Func Offset: 0x64
}

// 
// Start address: 0x2b6750
_enum EileenDemoGetNextDemoIndex_SingleDressup()
{
	_anon4* p;
	_enum pre;
	int i;
	_anon4 d[7];
	// Line 1179, Address: 0x2b6750, Func Offset: 0
	// Line 1193, Address: 0x2b6754, Func Offset: 0x4
	// Line 1179, Address: 0x2b6758, Func Offset: 0x8
	// Line 1194, Address: 0x2b675c, Func Offset: 0xc
	// Line 1193, Address: 0x2b6764, Func Offset: 0x14
	// Line 1197, Address: 0x2b6768, Func Offset: 0x18
	// Line 1198, Address: 0x2b6770, Func Offset: 0x20
	// Line 1199, Address: 0x2b677c, Func Offset: 0x2c
	// Line 1202, Address: 0x2b6790, Func Offset: 0x40
	// Line 1203, Address: 0x2b67a0, Func Offset: 0x50
	// Line 1204, Address: 0x2b67a8, Func Offset: 0x58
	// Func End, Address: 0x2b67b4, Func Offset: 0x64
}

// 
// Start address: 0x2b67c0
int ev_peep_next_demo_decide()
{
	_enum next_demo_index;
	unsigned long interval;
	int pre_demo_type;
	int demo_type;
	// Line 1213, Address: 0x2b67c0, Func Offset: 0
	// Line 1216, Address: 0x2b67cc, Func Offset: 0xc
	// Line 1219, Address: 0x2b67dc, Func Offset: 0x1c
	// Line 1221, Address: 0x2b67ec, Func Offset: 0x2c
	// Line 1219, Address: 0x2b67f0, Func Offset: 0x30
	// Line 1221, Address: 0x2b67f4, Func Offset: 0x34
	// Line 1219, Address: 0x2b67f8, Func Offset: 0x38
	// Line 1221, Address: 0x2b67fc, Func Offset: 0x3c
	// Line 1223, Address: 0x2b680c, Func Offset: 0x4c
	// Line 1221, Address: 0x2b6810, Func Offset: 0x50
	// Line 1223, Address: 0x2b6814, Func Offset: 0x54
	// Line 1224, Address: 0x2b681c, Func Offset: 0x5c
	// Line 1225, Address: 0x2b6824, Func Offset: 0x64
	// Line 1228, Address: 0x2b6830, Func Offset: 0x70
	// Line 1230, Address: 0x2b6838, Func Offset: 0x78
	// Line 1232, Address: 0x2b6858, Func Offset: 0x98
	// Line 1233, Address: 0x2b6860, Func Offset: 0xa0
	// Line 1236, Address: 0x2b6868, Func Offset: 0xa8
	// Line 1239, Address: 0x2b686c, Func Offset: 0xac
	// Line 1245, Address: 0x2b6878, Func Offset: 0xb8
	// Line 1246, Address: 0x2b688c, Func Offset: 0xcc
	// Line 1248, Address: 0x2b68a0, Func Offset: 0xe0
	// Line 1252, Address: 0x2b68a8, Func Offset: 0xe8
	// Line 1255, Address: 0x2b68b0, Func Offset: 0xf0
	// Line 1257, Address: 0x2b68b8, Func Offset: 0xf8
	// Line 1258, Address: 0x2b68c0, Func Offset: 0x100
	// Line 1259, Address: 0x2b68c8, Func Offset: 0x108
	// Line 1261, Address: 0x2b68d0, Func Offset: 0x110
	// Line 1263, Address: 0x2b68dc, Func Offset: 0x11c
	// Line 1265, Address: 0x2b68e0, Func Offset: 0x120
	// Line 1266, Address: 0x2b68e8, Func Offset: 0x128
	// Line 1270, Address: 0x2b68f0, Func Offset: 0x130
	// Line 1273, Address: 0x2b6900, Func Offset: 0x140
	// Line 1274, Address: 0x2b6908, Func Offset: 0x148
	// Line 1273, Address: 0x2b690c, Func Offset: 0x14c
	// Line 1274, Address: 0x2b6910, Func Offset: 0x150
	// Line 1273, Address: 0x2b6914, Func Offset: 0x154
	// Line 1274, Address: 0x2b6920, Func Offset: 0x160
	// Func End, Address: 0x2b6928, Func Offset: 0x168
}

