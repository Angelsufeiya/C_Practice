// 1����ͷ�����ѭ��������ɾ���ʵ�� 
#ifndef _SLIST_H_
#define _SLIST_H_
/*
������α���
��ͷ�����ѭ������ı���
for(cur = head; cur; cur = cur->next){
	cur;
}

˫���ͷѭ�����������������������next�ĳ�pre)
for(cur = head->next; cur != head; cur =cur->next){
	cur;
}
*/
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

//����һ���ṹ��
typedef struct SListNode
{
	SLTDataType _data;// _ ��������һ�������������
	struct SListNode* _next;//ֻ�����������ָ������
}SListNode;

//���������壨��SList����һ������headΪһ���ڵ㣩
typedef struct SList
{
	SListNode* _head;
}SList;

void SListInit(SList* plist);
void SListDestory(SList* plist);


void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist);
SListNode* SListFind(SList* plist, SLTDataType x);
void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src);
void SListInsertAfter(SListNode* pos, SLTDataType x); 
void SListEraseAfter(SListNode* pos);
void SListPrint(SList* plist);
void SListReverse(SList * plist);
SListNode* SListKtfTotail(SList* plist, unsigned int k);

void TestSList();

SListNode * getIntersectionNode(SList* listA, SList* listB);
//void SListInsertFront(SList* plist, SLTDataType x);
int SListHasCycle(SList* plist);
SListNode * SListDetectCycle(SList* plist);

#endif//_SLIST_H_