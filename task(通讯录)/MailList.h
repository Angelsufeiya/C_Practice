#ifndef _MailList_H
#define _MailList_H
//声明一般放在头文件里

enum{
	Add = 1,
	Delete,
	Search,
	Change,
	Display,
	Empty,
};

//做一个全局的表
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
#endif /* _MailList_H */