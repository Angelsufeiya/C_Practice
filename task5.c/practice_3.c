#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*猜数字游戏*/

void game()
{
	int ret = 0;
	int guess = 0;

	ret = rand()%100+1;
	//rand函数用于生成随机数(0~~32767)。（）
	while (1)
	{
		printf("请输入猜的数字(1~~100)：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess< ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}

void menu()
{
	printf("*******************************\n");
	printf("*******************************\n");
	printf("*******     1. play     *******\n");
	printf("*******     0. exit     *******\n");
	printf("*******************************\n");
	printf("*******************************\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//“srand”函数设置随机数的生成器（调用rand函数）
	//“(unsigned int)time(NULL)“、”作为生成随机数的起点
	//“time”函数：获得系统的时间，返回的是一位64位的整形数字
	//“time()”函数，里面是一个指针
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}