#include "game.h"

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    0. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	//����������ά����
	char show_map[ROW][COL];
	char mine_map[ROW][COL];
	//������������г�ʼ��
	Init(show_map, mine_map);
	
}

int main(){
	int input;

	do{
		menu();
		printf("����������ѡ��");
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
			printf("�����������������\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}