#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void menu(){
	printf("*************************\n");
	printf("******   1. play   ******\n");
	printf("******   0. exit   ******\n");
	printf("*************************\n");
}

void game(){
	int ret = 0;
	int guess = 0;

	ret = rand() % 100 + 1;
	printf("��Ϸ��ʼ\n");
	printf("����������Ҫ�µ����֣�1~~100����");
	while (1){
		scanf("%d", &guess);
		if (guess > ret){
			printf("�´��ˣ�������²⣺");
		}
		else if (guess < ret){
			printf("��С�ˣ�������²⣺");
		}
		else{
			printf("��ϲ��������ȷ�ˣ�����\n");
			break;
		}
	}
}

int main(){
	int input = 0;
	srand((unsigned int) time(NULL));

	do{
		menu();
		printf("����������ѡ��");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������룡\n");
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}