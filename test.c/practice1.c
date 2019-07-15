#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input = 0;
	printf("加入比特，你会好好学习吗？(选择1 or 0)\n");
	scanf("%d", &input);
	if ( 1 == input)
	{
		printf("我会拿到一个好offer\n");
	}
	else
	{
		printf("回家卖红薯");
	}
	system("pause");

	return 0;
}