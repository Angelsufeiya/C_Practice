#include <stdio.h>
#include<stdlib.h>

int main(){
	int num = 0x11223344;
	int* p = &num;
	char* p2 = (char*)p;

	*p2 = 0x55;
	printf("%x\n", *p);

	//int num1 = 10;
	//int* p1 = &num1;//int* 基本数据类型（与 int, double并列关系）
	//double num2 = 20.0;
	//double* p2 = &num2;

	//p1 = p2;
	//printf("%d\n", *p1);// * 间接访问操作符/解引用
	//printf("%p\n", p1);
	//printf("%d\n", sizeof(p1));

	system("pause");
	return 0;
}