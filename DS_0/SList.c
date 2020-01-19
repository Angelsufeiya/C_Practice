#include "SList.h"

void SListInit(SList* plist){
	assert(plist);
	plist->_head = NULL;
}
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

//��cur��ǰ�����
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
#else
	SListNode * tmp = plist->_head->_next; //��¼next
	SListNode * cur = plist->_head;
	cur->_next = NULL; //��������ͷ��������next�Ͽ�����tmp��¼���������ҵ�
	while (tmp) //ÿ��ѭ����Ҫ��ɶ�����Ȼ��;�ͷ���³����Ĺ��̣�����������(tmpΪ��)����ѭ��
	{
		plist->_head = tmp; //����ͷ��tmpλ�û��Ϊ�µ�ͷ����ͷ�������ĵ�һ���ڵ�
		tmp = tmp->_next; //��¼�´�ѭ����tmp ��λ�ã���Ϊtmp�����ѭ�����Ѿ������ˣ����Һ������Ͼ�Ҫ���������Ա����������¼
		plist->_head->_next = cur; //���������ͷ�γ�����
		cur = plist->_head; //��¼��ͷ��λ�ã������´�ѭ������
	}
#endif
}