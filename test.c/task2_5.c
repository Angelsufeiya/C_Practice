#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//�������������Լ��

//int main()
//{
//	int i, a, b;
//	int max = 1, min;
//
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	if (a > b)	//�ж��������������Ĵ�С
//	{
//		min = b;
//	}
//	else
//	{
//		min = a;
//	}
//	for (i = 2; i <= min; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			max = i;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	printf("���Լ����%d\n", max);
//
//	system("pause");
//	return 0;
//}

//շת�����

//int main()
//{
//	int a, b, c;
//
//	printf("��������������");
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

//�������

int main(){
	int a, b, c;

	printf("��������������");
	scanf("%d%d", &a, &b);

	if (a > b){
		//�����κθı�
	}
	else{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	if (a % b == 0){
		printf("���Լ����%d\n", b);
	}
	else{
		while (a % 2 == 0 && b % 2 == 0) {
			a /= 2;
			b /= 2;
		}

		while (1){
			c = a - b;
			if (b == c){
				break;
			}
			a = b;
			b = c;
			if (a > b){
				//�����κθı�
			}
			else{
				a = a + b;
				b = a - b;
				a = a - b;
			}
		}
		printf("���Լ����%d\n", b);
	}

	system("pause");
	return 0;
}