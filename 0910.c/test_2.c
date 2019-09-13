#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义一个结构体就相当于创建了一个自定制的类型
struct Student{
	char name[10];	//成员/属性/字段
	int id;
} student;//声明类型的同时定义变量 student

Func(struct Student* p){
	printf("%d\n", (*p).id);
	printf("%d\n", p->id);
}
//typedef struct Student{
//	char name[10];	//成员/属性/字段
//	int id;
//} student;//student是别名

int main(){
	//创建了一个类型为 struct Student 的变量 s
	struct Student s = {"张三", 100};
	struct Student* p = &s;
	s.id = 200;
	strcpy(s.name, "李四");
	student.id = 10;

	Func(&s);

	printf("%d\n", s.id);
	printf("%d\n", student.id);
	printf("%s\n", s.name);//字符串之间的赋值不能用 = ，只能用 strcpy
	//空指针不能解引用
	printf("%d\n", (*p).id);
	printf("%d\n", p->id);


	system("pause");
	return 0;
}