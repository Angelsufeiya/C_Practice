//ʵ��һ��ͨѶ¼�� 
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//
//�ṩ������
//1. �����ϵ����Ϣ
//2. ɾ��ָ����ϵ����Ϣ
//3. ����ָ����ϵ����Ϣ
//4. �޸�ָ����ϵ����Ϣ
//5. ��ʾ������ϵ����Ϣ
//6. ���������ϵ��
//7. ����������������ϵ��
//8. ������ϵ�˵��ļ�
//9. ������ϵ��
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "MailList.h"//�������λ�����ض�������

struct MailList g_AllMsg[1000];

int g_count;

int menu(){
	int ret, input;
	printf("1.	 �����ϵ����Ϣ\n"
		"2.	 ɾ��ָ����ϵ����Ϣ\n"
		"3.	 ����ָ����ϵ����Ϣ\n"
		"4.	 �޸�ָ����ϵ����Ϣ\n"
		"5.	 ��ʾ������ϵ����Ϣ\n"
		"6.	 ���������ϵ��\n"
		"��������Ҫ���в���:\n");
	//��ֵ�ɹ�������1����ֵʧ�ܣ�����0
	ret = scanf("%d", &input);
	//��Ϊmenu������while(1)��һ������A ��ѭ��
	//return input;
	return ret ? input : -1;
}

void MailList(){
	int op;
	char str[256] = { 0 };
	while (1){
		op = menu();
		switch (op){
		case Add:
			inputData();
			break;
		case Delete:
			break;
		case Search:
			printf("��������Ҫ�������ַ���:\n");//���Ҳ�һ���ǵ�����������עǧ��ٹ֣�
			scanf("%s", str);
			searchData(str);
			break;
		case Change:
			break;
		case Display:
			outputData();
			break;
		case Empty:
			memset(g_AllMsg, 0, g_count * sizeof(struct MailList));
			g_count = 0;
			break;
		case -1:
			getchar();
			printf("������������������\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	}
}

int main(){
	MailList();
	return 0;
}