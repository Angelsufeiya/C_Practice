# define _CRT_SECURE_NO_WARNINGS
//scanf 在VS中不能正常跑，为了程序的可移植性，我们给他定义如上。
#include<stdio.h>
#include<stdlib.h>

enum Sex	//枚举常量
{
	male,
	female,
	secret
};

int main()
{
	int num=0;
	enum Sex s = secret;

	scanf("%d", &num);
	printf("%d\n", num);
	printf("%d\n", s);

	system("pause");
	return 0;
}