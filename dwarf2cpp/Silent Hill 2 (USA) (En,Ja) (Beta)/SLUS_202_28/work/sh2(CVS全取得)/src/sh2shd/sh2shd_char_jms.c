typedef struct SHADOW_CHAR_MAN;
typedef struct shBattleFight;
typedef struct SHADOW_PACKET_BUF;
typedef struct SubCharacter;
typedef union Q_WORDDATA;
typedef struct shSkelton;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct SHADOW_OFF_WORK_CHAR;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct _AnimeInfo;
typedef struct shBattleInfo;
typedef struct SHADOW_ENV;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct JMS_SHADOW_ENV;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct SHADOW_CHAR_HEAD;
typedef struct _anon2;
typedef struct SHADOW_CHAR_OBJ_HEAD;
typedef struct _anon3;
typedef struct SHADOW_GEOM_HEAD;

typedef void(*type_31)(SubCharacter*);
typedef void(*type_35)(SubCharacter*);

typedef _AnimeInfo type_0[8];
typedef _AnimeInfo type_1[30];
typedef unsigned char type_2[97];
typedef float type_3[4];
typedef short type_4[22];
typedef unsigned int type_5[4];
typedef _AnimeInfo type_6[8];
typedef unsigned short type_7[8];
typedef float type_8[4];
typedef unsigned char type_9[16];
typedef _AnimeInfo type_10[12];
typedef int type_11[4];
typedef short type_12[8];
typedef char type_13[16];
typedef _AnimeInfo type_14[10];
typedef unsigned long type_15[2];
typedef unsigned char type_16[20];
typedef _AnimeInfo type_17[32];
typedef _AnimeInfo type_18[22];
typedef _AnimeInfo type_19[16];
typedef _AnimeInfo type_20[6];
typedef _AnimeInfo type_21[27];
typedef unsigned char type_22[14];
typedef _AnimeInfo type_23[29];
typedef _AnimeInfo type_24[7];
typedef shAttackInfo type_25[66];
typedef _AnimeInfo type_26[36];
typedef unsigned char type_27[69];
typedef _AnimeInfo type_28[6];
typedef _AnimeInfo type_29[2];
typedef _AnimeInfo type_30[10];
typedef float type_32[4];
typedef float type_33[4][4];
typedef _AnimeInfo type_34[35];
typedef _AnimeInfo type_36[1];
typedef float type_37[4];
typedef float type_38[4];
typedef unsigned char type_39[4];
typedef float type_40[4][4];
typedef SHADOW_OFF_WORK_CHAR type_41[2];
typedef unsigned char type_42[14];
typedef short type_43[24];

