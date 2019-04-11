//1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void printlog(int a[],int n)		//打印函数，需要数据、长度
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int i, tmp;

	printlog(a, 10);
	printlog(b, 10);

	for (i = 0; i < 10; i++)	//数组遍历
	{	
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}

	printlog(a, 10);
	printlog(b, 10);

	system("pause");
	return 0;
}