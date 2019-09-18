#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

int count_one_bits(unsigned int value){
	int i, count = 0;
	for (i = value; i; i /= 2){
		count += i % 2;
	}
	return count;
}

int main4(){
	int input1, input2;

	printf("请输入两个个数（十进制）：");
	scanf("%d%d", &input1, &input2);
	printf("%d\n ", count_one_bits(input1^input2));

	system("pause");
	return 0;
}