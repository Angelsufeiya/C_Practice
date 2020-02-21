#include "heap.h"

int main(){
	int data[10] = { 29, 72, 48, 53, 45, 30, 18, 36, 15, 35 };
	Heap hp;

	HeapInit(&hp, data, 10);
	HeapPush(&hp, 40);
	HeapPush(&hp, 50);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapSort(&hp);
	putchar('\n');

	HeapPrintS(&hp);
	HeapDestory(&hp);

	return 0;
}