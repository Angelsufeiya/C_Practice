#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 

int main(){
	int a, b;

	printf("��������������");
	scanf("%d%d", &a, &b);
	a = a >> 1;
	b = b >> 1;
	printf("%d\n", a + b);

	system("pause");
	return 0;
}