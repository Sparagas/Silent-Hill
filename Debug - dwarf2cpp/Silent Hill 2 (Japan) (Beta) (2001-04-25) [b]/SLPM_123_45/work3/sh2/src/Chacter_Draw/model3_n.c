typedef struct Model;
typedef struct _USXY;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct ModelWork;
typedef struct _SXY;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct TextPosParam;
typedef struct _anon0;
typedef struct shAnime3d;
typedef struct shSkelton;
typedef struct ModelCommonWork;
typedef struct FuncData;
typedef struct _VbWVSMATRIX;
typedef struct _anon1;
typedef struct _AnimeInfo;
typedef struct sh_Model;
typedef struct shBattleFight;
typedef struct HeadEnvPacket;
typedef struct _VbSCREENINFO;
typedef struct sh2gfw_Env_ctl;
typedef struct shClusterAnime;
typedef struct shBattleShot;
typedef struct SubCharacter;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SubCharacterDisp;
typedef struct TailEnvPacket;
typedef struct EnvPacket;
typedef struct shAttackInfo;
typedef union _anon2;
typedef struct _CL_VHIT_WALL;
typedef struct _anon3;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct Model3Junk;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;

typedef int(*type_26)(void*, void*, int, void*);
typedef void(*type_28)(SubCharacter*);
typedef void(*type_30)(SubCharacter*);
typedef int(*type_37)(void*, void*, void*);
typedef int(*type_38)(void*, void*, void*);

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[4];
typedef float type_5[4];
typedef unsigned int type_6[4];
typedef unsigned short type_7[8];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_11[4][2];
typedef unsigned char type_12[16];
typedef int type_13[4];
typedef float type_14[4];
typedef short type_15[8];
typedef float type_16[4];
typedef char type_17[16];
typedef float type_18[4][2];
typedef unsigned long type_19[2];
typedef float type_20[4];
typedef float type_21[4][4][128];
typedef float type_22[4][4][256];
typedef float type_23[4];
typedef float type_24[4][4];
typedef float type_25[4][2048];
typedef TextPosParam type_27[64];
typedef shAttackInfo type_29[46];
typedef float type_31[4];
typedef unsigned char type_32[4];
typedef float type_33[4];
typedef float type_34[4][4];
typedef void* type_35[4];
typedef void* type_36[3];
typedef unsigned short type_39[4];

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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

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

