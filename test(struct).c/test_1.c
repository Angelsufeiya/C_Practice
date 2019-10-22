#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//struct STU
//{
//	 char name[100];
//	 int age;
//};
//
//struct STU s = { "Tom", 20 };
//
////结构体传参
//void print1(struct STU s){
//	strcpy(s.name, "Jake");
//	s.age = 1000;
//}
////结构体地址传参
//void print2(struct STU* ps) {
//	strcpy(ps->name, "Jake");
//	ps->age = 1000;
//}
//
//int main() {
//	//struct STU s;
//	//strcpy(s.name, "Tom");
//	//s.age = 18;
//	print1(s); //传结构体
//	printf("%s\n", s.name);
//	print2(&s); //传地址 
//	printf("%s\n", s.name);
//	return 0;
//}

//struct A {
//	//char a;
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main(){
//	printf("%d\n", sizeof(struct A)); //位段的内存分配 (8)
//	return 0;
//}

struct S {
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
struct S s = { 0 };
int main1(){
	s.a = 10;//1010
	s.b = 12;//1100
	s.c = 3;//0011
	s.d = 4;//0100
	printf("%d\n", sizeof(struct S));//3[62(1100 010) 3(00011) 4(0100)]
	printf("%d %d %d %d\n", s.a, s.b, s.c, s.d);//2(10) -4(1100) 3(00011) 4(0100)

	return 0;
}