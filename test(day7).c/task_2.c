#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 

int myPow(int n, int k){
	if (k == 1){
		return n;
	}
	return n * myPow(n, k - 1);
}

int main(){
	int n, k;
	printf("���������");
	scanf("%d", &n);
	printf("���������");
	scanf("%d", &k);
	printf("%d\n", myPow(n, k));

	system("pause");
	return 0;
}