#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//ʹ�ú���ʵ���������Ľ����� 

void swap1(int *p1, int *p2){
	int *tmp = 0;
	tmp = p1;
	p1 = p2;
	p2 = tmp;
}//�������������ĵ�ַ����û�н�����������ֵ

void swap2(int *p1, int *p2){
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void print(int i, int j){
	printf("num1 = %d, num2 = %d\n", i, j);
}

int main(){
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	print(num1, num2);
	swap1(&num1, &num2);
	print(num1, num2);
	swap2(&num1, &num2);
	print(num1, num2);

	system("pause");
	return 0;
}