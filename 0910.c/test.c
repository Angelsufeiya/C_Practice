#include <stdio.h>
#include <stdlib.h>

int main0(){

	//把一个占内存大的变量赋给内存小的变量，会触发 截断 ！
	//把一个占内存小的变量赋给内存大的变量，高位会进行补位（补符号位）

	int x = 0x11223344;
	char y = 0;
	y = x;
	printf("%x\n", y);

	int a = 0, b = 2, c = 3, d = 4;
	int i = a++ && b++ && c++ && d++;
	//短路求值（逻辑于操作：左侧表达式未假，右侧表达式不再求值
	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);

	int n = a++ || b++ || c++ || d++;
	//短路求值（逻辑或操作：左侧表达式未真，右侧表达式不再求值
	printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);

	i = 1;
	//如果在一个表达式中多次修改同一个变量，这样的结果是未定义行为
	//主要因为表达式求值顺序不确定
	int ret = ++i + ++i + ++i;
	printf("%d\n", ret);
	system("pause");
	return 0;
}