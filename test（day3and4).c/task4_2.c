//���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ�������,
//���磻153��1^3��5^3��3^3 ? ����153��һ����ˮ�ɻ�������
//
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ����������������
//��ķ˹׳����ķ˹��������Armstrong number����
//��ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ�����
//�������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//1.̫���ɵ��㷨
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
//		if (i == a*a*a + b*b*b + c*c*c)//�мǣ���==�����ǡ����ںš�
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}


int main()
{
	int i, j;
	int sum = 0, count = 0;
	int tmp[10] = { 0 };//��������ĳ��ȣ�ֻ�ܳ������̣ܶ�

	for (i = 0; i < 100000; i++)
	{
		for (j = i; j; j /= 10)//��λ������ʮ���ƣ�
		{
			tmp[count] = j % 10;
			count++;
		}
		for (j = 0; j < count; j++)
		{
			sum += (int)pow(tmp[j], count);  //��n�η���һ������pow���﷨��double pow(double x,double y)
											 //(ǰ��(tmp[j]���ǵ���������(count)�Ǵ���)
											 //"+="����Ϊpowһ��ֻ����һλ����;(int)����ǿ������ת��
		}
		if (i == sum)
			printf("%d\n", i);
		count = sum = 0;
	}

	system("pause");
	return 0;
}
