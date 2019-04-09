//求两个数的最大公约数

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, a, b, max, min;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	for (i = 2; i <= min; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			max = i;
		}
		else
		{
			continue;
		}
	}
	printf("最大公约数是%d\n", max);
	system("pause");
	return 0;
}

//辗转相除法
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	while ( c=a % b )
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是%d\n", b);
//	system("pause");
//
//	return 0;
//}