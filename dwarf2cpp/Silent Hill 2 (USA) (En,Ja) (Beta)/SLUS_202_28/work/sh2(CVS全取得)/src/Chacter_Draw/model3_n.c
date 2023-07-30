typedef struct ModelWork;
typedef struct shClusterAnime;
typedef struct _anon0;
typedef struct SubCharacterDisp;
typedef struct shSkelton;
typedef struct shBattleFight;
typedef struct Model;
typedef struct Model3Junk;
typedef struct shBattleShot;
typedef struct TailEnvPacket;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct shBattleArea;
typedef struct Stage_Data;
typedef struct EnvPacket;
typedef struct shBattleInfo;
typedef struct Event_List;
typedef struct FuncData;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct Item_List;
typedef struct Model_List;
typedef struct Enemy_List;
typedef struct SubCharacter;
typedef union Q_WORDDATA;
typedef struct TextPosParam;
typedef struct _VbWVSMATRIX;
typedef struct _CL_VHIT_WALL;
typedef struct sh_Model;
typedef struct _AnimeInfo;
typedef struct sh2gfw_Env_ctl;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _VbSCREENINFO;
typedef union _anon1;
typedef struct _USXY;
typedef struct ModelCommonWork;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _SXY;
typedef struct _anon3;
typedef struct _IXY;
typedef struct _anon4;
typedef struct shAnime3d;
typedef struct _anon5;
typedef struct HeadEnvPacket;

typedef int(*type_1)(void*, void*, int, void*);
typedef void(*type_3)();
typedef int(*type_4)();
typedef int(*type_28)(void*, void*, void*);
typedef void(*type_38)(SubCharacter*);
typedef void(*type_39)(SubCharacter*);
typedef int(*type_40)(void*, void*, void*);

typedef float type_0[4];
typedef void* type_2[3];
typedef float type_5[4][4];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_8[4];
typedef unsigned int type_9[4];
typedef unsigned short type_10[8];
typedef float type_11[4];
typedef float type_12[4];
typedef float type_13[4][2];
typedef float type_14[4];
typedef unsigned char type_15[16];
typedef float type_16[4];
typedef float type_17[4][4];
typedef float type_18[4];
typedef int type_19[4];
typedef float type_20[4];
typedef short type_21[8];
typedef float type_22[4][2];
typedef char type_23[16];
typedef unsigned long type_24[2];
typedef float type_25[4][4][128];
typedef float type_26[4][4][256];
typedef float type_27[4][2048];
typedef void* type_29[4];
typedef TextPosParam type_30[64];
typedef shAttackInfo type_31[66];
typedef float type_32[4];
typedef unsigned short type_33[4];
typedef float type_34[4];
typedef float type_35[4];
typedef float type_36[4][4];
typedef float type_37[4][4];
typedef unsigned char type_41[4];

struct ModelWork
{
	unsigned int id;
	float relatives[4][4];
	float matrices[4][4];
	float* cluster_weights;
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
};

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct SubCharacterDisp
{
	SubCharacter sc;
	shAnime3d anime2;
	shAnime3d anime;
	shClusterAnime* cluster_anime;
	void* models[3];
	void* work;
	void* data;
	unsigned int model_adr;
	unsigned int anime_adr;
	unsigned int clani_adr;
	void* anime_list;
	void* clani_list;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon5 src_m;
	_anon4 src_t;
	_anon5 des_m;
	_anon4 des_t;
	_anon4 axis;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	unsigned int reserved_1c;
	unsigned int reserved_1d;
	unsigned int reserved_1e;
	unsigned int reserved_1f;
};

