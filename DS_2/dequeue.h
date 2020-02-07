#ifndef _DEQUEUE_H_
#define _DEQUEUE_H_

#include <stdio.h>
#include <stdlib.h>

#define QUEUENUM 100
typedef int DataType;

typedef struct{
	DataType _data[101];
	DataType * _head;
	DataType * _tail;
	size_t size;
}dequeue;

void dequeueInit(dequeue * qu){
	qu->_head = qu->_tail = qu->_data;
}

#endif //_DEQUEUE_H_