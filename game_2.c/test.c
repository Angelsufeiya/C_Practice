#include "game.h"

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    0. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	//创建两个二维数组
	char show_map[ROW][COL];
	char mine_map[ROW][COL];
	//对两个数组进行初始化
	Init(show_map, mine_map);
	
}

int main(){
	int input;

	do{
		menu();
		printf("请输入您的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已关闭！");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}