struct Model3Junk
{
	float xyz_min[4];
	float xyz_max[4];
	float xyz_min_wide[4];
	float xyz_max_wide[4];
	float rgba_max[4];
	float global_ambient[4];
	<unknown fundamental type (0xa510)> giftag_0;
	<unknown fundamental type (0xa510)> giftag_1;
	<unknown fundamental type (0xa510)> giftag_2;
	float camera[4];
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
	float vwm[4][4];
	void* vi00;
	void* xtop;
	float cluster_nodes[4];
	unsigned int fogcol;
	unsigned char view_clip_and;
	unsigned char view_clip_or;
	unsigned char gs_clip_and;
	unsigned char gs_clip_or;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct TailEnvPacket
{
	unsigned long dmatag_tag;
	unsigned int vifcode_0;
	unsigned int vifcode_1;
	unsigned long giftag_tag;
	unsigned long giftag_reg;
	unsigned long fba_d;
	unsigned long fba_a;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon0* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct EnvPacket
{
	HeadEnvPacket head_ep;
	TailEnvPacket tail_ep;
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct FuncData
{
	short skeleton_no;
	short func_id;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
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
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
	_anon5 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon4 b_pos;
	_anon4 b_rot;
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

struct TextPosParam
{
	unsigned long tex0;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct sh_Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	void* pTexMAN[4];
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

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA MoveFogColor;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
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
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct ModelCommonWork
{
	float skeleton_matrices[4][4][128];
	float envelope_matrices[4][4][256];
	float cluster_nodes[4][2048];
	float top_skeleton_matrix[4][4];
	float vsp[4][2];
	float vcp[4][2];
	float vcp_gs[4][2];
	TextPosParam text_pos_params[64];
	unsigned long specular_mapping_tex0;
	unsigned long latitude_mapping_tex0;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _SXY
{
	short x;
	short y;
};

struct _anon3
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

struct _IXY
{
	int x;
	int y;
};

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
};

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon4 rot_neck;
	_anon4 rot_arms;
	_anon4 rot_body_neck;
	_anon4 rot_body;
	float scale;
};

struct _anon5
{
	float d[4][4];
};

struct HeadEnvPacket
{
	unsigned long dmatag_tag;
	unsigned int vifcode_0;
	unsigned int vifcode_1;
	unsigned long giftag_tag;
	unsigned long giftag_reg;
	unsigned long test_d;
	unsigned long test_a;
	unsigned long texa_d;
	unsigned long texa_a;
	unsigned long fba_d;
	unsigned long fba_a;
	unsigned long alpha_d;
	unsigned long alpha_a;
	unsigned long fogcol_d;
	unsigned long fogcol_a;
};

shAttackInfo sh2_attack_list[66];
sh2gfw_Env_ctl Env_ctl;
ModelCommonWork* model_common_work;
Model3Junk model3_junk;
_anon3 cam0;
_VbWVSMATRIX VbWvsMatrix;
_VbSCREENINFO VbScreenInfo;
int dbg_font_y;
Stage_Data* stage;

unsigned int UIntFogcol();
int Model3NSkeletons(void* model_);
char* Model3SkeletonStructure(void* model_);
int Model3NClusters(void* model_);
void Model3DrawPre();
void sh2_Model_MakeMatrixParams();
void SortEnvPrim();
void Model3Draw_n(void* scp_d_, void* model_, void* work_, float mwm[4]);
int Model3WorkSize(void* model_);
void Model3InitWork(void* model_, void* work_);
float[4][4] Model3WorkMatrices(void* work_);
float* Model3WorkClusterWeights(void* work_);
void Exec_ModelDraw_OVFunc(void* pp);

// 
// Start address: 0x1280e0
unsigned int UIntFogcol()
{
	unsigned int fogcol;
	// Line 51, Address: 0x1280e0, Func Offset: 0
	// Line 53, Address: 0x1280e4, Func Offset: 0x4
	// Line 55, Address: 0x1280f4, Func Offset: 0x14
	// Line 56, Address: 0x1280f8, Func Offset: 0x18
	// Func End, Address: 0x128104, Func Offset: 0x24
}

// 
// Start address: 0x128110
int Model3NSkeletons(void* model_)
{
	Model* model;
	// Line 112, Address: 0x128110, Func Offset: 0
	// Line 113, Address: 0x128114, Func Offset: 0x4
	// Func End, Address: 0x12811c, Func Offset: 0xc
}

// 
// Start address: 0x128120
char* Model3SkeletonStructure(void* model_)
{
	unsigned char d;
	int i;
	char* structure;
	Model* model;
	unsigned int mask;
	// Line 123, Address: 0x128120, Func Offset: 0
	// Line 125, Address: 0x128128, Func Offset: 0x8
	// Line 128, Address: 0x128138, Func Offset: 0x18
	// Line 129, Address: 0x128144, Func Offset: 0x24
	// Line 130, Address: 0x12814c, Func Offset: 0x2c
	// Line 131, Address: 0x128158, Func Offset: 0x38
	// Line 132, Address: 0x128164, Func Offset: 0x44
	// Line 133, Address: 0x128168, Func Offset: 0x48
	// Line 134, Address: 0x12816c, Func Offset: 0x4c
	// Line 135, Address: 0x128180, Func Offset: 0x60
	// Line 138, Address: 0x12818c, Func Offset: 0x6c
	// Func End, Address: 0x128194, Func Offset: 0x74
}

// 
// Start address: 0x1281a0
int Model3NClusters(void* model_)
{
	Model* model;
	// Line 147, Address: 0x1281a0, Func Offset: 0
	// Line 148, Address: 0x1281a4, Func Offset: 0x4
	// Func End, Address: 0x1281ac, Func Offset: 0xc
}

// 
// Start address: 0x1281b0
void Model3DrawPre()
{
	// Line 224, Address: 0x1281b0, Func Offset: 0
	// Line 229, Address: 0x1281b8, Func Offset: 0x8
	// Line 245, Address: 0x1281c0, Func Offset: 0x10
	// Func End, Address: 0x1281d0, Func Offset: 0x20
}

// 
// Start address: 0x1281d0
void sh2_Model_MakeMatrixParams()
{
	float p[4];
	float p[4];
	float vsp[4];
	ModelCommonWork* mcw;
	float ftmp;
	float scrz;
	float farz;
	float nearz;
	float vsm[4];
	// Line 257, Address: 0x1281d0, Func Offset: 0
	// Line 259, Address: 0x1281e4, Func Offset: 0x14
	// Line 260, Address: 0x1281ec, Func Offset: 0x1c
	// Line 261, Address: 0x1281f4, Func Offset: 0x24
	// Line 267, Address: 0x1281fc, Func Offset: 0x2c
	// Line 268, Address: 0x12820c, Func Offset: 0x3c
	// Line 269, Address: 0x128224, Func Offset: 0x54
	// Line 271, Address: 0x12823c, Func Offset: 0x6c
	// Line 274, Address: 0x128254, Func Offset: 0x84
	// Line 276, Address: 0x12826c, Func Offset: 0x9c
	// Line 279, Address: 0x12827c, Func Offset: 0xac
	// Line 283, Address: 0x12828c, Func Offset: 0xbc
	// Line 286, Address: 0x12829c, Func Offset: 0xcc
	// Line 287, Address: 0x1282a4, Func Offset: 0xd4
	// Line 288, Address: 0x1282ac, Func Offset: 0xdc
	// Line 289, Address: 0x1282b4, Func Offset: 0xe4
	// Line 290, Address: 0x1282ec, Func Offset: 0x11c
	// Line 291, Address: 0x1282f4, Func Offset: 0x124
	// Line 292, Address: 0x1282fc, Func Offset: 0x12c
	// Line 293, Address: 0x128304, Func Offset: 0x134
	// Line 301, Address: 0x128338, Func Offset: 0x168
	// Line 303, Address: 0x128348, Func Offset: 0x178
	// Line 304, Address: 0x12836c, Func Offset: 0x19c
	// Line 305, Address: 0x128388, Func Offset: 0x1b8
	// Line 306, Address: 0x128394, Func Offset: 0x1c4
	// Line 307, Address: 0x128398, Func Offset: 0x1c8
	// Line 308, Address: 0x12839c, Func Offset: 0x1cc
	// Line 310, Address: 0x1283a0, Func Offset: 0x1d0
	// Line 311, Address: 0x1283bc, Func Offset: 0x1ec
	// Line 317, Address: 0x1283c0, Func Offset: 0x1f0
	// Line 318, Address: 0x1283d0, Func Offset: 0x200
	// Line 319, Address: 0x1283ec, Func Offset: 0x21c
	// Line 320, Address: 0x1283fc, Func Offset: 0x22c
	// Line 321, Address: 0x128400, Func Offset: 0x230
	// Line 322, Address: 0x128404, Func Offset: 0x234
	// Line 323, Address: 0x128408, Func Offset: 0x238
	// Line 324, Address: 0x12840c, Func Offset: 0x23c
	// Line 325, Address: 0x128410, Func Offset: 0x240
	// Line 332, Address: 0x128414, Func Offset: 0x244
	// Line 333, Address: 0x12841c, Func Offset: 0x24c
	// Line 334, Address: 0x128424, Func Offset: 0x254
	// Line 335, Address: 0x12847c, Func Offset: 0x2ac
	// Line 336, Address: 0x1284d4, Func Offset: 0x304
	// Line 352, Address: 0x12852c, Func Offset: 0x35c
	// Func End, Address: 0x128548, Func Offset: 0x378
}

// 
// Start address: 0x128550
void SortEnvPrim()
{
	EnvPacket* ep;
	EnvPacket envpacketdata;
	// Line 361, Address: 0x128550, Func Offset: 0
	// Line 450, Address: 0x12855c, Func Offset: 0xc
	// Line 452, Address: 0x12856c, Func Offset: 0x1c
	// Line 453, Address: 0x1285a0, Func Offset: 0x50
	// Line 455, Address: 0x1285ac, Func Offset: 0x5c
	// Line 456, Address: 0x1285bc, Func Offset: 0x6c
	// Line 457, Address: 0x1285cc, Func Offset: 0x7c
	// Func End, Address: 0x1285e0, Func Offset: 0x90
}

// 
// Start address: 0x1285e0
void Model3Draw_n(void* scp_d_, void* model_, void* work_, float mwm[4])
{
	float* weights;
	SubCharacterDisp* scp_d;
	sh_Model* shM;
	ModelWork* mwork;
	Model* model;
	int d1_cid;
	int pef;
	// Line 473, Address: 0x1285e0, Func Offset: 0
	// Line 476, Address: 0x128600, Func Offset: 0x20
	// Line 478, Address: 0x128604, Func Offset: 0x24
	// Line 482, Address: 0x128608, Func Offset: 0x28
	// Line 485, Address: 0x128610, Func Offset: 0x30
	// Line 498, Address: 0x128618, Func Offset: 0x38
	// Line 512, Address: 0x128630, Func Offset: 0x50
	// Line 522, Address: 0x12863c, Func Offset: 0x5c
	// Line 526, Address: 0x12864c, Func Offset: 0x6c
	// Line 530, Address: 0x12865c, Func Offset: 0x7c
	// Line 534, Address: 0x128664, Func Offset: 0x84
	// Line 536, Address: 0x128670, Func Offset: 0x90
	// Line 537, Address: 0x12867c, Func Offset: 0x9c
	// Line 544, Address: 0x12868c, Func Offset: 0xac
	// Line 552, Address: 0x12869c, Func Offset: 0xbc
	// Line 556, Address: 0x1286a8, Func Offset: 0xc8
	// Line 561, Address: 0x1286b8, Func Offset: 0xd8
	// Line 563, Address: 0x1286c0, Func Offset: 0xe0
	// Line 597, Address: 0x1286d0, Func Offset: 0xf0
	// Line 601, Address: 0x1286e0, Func Offset: 0x100
	// Line 604, Address: 0x1286e8, Func Offset: 0x108
	// Line 606, Address: 0x1286f0, Func Offset: 0x110
	// Line 609, Address: 0x1286f8, Func Offset: 0x118
	// Line 613, Address: 0x128700, Func Offset: 0x120
	// Line 618, Address: 0x128708, Func Offset: 0x128
	// Line 628, Address: 0x128710, Func Offset: 0x130
	// Line 632, Address: 0x128718, Func Offset: 0x138
	// Line 645, Address: 0x128720, Func Offset: 0x140
	// Func End, Address: 0x128740, Func Offset: 0x160
}

// 
// Start address: 0x128740
int Model3WorkSize(void* model_)
{
	int size;
	Model* model;
	// Line 755, Address: 0x128740, Func Offset: 0
	// Line 758, Address: 0x128744, Func Offset: 0x4
	// Line 759, Address: 0x128750, Func Offset: 0x10
	// Line 762, Address: 0x12875c, Func Offset: 0x1c
	// Line 763, Address: 0x128768, Func Offset: 0x28
	// Line 765, Address: 0x128770, Func Offset: 0x30
	// Func End, Address: 0x128778, Func Offset: 0x38
}

// 
// Start address: 0x128780
void Model3InitWork(void* model_, void* work_)
{
	int i;
	int i;
	float initial[4][4];
	int size;
	void* top;
	ModelWork* work;
	Model* model;
	// Line 772, Address: 0x128780, Func Offset: 0
	// Line 773, Address: 0x12879c, Func Offset: 0x1c
	// Line 774, Address: 0x1287a0, Func Offset: 0x20
	// Line 784, Address: 0x1287a4, Func Offset: 0x24
	// Line 786, Address: 0x1287b0, Func Offset: 0x30
	// Line 789, Address: 0x1287b4, Func Offset: 0x34
	// Line 790, Address: 0x1287bc, Func Offset: 0x3c
	// Line 791, Address: 0x1287c8, Func Offset: 0x48
	// Line 793, Address: 0x1287cc, Func Offset: 0x4c
	// Line 794, Address: 0x1287d8, Func Offset: 0x58
	// Line 795, Address: 0x1287f4, Func Offset: 0x74
	// Line 797, Address: 0x128808, Func Offset: 0x88
	// Line 798, Address: 0x128814, Func Offset: 0x94
	// Line 801, Address: 0x128820, Func Offset: 0xa0
	// Line 804, Address: 0x128828, Func Offset: 0xa8
	// Line 805, Address: 0x128834, Func Offset: 0xb4
	// Line 806, Address: 0x128844, Func Offset: 0xc4
	// Line 819, Address: 0x128858, Func Offset: 0xd8
	// Line 839, Address: 0x128864, Func Offset: 0xe4
	// Line 840, Address: 0x128868, Func Offset: 0xe8
	// Line 841, Address: 0x12886c, Func Offset: 0xec
	// Func End, Address: 0x128890, Func Offset: 0x110
}

// 
// Start address: 0x128890
float[4][4] Model3WorkMatrices(void* work_)
{
	ModelWork* work;
	// Line 860, Address: 0x128890, Func Offset: 0
	// Line 861, Address: 0x128894, Func Offset: 0x4
	// Func End, Address: 0x12889c, Func Offset: 0xc
}

// 
// Start address: 0x1288a0
float* Model3WorkClusterWeights(void* work_)
{
	ModelWork* work;
	// Line 870, Address: 0x1288a0, Func Offset: 0
	// Line 871, Address: 0x1288a4, Func Offset: 0x4
	// Func End, Address: 0x1288ac, Func Offset: 0xc
}

// 
// Start address: 0x1288b0
void Exec_ModelDraw_OVFunc(void* pp)
{
	SubCharacterDisp* scp_d;
	// Line 887, Address: 0x1288b0, Func Offset: 0
	// Line 892, Address: 0x1288b8, Func Offset: 0x8
	// Line 896, Address: 0x1288e0, Func Offset: 0x30
	// Line 900, Address: 0x1288f0, Func Offset: 0x40
	// Func End, Address: 0x128900, Func Offset: 0x50
}

