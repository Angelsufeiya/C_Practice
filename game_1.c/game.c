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

	printf("玩家走：>\n");
	printf("请输入要下棋的位置：");
	while (1){
		scanf("%d%d", &i, &j);
		if (i <= row && i >= 1 && j <= col && j >= 1){
			if (board[i - 1][j - 1] != ' ')//判断棋盘的这个点是否已有落子
				printf("位置已被占用，请重新输入！");
			else{
				board[i - 1][j - 1] = 'x';
				break;
			}
		}
		else
			printf("输入错误，请重新输入！");
	}
}

void computerPlay(char board[Row][Col], int row, int col){
	int i, j;
	srand((unsigned int)time(NULL));//产生随机数

	printf("电脑走：>\n");
	while (1){
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (board[i - 1][j - 1] == ' '){//判断棋盘的这个点是否已有落子
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
	return 1;//棋盘已下满
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
	for (i = 0; i < row; i++){//每一行的胜利条件
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
	for (j = 0; j < col; j++){//每一列的胜利条件
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

	for (i = 0; i < row - 1; i++){//左对角线的胜利条件
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

	////for (i = row - 1; i > 0; i--){//右对角线的胜利条件
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