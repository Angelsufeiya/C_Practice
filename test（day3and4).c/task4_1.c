//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i, j;
//	int n;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < i*2-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n-1; i >=0; i--)
//	{
//		for (j = 1; j <= i * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//把星星居中，上下形成三角形。


//每行i个星星，最大长度为n，则每行行需要n-i个空格
int main()
{
	int i, j;
	int n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)//打印空格
		{ 
			putchar(' ');//一次只打印一个字符
		}
		for (j = 0; j < 2*i-1; j++)//打印星星
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n-1; i >=1; i--)
	{
		for (j = 0; j < n - i; j++)//打印空格
		{
			putchar(' ');//一次只打印一个字符
		}
		for (j = 0; j < 2 * i - 1; j++)//打印星星
		{
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}