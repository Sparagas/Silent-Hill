typedef struct _anon0;
typedef struct _GAME_WORK;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfObj;
typedef union _anon5;
typedef struct EventFlag;
typedef struct _anon6;
typedef enum sgLightType : unsigned char;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;

typedef void(*type_19)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_31)(sfObj*);
typedef void(*type_41)(sfObj*);

typedef unsigned int type_0[25];
typedef unsigned int type_1[31];
typedef _anon6 type_2[14];
typedef _anon1 type_3[35];
typedef int type_4[1];
typedef unsigned int type_5[8];
typedef int type_6[1];
typedef unsigned int type_7[44];
typedef _anon1 type_8[26];
typedef _anon1 type_9[8];
typedef unsigned int type_10[31];
typedef _anon8 type_11[14];
typedef unsigned int type_12[25];
typedef int type_13[2];
typedef int type_14[1];
typedef char type_15[4];
typedef unsigned int type_16[44];
typedef unsigned int type_17[8];
typedef int type_18[3];
typedef unsigned int type_20[35];
typedef unsigned int type_21[26];
typedef _anon1 type_22[26];
typedef float type_24[4];
typedef float type_25[4];
typedef unsigned int type_26[3];
typedef int type_27[5];
typedef float type_28[4][4];
typedef unsigned int type_29[44];
typedef _anon5 type_30[256];
typedef _anon1 type_32[3];
typedef unsigned int type_33[26];
typedef unsigned char type_34[320];
typedef unsigned char type_35[4];
typedef unsigned int type_36[35];
typedef _anon1 type_37[44];
typedef unsigned int type_38[29];
typedef unsigned int type_39[1];
typedef short type_40[2];
typedef unsigned int type_42[3];
typedef unsigned short type_43[2];
typedef _anon1 type_44[25];
typedef char type_45[4];
typedef unsigned char type_46[4];
typedef _anon1 type_47[1];
typedef unsigned int type_48[26];
typedef float type_49[1];
typedef unsigned int type_50[24];
typedef int type_51[1];
typedef int type_52[1];
typedef int type_53[1];
typedef unsigned int type_54[1];
typedef int type_55[1];
typedef _anon10 type_56[5];
typedef unsigned int type_57[13];
typedef unsigned int type_58[29];
typedef _anon1 type_59[24];
typedef _anon4 type_60[14];
typedef unsigned int type_61[24];
typedef int type_62[1];
typedef unsigned int type_63[26];
typedef _anon1 type_64[29];
typedef int type_65[1];

