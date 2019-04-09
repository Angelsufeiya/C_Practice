//将三个数从大到小输出

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, tmp;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
		if (c > b)
		{
			if (c > a)
			{
				printf("%d %d %d\n", c, a, b);
			}
			else
			{
				printf("%d %d %d\n", a, c, b);
			}
		}
		else
		{
			printf("%d %d %d", a, b, c);
		}
	system("pause");
	return 0;
}