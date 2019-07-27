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

void reverse(int data[], int n){
	int i, j;
	int tmp;
	for (i = 0, j = n - 1; i < j; i++, j--){//i不能小于n 否则逆置一遍后又重复逆置
		tmp = data[i]; 
		data[i] = data[j];
		data[j] = tmp;
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
	int input[100] = { 1, 3, 5, 7, 9, 2, 4, 6, 8 };
	printlog(data , 10);
	init(data, 10, input);
	printlog(data, 10);
	reverse(data, 10);
	printlog(data, 10);
	empty(data, 10);
	printlog(data, 10);

	system("pause");
	return 0;
}