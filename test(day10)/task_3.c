#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//���һ��������ÿһλ��

int main3(){
	int input = 0;
	int i, count = 0;
	char num[50] = { 0 };

	printf("������һ������ʮ���ƣ���");
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