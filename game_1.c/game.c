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
	int i, j,tmp;
	for (tmp = 0; tmp < row; tmp++){
		for (i = 0; i < row; i++){
			printf(" %c ", 0);
			if (i < row - 1)
				printf("|");
		}
		printf("\n");
		if (tmp < row - 1){
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

}

void computerPlay(char board[Row][Col], int row, int col){

}