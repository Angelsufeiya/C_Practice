#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*��������Ϸ*/

void game()
{
	int ret = 0;
	int guess = 0;

	ret = rand()%100+1;
	//rand�����������������(0~~32767)������
	while (1)
	{
		printf("������µ�����(1~~100)��");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess< ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}

void menu()
{
	printf("*******************************\n");
	printf("*******************************\n");
	printf("*******     1. play     *******\n");
	printf("*******     0. exit     *******\n");
	printf("*******************************\n");
	printf("*******************************\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//��srand�����������������������������rand������
	//��(unsigned int)time(NULL)��������Ϊ��������������
	//��time�����������ϵͳ��ʱ�䣬���ص���һλ64λ����������
	//��time()��������������һ��ָ��
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}