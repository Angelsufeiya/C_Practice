#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "MailList.h"

void inputData(){
	printf("����������:\n");
	scanf("%49s", g_AllMsg[g_count].name);//49��ֻҪ49���ַ�����β0����λλ�ã�������Խ��
	getchar();//�Ե��س���
	printf("�������Ա�f/m):\n");
	scanf("%c", &g_AllMsg[g_count].gender);//�м�Ҫ�� &
	printf("����������:\n");
	scanf("%d", &g_AllMsg[g_count].age);
	printf("������绰����:\n");
	scanf("%29s", g_AllMsg[g_count].telnum);
	printf("�������ַ:\n");
	scanf("%199s", g_AllMsg[g_count].addr);
	g_count++;
}

void outputData(){
	int i;
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