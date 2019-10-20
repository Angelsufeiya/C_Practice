#include <stdio.h>
#include <stdlib.h>

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
#define offsetof(s, m) (size_t)&(((s *)0)->m)

#if 0
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

int main(){
	printf("%d\n", sizeof(struct S1));//12
	printf("%d\n", sizeof(struct S2));//8
	printf("%d\n", sizeof(struct S3));//16
	printf("%d\n", sizeof(struct S4));//32

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