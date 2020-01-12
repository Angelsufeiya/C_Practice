#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "MailList.h"//引用两次会出现重定义现象

int menu()
{
	int tmp, ret;
	printf("0.	退出\n"
		"1.	添加联系人信息\n"
		"2.	删除指定联系人信息\n"
		"3.	查找指定联系人信息\n"
		"4.	修改指定联系人信息\n"
		"5.	显示所有联系人信息\n"
		"6.	清空所有联系人\n"
		"7.	保存通讯录\n"
		"请输入选项：");
	ret = scanf("%d", &tmp);//防止输入错误（如果输入成功scanf返回1，否则返回0）
	return ret ? tmp : -1;
}

void MailList()
{
	int op, ret;
	char str[256] = { 0 };//用来搜索字符串（256只是一个上限，不会搜255个字符）
	int searchRes[1001] = { 0 };//为了存储1000条数据
	MailLists allData;	//创建通讯录的名称
	struct MailList tmp;//创建储存每条信息的变量

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
			printf("请输入你要删除的条目：\n");
			memset(str, 0, sizeof(str));//每次调用str前，先将str置0
			scanf("%s", str);
			ret = catchOneData(allData, str);
			if (ret >= 0)
			{
				deleteOneData(&allData, ret);
				printf("删除成功\n");
			}
			else
			{
				printf("删除失败\n");
			}
			break;
		case SEARCH_MSG:
			printf("请输入你要检索的字符串：\n");
			memset(str, 0, sizeof(str));
			memset(searchRes, 0, sizeof(searchRes));
			scanf("%s", str);
			searchData(allData, str, searchRes);
			outputSearchData(allData, searchRes);
			printf("共找到%d条数据\n", searchRes[0]);
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
			printf("输入有误，请重新输入\n");
			getchar();
			break;
		default:
			printf("输入有误，请重新输入\n");
		}
	}
	destoryMailList(&allData);
}

//void test(){
//	char str[256] = { 0 };
//	int searchRes[1001] = { 0 };
//	MailLists allData;
//	struct MailList tmp;
//
//	initMailList(&allData);
//	inputData(&tmp);
//	addMailList(&allData, tmp);
//	if (saveData(allData, FILENAME)){
//		printf("保存失败\n");
//	}
//
//	destoryMailList;
//}
//
//void test2(){
//	MailLists allData;
//	struct MailList tmp;
//	if (loadData(allData, FILENAME)){
//		printf("读取失败\n");
//	}
//
//	outputData(allData);
//	destoryMailList;
//}

int main()
{
	MailList();
	//test();
	return 0;
}