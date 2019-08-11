#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    0. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	char board[Row][Col] = { 0 };
	initBoard(board, Row, Col);
	displayBoard(board, Row, Col);
}

int main(){
	int input;

	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("游戏已关闭！");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}