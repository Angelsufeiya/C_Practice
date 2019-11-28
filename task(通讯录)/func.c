#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "MailList.h"

void inputData(){
	struct MailList tmp;

	printf("请输入姓名:\n");
	scanf("%49s", tmp.name);//49（只要49个字符，给尾0留个位位置），避免越界
	getchar();//吃掉回车符
	printf("请输入性别（f/m):\n");
	scanf("%c", &tmp.gender);//切记要加 &
	printf("请输入年龄:\n");
	scanf("%d", &tmp.age);
	printf("请输入电话号码:\n");
	scanf("%29s", tmp.telnum);
	printf("请输入地址:\n");
	scanf("%199s", tmp.addr);
	//最朴素的查找插入，复杂度为n;
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
		printf("没有数据\n");
		return;
	}

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
				break;//查找到名字相符合
			}

			ret = strstr(g_AllMsg[i].telnum, find);
			if (ret){
				break;//查找到电话相符合
			}

			//将年龄转为字符串
			sprintf(age, "%d", g_AllMsg[i].age);//将 g_AllMsg[i].age 转为字符串存到 age 中
			if (!strcmp(age, find)){//age == find 返回0
				break;
			}
			
			ret = strstr(g_AllMsg[i].addr, find);
			if (ret){
				break;//查找到年龄相符合
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
		printf("共找到%d条数据\n", count);
	}
	else{
		printf("没有符合条件的数据\n");
	}
}