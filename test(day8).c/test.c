#include <stdio.h>
#include <stdlib.h>

//��1��2��3��������9��9�����ֳ��飬�ֱ����3��3λ������ʹ��������λ������1��2��3�ı�����
//�������������������3��3λ��

int judge(int a, int  b, int  c) {
	int i = 0;

	i |= 1 << a % 10;
	i |= 1 << a / 10 % 10;
	i |= 1 << a / 100;

	i |= 1 << b % 10;
	i |= 1 << b / 10 % 10;
	i |= 1 << b / 100;

	i |= 1 << c % 10;
	i |= 1 << c / 10 % 10;
	i |= 1 << c / 100;

	return i == 0x3fe;
}

int main0(){
	int a, b, c;
	for (a = 123; a < 329; a++){
		for (b = 246; b < 658; b++){
			for (c = 369; c < 987; c++){
				if (judge(a, b, c) && b == 2 * a &&c == 3 * a){
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}

	system("pause");
	return 0;
}

//int main(){
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
//	int *q[4];
//	int k;
//
//	for (k = 0; k < 4; k++){
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//
//	c = a + b;
//	printf("Line 1 - c ��ֵ�� %d\n", c);
//	c = a - b;
//	printf("Line 2 - c ��ֵ�� %d\n", c);
//	c = a * b;
//	printf("Line 3 - c ��ֵ�� %d\n", c);
//	c = b / a;
//	printf("Line 4 - c ��ֵ�� %d\n", c);
//	c = b % a;
//	printf("Line 5 - c ��ֵ�� %d\n", c);
//	c = a++;  // ��ֵ���ټ� 1 ��c Ϊ 10��a Ϊ 11
//	printf("Line 6 - c ��ֵ�� %d, a ��ֵ�� %d\n", c, a);
//	c = a--;  // ��ֵ���ټ� 1 ��c Ϊ 11 ��a Ϊ 10
//	printf("Line 7 - c ��ֵ�� %d, a ��ֵ�� %d\n", c, a);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int c;
//
//	c = a++;
//	printf("�ȸ�ֵ�����㣺\n");
//	printf("Line 1 - c ��ֵ�� %d, a ��ֵ�� %d\n", c, a);
//	a = 10;
//	c = a--;
//	printf("Line 2 - c ��ֵ�� %d, a ��ֵ�� %d\n", c, a);
//
//	a = 10;
//	c = ++a;
//	printf("�������ֵ��\n");
//	printf("Line 3 - c ��ֵ�� %d, a ��ֵ�� %d\n", c, a);
//	a = 10;
//	c = --a;
//	printf("Line 4 - c ��ֵ�� %d, a ��ֵ�� %d\n", c, a);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	unsigned int a = 60;    /* 60 = 0011 1100 */
//	unsigned int b = 13;    /* 13 = 0000 1101 */
//	int c = 0;
//
//	c = a & b;       /* 12 = 0000 1100 */
//	printf("Line 1 - c ��ֵ�� %d\n", c);
//	c = a | b;       /* 61 = 0011 1101 */
//	printf("Line 2 - c ��ֵ�� %d\n", c);
//	c = a ^ b;       /* 49 = 0011 0001 */
//	printf("Line 3 - c ��ֵ�� %d\n", c);
//	c = ~a;          /*-61 = 1100 0011 */
//	printf("Line 4 - c ��ֵ�� %d\n", c);
//	c = a << 2;     /* 240 = 1111 0000 */
//	printf("Line 5 - c ��ֵ�� %d\n", c);
//	c = a >> 2;     /* 15 = 0000 1111 */
//	printf("Line 6 - c ��ֵ�� %d\n", c);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	if (a == b){
//		printf("Line 1 - a ���� b\n");
//	}
//	else{
//		printf("Line 1 - a ������ b\n");
//	}
//	if (a < b){
//		printf("Line 2 - a С�� b\n");
//	}
//	else{
//		printf("Line 2 - a ��С�� b\n");
//	}
//	if (a > b){
//		printf("Line 3 - a ���� b\n");
//	}
//	else{
//		printf("Line 3 - a ������ b\n");
//	}
//
//	/* �ı� a �� b ��ֵ */
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	if (b <= a){
//		printf("Line 4 - b С�ڻ���� a\n");
//	}
//	if (a >= b){
//		printf("Line 5 - a ���ڻ���� b\n");
//	}
//
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	int c = 0;
//
//	c = a;
//	printf("Line 1 - =  �����ʵ����c ��ֵ = %d\n", c);
//	c += a;
//	printf("Line 2 - += �����ʵ����c ��ֵ = %d\n", c);
//	c -= a;
//	printf("Line 3 - -= �����ʵ����c ��ֵ = %d\n", c);
//	c *= a;
//	printf("Line 4 - *= �����ʵ����c ��ֵ = %d\n", c);
//	c /= a;
//	printf("Line 5 - /= �����ʵ����c ��ֵ = %d\n", c);
//
//	c = 201;
//	c %= a;
//	printf("Line 6 - %= �����ʵ����c ��ֵ = %d\n", c);
//	c <<= 2;
//	printf("Line 7 - <<= �����ʵ����c ��ֵ = %d\n", c);
//	c >>= 2;
//	printf("Line 8 - >>= �����ʵ����c ��ֵ = %d\n", c);
//	c &= 2;
//	printf("Line 9 - &= �����ʵ����c ��ֵ = %d\n", c);
//	c ^= 2;
//	printf("Line 10 - ^= �����ʵ����c ��ֵ = %d\n", c);
//	c |= 2;
//	printf("Line 11 - |= �����ʵ����c ��ֵ = %d\n", c);
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void test1()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int a = 4;
//	short b;
//	double c;
//	int* ptr;
//
//	/* sizeof �����ʵ�� */
//	printf("Line 1 - ���� a �Ĵ�С = %lu\n", sizeof(a));
//	printf("Line 2 - ���� b �Ĵ�С = %lu\n", sizeof(b));
//	printf("Line 3 - ���� c �Ĵ�С = %lu\n", sizeof(c));
//
//	/* & �� * �����ʵ�� */
//	ptr = &a;    /* 'ptr' ���ڰ��� 'a' �ĵ�ַ */
//	printf("a ��ֵ�� %d\n", a);
//	printf("*ptr �� %d\n", *ptr);
//
//	/* ��Ŀ�����ʵ�� */
//	a = 10;
//	b = (a == 1) ? 20 : 30;
//	printf("b ��ֵ�� %d\n", b);
//
//	b = (a == 10) ? 20 : 30;
//	printf("b ��ֵ�� %d\n", b);
//
//	int arr[10];//��������
//	arr[9] = 10;//ʵ���±����ò�������
//	printf("arr[9] ��ֵ�� %d\n", arr[9]);
//
//	test1();
//
//	system("pause");
//	return 0;
//}


