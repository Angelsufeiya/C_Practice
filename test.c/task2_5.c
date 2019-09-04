#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//求两个数的最大公约数

//int main()
//{
//	int i, a, b;
//	int max = 1, min;
//
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	if (a > b)	//判断输入两个个数的大小
//	{
//		min = b;
//	}
//	else
//	{
//		min = a;
//	}
//	for (i = 2; i <= min; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			max = i;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	printf("最大公约数是%d\n", max);
//
//	system("pause");
//	return 0;
//}

//辗转相除法

//int main()
//{
//	int a, b, c;
//
//	printf("请输入两个数：");
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

//更相减损法

int main(){
	int a, b;
	int count = 1;

	printf("请输入两个数：");
	scanf("%d%d", &a, &b);

	while (a % 2 == 0 && b % 2 == 0) {
		a /= 2;
		b /= 2;
		count *= 2;
	}

	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	printf("最大公约数是%d\n", b*count);

	system("pause");
	return 0;
}
