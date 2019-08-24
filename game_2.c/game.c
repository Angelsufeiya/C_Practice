#include "game.h"

void Init(char show_map[ROW][COL], char mine_map[ROW][COL]){
	int row, col;
	//show_map ȫ����ʼ�� x
	for (row = 0; row < ROW; row++){
		for (col = 0; col < COL; col++){
			show_map[row][col] = 'x';
		}
	}
	//mine_map ��ʼ��
	for (row = 0; row < ROW; row++){
		for (col = 0; col < COL; col++){
			show_map[row][col] = '0';
		}
	}
	//�������10��λ����Ϊ����
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