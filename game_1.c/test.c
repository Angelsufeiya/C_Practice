#include "game.h"

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    0. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	char board[Row][Col] = { 0 };
	char ret = 0;

	initBoard(board, Row, Col);
	displayBoard(board, Row, Col);
	while (1){
		peoplePlay(board, Row, Col);
		system("cls");
		displayBoard(board, Row, Col);
		ret = judgeWin(board, Row, Col);
		if (ret != 'C')
			break;
		computerPlay(board, Row, Col);
		system("cls");
		displayBoard(board, Row, Col);
		ret = judgeWin(board, Row, Col);
		if (ret != 'C')
			break;
	}
	if (ret == 'x')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == 'Q')
		printf("平局\n");

}

int main(){
	int input = 0;
	srand((unsigned int)time(NULL));//产生随机数

	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
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