#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    2. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	printf("hehe\n");
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