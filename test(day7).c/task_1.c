#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�����������1��1��2��3��5��8��13��21��34��������

//�ݹ�
//int fib(int n){
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//�ǵݹ�
int fib(int n){
	int an = 1;
	int an_1 = 1;
	int an_2 = 1;
	int i;

	//while (n > 2){
	//	an = an_1 + an_2;
	//	an_2 = an_1;
	//	an_1 = an;
	//}
	for (i = 2; i < n; i++){
		an = an_1 + an_2;
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));

	system("pause");
	return 0;
}