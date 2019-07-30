//递归和非递归分别实现求第n个斐波那契数。 
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//int fib(int n){
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//int fib(int n){
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2){
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

int fib(int n){
	int an = 1;
	int an_1 = 1;
	int an_2 = 1;
	int i;

	for(i = 2; i <= n; i++){
		an = an_1 - an_2;
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}

int main(){
	int n, ret;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);

	system("pause");
	return 0;
}