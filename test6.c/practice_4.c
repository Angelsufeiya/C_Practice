#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//写一个函数，每调用一次这个函数，就会将num的值增加1

void Add(int* p){
	(*p)++;//*于++存在优先级
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