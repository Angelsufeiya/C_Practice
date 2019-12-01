#ifndef _MailList_H
#define _MailList_H
//����һ�����ͷ�ļ���

enum{
	Add = 1,
	Delete,
	Search,
	Change,
	Display,
	Empty,
};

//��һ��ȫ�ֵı�
struct MailList{
	char name[50];
	char gender;
	char telnum[30];
	char addr[200];
	int age;
};

extern struct MailList g_AllMsg[1000];
extern int g_count;

void inputData();
void outputData();
void searchData(char * find);
void outputSearchdata(int * data);
int catchOneData(char * find);
void deleteOneData(int n);
#endif /* _MailList_H */