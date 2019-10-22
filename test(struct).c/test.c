#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
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
	printf("S1 结构中的 c1 偏移 = %d 字节。\n", offsetof(struct S1, c1));//0
	printf("S1 结构中的 i 偏移 = %d 字节。\n", offsetof(struct S1, i));//4
	printf("S1 结构中的 c2 偏移 = %d 字节。\n", offsetof(struct S1, c2));//8
	printf("S1 结构占%d 字节的空间\n", sizeof(struct S1));//12
	printf("S2 结构占%d 字节的空间\n", sizeof(struct S2));//8
	printf("S3 结构占%d 字节的空间\n", sizeof(struct S3));//16
	printf("S4 结构占%d 字节的空间\n", sizeof(struct S4));//32

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

int main_(){
	int i;                   // 定义一个int类型的变量i
	size_t size = sizeof(i);
	// 用sizeof操作得到变量i的大小，这是一个size_t类型的值
	// 可以用来对一个size_t类型的变量做初始化
	i = (int)size;// size_t类型的值可以转化为int类型的值

	printf("%d", sizeof(i));
	return 0;
}