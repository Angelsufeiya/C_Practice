#include "dequeue.h"

int main(){
	dequeue test;
	dequeueInit(&test);
	dequeuePush(&test, 1);
	dequeuePush(&test, 2);
	dequeuePush(&test, 3);
	dequeuePush(&test, 4);
	printf("%d\n", dequequeFront(&test));
	dequeuePop(&test);
	printf("%d\n", dequequeFront(&test));
	dequeuePop(&test);
	printf("%d\n", dequequeFront(&test));
	dequeuePop(&test);

	return 0;
}