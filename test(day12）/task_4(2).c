#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char* src){
	char* p;
	char tmp[256] = { 0 };
	while (p = strrchr(src, ' ')){
		*p = 0;
		strcat(tmp, p + 1);
		strcat(tmp, " ");
	}
	strcat(tmp, src);
	strcpy(src, tmp);
}

int main(){
	char src[] = "I'm a fashion student";

	reverse(src);
	puts(src);

	system("pause");
	return 0;
}