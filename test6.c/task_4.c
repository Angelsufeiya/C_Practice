#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

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