struct _SXY
{
	short x;
	short y;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _anon0
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
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct FuncData
{
	short skeleton_no;
	short func_id;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _anon1
{
	float d[4][4];
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon1 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon0 b_pos;
	_anon0 b_rot;
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

struct shBattleArea
{
	float center;
	float radius;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
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

struct EnvPacket
{
	HeadEnvPacket head_ep;
	TailEnvPacket tail_ep;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon4 hobj;
};

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

shAttackInfo sh2_attack_list[46];
sh2gfw_Env_ctl Env_ctl;
ModelCommonWork* model_common_work;
Model3Junk model3_junk;
_anon3 cam0;
_VbWVSMATRIX VbWvsMatrix;
_VbSCREENINFO VbScreenInfo;
int dbg_font_y;

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

// 
// Start address: 0x130fb0
unsigned int UIntFogcol()
{
	unsigned int fogcol;
	// Line 47, Address: 0x130fb0, Func Offset: 0
	// Line 49, Address: 0x130fb4, Func Offset: 0x4
	// Line 51, Address: 0x130fc4, Func Offset: 0x14
	// Line 52, Address: 0x130fc8, Func Offset: 0x18
	// Func End, Address: 0x130fd4, Func Offset: 0x24
}

// 
// Start address: 0x130fe0
int Model3NSkeletons(void* model_)
{
	Model* model;
	// Line 106, Address: 0x130fe0, Func Offset: 0
	// Line 107, Address: 0x130fec, Func Offset: 0xc
	// Line 108, Address: 0x130ff0, Func Offset: 0x10
	// Line 109, Address: 0x130ff4, Func Offset: 0x14
	// Func End, Address: 0x131004, Func Offset: 0x24
}

// 
// Start address: 0x131010
char* Model3SkeletonStructure(void* model_)
{
	unsigned char d;
	int i;
	char* structure;
	Model* model;
	unsigned int mask;
	// Line 116, Address: 0x131010, Func Offset: 0
	// Line 117, Address: 0x13102c, Func Offset: 0x1c
	// Line 118, Address: 0x131030, Func Offset: 0x20
	// Line 119, Address: 0x131034, Func Offset: 0x24
	// Line 121, Address: 0x13103c, Func Offset: 0x2c
	// Line 124, Address: 0x13104c, Func Offset: 0x3c
	// Line 125, Address: 0x131058, Func Offset: 0x48
	// Line 126, Address: 0x131068, Func Offset: 0x58
	// Line 127, Address: 0x131078, Func Offset: 0x68
	// Line 128, Address: 0x13108c, Func Offset: 0x7c
	// Line 129, Address: 0x131090, Func Offset: 0x80
	// Line 130, Address: 0x1310a0, Func Offset: 0x90
	// Line 131, Address: 0x1310b8, Func Offset: 0xa8
	// Line 133, Address: 0x1310c4, Func Offset: 0xb4
	// Line 134, Address: 0x1310c8, Func Offset: 0xb8
	// Func End, Address: 0x1310e8, Func Offset: 0xd8
}

// 
// Start address: 0x1310f0
int Model3NClusters(void* model_)
{
	Model* model;
	// Line 141, Address: 0x1310f0, Func Offset: 0
	// Line 142, Address: 0x1310fc, Func Offset: 0xc
	// Line 143, Address: 0x131100, Func Offset: 0x10
	// Line 144, Address: 0x131104, Func Offset: 0x14
	// Func End, Address: 0x131114, Func Offset: 0x24
}

// 
// Start address: 0x131120
void Model3DrawPre()
{
	// Line 220, Address: 0x131120, Func Offset: 0
	// Line 225, Address: 0x131128, Func Offset: 0x8
	// Line 241, Address: 0x131130, Func Offset: 0x10
	// Func End, Address: 0x131140, Func Offset: 0x20
}

// 
// Start address: 0x131140
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
	// Line 253, Address: 0x131140, Func Offset: 0
	// Line 255, Address: 0x13115c, Func Offset: 0x1c
	// Line 256, Address: 0x131164, Func Offset: 0x24
	// Line 257, Address: 0x131178, Func Offset: 0x38
	// Line 258, Address: 0x13118c, Func Offset: 0x4c
	// Line 263, Address: 0x1311a0, Func Offset: 0x60
	// Line 264, Address: 0x1311b0, Func Offset: 0x70
	// Line 265, Address: 0x1311c8, Func Offset: 0x88
	// Line 267, Address: 0x1311e0, Func Offset: 0xa0
	// Line 270, Address: 0x1311f8, Func Offset: 0xb8
	// Line 272, Address: 0x131210, Func Offset: 0xd0
	// Line 275, Address: 0x131220, Func Offset: 0xe0
	// Line 279, Address: 0x131240, Func Offset: 0x100
	// Line 282, Address: 0x131250, Func Offset: 0x110
	// Line 283, Address: 0x131258, Func Offset: 0x118
	// Line 284, Address: 0x131260, Func Offset: 0x120
	// Line 285, Address: 0x131268, Func Offset: 0x128
	// Line 286, Address: 0x1312b8, Func Offset: 0x178
	// Line 287, Address: 0x1312c0, Func Offset: 0x180
	// Line 288, Address: 0x1312c8, Func Offset: 0x188
	// Line 289, Address: 0x1312d0, Func Offset: 0x190
	// Line 297, Address: 0x131320, Func Offset: 0x1e0
	// Line 299, Address: 0x131330, Func Offset: 0x1f0
	// Line 300, Address: 0x131354, Func Offset: 0x214
	// Line 301, Address: 0x131378, Func Offset: 0x238
	// Line 302, Address: 0x131390, Func Offset: 0x250
	// Line 303, Address: 0x1313a0, Func Offset: 0x260
	// Line 304, Address: 0x1313ac, Func Offset: 0x26c
	// Line 306, Address: 0x1313b8, Func Offset: 0x278
	// Line 307, Address: 0x1313e0, Func Offset: 0x2a0
	// Line 313, Address: 0x1313ec, Func Offset: 0x2ac
	// Line 314, Address: 0x1313fc, Func Offset: 0x2bc
	// Line 315, Address: 0x131420, Func Offset: 0x2e0
	// Line 316, Address: 0x131444, Func Offset: 0x304
	// Line 317, Address: 0x13145c, Func Offset: 0x31c
	// Line 318, Address: 0x13146c, Func Offset: 0x32c
	// Line 319, Address: 0x131478, Func Offset: 0x338
	// Line 320, Address: 0x131484, Func Offset: 0x344
	// Line 321, Address: 0x1314ac, Func Offset: 0x36c
	// Line 328, Address: 0x1314b8, Func Offset: 0x378
	// Line 329, Address: 0x1314c0, Func Offset: 0x380
	// Line 330, Address: 0x1314c8, Func Offset: 0x388
	// Line 331, Address: 0x131520, Func Offset: 0x3e0
	// Line 332, Address: 0x131578, Func Offset: 0x438
	// Line 337, Address: 0x1315d0, Func Offset: 0x490
	// Func End, Address: 0x1315f4, Func Offset: 0x4b4
}

// 
// Start address: 0x131600
void SortEnvPrim()
{
	EnvPacket* ep;
	EnvPacket envpacketdata;
	// Line 346, Address: 0x131600, Func Offset: 0
	// Line 435, Address: 0x13160c, Func Offset: 0xc
	// Line 437, Address: 0x13161c, Func Offset: 0x1c
	// Line 438, Address: 0x131654, Func Offset: 0x54
	// Line 440, Address: 0x131668, Func Offset: 0x68
	// Line 441, Address: 0x131678, Func Offset: 0x78
	// Line 442, Address: 0x131688, Func Offset: 0x88
	// Func End, Address: 0x13169c, Func Offset: 0x9c
}

// 
// Start address: 0x1316a0
void Model3Draw_n(void* scp_d_, void* model_, void* work_, float mwm[4])
{
	float* weights;
	SubCharacterDisp* scp_d;
	sh_Model* shM;
	ModelWork* mwork;
	Model* model;
	int d1_cid;
	int pef;
	// Line 458, Address: 0x1316a0, Func Offset: 0
	// Line 460, Address: 0x1316d4, Func Offset: 0x34
	// Line 461, Address: 0x1316d8, Func Offset: 0x38
	// Line 466, Address: 0x1316dc, Func Offset: 0x3c
	// Line 469, Address: 0x1316e4, Func Offset: 0x44
	// Line 481, Address: 0x1316ec, Func Offset: 0x4c
	// Line 488, Address: 0x131700, Func Offset: 0x60
	// Line 489, Address: 0x131714, Func Offset: 0x74
	// Line 490, Address: 0x13171c, Func Offset: 0x7c
	// Line 494, Address: 0x131724, Func Offset: 0x84
	// Line 504, Address: 0x131730, Func Offset: 0x90
	// Line 508, Address: 0x131740, Func Offset: 0xa0
	// Line 512, Address: 0x131750, Func Offset: 0xb0
	// Line 515, Address: 0x131758, Func Offset: 0xb8
	// Line 516, Address: 0x13175c, Func Offset: 0xbc
	// Line 517, Address: 0x131768, Func Offset: 0xc8
	// Line 518, Address: 0x13176c, Func Offset: 0xcc
	// Line 519, Address: 0x13177c, Func Offset: 0xdc
	// Line 526, Address: 0x13178c, Func Offset: 0xec
	// Line 535, Address: 0x13179c, Func Offset: 0xfc
	// Line 540, Address: 0x1317ac, Func Offset: 0x10c
	// Line 542, Address: 0x1317b4, Func Offset: 0x114
	// Line 576, Address: 0x1317c4, Func Offset: 0x124
	// Line 580, Address: 0x1317d4, Func Offset: 0x134
	// Line 583, Address: 0x1317e0, Func Offset: 0x140
	// Line 585, Address: 0x1317e8, Func Offset: 0x148
	// Line 588, Address: 0x1317f0, Func Offset: 0x150
	// Line 592, Address: 0x1317f8, Func Offset: 0x158
	// Line 597, Address: 0x131800, Func Offset: 0x160
	// Line 607, Address: 0x131808, Func Offset: 0x168
	// Line 611, Address: 0x131810, Func Offset: 0x170
	// Line 624, Address: 0x13181c, Func Offset: 0x17c
	// Func End, Address: 0x131848, Func Offset: 0x1a8
}

// 
// Start address: 0x131850
int Model3WorkSize(void* model_)
{
	int size;
	Model* model;
	// Line 728, Address: 0x131850, Func Offset: 0
	// Line 729, Address: 0x131860, Func Offset: 0x10
	// Line 730, Address: 0x131864, Func Offset: 0x14
	// Line 733, Address: 0x131868, Func Offset: 0x18
	// Line 734, Address: 0x13186c, Func Offset: 0x1c
	// Line 737, Address: 0x131878, Func Offset: 0x28
	// Line 738, Address: 0x131884, Func Offset: 0x34
	// Line 741, Address: 0x131890, Func Offset: 0x40
	// Line 742, Address: 0x13189c, Func Offset: 0x4c
	// Line 743, Address: 0x1318a8, Func Offset: 0x58
	// Line 744, Address: 0x1318ac, Func Offset: 0x5c
	// Func End, Address: 0x1318c0, Func Offset: 0x70
}

// 
// Start address: 0x1318c0
void Model3InitWork(void* model_, void* work_)
{
	int i;
	int i;
	float initial[4][4];
	int size;
	void* top;
	ModelWork* work;
	Model* model;
	// Line 751, Address: 0x1318c0, Func Offset: 0
	// Line 752, Address: 0x1318ec, Func Offset: 0x2c
	// Line 753, Address: 0x1318f0, Func Offset: 0x30
	// Line 754, Address: 0x1318f4, Func Offset: 0x34
	// Line 755, Address: 0x1318f8, Func Offset: 0x38
	// Line 763, Address: 0x1318fc, Func Offset: 0x3c
	// Line 764, Address: 0x131908, Func Offset: 0x48
	// Line 765, Address: 0x13190c, Func Offset: 0x4c
	// Line 768, Address: 0x131918, Func Offset: 0x58
	// Line 769, Address: 0x131920, Func Offset: 0x60
	// Line 770, Address: 0x13192c, Func Offset: 0x6c
	// Line 772, Address: 0x131934, Func Offset: 0x74
	// Line 773, Address: 0x131940, Func Offset: 0x80
	// Line 774, Address: 0x13195c, Func Offset: 0x9c
	// Line 776, Address: 0x131970, Func Offset: 0xb0
	// Line 777, Address: 0x13197c, Func Offset: 0xbc
	// Line 780, Address: 0x131988, Func Offset: 0xc8
	// Line 783, Address: 0x131990, Func Offset: 0xd0
	// Line 784, Address: 0x13199c, Func Offset: 0xdc
	// Line 785, Address: 0x1319b0, Func Offset: 0xf0
	// Line 787, Address: 0x1319c8, Func Offset: 0x108
	// Line 788, Address: 0x1319d4, Func Offset: 0x114
	// Line 798, Address: 0x1319e0, Func Offset: 0x120
	// Line 818, Address: 0x1319ec, Func Offset: 0x12c
	// Line 819, Address: 0x1319f0, Func Offset: 0x130
	// Line 820, Address: 0x1319f4, Func Offset: 0x134
	// Func End, Address: 0x131a20, Func Offset: 0x160
}

// 
// Start address: 0x131a20
float[4][4] Model3WorkMatrices(void* work_)
{
	ModelWork* work;
	// Line 837, Address: 0x131a20, Func Offset: 0
	// Line 838, Address: 0x131a2c, Func Offset: 0xc
	// Line 839, Address: 0x131a30, Func Offset: 0x10
	// Line 840, Address: 0x131a34, Func Offset: 0x14
	// Func End, Address: 0x131a44, Func Offset: 0x24
}

// 
// Start address: 0x131a50
float* Model3WorkClusterWeights(void* work_)
{
	ModelWork* work;
	// Line 847, Address: 0x131a50, Func Offset: 0
	// Line 848, Address: 0x131a5c, Func Offset: 0xc
	// Line 849, Address: 0x131a60, Func Offset: 0x10
	// Line 850, Address: 0x131a64, Func Offset: 0x14
	// Func End, Address: 0x131a74, Func Offset: 0x24
}

