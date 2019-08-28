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
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");

}

int main(){
	int input = 0;
	srand((unsigned int)time(NULL));//���������

	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�ѹرգ�");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}