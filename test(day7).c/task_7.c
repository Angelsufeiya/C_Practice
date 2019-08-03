#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//递归方式实现打印一个整数的每一位 

void printSum(int n){
	if (n == 0){
		return;
	}

	printSum(n / 10);
	//通过除数的改变可以换算不同进制
	printf("%d ", n % 10);
}

int main(){
	int n;

	scanf("%d", &n);
	printSum(n);
	printf("\n");

	system("pause");
	return 0;
}