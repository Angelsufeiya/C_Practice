#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//������Ƕ��ʹ��

//newLine(){
//	printf("hehe\n");
//}
//
//threeLine(){
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		newLine();
//	}
//}
//
//int main(){
//	threeLine();
//
//	system("pause");
//	return 0;
//}

//��������ʽ����

int main(){
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, " bit"));
	printf("%d\n", ret);
	printf("%d\n", strlen("hello bit"));

	system("pause");
	return 0;
}
