#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//strlen函数返回的是在字符串中 '\0' 前面出现的字符个数(不包含 '\0' )
//int main() {
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1)>0)//strlen(str2) - strlen(str1)	4294967293	unsigned int
//
//
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//char* strcpy(char * destination, const char * source);
//源字符串必须以 '\0' 结束。
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。

//char * strcat(char * destination, const char * source);
//源字符串必须以 '\0' 结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。

//int strcmp(const char * str1, const char * str2);
//第一个字符串大于第二个字符串，则返回大于0的数字 
//第一个字符串等于第二个字符串，则返回0 
//第一个字符串小于第二个字符串，则返回小于0的数字

//char * strncpy ( char * destination, const char * source, size_t num );
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。

//char * strncat ( char * destination, const char * source, size_t num );
//int main() {
//	char str1[20];
//	char str2[20];
//
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}

//int strncmp ( const char * str1, const char * str2, size_t num )比较
//int main() {
//	char str[][5] = { "R2D2", "C3PO", "R2A6" };
//	int n;
//
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++){
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	}
//	return 0;
//}

//char * strstr ( const char *, const char * );
//Returns a pointer to the first occurrence of str2 in str1
// or a null pointer if str2 is not part of str1.

//int main() {
//	char str[] = "This is a simple string";
//	char * pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(pch);
//	return 0;
//}

//char * strtok ( char * str, const char * sep );
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
//(注:strtok函数会 改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改） 
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回 NULL 指针。

//int main() {
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//
//		pch = strtok(str, " ,.-");
//		while (pch != NULL)
//		{
//			printf("%s\n", pch);
//			pch = strtok(NULL, " ,.-");
//		}
//	return 0;
//}

//int main() {
//	char *p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30] = { 0 };
//	char *str = NULL;
//	strcpy(arr, p);
//	//将数据拷贝一份，处理arr数组的内容 
//	for(str=strtok(arr, sep);str != NULL; str=strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}

//void * memcpy ( void * destination, const void * source, size_t num );
//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
//这个函数在遇到 '\0' 的时候并不会停下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的。

//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//
//int main() {
//	char myname[] = "Pierre de Fermat";
//	/* using memcpy to copy string: */
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	/* using memcpy to copy structure: */
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//	return 0;
//}

//void * memmove(void * destination, const void * source, size_t num);
//和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
//如果源空间和目标空间出现重叠，就得使用memmove函数处理。

//int main() {
//	char str[] = "memmove can be very useful......";
//	memmove(str + 3, str + 5, 5);
//	puts(str);
//	return 0;
//}

//int memcmy(const void * ptr1, const void * ptr2, size_t num)
//比较从ptr1和ptr2指针开始的num个字节

//int main() {
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//
//	if (n > 0) {
//		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	}
//	else if (n < 0) {
//		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	}
//	else {
//		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	}
//	return 0;
//}