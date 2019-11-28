#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "MailList.h"

void inputData(){
	struct MailList tmp;

	printf("����������:\n");
	scanf("%49s", tmp.name);//49��ֻҪ49���ַ�����β0����λλ�ã�������Խ��
	getchar();//�Ե��س���
	printf("�������Ա�f/m):\n");
	scanf("%c", &tmp.gender);//�м�Ҫ�� &
	printf("����������:\n");
	scanf("%d", &tmp.age);
	printf("������绰����:\n");
	scanf("%29s", tmp.telnum);
	printf("�������ַ:\n");
	scanf("%199s", tmp.addr);
	//�����صĲ��Ҳ��룬���Ӷ�Ϊn;
	int i, j;

	for (i = 0; i < g_count; i++){
		if (strcmp(g_AllMsg[i].name, tmp.name) > 0){
			break;
		}
	}
	for (j = g_count; j > i; j--){
		g_AllMsg[j] = g_AllMsg[j - 1];
	}
	g_AllMsg[i] = tmp;

	g_count++;
}

void outputData(){
	int i;
	if (g_count == 0){
		printf("û������\n");
		return;
	}

	printf("  ����    �Ա� ����    �绰      סַ\n");
	for (i = 0; i < g_count; i++){
		printf("%-10s %3c %3d  %11s  %s\n", 
										g_AllMsg[i].name, 
										g_AllMsg[i].gender, 
										g_AllMsg[i].age, 
										g_AllMsg[i].telnum, 
										g_AllMsg[i].addr);

	}
}

void searchData(char * find){
	int i = 0;
	int count = 0;
	char age[4] = { 0 };
	char *ret = NULL;
	int flag = 1;
	for (i = 0; i < g_count; i++){
		do{
			ret = strstr(g_AllMsg[i].name, find);
			if (ret){
				break;//���ҵ����������
			}

			ret = strstr(g_AllMsg[i].telnum, find);
			if (ret){
				break;//���ҵ��绰�����
			}

			//������תΪ�ַ���
			sprintf(age, "%d", g_AllMsg[i].age);//�� g_AllMsg[i].age תΪ�ַ����浽 age ��
			if (!strcmp(age, find)){//age == find ����0
				break;
			}
			
			ret = strstr(g_AllMsg[i].addr, find);
			if (ret){
				break;//���ҵ����������
			}

			flag = 0;
		} while (0);

		if (flag){
			printf("%-10s %3c %3d  %11s  %s\n",
				g_AllMsg[i].name,
				g_AllMsg[i].gender,
				g_AllMsg[i].age,
				g_AllMsg[i].telnum,
				g_AllMsg[i].addr);
			count++;
		}
	}
	if (count){
		printf("���ҵ�%d������\n", count);
	}
	else{
		printf("û�з�������������\n");
	}
}