struct _anon0
{
	int kind;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	_anon2 light_flag;
	float intensity;
	float scale;
	float position[4];
	float direction[4];
	float cone_angle;
	float penumbra_angle;
	float shadow_length;
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

struct _anon1
{
	unsigned int detail_path;
	unsigned int stage_path;
	unsigned int ghost_point;
	unsigned int warp_point;
};

struct _anon2
{
	struct
	{
		unsigned char value : 4;
		unsigned char glow_value : 4;
	};
};

struct _anon3
{
	char file_type[4];
	int version;
	int light_num;
	int padding;
};

struct _anon4
{
	_anon1* tbl;
	int num;
};

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon5
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

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon6
{
	unsigned int* tbl;
	int num;
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct _anon7
{
	float near;
	float far;
	unsigned char col[4];
	unsigned char near_pow;
	unsigned char far_pow;
};

struct _anon8
{
	unsigned int* tbl;
	int num;
};

struct _anon9
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

struct _anon10
{
	unsigned int flag;
	int index;
};

_anon1 dmy_path_tbl[1];
_anon1 sb_path_tbl[26];
int sb_blue_path[5];
_anon1 fr_path_tbl[24];
int fr_blue_path[2];
_anon1 mz_path_tbl[44];
_anon1 bd_path_tbl[29];
int bd_blue_path[3];
_anon1 ie_path_tbl[25];
_anon1 hs_path_tbl[35];
_anon1 cm_path_tbl[26];
int cm_blue_path[1];
_anon1 st_path_tbl[8];
_anon1 ls_path_tbl[3];
_anon4 stage_path_tbl[14];
unsigned int dmy_light_tbl[1];
unsigned int rl_light_tbl[31];
unsigned int sb_light_tbl[26];
unsigned int fr_light_tbl[24];
unsigned int mz_light_tbl[44];
unsigned int mz_bright_light_tbl[44];
unsigned int bd_light_tbl[29];
unsigned int ie_light_tbl[25];
unsigned int hs_light_tbl[35];
unsigned int cm_light_tbl[26];
unsigned int st_light_tbl[8];
unsigned int ls_light_tbl[3];
_anon6 stage_light_tbl[14];
unsigned int dmy_fog_tbl[1];
unsigned int rl_fog_tbl[31];
unsigned int sb_fog_tbl[26];
unsigned int fr_fog_tbl[24];
unsigned int mz_fog_tbl[44];
unsigned int bd_fog_tbl[29];
unsigned int ie_fog_tbl[25];
unsigned int hs_fog_tbl[35];
unsigned int cm_fog_tbl[26];
unsigned int st_fog_tbl[8];
unsigned int ls_fog_tbl[3];
unsigned int gt_fog_tbl[13];
_anon8 stage_fog_tbl[14];
EventFlag event_flag;
_GAME_WORK gamew;
void(*light_hit_destruct)(sfObj*);
void(*sfObjFuncDummy)(sfObj*);
float sg_vector_zero[4];

_anon1* GameDataGetPathSet(int stage, int scene);
void* GetSbBluePath();
void* GetFrBluePath(int scene);
void* GetBdBluePath(int scene);
void* GetCmBluePath(int scene);
void GameDataSetPathData();
unsigned int GameDataGetLightArcId(int stage, int scene);
void light_hit_destruct();
void GameDataLightHitDestructor();
void GameDataSetLightData(void* adr);
void GameDataSetSceneLightData();
void GameDataSetDefaultFog();
unsigned int GameDataGetFogArcId(int stage, int scene);
void GameDataSetFogData();

// 
// Start address: 0x293890
_anon1* GameDataGetPathSet(int stage, int scene)
{
	_anon1* rtv;
	_anon4* ps;
	// Line 1084, Address: 0x293890, Func Offset: 0
	// Line 1085, Address: 0x2938a4, Func Offset: 0x14
	// Line 1087, Address: 0x2938ac, Func Offset: 0x1c
	// Line 1089, Address: 0x2938c4, Func Offset: 0x34
	// Line 1094, Address: 0x2938d0, Func Offset: 0x40
	// Func End, Address: 0x2938d8, Func Offset: 0x48
}

// 
// Start address: 0x2938e0
void* GetSbBluePath()
{
	void* adr;
	int index;
	int i;
	_anon10 tbl[5];
	// Line 1099, Address: 0x2938e0, Func Offset: 0
	// Line 1119, Address: 0x2938e4, Func Offset: 0x4
	// Line 1099, Address: 0x2938e8, Func Offset: 0x8
	// Line 1100, Address: 0x2938ec, Func Offset: 0xc
	// Line 1101, Address: 0x2938f0, Func Offset: 0x10
	// Line 1119, Address: 0x2938f4, Func Offset: 0x14
	// Line 1124, Address: 0x2938fc, Func Offset: 0x1c
	// Line 1119, Address: 0x293908, Func Offset: 0x28
	// Line 1120, Address: 0x29390c, Func Offset: 0x2c
	// Line 1121, Address: 0x293914, Func Offset: 0x34
	// Line 1122, Address: 0x293920, Func Offset: 0x40
	// Line 1124, Address: 0x293928, Func Offset: 0x48
	// Line 1125, Address: 0x293948, Func Offset: 0x68
	// Line 1126, Address: 0x293954, Func Offset: 0x74
	// Line 1128, Address: 0x29395c, Func Offset: 0x7c
	// Line 1178, Address: 0x293970, Func Offset: 0x90
	// Line 1179, Address: 0x29397c, Func Offset: 0x9c
	// Line 1180, Address: 0x293994, Func Offset: 0xb4
	// Line 1182, Address: 0x293998, Func Offset: 0xb8
	// Func End, Address: 0x2939a4, Func Offset: 0xc4
}

// 
// Start address: 0x2939b0
void* GetFrBluePath(int scene)
{
	void* adr;
	int index;
	// Line 1186, Address: 0x2939b0, Func Offset: 0
	// Line 1190, Address: 0x2939b4, Func Offset: 0x4
	// Line 1186, Address: 0x2939b8, Func Offset: 0x8
	// Line 1187, Address: 0x2939bc, Func Offset: 0xc
	// Line 1190, Address: 0x2939c0, Func Offset: 0x10
	// Line 1194, Address: 0x2939f0, Func Offset: 0x40
	// Line 1197, Address: 0x2939f8, Func Offset: 0x48
	// Line 1199, Address: 0x2939fc, Func Offset: 0x4c
	// Line 1200, Address: 0x293a00, Func Offset: 0x50
	// Line 1201, Address: 0x293a0c, Func Offset: 0x5c
	// Line 1202, Address: 0x293a24, Func Offset: 0x74
	// Line 1204, Address: 0x293a28, Func Offset: 0x78
	// Func End, Address: 0x293a34, Func Offset: 0x84
}

// 
// Start address: 0x293a40
void* GetBdBluePath(int scene)
{
	void* adr;
	int index;
	// Line 1208, Address: 0x293a40, Func Offset: 0
	// Line 1212, Address: 0x293a44, Func Offset: 0x4
	// Line 1208, Address: 0x293a48, Func Offset: 0x8
	// Line 1209, Address: 0x293a4c, Func Offset: 0xc
	// Line 1212, Address: 0x293a50, Func Offset: 0x10
	// Line 1214, Address: 0x293a94, Func Offset: 0x54
	// Line 1216, Address: 0x293a98, Func Offset: 0x58
	// Line 1220, Address: 0x293aa0, Func Offset: 0x60
	// Line 1223, Address: 0x293aa8, Func Offset: 0x68
	// Line 1225, Address: 0x293aac, Func Offset: 0x6c
	// Line 1226, Address: 0x293ab0, Func Offset: 0x70
	// Line 1227, Address: 0x293abc, Func Offset: 0x7c
	// Line 1228, Address: 0x293ad4, Func Offset: 0x94
	// Line 1230, Address: 0x293ad8, Func Offset: 0x98
	// Func End, Address: 0x293ae4, Func Offset: 0xa4
}

// 
// Start address: 0x293af0
void* GetCmBluePath(int scene)
{
	void* adr;
	int index;
	// Line 1234, Address: 0x293af0, Func Offset: 0
	// Line 1238, Address: 0x293af4, Func Offset: 0x4
	// Line 1234, Address: 0x293af8, Func Offset: 0x8
	// Line 1235, Address: 0x293afc, Func Offset: 0xc
	// Line 1238, Address: 0x293b00, Func Offset: 0x10
	// Line 1240, Address: 0x293b1c, Func Offset: 0x2c
	// Line 1241, Address: 0x293b20, Func Offset: 0x30
	// Line 1243, Address: 0x293b24, Func Offset: 0x34
	// Line 1244, Address: 0x293b28, Func Offset: 0x38
	// Line 1245, Address: 0x293b34, Func Offset: 0x44
	// Line 1246, Address: 0x293b4c, Func Offset: 0x5c
	// Line 1248, Address: 0x293b50, Func Offset: 0x60
	// Func End, Address: 0x293b5c, Func Offset: 0x6c
}

// 
// Start address: 0x293b60
void GameDataSetPathData()
{
	int stage;
	int scene;
	_anon1* data;
	void* adr;
	// Line 1254, Address: 0x293b60, Func Offset: 0
	// Line 1255, Address: 0x293b64, Func Offset: 0x4
	// Line 1254, Address: 0x293b68, Func Offset: 0x8
	// Line 1255, Address: 0x293b78, Func Offset: 0x18
	// Line 1256, Address: 0x293b7c, Func Offset: 0x1c
	// Line 1261, Address: 0x293b80, Func Offset: 0x20
	// Line 1263, Address: 0x293b88, Func Offset: 0x28
	// Line 1265, Address: 0x293b94, Func Offset: 0x34
	// Line 1268, Address: 0x293b98, Func Offset: 0x38
	// Line 1270, Address: 0x293ba8, Func Offset: 0x48
	// Line 1275, Address: 0x293bb4, Func Offset: 0x54
	// Line 1276, Address: 0x293bbc, Func Offset: 0x5c
	// Line 1277, Address: 0x293bc8, Func Offset: 0x68
	// Line 1278, Address: 0x293bd0, Func Offset: 0x70
	// Line 1285, Address: 0x293bd8, Func Offset: 0x78
	// Line 1287, Address: 0x293c08, Func Offset: 0xa8
	// Line 1288, Address: 0x293c10, Func Offset: 0xb0
	// Line 1290, Address: 0x293c18, Func Offset: 0xb8
	// Line 1291, Address: 0x293c20, Func Offset: 0xc0
	// Line 1293, Address: 0x293c28, Func Offset: 0xc8
	// Line 1294, Address: 0x293c30, Func Offset: 0xd0
	// Line 1296, Address: 0x293c38, Func Offset: 0xd8
	// Line 1297, Address: 0x293c40, Func Offset: 0xe0
	// Line 1299, Address: 0x293c48, Func Offset: 0xe8
	// Line 1306, Address: 0x293c4c, Func Offset: 0xec
	// Line 1307, Address: 0x293c50, Func Offset: 0xf0
	// Line 1308, Address: 0x293c58, Func Offset: 0xf8
	// Line 1312, Address: 0x293c64, Func Offset: 0x104
	// Line 1313, Address: 0x293c6c, Func Offset: 0x10c
	// Line 1314, Address: 0x293c78, Func Offset: 0x118
	// Line 1315, Address: 0x293c80, Func Offset: 0x120
	// Line 1319, Address: 0x293c8c, Func Offset: 0x12c
	// Line 1320, Address: 0x293c94, Func Offset: 0x134
	// Line 1321, Address: 0x293ca0, Func Offset: 0x140
	// Line 1322, Address: 0x293ca8, Func Offset: 0x148
	// Line 1325, Address: 0x293cb0, Func Offset: 0x150
	// Func End, Address: 0x293cc8, Func Offset: 0x168
}

// 
// Start address: 0x293cd0
unsigned int GameDataGetLightArcId(int stage, int scene)
{
	unsigned int rtv;
	_anon6* gl;
	_anon6* gl;
	// Line 1330, Address: 0x293cd0, Func Offset: 0
	// Line 1333, Address: 0x293cec, Func Offset: 0x1c
	// Line 1334, Address: 0x293d00, Func Offset: 0x30
	// Line 1336, Address: 0x293d18, Func Offset: 0x48
	// Line 1338, Address: 0x293d24, Func Offset: 0x54
	// Line 1340, Address: 0x293d3c, Func Offset: 0x6c
	// Line 1342, Address: 0x293d4c, Func Offset: 0x7c
	// Line 1344, Address: 0x293d58, Func Offset: 0x88
	// Line 1346, Address: 0x293d64, Func Offset: 0x94
	// Line 1348, Address: 0x293d7c, Func Offset: 0xac
	// Line 1351, Address: 0x293d8c, Func Offset: 0xbc
	// Line 1353, Address: 0x293d90, Func Offset: 0xc0
	// Line 1354, Address: 0x293d94, Func Offset: 0xc4
	// Func End, Address: 0x293dac, Func Offset: 0xdc
}

// 
// Start address: 0x293db0
void light_hit_destruct()
{
	// Line 1359, Address: 0x293db0, Func Offset: 0
	// Func End, Address: 0x293db8, Func Offset: 0x8
}

// 
// Start address: 0x293dc0
void GameDataLightHitDestructor()
{
	sfObj* obj;
	// Line 1364, Address: 0x293dc0, Func Offset: 0
	// Line 1365, Address: 0x293dc8, Func Offset: 0x8
	// Line 1367, Address: 0x293dd4, Func Offset: 0x14
	// Line 1368, Address: 0x293ddc, Func Offset: 0x1c
	// Line 1370, Address: 0x293de8, Func Offset: 0x28
	// Line 1371, Address: 0x293df4, Func Offset: 0x34
	// Line 1372, Address: 0x293e04, Func Offset: 0x44
	// Line 1373, Address: 0x293e08, Func Offset: 0x48
	// Func End, Address: 0x293e18, Func Offset: 0x58
}

// 
// Start address: 0x293e20
void GameDataSetLightData(void* adr)
{
	_anon3* head;
	unsigned int file_type;
	_anon0* dat;
	int i;
	_anon9 light;
	float col[4];
	float pos[4];
	int id;
	int val;
	int id;
	// Line 1381, Address: 0x293e20, Func Offset: 0
	// Line 1382, Address: 0x293e30, Func Offset: 0x10
	// Line 1386, Address: 0x293e38, Func Offset: 0x18
	// Line 1384, Address: 0x293e3c, Func Offset: 0x1c
	// Line 1386, Address: 0x293e40, Func Offset: 0x20
	// Line 1387, Address: 0x293e4c, Func Offset: 0x2c
	// Line 1391, Address: 0x293e50, Func Offset: 0x30
	// Line 1393, Address: 0x293e58, Func Offset: 0x38
	// Line 1399, Address: 0x293e60, Func Offset: 0x40
	// Line 1403, Address: 0x293e68, Func Offset: 0x48
	// Line 1399, Address: 0x293e70, Func Offset: 0x50
	// Line 1400, Address: 0x293e84, Func Offset: 0x64
	// Line 1399, Address: 0x293e8c, Func Offset: 0x6c
	// Line 1401, Address: 0x293e90, Func Offset: 0x70
	// Line 1402, Address: 0x293e98, Func Offset: 0x78
	// Line 1400, Address: 0x293e9c, Func Offset: 0x7c
	// Line 1401, Address: 0x293eb8, Func Offset: 0x98
	// Line 1402, Address: 0x293ebc, Func Offset: 0x9c
	// Line 1401, Address: 0x293ec0, Func Offset: 0xa0
	// Line 1403, Address: 0x293ed4, Func Offset: 0xb4
	// Line 1404, Address: 0x293edc, Func Offset: 0xbc
	// Line 1406, Address: 0x293ee8, Func Offset: 0xc8
	// Line 1407, Address: 0x293efc, Func Offset: 0xdc
	// Line 1414, Address: 0x293f24, Func Offset: 0x104
	// Line 1415, Address: 0x293f28, Func Offset: 0x108
	// Line 1416, Address: 0x293f4c, Func Offset: 0x12c
	// Line 1417, Address: 0x293f58, Func Offset: 0x138
	// Line 1418, Address: 0x293f64, Func Offset: 0x144
	// Line 1420, Address: 0x293f6c, Func Offset: 0x14c
	// Line 1426, Address: 0x293f70, Func Offset: 0x150
	// Line 1427, Address: 0x293f94, Func Offset: 0x174
	// Line 1429, Address: 0x293fa0, Func Offset: 0x180
	// Line 1430, Address: 0x293fc4, Func Offset: 0x1a4
	// Line 1431, Address: 0x293fcc, Func Offset: 0x1ac
	// Line 1432, Address: 0x293fd0, Func Offset: 0x1b0
	// Line 1433, Address: 0x293ff4, Func Offset: 0x1d4
	// Line 1434, Address: 0x294000, Func Offset: 0x1e0
	// Line 1435, Address: 0x29400c, Func Offset: 0x1ec
	// Line 1436, Address: 0x294018, Func Offset: 0x1f8
	// Line 1438, Address: 0x294024, Func Offset: 0x204
	// Line 1442, Address: 0x294028, Func Offset: 0x208
	// Line 1443, Address: 0x294050, Func Offset: 0x230
	// Line 1446, Address: 0x294058, Func Offset: 0x238
	// Line 1448, Address: 0x2940a0, Func Offset: 0x280
	// Line 1449, Address: 0x2940c0, Func Offset: 0x2a0
	// Line 1453, Address: 0x2940c8, Func Offset: 0x2a8
	// Line 1469, Address: 0x294108, Func Offset: 0x2e8
	// Line 1471, Address: 0x294110, Func Offset: 0x2f0
	// Line 1472, Address: 0x29412c, Func Offset: 0x30c
	// Line 1473, Address: 0x294138, Func Offset: 0x318
	// Line 1475, Address: 0x294140, Func Offset: 0x320
	// Line 1478, Address: 0x294148, Func Offset: 0x328
	// Line 1479, Address: 0x29414c, Func Offset: 0x32c
	// Line 1482, Address: 0x294160, Func Offset: 0x340
	// Func End, Address: 0x294178, Func Offset: 0x358
}

// 
// Start address: 0x294180
void GameDataSetSceneLightData()
{
	int stage;
	int scene;
	unsigned int id;
	float cam_dir_light[4];
	// Line 1486, Address: 0x294180, Func Offset: 0
	// Line 1487, Address: 0x294184, Func Offset: 0x4
	// Line 1486, Address: 0x294188, Func Offset: 0x8
	// Line 1487, Address: 0x294194, Func Offset: 0x14
	// Line 1488, Address: 0x294198, Func Offset: 0x18
	// Line 1493, Address: 0x29419c, Func Offset: 0x1c
	// Line 1495, Address: 0x2941a4, Func Offset: 0x24
	// Line 1506, Address: 0x2941d0, Func Offset: 0x50
	// Line 1509, Address: 0x2941d8, Func Offset: 0x58
	// Line 1507, Address: 0x2941dc, Func Offset: 0x5c
	// Line 1506, Address: 0x2941e0, Func Offset: 0x60
	// Line 1507, Address: 0x2941e4, Func Offset: 0x64
	// Line 1508, Address: 0x2941ec, Func Offset: 0x6c
	// Line 1509, Address: 0x2941f4, Func Offset: 0x74
	// Line 1510, Address: 0x2941fc, Func Offset: 0x7c
	// Line 1512, Address: 0x294204, Func Offset: 0x84
	// Line 1514, Address: 0x294208, Func Offset: 0x88
	// Line 1515, Address: 0x29420c, Func Offset: 0x8c
	// Line 1514, Address: 0x294210, Func Offset: 0x90
	// Line 1515, Address: 0x294214, Func Offset: 0x94
	// Line 1514, Address: 0x294218, Func Offset: 0x98
	// Line 1516, Address: 0x29421c, Func Offset: 0x9c
	// Line 1515, Address: 0x294220, Func Offset: 0xa0
	// Line 1516, Address: 0x294224, Func Offset: 0xa4
	// Line 1518, Address: 0x29422c, Func Offset: 0xac
	// Line 1520, Address: 0x294230, Func Offset: 0xb0
	// Line 1522, Address: 0x29423c, Func Offset: 0xbc
	// Line 1525, Address: 0x294240, Func Offset: 0xc0
	// Line 1527, Address: 0x294250, Func Offset: 0xd0
	// Line 1528, Address: 0x294258, Func Offset: 0xd8
	// Line 1530, Address: 0x294268, Func Offset: 0xe8
	// Line 1532, Address: 0x294270, Func Offset: 0xf0
	// Func End, Address: 0x294284, Func Offset: 0x104
}

// 
// Start address: 0x294290
void GameDataSetDefaultFog()
{
	unsigned char col[4];
	// Line 1537, Address: 0x294290, Func Offset: 0
	// Line 1538, Address: 0x294294, Func Offset: 0x4
	// Line 1540, Address: 0x2942c0, Func Offset: 0x30
	// Line 1541, Address: 0x2942c8, Func Offset: 0x38
	// Line 1542, Address: 0x2942d0, Func Offset: 0x40
	// Line 1544, Address: 0x2942f0, Func Offset: 0x60
	// Line 1545, Address: 0x2942f8, Func Offset: 0x68
	// Func End, Address: 0x294304, Func Offset: 0x74
}

// 
// Start address: 0x294310
unsigned int GameDataGetFogArcId(int stage, int scene)
{
	unsigned int rtv;
	_anon8* gf;
	// Line 1552, Address: 0x294310, Func Offset: 0
	// Line 1553, Address: 0x294324, Func Offset: 0x14
	// Line 1555, Address: 0x29432c, Func Offset: 0x1c
	// Line 1557, Address: 0x294344, Func Offset: 0x34
	// Line 1559, Address: 0x294354, Func Offset: 0x44
	// Line 1562, Address: 0x294358, Func Offset: 0x48
	// Func End, Address: 0x294360, Func Offset: 0x50
}

// 
// Start address: 0x294360
void GameDataSetFogData()
{
	int stage;
	int scene;
	unsigned int id;
	void* adr;
	_anon7* fog;
	// Line 1566, Address: 0x294360, Func Offset: 0
	// Line 1567, Address: 0x294364, Func Offset: 0x4
	// Line 1566, Address: 0x294368, Func Offset: 0x8
	// Line 1567, Address: 0x294374, Func Offset: 0x14
	// Line 1568, Address: 0x294378, Func Offset: 0x18
	// Line 1573, Address: 0x29437c, Func Offset: 0x1c
	// Line 1575, Address: 0x294384, Func Offset: 0x24
	// Line 1578, Address: 0x294398, Func Offset: 0x38
	// Line 1581, Address: 0x2943a0, Func Offset: 0x40
	// Line 1583, Address: 0x2943b0, Func Offset: 0x50
	// Line 1587, Address: 0x2943b8, Func Offset: 0x58
	// Line 1589, Address: 0x2943c4, Func Offset: 0x64
	// Line 1590, Address: 0x2943cc, Func Offset: 0x6c
	// Line 1592, Address: 0x2943d0, Func Offset: 0x70
	// Line 1593, Address: 0x2943e8, Func Offset: 0x88
	// Line 1594, Address: 0x2943f4, Func Offset: 0x94
	// Line 1596, Address: 0x2943f8, Func Offset: 0x98
	// Line 1597, Address: 0x294404, Func Offset: 0xa4
	// Line 1601, Address: 0x294408, Func Offset: 0xa8
	// Line 1603, Address: 0x294420, Func Offset: 0xc0
	// Line 1604, Address: 0x294428, Func Offset: 0xc8
	// Line 1605, Address: 0x294430, Func Offset: 0xd0
	// Line 1607, Address: 0x294444, Func Offset: 0xe4
	// Line 1608, Address: 0x29444c, Func Offset: 0xec
	// Line 1612, Address: 0x294458, Func Offset: 0xf8
	// Line 1613, Address: 0x294460, Func Offset: 0x100
	// Line 1616, Address: 0x294490, Func Offset: 0x130
	// Func End, Address: 0x2944a4, Func Offset: 0x144
}

