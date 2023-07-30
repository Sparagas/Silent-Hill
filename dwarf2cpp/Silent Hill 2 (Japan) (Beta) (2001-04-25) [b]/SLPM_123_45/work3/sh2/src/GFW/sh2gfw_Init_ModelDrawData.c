typedef struct _anon0;
typedef struct Part;
typedef union fsFileIndex;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct shSkelton;
typedef struct chr_mge_files;
typedef struct sh2gfw_Model_DrawAndFileData_Man;
typedef struct sh_Model;
typedef struct sh2gfw_Model_Header;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct shBattleFight;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct shBattleShot;
typedef struct SubCharacter;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct sh2gfw_Model_Header2;
typedef struct shAttackInfo;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct _CL_VHIT_WALL;
typedef union _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct sh2gfw_LoadModel_MEMMAN;
typedef struct _CL_VHIT_CHARA;
typedef struct fsMgcFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct TextPos;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct sh2gfw_AllModelData_Man;
typedef struct fsMgpFile;
typedef struct _anon3;
typedef struct _anon4;
typedef union Q_WORDDATA;
typedef struct _anon5;

typedef void(*type_15)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);

typedef float type_0[4];
typedef int type_1[4];
typedef float type_2[4][4];
typedef float type_3[4];
typedef short type_4[8];
typedef char type_5[16];
typedef unsigned long type_6[2];
typedef unsigned char type_7[3];
typedef fsFileIndex type_8[1];
typedef Q_WORDDATA type_9[48];
typedef Q_WORDDATA type_10[96];
typedef sh2gfw_TexMAN* type_11[96];
typedef sh2gfw_TexMAN type_12[96];
typedef unsigned int type_13[2];
typedef void* type_14[8];
typedef unsigned char type_16[10];
typedef shAttackInfo type_17[46];
typedef unsigned char type_19[2];
typedef unsigned char type_20[4];
typedef fsFileIndex* type_21[9];
typedef unsigned int type_22[3];
typedef void* type_23[4];
typedef float type_24[4];
typedef unsigned short type_25[4];
typedef chr_mge_files type_26[21];
typedef unsigned short type_27[4];
typedef unsigned char type_28[3];
typedef unsigned short type_29[2];
typedef unsigned short type_30[2];
typedef unsigned int type_31[2];
typedef int type_32[6];
typedef void* type_33[8];
typedef fsFileIndex type_34[1];
typedef int type_35[6];
typedef fsFileIndex type_36[1];
typedef void* type_37[6];
typedef unsigned char type_38[10];
typedef Q_WORDDATA type_39[262144];
typedef Q_WORDDATA type_40[196608];
typedef fsFileIndex type_41[1];
typedef sh2gfw_ModelDraw_MAN type_42[32];
typedef float type_43[4];
typedef sh2gfw_Model_DrawAndFileData_Man type_44[32];
typedef fsFileIndex type_45[1];
typedef unsigned char type_46[13];
typedef short type_47[32];
typedef void* type_48[32];
typedef short type_49[32];
typedef unsigned char type_50[16];
typedef void* type_51[32];
typedef unsigned char type_52[16];
typedef short type_53[32];
typedef fsFileIndex type_54[1];
typedef void* type_55[32];
typedef unsigned int type_56[4];
typedef short type_57[32];
typedef unsigned short type_58[8];
typedef void* type_59[32];
typedef unsigned char type_60[34];
typedef float type_61[4];
typedef unsigned char type_62[16];

struct _anon0
{
	float d[4][4];
};

struct Part
{
	unsigned int size;
	unsigned int type;
	unsigned int packet_offset;
	unsigned int packet_qwc;
	unsigned int xtop;
	unsigned int n_cluster_data;
	unsigned int cluster_data_offset;
	unsigned int n_skeletons;
	unsigned int skeletons_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int data_skeletons_offset;
	unsigned int data_skeleton_pairs_offset;
	unsigned int n_textures;
	unsigned int text_pos_indices_offset;
	unsigned int texture_params_offset;
	unsigned char shading_type;
	unsigned char specular_pos;
	unsigned char equipment_id;
	unsigned char hoge;
	unsigned char backclip;
	unsigned char envmap_param;
	unsigned char reserved[2];
	float phong_param_a;
	float phong_param_b;
	float blinn_param;
	unsigned int padding[3];
	float diffuse[4];
	float ambient[4];
	float specular[4];
};

union fsFileIndex
{
	_anon5 index;
	unsigned long pack;
};

