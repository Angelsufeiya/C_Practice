//1.������A�е����ݺ�����B�е����ݽ��н�����������һ����

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void printlog(int a[],int n)		//��ӡ��������Ҫ���ݡ�����
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int i, tmp;

	printlog(a, 10);
	printlog(b, 10);

	for (i = 0; i < 10; i++)	//�������
	{	
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}

	printlog(a, 10);
	printlog(b, 10);

	system("pause");
	return 0;
}