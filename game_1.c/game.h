#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//三子棋(五子棋)

#define Row  3	//棋盘的行数
#define Col  3	//棋盘的列数
#define link 3  //用来判赢的相连棋子数

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