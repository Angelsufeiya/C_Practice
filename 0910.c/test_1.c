#include <stdio.h>
#include<stdlib.h>

typedef int* IntPtr;
typedef int(*Ptr)[10];

int main1(){
	int a = 10;
	int* p = &a;
	p++;
	*p = 20;

	//int arr[10] = { 1, 2, 3, 4 };
	////&arr => int(*p)[10]
	////һ������ָ�룬��һ��ָ�룬ָ��һ������Ϊ10��Ԫ������
	//Ptr p = &arr;
	//int(*p)[10] = &arr;
	////ָ������
	//int* arr2[10];

	//int num = 10;
	//int* p = &num;

	//if (p != NULL){
	//	*p = 20;
	//}

	/*int num = 0x11223344;
	int* p = &num;
	char* p2 = (char*)p;

	*p2 = 0x55;
	printf("%x\n", *p);
*/
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