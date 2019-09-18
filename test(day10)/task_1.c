#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1

int count_one_bits1(unsigned int value){
	unsigned int i;
	int count = 0;
	for (i = value; i; i /= 2){
		count += i % 2;
	}
	return count;
}

int count_one_bits2(unsigned int value){
	int count = 0;
	do{
		count++;
	} while (value &= value - 1);
	return count;
}

int main(){
	int input = 0;
	
	printf("������һ������ʮ���ƣ���");
	scanf("%d", &input);
	printf("���������� %d ��1\n", count_one_bits1(input));
	printf("���������� %d ��1\n", count_one_bits2(input));

	system("pause");
	return 0;
}