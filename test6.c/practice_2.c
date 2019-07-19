//一个关机小程序
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//使用goto语句

//int main(){
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("您的电脑将在1分钟之内关机，如果输入：我是猪，则取消关机！\n请输入：>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪" ) == 0){
//		system("shutdown -a");
//	}
//	else{
//		goto again;
//	}
//	return 0;
//}

//如果不使用goto的话，可以使用循环

//int main(){
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	do{
//		printf("您的电脑将在1分钟之内关机，如果输入：我是猪，则取消关机！\n请输入：>");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0){
//			system("shutdown -a");
//		}
//	} while (strcmp(input, "我是猪"));
//
//	return 0;
//}

int main(){
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while(1){
		printf("您的电脑将在1分钟之内关机，如果输入：我是猪，则取消关机！\n请输入：>");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0){
			system("shutdown -a");
			break;
		}
	} 
	return 0;
}