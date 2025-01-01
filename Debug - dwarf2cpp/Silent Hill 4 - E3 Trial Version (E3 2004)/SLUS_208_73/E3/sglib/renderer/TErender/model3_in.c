typedef struct Model3Env;
typedef struct Model3Junk;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];

struct Model3Env
{
	unsigned long vu1_test;
	unsigned long vu0_test;
	unsigned long vu1_alpha;
	unsigned long vu0_alpha;
	unsigned long vu1_fba;
	unsigned long vu0_fba;
	unsigned long vu1_tfx;
	unsigned long vu0_tfx;
	unsigned char vu1_backclip_force;
	unsigned char vu1_backclip_value;
	unsigned char vu0_backclip_force;
	unsigned char vu0_backclip_value;
	unsigned char normalize_normal;
	unsigned char update_z_first;
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

Model3Junk model3_junk;
Model3Env model3_env;


