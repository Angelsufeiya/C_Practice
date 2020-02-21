#ifndef _HEAP_H
#define _HEAP_H

#include <stdio.h>
#include <stdlib.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* data;
	int _size;
	int _capacity;
}Heap;

void adjustDown(Heap* hp, int m);
void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp);
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);

void HeapSort(Heap* hp);
void HeapPrint(Heap* hp);
void HeapPrintS(Heap* hp);

#endif //_HEAP_H