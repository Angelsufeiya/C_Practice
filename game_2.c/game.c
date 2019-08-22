#include "game.h"

void Init(char show_map[ROW][COL], char mine_map[ROW][COL]){
	//show_map 全都初始化 x
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			show_map[row][col] = 'x';
		}
	}
	//mine_map 初始化
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			show_map[row][col] = '0';
		}
	}
	//随机生成10个位置的地雷

}