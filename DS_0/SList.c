#include "SList.h"

void SListInit(SList* plist){
	assert(plist);
	plist->_head = NULL;
}
void SListDestory(SList* plist){
	SListNode * tmp;
	while (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//链表头插
void SListPushFront(SList* plist, SLTDataType x){
	assert(plist);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = plist->_head;
	plist->_head = cur;//plist->_head为新链表的头
}

//链表头删
void SListPopFront(SList* plist){
	assert(plist);

	SListNode * tmp;
	if (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//链表的打印
void SListPrint(SList* plist){
	assert(plist);

	SListNode * cur;
	for (cur = plist->_head; cur; cur = cur->_next){
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}

//链表查找节点
SListNode* SListFind(SList* plist, SLTDataType x){
	assert(plist);
	SListNode * cur;

	for (cur = plist->_head; cur; cur = cur->_next){
		if (cur->_data == x){
			return cur;
		}
	}
	return NULL;
}

// 在pos的后面进行插入
void SListInsertAfter(SListNode* pos, SLTDataType x){
	assert(pos);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;

}

//在cur的前面插入
void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src)
{
	assert(plist);

	SListNode * cur;
	SListNode * newdata = (SListNode *)malloc(sizeof(SListNode));

	if (plist->_head->_data == x)//比较头节点
	{
		SListPushFront(plist, src);
		return;
	}
	for (cur = plist->_head; cur->_next; cur = cur->_next)
	{
		if (cur->_next->_data == x)//比较下一个的数据
		{
			break;
		}
	}
	newdata->_data = src;
	newdata->_next = cur->_next;
	cur->_next = newdata;
}

//删除pos后的结点
void SListEraseAfter(SListNode* pos){
	assert(pos);
	
	SListNode * tmp = pos->_next;
	pos->_next = tmp->_next;
	free(tmp);
}

//反转链表
void SListReverse(SList * plist){
	assert(plist->_head);

#if 0
	SListNode * tmp = plist->_head->_next;
	SListNode * cur = plist->_head;
	while(tmp){
		cur->_next = tmp->_next;
		tmp->_next = plist->_head;

		plist->_head = tmp;
		tmp = cur->_next;
	}
#else
	SListNode * tmp = plist->_head->_next; //记录next
	SListNode * cur = plist->_head;
	cur->_next = NULL; //断链，将头结点和他的next断开，有tmp记录，所以能找到
	while (tmp) //每次循环都要完成断链，然后和旧头重新成链的过程，当旧链结束(tmp为空)跳出循环
	{
		plist->_head = tmp; //换新头，tmp位置会成为新的头，旧头成了它的第一个节点
		tmp = tmp->_next; //记录下次循环中tmp 的位置，因为tmp在这次循环中已经用完了，而且后面马上就要断链，所以必须在这里记录
		plist->_head->_next = cur; //断链，与旧头形成新链
		cur = plist->_head; //记录旧头的位置，方便下次循环成链
	}
#endif
}