//求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身,
//，如；153＝1^3＋5^3＋3^3 ? ，则153是一个“水仙花数”。
//
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、
//阿姆斯壮数或阿姆斯特朗数（Armstrong number），
//是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，
//其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//1.太幼稚的算法
//int main()
//{
//	int i = 0;
//	int a = 0, b = 0, c = 0;
//	for (i = 0; i < 10; i++)
//	{
//		c = i % 10;
//		if (i == c)
//			printf("%d\n", i);
//	}
//	for (i = 10; i < 100; i++)
//	{
//		c = i % 10;
//		b = i / 10;
//		if (i == b*b + c*c)
//			printf("%d\n", i);
//	}
//	for (i = 100; i < 1000; i++)
//	{
//		c = i % 10;
//		b = (i / 10) % 10;
//		a = i / 100;
//		if (i == a*a*a + b*b*b + c*c*c)//切记，“==”才是“等于号”
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}


int main()
{
	int i, j;
	int sum = 0, count = 0;
	int tmp[10] = { 0 };//定义数组的长度（只能长，不能短）

	for (i = 0; i < 100000; i++)
	{
		for (j = i; j; j /= 10)//数位遍历（十进制）
		{
			tmp[count] = j % 10;
			count++;
		}
		for (j = 0; j < count; j++)
		{
			sum += (int)pow(tmp[j], count);  //求n次方的一个函数pow，语法：double pow(double x,double y)
											 //(前面(tmp[j]）是底数，后面(count)是次幂)
											 //"+="是因为pow一次只能算一位底数;(int)用于强制类型转换
		}
		if (i == sum)
			printf("%d\n", i);
		count = sum = 0;
	}

	system("pause");
	return 0;
}
