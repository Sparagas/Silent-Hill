typedef struct _GetItemParamScaleDt;
typedef struct _ItemMemoFlagDt;
typedef struct _ItemMsgCtrlDt;
typedef struct _GetItemParamFileDt;
typedef struct _ItemParamHitDt;
typedef union _anon0;
typedef struct _GAME_WORK;


typedef _GetItemParamScaleDt type_0[17];
typedef int type_1[1];
typedef int type_2[1];
typedef int type_3[1];
typedef _ItemMsgCtrlDt type_4[40];
typedef float type_5[4];
typedef float type_6[4][4];
typedef int type_7[1];
typedef int type_8[1];
typedef int type_9[1];
typedef _GetItemParamFileDt type_10[153];
typedef float type_11[4];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef int type_15[1];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef _ItemMemoFlagDt type_19[52];

struct _GetItemParamScaleDt
{
	float sx;
	float sy;
	float sz;
	short id;
	short world;
};

struct _ItemMemoFlagDt
{
	short flag;
	short id;
};

struct _ItemMsgCtrlDt
{
	_anon0* cmd;
	short id;
};

struct _GetItemParamFileDt
{
	unsigned int model_id;
	unsigned int tex_id;
	short id;
};

struct _ItemParamHitDt
{
	float cl_r;
	float cl_h;
	float cb_w;
	float cb_h;
	float cb_d;
	float sp_r;
	short id;
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

_ItemParamHitDt item_param_hit_default;
_GetItemParamFileDt item_param_fileid_default;
_GetItemParamFileDt item_param_fileid[153];
_ItemMsgCtrlDt item_param_msg_ctrldt_default;
_ItemMsgCtrlDt item_param_msg_ctrldt[40];
_GetItemParamScaleDt item_param_scale_default;
_GetItemParamScaleDt item_param_scale[17];
_ItemMemoFlagDt item_param_memo_flag_default;
_ItemMemoFlagDt item_param_memo_flag[52];
_GAME_WORK gamew;

_ItemParamHitDt* GameItemParamHitDt();
_GetItemParamFileDt* GameGetItemParamFileDt(int id);
_ItemMsgCtrlDt* GameItemMsgCtrlDt(int id);
_ItemMemoFlagDt* GameItemParamMemoFlag(int id);
_GetItemParamScaleDt* GameGetItemParamScaleDt(int id);
float GameGetItemParamClR(int id);
float GameGetItemParamClH(int id);
float GameGetItemParamCbW(int id);
float GameGetItemParamCbH(int id);
float GameGetItemParamCbD(int id);
float GameGetItemParamSpR(int id);
float GameGetItemParamSx(int id);
float GameGetItemParamSy(int id);
float GameGetItemParamSz(int id);
unsigned int GameGetItemParamModelId(int id);
unsigned int GameGetItemParamTexId(int id);
_anon0* GameGetItemMsgCtrlDt(int id);
short GameGetItemParamMemoFlag(int id);

// 
// Start address: 0x219220
_ItemParamHitDt* GameItemParamHitDt()
{
	// Line 455, Address: 0x219220, Func Offset: 0
	// Line 458, Address: 0x219224, Func Offset: 0x4
	// Func End, Address: 0x21922c, Func Offset: 0xc
}

// 
// Start address: 0x219230
_GetItemParamFileDt* GameGetItemParamFileDt(int id)
{
	int i;
	// Line 467, Address: 0x219230, Func Offset: 0
	// Line 468, Address: 0x219240, Func Offset: 0x10
	// Line 469, Address: 0x21924c, Func Offset: 0x1c
	// Line 471, Address: 0x219268, Func Offset: 0x38
	// Line 472, Address: 0x219278, Func Offset: 0x48
	// Line 475, Address: 0x219280, Func Offset: 0x50
	// Func End, Address: 0x219288, Func Offset: 0x58
}

// 
// Start address: 0x219290
_ItemMsgCtrlDt* GameItemMsgCtrlDt(int id)
{
	int i;
	// Line 484, Address: 0x219290, Func Offset: 0
	// Line 485, Address: 0x2192a0, Func Offset: 0x10
	// Line 486, Address: 0x2192ac, Func Offset: 0x1c
	// Line 488, Address: 0x2192bc, Func Offset: 0x2c
	// Line 489, Address: 0x2192d0, Func Offset: 0x40
	// Line 492, Address: 0x2192d8, Func Offset: 0x48
	// Func End, Address: 0x2192e0, Func Offset: 0x50
}

// 
// Start address: 0x2192e0
_ItemMemoFlagDt* GameItemParamMemoFlag(int id)
{
	int i;
	// Line 501, Address: 0x2192e0, Func Offset: 0
	// Line 502, Address: 0x2192f0, Func Offset: 0x10
	// Line 503, Address: 0x2192fc, Func Offset: 0x1c
	// Line 505, Address: 0x21930c, Func Offset: 0x2c
	// Line 506, Address: 0x219320, Func Offset: 0x40
	// Line 509, Address: 0x219328, Func Offset: 0x48
	// Func End, Address: 0x219330, Func Offset: 0x50
}

// 
// Start address: 0x219330
_GetItemParamScaleDt* GameGetItemParamScaleDt(int id)
{
	int i;
	// Line 518, Address: 0x219330, Func Offset: 0
	// Line 519, Address: 0x219344, Func Offset: 0x14
	// Line 518, Address: 0x21934c, Func Offset: 0x1c
	// Line 519, Address: 0x219350, Func Offset: 0x20
	// Line 520, Address: 0x21938c, Func Offset: 0x5c
	// Line 522, Address: 0x21939c, Func Offset: 0x6c
	// Line 523, Address: 0x2193b0, Func Offset: 0x80
	// Line 526, Address: 0x2193b8, Func Offset: 0x88
	// Func End, Address: 0x2193c0, Func Offset: 0x90
}

// 
// Start address: 0x2193c0
float GameGetItemParamClR(int id)
{
	// Line 535, Address: 0x2193c0, Func Offset: 0
	// Line 536, Address: 0x2193c8, Func Offset: 0x8
	// Line 537, Address: 0x2193d0, Func Offset: 0x10
	// Line 536, Address: 0x2193d4, Func Offset: 0x14
	// Line 537, Address: 0x2193d8, Func Offset: 0x18
	// Func End, Address: 0x2193e0, Func Offset: 0x20
}

// 
// Start address: 0x2193e0
float GameGetItemParamClH(int id)
{
	// Line 546, Address: 0x2193e0, Func Offset: 0
	// Line 547, Address: 0x2193e8, Func Offset: 0x8
	// Line 548, Address: 0x2193f0, Func Offset: 0x10
	// Line 547, Address: 0x2193f4, Func Offset: 0x14
	// Line 548, Address: 0x2193f8, Func Offset: 0x18
	// Func End, Address: 0x219400, Func Offset: 0x20
}

// 
// Start address: 0x219400
float GameGetItemParamCbW(int id)
{
	// Line 557, Address: 0x219400, Func Offset: 0
	// Line 558, Address: 0x219408, Func Offset: 0x8
	// Line 559, Address: 0x219410, Func Offset: 0x10
	// Line 558, Address: 0x219414, Func Offset: 0x14
	// Line 559, Address: 0x219418, Func Offset: 0x18
	// Func End, Address: 0x219420, Func Offset: 0x20
}

// 
// Start address: 0x219420
float GameGetItemParamCbH(int id)
{
	// Line 568, Address: 0x219420, Func Offset: 0
	// Line 569, Address: 0x219428, Func Offset: 0x8
	// Line 570, Address: 0x219430, Func Offset: 0x10
	// Line 569, Address: 0x219434, Func Offset: 0x14
	// Line 570, Address: 0x219438, Func Offset: 0x18
	// Func End, Address: 0x219440, Func Offset: 0x20
}

// 
// Start address: 0x219440
float GameGetItemParamCbD(int id)
{
	// Line 579, Address: 0x219440, Func Offset: 0
	// Line 580, Address: 0x219448, Func Offset: 0x8
	// Line 581, Address: 0x219450, Func Offset: 0x10
	// Line 580, Address: 0x219454, Func Offset: 0x14
	// Line 581, Address: 0x219458, Func Offset: 0x18
	// Func End, Address: 0x219460, Func Offset: 0x20
}

// 
// Start address: 0x219460
float GameGetItemParamSpR(int id)
{
	// Line 590, Address: 0x219460, Func Offset: 0
	// Line 591, Address: 0x219468, Func Offset: 0x8
	// Line 592, Address: 0x219470, Func Offset: 0x10
	// Line 591, Address: 0x219474, Func Offset: 0x14
	// Line 592, Address: 0x219478, Func Offset: 0x18
	// Func End, Address: 0x219480, Func Offset: 0x20
}

// 
// Start address: 0x219480
float GameGetItemParamSx(int id)
{
	// Line 601, Address: 0x219480, Func Offset: 0
	// Line 602, Address: 0x219488, Func Offset: 0x8
	// Line 603, Address: 0x219490, Func Offset: 0x10
	// Line 602, Address: 0x219494, Func Offset: 0x14
	// Line 603, Address: 0x219498, Func Offset: 0x18
	// Func End, Address: 0x2194a0, Func Offset: 0x20
}

// 
// Start address: 0x2194a0
float GameGetItemParamSy(int id)
{
	// Line 612, Address: 0x2194a0, Func Offset: 0
	// Line 613, Address: 0x2194a8, Func Offset: 0x8
	// Line 614, Address: 0x2194b0, Func Offset: 0x10
	// Line 613, Address: 0x2194b4, Func Offset: 0x14
	// Line 614, Address: 0x2194b8, Func Offset: 0x18
	// Func End, Address: 0x2194c0, Func Offset: 0x20
}

// 
// Start address: 0x2194c0
float GameGetItemParamSz(int id)
{
	// Line 623, Address: 0x2194c0, Func Offset: 0
	// Line 624, Address: 0x2194c8, Func Offset: 0x8
	// Line 625, Address: 0x2194d0, Func Offset: 0x10
	// Line 624, Address: 0x2194d4, Func Offset: 0x14
	// Line 625, Address: 0x2194d8, Func Offset: 0x18
	// Func End, Address: 0x2194e0, Func Offset: 0x20
}

// 
// Start address: 0x2194e0
unsigned int GameGetItemParamModelId(int id)
{
	// Line 634, Address: 0x2194e0, Func Offset: 0
	// Line 635, Address: 0x2194e8, Func Offset: 0x8
	// Line 636, Address: 0x2194f0, Func Offset: 0x10
	// Line 635, Address: 0x2194f4, Func Offset: 0x14
	// Line 636, Address: 0x2194f8, Func Offset: 0x18
	// Func End, Address: 0x219500, Func Offset: 0x20
}

// 
// Start address: 0x219500
unsigned int GameGetItemParamTexId(int id)
{
	// Line 645, Address: 0x219500, Func Offset: 0
	// Line 646, Address: 0x219508, Func Offset: 0x8
	// Line 647, Address: 0x219510, Func Offset: 0x10
	// Line 646, Address: 0x219514, Func Offset: 0x14
	// Line 647, Address: 0x219518, Func Offset: 0x18
	// Func End, Address: 0x219520, Func Offset: 0x20
}

// 
// Start address: 0x219520
_anon0* GameGetItemMsgCtrlDt(int id)
{
	// Line 656, Address: 0x219520, Func Offset: 0
	// Line 657, Address: 0x219528, Func Offset: 0x8
	// Line 658, Address: 0x219530, Func Offset: 0x10
	// Line 657, Address: 0x219534, Func Offset: 0x14
	// Line 658, Address: 0x219538, Func Offset: 0x18
	// Func End, Address: 0x219540, Func Offset: 0x20
}

// 
// Start address: 0x219540
short GameGetItemParamMemoFlag(int id)
{
	// Line 667, Address: 0x219540, Func Offset: 0
	// Line 668, Address: 0x219548, Func Offset: 0x8
	// Line 669, Address: 0x219550, Func Offset: 0x10
	// Line 668, Address: 0x219554, Func Offset: 0x14
	// Line 669, Address: 0x219558, Func Offset: 0x18
	// Func End, Address: 0x219560, Func Offset: 0x20
}

