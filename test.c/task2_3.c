//��ʮ�����������ֵ

# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, Max = 0, a;
	//��ʱ����ֻ���븺�������������Ϊ0�����ֵΪ2147483647.
    //char i, Max=10000000, a ;
	//��ֵ��Χ-128~127
	//int i, Max=0x80000000, a ;
	//��ֵ��Χ-2147483648~2147483647
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &a);
		if (a > Max)
		{
			Max = a;
		}
	}
	printf("%d", Max);
	system("pause");

	return  0;
}