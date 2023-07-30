typedef struct _sfAlsTable;
typedef struct _anon0;
typedef enum _enum : unsigned char;
typedef struct _GAME_WORK;

typedef int(*type_8)(int*, int*, int);
typedef int(*type_11)(int*, int*, int);

typedef _sfAlsTable type_0[0];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef int type_7[1];
typedef int type_9[1];
typedef int type_10[1];
typedef int(*type_12)(int*, int*, int)[14];
typedef int type_13[1];

struct _sfAlsTable
{
	short afs_id;
	short afs_index;
};

struct _anon0
{
	char* name;
	int size;
	int merge_index;
};

enum _enum : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
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

int(*sd_merge_func)(int*, int*, int)[14];
_sfAlsTable sf_als_table[0];
_GAME_WORK gamew;

int sdMergeRL(int* pt, int* id, int no);
int sdMergeSB(int* pt, int* id, int no);
int sdMergeFR(int* pt, int* id, int no);
int sdMergeMZ(int* pt, int* id, int no);
int sdMergeBD(int* pt, int* id, int no);
int sdMergeCM(int* pt, int* id, int no);
int sdMergeHS(int* pt, int* id, int no);
int sdMergeIE(int* pt, int* id, int no);
int sdMergeLS(int* pt, int* id, int no);
int sdMergeGT(int* pt, int* id, int no);
int sdMergeGetFileInfo(int no);
int sdMergeST(int* pt, int* id, int no);
int sdMergeCommon(int* pt, int* id, int no);
int sdMergeGetAdxNoFromBgmNo(int* pt, int* id, int bgm_no);

// 
// Start address: 0x26f840
int sdMergeRL(int* pt, int* id, int no)
{
	int afs_id;
	// Line 76, Address: 0x26f840, Func Offset: 0
	// Line 82, Address: 0x26f960, Func Offset: 0x120
	// Line 85, Address: 0x26f968, Func Offset: 0x128
	// Line 88, Address: 0x26f970, Func Offset: 0x130
	// Line 91, Address: 0x26f978, Func Offset: 0x138
	// Line 94, Address: 0x26f980, Func Offset: 0x140
	// Line 97, Address: 0x26f988, Func Offset: 0x148
	// Line 100, Address: 0x26f990, Func Offset: 0x150
	// Line 103, Address: 0x26f998, Func Offset: 0x158
	// Line 106, Address: 0x26f9a0, Func Offset: 0x160
	// Line 109, Address: 0x26f9a8, Func Offset: 0x168
	// Line 112, Address: 0x26f9b0, Func Offset: 0x170
	// Line 115, Address: 0x26f9b8, Func Offset: 0x178
	// Line 118, Address: 0x26f9c0, Func Offset: 0x180
	// Line 122, Address: 0x26f9c8, Func Offset: 0x188
	// Line 125, Address: 0x26f9d0, Func Offset: 0x190
	// Line 128, Address: 0x26f9d8, Func Offset: 0x198
	// Line 131, Address: 0x26f9e0, Func Offset: 0x1a0
	// Line 134, Address: 0x26f9e8, Func Offset: 0x1a8
	// Line 137, Address: 0x26f9f0, Func Offset: 0x1b0
	// Line 140, Address: 0x26f9f8, Func Offset: 0x1b8
	// Line 143, Address: 0x26fa00, Func Offset: 0x1c0
	// Line 146, Address: 0x26fa08, Func Offset: 0x1c8
	// Line 149, Address: 0x26fa10, Func Offset: 0x1d0
	// Line 152, Address: 0x26fa18, Func Offset: 0x1d8
	// Line 155, Address: 0x26fa20, Func Offset: 0x1e0
	// Line 158, Address: 0x26fa28, Func Offset: 0x1e8
	// Line 161, Address: 0x26fa30, Func Offset: 0x1f0
	// Line 165, Address: 0x26fa38, Func Offset: 0x1f8
	// Line 168, Address: 0x26fa40, Func Offset: 0x200
	// Line 170, Address: 0x26fa44, Func Offset: 0x204
	// Line 172, Address: 0x26fa48, Func Offset: 0x208
	// Line 175, Address: 0x26fa4c, Func Offset: 0x20c
	// Line 173, Address: 0x26fa50, Func Offset: 0x210
	// Line 178, Address: 0x26fa58, Func Offset: 0x218
	// Func End, Address: 0x26fa60, Func Offset: 0x220
}

