typedef struct GameResult;



struct GameResult
{
	int item_get;
	int hidden_item_get;
	int save_count;
	int kill_by_shot;
	int kill_by_fight;
	int kill_by_exorcise;
	float time;
	float walk_distance;
	float run_distance;
	float damage_total;
};

GameResult* game_result;

void GameResultSetDataAddress(GameResult* adr);

// 
// Start address: 0x1b1690
void GameResultSetDataAddress(GameResult* adr)
{
	// Line 21, Address: 0x1b1690, Func Offset: 0
	// Line 22, Address: 0x1b1694, Func Offset: 0x4
	// Func End, Address: 0x1b169c, Func Offset: 0xc
}

