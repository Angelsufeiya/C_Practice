#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

void printSum(int n){
	if (n == 0){
		return;
	}

	printSum(n / 10);
	//ͨ�������ĸı���Ի��㲻ͬ����
	printf("%d ", n % 10);
}

int main(){
	int n;

	scanf("%d", &n);
	printSum(n);
	printf("\n");

	system("pause");
	return 0;
}