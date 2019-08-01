#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//递归和非递归分别实现strlen 

//int myStrlen(char * str){
//	if (*str == '\0')
//		return 0;
//	return 1 + myStrlen(str + 1);
//}

int myStrlen(char * str){
	int i = 0;
	for (i = 0; *str != '\0'; i++){
		*str = *(str + 1);
	}
	return i;
}

int main(){
	char string[] = "abcdef";

	printf("%d\n", myStrlen(string));

	system("pause");
	return 0;
}