#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    0. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	
}

int main(){
	int input;

	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
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