typedef union _anon0;
typedef struct sgAnime;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sfObj;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef enum _enum_0 : unsigned char;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct EventFlag;
typedef struct sfCldObject;
typedef struct sfCharacter;
typedef enum _enum_1 : unsigned char;
typedef struct sgQTNode;
typedef struct _anon10;
typedef struct sgSVModel;
typedef struct sfCldPart;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _PLAYER_WORK;
typedef struct _anon16;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon17;
typedef struct sgQTObject;
typedef struct sgIKHandle;
typedef struct _anon18;
typedef struct sgBone;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct sfOffsetAABB;
typedef struct _anon22;
typedef enum BattleHitResult : unsigned char;
typedef union sfCldBody;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct _anon26;
typedef union _anon27;
typedef struct _anon28;
typedef struct BattleHit;
typedef enum GameItem : unsigned char;
typedef struct _anon29;
typedef struct _anon30;
typedef struct _anon31;
typedef struct _GAME_WORK;
typedef struct _anon32;
typedef struct _anon33;
typedef struct _anon34;
typedef struct _anon35;
typedef struct _anon36;
typedef struct _anon37;
typedef struct _anon38;
typedef struct _anon39;
typedef struct _anon40;
typedef struct _anon41;
typedef enum BattleAttackKind : unsigned char;

typedef void(*type_0)(sfObj*);
typedef int(*type_6)(int);
typedef int(*type_13)(int);
typedef void(*type_25)(_anon16*, int, int, float*);
typedef sgIKSolveResult(*type_30)();
typedef void(*type_38)(_anon1*);
typedef int(*type_40)(_anon1*, int);
typedef void(*type_63)(sgAnime*, int);
typedef int(*type_70)(int);
typedef void(*type_73)(sfObj*);
typedef void(*type_74)(_anon1*, _anon8*, unsigned int);
typedef void(*type_78)(_anon1*, int);

typedef unsigned char type_1[320];
typedef unsigned char type_2[8];
typedef float type_3[4][10];
typedef unsigned int type_4[4];
typedef float type_5[4];
typedef sfCldPart* type_7[6];
typedef int(*type_8)(int)[14];
typedef unsigned char type_9[3];
typedef float type_10[4][4];
typedef unsigned char type_11[32];
typedef unsigned char type_12[8];
typedef int(*type_14)(int)[14];
typedef float type_15[4];
typedef unsigned short type_16[2];
typedef unsigned short type_17[2][8];
typedef float type_18[4];
typedef _anon5* type_19[13];
typedef unsigned char type_20[8];
typedef float type_21[4][2];
typedef float type_22[4];
typedef float type_23[4][3];
typedef unsigned char type_24[3];
typedef int type_26[1];
typedef unsigned char type_27[3][4];
typedef float type_28[4][1];
typedef float type_29[1];
typedef int type_31[1];
typedef unsigned char* type_32[3];
typedef float type_33[4][3];
typedef unsigned short type_34[2];
typedef unsigned short type_35[2][8];
typedef _anon5* type_36[13];
typedef int type_37[1];
typedef void(*type_39)(_anon1*)[13];
typedef int(*type_41)(_anon1*, int)[13];
typedef unsigned char type_42[3];
typedef _anon24 type_43[4];
typedef _anon20 type_44[15];
typedef _anon27 type_45[0];
typedef int type_46[1];
typedef short type_47[2];
typedef _anon21 type_48[3];
typedef unsigned short type_49[2];
typedef void* type_50[4];
typedef char type_51[22];
typedef unsigned char type_52[128];
typedef char type_53[4];
typedef int type_54[1];
typedef unsigned char type_55[4];
typedef unsigned char type_56[16];
typedef unsigned char type_57[8];
typedef unsigned char type_58[2];
typedef _anon5 type_59[64];
typedef int type_60[1];
typedef float type_61[1];
typedef int type_62[1];
typedef float type_64[2];
typedef int type_65[5];
typedef int type_66[1];
typedef _anon0 type_67[256];
typedef _anon29 type_68[2];
typedef _anon29 type_69[2][2];
typedef int(*type_71)(int)[14];
typedef unsigned char type_72[4];
typedef void(*type_75)(_anon1*, _anon8*, unsigned int)[13];
typedef int type_76[7];
typedef unsigned char type_77[45];
typedef void(*type_79)(_anon1*, int)[13];
typedef _anon39 type_80[3];

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

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct _anon1
{
	float scale;
	float mx;
	float my;
	float vx;
	float vy;
	_enum_0 map_id;
	_enum_0 change_map_id;
	_anon3* map_parts;
	_anon22* mark_parts;
	_anon41 flag;
	_anon11 map_tex;
	_anon4 map_img;
	_anon4 map_bg;
	_anon8* tex;
	unsigned int cbp;
	float map_player_pos[2];
	_anon26 arw_up;
	_anon26 arw_down;
	_anon6 player;
	_anon6 eileen;
	float mes_alpha_ratio;
	int zoom_timer;
	unsigned char is_zoom_in;
	unsigned char morph_flag;
	char is_next;
};

