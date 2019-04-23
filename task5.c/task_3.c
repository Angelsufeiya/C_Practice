#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++){
		printf("请输入您的密码：");
		scanf("%s", password);//123456
		if (0 == strcmp(password, "123456")){
			printf("密码正确，登陆成功!\n");
			break;
		}
		else{
			printf("密码错误，请重新输入!\n");
		}
	}
	if (i == 3){
		printf("三次密码都错误，退出程序!\n");
	}
	
	system("pause");
	return 0;
}