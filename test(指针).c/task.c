#include <stdio.h>

int main41(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1)); //2 5
	return 0;
}

int main42()
{
	int a = 6;
	int *p = &a;
	printf("%p\n", p);		//0098F97C
	printf("%p\n", p + 0x1);//0098F980
	printf("%p\n", (unsigned long)p + 0x1);//0098F97D
	printf("%p\n", (unsigned int*)p + 0x1);//0098F980
	//0x1 == 1
	//指针指向的基类型不一样，虽然加的单元数是一样的，但字节数是不一样的
	return 0;
}

int main43() {
	int a[4] = { 1, 2, 3, 4 };
	//(小端模式）00000001 00000000 00000000 00000000 00000010 00000000 00000000 00000000
	//(小端模式）00000011 00000000 00000000 00000000 00000100 00000000 00000000 00000000
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	//(int)a + 1;指向了整个数组内存块的第二个地址，即指向a[0]第二个字节处的地址
	printf("%x,%x", ptr1[-1], *ptr2); //4 2000000 = 0x02000000
	return 0;
}

int main4(int argc, char * argv[])
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	//逗号表达式 
	//int a[3][2] = { 1, 3, 5, 0, 0, 0 };
	int *p;
	p = a[0];
	printf("%d", p[0]);// 1
	return 0;
}

int main5() {
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%d\n", &p[4][2] - &a[4][2]);//-4
	//p[4][2]偏离首元素位置为18;a[4][2]偏离首元素位置为22
	return 0;
}

int main6() {
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
	return 0;
}

int main7() {
	char *a[] = { "work", "at", "alibaba" };
	char **pa = a;
	pa++;
	printf("%s\n", *pa);//at
	return 0;
}

int main8() {
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char **cp[] = { c + 3, c + 2, c + 1, c };
	char ***cpp = cp;
	printf("%s\n", **++cpp);		//POINT
	printf("%s\n", *--*++cpp + 3);	//ER
	printf("%s\n", *cpp[-2] + 3);	//ST cpp[-2] = *(cpp-2)
	printf("%s\n", cpp[-1][-1] + 1);//EW cpp[-1][-1] = *(*(cpp - 1)- 1) + 1
	return 0;
}

int main()
{
	char *str[] = { "welcome", "to", "Fortemedia", "Nanjing" };
	char**p = str + 1;
	str[0] = (*p++) + 2;
	str[1] = *(p + 1);
	str[2] = p[1] + 3;
	str[3] = p[0] + (str[2] - str[1]);
	printf("%s\n", str[0]);//to后的'\0'
	printf("%s\n", str[1]);//Nanjing
	printf("%s\n", str[2]);//jing
	printf("%s\n", str[3]);//g
	
	return 0;
}