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
	int op, ret;
	char str[256] = { 0 };
	int searchRes[1001] = { 0 };//����һ���ռ�洢��ѯ�Ľ��
	while (1){
		op = menu();
		switch (op){
		case Add:
			inputData();
			break;
		case Delete:
			printf("��������Ҫɾ������Ŀ:\n");
			memset(str, 0, sizeof(str));//ʹ��strǰ�����
			scanf("%s", str);
			ret = catchOneData(str);
			if (ret > 0){
				deleteOnedata(ret);
				printf("ɾ���ɹ�\n");
			}
			else{
				printf("ɾ��ʧ��\n");
			}
			break;
		case Search:
			printf("��������Ҫ�������ַ���:\n");//���Ҳ�һ���ǵ�����������עǧ��ٹ֣�
			memset(str, 0, sizeof(str));//Ϊ�˱���������ٶ�str���
			memset(searchRes, 0, sizeof(searchRes));
			scanf("%s", str);
			searchData(str, searchRes);
			outputSearchdata(searchRes);
			if (searchRes[0] > 0){
				printf("���ҵ�%d������\n", searchRes[0]);
			}
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