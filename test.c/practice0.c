# define _CRT_SECURE_NO_WARNINGS
//scanf ��VS�в��������ܣ�Ϊ�˳���Ŀ���ֲ�ԣ����Ǹ����������ϡ�
#include<stdio.h>
#include<stdlib.h>

enum Sex	//ö�ٳ���
{
	male,
	female,
	secret
};

int main()
{
	int num=0;
	enum Sex s = secret;

	scanf("%d", &num);
	printf("%d\n", num);
	printf("%d\n", s);

	system("pause");
	return 0;
}