// 
// Start address: 0x26fa60
int sdMergeSB(int* pt, int* id, int no)
{
	int afs_id;
	// Line 185, Address: 0x26fa60, Func Offset: 0
	// Line 187, Address: 0x26fb94, Func Offset: 0x134
	// Line 189, Address: 0x26fb98, Func Offset: 0x138
	// Line 192, Address: 0x26fba0, Func Offset: 0x140
	// Line 195, Address: 0x26fba8, Func Offset: 0x148
	// Line 198, Address: 0x26fbb0, Func Offset: 0x150
	// Line 201, Address: 0x26fbb8, Func Offset: 0x158
	// Line 204, Address: 0x26fbc0, Func Offset: 0x160
	// Line 207, Address: 0x26fbc8, Func Offset: 0x168
	// Line 210, Address: 0x26fbd0, Func Offset: 0x170
	// Line 213, Address: 0x26fbd8, Func Offset: 0x178
	// Line 216, Address: 0x26fbe0, Func Offset: 0x180
	// Line 219, Address: 0x26fbe8, Func Offset: 0x188
	// Line 222, Address: 0x26fbf0, Func Offset: 0x190
	// Line 225, Address: 0x26fbf8, Func Offset: 0x198
	// Line 228, Address: 0x26fc00, Func Offset: 0x1a0
	// Line 231, Address: 0x26fc08, Func Offset: 0x1a8
	// Line 234, Address: 0x26fc10, Func Offset: 0x1b0
	// Line 238, Address: 0x26fc18, Func Offset: 0x1b8
	// Line 241, Address: 0x26fc20, Func Offset: 0x1c0
	// Line 244, Address: 0x26fc28, Func Offset: 0x1c8
	// Line 247, Address: 0x26fc30, Func Offset: 0x1d0
	// Line 250, Address: 0x26fc38, Func Offset: 0x1d8
	// Line 253, Address: 0x26fc40, Func Offset: 0x1e0
	// Line 256, Address: 0x26fc48, Func Offset: 0x1e8
	// Line 259, Address: 0x26fc50, Func Offset: 0x1f0
	// Line 262, Address: 0x26fc58, Func Offset: 0x1f8
	// Line 265, Address: 0x26fc60, Func Offset: 0x200
	// Line 268, Address: 0x26fc68, Func Offset: 0x208
	// Line 271, Address: 0x26fc70, Func Offset: 0x210
	// Line 274, Address: 0x26fc78, Func Offset: 0x218
	// Line 277, Address: 0x26fc80, Func Offset: 0x220
	// Line 280, Address: 0x26fc88, Func Offset: 0x228
	// Line 282, Address: 0x26fc8c, Func Offset: 0x22c
	// Line 284, Address: 0x26fc90, Func Offset: 0x230
	// Line 287, Address: 0x26fc94, Func Offset: 0x234
	// Line 285, Address: 0x26fc98, Func Offset: 0x238
	// Line 291, Address: 0x26fca0, Func Offset: 0x240
	// Func End, Address: 0x26fca8, Func Offset: 0x248
}

// 
// Start address: 0x26fcb0
int sdMergeFR(int* pt, int* id, int no)
{
	int afs_id;
	// Line 298, Address: 0x26fcb0, Func Offset: 0
	// Line 300, Address: 0x26ff44, Func Offset: 0x294
	// Line 302, Address: 0x26ff48, Func Offset: 0x298
	// Line 305, Address: 0x26ff50, Func Offset: 0x2a0
	// Line 308, Address: 0x26ff58, Func Offset: 0x2a8
	// Line 311, Address: 0x26ff60, Func Offset: 0x2b0
	// Line 314, Address: 0x26ff68, Func Offset: 0x2b8
	// Line 317, Address: 0x26ff70, Func Offset: 0x2c0
	// Line 320, Address: 0x26ff78, Func Offset: 0x2c8
	// Line 323, Address: 0x26ff80, Func Offset: 0x2d0
	// Line 326, Address: 0x26ff88, Func Offset: 0x2d8
	// Line 329, Address: 0x26ff90, Func Offset: 0x2e0
	// Line 332, Address: 0x26ff98, Func Offset: 0x2e8
	// Line 336, Address: 0x26ffa0, Func Offset: 0x2f0
	// Line 339, Address: 0x26ffa8, Func Offset: 0x2f8
	// Line 342, Address: 0x26ffb0, Func Offset: 0x300
	// Line 345, Address: 0x26ffb8, Func Offset: 0x308
	// Line 348, Address: 0x26ffc0, Func Offset: 0x310
	// Line 351, Address: 0x26ffc8, Func Offset: 0x318
	// Line 354, Address: 0x26ffd0, Func Offset: 0x320
	// Line 357, Address: 0x26ffd8, Func Offset: 0x328
	// Line 360, Address: 0x26ffe0, Func Offset: 0x330
	// Line 363, Address: 0x26ffe8, Func Offset: 0x338
	// Line 366, Address: 0x26fff0, Func Offset: 0x340
	// Line 369, Address: 0x26fff8, Func Offset: 0x348
	// Line 373, Address: 0x270000, Func Offset: 0x350
	// Line 376, Address: 0x270008, Func Offset: 0x358
	// Line 379, Address: 0x270010, Func Offset: 0x360
	// Line 382, Address: 0x270018, Func Offset: 0x368
	// Line 385, Address: 0x270020, Func Offset: 0x370
	// Line 388, Address: 0x270028, Func Offset: 0x378
	// Line 391, Address: 0x270030, Func Offset: 0x380
	// Line 394, Address: 0x270038, Func Offset: 0x388
	// Line 397, Address: 0x270040, Func Offset: 0x390
	// Line 401, Address: 0x270048, Func Offset: 0x398
	// Line 404, Address: 0x270050, Func Offset: 0x3a0
	// Line 407, Address: 0x270058, Func Offset: 0x3a8
	// Line 410, Address: 0x270060, Func Offset: 0x3b0
	// Line 413, Address: 0x270068, Func Offset: 0x3b8
	// Line 416, Address: 0x270070, Func Offset: 0x3c0
	// Line 419, Address: 0x270078, Func Offset: 0x3c8
	// Line 422, Address: 0x270080, Func Offset: 0x3d0
	// Line 425, Address: 0x270088, Func Offset: 0x3d8
	// Line 428, Address: 0x270090, Func Offset: 0x3e0
	// Line 431, Address: 0x270098, Func Offset: 0x3e8
	// Line 434, Address: 0x2700a0, Func Offset: 0x3f0
	// Line 437, Address: 0x2700a8, Func Offset: 0x3f8
	// Line 440, Address: 0x2700b0, Func Offset: 0x400
	// Line 443, Address: 0x2700b8, Func Offset: 0x408
	// Line 446, Address: 0x2700c0, Func Offset: 0x410
	// Line 449, Address: 0x2700c8, Func Offset: 0x418
	// Line 452, Address: 0x2700d0, Func Offset: 0x420
	// Line 455, Address: 0x2700d8, Func Offset: 0x428
	// Line 458, Address: 0x2700e0, Func Offset: 0x430
	// Line 461, Address: 0x2700e8, Func Offset: 0x438
	// Line 464, Address: 0x2700f0, Func Offset: 0x440
	// Line 467, Address: 0x2700f8, Func Offset: 0x448
	// Line 470, Address: 0x270100, Func Offset: 0x450
	// Line 473, Address: 0x270108, Func Offset: 0x458
	// Line 476, Address: 0x270110, Func Offset: 0x460
	// Line 479, Address: 0x270118, Func Offset: 0x468
	// Line 482, Address: 0x270120, Func Offset: 0x470
	// Line 485, Address: 0x270128, Func Offset: 0x478
	// Line 488, Address: 0x270130, Func Offset: 0x480
	// Line 491, Address: 0x270138, Func Offset: 0x488
	// Line 494, Address: 0x270140, Func Offset: 0x490
	// Line 497, Address: 0x270148, Func Offset: 0x498
	// Line 499, Address: 0x270150, Func Offset: 0x4a0
	// Line 501, Address: 0x270154, Func Offset: 0x4a4
	// Line 503, Address: 0x270158, Func Offset: 0x4a8
	// Line 506, Address: 0x27015c, Func Offset: 0x4ac
	// Line 504, Address: 0x270160, Func Offset: 0x4b0
	// Line 510, Address: 0x270168, Func Offset: 0x4b8
	// Func End, Address: 0x270170, Func Offset: 0x4c0
}

