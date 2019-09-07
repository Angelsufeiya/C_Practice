#include <stdio.h>
#include <stdlib.h>

//将1，2，3，……，9共9个数分成组，分别组成3个3位数，且使这三个三位数构成1：2：3的比例，
//试求出所有满足条件的3个3位数

int judge(int a, int  b, int  c) {
	int i = 0;

	i |= 1 << a % 10;
	i |= 1 << a / 10 % 10;
	i |= 1 << a / 100;

	i |= 1 << b % 10;
	i |= 1 << b / 10 % 10;
	i |= 1 << b / 100;

	i |= 1 << c % 10;
	i |= 1 << c / 10 % 10;
	i |= 1 << c / 100;

	return i == 0x3fe;
}

int main0(){
	int a, b, c;
	for (a = 123; a < 329; a++){
		for (b = 246; b < 658; b++){
			for (c = 369; c < 987; c++){
				if (judge(a, b, c) && b == 2 * a &&c == 3 * a){
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}

	system("pause");
	return 0;
}

//int main(){
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
//	int *q[4];
//	int k;
//
//	for (k = 0; k < 4; k++){
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//
//	c = a + b;
//	printf("Line 1 - c 的值是 %d\n", c);
//	c = a - b;
//	printf("Line 2 - c 的值是 %d\n", c);
//	c = a * b;
//	printf("Line 3 - c 的值是 %d\n", c);
//	c = b / a;
//	printf("Line 4 - c 的值是 %d\n", c);
//	c = b % a;
//	printf("Line 5 - c 的值是 %d\n", c);
//	c = a++;  // 赋值后再加 1 ，c 为 10，a 为 11
//	printf("Line 6 - c 的值是 %d, a 的值是 %d\n", c, a);
//	c = a--;  // 赋值后再减 1 ，c 为 11 ，a 为 10
//	printf("Line 7 - c 的值是 %d, a 的值是 %d\n", c, a);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int c;
//
//	c = a++;
//	printf("先赋值后运算：\n");
//	printf("Line 1 - c 的值是 %d, a 的值是 %d\n", c, a);
//	a = 10;
//	c = a--;
//	printf("Line 2 - c 的值是 %d, a 的值是 %d\n", c, a);
//
//	a = 10;
//	c = ++a;
//	printf("先运算后赋值：\n");
//	printf("Line 3 - c 的值是 %d, a 的值是 %d\n", c, a);
//	a = 10;
//	c = --a;
//	printf("Line 4 - c 的值是 %d, a 的值是 %d\n", c, a);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	unsigned int a = 60;    /* 60 = 0011 1100 */
//	unsigned int b = 13;    /* 13 = 0000 1101 */
//	int c = 0;
//
//	c = a & b;       /* 12 = 0000 1100 */
//	printf("Line 1 - c 的值是 %d\n", c);
//	c = a | b;       /* 61 = 0011 1101 */
//	printf("Line 2 - c 的值是 %d\n", c);
//	c = a ^ b;       /* 49 = 0011 0001 */
//	printf("Line 3 - c 的值是 %d\n", c);
//	c = ~a;          /*-61 = 1100 0011 */
//	printf("Line 4 - c 的值是 %d\n", c);
//	c = a << 2;     /* 240 = 1111 0000 */
//	printf("Line 5 - c 的值是 %d\n", c);
//	c = a >> 2;     /* 15 = 0000 1111 */
//	printf("Line 6 - c 的值是 %d\n", c);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	if (a == b){
//		printf("Line 1 - a 等于 b\n");
//	}
//	else{
//		printf("Line 1 - a 不等于 b\n");
//	}
//	if (a < b){
//		printf("Line 2 - a 小于 b\n");
//	}
//	else{
//		printf("Line 2 - a 不小于 b\n");
//	}
//	if (a > b){
//		printf("Line 3 - a 大于 b\n");
//	}
//	else{
//		printf("Line 3 - a 不大于 b\n");
//	}
//
//	/* 改变 a 和 b 的值 */
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	if (b <= a){
//		printf("Line 4 - b 小于或等于 a\n");
//	}
//	if (a >= b){
//		printf("Line 5 - a 大于或等于 b\n");
//	}
//
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int c = 0;
//
//	c = a;
//	printf("Line 1 - =  运算符实例，c 的值 = %d\n", c);
//	c += a;
//	printf("Line 2 - += 运算符实例，c 的值 = %d\n", c);
//	c -= a;
//	printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c);
//	c *= a;
//	printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c);
//	c /= a;
//	printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c);
//
//	c = 201;
//	c %= a;
//	printf("Line 6 - %= 运算符实例，c 的值 = %d\n", c);
//	c <<= 2;
//	printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c);
//	c >>= 2;
//	printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c);
//	c &= 2;
//	printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c);
//	c ^= 2;
//	printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c);
//	c |= 2;
//	printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void test1()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int a = 4;
//	short b;
//	double c;
//	int* ptr;
//
//	/* sizeof 运算符实例 */
//	printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a));
//	printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b));
//	printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c));
//
//	/* & 和 * 运算符实例 */
//	ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
//	printf("a 的值是 %d\n", a);
//	printf("*ptr 是 %d\n", *ptr);
//
//	/* 三目运算符实例 */
//	a = 10;
//	b = (a == 1) ? 20 : 30;
//	printf("b 的值是 %d\n", b);
//
//	b = (a == 10) ? 20 : 30;
//	printf("b 的值是 %d\n", b);
//
//	int arr[10];//创建数组
//	arr[9] = 10;//实用下标引用操作符。
//	printf("arr[9] 的值是 %d\n", arr[9]);
//
//	test1();
//
//	system("pause");
//	return 0;
//}


