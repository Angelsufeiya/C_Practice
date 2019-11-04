#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "MailList.h"

void inputData(){
	printf("请输入姓名:\n");
	scanf("%49s", g_AllMsg[g_count].name);//49（只要49个字符，给尾0留个位位置），避免越界
	getchar();//吃掉回车符
	printf("请输入性别（f/m):\n");
	scanf("%c", &g_AllMsg[g_count].gender);//切记要加 &
	printf("请输入年龄:\n");
	scanf("%d", &g_AllMsg[g_count].age);
	printf("请输入电话号码:\n");
	scanf("%29s", g_AllMsg[g_count].telnum);
	printf("请输入地址:\n");
	scanf("%199s", g_AllMsg[g_count].addr);
	g_count++;
}

void outputData(){
	int i;
	printf("  姓名    性别 年龄    电话      住址\n");
	for (i = 0; i < g_count; i++){
		printf("%-10s %3c %3d  %11s  %s\n", 
										g_AllMsg[i].name, 
										g_AllMsg[i].gender, 
										g_AllMsg[i].age, 
										g_AllMsg[i].telnum, 
										g_AllMsg[i].addr);

	}

}