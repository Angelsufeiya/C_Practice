#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char* src){
	char* p;
	char tmp[256] = { 0 };
	while (p = strrchr(src, ' ')){
		strcat(tmp, p + 1);
		strcat(tmp, " ");
		*p = 0;
	}
	strcat(tmp, src);
	strcpy(src, tmp);
}

int main(){
	char src[] = "student a am I";

	reverse(src);
	puts(src);

	system("pause");
	return 0;
}