// 
// Start address: 0x270170
int sdMergeMZ(int* pt, int* id, int no)
{
	int afs_id;
	// Line 517, Address: 0x270170, Func Offset: 0
	// Line 519, Address: 0x2702cc, Func Offset: 0x15c
	// Line 521, Address: 0x2702d0, Func Offset: 0x160
	// Line 524, Address: 0x2702d8, Func Offset: 0x168
	// Line 527, Address: 0x2702e0, Func Offset: 0x170
	// Line 530, Address: 0x2702e8, Func Offset: 0x178
	// Line 533, Address: 0x2702f0, Func Offset: 0x180
	// Line 536, Address: 0x2702f8, Func Offset: 0x188
	// Line 539, Address: 0x270300, Func Offset: 0x190
	// Line 542, Address: 0x270308, Func Offset: 0x198
	// Line 545, Address: 0x270310, Func Offset: 0x1a0
	// Line 549, Address: 0x270318, Func Offset: 0x1a8
	// Line 552, Address: 0x270320, Func Offset: 0x1b0
	// Line 556, Address: 0x270328, Func Offset: 0x1b8
	// Line 559, Address: 0x270330, Func Offset: 0x1c0
	// Line 562, Address: 0x270338, Func Offset: 0x1c8
	// Line 565, Address: 0x270340, Func Offset: 0x1d0
	// Line 568, Address: 0x270348, Func Offset: 0x1d8
	// Line 571, Address: 0x270350, Func Offset: 0x1e0
	// Line 574, Address: 0x270358, Func Offset: 0x1e8
	// Line 577, Address: 0x270360, Func Offset: 0x1f0
	// Line 580, Address: 0x270368, Func Offset: 0x1f8
	// Line 583, Address: 0x270370, Func Offset: 0x200
	// Line 586, Address: 0x270378, Func Offset: 0x208
	// Line 591, Address: 0x270380, Func Offset: 0x210
	// Line 594, Address: 0x270388, Func Offset: 0x218
	// Line 597, Address: 0x270390, Func Offset: 0x220
	// Line 600, Address: 0x270398, Func Offset: 0x228
	// Line 603, Address: 0x2703a0, Func Offset: 0x230
	// Line 606, Address: 0x2703a8, Func Offset: 0x238
	// Line 609, Address: 0x2703b0, Func Offset: 0x240
	// Line 612, Address: 0x2703b8, Func Offset: 0x248
	// Line 615, Address: 0x2703c0, Func Offset: 0x250
	// Line 618, Address: 0x2703c8, Func Offset: 0x258
	// Line 621, Address: 0x2703d0, Func Offset: 0x260
	// Line 625, Address: 0x2703d8, Func Offset: 0x268
	// Line 628, Address: 0x2703e0, Func Offset: 0x270
	// Line 630, Address: 0x2703e4, Func Offset: 0x274
	// Line 632, Address: 0x2703e8, Func Offset: 0x278
	// Line 635, Address: 0x2703ec, Func Offset: 0x27c
	// Line 633, Address: 0x2703f0, Func Offset: 0x280
	// Line 639, Address: 0x2703f8, Func Offset: 0x288
	// Func End, Address: 0x270400, Func Offset: 0x290
}

