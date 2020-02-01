#include <iostream>
using namespace std

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	//�տ�ʼ��ʱ�򣬶�ָ����㣬Ȼ��p1��k-1����p2��p1ͬʱ��ʼ�ߣ���p1�ߵ����һ����ʱ��p2ָ��ľ��� ���һ���ڵ�
	ListNode *p1 = pListHead;
	ListNode *p2 = pListHead;
	if (pListHead == NULL || k == 0) {
		return NULL;
	}
	while (k - 1 > 0)
	{
		if (p1->next != NULL)
		{
			p1 = p1->next;
			--k;
		}
		else
		{
			cout << "error" << endl;
			return  NULL;
		}
	}
	while (p1->next != NULL)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	return p2;
}