#include "List.h"

//��ͷ˫��ѭ�������ʼ��
void ListInit(List* plist)
{
	plist->_head = (ListNode *)malloc(sizeof(ListNode));
	memset(&plist->_head->_data, 0, sizeof(LTDataType));
	plist->_head->_next = plist->_head->_prev = plist->_head;
}

//��ͷ˫��ѭ������β��
void ListPushBack(List* plist, LTDataType x)
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	plist->_head->_prev->_next = cur;
	cur->_prev = plist->_head->_prev;
	plist->_head->_prev = cur;
	cur->_next = plist->_head;
}

//��ͷ˫��ѭ������βɾ
void ListPopBack(List* plist)
{
	ListNode *tmp = plist->_head->_prev;

	//��ֻʣ��ͷ�ڵ㣬����ɾ
	if (tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
	}
}

//��ͷ˫��ѭ������ͷ��
void ListPushFront(List* plist, LTDataType x)
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	plist->_head->_next->_prev = cur;
	cur->_next = plist->_head->_next;
	plist->_head->_next = cur;
	cur->_prev = plist->_head;
}

//��ͷ˫��ѭ������ͷɾ
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

//��ͷ˫��ѭ�������ӡ
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

//��ͷ˫��ѭ����������
void ListDestroy(List* plist)
{
	ListNode *tmp = plist->_head->_next;

	//��ͷɾ��ʽ���ɾ�ڵ�
	while (tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
		tmp = plist->_head->_next;
	}
	free(plist->_head);//�ͷ�ͷ�ڵ�
	plist->_head = NULL;//��ͷ�ڵ��ÿ�
}