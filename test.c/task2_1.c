//�����������α�����ֵ��������ֵ�����ݽ��н���

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 1, b = 2;
	int c;

	printf("a = %d, b = %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("a = %d, b = %d\n", a, b);

	system("pause");
	return 0;
}