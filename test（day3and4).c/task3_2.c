//����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ��
//������ͨ��һ��ʽ����������tmp,sum
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	double tmp, sum = 0;//, flag = 1;
	for (i = 1; i <= 100; i++)
	{
		tmp = 1.0 / i * (i % 2 ? 1 : -1);//flag;
		sum += tmp;	// sum = sum + tmp;
		//flag *= -1;
	}
	printf("%f\n", sum);//ע��sum��С������ѧ���״��%d��
	system("pause");
	return 0;
}