// 
// Start address: 0x270400
int sdMergeBD(int* pt, int* id, int no)
{
	int afs_id;
	// Line 646, Address: 0x270400, Func Offset: 0
	// Line 648, Address: 0x2705a4, Func Offset: 0x1a4
	// Line 650, Address: 0x2705a8, Func Offset: 0x1a8
	// Line 653, Address: 0x2705b0, Func Offset: 0x1b0
	// Line 656, Address: 0x2705b8, Func Offset: 0x1b8
	// Line 659, Address: 0x2705c0, Func Offset: 0x1c0
	// Line 662, Address: 0x2705c8, Func Offset: 0x1c8
	// Line 665, Address: 0x2705d0, Func Offset: 0x1d0
	// Line 668, Address: 0x2705d8, Func Offset: 0x1d8
	// Line 671, Address: 0x2705e0, Func Offset: 0x1e0
	// Line 674, Address: 0x2705e8, Func Offset: 0x1e8
	// Line 677, Address: 0x2705f0, Func Offset: 0x1f0
	// Line 680, Address: 0x2705f8, Func Offset: 0x1f8
	// Line 683, Address: 0x270600, Func Offset: 0x200
	// Line 686, Address: 0x270608, Func Offset: 0x208
	// Line 689, Address: 0x270610, Func Offset: 0x210
	// Line 692, Address: 0x270618, Func Offset: 0x218
	// Line 695, Address: 0x270620, Func Offset: 0x220
	// Line 698, Address: 0x270628, Func Offset: 0x228
	// Line 701, Address: 0x270630, Func Offset: 0x230
	// Line 705, Address: 0x270638, Func Offset: 0x238
	// Line 708, Address: 0x270640, Func Offset: 0x240
	// Line 711, Address: 0x270648, Func Offset: 0x248
	// Line 714, Address: 0x270650, Func Offset: 0x250
	// Line 717, Address: 0x270658, Func Offset: 0x258
	// Line 720, Address: 0x270660, Func Offset: 0x260
	// Line 723, Address: 0x270668, Func Offset: 0x268
	// Line 726, Address: 0x270670, Func Offset: 0x270
	// Line 729, Address: 0x270678, Func Offset: 0x278
	// Line 732, Address: 0x270680, Func Offset: 0x280
	// Line 735, Address: 0x270688, Func Offset: 0x288
	// Line 739, Address: 0x270690, Func Offset: 0x290
	// Line 742, Address: 0x270698, Func Offset: 0x298
	// Line 746, Address: 0x2706a0, Func Offset: 0x2a0
	// Line 749, Address: 0x2706a8, Func Offset: 0x2a8
	// Line 752, Address: 0x2706b0, Func Offset: 0x2b0
	// Line 755, Address: 0x2706b8, Func Offset: 0x2b8
	// Line 758, Address: 0x2706c0, Func Offset: 0x2c0
	// Line 761, Address: 0x2706c8, Func Offset: 0x2c8
	// Line 764, Address: 0x2706d0, Func Offset: 0x2d0
	// Line 767, Address: 0x2706d8, Func Offset: 0x2d8
	// Line 770, Address: 0x2706e0, Func Offset: 0x2e0
	// Line 773, Address: 0x2706e8, Func Offset: 0x2e8
	// Line 775, Address: 0x2706f0, Func Offset: 0x2f0
	// Line 777, Address: 0x2706f4, Func Offset: 0x2f4
	// Line 779, Address: 0x2706f8, Func Offset: 0x2f8
	// Line 782, Address: 0x2706fc, Func Offset: 0x2fc
	// Line 780, Address: 0x270700, Func Offset: 0x300
	// Line 786, Address: 0x270708, Func Offset: 0x308
	// Func End, Address: 0x270710, Func Offset: 0x310
}

// 
// Start address: 0x270710
int sdMergeCM(int* pt, int* id, int no)
{
	int afs_id;
	// Line 793, Address: 0x270710, Func Offset: 0
	// Line 797, Address: 0x270828, Func Offset: 0x118
	// Line 800, Address: 0x270830, Func Offset: 0x120
	// Line 803, Address: 0x270838, Func Offset: 0x128
	// Line 806, Address: 0x270840, Func Offset: 0x130
	// Line 809, Address: 0x270848, Func Offset: 0x138
	// Line 812, Address: 0x270850, Func Offset: 0x140
	// Line 816, Address: 0x270858, Func Offset: 0x148
	// Line 820, Address: 0x270860, Func Offset: 0x150
	// Line 823, Address: 0x270868, Func Offset: 0x158
	// Line 826, Address: 0x270870, Func Offset: 0x160
	// Line 829, Address: 0x270878, Func Offset: 0x168
	// Line 832, Address: 0x270880, Func Offset: 0x170
	// Line 835, Address: 0x270888, Func Offset: 0x178
	// Line 839, Address: 0x270890, Func Offset: 0x180
	// Line 842, Address: 0x270898, Func Offset: 0x188
	// Line 846, Address: 0x2708a0, Func Offset: 0x190
	// Line 850, Address: 0x2708a8, Func Offset: 0x198
	// Line 853, Address: 0x2708b0, Func Offset: 0x1a0
	// Line 856, Address: 0x2708b8, Func Offset: 0x1a8
	// Line 859, Address: 0x2708c0, Func Offset: 0x1b0
	// Line 862, Address: 0x2708c8, Func Offset: 0x1b8
	// Line 865, Address: 0x2708d0, Func Offset: 0x1c0
	// Line 868, Address: 0x2708d8, Func Offset: 0x1c8
	// Line 871, Address: 0x2708e0, Func Offset: 0x1d0
	// Line 874, Address: 0x2708e8, Func Offset: 0x1d8
	// Line 877, Address: 0x2708f0, Func Offset: 0x1e0
	// Line 880, Address: 0x2708f8, Func Offset: 0x1e8
	// Line 883, Address: 0x270900, Func Offset: 0x1f0
	// Line 885, Address: 0x270904, Func Offset: 0x1f4
	// Line 887, Address: 0x270908, Func Offset: 0x1f8
	// Line 890, Address: 0x27090c, Func Offset: 0x1fc
	// Line 888, Address: 0x270910, Func Offset: 0x200
	// Line 894, Address: 0x270918, Func Offset: 0x208
	// Func End, Address: 0x270920, Func Offset: 0x210
}

