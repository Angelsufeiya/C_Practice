//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 1
//字符串反转函数
void reverse_part(char *src, int start, int end){
	int i, j;
	char tmp;

	for (i = start, j = end; i < j; i++, j--){
		tmp = src[i];
		src[i] = src[j];
		src[j] = tmp;
	}
}

//左旋函数
void round(char * src, int time){
	int len = strlen(src);
	int pos = time%len;//反转一个字符串的长度等于没有反转（防止输入的数大于字符串长度）

	reverse_part(src, 0, pos - 1);//反转前n个字符串
	reverse_part(src, pos, len - 1);//反转剩下的字符串
	reverse_part(src, 0, len - 1);//整体反转
}
#else
//左旋函数
void round(char * src, int time){
	char tmp[256] = { 0 };
	int len = strlen(src);
	int pos = time % len;//防止输入的数大于数组个数

	strcpy(tmp, src + pos);//从src[pos]开始的数组赋给tmp数组中
	strncat(tmp, src, pos);//将src的前pos个字符拼接到tmp数组后
	strcpy(src, tmp);//将tmp数组赋回src数组中
}
#endif

int main(){
	int input;
	char str[] = "ABCDE";

	printf("请输入左旋的个数：");
	scanf("%d", &input);
	round(str, input);
	puts(str);

	system("pause");
	return 0;
}