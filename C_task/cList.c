#include <iostream>
using namespace std

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	//刚开始的时候，都指向起点，然后p1走k-1步后，p2和p1同时开始走，当p1走到最后一个的时候，p2指向的就是 最后一个节点
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