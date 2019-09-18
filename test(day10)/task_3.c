#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//输出一个整数的每一位。

int main3(){
	int input = 0;
	int i, count = 0;
	char num[50] = { 0 };

	printf("请输入一个数（十进制）：");
	scanf("%d", &input);
	for (i = input; i; i /= 10){
		num[count++] = i % 10;
	}
	for (i = --count; i >= 0; i--){
		printf("%d ", num[i]);
	}

	system("pause");
	return 0;
}