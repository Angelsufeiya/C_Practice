#include "queue.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//���г�ʼ��
void QueueInit(Queue* plist)
{
	assert(plist);
	plist->_head = NULL;
	plist->_rear = NULL;
}

//��������
void QueueDestory(Queue* plist)
{
	QueueNode * tmp;
	while (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//����ɾ����ͷɾ��
void QueuePop(Queue* plist)
{
	assert(plist);

	QueueNode * tmp;
	if (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//���в��루β�壩
void QueuePush(Queue* plist, QuDataType x)
{
	QueueNode * cur = (QueueNode *)malloc(sizeof(QueueNode));
	cur->_data = x;
	cur->_next = NULL;

	if (QueueIsEmpty(plist))
	{
		plist->_head = plist->_rear = cur;
		return;
	}

	plist->_rear->_next = cur;
	plist->_rear = cur;
}

//��������ǿգ�����1���ǿգ�����0��
int QueueIsEmpty(Queue* plist)
{
	return plist->_head == NULL;
}

//���ض�ͷ
QuDataType QueueTop(Queue* plist)
{
	if (QueueIsEmpty(plist))
	{
		return (QuDataType)0;
	}
	return plist->_head->_data;
}