typedef union Q_WORDDATA;
typedef struct BootOptItem;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;

typedef int(*type_13)(char*);
typedef void(*type_14)(char*, int);

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef unsigned int type_3[4];
typedef unsigned short type_4[8];
typedef float type_5[4];
typedef unsigned char type_6[16];
typedef int type_7[4];
typedef short type_8[8];
typedef char type_9[16];
typedef unsigned short type_10[4];
typedef unsigned long type_11[2];
typedef char type_12[4];
typedef BootOptItem type_15[19];

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

struct BootOptItem
{
	void* var;
	char key[4];
	int(*get)(char*);
	void(*put)(char*, int);
	char* help;
	int set;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

BootOptItem BootOptItemList[19];
int execEnv_verbose_level;
int execEnv_cdvd_media_type;
sh2gfw_Env_ctl Env_ctl;
int execEnv_debug_flag;
int execEnv_auto_exit_time;
int execEnv_disp_height;
int execEnv_frame_rate;
int opt_h_dummy;

int getopt_h();
int getopt_str(char* arg);
void putopt_str(char* arg, int var);
int getopt_v(char* arg);
void putopt_v(char* arg, int var);
int getopt_S(char* arg);
void putopt_S(char* arg, int var);
int getopt_int(char* arg, int var0);
void putopt_int(char* arg, int var);
int getopt_d(char* arg);
void putopt_d(char* arg, int var);
int getopt_X(char* arg);
void putopt_X(char* arg, int var);
int getopt_V(char* arg);
void putopt_V(char* arg, int var);
int getopt_F(char* arg);
void putopt_F(char* arg, int var);

// 
// Start address: 0x1c9b40
int getopt_h()
{
	char* help;
	BootOptItem* item;
	// Line 120, Address: 0x1c9b40, Func Offset: 0
	// Line 122, Address: 0x1c9b50, Func Offset: 0x10
	// Line 123, Address: 0x1c9b60, Func Offset: 0x20
	// Line 124, Address: 0x1c9b64, Func Offset: 0x24
	// Line 125, Address: 0x1c9b90, Func Offset: 0x50
	// Line 126, Address: 0x1c9ba4, Func Offset: 0x64
	// Line 127, Address: 0x1c9ba8, Func Offset: 0x68
	// Func End, Address: 0x1c9bc0, Func Offset: 0x80
}

// 
// Start address: 0x1c9bc0
int getopt_str(char* arg)
{
	// Line 130, Address: 0x1c9bc0, Func Offset: 0
	// Line 131, Address: 0x1c9bc8, Func Offset: 0x8
	// Line 132, Address: 0x1c9bcc, Func Offset: 0xc
	// Func End, Address: 0x1c9bd8, Func Offset: 0x18
}

// 
// Start address: 0x1c9be0
void putopt_str(char* arg, int var)
{
	int len;
	// Line 135, Address: 0x1c9be0, Func Offset: 0
	// Line 137, Address: 0x1c9bf4, Func Offset: 0x14
	// Line 138, Address: 0x1c9c0c, Func Offset: 0x2c
	// Line 139, Address: 0x1c9c18, Func Offset: 0x38
	// Func End, Address: 0x1c9c2c, Func Offset: 0x4c
}

// 
// Start address: 0x1c9c30
int getopt_v(char* arg)
{
	int var;
	// Line 142, Address: 0x1c9c30, Func Offset: 0
	// Line 144, Address: 0x1c9c3c, Func Offset: 0xc
	// Line 145, Address: 0x1c9c50, Func Offset: 0x20
	// Line 146, Address: 0x1c9c5c, Func Offset: 0x2c
	// Line 147, Address: 0x1c9c6c, Func Offset: 0x3c
	// Line 148, Address: 0x1c9c74, Func Offset: 0x44
	// Line 149, Address: 0x1c9c78, Func Offset: 0x48
	// Func End, Address: 0x1c9c88, Func Offset: 0x58
}

// 
// Start address: 0x1c9c90
void putopt_v(char* arg, int var)
{
	// Line 152, Address: 0x1c9c90, Func Offset: 0
	// Line 153, Address: 0x1c9c9c, Func Offset: 0xc
	// Line 154, Address: 0x1c9cac, Func Offset: 0x1c
	// Line 155, Address: 0x1c9cc4, Func Offset: 0x34
	// Line 156, Address: 0x1c9cd4, Func Offset: 0x44
	// Line 157, Address: 0x1c9cdc, Func Offset: 0x4c
	// Func End, Address: 0x1c9ce8, Func Offset: 0x58
}

// 
// Start address: 0x1c9cf0
int getopt_S(char* arg)
{
	int var;
	// Line 160, Address: 0x1c9cf0, Func Offset: 0
	// Line 162, Address: 0x1c9cfc, Func Offset: 0xc
	// Line 163, Address: 0x1c9d10, Func Offset: 0x20
	// Line 164, Address: 0x1c9d1c, Func Offset: 0x2c
	// Line 165, Address: 0x1c9d2c, Func Offset: 0x3c
	// Line 166, Address: 0x1c9d34, Func Offset: 0x44
	// Line 167, Address: 0x1c9d38, Func Offset: 0x48
	// Func End, Address: 0x1c9d48, Func Offset: 0x58
}

// 
// Start address: 0x1c9d50
void putopt_S(char* arg, int var)
{
	// Line 170, Address: 0x1c9d50, Func Offset: 0
	// Line 171, Address: 0x1c9d5c, Func Offset: 0xc
	// Line 172, Address: 0x1c9d6c, Func Offset: 0x1c
	// Line 173, Address: 0x1c9d84, Func Offset: 0x34
	// Line 174, Address: 0x1c9d94, Func Offset: 0x44
	// Line 175, Address: 0x1c9d9c, Func Offset: 0x4c
	// Func End, Address: 0x1c9da8, Func Offset: 0x58
}

// 
// Start address: 0x1c9db0
int getopt_int(char* arg, int var0)
{
	int op;
	int var;
	// Line 178, Address: 0x1c9db0, Func Offset: 0
	// Line 181, Address: 0x1c9dc4, Func Offset: 0x14
	// Line 183, Address: 0x1c9dd4, Func Offset: 0x24
	// Line 184, Address: 0x1c9dec, Func Offset: 0x3c
	// Line 185, Address: 0x1c9df0, Func Offset: 0x40
	// Line 186, Address: 0x1c9df8, Func Offset: 0x48
	// Line 189, Address: 0x1c9e04, Func Offset: 0x54
	// Line 191, Address: 0x1c9e1c, Func Offset: 0x6c
	// Line 193, Address: 0x1c9ec4, Func Offset: 0x114
	// Line 195, Address: 0x1c9ed4, Func Offset: 0x124
	// Line 196, Address: 0x1c9eec, Func Offset: 0x13c
	// Line 197, Address: 0x1c9f00, Func Offset: 0x150
	// Line 198, Address: 0x1c9f18, Func Offset: 0x168
	// Line 199, Address: 0x1c9f30, Func Offset: 0x180
	// Line 200, Address: 0x1c9f48, Func Offset: 0x198
	// Line 201, Address: 0x1c9f6c, Func Offset: 0x1bc
	// Line 202, Address: 0x1c9f90, Func Offset: 0x1e0
	// Line 203, Address: 0x1c9fa8, Func Offset: 0x1f8
	// Line 204, Address: 0x1c9fc0, Func Offset: 0x210
	// Line 205, Address: 0x1c9fd8, Func Offset: 0x228
	// Line 206, Address: 0x1c9ff0, Func Offset: 0x240
	// Line 208, Address: 0x1ca000, Func Offset: 0x250
	// Line 209, Address: 0x1ca004, Func Offset: 0x254
	// Func End, Address: 0x1ca018, Func Offset: 0x268
}

// 
// Start address: 0x1ca020
void putopt_int(char* arg, int var)
{
	// Line 212, Address: 0x1ca020, Func Offset: 0
	// Line 213, Address: 0x1ca030, Func Offset: 0x10
	// Line 214, Address: 0x1ca048, Func Offset: 0x28
	// Func End, Address: 0x1ca058, Func Offset: 0x38
}

// 
// Start address: 0x1ca060
int getopt_d(char* arg)
{
	int var;
	// Line 218, Address: 0x1ca060, Func Offset: 0
	// Line 219, Address: 0x1ca070, Func Offset: 0x10
	// Line 220, Address: 0x1ca078, Func Offset: 0x18
	// Line 221, Address: 0x1ca08c, Func Offset: 0x2c
	// Line 222, Address: 0x1ca094, Func Offset: 0x34
	// Line 223, Address: 0x1ca0a8, Func Offset: 0x48
	// Line 225, Address: 0x1ca0cc, Func Offset: 0x6c
	// Line 226, Address: 0x1ca0d0, Func Offset: 0x70
	// Func End, Address: 0x1ca0e4, Func Offset: 0x84
}

// 
// Start address: 0x1ca0f0
void putopt_d(char* arg, int var)
{
	// Line 229, Address: 0x1ca0f0, Func Offset: 0
	// Line 230, Address: 0x1ca100, Func Offset: 0x10
	// Line 231, Address: 0x1ca110, Func Offset: 0x20
	// Func End, Address: 0x1ca120, Func Offset: 0x30
}

// 
// Start address: 0x1ca120
int getopt_X(char* arg)
{
	int var;
	// Line 234, Address: 0x1ca120, Func Offset: 0
	// Line 235, Address: 0x1ca130, Func Offset: 0x10
	// Line 236, Address: 0x1ca138, Func Offset: 0x18
	// Line 237, Address: 0x1ca148, Func Offset: 0x28
	// Func End, Address: 0x1ca15c, Func Offset: 0x3c
}

// 
// Start address: 0x1ca160
void putopt_X(char* arg, int var)
{
	// Line 240, Address: 0x1ca160, Func Offset: 0
	// Line 241, Address: 0x1ca170, Func Offset: 0x10
	// Line 242, Address: 0x1ca180, Func Offset: 0x20
	// Func End, Address: 0x1ca190, Func Offset: 0x30
}

// 
// Start address: 0x1ca190
int getopt_V(char* arg)
{
	int var;
	// Line 246, Address: 0x1ca190, Func Offset: 0
	// Line 248, Address: 0x1ca19c, Func Offset: 0xc
	// Line 249, Address: 0x1ca1b0, Func Offset: 0x20
	// Line 250, Address: 0x1ca1b8, Func Offset: 0x28
	// Line 251, Address: 0x1ca1bc, Func Offset: 0x2c
	// Line 252, Address: 0x1ca1c8, Func Offset: 0x38
	// Line 253, Address: 0x1ca1d4, Func Offset: 0x44
	// Line 254, Address: 0x1ca1dc, Func Offset: 0x4c
	// Line 255, Address: 0x1ca1e0, Func Offset: 0x50
	// Line 256, Address: 0x1ca1ec, Func Offset: 0x5c
	// Line 258, Address: 0x1ca1f8, Func Offset: 0x68
	// Line 259, Address: 0x1ca1fc, Func Offset: 0x6c
	// Func End, Address: 0x1ca20c, Func Offset: 0x7c
}

// 
// Start address: 0x1ca210
void putopt_V(char* arg, int var)
{
	// Line 262, Address: 0x1ca210, Func Offset: 0
	// Line 263, Address: 0x1ca21c, Func Offset: 0xc
	// Line 264, Address: 0x1ca22c, Func Offset: 0x1c
	// Line 265, Address: 0x1ca234, Func Offset: 0x24
	// Line 266, Address: 0x1ca23c, Func Offset: 0x2c
	// Line 268, Address: 0x1ca240, Func Offset: 0x30
	// Line 269, Address: 0x1ca250, Func Offset: 0x40
	// Line 270, Address: 0x1ca258, Func Offset: 0x48
	// Func End, Address: 0x1ca264, Func Offset: 0x54
}

// 
// Start address: 0x1ca270
int getopt_F(char* arg)
{
	int mode;
	int var;
	// Line 273, Address: 0x1ca270, Func Offset: 0
	// Line 276, Address: 0x1ca280, Func Offset: 0x10
	// Line 277, Address: 0x1ca294, Func Offset: 0x24
	// Line 278, Address: 0x1ca2ac, Func Offset: 0x3c
	// Line 279, Address: 0x1ca2b8, Func Offset: 0x48
	// Line 280, Address: 0x1ca2bc, Func Offset: 0x4c
	// Line 281, Address: 0x1ca2d0, Func Offset: 0x60
	// Line 282, Address: 0x1ca2e8, Func Offset: 0x78
	// Line 283, Address: 0x1ca2f4, Func Offset: 0x84
	// Line 284, Address: 0x1ca2fc, Func Offset: 0x8c
	// Line 285, Address: 0x1ca300, Func Offset: 0x90
	// Func End, Address: 0x1ca314, Func Offset: 0xa4
}

// 
// Start address: 0x1ca320
void putopt_F(char* arg, int var)
{
	int mode;
	// Line 288, Address: 0x1ca320, Func Offset: 0
	// Line 290, Address: 0x1ca330, Func Offset: 0x10
	// Line 291, Address: 0x1ca338, Func Offset: 0x18
	// Line 292, Address: 0x1ca350, Func Offset: 0x30
	// Line 293, Address: 0x1ca35c, Func Offset: 0x3c
	// Line 294, Address: 0x1ca368, Func Offset: 0x48
	// Line 295, Address: 0x1ca370, Func Offset: 0x50
	// Line 296, Address: 0x1ca388, Func Offset: 0x68
	// Line 297, Address: 0x1ca394, Func Offset: 0x74
	// Line 298, Address: 0x1ca3a0, Func Offset: 0x80
	// Line 299, Address: 0x1ca3a8, Func Offset: 0x88
	// Func End, Address: 0x1ca3b8, Func Offset: 0x98
}

