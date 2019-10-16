#include <stdio.h>
#include <stdlib.h>

int main() {
	const char*str1 = "abcdef";
	const char*str2 = "bbb";
	if (strlen(str2) - strlen(str1)>0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}
	return 0;
}