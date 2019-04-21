#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

/*写一个函数可以找出两个整数中的最大值*/

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = get_max(a, b);
//	printf("%d\n", max);
//
//	system("pause");
//	return 0;
//}


/*写一个函数交换两个整型变量的内容*/

void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("a = %d, b = %d\n", a, b);
	Swap1(a, b);
	printf("Swap1:a = %d, b = %d\n", a, b);
	Swap2(&a, &b);
	printf("Swap2:a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}