// 
// Start address: 0x270920
int sdMergeHS(int* pt, int* id, int no)
{
	int afs_id;
	// Line 901, Address: 0x270920, Func Offset: 0
	// Line 903, Address: 0x270a04, Func Offset: 0xe4
	// Line 905, Address: 0x270a08, Func Offset: 0xe8
	// Line 908, Address: 0x270a10, Func Offset: 0xf0
	// Line 911, Address: 0x270a18, Func Offset: 0xf8
	// Line 914, Address: 0x270a20, Func Offset: 0x100
	// Line 917, Address: 0x270a28, Func Offset: 0x108
	// Line 920, Address: 0x270a30, Func Offset: 0x110
	// Line 923, Address: 0x270a38, Func Offset: 0x118
	// Line 926, Address: 0x270a40, Func Offset: 0x120
	// Line 929, Address: 0x270a48, Func Offset: 0x128
	// Line 932, Address: 0x270a50, Func Offset: 0x130
	// Line 935, Address: 0x270a58, Func Offset: 0x138
	// Line 938, Address: 0x270a60, Func Offset: 0x140
	// Line 943, Address: 0x270a68, Func Offset: 0x148
	// Line 946, Address: 0x270a70, Func Offset: 0x150
	// Line 949, Address: 0x270a78, Func Offset: 0x158
	// Line 952, Address: 0x270a80, Func Offset: 0x160
	// Line 955, Address: 0x270a88, Func Offset: 0x168
	// Line 958, Address: 0x270a90, Func Offset: 0x170
	// Line 961, Address: 0x270a98, Func Offset: 0x178
	// Line 964, Address: 0x270aa0, Func Offset: 0x180
	// Line 967, Address: 0x270aa8, Func Offset: 0x188
	// Line 970, Address: 0x270ab0, Func Offset: 0x190
	// Line 973, Address: 0x270ab8, Func Offset: 0x198
	// Line 975, Address: 0x270abc, Func Offset: 0x19c
	// Line 977, Address: 0x270ac0, Func Offset: 0x1a0
	// Line 980, Address: 0x270ac4, Func Offset: 0x1a4
	// Line 978, Address: 0x270ac8, Func Offset: 0x1a8
	// Line 984, Address: 0x270ad0, Func Offset: 0x1b0
	// Func End, Address: 0x270ad8, Func Offset: 0x1b8
}

// 
// Start address: 0x270ae0
int sdMergeIE(int* pt, int* id, int no)
{
	int afs_id;
	// Line 990, Address: 0x270ae0, Func Offset: 0
	// Line 994, Address: 0x270b58, Func Offset: 0x78
	// Line 997, Address: 0x270b60, Func Offset: 0x80
	// Line 1000, Address: 0x270b68, Func Offset: 0x88
	// Line 1003, Address: 0x270b70, Func Offset: 0x90
	// Line 1006, Address: 0x270b78, Func Offset: 0x98
	// Line 1009, Address: 0x270b80, Func Offset: 0xa0
	// Line 1012, Address: 0x270b88, Func Offset: 0xa8
	// Line 1015, Address: 0x270b90, Func Offset: 0xb0
	// Line 1019, Address: 0x270b98, Func Offset: 0xb8
	// Line 1022, Address: 0x270ba0, Func Offset: 0xc0
	// Line 1026, Address: 0x270ba8, Func Offset: 0xc8
	// Line 1029, Address: 0x270bb0, Func Offset: 0xd0
	// Line 1031, Address: 0x270bb4, Func Offset: 0xd4
	// Line 1033, Address: 0x270bb8, Func Offset: 0xd8
	// Line 1036, Address: 0x270bbc, Func Offset: 0xdc
	// Line 1034, Address: 0x270bc0, Func Offset: 0xe0
	// Line 1040, Address: 0x270bc8, Func Offset: 0xe8
	// Func End, Address: 0x270bd0, Func Offset: 0xf0
}

// 
// Start address: 0x270bd0
int sdMergeLS(int* pt, int* id, int no)
{
	int afs_id;
	// Line 1046, Address: 0x270bd0, Func Offset: 0
	// Line 1050, Address: 0x270bf8, Func Offset: 0x28
	// Line 1053, Address: 0x270c00, Func Offset: 0x30
	// Line 1056, Address: 0x270c08, Func Offset: 0x38
	// Line 1058, Address: 0x270c10, Func Offset: 0x40
	// Line 1060, Address: 0x270c14, Func Offset: 0x44
	// Line 1062, Address: 0x270c18, Func Offset: 0x48
	// Line 1065, Address: 0x270c1c, Func Offset: 0x4c
	// Line 1063, Address: 0x270c20, Func Offset: 0x50
	// Line 1069, Address: 0x270c28, Func Offset: 0x58
	// Func End, Address: 0x270c30, Func Offset: 0x60
}

// 
// Start address: 0x270c30
int sdMergeGT(int* pt, int* id, int no)
{
	int afs_id;
	// Line 1076, Address: 0x270c30, Func Offset: 0
	// Line 1078, Address: 0x270c44, Func Offset: 0x14
	// Line 1080, Address: 0x270c48, Func Offset: 0x18
	// Line 1082, Address: 0x270c50, Func Offset: 0x20
	// Line 1084, Address: 0x270c54, Func Offset: 0x24
	// Line 1086, Address: 0x270c58, Func Offset: 0x28
	// Line 1087, Address: 0x270c5c, Func Offset: 0x2c
	// Line 1088, Address: 0x270c60, Func Offset: 0x30
	// Line 1089, Address: 0x270c6c, Func Offset: 0x3c
	// Line 1090, Address: 0x270c74, Func Offset: 0x44
	// Line 1093, Address: 0x270c78, Func Offset: 0x48
	// Func End, Address: 0x270c80, Func Offset: 0x50
}

