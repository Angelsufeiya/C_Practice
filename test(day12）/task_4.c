#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。

void reverse_part(char* str, int start, int end){
	int i, j, tmp;

	for (i = start, j = end; i < j; i++, j--){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

int main(){
	char src[] = "I'm a fashion student";
	int i;
	int start = 0, end;
	
	for (i = 0; src[i]; i++){
		if (src[i] == ' '){
			end = i - 1;
			reverse_part(src, start, end);
			start = i + 1;
		}
	}
	reverse_part(src, start, i - 1);//用来反转最后一个单词
	reverse_part(src, 0, i - 1);
	puts(src);

	system("pause");
	return 0;
}