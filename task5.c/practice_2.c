#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*模拟用户登录情景，并且只能登陆3次。
（只允许输入3次密码，如果密码正确则提示登陆成功，如果3次密码都输入错误，则退出程序）*/

int main()
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);//123456
		//"%s" 输出字符串
		//if (password == "123456")
		//字符串的比较，不能用等号比。
		if (strcmp(password, "123456") == 0)//string compare
			//string1 == string2，strcmp返回数字等于“0”
			//string1 < string2,strcmp返回的数字小于“0”
			//string1 > string2,strcmp返回的数字大于“0”
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入!\n");
		}
	}
	if (i == 3)
		printf("三次密码都错误，退出程序\n");

	system("pause");
	return 0;
}