//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	scanf("%d", &n);
	int sum = 0, tmp = 0;
	for (i = 0; i < 5; i++)
	{
		tmp = n + tmp * 10;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}