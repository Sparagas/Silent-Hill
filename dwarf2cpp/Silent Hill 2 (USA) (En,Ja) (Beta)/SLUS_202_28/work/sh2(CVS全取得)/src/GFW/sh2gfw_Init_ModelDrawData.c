typedef struct fsMgpFile;
typedef union fsFileIndex;
typedef struct sh2gfw_ModelDraw_MAN;
typedef union fsFile;
typedef struct sh2gfw_AllModelData_Man;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sh2gfw_LoadModel_MEMMAN;
typedef struct SubCharacter;
typedef struct sh_Model;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_Model_Header;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _anon2;
typedef union Q_WORDDATA;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon3;
typedef struct Part;
typedef struct shBattleFight;
typedef struct chr_mge_files;
typedef struct shBattleShot;
typedef struct TextPos;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shSkelton;
typedef struct _CL_VHIT_WALL;
typedef struct fsCdFile;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon4;
typedef struct _CL_VHIT_RESULT;
typedef union _anon5;
typedef struct fsMgfFile;
typedef struct fsHdFile;

typedef void(*type_9)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef int type_0[6];
typedef unsigned char type_1[14];
typedef int type_2[6];
typedef fsFileIndex type_3[1];
typedef fsFileIndex type_4[1];
typedef void* type_5[6];
typedef fsFileIndex* type_6[9];
typedef int type_7[2];
typedef sh2gfw_ModelDraw_MAN* type_8[32];
typedef void* type_10[32];
typedef int type_11[32];
typedef int type_13[32];
typedef int type_14[32];
typedef unsigned char type_15[69];
typedef int type_16[32];
typedef unsigned char type_17[4];
typedef unsigned char type_18[3];
typedef unsigned char type_19[16];
typedef fsFileIndex type_20[1];
typedef float type_21[4];
typedef float type_22[4][4];
typedef unsigned int type_23[4];
typedef unsigned char type_24[16];
typedef unsigned short type_25[8];
typedef float type_26[4];
typedef unsigned char type_27[16];
typedef void* type_28[8];
typedef int type_29[4];
typedef short type_30[8];
typedef char type_31[16];
typedef unsigned long type_32[2];
typedef float type_33[4];
typedef unsigned char type_34[14];
typedef float type_35[4];
typedef Q_WORDDATA type_36[48];
typedef fsFileIndex type_37[1];
typedef sh2gfw_TexMAN type_38[96];
typedef fsFileIndex type_39[1];
typedef chr_mge_files type_40[21];
typedef void* type_41[4];
typedef unsigned char type_42[97];
typedef unsigned char type_43[2];
typedef float type_44[4];
typedef unsigned int type_45[3];
typedef fsFileIndex type_46[1];
typedef unsigned char type_47[20];
typedef <unknown fundamental type (0xa510)> type_48[524288];
typedef Q_WORDDATA type_49[1024];
typedef unsigned short type_50[4];
typedef sh2gfw_ModelDraw_MAN type_51[48];
typedef unsigned short type_52[4];
typedef unsigned short type_53[2];
typedef unsigned short type_54[2];
typedef shAttackInfo type_55[66];

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

