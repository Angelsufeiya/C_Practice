#include "dequeue.h"

void dequeueInit(dequeue * qu){
	qu->_head = qu->_tail = qu->_data;
	qu->_size = 0;
}

void dequeueEmpty(dequeue * qu){
	qu->_head = qu->_tail;
	qu->_size = 0;
}

int dequeuePush(dequeue * qu, DataType x){
	*qu->_tail = x;
	//判断队列是否已满。若没满，则继续++（1.追上就满了 2.尾巴在最后一个元素，头在第一个元素
	if (qu->_tail + 1 == qu->_head ||
		(qu->_tail + 1 - qu->_data == QUEUENUM && qu->_head == qu->_data)){
		return -1;
	}
	qu->_tail++;
	//如果队列循环的实现已满，则重新从头继续（队列循环的实现）
	if (qu->_tail - qu->_data == QUEUENUM){
		qu->_tail = qu->_data;
	}
	qu->_size++;
}

int dequeuePop(dequeue * qu){
	if (dequeueIsEmpty(qu)){
		return -1;
	}
	qu->_head++;
	//如果队列循环的实现已满，则重新从头继续（队列循环的实现）
	if (qu->_head - qu->_data == QUEUENUM){
		qu->_head = qu->_data;
	}
	qu->_size--;
	return 0;
}

DataType dequequeFront(dequeue * qu){
	return *qu->_head;
}

DataType dequequeBack(dequeue * qu){
	if (qu->_tail == qu->_data){
		return qu->_data[QUEUENUM - 1];
	}
	return qu->_tail[-1];
}

int dequeueIsEmpty(dequeue * qu){
	return qu->_head == qu->_tail;
}

size_t dequeueSize(dequeue * qu){
	return qu->_size;
}