// 
// Start address: 0x270c80
int sdMergeGetFileInfo(int no)
{
	_sfAlsTable* alsTbl;
	_anon0* sfTbl;
	// Line 1097, Address: 0x270c80, Func Offset: 0
	// Line 1102, Address: 0x270c8c, Func Offset: 0xc
	// Line 1103, Address: 0x270c9c, Func Offset: 0x1c
	// Line 1104, Address: 0x270ca4, Func Offset: 0x24
	// Line 1106, Address: 0x270ca8, Func Offset: 0x28
	// Line 1107, Address: 0x270cb0, Func Offset: 0x30
	// Line 1108, Address: 0x270cb8, Func Offset: 0x38
	// Line 1112, Address: 0x270cc0, Func Offset: 0x40
	// Line 1114, Address: 0x270cd4, Func Offset: 0x54
	// Line 1126, Address: 0x270ce8, Func Offset: 0x68
	// Func End, Address: 0x270cf8, Func Offset: 0x78
}

// 
// Start address: 0x270d00
int sdMergeST(int* pt, int* id, int no)
{
	int afs_id;
	// Line 1129, Address: 0x270d00, Func Offset: 0
	// Line 1132, Address: 0x270d04, Func Offset: 0x4
	// Line 1129, Address: 0x270d08, Func Offset: 0x8
	// Line 1132, Address: 0x270d18, Func Offset: 0x18
	// Line 1135, Address: 0x270d78, Func Offset: 0x78
	// Line 1136, Address: 0x270d84, Func Offset: 0x84
	// Line 1137, Address: 0x270d8c, Func Offset: 0x8c
	// Line 1138, Address: 0x270d90, Func Offset: 0x90
	// Line 1139, Address: 0x270d9c, Func Offset: 0x9c
	// Line 1140, Address: 0x270da4, Func Offset: 0xa4
	// Line 1141, Address: 0x270da8, Func Offset: 0xa8
	// Line 1142, Address: 0x270db4, Func Offset: 0xb4
	// Line 1144, Address: 0x270dbc, Func Offset: 0xbc
	// Line 1145, Address: 0x270dc0, Func Offset: 0xc0
	// Line 1146, Address: 0x270dcc, Func Offset: 0xcc
	// Line 1147, Address: 0x270dd4, Func Offset: 0xd4
	// Line 1148, Address: 0x270dd8, Func Offset: 0xd8
	// Line 1149, Address: 0x270de4, Func Offset: 0xe4
	// Line 1150, Address: 0x270dec, Func Offset: 0xec
	// Line 1151, Address: 0x270df0, Func Offset: 0xf0
	// Line 1152, Address: 0x270dfc, Func Offset: 0xfc
	// Line 1153, Address: 0x270e04, Func Offset: 0x104
	// Line 1154, Address: 0x270e08, Func Offset: 0x108
	// Line 1155, Address: 0x270e14, Func Offset: 0x114
	// Line 1156, Address: 0x270e1c, Func Offset: 0x11c
	// Line 1157, Address: 0x270e20, Func Offset: 0x120
	// Line 1158, Address: 0x270e2c, Func Offset: 0x12c
	// Line 1159, Address: 0x270e34, Func Offset: 0x134
	// Line 1160, Address: 0x270e38, Func Offset: 0x138
	// Line 1161, Address: 0x270e44, Func Offset: 0x144
	// Line 1162, Address: 0x270e4c, Func Offset: 0x14c
	// Line 1163, Address: 0x270e50, Func Offset: 0x150
	// Line 1165, Address: 0x270e54, Func Offset: 0x154
	// Line 1167, Address: 0x270e58, Func Offset: 0x158
	// Line 1168, Address: 0x270e64, Func Offset: 0x164
	// Line 1172, Address: 0x270e68, Func Offset: 0x168
	// Line 1173, Address: 0x270e74, Func Offset: 0x174
	// Line 1174, Address: 0x270e7c, Func Offset: 0x17c
	// Line 1176, Address: 0x270e80, Func Offset: 0x180
	// Line 1177, Address: 0x270e88, Func Offset: 0x188
	// Func End, Address: 0x270e9c, Func Offset: 0x19c
}

