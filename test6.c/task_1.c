#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

void print_mul(n){
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++){
			printf("%2d*%2d=%-2d ", j, i, i*j);
			//%2d����ʾ����Ϊ2�Ŀ�ȴ�ӡ����
			//%02d����ʾ����Ϊ2�Ŀ�ȴ�ӡ������ǰ��ȱ�ٵ�λ��0
			//%-2d����ʾ����Ϊ2�Ŀ�ȴ�ӡ�����������
		}
		printf("\n");
	}
}

int main(){
	int n = 0;
	scanf("%d", &n);
	print_mul(n);

	system("pause");
	return 0;
}
