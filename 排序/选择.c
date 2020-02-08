#include <stdio.h>
#include <stdlib.h>

//��ӡ����
void printArr(int arr[], int sz){
	int i;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//ѡ��������
void selectSort(int a[], int n) 
{
	int min, tmp;
	int i, j;
	//ÿ��ѭ�����飬�ҳ���С��Ԫ�أ�����ǰ�棬ǰ��ļ�Ϊ����õ�
	for (i = 0; i < n - 1; i++) 
	{
		min = i; //������СԪ�ص��±�
		for (j = i + 1; j < n; j++) {//������������СԪ��������Ƚϣ���������С��Ԫ�ص��±�
			if (a[j] < a[min])
				min = j;
		}
		//������������бȼ����Ԫ�ػ�С���ͽ���
		if (i != min)
		{
			tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
}

int main(){
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	printArr(arr, sz);
	selectSort(arr, sz);
	printArr(arr, sz);

	system("pause");
	return 0;
}