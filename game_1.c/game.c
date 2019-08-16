#include "game.h"

void initBoard(char board[Row][Col], int row, int col){
	int i, j;
	
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}

void displayBoard(char board[Row][Col], int row, int col){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1){
			for (j = 0; j < col; j++){
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void peoplePlay(char board[Row][Col], int row, int col){
	int i, j;

	printf("����ߣ�>\n");
	printf("������Ҫ�����λ�ã�");
	while (1){
		scanf("%d%d", &i, &j);
		if (i <= row && i >= 1 && j <= col && j >= 1){
			if (board[i - 1][j - 1] != ' ')//�ж����̵�������Ƿ���������
				printf("λ���ѱ�ռ�ã����������룡");
			else{
				board[i - 1][j - 1] = 'x';
				break;
			}
		}
		else
			printf("����������������룡");
	}
}

void computerPlay(char board[Row][Col], int row, int col){
	int i, j;
	srand((unsigned int)time(NULL));//���������

	printf("�����ߣ�>\n");
	while (1){
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (board[i - 1][j - 1] == ' '){//�ж����̵�������Ƿ���������
			board[i - 1][j - 1] = '#';
			break;
		}
	}
}

static int isFull(char board[Row][Col], int row, int col){
	int i, j;

	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;//����������
}

//char judgeWin(char board[Row][Col], int row, int col){
//	int i;
//
//	for (i = 0; i < row; i++){
//		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][1] != ' ')
//			return board[i][0];
//	}
//	for (i = 0; i < col; i++){
//		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[i][1] != ' ')
//			return board[0][i];
//	}
//	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
//		return board[1][1];
//	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
//		return board[1][1];
//	if (isFull(board, row, col) == 1){
//		return 'Q';
//	}
//	return 'C';
//}

char judgeWin(char board[Row][Col], int row, int col){
	int i, j;
	int count = 1;
	for (i = 0; i < row; i++){//ÿһ�е�ʤ������
		for (j = 0; j < col - 1; j++){
			if (board[i][j] != ' ' && board[i][j] == board[i][j + 1]){
				count++;
			}
			else{
				count = 1;
			}
		}
		if (count == row){
			return board[i][j];
		}
	}
	for (j = 0; j < col; j++){//ÿһ�е�ʤ������
		for (i = 0; i < row - 1; i++){
			if (board[i][j] != ' ' && board[i][j] == board[i + 1][j]){
				count++;
			}
			else{
				count = 1;
			}
		}
		if (count == row){
			count = 1;
			return board[i][j];
		}
	}

	for (i = 0; i < row - 1; i++){//��Խ��ߵ�ʤ������
		for (j = 0; j < col - 1; j++){
			if (board[i][j] != ' ' && i == j && board[i][j] == board[i + 1][j + 1]){
				count++;
			}
			else{
				count = 1;
			}
		}
	}
	if (count == row){
		return board[i][j];
	}

	////for (i = row - 1; i > 0; i--){//�ҶԽ��ߵ�ʤ������
	////	for (j = 0; j < col - 1; j++){
	////		if (board[i][j] != ' ' && i == j && board[i][j] == board[i + 1][j + 1]){
	////			count++;
	////		}
	////		else{
	////			count = 1;
	////		}
	////	}
	////}
	////if (count == row){
	////	return board[i][j];
	////}
}