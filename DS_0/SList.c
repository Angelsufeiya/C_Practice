#include "SList.h"

//链表初始化
void SListInit(SList* plist){
	assert(plist);
	plist->_head = NULL;
}

//链表销毁
void SListDestory(SList* plist){
	SListNode * tmp;
	while (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//链表头插
void SListPushFront(SList* plist, SLTDataType x){
	assert(plist);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = plist->_head;
	plist->_head = cur;//plist->_head为新链表的头
}

//链表头删
void SListPopFront(SList* plist){
	assert(plist);

	SListNode * tmp;
	if (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//链表的打印
void SListPrint(SList* plist){
	assert(plist);

	SListNode * cur;
	for (cur = plist->_head; cur; cur = cur->_next){
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}

//链表查找节点
SListNode* SListFind(SList* plist, SLTDataType x){
	assert(plist);
	SListNode * cur;

	for (cur = plist->_head; cur; cur = cur->_next){
		if (cur->_data == x){
			return cur;
		}
	}
	return NULL;
}

// 在pos的后面进行插入
void SListInsertAfter(SListNode* pos, SLTDataType x){
	assert(pos);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;

}

//在x的前面插入
void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src)
{
	assert(plist);

	SListNode * cur;
	SListNode * newdata = (SListNode *)malloc(sizeof(SListNode));

	if (plist->_head->_data == x)//比较头节点
	{
		SListPushFront(plist, src);
		return;
	}
	for (cur = plist->_head; cur->_next; cur = cur->_next)
	{
		if (cur->_next->_data == x)//比较下一个的数据
		{
			break;
		}
	}
	newdata->_data = src;
	newdata->_next = cur->_next;
	cur->_next = newdata;
}

//删除pos后的结点
void SListEraseAfter(SListNode* pos){
	assert(pos);
	
	SListNode * tmp = pos->_next;
	pos->_next = tmp->_next;
	free(tmp);
}

//反转链表
void SListReverse(SList * plist){
	assert(plist->_head);

#if 0
	SListNode * tmp = plist->_head->_next;
	SListNode * cur = plist->_head;
	while(tmp){
		cur->_next = tmp->_next;
		tmp->_next = plist->_head;

		plist->_head = tmp;
		tmp = cur->_next;
	}
#elif 0
	//创建一条新链，遍历旧链，不断对新链做头插，销毁旧链，将旧链的头挂到新链的头上
	SList * reve = (SList *)malloc(sizeof(SList));
	SListInit(reve);
	SListNode* cur;
	for (cur = plist->_head; cur; cur = cur->_next)
	{
		SListPushFront(reve, cur->_data);
	}
	SListDestory(plist);
	plist->_head = reve->_head;
#elif 0
	SListNode * tmp = plist->_head->_next; //记录next
	SListNode * cur = plist->_head;
	cur->_next = NULL; //断链，将头结点和他的next断开，有tmp记录，所以能找到
	while (tmp) //每次循环都要完成断链，然后和旧头重新成链的过程，当旧链结束(tmp为空)跳出循环
	{
		plist->_head = tmp; //换新头，tmp位置会成为旧链的新头.旧头成了它的第一个节点
		tmp = tmp->_next; //记录下次循环中tmp 的位置，因为tmp在这次循环中已经用完了，而且后面马上就要断链，所以必须在这里记录
		plist->_head->_next = cur; //断链，与旧头形成新链
		cur = plist->_head; //记录旧头的位置，方便下次循环成链
	}
#else
	assert(plist->_head);

	SListNode * tmp = plist->_head->_next;
	SListNode * cur = plist->_head->_next;
	plist->_head->_next = NULL; //没有此语句，链表打印将会陷入死循环
	while (tmp){
		tmp = tmp->_next;
		cur->_next = plist->_head;
		plist->_head = cur;
		cur = tmp;
	}
#endif
}

SListNode* SListKtfTotail(SList* plist, unsigned int k){
	//刚开始的时候，都指向起点，然后p1走k-1步后，p2和p1同时开始走，
	//当p1走到最后一个的时候，p2指向的就是最后一个节点
	SListNode* p1 = plist->_head;
	SListNode* p2 = plist->_head;

	if (plist->_head == NULL && k == 0)
		return NULL;
	while (k - 1 > 0){
		if (p1->_next != NULL){
			p1 = p1->_next;
			--k;
		}
		else{
			printf("error");
			return NULL;
		}
	}
	while (p1->_next != NULL){
		p1 = p1->_next;
		p2 = p2->_next;
	}
	return p2;
}

//得到两条链的交叉点
SListNode * getIntersectionNode(SList* listA, SList* listB)
{
	int lenA = 0;
	int lenB = 0;
	SListNode *cur;
	SListNode *headlong = listA->_head;
	SListNode *headshort = listB->_head;
	int gap;
	int i;

	for (cur = listA->_head; cur; cur = cur->_next)
	{
		lenA++;
	}

	for (cur = listB->_head; cur; cur = cur->_next)
	{
		lenB++;
	}
	gap = lenA - lenB;
	if (gap < 0)
	{
		gap *= -1;
		headshort = listA->_head;
		headlong = listB->_head;
	}

	for (i = 0; i < gap; i++)
	{
		headlong = headlong->_next;
	}

	for (; headlong; headlong = headlong->_next, headshort = headshort->_next)
	{
		if (headlong == headshort)
		{
			return headlong;
		}
	}
	return NULL;
}

//判断链表是否有循环（有返回1；没有返回0）
int SListHasCycle(SList* plist)
{
	//设置两个节点
	SListNode *fast = plist->_head;
	SListNode *slow = plist->_head;

	//快节点一次走两步，慢节点一次走一步，如果相遇则表明链表有循环
	while (slow && fast && fast->_next)
	{
		slow = slow->_next;
		fast = fast->_next->_next;
		if (slow == fast)
		{
			return 1;
		}
	}
	return 0;
}

//得到链表循环圈内快慢节点相遇的节点
SListNode* SListGetCycleNode(SList* plist)
{
	SListNode *fast = plist->_head;
	SListNode *slow = plist->_head;

	while (slow && fast && fast->_next)
	{
		slow = slow->_next;
		fast = fast->_next->_next;
		if (slow == fast)
		{
			return fast;
		}
	}
	return NULL;
}

//得到链表循环的第一个节点
SListNode * SListDetectCycle(SList* plist)
{
	SListNode *tmp = SListGetCycleNode(plist);

	if (NULL == tmp)
	{
		return NULL;
	}

	SListNode * cur = plist->_head;
	for (; cur; cur = cur->_next, tmp = tmp->_next)
	{
		if (cur == tmp)
		{
			return cur;
		}
	}
	return NULL;
}