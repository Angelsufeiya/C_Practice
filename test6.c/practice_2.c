//һ���ػ�С����
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ʹ��goto���

//int main(){
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���ĵ��Խ���1����֮�ڹػ���������룺��������ȡ���ػ���\n�����룺>");
//	scanf("%s", input);
//	if (strcmp(input, "������" ) == 0){
//		system("shutdown -a");
//	}
//	else{
//		goto again;
//	}
//	return 0;
//}

//�����ʹ��goto�Ļ�������ʹ��ѭ��

//int main(){
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	do{
//		printf("���ĵ��Խ���1����֮�ڹػ���������룺��������ȡ���ػ���\n�����룺>");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0){
//			system("shutdown -a");
//		}
//	} while (strcmp(input, "������"));
//
//	return 0;
//}

int main(){
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while(1){
		printf("���ĵ��Խ���1����֮�ڹػ���������룺��������ȡ���ػ���\n�����룺>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0){
			system("shutdown -a");
			break;
		}
	} 
	return 0;
}