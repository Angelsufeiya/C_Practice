#define _CRT_SECURE_NO_WARNINGS

#include "MailList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//初始化所有数据
void initMailList(MailLists * data)
{
	//每一次动态开辟存储100条数据的空间，并将其初始化为0
	data->allMsg = (struct MailList *)calloc(PERSPACE, sizeof(struct MailList));
	data->count = 0;
	data->limit = PERSPACE;
}

//输入数据
void inputData(struct MailList * oneData)
{
	printf("请输入姓名：\n");
	scanf("%49s", oneData->name);
	getchar();//吞掉回车键
	printf("请输入性别（f/m）：\n");
	scanf("%c", &oneData->gender);
	printf("请输入年龄：\n");
	scanf("%d", &oneData->age);
	printf("请输入电话号码：\n");
	scanf("%29s", oneData->telnum);
	printf("请输入地址：\n");
	scanf("%199s", oneData->addr);
}

//将每条信息存储到通讯录中
void addMailList(MailLists * data, struct MailList oneData)
{
	int i;

	if (data->count == data->limit)
	{
		//如果动态开辟的内存空间已经存满（信息存储100条），则继续动态开辟
		data->limit += PERSPACE;
		data->allMsg = (struct MailList *)realloc(data->allMsg, data->limit * sizeof(struct MailList));
	}

	for (i = 0; i < data->count; i++)
	{
		//按照名字进行排序
		if (strcmp(data->allMsg[i].name, oneData.name) > 0)
		{
			break;
		}
	}
	int j;
	for (j = data->count; j > i; j--)
	{
		data->allMsg[j] = data->allMsg[j - 1];//将名字字母大于他的，排到他的后面
	}
	data->allMsg[i] = oneData;

	data->count++;
}

//删除通讯录
void destoryMailList(MailLists * data)
{
	if (data->allMsg)//allMsg开辟成功不返回NULL，条件为真
	{
		free(data->allMsg);//释放动态开辟的内存空间
	}
	data->allMsg = NULL;//释放完，让其等于NULL
	data->count = 0;
	data->limit = 0;
}

//寻找信息
void searchData(MailLists data, char * find, int * searchres)
{
	int i, flag;
	char age[4] = { 0 };//用来记录年龄的变量
	char * ret;
	for (i = 0; i < data.count; i++)
	{
		do{
			flag = 1;
			ret = strstr(data.allMsg[i].name, find);
			if (ret)
			{
				break;
			}

			ret = strstr(data.allMsg[i].telnum, find);
			if (ret)
			{
				break;
			}

			sprintf(age, "%d", data.allMsg[i].age);//将输入的数据以10进制格式存储在age中
			if (!strcmp(age, find))
			{
				break;
			}

			ret = strstr(data.allMsg[i].addr, find);
			if (ret)
			{
				break;
			}

			flag = 0;
		} while (0);

		//如果没有找到flag == 0；找到则查找有无其他信息
		if (flag)
		{
			searchres[0]++;//0++
			searchres[searchres[0]] = i;
		}
	}
}

//删除一条信息
void deleteOneData(MailLists * data, int n)
{
	int i;
	for (i = n; i < data->count; i++)
	{
		data->allMsg[i] = data->allMsg[i + 1];
	}
	data->count--;
}

//输出数据
void outputData(MailLists data)
{
	int i;
	if (data.count == 0)
	{
		printf("没有数据\n");
		return;
	}

	printf("  姓名     性别 年龄     电话        住址\n");
	for (i = 0; i < data.count; i++)
	{
		printf("%-10s %3c  %3d  %11s %s\n",
			data.allMsg[i].name,
			data.allMsg[i].gender,
			data.allMsg[i].age,
			data.allMsg[i].telnum,
			data.allMsg[i].addr);
	}
}

//输出搜寻出来的数据
void outputSearchData(MailLists data, int * outputdata)
{
	int i;
	if (outputdata[0] == 0)
	{
		printf("没有符合条件的数据\n");
		return;
	}

	printf("     姓名     性别 年龄     电话      住址\n");
	for (i = 1; i <= outputdata[0]; i++)
	{
		printf("%2d %-10s %3c  %3d  %11s %s\n",
			i,
			data.allMsg[outputdata[i]].name,
			data.allMsg[outputdata[i]].gender,
			data.allMsg[outputdata[i]].age,
			data.allMsg[outputdata[i]].telnum,
			data.allMsg[outputdata[i]].addr);
	}
}

//得到一条通讯录信息
int catchOneData(MailLists data, char *find)
{
	int schres[1001] = { 0 };//用来记录是哪一条信息被搜寻到
	searchData(data, find, schres);
	if (schres[0] == 0)
	{
		return -1;
	}
	else if (schres[0] == 1)
	{
		return schres[1];
	}
	else
	{
		int i;
		outputSearchData(data, schres);
		printf("请输入你要删除第几条数据:\n");
		scanf("%d", &i);
		if (i < 1 || i > schres[0])
		{
			return -1;
		}
		return schres[i];
	}
}

//保存数据
int saveData(MailLists allData, const char * filename)
{
	FILE * pf = fopen(filename, "wb");
	if (pf == NULL)//文件打开失败
	{
		return 1;
	}

	fwrite(&allData.count, sizeof(int), 1, pf);//将通讯录信息的数量写入
	fwrite(allData.allMsg, sizeof(struct MailList), allData.count, pf);//将通讯录信息写入

	fclose(pf);
	return 0;
}

//读取数据
int loadData(MailLists * allData, const char * filename)
{
	FILE * pf = fopen(filename, "rb");
	if (pf == NULL)
	{
		return 1;
	}

	fread(&allData->count, sizeof(int), 1, pf);//先读入通讯录的数量
	if (allData->count > PERSPACE)
	{
		allData->limit = (allData->count / PERSPACE + 1) * PERSPACE;
		allData->allMsg = (struct MailList *)realloc(allData->allMsg, allData->limit * sizeof(struct MailList));
	}
	else
	{
		allData->limit = PERSPACE;
	}
	fread(allData->allMsg, sizeof(struct MailList), allData->count, pf);//将通讯录信息读入

	fclose(pf);
	return 0;
}