typedef struct _anon0;
typedef struct _anon1;
typedef union Q_WORDDATA;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct SHADOW_MAN;
typedef struct SHADOW_PACKET_BUF;
typedef struct _anon2;
typedef struct shGsDrawEnv;
typedef struct _anon3;
typedef struct _anon4;
typedef struct SHADOW_MICRO_FRAME;
typedef struct utilHeapCtrl;
typedef struct SHADOW_CHAR_MAN;
typedef struct _anon5;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct _anon6;
typedef struct _anon7;
typedef struct SHADOW_CHAR_HEAD;
typedef struct _anon8;
typedef struct _anon9;
typedef struct shBattleFight;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef struct shGsStencilDrawEnv;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct shBattleShot;
typedef struct _anon13;
typedef struct _anon14;
typedef struct SPOT_LIGHT;
typedef struct shGsLoopEnv;
typedef struct _anon15;
typedef struct shGsTinyDrawEnv;
typedef struct shAttackInfo;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef union _anon19;
typedef struct shGsAllEnv;
typedef struct _anon20;
typedef struct SHADOW_OFF_WORK;
typedef struct _anon21;


typedef Q_WORDDATA type_0[10];
typedef float type_1[4];
typedef Q_WORDDATA type_2[10];
typedef SHADOW_OFF_WORK type_3[4];
typedef float type_4[4];
typedef Q_WORDDATA type_5[10];
typedef float type_6[4][4];
typedef Q_WORDDATA type_7[10];
typedef Q_WORDDATA type_8[6400];
typedef Q_WORDDATA type_9[8];
typedef Q_WORDDATA type_10[2];
typedef Q_WORDDATA type_11[2];
typedef Q_WORDDATA type_12[320];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[5120];
typedef Q_WORDDATA type_16[2];
typedef Q_WORDDATA type_17[2];
typedef Q_WORDDATA type_18[5];
typedef SHADOW_CHAR_MAN* type_19[16];
typedef Q_WORDDATA type_20[2];
typedef Q_WORDDATA type_21[2];
typedef SHADOW_OUTDOOR_MAN* type_22[4];
typedef Q_WORDDATA type_23[2];
typedef unsigned char type_24[10];
typedef Q_WORDDATA type_25[5];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[2];
typedef unsigned int type_32[4];
typedef Q_WORDDATA type_33[2];
typedef unsigned short type_34[8];
typedef Q_WORDDATA type_35[2];
typedef float type_36[4];
typedef Q_WORDDATA type_37[2];
typedef unsigned char type_38[16];
typedef Q_WORDDATA type_39[2];
typedef Q_WORDDATA type_40[6];
typedef int type_41[4];
typedef Q_WORDDATA type_42[2];
typedef short type_43[8];
typedef char type_44[16];
typedef Q_WORDDATA type_45[2];
typedef unsigned long type_46[2];
typedef Q_WORDDATA type_47[6];
typedef shAttackInfo type_48[46];
typedef unsigned int type_49[3];
typedef unsigned int type_50[3];
typedef unsigned int type_51[3];
typedef unsigned int type_52[24];
typedef unsigned int type_53[3];
typedef unsigned char type_54[10];
typedef unsigned int type_55[3];
typedef unsigned short type_56[8];
typedef unsigned char type_57[13];
typedef short type_58[16];
typedef _anon6 type_59[3];
typedef shGsDrawEnv type_60[3];
typedef shGsStencilDrawEnv type_61[3];
typedef shGsTinyDrawEnv type_62[6];
typedef Q_WORDDATA type_63[10];
typedef Q_WORDDATA type_64[10];
typedef unsigned char type_65[34];
typedef Q_WORDDATA type_66[10];

struct _anon0
{
	struct
	{
		unsigned int EN1 : 1;
		unsigned int EN2 : 1;
		unsigned int CRTMD : 3;
		unsigned int MMOD : 1;
		unsigned int AMOD : 1;
		unsigned int SLBG : 1;
		unsigned int ALP : 8;
		unsigned int p0 : 16;
	};
	unsigned int p1;
};

struct _anon1
{
	struct
	{
		unsigned long ATE : 1;
		unsigned long ATST : 3;
		unsigned long AREF : 8;
		unsigned long AFAIL : 2;
		unsigned long DATE : 1;
		unsigned long DATM : 1;
		unsigned long ZTE : 1;
		unsigned long ZTST : 2;
		unsigned long pad19 : 45;
	};
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

struct SHADOW_MAN
{
	char change_flag;
	short spot_num;
	short parallel_num;
	short char_man_num;
	short outdoor_man_num;
	short indoor_man_num;
	SHADOW_CHAR_MAN* char_man[16];
	SHADOW_OUTDOOR_MAN* outdoor_man[4];
	SHADOW_PACKET_BUF reftag_pool;
	SHADOW_PACKET_BUF kick_packet;
};

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct _anon2
{
	struct
	{
		unsigned int FBP : 9;
		unsigned int FBW : 6;
		unsigned int PSM : 5;
		unsigned int p0 : 12;
	};
	struct
	{
		unsigned int DBX : 11;
		unsigned int DBY : 11;
		unsigned int p1 : 10;
	};
};

struct shGsDrawEnv
{
	_anon5 giftag;
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon16 clear;
	_anon5 giftag_nc;
	_anon9 draw_nc;
	Q_WORDDATA drawq2_nc[5];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
	Q_WORDDATA gifad_frame_mskRGB;
	Q_WORDDATA frame_mskRGB;
};

struct _anon3
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon4
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA giftag_3;
	Q_WORDDATA giftag_4;
	Q_WORDDATA giftag_5;
	Q_WORDDATA giftag_6;
	Q_WORDDATA giftag_7;
	Q_WORDDATA giftag_8;
	Q_WORDDATA giftag_9;
	Q_WORDDATA giftag_10;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha1;
	Q_WORDDATA flags;
	float y_unit[4];
	float spot_light_position[4];
	float spot_light_direction[4];
	float spot_light_range[4];
	float cam_pos[4];
	float spot_cam_dir[4];
	float cam_range[4];
	unsigned int* pKickAddr;
	unsigned int* pRawData;
};

struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};

struct SHADOW_CHAR_MAN
{
	unsigned short kind;
	short id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short size;
	short vert_num;
	float drop_shadow_matrix[4][4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct _anon5
{
	struct
	{
		unsigned long NLOOP : 15;
		unsigned long EOP : 1;
		unsigned long pad16 : 16;
		unsigned long id : 14;
		unsigned long PRE : 1;
		unsigned long PRIM : 11;
		unsigned long FLG : 2;
		unsigned long NREG : 4;
	};
	struct
	{
		unsigned long REGS0 : 4;
		unsigned long REGS1 : 4;
		unsigned long REGS2 : 4;
		unsigned long REGS3 : 4;
		unsigned long REGS4 : 4;
		unsigned long REGS5 : 4;
		unsigned long REGS6 : 4;
		unsigned long REGS7 : 4;
		unsigned long REGS8 : 4;
		unsigned long REGS9 : 4;
		unsigned long REGS10 : 4;
		unsigned long REGS11 : 4;
		unsigned long REGS12 : 4;
		unsigned long REGS13 : 4;
		unsigned long REGS14 : 4;
		unsigned long REGS15 : 4;
	};
};

struct SHADOW_OUTDOOR_MAN
{
	unsigned short kind;
	short map_id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short size;
	short vert_num;
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct _anon6
{
	_anon0 pmode;
	_anon8 smode2;
	_anon2 dispfb;
	_anon13 display;
	_anon14 bgcolor;
};

struct _anon7
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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

struct _anon8
{
	struct
	{
		unsigned int INT : 1;
		unsigned int FFMD : 1;
		unsigned int DPMS : 2;
		unsigned int p0 : 28;
	};
	unsigned int p1;
};

struct _anon9
{
	_anon21 frame1;
	unsigned long frame1addr;
	_anon10 zbuf1;
	long zbuf1addr;
	_anon4 xyoffset1;
	long xyoffset1addr;
	_anon20 scissor1;
	long scissor1addr;
	_anon15 prmodecont;
	long prmodecontaddr;
	_anon3 colclamp;
	long colclampaddr;
	_anon18 dthe;
	long dtheaddr;
	_anon1 test1;
	long test1addr;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct SHADOW_OUTDOOR_HEAD
{
	unsigned short kind;
	short map_id;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
};

struct shGsStencilDrawEnv
{
	_anon5 giftag;
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon16 clear;
	Q_WORDDATA frame;
	_anon5 giftag_nc;
	_anon9 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon10
{
	struct
	{
		unsigned long ZBP : 9;
		unsigned long pad09 : 15;
		unsigned long PSM : 4;
		unsigned long pad28 : 4;
		unsigned long ZMSK : 1;
		unsigned long pad33 : 31;
	};
};

struct _anon11
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

struct _anon12
{
	struct
	{
		unsigned long PRIM : 3;
		unsigned long IIP : 1;
		unsigned long TME : 1;
		unsigned long FGE : 1;
		unsigned long ABE : 1;
		unsigned long AA1 : 1;
		unsigned long FST : 1;
		unsigned long CTXT : 1;
		unsigned long FIX : 1;
		unsigned long pad11 : 53;
	};
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon13
{
	struct
	{
		unsigned int DX : 12;
		unsigned int DY : 11;
		unsigned int MAGH : 4;
		unsigned int MAGV : 2;
		unsigned int p0 : 3;
	};
	struct
	{
		unsigned int DW : 12;
		unsigned int DH : 11;
		unsigned int p1 : 9;
	};
};

struct _anon14
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int p0 : 8;
	};
	unsigned int p1;
};

struct SPOT_LIGHT
{
	float c[4];
	float zdir[4];
	float range[4];
};

struct shGsLoopEnv
{
	unsigned int GsDrawFBPs[3];
	unsigned int GsNowDispFBPs[3];
	unsigned int GsNextDispFBPs[3];
	unsigned int GsTexTBPs[24];
	unsigned int GsShadowFBP[3];
	unsigned int GsShadowWorkFBP[3];
	unsigned short clutsize;
	unsigned short clutamount;
	unsigned short GsClutPage[8];
};

struct _anon15
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct shGsTinyDrawEnv
{
	Q_WORDDATA giftag;
	Q_WORDDATA frame;
	Q_WORDDATA scissor;
	Q_WORDDATA xyoffset;
	Q_WORDDATA zbuf;
	Q_WORDDATA test;
	Q_WORDDATA gifad_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon19 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon16
{
	_anon1 testa;
	long testaaddr;
	_anon12 prim;
	long primaddr;
	_anon17 rgbaq;
	long rgbaqaddr;
	_anon7 xyz2a;
	long xyz2aaddr;
	_anon7 xyz2b;
	long xyz2baddr;
	_anon1 testb;
	long testbaddr;
};

struct _anon17
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int A : 8;
	};
	float Q;
};

struct _anon18
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

union _anon19
{
	shBattleFight fight;
	shBattleShot shot;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon6 DispEnv[3];
	shGsDrawEnv DrawEnv[3];
	shGsStencilDrawEnv StencilBuf[3];
	shGsTinyDrawEnv StencilWork[6];
	Q_WORDDATA DefaultEnv[10];
	Q_WORDDATA StencilEnv[10];
	Q_WORDDATA CompshadowEnv[10];
	Q_WORDDATA Filter_A[10];
	Q_WORDDATA Filter_B[10];
	Q_WORDDATA Filter_C[10];
	Q_WORDDATA Filter_D[10];
	Q_WORDDATA MoveGTex[8];
	Q_WORDDATA GsReg_ALPHA_A[2];
	Q_WORDDATA GsReg_ALPHA_B[2];
	Q_WORDDATA GsReg_ALPHA_C[2];
	Q_WORDDATA GsReg_ALPHA_D[2];
	Q_WORDDATA GsReg_ALPHA_E[2];
	Q_WORDDATA GsReg_TEST_A[2];
	Q_WORDDATA GsReg_TEST_B[2];
	Q_WORDDATA GsReg_TEST_C[2];
	Q_WORDDATA GsReg_TEST_D[2];
	Q_WORDDATA GsReg_TEXA_A[2];
	Q_WORDDATA GsReg_TEXA_B[2];
	Q_WORDDATA GsReg_ZBUF_A[2];
	Q_WORDDATA GsReg_ZBUF_B[2];
	Q_WORDDATA GsReg_PABE_A[2];
	Q_WORDDATA GsReg_PABE_B[2];
	Q_WORDDATA GsReg_FBA_A[2];
	Q_WORDDATA GsReg_FBA_B[2];
	Q_WORDDATA GsReg_PRMODECONT_A[2];
	Q_WORDDATA GsReg_PRMODECONT_B[2];
	Q_WORDDATA GsSync_DummyLABEL[2];
	Q_WORDDATA GsSync_DummyTEXFLUSH[2];
	shGsDrawEnv Now_DrawEnv;
};

struct _anon20
{
	struct
	{
		unsigned long SCAX0 : 11;
		unsigned long pad11 : 5;
		unsigned long SCAX1 : 11;
		unsigned long pad27 : 5;
		unsigned long SCAY0 : 11;
		unsigned long pad43 : 5;
		unsigned long SCAY1 : 11;
		unsigned long pad59 : 5;
	};
};

struct SHADOW_OFF_WORK
{
	short map_id;
	short obj_id[16];
};

struct _anon21
{
	struct
	{
		unsigned long FBP : 9;
		unsigned long pad09 : 7;
		unsigned long FBW : 6;
		unsigned long pad22 : 2;
		unsigned long PSM : 6;
		unsigned long pad30 : 2;
		unsigned long FBMSK : 32;
	};
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
SHADOW_OFF_WORK shadow_off_work[4];
Q_WORDDATA Shadow_REFtag_Packet[5120];
SHADOW_MAN shadow_man;
Q_WORDDATA Shadow_Kick_Packet[320];
utilHeapCtrl* shadow_calcheap;
Q_WORDDATA Shadow_Calcwork[6400];
unsigned int Shadow_micro_code_parallel;
SHADOW_MICRO_FRAME shadow_micro_frame_parallel;
shGsAllEnv shGs_AllEnv;
unsigned int Shadow_micro_code;
SHADOW_MICRO_FRAME shadow_micro_frame;
unsigned int Drop_Shadow_micro_code;
SHADOW_MICRO_FRAME drop_shadow_micro_frame;

void sh2shd_init_shadow();
void sh2shd_reset_shadow();
int sh2shd_add_char(unsigned short kind, short id, Q_WORDDATA* raw_data, int SHADOW_LIGHTING_MODE);
int sh2shd_add_map(unsigned short id, Q_WORDDATA* raw_data, int SHADOW_LIGHTING_MODE);
int sh2shd_Draw_ShadowChar(void* kg1, unsigned short kind, unsigned short id, int lightmode);
int sh2shd_del_map(unsigned short id);
Q_WORDDATA* sh2shd_exe_shadow(_anon11* cam);
void sh2shd_renew_shadow_man(SPOT_LIGHT* spot, float spot_cam_angle, _anon11* cam);
float get_spot_camera_angle2(float* cam_pos, SPOT_LIGHT* spot);
Q_WORDDATA* sh2shd_exe_drop_shadow(_anon11* cam, int full_switch, int alpha_switch);
void sh2shd_renew_drop_shadow_man(SPOT_LIGHT* spot, _anon11* cam, int full_switch);
void sh2shd_make_drop_plane(float* plane, float* pos, float* normal);

// 
// Start address: 0x1a6730
void sh2shd_init_shadow()
{
	int j;
	int i;
	// Line 52, Address: 0x1a6730, Func Offset: 0
	// Line 56, Address: 0x1a6740, Func Offset: 0x10
	// Line 57, Address: 0x1a6748, Func Offset: 0x18
	// Line 58, Address: 0x1a6750, Func Offset: 0x20
	// Line 59, Address: 0x1a6758, Func Offset: 0x28
	// Line 60, Address: 0x1a6760, Func Offset: 0x30
	// Line 61, Address: 0x1a6768, Func Offset: 0x38
	// Line 63, Address: 0x1a6770, Func Offset: 0x40
	// Line 64, Address: 0x1a677c, Func Offset: 0x4c
	// Line 66, Address: 0x1a67a4, Func Offset: 0x74
	// Line 67, Address: 0x1a67b0, Func Offset: 0x80
	// Line 71, Address: 0x1a67d4, Func Offset: 0xa4
	// Line 75, Address: 0x1a67f4, Func Offset: 0xc4
	// Line 80, Address: 0x1a680c, Func Offset: 0xdc
	// Line 82, Address: 0x1a6824, Func Offset: 0xf4
	// Line 83, Address: 0x1a682c, Func Offset: 0xfc
	// Line 84, Address: 0x1a6834, Func Offset: 0x104
	// Line 87, Address: 0x1a683c, Func Offset: 0x10c
	// Line 91, Address: 0x1a6848, Func Offset: 0x118
	// Line 92, Address: 0x1a6868, Func Offset: 0x138
	// Line 93, Address: 0x1a6874, Func Offset: 0x144
	// Line 94, Address: 0x1a68ac, Func Offset: 0x17c
	// Line 95, Address: 0x1a68bc, Func Offset: 0x18c
	// Func End, Address: 0x1a68d4, Func Offset: 0x1a4
}

// 
// Start address: 0x1a68e0
void sh2shd_reset_shadow()
{
	int i;
	// Line 100, Address: 0x1a68e0, Func Offset: 0
	// Line 107, Address: 0x1a68ec, Func Offset: 0xc
	// Line 109, Address: 0x1a68f8, Func Offset: 0x18
	// Line 112, Address: 0x1a6914, Func Offset: 0x34
	// Line 113, Address: 0x1a6934, Func Offset: 0x54
	// Line 116, Address: 0x1a694c, Func Offset: 0x6c
	// Line 117, Address: 0x1a6968, Func Offset: 0x88
	// Line 118, Address: 0x1a697c, Func Offset: 0x9c
	// Line 120, Address: 0x1a6994, Func Offset: 0xb4
	// Line 122, Address: 0x1a69a0, Func Offset: 0xc0
	// Line 125, Address: 0x1a69bc, Func Offset: 0xdc
	// Line 126, Address: 0x1a69dc, Func Offset: 0xfc
	// Line 129, Address: 0x1a69f4, Func Offset: 0x114
	// Line 130, Address: 0x1a6a10, Func Offset: 0x130
	// Line 131, Address: 0x1a6a24, Func Offset: 0x144
	// Line 146, Address: 0x1a6a3c, Func Offset: 0x15c
	// Line 147, Address: 0x1a6a44, Func Offset: 0x164
	// Line 148, Address: 0x1a6a4c, Func Offset: 0x16c
	// Line 149, Address: 0x1a6a54, Func Offset: 0x174
	// Line 150, Address: 0x1a6a5c, Func Offset: 0x17c
	// Line 151, Address: 0x1a6a64, Func Offset: 0x184
	// Line 152, Address: 0x1a6a6c, Func Offset: 0x18c
	// Func End, Address: 0x1a6a80, Func Offset: 0x1a0
}

// 
// Start address: 0x1a6a80
int sh2shd_add_char(unsigned short kind, short id, Q_WORDDATA* raw_data, int SHADOW_LIGHTING_MODE)
{
	int i;
	SHADOW_CHAR_HEAD char_head;
	Q_WORDDATA* cur;
	// Line 305, Address: 0x1a6a80, Func Offset: 0
	// Line 306, Address: 0x1a6aa0, Func Offset: 0x20
	// Line 310, Address: 0x1a6aa4, Func Offset: 0x24
	// Line 311, Address: 0x1a6ac0, Func Offset: 0x40
	// Line 314, Address: 0x1a6acc, Func Offset: 0x4c
	// Line 317, Address: 0x1a6af8, Func Offset: 0x78
	// Line 318, Address: 0x1a6b04, Func Offset: 0x84
	// Line 319, Address: 0x1a6b20, Func Offset: 0xa0
	// Line 321, Address: 0x1a6b38, Func Offset: 0xb8
	// Line 322, Address: 0x1a6b44, Func Offset: 0xc4
	// Line 327, Address: 0x1a6b50, Func Offset: 0xd0
	// Line 328, Address: 0x1a6b78, Func Offset: 0xf8
	// Line 329, Address: 0x1a6b94, Func Offset: 0x114
	// Line 334, Address: 0x1a6ba0, Func Offset: 0x120
	// Line 335, Address: 0x1a6be0, Func Offset: 0x160
	// Line 338, Address: 0x1a6c00, Func Offset: 0x180
	// Line 339, Address: 0x1a6c1c, Func Offset: 0x19c
	// Line 344, Address: 0x1a6c28, Func Offset: 0x1a8
	// Line 347, Address: 0x1a6c3c, Func Offset: 0x1bc
	// Line 350, Address: 0x1a6c64, Func Offset: 0x1e4
	// Line 351, Address: 0x1a6c84, Func Offset: 0x204
	// Line 352, Address: 0x1a6c90, Func Offset: 0x210
	// Line 354, Address: 0x1a6cac, Func Offset: 0x22c
	// Line 357, Address: 0x1a6cc0, Func Offset: 0x240
	// Line 359, Address: 0x1a6ccc, Func Offset: 0x24c
	// Line 360, Address: 0x1a6cd0, Func Offset: 0x250
	// Func End, Address: 0x1a6ce8, Func Offset: 0x268
}

// 
// Start address: 0x1a6cf0
int sh2shd_add_map(unsigned short id, Q_WORDDATA* raw_data, int SHADOW_LIGHTING_MODE)
{
	int i;
	SHADOW_OUTDOOR_HEAD outdoor_head;
	Q_WORDDATA* cur;
	// Line 368, Address: 0x1a6cf0, Func Offset: 0
	// Line 369, Address: 0x1a6d0c, Func Offset: 0x1c
	// Line 374, Address: 0x1a6d10, Func Offset: 0x20
	// Line 375, Address: 0x1a6d2c, Func Offset: 0x3c
	// Line 378, Address: 0x1a6d38, Func Offset: 0x48
	// Line 381, Address: 0x1a6d64, Func Offset: 0x74
	// Line 382, Address: 0x1a6d70, Func Offset: 0x80
	// Line 383, Address: 0x1a6d8c, Func Offset: 0x9c
	// Line 385, Address: 0x1a6da0, Func Offset: 0xb0
	// Line 386, Address: 0x1a6dac, Func Offset: 0xbc
	// Line 390, Address: 0x1a6db8, Func Offset: 0xc8
	// Line 391, Address: 0x1a6de0, Func Offset: 0xf0
	// Line 392, Address: 0x1a6dfc, Func Offset: 0x10c
	// Line 396, Address: 0x1a6e08, Func Offset: 0x118
	// Line 397, Address: 0x1a6e48, Func Offset: 0x158
	// Line 400, Address: 0x1a6e68, Func Offset: 0x178
	// Line 401, Address: 0x1a6e84, Func Offset: 0x194
	// Line 405, Address: 0x1a6e90, Func Offset: 0x1a0
	// Line 408, Address: 0x1a6ea4, Func Offset: 0x1b4
	// Line 411, Address: 0x1a6ed0, Func Offset: 0x1e0
	// Line 412, Address: 0x1a6ef0, Func Offset: 0x200
	// Line 413, Address: 0x1a6efc, Func Offset: 0x20c
	// Line 415, Address: 0x1a6f18, Func Offset: 0x228
	// Line 417, Address: 0x1a6f2c, Func Offset: 0x23c
	// Line 419, Address: 0x1a6f38, Func Offset: 0x248
	// Line 420, Address: 0x1a6f3c, Func Offset: 0x24c
	// Func End, Address: 0x1a6f54, Func Offset: 0x264
}

// 
// Start address: 0x1a6f60
int sh2shd_Draw_ShadowChar(void* kg1, unsigned short kind, unsigned short id, int lightmode)
{
	// Line 478, Address: 0x1a6f60, Func Offset: 0
	// Line 484, Address: 0x1a6f78, Func Offset: 0x18
	// Line 486, Address: 0x1a6fa4, Func Offset: 0x44
	// Func End, Address: 0x1a6fb4, Func Offset: 0x54
}

// 
// Start address: 0x1a6fc0
int sh2shd_del_map(unsigned short id)
{
	int i;
	// Line 494, Address: 0x1a6fc0, Func Offset: 0
	// Line 502, Address: 0x1a6fd0, Func Offset: 0x10
	// Line 503, Address: 0x1a6fdc, Func Offset: 0x1c
	// Line 506, Address: 0x1a6ff8, Func Offset: 0x38
	// Line 508, Address: 0x1a7028, Func Offset: 0x68
	// Line 509, Address: 0x1a7040, Func Offset: 0x80
	// Line 514, Address: 0x1a7058, Func Offset: 0x98
	// Line 515, Address: 0x1a7084, Func Offset: 0xc4
	// Line 516, Address: 0x1a70a4, Func Offset: 0xe4
	// Line 519, Address: 0x1a70bc, Func Offset: 0xfc
	// Line 520, Address: 0x1a70e0, Func Offset: 0x120
	// Line 522, Address: 0x1a70fc, Func Offset: 0x13c
	// Line 525, Address: 0x1a7110, Func Offset: 0x150
	// Line 526, Address: 0x1a7138, Func Offset: 0x178
	// Line 527, Address: 0x1a7154, Func Offset: 0x194
	// Line 529, Address: 0x1a7168, Func Offset: 0x1a8
	// Line 530, Address: 0x1a717c, Func Offset: 0x1bc
	// Line 532, Address: 0x1a7188, Func Offset: 0x1c8
	// Line 533, Address: 0x1a718c, Func Offset: 0x1cc
	// Func End, Address: 0x1a71a0, Func Offset: 0x1e0
}

// 
// Start address: 0x1a71a0
Q_WORDDATA* sh2shd_exe_shadow(_anon11* cam)
{
	float cam_pos[4];
	SPOT_LIGHT spot;
	float spot_cam_angle;
	int i;
	// Line 544, Address: 0x1a71a0, Func Offset: 0
	// Line 566, Address: 0x1a71b0, Func Offset: 0x10
	// Line 567, Address: 0x1a71c8, Func Offset: 0x28
	// Line 569, Address: 0x1a71d4, Func Offset: 0x34
	// Line 576, Address: 0x1a71e8, Func Offset: 0x48
	// Line 581, Address: 0x1a71f4, Func Offset: 0x54
	// Line 587, Address: 0x1a7208, Func Offset: 0x68
	// Line 589, Address: 0x1a7224, Func Offset: 0x84
	// Line 592, Address: 0x1a7230, Func Offset: 0x90
	// Line 593, Address: 0x1a7240, Func Offset: 0xa0
	// Line 596, Address: 0x1a7250, Func Offset: 0xb0
	// Line 599, Address: 0x1a7268, Func Offset: 0xc8
	// Line 600, Address: 0x1a7280, Func Offset: 0xe0
	// Line 606, Address: 0x1a72a4, Func Offset: 0x104
	// Line 608, Address: 0x1a72bc, Func Offset: 0x11c
	// Line 610, Address: 0x1a72c8, Func Offset: 0x128
	// Line 611, Address: 0x1a72e4, Func Offset: 0x144
	// Line 613, Address: 0x1a7308, Func Offset: 0x168
	// Line 614, Address: 0x1a7344, Func Offset: 0x1a4
	// Line 615, Address: 0x1a7348, Func Offset: 0x1a8
	// Line 616, Address: 0x1a735c, Func Offset: 0x1bc
	// Line 619, Address: 0x1a7360, Func Offset: 0x1c0
	// Line 621, Address: 0x1a736c, Func Offset: 0x1cc
	// Line 622, Address: 0x1a7388, Func Offset: 0x1e8
	// Line 625, Address: 0x1a73ac, Func Offset: 0x20c
	// Line 633, Address: 0x1a73d4, Func Offset: 0x234
	// Line 634, Address: 0x1a73d8, Func Offset: 0x238
	// Line 637, Address: 0x1a73ec, Func Offset: 0x24c
	// Line 639, Address: 0x1a7404, Func Offset: 0x264
	// Line 641, Address: 0x1a7410, Func Offset: 0x270
	// Line 642, Address: 0x1a742c, Func Offset: 0x28c
	// Line 643, Address: 0x1a7450, Func Offset: 0x2b0
	// Line 644, Address: 0x1a7478, Func Offset: 0x2d8
	// Line 645, Address: 0x1a748c, Func Offset: 0x2ec
	// Line 648, Address: 0x1a7490, Func Offset: 0x2f0
	// Line 650, Address: 0x1a749c, Func Offset: 0x2fc
	// Line 651, Address: 0x1a74b8, Func Offset: 0x318
	// Line 652, Address: 0x1a74dc, Func Offset: 0x33c
	// Line 653, Address: 0x1a7500, Func Offset: 0x360
	// Line 654, Address: 0x1a7514, Func Offset: 0x374
	// Line 658, Address: 0x1a7518, Func Offset: 0x378
	// Line 661, Address: 0x1a7530, Func Offset: 0x390
	// Line 662, Address: 0x1a7548, Func Offset: 0x3a8
	// Line 668, Address: 0x1a756c, Func Offset: 0x3cc
	// Line 670, Address: 0x1a7584, Func Offset: 0x3e4
	// Line 672, Address: 0x1a7590, Func Offset: 0x3f0
	// Line 673, Address: 0x1a75ac, Func Offset: 0x40c
	// Line 674, Address: 0x1a75d4, Func Offset: 0x434
	// Line 675, Address: 0x1a7618, Func Offset: 0x478
	// Line 676, Address: 0x1a7640, Func Offset: 0x4a0
	// Line 677, Address: 0x1a7680, Func Offset: 0x4e0
	// Line 678, Address: 0x1a7694, Func Offset: 0x4f4
	// Line 692, Address: 0x1a7698, Func Offset: 0x4f8
	// Line 694, Address: 0x1a76b0, Func Offset: 0x510
	// Line 696, Address: 0x1a76bc, Func Offset: 0x51c
	// Line 697, Address: 0x1a76d8, Func Offset: 0x538
	// Line 699, Address: 0x1a7728, Func Offset: 0x588
	// Line 700, Address: 0x1a7750, Func Offset: 0x5b0
	// Line 701, Address: 0x1a7764, Func Offset: 0x5c4
	// Line 714, Address: 0x1a7768, Func Offset: 0x5c8
	// Line 724, Address: 0x1a7770, Func Offset: 0x5d0
	// Line 731, Address: 0x1a7788, Func Offset: 0x5e8
	// Line 732, Address: 0x1a7794, Func Offset: 0x5f4
	// Func End, Address: 0x1a77a8, Func Offset: 0x608
}

// 
// Start address: 0x1a77b0
void sh2shd_renew_shadow_man(SPOT_LIGHT* spot, float spot_cam_angle, _anon11* cam)
{
	float height;
	float plane[4];
	float normal[4];
	float pos[4];
	float virtual_light_position[4];
	float tmp[4];
	int spot_cam_flag;
	float cam_pos[4];
	float spot_cam_vector[4];
	float drop_shadow_matrix[4][4];
	float virtual_spot_c_back[4];
	float virtual_spot_c_chara[4];
	float length_back;
	float length_chara;
	float tan_theta;
	float cos_theta;
	int i;
	// Line 737, Address: 0x1a77b0, Func Offset: 0
	// Line 749, Address: 0x1a77e4, Func Offset: 0x34
	// Line 750, Address: 0x1a77e8, Func Offset: 0x38
	// Line 755, Address: 0x1a7830, Func Offset: 0x80
	// Line 756, Address: 0x1a7844, Func Offset: 0x94
	// Line 761, Address: 0x1a787c, Func Offset: 0xcc
	// Line 762, Address: 0x1a78a8, Func Offset: 0xf8
	// Line 764, Address: 0x1a78b4, Func Offset: 0x104
	// Line 768, Address: 0x1a78cc, Func Offset: 0x11c
	// Line 769, Address: 0x1a78d8, Func Offset: 0x128
	// Line 775, Address: 0x1a78e4, Func Offset: 0x134
	// Line 778, Address: 0x1a78fc, Func Offset: 0x14c
	// Line 779, Address: 0x1a7918, Func Offset: 0x168
	// Line 780, Address: 0x1a7938, Func Offset: 0x188
	// Line 785, Address: 0x1a7948, Func Offset: 0x198
	// Line 786, Address: 0x1a7960, Func Offset: 0x1b0
	// Line 790, Address: 0x1a7974, Func Offset: 0x1c4
	// Line 791, Address: 0x1a798c, Func Offset: 0x1dc
	// Line 793, Address: 0x1a7998, Func Offset: 0x1e8
	// Line 797, Address: 0x1a799c, Func Offset: 0x1ec
	// Line 800, Address: 0x1a79c8, Func Offset: 0x218
	// Line 802, Address: 0x1a79e0, Func Offset: 0x230
	// Line 811, Address: 0x1a79ec, Func Offset: 0x23c
	// Line 812, Address: 0x1a7a08, Func Offset: 0x258
	// Line 814, Address: 0x1a7a2c, Func Offset: 0x27c
	// Line 815, Address: 0x1a7a48, Func Offset: 0x298
	// Line 816, Address: 0x1a7a68, Func Offset: 0x2b8
	// Line 818, Address: 0x1a7a78, Func Offset: 0x2c8
	// Line 819, Address: 0x1a7a9c, Func Offset: 0x2ec
	// Line 820, Address: 0x1a7aa0, Func Offset: 0x2f0
	// Line 821, Address: 0x1a7ab4, Func Offset: 0x304
	// Line 823, Address: 0x1a7ab8, Func Offset: 0x308
	// Line 825, Address: 0x1a7ac4, Func Offset: 0x314
	// Line 826, Address: 0x1a7ae0, Func Offset: 0x330
	// Line 827, Address: 0x1a7b04, Func Offset: 0x354
	// Line 828, Address: 0x1a7b28, Func Offset: 0x378
	// Line 829, Address: 0x1a7b3c, Func Offset: 0x38c
	// Line 833, Address: 0x1a7b40, Func Offset: 0x390
	// Line 840, Address: 0x1a7b58, Func Offset: 0x3a8
	// Line 841, Address: 0x1a7b70, Func Offset: 0x3c0
	// Line 842, Address: 0x1a7b7c, Func Offset: 0x3cc
	// Line 843, Address: 0x1a7b98, Func Offset: 0x3e8
	// Line 851, Address: 0x1a7bb0, Func Offset: 0x400
	// Line 852, Address: 0x1a7bf8, Func Offset: 0x448
	// Line 853, Address: 0x1a7c0c, Func Offset: 0x45c
	// Line 854, Address: 0x1a7c20, Func Offset: 0x470
	// Line 855, Address: 0x1a7c48, Func Offset: 0x498
	// Line 858, Address: 0x1a7c6c, Func Offset: 0x4bc
	// Line 862, Address: 0x1a7c9c, Func Offset: 0x4ec
	// Line 864, Address: 0x1a7cb4, Func Offset: 0x504
	// Line 866, Address: 0x1a7cc0, Func Offset: 0x510
	// Line 867, Address: 0x1a7cdc, Func Offset: 0x52c
	// Line 869, Address: 0x1a7d04, Func Offset: 0x554
	// Line 870, Address: 0x1a7d24, Func Offset: 0x574
	// Line 871, Address: 0x1a7d2c, Func Offset: 0x57c
	// Line 873, Address: 0x1a7d54, Func Offset: 0x5a4
	// Line 874, Address: 0x1a7d74, Func Offset: 0x5c4
	// Line 875, Address: 0x1a7d78, Func Offset: 0x5c8
	// Line 876, Address: 0x1a7d8c, Func Offset: 0x5dc
	// Line 887, Address: 0x1a7d90, Func Offset: 0x5e0
	// Func End, Address: 0x1a7dc0, Func Offset: 0x610
}

// 
// Start address: 0x1a7dc0
float get_spot_camera_angle2(float* cam_pos, SPOT_LIGHT* spot)
{
	float inner_product;
	float spot_cam_dir[4];
	// Line 925, Address: 0x1a7dc0, Func Offset: 0
	// Line 930, Address: 0x1a7dd0, Func Offset: 0x10
	// Line 932, Address: 0x1a7de4, Func Offset: 0x24
	// Line 933, Address: 0x1a7df0, Func Offset: 0x30
	// Line 935, Address: 0x1a7e00, Func Offset: 0x40
	// Line 936, Address: 0x1a7e0c, Func Offset: 0x4c
	// Line 938, Address: 0x1a7e24, Func Offset: 0x64
	// Line 939, Address: 0x1a7e28, Func Offset: 0x68
	// Func End, Address: 0x1a7e38, Func Offset: 0x78
}

// 
// Start address: 0x1a7e40
Q_WORDDATA* sh2shd_exe_drop_shadow(_anon11* cam, int full_switch, int alpha_switch)
{
	Q_WORDDATA alpha_reg;
	SPOT_LIGHT spot;
	int i;
	// Line 949, Address: 0x1a7e40, Func Offset: 0
	// Line 955, Address: 0x1a7e64, Func Offset: 0x24
	// Line 956, Address: 0x1a7e7c, Func Offset: 0x3c
	// Line 962, Address: 0x1a7e88, Func Offset: 0x48
	// Line 966, Address: 0x1a7ea4, Func Offset: 0x64
	// Line 969, Address: 0x1a7eb4, Func Offset: 0x74
	// Line 970, Address: 0x1a7ec4, Func Offset: 0x84
	// Line 974, Address: 0x1a7ed4, Func Offset: 0x94
	// Line 981, Address: 0x1a7ef0, Func Offset: 0xb0
	// Line 982, Address: 0x1a7f34, Func Offset: 0xf4
	// Line 983, Address: 0x1a7f48, Func Offset: 0x108
	// Line 984, Address: 0x1a7f60, Func Offset: 0x120
	// Line 985, Address: 0x1a7f74, Func Offset: 0x134
	// Line 986, Address: 0x1a7f8c, Func Offset: 0x14c
	// Line 988, Address: 0x1a7fa0, Func Offset: 0x160
	// Line 989, Address: 0x1a7fb8, Func Offset: 0x178
	// Line 990, Address: 0x1a7fcc, Func Offset: 0x18c
	// Line 992, Address: 0x1a7fe4, Func Offset: 0x1a4
	// Line 1004, Address: 0x1a7ff8, Func Offset: 0x1b8
	// Line 1011, Address: 0x1a801c, Func Offset: 0x1dc
	// Line 1013, Address: 0x1a8034, Func Offset: 0x1f4
	// Line 1015, Address: 0x1a8040, Func Offset: 0x200
	// Line 1018, Address: 0x1a805c, Func Offset: 0x21c
	// Line 1019, Address: 0x1a8068, Func Offset: 0x228
	// Line 1021, Address: 0x1a80ac, Func Offset: 0x26c
	// Line 1023, Address: 0x1a80e8, Func Offset: 0x2a8
	// Line 1024, Address: 0x1a80fc, Func Offset: 0x2bc
	// Line 1028, Address: 0x1a8100, Func Offset: 0x2c0
	// Line 1030, Address: 0x1a8118, Func Offset: 0x2d8
	// Line 1032, Address: 0x1a8124, Func Offset: 0x2e4
	// Line 1033, Address: 0x1a8140, Func Offset: 0x300
	// Line 1034, Address: 0x1a8168, Func Offset: 0x328
	// Line 1035, Address: 0x1a817c, Func Offset: 0x33c
	// Line 1039, Address: 0x1a8180, Func Offset: 0x340
	// Line 1040, Address: 0x1a81c4, Func Offset: 0x384
	// Line 1042, Address: 0x1a81d8, Func Offset: 0x398
	// Line 1043, Address: 0x1a81f0, Func Offset: 0x3b0
	// Line 1044, Address: 0x1a8204, Func Offset: 0x3c4
	// Line 1045, Address: 0x1a821c, Func Offset: 0x3dc
	// Line 1046, Address: 0x1a8230, Func Offset: 0x3f0
	// Line 1047, Address: 0x1a8258, Func Offset: 0x418
	// Line 1050, Address: 0x1a826c, Func Offset: 0x42c
	// Line 1062, Address: 0x1a8274, Func Offset: 0x434
	// Line 1068, Address: 0x1a828c, Func Offset: 0x44c
	// Line 1069, Address: 0x1a8298, Func Offset: 0x458
	// Func End, Address: 0x1a82b8, Func Offset: 0x478
}

// 
// Start address: 0x1a82c0
void sh2shd_renew_drop_shadow_man(SPOT_LIGHT* spot, _anon11* cam, int full_switch)
{
	float alpha_decay;
	float distance;
	float height;
	float cam_pos[4];
	float normal[4];
	float pos[4];
	float plane[4];
	float light_pos[4];
	int i;
	// Line 1072, Address: 0x1a82c0, Func Offset: 0
	// Line 1075, Address: 0x1a82d8, Func Offset: 0x18
	// Line 1087, Address: 0x1a82ec, Func Offset: 0x2c
	// Line 1089, Address: 0x1a8304, Func Offset: 0x44
	// Line 1091, Address: 0x1a8318, Func Offset: 0x58
	// Line 1093, Address: 0x1a8330, Func Offset: 0x70
	// Line 1095, Address: 0x1a833c, Func Offset: 0x7c
	// Line 1096, Address: 0x1a8358, Func Offset: 0x98
	// Line 1098, Address: 0x1a837c, Func Offset: 0xbc
	// Line 1099, Address: 0x1a83c4, Func Offset: 0x104
	// Line 1112, Address: 0x1a83dc, Func Offset: 0x11c
	// Line 1113, Address: 0x1a83f0, Func Offset: 0x130
	// Line 1114, Address: 0x1a83fc, Func Offset: 0x13c
	// Line 1116, Address: 0x1a8410, Func Offset: 0x150
	// Line 1117, Address: 0x1a8440, Func Offset: 0x180
	// Line 1118, Address: 0x1a8450, Func Offset: 0x190
	// Line 1120, Address: 0x1a8474, Func Offset: 0x1b4
	// Line 1121, Address: 0x1a84d4, Func Offset: 0x214
	// Line 1122, Address: 0x1a84f0, Func Offset: 0x230
	// Line 1123, Address: 0x1a84fc, Func Offset: 0x23c
	// Line 1125, Address: 0x1a8504, Func Offset: 0x244
	// Line 1126, Address: 0x1a8518, Func Offset: 0x258
	// Line 1127, Address: 0x1a854c, Func Offset: 0x28c
	// Line 1128, Address: 0x1a8574, Func Offset: 0x2b4
	// Line 1129, Address: 0x1a8578, Func Offset: 0x2b8
	// Line 1130, Address: 0x1a858c, Func Offset: 0x2cc
	// Line 1133, Address: 0x1a8590, Func Offset: 0x2d0
	// Func End, Address: 0x1a85a4, Func Offset: 0x2e4
}

// 
// Start address: 0x1a85b0
void sh2shd_make_drop_plane(float* plane, float* pos, float* normal)
{
	float norm[4];
	float d;
	// Line 1142, Address: 0x1a85b0, Func Offset: 0
	// Line 1146, Address: 0x1a85c4, Func Offset: 0x14
	// Line 1148, Address: 0x1a85d4, Func Offset: 0x24
	// Line 1149, Address: 0x1a8630, Func Offset: 0x80
	// Line 1151, Address: 0x1a8640, Func Offset: 0x90
	// Line 1153, Address: 0x1a867c, Func Offset: 0xcc
	// Line 1155, Address: 0x1a86a0, Func Offset: 0xf0
	// Line 1156, Address: 0x1a86b4, Func Offset: 0x104
	// Line 1157, Address: 0x1a86c8, Func Offset: 0x118
	// Line 1158, Address: 0x1a86e0, Func Offset: 0x130
	// Line 1161, Address: 0x1a86e8, Func Offset: 0x138
	// Line 1162, Address: 0x1a86f4, Func Offset: 0x144
	// Line 1163, Address: 0x1a8704, Func Offset: 0x154
	// Line 1165, Address: 0x1a8710, Func Offset: 0x160
	// Func End, Address: 0x1a8720, Func Offset: 0x170
}

