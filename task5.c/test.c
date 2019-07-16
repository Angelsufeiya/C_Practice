#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 483646;
	int b = 483646;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", (a+b)>>1);
	//a+b的值必须小于等于2147483647，否则超过int可算的最大值
	system("pause");
	return 0;
}