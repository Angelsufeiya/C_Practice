#include "BTree.h"
#include "queue.h"
#include "stack.h"

#include <stdio.h>

int main(){
	BTNode * root = BinaryTreeCreate("ABD#GI##J###CE#HK###F##");

	BinaryTreePrevOrder(root);
	putchar('\n');
	BinaryTreeInOrder(root);
	putchar('\n');
	BinaryTreePostOrder(root);
	putchar('\n');
	BinaryTreeLevelOrder(root);
	putchar('\n');

	BinaryTreePrevOrderNonR(root);
	putchar('\n');
	BinaryTreeInOrderNonR(root);
	putchar('\n');
	BinaryTreePostOrderNonR(root);
	putchar('\n');

	printf("%d\n", BinaryTreeComplete(root));

	BinaryTreeDestory(root);

	//BTNode * root2 = BinaryTreeCreate("ABDH##I##EJ###CF##G##");

	//printf("%d\n", BinaryTreeComplete(root2));

	//BinaryTreeDestory(root2);

	return 0;
}