#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

void printlog(int data[],int n){
	int i = 0;
	for (i = 0; i < n; i++){
		printf("%d", data[i]);
	}
	printf("\n");
}

void init(int data[], int n, int input[]){
	int i = 0;
	for (i = 0; i < n; i++){
		data[i] = input[i];
	}
}

void reserve(int data[], int n, int input[]){
	int i = 0;
	int j = n - 1;
	for (i = 0, j = n - 1; i < n; i++, j--){
		int tmp = data[i];
		data[i] = input[j];
		input[j] = tmp;
	}
}

void empty(int data[], int n){
	int i = 0;
	for (i = 0; i < n; i++){
		data[i] = 0;
	}
}

int main(){
	int data[10] = { 0 };
	int input[100] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printlog(data , 10);
	init(data, 10, input);
	printlog(data, 10);
	reserve(data, 10, input);
	printlog(data, 10);
	empty(data, 10);
	printlog(data, 10);

	system("pause");
	return 0;
}