#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�������1 2 3 4��

void print(int n){
	if (n > 9)
		print(n / 10);
	printf("%d ", n%10);
}

int main(){
	int n = 0;
	scanf("%d", &n);
	print(n);

	system("pause");
	return 0;
}