#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//������(������)

#define Row  3	//���̵�����
#define Col  3	//���̵�����
#define link 3  //������Ӯ������������

//��ʼ��
void initBoard(char board[Row][Col], int row, int col);
//չʾ����
void displayBoard(char board[Row][Col], int row, int col);
//�������
void peoplePlay(char board[Row][Col], int row, int col);
//��������
void computerPlay(char board[Row][Col], int row, int col);
//�ж�ʤ��
char judgeWin(char board[Row][Col], int row, int col);

//"x"���Ӯ
//"#"����Ӯ
//"C"δ�� ���� ��������
//"Q"���� ���� ƽ��