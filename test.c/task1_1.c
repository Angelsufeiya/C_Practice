//打印100~200间的素数

# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i, n, flag=0, tmp;
	for (n = 100; n <= 200; n++)
	{
		tmp = sqrt(n);
		for (i = 2; i <= tmp; i++)
		{
			if (n % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag != 1)
		{
			printf("%d\n", n);
		}
		flag = 0;
	}
	system("pause");
	return 0;
}