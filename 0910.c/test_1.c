#include <stdio.h>
#include<stdlib.h>

int main(){
	int num = 0x11223344;
	int* p = &num;
	char* p2 = (char*)p;

	*p2 = 0x55;
	printf("%x\n", *p);

	//int num1 = 10;
	//int* p1 = &num1;//int* �����������ͣ��� int, double���й�ϵ��
	//double num2 = 20.0;
	//double* p2 = &num2;

	//p1 = p2;
	//printf("%d\n", *p1);// * ��ӷ��ʲ�����/������
	//printf("%p\n", p1);
	//printf("%d\n", sizeof(p1));

	system("pause");
	return 0;
}