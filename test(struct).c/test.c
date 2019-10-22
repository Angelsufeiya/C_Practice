#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//typedef _W64 unsigned int   size_t;
//#define offsetof(TYPE,MEMBER) (size_t)&(((TYPE *)0)->MEMBER)

#if 1
struct S1 {
	char c1;
	int i;
	char c2;
};

struct S2 {
	char c1;
	char c2;
	int i;
};

struct S3 {
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

int main0(){
	printf("S1 �ṹ�е� c1 ƫ�� = %d �ֽڡ�\n", offsetof(struct S1, c1));//0
	printf("S1 �ṹ�е� i ƫ�� = %d �ֽڡ�\n", offsetof(struct S1, i));//4
	printf("S1 �ṹ�е� c2 ƫ�� = %d �ֽڡ�\n", offsetof(struct S1, c2));//8
	printf("S1 �ṹռ%d �ֽڵĿռ�\n", sizeof(struct S1));//12
	printf("S2 �ṹռ%d �ֽڵĿռ�\n", sizeof(struct S2));//8
	printf("S3 �ṹռ%d �ֽڵĿռ�\n", sizeof(struct S3));//16
	printf("S4 �ṹռ%d �ֽڵĿռ�\n", sizeof(struct S4));//32

	system("pause");
	return 0;
}
#else

#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct S1{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct S2{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ�� 
int main()
{
	printf("%d\n", sizeof(struct S1)); //6
	printf("%d\n", sizeof(struct S2)); //12
	return 0;
}
#endif

int main_(){
	int i;                   // ����һ��int���͵ı���i
	size_t size = sizeof(i);
	// ��sizeof�����õ�����i�Ĵ�С������һ��size_t���͵�ֵ
	// ����������һ��size_t���͵ı�������ʼ��
	i = (int)size;// size_t���͵�ֵ����ת��Ϊint���͵�ֵ

	printf("%d", sizeof(i));
	return 0;
}