#include "BTree.h"
#include "queue.h"
#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

//返回根节点（二叉树的创建）
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

//前序遍历打印二叉树（具有后入先出的用递归，先入先出用循环）
void BinaryTreePrevOrder(BTNode* root){
	if (root){
		putchar(root->data);
		BinaryTreePrevOrder(root->lChild);
		BinaryTreePrevOrder(root->rChild);
	}
}

//中序遍历打印二叉树
void BinaryTreeInOrder(BTNode* root){
	if (root){
		BinaryTreeInOrder(root->lChild);
		putchar(root->data);
		BinaryTreeInOrder(root->rChild);
	}
}

//后序遍历打印二叉树
void BinaryTreePostOrder(BTNode* root){
	if (root){
		BinaryTreePostOrder(root->lChild);
		BinaryTreePostOrder(root->rChild);
		putchar(root->data);
	}
}


//销毁二叉树(按照后序销毁）
void BinaryTreeDestory(BTNode* root){
	if (root){
		BinaryTreeDestory(root->lChild);
		BinaryTreeDestory(root->rChild);
		free(root);
	}
}

//二叉树层序遍历（队列）:二叉树层层压栈，层层递归跳出（先入先出）
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue qu;
	BTNode * cur;

	QueueInit(&qu);
	QueuePush(&qu, root);

	//队列是空返回1；非空返回0
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

//非递归的前序遍历
void BinaryTreePrevOrderNonR(BTNode* root)
{
	Stack st;
	BTNode * cur = root; //从根开始

	StackInit(&st, 100);

	//不能用栈是否为空进行判断（根节点的左边全部遍历结束，访问根节点的右孩子时，此时栈为空）
	while (cur)
	{
		putchar(cur->data); //访问当前节点

		if (cur->rChild) //如果有右孩子，右孩子入栈
		{
			StackPush(&st, cur->rChild);
		}

		if (cur->lChild) //如果有左孩子，访问左孩子
		{
			cur = cur->lChild;
		}
		else //没有左孩子就取栈顶
		{
			cur = StackTop(&st); //取到空时，遍历结束，循环跳出
			StackPop(&st);
		}
	}
	StackDestory(&st);
}

//非递归的中序遍历
void BinaryTreeInOrderNonR(BTNode * root)
{
	BTNode * cur = root;

	Stack st;
	StackInit(&st, 100);

	while (cur || !StackIsEmpty(&st))
	{
		for (; cur; cur = cur->lChild) //将当前节点及左孩子们入栈
		{
			StackPush(&st, cur);
		}

		cur = StackTop(&st);
		//1、如果右孩子为空，for循环不进，直接取栈顶
		//2、如果有孩子不为空，那么这是一个没有左孩子的节点
		//第一种情况是左子树访问完毕，第二种情况是左子树为空，无论哪种，当前节点都要打印
		putchar(cur->data);
		StackPop(&st);
		cur = cur->rChild; //当右子树为空时，检查栈是否为空，如果栈也空了，循环跳出
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
		for (; cur; cur = cur->lChild) //类似中序，将当前节点及其左孩子们入栈
		{
			StackPush(&st, cur);
			tag[st.size - 1] = 0; //重置左子树访问标记（LT）
		}

		while (!StackIsEmpty(&st) && tag[st.size - 1])
			//前面的条件只在最后一次循环跳出的时候生效
			//后面的条件分两个情况：
			//1、当cur为空时，上面的for不进，此条件成立
			//2、当cur不为空，上面的for进，则此条件不成立
			//如果检测到当前的LT被置位（也就是情况1），那么在打印完当前节点后，再去直接检查上一个节点（父节点）是不是也要被打印了（LT置位，证明这是它的右子树，它也要被打印了），所以要用while循环打印
		{
			cur = StackTop(&st);
			putchar(cur->data);
			StackPop(&st);
		}

		if (!StackIsEmpty(&st)) //此条件只在最后一次循环跳出时生效
		{
			cur = StackTop(&st);
			//1、如果上面的while进了，那么证明左子树访问完毕了，给LT置位
			//2、如果上面的while没进，那么证明左子树不存在，给LT置位
			tag[st.size - 1] = 1;
			cur = cur->rChild;
			//左子树访问完毕后，访问右子树
		}
	} while (!StackIsEmpty(&st));
	//由于后序遍历中根节点是最后出栈的，所以在根节点出栈前，栈不可能为空
	//所以以栈是否为空来判定是否要跳出

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

		//节点有右孩子，没左孩子 直接跳出（不是完全二叉树）
		if (cur->rChild && !cur->lChild)
		{
			return 0;
		}

		//节点有左孩子没有孩子（tag == 1），但此层节点后节点还有孩子，则跳出
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