#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//ʵ��һ���������ж�һ�����ǲ���������
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
		printf("%d������\n", n);
	}
	else{
		printf("%d��������\n", n);
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
//		n = 0;//��n��0��Ϊ�������ж�i�Ƿ�Ϊ����
//	}
//	system("pause");
//	return 0;
//}