union fsFileIndex
{
	_anon2 index;
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

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct sh2gfw_AllModelData_Man
{
	int n_active_character;
	int n_load_character;
	sh2gfw_ModelDraw_MAN* pMDM[32];
	void* file_struct[32];
	int fid_model[32];
	int fid_anim[32];
	int fid_clus[32];
	int fid_kg1[32];
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon1
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

struct sh2gfw_LoadModel_MEMMAN
{
	unsigned int index_model;
	unsigned int index_anime;
	unsigned int index_clus;
	<unknown fundamental type (0xa510)>* pLM_head;
	<unknown fundamental type (0xa510)>* pLA_head;
	<unknown fundamental type (0xa510)>* pCL_head;
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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
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

struct sh2gfw_Model_Header
{
	unsigned char NoTextureID;
	unsigned char padc[3];
	unsigned int chara_id;
	unsigned int texnum;
	unsigned int toTexHead_offset;
	unsigned int toClutsHead_offset;
	unsigned int toModel_offset;
	int toKg1_offset;
	int padi;
	void* pTexMAN[8];
};

struct sh2gfw_ALLTEXSYNC_MAN
{
	short g_BG;
	short st_BG;
	short l_BG;
	short bg_CHR;
	short human_CHR;
	short en_CHR;
	short ura_CHR;
	short x_CHR;
	short alltex_CHR;
	short oS_CHR;
	short oA_CHR;
	short wp_CHR;
	short alltexnum;
	short alltex_BG;
	short alltex_EFF;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	unsigned short fonttex;
	unsigned short pads;
	int pad2;
	sh2gfw_TexMAN TexMan[96];
};

struct _anon2
{
	fsFile* fp;
	char* name;
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

struct _anon3
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct chr_mge_files
{
	fsFileIndex* model_fid;
	fsFileIndex* anime_fid;
	fsFileIndex* cluster_fid;
	fsFileIndex* shadow_fid;
	int mid;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct TextPos
{
	unsigned int block_index;
	unsigned int texture_no;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon0 src_t;
	_anon3 des_m;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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
	_anon4 hit_check;
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

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
};

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
chr_mge_files Character_Mge_files[21];
chr_mge_files hhh_jms_TGS_turi;
sh2gfw_AllModelData_Man All_MDW;
sh2gfw_ModelDraw_MAN ModelDW_Man[48];
int MDL_iniflg;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_LoadModel_MEMMAN LoadModel_MemMan;
Q_WORDDATA ANIME_DATA[1024];
<unknown fundamental type (0xa510)> CHRDATA[524288];
fsFileIndex data_chr_jms_jms_wphand_anm[1];
fsFileIndex data_chr_jms_jms_basic3_anm[1];
fsFileIndex data_chr_scu_scu_anm[1];
fsFileIndex data_chr_scu_scu_mdl[1];
fsFileIndex data_chr_mkn_mkn_anm[1];
fsFileIndex data_chr_mkn_mkn_mdl[1];
sh2gfw_ModelDraw_MAN UniModelDW_Man;

void sh2gfw_srInit_ModelDrawWork();
sh2gfw_ModelDraw_MAN* sh2gfw_Get_pMD(int chara_id);
int sh2gfw_Check_ModelIsOnMemory(int cid);
int sh2gfw_LoadInit_CharaModelData();
int sh2gfw_LoadMemorySet_CharaModelData(chr_mge_files* cdl, <unknown fundamental type (0xa510)>** ModelMemBuffer, <unknown fundamental type (0xa510)>** AnimeMemBuffer, <unknown fundamental type (0xa510)>** ClusterMemBuffer, <unknown fundamental type (0xa510)>** Kg1MemBuffer);
int sh2gfw_LOAD_CharaModelData();
void sh2gfw_SyncInit_ChacterModelData();
int sh2gfw_Cancel_LOADCharaModelData();
void sh2gfw_ModelDrawInit_for_BackgroundLoad(int chara_id, void* memhead_model, void* memhead_anime, void* memhead_cluster, void* memhead_kg1);
void* sh2gfw_CreateSubCharacter(int chara_id);
int Delete_Model(void* modeldw);
int sh2gfw_Delete_Model_from_CharaID(int chara_id);
void sh2gfw_kari_clear_LM();
int Check_RevChara(int id);
void sh2gfw_init_CharaModel_TextureData(sh2gfw_ModelDraw_MAN* pMD);
void init_CharaTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD);
void init_ReverseCharaTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD);
int Init_WithoutCharaTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD);

// 
// Start address: 0x17b8a0
void sh2gfw_srInit_ModelDrawWork()
{
	int i;
	// Line 454, Address: 0x17b8a0, Func Offset: 0
	// Line 458, Address: 0x17b8ac, Func Offset: 0xc
	// Line 461, Address: 0x17b8b8, Func Offset: 0x18
	// Line 462, Address: 0x17b8e8, Func Offset: 0x48
	// Line 465, Address: 0x17b8fc, Func Offset: 0x5c
	// Line 466, Address: 0x17b914, Func Offset: 0x74
	// Func End, Address: 0x17b928, Func Offset: 0x88
}

// 
// Start address: 0x17b930
sh2gfw_ModelDraw_MAN* sh2gfw_Get_pMD(int chara_id)
{
	int cid;
	int id;
	int kind;
	int i;
	// Line 501, Address: 0x17b930, Func Offset: 0
	// Line 502, Address: 0x17b93c, Func Offset: 0xc
	// Line 504, Address: 0x17b968, Func Offset: 0x38
	// Line 506, Address: 0x17b970, Func Offset: 0x40
	// Line 509, Address: 0x17b984, Func Offset: 0x54
	// Line 510, Address: 0x17b988, Func Offset: 0x58
	// Func End, Address: 0x17b990, Func Offset: 0x60
}

// 
// Start address: 0x17b990
int sh2gfw_Check_ModelIsOnMemory(int cid)
{
	sh_Model* pModel;
	sh2gfw_Model_Header* sMH;
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 519, Address: 0x17b990, Func Offset: 0
	// Line 523, Address: 0x17b9a0, Func Offset: 0x10
	// Line 525, Address: 0x17b9a8, Func Offset: 0x18
	// Line 530, Address: 0x17b9bc, Func Offset: 0x2c
	// Line 534, Address: 0x17b9d4, Func Offset: 0x44
	// Line 536, Address: 0x17b9ec, Func Offset: 0x5c
	// Line 538, Address: 0x17b9f4, Func Offset: 0x64
	// Line 541, Address: 0x17ba24, Func Offset: 0x94
	// Line 542, Address: 0x17ba28, Func Offset: 0x98
	// Func End, Address: 0x17ba3c, Func Offset: 0xac
}

// 
// Start address: 0x17ba40
int sh2gfw_LoadInit_CharaModelData()
{
	// Line 621, Address: 0x17ba40, Func Offset: 0
	// Func End, Address: 0x17ba48, Func Offset: 0x8
}

// 
// Start address: 0x17ba50
int sh2gfw_LoadMemorySet_CharaModelData(chr_mge_files* cdl, <unknown fundamental type (0xa510)>** ModelMemBuffer, <unknown fundamental type (0xa510)>** AnimeMemBuffer, <unknown fundamental type (0xa510)>** ClusterMemBuffer, <unknown fundamental type (0xa510)>** Kg1MemBuffer)
{
	chr_mge_files* cdlist2;
	sh2gfw_ModelDraw_MAN* pMD2;
	<unknown fundamental type (0xa510)>* kg1buf;
	<unknown fundamental type (0xa510)>* clusterbuf;
	<unknown fundamental type (0xa510)>* animebuf;
	<unknown fundamental type (0xa510)>* modelbuf;
	int k;
	int i;
	// Line 651, Address: 0x17ba50, Func Offset: 0
	// Line 653, Address: 0x17ba58, Func Offset: 0x8
	// Line 655, Address: 0x17ba5c, Func Offset: 0xc
	// Line 656, Address: 0x17ba60, Func Offset: 0x10
	// Line 657, Address: 0x17ba64, Func Offset: 0x14
	// Line 658, Address: 0x17ba68, Func Offset: 0x18
	// Line 664, Address: 0x17ba6c, Func Offset: 0x1c
	// Line 665, Address: 0x17ba78, Func Offset: 0x28
	// Line 668, Address: 0x17bab8, Func Offset: 0x68
	// Line 671, Address: 0x17bad4, Func Offset: 0x84
	// Line 673, Address: 0x17baec, Func Offset: 0x9c
	// Line 676, Address: 0x17bb0c, Func Offset: 0xbc
	// Line 687, Address: 0x17bb24, Func Offset: 0xd4
	// Line 688, Address: 0x17bb2c, Func Offset: 0xdc
	// Line 689, Address: 0x17bb34, Func Offset: 0xe4
	// Line 690, Address: 0x17bb38, Func Offset: 0xe8
	// Line 691, Address: 0x17bb50, Func Offset: 0x100
	// Line 694, Address: 0x17bb5c, Func Offset: 0x10c
	// Line 695, Address: 0x17bb74, Func Offset: 0x124
	// Line 705, Address: 0x17bb78, Func Offset: 0x128
	// Line 707, Address: 0x17bb98, Func Offset: 0x148
	// Line 708, Address: 0x17bbb4, Func Offset: 0x164
	// Line 710, Address: 0x17bbd0, Func Offset: 0x180
	// Line 714, Address: 0x17bbd8, Func Offset: 0x188
	// Line 716, Address: 0x17bbe4, Func Offset: 0x194
	// Line 717, Address: 0x17bc14, Func Offset: 0x1c4
	// Line 718, Address: 0x17bc18, Func Offset: 0x1c8
	// Line 719, Address: 0x17bc20, Func Offset: 0x1d0
	// Line 723, Address: 0x17bc28, Func Offset: 0x1d8
	// Line 724, Address: 0x17bc2c, Func Offset: 0x1dc
	// Line 727, Address: 0x17bc34, Func Offset: 0x1e4
	// Line 729, Address: 0x17bc40, Func Offset: 0x1f0
	// Line 730, Address: 0x17bc6c, Func Offset: 0x21c
	// Line 731, Address: 0x17bc70, Func Offset: 0x220
	// Line 740, Address: 0x17bc78, Func Offset: 0x228
	// Line 743, Address: 0x17bc7c, Func Offset: 0x22c
	// Line 745, Address: 0x17bc88, Func Offset: 0x238
	// Line 746, Address: 0x17bcb4, Func Offset: 0x264
	// Line 747, Address: 0x17bcb8, Func Offset: 0x268
	// Line 751, Address: 0x17bcc0, Func Offset: 0x270
	// Line 755, Address: 0x17bcc4, Func Offset: 0x274
	// Line 756, Address: 0x17bcd0, Func Offset: 0x280
	// Line 757, Address: 0x17bcfc, Func Offset: 0x2ac
	// Line 758, Address: 0x17bd00, Func Offset: 0x2b0
	// Line 762, Address: 0x17bd08, Func Offset: 0x2b8
	// Line 765, Address: 0x17bd0c, Func Offset: 0x2bc
	// Line 771, Address: 0x17bd20, Func Offset: 0x2d0
	// Func End, Address: 0x17bd30, Func Offset: 0x2e0
}

// 
// Start address: 0x17bd30
int sh2gfw_LOAD_CharaModelData()
{
	sh2gfw_ModelDraw_MAN* pMD3;
	chr_mge_files* cdlist3;
	int i;
	// Line 780, Address: 0x17bd30, Func Offset: 0
	// Line 785, Address: 0x17bd48, Func Offset: 0x18
	// Line 787, Address: 0x17bd54, Func Offset: 0x24
	// Line 789, Address: 0x17bd68, Func Offset: 0x38
	// Line 792, Address: 0x17bd78, Func Offset: 0x48
	// Line 793, Address: 0x17bd84, Func Offset: 0x54
	// Line 795, Address: 0x17bda8, Func Offset: 0x78
	// Line 798, Address: 0x17bdc0, Func Offset: 0x90
	// Line 799, Address: 0x17bdcc, Func Offset: 0x9c
	// Line 801, Address: 0x17bdf0, Func Offset: 0xc0
	// Line 804, Address: 0x17be08, Func Offset: 0xd8
	// Line 805, Address: 0x17be14, Func Offset: 0xe4
	// Line 807, Address: 0x17be38, Func Offset: 0x108
	// Line 810, Address: 0x17be50, Func Offset: 0x120
	// Line 814, Address: 0x17be5c, Func Offset: 0x12c
	// Line 815, Address: 0x17be78, Func Offset: 0x148
	// Line 816, Address: 0x17be80, Func Offset: 0x150
	// Line 817, Address: 0x17be98, Func Offset: 0x168
	// Line 820, Address: 0x17beb4, Func Offset: 0x184
	// Func End, Address: 0x17bed4, Func Offset: 0x1a4
}

// 
// Start address: 0x17bee0
void sh2gfw_SyncInit_ChacterModelData()
{
	sh2gfw_ModelDraw_MAN* pMD4;
	chr_mge_files* cdlist;
	int ikg12;
	int iclus2;
	int ianm2;
	int imdl2;
	int dac;
	int i;
	// Line 834, Address: 0x17bee0, Func Offset: 0
	// Line 835, Address: 0x17bef8, Func Offset: 0x18
	// Line 841, Address: 0x17befc, Func Offset: 0x1c
	// Line 843, Address: 0x17bf08, Func Offset: 0x28
	// Line 845, Address: 0x17bf0c, Func Offset: 0x2c
	// Line 848, Address: 0x17bf1c, Func Offset: 0x3c
	// Line 850, Address: 0x17bf38, Func Offset: 0x58
	// Line 852, Address: 0x17bf44, Func Offset: 0x64
	// Line 854, Address: 0x17bf54, Func Offset: 0x74
	// Line 856, Address: 0x17bf60, Func Offset: 0x80
	// Line 859, Address: 0x17bf6c, Func Offset: 0x8c
	// Line 860, Address: 0x17bf70, Func Offset: 0x90
	// Line 862, Address: 0x17bf78, Func Offset: 0x98
	// Line 865, Address: 0x17bf84, Func Offset: 0xa4
	// Line 867, Address: 0x17bf94, Func Offset: 0xb4
	// Line 869, Address: 0x17bfa0, Func Offset: 0xc0
	// Line 874, Address: 0x17bfac, Func Offset: 0xcc
	// Line 877, Address: 0x17bfb0, Func Offset: 0xd0
	// Line 879, Address: 0x17bfcc, Func Offset: 0xec
	// Line 880, Address: 0x17bfe0, Func Offset: 0x100
	// Line 881, Address: 0x17bfec, Func Offset: 0x10c
	// Line 884, Address: 0x17bff0, Func Offset: 0x110
	// Line 885, Address: 0x17c00c, Func Offset: 0x12c
	// Line 889, Address: 0x17c018, Func Offset: 0x138
	// Line 890, Address: 0x17c034, Func Offset: 0x154
	// Line 893, Address: 0x17c040, Func Offset: 0x160
	// Line 896, Address: 0x17c05c, Func Offset: 0x17c
	// Line 901, Address: 0x17c064, Func Offset: 0x184
	// Line 902, Address: 0x17c078, Func Offset: 0x198
	// Line 903, Address: 0x17c08c, Func Offset: 0x1ac
	// Line 913, Address: 0x17c098, Func Offset: 0x1b8
	// Line 914, Address: 0x17c0a8, Func Offset: 0x1c8
	// Line 915, Address: 0x17c0b0, Func Offset: 0x1d0
	// Line 918, Address: 0x17c0c4, Func Offset: 0x1e4
	// Func End, Address: 0x17c0e4, Func Offset: 0x204
}

// 
// Start address: 0x17c0f0
int sh2gfw_Cancel_LOADCharaModelData()
{
	int i;
	// Line 931, Address: 0x17c0f0, Func Offset: 0
	// Line 934, Address: 0x17c0f8, Func Offset: 0x8
	// Line 935, Address: 0x17c104, Func Offset: 0x14
	// Line 937, Address: 0x17c14c, Func Offset: 0x5c
	// Line 940, Address: 0x17c150, Func Offset: 0x60
	// Line 941, Address: 0x17c16c, Func Offset: 0x7c
	// Line 944, Address: 0x17c174, Func Offset: 0x84
	// Func End, Address: 0x17c184, Func Offset: 0x94
}

// 
// Start address: 0x17c190
void sh2gfw_ModelDrawInit_for_BackgroundLoad(int chara_id, void* memhead_model, void* memhead_anime, void* memhead_cluster, void* memhead_kg1)
{
	sh2gfw_ModelDraw_MAN* pMD;
	int ze;
	int i;
	// Line 1026, Address: 0x17c190, Func Offset: 0
	// Line 1027, Address: 0x17c1c4, Func Offset: 0x34
	// Line 1030, Address: 0x17c1c8, Func Offset: 0x38
	// Line 1032, Address: 0x17c1d4, Func Offset: 0x44
	// Line 1035, Address: 0x17c200, Func Offset: 0x70
	// Line 1037, Address: 0x17c208, Func Offset: 0x78
	// Line 1038, Address: 0x17c20c, Func Offset: 0x7c
	// Line 1039, Address: 0x17c214, Func Offset: 0x84
	// Line 1041, Address: 0x17c230, Func Offset: 0xa0
	// Line 1044, Address: 0x17c248, Func Offset: 0xb8
	// Line 1045, Address: 0x17c27c, Func Offset: 0xec
	// Line 1047, Address: 0x17c29c, Func Offset: 0x10c
	// Line 1048, Address: 0x17c2a0, Func Offset: 0x110
	// Line 1049, Address: 0x17c2a4, Func Offset: 0x114
	// Line 1050, Address: 0x17c2a8, Func Offset: 0x118
	// Line 1052, Address: 0x17c2b8, Func Offset: 0x128
	// Line 1054, Address: 0x17c2bc, Func Offset: 0x12c
	// Line 1056, Address: 0x17c2c0, Func Offset: 0x130
	// Line 1059, Address: 0x17c2c4, Func Offset: 0x134
	// Line 1061, Address: 0x17c2cc, Func Offset: 0x13c
	// Func End, Address: 0x17c2f4, Func Offset: 0x164
}

// 
// Start address: 0x17c300
void* sh2gfw_CreateSubCharacter(int chara_id)
{
	SubCharacter* pSubc;
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 1079, Address: 0x17c300, Func Offset: 0
	// Line 1084, Address: 0x17c314, Func Offset: 0x14
	// Line 1085, Address: 0x17c320, Func Offset: 0x20
	// Line 1088, Address: 0x17c328, Func Offset: 0x28
	// Line 1091, Address: 0x17c334, Func Offset: 0x34
	// Line 1100, Address: 0x17c354, Func Offset: 0x54
	// Line 1106, Address: 0x17c368, Func Offset: 0x68
	// Line 1107, Address: 0x17c36c, Func Offset: 0x6c
	// Func End, Address: 0x17c384, Func Offset: 0x84
}

// 
// Start address: 0x17c390
int Delete_Model(void* modeldw)
{
	int ret;
	int i;
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 1116, Address: 0x17c390, Func Offset: 0
	// Line 1121, Address: 0x17c3a4, Func Offset: 0x14
	// Line 1123, Address: 0x17c3a8, Func Offset: 0x18
	// Line 1127, Address: 0x17c3dc, Func Offset: 0x4c
	// Line 1140, Address: 0x17c3e0, Func Offset: 0x50
	// Line 1141, Address: 0x17c3ec, Func Offset: 0x5c
	// Line 1142, Address: 0x17c410, Func Offset: 0x80
	// Line 1144, Address: 0x17c434, Func Offset: 0xa4
	// Line 1148, Address: 0x17c450, Func Offset: 0xc0
	// Line 1149, Address: 0x17c454, Func Offset: 0xc4
	// Func End, Address: 0x17c470, Func Offset: 0xe0
}

// 
// Start address: 0x17c470
int sh2gfw_Delete_Model_from_CharaID(int chara_id)
{
	sh2gfw_ModelDraw_MAN* pMD;
	// Line 1162, Address: 0x17c470, Func Offset: 0
	// Line 1165, Address: 0x17c478, Func Offset: 0x8
	// Line 1167, Address: 0x17c480, Func Offset: 0x10
	// Line 1170, Address: 0x17c4a0, Func Offset: 0x30
	// Line 1171, Address: 0x17c4ac, Func Offset: 0x3c
	// Func End, Address: 0x17c4bc, Func Offset: 0x4c
}

// 
// Start address: 0x17c4c0
void sh2gfw_kari_clear_LM()
{
	// Line 1370, Address: 0x17c4c0, Func Offset: 0
	// Line 1371, Address: 0x17c4c8, Func Offset: 0x8
	// Line 1373, Address: 0x17c4d8, Func Offset: 0x18
	// Line 1374, Address: 0x17c4e0, Func Offset: 0x20
	// Line 1377, Address: 0x17c4f0, Func Offset: 0x30
	// Func End, Address: 0x17c4f8, Func Offset: 0x38
}

// 
// Start address: 0x17c500
int Check_RevChara(int id)
{
	// Line 1380, Address: 0x17c500, Func Offset: 0
	// Line 1381, Address: 0x17c518, Func Offset: 0x18
	// Line 1382, Address: 0x17c534, Func Offset: 0x34
	// Line 1383, Address: 0x17c558, Func Offset: 0x58
	// Line 1385, Address: 0x17c55c, Func Offset: 0x5c
	// Func End, Address: 0x17c564, Func Offset: 0x64
}

// 
// Start address: 0x17c570
void sh2gfw_init_CharaModel_TextureData(sh2gfw_ModelDraw_MAN* pMD)
{
	sh2gfw_Model_Header* smh;
	// Line 1393, Address: 0x17c570, Func Offset: 0
	// Line 1394, Address: 0x17c580, Func Offset: 0x10
	// Line 1396, Address: 0x17c584, Func Offset: 0x14
	// Line 1411, Address: 0x17c590, Func Offset: 0x20
	// Line 1412, Address: 0x17c5a0, Func Offset: 0x30
	// Line 1414, Address: 0x17c5b4, Func Offset: 0x44
	// Line 1417, Address: 0x17c5bc, Func Offset: 0x4c
	// Line 1419, Address: 0x17c5d0, Func Offset: 0x60
	// Line 1420, Address: 0x17c5e4, Func Offset: 0x74
	// Line 1422, Address: 0x17c5fc, Func Offset: 0x8c
	// Line 1423, Address: 0x17c60c, Func Offset: 0x9c
	// Line 1424, Address: 0x17c620, Func Offset: 0xb0
	// Line 1426, Address: 0x17c628, Func Offset: 0xb8
	// Line 1444, Address: 0x17c63c, Func Offset: 0xcc
	// Func End, Address: 0x17c650, Func Offset: 0xe0
}

// 
// Start address: 0x17c650
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
	// Line 1452, Address: 0x17c650, Func Offset: 0
	// Line 1459, Address: 0x17c678, Func Offset: 0x28
	// Line 1461, Address: 0x17c67c, Func Offset: 0x2c
	// Line 1463, Address: 0x17c684, Func Offset: 0x34
	// Line 1465, Address: 0x17c6cc, Func Offset: 0x7c
	// Line 1466, Address: 0x17c6d8, Func Offset: 0x88
	// Line 1467, Address: 0x17c6ec, Func Offset: 0x9c
	// Line 1469, Address: 0x17c700, Func Offset: 0xb0
	// Line 1470, Address: 0x17c70c, Func Offset: 0xbc
	// Line 1471, Address: 0x17c71c, Func Offset: 0xcc
	// Line 1477, Address: 0x17c730, Func Offset: 0xe0
	// Line 1483, Address: 0x17c74c, Func Offset: 0xfc
	// Line 1485, Address: 0x17c758, Func Offset: 0x108
	// Line 1488, Address: 0x17c764, Func Offset: 0x114
	// Line 1496, Address: 0x17c778, Func Offset: 0x128
	// Line 1497, Address: 0x17c77c, Func Offset: 0x12c
	// Line 1498, Address: 0x17c780, Func Offset: 0x130
	// Line 1499, Address: 0x17c784, Func Offset: 0x134
	// Line 1501, Address: 0x17c788, Func Offset: 0x138
	// Line 1506, Address: 0x17c798, Func Offset: 0x148
	// Line 1507, Address: 0x17c79c, Func Offset: 0x14c
	// Line 1509, Address: 0x17c7a4, Func Offset: 0x154
	// Line 1517, Address: 0x17c7a8, Func Offset: 0x158
	// Line 1519, Address: 0x17c7b4, Func Offset: 0x164
	// Line 1520, Address: 0x17c7bc, Func Offset: 0x16c
	// Line 1521, Address: 0x17c7c4, Func Offset: 0x174
	// Line 1523, Address: 0x17c7d4, Func Offset: 0x184
	// Line 1525, Address: 0x17c7dc, Func Offset: 0x18c
	// Line 1526, Address: 0x17c7ec, Func Offset: 0x19c
	// Line 1527, Address: 0x17c804, Func Offset: 0x1b4
	// Line 1530, Address: 0x17c808, Func Offset: 0x1b8
	// Line 1533, Address: 0x17c824, Func Offset: 0x1d4
	// Line 1534, Address: 0x17c834, Func Offset: 0x1e4
	// Line 1537, Address: 0x17c848, Func Offset: 0x1f8
	// Line 1539, Address: 0x17c85c, Func Offset: 0x20c
	// Line 1540, Address: 0x17c860, Func Offset: 0x210
	// Line 1542, Address: 0x17c868, Func Offset: 0x218
	// Line 1544, Address: 0x17c874, Func Offset: 0x224
	// Line 1545, Address: 0x17c87c, Func Offset: 0x22c
	// Line 1546, Address: 0x17c884, Func Offset: 0x234
	// Line 1547, Address: 0x17c894, Func Offset: 0x244
	// Line 1549, Address: 0x17c89c, Func Offset: 0x24c
	// Line 1550, Address: 0x17c8ac, Func Offset: 0x25c
	// Line 1551, Address: 0x17c8c4, Func Offset: 0x274
	// Line 1553, Address: 0x17c8c8, Func Offset: 0x278
	// Line 1555, Address: 0x17c8e4, Func Offset: 0x294
	// Line 1558, Address: 0x17c8e8, Func Offset: 0x298
	// Line 1559, Address: 0x17c8f8, Func Offset: 0x2a8
	// Line 1561, Address: 0x17c90c, Func Offset: 0x2bc
	// Line 1563, Address: 0x17c914, Func Offset: 0x2c4
	// Line 1564, Address: 0x17c92c, Func Offset: 0x2dc
	// Line 1573, Address: 0x17c940, Func Offset: 0x2f0
	// Func End, Address: 0x17c968, Func Offset: 0x318
}

// 
// Start address: 0x17c970
void init_ReverseCharaTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD)
{
	int buff;
	Part* part;
	Part* parts_top;
	int n_parts;
	int texblk_index;
	short* pitex;
	TextPos* pTP;
	int real;
	int i;
	sh2gfw_ModelDraw_MAN* Real_pMD;
	sh2gfw_Model_Header* Real_sMH;
	sh2gfw_Model_Header* sMH;
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	sh_Model* pModel;
	// Line 1919, Address: 0x17c970, Func Offset: 0
	// Line 1927, Address: 0x17c99c, Func Offset: 0x2c
	// Line 1928, Address: 0x17c9a0, Func Offset: 0x30
	// Line 1930, Address: 0x17c9a8, Func Offset: 0x38
	// Line 1933, Address: 0x17c9f4, Func Offset: 0x84
	// Line 1934, Address: 0x17ca00, Func Offset: 0x90
	// Line 1935, Address: 0x17ca08, Func Offset: 0x98
	// Line 1936, Address: 0x17ca34, Func Offset: 0xc4
	// Line 1938, Address: 0x17ca38, Func Offset: 0xc8
	// Line 1940, Address: 0x17ca44, Func Offset: 0xd4
	// Line 1941, Address: 0x17ca58, Func Offset: 0xe8
	// Line 1944, Address: 0x17ca70, Func Offset: 0x100
	// Line 1949, Address: 0x17ca8c, Func Offset: 0x11c
	// Line 1951, Address: 0x17ca98, Func Offset: 0x128
	// Line 1952, Address: 0x17caa4, Func Offset: 0x134
	// Line 1954, Address: 0x17cab8, Func Offset: 0x148
	// Line 1955, Address: 0x17cabc, Func Offset: 0x14c
	// Line 1956, Address: 0x17cac0, Func Offset: 0x150
	// Line 1957, Address: 0x17cac4, Func Offset: 0x154
	// Line 1959, Address: 0x17cac8, Func Offset: 0x158
	// Line 1964, Address: 0x17cad8, Func Offset: 0x168
	// Line 1965, Address: 0x17cadc, Func Offset: 0x16c
	// Line 1967, Address: 0x17cae4, Func Offset: 0x174
	// Line 1974, Address: 0x17cae8, Func Offset: 0x178
	// Line 1976, Address: 0x17caf4, Func Offset: 0x184
	// Line 1977, Address: 0x17cafc, Func Offset: 0x18c
	// Line 1978, Address: 0x17cb04, Func Offset: 0x194
	// Line 1979, Address: 0x17cb14, Func Offset: 0x1a4
	// Line 1981, Address: 0x17cb1c, Func Offset: 0x1ac
	// Line 1982, Address: 0x17cb2c, Func Offset: 0x1bc
	// Line 1983, Address: 0x17cb44, Func Offset: 0x1d4
	// Line 1985, Address: 0x17cb48, Func Offset: 0x1d8
	// Line 1988, Address: 0x17cb64, Func Offset: 0x1f4
	// Line 1989, Address: 0x17cb74, Func Offset: 0x204
	// Line 1991, Address: 0x17cb88, Func Offset: 0x218
	// Line 1993, Address: 0x17cb9c, Func Offset: 0x22c
	// Line 1994, Address: 0x17cba0, Func Offset: 0x230
	// Line 1996, Address: 0x17cba8, Func Offset: 0x238
	// Line 1998, Address: 0x17cbb4, Func Offset: 0x244
	// Line 1999, Address: 0x17cbbc, Func Offset: 0x24c
	// Line 2000, Address: 0x17cbc4, Func Offset: 0x254
	// Line 2001, Address: 0x17cbd4, Func Offset: 0x264
	// Line 2003, Address: 0x17cbdc, Func Offset: 0x26c
	// Line 2004, Address: 0x17cbec, Func Offset: 0x27c
	// Line 2005, Address: 0x17cc04, Func Offset: 0x294
	// Line 2007, Address: 0x17cc08, Func Offset: 0x298
	// Line 2009, Address: 0x17cc24, Func Offset: 0x2b4
	// Line 2012, Address: 0x17cc28, Func Offset: 0x2b8
	// Line 2013, Address: 0x17cc38, Func Offset: 0x2c8
	// Line 2015, Address: 0x17cc4c, Func Offset: 0x2dc
	// Line 2017, Address: 0x17cc54, Func Offset: 0x2e4
	// Line 2018, Address: 0x17cc6c, Func Offset: 0x2fc
	// Line 2022, Address: 0x17cc80, Func Offset: 0x310
	// Func End, Address: 0x17ccac, Func Offset: 0x33c
}

