//1.����Ļ���������ͼ����
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

//�����Ǿ��У������γ������Ρ�


//ÿ��i�����ǣ���󳤶�Ϊn����ÿ������Ҫn-i���ո�
int main()
{
	int i, j;
	int n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)//��ӡ�ո�
		{ 
			putchar(' ');//һ��ֻ��ӡһ���ַ�
		}
		for (j = 0; j < 2*i-1; j++)//��ӡ����
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n-1; i >=1; i--)
	{
		for (j = 0; j < n - i; j++)//��ӡ�ո�
		{
			putchar(' ');//һ��ֻ��ӡһ���ַ�
		}
		for (j = 0; j < 2 * i - 1; j++)//��ӡ����
		{
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}