struct sh2gfw_ModelDraw_MAN
{
	unsigned int chara_id;
	SubCharacter* testSubChar;
	void* Model_Head;
	void* pModel_Header;
	void* sh_Model;
	void* pAnime;
	void* pCluster;
	void* pKg1Work;
	short allnum;
	short nowtex;
	unsigned short TB_change_VU1num;
	unsigned short TB_change_VU1now;
	unsigned short TB_change_VU1[4];
	unsigned short TB_index_VU1[4];
	unsigned short TB_change_VU0num;
	unsigned short TB_change_VU0now;
	unsigned short TB_change_VU0[2];
	unsigned short TB_index_VU0[2];
	int chr_slotid[6];
	int chr_cid[6];
	int d1cid;
	int d2c1d;
	void* pTexMAN[6];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon3 src_t;
	_anon0 des_m;
	_anon3 des_t;
	_anon3 axis;
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

struct chr_mge_files
{
	fsFileIndex* model_fid;
	fsFileIndex* anime_fid;
	fsFileIndex* cluster_fid;
	fsFileIndex* shadow_fid;
	int mid;
};

struct sh2gfw_Model_DrawAndFileData_Man
{
	sh2gfw_ModelDraw_MAN* pMDM;
	void* file_struct;
	int data_size_model;
	int data_size_anim;
	int data_size_clus;
	int data_size_kg1;
	int fid_model;
	int fid_anim;
	int fid_clus;
	int fid_kg1;
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

struct sh2gfw_Model_Header
{
	unsigned char fmt_id;
	unsigned char padc[3];
	unsigned int chara_id;
	unsigned int texnum;
	unsigned int toTexHead_offset;
	unsigned int toClutsHead_offset;
	unsigned int toModel_offset;
	unsigned int pads[2];
	void* pTexMAN[8];
};

struct sh2gfw_TEX_HEAD
{
	unsigned int texture_no;
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned char color;
	unsigned char padbyte;
	unsigned short importance;
	unsigned int datasize;
	unsigned int allsize;
	unsigned char sendpsm;
	unsigned char drawpsm;
	unsigned char bitshift;
	unsigned char tagpoint;
	unsigned char bitw;
	unsigned char bith;
	unsigned short check;
	Q_WORDDATA giftag;
};

struct sh2gfw_CLUTS_HEAD
{
	unsigned int clutssize;
	unsigned int toGSREGS;
	unsigned int toRawClut;
	unsigned char clutamount;
	unsigned char transcluts;
	unsigned char clw;
	unsigned char clh;
	unsigned char fmt[16];
	unsigned char transparency[16];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct sh2gfw_TexMAN
{
	unsigned short check;
	unsigned short mode;
	unsigned short kind;
	unsigned short mark;
	unsigned short attr;
	unsigned short delay;
	int commandid;
	int slotid;
	void* Manage;
	sh2gfw_TexMAN* pPrev;
	sh2gfw_TexMAN* pNext;
	void* TexHead;
	void* ClutHead;
	void* tex;
	void* clut;
	Q_WORDDATA GIFA_D_REGS;
	Q_WORDDATA GS_TEXFLUSH;
	Q_WORDDATA GS_TEX0_1;
	Q_WORDDATA GS_TEX0_2;
	Q_WORDDATA GS_REG0;
	Q_WORDDATA GS_REG1;
	Q_WORDDATA GS_REG2;
	Q_WORDDATA GS_REG3;
	Q_WORDDATA GS_REG4;
	Q_WORDDATA TEX0_for_CLUT[48];
	Q_WORDDATA DMACNT;
	Q_WORDDATA GIFA_D_TEX;
	Q_WORDDATA GS_LABEL;
	Q_WORDDATA GS_TEX_BITBLT;
	Q_WORDDATA GS_TEX_TRXREG;
	Q_WORDDATA GS_TEX_TRXPOS;
	Q_WORDDATA GS_TEX_TRXDIR;
	Q_WORDDATA GIFIMAGE_TEX;
	Q_WORDDATA DMAREF_TEXTRANS;
	Q_WORDDATA DMACNT_CLUT;
	Q_WORDDATA GIFA_D_CLUT;
	Q_WORDDATA GS_CLUT_BITBLT;
	Q_WORDDATA GS_CLUT_TRXREG;
	Q_WORDDATA GS_CLUT_TRXPOS;
	Q_WORDDATA GS_CLUT_TRXDIR;
	Q_WORDDATA GIFIMAGE_CLUT;
	Q_WORDDATA DMAREF_CLUTTRANS;
	Q_WORDDATA DMAREF_DUMLBL;
	Q_WORDDATA DMAEND;
	Q_WORDDATA GIFA_D_LBLU;
	Q_WORDDATA GS_LABELU;
};

struct sh2gfw_ALLTEXSYNC_MAN
{
	unsigned short trans_BACK_num;
	unsigned short transed_BACK;
	unsigned short alltex_BACK;
	unsigned short trans_CHR_num;
	unsigned short transed_CHR;
	unsigned short alltex_CHR;
	unsigned short trans_OTHER_num;
	unsigned short transed_OTHER;
	unsigned short alltex_OTHER;
	unsigned short trans_GBL_num;
	unsigned short transed_GBL;
	unsigned short alltex_GBL;
	unsigned short trans_ALL_num;
	unsigned short transed_ALL;
	unsigned short alltexnum;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	int pad1;
	int pad2;
	Q_WORDDATA TexTransChain[96];
	sh2gfw_TexMAN* TransOrderTable[96];
	sh2gfw_TexMAN TexMan[96];
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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon0 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
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

struct sh2gfw_Model_Header2
{
	unsigned char fmt_id;
	unsigned char padc[3];
	unsigned int charanum;
	unsigned int toModelbytes_offset;
	unsigned int texnum;
	unsigned int toTexHead_offset;
	unsigned int toClutsHead_offset;
	unsigned int toModel_offset;
	unsigned int pads[2];
	void* pTexMAN[8];
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

union fsFile
{
	_anon4 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

struct sh2gfw_LoadModel_MEMMAN
{
	unsigned int index_model;
	unsigned int index_anime;
	unsigned int index_clus;
	<unknown fundamental type (0xa510)>* pLM_head;
	<unknown fundamental type (0xa510)>* pLA_head;
	<unknown fundamental type (0xa510)>* pCL_head;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
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

struct TextPos
{
	unsigned int block_index;
	unsigned int texture_no;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct sh2gfw_AllModelData_Man
{
	int n_active_character;
	int model_index;
	int anime_index;
	int clus_index;
	int kg1_index;
	short model_ckind_list[32];
	void* mem_model[32];
	short anime_ckind_list[32];
	void* mem_anime[32];
	short clus_ckind_list[32];
	void* mem_clus[32];
	short kg1_ckind_list[32];
	void* mem_kg1[32];
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon4
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
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

struct _anon5
{
	fsFile* fp;
	char* name;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
chr_mge_files Character_Mge_files[21];
chr_mge_files hhh_jms_TGS_turi;
sh2gfw_AllModelData_Man All_MDW;
sh2gfw_ModelDraw_MAN ModelDW_Man[32];
sh2gfw_Model_DrawAndFileData_Man ModelDRFD_Man[32];
sh2gfw_LoadModel_MEMMAN LoadModel_MemMan;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
Q_WORDDATA ANIME_DATA[196608];
Q_WORDDATA CHRDATA[262144];
fsFileIndex data_chr_jms_jms_wphand_anm[1];
fsFileIndex data_chr_jms_jms_basic3_anm[1];
fsFileIndex data_chr_scu_scu_anm[1];
fsFileIndex data_chr_scu_scu_mdl[1];
fsFileIndex data_chr_mkn_mkn_anm[1];
fsFileIndex data_chr_mkn_mkn_mdl[1];
sh2gfw_ModelDraw_MAN UniModelDW_Man;

void sh2gfw_srInit_ModelDrawWork();
int sh2gfw_Get_ActiveModelNum();
sh2gfw_ModelDraw_MAN* sh2gfw_Get_pMD(int chara_id);
void sh2gfw_ChrdrawInit_Post();
int sh2gfw_LoadInit_CharaModelData(chr_mge_files* cdl);
void sh2gfw_LoadMemorySet_CharaModelData(chr_mge_files* cdl, <unknown fundamental type (0xa510)>** ModelMemBuffer, <unknown fundamental type (0xa510)>** AnimeMemBuffer, <unknown fundamental type (0xa510)>** ClusterMemBuffer, <unknown fundamental type (0xa510)>** Kg1MemBuffer);
int sh2gfw_LOAD_CharaModelData();
void sh2gfw_SyncInit_ChacterModelData();
void sh2gfw_Chrdraw_InitTest_Main();
void* sh2gfw_CreateSubCharacter(int chara_id);
void Delete_Model(void* modeldw);
void sh2gfw_kari_clear_LM();
void sh2gfw_init_CharaModel_TextureData(sh2gfw_ModelDraw_MAN* pMD);
void init_CharaTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD);
void init_CharaTexS(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD);
int sh2gfw_check_useNuki(int cid);
int sh2gfw_LoadSet_Weapon_JmsAnim(int weapon);
void sh2gfw_GO_LoadSet_TGSTuri();
void sh2gfw_Reset_LoadSet_TGSTuri();

// 
// Start address: 0x181e30
void sh2gfw_srInit_ModelDrawWork()
{
	int i;
	// Line 439, Address: 0x181e30, Func Offset: 0
	// Line 444, Address: 0x181e3c, Func Offset: 0xc
	// Line 445, Address: 0x181e48, Func Offset: 0x18
	// Line 447, Address: 0x181e70, Func Offset: 0x40
	// Line 448, Address: 0x181ea0, Func Offset: 0x70
	// Line 451, Address: 0x181eb4, Func Offset: 0x84
	// Line 452, Address: 0x181ecc, Func Offset: 0x9c
	// Func End, Address: 0x181ee0, Func Offset: 0xb0
}

// 
// Start address: 0x181ee0
int sh2gfw_Get_ActiveModelNum()
{
	// Line 466, Address: 0x181ee0, Func Offset: 0
	// Line 467, Address: 0x181ee8, Func Offset: 0x8
	// Func End, Address: 0x181ef0, Func Offset: 0x10
}

// 
// Start address: 0x181ef0
sh2gfw_ModelDraw_MAN* sh2gfw_Get_pMD(int chara_id)
{
	int cid;
	int id;
	int kind;
	int i;
	// Line 478, Address: 0x181ef0, Func Offset: 0
	// Line 481, Address: 0x181f08, Func Offset: 0x18
	// Line 482, Address: 0x181f10, Func Offset: 0x20
	// Line 483, Address: 0x181f18, Func Offset: 0x28
	// Line 486, Address: 0x181f1c, Func Offset: 0x2c
	// Line 487, Address: 0x181f28, Func Offset: 0x38
	// Line 489, Address: 0x181f54, Func Offset: 0x64
	// Line 491, Address: 0x181f7c, Func Offset: 0x8c
	// Line 494, Address: 0x181f8c, Func Offset: 0x9c
	// Line 495, Address: 0x181f90, Func Offset: 0xa0
	// Func End, Address: 0x181fac, Func Offset: 0xbc
}

// 
// Start address: 0x181fb0
void sh2gfw_ChrdrawInit_Post()
{
	// Line 505, Address: 0x181fb0, Func Offset: 0
	// Line 510, Address: 0x181fb8, Func Offset: 0x8
	// Line 512, Address: 0x181fc0, Func Offset: 0x10
	// Line 514, Address: 0x181fc8, Func Offset: 0x18
	// Line 515, Address: 0x181fd0, Func Offset: 0x20
	// Line 517, Address: 0x181fd8, Func Offset: 0x28
	// Func End, Address: 0x181fe8, Func Offset: 0x38
}

// 
// Start address: 0x181ff0
int sh2gfw_LoadInit_CharaModelData(chr_mge_files* cdl)
{
	sh2gfw_ModelDraw_MAN* pMD;
	chr_mge_files* cdlist;
	sh2gfw_Model_DrawAndFileData_Man* pMDRFD;
	chr_mge_files* chardl;
	int i;
	// Line 530, Address: 0x181ff0, Func Offset: 0
	// Line 532, Address: 0x182010, Func Offset: 0x20
	// Line 533, Address: 0x182014, Func Offset: 0x24
	// Line 536, Address: 0x182018, Func Offset: 0x28
	// Line 538, Address: 0x182020, Func Offset: 0x30
	// Line 539, Address: 0x182028, Func Offset: 0x38
	// Line 540, Address: 0x182030, Func Offset: 0x40
	// Line 542, Address: 0x182038, Func Offset: 0x48
	// Line 544, Address: 0x182040, Func Offset: 0x50
	// Line 549, Address: 0x182048, Func Offset: 0x58
	// Line 551, Address: 0x182050, Func Offset: 0x60
	// Line 552, Address: 0x18206c, Func Offset: 0x7c
	// Line 555, Address: 0x1820a8, Func Offset: 0xb8
	// Line 557, Address: 0x1820c4, Func Offset: 0xd4
	// Line 558, Address: 0x1820e0, Func Offset: 0xf0
	// Line 561, Address: 0x1820f8, Func Offset: 0x108
	// Line 562, Address: 0x182104, Func Offset: 0x114
	// Line 563, Address: 0x182114, Func Offset: 0x124
	// Line 564, Address: 0x182128, Func Offset: 0x138
	// Line 565, Address: 0x182130, Func Offset: 0x140
	// Line 566, Address: 0x182134, Func Offset: 0x144
	// Line 568, Address: 0x182138, Func Offset: 0x148
	// Line 573, Address: 0x182144, Func Offset: 0x154
	// Line 574, Address: 0x182154, Func Offset: 0x164
	// Line 575, Address: 0x182168, Func Offset: 0x178
	// Line 576, Address: 0x182170, Func Offset: 0x180
	// Line 578, Address: 0x18217c, Func Offset: 0x18c
	// Line 579, Address: 0x182184, Func Offset: 0x194
	// Line 582, Address: 0x182188, Func Offset: 0x198
	// Line 583, Address: 0x182194, Func Offset: 0x1a4
	// Line 584, Address: 0x1821a4, Func Offset: 0x1b4
	// Line 585, Address: 0x1821b8, Func Offset: 0x1c8
	// Line 586, Address: 0x1821c0, Func Offset: 0x1d0
	// Line 587, Address: 0x1821c4, Func Offset: 0x1d4
	// Line 589, Address: 0x1821c8, Func Offset: 0x1d8
	// Line 590, Address: 0x1821d4, Func Offset: 0x1e4
	// Line 591, Address: 0x1821e4, Func Offset: 0x1f4
	// Line 592, Address: 0x1821f8, Func Offset: 0x208
	// Line 593, Address: 0x182200, Func Offset: 0x210
	// Line 594, Address: 0x182204, Func Offset: 0x214
	// Line 596, Address: 0x182208, Func Offset: 0x218
	// Line 597, Address: 0x18220c, Func Offset: 0x21c
	// Line 598, Address: 0x182210, Func Offset: 0x220
	// Line 600, Address: 0x182220, Func Offset: 0x230
	// Line 601, Address: 0x182228, Func Offset: 0x238
	// Line 602, Address: 0x18222c, Func Offset: 0x23c
	// Func End, Address: 0x182250, Func Offset: 0x260
}

// 
// Start address: 0x182250
void sh2gfw_LoadMemorySet_CharaModelData(chr_mge_files* cdl, <unknown fundamental type (0xa510)>** ModelMemBuffer, <unknown fundamental type (0xa510)>** AnimeMemBuffer, <unknown fundamental type (0xa510)>** ClusterMemBuffer, <unknown fundamental type (0xa510)>** Kg1MemBuffer)
{
	chr_mge_files* cdlist2;
	sh2gfw_ModelDraw_MAN* pMD2;
	sh2gfw_Model_DrawAndFileData_Man* pMDRFD2;
	<unknown fundamental type (0xa510)>* kg1buf;
	<unknown fundamental type (0xa510)>* clusterbuf;
	<unknown fundamental type (0xa510)>* animebuf;
	<unknown fundamental type (0xa510)>* modelbuf;
	int ikg1;
	int iclus;
	int ianm;
	int imdl;
	int i;
	// Line 622, Address: 0x182250, Func Offset: 0
	// Line 624, Address: 0x182290, Func Offset: 0x40
	// Line 627, Address: 0x182294, Func Offset: 0x44
	// Line 628, Address: 0x1822a0, Func Offset: 0x50
	// Line 629, Address: 0x1822ac, Func Offset: 0x5c
	// Line 630, Address: 0x1822b4, Func Offset: 0x64
	// Line 634, Address: 0x1822c0, Func Offset: 0x70
	// Line 635, Address: 0x1822c8, Func Offset: 0x78
	// Line 636, Address: 0x1822d0, Func Offset: 0x80
	// Line 637, Address: 0x1822d8, Func Offset: 0x88
	// Line 644, Address: 0x1822e4, Func Offset: 0x94
	// Line 645, Address: 0x182314, Func Offset: 0xc4
	// Line 650, Address: 0x182318, Func Offset: 0xc8
	// Line 651, Address: 0x182334, Func Offset: 0xe4
	// Line 653, Address: 0x182350, Func Offset: 0x100
	// Line 658, Address: 0x182368, Func Offset: 0x118
	// Line 660, Address: 0x182374, Func Offset: 0x124
	// Line 661, Address: 0x182384, Func Offset: 0x134
	// Line 662, Address: 0x1823a0, Func Offset: 0x150
	// Line 663, Address: 0x1823a8, Func Offset: 0x158
	// Line 664, Address: 0x1823c4, Func Offset: 0x174
	// Line 665, Address: 0x1823cc, Func Offset: 0x17c
	// Line 666, Address: 0x1823d4, Func Offset: 0x184
	// Line 667, Address: 0x1823dc, Func Offset: 0x18c
	// Line 668, Address: 0x1823f4, Func Offset: 0x1a4
	// Line 670, Address: 0x182400, Func Offset: 0x1b0
	// Line 671, Address: 0x182420, Func Offset: 0x1d0
	// Line 672, Address: 0x182428, Func Offset: 0x1d8
	// Line 673, Address: 0x18242c, Func Offset: 0x1dc
	// Line 676, Address: 0x182440, Func Offset: 0x1f0
	// Line 678, Address: 0x18244c, Func Offset: 0x1fc
	// Line 679, Address: 0x18245c, Func Offset: 0x20c
	// Line 680, Address: 0x182478, Func Offset: 0x228
	// Line 681, Address: 0x182494, Func Offset: 0x244
	// Line 682, Address: 0x18249c, Func Offset: 0x24c
	// Line 683, Address: 0x1824a4, Func Offset: 0x254
	// Line 684, Address: 0x1824bc, Func Offset: 0x26c
	// Line 686, Address: 0x1824c8, Func Offset: 0x278
	// Line 687, Address: 0x1824e8, Func Offset: 0x298
	// Line 688, Address: 0x1824f0, Func Offset: 0x2a0
	// Line 689, Address: 0x1824f4, Func Offset: 0x2a4
	// Line 691, Address: 0x182508, Func Offset: 0x2b8
	// Line 694, Address: 0x182514, Func Offset: 0x2c4
	// Line 697, Address: 0x18251c, Func Offset: 0x2cc
	// Line 698, Address: 0x182520, Func Offset: 0x2d0
	// Line 699, Address: 0x182528, Func Offset: 0x2d8
	// Line 700, Address: 0x18252c, Func Offset: 0x2dc
	// Line 701, Address: 0x18253c, Func Offset: 0x2ec
	// Line 703, Address: 0x182544, Func Offset: 0x2f4
	// Line 704, Address: 0x182564, Func Offset: 0x314
	// Line 705, Address: 0x18256c, Func Offset: 0x31c
	// Line 706, Address: 0x182570, Func Offset: 0x320
	// Line 709, Address: 0x182584, Func Offset: 0x334
	// Line 712, Address: 0x182590, Func Offset: 0x340
	// Line 713, Address: 0x18259c, Func Offset: 0x34c
	// Line 715, Address: 0x1825ac, Func Offset: 0x35c
	// Line 716, Address: 0x1825d4, Func Offset: 0x384
	// Line 717, Address: 0x1825dc, Func Offset: 0x38c
	// Line 718, Address: 0x1825e0, Func Offset: 0x390
	// Line 724, Address: 0x1825f4, Func Offset: 0x3a4
	// Line 725, Address: 0x1825fc, Func Offset: 0x3ac
	// Line 726, Address: 0x182604, Func Offset: 0x3b4
	// Line 727, Address: 0x18260c, Func Offset: 0x3bc
	// Line 730, Address: 0x182614, Func Offset: 0x3c4
	// Func End, Address: 0x182648, Func Offset: 0x3f8
}

// 
// Start address: 0x182650
int sh2gfw_LOAD_CharaModelData()
{
	void* load_addr;
	sh2gfw_ModelDraw_MAN* pMD3;
	sh2gfw_Model_DrawAndFileData_Man* pMDRFD3;
	chr_mge_files* cdlist3;
	int i;
	// Line 739, Address: 0x182650, Func Offset: 0
	// Line 743, Address: 0x18266c, Func Offset: 0x1c
	// Line 744, Address: 0x182678, Func Offset: 0x28
	// Line 746, Address: 0x182694, Func Offset: 0x44
	// Line 747, Address: 0x1826ac, Func Offset: 0x5c
	// Line 750, Address: 0x1826c8, Func Offset: 0x78
	// Line 751, Address: 0x1826d4, Func Offset: 0x84
	// Line 753, Address: 0x1826f0, Func Offset: 0xa0
	// Line 756, Address: 0x1826f8, Func Offset: 0xa8
	// Line 757, Address: 0x182704, Func Offset: 0xb4
	// Line 759, Address: 0x182720, Func Offset: 0xd0
	// Line 762, Address: 0x182728, Func Offset: 0xd8
	// Line 763, Address: 0x182734, Func Offset: 0xe4
	// Line 765, Address: 0x182750, Func Offset: 0x100
	// Line 768, Address: 0x182758, Func Offset: 0x108
	// Line 770, Address: 0x182764, Func Offset: 0x114
	// Line 771, Address: 0x182774, Func Offset: 0x124
	// Line 772, Address: 0x182788, Func Offset: 0x138
	// Line 773, Address: 0x182790, Func Offset: 0x140
	// Line 774, Address: 0x182798, Func Offset: 0x148
	// Line 776, Address: 0x1827b4, Func Offset: 0x164
	// Func End, Address: 0x1827d8, Func Offset: 0x188
}

// 
// Start address: 0x1827e0
void sh2gfw_SyncInit_ChacterModelData()
{
	sh2gfw_ModelDraw_MAN* pMD4;
	sh2gfw_Model_DrawAndFileData_Man* pMDRFD4;
	chr_mge_files* cdlist;
	int ikg12;
	int iclus2;
	int ianm2;
	int imdl2;
	int i;
	// Line 788, Address: 0x1827e0, Func Offset: 0
	// Line 792, Address: 0x182808, Func Offset: 0x28
	// Line 795, Address: 0x182818, Func Offset: 0x38
	// Line 796, Address: 0x182824, Func Offset: 0x44
	// Line 798, Address: 0x182840, Func Offset: 0x60
	// Line 799, Address: 0x182858, Func Offset: 0x78
	// Line 802, Address: 0x182874, Func Offset: 0x94
	// Line 803, Address: 0x182884, Func Offset: 0xa4
	// Line 805, Address: 0x182894, Func Offset: 0xb4
	// Line 807, Address: 0x1828a8, Func Offset: 0xc8
	// Line 809, Address: 0x1828b4, Func Offset: 0xd4
	// Line 811, Address: 0x1828c0, Func Offset: 0xe0
	// Line 812, Address: 0x1828e8, Func Offset: 0x108
	// Line 813, Address: 0x1828f0, Func Offset: 0x110
	// Line 814, Address: 0x182904, Func Offset: 0x124
	// Line 815, Address: 0x182908, Func Offset: 0x128
	// Line 820, Address: 0x182910, Func Offset: 0x130
	// Line 821, Address: 0x182920, Func Offset: 0x140
	// Line 822, Address: 0x182930, Func Offset: 0x150
	// Line 823, Address: 0x182958, Func Offset: 0x178
	// Line 824, Address: 0x182960, Func Offset: 0x180
	// Line 825, Address: 0x182974, Func Offset: 0x194
	// Line 826, Address: 0x182978, Func Offset: 0x198
	// Line 831, Address: 0x182980, Func Offset: 0x1a0
	// Line 832, Address: 0x182990, Func Offset: 0x1b0
	// Line 833, Address: 0x1829a0, Func Offset: 0x1c0
	// Line 834, Address: 0x1829c8, Func Offset: 0x1e8
	// Line 835, Address: 0x1829d0, Func Offset: 0x1f0
	// Line 836, Address: 0x1829e4, Func Offset: 0x204
	// Line 837, Address: 0x1829e8, Func Offset: 0x208
	// Line 842, Address: 0x1829f0, Func Offset: 0x210
	// Line 843, Address: 0x182a00, Func Offset: 0x220
	// Line 844, Address: 0x182a10, Func Offset: 0x230
	// Line 845, Address: 0x182a20, Func Offset: 0x240
	// Line 846, Address: 0x182a48, Func Offset: 0x268
	// Line 847, Address: 0x182a50, Func Offset: 0x270
	// Line 848, Address: 0x182a64, Func Offset: 0x284
	// Line 849, Address: 0x182a68, Func Offset: 0x288
	// Line 850, Address: 0x182a70, Func Offset: 0x290
	// Line 853, Address: 0x182a8c, Func Offset: 0x2ac
	// Line 855, Address: 0x182a94, Func Offset: 0x2b4
	// Func End, Address: 0x182ac4, Func Offset: 0x2e4
}

// 
// Start address: 0x182ad0
void sh2gfw_Chrdraw_InitTest_Main()
{
	<unknown fundamental type (0xa510)>* kg1buf;
	<unknown fundamental type (0xa510)>* clusbuf;
	<unknown fundamental type (0xa510)>* animebuf;
	<unknown fundamental type (0xa510)>* modelbuf;
	int chrmax;
	int i;
	// Line 869, Address: 0x182ad0, Func Offset: 0
	// Line 874, Address: 0x182ae0, Func Offset: 0x10
	// Line 881, Address: 0x182af0, Func Offset: 0x20
	// Line 882, Address: 0x182afc, Func Offset: 0x2c
	// Line 885, Address: 0x182b08, Func Offset: 0x38
	// Line 886, Address: 0x182b0c, Func Offset: 0x3c
	// Line 887, Address: 0x182b10, Func Offset: 0x40
	// Line 888, Address: 0x182b14, Func Offset: 0x44
	// Line 892, Address: 0x182b18, Func Offset: 0x48
	// Line 900, Address: 0x182b48, Func Offset: 0x78
	// Line 904, Address: 0x182b5c, Func Offset: 0x8c
	// Line 911, Address: 0x182b64, Func Offset: 0x94
	// Line 913, Address: 0x182b6c, Func Offset: 0x9c
	// Func End, Address: 0x182b84, Func Offset: 0xb4
}

// 
// Start address: 0x182b90
void* sh2gfw_CreateSubCharacter(int chara_id)
{
	SubCharacter* pSubc;
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 933, Address: 0x182b90, Func Offset: 0
	// Line 938, Address: 0x182ba4, Func Offset: 0x14
	// Line 939, Address: 0x182bb4, Func Offset: 0x24
	// Line 942, Address: 0x182bbc, Func Offset: 0x2c
	// Line 945, Address: 0x182bc8, Func Offset: 0x38
	// Line 954, Address: 0x182be8, Func Offset: 0x58
	// Line 960, Address: 0x182bfc, Func Offset: 0x6c
	// Line 961, Address: 0x182c00, Func Offset: 0x70
	// Func End, Address: 0x182c18, Func Offset: 0x88
}

// 
// Start address: 0x182c20
void Delete_Model(void* modeldw)
{
	int i;
	sh_Model* smd;
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 970, Address: 0x182c20, Func Offset: 0
	// Line 976, Address: 0x182c38, Func Offset: 0x18
	// Line 978, Address: 0x182c3c, Func Offset: 0x1c
	// Line 980, Address: 0x182c6c, Func Offset: 0x4c
	// Line 982, Address: 0x182c70, Func Offset: 0x50
	// Line 983, Address: 0x182c74, Func Offset: 0x54
	// Line 986, Address: 0x182c80, Func Offset: 0x60
	// Line 987, Address: 0x182cc8, Func Offset: 0xa8
	// Line 988, Address: 0x182ce0, Func Offset: 0xc0
	// Func End, Address: 0x182cfc, Func Offset: 0xdc
}

// 
// Start address: 0x182d00
void sh2gfw_kari_clear_LM()
{
	// Line 1203, Address: 0x182d00, Func Offset: 0
	// Line 1204, Address: 0x182d08, Func Offset: 0x8
	// Line 1206, Address: 0x182d18, Func Offset: 0x18
	// Line 1207, Address: 0x182d20, Func Offset: 0x20
	// Line 1210, Address: 0x182d30, Func Offset: 0x30
	// Func End, Address: 0x182d38, Func Offset: 0x38
}

// 
// Start address: 0x182d40
void sh2gfw_init_CharaModel_TextureData(sh2gfw_ModelDraw_MAN* pMD)
{
	// Line 1219, Address: 0x182d40, Func Offset: 0
	// Line 1221, Address: 0x182d4c, Func Offset: 0xc
	// Line 1223, Address: 0x182d60, Func Offset: 0x20
	// Line 1224, Address: 0x182d74, Func Offset: 0x34
	// Line 1226, Address: 0x182d7c, Func Offset: 0x3c
	// Line 1229, Address: 0x182d90, Func Offset: 0x50
	// Func End, Address: 0x182da0, Func Offset: 0x60
}

// 
// Start address: 0x182da0
void init_CharaTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD)
{
	int buff;
	Part* part;
	Part* parts_top;
	int n_parts;
	int texblk_index;
	short* pitex;
	TextPos* pTP;
	int mode;
	int j;
	int i;
	sh2gfw_Model_Header* sMH;
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	sh_Model* pModel;
	// Line 1238, Address: 0x182da0, Func Offset: 0
	// Line 1245, Address: 0x182dd4, Func Offset: 0x34
	// Line 1247, Address: 0x182ddc, Func Offset: 0x3c
	// Line 1249, Address: 0x182de4, Func Offset: 0x44
	// Line 1251, Address: 0x182e48, Func Offset: 0xa8
	// Line 1252, Address: 0x182e54, Func Offset: 0xb4
	// Line 1253, Address: 0x182e6c, Func Offset: 0xcc
	// Line 1255, Address: 0x182e88, Func Offset: 0xe8
	// Line 1256, Address: 0x182e98, Func Offset: 0xf8
	// Line 1257, Address: 0x182eac, Func Offset: 0x10c
	// Line 1259, Address: 0x182eb8, Func Offset: 0x118
	// Line 1260, Address: 0x182ec0, Func Offset: 0x120
	// Line 1263, Address: 0x182ed8, Func Offset: 0x138
	// Line 1268, Address: 0x182f04, Func Offset: 0x164
	// Line 1270, Address: 0x182f1c, Func Offset: 0x17c
	// Line 1273, Address: 0x182f38, Func Offset: 0x198
	// Line 1281, Address: 0x182f50, Func Offset: 0x1b0
	// Line 1282, Address: 0x182f58, Func Offset: 0x1b8
	// Line 1283, Address: 0x182f60, Func Offset: 0x1c0
	// Line 1284, Address: 0x182f68, Func Offset: 0x1c8
	// Line 1286, Address: 0x182f70, Func Offset: 0x1d0
	// Line 1291, Address: 0x182f80, Func Offset: 0x1e0
	// Line 1292, Address: 0x182f88, Func Offset: 0x1e8
	// Line 1294, Address: 0x182f94, Func Offset: 0x1f4
	// Line 1302, Address: 0x182f9c, Func Offset: 0x1fc
	// Line 1304, Address: 0x182fac, Func Offset: 0x20c
	// Line 1305, Address: 0x182fb4, Func Offset: 0x214
	// Line 1306, Address: 0x182fbc, Func Offset: 0x21c
	// Line 1308, Address: 0x182fd4, Func Offset: 0x234
	// Line 1310, Address: 0x182fe0, Func Offset: 0x240
	// Line 1311, Address: 0x183000, Func Offset: 0x260
	// Line 1312, Address: 0x183028, Func Offset: 0x288
	// Line 1313, Address: 0x18302c, Func Offset: 0x28c
	// Line 1315, Address: 0x183030, Func Offset: 0x290
	// Line 1318, Address: 0x183050, Func Offset: 0x2b0
	// Line 1319, Address: 0x183074, Func Offset: 0x2d4
	// Line 1322, Address: 0x183094, Func Offset: 0x2f4
	// Line 1324, Address: 0x1830b0, Func Offset: 0x310
	// Line 1325, Address: 0x1830b8, Func Offset: 0x318
	// Line 1327, Address: 0x1830c4, Func Offset: 0x324
	// Line 1329, Address: 0x1830d4, Func Offset: 0x334
	// Line 1330, Address: 0x1830dc, Func Offset: 0x33c
	// Line 1331, Address: 0x1830e4, Func Offset: 0x344
	// Line 1332, Address: 0x1830fc, Func Offset: 0x35c
	// Line 1334, Address: 0x183108, Func Offset: 0x368
	// Line 1335, Address: 0x183128, Func Offset: 0x388
	// Line 1336, Address: 0x183150, Func Offset: 0x3b0
	// Line 1337, Address: 0x183154, Func Offset: 0x3b4
	// Line 1338, Address: 0x183158, Func Offset: 0x3b8
	// Line 1343, Address: 0x183178, Func Offset: 0x3d8
	// Line 1344, Address: 0x18319c, Func Offset: 0x3fc
	// Line 1346, Address: 0x1831bc, Func Offset: 0x41c
	// Line 1348, Address: 0x1831c4, Func Offset: 0x424
	// Line 1349, Address: 0x1831e8, Func Offset: 0x448
	// Line 1358, Address: 0x183208, Func Offset: 0x468
	// Func End, Address: 0x18323c, Func Offset: 0x49c
}

// 
// Start address: 0x183240
void init_CharaTexS(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD)
{
	unsigned int* pBLS;
	unsigned int mode;
	unsigned int k;
	unsigned int j;
	unsigned int i;
	sh2gfw_Model_Header2* sMH;
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	sh_Model* pModel;
	// Line 1366, Address: 0x183240, Func Offset: 0
	// Line 1371, Address: 0x183274, Func Offset: 0x34
	// Line 1377, Address: 0x18327c, Func Offset: 0x3c
	// Line 1378, Address: 0x183288, Func Offset: 0x48
	// Line 1379, Address: 0x18329c, Func Offset: 0x5c
	// Line 1381, Address: 0x1832b8, Func Offset: 0x78
	// Line 1382, Address: 0x1832c8, Func Offset: 0x88
	// Line 1383, Address: 0x1832dc, Func Offset: 0x9c
	// Line 1385, Address: 0x1832e8, Func Offset: 0xa8
	// Line 1386, Address: 0x1832ec, Func Offset: 0xac
	// Line 1389, Address: 0x1832f8, Func Offset: 0xb8
	// Line 1394, Address: 0x183320, Func Offset: 0xe0
	// Line 1399, Address: 0x183338, Func Offset: 0xf8
	// Line 1401, Address: 0x183344, Func Offset: 0x104
	// Line 1402, Address: 0x18335c, Func Offset: 0x11c
	// Line 1404, Address: 0x183364, Func Offset: 0x124
	// Line 1405, Address: 0x183370, Func Offset: 0x130
	// Line 1407, Address: 0x1833a8, Func Offset: 0x168
	// Line 1410, Address: 0x1833c0, Func Offset: 0x180
	// Line 1411, Address: 0x1833cc, Func Offset: 0x18c
	// Line 1412, Address: 0x1833e0, Func Offset: 0x1a0
	// Line 1414, Address: 0x1833fc, Func Offset: 0x1bc
	// Line 1415, Address: 0x18340c, Func Offset: 0x1cc
	// Line 1416, Address: 0x183420, Func Offset: 0x1e0
	// Line 1418, Address: 0x183430, Func Offset: 0x1f0
	// Line 1419, Address: 0x183434, Func Offset: 0x1f4
	// Line 1422, Address: 0x183440, Func Offset: 0x200
	// Line 1426, Address: 0x183468, Func Offset: 0x228
	// Line 1429, Address: 0x183480, Func Offset: 0x240
	// Func End, Address: 0x1834b4, Func Offset: 0x274
}

// 
// Start address: 0x1834c0
int sh2gfw_check_useNuki(int cid)
{
	int ret;
	// Line 1462, Address: 0x1834c0, Func Offset: 0
	// Line 1465, Address: 0x1834cc, Func Offset: 0xc
	// Line 1469, Address: 0x1834fc, Func Offset: 0x3c
	// Line 1470, Address: 0x183500, Func Offset: 0x40
	// Line 1472, Address: 0x183508, Func Offset: 0x48
	// Line 1476, Address: 0x18350c, Func Offset: 0x4c
	// Line 1478, Address: 0x183510, Func Offset: 0x50
	// Func End, Address: 0x183520, Func Offset: 0x60
}

// 
// Start address: 0x183520
int sh2gfw_LoadSet_Weapon_JmsAnim(int weapon)
{
	int fid;
	int size;
	void* load_addr;
	fsFileIndex* file[9];
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 1547, Address: 0x183520, Func Offset: 0
	// Line 1549, Address: 0x18353c, Func Offset: 0x1c
	// Line 1564, Address: 0x183560, Func Offset: 0x40
	// Line 1565, Address: 0x183570, Func Offset: 0x50
	// Line 1569, Address: 0x183574, Func Offset: 0x54
	// Line 1570, Address: 0x183590, Func Offset: 0x70
	// Line 1571, Address: 0x1835a4, Func Offset: 0x84
	// Line 1574, Address: 0x1835c4, Func Offset: 0xa4
	// Line 1575, Address: 0x1835e0, Func Offset: 0xc0
	// Func End, Address: 0x183600, Func Offset: 0xe0
}

// 
// Start address: 0x183600
void sh2gfw_GO_LoadSet_TGSTuri()
{
	sh_Model* sMH;
	sh_Model* sMH;
	sh2gfw_ModelDraw_MAN* pMD;
	int i;
	int fid;
	void* load_anime;
	void* load_model;
	fsFileIndex* sfid;
	fsFileIndex* cfid;
	fsFileIndex* afid;
	fsFileIndex* mfid;
	// Line 1613, Address: 0x183600, Func Offset: 0
	// Line 1616, Address: 0x18362c, Func Offset: 0x2c
	// Line 1617, Address: 0x183634, Func Offset: 0x34
	// Line 1618, Address: 0x18363c, Func Offset: 0x3c
	// Line 1619, Address: 0x183648, Func Offset: 0x48
	// Line 1629, Address: 0x183654, Func Offset: 0x54
	// Line 1631, Address: 0x183664, Func Offset: 0x64
	// Line 1632, Address: 0x183668, Func Offset: 0x68
	// Line 1634, Address: 0x18366c, Func Offset: 0x6c
	// Line 1636, Address: 0x183678, Func Offset: 0x78
	// Line 1637, Address: 0x18367c, Func Offset: 0x7c
	// Line 1638, Address: 0x183694, Func Offset: 0x94
	// Line 1641, Address: 0x1836a4, Func Offset: 0xa4
	// Line 1642, Address: 0x1836b4, Func Offset: 0xb4
	// Line 1644, Address: 0x1836c0, Func Offset: 0xc0
	// Line 1645, Address: 0x1836c4, Func Offset: 0xc4
	// Line 1646, Address: 0x1836dc, Func Offset: 0xdc
	// Line 1649, Address: 0x1836ec, Func Offset: 0xec
	// Line 1651, Address: 0x1836f4, Func Offset: 0xf4
	// Line 1663, Address: 0x1836f8, Func Offset: 0xf8
	// Line 1665, Address: 0x183700, Func Offset: 0x100
	// Line 1666, Address: 0x183714, Func Offset: 0x114
	// Line 1667, Address: 0x183724, Func Offset: 0x124
	// Line 1669, Address: 0x183730, Func Offset: 0x130
	// Line 1670, Address: 0x183738, Func Offset: 0x138
	// Line 1674, Address: 0x18373c, Func Offset: 0x13c
	// Line 1679, Address: 0x18374c, Func Offset: 0x14c
	// Line 1681, Address: 0x183754, Func Offset: 0x154
	// Line 1682, Address: 0x183768, Func Offset: 0x168
	// Line 1683, Address: 0x183778, Func Offset: 0x178
	// Line 1687, Address: 0x18377c, Func Offset: 0x17c
	// Func End, Address: 0x1837b0, Func Offset: 0x1b0
}

// 
// Start address: 0x1837b0
void sh2gfw_Reset_LoadSet_TGSTuri()
{
	sh_Model* sMH;
	fsFileIndex* file;
	fsFileIndex* file;
	sh2gfw_ModelDraw_MAN* pMD_mkn;
	sh2gfw_ModelDraw_MAN* pMD_scu;
	int i;
	int fid;
	// Line 1695, Address: 0x1837b0, Func Offset: 0
	// Line 1701, Address: 0x1837d4, Func Offset: 0x24
	// Line 1702, Address: 0x1837e4, Func Offset: 0x34
	// Line 1713, Address: 0x1837fc, Func Offset: 0x4c
	// Line 1715, Address: 0x18380c, Func Offset: 0x5c
	// Line 1717, Address: 0x183814, Func Offset: 0x64
	// Line 1718, Address: 0x183828, Func Offset: 0x78
	// Line 1719, Address: 0x183838, Func Offset: 0x88
	// Line 1720, Address: 0x183840, Func Offset: 0x90
	// Line 1721, Address: 0x183854, Func Offset: 0xa4
	// Line 1724, Address: 0x183864, Func Offset: 0xb4
	// Line 1726, Address: 0x183874, Func Offset: 0xc4
	// Line 1728, Address: 0x18387c, Func Offset: 0xcc
	// Line 1729, Address: 0x183890, Func Offset: 0xe0
	// Line 1730, Address: 0x1838a0, Func Offset: 0xf0
	// Line 1731, Address: 0x1838a8, Func Offset: 0xf8
	// Line 1732, Address: 0x1838bc, Func Offset: 0x10c
	// Line 1736, Address: 0x1838cc, Func Offset: 0x11c
	// Line 1738, Address: 0x1838ec, Func Offset: 0x13c
	// Line 1741, Address: 0x1838f8, Func Offset: 0x148
	// Line 1742, Address: 0x1838fc, Func Offset: 0x14c
	// Line 1745, Address: 0x183914, Func Offset: 0x164
	// Line 1746, Address: 0x183918, Func Offset: 0x168
	// Line 1747, Address: 0x183930, Func Offset: 0x180
	// Line 1749, Address: 0x183944, Func Offset: 0x194
	// Func End, Address: 0x183970, Func Offset: 0x1c0
}

