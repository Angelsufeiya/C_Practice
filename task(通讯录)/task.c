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

int menu()
{
	int tmp, ret;
	printf("0.	�˳�\n"
		"1.	�����ϵ����Ϣ\n"
		"2.	ɾ��ָ����ϵ����Ϣ\n"
		"3.	����ָ����ϵ����Ϣ\n"
		"4.	�޸�ָ����ϵ����Ϣ\n"
		"5.	��ʾ������ϵ����Ϣ\n"
		"6.	���������ϵ��\n"
		"������ѡ�");
	ret = scanf("%d", &tmp);
	return ret ? tmp : -1;
}

void MailList()
{
	int op;
	int ret;
	char str[256] = { 0 };
	int searchRes[1001] = { 0 };
	MailLists allData;
	struct MailList tmp;

	initMailList(&allData);
	while (1)
	{
		op = menu();
		if (op == 0)
		{
			break;
		}
		switch (op)
		{
		case ADD_MSG:
			inputData(&tmp);
			addMailList(&allData, tmp);
			break;
		case DELETE_MSG:
			printf("��������Ҫɾ������Ŀ��\n");
			memset(str, 0, sizeof(str));
			scanf("%s", str);
			ret = catchOneData(allData, str);
			if (ret >= 0)
			{
				deleteOneData(&allData, ret);
				printf("ɾ���ɹ�\n");
			}
			else
			{
				printf("ɾ��ʧ��\n");
			}
			break;
		case SEARCH_MSG:
			printf("��������Ҫ�������ַ�����\n");
			memset(str, 0, sizeof(str));
			memset(searchRes, 0, sizeof(searchRes));
			scanf("%s", str);
			searchData(allData, str, searchRes);
			outputSearchData(allData, searchRes);
			printf("���ҵ�%d������\n", searchRes[0]);
			break;
		case CHANGE_MSG:
			break;
		case DISPLAY_MSG:
			outputData(allData);
			break;
		case EMPTY_MSG:
			destoryMailList(&allData);
			initMailList(&allData);
			break;
		case -1:
			printf("������������������\n");
			break;
		default:
			printf("������������������\n");
		}
	}
	destoryMailList(&allData);
}

int main()
{
	MailList();
	return 0;
}