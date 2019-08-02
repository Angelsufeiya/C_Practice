#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//递归和非递归分别实现求n的阶乘

//int fac(int n){
//	if (n == 1)
//		return 1;
//	return n * fac(n - 1);
//}

int fac(int n){
	int i,tmp = 1;
	for (i = 1; i <= n; i++){
		tmp = tmp*i;
	}
	return tmp;
}

int main(){
	int n;

	scanf("%d", &n);
	printf("%d", fac(n));

	system("pause");
	return 0;
}