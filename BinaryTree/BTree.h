#ifndef _BTREE_H
#define _BTREE_H

typedef char BTDataType;

// 二叉链
typedef struct BinaryTreeNode {
	BTDataType data;			// 当前节点值域
	struct BinTreeNode* lChild;	// 指向当前节点左孩子 
	struct BinTreeNode* rChild;// 指向当前节点右孩子 
}BTNode;


BTNode *BinaryTreeCreate(BTDataType * src);
void BinaryTreeDestory(BTNode* root);

int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root, int k);

//二叉树四种遍历
void BinaryTreePrevOrder(BTNode* root); 
void BinaryTreeInOrder(BTNode* root); 
void BinaryTreePostOrder(BTNode* root);
void BinaryTreeLevelOrder(BTNode* root);// 判断二叉树是否是完全二叉树

//非递归遍历
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);

int BinaryTreeComplete(BTNode* root);

#endif //_BTREE_H