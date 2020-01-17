#include "seqList.h"

//˳����ʼ��
void SeqListInit(SeqList* psl, size_t capicity){
	assert(psl);
	
	psl->capicity = capicity;
	psl->array = (SLDataType *)malloc(capicity * sizeof(SLDataType));
	assert(psl->array);

	psl->size = 0;
}

//˳�������
void SeqListDestory(SeqList* psl){
	assert(psl);

	if (psl->array){
		free(psl->array);
		psl->array = NULL;
		psl->size = 0;
		psl->capicity = 0;
	}
}

//���˳��������Ƿ�����
void CheckCapicity(SeqList* psl){
	assert(psl);

	if (psl->size == psl->capicity){
		psl->capicity *= 2;
		psl->array = (SLDataType *)realloc(psl->array, psl->capicity* sizeof(SLDataType));
	}
}

//˳���β��
void SeqListPushBack(SeqList* psl, SLDataType x){
	assert(psl);

	CheckCapicity(psl);

	psl->array[psl->size] = x;
	psl->size++;
}

//˳���βɾ
void SeqListPopBack(SeqList* psl){
	assert(psl || psl->size);

	psl->size--;
}

//˳���ͷ��
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

//˳���ͷɾ
void SeqListPopFront(SeqList* psl){
	assert(psl);

	psl->size--;
	unsigned int i;
	for (i = 0; i < psl->size; i++){
		psl->array[i] = psl->array[i + 1];
	}
}

//˳����ӡ
void SeqListPrint(SeqList* psl){
	assert(psl);

	unsigned int i;
	for (i = 0; i < psl->size; i++){
		printf("%d ", psl->array[i]);
	}
	putchar('\n');
}

//˳������
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

//˳������
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

//˳���ɾ��posλ����Ϣ
void SeqListErase(SeqList* psl, size_t pos){
	assert(psl &&  pos < psl->size);

	psl->size--;
	unsigned int i;
	for (i = pos; i < psl->size; i++){
		psl->array[i] = psl->array[i + 1];
	}
}

//��˳�����ɾ�� x
void SeqListRemove(SeqList* psl, SLDataType x){
	assert(psl);

	int ret = SeqListFind(psl, x);
	if (ret >= 0){
		SeqListErase(psl, ret);
	}
}

//��˳������޸�
void SeqListModify(SeqList* psl, size_t pos, SLDataType x){
	assert(psl || pos < psl->size);

	psl->array[pos - 1] = x;
}

//˳���ð������
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

// ����Ҫ��:ʱ�临�Ӷ�:O(N) �ռ临�Ӷ� O(1)
void SeqListRemoveAll(SeqList* psl, SLDataType x);