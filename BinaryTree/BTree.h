#ifndef _BTREE_H
#define _BTREE_H

typedef char BTDataType;

// ������
typedef struct BinaryTreeNode {
	BTDataType data;			// ��ǰ�ڵ�ֵ��
	struct BinTreeNode* lChild;	// ָ��ǰ�ڵ����� 
	struct BinTreeNode* rChild;// ָ��ǰ�ڵ��Һ��� 
}BTNode;


BTNode *BinaryTreeCreate(BTDataType * src);
void BinaryTreeDestory(BTNode* root);

int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root, int k);

//���������ֱ���
void BinaryTreePrevOrder(BTNode* root); 
void BinaryTreeInOrder(BTNode* root); 
void BinaryTreePostOrder(BTNode* root);
void BinaryTreeLevelOrder(BTNode* root);// �ж϶������Ƿ�����ȫ������

//�ǵݹ����
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);

int BinaryTreeComplete(BTNode* root);

#endif //_BTREE_H