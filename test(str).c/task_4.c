#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//1.模拟实现strncpy 
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。

char* my_strncpy(char *dest, const char *src, size_t size){
	assert(dest);
	assert(src);

	char *ret = dest;
	size_t n = sizeof(src);

	while (size && (*dest++ = *src++) != '\0'){
		size--;
	}
	if (size){
		while (--size){
			*dest++ = '\0';
		}
	}
	return ret;
}

int main41(){
	const char str1[20] = "0123456789";
	char str2[30] = "abcdefghijklmnopqrs";
	size_t count = 15;

	printf("调用 my_strncpy前，str2 = %s\n", str2);
	my_strncpy(str2, str1, count);
	printf("调用 my_strncpy后，str2 = %s\n", str2);

	system("pause");
	return 0;
}


//2.模拟实现strncat
//Appends the first num characters of source to destination, plus a terminating null-character.
//If the length of the C string in source is less than num,
//only the content up to the terminating null - character is copied.
//将源字符串的前num字符附加到目标，加上一个终止的空字符。
//如果源字符串中的C字符串长度小于num，则只复制到终止符NULL前的内容。

	
char* my_strncat(char *dest, const char *src, size_t num){
	assert(dest);
	assert(src);

	char *ret = dest;

	while (*dest++);
	*dest--;
	while (num-- && (*dest++ = *src++));
	*dest = 0;
	return ret;
}

int main42(){
	const char str1[20] = "0123456789";
	char str2[50] = "abcdefghijklmnopqrs";
	size_t count = 5;

	printf("调用 my_strncat前，str2 = %s\n", str2);
	my_strncat(str2, str1, count);
	printf("调用 my_strncat后，str2 = %s\n", str2);

	system("pause");
	return 0;
}

//3.模拟实现strncmp
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完。

int my_strncmp(const char *str1, const char *str2, size_t num){
	assert(str1 && str2);

	int ret = 0;

	if (num == 0)
		return ret;
	while (!(ret = (*(unsigned char*)str1 - *(unsigned char*)str2)) && *str1 && --num){
		*str1++;
		*str2++;
	}
	if (ret > 0)
		ret = 1;
	else if (ret < 0)
		ret = -1;
	return ret;
}

int main43(){
	const char str1[10] = "abcdabcd";
	const char str2[20] = "abcdbdbcdabcdb";
	size_t count = 5;

	printf("调用 my_strncmp后，比较得 = %d\n", my_strncmp(str1, str2, count));

	system("pause");
	return 0;
}
