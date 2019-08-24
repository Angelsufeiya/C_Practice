#include "game.h"

void Init(char show_map[ROW][COL], char mine_map[ROW][COL]){
	int row, col;
	//show_map 全都初始化 x
	for (row = 0; row < ROW; row++){
		for (col = 0; col < COL; col++){
			show_map[row][col] = 'x';
		}
	}
	//mine_map 初始化
	for (row = 0; row < ROW; row++){
		for (col = 0; col < COL; col++){
			show_map[row][col] = '0';
		}
	}
	//随机生成10个位置作为地雷
	int mine_count = MINE_COUNT;
	while (mine_count>0){
		row = rand() % ROW;
		col = rand() % COL;
		if (mine_map[col][row] == '1'){
			continue;
		}
		mine_map[col][row] = '1';
		mine_count--;
	}
}

void printMap(char show_map[ROW][COL]){
	int row, col;
	for (row = 0; row < ROW; row++){
		for (col = 0; col < COL; col++){
			printf("%c ", show_map[row][col]);
		}
		printf("\n");
	}
}