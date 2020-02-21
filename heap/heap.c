#include "heap.h"

//向下调整函数(构建大堆)
void adjustDown(Heap* hp, int m){
	int cur = m;
	int n, tmp;

	while (cur * 2 + 1 < hp->_size){
		if (cur * 2 + 2 < hp->_size && hp->data[cur * 2 + 1] < hp->data[cur * 2 + 2])
			n = cur * 2 + 2;
		else
			n = cur * 2 + 1;

		if (hp->data[cur] < hp->data[n]){
			tmp = hp->data[cur];
			hp->data[cur] = hp->data[n];
			hp->data[n] = tmp;

			cur = n;
		}
		else
			break;
	}
	n = m;
}

//初始化堆
void HeapInit(Heap* hp, HPDataType* a, int n){
	hp->_capacity = n * 2;
	hp->_size = n;
	hp->data = (HPDataType*)calloc(hp->_capacity, sizeof(HPDataType));

	int i;
	//将数组a复制拷贝到hp->data中，
	for (i = 0; i < n; i++){
		hp->data[i] = a[i];
	}
	//从最后一个从父节点往前不断向下调整
	for (i = n/2 - 1; i >= 0; i--){
		adjustDown(hp, i);
	}
}

void HeapDestory(Heap* hp){
	if (hp->data)
		free(hp->data);
	hp->data = NULL;
	hp->_size = 0;
}

void HeapPush(Heap* hp, HPDataType x){
	if (hp->_capacity == hp->_size){
		hp->_capacity *= 2;
		hp->data = (HPDataType*)realloc(hp->data, sizeof(HPDataType)*hp->_capacity);
	}
	
	int cur = hp->_size;
	int tmp;

	hp->data[hp->_size] = x;
	hp->_size++;

	while (cur > 0){
		if (hp->data[cur] > hp->data[(cur - 1) / 2]){
			tmp = hp->data[cur];
			hp->data[cur] = hp->data[(cur - 1) / 2];
			hp->data[(cur - 1) / 2] = tmp;

			cur = (cur - 1) / 2;
		}
		else
			break;
	}
}

void HeapPop(Heap* hp){
	if (hp->_size == 0)
		return;
	hp->_size--;

	int tmp = hp->data[0];
	hp->data[0] = hp->data[hp->_size];
	hp->data[hp->_size] = tmp;

	adjustDown(hp, 0);
}

HPDataType HeapTop(Heap* hp){
	if (hp->_size == 0){
		return (HPDataType)0;
	}
	return hp->data[0];
}

int HeapSize(Heap* hp){
	return hp->_size;
}

//等于0,为空
int HeapEmpty(Heap* hp){
	return hp->_size == 0;
}

void HeapPrint(Heap* hp){
	int i;
	int rn = 0;
	int bin = 2;

	//将其打印成堆的形式
	for (i = 0; i < hp->_size; i++){
		printf("%d ", hp->data[i]);
		if (i == rn ){
			putchar('\n');
			rn += bin;
			bin *= 2;
		}
	}
}

void HeapPrintS(Heap* hp){
	int i;
	for (i = 0; i < hp->_size; i++){
		printf("%d ", hp->data[i]);
	}
}


void HeapSort(Heap* hp){
	int tmp = hp->_size;
	while (hp->_size > 1){
		HeapPop(hp);
	}
	hp->_size = tmp;
}