// 
// Start address: 0x270ea0
int sdMergeCommon(int* pt, int* id, int no)
{
	int afs_id;
	// Line 1181, Address: 0x270ea0, Func Offset: 0
	// Line 1184, Address: 0x270ea4, Func Offset: 0x4
	// Line 1181, Address: 0x270ea8, Func Offset: 0x8
	// Line 1184, Address: 0x270eb8, Func Offset: 0x18
	// Line 1186, Address: 0x27106c, Func Offset: 0x1cc
	// Line 1187, Address: 0x271070, Func Offset: 0x1d0
	// Line 1188, Address: 0x27107c, Func Offset: 0x1dc
	// Line 1189, Address: 0x271084, Func Offset: 0x1e4
	// Line 1190, Address: 0x271088, Func Offset: 0x1e8
	// Line 1191, Address: 0x271094, Func Offset: 0x1f4
	// Line 1192, Address: 0x27109c, Func Offset: 0x1fc
	// Line 1193, Address: 0x2710a0, Func Offset: 0x200
	// Line 1194, Address: 0x2710ac, Func Offset: 0x20c
	// Line 1196, Address: 0x2710b4, Func Offset: 0x214
	// Line 1197, Address: 0x2710b8, Func Offset: 0x218
	// Line 1198, Address: 0x2710c4, Func Offset: 0x224
	// Line 1199, Address: 0x2710cc, Func Offset: 0x22c
	// Line 1200, Address: 0x2710d0, Func Offset: 0x230
	// Line 1201, Address: 0x2710dc, Func Offset: 0x23c
	// Line 1202, Address: 0x2710e4, Func Offset: 0x244
	// Line 1203, Address: 0x2710e8, Func Offset: 0x248
	// Line 1204, Address: 0x2710f4, Func Offset: 0x254
	// Line 1205, Address: 0x2710fc, Func Offset: 0x25c
	// Line 1206, Address: 0x271100, Func Offset: 0x260
	// Line 1207, Address: 0x27110c, Func Offset: 0x26c
	// Line 1208, Address: 0x271114, Func Offset: 0x274
	// Line 1209, Address: 0x271118, Func Offset: 0x278
	// Line 1210, Address: 0x271124, Func Offset: 0x284
	// Line 1211, Address: 0x27112c, Func Offset: 0x28c
	// Line 1212, Address: 0x271130, Func Offset: 0x290
	// Line 1213, Address: 0x27113c, Func Offset: 0x29c
	// Line 1214, Address: 0x271144, Func Offset: 0x2a4
	// Line 1215, Address: 0x271148, Func Offset: 0x2a8
	// Line 1216, Address: 0x271154, Func Offset: 0x2b4
	// Line 1217, Address: 0x27115c, Func Offset: 0x2bc
	// Line 1218, Address: 0x271160, Func Offset: 0x2c0
	// Line 1219, Address: 0x27116c, Func Offset: 0x2cc
	// Line 1220, Address: 0x271174, Func Offset: 0x2d4
	// Line 1221, Address: 0x271178, Func Offset: 0x2d8
	// Line 1222, Address: 0x271184, Func Offset: 0x2e4
	// Line 1223, Address: 0x27118c, Func Offset: 0x2ec
	// Line 1224, Address: 0x271190, Func Offset: 0x2f0
	// Line 1225, Address: 0x27119c, Func Offset: 0x2fc
	// Line 1226, Address: 0x2711a4, Func Offset: 0x304
	// Line 1227, Address: 0x2711a8, Func Offset: 0x308
	// Line 1228, Address: 0x2711b4, Func Offset: 0x314
	// Line 1229, Address: 0x2711bc, Func Offset: 0x31c
	// Line 1230, Address: 0x2711c0, Func Offset: 0x320
	// Line 1231, Address: 0x2711cc, Func Offset: 0x32c
	// Line 1232, Address: 0x2711d4, Func Offset: 0x334
	// Line 1233, Address: 0x2711d8, Func Offset: 0x338
	// Line 1234, Address: 0x2711e4, Func Offset: 0x344
	// Line 1235, Address: 0x2711ec, Func Offset: 0x34c
	// Line 1236, Address: 0x2711f0, Func Offset: 0x350
	// Line 1237, Address: 0x2711fc, Func Offset: 0x35c
	// Line 1238, Address: 0x271204, Func Offset: 0x364
	// Line 1239, Address: 0x271208, Func Offset: 0x368
	// Line 1240, Address: 0x271214, Func Offset: 0x374
	// Line 1241, Address: 0x27121c, Func Offset: 0x37c
	// Line 1242, Address: 0x271220, Func Offset: 0x380
	// Line 1243, Address: 0x27122c, Func Offset: 0x38c
	// Line 1244, Address: 0x271234, Func Offset: 0x394
	// Line 1245, Address: 0x271238, Func Offset: 0x398
	// Line 1246, Address: 0x271244, Func Offset: 0x3a4
	// Line 1248, Address: 0x27124c, Func Offset: 0x3ac
	// Line 1249, Address: 0x271250, Func Offset: 0x3b0
	// Line 1250, Address: 0x27125c, Func Offset: 0x3bc
	// Line 1251, Address: 0x271264, Func Offset: 0x3c4
	// Line 1252, Address: 0x271268, Func Offset: 0x3c8
	// Line 1253, Address: 0x271274, Func Offset: 0x3d4
	// Line 1254, Address: 0x27127c, Func Offset: 0x3dc
	// Line 1255, Address: 0x271280, Func Offset: 0x3e0
	// Line 1256, Address: 0x27128c, Func Offset: 0x3ec
	// Line 1257, Address: 0x271294, Func Offset: 0x3f4
	// Line 1258, Address: 0x271298, Func Offset: 0x3f8
	// Line 1259, Address: 0x2712a4, Func Offset: 0x404
	// Line 1260, Address: 0x2712ac, Func Offset: 0x40c
	// Line 1261, Address: 0x2712b0, Func Offset: 0x410
	// Line 1262, Address: 0x2712bc, Func Offset: 0x41c
	// Line 1263, Address: 0x2712c4, Func Offset: 0x424
	// Line 1264, Address: 0x2712c8, Func Offset: 0x428
	// Line 1265, Address: 0x2712d4, Func Offset: 0x434
	// Line 1266, Address: 0x2712dc, Func Offset: 0x43c
	// Line 1267, Address: 0x2712e0, Func Offset: 0x440
	// Line 1268, Address: 0x2712ec, Func Offset: 0x44c
	// Line 1269, Address: 0x2712f4, Func Offset: 0x454
	// Line 1270, Address: 0x2712f8, Func Offset: 0x458
	// Line 1271, Address: 0x271304, Func Offset: 0x464
	// Line 1272, Address: 0x27130c, Func Offset: 0x46c
	// Line 1273, Address: 0x271310, Func Offset: 0x470
	// Line 1274, Address: 0x27131c, Func Offset: 0x47c
	// Line 1275, Address: 0x271324, Func Offset: 0x484
	// Line 1276, Address: 0x271328, Func Offset: 0x488
	// Line 1277, Address: 0x271334, Func Offset: 0x494
	// Line 1278, Address: 0x27133c, Func Offset: 0x49c
	// Line 1279, Address: 0x271340, Func Offset: 0x4a0
	// Line 1280, Address: 0x27134c, Func Offset: 0x4ac
	// Line 1281, Address: 0x271354, Func Offset: 0x4b4
	// Line 1282, Address: 0x271358, Func Offset: 0x4b8
	// Line 1283, Address: 0x271364, Func Offset: 0x4c4
	// Line 1284, Address: 0x27136c, Func Offset: 0x4cc
	// Line 1285, Address: 0x271370, Func Offset: 0x4d0
	// Line 1286, Address: 0x27137c, Func Offset: 0x4dc
	// Line 1287, Address: 0x271384, Func Offset: 0x4e4
	// Line 1288, Address: 0x271388, Func Offset: 0x4e8
	// Line 1289, Address: 0x271394, Func Offset: 0x4f4
	// Line 1290, Address: 0x27139c, Func Offset: 0x4fc
	// Line 1291, Address: 0x2713a0, Func Offset: 0x500
	// Line 1292, Address: 0x2713ac, Func Offset: 0x50c
	// Line 1293, Address: 0x2713b4, Func Offset: 0x514
	// Line 1294, Address: 0x2713b8, Func Offset: 0x518
	// Line 1295, Address: 0x2713c4, Func Offset: 0x524
	// Line 1296, Address: 0x2713cc, Func Offset: 0x52c
	// Line 1297, Address: 0x2713d0, Func Offset: 0x530
	// Line 1298, Address: 0x2713dc, Func Offset: 0x53c
	// Line 1299, Address: 0x2713e4, Func Offset: 0x544
	// Line 1300, Address: 0x2713e8, Func Offset: 0x548
	// Line 1301, Address: 0x2713f4, Func Offset: 0x554
	// Line 1302, Address: 0x2713fc, Func Offset: 0x55c
	// Line 1303, Address: 0x271400, Func Offset: 0x560
	// Line 1304, Address: 0x27140c, Func Offset: 0x56c
	// Line 1305, Address: 0x271414, Func Offset: 0x574
	// Line 1306, Address: 0x271418, Func Offset: 0x578
	// Line 1307, Address: 0x271424, Func Offset: 0x584
	// Line 1308, Address: 0x27142c, Func Offset: 0x58c
	// Line 1309, Address: 0x271430, Func Offset: 0x590
	// Line 1310, Address: 0x27143c, Func Offset: 0x59c
	// Line 1311, Address: 0x271444, Func Offset: 0x5a4
	// Line 1312, Address: 0x271448, Func Offset: 0x5a8
	// Line 1313, Address: 0x271454, Func Offset: 0x5b4
	// Line 1314, Address: 0x27145c, Func Offset: 0x5bc
	// Line 1315, Address: 0x271460, Func Offset: 0x5c0
	// Line 1316, Address: 0x27146c, Func Offset: 0x5cc
	// Line 1318, Address: 0x271474, Func Offset: 0x5d4
	// Line 1319, Address: 0x271478, Func Offset: 0x5d8
	// Line 1321, Address: 0x27147c, Func Offset: 0x5dc
	// Line 1323, Address: 0x271480, Func Offset: 0x5e0
	// Line 1324, Address: 0x27148c, Func Offset: 0x5ec
	// Line 1327, Address: 0x271490, Func Offset: 0x5f0
	// Line 1330, Address: 0x271494, Func Offset: 0x5f4
	// Line 1329, Address: 0x271498, Func Offset: 0x5f8
	// Line 1330, Address: 0x27149c, Func Offset: 0x5fc
	// Func End, Address: 0x2714ac, Func Offset: 0x60c
}

