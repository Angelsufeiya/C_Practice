#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//���n��쳲��������� 1 1 2 3 5 8 13 21 34 ...
//�ݹ麯��
//int fib(int n){
//	if (n <= 2){
//		return 1;
//	}
//	else{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//�ǵݹ麯��
int fib(int n){
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2){
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main(){
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);

	system("pause");
	return 0;
}
