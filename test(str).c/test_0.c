#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main00(){
	const char str1[20] = "0123456789";
	char str2[30] = "abcdefghijklmnopqrs";
	size_t count = 15;

	printf("调用 strncpy前，str2 = %s\n", str2);
	strncpy(str2, str1, count);
	printf("调用 strncpy后，str2 = %s\n", str2);

	system("pause");
	return 0;
}

int main01(){
	const char str1[20] = "0123456789";
	char str2[50] = "abcdefghijklmnopqrs";
	size_t count = 5;

	printf("调用 my_strncat前，str2 = %s\n", str2);
	strncat(str2, str1, count);
	printf("调用 my_strncat后，str2 = %s\n", str2);

	system("pause");
	return 0;
}