typedef struct SHADOW_SHAPE_FRAME;
typedef struct SHADOW_PACKET_BUF;
typedef struct shGsDrawEnv;
typedef struct _anon0;
typedef union Q_WORDDATA;
typedef struct _anon1;
typedef struct SHADOW_OBJ_HEAD;
typedef struct shBattleFight;
typedef struct SHADOW_GEOM_HEAD;
typedef struct shBattleShot;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct SHADOW_MICRO_FRAME;
typedef struct _anon5;
typedef struct _anon6;
typedef struct shGsStencilDrawEnv;
typedef struct shGsAllEnv;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct DROP_SHADOW_MICRO_FRAME;
typedef struct shGsLoopEnv;
typedef struct _anon10;
typedef struct shAttackInfo;
typedef struct _anon11;
typedef struct _anon12;
typedef union _anon13;
typedef struct _anon14;
typedef struct shGsTinyDrawEnv;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;


typedef Q_WORDDATA type_0[2];
typedef Q_WORDDATA type_1[2];
typedef Q_WORDDATA type_2[2];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[2];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[5];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[5];
typedef Q_WORDDATA type_11[2];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[2];
typedef shAttackInfo type_16[46];
typedef Q_WORDDATA type_17[2];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[2];
typedef Q_WORDDATA type_20[2];
typedef Q_WORDDATA type_21[2];
typedef Q_WORDDATA type_22[6];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[6];
typedef float type_26[4];
typedef unsigned int type_27[4];
typedef unsigned short type_28[8];
typedef float type_29[4];
typedef unsigned int type_30[3];
typedef unsigned char type_31[16];
typedef unsigned int type_32[3];
typedef int type_33[4];
typedef unsigned int type_34[3];
typedef short type_35[8];
typedef unsigned int type_36[24];
typedef char type_37[16];
typedef unsigned int type_38[3];
typedef unsigned long type_39[2];
typedef unsigned int type_40[3];
typedef unsigned short type_41[8];
typedef _anon6 type_42[3];
typedef shGsDrawEnv type_43[3];
typedef shGsStencilDrawEnv type_44[3];
typedef shGsTinyDrawEnv type_45[6];
typedef Q_WORDDATA type_46[10];
typedef Q_WORDDATA type_47[10];
typedef Q_WORDDATA type_48[10];
typedef float type_49[4];
typedef Q_WORDDATA type_50[10];
typedef float type_51[4][4];
typedef Q_WORDDATA type_52[10];
typedef Q_WORDDATA type_53[10];
typedef Q_WORDDATA type_54[10];
typedef Q_WORDDATA type_55[8];

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

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct shGsDrawEnv
{
	_anon5 giftag;
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon17 clear;
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

struct SHADOW_OBJ_HEAD
{
	short obj_id;
	short geom_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
	short reserve6;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct _anon6
{
	_anon0 pmode;
	_anon8 smode2;
	_anon2 dispfb;
	_anon12 display;
	_anon14 bgcolor;
};

struct shGsStencilDrawEnv
{
	_anon5 giftag;
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon17 clear;
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

struct _anon7
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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
	_anon16 prmodecont;
	long prmodecontaddr;
	_anon3 colclamp;
	long colclampaddr;
	_anon19 dthe;
	long dtheaddr;
	_anon1 test1;
	long test1addr;
};

struct DROP_SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA fog_color;
	Q_WORDDATA giftag_4;
	Q_WORDDATA giftag_5;
	Q_WORDDATA giftag_6;
	Q_WORDDATA giftag_7;
	Q_WORDDATA giftag_8;
	Q_WORDDATA giftag_9;
	Q_WORDDATA giftag_10;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha_range;
	Q_WORDDATA alpha_switch;
	unsigned int* pKickAddr;
	unsigned int* pRawData;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon13 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon11
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

struct _anon12
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

union _anon13
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon15
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

struct _anon16
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon17
{
	_anon1 testa;
	long testaaddr;
	_anon11 prim;
	long primaddr;
	_anon18 rgbaq;
	long rgbaqaddr;
	_anon7 xyz2a;
	long xyz2aaddr;
	_anon7 xyz2b;
	long xyz2baddr;
	_anon1 testb;
	long testbaddr;
};

struct _anon18
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

struct _anon19
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
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
float unit[4][4];

void shadow_micro_init(SHADOW_MICRO_FRAME* mic, shGsAllEnv* env);
void shadow_set_micro_params(SHADOW_MICRO_FRAME* mic, _anon15* cam, float* spot_light_position, float* spot_light_direction, float spot_light_angle_cos_theta, float spot_light_angle_sin_theta, float drop_shadow[4], int spot_cam_flag);
void shadow_add_micro2kick_packet(SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata, int worksize);
void drop_shadow_micro_init(DROP_SHADOW_MICRO_FRAME* mic, shGsAllEnv* env, int alpha_switch);
void drop_shadow_set_micro_params(DROP_SHADOW_MICRO_FRAME* mic, _anon15* cam);
void drop_shadow_add_micro2kick_packet(DROP_SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata, int worksize);

// 
// Start address: 0x1a8720
void shadow_micro_init(SHADOW_MICRO_FRAME* mic, shGsAllEnv* env)
{
	float unit[4][4];
	// Line 19, Address: 0x1a8720, Func Offset: 0
	// Line 22, Address: 0x1a8738, Func Offset: 0x18
	// Line 23, Address: 0x1a8744, Func Offset: 0x24
	// Line 24, Address: 0x1a8754, Func Offset: 0x34
	// Line 25, Address: 0x1a8764, Func Offset: 0x44
	// Line 27, Address: 0x1a8774, Func Offset: 0x54
	// Line 28, Address: 0x1a877c, Func Offset: 0x5c
	// Line 29, Address: 0x1a8784, Func Offset: 0x64
	// Line 30, Address: 0x1a878c, Func Offset: 0x6c
	// Line 38, Address: 0x1a8794, Func Offset: 0x74
	// Line 39, Address: 0x1a87a4, Func Offset: 0x84
	// Line 41, Address: 0x1a87ac, Func Offset: 0x8c
	// Line 42, Address: 0x1a87b4, Func Offset: 0x94
	// Line 44, Address: 0x1a87b8, Func Offset: 0x98
	// Line 45, Address: 0x1a87cc, Func Offset: 0xac
	// Line 49, Address: 0x1a87d8, Func Offset: 0xb8
	// Line 50, Address: 0x1a87ec, Func Offset: 0xcc
	// Line 52, Address: 0x1a87f8, Func Offset: 0xd8
	// Line 53, Address: 0x1a880c, Func Offset: 0xec
	// Line 55, Address: 0x1a8818, Func Offset: 0xf8
	// Line 56, Address: 0x1a882c, Func Offset: 0x10c
	// Line 58, Address: 0x1a8838, Func Offset: 0x118
	// Line 59, Address: 0x1a884c, Func Offset: 0x12c
	// Line 61, Address: 0x1a8858, Func Offset: 0x138
	// Line 62, Address: 0x1a886c, Func Offset: 0x14c
	// Line 64, Address: 0x1a8884, Func Offset: 0x164
	// Line 65, Address: 0x1a8898, Func Offset: 0x178
	// Line 67, Address: 0x1a88b0, Func Offset: 0x190
	// Line 68, Address: 0x1a88c4, Func Offset: 0x1a4
	// Line 70, Address: 0x1a88dc, Func Offset: 0x1bc
	// Line 71, Address: 0x1a88f0, Func Offset: 0x1d0
	// Line 81, Address: 0x1a8908, Func Offset: 0x1e8
	// Line 83, Address: 0x1a8918, Func Offset: 0x1f8
	// Line 86, Address: 0x1a8928, Func Offset: 0x208
	// Line 87, Address: 0x1a8930, Func Offset: 0x210
	// Line 88, Address: 0x1a8934, Func Offset: 0x214
	// Line 89, Address: 0x1a8938, Func Offset: 0x218
	// Line 91, Address: 0x1a893c, Func Offset: 0x21c
	// Line 93, Address: 0x1a8970, Func Offset: 0x250
	// Line 94, Address: 0x1a8974, Func Offset: 0x254
	// Line 95, Address: 0x1a8978, Func Offset: 0x258
	// Func End, Address: 0x1a8990, Func Offset: 0x270
}

// 
// Start address: 0x1a8990
void shadow_set_micro_params(SHADOW_MICRO_FRAME* mic, _anon15* cam, float* spot_light_position, float* spot_light_direction, float spot_light_angle_cos_theta, float spot_light_angle_sin_theta, float drop_shadow[4], int spot_cam_flag)
{
	float length;
	float inner;
	float a[4];
	// Line 103, Address: 0x1a8990, Func Offset: 0
	// Line 108, Address: 0x1a89d0, Func Offset: 0x40
	// Line 109, Address: 0x1a89e0, Func Offset: 0x50
	// Line 110, Address: 0x1a89f0, Func Offset: 0x60
	// Line 111, Address: 0x1a8a00, Func Offset: 0x70
	// Line 113, Address: 0x1a8a10, Func Offset: 0x80
	// Line 114, Address: 0x1a8a1c, Func Offset: 0x8c
	// Line 115, Address: 0x1a8a28, Func Offset: 0x98
	// Line 116, Address: 0x1a8a2c, Func Offset: 0x9c
	// Line 118, Address: 0x1a8a30, Func Offset: 0xa0
	// Line 120, Address: 0x1a8a44, Func Offset: 0xb4
	// Line 121, Address: 0x1a8a50, Func Offset: 0xc0
	// Line 122, Address: 0x1a8a5c, Func Offset: 0xcc
	// Line 123, Address: 0x1a8a70, Func Offset: 0xe0
	// Line 125, Address: 0x1a8aa4, Func Offset: 0x114
	// Line 128, Address: 0x1a8aa8, Func Offset: 0x118
	// Line 131, Address: 0x1a8ab4, Func Offset: 0x124
	// Line 132, Address: 0x1a8ac8, Func Offset: 0x138
	// Line 133, Address: 0x1a8adc, Func Offset: 0x14c
	// Line 134, Address: 0x1a8aec, Func Offset: 0x15c
	// Line 138, Address: 0x1a8b00, Func Offset: 0x170
	// Line 139, Address: 0x1a8b14, Func Offset: 0x184
	// Line 141, Address: 0x1a8b3c, Func Offset: 0x1ac
	// Line 142, Address: 0x1a8b40, Func Offset: 0x1b0
	// Func End, Address: 0x1a8b6c, Func Offset: 0x1dc
}

// 
// Start address: 0x1a8b70
void shadow_add_micro2kick_packet(SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata, int worksize)
{
	Q_WORDDATA* curr;
	// Line 153, Address: 0x1a8b70, Func Offset: 0
	// Line 154, Address: 0x1a8b88, Func Offset: 0x18
	// Line 155, Address: 0x1a8b90, Func Offset: 0x20
	// Line 156, Address: 0x1a8b9c, Func Offset: 0x2c
	// Line 159, Address: 0x1a8ba8, Func Offset: 0x38
	// Line 160, Address: 0x1a8bc4, Func Offset: 0x54
	// Line 164, Address: 0x1a8bc8, Func Offset: 0x58
	// Line 165, Address: 0x1a8bfc, Func Offset: 0x8c
	// Line 168, Address: 0x1a8c00, Func Offset: 0x90
	// Line 169, Address: 0x1a8c48, Func Offset: 0xd8
	// Line 172, Address: 0x1a8c4c, Func Offset: 0xdc
	// Line 174, Address: 0x1a8c5c, Func Offset: 0xec
	// Line 175, Address: 0x1a8c64, Func Offset: 0xf4
	// Func End, Address: 0x1a8c74, Func Offset: 0x104
}

// 
// Start address: 0x1a8c80
void drop_shadow_micro_init(DROP_SHADOW_MICRO_FRAME* mic, shGsAllEnv* env, int alpha_switch)
{
	float unit[4][4];
	// Line 634, Address: 0x1a8c80, Func Offset: 0
	// Line 637, Address: 0x1a8ca0, Func Offset: 0x20
	// Line 639, Address: 0x1a8cac, Func Offset: 0x2c
	// Line 640, Address: 0x1a8cbc, Func Offset: 0x3c
	// Line 642, Address: 0x1a8ccc, Func Offset: 0x4c
	// Line 643, Address: 0x1a8cd4, Func Offset: 0x54
	// Line 644, Address: 0x1a8cdc, Func Offset: 0x5c
	// Line 645, Address: 0x1a8ce4, Func Offset: 0x64
	// Line 653, Address: 0x1a8cec, Func Offset: 0x6c
	// Line 654, Address: 0x1a8cfc, Func Offset: 0x7c
	// Line 657, Address: 0x1a8d04, Func Offset: 0x84
	// Line 658, Address: 0x1a8d0c, Func Offset: 0x8c
	// Line 662, Address: 0x1a8d10, Func Offset: 0x90
	// Line 664, Address: 0x1a8d1c, Func Offset: 0x9c
	// Line 666, Address: 0x1a8d38, Func Offset: 0xb8
	// Line 667, Address: 0x1a8d4c, Func Offset: 0xcc
	// Line 673, Address: 0x1a8d54, Func Offset: 0xd4
	// Line 674, Address: 0x1a8d68, Func Offset: 0xe8
	// Line 675, Address: 0x1a8d78, Func Offset: 0xf8
	// Line 682, Address: 0x1a8d7c, Func Offset: 0xfc
	// Line 683, Address: 0x1a8d90, Func Offset: 0x110
	// Line 684, Address: 0x1a8da4, Func Offset: 0x124
	// Line 685, Address: 0x1a8db4, Func Offset: 0x134
	// Line 689, Address: 0x1a8dc8, Func Offset: 0x148
	// Line 690, Address: 0x1a8ddc, Func Offset: 0x15c
	// Line 692, Address: 0x1a8de8, Func Offset: 0x168
	// Line 693, Address: 0x1a8dfc, Func Offset: 0x17c
	// Line 695, Address: 0x1a8e08, Func Offset: 0x188
	// Line 696, Address: 0x1a8e1c, Func Offset: 0x19c
	// Line 698, Address: 0x1a8e28, Func Offset: 0x1a8
	// Line 699, Address: 0x1a8e3c, Func Offset: 0x1bc
	// Line 701, Address: 0x1a8e54, Func Offset: 0x1d4
	// Line 702, Address: 0x1a8e68, Func Offset: 0x1e8
	// Line 704, Address: 0x1a8e80, Func Offset: 0x200
	// Line 705, Address: 0x1a8e94, Func Offset: 0x214
	// Line 707, Address: 0x1a8eac, Func Offset: 0x22c
	// Line 708, Address: 0x1a8ec0, Func Offset: 0x240
	// Line 711, Address: 0x1a8ed8, Func Offset: 0x258
	// Line 721, Address: 0x1a8ee8, Func Offset: 0x268
	// Line 722, Address: 0x1a8ef4, Func Offset: 0x274
	// Line 723, Address: 0x1a8f04, Func Offset: 0x284
	// Line 724, Address: 0x1a8f10, Func Offset: 0x290
	// Line 727, Address: 0x1a8f1c, Func Offset: 0x29c
	// Line 729, Address: 0x1a8f20, Func Offset: 0x2a0
	// Line 730, Address: 0x1a8f24, Func Offset: 0x2a4
	// Line 731, Address: 0x1a8f28, Func Offset: 0x2a8
	// Func End, Address: 0x1a8f44, Func Offset: 0x2c4
}

// 
// Start address: 0x1a8f50
void drop_shadow_set_micro_params(DROP_SHADOW_MICRO_FRAME* mic, _anon15* cam)
{
	// Line 736, Address: 0x1a8f50, Func Offset: 0
	// Line 738, Address: 0x1a8f60, Func Offset: 0x10
	// Line 739, Address: 0x1a8f78, Func Offset: 0x28
	// Line 740, Address: 0x1a8f90, Func Offset: 0x40
	// Func End, Address: 0x1a8fa0, Func Offset: 0x50
}

// 
// Start address: 0x1a8fa0
void drop_shadow_add_micro2kick_packet(DROP_SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata, int worksize)
{
	Q_WORDDATA* curr;
	// Line 751, Address: 0x1a8fa0, Func Offset: 0
	// Line 752, Address: 0x1a8fb8, Func Offset: 0x18
	// Line 753, Address: 0x1a8fc0, Func Offset: 0x20
	// Line 754, Address: 0x1a8fcc, Func Offset: 0x2c
	// Line 758, Address: 0x1a8fd8, Func Offset: 0x38
	// Line 759, Address: 0x1a8ff4, Func Offset: 0x54
	// Line 763, Address: 0x1a8ff8, Func Offset: 0x58
	// Line 764, Address: 0x1a9030, Func Offset: 0x90
	// Line 767, Address: 0x1a9034, Func Offset: 0x94
	// Line 768, Address: 0x1a907c, Func Offset: 0xdc
	// Line 771, Address: 0x1a9080, Func Offset: 0xe0
	// Line 773, Address: 0x1a9090, Func Offset: 0xf0
	// Line 774, Address: 0x1a9098, Func Offset: 0xf8
	// Func End, Address: 0x1a90a8, Func Offset: 0x108
}

