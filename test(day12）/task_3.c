#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

int main3(){
	int a[] = { 1, 5, 8, 2, 6, 4, 2, 8, 5, 1, 4 };
	int i, res = 0;

	for (i = 0; i < SIZE(a); i++){
		res ^= a[i];
	}
	printf("%d\n", res);

	system("pause");
	return 0;
}