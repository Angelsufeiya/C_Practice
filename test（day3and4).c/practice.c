#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//��չ��
//for (i = a; i <= b; i++)//��i������ֱ���
//for (i = 0; i < n; i++)//a[i]�����λ����
//for (i = n; i; i /= 10)//i % 10�����λ����
//
//for (i = 0; str[i]; i++)//str[i]����ַ�������
//for (cur = head; cur; cur = cur->next)//cur����������
//for (p = v.begin(); p != v.end(); p++)//p�������������C++��


//����1��+2��+3��+����+10��

//int main()
//{
//	int i = 0;
//	int n = 10;
//	int sum = 0, tmp = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		tmp *= i;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//����n�Ľ׳�

//int main()
//{
//	int i = 0;
//	int n , tmp = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp *= i;//tmp = tmp * i;
//	}
//	printf("%d\n", tmp);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//����control+z��ֹͣ��
//		putchar(ch);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


/*
1.����1����5������ǡ�weekday��
2.����6����7������ǡ�weekend��
*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
/*
����1���������һ
����2��������ڶ�
����3�����������
����4�����������
����5�����������
����6�����������
����7�����������
*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n", day);
//		break;
//	case 2:
//		printf("���ڶ�\n", day);
//		break;
//	case 3:
//		printf("������\n", day);
//		break;
//	case 4:
//		printf("������\n", day);
//		break;
//	case 5:
//		printf("������\n", day);
//		break;
//	case 6:
//		printf("������\n", day);
//		break;
//	case 7:
//		printf("������\n", day);
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}

//���1����100֮�������
//�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int i = 0;		//��Ϊ�����һ�ַ���
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//
//int i;
//for (i = 1; i <= 100; i++)
//{
//	if (1 == i % 2)
//		printf("%d ", i);
//}

//scanf("%d", &i);
//if (1 == i % 2)
//	printf("%d������ ", i);
//else
//	printf("%d��ż�� ", i);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int coding = 0;
//	printf("���ѡ��ȥ�ô����𣿣�ѡ�� 1 or 0 ��:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//		printf("��֣�����õ�һ����offer\n");
//	else
//		printf("�������ؼ�������\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	&num;//ȡ��num�ĵ�ַ
//	printf("%p\n", &num);
//	system("pause");
//	return 0;
//}
//


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	auto int a = 10;
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 10;
//	int d = (b = a + 2, a = b + 3, c = a - 10);
//	printf("%d", d);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int Max = 0;
//	//if (a > b)
//	//{
//	//	Max = a;
//	//}
//	//else
//	//{
//	//	Max = b;
//	//}
//	int Max = a > b ? a : b;
//	printf("%d", Max);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//(����)  ǿ������ת��
//	printf("%d", a);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a + 10;// ��Ч�� a += 10 (���ϸ�ֵ��)
//	a += 10;
//	
//	int c = 0;// ~ ��һ�����Ķ����ư�λȡ������������λ��
//	printf("%d\n%d\n\n%d", b, a, ~c);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	char a = 3;
//	char b = 5;
//	char c = a & b;
//	char d = a | b;
//	char e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	char a = 10;
//	char b = a << 1;
//	printf("a = %d\nb = %d", a, b);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	float a = 1.0/ 3.0;
//	printf("%f", a);
//	system("pause");
//	return 0;
//}