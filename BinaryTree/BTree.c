#include "BTree.h"
#include "queue.h"
#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

//���ظ��ڵ㣨�������Ĵ�����
//BTNode *BinaryTreeCreate(BTDataType* src){
//	static int s_n = 0;
//
//	if (src[s_n] == '#'){
//		s_n++;
//		return NULL;
//	}
//
//	BTNode * cur = (BTNode *)malloc(sizeof(BTNode));
//	cur->data = src[s_n];
//	s_n++;
//
//	cur->lChild = BinaryTreeCreate(src);
//	cur->rChild = BinaryTreeCreate(src);
//
//	return cur;
//}

static int s_n;

BTNode *BinaryTreeCreateExe(BTDataType * src)
{
	if (src[s_n] == '#')
	{
		s_n++;
		return NULL;
	}

	BTNode * cur = (BTNode *)malloc(sizeof(BTNode));
	cur->data = src[s_n];
	s_n++;

	cur->lChild = BinaryTreeCreateExe(src);
	cur->rChild = BinaryTreeCreateExe(src);

	return cur;
}

BTNode *BinaryTreeCreate(BTDataType * src)
{
	s_n = 0;
	return BinaryTreeCreateExe(src);
}

//ǰ�������ӡ�����������к����ȳ����õݹ飬�����ȳ���ѭ����
void BinaryTreePrevOrder(BTNode* root){
	if (root){
		putchar(root->data);
		BinaryTreePrevOrder(root->lChild);
		BinaryTreePrevOrder(root->rChild);
	}
}

//���������ӡ������
void BinaryTreeInOrder(BTNode* root){
	if (root){
		BinaryTreeInOrder(root->lChild);
		putchar(root->data);
		BinaryTreeInOrder(root->rChild);
	}
}

//���������ӡ������
void BinaryTreePostOrder(BTNode* root){
	if (root){
		BinaryTreePostOrder(root->lChild);
		BinaryTreePostOrder(root->rChild);
		putchar(root->data);
	}
}


//���ٶ�����(���պ������٣�
void BinaryTreeDestory(BTNode* root){
	if (root){
		BinaryTreeDestory(root->lChild);
		BinaryTreeDestory(root->rChild);
		free(root);
	}
}

//������������������У�:���������ѹջ�����ݹ������������ȳ���
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue qu;
	BTNode * cur;

	QueueInit(&qu);
	QueuePush(&qu, root);

	//�����ǿշ���1���ǿշ���0
	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		putchar(cur->data);

		if (cur->lChild)
		{
			QueuePush(&qu, cur->lChild);
		}

		if (cur->rChild)
		{
			QueuePush(&qu, cur->rChild);
		}

		QueuePop(&qu);
	}
	QueueDestory(&qu);
}

//�ǵݹ��ǰ�����
void BinaryTreePrevOrderNonR(BTNode* root)
{
	Stack st;
	BTNode * cur = root; //�Ӹ���ʼ

	StackInit(&st, 100);

	//������ջ�Ƿ�Ϊ�ս����жϣ����ڵ�����ȫ���������������ʸ��ڵ���Һ���ʱ����ʱջΪ�գ�
	while (cur)
	{
		putchar(cur->data); //���ʵ�ǰ�ڵ�

		if (cur->rChild) //������Һ��ӣ��Һ�����ջ
		{
			StackPush(&st, cur->rChild);
		}

		if (cur->lChild) //��������ӣ���������
		{
			cur = cur->lChild;
		}
		else //û�����Ӿ�ȡջ��
		{
			cur = StackTop(&st); //ȡ����ʱ������������ѭ������
			StackPop(&st);
		}
	}
	StackDestory(&st);
}

//�ǵݹ���������
void BinaryTreeInOrderNonR(BTNode * root)
{
	BTNode * cur = root;

	Stack st;
	StackInit(&st, 100);

	while (cur || !StackIsEmpty(&st))
	{
		for (; cur; cur = cur->lChild) //����ǰ�ڵ㼰��������ջ
		{
			StackPush(&st, cur);
		}

		cur = StackTop(&st);
		//1������Һ���Ϊ�գ�forѭ��������ֱ��ȡջ��
		//2������к��Ӳ�Ϊ�գ���ô����һ��û�����ӵĽڵ�
		//��һ�������������������ϣ��ڶ��������������Ϊ�գ��������֣���ǰ�ڵ㶼Ҫ��ӡ
		putchar(cur->data);
		StackPop(&st);
		cur = cur->rChild; //��������Ϊ��ʱ�����ջ�Ƿ�Ϊ�գ����ջҲ���ˣ�ѭ������
	}

	StackDestory(&st);
}

void BinaryTreePostOrderNonR(BTNode* root)
{
	char tag[64];

	BTNode * cur = root;

	Stack st;
	StackInit(&st, 100);

	do{
		for (; cur; cur = cur->lChild) //�������򣬽���ǰ�ڵ㼰����������ջ
		{
			StackPush(&st, cur);
			tag[st.size - 1] = 0; //�������������ʱ�ǣ�LT��
		}

		while (!StackIsEmpty(&st) && tag[st.size - 1])
			//ǰ�������ֻ�����һ��ѭ��������ʱ����Ч
			//��������������������
			//1����curΪ��ʱ�������for����������������
			//2����cur��Ϊ�գ������for�����������������
			//�����⵽��ǰ��LT����λ��Ҳ�������1������ô�ڴ�ӡ�굱ǰ�ڵ����ȥֱ�Ӽ����һ���ڵ㣨���ڵ㣩�ǲ���ҲҪ����ӡ�ˣ�LT��λ��֤��������������������ҲҪ����ӡ�ˣ�������Ҫ��whileѭ����ӡ
		{
			cur = StackTop(&st);
			putchar(cur->data);
			StackPop(&st);
		}

		if (!StackIsEmpty(&st)) //������ֻ�����һ��ѭ������ʱ��Ч
		{
			cur = StackTop(&st);
			//1����������while���ˣ���ô֤����������������ˣ���LT��λ
			//2����������whileû������ô֤�������������ڣ���LT��λ
			tag[st.size - 1] = 1;
			cur = cur->rChild;
			//������������Ϻ󣬷���������
		}
	} while (!StackIsEmpty(&st));
	//���ں�������и��ڵ�������ջ�ģ������ڸ��ڵ��ջǰ��ջ������Ϊ��
	//������ջ�Ƿ�Ϊ�����ж��Ƿ�Ҫ����

	StackDestory(&st);
}

int BinaryTreeComplete(BTNode* root)
{
	Queue qu;
	BTNode * cur;
	int tag = 0;

	QueueInit(&qu);
	QueuePush(&qu, root);

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		putchar(cur->data);

		//�ڵ����Һ��ӣ�û���� ֱ��������������ȫ��������
		if (cur->rChild && !cur->lChild)
		{
			return 0;
		}

		//�ڵ�������û�к��ӣ�tag == 1�������˲�ڵ��ڵ㻹�к��ӣ�������
		if (tag && (cur->rChild || cur->lChild))
		{
			return 0;
		}

		if (cur->lChild)
		{
			QueuePush(&qu, cur->lChild);
		}

		if (cur->rChild)
		{
			QueuePush(&qu, cur->rChild);
		}
		else
		{
			tag = 1;
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
	return 1;
}