// 
// Start address: 0x2714b0
int sdMergeGetAdxNoFromBgmNo(int* pt, int* id, int bgm_no)
{
	_enum stage;
	int(*mergeFunc)(int*, int*, int);
	// Line 1334, Address: 0x2714b0, Func Offset: 0
	// Line 1339, Address: 0x2714b4, Func Offset: 0x4
	// Line 1334, Address: 0x2714b8, Func Offset: 0x8
	// Line 1335, Address: 0x2714bc, Func Offset: 0xc
	// Line 1334, Address: 0x2714c0, Func Offset: 0x10
	// Line 1339, Address: 0x2714c4, Func Offset: 0x14
	// Line 1334, Address: 0x2714c8, Func Offset: 0x18
	// Line 1335, Address: 0x2714d8, Func Offset: 0x28
	// Line 1339, Address: 0x2714dc, Func Offset: 0x2c
	// Line 1340, Address: 0x2714e8, Func Offset: 0x38
	// Line 1341, Address: 0x2714f0, Func Offset: 0x40
	// Line 1342, Address: 0x271500, Func Offset: 0x50
	// Line 1344, Address: 0x27150c, Func Offset: 0x5c
	// Line 1346, Address: 0x271518, Func Offset: 0x68
	// Line 1357, Address: 0x271520, Func Offset: 0x70
	// Line 1356, Address: 0x271528, Func Offset: 0x78
	// Line 1357, Address: 0x27152c, Func Offset: 0x7c
	// Func End, Address: 0x27153c, Func Offset: 0x8c
}

