// 1、无头单向非循环链表增删查改实现 
#ifndef _SLIST_H_
#define _SLIST_H_
/*
链表如何遍历
无头单向非循环链表的遍历
for(cur = head; cur; cur = cur->next){
	cur;
}

双向带头循环链表的正向遍历（倒向遍历next改成pre)
for(cur = head->next; cur != head; cur =cur->next){
	cur;
}
*/
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType _data;
	struct SListNode* _next;//只能引用自身的指针类型
}SListNode;

typedef struct SList
{
	SListNode* _head;
}SList;

void SListInit(SList* plist);
void SListDestory(SList* plist);
SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist);

SListNode* SListFind(SList* plist, SLTDataType x);
void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src);
void SListInsertAfter(SListNode* pos, SLTDataType x); 
void SListEraseAfter(SListNode* pos);
void SListRemove(SList* plist, SLTDataType x);
void SListPrint(SList* plist);
void TestSList();

#endif//_SLIST_H_