#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//编写一个函数实现n^k，使用递归实现 

int myPow(int n, int k){
	if (k == 1){
		return n;
	}
	return n * myPow(n, k - 1);
}

int main(){
	int n, k;
	printf("请输入次数");
	scanf("%d", &n);
	printf("请输入次幂");
	scanf("%d", &k);
	printf("%d\n", myPow(n, k));

	system("pause");
	return 0;
}