#include "SList.h"

//�����ʼ��
void SListInit(SList* plist){
	assert(plist);
	plist->_head = NULL;
}

//��������
void SListDestory(SList* plist){
	SListNode * tmp;
	while (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//����ͷ��
void SListPushFront(SList* plist, SLTDataType x){
	assert(plist);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = plist->_head;
	plist->_head = cur;//plist->_headΪ�������ͷ
}

//����ͷɾ
void SListPopFront(SList* plist){
	assert(plist);

	SListNode * tmp;
	if (plist->_head){
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

//����Ĵ�ӡ
void SListPrint(SList* plist){
	assert(plist);

	SListNode * cur;
	for (cur = plist->_head; cur; cur = cur->_next){
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}

//������ҽڵ�
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

// ��pos�ĺ�����в���
void SListInsertAfter(SListNode* pos, SLTDataType x){
	assert(pos);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;

}

//��x��ǰ�����
void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src)
{
	assert(plist);

	SListNode * cur;
	SListNode * newdata = (SListNode *)malloc(sizeof(SListNode));

	if (plist->_head->_data == x)//�Ƚ�ͷ�ڵ�
	{
		SListPushFront(plist, src);
		return;
	}
	for (cur = plist->_head; cur->_next; cur = cur->_next)
	{
		if (cur->_next->_data == x)//�Ƚ���һ��������
		{
			break;
		}
	}
	newdata->_data = src;
	newdata->_next = cur->_next;
	cur->_next = newdata;
}

//ɾ��pos��Ľ��
void SListEraseAfter(SListNode* pos){
	assert(pos);
	
	SListNode * tmp = pos->_next;
	pos->_next = tmp->_next;
	free(tmp);
}

//��ת����
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
	//����һ���������������������϶�������ͷ�壬���پ�������������ͷ�ҵ�������ͷ��
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
	SListNode * tmp = plist->_head->_next; //��¼next
	SListNode * cur = plist->_head;
	cur->_next = NULL; //��������ͷ��������next�Ͽ�����tmp��¼���������ҵ�
	while (tmp) //ÿ��ѭ����Ҫ��ɶ�����Ȼ��;�ͷ���³����Ĺ��̣�����������(tmpΪ��)����ѭ��
	{
		plist->_head = tmp; //����ͷ��tmpλ�û��Ϊ��������ͷ.��ͷ�������ĵ�һ���ڵ�
		tmp = tmp->_next; //��¼�´�ѭ����tmp ��λ�ã���Ϊtmp�����ѭ�����Ѿ������ˣ����Һ������Ͼ�Ҫ���������Ա����������¼
		plist->_head->_next = cur; //���������ͷ�γ�����
		cur = plist->_head; //��¼��ͷ��λ�ã������´�ѭ������
	}
#else
	assert(plist->_head);

	SListNode * tmp = plist->_head->_next;
	SListNode * cur = plist->_head->_next;
	plist->_head->_next = NULL; //û�д���䣬�����ӡ����������ѭ��
	while (tmp){
		tmp = tmp->_next;
		cur->_next = plist->_head;
		plist->_head = cur;
		cur = tmp;
	}
#endif
}

SListNode* SListKtfTotail(SList* plist, unsigned int k){
	//�տ�ʼ��ʱ�򣬶�ָ����㣬Ȼ��p1��k-1����p2��p1ͬʱ��ʼ�ߣ�
	//��p1�ߵ����һ����ʱ��p2ָ��ľ������һ���ڵ�
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

//�õ��������Ľ����
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

//�ж������Ƿ���ѭ�����з���1��û�з���0��
int SListHasCycle(SList* plist)
{
	//���������ڵ�
	SListNode *fast = plist->_head;
	SListNode *slow = plist->_head;

	//��ڵ�һ�������������ڵ�һ����һ����������������������ѭ��
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

//�õ�����ѭ��Ȧ�ڿ����ڵ������Ľڵ�
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

//�õ�����ѭ���ĵ�һ���ڵ�
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