//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;	//count = count + 1;
		}
		if (i / 10 == 9)//�˴�ifǰ�������else������99����ֻӦ����һ�Σ�����
		{
			count++;
		}
	}
	printf("������ %d �ε�9", count);
	system("pause");
	return 0;
}