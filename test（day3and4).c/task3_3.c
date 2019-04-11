//编写程序数一下 1到 100 的所有整数中出现多少次数字9。

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;	//count = count + 1;
		}
		if (i / 10 == 9)//此处if前如果加了else，导致99还是只应用了一次！！！
		{
			count++;
		}
	}
	printf("出现了 %d 次的9", count);
	system("pause");
	return 0;
}