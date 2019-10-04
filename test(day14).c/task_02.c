#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int find_round(char * src, char * find){
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) ? 1 : 0;//‘⁄tmp¿Ô√Ê’“find
}

int main1(){
	printf("%d\n", find_round("ABCDE", "BCDEA"));

	return 0;
}