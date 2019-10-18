#include <stdio.h>

//模拟实现strlen

//1. 计数器方式
int my_strlen(char str[]){
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

//2. 不能创建临时变量计数器
int my_strlen_1(char str[]){
	if (*str == '\0'){
		return 0;
	}
	else{
		return 1 + my_strlen_1(str + 1);
	}
}

//指针-指针的方式
int my_strlen_2(char str[]){
	char *p = str;
	while (*p != '\0')
		p++;
	return p - str;//指向'\0'位置的指针-指向'a'位置的指针
}

int main0(){
	char arr[] = "abcdefg";
	int ret = 0;
	ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}