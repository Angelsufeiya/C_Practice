//�������������Լ��

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, a, b, max, min;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	for (i = 2; i <= min; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			max = i;
		}
		else
		{
			continue;
		}
	}
	printf("���Լ����%d\n", max);
	system("pause");
	return 0;
}

//շת�����
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	while ( c=a % b )
//	{
//		a = b;
//		b = c;
//	}
//	printf("���Լ����%d\n", b);
//	system("pause");
//
//	return 0;
//}