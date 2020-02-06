#include "List.h"

//带头双向循环链表初始化
void ListInit(List* plist)
{
	plist->_head = (ListNode *)malloc(sizeof(ListNode));
	memset(&plist->_head->_data, 0, sizeof(LTDataType));
	plist->_head->_next = plist->_head->_prev = plist->_head;
}

//带头双向循环链表尾插
void ListPushBack(List* plist, LTDataType x)
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	plist->_head->_prev->_next = cur;
	cur->_prev = plist->_head->_prev;
	plist->_head->_prev = cur;
	cur->_next = plist->_head;
}

//带头双向循环链表尾删
void ListPopBack(List* plist)
{
	ListNode *tmp = plist->_head->_prev;

	//若只剩下头节点，则不用删
	if (tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
	}
}

//带头双向循环链表头插
void ListPushFront(List* plist, LTDataType x)
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	plist->_head->_next->_prev = cur;
	cur->_next = plist->_head->_next;
	plist->_head->_next = cur;
	cur->_prev = plist->_head;
}

//带头双向循环链表头删
void ListPopFront(List* plist)
{
	ListNode *tmp = plist->_head->_next;

	if (tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
	}
}

//带头双向循环链表打印
void ListPrint(List* plist)
{
	ListNode * cur;
	printf("head<-->");
	for (cur = plist->_head->_next; cur != plist->_head; cur = cur->_next)
	{
		printf("%d<-->", cur->_data);
	}
	printf("head\n");
}

//带头双向循环链表销毁
void ListDestroy(List* plist)
{
	ListNode *tmp = plist->_head->_next;

	//按头删方式逐次删节点
	while (tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
		tmp = plist->_head->_next;
	}
	free(plist->_head);//释放头节点
	plist->_head = NULL;//将头节点置空
}