struct SHADOW_CHAR_MAN
{
	SubCharacter* scp;
	unsigned short kind;
	short id;
	unsigned char obj_num;
	float spot_cam_angle;
	short light_kind;
	float light_pos[4];
	float light_dir[4];
	float light_param[4];
	float drop_shadow_matrix[4][4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon2 b_pos;
	_anon2 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
	_anon2 des_t;
	_anon2 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct SHADOW_OFF_WORK_CHAR
{
	unsigned short kind;
	short id;
	short obj_id[22];
};

struct SHADOW_SHAPE_FRAME
{
	float local_world[4][4];
	float local_light_position[4];
	Q_WORDDATA length;
	unsigned int* pRefPacket;
	unsigned int* pRawData;
	unsigned int* pKickAddr;
	short obj_id;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
	unsigned char se;
};

struct SHADOW_ENV
{
	short block;
	short clip_kind;
	float leng;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct JMS_SHADOW_ENV
{
	short light_kind;
	float bias;
	float height_revision;
	float scale;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct SHADOW_CHAR_HEAD
{
	short char_id;
	unsigned short kind;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct SHADOW_CHAR_OBJ_HEAD
{
	unsigned int char_id;
	short obj_id;
	short geom_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
};

struct _anon3
{
	float d[4][4];
};

struct SHADOW_GEOM_HEAD
{
	short vertex_num;
	short prim;
	short send_data_num;
	short ee_memory_size;
	short boundary_x;
	short boundary_y;
	short boundary_z;
	short boundary_r;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo dmaria_anim[30];
_AnimeInfo p_hhh_mar_anim[6];
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
_AnimeInfo nse_anim[27];
_AnimeInfo d_nse_anim[1];
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
_AnimeInfo oni_anim[16];
_AnimeInfo d_oni_anim[10];
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[2];
_AnimeInfo dangela_anim[32];
_AnimeInfo pangela_anim[6];
_AnimeInfo pap_anim[29];
_AnimeInfo d_pap_anim[8];
SHADOW_OFF_WORK_CHAR shadow_off_work_char[2];
short james_skel_no_for_shadow[24];

void sh2shd_init_char_man(SHADOW_CHAR_MAN* man, SubCharacter* scp, Q_WORDDATA* raw_data, unsigned short kind, short id, int light_kind, float* light_pos, float* light_dir, float* light_param);
void sh2shd_make_reftag_pool_char(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_make_reftag_pool_char_p_maria(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_add_char_to_kick_packet(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* kick_packet);
void sh2shd_renew_char_man(SHADOW_CHAR_MAN* man, float* spot_pos, float leng, SHADOW_ENV* shadow_env);
void sh2shd_renew_char_man_for_spot(SHADOW_CHAR_MAN* man, float* spot_pos, SHADOW_ENV* shadow_env);
void sh2shd_renew_char_man_parallel(SHADOW_CHAR_MAN* man, float* virtual_light_position);
void sh2shd_calc_light_position_for_self(float* light_pos, unsigned short kind, short id, JMS_SHADOW_ENV* env, float height);
void sh2shd_calc_light_position_for_self_spot(float* light_pos, unsigned short kind, short id, JMS_SHADOW_ENV* env, float* chara_pos, float height);
void sh2shd_make_reftag_pool_char_for_drop_with_order(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_make_reftag_pool_char_for_drop_with_order_p_maria(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_renew_char_man_for_drop(SHADOW_CHAR_MAN* man, float* spot_pos, float alpha_decay);
void sh2shd_get_height_for_alpha(float* high, float* low, unsigned short kind, unsigned short id);
int sh2shd_get_shape_no(unsigned short kind, int skel_no);
int sh2shd_get_shape_no_jms(int skel_no);
int sh2shd_get_shape_no_mar(int skel_no);
int sh2shd_get_shape_no_p_mar(int skel_no);
int sh2shd_get_shape_no_scu(int skel_no);
int sh2shd_get_shape_no_mkn(int skel_no);
int sh2shd_get_shape_no_nse(int skel_no);
int sh2shd_get_shape_no_red(int skel_no);
int sh2shd_get_shape_no_oni(int skel_no);
int sh2shd_get_shape_no_edb(int skel_no);

// 
// Start address: 0x18c060
void sh2shd_init_char_man(SHADOW_CHAR_MAN* man, SubCharacter* scp, Q_WORDDATA* raw_data, unsigned short kind, short id, int light_kind, float* light_pos, float* light_dir, float* light_param)
{
	Q_WORDDATA* raw;
	short obj_id;
	SHADOW_CHAR_HEAD char_head;
	// Line 53, Address: 0x18c060, Func Offset: 0
	// Line 61, Address: 0x18c070, Func Offset: 0x10
	// Line 62, Address: 0x18c074, Func Offset: 0x14
	// Line 64, Address: 0x18c078, Func Offset: 0x18
	// Line 65, Address: 0x18c0a4, Func Offset: 0x44
	// Line 66, Address: 0x18c0a8, Func Offset: 0x48
	// Line 67, Address: 0x18c0ac, Func Offset: 0x4c
	// Line 69, Address: 0x18c0b4, Func Offset: 0x54
	// Line 70, Address: 0x18c0b8, Func Offset: 0x58
	// Line 71, Address: 0x18c0c0, Func Offset: 0x60
	// Line 72, Address: 0x18c0c8, Func Offset: 0x68
	// Line 74, Address: 0x18c0d4, Func Offset: 0x74
	// Line 75, Address: 0x18c110, Func Offset: 0xb0
	// Line 94, Address: 0x18c11c, Func Offset: 0xbc
	// Func End, Address: 0x18c130, Func Offset: 0xd0
}

// 
// Start address: 0x18c130
void sh2shd_make_reftag_pool_char(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	short shape_no;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 99, Address: 0x18c130, Func Offset: 0
	// Line 106, Address: 0x18c138, Func Offset: 0x8
	// Line 109, Address: 0x18c13c, Func Offset: 0xc
	// Line 111, Address: 0x18c140, Func Offset: 0x10
	// Line 112, Address: 0x18c170, Func Offset: 0x40
	// Line 114, Address: 0x18c174, Func Offset: 0x44
	// Line 116, Address: 0x18c17c, Func Offset: 0x4c
	// Line 118, Address: 0x18c188, Func Offset: 0x58
	// Line 120, Address: 0x18c1ac, Func Offset: 0x7c
	// Line 121, Address: 0x18c1c4, Func Offset: 0x94
	// Line 124, Address: 0x18c1d4, Func Offset: 0xa4
	// Line 125, Address: 0x18c1e0, Func Offset: 0xb0
	// Line 126, Address: 0x18c1f4, Func Offset: 0xc4
	// Line 127, Address: 0x18c200, Func Offset: 0xd0
	// Line 129, Address: 0x18c208, Func Offset: 0xd8
	// Line 143, Address: 0x18c20c, Func Offset: 0xdc
	// Line 146, Address: 0x18c238, Func Offset: 0x108
	// Line 147, Address: 0x18c254, Func Offset: 0x124
	// Line 151, Address: 0x18c258, Func Offset: 0x128
	// Line 153, Address: 0x18c260, Func Offset: 0x130
	// Line 157, Address: 0x18c294, Func Offset: 0x164
	// Line 161, Address: 0x18c2b0, Func Offset: 0x180
	// Line 166, Address: 0x18c2d8, Func Offset: 0x1a8
	// Line 168, Address: 0x18c2f4, Func Offset: 0x1c4
	// Line 169, Address: 0x18c330, Func Offset: 0x200
	// Line 172, Address: 0x18c334, Func Offset: 0x204
	// Line 188, Address: 0x18c338, Func Offset: 0x208
	// Line 189, Address: 0x18c350, Func Offset: 0x220
	// Line 193, Address: 0x18c354, Func Offset: 0x224
	// Line 194, Address: 0x18c360, Func Offset: 0x230
	// Line 195, Address: 0x18c36c, Func Offset: 0x23c
	// Line 198, Address: 0x18c380, Func Offset: 0x250
	// Line 203, Address: 0x18c398, Func Offset: 0x268
	// Line 204, Address: 0x18c3a4, Func Offset: 0x274
	// Line 206, Address: 0x18c3b8, Func Offset: 0x288
	// Line 208, Address: 0x18c3bc, Func Offset: 0x28c
	// Line 209, Address: 0x18c40c, Func Offset: 0x2dc
	// Func End, Address: 0x18c41c, Func Offset: 0x2ec
}

// 
// Start address: 0x18c420
void sh2shd_make_reftag_pool_char_p_maria(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	short shape_no;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 213, Address: 0x18c420, Func Offset: 0
	// Line 220, Address: 0x18c428, Func Offset: 0x8
	// Line 223, Address: 0x18c42c, Func Offset: 0xc
	// Line 225, Address: 0x18c430, Func Offset: 0x10
	// Line 226, Address: 0x18c460, Func Offset: 0x40
	// Line 228, Address: 0x18c464, Func Offset: 0x44
	// Line 230, Address: 0x18c46c, Func Offset: 0x4c
	// Line 232, Address: 0x18c478, Func Offset: 0x58
	// Line 234, Address: 0x18c49c, Func Offset: 0x7c
	// Line 236, Address: 0x18c4b4, Func Offset: 0x94
	// Line 239, Address: 0x18c58c, Func Offset: 0x16c
	// Line 240, Address: 0x18c590, Func Offset: 0x170
	// Line 243, Address: 0x18c598, Func Offset: 0x178
	// Line 244, Address: 0x18c59c, Func Offset: 0x17c
	// Line 247, Address: 0x18c5a4, Func Offset: 0x184
	// Line 248, Address: 0x18c5a8, Func Offset: 0x188
	// Line 251, Address: 0x18c5b0, Func Offset: 0x190
	// Line 252, Address: 0x18c5b4, Func Offset: 0x194
	// Line 255, Address: 0x18c5bc, Func Offset: 0x19c
	// Line 256, Address: 0x18c5c0, Func Offset: 0x1a0
	// Line 259, Address: 0x18c5c8, Func Offset: 0x1a8
	// Line 260, Address: 0x18c5d0, Func Offset: 0x1b0
	// Line 263, Address: 0x18c5d8, Func Offset: 0x1b8
	// Line 264, Address: 0x18c5dc, Func Offset: 0x1bc
	// Line 267, Address: 0x18c5e4, Func Offset: 0x1c4
	// Line 268, Address: 0x18c5ec, Func Offset: 0x1cc
	// Line 271, Address: 0x18c5f4, Func Offset: 0x1d4
	// Line 272, Address: 0x18c5fc, Func Offset: 0x1dc
	// Line 275, Address: 0x18c604, Func Offset: 0x1e4
	// Line 276, Address: 0x18c60c, Func Offset: 0x1ec
	// Line 279, Address: 0x18c614, Func Offset: 0x1f4
	// Line 280, Address: 0x18c618, Func Offset: 0x1f8
	// Line 283, Address: 0x18c620, Func Offset: 0x200
	// Line 284, Address: 0x18c624, Func Offset: 0x204
	// Line 287, Address: 0x18c62c, Func Offset: 0x20c
	// Line 288, Address: 0x18c634, Func Offset: 0x214
	// Line 291, Address: 0x18c63c, Func Offset: 0x21c
	// Line 292, Address: 0x18c644, Func Offset: 0x224
	// Line 295, Address: 0x18c64c, Func Offset: 0x22c
	// Line 296, Address: 0x18c650, Func Offset: 0x230
	// Line 299, Address: 0x18c658, Func Offset: 0x238
	// Line 300, Address: 0x18c660, Func Offset: 0x240
	// Line 303, Address: 0x18c668, Func Offset: 0x248
	// Line 306, Address: 0x18c670, Func Offset: 0x250
	// Line 309, Address: 0x18c680, Func Offset: 0x260
	// Line 310, Address: 0x18c68c, Func Offset: 0x26c
	// Line 311, Address: 0x18c6a0, Func Offset: 0x280
	// Line 312, Address: 0x18c6ac, Func Offset: 0x28c
	// Line 314, Address: 0x18c6b4, Func Offset: 0x294
	// Line 328, Address: 0x18c6b8, Func Offset: 0x298
	// Line 331, Address: 0x18c6e4, Func Offset: 0x2c4
	// Line 332, Address: 0x18c700, Func Offset: 0x2e0
	// Line 336, Address: 0x18c704, Func Offset: 0x2e4
	// Line 338, Address: 0x18c70c, Func Offset: 0x2ec
	// Line 342, Address: 0x18c73c, Func Offset: 0x31c
	// Line 346, Address: 0x18c758, Func Offset: 0x338
	// Line 351, Address: 0x18c780, Func Offset: 0x360
	// Line 353, Address: 0x18c79c, Func Offset: 0x37c
	// Line 354, Address: 0x18c7d8, Func Offset: 0x3b8
	// Line 357, Address: 0x18c7dc, Func Offset: 0x3bc
	// Line 373, Address: 0x18c7e0, Func Offset: 0x3c0
	// Line 374, Address: 0x18c7f8, Func Offset: 0x3d8
	// Line 378, Address: 0x18c7fc, Func Offset: 0x3dc
	// Line 379, Address: 0x18c808, Func Offset: 0x3e8
	// Line 380, Address: 0x18c814, Func Offset: 0x3f4
	// Line 383, Address: 0x18c828, Func Offset: 0x408
	// Line 388, Address: 0x18c840, Func Offset: 0x420
	// Line 389, Address: 0x18c84c, Func Offset: 0x42c
	// Line 391, Address: 0x18c860, Func Offset: 0x440
	// Line 393, Address: 0x18c864, Func Offset: 0x444
	// Line 394, Address: 0x18c8b4, Func Offset: 0x494
	// Func End, Address: 0x18c8c4, Func Offset: 0x4a4
}

// 
// Start address: 0x18c8d0
void sh2shd_add_char_to_kick_packet(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* kick_packet)
{
	int k;
	int j;
	Q_WORDDATA* top;
	int count_call_tag_num;
	unsigned int* reftag_pool_addr;
	Q_WORDDATA* curr;
	int i;
	// Line 654, Address: 0x18c8d0, Func Offset: 0
	// Line 659, Address: 0x18c8d8, Func Offset: 0x8
	// Line 661, Address: 0x18c8dc, Func Offset: 0xc
	// Line 667, Address: 0x18c8e0, Func Offset: 0x10
	// Line 668, Address: 0x18c914, Func Offset: 0x44
	// Line 669, Address: 0x18c918, Func Offset: 0x48
	// Line 673, Address: 0x18c91c, Func Offset: 0x4c
	// Line 675, Address: 0x18c928, Func Offset: 0x58
	// Line 676, Address: 0x18c940, Func Offset: 0x70
	// Line 680, Address: 0x18c944, Func Offset: 0x74
	// Line 681, Address: 0x18c95c, Func Offset: 0x8c
	// Line 682, Address: 0x18c960, Func Offset: 0x90
	// Line 685, Address: 0x18c964, Func Offset: 0x94
	// Line 692, Address: 0x18c978, Func Offset: 0xa8
	// Line 695, Address: 0x18c988, Func Offset: 0xb8
	// Line 697, Address: 0x18c98c, Func Offset: 0xbc
	// Line 701, Address: 0x18c9dc, Func Offset: 0x10c
	// Line 703, Address: 0x18c9e8, Func Offset: 0x118
	// Line 709, Address: 0x18ca2c, Func Offset: 0x15c
	// Line 711, Address: 0x18ca48, Func Offset: 0x178
	// Line 712, Address: 0x18ca54, Func Offset: 0x184
	// Line 713, Address: 0x18ca88, Func Offset: 0x1b8
	// Line 716, Address: 0x18ca90, Func Offset: 0x1c0
	// Line 718, Address: 0x18ca9c, Func Offset: 0x1cc
	// Line 720, Address: 0x18cab4, Func Offset: 0x1e4
	// Line 722, Address: 0x18cac0, Func Offset: 0x1f0
	// Line 724, Address: 0x18cae0, Func Offset: 0x210
	// Line 725, Address: 0x18caf8, Func Offset: 0x228
	// Line 726, Address: 0x18cb04, Func Offset: 0x234
	// Line 730, Address: 0x18cb2c, Func Offset: 0x25c
	// Line 732, Address: 0x18cb3c, Func Offset: 0x26c
	// Line 733, Address: 0x18cb40, Func Offset: 0x270
	// Line 740, Address: 0x18cb54, Func Offset: 0x284
	// Func End, Address: 0x18cb64, Func Offset: 0x294
}

// 
// Start address: 0x18cb70
void sh2shd_renew_char_man(SHADOW_CHAR_MAN* man, float* spot_pos, float leng, SHADOW_ENV* shadow_env)
{
	float world_local[4][4];
	int i;
	// Line 746, Address: 0x18cb70, Func Offset: 0
	// Line 751, Address: 0x18cba0, Func Offset: 0x30
	// Line 753, Address: 0x18cbbc, Func Offset: 0x4c
	// Line 754, Address: 0x18cbd4, Func Offset: 0x64
	// Line 755, Address: 0x18cbe8, Func Offset: 0x78
	// Line 770, Address: 0x18cc04, Func Offset: 0x94
	// Line 771, Address: 0x18cc10, Func Offset: 0xa0
	// Line 772, Address: 0x18cc20, Func Offset: 0xb0
	// Line 773, Address: 0x18cc38, Func Offset: 0xc8
	// Func End, Address: 0x18cc60, Func Offset: 0xf0
}

// 
// Start address: 0x18cc60
void sh2shd_renew_char_man_for_spot(SHADOW_CHAR_MAN* man, float* spot_pos, SHADOW_ENV* shadow_env)
{
	float world_local[4][4];
	int i;
	// Line 779, Address: 0x18cc60, Func Offset: 0
	// Line 785, Address: 0x18cc88, Func Offset: 0x28
	// Line 787, Address: 0x18cca4, Func Offset: 0x44
	// Line 788, Address: 0x18ccbc, Func Offset: 0x5c
	// Line 789, Address: 0x18ccd0, Func Offset: 0x70
	// Line 805, Address: 0x18ccec, Func Offset: 0x8c
	// Line 806, Address: 0x18ccfc, Func Offset: 0x9c
	// Line 807, Address: 0x18cd0c, Func Offset: 0xac
	// Line 808, Address: 0x18cd20, Func Offset: 0xc0
	// Func End, Address: 0x18cd44, Func Offset: 0xe4
}

// 
// Start address: 0x18cd50
void sh2shd_renew_char_man_parallel(SHADOW_CHAR_MAN* man, float* virtual_light_position)
{
	float world_local[4][4];
	float leng;
	int i;
	// Line 813, Address: 0x18cd50, Func Offset: 0
	// Line 819, Address: 0x18cd70, Func Offset: 0x20
	// Line 821, Address: 0x18cd8c, Func Offset: 0x3c
	// Line 840, Address: 0x18cda4, Func Offset: 0x54
	// Line 841, Address: 0x18cdb8, Func Offset: 0x68
	// Line 843, Address: 0x18cdd4, Func Offset: 0x84
	// Line 844, Address: 0x18cde8, Func Offset: 0x98
	// Line 845, Address: 0x18ce00, Func Offset: 0xb0
	// Func End, Address: 0x18ce20, Func Offset: 0xd0
}

// 
// Start address: 0x18ce20
void sh2shd_calc_light_position_for_self(float* light_pos, unsigned short kind, short id, JMS_SHADOW_ENV* env, float height)
{
	float sc;
	float scale;
	float bias;
	float height_revision;
	float mat[4][4];
	float z_unit[4];
	float tmp[4];
	// Line 859, Address: 0x18ce20, Func Offset: 0
	// Line 861, Address: 0x18ce54, Func Offset: 0x34
	// Line 868, Address: 0x18ce68, Func Offset: 0x48
	// Line 869, Address: 0x18ce6c, Func Offset: 0x4c
	// Line 870, Address: 0x18ce70, Func Offset: 0x50
	// Line 872, Address: 0x18ce74, Func Offset: 0x54
	// Line 873, Address: 0x18ce88, Func Offset: 0x68
	// Line 874, Address: 0x18ce94, Func Offset: 0x74
	// Line 875, Address: 0x18cea8, Func Offset: 0x88
	// Line 877, Address: 0x18cebc, Func Offset: 0x9c
	// Line 879, Address: 0x18ced4, Func Offset: 0xb4
	// Line 881, Address: 0x18cee0, Func Offset: 0xc0
	// Line 882, Address: 0x18cef0, Func Offset: 0xd0
	// Line 883, Address: 0x18cef4, Func Offset: 0xd4
	// Line 885, Address: 0x18cf14, Func Offset: 0xf4
	// Line 886, Address: 0x18cf30, Func Offset: 0x110
	// Line 887, Address: 0x18cf48, Func Offset: 0x128
	// Line 888, Address: 0x18cf58, Func Offset: 0x138
	// Line 890, Address: 0x18cf70, Func Offset: 0x150
	// Line 892, Address: 0x18cf80, Func Offset: 0x160
	// Line 894, Address: 0x18cf90, Func Offset: 0x170
	// Line 896, Address: 0x18cf9c, Func Offset: 0x17c
	// Line 898, Address: 0x18cfa0, Func Offset: 0x180
	// Line 899, Address: 0x18cfac, Func Offset: 0x18c
	// Func End, Address: 0x18cfd8, Func Offset: 0x1b8
}

// 
// Start address: 0x18cfe0
void sh2shd_calc_light_position_for_self_spot(float* light_pos, unsigned short kind, short id, JMS_SHADOW_ENV* env, float* chara_pos, float height)
{
	float scale;
	float bias;
	float height_revision;
	float mat[4][4];
	float z_unit[4];
	float tmp[4];
	// Line 903, Address: 0x18cfe0, Func Offset: 0
	// Line 905, Address: 0x18d01c, Func Offset: 0x3c
	// Line 912, Address: 0x18d030, Func Offset: 0x50
	// Line 913, Address: 0x18d034, Func Offset: 0x54
	// Line 914, Address: 0x18d038, Func Offset: 0x58
	// Line 916, Address: 0x18d03c, Func Offset: 0x5c
	// Line 917, Address: 0x18d050, Func Offset: 0x70
	// Line 918, Address: 0x18d05c, Func Offset: 0x7c
	// Line 919, Address: 0x18d070, Func Offset: 0x90
	// Line 921, Address: 0x18d084, Func Offset: 0xa4
	// Line 923, Address: 0x18d09c, Func Offset: 0xbc
	// Line 926, Address: 0x18d0a8, Func Offset: 0xc8
	// Line 927, Address: 0x18d0b8, Func Offset: 0xd8
	// Line 928, Address: 0x18d0bc, Func Offset: 0xdc
	// Line 929, Address: 0x18d0dc, Func Offset: 0xfc
	// Line 931, Address: 0x18d10c, Func Offset: 0x12c
	// Line 932, Address: 0x18d11c, Func Offset: 0x13c
	// Line 933, Address: 0x18d12c, Func Offset: 0x14c
	// Line 935, Address: 0x18d13c, Func Offset: 0x15c
	// Line 936, Address: 0x18d148, Func Offset: 0x168
	// Line 937, Address: 0x18d158, Func Offset: 0x178
	// Line 938, Address: 0x18d160, Func Offset: 0x180
	// Line 939, Address: 0x18d16c, Func Offset: 0x18c
	// Func End, Address: 0x18d19c, Func Offset: 0x1bc
}

// 
// Start address: 0x18d1a0
void sh2shd_make_reftag_pool_char_for_drop_with_order(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	int a;
	int shape_no;
	short shape_no2;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 1061, Address: 0x18d1a0, Func Offset: 0
	// Line 1065, Address: 0x18d1cc, Func Offset: 0x2c
	// Line 1066, Address: 0x18d1d0, Func Offset: 0x30
	// Line 1068, Address: 0x18d1d4, Func Offset: 0x34
	// Line 1071, Address: 0x18d1d8, Func Offset: 0x38
	// Line 1072, Address: 0x18d204, Func Offset: 0x64
	// Line 1075, Address: 0x18d208, Func Offset: 0x68
	// Line 1077, Address: 0x18d210, Func Offset: 0x70
	// Line 1080, Address: 0x18d21c, Func Offset: 0x7c
	// Line 1084, Address: 0x18d240, Func Offset: 0xa0
	// Line 1085, Address: 0x18d258, Func Offset: 0xb8
	// Line 1086, Address: 0x18d264, Func Offset: 0xc4
	// Line 1088, Address: 0x18d270, Func Offset: 0xd0
	// Line 1089, Address: 0x18d288, Func Offset: 0xe8
	// Line 1093, Address: 0x18d294, Func Offset: 0xf4
	// Line 1094, Address: 0x18d2a0, Func Offset: 0x100
	// Line 1095, Address: 0x18d2b4, Func Offset: 0x114
	// Line 1096, Address: 0x18d2c0, Func Offset: 0x120
	// Line 1098, Address: 0x18d2c8, Func Offset: 0x128
	// Line 1103, Address: 0x18d2cc, Func Offset: 0x12c
	// Line 1109, Address: 0x18d2f4, Func Offset: 0x154
	// Line 1112, Address: 0x18d320, Func Offset: 0x180
	// Line 1113, Address: 0x18d33c, Func Offset: 0x19c
	// Line 1117, Address: 0x18d340, Func Offset: 0x1a0
	// Line 1119, Address: 0x18d348, Func Offset: 0x1a8
	// Line 1136, Address: 0x18d37c, Func Offset: 0x1dc
	// Line 1140, Address: 0x18d398, Func Offset: 0x1f8
	// Line 1145, Address: 0x18d3c0, Func Offset: 0x220
	// Line 1147, Address: 0x18d3d8, Func Offset: 0x238
	// Line 1148, Address: 0x18d410, Func Offset: 0x270
	// Line 1151, Address: 0x18d414, Func Offset: 0x274
	// Line 1157, Address: 0x18d41c, Func Offset: 0x27c
	// Line 1160, Address: 0x18d420, Func Offset: 0x280
	// Line 1161, Address: 0x18d438, Func Offset: 0x298
	// Line 1165, Address: 0x18d43c, Func Offset: 0x29c
	// Line 1166, Address: 0x18d448, Func Offset: 0x2a8
	// Line 1167, Address: 0x18d454, Func Offset: 0x2b4
	// Line 1170, Address: 0x18d468, Func Offset: 0x2c8
	// Line 1175, Address: 0x18d480, Func Offset: 0x2e0
	// Line 1176, Address: 0x18d48c, Func Offset: 0x2ec
	// Line 1178, Address: 0x18d4a0, Func Offset: 0x300
	// Line 1180, Address: 0x18d4a4, Func Offset: 0x304
	// Line 1181, Address: 0x18d4f4, Func Offset: 0x354
	// Func End, Address: 0x18d520, Func Offset: 0x380
}

// 
// Start address: 0x18d520
void sh2shd_make_reftag_pool_char_for_drop_with_order_p_maria(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	int shape_no;
	short shape_no2;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 1189, Address: 0x18d520, Func Offset: 0
	// Line 1193, Address: 0x18d54c, Func Offset: 0x2c
	// Line 1194, Address: 0x18d550, Func Offset: 0x30
	// Line 1195, Address: 0x18d554, Func Offset: 0x34
	// Line 1198, Address: 0x18d558, Func Offset: 0x38
	// Line 1199, Address: 0x18d584, Func Offset: 0x64
	// Line 1201, Address: 0x18d588, Func Offset: 0x68
	// Line 1203, Address: 0x18d590, Func Offset: 0x70
	// Line 1206, Address: 0x18d59c, Func Offset: 0x7c
	// Line 1210, Address: 0x18d5c0, Func Offset: 0xa0
	// Line 1213, Address: 0x18d698, Func Offset: 0x178
	// Line 1214, Address: 0x18d69c, Func Offset: 0x17c
	// Line 1217, Address: 0x18d6a4, Func Offset: 0x184
	// Line 1218, Address: 0x18d6a8, Func Offset: 0x188
	// Line 1221, Address: 0x18d6b0, Func Offset: 0x190
	// Line 1222, Address: 0x18d6b4, Func Offset: 0x194
	// Line 1225, Address: 0x18d6bc, Func Offset: 0x19c
	// Line 1226, Address: 0x18d6c0, Func Offset: 0x1a0
	// Line 1229, Address: 0x18d6c8, Func Offset: 0x1a8
	// Line 1230, Address: 0x18d6cc, Func Offset: 0x1ac
	// Line 1233, Address: 0x18d6d4, Func Offset: 0x1b4
	// Line 1234, Address: 0x18d6dc, Func Offset: 0x1bc
	// Line 1237, Address: 0x18d6e4, Func Offset: 0x1c4
	// Line 1238, Address: 0x18d6e8, Func Offset: 0x1c8
	// Line 1241, Address: 0x18d6f0, Func Offset: 0x1d0
	// Line 1242, Address: 0x18d6f8, Func Offset: 0x1d8
	// Line 1245, Address: 0x18d700, Func Offset: 0x1e0
	// Line 1246, Address: 0x18d708, Func Offset: 0x1e8
	// Line 1249, Address: 0x18d710, Func Offset: 0x1f0
	// Line 1250, Address: 0x18d718, Func Offset: 0x1f8
	// Line 1253, Address: 0x18d720, Func Offset: 0x200
	// Line 1254, Address: 0x18d724, Func Offset: 0x204
	// Line 1257, Address: 0x18d72c, Func Offset: 0x20c
	// Line 1258, Address: 0x18d730, Func Offset: 0x210
	// Line 1261, Address: 0x18d738, Func Offset: 0x218
	// Line 1262, Address: 0x18d740, Func Offset: 0x220
	// Line 1265, Address: 0x18d748, Func Offset: 0x228
	// Line 1266, Address: 0x18d750, Func Offset: 0x230
	// Line 1269, Address: 0x18d758, Func Offset: 0x238
	// Line 1270, Address: 0x18d75c, Func Offset: 0x23c
	// Line 1273, Address: 0x18d764, Func Offset: 0x244
	// Line 1274, Address: 0x18d76c, Func Offset: 0x24c
	// Line 1277, Address: 0x18d774, Func Offset: 0x254
	// Line 1279, Address: 0x18d77c, Func Offset: 0x25c
	// Line 1282, Address: 0x18d780, Func Offset: 0x260
	// Line 1283, Address: 0x18d798, Func Offset: 0x278
	// Line 1284, Address: 0x18d7a4, Func Offset: 0x284
	// Line 1286, Address: 0x18d7b0, Func Offset: 0x290
	// Line 1287, Address: 0x18d7c8, Func Offset: 0x2a8
	// Line 1291, Address: 0x18d7d4, Func Offset: 0x2b4
	// Line 1292, Address: 0x18d7e0, Func Offset: 0x2c0
	// Line 1293, Address: 0x18d7f4, Func Offset: 0x2d4
	// Line 1294, Address: 0x18d800, Func Offset: 0x2e0
	// Line 1296, Address: 0x18d808, Func Offset: 0x2e8
	// Line 1301, Address: 0x18d80c, Func Offset: 0x2ec
	// Line 1307, Address: 0x18d834, Func Offset: 0x314
	// Line 1310, Address: 0x18d860, Func Offset: 0x340
	// Line 1311, Address: 0x18d87c, Func Offset: 0x35c
	// Line 1315, Address: 0x18d880, Func Offset: 0x360
	// Line 1317, Address: 0x18d888, Func Offset: 0x368
	// Line 1319, Address: 0x18d8bc, Func Offset: 0x39c
	// Line 1323, Address: 0x18d8d8, Func Offset: 0x3b8
	// Line 1328, Address: 0x18d900, Func Offset: 0x3e0
	// Line 1330, Address: 0x18d918, Func Offset: 0x3f8
	// Line 1334, Address: 0x18d950, Func Offset: 0x430
	// Line 1336, Address: 0x18d958, Func Offset: 0x438
	// Line 1339, Address: 0x18d97c, Func Offset: 0x45c
	// Line 1340, Address: 0x18d994, Func Offset: 0x474
	// Line 1344, Address: 0x18d998, Func Offset: 0x478
	// Line 1345, Address: 0x18d9a0, Func Offset: 0x480
	// Line 1346, Address: 0x18d9ac, Func Offset: 0x48c
	// Line 1349, Address: 0x18d9c0, Func Offset: 0x4a0
	// Line 1354, Address: 0x18d9d8, Func Offset: 0x4b8
	// Line 1355, Address: 0x18d9e4, Func Offset: 0x4c4
	// Line 1357, Address: 0x18d9f8, Func Offset: 0x4d8
	// Line 1359, Address: 0x18d9fc, Func Offset: 0x4dc
	// Line 1360, Address: 0x18da4c, Func Offset: 0x52c
	// Func End, Address: 0x18da78, Func Offset: 0x558
}

// 
// Start address: 0x18da80
void sh2shd_renew_char_man_for_drop(SHADOW_CHAR_MAN* man, float* spot_pos, float alpha_decay)
{
	float tmp;
	float low;
	float high;
	float world_local[4][4];
	int i;
	float jms_low;
	float jms_high;
	// Line 1366, Address: 0x18da80, Func Offset: 0
	// Line 1377, Address: 0x18daa8, Func Offset: 0x28
	// Line 1378, Address: 0x18dac0, Func Offset: 0x40
	// Line 1381, Address: 0x18dad8, Func Offset: 0x58
	// Line 1382, Address: 0x18dadc, Func Offset: 0x5c
	// Line 1385, Address: 0x18dae0, Func Offset: 0x60
	// Line 1387, Address: 0x18daf8, Func Offset: 0x78
	// Line 1389, Address: 0x18db14, Func Offset: 0x94
	// Line 1390, Address: 0x18db20, Func Offset: 0xa0
	// Line 1393, Address: 0x18db28, Func Offset: 0xa8
	// Line 1395, Address: 0x18db44, Func Offset: 0xc4
	// Line 1396, Address: 0x18db50, Func Offset: 0xd0
	// Line 1399, Address: 0x18db5c, Func Offset: 0xdc
	// Line 1401, Address: 0x18db78, Func Offset: 0xf8
	// Line 1403, Address: 0x18db90, Func Offset: 0x110
	// Line 1404, Address: 0x18dba4, Func Offset: 0x124
	// Line 1422, Address: 0x18dbc0, Func Offset: 0x140
	// Line 1423, Address: 0x18dbd0, Func Offset: 0x150
	// Line 1424, Address: 0x18dbe0, Func Offset: 0x160
	// Line 1426, Address: 0x18dbec, Func Offset: 0x16c
	// Line 1427, Address: 0x18dc00, Func Offset: 0x180
	// Line 1428, Address: 0x18dc10, Func Offset: 0x190
	// Line 1429, Address: 0x18dc28, Func Offset: 0x1a8
	// Func End, Address: 0x18dc4c, Func Offset: 0x1cc
}

// 
// Start address: 0x18dc50
void sh2shd_get_height_for_alpha(float* high, float* low, unsigned short kind, unsigned short id)
{
	float mat[4][4];
	// Line 1432, Address: 0x18dc50, Func Offset: 0
	// Line 1435, Address: 0x18dc7c, Func Offset: 0x2c
	// Line 1442, Address: 0x18dd54, Func Offset: 0x104
	// Line 1443, Address: 0x18dd6c, Func Offset: 0x11c
	// Line 1444, Address: 0x18dd78, Func Offset: 0x128
	// Line 1445, Address: 0x18dd90, Func Offset: 0x140
	// Line 1446, Address: 0x18dd98, Func Offset: 0x148
	// Line 1447, Address: 0x18ddb0, Func Offset: 0x160
	// Line 1448, Address: 0x18ddc8, Func Offset: 0x178
	// Line 1449, Address: 0x18ddcc, Func Offset: 0x17c
	// Line 1452, Address: 0x18ddd4, Func Offset: 0x184
	// Line 1453, Address: 0x18ddec, Func Offset: 0x19c
	// Line 1454, Address: 0x18ddf8, Func Offset: 0x1a8
	// Line 1455, Address: 0x18de10, Func Offset: 0x1c0
	// Line 1456, Address: 0x18de18, Func Offset: 0x1c8
	// Line 1457, Address: 0x18de30, Func Offset: 0x1e0
	// Line 1458, Address: 0x18de48, Func Offset: 0x1f8
	// Line 1459, Address: 0x18de4c, Func Offset: 0x1fc
	// Line 1462, Address: 0x18de54, Func Offset: 0x204
	// Line 1463, Address: 0x18de6c, Func Offset: 0x21c
	// Line 1464, Address: 0x18de78, Func Offset: 0x228
	// Line 1465, Address: 0x18de90, Func Offset: 0x240
	// Line 1466, Address: 0x18de98, Func Offset: 0x248
	// Line 1467, Address: 0x18deb0, Func Offset: 0x260
	// Line 1468, Address: 0x18dec8, Func Offset: 0x278
	// Line 1469, Address: 0x18decc, Func Offset: 0x27c
	// Line 1472, Address: 0x18ded4, Func Offset: 0x284
	// Line 1473, Address: 0x18deec, Func Offset: 0x29c
	// Line 1474, Address: 0x18def8, Func Offset: 0x2a8
	// Line 1475, Address: 0x18df10, Func Offset: 0x2c0
	// Line 1476, Address: 0x18df18, Func Offset: 0x2c8
	// Line 1477, Address: 0x18df30, Func Offset: 0x2e0
	// Line 1478, Address: 0x18df48, Func Offset: 0x2f8
	// Line 1479, Address: 0x18df4c, Func Offset: 0x2fc
	// Line 1482, Address: 0x18df54, Func Offset: 0x304
	// Line 1483, Address: 0x18df6c, Func Offset: 0x31c
	// Line 1484, Address: 0x18df78, Func Offset: 0x328
	// Line 1485, Address: 0x18df90, Func Offset: 0x340
	// Line 1486, Address: 0x18df98, Func Offset: 0x348
	// Line 1487, Address: 0x18dfb0, Func Offset: 0x360
	// Line 1488, Address: 0x18dfc8, Func Offset: 0x378
	// Line 1489, Address: 0x18dfcc, Func Offset: 0x37c
	// Line 1491, Address: 0x18dfd4, Func Offset: 0x384
	// Line 1492, Address: 0x18dfec, Func Offset: 0x39c
	// Line 1493, Address: 0x18dff8, Func Offset: 0x3a8
	// Line 1494, Address: 0x18e010, Func Offset: 0x3c0
	// Line 1495, Address: 0x18e028, Func Offset: 0x3d8
	// Line 1496, Address: 0x18e02c, Func Offset: 0x3dc
	// Line 1497, Address: 0x18e044, Func Offset: 0x3f4
	// Line 1498, Address: 0x18e04c, Func Offset: 0x3fc
	// Line 1499, Address: 0x18e064, Func Offset: 0x414
	// Line 1500, Address: 0x18e07c, Func Offset: 0x42c
	// Line 1501, Address: 0x18e080, Func Offset: 0x430
	// Line 1511, Address: 0x18e088, Func Offset: 0x438
	// Line 1512, Address: 0x18e0a0, Func Offset: 0x450
	// Line 1513, Address: 0x18e0ac, Func Offset: 0x45c
	// Line 1540, Address: 0x18e0b4, Func Offset: 0x464
	// Func End, Address: 0x18e0d8, Func Offset: 0x488
}

// 
// Start address: 0x18e0e0
int sh2shd_get_shape_no(unsigned short kind, int skel_no)
{
	int shape_no;
	int all_skel_num;
	// Line 1543, Address: 0x18e0e0, Func Offset: 0
	// Line 1547, Address: 0x18e0e8, Func Offset: 0x8
	// Line 1554, Address: 0x18e190, Func Offset: 0xb0
	// Line 1556, Address: 0x18e1a0, Func Offset: 0xc0
	// Line 1560, Address: 0x18e1a8, Func Offset: 0xc8
	// Line 1561, Address: 0x18e1b8, Func Offset: 0xd8
	// Line 1565, Address: 0x18e1c0, Func Offset: 0xe0
	// Line 1566, Address: 0x18e1d0, Func Offset: 0xf0
	// Line 1570, Address: 0x18e1d8, Func Offset: 0xf8
	// Line 1571, Address: 0x18e1e8, Func Offset: 0x108
	// Line 1575, Address: 0x18e1f0, Func Offset: 0x110
	// Line 1576, Address: 0x18e200, Func Offset: 0x120
	// Line 1593, Address: 0x18e208, Func Offset: 0x128
	// Line 1594, Address: 0x18e218, Func Offset: 0x138
	// Line 1603, Address: 0x18e220, Func Offset: 0x140
	// Line 1604, Address: 0x18e230, Func Offset: 0x150
	// Line 1608, Address: 0x18e238, Func Offset: 0x158
	// Line 1609, Address: 0x18e248, Func Offset: 0x168
	// Line 1613, Address: 0x18e250, Func Offset: 0x170
	// Line 1614, Address: 0x18e260, Func Offset: 0x180
	// Line 1621, Address: 0x18e268, Func Offset: 0x188
	// Line 1625, Address: 0x18e274, Func Offset: 0x194
	// Line 1646, Address: 0x18e278, Func Offset: 0x198
	// Func End, Address: 0x18e288, Func Offset: 0x1a8
}

// 
// Start address: 0x18e290
int sh2shd_get_shape_no_jms(int skel_no)
{
	// Line 1708, Address: 0x18e290, Func Offset: 0
	// Line 1711, Address: 0x18e358, Func Offset: 0xc8
	// Line 1714, Address: 0x18e364, Func Offset: 0xd4
	// Line 1717, Address: 0x18e370, Func Offset: 0xe0
	// Line 1720, Address: 0x18e37c, Func Offset: 0xec
	// Line 1723, Address: 0x18e388, Func Offset: 0xf8
	// Line 1726, Address: 0x18e394, Func Offset: 0x104
	// Line 1729, Address: 0x18e3a0, Func Offset: 0x110
	// Line 1732, Address: 0x18e3ac, Func Offset: 0x11c
	// Line 1735, Address: 0x18e3b8, Func Offset: 0x128
	// Line 1738, Address: 0x18e3c4, Func Offset: 0x134
	// Line 1741, Address: 0x18e3d0, Func Offset: 0x140
	// Line 1744, Address: 0x18e3dc, Func Offset: 0x14c
	// Line 1747, Address: 0x18e3e8, Func Offset: 0x158
	// Line 1750, Address: 0x18e3f4, Func Offset: 0x164
	// Line 1753, Address: 0x18e400, Func Offset: 0x170
	// Line 1756, Address: 0x18e40c, Func Offset: 0x17c
	// Line 1809, Address: 0x18e410, Func Offset: 0x180
	// Func End, Address: 0x18e418, Func Offset: 0x188
}

// 
// Start address: 0x18e420
int sh2shd_get_shape_no_mar(int skel_no)
{
	// Line 1812, Address: 0x18e420, Func Offset: 0
	// Line 1874, Address: 0x18e428, Func Offset: 0x8
	// Line 1877, Address: 0x18e4f8, Func Offset: 0xd8
	// Line 1880, Address: 0x18e504, Func Offset: 0xe4
	// Line 1883, Address: 0x18e50c, Func Offset: 0xec
	// Line 1886, Address: 0x18e518, Func Offset: 0xf8
	// Line 1889, Address: 0x18e524, Func Offset: 0x104
	// Line 1892, Address: 0x18e530, Func Offset: 0x110
	// Line 1895, Address: 0x18e53c, Func Offset: 0x11c
	// Line 1898, Address: 0x18e548, Func Offset: 0x128
	// Line 1901, Address: 0x18e554, Func Offset: 0x134
	// Line 1904, Address: 0x18e560, Func Offset: 0x140
	// Line 1907, Address: 0x18e568, Func Offset: 0x148
	// Line 1910, Address: 0x18e574, Func Offset: 0x154
	// Line 1913, Address: 0x18e580, Func Offset: 0x160
	// Line 1916, Address: 0x18e58c, Func Offset: 0x16c
	// Line 1919, Address: 0x18e598, Func Offset: 0x178
	// Line 1922, Address: 0x18e5a4, Func Offset: 0x184
	// Line 1925, Address: 0x18e5b0, Func Offset: 0x190
	// Line 1929, Address: 0x18e5bc, Func Offset: 0x19c
	// Line 2016, Address: 0x18e5e4, Func Offset: 0x1c4
	// Func End, Address: 0x18e5f4, Func Offset: 0x1d4
}

// 
// Start address: 0x18e600
int sh2shd_get_shape_no_p_mar(int skel_no)
{
	// Line 2020, Address: 0x18e600, Func Offset: 0
	// Line 2021, Address: 0x18e608, Func Offset: 0x8
	// Line 2024, Address: 0x18e6d8, Func Offset: 0xd8
	// Line 2027, Address: 0x18e6e4, Func Offset: 0xe4
	// Line 2030, Address: 0x18e6ec, Func Offset: 0xec
	// Line 2033, Address: 0x18e6f8, Func Offset: 0xf8
	// Line 2036, Address: 0x18e704, Func Offset: 0x104
	// Line 2039, Address: 0x18e710, Func Offset: 0x110
	// Line 2042, Address: 0x18e71c, Func Offset: 0x11c
	// Line 2045, Address: 0x18e728, Func Offset: 0x128
	// Line 2048, Address: 0x18e734, Func Offset: 0x134
	// Line 2051, Address: 0x18e740, Func Offset: 0x140
	// Line 2054, Address: 0x18e748, Func Offset: 0x148
	// Line 2057, Address: 0x18e754, Func Offset: 0x154
	// Line 2060, Address: 0x18e760, Func Offset: 0x160
	// Line 2063, Address: 0x18e76c, Func Offset: 0x16c
	// Line 2066, Address: 0x18e778, Func Offset: 0x178
	// Line 2069, Address: 0x18e784, Func Offset: 0x184
	// Line 2072, Address: 0x18e790, Func Offset: 0x190
	// Line 2076, Address: 0x18e79c, Func Offset: 0x19c
	// Line 2121, Address: 0x18e7c4, Func Offset: 0x1c4
	// Func End, Address: 0x18e7d4, Func Offset: 0x1d4
}

// 
// Start address: 0x18e7e0
int sh2shd_get_shape_no_scu(int skel_no)
{
	// Line 2148, Address: 0x18e7e0, Func Offset: 0
	// Line 2154, Address: 0x18e8a0, Func Offset: 0xc0
	// Line 2157, Address: 0x18e8ac, Func Offset: 0xcc
	// Line 2160, Address: 0x18e8b8, Func Offset: 0xd8
	// Line 2163, Address: 0x18e8c4, Func Offset: 0xe4
	// Line 2166, Address: 0x18e8d0, Func Offset: 0xf0
	// Line 2169, Address: 0x18e8dc, Func Offset: 0xfc
	// Line 2172, Address: 0x18e8e8, Func Offset: 0x108
	// Line 2175, Address: 0x18e8f4, Func Offset: 0x114
	// Line 2178, Address: 0x18e900, Func Offset: 0x120
	// Line 2181, Address: 0x18e90c, Func Offset: 0x12c
	// Line 2184, Address: 0x18e918, Func Offset: 0x138
	// Line 2187, Address: 0x18e924, Func Offset: 0x144
	// Line 2190, Address: 0x18e930, Func Offset: 0x150
	// Line 2193, Address: 0x18e93c, Func Offset: 0x15c
	// Line 2196, Address: 0x18e948, Func Offset: 0x168
	// Line 2234, Address: 0x18e94c, Func Offset: 0x16c
	// Func End, Address: 0x18e954, Func Offset: 0x174
}

// 
// Start address: 0x18e960
int sh2shd_get_shape_no_mkn(int skel_no)
{
	// Line 2238, Address: 0x18e960, Func Offset: 0
	// Line 2241, Address: 0x18e988, Func Offset: 0x28
	// Line 2244, Address: 0x18e994, Func Offset: 0x34
	// Line 2247, Address: 0x18e9a0, Func Offset: 0x40
	// Line 2250, Address: 0x18e9ac, Func Offset: 0x4c
	// Line 2253, Address: 0x18e9b8, Func Offset: 0x58
	// Line 2256, Address: 0x18e9c4, Func Offset: 0x64
	// Line 2259, Address: 0x18e9d0, Func Offset: 0x70
	// Line 2262, Address: 0x18e9dc, Func Offset: 0x7c
	// Line 2265, Address: 0x18e9e8, Func Offset: 0x88
	// Line 2268, Address: 0x18e9f4, Func Offset: 0x94
	// Line 2271, Address: 0x18ea00, Func Offset: 0xa0
	// Line 2274, Address: 0x18ea0c, Func Offset: 0xac
	// Line 2277, Address: 0x18ea18, Func Offset: 0xb8
	// Line 2303, Address: 0x18ea1c, Func Offset: 0xbc
	// Func End, Address: 0x18ea24, Func Offset: 0xc4
}

// 
// Start address: 0x18ea30
int sh2shd_get_shape_no_nse(int skel_no)
{
	// Line 2307, Address: 0x18ea30, Func Offset: 0
	// Line 2310, Address: 0x18ea58, Func Offset: 0x28
	// Line 2313, Address: 0x18ea64, Func Offset: 0x34
	// Line 2316, Address: 0x18ea70, Func Offset: 0x40
	// Line 2319, Address: 0x18ea7c, Func Offset: 0x4c
	// Line 2322, Address: 0x18ea88, Func Offset: 0x58
	// Line 2325, Address: 0x18ea94, Func Offset: 0x64
	// Line 2328, Address: 0x18eaa0, Func Offset: 0x70
	// Line 2331, Address: 0x18eaac, Func Offset: 0x7c
	// Line 2334, Address: 0x18eab8, Func Offset: 0x88
	// Line 2337, Address: 0x18eac4, Func Offset: 0x94
	// Line 2340, Address: 0x18ead0, Func Offset: 0xa0
	// Line 2343, Address: 0x18eadc, Func Offset: 0xac
	// Line 2346, Address: 0x18eae8, Func Offset: 0xb8
	// Line 2349, Address: 0x18eaf4, Func Offset: 0xc4
	// Line 2352, Address: 0x18eb00, Func Offset: 0xd0
	// Line 2355, Address: 0x18eb0c, Func Offset: 0xdc
	// Line 2358, Address: 0x18eb18, Func Offset: 0xe8
	// Line 2397, Address: 0x18eb1c, Func Offset: 0xec
	// Func End, Address: 0x18eb24, Func Offset: 0xf4
}

// 
// Start address: 0x18eb30
int sh2shd_get_shape_no_red(int skel_no)
{
	// Line 2401, Address: 0x18eb30, Func Offset: 0
	// Line 2404, Address: 0x18ebf4, Func Offset: 0xc4
	// Line 2407, Address: 0x18ec00, Func Offset: 0xd0
	// Line 2410, Address: 0x18ec0c, Func Offset: 0xdc
	// Line 2413, Address: 0x18ec18, Func Offset: 0xe8
	// Line 2416, Address: 0x18ec24, Func Offset: 0xf4
	// Line 2419, Address: 0x18ec30, Func Offset: 0x100
	// Line 2422, Address: 0x18ec3c, Func Offset: 0x10c
	// Line 2425, Address: 0x18ec48, Func Offset: 0x118
	// Line 2428, Address: 0x18ec54, Func Offset: 0x124
	// Line 2431, Address: 0x18ec60, Func Offset: 0x130
	// Line 2434, Address: 0x18ec6c, Func Offset: 0x13c
	// Line 2437, Address: 0x18ec78, Func Offset: 0x148
	// Line 2440, Address: 0x18ec84, Func Offset: 0x154
	// Line 2443, Address: 0x18ec90, Func Offset: 0x160
	// Line 2446, Address: 0x18ec9c, Func Offset: 0x16c
	// Line 2449, Address: 0x18eca8, Func Offset: 0x178
	// Line 2505, Address: 0x18ecac, Func Offset: 0x17c
	// Func End, Address: 0x18ecb4, Func Offset: 0x184
}

// 
// Start address: 0x18ecc0
int sh2shd_get_shape_no_oni(int skel_no)
{
	// Line 2509, Address: 0x18ecc0, Func Offset: 0
	// Line 2512, Address: 0x18ed90, Func Offset: 0xd0
	// Line 2515, Address: 0x18ed9c, Func Offset: 0xdc
	// Line 2518, Address: 0x18eda8, Func Offset: 0xe8
	// Line 2521, Address: 0x18edb4, Func Offset: 0xf4
	// Line 2524, Address: 0x18edc0, Func Offset: 0x100
	// Line 2527, Address: 0x18edcc, Func Offset: 0x10c
	// Line 2530, Address: 0x18edd8, Func Offset: 0x118
	// Line 2533, Address: 0x18ede4, Func Offset: 0x124
	// Line 2536, Address: 0x18edf0, Func Offset: 0x130
	// Line 2539, Address: 0x18edfc, Func Offset: 0x13c
	// Line 2542, Address: 0x18ee08, Func Offset: 0x148
	// Line 2545, Address: 0x18ee14, Func Offset: 0x154
	// Line 2548, Address: 0x18ee20, Func Offset: 0x160
	// Line 2551, Address: 0x18ee2c, Func Offset: 0x16c
	// Line 2554, Address: 0x18ee38, Func Offset: 0x178
	// Line 2557, Address: 0x18ee44, Func Offset: 0x184
	// Line 2560, Address: 0x18ee50, Func Offset: 0x190
	// Line 2612, Address: 0x18ee54, Func Offset: 0x194
	// Func End, Address: 0x18ee5c, Func Offset: 0x19c
}

// 
// Start address: 0x18ee60
int sh2shd_get_shape_no_edb(int skel_no)
{
	// Line 2616, Address: 0x18ee60, Func Offset: 0
	// Line 2619, Address: 0x18ef0c, Func Offset: 0xac
	// Line 2622, Address: 0x18ef18, Func Offset: 0xb8
	// Line 2625, Address: 0x18ef24, Func Offset: 0xc4
	// Line 2628, Address: 0x18ef30, Func Offset: 0xd0
	// Line 2631, Address: 0x18ef3c, Func Offset: 0xdc
	// Line 2634, Address: 0x18ef48, Func Offset: 0xe8
	// Line 2637, Address: 0x18ef54, Func Offset: 0xf4
	// Line 2640, Address: 0x18ef60, Func Offset: 0x100
	// Line 2643, Address: 0x18ef6c, Func Offset: 0x10c
	// Line 2646, Address: 0x18ef78, Func Offset: 0x118
	// Line 2649, Address: 0x18ef84, Func Offset: 0x124
	// Line 2652, Address: 0x18ef90, Func Offset: 0x130
	// Line 2655, Address: 0x18ef9c, Func Offset: 0x13c
	// Line 2658, Address: 0x18efa8, Func Offset: 0x148
	// Line 2703, Address: 0x18efac, Func Offset: 0x14c
	// Func End, Address: 0x18efb4, Func Offset: 0x154
}

