//����������ʱ����������������������

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 1, b = 2;

	printf("a = %d,b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d,b = %d\n", a, b);

	system("pause");
	return 0;
}


//int main()
//{
//	int a = 1, b = 2;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}