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
	printf("游戏开始\n");
	printf("请输入您想要猜的数字（1~~100）：");
	while (1){
		scanf("%d", &guess);
		if (guess > ret){
			printf("猜大了，请继续猜测：");
		}
		else if (guess < ret){
			printf("猜小了，请继续猜测：");
		}
		else{
			printf("恭喜您，猜正确了！！！\n");
			break;
		}
	}
}

int main(){
	int input = 0;
	srand((unsigned int) time(NULL));

	do{
		menu();
		printf("请输入您的选择：");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入有误，请重新输入！\n");
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}