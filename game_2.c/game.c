#include "game.h"

void Init(char show_map[ROW][COL], char mine_map[ROW][COL]){
	//show_map ȫ����ʼ�� x
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			show_map[row][col] = 'x';
		}
	}
	//mine_map ��ʼ��
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			show_map[row][col] = '0';
		}
	}
	//�������10��λ�õĵ���

}