#include <stdio.h>
#include <stdlib.h>

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
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

#pragma pack(1)//设置默认对齐数为1
struct S1{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
#pragma pack(8)//设置默认对齐数为8
struct S2{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认 
int main()
{
	printf("%d\n", sizeof(struct S1)); //6
	printf("%d\n", sizeof(struct S2)); //12
	return 0;
}
#endif