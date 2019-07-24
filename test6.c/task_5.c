#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//实现一个函数，判断一个数是不是素数。
//void judgePrimeNum(int n){
//	int i = 0;
//	int count = 1;
//	for (i = 2; i <= sqrt(n); i++){
//		if (n % i == 0){
//			count = 0;
//			break;
//		}
//		if (count == 1){
//			printf("%d\n", n);
//		}
//	}
//}
//
//int main(){
//	int n = 0;
//	scanf("%d", n);
//	judgePrimeNum(n);
//	system("pause");
//	return 0;
//}

int main(){
	int num, i;
	int n = 0;
	for (i = 100; i <= 200; i++){
		for (num = 2; num <= sqrt(i); num++){
			if (i%num == 0){
				n = 1;
				break;
			}
		}
		if (n == 0)
			printf("%d\n", i);
		n = 0;//另n归0是为了重新判断i是否为素数
	}
	system("pause");
	return 0;
}