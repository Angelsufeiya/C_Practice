#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//编写函数不允许创建临时变量，求字符串长度。

//int main(){
//	char *p = "abcdef";
//	int len = strlen(p);
//	printf("%d", len);
//
//	system("pause");
//	return 0;
//}

//非递归函数
//int Strlen(char* arr){
//	int count = 0;
//	
//	while(*arr != '\0'){
//		arr++;
//		count++;
//	}
//	return count;
//}

//递归函数
int Strlen(char *p){
	if (*p == '\0')
		return 0;
	else
		return 1 + Strlen(p + 1);
}

int main(){
	char *p = "abcdef";
	int len = Strlen(p);
	printf("%d", len);

	system("pause");
	return 0;
}