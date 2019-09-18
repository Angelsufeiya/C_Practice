#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main0(){
	char arr[1024] = { 0 };
	scanf("%s", arr);
	return 0;
}

int —main(){
	int i = 0, j;
	scanf("%d%d", &i, &j);
	//char str[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };//字符串数组
	//char str[6] = "hello"; //简化版写法
	//char str[6] = { 'h', 'e', 'l', 'l', 'o' };//str[5]的内存上自动赋值为’\0’
	//char str[10] = { 'h', 'e' };//其余8个元素自动赋值为’\0’
	//char str[] = "hello";//元素个数可以省略 数组分配空间大小为字符串中实际赋值字节数6
	//char *str = "hello";//str是指针 存储字符串首地址 指向字符串
	//char str[5] = { 'h', 'e', 'l', 'l', 'o' };//是字符数组而不是字符串数组，因为没有’\0’

	return 0;
}