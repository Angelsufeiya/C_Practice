#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//三字棋

#define Row 3
#define Col 3

//初始化
void initBoard(char board[Row][Col], int row, int col);
//展示棋盘
void displayBoard(char board[Row][Col], int row, int col);
//玩家下棋
void peoplePlay(char board[Row][Col], int row, int col);
//电脑下棋
void computerPlay(char board[Row][Col], int row, int col);
//判断胜利
char judgeWin(char board[Row][Col], int row, int col);

//"x"玩家赢
//"#"电脑赢
//"C"未满 —— 继续下棋
//"Q"满了 —— 平局