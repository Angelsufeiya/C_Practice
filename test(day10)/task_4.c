#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

int count_one_bits(unsigned int value){
	int i, count = 0;
	for (i = value; i; i /= 2){
		count += i % 2;
	}
	return count;
}

int main4(){
	int input1, input2;

	printf("����������������ʮ���ƣ���");
	scanf("%d%d", &input1, &input2);
	printf("%d\n ", count_one_bits(input1^input2));

	system("pause");
	return 0;
}