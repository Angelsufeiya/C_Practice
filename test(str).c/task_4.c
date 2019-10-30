#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//1.模拟实现strncpy 
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。


//2.模拟实现strncat
//Appends the first num characters of source to destination, plus a terminating null-character.
//If the length of the C string in source is less than num,
//only the content up to the terminating null - character is copied.


//3.模拟实现strncmp
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完。


//int main()
//{
//	char a[5] = { 'A', 'B', 'C', 'D' };
//	char(*p3)[10] = &a;
//	char(*p4)[10] = a;
//
//	printf("%s\n", p3+1);
//	printf("%s\n", p4 + 1);
//
//	return 0;
//}