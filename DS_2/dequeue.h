#ifndef _DEQUEUE_H_
#define _DEQUEUE_H_

//—≠ª∑∂”¡–
#include <stdio.h>
#include <stdlib.h>

#define QUEUENUM 100
typedef int DataType;

typedef struct dequeue{
	DataType _data[QUEUENUM];
	DataType * _head;
	DataType * _tail;
	size_t _size;
}dequeue;

void dequeueInit(dequeue * qu);
void dequeueEmpty(dequeue * qu);
int dequeuePush(dequeue * qu, DataType x);
int dequeuePop(dequeue * qu);
DataType dequequeFront(dequeue * qu);
DataType dequequeBack(dequeue * qu);
int dequeueIsEmpty(dequeue * qu);

#endif //_DEQUEUE_H_