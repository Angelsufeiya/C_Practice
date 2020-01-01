#ifndef _MailList_H
#define _MailList_H
//����һ�����ͷ�ļ���

#define PERSPACE 100
#define FILENAME "maillist.txt"

enum{
	ADD_MSG = 1,
	DELETE_MSG,
	SEARCH_MSG,
	CHANGE_MSG,
	DISPLAY_MSG,
	EMPTY_MSG,
	SAVE_FILE
};

//�ṹ�� struct MailList ������
struct MailList{
	char name[50];	//����
	char gender;	//�Ա�
	char telnum[30];//�绰
	char addr[200];	//סַ
	int age;		//����
};

//�����ṹ��MailLists
typedef struct{
	struct MailList * allMsg;//�����ṹ����� allMsg
	int count;
	int limit;
}MailLists;

void inputData(struct MailList * oneData);
void initMailList(MailLists * data);
void destoryMailList(MailLists * data);
void addMailList(MailLists * data, struct MailList oneData);
void searchData(MailLists data, char * find, int * searchres);
void deleteOneData(MailLists * data, int n);
void outputData(MailLists data);
void outputSearchData(MailLists data, int * outputdata);
int catchOneData(MailLists data, char *find);

#endif /* _MailList_H */