#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//void reverse_string(char * start, char * end){
//	char tmp = *start;
//	*start = *end;
//	*end = tmp;
//	if (start + 1 < end - 1){
//		reverse_string(start + 1, end - 1);
//	}
//}

void reverse_string(char * str){
	char tmp = str[0];
	int end = strlen(str) - 1;
	if (*str){
		str[0] = str[end];
		str[end] = '\0';
		reverse_string(str + 1);
		str[end] = tmp;
	}
}

int main(){
	char str[10] = "bitekeji";

	//reverse_string(str, str + strlen(str) - 1);
	reverse_string(str);
	printf("%s\n", str);

	system("pause");
	return 0;
}