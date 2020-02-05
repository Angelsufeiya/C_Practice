#include "seqList.h"
#include "SList.h"

void listtest(){
	SList test;
	SListInit(&test);
	SListPushFront(&test, 1);
	SListPushFront(&test, 2);
	SListPushFront(&test, 4);
	SListPushFront(&test, 6);
	SListPushFront(&test, 9);
	SListPrint(&test);

	SListPopFront(&test);
	SListPrint(&test);

	SListInsertAfter(SListFind(&test, 4), 8);
	SListPrint(&test);

	SListEraseAfter(SListFind(&test, 8));
	SListPrint(&test);

	SListInsertFront(&test, 6, 8);
	SListPrint(&test);

	SListReverse(&test);
	SListPrint(&test);

	printf("倒数第%d的节点数值为%d\n", 1, SListKtfTotail(&test, 1)->_data);

	test._head->_next->_next->_next->_next->_next = test._head->_next;
	printf("%d\n", SListDetectCycle(&test)->_data);
	SListPrint(&test);
	/*
	SList test2;
	SListInit(&test2);
	SListPushFront(&test2, 2);
	SListPushFront(&test2, 3);
	SListPushFront(&test2, 5);
	test2._head->_next->_next->_next = test._head->_next;
	SListNode * tmp = getIntersectionNode(&test, &test2);
	if (tmp)
	{
	SListPrint(&test);
	SListPrint(&test2);
	printf("相遇节点的值为%d\n", tmp->_data);
	}
	else
	{
	printf("没有相交\n");
	}
	SListDestory(&test2);
	*/

	SListDestory(&test);
}

int main(){
	listtest();
	return 0;
}


int main_0(){
	SeqList test;

	SeqListInit(&test, 10);

	SeqListPushBack(&test, 1);
	SeqListPushBack(&test, 2);
	SeqListPushBack(&test, 3);
	SeqListPushBack(&test, 4);
	SeqListPushBack(&test, 5);
	SeqListPushBack(&test, 6);
	SeqListPushBack(&test, 7);
	SeqListPushBack(&test, 8);
	SeqListPushBack(&test, 9);
	SeqListPushFront(&test, 10);
	SeqListPushFront(&test, 10);
	SeqListPushFront(&test, 10);

	SeqListPopBack(&test);
	SeqListPopBack(&test); 
	SeqListPopBack(&test);
	SeqListPopBack(&test);

	SeqListInsert(&test, 1, 16);
	SeqListErase(&test, 2);
	SeqListRemove(&test, 4);
	SeqListModify(&test, 5, 6);

	SeqListBubbleSort(&test);
	printf("下标为%d\n", SeqListBinaryFind(&test, 6));

	SeqListPrint(&test);

	SeqListDestory(&test);
	return 0;
}