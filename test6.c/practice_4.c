#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1

void Add(int* p){
	(*p)++;//*��++�������ȼ�
}

int main(){
	int num = 0;
	Add(&num);
	printf("num = %d", num);
	Add(&num);
	printf("num = %d", num);

	system("pause");
	return 0;
}