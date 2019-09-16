#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//不使用（a+b）/2这种方式，求两个数的平均值。 

int main(){
	int a, b;

	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	a = a >> 1;
	b = b >> 1;
	printf("%d\n", a + b);

	system("pause");
	return 0;
}