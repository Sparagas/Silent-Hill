typedef struct EnCOMMUNICATION;
typedef union Q_WORDDATA;
typedef struct SubCharacter;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct PAD_3D;
typedef struct SubObject;
typedef struct EnMKN_DATA;
typedef struct sh2gfw_TexMAN;
typedef struct SPACK_ENV_DATA;
typedef struct _anon0;
typedef struct PAD_2D;
typedef struct EnIKE_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct PAD_INFO;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct EnRED_DATA;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef struct FONT_STREAM_DATA;
typedef struct _anon1;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct WFONT_STREAM_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleFight;
typedef struct _anon2;
typedef struct MFONT_STREAM_DATA;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct shBattleShot;
typedef struct FONT_DATA;
typedef struct EnLOCAL_DATA;
typedef struct shBattleArea;
typedef struct shPlayerWork;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct shBattleInfo;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct sh2gfw_Effect_Man;
typedef struct shAttackInfo;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _CL_VHIT_WALL;
typedef union _anon3;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnPATH_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;

typedef void(*type_3)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_44)(SubCharacter*);
typedef void(*type_51)(SubCharacter*);

typedef unsigned short type_0[64];
typedef unsigned short type_1[64][10];
typedef unsigned int type_2[4];
typedef unsigned short type_4[8];
typedef float type_5[4];
typedef Q_WORDDATA type_7[48];
typedef unsigned char type_8[16];
typedef char type_9[10];
typedef Q_WORDDATA type_10[96];
typedef int type_11[4];
typedef unsigned char type_12[13];
typedef FONT_STREAM_DATA type_13[512];
typedef char type_14[7];
typedef unsigned char type_15[4];
typedef short type_16[8];
typedef WFONT_STREAM_DATA type_17[64];
typedef sh2gfw_TexMAN* type_18[96];
typedef char type_19[16];
typedef unsigned char type_20[4];
typedef MFONT_STREAM_DATA type_21[512];
typedef sh2gfw_TexMAN type_22[96];
typedef unsigned long type_23[2];
typedef unsigned short type_24[256];
typedef PAD_INFO type_25[10];
typedef short type_26[256];
typedef short type_27[256];
typedef char type_28[9];
typedef char* type_29[21];
typedef unsigned char type_30[34];
typedef unsigned char type_31[2];
typedef unsigned char type_32[2];
typedef float type_33[4][2];
typedef float type_34[4];
typedef float type_35[4][4];
typedef char type_36[10];
typedef char type_37[7];
typedef char type_38[17];
typedef unsigned char type_39[10];
typedef EnLOCAL_DATA type_40[64];
typedef EnCOMMUNICATION type_41[8];
typedef float type_42[4];
typedef char type_43[3];
typedef unsigned int type_45[12];
typedef unsigned int type_46[12];
typedef shAttackInfo type_47[46];
typedef float type_48[4];
typedef char type_49[7];
typedef float type_50[4][4];
typedef unsigned int type_52[8];
typedef unsigned char type_53[131072];
typedef unsigned char type_54[4];
typedef unsigned int type_55[4];
typedef unsigned char type_56[2];
typedef char type_57[8];
typedef <unknown fundamental type (0xa510)> type_58[4];
typedef unsigned short type_59[400];
typedef short type_60[400];
typedef short type_61[400];
typedef char* type_62[39];
typedef float type_63[4];
typedef char type_64[2];
typedef float type_65[4];
typedef char* type_66[22];
typedef unsigned char type_67[10];
typedef float type_68[4][4];
typedef char* type_69[30];
typedef unsigned char type_70[16];
typedef unsigned char type_71[16];
typedef char type_72[8];
typedef unsigned short type_73[4];
typedef unsigned short type_74[4];

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct EnAMBUSH_DATA
{
	short pl_x_min;
	short pl_z_min;
	short pl_x_max;
	short pl_z_max;
	short pos_x;
	short pos_z;
	float dir;
};

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct SubObject
{
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
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
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

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct PAD_INFO
{
	unsigned char action;
	unsigned char dash;
	unsigned char attack0;
	unsigned char attack1;
	unsigned char attack2;
	unsigned char menu;
	unsigned char hold;
	unsigned char search;
	unsigned char map;
	struct
	{
		unsigned char light_ : 4;
		unsigned char light : 4;
	};
	unsigned char l_button;
	unsigned char r_button;
	char lstickX;
	char lstickY;
	char rstickX;
	char rstickY;
	unsigned char forward;
	unsigned char backward;
	unsigned char lround;
	unsigned char rround;
	unsigned char skip;
	unsigned char pause;
	union
	{
		PAD_3D pad3d;
		PAD_2D pad2d;
	};
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

struct EnRED_DATA
{
	int dummy;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct FONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
};

struct _anon1
{
	float d[4][4];
};

enum _JAMES_LOWER_STATUS : unsigned char
{
	JMS_ST_L_STAND,
	JMS_ST_L_RELAX,
	JMS_ST_L_ALERT,
	JMS_ST_L_TIRED,
	JMS_ST_L_READY,
	JMS_ST_L_READYOFF,
	JMS_ST_L_LROUND,
	JMS_ST_L_RROUND,
	JMS_ST_L_BACK,
	JMS_ST_L_WALK,
	JMS_ST_L_LSWALK,
	JMS_ST_L_RSWALK,
	JMS_ST_L_RUN1,
	JMS_ST_L_RUN2,
	JMS_ST_L_RUN3,
	JMS_ST_L_LSRUN,
	JMS_ST_L_RSRUN,
	JMS_ST_L_WALL_F,
	JMS_ST_L_LTURN,
	JMS_ST_L_RTURN,
	JMS_ST_L_JUMP,
	JMS_ST_L_STEP,
	JMS_ST_L_LSTEP,
	JMS_ST_L_RSTEP,
	JMS_ST_L_FALL,
	JMS_ST_L_DAMAGE,
	JMS_ST_L_HOLD,
	JMS_ST_L_RELEASE,
	JMS_ST_L_ATTACK,
	JMS_ST_L_KICK,
	JMS_ST_L_TO_STAND,
	JMS_ST_L_EVENT
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

struct WFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short vw;
	unsigned short vh;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned short w;
	unsigned short h;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon2
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

struct MFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short u;
	unsigned short v;
};

struct EnEDB_DATA
{
	float target[4];
	float rot;
	float arot;
	float speed;
	char bullet;
	char mark[3];
	char mark_n;
	char turn;
	char afford;
	char ccount;
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[64];
	EnCOMMUNICATION Communication[8];
	int CommunicationNum;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	EnLOCAL_DATA* view_data;
	short view_x;
	short view_y;
	float fps;
	float spf;
	unsigned int dbflag;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct FONT_DATA
{
	unsigned int tex_head[12];
	unsigned int clut_head[12];
	unsigned int clut[8];
	unsigned char texbuf[131072];
	unsigned long tex0;
	int fonttype;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned int rgb_s[4];
	unsigned int alpha;
	unsigned int alpha_base;
	unsigned int flag;
	unsigned short x;
	unsigned short y;
	unsigned short wide_w;
	unsigned short wide_h;
	unsigned short right_x;
	unsigned short right_y;
	unsigned short wm;
	unsigned short hm;
	short wait_count;
	short wait_type;
	short page_sound;
	unsigned short code[400];
	short upper[400];
	short lower[400];
	short top;
	short bottom;
	short st_num;
	short w_st_num;
	short prl_count;
	short preload;
	short shadow_max;
	short shadow_now;
	unsigned short sel_xl;
	unsigned short sel_xr;
	unsigned short sel_yu[4];
	unsigned short sel_yd[4];
	short sel_max;
	short sel_now;
	unsigned short mes_v[64][10];
	unsigned short* mes_str_now;
	unsigned short* mes_str;
	unsigned short* prl_str;
	FONT_STREAM_DATA stream[512];
	WFONT_STREAM_DATA w_stream[64];
	MFONT_STREAM_DATA m_stream[512];
	unsigned short m_code[256];
	short m_upper[256];
	short m_lower[256];
	short m_top;
	short m_bottom;
	short m_st_num;
	int m_base_x;
	int m_base_y;
	int m_base_z;
	unsigned int m_rgba;
	int m_sx;
	int m_sy;
	int m_w;
	int m_h;
	int m_x;
	int m_y;
	unsigned long* pCur;
	int base_x;
	int base_y;
	int base_z;
};

struct EnLOCAL_DATA
{
	char kind;
	char kind2;
	char mlv;
	char slv;
	char sslv;
	char type;
	unsigned char weight;
	char lie;
	char anim;
	unsigned char anim_loop;
	char hoge[2];
	unsigned short flag;
	short anim_s;
	int anim_n;
	int anim_step;
	SubCharacter* scp;
	EnPATH_DATA path;
	float vec[4];
	float endurance;
	float endurance_max;
	float hb_x;
	float hb_z;
	float hb_s;
	float tx;
	float tz;
	float tx2;
	float tz2;
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
	int timer;
	int sound_wait;
	int randseed;
	union
	{
		EnSCU_DATA scu;
		EnMKN_DATA mkn;
		EnTYU_DATA tyu;
		EnRED_DATA red;
		EnONI_DATA oni;
		EnNSE_DATA nse;
		EnIKE_DATA ike;
		EnPAP_DATA pap;
		EnEDB_DATA edb;
		EnBOS_DATA bos;
	};
};

struct shBattleArea
{
	float center;
	float radius;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon0 dist_rot;
	_anon0 dist_pos;
	_anon0 pos;
	_anon0 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned char allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned char allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char attack_now;
	unsigned char attack_prev;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int move_st_flg;
	unsigned int attack_st_flg;
	unsigned int damage_st_flg;
	float light_pos[4];
	float light_vec[4];
	float light_vec_neck[4];
	_CL_VHIT_RESULT r_side;
	_CL_VHIT_RESULT l_side;
	_CL_VHIT_RESULT foot;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	unsigned char d_shock;
	PAD_INFO pad[10];
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char cfg_hold;
	unsigned char cfg_lock;
	unsigned char cfg_move;
	int event_anime;
	_anon0 tgt_body_angle;
	_anon0 tgt_neck_angle;
	_anon0 tgt_arms_angle;
	unsigned char motion_no;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	SubCharacter* target;
	SubCharacter* look_tgt;
	SubObject* look_obj;
	float non_input;
	float running_time;
	float muteki_time;
	float csaw_time;
	float hp_recover;
	int tired;
	int tired_max;
	int spirit;
	unsigned int game_st_flg;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char light_on;
	unsigned char radio_on;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char act_with_wep;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned short damage_no;
	unsigned short attack_no;
};

struct EnPAP_DATA
{
	float target[4];
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct EnBOS_DATA
{
	int dummy;
};

enum _JAMES_UPPER_STATUS : unsigned char
{
	JMS_ST_U_STAND,
	JMS_ST_U_RELAX,
	JMS_ST_U_ALERT,
	JMS_ST_U_TIRED,
	JMS_ST_U_READY,
	JMS_ST_U_READYOFF,
	JMS_ST_U_LROUND,
	JMS_ST_U_RROUND,
	JMS_ST_U_BACK,
	JMS_ST_U_WALK,
	JMS_ST_U_LSWALK,
	JMS_ST_U_RSWALK,
	JMS_ST_U_RUN1,
	JMS_ST_U_RUN2,
	JMS_ST_U_RUN3,
	JMS_ST_U_LSRUN,
	JMS_ST_U_RSRUN,
	JMS_ST_U_WALL_F,
	JMS_ST_U_LTURN,
	JMS_ST_U_RTURN,
	JMS_ST_U_JUMP,
	JMS_ST_U_STEP,
	JMS_ST_U_LSTEP,
	JMS_ST_U_RSTEP,
	JMS_ST_U_FALL,
	JMS_ST_U_DAMAGE,
	JMS_ST_U_HOLD,
	JMS_ST_U_RELEASE,
	JMS_ST_U_ATTACK,
	JMS_ST_U_KICK,
	JMS_ST_U_TO_STAND,
	JMS_ST_U_EVENT
};

struct sh2gfw_Effect_Man
{
	unsigned short effectid;
	unsigned short vifmark;
	unsigned short valid_id;
	unsigned short pads;
	unsigned int thr_cid;
	unsigned int thr_sid;
	<unknown fundamental type (0xa510)> Tex0Data;
	<unknown fundamental type (0xa510)> Alpha;
	void* pTexMAN;
	void* pTexHead;
	void* pTop;
	void* pPad;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon3 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon3
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
char obj_flag;
<unknown fundamental type (0xa510)> FjDebugEnvData[4];
SPACK_DATA spack;
EnLOCAL_WORK enLocalWork;
sh2gfw_Effect_Man FjFontTexMan;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
FONT_DATA font;
char* enemy_mode_name[30];
char enemy_mkn_mode[9];
char enemy_nse_mode[7];
char enemy_pap_mode[8];
char enemy_edb_mode[10];
char enemy_red_mode[8];
char enemy_oni_mode[10];
char enemy_ike_mode[7];
char* enemy_anime_name[39];
char enemy_red_anime[7];
char enemy_oni_anime[17];
char* enemy_edb_anime_name[22];
char* enemy_ike_anime_name[21];
shPlayerWork sh2jms;
float oldpos[4];
_anon2 cam0;
float obj_y;
float obj_z;
float obj_rot;
char stay_flag;
float dummy_floor_y;

void fjInitAll();
void fjInitFontTexture();
void fjMoveEffect();
void fjDrawExec();
void fjFontDrawExec();
void fjFontDrawExecVif1();
void debug_print_enemy();
int fjAssert_(char* file, int line, char* str);
void debug_object();

// 
// Start address: 0x1d12f0
void fjInitAll()
{
	// Line 62, Address: 0x1d12f0, Func Offset: 0
	// Line 63, Address: 0x1d12f8, Func Offset: 0x8
	// Line 64, Address: 0x1d1300, Func Offset: 0x10
	// Line 65, Address: 0x1d1308, Func Offset: 0x18
	// Line 66, Address: 0x1d1310, Func Offset: 0x20
	// Line 70, Address: 0x1d1318, Func Offset: 0x28
	// Line 75, Address: 0x1d1324, Func Offset: 0x34
	// Line 76, Address: 0x1d1334, Func Offset: 0x44
	// Line 77, Address: 0x1d1340, Func Offset: 0x50
	// Line 81, Address: 0x1d134c, Func Offset: 0x5c
	// Line 82, Address: 0x1d135c, Func Offset: 0x6c
	// Line 83, Address: 0x1d1370, Func Offset: 0x80
	// Line 84, Address: 0x1d13a8, Func Offset: 0xb8
	// Line 85, Address: 0x1d13e8, Func Offset: 0xf8
	// Line 86, Address: 0x1d1430, Func Offset: 0x140
	// Line 87, Address: 0x1d1438, Func Offset: 0x148
	// Line 88, Address: 0x1d1440, Func Offset: 0x150
	// Line 89, Address: 0x1d1454, Func Offset: 0x164
	// Func End, Address: 0x1d1464, Func Offset: 0x174
}

// 
// Start address: 0x1d1470
void fjInitFontTexture()
{
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	// Line 93, Address: 0x1d1470, Func Offset: 0
	// Line 97, Address: 0x1d1480, Func Offset: 0x10
	// Line 98, Address: 0x1d1488, Func Offset: 0x18
	// Line 99, Address: 0x1d1490, Func Offset: 0x20
	// Line 100, Address: 0x1d149c, Func Offset: 0x2c
	// Line 101, Address: 0x1d14a4, Func Offset: 0x34
	// Line 102, Address: 0x1d14ac, Func Offset: 0x3c
	// Line 103, Address: 0x1d14b4, Func Offset: 0x44
	// Line 104, Address: 0x1d14bc, Func Offset: 0x4c
	// Line 105, Address: 0x1d14c4, Func Offset: 0x54
	// Line 106, Address: 0x1d14cc, Func Offset: 0x5c
	// Line 107, Address: 0x1d14d0, Func Offset: 0x60
	// Line 108, Address: 0x1d14d8, Func Offset: 0x68
	// Line 109, Address: 0x1d14e0, Func Offset: 0x70
	// Line 110, Address: 0x1d14e8, Func Offset: 0x78
	// Line 111, Address: 0x1d14f0, Func Offset: 0x80
	// Line 112, Address: 0x1d14f8, Func Offset: 0x88
	// Line 113, Address: 0x1d1500, Func Offset: 0x90
	// Line 114, Address: 0x1d1508, Func Offset: 0x98
	// Line 115, Address: 0x1d151c, Func Offset: 0xac
	// Line 117, Address: 0x1d1524, Func Offset: 0xb4
	// Line 119, Address: 0x1d1550, Func Offset: 0xe0
	// Line 120, Address: 0x1d155c, Func Offset: 0xec
	// Func End, Address: 0x1d1574, Func Offset: 0x104
}

// 
// Start address: 0x1d1580
void fjMoveEffect()
{
	// Line 130, Address: 0x1d1580, Func Offset: 0
	// Line 132, Address: 0x1d1588, Func Offset: 0x8
	// Line 133, Address: 0x1d1594, Func Offset: 0x14
	// Func End, Address: 0x1d15a4, Func Offset: 0x24
}

// 
// Start address: 0x1d15b0
void fjDrawExec()
{
	// Line 137, Address: 0x1d15b0, Func Offset: 0
	// Line 139, Address: 0x1d15b8, Func Offset: 0x8
	// Line 141, Address: 0x1d15c0, Func Offset: 0x10
	// Line 143, Address: 0x1d15c8, Func Offset: 0x18
	// Line 154, Address: 0x1d15d0, Func Offset: 0x20
	// Line 155, Address: 0x1d15e4, Func Offset: 0x34
	// Line 156, Address: 0x1d15ec, Func Offset: 0x3c
	// Line 157, Address: 0x1d1608, Func Offset: 0x58
	// Line 158, Address: 0x1d1610, Func Offset: 0x60
	// Line 159, Address: 0x1d1630, Func Offset: 0x80
	// Line 161, Address: 0x1d1638, Func Offset: 0x88
	// Line 162, Address: 0x1d1650, Func Offset: 0xa0
	// Line 169, Address: 0x1d1688, Func Offset: 0xd8
	// Func End, Address: 0x1d1698, Func Offset: 0xe8
}

// 
// Start address: 0x1d16a0
void fjFontDrawExec()
{
	void* adr2;
	void* adr1;
	// Line 173, Address: 0x1d16a0, Func Offset: 0
	// Line 176, Address: 0x1d16b0, Func Offset: 0x10
	// Line 178, Address: 0x1d16d4, Func Offset: 0x34
	// Line 182, Address: 0x1d16f8, Func Offset: 0x58
	// Line 183, Address: 0x1d1704, Func Offset: 0x64
	// Line 185, Address: 0x1d1710, Func Offset: 0x70
	// Line 187, Address: 0x1d1720, Func Offset: 0x80
	// Line 188, Address: 0x1d172c, Func Offset: 0x8c
	// Line 190, Address: 0x1d1738, Func Offset: 0x98
	// Line 191, Address: 0x1d1748, Func Offset: 0xa8
	// Func End, Address: 0x1d1760, Func Offset: 0xc0
}

// 
// Start address: 0x1d1760
void fjFontDrawExecVif1()
{
	void* adr2;
	void* adr1;
	// Line 195, Address: 0x1d1760, Func Offset: 0
	// Line 197, Address: 0x1d1770, Func Offset: 0x10
	// Line 200, Address: 0x1d1794, Func Offset: 0x34
	// Line 201, Address: 0x1d17a0, Func Offset: 0x40
	// Line 203, Address: 0x1d17ac, Func Offset: 0x4c
	// Line 204, Address: 0x1d17b8, Func Offset: 0x58
	// Line 205, Address: 0x1d17c4, Func Offset: 0x64
	// Func End, Address: 0x1d17dc, Func Offset: 0x7c
}

// 
// Start address: 0x1d17e0
void debug_print_enemy()
{
	int n;
	int n0;
	int n;
	int n0;
	float d;
	EnLOCAL_DATA* dp2;
	EnLOCAL_DATA* dp;
	short vy;
	short vx;
	char** name;
	int i;
	int p2;
	int p1;
	EnLOCAL_DATA* dp;
	int vmode;
	// Line 367, Address: 0x1d17e0, Func Offset: 0
	// Line 368, Address: 0x1d1804, Func Offset: 0x24
	// Line 370, Address: 0x1d180c, Func Offset: 0x2c
	// Line 373, Address: 0x1d1814, Func Offset: 0x34
	// Line 374, Address: 0x1d1824, Func Offset: 0x44
	// Line 375, Address: 0x1d1834, Func Offset: 0x54
	// Line 376, Address: 0x1d1838, Func Offset: 0x58
	// Line 378, Address: 0x1d186c, Func Offset: 0x8c
	// Line 379, Address: 0x1d1884, Func Offset: 0xa4
	// Line 380, Address: 0x1d1888, Func Offset: 0xa8
	// Line 381, Address: 0x1d18a8, Func Offset: 0xc8
	// Line 382, Address: 0x1d18ac, Func Offset: 0xcc
	// Line 383, Address: 0x1d18b4, Func Offset: 0xd4
	// Line 385, Address: 0x1d18c4, Func Offset: 0xe4
	// Line 386, Address: 0x1d18d0, Func Offset: 0xf0
	// Line 388, Address: 0x1d18d8, Func Offset: 0xf8
	// Line 389, Address: 0x1d18f0, Func Offset: 0x110
	// Line 390, Address: 0x1d18f4, Func Offset: 0x114
	// Line 391, Address: 0x1d1914, Func Offset: 0x134
	// Line 392, Address: 0x1d1918, Func Offset: 0x138
	// Line 393, Address: 0x1d1920, Func Offset: 0x140
	// Line 395, Address: 0x1d1944, Func Offset: 0x164
	// Line 396, Address: 0x1d1950, Func Offset: 0x170
	// Line 398, Address: 0x1d1958, Func Offset: 0x178
	// Line 399, Address: 0x1d1970, Func Offset: 0x190
	// Line 400, Address: 0x1d1974, Func Offset: 0x194
	// Line 401, Address: 0x1d1994, Func Offset: 0x1b4
	// Line 402, Address: 0x1d1998, Func Offset: 0x1b8
	// Line 403, Address: 0x1d19a0, Func Offset: 0x1c0
	// Line 405, Address: 0x1d19c4, Func Offset: 0x1e4
	// Line 406, Address: 0x1d19d0, Func Offset: 0x1f0
	// Line 408, Address: 0x1d19d8, Func Offset: 0x1f8
	// Line 409, Address: 0x1d19f0, Func Offset: 0x210
	// Line 410, Address: 0x1d19f4, Func Offset: 0x214
	// Line 411, Address: 0x1d1a14, Func Offset: 0x234
	// Line 412, Address: 0x1d1a18, Func Offset: 0x238
	// Line 413, Address: 0x1d1a20, Func Offset: 0x240
	// Line 415, Address: 0x1d1a44, Func Offset: 0x264
	// Line 416, Address: 0x1d1a50, Func Offset: 0x270
	// Line 418, Address: 0x1d1a58, Func Offset: 0x278
	// Line 419, Address: 0x1d1a70, Func Offset: 0x290
	// Line 420, Address: 0x1d1a74, Func Offset: 0x294
	// Line 421, Address: 0x1d1a94, Func Offset: 0x2b4
	// Line 422, Address: 0x1d1a98, Func Offset: 0x2b8
	// Line 423, Address: 0x1d1aa0, Func Offset: 0x2c0
	// Line 425, Address: 0x1d1ac4, Func Offset: 0x2e4
	// Line 426, Address: 0x1d1ae8, Func Offset: 0x308
	// Line 428, Address: 0x1d1af0, Func Offset: 0x310
	// Line 429, Address: 0x1d1b08, Func Offset: 0x328
	// Line 430, Address: 0x1d1b0c, Func Offset: 0x32c
	// Line 431, Address: 0x1d1b2c, Func Offset: 0x34c
	// Line 432, Address: 0x1d1b30, Func Offset: 0x350
	// Line 433, Address: 0x1d1b38, Func Offset: 0x358
	// Line 435, Address: 0x1d1b5c, Func Offset: 0x37c
	// Line 436, Address: 0x1d1b80, Func Offset: 0x3a0
	// Line 438, Address: 0x1d1b88, Func Offset: 0x3a8
	// Line 439, Address: 0x1d1b90, Func Offset: 0x3b0
	// Line 440, Address: 0x1d1ba8, Func Offset: 0x3c8
	// Line 441, Address: 0x1d1bac, Func Offset: 0x3cc
	// Line 442, Address: 0x1d1bb4, Func Offset: 0x3d4
	// Line 444, Address: 0x1d1bd8, Func Offset: 0x3f8
	// Line 445, Address: 0x1d1be4, Func Offset: 0x404
	// Line 446, Address: 0x1d1bf8, Func Offset: 0x418
	// Line 448, Address: 0x1d1c28, Func Offset: 0x448
	// Line 450, Address: 0x1d1c30, Func Offset: 0x450
	// Line 451, Address: 0x1d1c38, Func Offset: 0x458
	// Line 452, Address: 0x1d1c50, Func Offset: 0x470
	// Line 453, Address: 0x1d1c54, Func Offset: 0x474
	// Line 454, Address: 0x1d1c5c, Func Offset: 0x47c
	// Line 456, Address: 0x1d1c80, Func Offset: 0x4a0
	// Line 457, Address: 0x1d1c8c, Func Offset: 0x4ac
	// Line 458, Address: 0x1d1ca0, Func Offset: 0x4c0
	// Line 462, Address: 0x1d1cec, Func Offset: 0x50c
	// Line 463, Address: 0x1d1d08, Func Offset: 0x528
	// Line 466, Address: 0x1d1d84, Func Offset: 0x5a4
	// Line 468, Address: 0x1d1db4, Func Offset: 0x5d4
	// Line 469, Address: 0x1d1de4, Func Offset: 0x604
	// Line 471, Address: 0x1d1dec, Func Offset: 0x60c
	// Line 472, Address: 0x1d1e1c, Func Offset: 0x63c
	// Line 474, Address: 0x1d1e24, Func Offset: 0x644
	// Line 476, Address: 0x1d1ea4, Func Offset: 0x6c4
	// Line 478, Address: 0x1d1eac, Func Offset: 0x6cc
	// Line 481, Address: 0x1d1f40, Func Offset: 0x760
	// Line 483, Address: 0x1d1f48, Func Offset: 0x768
	// Line 484, Address: 0x1d1f94, Func Offset: 0x7b4
	// Line 486, Address: 0x1d1fcc, Func Offset: 0x7ec
	// Line 487, Address: 0x1d1ff8, Func Offset: 0x818
	// Line 489, Address: 0x1d2000, Func Offset: 0x820
	// Line 490, Address: 0x1d2030, Func Offset: 0x850
	// Line 492, Address: 0x1d2068, Func Offset: 0x888
	// Line 494, Address: 0x1d2070, Func Offset: 0x890
	// Line 496, Address: 0x1d20bc, Func Offset: 0x8dc
	// Line 501, Address: 0x1d20ec, Func Offset: 0x90c
	// Line 502, Address: 0x1d2104, Func Offset: 0x924
	// Line 504, Address: 0x1d211c, Func Offset: 0x93c
	// Line 506, Address: 0x1d214c, Func Offset: 0x96c
	// Line 507, Address: 0x1d2160, Func Offset: 0x980
	// Line 509, Address: 0x1d2168, Func Offset: 0x988
	// Line 510, Address: 0x1d2180, Func Offset: 0x9a0
	// Line 511, Address: 0x1d2190, Func Offset: 0x9b0
	// Line 513, Address: 0x1d2198, Func Offset: 0x9b8
	// Line 514, Address: 0x1d21b0, Func Offset: 0x9d0
	// Line 515, Address: 0x1d21c0, Func Offset: 0x9e0
	// Line 520, Address: 0x1d21c8, Func Offset: 0x9e8
	// Line 521, Address: 0x1d21cc, Func Offset: 0x9ec
	// Line 523, Address: 0x1d21ec, Func Offset: 0xa0c
	// Line 524, Address: 0x1d21f8, Func Offset: 0xa18
	// Line 526, Address: 0x1d2200, Func Offset: 0xa20
	// Line 527, Address: 0x1d220c, Func Offset: 0xa2c
	// Line 528, Address: 0x1d2214, Func Offset: 0xa34
	// Line 529, Address: 0x1d2220, Func Offset: 0xa40
	// Line 530, Address: 0x1d2240, Func Offset: 0xa60
	// Line 531, Address: 0x1d2244, Func Offset: 0xa64
	// Line 532, Address: 0x1d224c, Func Offset: 0xa6c
	// Line 533, Address: 0x1d2250, Func Offset: 0xa70
	// Line 534, Address: 0x1d2264, Func Offset: 0xa84
	// Line 535, Address: 0x1d2268, Func Offset: 0xa88
	// Line 536, Address: 0x1d2270, Func Offset: 0xa90
	// Line 537, Address: 0x1d2288, Func Offset: 0xaa8
	// Line 538, Address: 0x1d2290, Func Offset: 0xab0
	// Line 539, Address: 0x1d2298, Func Offset: 0xab8
	// Line 540, Address: 0x1d22a0, Func Offset: 0xac0
	// Line 546, Address: 0x1d22a4, Func Offset: 0xac4
	// Line 547, Address: 0x1d22bc, Func Offset: 0xadc
	// Line 549, Address: 0x1d22e4, Func Offset: 0xb04
	// Line 550, Address: 0x1d22fc, Func Offset: 0xb1c
	// Line 552, Address: 0x1d2314, Func Offset: 0xb34
	// Line 553, Address: 0x1d234c, Func Offset: 0xb6c
	// Line 554, Address: 0x1d2350, Func Offset: 0xb70
	// Line 555, Address: 0x1d235c, Func Offset: 0xb7c
	// Line 556, Address: 0x1d2364, Func Offset: 0xb84
	// Line 557, Address: 0x1d2370, Func Offset: 0xb90
	// Line 558, Address: 0x1d2374, Func Offset: 0xb94
	// Line 559, Address: 0x1d237c, Func Offset: 0xb9c
	// Line 560, Address: 0x1d2384, Func Offset: 0xba4
	// Line 561, Address: 0x1d2388, Func Offset: 0xba8
	// Line 562, Address: 0x1d2394, Func Offset: 0xbb4
	// Line 563, Address: 0x1d2398, Func Offset: 0xbb8
	// Line 564, Address: 0x1d239c, Func Offset: 0xbbc
	// Line 565, Address: 0x1d23a8, Func Offset: 0xbc8
	// Line 567, Address: 0x1d23b0, Func Offset: 0xbd0
	// Line 569, Address: 0x1d23c8, Func Offset: 0xbe8
	// Line 570, Address: 0x1d2400, Func Offset: 0xc20
	// Line 571, Address: 0x1d2404, Func Offset: 0xc24
	// Line 572, Address: 0x1d2410, Func Offset: 0xc30
	// Line 573, Address: 0x1d2418, Func Offset: 0xc38
	// Line 574, Address: 0x1d2420, Func Offset: 0xc40
	// Line 575, Address: 0x1d2424, Func Offset: 0xc44
	// Line 576, Address: 0x1d2444, Func Offset: 0xc64
	// Line 577, Address: 0x1d244c, Func Offset: 0xc6c
	// Line 578, Address: 0x1d2450, Func Offset: 0xc70
	// Line 579, Address: 0x1d245c, Func Offset: 0xc7c
	// Line 580, Address: 0x1d2460, Func Offset: 0xc80
	// Line 581, Address: 0x1d2464, Func Offset: 0xc84
	// Line 582, Address: 0x1d2470, Func Offset: 0xc90
	// Line 584, Address: 0x1d2478, Func Offset: 0xc98
	// Line 586, Address: 0x1d2490, Func Offset: 0xcb0
	// Line 588, Address: 0x1d24a4, Func Offset: 0xcc4
	// Line 590, Address: 0x1d24bc, Func Offset: 0xcdc
	// Line 592, Address: 0x1d24d0, Func Offset: 0xcf0
	// Line 594, Address: 0x1d24e8, Func Offset: 0xd08
	// Line 596, Address: 0x1d2500, Func Offset: 0xd20
	// Line 598, Address: 0x1d2518, Func Offset: 0xd38
	// Line 600, Address: 0x1d252c, Func Offset: 0xd4c
	// Line 602, Address: 0x1d2544, Func Offset: 0xd64
	// Line 608, Address: 0x1d2558, Func Offset: 0xd78
	// Func End, Address: 0x1d2584, Func Offset: 0xda4
}

// 
// Start address: 0x1d2590
int fjAssert_(char* file, int line, char* str)
{
	// Line 612, Address: 0x1d2590, Func Offset: 0
	// Line 613, Address: 0x1d25a0, Func Offset: 0x10
	// Line 615, Address: 0x1d25b8, Func Offset: 0x28
	// Line 616, Address: 0x1d25bc, Func Offset: 0x2c
	// Line 617, Address: 0x1d25c0, Func Offset: 0x30
	// Func End, Address: 0x1d25d0, Func Offset: 0x40
}

// 
// Start address: 0x1d25d0
void debug_object()
{
	float q;
	float wsm[4][4];
	float vec2[4];
	float vec[4];
	int s;
	// Line 621, Address: 0x1d25d0, Func Offset: 0
	// Line 622, Address: 0x1d25e4, Func Offset: 0x14
	// Line 626, Address: 0x1d25e8, Func Offset: 0x18
	// Line 627, Address: 0x1d2600, Func Offset: 0x30
	// Line 628, Address: 0x1d2614, Func Offset: 0x44
	// Line 629, Address: 0x1d2624, Func Offset: 0x54
	// Line 630, Address: 0x1d2634, Func Offset: 0x64
	// Line 631, Address: 0x1d2640, Func Offset: 0x70
	// Line 632, Address: 0x1d2648, Func Offset: 0x78
	// Line 634, Address: 0x1d265c, Func Offset: 0x8c
	// Line 635, Address: 0x1d2678, Func Offset: 0xa8
	// Line 636, Address: 0x1d2690, Func Offset: 0xc0
	// Line 638, Address: 0x1d26d0, Func Offset: 0x100
	// Line 639, Address: 0x1d26e8, Func Offset: 0x118
	// Line 641, Address: 0x1d2728, Func Offset: 0x158
	// Line 642, Address: 0x1d2738, Func Offset: 0x168
	// Line 643, Address: 0x1d2750, Func Offset: 0x180
	// Line 645, Address: 0x1d2790, Func Offset: 0x1c0
	// Line 646, Address: 0x1d27a8, Func Offset: 0x1d8
	// Line 648, Address: 0x1d27e8, Func Offset: 0x218
	// Line 649, Address: 0x1d2800, Func Offset: 0x230
	// Line 651, Address: 0x1d2840, Func Offset: 0x270
	// Line 652, Address: 0x1d2858, Func Offset: 0x288
	// Line 654, Address: 0x1d2898, Func Offset: 0x2c8
	// Line 655, Address: 0x1d28b0, Func Offset: 0x2e0
	// Line 657, Address: 0x1d28f0, Func Offset: 0x320
	// Line 658, Address: 0x1d2908, Func Offset: 0x338
	// Line 660, Address: 0x1d2948, Func Offset: 0x378
	// Line 661, Address: 0x1d2960, Func Offset: 0x390
	// Line 662, Address: 0x1d2968, Func Offset: 0x398
	// Line 663, Address: 0x1d2990, Func Offset: 0x3c0
	// Line 664, Address: 0x1d29bc, Func Offset: 0x3ec
	// Line 665, Address: 0x1d29dc, Func Offset: 0x40c
	// Line 667, Address: 0x1d2a20, Func Offset: 0x450
	// Line 668, Address: 0x1d2a28, Func Offset: 0x458
	// Line 669, Address: 0x1d2a40, Func Offset: 0x470
	// Line 671, Address: 0x1d2a78, Func Offset: 0x4a8
	// Line 672, Address: 0x1d2a90, Func Offset: 0x4c0
	// Line 674, Address: 0x1d2ac8, Func Offset: 0x4f8
	// Line 675, Address: 0x1d2ae0, Func Offset: 0x510
	// Line 677, Address: 0x1d2b20, Func Offset: 0x550
	// Line 678, Address: 0x1d2b38, Func Offset: 0x568
	// Line 680, Address: 0x1d2b78, Func Offset: 0x5a8
	// Line 681, Address: 0x1d2b90, Func Offset: 0x5c0
	// Line 683, Address: 0x1d2bd0, Func Offset: 0x600
	// Line 684, Address: 0x1d2be8, Func Offset: 0x618
	// Line 686, Address: 0x1d2c28, Func Offset: 0x658
	// Line 687, Address: 0x1d2c40, Func Offset: 0x670
	// Line 689, Address: 0x1d2c4c, Func Offset: 0x67c
	// Line 690, Address: 0x1d2c78, Func Offset: 0x6a8
	// Line 691, Address: 0x1d2c9c, Func Offset: 0x6cc
	// Line 692, Address: 0x1d2cb0, Func Offset: 0x6e0
	// Line 694, Address: 0x1d2cc8, Func Offset: 0x6f8
	// Line 696, Address: 0x1d2d24, Func Offset: 0x754
	// Line 697, Address: 0x1d2d38, Func Offset: 0x768
	// Line 698, Address: 0x1d2d98, Func Offset: 0x7c8
	// Line 699, Address: 0x1d2e34, Func Offset: 0x864
	// Line 700, Address: 0x1d2e3c, Func Offset: 0x86c
	// Line 702, Address: 0x1d2e5c, Func Offset: 0x88c
	// Line 703, Address: 0x1d2e78, Func Offset: 0x8a8
	// Line 704, Address: 0x1d2ea4, Func Offset: 0x8d4
	// Line 705, Address: 0x1d2eb4, Func Offset: 0x8e4
	// Line 706, Address: 0x1d2ec0, Func Offset: 0x8f0
	// Line 707, Address: 0x1d2ecc, Func Offset: 0x8fc
	// Line 708, Address: 0x1d2f04, Func Offset: 0x934
	// Line 709, Address: 0x1d2f10, Func Offset: 0x940
	// Line 710, Address: 0x1d2f1c, Func Offset: 0x94c
	// Line 711, Address: 0x1d2f54, Func Offset: 0x984
	// Line 712, Address: 0x1d2f5c, Func Offset: 0x98c
	// Func End, Address: 0x1d2f78, Func Offset: 0x9a8
}

