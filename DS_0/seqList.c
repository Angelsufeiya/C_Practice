#include "seqList.h"

//顺序表初始化
void SeqListInit(SeqList* psl, size_t capicity){
	assert(psl);
	
	psl->capicity = capicity;
	psl->array = (SLDataType *)malloc(capicity * sizeof(SLDataType));
	assert(psl->array);

	psl->size = 0;
}

//顺序表销毁
void SeqListDestory(SeqList* psl){
	assert(psl);

	if (psl->array){
		free(psl->array);
		psl->array = NULL;
		psl->size = 0;
		psl->capicity = 0;
	}
}

//检查顺序表容量是否已满
void CheckCapicity(SeqList* psl){
	assert(psl);

	if (psl->size == psl->capicity){
		psl->capicity *= 2;
		psl->array = (SLDataType *)realloc(psl->array, psl->capicity* sizeof(SLDataType));
	}
}

//顺序表尾插
void SeqListPushBack(SeqList* psl, SLDataType x){
	assert(psl);

	CheckCapicity(psl);

	psl->array[psl->size] = x;
	psl->size++;
}

//顺序表尾删
void SeqListPopBack(SeqList* psl){
	assert(psl || psl->size);

	psl->size--;
}

//顺序表头插
void SeqListPushFront(SeqList* psl, SLDataType x){
	assert(psl);

	CheckCapicity(psl);

	int i;
	for (i = psl->size - 1; i >= 0; i--){
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[0] = x;
	psl->size++;
}

//顺序表头删
void SeqListPopFront(SeqList* psl){
	assert(psl);

	psl->size--;
	unsigned int i;
	for (i = 0; i < psl->size; i++){
		psl->array[i] = psl->array[i + 1];
	}
}

//顺序表打印
void SeqListPrint(SeqList* psl){
	assert(psl);

	unsigned int i;
	for (i = 0; i < psl->size; i++){
		printf("%d ", psl->array[i]);
	}
	putchar('\n');
}

//顺序表查找
int SeqListFind(SeqList* psl, SLDataType x){
	assert(psl);

	unsigned int i;
	for (i = 0; i < psl->size; i++){
		if (psl->array[i] == x){
			return i;
		}
	}
	return -1;
}

//顺序表插入
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x){
	assert(psl &&  pos <= psl->size);

	CheckCapicity(psl);

	unsigned int i;
	for (i = psl->size - 1; i >= pos; i--){
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}

//顺序表删除pos位置信息
void SeqListErase(SeqList* psl, size_t pos){
	assert(psl &&  pos < psl->size);

	psl->size--;
	unsigned int i;
	for (i = pos; i < psl->size; i++){
		psl->array[i] = psl->array[i + 1];
	}
}

//在顺序表中删除 x
void SeqListRemove(SeqList* psl, SLDataType x){
	assert(psl);

	int ret = SeqListFind(psl, x);
	if (ret >= 0){
		SeqListErase(psl, ret);
	}
}

//在顺序表中修改
void SeqListModify(SeqList* psl, size_t pos, SLDataType x){
	assert(psl || pos < psl->size);

	psl->array[pos - 1] = x;
}

//顺序表冒泡排序
void SeqListBubbleSort(SeqList* psl){
	unsigned int i, j;
	SLDataType tmp;

	for (i = 0; i < psl->size - 1; i++){
		for (j = 0; j < psl->size - 1; j++){
			if (psl->array[j]>psl->array[j + 1]){
				tmp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = tmp;
			}
		}
	}
}

int SeqListBinaryFind(SeqList* psl, SLDataType x){
	int left = 0;
	int right = psl->size - 1;
	int mid;

	while (left <= right){
		mid = (left + right) / 2;
		if (psl->array[mid] < x){
			left = mid + 1;
		}
		else if (psl->array[mid] > x){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

// 本题要求:时间复杂度:O(N) 空间复杂度 O(1)
void SeqListRemoveAll(SeqList* psl, SLDataType x);