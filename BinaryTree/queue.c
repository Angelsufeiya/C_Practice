#include "queue.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//队列初始化
void QueueInit(Queue* plist)
{
	assert(plist);
	plist->_head = NULL;
	plist->_rear = NULL;
}

//队列销毁
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

//队列删除（头删）
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

//队列插入（尾插）
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

//队列如果是空，返回1；非空，返回0。
int QueueIsEmpty(Queue* plist)
{
	return plist->_head == NULL;
}

//返回队头
QuDataType QueueTop(Queue* plist)
{
	if (QueueIsEmpty(plist))
	{
		return (QuDataType)0;
	}
	return plist->_head->_data;
}