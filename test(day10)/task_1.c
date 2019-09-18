#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1

int count_one_bits1(unsigned int value){
	unsigned int i;
	int count = 0;
	for (i = value; i; i /= 2){
		count += i % 2;
	}
	return count;
}

int count_one_bits2(unsigned int value){
	int count = 0;
	do{
		count++;
	} while (value &= value - 1);
	return count;
}

int main(){
	int input = 0;
	
	printf("请输入一个数（十进制）：");
	scanf("%d", &input);
	printf("二进制中有 %d 个1\n", count_one_bits1(input));
	printf("二进制中有 %d 个1\n", count_one_bits2(input));

	system("pause");
	return 0;
}