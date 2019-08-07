#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    2. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	char board[ROW][COL] = { 0 };

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