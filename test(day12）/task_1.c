#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。

unsigned int reverse_bit(unsigned int value){
	unsigned int i, tmp, sum = 0;
	for (i = 0; i < 32; i++, value /= 2){
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}

int main1(){
	int input;

	printf("请输入一个数：");
	scanf("%d", &input);
	printf("%u\n", reverse_bit(input));

	system("pause");
	return 0;
}