// 
// Start address: 0x17ccb0
int Init_WithoutCharaTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_ModelDraw_MAN* pMD)
{
	int buff;
	Part* part;
	Part* parts_top;
	int n_parts;
	int texblk_index;
	short* pitex;
	TextPos* pTP;
	int difpch;
	int difpth;
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	sh2gfw_Model_Header* Real_sMH;
	sh2gfw_Model_Header* sMH;
	sh2gfw_ModelDraw_MAN* TexPmd;
	sh_Model* pModel;
	int i;
	int cid;
	int chara[2];
	// Line 2038, Address: 0x17ccb0, Func Offset: 0
	// Line 2042, Address: 0x17ccdc, Func Offset: 0x2c
	// Line 2049, Address: 0x17cce0, Func Offset: 0x30
	// Line 2050, Address: 0x17cce4, Func Offset: 0x34
	// Line 2053, Address: 0x17ccec, Func Offset: 0x3c
	// Line 2056, Address: 0x17cdf4, Func Offset: 0x144
	// Line 2057, Address: 0x17cdf8, Func Offset: 0x148
	// Line 2058, Address: 0x17ce00, Func Offset: 0x150
	// Line 2059, Address: 0x17ce08, Func Offset: 0x158
	// Line 2063, Address: 0x17ce10, Func Offset: 0x160
	// Line 2064, Address: 0x17ce14, Func Offset: 0x164
	// Line 2065, Address: 0x17ce1c, Func Offset: 0x16c
	// Line 2066, Address: 0x17ce24, Func Offset: 0x174
	// Line 2068, Address: 0x17ce2c, Func Offset: 0x17c
	// Line 2069, Address: 0x17ce30, Func Offset: 0x180
	// Line 2070, Address: 0x17ce38, Func Offset: 0x188
	// Line 2072, Address: 0x17ce40, Func Offset: 0x190
	// Line 2073, Address: 0x17ce44, Func Offset: 0x194
	// Line 2074, Address: 0x17ce4c, Func Offset: 0x19c
	// Line 2076, Address: 0x17ce54, Func Offset: 0x1a4
	// Line 2077, Address: 0x17ce58, Func Offset: 0x1a8
	// Line 2078, Address: 0x17ce5c, Func Offset: 0x1ac
	// Line 2080, Address: 0x17ce64, Func Offset: 0x1b4
	// Line 2081, Address: 0x17ce68, Func Offset: 0x1b8
	// Line 2082, Address: 0x17ce70, Func Offset: 0x1c0
	// Line 2096, Address: 0x17ce78, Func Offset: 0x1c8
	// Line 2097, Address: 0x17ce7c, Func Offset: 0x1cc
	// Line 2098, Address: 0x17ce84, Func Offset: 0x1d4
	// Line 2100, Address: 0x17ce8c, Func Offset: 0x1dc
	// Line 2105, Address: 0x17ceb4, Func Offset: 0x204
	// Line 2106, Address: 0x17cec0, Func Offset: 0x210
	// Line 2107, Address: 0x17ced4, Func Offset: 0x224
	// Line 2108, Address: 0x17cedc, Func Offset: 0x22c
	// Line 2109, Address: 0x17cef0, Func Offset: 0x240
	// Line 2110, Address: 0x17cef8, Func Offset: 0x248
	// Line 2111, Address: 0x17cf08, Func Offset: 0x258
	// Line 2116, Address: 0x17cf2c, Func Offset: 0x27c
	// Line 2118, Address: 0x17cf30, Func Offset: 0x280
	// Line 2119, Address: 0x17cf3c, Func Offset: 0x28c
	// Line 2120, Address: 0x17cf50, Func Offset: 0x2a0
	// Line 2122, Address: 0x17cf64, Func Offset: 0x2b4
	// Line 2127, Address: 0x17cf80, Func Offset: 0x2d0
	// Line 2129, Address: 0x17cf8c, Func Offset: 0x2dc
	// Line 2130, Address: 0x17cf98, Func Offset: 0x2e8
	// Line 2133, Address: 0x17cfb0, Func Offset: 0x300
	// Line 2136, Address: 0x17cfbc, Func Offset: 0x30c
	// Line 2137, Address: 0x17cfd0, Func Offset: 0x320
	// Line 2140, Address: 0x17cfe4, Func Offset: 0x334
	// Line 2141, Address: 0x17cff8, Func Offset: 0x348
	// Line 2142, Address: 0x17d00c, Func Offset: 0x35c
	// Line 2143, Address: 0x17d010, Func Offset: 0x360
	// Line 2144, Address: 0x17d014, Func Offset: 0x364
	// Line 2145, Address: 0x17d04c, Func Offset: 0x39c
	// Line 2150, Address: 0x17d068, Func Offset: 0x3b8
	// Line 2152, Address: 0x17d074, Func Offset: 0x3c4
	// Line 2153, Address: 0x17d080, Func Offset: 0x3d0
	// Line 2154, Address: 0x17d090, Func Offset: 0x3e0
	// Line 2159, Address: 0x17d0a8, Func Offset: 0x3f8
	// Line 2160, Address: 0x17d0ac, Func Offset: 0x3fc
	// Line 2161, Address: 0x17d0b0, Func Offset: 0x400
	// Line 2162, Address: 0x17d0b4, Func Offset: 0x404
	// Line 2164, Address: 0x17d0b8, Func Offset: 0x408
	// Line 2169, Address: 0x17d0c8, Func Offset: 0x418
	// Line 2170, Address: 0x17d0cc, Func Offset: 0x41c
	// Line 2172, Address: 0x17d0d4, Func Offset: 0x424
	// Line 2179, Address: 0x17d0d8, Func Offset: 0x428
	// Line 2181, Address: 0x17d0e4, Func Offset: 0x434
	// Line 2182, Address: 0x17d0ec, Func Offset: 0x43c
	// Line 2183, Address: 0x17d0f4, Func Offset: 0x444
	// Line 2184, Address: 0x17d104, Func Offset: 0x454
	// Line 2186, Address: 0x17d10c, Func Offset: 0x45c
	// Line 2187, Address: 0x17d11c, Func Offset: 0x46c
	// Line 2188, Address: 0x17d134, Func Offset: 0x484
	// Line 2190, Address: 0x17d138, Func Offset: 0x488
	// Line 2193, Address: 0x17d154, Func Offset: 0x4a4
	// Line 2194, Address: 0x17d164, Func Offset: 0x4b4
	// Line 2196, Address: 0x17d178, Func Offset: 0x4c8
	// Line 2198, Address: 0x17d18c, Func Offset: 0x4dc
	// Line 2199, Address: 0x17d190, Func Offset: 0x4e0
	// Line 2201, Address: 0x17d198, Func Offset: 0x4e8
	// Line 2203, Address: 0x17d1a4, Func Offset: 0x4f4
	// Line 2204, Address: 0x17d1ac, Func Offset: 0x4fc
	// Line 2205, Address: 0x17d1b4, Func Offset: 0x504
	// Line 2206, Address: 0x17d1c4, Func Offset: 0x514
	// Line 2208, Address: 0x17d1cc, Func Offset: 0x51c
	// Line 2209, Address: 0x17d1dc, Func Offset: 0x52c
	// Line 2210, Address: 0x17d1f4, Func Offset: 0x544
	// Line 2212, Address: 0x17d1f8, Func Offset: 0x548
	// Line 2214, Address: 0x17d214, Func Offset: 0x564
	// Line 2217, Address: 0x17d218, Func Offset: 0x568
	// Line 2218, Address: 0x17d228, Func Offset: 0x578
	// Line 2220, Address: 0x17d23c, Func Offset: 0x58c
	// Line 2222, Address: 0x17d244, Func Offset: 0x594
	// Line 2223, Address: 0x17d25c, Func Offset: 0x5ac
	// Line 2228, Address: 0x17d270, Func Offset: 0x5c0
	// Line 2230, Address: 0x17d274, Func Offset: 0x5c4
	// Func End, Address: 0x17d2a0, Func Offset: 0x5f0
}

