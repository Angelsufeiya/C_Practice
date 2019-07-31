#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

int digitSum(int n){
	if (n == 0){
		return 0;
	}
	return n % 10 + digitSum(n / 10);
}

int main(){
	int n;

	scanf("%d", &n);
	printf("%d", digitSum(n));

	system("pause");
	return 0;
}