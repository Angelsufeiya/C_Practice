#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

/*
输入1，输出星期一
输入2，输出星期二	
输入3，输出星期三
输入4，输出星期四
输入5，输出星期五
输入6，输出星期六
输入7，输出星期天
*/

int main()
{
	int day = 0;
	scanf("%d", day);
	switch (day)
	{
	case 1:
		printf("星期一\n", day);
		break;
	case 2:
		printf("星期二\n", day);
		break;
	case 3:
		printf("星期三\n", day);
		break;
	case 4:
		printf("星期四\n", day);
		break;
	case 5:
		printf("星期五\n", day);
		break;
	case 6:
		printf("星期六\n", day);
		break;
	case 7:
		printf("星期天\n", day);
		break;
	}
	system("pause");
	return 0;
}

//输出1——100之间的奇数
//判断一个数是否为奇数

//int main()
//{
//	int i = 0;		//更为巧妙的一种方法
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//
	//int i;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (1 == i % 2)
	//		printf("%d ", i);
	//}

	//scanf("%d", &i);
	//if (1 == i % 2)
	//	printf("%d是奇数 ", i);
	//else
	//	printf("%d是偶数 ", i);
	//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int coding = 0;
//	printf("你会选择去敲代码吗？（选择 1 or 0 ）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//		printf("坚持，你会拿到一个好offer\n");
//	else
//		printf("放弃，回家卖红薯\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	&num;//取出num的地址
//	printf("%p\n", &num);
//	system("pause");
//	return 0;
//}
//


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	auto int a = 10;
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 10;
//	int d = (b = a + 2, a = b + 3, c = a - 10);
//	printf("%d", d);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int Max = 0;
//	//if (a > b)
//	//{
//	//	Max = a;
//	//}
//	//else
//	//{
//	//	Max = b;
//	//}
//	int Max = a > b ? a : b;
//	printf("%d", Max);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//(类型)  强制类型转换
//	printf("%d", a);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a + 10;// 等效于 a += 10 (复合赋值符)
//	a += 10;
//	
//	int c = 0;// ~ 对一个数的二进制按位取反（包括符号位）
//	printf("%d\n%d\n\n%d", b, a, ~c);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	char a = 3;
//	char b = 5;
//	char c = a & b;
//	char d = a | b;
//	char e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	char a = 10;
//	char b = a << 1;
//	printf("a = %d\nb = %d", a, b);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	float a = 1.0/ 3.0;
//	printf("%f", a);
//	system("pause");
//	return 0;
//}