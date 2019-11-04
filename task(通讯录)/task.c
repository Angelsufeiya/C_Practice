//实现一个通讯录； 
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//
//提供方法：
//1. 添加联系人信息
//2. 删除指定联系人信息
//3. 查找指定联系人信息
//4. 修改指定联系人信息
//5. 显示所有联系人信息
//6. 清空所有联系人
//7. 以名字排序所有联系人
//8. 保存联系人到文件
//9. 加载联系人
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "MailList.h"//引用两次会出现重定义现象

struct MailList g_AllMsg[1000];

int g_count;

int menu(){
	int ret, input;
	printf("1. 添加联系人信息\n"
		"2. 删除指定联系人信息\n"
		"3. 查找指定联系人信息\n"
		"4. 修改指定联系人信息\n"
		"5. 显示所有联系人信息\n"
		"6. 清空所有联系人\n"
		"请输入你要进行操作:");
	//复制成功，返回1；复制失败，返回0
	ret = scanf("%d", &input);
	//因为menu函数在while(1)中一旦输入A 死循环
	//return input;
	return ret ? input : -1;
}

void MailList(){
	int op;
	while (1){
		op = menu();
		switch (op){
		case Add:
			inputData();
			break;
		case Delete:
			break;
		case Search:
			break;
		case Change:
			break;
		case Display:
			outputData();
			break;
		case Empty:
			break;
		case -1:
			printf("输入有误，请重新输入\n");
			break;
		default:
			break;
		}

	}
}

int main(){
	MailList();
	return 0;
}