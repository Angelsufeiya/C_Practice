#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 483646;
	int b = 483646;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", (a+b)>>1);
	//a+b��ֵ����С�ڵ���2147483647�����򳬹�int��������ֵ
	system("pause");
	return 0;
}