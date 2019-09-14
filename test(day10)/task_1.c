#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1

int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}

int main(){
	int input = 0;
	
	scanf("%d", &input);
	count_one_bits(input);

	system("pause");
	return 0;
}