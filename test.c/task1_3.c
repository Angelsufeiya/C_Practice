//判断1000年————2000年之间的闰年( day-1 )

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 100 != 0 && i % 4 == 0)
		{
			printf("%d ", i);
		}
		if (i % 100 == 0 && i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}