struct _anon2
{
	short u0;
	short v0;
	short u1;
	short v1;
	float x;
	float y;
	float w;
	float h;
	_anon14 rect3d;
	_anon14 offset;
	int scene;
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

struct _anon3
{
	_anon2* parts;
	int start_index;
	int num;
};

struct _anon4
{
	_anon36 base;
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

struct _anon5
{
	struct
	{
		unsigned char touch_1st : 1;
		unsigned char touch_2nd : 1;
		unsigned char is_through : 1;
		unsigned char is_locked : 1;
		unsigned char is_broken : 1;
		unsigned char is_key : 1;
		unsigned char padding : 2;
	};
};

struct _anon6
{
	float pos[4][1];
	float rot[1];
	int stage;
	int scene;
	int map_id;
	float ofs_x;
	float ofs_y;
	_anon13 img;
	int disp_flag;
	unsigned int arrow_timer;
	unsigned int rec_timer;
	unsigned char init_flag;
	unsigned char force_init_flag;
	unsigned char draw_step;
	unsigned char head;
	unsigned char tail;
};

enum _enum_0 : unsigned char
{
	MAP_ID_DUMMY,
	MAP_ID_3LDK,
	MAP_ID_SB_B3,
	MAP_ID_SB_B2,
	MAP_ID_SB_B1,
	MAP_ID_SB_B0,
	MAP_ID_FR_FIELD,
	MAP_ID_MZ_B2,
	MAP_ID_MZ_B1,
	MAP_ID_MZ_1F,
	MAP_ID_MZ_2F,
	MAP_ID_MZ_3F,
	MAP_ID_MZ_RF,
	MAP_ID_BD_B8,
	MAP_ID_BD_B7,
	MAP_ID_BD_B6,
	MAP_ID_BD_B5,
	MAP_ID_BD_B4,
	MAP_ID_BD_B3,
	MAP_ID_BD_B2,
	MAP_ID_BD_B1,
	MAP_ID_BD_1F,
	MAP_ID_BD_2F,
	MAP_ID_BD_3F,
	MAP_ID_BD_4F,
	MAP_ID_BD_5F,
	MAP_ID_BD_6F,
	MAP_ID_BD_7F,
	MAP_ID_BD_8F,
	MAP_ID_BD_9F,
	MAP_ID_BD_10F,
	MAP_ID_BD_11F,
	MAP_ID_BD_12F,
	MAP_ID_BD_13F,
	MAP_ID_BD_14F,
	MAP_ID_BD_15F,
	MAP_ID_IE_1F,
	MAP_ID_IE_2F,
	MAP_ID_IE_3F,
	MAP_ID_HS_B1,
	MAP_ID_HS_1F,
	MAP_ID_HS_2F,
	MAP_ID_CM_1F,
	MAP_ID_CM_2F,
	MAP_ID_CM_3F,
	MAX_MAP_ID_NUM
};

struct _anon7
{
	int map_id;
	_anon18* mark;
	int num;
};

struct _anon8
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

struct _anon9
{
	short cx;
	short cy;
	unsigned char rot_n;
	unsigned char scale;
	unsigned char door_no;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon17 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

enum _enum_1 : unsigned char
{
	DOOR_HIS_TOUCH,
	DOOR_HIS_THROUGH,
	DOOR_HIS_LOCKED,
	DOOR_HIS_UNLOCK,
	DOOR_HIS_BROKEN
};

struct sgQTNode
{
	int dummy;
};

struct _anon10
{
	int dummy;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

struct _anon11
{
	int file_id;
	int arc_id;
	int image_no;
	int clut_no;
};

struct _anon12
{
	struct
	{
		unsigned char pipe_0 : 2;
		unsigned char pipe_1 : 2;
		unsigned char pipe_2 : 2;
		unsigned char pipe_3 : 2;
	};
	struct
	{
		unsigned char pipe_4 : 2;
		unsigned char pipe_5 : 2;
		unsigned char pipe_6 : 2;
		unsigned char pipe_7 : 2;
	};
};

struct _anon13
{
	_anon36 base;
	_anon39 v[3];
	float rot;
	float scale;
	int ofs_x;
	int ofs_y;
};

struct _anon14
{
	short x0;
	short y0;
	short x1;
	short y1;
};

struct _anon15
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

struct _PLAYER_WORK
{
	int num;
	int type;
	float life;
	float str;
	float def;
	float tire;
	int dull_count;
	int dulls;
	int dull_motion;
	int invincible;
	GameItem wp_last;
	float life_max;
	float str_max;
	float def_max;
	float ampule_time;
	int draw_flag;
	float pos[4];
	float v_pos[4];
	float eyerot[4];
	float prev_pos[4];
	float rot[4];
	float prev_rot[4];
	float v_rot[4];
	float speed;
	sfCharacter chara;
	sfCharacter* obj;
	sgAnime* anim;
	sgAnime* anim_frame;
	sfCldObject cld_obj;
	sfObj* ch_obj;
	int battle_stat;
	int holy_stat;
	float power_attack;
	int damage;
	int gotmode;
	int hold;
	int hold_kind;
	float hold_time;
	int gun_ikset;
	float gun_angle;
	sfObj* target;
	int target_mode;
	GameItem weapon_kind;
	sfCharacter weapon_chr;
	sfCharacter* wp_chr;
	sfObj* wp_obj;
	sfCldObject weapon_cld;
	sfCldObject* wp_cld;
	int cld_entry;
	GameItem holy_kind;
	int autolock;
	int sword_stat;
	int enemy_near;
	int anime_process;
	int anime_sub;
	_anon10* anim_ctrl;
	int slot_frame;
	int link_anim;
	int slot_link;
	float anim_speed;
	float hit_reduce;
	int auto_search;
	int pos_f;
	float pos_bak[4];
	float rot_bak[4];
	float last_neck[4];
	int advance_only;
	int who;
};

struct _anon16
{
	unsigned long tex0;
	unsigned long clamp;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon17
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon16*, int, int, float*);
	int equip_flag;
};

struct sgQTObject
{
	_anon35 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

struct _anon18
{
	short x;
	short y;
	short w;
	short h;
	short u;
	short v;
	short parent_index;
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

struct _anon19
{
	int flag;
	short cx;
	short cy;
	short map_id;
	unsigned char scale;
};

struct _anon20
{
	int flag;
	short stage;
	short scene;
};

struct _anon21
{
	int flag;
	short stage;
	short scene;
	float x0;
	float z0;
	float x1;
	float z1;
};

struct sfOffsetAABB
{
	_anon37 aabb;
	float offset[4];
};

struct _anon22
{
	_anon9* parts;
	int start_index;
	int num;
};

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

union sfCldBody
{
	_anon38 obb;
	_anon37 aabb;
	sfOffsetAABB offset_aabb;
	_anon33 line;
	_anon35 sphere;
};

struct _anon23
{
	_anon27 vertex[0];
};

struct _anon24
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon25
{
	_anon19* mark;
	int num;
};

struct _anon26
{
	_anon13 img;
	int flag;
};

union _anon27
{
	float node[4];
	_anon24 data[4];
};

struct _anon28
{
	float* life;
	float* life_max;
	float curse_value;
	float curse_value_current;
	float curse_value_base;
	float total_damage;
	sfCharacter* chara;
	short stage_no;
	short scene_no;
	float* local_pos;
	float global_pos[4];
	float target_dir[4];
	float follow_to_target;
	float pl_pos[4];
	float pl_rot[4];
	float pl_dir[4];
	float distance_to_henry;
	float distance_to_henry_last;
	float to_henry_angle_y;
	int limping;
	unsigned char henry_is_attacking;
	unsigned char hurry_to_henry;
	unsigned short henry_door_touch_timer;
	unsigned int eileen_play_time;
	unsigned int with_henry_eileen_play_time;
	unsigned short down_count;
	unsigned short henry_atk_count;
	unsigned char attack_attitude;
	int hit_status;
	float hit_origin[4];
	sfCldObject* cld_object;
	BattleHit* recieve_attack;
	int recieve_attack_id;
	sfObj* body_hit_enemy;
	short body_hit_timer;
	short attack_hit_timer;
	int damage_is_large;
	int camera_overlap;
	int path_search_status;
	int out_of_scene;
	float global_target[4];
	float first_global_target[4];
	unsigned char global_target_status;
	unsigned char global_path_search_failed;
	_anon10* anm_ctrl;
	int anm_slot;
	float anm_ratio;
	unsigned char anime_mixer_using;
	unsigned char anime_end;
	unsigned char left_foot_on;
	unsigned char right_foot_on;
	float left_foot_hosei;
	float right_foot_hosei;
	int turn_face;
	float turn_ratio;
	float face_target[4];
	float turned_face_rot[4];
	float body_dir[4];
	float move_dir[4];
	float speed;
	float accel;
	float op_move_speed;
	unsigned char limping_move;
	unsigned char op_move_mode;
	float op_move_dir[4];
	float last_pos[4];
	float last_move_dir[4];
	float last_speed;
	float ball_last[4];
	_anon35 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon23* ground_poly;
	unsigned char action;
	unsigned char action_target;
	unsigned char next_action;
	unsigned char next_action_target;
	unsigned char action_mask;
	unsigned char face_move_step;
	unsigned char down_at_first;
	unsigned char hurdle_avoid;
	unsigned char hurdle_avoid_enter;
	unsigned char hurdle_avoid_tried_check;
	short hurdle_avoid_timer;
	short hurdle_avoid_retry_timer;
	float action_frames;
	float angle_speed;
	int timer;
	unsigned char wait_type;
	float speed_ratio;
	short slide_side_in;
	short slide_side;
	short breath_type;
	short turn_large;
	float max_angle_sp;
	sfObj* battle_target;
	float battle_target_position[4];
	float battle_target_center[4];
	float battle_target_direction[4];
	float to_battle_target;
	float battle_target_angle_y;
	unsigned char invincible;
	unsigned char attack_method_suggest;
	unsigned char target_is_large;
	unsigned char battle_target_is_seizing;
	unsigned char curse_on_henry;
	unsigned char curse_suffer;
	unsigned char gun_attack_result;
	short weapon_type;
	short weapon_to_equip;
	short attacking_on;
	short attack_times;
	short henry_attack_check_timer;
	int gun_aiming;
	float aim_target_position[4];
	float current_hand_position[4];
	float moving_ratio;
	float arm_drot[4];
	float ud_offset[4];
	short insane_type;
	short insane_timer;
	short event_step;
	unsigned int se_no;
	short se_set_frame;
	short se_reset_frame;
	unsigned char words_end;
	unsigned char speaking;
	short talk_step;
	short talk_timer;
	_anon15* current_message;
	int tired_param;
	unsigned char command_status[8];
	float go_target[4];
	float turn_target[4];
	float watch_target[4];
	short talk_motion;
	short go_slide_flag;
	short step_counter;
	short status_when_end;
};

struct BattleHit
{
	BattleAttackKind attack_kind;
	float damage;
	float shock;
	sfCldObject* cld_object;
	float origin_position[4];
	float attack_direction[4];
	BattleHitResult result;
	int flags;
	unsigned int id;
	void* origin;
};

enum GameItem : unsigned char
{
	ITEM_EMPTY,
	ITEM_SMALL_BULLET,
	ITEM_LARGE_BULLET,
	ITEM_SILVER_BULLET,
	ITEM_HOLY_CANDLE,
	ITEM_FINISHER,
	ITEM_RED_CHRISM,
	ITEM_LOADS_PRAYER,
	ITEM_SAINT_MEDALLION,
	ITEM_HEALTH_DRINK,
	ITEM_AMPLE,
	ITEM_FIRST_AID_KIT,
	ITEM_HANDGUN = 0x10,
	ITEM_REVOLVER,
	ITEM_IRON_PIPE,
	ITEM_CUTTER_KNIFE,
	ITEM_METAL_BAT,
	ITEM_DRIVER,
	ITEM_DRIVER_BROKEN,
	ITEM_SPOON,
	ITEM_SPOON_BROKEN,
	ITEM_MID_MASHY,
	ITEM_MID_MASHY_BROKEN,
	ITEM_MASHY_IRON,
	ITEM_MASHY_IRON_BROKEN,
	ITEM_MASHY,
	ITEM_MASHY_BROKEN,
	ITEM_SPADE_MASHY,
	ITEM_SPADE_MASHY_BROKEN,
	ITEM_MASHY_NIBLICK,
	ITEM_MASHY_NIBLICK_BROKEN,
	ITEM_PITCHER,
	ITEM_PITCHER_BROKEN,
	ITEM_NIBLICK,
	ITEM_NIBLICK_BROKEN,
	ITEM_PITCHING_WEDGE,
	ITEM_PITCHING_WEDGE_BROKEN,
	ITEM_SAND_WEDGE,
	ITEM_SAND_WEDGE_BROKEN,
	ITEM_PUTTER,
	ITEM_PUTTER_BROKEN,
	ITEM_WINE_BOTTLE,
	ITEM_WINE_BOTTLE_BROKEN,
	ITEM_SCOOP,
	ITEM_RUSTY_HATCHET,
	ITEM_PICK_OF_DESPAIR,
	ITEM_STUN_GUN,
	ITEM_SPRAY,
	ITEM_CLUB,
	ITEM_CHAIN_SAW,
	ITEM_KEY_OF_LIBERATION = 0x3c,
	ITEM_COIN_OF_LYNCHSTREETLINE,
	ITEM_CHOCOLATE_MILK,
	ITEM_SHOVEL_WITH_BLOOD_CHARACTER,
	ITEM_RUSTY_BLOODY_KEY,
	ITEM_RED_PAPER_1,
	ITEM_RED_PAPER_2,
	ITEM_RED_PAPER_3,
	ITEM_RED_PAPER_4,
	ITEM_RED_PAPER_5,
	ITEM_RED_PAPER_6,
	ITEM_TORN_RED_PAPER_1,
	ITEM_TORN_RED_PAPER_2,
	ITEM_TORN_RED_PAPER_MISS,
	ITEM_KEY_OF_SUPERINTENDANT,
	ITEM_KEY_ROCKER106,
	ITEM_CASSETTE_TAPE,
	ITEM_KEY_WITH_DOLL,
	ITEM_CHARM_OF_SUCCUBUS,
	ITEM_KEY_OF_SICKROOM,
	ITEM_RED_ENVELOPE,
	ITEM_SMALL_KEY,
	ITEM_CYNTHIAS_PASS,
	ITEM_OLD_DOLL,
	ITEM_MASTER_KEY_TO_APART,
	ITEM_ARMORIAL_MEDAL,
	ITEM_PICK_OF_HOPE,
	ITEM_NAVEL_STRING,
	ITEM_ALESSAS_SPEAR,
	ITEM_DIRTY_ENVELOPE,
	ITEM_TOY_KEY,
	ITEM_1SS_COIN_DIRTY,
	ITEM_1SS_COIN,
	ITEM_SB24_KEY,
	ITEM_HANDLE,
	ITEM_DOLLS_HEAD,
	ITEM_DOLLS_RIGHT_ARM,
	ITEM_DOLLS_LEFT_ARM,
	ITEM_DOLLS_RIGHT_LEG,
	ITEM_DOLLS_LEFT_LEG,
	ITEM_UNDERGROUND_KEY,
	ITEM_PRISONERS_SHIRT,
	ITEM_BILLIARD_BALL,
	ITEM_STUFFED_CAT,
	ITEM_VOLLEYBALL,
	ITEM_SMALL_CANDLE_PACKED,
	ITEM_SMALL_CANDLE,
	ITEM_GHOSTS_KEY,
	ITEM_DIRTY_STONE1,
	ITEM_DIRTY_STONE2,
	ITEM_DIRTY_STONE3,
	ITEM_DIRTY_STONE4,
	ITEM_DIRTY_STONE5,
	ITEM_CHANNELING_STONE1,
	ITEM_CHANNELING_STONE2,
	ITEM_CHANNELING_STONE3,
	ITEM_CHANNELING_STONE4,
	ITEM_CHANNELING_STONE5,
	ITEM_PLATE_OF_TEMPTATION,
	ITEM_PLATE_OF_ORIGIN,
	ITEM_PLATE_OF_SURVEILLANCE,
	ITEM_PLATE_OF_CHAOS,
	ITEM_ALBERT_SPORTS_KEY,
	ITEM_UNIFORM,
	ITEM_MZ_UPPER_KEY,
	ITEM_TRAILER_KEY,
	ITEM_HANDBAG = 0x80,
	ITEM_SUBMACHINEGUN,
	ITEM_BLACKJACK,
	ITEM_HORSEWHIP,
	ITEM_CHAIN,
	ITEM_FIRST_LETTER = 0x88,
	ITEM_SCRAP_OF_BOOK,
	ITEM_RED_DIARY_0408,
	ITEM_RED_DIARY_0404,
	ITEM_SCRAP_OF_BIBLE,
	ITEM_DIARY_OF_NEIGHBOUR,
	ITEM_SUPERINTENDANTS_MEMO,
	ITEM_SUPERINTENDANTS_DIARY,
	ITEM_RED_DIARY_0502,
	ITEM_RED_DIARY_0514,
	ITEM_RED_DIARY_0520,
	ITEM_SCRAP_OF_RED_DIARY,
	ITEM_SCRAP_OF_RED_DIARY_2,
	ITEM_MIKES_LOVELETTER,
	ITEM_RED_DIARY_0713,
	ITEM_RED_DIARY_0720,
	ITEM_HOLY_MOTHER_21_SACRAMENTS,
	ITEM_RED_BOOK,
	ITEM_PICTURE_BOOK,
	ITEM_RED_DIARY_0611,
	ITEM_RED_DIARY_0614,
	ITEM_RED_DIARY_SOMETIMEAGO,
	ITEM_RED_DIARY_0717,
	ITEM_RED_DIARY_0718,
	ITEM_RED_DIARY_0723,
	ITEM_RED_DIARY_0725,
	ITEM_RED_DIARY_0728,
	ITEM_RED_DIARY_0729,
	ITEM_RED_DIARY_0802,
	ITEM_RED_DIARY_0803,
	ITEM_RED_DIARY_0804,
	ITEM_RED_DIARY_0805,
	ITEM_RED_DIARY_0807,
	ITEM_SUPERINTENDANTS_DIARY_COUT,
	ITEM_JOSEPHS_LETTER,
	ITEM_JOSEPHS_REPORT,
	ITEM_NURSE_MEMO,
	ITEM_CHILD_LETTER,
	ITEM_BLOODY_SHIRT,
	ITEM_BARTENDERS_MEMO,
	ITEM_BARTENDERS_MEMO2,
	ITEM_MEMOIRS,
	ITEM_JASPERS_MEMO,
	ITEM_BURNED_OUT_MEMO,
	ITEM_DOLLS_TEXT,
	ITEM_EXPLORERS_MEMO,
	ITEM_SENTINELS_DIARY,
	ITEM_PLATE_ABOUT_WATERWHEEL,
	ITEM_PRISONERS_DIARY,
	ITEM_REPORT_1F,
	ITEM_REPORT_2F,
	ITEM_PASSWORD_MEMO,
	ITEM_BRICK = 0xe4,
	ITEM_KILLER_PIPE,
	ITEM_KILLER_GUN1,
	ITEM_KILLER_GUN2,
	ITEM_KIND_MAX
};

struct _anon29
{
	short x;
	short y;
	short w;
	short h;
	short u0;
	short v0;
	short u1;
	short v1;
};

struct _anon30
{
	char door_num[22];
};

struct _anon31
{
	unsigned char pass[128];
	unsigned char additional_flag[16];
	_anon5 door_stat[64];
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

struct _anon32
{
	_anon8* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon33
{
	float start[4];
	float end[4];
};

struct _anon34
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon35
{
	float center[4];
	float radius;
};

struct _anon36
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon32 tex_data;
	_anon34 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon37
{
	float bmin[4];
	float bmax[4];
};

struct _anon38
{
	float mat[4][4];
	float half_w[4];
};

struct _anon39
{
	float x;
	float y;
	int u;
	int v;
	unsigned int col;
};

struct _anon40
{
	int level;
	int step[7];
};

struct _anon41
{
	unsigned char have_map[45];
	_anon31 sb;
	_anon31 fr;
	_anon31 mz;
	_anon31 bd;
	_anon31 ie;
	_anon31 hs;
	_anon31 cm;
	unsigned char mz_peep_1f;
	unsigned char mz_peep_2f;
	unsigned char mz_peep_3f;
	_anon12 mz_pipe_1f;
	_anon12 mz_pipe_2f;
	_anon12 mz_pipe_3f;
};

enum BattleAttackKind : unsigned char
{
	BAK_NOTHING,
	BAK_UNDEFINED,
	BAK_PLAYER_TABLE_START,
	BAK_PLAYER_HAND_GUN = 0x2,
	BAK_PLAYER_REVOLVER,
	BAK_PLAYER_PIPE,
	BAK_PLAYER_PIPE_ST,
	BAK_PLAYER_CUTTER,
	BAK_PLAYER_CUTTER_ST,
	BAK_PLAYER_BAT,
	BAK_PLAYER_BAT_ST,
	BAK_PLAYER_DRIVER,
	BAK_PLAYER_DRIVER_ST,
	BAK_PLAYER_SPOON,
	BAK_PLAYER_SPOON_ST,
	BAK_PLAYER_MID_MASHY,
	BAK_PLAYER_MID_MASHY_ST,
	BAK_PLAYER_MASHY_IRON,
	BAK_PLAYER_MASHY_IRON_ST,
	BAK_PLAYER_MASHY,
	BAK_PLAYER_MASHY_ST,
	BAK_PLAYER_SPADE_MASHY,
	BAK_PLAYER_SPADE_MASHY_ST,
	BAK_PLAYER_MASHY_NIBLICK,
	BAK_PLAYER_MASHY_NIBLICK_ST,
	BAK_PLAYER_PITCHER,
	BAK_PLAYER_PITCHER_ST,
	BAK_PLAYER_NIBLICK,
	BAK_PLAYER_NIBLICK_ST,
	BAK_PLAYER_PITCHING_WEDGE,
	BAK_PLAYER_PITCHING_WEDGE_ST,
	BAK_PLAYER_SAND_WEDGE,
	BAK_PLAYER_SAND_WEDGE_ST,
	BAK_PLAYER_PUTTER,
	BAK_PLAYER_PUTTER_ST,
	BAK_PLAYER_BOTTLE,
	BAK_PLAYER_BROKEN_BOTTLE,
	BAK_PLAYER_SCOOP,
	BAK_PLAYER_SCOOP_ST,
	BAK_PLAYER_HATCHET,
	BAK_PLAYER_HATCHET_ST,
	BAK_PLAYER_PICK,
	BAK_PLAYER_PICK_ST,
	BAK_PLAYER_STUNGUN,
	BAK_PLAYER_SPRAY,
	BAK_PLAYER_CHAINSAW,
	BAK_PLAYER_CHAINSAW_ST,
	BAK_PLAYER_WOOD_STICK,
	BAK_PLAYER_SILVER_BULLET,
	BAK_PLAYER_FINISH,
	BAK_PLAYER_SCOOP_FINISH,
	BAK_PLAYER_PICK_FINISH,
	BAK_PLAYER_CHAINSAW_FINISH,
	BAK_PLAYER_EIL_HANDBAG_N,
	BAK_PLAYER_EIL_HANDBAG_3_1,
	BAK_PLAYER_EIL_HANDBAG_3_2,
	BAK_PLAYER_EIL_HANDBAG_3_3,
	BAK_PLAYER_EIL_HANDBAG_FINISH,
	BAK_PLAYER_EIL_CLUB_N,
	BAK_PLAYER_EIL_CLUB_3_1,
	BAK_PLAYER_EIL_CLUB_3_2,
	BAK_PLAYER_EIL_CLUB_3_3,
	BAK_PLAYER_EIL_CLUB_FINISH,
	BAK_PLAYER_EIL_ROD_N,
	BAK_PLAYER_EIL_ROD_3_1,
	BAK_PLAYER_EIL_ROD_3_2,
	BAK_PLAYER_EIL_ROD_3_3,
	BAK_PLAYER_EIL_ROD_FINISH,
	BAK_PLAYER_EIL_CHAIN_N,
	BAK_PLAYER_EIL_CHAIN_3_1,
	BAK_PLAYER_EIL_CHAIN_3_2,
	BAK_PLAYER_EIL_CHAIN_3_3,
	BAK_PLAYER_EIL_CHAIN_FINISH,
	BAK_PLAYER_EIL_GUN_N,
	BAK_PLAYER_TABLE_END = 0x48,
	BAK_ENEMY_TABLE_START,
	BAK_MUSH_DEATH = 0x49,
	BAK_BUZZ_BLOODSUCK,
	BAK_BUZZ_PECK,
	BAK_BUZZ_DIVE,
	BAK_KABE_STRIKE,
	BAK_KABE_BRINGDOWN,
	BAK_KABE_SIDEBLOW,
	BAK_KABE_HEADBUTT,
	BAK_WHEEL_DASH,
	BAK_JIN_SCRATCH,
	BAK_JIN_STRIKE,
	BAK_JIN_STAB,
	BAK_JIN_BRINGDOWN,
	BAK_TWN_STRIKE,
	BAK_TWN_JUMP,
	BAK_TWN_TURN,
	BAK_HIL_WALL,
	BAK_HIL_FLOOR,
	BAK_HYENA_DASH,
	BAK_MULTI_HEADBUTT,
	BAK_FLAMES_ATT1,
	BAK_FLAMES_ATT2,
	BAK_FAT_SING,
	BAK_FAT_DASH,
	BAK_FAT_DASH2,
	BAK_FAT_BOMB,
	BAK_SCR_ATT1,
	BAK_SCR_ATT2,
	BAK_SCR_ATT4,
	BAK_KILLER_SHOOT,
	BAK_KILLER_RAPIDFIRE,
	BAK_KILLER_PIPE,
	BAK_KILLER_PIPE_ST,
	BAK_KILLER_CHAINSAW_STAB,
	BAK_KILLER_CHAINSAW_SHAKE,
	BAK_KILLER_BLOWOFF,
	BAK_ENEMY_TABLE_END = 0x6c,
	BAK_OTHER_TABLE_START,
	BAK_GHOSTSTAIN_FLICK = 0x6d,
	BAK_OTHER_TABLE_END = 0x6d,
	BAK_MAX_NUMBER
};

int memo_step_flag;
unsigned char prison_scene_1f[8];
unsigned char prison_scene_2f[8];
unsigned char prison_scene_3f[8];
unsigned char* prison_scene[3];
unsigned char mes_draw_flag;
unsigned char hs_scene[32];
_GAME_WORK gamew;
_anon1 map_work;
_anon30 hs32_roomdata;
EventFlag event_flag;
float sg_vector_unit_z[4];
float sg_vector_unit_y[4];
_anon40 map_step_work;
unsigned long* sg_packet_cur;

int get_virtual_sb_scene(int scene);
int get_virtual_fr_scene(int scene);
int get_virtual_mz_scene(int scene);
int get_virtual_bd_scene(int scene);
int get_virtual_ie_scene(int scene);
int get_virtual_hs_scene(int scene);
int get_virtual_cm_scene(int scene);
int get_virtual_dmy_scene(int scene);
int get_virtual_scene();
int get_virtual_scene_eileen();
int get_virtual_sb_door_no(int door_no);
int get_virtual_fr_door_no(int door_no);
int get_virtual_mz_door_no(int door_no);
int get_virtual_bd_door_no(int door_no);
int get_virtual_ie_door_no(int door_no);
int get_virtual_hs_door_no(int door_no);
int get_virtual_cm_door_no(int door_no);
int get_virtual_dmy_door_no(int door_no);
int get_virtual_door_no(int door_no);
_anon14 miscMapGetRect3d(_anon1* work, int index);
_anon14 miscMapGetRect2d(_anon1* work, int index);
void MapSbOn(_anon1* work, int index);
void MapFrOn(_anon1* work, int index);
void MapMzOn(_anon1* work, int index);
void MapBdOn(_anon1* work, int index);
void MapIeOn(_anon1* work, int index);
void MapHsOn(_anon1* work, int index);
void MapCmOn(_anon1* work, int index);
void MapDmyOn();
int MapSbPassGet(_anon1* work, int index);
int MapFrPassGet(_anon1* work, int index);
int MapMzPassGet(_anon1* work, int index);
int MapBdPassGet(_anon1* work, int index);
int MapIePassGet(_anon1* work, int index);
int MapHsPassGet(_anon1* work, int index);
int MapCmPassGet(_anon1* work, int index);
int MapDmyPassGet();
void DoorSetHistory(_anon5* stat, _enum_1 val);
void miscMapDoorSetHistory(int stage, int real_door_no, _enum_1 val);
int get_virtual_map_door_no(int stage, int door_no);
_anon5* miscMapDoorStatusGet(int stage, int door_no);
void PlayerRecQueueInit(_anon6* p, float* default_pos, float default_rot);
void PlayerRecEnQueue(_anon6* p, float* pos, float rot);
void miscMapSetPlayerPos(_anon6* p, float* pos, float rot);
void miscMapOverWritePlayerPos(_anon6* p);
void miscMapRecordPlayerPos(_anon6* p, int map_id, int stage, int scene, float* pos, float rot);
void miscMapRecBase(_anon1* work);
void miscMapMzPipeRec(int scene);
int miscMapMzMovePipeIsTouch(int scene, int pos_no);
int miscMapMzFixedPipeIsTouch(int scene, int pos_no);
void miscMapMzRec(_anon1* work);
void miscMapMzPeepRec(int scene);
int miscMapMzPeepGet(int scene);
void miscHoleRecord();
void miscMapDummyRec();
void miscMapRecordPlayerPosForceInit();
void miscMapForceRecordPlayerPos();
void miscMapRecord();
void miscMapRecordBdElevator();
void miscMapFlagDataCopyToSave(void* dst);
void miscMapFlagDataCopyFromLoad(void* src);
float get_ratio(int cnt, int max_cnt);
int is_prison_room(int scene);
int get_virtual_mz_rot_scene(int org_scene);
_anon2* get_virtual_mz_parts(_anon2* org_parts, int org_scene, int num);
int mz_door_to_floor_2_3(int door_no);
int hs_scene_to_virtualscene(int current_scene);
int hs_scene_is_opposit(int scene0, int scene1);
_anon2* get_virtual_hs_parts(_anon2* org_parts, int org_scene, int num);
void miscMapImgConstruct(_anon1* work);
void miscMapBaseImgConstruct(_anon1* work);
void miscMapPlayerImgConstruct(_anon1* work);
void miscMapEileenImgConstruct(_anon1* work);
void miscMapArrowImgConstruct(_anon26* arw, int dir);
void tri_alpha_set(_anon13* img, unsigned char alpha);
void miscMapPlayerInit(_anon6* p);
void miscMapInit0(_anon1* work);
int IsSameFloor(_anon1* work, int stage, int scene, float* pos);
void miscMapCalculatePosition(float* dst, float* src, _anon1* work, int scene);
float miscMapCalculateRot(float rot, int scene);
void DrawTri(_anon13* img, float* pos, float rad, unsigned int aabbggrr);
void miscMapPlayerTriDraw(_anon1* work);
void miscMapEileenTriDraw(_anon1* work);
int miscMapHandle(_anon1* work);
int miscMapChange(_anon1* work);
int zoom_init(_anon1* work);
int zoom_in(_anon1* work);
int zoom_handle(_anon1* work);
int zoom_out(_anon1* work);
int miscMapZoomHandle(_anon1* work);
void draw_one_parts(_anon4* img, _anon2* parts, _anon8* tex, unsigned int cbp, unsigned int col);
void miscMapDrawNameParts(_enum_0 m_id, int index, _anon8* tex, unsigned int cbp, unsigned int col);
void miscMapDrawParts(_anon1* work, _anon8* tex, unsigned int cbp);
void miscMapDrawSubwayTrain(unsigned int col);
void miscMapDrawPartsSb(_anon1* work, _anon8* tex, unsigned int cbp);
void miscMapDrawMzHole(int pos_no, unsigned int col);
void miscMapDrawMzPipe(int floor, int pos_no);
void miscMapDrawPartsMzPeep(_anon1* work, _anon8* tex, unsigned int cbp);
void miscMapDrawPartsMz(_anon1* work, _anon8* tex, unsigned int cbp);
void miscMapDrawPartsHs(_anon1* work, _anon8* tex, unsigned int cbp);
void disp_mes_zoom(int x, int y, float ratio);
void disp_mes_goto_memo(int x, int y, float ratio);
void OneMarkDraw(float cx, float cy, int kind, int alpha, float rot, float scale, _anon8* tex, unsigned int cbp);
int GetMarkKind(_anon5* stat, int is_vertical);
void OneHoleDraw(float cx, float cy, float scale, _anon8* tex, unsigned int cbp);
_anon9* get_param(int door_no, _anon22* set);
void miscMapMarkDraw(_anon1* work);
void miscMapDraw(_anon1* work);
void miscMapCaptureDraw(float cx, float cy, float scale);
void miscMapDispInit(_anon1* work);
int miscMapExec(_anon1* work);
void miscMapDestruct();
void miscMapWarmInit();
void miscMapStepInit();
int miscMapMain();

// 
// Start address: 0x174280
int get_virtual_sb_scene(int scene)
{
	// Line 465, Address: 0x174280, Func Offset: 0
	// Line 469, Address: 0x1742b0, Func Offset: 0x30
	// Line 472, Address: 0x1742b8, Func Offset: 0x38
	// Line 474, Address: 0x1742c0, Func Offset: 0x40
	// Line 476, Address: 0x1742c4, Func Offset: 0x44
	// Line 478, Address: 0x1742c8, Func Offset: 0x48
	// Func End, Address: 0x1742d0, Func Offset: 0x50
}

// 
// Start address: 0x1742d0
int get_virtual_fr_scene(int scene)
{
	// Line 486, Address: 0x1742d0, Func Offset: 0
	// Line 487, Address: 0x1742dc, Func Offset: 0xc
	// Line 490, Address: 0x1742e0, Func Offset: 0x10
	// Func End, Address: 0x1742e8, Func Offset: 0x18
}

// 
// Start address: 0x1742f0
int get_virtual_mz_scene(int scene)
{
	// Line 498, Address: 0x1742f0, Func Offset: 0
	// Line 499, Address: 0x1742fc, Func Offset: 0xc
	// Line 502, Address: 0x174300, Func Offset: 0x10
	// Func End, Address: 0x174308, Func Offset: 0x18
}

// 
// Start address: 0x174310
int get_virtual_bd_scene(int scene)
{
	// Line 509, Address: 0x174310, Func Offset: 0
	// Line 510, Address: 0x17432c, Func Offset: 0x1c
	// Line 512, Address: 0x174330, Func Offset: 0x20
	// Line 514, Address: 0x174338, Func Offset: 0x28
	// Line 516, Address: 0x17433c, Func Offset: 0x2c
	// Line 518, Address: 0x174340, Func Offset: 0x30
	// Func End, Address: 0x174348, Func Offset: 0x38
}

// 
// Start address: 0x174350
int get_virtual_ie_scene(int scene)
{
	// Line 525, Address: 0x174350, Func Offset: 0
	// Func End, Address: 0x174358, Func Offset: 0x8
}

// 
// Start address: 0x174360
int get_virtual_hs_scene(int scene)
{
	// Line 532, Address: 0x174360, Func Offset: 0
	// Func End, Address: 0x174368, Func Offset: 0x8
}

// 
// Start address: 0x174370
int get_virtual_cm_scene(int scene)
{
	// Line 539, Address: 0x174370, Func Offset: 0
	// Func End, Address: 0x174378, Func Offset: 0x8
}

// 
// Start address: 0x174380
int get_virtual_dmy_scene(int scene)
{
	// Line 546, Address: 0x174380, Func Offset: 0
	// Func End, Address: 0x174388, Func Offset: 0x8
}

// 
// Start address: 0x174390
int get_virtual_scene()
{
	int(*get_scene)(int)[14];
	// Line 552, Address: 0x174390, Func Offset: 0
	// Line 571, Address: 0x174394, Func Offset: 0x4
	// Line 552, Address: 0x174398, Func Offset: 0x8
	// Line 571, Address: 0x17439c, Func Offset: 0xc
	// Func End, Address: 0x1743bc, Func Offset: 0x2c
}

// 
// Start address: 0x1743c0
int get_virtual_scene_eileen()
{
	int stage;
	int scene;
	int(*get_scene)(int)[14];
	// Line 576, Address: 0x1743c0, Func Offset: 0
	// Line 577, Address: 0x1743c8, Func Offset: 0x8
	// Line 578, Address: 0x1743d0, Func Offset: 0x10
	// Line 597, Address: 0x1743d8, Func Offset: 0x18
	// Line 598, Address: 0x1743f8, Func Offset: 0x38
	// Func End, Address: 0x174408, Func Offset: 0x48
}

// 
// Start address: 0x174410
int get_virtual_sb_door_no(int door_no)
{
	// Line 606, Address: 0x174410, Func Offset: 0
	// Line 608, Address: 0x17444c, Func Offset: 0x3c
	// Line 610, Address: 0x174450, Func Offset: 0x40
	// Line 613, Address: 0x174458, Func Offset: 0x48
	// Line 616, Address: 0x174460, Func Offset: 0x50
	// Line 618, Address: 0x174468, Func Offset: 0x58
	// Line 620, Address: 0x17446c, Func Offset: 0x5c
	// Line 622, Address: 0x174470, Func Offset: 0x60
	// Func End, Address: 0x174478, Func Offset: 0x68
}

// 
// Start address: 0x174480
int get_virtual_fr_door_no(int door_no)
{
	// Line 627, Address: 0x174480, Func Offset: 0
	// Line 630, Address: 0x1744b0, Func Offset: 0x30
	// Line 633, Address: 0x1744b8, Func Offset: 0x38
	// Line 636, Address: 0x1744c0, Func Offset: 0x40
	// Line 638, Address: 0x1744c8, Func Offset: 0x48
	// Line 640, Address: 0x1744cc, Func Offset: 0x4c
	// Line 642, Address: 0x1744d0, Func Offset: 0x50
	// Func End, Address: 0x1744d8, Func Offset: 0x58
}

// 
// Start address: 0x1744e0
int get_virtual_mz_door_no(int door_no)
{
	// Line 647, Address: 0x1744e0, Func Offset: 0
	// Line 648, Address: 0x1744f4, Func Offset: 0x14
	// Line 649, Address: 0x1744f8, Func Offset: 0x18
	// Line 651, Address: 0x1744fc, Func Offset: 0x1c
	// Line 653, Address: 0x174500, Func Offset: 0x20
	// Func End, Address: 0x174508, Func Offset: 0x28
}

// 
// Start address: 0x174510
int get_virtual_bd_door_no(int door_no)
{
	// Line 658, Address: 0x174510, Func Offset: 0
	// Line 661, Address: 0x174538, Func Offset: 0x28
	// Line 664, Address: 0x174540, Func Offset: 0x30
	// Line 666, Address: 0x174548, Func Offset: 0x38
	// Line 668, Address: 0x17454c, Func Offset: 0x3c
	// Line 670, Address: 0x174550, Func Offset: 0x40
	// Func End, Address: 0x174558, Func Offset: 0x48
}

// 
// Start address: 0x174560
int get_virtual_ie_door_no(int door_no)
{
	// Line 676, Address: 0x174560, Func Offset: 0
	// Func End, Address: 0x174568, Func Offset: 0x8
}

// 
// Start address: 0x174570
int get_virtual_hs_door_no(int door_no)
{
	// Line 682, Address: 0x174570, Func Offset: 0
	// Func End, Address: 0x174578, Func Offset: 0x8
}

// 
// Start address: 0x174580
int get_virtual_cm_door_no(int door_no)
{
	// Line 687, Address: 0x174580, Func Offset: 0
	// Line 688, Address: 0x174594, Func Offset: 0x14
	// Line 689, Address: 0x174598, Func Offset: 0x18
	// Line 691, Address: 0x17459c, Func Offset: 0x1c
	// Line 693, Address: 0x1745a0, Func Offset: 0x20
	// Func End, Address: 0x1745a8, Func Offset: 0x28
}

// 
// Start address: 0x1745b0
int get_virtual_dmy_door_no(int door_no)
{
	// Line 699, Address: 0x1745b0, Func Offset: 0
	// Func End, Address: 0x1745b8, Func Offset: 0x8
}

// 
// Start address: 0x1745c0
int get_virtual_door_no(int door_no)
{
	int(*get_door_no)(int)[14];
	// Line 723, Address: 0x1745c0, Func Offset: 0
	// Func End, Address: 0x1745e4, Func Offset: 0x24
}

// 
// Start address: 0x1745f0
_anon14 miscMapGetRect3d(_anon1* work, int index)
{
	_anon14 r;
	// Line 731, Address: 0x1745f0, Func Offset: 0
	// Line 732, Address: 0x1745f4, Func Offset: 0x4
	// Line 736, Address: 0x17461c, Func Offset: 0x2c
	// Line 740, Address: 0x174688, Func Offset: 0x98
	// Func End, Address: 0x174690, Func Offset: 0xa0
}

// 
// Start address: 0x174690
_anon14 miscMapGetRect2d(_anon1* work, int index)
{
	_anon14 r;
	// Line 744, Address: 0x174690, Func Offset: 0
	// Line 745, Address: 0x174694, Func Offset: 0x4
	// Line 749, Address: 0x1746bc, Func Offset: 0x2c
	// Line 753, Address: 0x174728, Func Offset: 0x98
	// Func End, Address: 0x174730, Func Offset: 0xa0
}

// 
// Start address: 0x174730
void MapSbOn(_anon1* work, int index)
{
	int flag;
	// Line 783, Address: 0x174730, Func Offset: 0
	// Line 786, Address: 0x17474c, Func Offset: 0x1c
	// Line 787, Address: 0x174764, Func Offset: 0x34
	// Line 789, Address: 0x174768, Func Offset: 0x38
	// Line 790, Address: 0x174770, Func Offset: 0x40
	// Func End, Address: 0x174788, Func Offset: 0x58
}

// 
// Start address: 0x174790
void MapFrOn(_anon1* work, int index)
{
	int flag;
	// Line 797, Address: 0x174790, Func Offset: 0
	// Line 800, Address: 0x1747ac, Func Offset: 0x1c
	// Line 801, Address: 0x1747c4, Func Offset: 0x34
	// Line 803, Address: 0x1747c8, Func Offset: 0x38
	// Line 804, Address: 0x1747d0, Func Offset: 0x40
	// Func End, Address: 0x1747e8, Func Offset: 0x58
}

// 
// Start address: 0x1747f0
void MapMzOn(_anon1* work, int index)
{
	int flag;
	// Line 811, Address: 0x1747f0, Func Offset: 0
	// Line 814, Address: 0x17480c, Func Offset: 0x1c
	// Line 815, Address: 0x174824, Func Offset: 0x34
	// Line 817, Address: 0x174828, Func Offset: 0x38
	// Line 818, Address: 0x174830, Func Offset: 0x40
	// Func End, Address: 0x174848, Func Offset: 0x58
}

// 
// Start address: 0x174850
void MapBdOn(_anon1* work, int index)
{
	int flag;
	// Line 825, Address: 0x174850, Func Offset: 0
	// Line 828, Address: 0x17486c, Func Offset: 0x1c
	// Line 829, Address: 0x174884, Func Offset: 0x34
	// Line 831, Address: 0x174888, Func Offset: 0x38
	// Line 832, Address: 0x174890, Func Offset: 0x40
	// Func End, Address: 0x1748a8, Func Offset: 0x58
}

// 
// Start address: 0x1748b0
void MapIeOn(_anon1* work, int index)
{
	int flag;
	// Line 839, Address: 0x1748b0, Func Offset: 0
	// Line 842, Address: 0x1748cc, Func Offset: 0x1c
	// Line 843, Address: 0x1748e4, Func Offset: 0x34
	// Line 845, Address: 0x1748e8, Func Offset: 0x38
	// Line 846, Address: 0x1748f0, Func Offset: 0x40
	// Func End, Address: 0x174908, Func Offset: 0x58
}

// 
// Start address: 0x174910
void MapHsOn(_anon1* work, int index)
{
	int flag;
	// Line 853, Address: 0x174910, Func Offset: 0
	// Line 856, Address: 0x17492c, Func Offset: 0x1c
	// Line 857, Address: 0x174944, Func Offset: 0x34
	// Line 859, Address: 0x174948, Func Offset: 0x38
	// Line 860, Address: 0x174950, Func Offset: 0x40
	// Func End, Address: 0x174968, Func Offset: 0x58
}

// 
// Start address: 0x174970
void MapCmOn(_anon1* work, int index)
{
	int flag;
	// Line 867, Address: 0x174970, Func Offset: 0
	// Line 870, Address: 0x17498c, Func Offset: 0x1c
	// Line 871, Address: 0x1749a4, Func Offset: 0x34
	// Line 873, Address: 0x1749a8, Func Offset: 0x38
	// Line 874, Address: 0x1749b0, Func Offset: 0x40
	// Func End, Address: 0x1749c8, Func Offset: 0x58
}

// 
// Start address: 0x1749d0
void MapDmyOn()
{
	// Line 880, Address: 0x1749d0, Func Offset: 0
	// Func End, Address: 0x1749d8, Func Offset: 0x8
}

// 
// Start address: 0x1749e0
int MapSbPassGet(_anon1* work, int index)
{
	// Line 793, Address: 0x1749e0, Func Offset: 0
	// Line 794, Address: 0x1749e4, Func Offset: 0x4
	// Func End, Address: 0x1749ec, Func Offset: 0xc
}

// 
// Start address: 0x1749f0
int MapFrPassGet(_anon1* work, int index)
{
	// Line 807, Address: 0x1749f0, Func Offset: 0
	// Line 808, Address: 0x1749f4, Func Offset: 0x4
	// Func End, Address: 0x1749fc, Func Offset: 0xc
}

// 
// Start address: 0x174a00
int MapMzPassGet(_anon1* work, int index)
{
	// Line 821, Address: 0x174a00, Func Offset: 0
	// Line 822, Address: 0x174a04, Func Offset: 0x4
	// Func End, Address: 0x174a0c, Func Offset: 0xc
}

// 
// Start address: 0x174a10
int MapBdPassGet(_anon1* work, int index)
{
	// Line 835, Address: 0x174a10, Func Offset: 0
	// Line 836, Address: 0x174a14, Func Offset: 0x4
	// Func End, Address: 0x174a1c, Func Offset: 0xc
}

// 
// Start address: 0x174a20
int MapIePassGet(_anon1* work, int index)
{
	// Line 849, Address: 0x174a20, Func Offset: 0
	// Line 850, Address: 0x174a24, Func Offset: 0x4
	// Func End, Address: 0x174a2c, Func Offset: 0xc
}

// 
// Start address: 0x174a30
int MapHsPassGet(_anon1* work, int index)
{
	// Line 863, Address: 0x174a30, Func Offset: 0
	// Line 864, Address: 0x174a34, Func Offset: 0x4
	// Func End, Address: 0x174a3c, Func Offset: 0xc
}

// 
// Start address: 0x174a40
int MapCmPassGet(_anon1* work, int index)
{
	// Line 877, Address: 0x174a40, Func Offset: 0
	// Line 878, Address: 0x174a44, Func Offset: 0x4
	// Func End, Address: 0x174a4c, Func Offset: 0xc
}

// 
// Start address: 0x174a50
int MapDmyPassGet()
{
	// Line 881, Address: 0x174a50, Func Offset: 0
	// Func End, Address: 0x174a58, Func Offset: 0x8
}

// 
// Start address: 0x174a60
void DoorSetHistory(_anon5* stat, _enum_1 val)
{
	int is_touch;
	// Line 931, Address: 0x174a60, Func Offset: 0
	// Line 933, Address: 0x174a64, Func Offset: 0x4
	// Line 931, Address: 0x174a68, Func Offset: 0x8
	// Line 933, Address: 0x174a74, Func Offset: 0x14
	// Line 936, Address: 0x174aac, Func Offset: 0x4c
	// Line 937, Address: 0x174ab0, Func Offset: 0x50
	// Line 938, Address: 0x174ac8, Func Offset: 0x68
	// Line 940, Address: 0x174ad0, Func Offset: 0x70
	// Line 941, Address: 0x174ae0, Func Offset: 0x80
	// Line 942, Address: 0x174ae4, Func Offset: 0x84
	// Line 941, Address: 0x174ae8, Func Offset: 0x88
	// Line 942, Address: 0x174aec, Func Offset: 0x8c
	// Line 940, Address: 0x174af4, Func Offset: 0x94
	// Line 941, Address: 0x174b00, Func Offset: 0xa0
	// Line 942, Address: 0x174b10, Func Offset: 0xb0
	// Line 943, Address: 0x174b1c, Func Offset: 0xbc
	// Line 944, Address: 0x174b24, Func Offset: 0xc4
	// Line 945, Address: 0x174b28, Func Offset: 0xc8
	// Line 946, Address: 0x174b38, Func Offset: 0xd8
	// Line 945, Address: 0x174b44, Func Offset: 0xe4
	// Line 946, Address: 0x174b50, Func Offset: 0xf0
	// Line 947, Address: 0x174b5c, Func Offset: 0xfc
	// Line 948, Address: 0x174b64, Func Offset: 0x104
	// Line 949, Address: 0x174b68, Func Offset: 0x108
	// Line 950, Address: 0x174b80, Func Offset: 0x120
	// Line 952, Address: 0x174b88, Func Offset: 0x128
	// Line 954, Address: 0x174b8c, Func Offset: 0x12c
	// Line 956, Address: 0x174b90, Func Offset: 0x130
	// Line 957, Address: 0x174b98, Func Offset: 0x138
	// Line 959, Address: 0x174bb0, Func Offset: 0x150
	// Line 960, Address: 0x174bc4, Func Offset: 0x164
	// Line 963, Address: 0x174bd0, Func Offset: 0x170
	// Line 966, Address: 0x174be8, Func Offset: 0x188
	// Func End, Address: 0x174bf8, Func Offset: 0x198
}

// 
// Start address: 0x174c00
void miscMapDoorSetHistory(int stage, int real_door_no, _enum_1 val)
{
	_anon5* stat;
	_anon22* parts_set;
	_anon9* parts;
	int start;
	int i;
	int door_no;
	_anon5* door_stat[13];
	// Line 976, Address: 0x174c00, Func Offset: 0
	// Line 993, Address: 0x174c04, Func Offset: 0x4
	// Line 976, Address: 0x174c08, Func Offset: 0x8
	// Line 993, Address: 0x174c0c, Func Offset: 0xc
	// Line 976, Address: 0x174c10, Func Offset: 0x10
	// Line 993, Address: 0x174c20, Func Offset: 0x20
	// Line 976, Address: 0x174c24, Func Offset: 0x24
	// Line 993, Address: 0x174c28, Func Offset: 0x28
	// Line 976, Address: 0x174c2c, Func Offset: 0x2c
	// Line 993, Address: 0x174c3c, Func Offset: 0x3c
	// Line 995, Address: 0x174c48, Func Offset: 0x48
	// Line 997, Address: 0x174c58, Func Offset: 0x58
	// Line 998, Address: 0x174c60, Func Offset: 0x60
	// Line 999, Address: 0x174c64, Func Offset: 0x64
	// Line 1000, Address: 0x174c6c, Func Offset: 0x6c
	// Line 1003, Address: 0x174c70, Func Offset: 0x70
	// Line 1006, Address: 0x174c78, Func Offset: 0x78
	// Line 1003, Address: 0x174c7c, Func Offset: 0x7c
	// Line 1006, Address: 0x174c80, Func Offset: 0x80
	// Line 1007, Address: 0x174ca0, Func Offset: 0xa0
	// Line 1010, Address: 0x174cac, Func Offset: 0xac
	// Line 1014, Address: 0x174cb8, Func Offset: 0xb8
	// Line 1015, Address: 0x174cc0, Func Offset: 0xc0
	// Line 1016, Address: 0x174cc8, Func Offset: 0xc8
	// Line 1020, Address: 0x174cd0, Func Offset: 0xd0
	// Line 1023, Address: 0x174ce4, Func Offset: 0xe4
	// Line 1024, Address: 0x174ce8, Func Offset: 0xe8
	// Func End, Address: 0x174d10, Func Offset: 0x110
}

// 
// Start address: 0x174d10
int get_virtual_map_door_no(int stage, int door_no)
{
	int pos_no;
	int floor;
	int i;
	// Line 1028, Address: 0x174d10, Func Offset: 0
	// Line 1031, Address: 0x174d14, Func Offset: 0x4
	// Line 1028, Address: 0x174d18, Func Offset: 0x8
	// Line 1031, Address: 0x174d24, Func Offset: 0x14
	// Line 1032, Address: 0x174d2c, Func Offset: 0x1c
	// Line 1033, Address: 0x174d38, Func Offset: 0x28
	// Line 1034, Address: 0x174d44, Func Offset: 0x34
	// Line 1036, Address: 0x174d50, Func Offset: 0x40
	// Line 1037, Address: 0x174d74, Func Offset: 0x64
	// Line 1039, Address: 0x174d80, Func Offset: 0x70
	// Line 1040, Address: 0x174d88, Func Offset: 0x78
	// Line 1041, Address: 0x174d94, Func Offset: 0x84
	// Line 1043, Address: 0x174da4, Func Offset: 0x94
	// Line 1044, Address: 0x174db0, Func Offset: 0xa0
	// Line 1046, Address: 0x174dbc, Func Offset: 0xac
	// Line 1048, Address: 0x174dc4, Func Offset: 0xb4
	// Line 1052, Address: 0x174dd8, Func Offset: 0xc8
	// Line 1053, Address: 0x174ddc, Func Offset: 0xcc
	// Func End, Address: 0x174df0, Func Offset: 0xe0
}

// 
// Start address: 0x174df0
_anon5* miscMapDoorStatusGet(int stage, int door_no)
{
	_anon5* rtv;
	_anon22* parts_set;
	_anon9* parts;
	int start;
	int i;
	_anon5* door_stat[13];
	// Line 1057, Address: 0x174df0, Func Offset: 0
	// Line 1096, Address: 0x174df4, Func Offset: 0x4
	// Line 1057, Address: 0x174df8, Func Offset: 0x8
	// Line 1096, Address: 0x174dfc, Func Offset: 0xc
	// Line 1057, Address: 0x174e00, Func Offset: 0x10
	// Line 1096, Address: 0x174e04, Func Offset: 0x14
	// Line 1057, Address: 0x174e08, Func Offset: 0x18
	// Line 1096, Address: 0x174e0c, Func Offset: 0x1c
	// Line 1057, Address: 0x174e10, Func Offset: 0x20
	// Line 1096, Address: 0x174e18, Func Offset: 0x28
	// Line 1098, Address: 0x174e28, Func Offset: 0x38
	// Line 1100, Address: 0x174e34, Func Offset: 0x44
	// Line 1101, Address: 0x174e3c, Func Offset: 0x4c
	// Line 1102, Address: 0x174e40, Func Offset: 0x50
	// Line 1106, Address: 0x174e48, Func Offset: 0x58
	// Line 1103, Address: 0x174e4c, Func Offset: 0x5c
	// Line 1106, Address: 0x174e50, Func Offset: 0x60
	// Line 1107, Address: 0x174e70, Func Offset: 0x80
	// Line 1108, Address: 0x174e7c, Func Offset: 0x8c
	// Line 1111, Address: 0x174e88, Func Offset: 0x98
	// Line 1114, Address: 0x174e9c, Func Offset: 0xac
	// Line 1116, Address: 0x174ea0, Func Offset: 0xb0
	// Line 1117, Address: 0x174ea4, Func Offset: 0xb4
	// Func End, Address: 0x174ebc, Func Offset: 0xcc
}

// 
// Start address: 0x174ec0
void PlayerRecQueueInit(_anon6* p, float* default_pos, float default_rot)
{
	int i;
	// Line 1147, Address: 0x174ec0, Func Offset: 0
	// Line 1149, Address: 0x174ec4, Func Offset: 0x4
	// Line 1148, Address: 0x174ec8, Func Offset: 0x8
	// Line 1149, Address: 0x174ecc, Func Offset: 0xc
	// Line 1150, Address: 0x174ed0, Func Offset: 0x10
	// Line 1151, Address: 0x174ee0, Func Offset: 0x20
	// Line 1152, Address: 0x174ee8, Func Offset: 0x28
	// Line 1153, Address: 0x174ef4, Func Offset: 0x34
	// Func End, Address: 0x174efc, Func Offset: 0x3c
}

// 
// Start address: 0x174f00
void PlayerRecEnQueue(_anon6* p, float* pos, float rot)
{
	int index;
	// Line 1158, Address: 0x174f00, Func Offset: 0
	// Line 1160, Address: 0x174f04, Func Offset: 0x4
	// Line 1161, Address: 0x174f14, Func Offset: 0x14
	// Line 1163, Address: 0x174f20, Func Offset: 0x20
	// Line 1165, Address: 0x174f24, Func Offset: 0x24
	// Func End, Address: 0x174f2c, Func Offset: 0x2c
}

// 
// Start address: 0x174f30
void miscMapSetPlayerPos(_anon6* p, float* pos, float rot)
{
	int stage;
	// Line 1183, Address: 0x174f30, Func Offset: 0
	// Line 1185, Address: 0x174f34, Func Offset: 0x4
	// Line 1183, Address: 0x174f38, Func Offset: 0x8
	// Line 1185, Address: 0x174f3c, Func Offset: 0xc
	// Line 1187, Address: 0x174f50, Func Offset: 0x20
	// Line 1188, Address: 0x174f64, Func Offset: 0x34
	// Line 1190, Address: 0x174f68, Func Offset: 0x38
	// Line 1191, Address: 0x174f84, Func Offset: 0x54
	// Line 1193, Address: 0x174f88, Func Offset: 0x58
	// Func End, Address: 0x174f90, Func Offset: 0x60
}

// 
// Start address: 0x174f90
void miscMapOverWritePlayerPos(_anon6* p)
{
	float pos[4];
	float rot;
	_PLAYER_WORK* pw;
	// Line 1198, Address: 0x174f90, Func Offset: 0
	// Line 1201, Address: 0x174fa0, Func Offset: 0x10
	// Line 1205, Address: 0x174fac, Func Offset: 0x1c
	// Line 1207, Address: 0x174fb8, Func Offset: 0x28
	// Line 1208, Address: 0x174fbc, Func Offset: 0x2c
	// Line 1209, Address: 0x174fd8, Func Offset: 0x48
	// Line 1210, Address: 0x174fdc, Func Offset: 0x4c
	// Line 1212, Address: 0x174fe0, Func Offset: 0x50
	// Line 1213, Address: 0x174fec, Func Offset: 0x5c
	// Func End, Address: 0x175000, Func Offset: 0x70
}

// 
// Start address: 0x175000
void miscMapRecordPlayerPos(_anon6* p, int map_id, int stage, int scene, float* pos, float rot)
{
	// Line 1218, Address: 0x175000, Func Offset: 0
	// Line 1219, Address: 0x17501c, Func Offset: 0x1c
	// Line 1224, Address: 0x175050, Func Offset: 0x50
	// Line 1225, Address: 0x175058, Func Offset: 0x58
	// Line 1226, Address: 0x17505c, Func Offset: 0x5c
	// Line 1227, Address: 0x175060, Func Offset: 0x60
	// Line 1228, Address: 0x175064, Func Offset: 0x64
	// Line 1229, Address: 0x175068, Func Offset: 0x68
	// Line 1230, Address: 0x17506c, Func Offset: 0x6c
	// Line 1232, Address: 0x175070, Func Offset: 0x70
	// Line 1233, Address: 0x17507c, Func Offset: 0x7c
	// Line 1234, Address: 0x175084, Func Offset: 0x84
	// Line 1237, Address: 0x175088, Func Offset: 0x88
	// Line 1238, Address: 0x175094, Func Offset: 0x94
	// Line 1240, Address: 0x1750a0, Func Offset: 0xa0
	// Line 1242, Address: 0x1750a8, Func Offset: 0xa8
	// Line 1244, Address: 0x1750b0, Func Offset: 0xb0
	// Func End, Address: 0x1750c8, Func Offset: 0xc8
}

// 
// Start address: 0x1750d0
void miscMapRecBase(_anon1* work)
{
	int stage;
	int scene;
	float player[4];
	_anon3* p_set;
	_anon2* parts;
	int start;
	int i;
	_anon14 rect3d;
	_anon14 rect2d;
	float x0;
	float x1;
	float y0;
	float y1;
	float tmp;
	float tmp;
	void(*pass_on)(_anon1*, int)[13];
	// Line 1248, Address: 0x1750d0, Func Offset: 0
	// Line 1249, Address: 0x1750d4, Func Offset: 0x4
	// Line 1248, Address: 0x1750d8, Func Offset: 0x8
	// Line 1249, Address: 0x1750f4, Func Offset: 0x24
	// Line 1250, Address: 0x1750f8, Func Offset: 0x28
	// Line 1253, Address: 0x175104, Func Offset: 0x34
	// Line 1256, Address: 0x175110, Func Offset: 0x40
	// Line 1258, Address: 0x175124, Func Offset: 0x54
	// Line 1260, Address: 0x175130, Func Offset: 0x60
	// Line 1262, Address: 0x17513c, Func Offset: 0x6c
	// Line 1268, Address: 0x175140, Func Offset: 0x70
	// Line 1263, Address: 0x175144, Func Offset: 0x74
	// Line 1269, Address: 0x175148, Func Offset: 0x78
	// Line 1268, Address: 0x17514c, Func Offset: 0x7c
	// Line 1269, Address: 0x175154, Func Offset: 0x84
	// Line 1270, Address: 0x175160, Func Offset: 0x90
	// Line 1271, Address: 0x17516c, Func Offset: 0x9c
	// Line 1272, Address: 0x175184, Func Offset: 0xb4
	// Line 1271, Address: 0x175188, Func Offset: 0xb8
	// Line 1272, Address: 0x17518c, Func Offset: 0xbc
	// Line 1271, Address: 0x175190, Func Offset: 0xc0
	// Line 1272, Address: 0x175194, Func Offset: 0xc4
	// Line 1271, Address: 0x175198, Func Offset: 0xc8
	// Line 1272, Address: 0x1751a8, Func Offset: 0xd8
	// Line 1273, Address: 0x1751d8, Func Offset: 0x108
	// Line 1274, Address: 0x1751dc, Func Offset: 0x10c
	// Line 1273, Address: 0x1751e0, Func Offset: 0x110
	// Line 1275, Address: 0x1751e4, Func Offset: 0x114
	// Line 1276, Address: 0x1751e8, Func Offset: 0x118
	// Line 1273, Address: 0x1751ec, Func Offset: 0x11c
	// Line 1274, Address: 0x1751f0, Func Offset: 0x120
	// Line 1275, Address: 0x1751f8, Func Offset: 0x128
	// Line 1274, Address: 0x1751fc, Func Offset: 0x12c
	// Line 1276, Address: 0x175200, Func Offset: 0x130
	// Line 1275, Address: 0x175204, Func Offset: 0x134
	// Line 1276, Address: 0x175208, Func Offset: 0x138
	// Line 1274, Address: 0x17520c, Func Offset: 0x13c
	// Line 1275, Address: 0x175210, Func Offset: 0x140
	// Line 1276, Address: 0x175214, Func Offset: 0x144
	// Line 1275, Address: 0x175218, Func Offset: 0x148
	// Line 1278, Address: 0x17521c, Func Offset: 0x14c
	// Line 1279, Address: 0x175228, Func Offset: 0x158
	// Line 1280, Address: 0x17522c, Func Offset: 0x15c
	// Line 1281, Address: 0x175230, Func Offset: 0x160
	// Line 1282, Address: 0x175234, Func Offset: 0x164
	// Line 1283, Address: 0x175238, Func Offset: 0x168
	// Line 1285, Address: 0x175244, Func Offset: 0x174
	// Line 1286, Address: 0x175248, Func Offset: 0x178
	// Line 1287, Address: 0x17524c, Func Offset: 0x17c
	// Line 1289, Address: 0x175250, Func Offset: 0x180
	// Line 1291, Address: 0x175288, Func Offset: 0x1b8
	// Line 1294, Address: 0x1752b0, Func Offset: 0x1e0
	// Line 1295, Address: 0x1752b4, Func Offset: 0x1e4
	// Line 1296, Address: 0x1752cc, Func Offset: 0x1fc
	// Line 1297, Address: 0x1752d0, Func Offset: 0x200
	// Func End, Address: 0x1752f4, Func Offset: 0x224
}

// 
// Start address: 0x175300
void miscMapMzPipeRec(int scene)
{
	_anon12* pf;
	int floor;
	float pos[4];
	float rad;
	int i;
	int index;
	int pos_no;
	int rot_n;
	int val;
	int pipe_no;
	unsigned char pipe_no[3][4];
	float div[4];
	// Line 1301, Address: 0x175300, Func Offset: 0
	// Line 1305, Address: 0x175304, Func Offset: 0x4
	// Line 1301, Address: 0x175308, Func Offset: 0x8
	// Line 1302, Address: 0x175328, Func Offset: 0x28
	// Line 1305, Address: 0x17532c, Func Offset: 0x2c
	// Line 1306, Address: 0x175350, Func Offset: 0x50
	// Line 1307, Address: 0x175360, Func Offset: 0x60
	// Line 1308, Address: 0x175370, Func Offset: 0x70
	// Line 1309, Address: 0x17537c, Func Offset: 0x7c
	// Line 1311, Address: 0x175380, Func Offset: 0x80
	// Line 1328, Address: 0x175388, Func Offset: 0x88
	// Line 1329, Address: 0x175390, Func Offset: 0x90
	// Line 1332, Address: 0x175398, Func Offset: 0x98
	// Line 1333, Address: 0x1753a8, Func Offset: 0xa8
	// Line 1336, Address: 0x1753c8, Func Offset: 0xc8
	// Line 1337, Address: 0x1753dc, Func Offset: 0xdc
	// Line 1338, Address: 0x1753f0, Func Offset: 0xf0
	// Line 1339, Address: 0x1753f4, Func Offset: 0xf4
	// Line 1341, Address: 0x1753fc, Func Offset: 0xfc
	// Line 1340, Address: 0x175400, Func Offset: 0x100
	// Line 1341, Address: 0x175404, Func Offset: 0x104
	// Line 1343, Address: 0x175418, Func Offset: 0x118
	// Line 1345, Address: 0x175430, Func Offset: 0x130
	// Line 1346, Address: 0x17543c, Func Offset: 0x13c
	// Line 1347, Address: 0x175444, Func Offset: 0x144
	// Line 1348, Address: 0x17544c, Func Offset: 0x14c
	// Line 1350, Address: 0x175454, Func Offset: 0x154
	// Line 1345, Address: 0x175458, Func Offset: 0x158
	// Line 1346, Address: 0x175464, Func Offset: 0x164
	// Line 1347, Address: 0x175474, Func Offset: 0x174
	// Line 1348, Address: 0x175484, Func Offset: 0x184
	// Line 1351, Address: 0x175494, Func Offset: 0x194
	// Line 1353, Address: 0x175498, Func Offset: 0x198
	// Line 1355, Address: 0x1754ac, Func Offset: 0x1ac
	// Line 1356, Address: 0x1754dc, Func Offset: 0x1dc
	// Line 1357, Address: 0x1754fc, Func Offset: 0x1fc
	// Line 1358, Address: 0x175520, Func Offset: 0x220
	// Line 1359, Address: 0x175540, Func Offset: 0x240
	// Line 1361, Address: 0x17555c, Func Offset: 0x25c
	// Line 1363, Address: 0x175560, Func Offset: 0x260
	// Line 1364, Address: 0x175590, Func Offset: 0x290
	// Line 1365, Address: 0x1755ac, Func Offset: 0x2ac
	// Line 1366, Address: 0x1755d0, Func Offset: 0x2d0
	// Line 1367, Address: 0x1755f0, Func Offset: 0x2f0
	// Line 1369, Address: 0x17560c, Func Offset: 0x30c
	// Line 1371, Address: 0x175620, Func Offset: 0x320
	// Func End, Address: 0x175648, Func Offset: 0x348
}

// 
// Start address: 0x175650
int miscMapMzMovePipeIsTouch(int scene, int pos_no)
{
	int rtv;
	_anon12* pf;
	int floor;
	int rot_n;
	int pipe_no;
	int val;
	// Line 1375, Address: 0x175650, Func Offset: 0
	// Line 1380, Address: 0x175654, Func Offset: 0x4
	// Line 1375, Address: 0x175658, Func Offset: 0x8
	// Line 1378, Address: 0x17565c, Func Offset: 0xc
	// Line 1375, Address: 0x175660, Func Offset: 0x10
	// Line 1376, Address: 0x175668, Func Offset: 0x18
	// Line 1375, Address: 0x17566c, Func Offset: 0x1c
	// Line 1377, Address: 0x175670, Func Offset: 0x20
	// Line 1375, Address: 0x175674, Func Offset: 0x24
	// Line 1380, Address: 0x175678, Func Offset: 0x28
	// Line 1381, Address: 0x17569c, Func Offset: 0x4c
	// Line 1382, Address: 0x1756b0, Func Offset: 0x60
	// Line 1383, Address: 0x1756c0, Func Offset: 0x70
	// Line 1384, Address: 0x1756cc, Func Offset: 0x7c
	// Line 1387, Address: 0x1756d0, Func Offset: 0x80
	// Line 1388, Address: 0x1756d8, Func Offset: 0x88
	// Line 1389, Address: 0x1756e0, Func Offset: 0x90
	// Line 1390, Address: 0x1756f8, Func Offset: 0xa8
	// Line 1392, Address: 0x1756fc, Func Offset: 0xac
	// Line 1394, Address: 0x175714, Func Offset: 0xc4
	// Line 1397, Address: 0x175718, Func Offset: 0xc8
	// Line 1398, Address: 0x175748, Func Offset: 0xf8
	// Line 1399, Address: 0x175758, Func Offset: 0x108
	// Line 1400, Address: 0x17576c, Func Offset: 0x11c
	// Line 1401, Address: 0x175784, Func Offset: 0x134
	// Line 1405, Address: 0x175798, Func Offset: 0x148
	// Line 1406, Address: 0x17579c, Func Offset: 0x14c
	// Func End, Address: 0x1757b8, Func Offset: 0x168
}

// 
// Start address: 0x1757c0
int miscMapMzFixedPipeIsTouch(int scene, int pos_no)
{
	int rtv;
	_anon12* pf;
	int val;
	// Line 1410, Address: 0x1757c0, Func Offset: 0
	// Line 1415, Address: 0x1757c4, Func Offset: 0x4
	// Line 1410, Address: 0x1757c8, Func Offset: 0x8
	// Line 1411, Address: 0x1757dc, Func Offset: 0x1c
	// Line 1410, Address: 0x1757e0, Func Offset: 0x20
	// Line 1415, Address: 0x1757e4, Func Offset: 0x24
	// Line 1416, Address: 0x175808, Func Offset: 0x48
	// Line 1417, Address: 0x175814, Func Offset: 0x54
	// Line 1418, Address: 0x175824, Func Offset: 0x64
	// Line 1422, Address: 0x175830, Func Offset: 0x70
	// Line 1425, Address: 0x175838, Func Offset: 0x78
	// Line 1427, Address: 0x175850, Func Offset: 0x90
	// Line 1428, Address: 0x175854, Func Offset: 0x94
	// Line 1430, Address: 0x175858, Func Offset: 0x98
	// Line 1431, Address: 0x175888, Func Offset: 0xc8
	// Line 1432, Address: 0x175898, Func Offset: 0xd8
	// Line 1433, Address: 0x1758ac, Func Offset: 0xec
	// Line 1434, Address: 0x1758c4, Func Offset: 0x104
	// Line 1438, Address: 0x1758d8, Func Offset: 0x118
	// Line 1439, Address: 0x1758dc, Func Offset: 0x11c
	// Func End, Address: 0x1758f8, Func Offset: 0x138
}

// 
// Start address: 0x175900
void miscMapMzRec(_anon1* work)
{
	int stage;
	int scene;
	float player[4];
	_anon3* p_set;
	_anon2* parts;
	int start;
	int i;
	_anon14 rect3d;
	_anon14 rect2d;
	float x0;
	float x1;
	float y0;
	float y1;
	float tmp;
	float tmp;
	// Line 1444, Address: 0x175900, Func Offset: 0
	// Line 1445, Address: 0x175904, Func Offset: 0x4
	// Line 1444, Address: 0x175908, Func Offset: 0x8
	// Line 1445, Address: 0x175924, Func Offset: 0x24
	// Line 1446, Address: 0x175928, Func Offset: 0x28
	// Line 1449, Address: 0x175934, Func Offset: 0x34
	// Line 1452, Address: 0x175940, Func Offset: 0x40
	// Line 1454, Address: 0x175954, Func Offset: 0x54
	// Line 1456, Address: 0x175960, Func Offset: 0x60
	// Line 1458, Address: 0x17596c, Func Offset: 0x6c
	// Line 1465, Address: 0x175970, Func Offset: 0x70
	// Line 1459, Address: 0x175974, Func Offset: 0x74
	// Line 1466, Address: 0x175978, Func Offset: 0x78
	// Line 1465, Address: 0x17597c, Func Offset: 0x7c
	// Line 1466, Address: 0x175984, Func Offset: 0x84
	// Line 1467, Address: 0x175990, Func Offset: 0x90
	// Line 1468, Address: 0x17599c, Func Offset: 0x9c
	// Line 1469, Address: 0x1759b4, Func Offset: 0xb4
	// Line 1468, Address: 0x1759b8, Func Offset: 0xb8
	// Line 1469, Address: 0x1759bc, Func Offset: 0xbc
	// Line 1468, Address: 0x1759c0, Func Offset: 0xc0
	// Line 1469, Address: 0x1759c4, Func Offset: 0xc4
	// Line 1468, Address: 0x1759c8, Func Offset: 0xc8
	// Line 1469, Address: 0x1759d8, Func Offset: 0xd8
	// Line 1470, Address: 0x175a08, Func Offset: 0x108
	// Line 1471, Address: 0x175a0c, Func Offset: 0x10c
	// Line 1470, Address: 0x175a10, Func Offset: 0x110
	// Line 1472, Address: 0x175a14, Func Offset: 0x114
	// Line 1473, Address: 0x175a18, Func Offset: 0x118
	// Line 1470, Address: 0x175a1c, Func Offset: 0x11c
	// Line 1471, Address: 0x175a20, Func Offset: 0x120
	// Line 1472, Address: 0x175a28, Func Offset: 0x128
	// Line 1471, Address: 0x175a2c, Func Offset: 0x12c
	// Line 1473, Address: 0x175a30, Func Offset: 0x130
	// Line 1472, Address: 0x175a34, Func Offset: 0x134
	// Line 1473, Address: 0x175a38, Func Offset: 0x138
	// Line 1471, Address: 0x175a3c, Func Offset: 0x13c
	// Line 1472, Address: 0x175a40, Func Offset: 0x140
	// Line 1473, Address: 0x175a44, Func Offset: 0x144
	// Line 1472, Address: 0x175a48, Func Offset: 0x148
	// Line 1475, Address: 0x175a4c, Func Offset: 0x14c
	// Line 1476, Address: 0x175a58, Func Offset: 0x158
	// Line 1477, Address: 0x175a5c, Func Offset: 0x15c
	// Line 1478, Address: 0x175a60, Func Offset: 0x160
	// Line 1479, Address: 0x175a64, Func Offset: 0x164
	// Line 1480, Address: 0x175a68, Func Offset: 0x168
	// Line 1482, Address: 0x175a74, Func Offset: 0x174
	// Line 1483, Address: 0x175a78, Func Offset: 0x178
	// Line 1484, Address: 0x175a7c, Func Offset: 0x17c
	// Line 1486, Address: 0x175a80, Func Offset: 0x180
	// Line 1488, Address: 0x175ab8, Func Offset: 0x1b8
	// Line 1490, Address: 0x175adc, Func Offset: 0x1dc
	// Line 1491, Address: 0x175ae0, Func Offset: 0x1e0
	// Line 1492, Address: 0x175ae4, Func Offset: 0x1e4
	// Line 1493, Address: 0x175afc, Func Offset: 0x1fc
	// Line 1496, Address: 0x175b00, Func Offset: 0x200
	// Line 1497, Address: 0x175b08, Func Offset: 0x208
	// Func End, Address: 0x175b2c, Func Offset: 0x22c
}

// 
// Start address: 0x175b30
void miscMapMzPeepRec(int scene)
{
	int i;
	unsigned char* prison;
	unsigned char* dst;
	int floor;
	// Line 1501, Address: 0x175b30, Func Offset: 0
	// Line 1502, Address: 0x175b40, Func Offset: 0x10
	// Line 1507, Address: 0x175b50, Func Offset: 0x20
	// Line 1509, Address: 0x175b58, Func Offset: 0x28
	// Line 1510, Address: 0x175b80, Func Offset: 0x50
	// Line 1511, Address: 0x175b8c, Func Offset: 0x5c
	// Line 1512, Address: 0x175b9c, Func Offset: 0x6c
	// Line 1516, Address: 0x175ba8, Func Offset: 0x78
	// Line 1518, Address: 0x175bb0, Func Offset: 0x80
	// Line 1516, Address: 0x175bb4, Func Offset: 0x84
	// Line 1518, Address: 0x175bc4, Func Offset: 0x94
	// Line 1519, Address: 0x175bc8, Func Offset: 0x98
	// Line 1520, Address: 0x175bd4, Func Offset: 0xa4
	// Line 1521, Address: 0x175be8, Func Offset: 0xb8
	// Line 1524, Address: 0x175bf0, Func Offset: 0xc0
	// Line 1526, Address: 0x175c00, Func Offset: 0xd0
	// Func End, Address: 0x175c14, Func Offset: 0xe4
}

// 
// Start address: 0x175c20
int miscMapMzPeepGet(int scene)
{
	int i;
	unsigned char* prison;
	unsigned char* src;
	int floor;
	// Line 1530, Address: 0x175c20, Func Offset: 0
	// Line 1531, Address: 0x175c30, Func Offset: 0x10
	// Line 1536, Address: 0x175c40, Func Offset: 0x20
	// Line 1538, Address: 0x175c48, Func Offset: 0x28
	// Line 1539, Address: 0x175c70, Func Offset: 0x50
	// Line 1540, Address: 0x175c7c, Func Offset: 0x5c
	// Line 1541, Address: 0x175c8c, Func Offset: 0x6c
	// Line 1545, Address: 0x175c98, Func Offset: 0x78
	// Line 1547, Address: 0x175ca0, Func Offset: 0x80
	// Line 1545, Address: 0x175ca4, Func Offset: 0x84
	// Line 1547, Address: 0x175cb4, Func Offset: 0x94
	// Line 1548, Address: 0x175cb8, Func Offset: 0x98
	// Line 1549, Address: 0x175cc4, Func Offset: 0xa4
	// Line 1550, Address: 0x175cdc, Func Offset: 0xbc
	// Line 1552, Address: 0x175ce0, Func Offset: 0xc0
	// Line 1555, Address: 0x175cf0, Func Offset: 0xd0
	// Line 1556, Address: 0x175cf8, Func Offset: 0xd8
	// Func End, Address: 0x175d0c, Func Offset: 0xec
}

// 
// Start address: 0x175d10
void miscHoleRecord()
{
	float pos[4];
	int i;
	int stage;
	int scene;
	_anon20* a;
	_anon21* b;
	float x0;
	float z0;
	float x1;
	float z1;
	_anon21 hole_data_range_check[3];
	_anon20 hole_data[15];
	// Line 1567, Address: 0x175d10, Func Offset: 0
	// Line 1581, Address: 0x175d14, Func Offset: 0x4
	// Line 1567, Address: 0x175d18, Func Offset: 0x8
	// Line 1582, Address: 0x175d24, Func Offset: 0x14
	// Line 1619, Address: 0x175d2c, Func Offset: 0x1c
	// Line 1582, Address: 0x175d30, Func Offset: 0x20
	// Line 1619, Address: 0x175d34, Func Offset: 0x24
	// Line 1620, Address: 0x175d38, Func Offset: 0x28
	// Line 1622, Address: 0x175d3c, Func Offset: 0x2c
	// Line 1621, Address: 0x175d48, Func Offset: 0x38
	// Line 1622, Address: 0x175d64, Func Offset: 0x54
	// Line 1625, Address: 0x175d90, Func Offset: 0x80
	// Line 1628, Address: 0x175da0, Func Offset: 0x90
	// Line 1630, Address: 0x175dac, Func Offset: 0x9c
	// Line 1629, Address: 0x175db0, Func Offset: 0xa0
	// Line 1630, Address: 0x175db4, Func Offset: 0xa4
	// Line 1629, Address: 0x175db8, Func Offset: 0xa8
	// Line 1630, Address: 0x175dbc, Func Offset: 0xac
	// Line 1649, Address: 0x175dc4, Func Offset: 0xb4
	// Line 1631, Address: 0x175dd0, Func Offset: 0xc0
	// Line 1634, Address: 0x175dec, Func Offset: 0xdc
	// Line 1636, Address: 0x175df0, Func Offset: 0xe0
	// Line 1637, Address: 0x175dfc, Func Offset: 0xec
	// Line 1638, Address: 0x175e00, Func Offset: 0xf0
	// Line 1639, Address: 0x175e04, Func Offset: 0xf4
	// Line 1638, Address: 0x175e08, Func Offset: 0xf8
	// Line 1640, Address: 0x175e0c, Func Offset: 0xfc
	// Line 1642, Address: 0x175e10, Func Offset: 0x100
	// Line 1643, Address: 0x175e1c, Func Offset: 0x10c
	// Line 1644, Address: 0x175e20, Func Offset: 0x110
	// Line 1645, Address: 0x175e24, Func Offset: 0x114
	// Line 1647, Address: 0x175e28, Func Offset: 0x118
	// Line 1649, Address: 0x175e5c, Func Offset: 0x14c
	// Line 1653, Address: 0x175e88, Func Offset: 0x178
	// Line 1654, Address: 0x175e98, Func Offset: 0x188
	// Func End, Address: 0x175eac, Func Offset: 0x19c
}

// 
// Start address: 0x175eb0
void miscMapDummyRec()
{
	// Line 1659, Address: 0x175eb0, Func Offset: 0
	// Func End, Address: 0x175eb8, Func Offset: 0x8
}

// 
// Start address: 0x175ec0
void miscMapRecordPlayerPosForceInit()
{
	// Line 1664, Address: 0x175ec0, Func Offset: 0
	// Line 1665, Address: 0x175ec8, Func Offset: 0x8
	// Func End, Address: 0x175ed0, Func Offset: 0x10
}

// 
// Start address: 0x175ed0
void miscMapForceRecordPlayerPos()
{
	_anon6* p;
	_PLAYER_WORK* pw;
	float pos[4];
	sfObj* obj;
	_anon28* eil;
	float eil_rot[4];
	float ofs[4];
	float front[4];
	float rot;
	// Line 1669, Address: 0x175ed0, Func Offset: 0
	// Line 1670, Address: 0x175ee0, Func Offset: 0x10
	// Line 1669, Address: 0x175ee4, Func Offset: 0x14
	// Line 1670, Address: 0x175ee8, Func Offset: 0x18
	// Line 1671, Address: 0x175eec, Func Offset: 0x1c
	// Line 1676, Address: 0x175ef8, Func Offset: 0x28
	// Line 1678, Address: 0x175f08, Func Offset: 0x38
	// Line 1680, Address: 0x175f18, Func Offset: 0x48
	// Line 1687, Address: 0x175f28, Func Offset: 0x58
	// Line 1688, Address: 0x175f30, Func Offset: 0x60
	// Line 1689, Address: 0x175f4c, Func Offset: 0x7c
	// Line 1690, Address: 0x175f68, Func Offset: 0x98
	// Line 1691, Address: 0x175f70, Func Offset: 0xa0
	// Line 1692, Address: 0x175f84, Func Offset: 0xb4
	// Line 1696, Address: 0x175f8c, Func Offset: 0xbc
	// Line 1697, Address: 0x175f94, Func Offset: 0xc4
	// Line 1698, Address: 0x175f9c, Func Offset: 0xcc
	// Line 1701, Address: 0x175fa0, Func Offset: 0xd0
	// Line 1702, Address: 0x175fbc, Func Offset: 0xec
	// Line 1703, Address: 0x175fc4, Func Offset: 0xf4
	// Line 1704, Address: 0x175fcc, Func Offset: 0xfc
	// Line 1705, Address: 0x175fd8, Func Offset: 0x108
	// Line 1706, Address: 0x175fec, Func Offset: 0x11c
	// Line 1710, Address: 0x175ff8, Func Offset: 0x128
	// Line 1711, Address: 0x17600c, Func Offset: 0x13c
	// Line 1712, Address: 0x176010, Func Offset: 0x140
	// Func End, Address: 0x17602c, Func Offset: 0x15c
}

// 
// Start address: 0x176030
void miscMapRecord()
{
	int stage;
	float pos[4];
	_PLAYER_WORK* pw;
	sfObj* obj;
	_anon28* eil;
	float eil_rot[4];
	float ofs[4];
	float front[4];
	_anon6* p;
	float rot;
	void(*map_rec)(_anon1*)[13];
	// Line 1720, Address: 0x176030, Func Offset: 0
	// Line 1736, Address: 0x176034, Func Offset: 0x4
	// Line 1720, Address: 0x176038, Func Offset: 0x8
	// Line 1738, Address: 0x17604c, Func Offset: 0x1c
	// Line 1742, Address: 0x176058, Func Offset: 0x28
	// Line 1747, Address: 0x17607c, Func Offset: 0x4c
	// Line 1750, Address: 0x176088, Func Offset: 0x58
	// Line 1751, Address: 0x176094, Func Offset: 0x64
	// Line 1755, Address: 0x1760bc, Func Offset: 0x8c
	// Line 1763, Address: 0x1760cc, Func Offset: 0x9c
	// Line 1764, Address: 0x1760d4, Func Offset: 0xa4
	// Line 1765, Address: 0x1760f0, Func Offset: 0xc0
	// Line 1766, Address: 0x17610c, Func Offset: 0xdc
	// Line 1767, Address: 0x176114, Func Offset: 0xe4
	// Line 1768, Address: 0x176128, Func Offset: 0xf8
	// Line 1772, Address: 0x176130, Func Offset: 0x100
	// Line 1773, Address: 0x176138, Func Offset: 0x108
	// Line 1774, Address: 0x176140, Func Offset: 0x110
	// Line 1775, Address: 0x176144, Func Offset: 0x114
	// Line 1777, Address: 0x176148, Func Offset: 0x118
	// Line 1778, Address: 0x176164, Func Offset: 0x134
	// Line 1779, Address: 0x17616c, Func Offset: 0x13c
	// Line 1780, Address: 0x176174, Func Offset: 0x144
	// Line 1781, Address: 0x176180, Func Offset: 0x150
	// Line 1782, Address: 0x176194, Func Offset: 0x164
	// Line 1786, Address: 0x1761a0, Func Offset: 0x170
	// Line 1789, Address: 0x1761cc, Func Offset: 0x19c
	// Line 1790, Address: 0x1761d0, Func Offset: 0x1a0
	// Func End, Address: 0x1761ec, Func Offset: 0x1bc
}

// 
// Start address: 0x1761f0
void miscMapRecordBdElevator()
{
	_anon1* work;
	int floor[5];
	int i;
	_enum_0 id;
	_anon3* map_parts;
	_anon3* p_set;
	_anon2* parts;
	float player[4];
	int start;
	int j;
	_anon14 rect3d;
	_anon14 rect2d;
	float x0;
	float x1;
	float y0;
	float y1;
	float tmp;
	float tmp;
	// Line 1794, Address: 0x1761f0, Func Offset: 0
	// Line 1798, Address: 0x1761f4, Func Offset: 0x4
	// Line 1794, Address: 0x1761f8, Func Offset: 0x8
	// Line 1798, Address: 0x1761fc, Func Offset: 0xc
	// Line 1794, Address: 0x176200, Func Offset: 0x10
	// Line 1798, Address: 0x176204, Func Offset: 0x14
	// Line 1794, Address: 0x176208, Func Offset: 0x18
	// Line 1795, Address: 0x17620c, Func Offset: 0x1c
	// Line 1794, Address: 0x176210, Func Offset: 0x20
	// Line 1795, Address: 0x176214, Func Offset: 0x24
	// Line 1794, Address: 0x176218, Func Offset: 0x28
	// Line 1801, Address: 0x17621c, Func Offset: 0x2c
	// Line 1794, Address: 0x176220, Func Offset: 0x30
	// Line 1798, Address: 0x176228, Func Offset: 0x38
	// Line 1801, Address: 0x176234, Func Offset: 0x44
	// Line 1803, Address: 0x176240, Func Offset: 0x50
	// Line 1807, Address: 0x176258, Func Offset: 0x68
	// Line 1809, Address: 0x176264, Func Offset: 0x74
	// Line 1811, Address: 0x17626c, Func Offset: 0x7c
	// Line 1817, Address: 0x176270, Func Offset: 0x80
	// Line 1813, Address: 0x176274, Func Offset: 0x84
	// Line 1817, Address: 0x176278, Func Offset: 0x88
	// Line 1820, Address: 0x176280, Func Offset: 0x90
	// Line 1821, Address: 0x17628c, Func Offset: 0x9c
	// Line 1822, Address: 0x176298, Func Offset: 0xa8
	// Line 1823, Address: 0x1762a8, Func Offset: 0xb8
	// Line 1824, Address: 0x1762c0, Func Offset: 0xd0
	// Line 1823, Address: 0x1762c4, Func Offset: 0xd4
	// Line 1824, Address: 0x1762c8, Func Offset: 0xd8
	// Line 1823, Address: 0x1762cc, Func Offset: 0xdc
	// Line 1824, Address: 0x1762d0, Func Offset: 0xe0
	// Line 1823, Address: 0x1762d4, Func Offset: 0xe4
	// Line 1824, Address: 0x1762e4, Func Offset: 0xf4
	// Line 1825, Address: 0x176314, Func Offset: 0x124
	// Line 1826, Address: 0x176318, Func Offset: 0x128
	// Line 1825, Address: 0x17631c, Func Offset: 0x12c
	// Line 1827, Address: 0x176320, Func Offset: 0x130
	// Line 1828, Address: 0x176324, Func Offset: 0x134
	// Line 1825, Address: 0x176328, Func Offset: 0x138
	// Line 1826, Address: 0x17632c, Func Offset: 0x13c
	// Line 1827, Address: 0x176334, Func Offset: 0x144
	// Line 1826, Address: 0x176338, Func Offset: 0x148
	// Line 1828, Address: 0x17633c, Func Offset: 0x14c
	// Line 1827, Address: 0x176340, Func Offset: 0x150
	// Line 1828, Address: 0x176344, Func Offset: 0x154
	// Line 1826, Address: 0x176348, Func Offset: 0x158
	// Line 1827, Address: 0x17634c, Func Offset: 0x15c
	// Line 1828, Address: 0x176350, Func Offset: 0x160
	// Line 1827, Address: 0x176354, Func Offset: 0x164
	// Line 1830, Address: 0x176358, Func Offset: 0x168
	// Line 1831, Address: 0x176364, Func Offset: 0x174
	// Line 1832, Address: 0x176368, Func Offset: 0x178
	// Line 1833, Address: 0x17636c, Func Offset: 0x17c
	// Line 1835, Address: 0x176370, Func Offset: 0x180
	// Line 1837, Address: 0x17637c, Func Offset: 0x18c
	// Line 1838, Address: 0x176380, Func Offset: 0x190
	// Line 1839, Address: 0x176384, Func Offset: 0x194
	// Line 1841, Address: 0x176388, Func Offset: 0x198
	// Line 1843, Address: 0x1763c0, Func Offset: 0x1d0
	// Line 1846, Address: 0x1763d8, Func Offset: 0x1e8
	// Line 1847, Address: 0x1763dc, Func Offset: 0x1ec
	// Line 1849, Address: 0x1763f0, Func Offset: 0x200
	// Line 1850, Address: 0x176404, Func Offset: 0x214
	// Func End, Address: 0x176428, Func Offset: 0x238
}

// 
// Start address: 0x176430
void miscMapFlagDataCopyToSave(void* dst)
{
	// Line 1858, Address: 0x176430, Func Offset: 0
	// Func End, Address: 0x176440, Func Offset: 0x10
}

// 
// Start address: 0x176440
void miscMapFlagDataCopyFromLoad(void* src)
{
	// Line 1864, Address: 0x176444, Func Offset: 0x4
	// Func End, Address: 0x176454, Func Offset: 0x14
}

// 
// Start address: 0x176460
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 1907, Address: 0x176460, Func Offset: 0
	// Line 1909, Address: 0x176464, Func Offset: 0x4
	// Line 1910, Address: 0x176478, Func Offset: 0x18
	// Line 1911, Address: 0x176490, Func Offset: 0x30
	// Line 1912, Address: 0x1764a8, Func Offset: 0x48
	// Line 1913, Address: 0x1764b0, Func Offset: 0x50
	// Func End, Address: 0x1764b8, Func Offset: 0x58
}

// 
// Start address: 0x1764c0
int is_prison_room(int scene)
{
	int i;
	int j;
	unsigned char* r;
	// Line 1922, Address: 0x1764c0, Func Offset: 0
	// Line 1923, Address: 0x1764d0, Func Offset: 0x10
	// Line 1925, Address: 0x1764d4, Func Offset: 0x14
	// Line 1926, Address: 0x1764d8, Func Offset: 0x18
	// Line 1927, Address: 0x1764e8, Func Offset: 0x28
	// Line 1929, Address: 0x1764f0, Func Offset: 0x30
	// Line 1930, Address: 0x176500, Func Offset: 0x40
	// Line 1931, Address: 0x176510, Func Offset: 0x50
	// Line 1932, Address: 0x176518, Func Offset: 0x58
	// Func End, Address: 0x176520, Func Offset: 0x60
}

// 
// Start address: 0x176520
int get_virtual_mz_rot_scene(int org_scene)
{
	int floor;
	int pos;
	// Line 1937, Address: 0x176520, Func Offset: 0
	// Line 1938, Address: 0x176530, Func Offset: 0x10
	// Line 1940, Address: 0x17653c, Func Offset: 0x1c
	// Line 1941, Address: 0x176558, Func Offset: 0x38
	// Line 1943, Address: 0x176564, Func Offset: 0x44
	// Line 1945, Address: 0x176574, Func Offset: 0x54
	// Line 1947, Address: 0x176594, Func Offset: 0x74
	// Line 1948, Address: 0x176598, Func Offset: 0x78
	// Line 1949, Address: 0x1765a0, Func Offset: 0x80
	// Func End, Address: 0x1765b4, Func Offset: 0x94
}

// 
// Start address: 0x1765c0
_anon2* get_virtual_mz_parts(_anon2* org_parts, int org_scene, int num)
{
	int i;
	// Line 1956, Address: 0x1765c0, Func Offset: 0
	// Line 1957, Address: 0x1765d0, Func Offset: 0x10
	// Line 1958, Address: 0x1765dc, Func Offset: 0x1c
	// Line 1959, Address: 0x1765e4, Func Offset: 0x24
	// Line 1961, Address: 0x1765e8, Func Offset: 0x28
	// Line 1962, Address: 0x1765f8, Func Offset: 0x38
	// Line 1963, Address: 0x176600, Func Offset: 0x40
	// Func End, Address: 0x176608, Func Offset: 0x48
}

// 
// Start address: 0x176610
int mz_door_to_floor_2_3(int door_no)
{
	int rtv;
	// Line 1969, Address: 0x176610, Func Offset: 0
	// Line 1977, Address: 0x17663c, Func Offset: 0x2c
	// Line 1979, Address: 0x176640, Func Offset: 0x30
	// Line 1988, Address: 0x176648, Func Offset: 0x38
	// Line 1990, Address: 0x17664c, Func Offset: 0x3c
	// Line 1992, Address: 0x176650, Func Offset: 0x40
	// Func End, Address: 0x176658, Func Offset: 0x48
}

// 
// Start address: 0x176660
int hs_scene_to_virtualscene(int current_scene)
{
	int i;
	// Line 1998, Address: 0x176660, Func Offset: 0
	// Line 2000, Address: 0x176674, Func Offset: 0x14
	// Line 2001, Address: 0x176680, Func Offset: 0x20
	// Line 2002, Address: 0x17668c, Func Offset: 0x2c
	// Line 2004, Address: 0x176694, Func Offset: 0x34
	// Line 2007, Address: 0x1766a8, Func Offset: 0x48
	// Line 2008, Address: 0x1766b0, Func Offset: 0x50
	// Func End, Address: 0x1766b8, Func Offset: 0x58
}

// 
// Start address: 0x1766c0
int hs_scene_is_opposit(int scene0, int scene1)
{
	int rtv;
	// Line 2016, Address: 0x1766c0, Func Offset: 0
	// Line 2018, Address: 0x1766f0, Func Offset: 0x30
	// Line 2019, Address: 0x1766f4, Func Offset: 0x34
	// Line 2021, Address: 0x1766f8, Func Offset: 0x38
	// Func End, Address: 0x176700, Func Offset: 0x40
}

// 
// Start address: 0x176700
_anon2* get_virtual_hs_parts(_anon2* org_parts, int org_scene, int num)
{
	int i;
	// Line 2065, Address: 0x176700, Func Offset: 0
	// Line 2066, Address: 0x176710, Func Offset: 0x10
	// Line 2067, Address: 0x17671c, Func Offset: 0x1c
	// Line 2068, Address: 0x176724, Func Offset: 0x24
	// Line 2070, Address: 0x176728, Func Offset: 0x28
	// Line 2071, Address: 0x176738, Func Offset: 0x38
	// Line 2072, Address: 0x176740, Func Offset: 0x40
	// Func End, Address: 0x176748, Func Offset: 0x48
}

// 
// Start address: 0x176750
void miscMapImgConstruct(_anon1* work)
{
	_anon4* img;
	// Line 2080, Address: 0x176750, Func Offset: 0
	// Line 2083, Address: 0x176754, Func Offset: 0x4
	// Line 2080, Address: 0x176758, Func Offset: 0x8
	// Line 2081, Address: 0x176768, Func Offset: 0x18
	// Line 2080, Address: 0x17676c, Func Offset: 0x1c
	// Line 2083, Address: 0x176770, Func Offset: 0x20
	// Line 2084, Address: 0x17677c, Func Offset: 0x2c
	// Line 2085, Address: 0x176784, Func Offset: 0x34
	// Line 2086, Address: 0x1767ec, Func Offset: 0x9c
	// Line 2088, Address: 0x176828, Func Offset: 0xd8
	// Line 2090, Address: 0x176840, Func Offset: 0xf0
	// Line 2091, Address: 0x176850, Func Offset: 0x100
	// Line 2092, Address: 0x176868, Func Offset: 0x118
	// Line 2093, Address: 0x176878, Func Offset: 0x128
	// Line 2095, Address: 0x176894, Func Offset: 0x144
	// Line 2096, Address: 0x1768a8, Func Offset: 0x158
	// Func End, Address: 0x1768c8, Func Offset: 0x178
}

// 
// Start address: 0x1768d0
void miscMapBaseImgConstruct(_anon1* work)
{
	_anon4* img;
	// Line 2100, Address: 0x1768d0, Func Offset: 0
	// Line 2103, Address: 0x1768d4, Func Offset: 0x4
	// Line 2100, Address: 0x1768d8, Func Offset: 0x8
	// Line 2101, Address: 0x1768e8, Func Offset: 0x18
	// Line 2100, Address: 0x1768ec, Func Offset: 0x1c
	// Line 2103, Address: 0x1768f0, Func Offset: 0x20
	// Line 2104, Address: 0x1768fc, Func Offset: 0x2c
	// Line 2105, Address: 0x176904, Func Offset: 0x34
	// Line 2106, Address: 0x17696c, Func Offset: 0x9c
	// Line 2107, Address: 0x1769a8, Func Offset: 0xd8
	// Line 2108, Address: 0x1769c4, Func Offset: 0xf4
	// Line 2109, Address: 0x1769d4, Func Offset: 0x104
	// Line 2110, Address: 0x1769ec, Func Offset: 0x11c
	// Line 2111, Address: 0x176a00, Func Offset: 0x130
	// Func End, Address: 0x176a20, Func Offset: 0x150
}

// 
// Start address: 0x176a20
void miscMapPlayerImgConstruct(_anon1* work)
{
	_anon13* img;
	// Line 2118, Address: 0x176a20, Func Offset: 0
	// Line 2121, Address: 0x176a24, Func Offset: 0x4
	// Line 2118, Address: 0x176a28, Func Offset: 0x8
	// Line 2119, Address: 0x176a3c, Func Offset: 0x1c
	// Line 2121, Address: 0x176a40, Func Offset: 0x20
	// Line 2122, Address: 0x176a48, Func Offset: 0x28
	// Line 2123, Address: 0x176a84, Func Offset: 0x64
	// Line 2124, Address: 0x176aa8, Func Offset: 0x88
	// Line 2125, Address: 0x176ac4, Func Offset: 0xa4
	// Line 2124, Address: 0x176ad0, Func Offset: 0xb0
	// Line 2125, Address: 0x176ad4, Func Offset: 0xb4
	// Line 2126, Address: 0x176ae4, Func Offset: 0xc4
	// Line 2127, Address: 0x176af4, Func Offset: 0xd4
	// Line 2128, Address: 0x176b04, Func Offset: 0xe4
	// Line 2129, Address: 0x176b20, Func Offset: 0x100
	// Line 2130, Address: 0x176b24, Func Offset: 0x104
	// Line 2131, Address: 0x176b28, Func Offset: 0x108
	// Func End, Address: 0x176b40, Func Offset: 0x120
}

// 
// Start address: 0x176b40
void miscMapEileenImgConstruct(_anon1* work)
{
	_anon13* img;
	// Line 2135, Address: 0x176b40, Func Offset: 0
	// Line 2138, Address: 0x176b44, Func Offset: 0x4
	// Line 2135, Address: 0x176b48, Func Offset: 0x8
	// Line 2136, Address: 0x176b5c, Func Offset: 0x1c
	// Line 2138, Address: 0x176b60, Func Offset: 0x20
	// Line 2139, Address: 0x176b68, Func Offset: 0x28
	// Line 2140, Address: 0x176ba4, Func Offset: 0x64
	// Line 2141, Address: 0x176bc8, Func Offset: 0x88
	// Line 2142, Address: 0x176be4, Func Offset: 0xa4
	// Line 2141, Address: 0x176bf0, Func Offset: 0xb0
	// Line 2142, Address: 0x176bf4, Func Offset: 0xb4
	// Line 2143, Address: 0x176c04, Func Offset: 0xc4
	// Line 2144, Address: 0x176c14, Func Offset: 0xd4
	// Line 2145, Address: 0x176c24, Func Offset: 0xe4
	// Line 2146, Address: 0x176c40, Func Offset: 0x100
	// Line 2147, Address: 0x176c44, Func Offset: 0x104
	// Line 2148, Address: 0x176c48, Func Offset: 0x108
	// Func End, Address: 0x176c60, Func Offset: 0x120
}

// 
// Start address: 0x176c60
void miscMapArrowImgConstruct(_anon26* arw, int dir)
{
	// Line 2152, Address: 0x176c60, Func Offset: 0
	// Line 2155, Address: 0x176c80, Func Offset: 0x20
	// Line 2152, Address: 0x176c84, Func Offset: 0x24
	// Line 2155, Address: 0x176c8c, Func Offset: 0x2c
	// Line 2156, Address: 0x176c94, Func Offset: 0x34
	// Line 2158, Address: 0x176cb0, Func Offset: 0x50
	// Line 2162, Address: 0x176d34, Func Offset: 0xd4
	// Line 2163, Address: 0x176d3c, Func Offset: 0xdc
	// Line 2164, Address: 0x176d40, Func Offset: 0xe0
	// Line 2169, Address: 0x176dec, Func Offset: 0x18c
	// Line 2170, Address: 0x176df0, Func Offset: 0x190
	// Line 2171, Address: 0x176e00, Func Offset: 0x1a0
	// Line 2172, Address: 0x176e1c, Func Offset: 0x1bc
	// Line 2174, Address: 0x176e34, Func Offset: 0x1d4
	// Line 2175, Address: 0x176e38, Func Offset: 0x1d8
	// Func End, Address: 0x176e60, Func Offset: 0x200
}

// 
// Start address: 0x176e60
void tri_alpha_set(_anon13* img, unsigned char alpha)
{
	unsigned int col;
	// Line 2180, Address: 0x176e60, Func Offset: 0
	// Line 2182, Address: 0x176e78, Func Offset: 0x18
	// Func End, Address: 0x176e84, Func Offset: 0x24
}

// 
// Start address: 0x176e90
void miscMapPlayerInit(_anon6* p)
{
	float pos[4];
	// Line 2188, Address: 0x176e90, Func Offset: 0
	// Line 2191, Address: 0x176e94, Func Offset: 0x4
	// Line 2188, Address: 0x176e98, Func Offset: 0x8
	// Line 2191, Address: 0x176ea4, Func Offset: 0x14
	// Line 2193, Address: 0x176eac, Func Offset: 0x1c
	// Line 2194, Address: 0x176ebc, Func Offset: 0x2c
	// Line 2196, Address: 0x176ec0, Func Offset: 0x30
	// Line 2194, Address: 0x176ec4, Func Offset: 0x34
	// Line 2195, Address: 0x176ec8, Func Offset: 0x38
	// Line 2196, Address: 0x176ecc, Func Offset: 0x3c
	// Line 2197, Address: 0x176ed4, Func Offset: 0x44
	// Line 2198, Address: 0x176ee0, Func Offset: 0x50
	// Line 2199, Address: 0x176ef8, Func Offset: 0x68
	// Func End, Address: 0x176f08, Func Offset: 0x78
}

// 
// Start address: 0x176f10
void miscMapInit0(_anon1* work)
{
	// Line 2203, Address: 0x176f10, Func Offset: 0
	// Line 2205, Address: 0x176f1c, Func Offset: 0xc
	// Line 2207, Address: 0x176f24, Func Offset: 0x14
	// Line 2208, Address: 0x176f34, Func Offset: 0x24
	// Line 2209, Address: 0x176f38, Func Offset: 0x28
	// Line 2210, Address: 0x176f5c, Func Offset: 0x4c
	// Line 2213, Address: 0x176f78, Func Offset: 0x68
	// Line 2210, Address: 0x176f7c, Func Offset: 0x6c
	// Line 2213, Address: 0x176f80, Func Offset: 0x70
	// Line 2214, Address: 0x176f88, Func Offset: 0x78
	// Line 2216, Address: 0x176f90, Func Offset: 0x80
	// Line 2217, Address: 0x176f98, Func Offset: 0x88
	// Line 2219, Address: 0x176fa0, Func Offset: 0x90
	// Line 2220, Address: 0x176fa8, Func Offset: 0x98
	// Line 2223, Address: 0x176fb0, Func Offset: 0xa0
	// Line 2224, Address: 0x176fbc, Func Offset: 0xac
	// Line 2227, Address: 0x176fc8, Func Offset: 0xb8
	// Line 2228, Address: 0x176fcc, Func Offset: 0xbc
	// Func End, Address: 0x176fdc, Func Offset: 0xcc
}

// 
// Start address: 0x176fe0
int IsSameFloor(_anon1* work, int stage, int scene, float* pos)
{
	_enum_0 map_id;
	// Line 2234, Address: 0x176fe0, Func Offset: 0
	// Line 2238, Address: 0x176ff0, Func Offset: 0x10
	// Line 2240, Address: 0x177000, Func Offset: 0x20
	// Line 2241, Address: 0x177008, Func Offset: 0x28
	// Line 2240, Address: 0x177010, Func Offset: 0x30
	// Line 2241, Address: 0x177018, Func Offset: 0x38
	// Func End, Address: 0x177020, Func Offset: 0x40
}

// 
// Start address: 0x177020
void miscMapCalculatePosition(float* dst, float* src, _anon1* work, int scene)
{
	int v_scene;
	_anon2* parts;
	int start;
	int i;
	int stage;
	int floor;
	int pos_no;
	int tmp;
	int rot_n;
	float rot_q[4];
	float rot_q[4];
	_anon14 rect3d;
	_anon14 rect2d;
	float x0;
	float x1;
	float y0;
	float y1;
	int r_scene;
	float tmp;
	float tmp;
	float len;
	float p_len;
	float ratio;
	float tmp;
	float r2x0;
	float r2x1;
	float r2y0;
	float r2y1;
	_anon14 rect_hs20;
	_anon14 rect_hs17;
	// Line 2245, Address: 0x177020, Func Offset: 0
	// Line 2250, Address: 0x17705c, Func Offset: 0x3c
	// Line 2251, Address: 0x177068, Func Offset: 0x48
	// Line 2252, Address: 0x17706c, Func Offset: 0x4c
	// Line 2257, Address: 0x177074, Func Offset: 0x54
	// Line 2255, Address: 0x177078, Func Offset: 0x58
	// Line 2257, Address: 0x17707c, Func Offset: 0x5c
	// Line 2259, Address: 0x177084, Func Offset: 0x64
	// Line 2260, Address: 0x177090, Func Offset: 0x70
	// Line 2261, Address: 0x17709c, Func Offset: 0x7c
	// Line 2263, Address: 0x1770ac, Func Offset: 0x8c
	// Line 2264, Address: 0x1770b8, Func Offset: 0x98
	// Line 2273, Address: 0x1770c0, Func Offset: 0xa0
	// Line 2271, Address: 0x1770dc, Func Offset: 0xbc
	// Line 2273, Address: 0x1770e0, Func Offset: 0xc0
	// Line 2277, Address: 0x1770ec, Func Offset: 0xcc
	// Line 2279, Address: 0x1770fc, Func Offset: 0xdc
	// Line 2280, Address: 0x177108, Func Offset: 0xe8
	// Line 2283, Address: 0x177114, Func Offset: 0xf4
	// Line 2285, Address: 0x177120, Func Offset: 0x100
	// Line 2286, Address: 0x177128, Func Offset: 0x108
	// Line 2290, Address: 0x177138, Func Offset: 0x118
	// Line 2291, Address: 0x177154, Func Offset: 0x134
	// Line 2292, Address: 0x177164, Func Offset: 0x144
	// Line 2294, Address: 0x177168, Func Offset: 0x148
	// Line 2296, Address: 0x17716c, Func Offset: 0x14c
	// Line 2298, Address: 0x177170, Func Offset: 0x150
	// Line 2299, Address: 0x177178, Func Offset: 0x158
	// Line 2300, Address: 0x177184, Func Offset: 0x164
	// Line 2301, Address: 0x17719c, Func Offset: 0x17c
	// Line 2300, Address: 0x1771a0, Func Offset: 0x180
	// Line 2301, Address: 0x1771a4, Func Offset: 0x184
	// Line 2300, Address: 0x1771a8, Func Offset: 0x188
	// Line 2301, Address: 0x1771ac, Func Offset: 0x18c
	// Line 2300, Address: 0x1771b0, Func Offset: 0x190
	// Line 2301, Address: 0x1771c0, Func Offset: 0x1a0
	// Line 2302, Address: 0x1771f0, Func Offset: 0x1d0
	// Line 2303, Address: 0x1771f4, Func Offset: 0x1d4
	// Line 2302, Address: 0x1771f8, Func Offset: 0x1d8
	// Line 2304, Address: 0x1771fc, Func Offset: 0x1dc
	// Line 2305, Address: 0x177200, Func Offset: 0x1e0
	// Line 2302, Address: 0x177204, Func Offset: 0x1e4
	// Line 2308, Address: 0x177208, Func Offset: 0x1e8
	// Line 2303, Address: 0x17720c, Func Offset: 0x1ec
	// Line 2304, Address: 0x177210, Func Offset: 0x1f0
	// Line 2303, Address: 0x177214, Func Offset: 0x1f4
	// Line 2305, Address: 0x177218, Func Offset: 0x1f8
	// Line 2304, Address: 0x17721c, Func Offset: 0x1fc
	// Line 2305, Address: 0x177220, Func Offset: 0x200
	// Line 2303, Address: 0x177224, Func Offset: 0x204
	// Line 2304, Address: 0x177228, Func Offset: 0x208
	// Line 2305, Address: 0x17722c, Func Offset: 0x20c
	// Line 2303, Address: 0x177230, Func Offset: 0x210
	// Line 2304, Address: 0x177234, Func Offset: 0x214
	// Line 2308, Address: 0x177238, Func Offset: 0x218
	// Line 2309, Address: 0x177240, Func Offset: 0x220
	// Line 2315, Address: 0x177248, Func Offset: 0x228
	// Line 2311, Address: 0x17724c, Func Offset: 0x22c
	// Line 2315, Address: 0x177258, Func Offset: 0x238
	// Line 2317, Address: 0x177270, Func Offset: 0x250
	// Line 2318, Address: 0x177278, Func Offset: 0x258
	// Line 2317, Address: 0x17727c, Func Offset: 0x25c
	// Line 2318, Address: 0x177280, Func Offset: 0x260
	// Line 2317, Address: 0x177284, Func Offset: 0x264
	// Line 2319, Address: 0x177294, Func Offset: 0x274
	// Line 2318, Address: 0x177298, Func Offset: 0x278
	// Line 2319, Address: 0x17729c, Func Offset: 0x27c
	// Line 2318, Address: 0x1772a0, Func Offset: 0x280
	// Line 2320, Address: 0x1772b0, Func Offset: 0x290
	// Line 2319, Address: 0x1772b4, Func Offset: 0x294
	// Line 2320, Address: 0x1772b8, Func Offset: 0x298
	// Line 2319, Address: 0x1772bc, Func Offset: 0x29c
	// Line 2320, Address: 0x1772cc, Func Offset: 0x2ac
	// Line 2321, Address: 0x1772d8, Func Offset: 0x2b8
	// Line 2323, Address: 0x1772e0, Func Offset: 0x2c0
	// Line 2324, Address: 0x1772e8, Func Offset: 0x2c8
	// Line 2323, Address: 0x1772ec, Func Offset: 0x2cc
	// Line 2324, Address: 0x1772f0, Func Offset: 0x2d0
	// Line 2323, Address: 0x1772f4, Func Offset: 0x2d4
	// Line 2325, Address: 0x177304, Func Offset: 0x2e4
	// Line 2324, Address: 0x177308, Func Offset: 0x2e8
	// Line 2325, Address: 0x17730c, Func Offset: 0x2ec
	// Line 2324, Address: 0x177310, Func Offset: 0x2f0
	// Line 2326, Address: 0x177320, Func Offset: 0x300
	// Line 2325, Address: 0x177324, Func Offset: 0x304
	// Line 2326, Address: 0x177328, Func Offset: 0x308
	// Line 2325, Address: 0x17732c, Func Offset: 0x30c
	// Line 2326, Address: 0x17733c, Func Offset: 0x31c
	// Line 2329, Address: 0x177350, Func Offset: 0x330
	// Line 2330, Address: 0x177360, Func Offset: 0x340
	// Line 2331, Address: 0x17736c, Func Offset: 0x34c
	// Line 2332, Address: 0x177370, Func Offset: 0x350
	// Line 2333, Address: 0x177374, Func Offset: 0x354
	// Line 2339, Address: 0x177378, Func Offset: 0x358
	// Line 2341, Address: 0x177384, Func Offset: 0x364
	// Line 2342, Address: 0x177388, Func Offset: 0x368
	// Line 2343, Address: 0x17738c, Func Offset: 0x36c
	// Line 2344, Address: 0x177390, Func Offset: 0x370
	// Line 2346, Address: 0x17739c, Func Offset: 0x37c
	// Line 2347, Address: 0x1773a0, Func Offset: 0x380
	// Line 2348, Address: 0x1773a4, Func Offset: 0x384
	// Line 2350, Address: 0x1773a8, Func Offset: 0x388
	// Line 2357, Address: 0x1773e0, Func Offset: 0x3c0
	// Line 2363, Address: 0x1773e4, Func Offset: 0x3c4
	// Line 2362, Address: 0x1773e8, Func Offset: 0x3c8
	// Line 2366, Address: 0x1773ec, Func Offset: 0x3cc
	// Line 2362, Address: 0x1773f0, Func Offset: 0x3d0
	// Line 2358, Address: 0x1773f4, Func Offset: 0x3d4
	// Line 2359, Address: 0x1773f8, Func Offset: 0x3d8
	// Line 2360, Address: 0x1773fc, Func Offset: 0x3dc
	// Line 2357, Address: 0x177400, Func Offset: 0x3e0
	// Line 2363, Address: 0x177404, Func Offset: 0x3e4
	// Line 2362, Address: 0x177408, Func Offset: 0x3e8
	// Line 2357, Address: 0x177410, Func Offset: 0x3f0
	// Line 2358, Address: 0x177414, Func Offset: 0x3f4
	// Line 2362, Address: 0x177418, Func Offset: 0x3f8
	// Line 2358, Address: 0x177420, Func Offset: 0x400
	// Line 2362, Address: 0x177424, Func Offset: 0x404
	// Line 2359, Address: 0x177428, Func Offset: 0x408
	// Line 2362, Address: 0x17742c, Func Offset: 0x40c
	// Line 2360, Address: 0x177430, Func Offset: 0x410
	// Line 2363, Address: 0x177434, Func Offset: 0x414
	// Line 2359, Address: 0x177438, Func Offset: 0x418
	// Line 2363, Address: 0x17743c, Func Offset: 0x41c
	// Line 2360, Address: 0x177440, Func Offset: 0x420
	// Line 2363, Address: 0x177444, Func Offset: 0x424
	// Line 2362, Address: 0x17744c, Func Offset: 0x42c
	// Line 2363, Address: 0x177450, Func Offset: 0x430
	// Line 2362, Address: 0x177458, Func Offset: 0x438
	// Line 2363, Address: 0x17745c, Func Offset: 0x43c
	// Line 2364, Address: 0x177460, Func Offset: 0x440
	// Line 2357, Address: 0x177464, Func Offset: 0x444
	// Line 2358, Address: 0x177468, Func Offset: 0x448
	// Line 2357, Address: 0x17746c, Func Offset: 0x44c
	// Line 2358, Address: 0x177470, Func Offset: 0x450
	// Line 2365, Address: 0x177474, Func Offset: 0x454
	// Line 2366, Address: 0x177480, Func Offset: 0x460
	// Line 2369, Address: 0x177488, Func Offset: 0x468
	// Line 2368, Address: 0x177490, Func Offset: 0x470
	// Line 2359, Address: 0x177494, Func Offset: 0x474
	// Line 2368, Address: 0x177498, Func Offset: 0x478
	// Line 2360, Address: 0x17749c, Func Offset: 0x47c
	// Line 2359, Address: 0x1774a0, Func Offset: 0x480
	// Line 2369, Address: 0x1774a4, Func Offset: 0x484
	// Line 2368, Address: 0x1774ac, Func Offset: 0x48c
	// Line 2369, Address: 0x1774b8, Func Offset: 0x498
	// Line 2368, Address: 0x1774bc, Func Offset: 0x49c
	// Line 2369, Address: 0x1774c4, Func Offset: 0x4a4
	// Line 2368, Address: 0x1774c8, Func Offset: 0x4a8
	// Line 2369, Address: 0x1774cc, Func Offset: 0x4ac
	// Line 2368, Address: 0x1774d0, Func Offset: 0x4b0
	// Line 2360, Address: 0x1774d4, Func Offset: 0x4b4
	// Line 2368, Address: 0x1774d8, Func Offset: 0x4b8
	// Line 2369, Address: 0x1774dc, Func Offset: 0x4bc
	// Line 2370, Address: 0x1774e0, Func Offset: 0x4c0
	// Line 2371, Address: 0x1774e4, Func Offset: 0x4c4
	// Line 2372, Address: 0x1774ec, Func Offset: 0x4cc
	// Line 2371, Address: 0x1774f0, Func Offset: 0x4d0
	// Line 2372, Address: 0x1774f4, Func Offset: 0x4d4
	// Line 2374, Address: 0x1774f8, Func Offset: 0x4d8
	// Line 2377, Address: 0x177500, Func Offset: 0x4e0
	// Line 2378, Address: 0x177504, Func Offset: 0x4e4
	// Line 2380, Address: 0x17751c, Func Offset: 0x4fc
	// Line 2381, Address: 0x177520, Func Offset: 0x500
	// Func End, Address: 0x177550, Func Offset: 0x530
}

// 
// Start address: 0x177550
float miscMapCalculateRot(float rot, int scene)
{
	float rtv;
	int stage;
	int floor;
	int rot_n;
	int v_scene;
	// Line 2385, Address: 0x177550, Func Offset: 0
	// Line 2387, Address: 0x177554, Func Offset: 0x4
	// Line 2385, Address: 0x177558, Func Offset: 0x8
	// Line 2389, Address: 0x17755c, Func Offset: 0xc
	// Line 2385, Address: 0x177560, Func Offset: 0x10
	// Line 2387, Address: 0x177570, Func Offset: 0x20
	// Line 2389, Address: 0x177578, Func Offset: 0x28
	// Line 2392, Address: 0x177580, Func Offset: 0x30
	// Line 2394, Address: 0x177590, Func Offset: 0x40
	// Line 2395, Address: 0x177598, Func Offset: 0x48
	// Line 2398, Address: 0x1775a0, Func Offset: 0x50
	// Line 2399, Address: 0x1775b4, Func Offset: 0x64
	// Line 2398, Address: 0x1775bc, Func Offset: 0x6c
	// Line 2399, Address: 0x1775cc, Func Offset: 0x7c
	// Line 2403, Address: 0x1775e0, Func Offset: 0x90
	// Line 2404, Address: 0x1775e8, Func Offset: 0x98
	// Line 2406, Address: 0x1775f4, Func Offset: 0xa4
	// Line 2408, Address: 0x1775fc, Func Offset: 0xac
	// Line 2409, Address: 0x177604, Func Offset: 0xb4
	// Line 2410, Address: 0x177618, Func Offset: 0xc8
	// Line 2416, Address: 0x17762c, Func Offset: 0xdc
	// Line 2419, Address: 0x177630, Func Offset: 0xe0
	// Line 2418, Address: 0x177634, Func Offset: 0xe4
	// Line 2419, Address: 0x177638, Func Offset: 0xe8
	// Func End, Address: 0x17764c, Func Offset: 0xfc
}

// 
// Start address: 0x177650
void DrawTri(_anon13* img, float* pos, float rad, unsigned int aabbggrr)
{
	float rot_q[4];
	float tri[4][3];
	int i;
	float base_tri[4][3];
	// Line 2444, Address: 0x177650, Func Offset: 0
	// Line 2455, Address: 0x177654, Func Offset: 0x4
	// Line 2444, Address: 0x177658, Func Offset: 0x8
	// Line 2455, Address: 0x177674, Func Offset: 0x24
	// Line 2457, Address: 0x177680, Func Offset: 0x30
	// Line 2458, Address: 0x177694, Func Offset: 0x44
	// Line 2459, Address: 0x1776a0, Func Offset: 0x50
	// Line 2460, Address: 0x1776c0, Func Offset: 0x70
	// Line 2461, Address: 0x1776e0, Func Offset: 0x90
	// Line 2462, Address: 0x1776f4, Func Offset: 0xa4
	// Line 2467, Address: 0x177714, Func Offset: 0xc4
	// Line 2468, Address: 0x177720, Func Offset: 0xd0
	// Func End, Address: 0x17773c, Func Offset: 0xec
}

// 
// Start address: 0x177740
void miscMapPlayerTriDraw(_anon1* work)
{
	_anon6* pl;
	_anon13* img;
	unsigned char a;
	unsigned int col;
	float pos[4];
	float rot;
	float alpha;
	int v_scene;
	int index;
	int history_count;
	// Line 2472, Address: 0x177740, Func Offset: 0
	// Line 2474, Address: 0x177758, Func Offset: 0x18
	// Line 2472, Address: 0x17775c, Func Offset: 0x1c
	// Line 2475, Address: 0x177760, Func Offset: 0x20
	// Line 2472, Address: 0x177764, Func Offset: 0x24
	// Line 2485, Address: 0x177768, Func Offset: 0x28
	// Line 2488, Address: 0x177770, Func Offset: 0x30
	// Line 2489, Address: 0x17779c, Func Offset: 0x5c
	// Line 2490, Address: 0x1777a0, Func Offset: 0x60
	// Line 2491, Address: 0x1777a4, Func Offset: 0x64
	// Line 2492, Address: 0x1777ac, Func Offset: 0x6c
	// Line 2493, Address: 0x1777b8, Func Offset: 0x78
	// Line 2496, Address: 0x1777c4, Func Offset: 0x84
	// Line 2497, Address: 0x1777c8, Func Offset: 0x88
	// Line 2501, Address: 0x177810, Func Offset: 0xd0
	// Line 2497, Address: 0x177814, Func Offset: 0xd4
	// Line 2502, Address: 0x177818, Func Offset: 0xd8
	// Line 2497, Address: 0x17781c, Func Offset: 0xdc
	// Line 2499, Address: 0x177820, Func Offset: 0xe0
	// Line 2501, Address: 0x177824, Func Offset: 0xe4
	// Line 2499, Address: 0x177828, Func Offset: 0xe8
	// Line 2497, Address: 0x17782c, Func Offset: 0xec
	// Line 2502, Address: 0x177830, Func Offset: 0xf0
	// Line 2501, Address: 0x177834, Func Offset: 0xf4
	// Line 2502, Address: 0x177838, Func Offset: 0xf8
	// Line 2501, Address: 0x17783c, Func Offset: 0xfc
	// Line 2498, Address: 0x177844, Func Offset: 0x104
	// Line 2502, Address: 0x177848, Func Offset: 0x108
	// Line 2498, Address: 0x177850, Func Offset: 0x110
	// Line 2499, Address: 0x177860, Func Offset: 0x120
	// Line 2502, Address: 0x17786c, Func Offset: 0x12c
	// Line 2505, Address: 0x177874, Func Offset: 0x134
	// Line 2503, Address: 0x177878, Func Offset: 0x138
	// Line 2505, Address: 0x17787c, Func Offset: 0x13c
	// Line 2503, Address: 0x177880, Func Offset: 0x140
	// Line 2505, Address: 0x177884, Func Offset: 0x144
	// Line 2506, Address: 0x177894, Func Offset: 0x154
	// Line 2507, Address: 0x1778a4, Func Offset: 0x164
	// Line 2509, Address: 0x1778b8, Func Offset: 0x178
	// Line 2510, Address: 0x1778c4, Func Offset: 0x184
	// Line 2511, Address: 0x177908, Func Offset: 0x1c8
	// Line 2512, Address: 0x17790c, Func Offset: 0x1cc
	// Line 2513, Address: 0x177918, Func Offset: 0x1d8
	// Line 2514, Address: 0x17792c, Func Offset: 0x1ec
	// Line 2515, Address: 0x177930, Func Offset: 0x1f0
	// Line 2516, Address: 0x177940, Func Offset: 0x200
	// Line 2518, Address: 0x177948, Func Offset: 0x208
	// Line 2521, Address: 0x177950, Func Offset: 0x210
	// Line 2523, Address: 0x17795c, Func Offset: 0x21c
	// Line 2524, Address: 0x1779d8, Func Offset: 0x298
	// Line 2523, Address: 0x1779dc, Func Offset: 0x29c
	// Line 2524, Address: 0x1779e0, Func Offset: 0x2a0
	// Line 2528, Address: 0x1779f4, Func Offset: 0x2b4
	// Line 2526, Address: 0x1779fc, Func Offset: 0x2bc
	// Line 2525, Address: 0x177a00, Func Offset: 0x2c0
	// Line 2526, Address: 0x177a04, Func Offset: 0x2c4
	// Line 2529, Address: 0x177a08, Func Offset: 0x2c8
	// Line 2528, Address: 0x177a10, Func Offset: 0x2d0
	// Line 2529, Address: 0x177a14, Func Offset: 0x2d4
	// Line 2528, Address: 0x177a18, Func Offset: 0x2d8
	// Line 2525, Address: 0x177a20, Func Offset: 0x2e0
	// Line 2529, Address: 0x177a24, Func Offset: 0x2e4
	// Line 2525, Address: 0x177a2c, Func Offset: 0x2ec
	// Line 2526, Address: 0x177a34, Func Offset: 0x2f4
	// Line 2529, Address: 0x177a40, Func Offset: 0x300
	// Line 2531, Address: 0x177a48, Func Offset: 0x308
	// Line 2530, Address: 0x177a4c, Func Offset: 0x30c
	// Line 2531, Address: 0x177a50, Func Offset: 0x310
	// Line 2530, Address: 0x177a54, Func Offset: 0x314
	// Line 2531, Address: 0x177a58, Func Offset: 0x318
	// Line 2532, Address: 0x177a68, Func Offset: 0x328
	// Line 2533, Address: 0x177a78, Func Offset: 0x338
	// Line 2535, Address: 0x177a8c, Func Offset: 0x34c
	// Line 2536, Address: 0x177a98, Func Offset: 0x358
	// Line 2537, Address: 0x177adc, Func Offset: 0x39c
	// Line 2541, Address: 0x177ae0, Func Offset: 0x3a0
	// Func End, Address: 0x177b04, Func Offset: 0x3c4
}

// 
// Start address: 0x177b10
void miscMapEileenTriDraw(_anon1* work)
{
	_anon6* eileen;
	_anon13* img;
	unsigned char a;
	unsigned int col;
	float pos[4];
	float rot;
	float alpha;
	int v_scene;
	float ofs[4];
	int index;
	int history_count;
	// Line 2545, Address: 0x177b10, Func Offset: 0
	// Line 2547, Address: 0x177b28, Func Offset: 0x18
	// Line 2545, Address: 0x177b2c, Func Offset: 0x1c
	// Line 2548, Address: 0x177b30, Func Offset: 0x20
	// Line 2545, Address: 0x177b34, Func Offset: 0x24
	// Line 2558, Address: 0x177b38, Func Offset: 0x28
	// Line 2562, Address: 0x177b40, Func Offset: 0x30
	// Line 2564, Address: 0x177b60, Func Offset: 0x50
	// Line 2566, Address: 0x177b88, Func Offset: 0x78
	// Line 2567, Address: 0x177b8c, Func Offset: 0x7c
	// Line 2568, Address: 0x177b94, Func Offset: 0x84
	// Line 2569, Address: 0x177ba0, Func Offset: 0x90
	// Line 2572, Address: 0x177bac, Func Offset: 0x9c
	// Line 2573, Address: 0x177bb0, Func Offset: 0xa0
	// Line 2577, Address: 0x177bf8, Func Offset: 0xe8
	// Line 2573, Address: 0x177bfc, Func Offset: 0xec
	// Line 2579, Address: 0x177c00, Func Offset: 0xf0
	// Line 2573, Address: 0x177c04, Func Offset: 0xf4
	// Line 2575, Address: 0x177c08, Func Offset: 0xf8
	// Line 2577, Address: 0x177c0c, Func Offset: 0xfc
	// Line 2575, Address: 0x177c10, Func Offset: 0x100
	// Line 2579, Address: 0x177c14, Func Offset: 0x104
	// Line 2573, Address: 0x177c18, Func Offset: 0x108
	// Line 2579, Address: 0x177c1c, Func Offset: 0x10c
	// Line 2577, Address: 0x177c20, Func Offset: 0x110
	// Line 2579, Address: 0x177c24, Func Offset: 0x114
	// Line 2577, Address: 0x177c28, Func Offset: 0x118
	// Line 2574, Address: 0x177c30, Func Offset: 0x120
	// Line 2579, Address: 0x177c34, Func Offset: 0x124
	// Line 2574, Address: 0x177c3c, Func Offset: 0x12c
	// Line 2575, Address: 0x177c4c, Func Offset: 0x13c
	// Line 2579, Address: 0x177c58, Func Offset: 0x148
	// Line 2580, Address: 0x177c6c, Func Offset: 0x15c
	// Line 2582, Address: 0x177c74, Func Offset: 0x164
	// Line 2583, Address: 0x177c8c, Func Offset: 0x17c
	// Line 2584, Address: 0x177c9c, Func Offset: 0x18c
	// Line 2586, Address: 0x177cb0, Func Offset: 0x1a0
	// Line 2587, Address: 0x177cbc, Func Offset: 0x1ac
	// Line 2588, Address: 0x177d00, Func Offset: 0x1f0
	// Line 2589, Address: 0x177d04, Func Offset: 0x1f4
	// Line 2590, Address: 0x177d10, Func Offset: 0x200
	// Line 2591, Address: 0x177d24, Func Offset: 0x214
	// Line 2592, Address: 0x177d28, Func Offset: 0x218
	// Line 2593, Address: 0x177d38, Func Offset: 0x228
	// Line 2595, Address: 0x177d40, Func Offset: 0x230
	// Line 2598, Address: 0x177d48, Func Offset: 0x238
	// Line 2600, Address: 0x177d54, Func Offset: 0x244
	// Line 2601, Address: 0x177dd0, Func Offset: 0x2c0
	// Line 2600, Address: 0x177dd4, Func Offset: 0x2c4
	// Line 2601, Address: 0x177dd8, Func Offset: 0x2c8
	// Line 2605, Address: 0x177dec, Func Offset: 0x2dc
	// Line 2603, Address: 0x177df4, Func Offset: 0x2e4
	// Line 2602, Address: 0x177df8, Func Offset: 0x2e8
	// Line 2603, Address: 0x177dfc, Func Offset: 0x2ec
	// Line 2607, Address: 0x177e00, Func Offset: 0x2f0
	// Line 2605, Address: 0x177e0c, Func Offset: 0x2fc
	// Line 2607, Address: 0x177e10, Func Offset: 0x300
	// Line 2605, Address: 0x177e14, Func Offset: 0x304
	// Line 2602, Address: 0x177e1c, Func Offset: 0x30c
	// Line 2607, Address: 0x177e20, Func Offset: 0x310
	// Line 2602, Address: 0x177e28, Func Offset: 0x318
	// Line 2603, Address: 0x177e30, Func Offset: 0x320
	// Line 2607, Address: 0x177e3c, Func Offset: 0x32c
	// Line 2608, Address: 0x177e50, Func Offset: 0x340
	// Line 2609, Address: 0x177e58, Func Offset: 0x348
	// Line 2610, Address: 0x177e70, Func Offset: 0x360
	// Line 2611, Address: 0x177e80, Func Offset: 0x370
	// Line 2613, Address: 0x177e94, Func Offset: 0x384
	// Line 2614, Address: 0x177ea0, Func Offset: 0x390
	// Line 2615, Address: 0x177ee4, Func Offset: 0x3d4
	// Line 2619, Address: 0x177ee8, Func Offset: 0x3d8
	// Func End, Address: 0x177f0c, Func Offset: 0x3fc
}

// 
// Start address: 0x177f10
int miscMapHandle(_anon1* work)
{
	int rtv;
	_enum_0 m_id;
	unsigned int trig;
	int stage;
	// Line 2628, Address: 0x177f10, Func Offset: 0
	// Line 2632, Address: 0x177f14, Func Offset: 0x4
	// Line 2628, Address: 0x177f18, Func Offset: 0x8
	// Line 2629, Address: 0x177f2c, Func Offset: 0x1c
	// Line 2628, Address: 0x177f30, Func Offset: 0x20
	// Line 2630, Address: 0x177f38, Func Offset: 0x28
	// Line 2632, Address: 0x177f3c, Func Offset: 0x2c
	// Line 2634, Address: 0x177f4c, Func Offset: 0x3c
	// Line 2635, Address: 0x177f58, Func Offset: 0x48
	// Line 2637, Address: 0x177f6c, Func Offset: 0x5c
	// Line 2638, Address: 0x177f78, Func Offset: 0x68
	// Line 2640, Address: 0x177f8c, Func Offset: 0x7c
	// Line 2643, Address: 0x177f98, Func Offset: 0x88
	// Line 2644, Address: 0x177fa0, Func Offset: 0x90
	// Line 2646, Address: 0x177fac, Func Offset: 0x9c
	// Line 2647, Address: 0x177fb4, Func Offset: 0xa4
	// Line 2648, Address: 0x177fbc, Func Offset: 0xac
	// Line 2649, Address: 0x177fc8, Func Offset: 0xb8
	// Line 2650, Address: 0x177fd4, Func Offset: 0xc4
	// Line 2653, Address: 0x177fe0, Func Offset: 0xd0
	// Line 2654, Address: 0x178000, Func Offset: 0xf0
	// Line 2657, Address: 0x178004, Func Offset: 0xf4
	// Line 2658, Address: 0x17800c, Func Offset: 0xfc
	// Line 2659, Address: 0x178010, Func Offset: 0x100
	// Line 2660, Address: 0x178018, Func Offset: 0x108
	// Line 2661, Address: 0x178024, Func Offset: 0x114
	// Line 2665, Address: 0x178028, Func Offset: 0x118
	// Line 2666, Address: 0x17802c, Func Offset: 0x11c
	// Func End, Address: 0x17804c, Func Offset: 0x13c
}

// 
// Start address: 0x178050
int miscMapChange(_anon1* work)
{
	int rtv;
	_enum_0 next_m_id;
	_enum_0 prev_m_id;
	int stage;
	int scene;
	float pos[4];
	// Line 2670, Address: 0x178050, Func Offset: 0
	// Line 2673, Address: 0x178054, Func Offset: 0x4
	// Line 2670, Address: 0x178058, Func Offset: 0x8
	// Line 2673, Address: 0x178074, Func Offset: 0x24
	// Line 2674, Address: 0x178078, Func Offset: 0x28
	// Line 2677, Address: 0x178080, Func Offset: 0x30
	// Line 2678, Address: 0x178084, Func Offset: 0x34
	// Line 2677, Address: 0x178088, Func Offset: 0x38
	// Line 2674, Address: 0x17808c, Func Offset: 0x3c
	// Line 2678, Address: 0x178090, Func Offset: 0x40
	// Line 2677, Address: 0x178098, Func Offset: 0x48
	// Line 2678, Address: 0x1780a4, Func Offset: 0x54
	// Line 2679, Address: 0x1780e4, Func Offset: 0x94
	// Line 2681, Address: 0x1780e8, Func Offset: 0x98
	// Line 2686, Address: 0x178104, Func Offset: 0xb4
	// Line 2681, Address: 0x178108, Func Offset: 0xb8
	// Line 2686, Address: 0x17810c, Func Offset: 0xbc
	// Line 2689, Address: 0x178154, Func Offset: 0x104
	// Line 2690, Address: 0x178158, Func Offset: 0x108
	// Line 2691, Address: 0x17817c, Func Offset: 0x12c
	// Line 2690, Address: 0x178180, Func Offset: 0x130
	// Line 2691, Address: 0x178184, Func Offset: 0x134
	// Line 2693, Address: 0x1781cc, Func Offset: 0x17c
	// Line 2694, Address: 0x1781d4, Func Offset: 0x184
	// Line 2695, Address: 0x1781d8, Func Offset: 0x188
	// Line 2697, Address: 0x1781e0, Func Offset: 0x190
	// Line 2699, Address: 0x178210, Func Offset: 0x1c0
	// Line 2700, Address: 0x17821c, Func Offset: 0x1cc
	// Line 2702, Address: 0x178228, Func Offset: 0x1d8
	// Line 2703, Address: 0x178234, Func Offset: 0x1e4
	// Line 2702, Address: 0x178238, Func Offset: 0x1e8
	// Line 2703, Address: 0x17823c, Func Offset: 0x1ec
	// Line 2704, Address: 0x178244, Func Offset: 0x1f4
	// Line 2706, Address: 0x178264, Func Offset: 0x214
	// Line 2708, Address: 0x178270, Func Offset: 0x220
	// Line 2709, Address: 0x178274, Func Offset: 0x224
	// Line 2710, Address: 0x178278, Func Offset: 0x228
	// Line 2712, Address: 0x178298, Func Offset: 0x248
	// Line 2714, Address: 0x1782a0, Func Offset: 0x250
	// Line 2715, Address: 0x1782a4, Func Offset: 0x254
	// Line 2717, Address: 0x1782a8, Func Offset: 0x258
	// Line 2718, Address: 0x1782b4, Func Offset: 0x264
	// Line 2720, Address: 0x1782d0, Func Offset: 0x280
	// Line 2721, Address: 0x1782d4, Func Offset: 0x284
	// Line 2724, Address: 0x1782e0, Func Offset: 0x290
	// Line 2725, Address: 0x1782e4, Func Offset: 0x294
	// Line 2727, Address: 0x1782e8, Func Offset: 0x298
	// Line 2728, Address: 0x1782f0, Func Offset: 0x2a0
	// Line 2731, Address: 0x17832c, Func Offset: 0x2dc
	// Line 2732, Address: 0x178330, Func Offset: 0x2e0
	// Line 2735, Address: 0x178338, Func Offset: 0x2e8
	// Line 2736, Address: 0x17833c, Func Offset: 0x2ec
	// Line 2735, Address: 0x178340, Func Offset: 0x2f0
	// Line 2738, Address: 0x178354, Func Offset: 0x304
	// Line 2735, Address: 0x178358, Func Offset: 0x308
	// Line 2738, Address: 0x17835c, Func Offset: 0x30c
	// Line 2741, Address: 0x1783a4, Func Offset: 0x354
	// Line 2742, Address: 0x1783a8, Func Offset: 0x358
	// Line 2743, Address: 0x1783b8, Func Offset: 0x368
	// Line 2746, Address: 0x1783bc, Func Offset: 0x36c
	// Line 2747, Address: 0x1783c0, Func Offset: 0x370
	// Line 2749, Address: 0x1783c8, Func Offset: 0x378
	// Line 2747, Address: 0x1783cc, Func Offset: 0x37c
	// Line 2750, Address: 0x1783d8, Func Offset: 0x388
	// Func End, Address: 0x1783f8, Func Offset: 0x3a8
}

// 
// Start address: 0x178400
int zoom_init(_anon1* work)
{
	_anon6* pl;
	int index;
	int v_scene;
	float pos[4];
	// Line 2754, Address: 0x178400, Func Offset: 0
	// Line 2761, Address: 0x178414, Func Offset: 0x14
	// Line 2763, Address: 0x178420, Func Offset: 0x20
	// Line 2762, Address: 0x178424, Func Offset: 0x24
	// Line 2763, Address: 0x178428, Func Offset: 0x28
	// Line 2765, Address: 0x178438, Func Offset: 0x38
	// Line 2764, Address: 0x17843c, Func Offset: 0x3c
	// Line 2765, Address: 0x178440, Func Offset: 0x40
	// Line 2766, Address: 0x17844c, Func Offset: 0x4c
	// Line 2770, Address: 0x178450, Func Offset: 0x50
	// Line 2766, Address: 0x178454, Func Offset: 0x54
	// Line 2767, Address: 0x178458, Func Offset: 0x58
	// Line 2768, Address: 0x178460, Func Offset: 0x60
	// Line 2771, Address: 0x178468, Func Offset: 0x68
	// Func End, Address: 0x17847c, Func Offset: 0x7c
}

// 
// Start address: 0x178480
int zoom_in(_anon1* work)
{
	int rtv;
	float ratio;
	float alpha;
	float dst_y;
	float dst_x;
	// Line 2775, Address: 0x178480, Func Offset: 0
	// Line 2782, Address: 0x1784a0, Func Offset: 0x20
	// Line 2784, Address: 0x1784ac, Func Offset: 0x2c
	// Line 2787, Address: 0x1784bc, Func Offset: 0x3c
	// Line 2788, Address: 0x1784e4, Func Offset: 0x64
	// Line 2790, Address: 0x178510, Func Offset: 0x90
	// Line 2791, Address: 0x17851c, Func Offset: 0x9c
	// Line 2792, Address: 0x178574, Func Offset: 0xf4
	// Line 2793, Address: 0x1785b4, Func Offset: 0x134
	// Line 2794, Address: 0x1785e4, Func Offset: 0x164
	// Line 2795, Address: 0x1785f0, Func Offset: 0x170
	// Line 2796, Address: 0x178644, Func Offset: 0x1c4
	// Line 2797, Address: 0x17868c, Func Offset: 0x20c
	// Line 2799, Address: 0x178690, Func Offset: 0x210
	// Line 2800, Address: 0x1786e8, Func Offset: 0x268
	// Line 2801, Address: 0x178728, Func Offset: 0x2a8
	// Line 2802, Address: 0x178758, Func Offset: 0x2d8
	// Line 2803, Address: 0x178760, Func Offset: 0x2e0
	// Line 2804, Address: 0x1787b4, Func Offset: 0x334
	// Line 2807, Address: 0x1787fc, Func Offset: 0x37c
	// Line 2810, Address: 0x178800, Func Offset: 0x380
	// Line 2812, Address: 0x17883c, Func Offset: 0x3bc
	// Line 2814, Address: 0x178844, Func Offset: 0x3c4
	// Line 2812, Address: 0x178848, Func Offset: 0x3c8
	// Line 2813, Address: 0x17884c, Func Offset: 0x3cc
	// Line 2812, Address: 0x178858, Func Offset: 0x3d8
	// Line 2813, Address: 0x17885c, Func Offset: 0x3dc
	// Line 2814, Address: 0x178870, Func Offset: 0x3f0
	// Line 2815, Address: 0x178884, Func Offset: 0x404
	// Line 2816, Address: 0x178898, Func Offset: 0x418
	// Line 2817, Address: 0x1788ec, Func Offset: 0x46c
	// Line 2818, Address: 0x178934, Func Offset: 0x4b4
	// Line 2817, Address: 0x178940, Func Offset: 0x4c0
	// Line 2818, Address: 0x178944, Func Offset: 0x4c4
	// Line 2817, Address: 0x178948, Func Offset: 0x4c8
	// Line 2818, Address: 0x178950, Func Offset: 0x4d0
	// Line 2819, Address: 0x178964, Func Offset: 0x4e4
	// Line 2821, Address: 0x17899c, Func Offset: 0x51c
	// Line 2823, Address: 0x1789a8, Func Offset: 0x528
	// Line 2825, Address: 0x1789ac, Func Offset: 0x52c
	// Line 2823, Address: 0x1789b0, Func Offset: 0x530
	// Line 2824, Address: 0x1789b4, Func Offset: 0x534
	// Line 2827, Address: 0x1789b8, Func Offset: 0x538
	// Line 2828, Address: 0x1789bc, Func Offset: 0x53c
	// Func End, Address: 0x1789dc, Func Offset: 0x55c
}

// 
// Start address: 0x1789e0
int zoom_handle(_anon1* work)
{
	int rtv;
	unsigned int pad;
	// Line 2832, Address: 0x1789e0, Func Offset: 0
	// Line 2838, Address: 0x1789e4, Func Offset: 0x4
	// Line 2832, Address: 0x1789e8, Func Offset: 0x8
	// Line 2833, Address: 0x1789fc, Func Offset: 0x1c
	// Line 2832, Address: 0x178a00, Func Offset: 0x20
	// Line 2836, Address: 0x178a04, Func Offset: 0x24
	// Line 2838, Address: 0x178a08, Func Offset: 0x28
	// Line 2839, Address: 0x178a28, Func Offset: 0x48
	// Line 2841, Address: 0x178a2c, Func Offset: 0x4c
	// Line 2844, Address: 0x178a38, Func Offset: 0x58
	// Line 2846, Address: 0x178a44, Func Offset: 0x64
	// Line 2847, Address: 0x178a50, Func Offset: 0x70
	// Line 2848, Address: 0x178a64, Func Offset: 0x84
	// Line 2849, Address: 0x178a9c, Func Offset: 0xbc
	// Line 2851, Address: 0x178acc, Func Offset: 0xec
	// Line 2852, Address: 0x178ad8, Func Offset: 0xf8
	// Line 2853, Address: 0x178ae4, Func Offset: 0x104
	// Line 2854, Address: 0x178af8, Func Offset: 0x118
	// Line 2855, Address: 0x178b44, Func Offset: 0x164
	// Line 2857, Address: 0x178b8c, Func Offset: 0x1ac
	// Line 2859, Address: 0x178b90, Func Offset: 0x1b0
	// Line 2860, Address: 0x178b9c, Func Offset: 0x1bc
	// Line 2861, Address: 0x178bb0, Func Offset: 0x1d0
	// Line 2862, Address: 0x178be8, Func Offset: 0x208
	// Line 2864, Address: 0x178c18, Func Offset: 0x238
	// Line 2865, Address: 0x178c20, Func Offset: 0x240
	// Line 2866, Address: 0x178c2c, Func Offset: 0x24c
	// Line 2867, Address: 0x178c40, Func Offset: 0x260
	// Line 2868, Address: 0x178c8c, Func Offset: 0x2ac
	// Line 2871, Address: 0x178cd4, Func Offset: 0x2f4
	// Line 2872, Address: 0x178cd8, Func Offset: 0x2f8
	// Line 2873, Address: 0x178cdc, Func Offset: 0x2fc
	// Func End, Address: 0x178cf8, Func Offset: 0x318
}

// 
// Start address: 0x178d00
int zoom_out(_anon1* work)
{
	int rtv;
	float ratio;
	float alpha;
	float src_y;
	float src_x;
	// Line 2877, Address: 0x178d00, Func Offset: 0
	// Line 2884, Address: 0x178d20, Func Offset: 0x20
	// Line 2886, Address: 0x178d2c, Func Offset: 0x2c
	// Line 2888, Address: 0x178d3c, Func Offset: 0x3c
	// Line 2889, Address: 0x178d48, Func Offset: 0x48
	// Line 2890, Address: 0x178d54, Func Offset: 0x54
	// Line 2893, Address: 0x178d58, Func Offset: 0x58
	// Line 2895, Address: 0x178d90, Func Offset: 0x90
	// Line 2896, Address: 0x178d94, Func Offset: 0x94
	// Line 2893, Address: 0x178d98, Func Offset: 0x98
	// Line 2896, Address: 0x178d9c, Func Offset: 0x9c
	// Line 2897, Address: 0x178da8, Func Offset: 0xa8
	// Line 2898, Address: 0x178dc0, Func Offset: 0xc0
	// Line 2899, Address: 0x178dd4, Func Offset: 0xd4
	// Line 2900, Address: 0x178e08, Func Offset: 0x108
	// Line 2901, Address: 0x178e2c, Func Offset: 0x12c
	// Line 2900, Address: 0x178e30, Func Offset: 0x130
	// Line 2901, Address: 0x178e34, Func Offset: 0x134
	// Line 2900, Address: 0x178e38, Func Offset: 0x138
	// Line 2901, Address: 0x178e48, Func Offset: 0x148
	// Line 2902, Address: 0x178e60, Func Offset: 0x160
	// Line 2904, Address: 0x178e98, Func Offset: 0x198
	// Line 2906, Address: 0x178ea4, Func Offset: 0x1a4
	// Line 2908, Address: 0x178ea8, Func Offset: 0x1a8
	// Line 2906, Address: 0x178eac, Func Offset: 0x1ac
	// Line 2907, Address: 0x178eb0, Func Offset: 0x1b0
	// Line 2909, Address: 0x178eb4, Func Offset: 0x1b4
	// Line 2911, Address: 0x178eb8, Func Offset: 0x1b8
	// Line 2912, Address: 0x178ebc, Func Offset: 0x1bc
	// Func End, Address: 0x178edc, Func Offset: 0x1dc
}

// 
// Start address: 0x178ee0
int miscMapZoomHandle(_anon1* work)
{
	int rtv;
	// Line 2916, Address: 0x178ee0, Func Offset: 0
	// Line 2920, Address: 0x178ee4, Func Offset: 0x4
	// Line 2916, Address: 0x178ee8, Func Offset: 0x8
	// Line 2919, Address: 0x178eec, Func Offset: 0xc
	// Line 2916, Address: 0x178ef0, Func Offset: 0x10
	// Line 2920, Address: 0x178ef4, Func Offset: 0x14
	// Line 2916, Address: 0x178ef8, Func Offset: 0x18
	// Line 2920, Address: 0x178efc, Func Offset: 0x1c
	// Line 2919, Address: 0x178f00, Func Offset: 0x20
	// Line 2920, Address: 0x178f14, Func Offset: 0x34
	// Line 2921, Address: 0x178f54, Func Offset: 0x74
	// Line 2922, Address: 0x178f58, Func Offset: 0x78
	// Line 2923, Address: 0x178f74, Func Offset: 0x94
	// Line 2922, Address: 0x178f78, Func Offset: 0x98
	// Line 2923, Address: 0x178f7c, Func Offset: 0x9c
	// Line 2926, Address: 0x178fc4, Func Offset: 0xe4
	// Line 2927, Address: 0x178fc8, Func Offset: 0xe8
	// Line 2928, Address: 0x178fe8, Func Offset: 0x108
	// Line 2927, Address: 0x178fec, Func Offset: 0x10c
	// Line 2928, Address: 0x178ff0, Func Offset: 0x110
	// Line 2930, Address: 0x17903c, Func Offset: 0x15c
	// Line 2932, Address: 0x179044, Func Offset: 0x164
	// Line 2933, Address: 0x179048, Func Offset: 0x168
	// Line 2934, Address: 0x179068, Func Offset: 0x188
	// Line 2933, Address: 0x17906c, Func Offset: 0x18c
	// Line 2934, Address: 0x179070, Func Offset: 0x190
	// Line 2936, Address: 0x1790bc, Func Offset: 0x1dc
	// Line 2937, Address: 0x1790c4, Func Offset: 0x1e4
	// Line 2938, Address: 0x1790c8, Func Offset: 0x1e8
	// Line 2939, Address: 0x1790d8, Func Offset: 0x1f8
	// Line 2942, Address: 0x1790dc, Func Offset: 0x1fc
	// Line 2943, Address: 0x1790e0, Func Offset: 0x200
	// Line 2945, Address: 0x1790e8, Func Offset: 0x208
	// Line 2943, Address: 0x1790ec, Func Offset: 0x20c
	// Line 2946, Address: 0x1790f8, Func Offset: 0x218
	// Func End, Address: 0x17910c, Func Offset: 0x22c
}

// 
// Start address: 0x179110
void draw_one_parts(_anon4* img, _anon2* parts, _anon8* tex, unsigned int cbp, unsigned int col)
{
	// Line 2952, Address: 0x179110, Func Offset: 0
	// Line 2953, Address: 0x17913c, Func Offset: 0x2c
	// Line 2954, Address: 0x179154, Func Offset: 0x44
	// Line 2955, Address: 0x179164, Func Offset: 0x54
	// Line 2956, Address: 0x17917c, Func Offset: 0x6c
	// Line 2957, Address: 0x179194, Func Offset: 0x84
	// Line 2958, Address: 0x1791a8, Func Offset: 0x98
	// Line 2959, Address: 0x1791c0, Func Offset: 0xb0
	// Line 2960, Address: 0x1791cc, Func Offset: 0xbc
	// Func End, Address: 0x1791ec, Func Offset: 0xdc
}

// 
// Start address: 0x1791f0
void miscMapDrawNameParts(_enum_0 m_id, int index, _anon8* tex, unsigned int cbp, unsigned int col)
{
	_anon7* info;
	int i;
	_anon18* mark;
	_anon4 img;
	unsigned char flag;
	// Line 2964, Address: 0x1791f0, Func Offset: 0
	// Line 2965, Address: 0x179218, Func Offset: 0x28
	// Line 2969, Address: 0x179220, Func Offset: 0x30
	// Line 2970, Address: 0x179230, Func Offset: 0x40
	// Line 2971, Address: 0x179240, Func Offset: 0x50
	// Line 2972, Address: 0x17924c, Func Offset: 0x5c
	// Line 2973, Address: 0x179260, Func Offset: 0x70
	// Line 2975, Address: 0x179274, Func Offset: 0x84
	// Line 2976, Address: 0x179294, Func Offset: 0xa4
	// Line 2977, Address: 0x1792ac, Func Offset: 0xbc
	// Line 2980, Address: 0x1792c0, Func Offset: 0xd0
	// Line 2984, Address: 0x1792c8, Func Offset: 0xd8
	// Line 2982, Address: 0x1792cc, Func Offset: 0xdc
	// Line 2984, Address: 0x1792d0, Func Offset: 0xe0
	// Line 2985, Address: 0x1792e4, Func Offset: 0xf4
	// Line 2987, Address: 0x1792fc, Func Offset: 0x10c
	// Line 2988, Address: 0x179310, Func Offset: 0x120
	// Line 2989, Address: 0x179320, Func Offset: 0x130
	// Line 2988, Address: 0x17932c, Func Offset: 0x13c
	// Line 2989, Address: 0x179330, Func Offset: 0x140
	// Line 2990, Address: 0x179340, Func Offset: 0x150
	// Line 2991, Address: 0x179384, Func Offset: 0x194
	// Line 2992, Address: 0x1793a0, Func Offset: 0x1b0
	// Line 2995, Address: 0x1793b0, Func Offset: 0x1c0
	// Line 2996, Address: 0x1793c4, Func Offset: 0x1d4
	// Line 2997, Address: 0x1793c8, Func Offset: 0x1d8
	// Func End, Address: 0x1793e8, Func Offset: 0x1f8
}

// 
// Start address: 0x1793f0
void miscMapDrawParts(_anon1* work, _anon8* tex, unsigned int cbp)
{
	int i;
	_anon2* parts;
	int start;
	int parts_num;
	int stage;
	int check_flag;
	int(*is_pass)(_anon1*, int)[13];
	// Line 3002, Address: 0x1793f0, Func Offset: 0
	// Line 3004, Address: 0x179428, Func Offset: 0x38
	// Line 3006, Address: 0x17942c, Func Offset: 0x3c
	// Line 3009, Address: 0x179434, Func Offset: 0x44
	// Line 3007, Address: 0x179438, Func Offset: 0x48
	// Line 3008, Address: 0x17943c, Func Offset: 0x4c
	// Line 3009, Address: 0x179440, Func Offset: 0x50
	// Line 3017, Address: 0x179444, Func Offset: 0x54
	// Line 3019, Address: 0x17945c, Func Offset: 0x6c
	// Line 3020, Address: 0x179478, Func Offset: 0x88
	// Line 3021, Address: 0x179494, Func Offset: 0xa4
	// Line 3024, Address: 0x1794b0, Func Offset: 0xc0
	// Line 3025, Address: 0x1794cc, Func Offset: 0xdc
	// Line 3027, Address: 0x1794d0, Func Offset: 0xe0
	// Line 3028, Address: 0x1794e0, Func Offset: 0xf0
	// Line 3029, Address: 0x1794e4, Func Offset: 0xf4
	// Line 3032, Address: 0x1794e8, Func Offset: 0xf8
	// Line 3033, Address: 0x1794ec, Func Offset: 0xfc
	// Line 3032, Address: 0x1794f0, Func Offset: 0x100
	// Line 3033, Address: 0x1794f4, Func Offset: 0x104
	// Line 3034, Address: 0x179510, Func Offset: 0x120
	// Line 3035, Address: 0x179528, Func Offset: 0x138
	// Line 3037, Address: 0x17953c, Func Offset: 0x14c
	// Line 3038, Address: 0x179554, Func Offset: 0x164
	// Line 3040, Address: 0x179558, Func Offset: 0x168
	// Line 3042, Address: 0x179568, Func Offset: 0x178
	// Func End, Address: 0x179598, Func Offset: 0x1a8
}

// 
// Start address: 0x1795a0
void miscMapDrawSubwayTrain(unsigned int col)
{
	_anon8* tex;
	unsigned int cbp;
	int i;
	_anon4 train;
	_anon29 d[2][2];
	unsigned char flag;
	// Line 3047, Address: 0x1795a0, Func Offset: 0
	// Line 3054, Address: 0x1795a4, Func Offset: 0x4
	// Line 3047, Address: 0x1795a8, Func Offset: 0x8
	// Line 3054, Address: 0x1795ac, Func Offset: 0xc
	// Line 3047, Address: 0x1795b0, Func Offset: 0x10
	// Line 3054, Address: 0x1795c0, Func Offset: 0x20
	// Line 3047, Address: 0x1795c4, Func Offset: 0x24
	// Line 3054, Address: 0x1795c8, Func Offset: 0x28
	// Line 3055, Address: 0x1795d4, Func Offset: 0x34
	// Line 3072, Address: 0x1795e8, Func Offset: 0x48
	// Line 3073, Address: 0x1795f8, Func Offset: 0x58
	// Line 3074, Address: 0x179604, Func Offset: 0x64
	// Line 3076, Address: 0x179610, Func Offset: 0x70
	// Line 3077, Address: 0x179624, Func Offset: 0x84
	// Line 3079, Address: 0x179644, Func Offset: 0xa4
	// Line 3080, Address: 0x179658, Func Offset: 0xb8
	// Line 3082, Address: 0x179670, Func Offset: 0xd0
	// Line 3083, Address: 0x179684, Func Offset: 0xe4
	// Line 3085, Address: 0x179688, Func Offset: 0xe8
	// Line 3087, Address: 0x17969c, Func Offset: 0xfc
	// Line 3088, Address: 0x1796a8, Func Offset: 0x108
	// Line 3091, Address: 0x1796c4, Func Offset: 0x124
	// Line 3094, Address: 0x179708, Func Offset: 0x168
	// Line 3095, Address: 0x179724, Func Offset: 0x184
	// Line 3096, Address: 0x179740, Func Offset: 0x1a0
	// Line 3097, Address: 0x179758, Func Offset: 0x1b8
	// Line 3098, Address: 0x179768, Func Offset: 0x1c8
	// Line 3100, Address: 0x179778, Func Offset: 0x1d8
	// Line 3103, Address: 0x179780, Func Offset: 0x1e0
	// Line 3104, Address: 0x179790, Func Offset: 0x1f0
	// Line 3107, Address: 0x1797ac, Func Offset: 0x20c
	// Line 3110, Address: 0x1797f0, Func Offset: 0x250
	// Line 3111, Address: 0x17980c, Func Offset: 0x26c
	// Line 3112, Address: 0x179828, Func Offset: 0x288
	// Line 3113, Address: 0x179840, Func Offset: 0x2a0
	// Line 3114, Address: 0x179850, Func Offset: 0x2b0
	// Line 3116, Address: 0x179860, Func Offset: 0x2c0
	// Func End, Address: 0x179880, Func Offset: 0x2e0
}

// 
// Start address: 0x179880
void miscMapDrawPartsSb(_anon1* work, _anon8* tex, unsigned int cbp)
{
	unsigned int col;
	// Line 3121, Address: 0x179880, Func Offset: 0
	// Line 3122, Address: 0x17988c, Func Offset: 0xc
	// Line 3124, Address: 0x179894, Func Offset: 0x14
	// Line 3125, Address: 0x1798a4, Func Offset: 0x24
	// Line 3128, Address: 0x1798b4, Func Offset: 0x34
	// Line 3129, Address: 0x1798cc, Func Offset: 0x4c
	// Line 3130, Address: 0x1798d4, Func Offset: 0x54
	// Line 3131, Address: 0x1798d8, Func Offset: 0x58
	// Line 3132, Address: 0x1798ec, Func Offset: 0x6c
	// Line 3134, Address: 0x1798f0, Func Offset: 0x70
	// Line 3137, Address: 0x1798f8, Func Offset: 0x78
	// Func End, Address: 0x179908, Func Offset: 0x88
}

// 
// Start address: 0x179910
void miscMapDrawMzHole(int pos_no, unsigned int col)
{
	_anon8* tex;
	unsigned int cbp;
	_anon4 hole;
	unsigned short xy[2][8];
	unsigned char flag;
	// Line 3142, Address: 0x179910, Func Offset: 0
	// Line 3153, Address: 0x179914, Func Offset: 0x4
	// Line 3142, Address: 0x179918, Func Offset: 0x8
	// Line 3153, Address: 0x179930, Func Offset: 0x20
	// Line 3154, Address: 0x179944, Func Offset: 0x34
	// Line 3159, Address: 0x179958, Func Offset: 0x48
	// Line 3160, Address: 0x179968, Func Offset: 0x58
	// Line 3163, Address: 0x179974, Func Offset: 0x64
	// Line 3164, Address: 0x179988, Func Offset: 0x78
	// Line 3166, Address: 0x1799a8, Func Offset: 0x98
	// Line 3167, Address: 0x1799bc, Func Offset: 0xac
	// Line 3169, Address: 0x1799d8, Func Offset: 0xc8
	// Line 3170, Address: 0x1799ec, Func Offset: 0xdc
	// Line 3171, Address: 0x1799f0, Func Offset: 0xe0
	// Line 3172, Address: 0x179a08, Func Offset: 0xf8
	// Line 3174, Address: 0x179a24, Func Offset: 0x114
	// Line 3175, Address: 0x179a40, Func Offset: 0x130
	// Line 3177, Address: 0x179a58, Func Offset: 0x148
	// Line 3179, Address: 0x179aec, Func Offset: 0x1dc
	// Line 3180, Address: 0x179afc, Func Offset: 0x1ec
	// Func End, Address: 0x179b18, Func Offset: 0x208
}

// 
// Start address: 0x179b20
void miscMapDrawMzPipe(int floor, int pos_no)
{
	_anon8* tex;
	unsigned int cbp;
	int is_draw;
	_anon4 pipe;
	unsigned short xy[2][8];
	unsigned char flag;
	// Line 3184, Address: 0x179b20, Func Offset: 0
	// Line 3195, Address: 0x179b24, Func Offset: 0x4
	// Line 3184, Address: 0x179b28, Func Offset: 0x8
	// Line 3195, Address: 0x179b44, Func Offset: 0x24
	// Line 3196, Address: 0x179b58, Func Offset: 0x38
	// Line 3201, Address: 0x179b6c, Func Offset: 0x4c
	// Line 3202, Address: 0x179b7c, Func Offset: 0x5c
	// Line 3205, Address: 0x179b8c, Func Offset: 0x6c
	// Line 3206, Address: 0x179ba0, Func Offset: 0x80
	// Line 3208, Address: 0x179bc0, Func Offset: 0xa0
	// Line 3210, Address: 0x179bd4, Func Offset: 0xb4
	// Line 3213, Address: 0x179be8, Func Offset: 0xc8
	// Line 3217, Address: 0x179bfc, Func Offset: 0xdc
	// Line 3219, Address: 0x179c10, Func Offset: 0xf0
	// Line 3220, Address: 0x179c30, Func Offset: 0x110
	// Line 3223, Address: 0x179c4c, Func Offset: 0x12c
	// Line 3226, Address: 0x179c58, Func Offset: 0x138
	// Line 3227, Address: 0x179c78, Func Offset: 0x158
	// Line 3231, Address: 0x179c94, Func Offset: 0x174
	// Line 3232, Address: 0x179ca0, Func Offset: 0x180
	// Line 3236, Address: 0x179cb4, Func Offset: 0x194
	// Line 3237, Address: 0x179cd8, Func Offset: 0x1b8
	// Line 3240, Address: 0x179cf4, Func Offset: 0x1d4
	// Line 3242, Address: 0x179cf8, Func Offset: 0x1d8
	// Line 3243, Address: 0x179d00, Func Offset: 0x1e0
	// Line 3245, Address: 0x179d14, Func Offset: 0x1f4
	// Line 3246, Address: 0x179d30, Func Offset: 0x210
	// Line 3248, Address: 0x179d48, Func Offset: 0x228
	// Line 3250, Address: 0x179ddc, Func Offset: 0x2bc
	// Line 3251, Address: 0x179dec, Func Offset: 0x2cc
	// Line 3252, Address: 0x179df0, Func Offset: 0x2d0
	// Func End, Address: 0x179e10, Func Offset: 0x2f0
}

// 
// Start address: 0x179e10
void miscMapDrawPartsMzPeep(_anon1* work, _anon8* tex, unsigned int cbp)
{
	int floor;
	int i;
	_anon2* parts;
	unsigned char* prison;
	int virtual_scene;
	int pos_no;
	// Line 3256, Address: 0x179e10, Func Offset: 0
	// Line 3263, Address: 0x179e14, Func Offset: 0x4
	// Line 3256, Address: 0x179e18, Func Offset: 0x8
	// Line 3263, Address: 0x179e44, Func Offset: 0x34
	// Line 3264, Address: 0x179e6c, Func Offset: 0x5c
	// Line 3266, Address: 0x179e70, Func Offset: 0x60
	// Line 3265, Address: 0x179e74, Func Offset: 0x64
	// Line 3267, Address: 0x179e78, Func Offset: 0x68
	// Line 3270, Address: 0x179e80, Func Offset: 0x70
	// Line 3269, Address: 0x179e84, Func Offset: 0x74
	// Line 3271, Address: 0x179e88, Func Offset: 0x78
	// Line 3274, Address: 0x179e90, Func Offset: 0x80
	// Line 3273, Address: 0x179e94, Func Offset: 0x84
	// Line 3274, Address: 0x179e98, Func Offset: 0x88
	// Line 3276, Address: 0x179e9c, Func Offset: 0x8c
	// Line 3278, Address: 0x179ea0, Func Offset: 0x90
	// Line 3279, Address: 0x179eb4, Func Offset: 0xa4
	// Line 3282, Address: 0x179eb8, Func Offset: 0xa8
	// Line 3283, Address: 0x179ecc, Func Offset: 0xbc
	// Line 3284, Address: 0x179ed8, Func Offset: 0xc8
	// Line 3287, Address: 0x179eec, Func Offset: 0xdc
	// Line 3288, Address: 0x179ef0, Func Offset: 0xe0
	// Line 3289, Address: 0x179ef8, Func Offset: 0xe8
	// Line 3292, Address: 0x179f0c, Func Offset: 0xfc
	// Line 3293, Address: 0x179f1c, Func Offset: 0x10c
	// Line 3294, Address: 0x179f28, Func Offset: 0x118
	// Line 3296, Address: 0x179f34, Func Offset: 0x124
	// Line 3299, Address: 0x179f38, Func Offset: 0x128
	// Line 3301, Address: 0x179f48, Func Offset: 0x138
	// Func End, Address: 0x179f70, Func Offset: 0x160
}

// 
// Start address: 0x179f70
void miscMapDrawPartsMz(_anon1* work, _anon8* tex, unsigned int cbp)
{
	int i;
	_anon2* parts0;
	int start;
	int parts_num;
	int stage;
	int check_flag;
	_anon2* parts;
	int virtual_scene;
	int floor;
	int pos_no;
	int virtual_scene;
	int floor;
	int pos_no;
	int floor;
	int scene;
	// Line 3305, Address: 0x179f70, Func Offset: 0
	// Line 3307, Address: 0x179fa8, Func Offset: 0x38
	// Line 3309, Address: 0x179fac, Func Offset: 0x3c
	// Line 3310, Address: 0x179fb4, Func Offset: 0x44
	// Line 3312, Address: 0x179fb8, Func Offset: 0x48
	// Line 3310, Address: 0x179fc0, Func Offset: 0x50
	// Line 3311, Address: 0x179fc4, Func Offset: 0x54
	// Line 3322, Address: 0x179fc8, Func Offset: 0x58
	// Line 3324, Address: 0x179fd0, Func Offset: 0x60
	// Line 3326, Address: 0x179fe8, Func Offset: 0x78
	// Line 3327, Address: 0x17a000, Func Offset: 0x90
	// Line 3330, Address: 0x17a020, Func Offset: 0xb0
	// Line 3332, Address: 0x17a030, Func Offset: 0xc0
	// Line 3333, Address: 0x17a038, Func Offset: 0xc8
	// Line 3336, Address: 0x17a04c, Func Offset: 0xdc
	// Line 3337, Address: 0x17a060, Func Offset: 0xf0
	// Line 3338, Address: 0x17a068, Func Offset: 0xf8
	// Line 3339, Address: 0x17a074, Func Offset: 0x104
	// Line 3341, Address: 0x17a084, Func Offset: 0x114
	// Line 3343, Address: 0x17a090, Func Offset: 0x120
	// Line 3344, Address: 0x17a094, Func Offset: 0x124
	// Line 3346, Address: 0x17a098, Func Offset: 0x128
	// Line 3347, Address: 0x17a0a0, Func Offset: 0x130
	// Line 3350, Address: 0x17a0b8, Func Offset: 0x148
	// Line 3351, Address: 0x17a0d4, Func Offset: 0x164
	// Line 3353, Address: 0x17a0d8, Func Offset: 0x168
	// Line 3355, Address: 0x17a0e8, Func Offset: 0x178
	// Line 3356, Address: 0x17a0ec, Func Offset: 0x17c
	// Line 3359, Address: 0x17a0f0, Func Offset: 0x180
	// Line 3360, Address: 0x17a0f4, Func Offset: 0x184
	// Line 3359, Address: 0x17a0f8, Func Offset: 0x188
	// Line 3360, Address: 0x17a0fc, Func Offset: 0x18c
	// Line 3361, Address: 0x17a118, Func Offset: 0x1a8
	// Line 3364, Address: 0x17a134, Func Offset: 0x1c4
	// Line 3366, Address: 0x17a144, Func Offset: 0x1d4
	// Line 3367, Address: 0x17a14c, Func Offset: 0x1dc
	// Line 3370, Address: 0x17a160, Func Offset: 0x1f0
	// Line 3371, Address: 0x17a174, Func Offset: 0x204
	// Line 3372, Address: 0x17a17c, Func Offset: 0x20c
	// Line 3373, Address: 0x17a188, Func Offset: 0x218
	// Line 3375, Address: 0x17a194, Func Offset: 0x224
	// Line 3377, Address: 0x17a1a0, Func Offset: 0x230
	// Line 3378, Address: 0x17a1a4, Func Offset: 0x234
	// Line 3380, Address: 0x17a1a8, Func Offset: 0x238
	// Line 3381, Address: 0x17a1b0, Func Offset: 0x240
	// Line 3382, Address: 0x17a1c4, Func Offset: 0x254
	// Line 3384, Address: 0x17a1c8, Func Offset: 0x258
	// Line 3387, Address: 0x17a1e0, Func Offset: 0x270
	// Line 3394, Address: 0x17a1f0, Func Offset: 0x280
	// Line 3391, Address: 0x17a1f8, Func Offset: 0x288
	// Line 3394, Address: 0x17a1fc, Func Offset: 0x28c
	// Line 3395, Address: 0x17a220, Func Offset: 0x2b0
	// Line 3396, Address: 0x17a22c, Func Offset: 0x2bc
	// Line 3397, Address: 0x17a23c, Func Offset: 0x2cc
	// Line 3400, Address: 0x17a248, Func Offset: 0x2d8
	// Line 3403, Address: 0x17a258, Func Offset: 0x2e8
	// Line 3404, Address: 0x17a26c, Func Offset: 0x2fc
	// Line 3406, Address: 0x17a280, Func Offset: 0x310
	// Line 3408, Address: 0x17a290, Func Offset: 0x320
	// Line 3410, Address: 0x17a2a0, Func Offset: 0x330
	// Line 3411, Address: 0x17a2b4, Func Offset: 0x344
	// Line 3413, Address: 0x17a2c4, Func Offset: 0x354
	// Line 3416, Address: 0x17a2d8, Func Offset: 0x368
	// Line 3421, Address: 0x17a2e8, Func Offset: 0x378
	// Func End, Address: 0x17a318, Func Offset: 0x3a8
}

// 
// Start address: 0x17a320
void miscMapDrawPartsHs(_anon1* work, _anon8* tex, unsigned int cbp)
{
	int i;
	_anon2* parts0;
	int start;
	int parts_num;
	int stage;
	int check_flag;
	_anon2* parts;
	int virtual_scene;
	int virtual_scene;
	// Line 3425, Address: 0x17a320, Func Offset: 0
	// Line 3427, Address: 0x17a358, Func Offset: 0x38
	// Line 3429, Address: 0x17a35c, Func Offset: 0x3c
	// Line 3432, Address: 0x17a364, Func Offset: 0x44
	// Line 3430, Address: 0x17a368, Func Offset: 0x48
	// Line 3431, Address: 0x17a36c, Func Offset: 0x4c
	// Line 3432, Address: 0x17a370, Func Offset: 0x50
	// Line 3441, Address: 0x17a374, Func Offset: 0x54
	// Line 3443, Address: 0x17a38c, Func Offset: 0x6c
	// Line 3444, Address: 0x17a3a8, Func Offset: 0x88
	// Line 3445, Address: 0x17a3c4, Func Offset: 0xa4
	// Line 3455, Address: 0x17a3cc, Func Offset: 0xac
	// Line 3458, Address: 0x17a3f4, Func Offset: 0xd4
	// Line 3459, Address: 0x17a3fc, Func Offset: 0xdc
	// Line 3460, Address: 0x17a414, Func Offset: 0xf4
	// Line 3463, Address: 0x17a418, Func Offset: 0xf8
	// Line 3464, Address: 0x17a434, Func Offset: 0x114
	// Line 3466, Address: 0x17a438, Func Offset: 0x118
	// Line 3468, Address: 0x17a448, Func Offset: 0x128
	// Line 3469, Address: 0x17a44c, Func Offset: 0x12c
	// Line 3472, Address: 0x17a450, Func Offset: 0x130
	// Line 3473, Address: 0x17a454, Func Offset: 0x134
	// Line 3472, Address: 0x17a458, Func Offset: 0x138
	// Line 3473, Address: 0x17a45c, Func Offset: 0x13c
	// Line 3474, Address: 0x17a478, Func Offset: 0x158
	// Line 3475, Address: 0x17a490, Func Offset: 0x170
	// Line 3485, Address: 0x17a498, Func Offset: 0x178
	// Line 3488, Address: 0x17a4c0, Func Offset: 0x1a0
	// Line 3489, Address: 0x17a4c8, Func Offset: 0x1a8
	// Line 3490, Address: 0x17a4dc, Func Offset: 0x1bc
	// Line 3492, Address: 0x17a4e0, Func Offset: 0x1c0
	// Line 3495, Address: 0x17a4f8, Func Offset: 0x1d8
	// Line 3497, Address: 0x17a508, Func Offset: 0x1e8
	// Func End, Address: 0x17a538, Func Offset: 0x218
}

// 
// Start address: 0x17a540
void disp_mes_zoom(int x, int y, float ratio)
{
	int mes_id;
	// Line 3501, Address: 0x17a540, Func Offset: 0
	// Line 3502, Address: 0x17a560, Func Offset: 0x20
	// Line 3504, Address: 0x17a578, Func Offset: 0x38
	// Line 3505, Address: 0x17a580, Func Offset: 0x40
	// Line 3506, Address: 0x17a5a0, Func Offset: 0x60
	// Line 3507, Address: 0x17a5b4, Func Offset: 0x74
	// Line 3508, Address: 0x17a5c8, Func Offset: 0x88
	// Line 3509, Address: 0x17a5d0, Func Offset: 0x90
	// Line 3510, Address: 0x17a5d8, Func Offset: 0x98
	// Func End, Address: 0x17a5f4, Func Offset: 0xb4
}

// 
// Start address: 0x17a600
void disp_mes_goto_memo(int x, int y, float ratio)
{
	int mes_id;
	// Line 3514, Address: 0x17a600, Func Offset: 0
	// Line 3515, Address: 0x17a620, Func Offset: 0x20
	// Line 3517, Address: 0x17a638, Func Offset: 0x38
	// Line 3518, Address: 0x17a640, Func Offset: 0x40
	// Line 3519, Address: 0x17a660, Func Offset: 0x60
	// Line 3520, Address: 0x17a674, Func Offset: 0x74
	// Line 3521, Address: 0x17a688, Func Offset: 0x88
	// Line 3522, Address: 0x17a690, Func Offset: 0x90
	// Line 3523, Address: 0x17a698, Func Offset: 0x98
	// Func End, Address: 0x17a6b4, Func Offset: 0xb4
}

// 
// Start address: 0x17a6c0
void OneMarkDraw(float cx, float cy, int kind, int alpha, float rot, float scale, _anon8* tex, unsigned int cbp)
{
	int disp_flag;
	unsigned int col;
	int index;
	float uv[4];
	_anon4 img;
	float tex_uv[4][10];
	unsigned char flag;
	// Line 3527, Address: 0x17a6c0, Func Offset: 0
	// Line 3546, Address: 0x17a6c4, Func Offset: 0x4
	// Line 3527, Address: 0x17a6c8, Func Offset: 0x8
	// Line 3530, Address: 0x17a6ec, Func Offset: 0x2c
	// Line 3527, Address: 0x17a6f0, Func Offset: 0x30
	// Line 3546, Address: 0x17a704, Func Offset: 0x44
	// Line 3547, Address: 0x17a71c, Func Offset: 0x5c
	// Line 3549, Address: 0x17a72c, Func Offset: 0x6c
	// Line 3550, Address: 0x17a740, Func Offset: 0x80
	// Line 3551, Address: 0x17a758, Func Offset: 0x98
	// Line 3552, Address: 0x17a76c, Func Offset: 0xac
	// Line 3553, Address: 0x17a780, Func Offset: 0xc0
	// Line 3555, Address: 0x17a7a0, Func Offset: 0xe0
	// Line 3556, Address: 0x17a7b4, Func Offset: 0xf4
	// Line 3558, Address: 0x17a7b8, Func Offset: 0xf8
	// Line 3560, Address: 0x17a7c0, Func Offset: 0x100
	// Line 3565, Address: 0x17a7d0, Func Offset: 0x110
	// Line 3562, Address: 0x17a7e0, Func Offset: 0x120
	// Line 3565, Address: 0x17a7e4, Func Offset: 0x124
	// Line 3567, Address: 0x17a7ec, Func Offset: 0x12c
	// Line 3568, Address: 0x17a7f8, Func Offset: 0x138
	// Line 3569, Address: 0x17a808, Func Offset: 0x148
	// Line 3570, Address: 0x17a818, Func Offset: 0x158
	// Line 3572, Address: 0x17a830, Func Offset: 0x170
	// Line 3574, Address: 0x17a84c, Func Offset: 0x18c
	// Line 3575, Address: 0x17a888, Func Offset: 0x1c8
	// Line 3576, Address: 0x17a8a4, Func Offset: 0x1e4
	// Line 3577, Address: 0x17a8bc, Func Offset: 0x1fc
	// Line 3578, Address: 0x17a8d8, Func Offset: 0x218
	// Line 3579, Address: 0x17a8e8, Func Offset: 0x228
	// Line 3582, Address: 0x17a8f8, Func Offset: 0x238
	// Line 3583, Address: 0x17a900, Func Offset: 0x240
	// Line 3584, Address: 0x17a90c, Func Offset: 0x24c
	// Line 3585, Address: 0x17a910, Func Offset: 0x250
	// Func End, Address: 0x17a940, Func Offset: 0x280
}

// 
// Start address: 0x17a940
int GetMarkKind(_anon5* stat, int is_vertical)
{
	int kind;
	// Line 3592, Address: 0x17a940, Func Offset: 0
	// Line 3593, Address: 0x17a960, Func Offset: 0x20
	// Line 3595, Address: 0x17a974, Func Offset: 0x34
	// Line 3597, Address: 0x17a97c, Func Offset: 0x3c
	// Line 3601, Address: 0x17a988, Func Offset: 0x48
	// Line 3602, Address: 0x17a990, Func Offset: 0x50
	// Line 3604, Address: 0x17a9a0, Func Offset: 0x60
	// Line 3605, Address: 0x17a9b0, Func Offset: 0x70
	// Line 3607, Address: 0x17a9b8, Func Offset: 0x78
	// Line 3611, Address: 0x17a9c0, Func Offset: 0x80
	// Line 3613, Address: 0x17a9c8, Func Offset: 0x88
	// Line 3615, Address: 0x17a9d0, Func Offset: 0x90
	// Line 3620, Address: 0x17a9d8, Func Offset: 0x98
	// Line 3621, Address: 0x17a9e0, Func Offset: 0xa0
	// Line 3622, Address: 0x17a9f0, Func Offset: 0xb0
	// Line 3624, Address: 0x17a9f8, Func Offset: 0xb8
	// Line 3626, Address: 0x17aa00, Func Offset: 0xc0
	// Line 3629, Address: 0x17aa04, Func Offset: 0xc4
	// Line 3632, Address: 0x17aa08, Func Offset: 0xc8
	// Func End, Address: 0x17aa10, Func Offset: 0xd0
}

// 
// Start address: 0x17aa10
void OneHoleDraw(float cx, float cy, float scale, _anon8* tex, unsigned int cbp)
{
	float hole_uv[4];
	_anon4 img;
	unsigned char flag;
	// Line 3636, Address: 0x17aa10, Func Offset: 0
	// Line 3640, Address: 0x17aa14, Func Offset: 0x4
	// Line 3636, Address: 0x17aa18, Func Offset: 0x8
	// Line 3640, Address: 0x17aa1c, Func Offset: 0xc
	// Line 3636, Address: 0x17aa20, Func Offset: 0x10
	// Line 3640, Address: 0x17aa24, Func Offset: 0x14
	// Line 3636, Address: 0x17aa28, Func Offset: 0x18
	// Line 3642, Address: 0x17aa2c, Func Offset: 0x1c
	// Line 3636, Address: 0x17aa30, Func Offset: 0x20
	// Line 3640, Address: 0x17aa44, Func Offset: 0x34
	// Line 3642, Address: 0x17aa54, Func Offset: 0x44
	// Line 3643, Address: 0x17aa60, Func Offset: 0x50
	// Line 3645, Address: 0x17aa70, Func Offset: 0x60
	// Line 3646, Address: 0x17aa84, Func Offset: 0x74
	// Line 3647, Address: 0x17aa9c, Func Offset: 0x8c
	// Line 3648, Address: 0x17aab0, Func Offset: 0xa0
	// Line 3650, Address: 0x17aad0, Func Offset: 0xc0
	// Line 3651, Address: 0x17aae4, Func Offset: 0xd4
	// Line 3653, Address: 0x17ab04, Func Offset: 0xf4
	// Line 3655, Address: 0x17ab18, Func Offset: 0x108
	// Line 3656, Address: 0x17ab38, Func Offset: 0x128
	// Line 3657, Address: 0x17ab74, Func Offset: 0x164
	// Line 3658, Address: 0x17ab90, Func Offset: 0x180
	// Line 3659, Address: 0x17aba8, Func Offset: 0x198
	// Line 3660, Address: 0x17abb8, Func Offset: 0x1a8
	// Line 3661, Address: 0x17abc8, Func Offset: 0x1b8
	// Line 3662, Address: 0x17abd8, Func Offset: 0x1c8
	// Func End, Address: 0x17abf8, Func Offset: 0x1e8
}

// 
// Start address: 0x17ac00
_anon9* get_param(int door_no, _anon22* set)
{
	int i;
	_anon9* parts;
	// Line 3670, Address: 0x17ac00, Func Offset: 0
	// Line 3668, Address: 0x17ac04, Func Offset: 0x4
	// Line 3670, Address: 0x17ac08, Func Offset: 0x8
	// Line 3671, Address: 0x17ac18, Func Offset: 0x18
	// Line 3672, Address: 0x17ac24, Func Offset: 0x24
	// Line 3673, Address: 0x17ac2c, Func Offset: 0x2c
	// Line 3675, Address: 0x17ac30, Func Offset: 0x30
	// Line 3676, Address: 0x17ac48, Func Offset: 0x48
	// Line 3677, Address: 0x17ac50, Func Offset: 0x50
	// Func End, Address: 0x17ac58, Func Offset: 0x58
}

// 
// Start address: 0x17ac60
void miscMapMarkDraw(_anon1* work)
{
	_anon8* tex;
	unsigned int cbp;
	_anon22* parts_set;
	int stage;
	int i;
	_anon9* parts;
	_anon25* hole;
	_anon5* stat;
	int kind;
	float rot;
	float scale;
	_anon9* v_parts;
	int d;
	_anon19* mark;
	// Line 3681, Address: 0x17ac60, Func Offset: 0
	// Line 3682, Address: 0x17ac64, Func Offset: 0x4
	// Line 3681, Address: 0x17ac68, Func Offset: 0x8
	// Line 3682, Address: 0x17ac6c, Func Offset: 0xc
	// Line 3681, Address: 0x17ac70, Func Offset: 0x10
	// Line 3682, Address: 0x17aca0, Func Offset: 0x40
	// Line 3683, Address: 0x17acac, Func Offset: 0x4c
	// Line 3684, Address: 0x17acbc, Func Offset: 0x5c
	// Line 3685, Address: 0x17acc0, Func Offset: 0x60
	// Line 3684, Address: 0x17acc8, Func Offset: 0x68
	// Line 3688, Address: 0x17accc, Func Offset: 0x6c
	// Line 3689, Address: 0x17acd4, Func Offset: 0x74
	// Line 3690, Address: 0x17acd8, Func Offset: 0x78
	// Line 3692, Address: 0x17ace0, Func Offset: 0x80
	// Line 3694, Address: 0x17ace8, Func Offset: 0x88
	// Line 3695, Address: 0x17acf8, Func Offset: 0x98
	// Line 3696, Address: 0x17ad08, Func Offset: 0xa8
	// Line 3698, Address: 0x17ad10, Func Offset: 0xb0
	// Line 3699, Address: 0x17ad1c, Func Offset: 0xbc
	// Line 3701, Address: 0x17ad28, Func Offset: 0xc8
	// Line 3700, Address: 0x17ad2c, Func Offset: 0xcc
	// Line 3701, Address: 0x17ad30, Func Offset: 0xd0
	// Line 3702, Address: 0x17ad74, Func Offset: 0x114
	// Line 3704, Address: 0x17ad78, Func Offset: 0x118
	// Line 3705, Address: 0x17ad80, Func Offset: 0x120
	// Line 3706, Address: 0x17ad98, Func Offset: 0x138
	// Line 3707, Address: 0x17ada4, Func Offset: 0x144
	// Line 3709, Address: 0x17adb4, Func Offset: 0x154
	// Line 3711, Address: 0x17adb8, Func Offset: 0x158
	// Line 3712, Address: 0x17adc4, Func Offset: 0x164
	// Line 3713, Address: 0x17add4, Func Offset: 0x174
	// Line 3716, Address: 0x17ae08, Func Offset: 0x1a8
	// Line 3718, Address: 0x17ae40, Func Offset: 0x1e0
	// Line 3720, Address: 0x17ae4c, Func Offset: 0x1ec
	// Line 3721, Address: 0x17ae5c, Func Offset: 0x1fc
	// Line 3724, Address: 0x17ae90, Func Offset: 0x230
	// Line 3730, Address: 0x17aec8, Func Offset: 0x268
	// Line 3786, Address: 0x17aedc, Func Offset: 0x27c
	// Line 3787, Address: 0x17aee0, Func Offset: 0x280
	// Line 3790, Address: 0x17aee8, Func Offset: 0x288
	// Line 3788, Address: 0x17aeec, Func Offset: 0x28c
	// Line 3790, Address: 0x17aef0, Func Offset: 0x290
	// Line 3791, Address: 0x17af00, Func Offset: 0x2a0
	// Line 3793, Address: 0x17af50, Func Offset: 0x2f0
	// Line 3796, Address: 0x17afc0, Func Offset: 0x360
	// Line 3798, Address: 0x17afd4, Func Offset: 0x374
	// Line 3799, Address: 0x17afd8, Func Offset: 0x378
	// Func End, Address: 0x17b010, Func Offset: 0x3b0
}

// 
// Start address: 0x17b010
void miscMapDraw(_anon1* work)
{
	_anon8* tex;
	unsigned int cbp;
	int stage;
	int floor;
	void(*draw_parts)(_anon1*, _anon8*, unsigned int)[13];
	// Line 3803, Address: 0x17b010, Func Offset: 0
	// Line 3821, Address: 0x17b014, Func Offset: 0x4
	// Line 3803, Address: 0x17b018, Func Offset: 0x8
	// Line 3821, Address: 0x17b034, Func Offset: 0x24
	// Line 3822, Address: 0x17b038, Func Offset: 0x28
	// Line 3825, Address: 0x17b040, Func Offset: 0x30
	// Line 3834, Address: 0x17b04c, Func Offset: 0x3c
	// Line 3835, Address: 0x17b060, Func Offset: 0x50
	// Line 3837, Address: 0x17b074, Func Offset: 0x64
	// Line 3838, Address: 0x17b08c, Func Offset: 0x7c
	// Line 3840, Address: 0x17b0a0, Func Offset: 0x90
	// Line 3843, Address: 0x17b0ac, Func Offset: 0x9c
	// Line 3844, Address: 0x17b0b8, Func Offset: 0xa8
	// Line 3846, Address: 0x17b0cc, Func Offset: 0xbc
	// Line 3847, Address: 0x17b0e4, Func Offset: 0xd4
	// Line 3850, Address: 0x17b0f8, Func Offset: 0xe8
	// Line 3853, Address: 0x17b11c, Func Offset: 0x10c
	// Line 3856, Address: 0x17b124, Func Offset: 0x114
	// Line 3857, Address: 0x17b130, Func Offset: 0x120
	// Line 3861, Address: 0x17b138, Func Offset: 0x128
	// Line 3862, Address: 0x17b144, Func Offset: 0x134
	// Line 3863, Address: 0x17b14c, Func Offset: 0x13c
	// Line 3866, Address: 0x17b150, Func Offset: 0x140
	// Line 3869, Address: 0x17b15c, Func Offset: 0x14c
	// Line 3870, Address: 0x17b168, Func Offset: 0x158
	// Line 3872, Address: 0x17b170, Func Offset: 0x160
	// Line 3873, Address: 0x17b17c, Func Offset: 0x16c
	// Line 3874, Address: 0x17b184, Func Offset: 0x174
	// Line 3876, Address: 0x17b188, Func Offset: 0x178
	// Line 3877, Address: 0x17b1a8, Func Offset: 0x198
	// Line 3879, Address: 0x17b1c0, Func Offset: 0x1b0
	// Line 3883, Address: 0x17b1d0, Func Offset: 0x1c0
	// Line 3884, Address: 0x17b1d8, Func Offset: 0x1c8
	// Line 3885, Address: 0x17b1e0, Func Offset: 0x1d0
	// Line 3886, Address: 0x17b1e8, Func Offset: 0x1d8
	// Line 3887, Address: 0x17b1f0, Func Offset: 0x1e0
	// Line 3892, Address: 0x17b1f8, Func Offset: 0x1e8
	// Line 3893, Address: 0x17b21c, Func Offset: 0x20c
	// Line 3894, Address: 0x17b224, Func Offset: 0x214
	// Line 3895, Address: 0x17b228, Func Offset: 0x218
	// Func End, Address: 0x17b248, Func Offset: 0x238
}

// 
// Start address: 0x17b250
void miscMapCaptureDraw(float cx, float cy, float scale)
{
	float w;
	float h;
	unsigned int addr;
	unsigned long tex0;
	void* pk;
	int x0;
	int y0;
	int x1;
	int y1;
	int u0;
	int v0;
	int u1;
	int v1;
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
	// Line 3902, Address: 0x17b250, Func Offset: 0
	// Line 3903, Address: 0x17b294, Func Offset: 0x44
	// Line 3904, Address: 0x17b2a8, Func Offset: 0x58
	// Line 3905, Address: 0x17b2bc, Func Offset: 0x6c
	// Line 3909, Address: 0x17b2c4, Func Offset: 0x74
	// Line 3911, Address: 0x17b2d0, Func Offset: 0x80
	// Line 3912, Address: 0x17b2e8, Func Offset: 0x98
	// Line 3916, Address: 0x17b2fc, Func Offset: 0xac
	// Line 3922, Address: 0x17b310, Func Offset: 0xc0
	// Line 3917, Address: 0x17b314, Func Offset: 0xc4
	// Line 3916, Address: 0x17b31c, Func Offset: 0xcc
	// Line 3918, Address: 0x17b320, Func Offset: 0xd0
	// Line 3917, Address: 0x17b32c, Func Offset: 0xdc
	// Line 3919, Address: 0x17b330, Func Offset: 0xe0
	// Line 3918, Address: 0x17b334, Func Offset: 0xe4
	// Line 3919, Address: 0x17b33c, Func Offset: 0xec
	// Line 3917, Address: 0x17b344, Func Offset: 0xf4
	// Line 3919, Address: 0x17b348, Func Offset: 0xf8
	// Line 3917, Address: 0x17b350, Func Offset: 0x100
	// Line 3918, Address: 0x17b354, Func Offset: 0x104
	// Line 3919, Address: 0x17b358, Func Offset: 0x108
	// Line 3916, Address: 0x17b35c, Func Offset: 0x10c
	// Line 3917, Address: 0x17b360, Func Offset: 0x110
	// Line 3918, Address: 0x17b364, Func Offset: 0x114
	// Line 3919, Address: 0x17b368, Func Offset: 0x118
	// Line 3923, Address: 0x17b36c, Func Offset: 0x11c
	// Line 3924, Address: 0x17b388, Func Offset: 0x138
	// Line 3926, Address: 0x17b3a4, Func Offset: 0x154
	// Line 3927, Address: 0x17b3ac, Func Offset: 0x15c
	// Line 3928, Address: 0x17b3bc, Func Offset: 0x16c
	// Line 3929, Address: 0x17b3c4, Func Offset: 0x174
	// Line 3931, Address: 0x17b3d0, Func Offset: 0x180
	// Line 3936, Address: 0x17b3d4, Func Offset: 0x184
	// Line 3931, Address: 0x17b3d8, Func Offset: 0x188
	// Line 3939, Address: 0x17b3dc, Func Offset: 0x18c
	// Line 3936, Address: 0x17b3e0, Func Offset: 0x190
	// Line 3931, Address: 0x17b3e4, Func Offset: 0x194
	// Line 3939, Address: 0x17b3e8, Func Offset: 0x198
	// Line 3933, Address: 0x17b3ec, Func Offset: 0x19c
	// Line 3939, Address: 0x17b3f0, Func Offset: 0x1a0
	// Line 3934, Address: 0x17b3f4, Func Offset: 0x1a4
	// Line 3935, Address: 0x17b3f8, Func Offset: 0x1a8
	// Line 3937, Address: 0x17b400, Func Offset: 0x1b0
	// Line 3931, Address: 0x17b408, Func Offset: 0x1b8
	// Line 3939, Address: 0x17b414, Func Offset: 0x1c4
	// Line 3931, Address: 0x17b418, Func Offset: 0x1c8
	// Line 3940, Address: 0x17b41c, Func Offset: 0x1cc
	// Line 3931, Address: 0x17b420, Func Offset: 0x1d0
	// Line 3940, Address: 0x17b424, Func Offset: 0x1d4
	// Line 3931, Address: 0x17b428, Func Offset: 0x1d8
	// Line 3933, Address: 0x17b42c, Func Offset: 0x1dc
	// Line 3940, Address: 0x17b434, Func Offset: 0x1e4
	// Line 3933, Address: 0x17b43c, Func Offset: 0x1ec
	// Line 3934, Address: 0x17b44c, Func Offset: 0x1fc
	// Line 3933, Address: 0x17b450, Func Offset: 0x200
	// Line 3934, Address: 0x17b458, Func Offset: 0x208
	// Line 3935, Address: 0x17b46c, Func Offset: 0x21c
	// Line 3934, Address: 0x17b470, Func Offset: 0x220
	// Line 3935, Address: 0x17b478, Func Offset: 0x228
	// Line 3936, Address: 0x17b48c, Func Offset: 0x23c
	// Line 3935, Address: 0x17b490, Func Offset: 0x240
	// Line 3936, Address: 0x17b498, Func Offset: 0x248
	// Line 3937, Address: 0x17b4ac, Func Offset: 0x25c
	// Line 3936, Address: 0x17b4b0, Func Offset: 0x260
	// Line 3937, Address: 0x17b4b8, Func Offset: 0x268
	// Line 3939, Address: 0x17b4cc, Func Offset: 0x27c
	// Line 3937, Address: 0x17b4d0, Func Offset: 0x280
	// Line 3939, Address: 0x17b4d8, Func Offset: 0x288
	// Line 3940, Address: 0x17b4ec, Func Offset: 0x29c
	// Line 3939, Address: 0x17b4f0, Func Offset: 0x2a0
	// Line 3940, Address: 0x17b4f8, Func Offset: 0x2a8
	// Line 3941, Address: 0x17b50c, Func Offset: 0x2bc
	// Line 3940, Address: 0x17b510, Func Offset: 0x2c0
	// Line 3941, Address: 0x17b518, Func Offset: 0x2c8
	// Line 3943, Address: 0x17b560, Func Offset: 0x310
	// Line 3941, Address: 0x17b564, Func Offset: 0x314
	// Line 3943, Address: 0x17b568, Func Offset: 0x318
	// Line 3941, Address: 0x17b570, Func Offset: 0x320
	// Line 3943, Address: 0x17b578, Func Offset: 0x328
	// Line 3941, Address: 0x17b580, Func Offset: 0x330
	// Line 3943, Address: 0x17b594, Func Offset: 0x344
	// Line 3941, Address: 0x17b598, Func Offset: 0x348
	// Line 3944, Address: 0x17b5a4, Func Offset: 0x354
	// Line 3941, Address: 0x17b5a8, Func Offset: 0x358
	// Line 3944, Address: 0x17b5ac, Func Offset: 0x35c
	// Line 3941, Address: 0x17b5b0, Func Offset: 0x360
	// Line 3944, Address: 0x17b5b4, Func Offset: 0x364
	// Line 3943, Address: 0x17b5b8, Func Offset: 0x368
	// Line 3944, Address: 0x17b5bc, Func Offset: 0x36c
	// Line 3943, Address: 0x17b5c0, Func Offset: 0x370
	// Line 3944, Address: 0x17b5d0, Func Offset: 0x380
	// Line 3943, Address: 0x17b5d4, Func Offset: 0x384
	// Line 3944, Address: 0x17b5dc, Func Offset: 0x38c
	// Line 3945, Address: 0x17b5f0, Func Offset: 0x3a0
	// Line 3944, Address: 0x17b5f4, Func Offset: 0x3a4
	// Line 3945, Address: 0x17b5fc, Func Offset: 0x3ac
	// Line 3947, Address: 0x17b674, Func Offset: 0x424
	// Line 3948, Address: 0x17b67c, Func Offset: 0x42c
	// Line 3949, Address: 0x17b684, Func Offset: 0x434
	// Line 3950, Address: 0x17b68c, Func Offset: 0x43c
	// Line 3951, Address: 0x17b6a4, Func Offset: 0x454
	// Line 3952, Address: 0x17b6bc, Func Offset: 0x46c
	// Line 3953, Address: 0x17b6c0, Func Offset: 0x470
	// Func End, Address: 0x17b700, Func Offset: 0x4b0
}

// 
// Start address: 0x17b700
void miscMapDispInit(_anon1* work)
{
	int stage;
	int scene;
	float pos[4];
	_enum_0 next_m_id;
	_enum_0 prev_m_id;
	// Line 3957, Address: 0x17b700, Func Offset: 0
	// Line 3958, Address: 0x17b704, Func Offset: 0x4
	// Line 3957, Address: 0x17b708, Func Offset: 0x8
	// Line 3958, Address: 0x17b718, Func Offset: 0x18
	// Line 3959, Address: 0x17b71c, Func Offset: 0x1c
	// Line 3962, Address: 0x17b728, Func Offset: 0x28
	// Line 3963, Address: 0x17b734, Func Offset: 0x34
	// Line 3969, Address: 0x17b750, Func Offset: 0x50
	// Line 3966, Address: 0x17b754, Func Offset: 0x54
	// Line 3969, Address: 0x17b758, Func Offset: 0x58
	// Line 3971, Address: 0x17b75c, Func Offset: 0x5c
	// Line 3972, Address: 0x17b768, Func Offset: 0x68
	// Line 3973, Address: 0x17b778, Func Offset: 0x78
	// Line 3975, Address: 0x17b798, Func Offset: 0x98
	// Line 3977, Address: 0x17b7a0, Func Offset: 0xa0
	// Line 3978, Address: 0x17b7a4, Func Offset: 0xa4
	// Line 3979, Address: 0x17b7a8, Func Offset: 0xa8
	// Line 3981, Address: 0x17b7c8, Func Offset: 0xc8
	// Line 3985, Address: 0x17b7d0, Func Offset: 0xd0
	// Line 3988, Address: 0x17b7d8, Func Offset: 0xd8
	// Line 3989, Address: 0x17b7dc, Func Offset: 0xdc
	// Line 3991, Address: 0x17b7e0, Func Offset: 0xe0
	// Line 4005, Address: 0x17b7e8, Func Offset: 0xe8
	// Line 4009, Address: 0x17b824, Func Offset: 0x124
	// Line 4012, Address: 0x17b830, Func Offset: 0x130
	// Line 4013, Address: 0x17b834, Func Offset: 0x134
	// Line 4014, Address: 0x17b838, Func Offset: 0x138
	// Func End, Address: 0x17b850, Func Offset: 0x150
}

// 
// Start address: 0x17b850
int miscMapExec(_anon1* work)
{
	int rtv;
	int fade_speed;
	int capture;
	int goto_memo_flag;
	// Line 4018, Address: 0x17b850, Func Offset: 0
	// Line 4019, Address: 0x17b868, Func Offset: 0x18
	// Line 4033, Address: 0x17b86c, Func Offset: 0x1c
	// Line 4034, Address: 0x17b870, Func Offset: 0x20
	// Line 4036, Address: 0x17b87c, Func Offset: 0x2c
	// Line 4037, Address: 0x17b884, Func Offset: 0x34
	// Line 4036, Address: 0x17b88c, Func Offset: 0x3c
	// Line 4037, Address: 0x17b898, Func Offset: 0x48
	// Line 4039, Address: 0x17b8d0, Func Offset: 0x80
	// Line 4040, Address: 0x17b8d8, Func Offset: 0x88
	// Line 4043, Address: 0x17b93c, Func Offset: 0xec
	// Line 4044, Address: 0x17b940, Func Offset: 0xf0
	// Line 4045, Address: 0x17b950, Func Offset: 0x100
	// Line 4047, Address: 0x17b9ac, Func Offset: 0x15c
	// Line 4049, Address: 0x17b9b4, Func Offset: 0x164
	// Line 4050, Address: 0x17b9b8, Func Offset: 0x168
	// Line 4051, Address: 0x17b9bc, Func Offset: 0x16c
	// Line 4052, Address: 0x17b9fc, Func Offset: 0x1ac
	// Line 4054, Address: 0x17ba00, Func Offset: 0x1b0
	// Line 4055, Address: 0x17ba08, Func Offset: 0x1b8
	// Line 4056, Address: 0x17ba6c, Func Offset: 0x21c
	// Line 4057, Address: 0x17ba74, Func Offset: 0x224
	// Line 4058, Address: 0x17ba78, Func Offset: 0x228
	// Line 4059, Address: 0x17bad4, Func Offset: 0x284
	// Line 4060, Address: 0x17badc, Func Offset: 0x28c
	// Line 4062, Address: 0x17bae0, Func Offset: 0x290
	// Line 4063, Address: 0x17bae8, Func Offset: 0x298
	// Line 4064, Address: 0x17baf4, Func Offset: 0x2a4
	// Line 4065, Address: 0x17bb54, Func Offset: 0x304
	// Line 4066, Address: 0x17bb5c, Func Offset: 0x30c
	// Line 4068, Address: 0x17bb60, Func Offset: 0x310
	// Line 4071, Address: 0x17bbbc, Func Offset: 0x36c
	// Line 4073, Address: 0x17bbc4, Func Offset: 0x374
	// Line 4074, Address: 0x17bbc8, Func Offset: 0x378
	// Line 4075, Address: 0x17bbd8, Func Offset: 0x388
	// Line 4077, Address: 0x17bc34, Func Offset: 0x3e4
	// Line 4079, Address: 0x17bc3c, Func Offset: 0x3ec
	// Line 4080, Address: 0x17bc40, Func Offset: 0x3f0
	// Line 4082, Address: 0x17bc44, Func Offset: 0x3f4
	// Line 4083, Address: 0x17bc58, Func Offset: 0x408
	// Line 4084, Address: 0x17bc5c, Func Offset: 0x40c
	// Line 4086, Address: 0x17bcbc, Func Offset: 0x46c
	// Line 4088, Address: 0x17bcc4, Func Offset: 0x474
	// Line 4089, Address: 0x17bcc8, Func Offset: 0x478
	// Line 4092, Address: 0x17bcd8, Func Offset: 0x488
	// Line 4091, Address: 0x17bcdc, Func Offset: 0x48c
	// Line 4090, Address: 0x17bce0, Func Offset: 0x490
	// Line 4093, Address: 0x17bce4, Func Offset: 0x494
	// Line 4096, Address: 0x17bcf0, Func Offset: 0x4a0
	// Line 4095, Address: 0x17bcf4, Func Offset: 0x4a4
	// Line 4099, Address: 0x17bcf8, Func Offset: 0x4a8
	// Line 4100, Address: 0x17bd0c, Func Offset: 0x4bc
	// Line 4102, Address: 0x17bd18, Func Offset: 0x4c8
	// Line 4104, Address: 0x17bd20, Func Offset: 0x4d0
	// Line 4108, Address: 0x17bd24, Func Offset: 0x4d4
	// Line 4104, Address: 0x17bd28, Func Offset: 0x4d8
	// Line 4110, Address: 0x17bd44, Func Offset: 0x4f4
	// Line 4112, Address: 0x17bd54, Func Offset: 0x504
	// Line 4113, Address: 0x17bd5c, Func Offset: 0x50c
	// Line 4114, Address: 0x17bd64, Func Offset: 0x514
	// Line 4116, Address: 0x17bd74, Func Offset: 0x524
	// Line 4118, Address: 0x17bd78, Func Offset: 0x528
	// Line 4120, Address: 0x17bd80, Func Offset: 0x530
	// Line 4118, Address: 0x17bd84, Func Offset: 0x534
	// Line 4121, Address: 0x17bd90, Func Offset: 0x540
	// Func End, Address: 0x17bda8, Func Offset: 0x558
}

// 
// Start address: 0x17bdb0
void miscMapDestruct()
{
	// Line 4130, Address: 0x17bdb0, Func Offset: 0
	// Func End, Address: 0x17bdb8, Func Offset: 0x8
}

// 
// Start address: 0x17bdc0
void miscMapWarmInit()
{
	// Line 4136, Address: 0x17bdc0, Func Offset: 0
	// Line 4137, Address: 0x17bdc4, Func Offset: 0x4
	// Line 4136, Address: 0x17bdc8, Func Offset: 0x8
	// Line 4137, Address: 0x17bdcc, Func Offset: 0xc
	// Line 4138, Address: 0x17bddc, Func Offset: 0x1c
	// Line 4139, Address: 0x17bde8, Func Offset: 0x28
	// Func End, Address: 0x17bdf4, Func Offset: 0x34
}

// 
// Start address: 0x17be00
void miscMapStepInit()
{
	int stage;
	int scene;
	float pos[4];
	// Line 4145, Address: 0x17be00, Func Offset: 0
	// Line 4147, Address: 0x17be04, Func Offset: 0x4
	// Line 4145, Address: 0x17be08, Func Offset: 0x8
	// Line 4148, Address: 0x17be14, Func Offset: 0x14
	// Line 4151, Address: 0x17be20, Func Offset: 0x20
	// Line 4153, Address: 0x17be2c, Func Offset: 0x2c
	// Line 4156, Address: 0x17be40, Func Offset: 0x40
	// Line 4158, Address: 0x17be58, Func Offset: 0x58
	// Line 4160, Address: 0x17be7c, Func Offset: 0x7c
	// Line 4158, Address: 0x17be80, Func Offset: 0x80
	// Line 4160, Address: 0x17be98, Func Offset: 0x98
	// Line 4161, Address: 0x17bea8, Func Offset: 0xa8
	// Line 4163, Address: 0x17bebc, Func Offset: 0xbc
	// Line 4164, Address: 0x17bec4, Func Offset: 0xc4
	// Line 4165, Address: 0x17becc, Func Offset: 0xcc
	// Func End, Address: 0x17bee0, Func Offset: 0xe0
}

// 
// Start address: 0x17bee0
int miscMapMain()
{
	int rtv;
	int f_rtv;
	// Line 4176, Address: 0x17bee0, Func Offset: 0
	// Line 4180, Address: 0x17bee4, Func Offset: 0x4
	// Line 4176, Address: 0x17bee8, Func Offset: 0x8
	// Line 4180, Address: 0x17beec, Func Offset: 0xc
	// Line 4176, Address: 0x17bef0, Func Offset: 0x10
	// Line 4180, Address: 0x17bef4, Func Offset: 0x14
	// Line 4181, Address: 0x17befc, Func Offset: 0x1c
	// Line 4180, Address: 0x17bf00, Func Offset: 0x20
	// Line 4181, Address: 0x17bf20, Func Offset: 0x40
	// Line 4182, Address: 0x17bf44, Func Offset: 0x64
	// Line 4184, Address: 0x17bf48, Func Offset: 0x68
	// Line 4185, Address: 0x17bf50, Func Offset: 0x70
	// Line 4188, Address: 0x17bf9c, Func Offset: 0xbc
	// Line 4189, Address: 0x17bfa0, Func Offset: 0xc0
	// Line 4190, Address: 0x17bfb4, Func Offset: 0xd4
	// Line 4191, Address: 0x17bfc4, Func Offset: 0xe4
	// Line 4193, Address: 0x17bfe0, Func Offset: 0x100
	// Line 4191, Address: 0x17bfe4, Func Offset: 0x104
	// Line 4193, Address: 0x17bfe8, Func Offset: 0x108
	// Line 4195, Address: 0x17c034, Func Offset: 0x154
	// Line 4197, Address: 0x17c03c, Func Offset: 0x15c
	// Line 4198, Address: 0x17c040, Func Offset: 0x160
	// Line 4201, Address: 0x17c048, Func Offset: 0x168
	// Line 4203, Address: 0x17c050, Func Offset: 0x170
	// Line 4201, Address: 0x17c054, Func Offset: 0x174
	// Line 4204, Address: 0x17c060, Func Offset: 0x180
	// Func End, Address: 0x17c070, Func Offset: 0x190
}

