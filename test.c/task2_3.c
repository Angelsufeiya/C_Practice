//求十个整数的最大值

# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, Max = 0, a;
	//此时不能只输入负整数，否则输出为0，最大值为2147483647.
    //char i, Max=10000000, a ;
	//数值范围-128~127
	//int i, Max=0x80000000, a ;
	//数值范围-2147483648~2147483647
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &a);
		if (a > Max)
		{
			Max = a;
		}
	}
	printf("%d", Max);
	system("pause");

	return  0;
}