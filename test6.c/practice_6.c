#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��д��������������ʱ���������ַ������ȡ�

//int main(){
//	char *p = "abcdef";
//	int len = strlen(p);
//	printf("%d", len);
//
//	system("pause");
//	return 0;
//}

//�ǵݹ麯��
//int Strlen(char* arr){
//	int count = 0;
//	
//	while(*arr != '\0'){
//		arr++;
//		count++;
//	}
//	return count;
//}

//�ݹ麯��
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