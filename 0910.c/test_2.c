#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����һ���ṹ����൱�ڴ�����һ���Զ��Ƶ�����
struct Student{
	char name[10];	//��Ա/����/�ֶ�
	int id;
} student;//�������͵�ͬʱ������� student

Func(struct Student* p){
	printf("%d\n", (*p).id);
	printf("%d\n", p->id);
}
//typedef struct Student{
//	char name[10];	//��Ա/����/�ֶ�
//	int id;
//} student;//student�Ǳ���

int main(){
	//������һ������Ϊ struct Student �ı��� s
	struct Student s = {"����", 100};
	struct Student* p = &s;
	s.id = 200;
	strcpy(s.name, "����");
	student.id = 10;

	Func(&s);

	printf("%d\n", s.id);
	printf("%d\n", student.id);
	printf("%s\n", s.name);//�ַ���֮��ĸ�ֵ������ = ��ֻ���� strcpy
	//��ָ�벻�ܽ�����
	printf("%d\n", (*p).id);
	printf("%d\n", p->id);


	system("pause");
	return 0;
}