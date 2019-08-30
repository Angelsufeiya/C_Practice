#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define MINE_COUNT 10

void Init(char show_map[ROW][COL], char mine_map[ROW][COL]);
void printMap(char show_map[ROW][COL]);
void updateShowMap(char show_map[ROW][COL], char mine_map[ROW][COL], int row, int col);