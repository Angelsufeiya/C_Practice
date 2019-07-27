#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//实现一个函数，判断一个数是不是素数。
int judgePrimeNum(int n){
	int i = 0;
	for (i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n, ret;
	scanf("%d", &n);
	ret = judgePrimeNum(n);
	if (ret == 1){
		printf("%d是素数\n", n);
	}
	else{
		printf("%d不是素数\n", n);
	}
	system("pause");
	return 0;
}

//int main(){
//	int num, i;
//	int n = 0;
//	for (i = 100; i <= 200; i++){
//		for (num = 2; num <= sqrt(i); num++){
//			if (i%num == 0){
//				n = 1;
//				break;
//			}
//		}
//		if (n == 0)
//			printf("%d\n", i);
//		n = 0;//另n归0是为了重新判断i是否为素数
//	}
//	system("pause");
//	return 0;
//}