#include <stdio.h>
#include <stdlib.h>

//�鲢���򡪡���
void merge(int a[], int l, int r, int mid)
{
	int aux[8] = { 0 };
	int i, j, k;

	for (k = l; k <= r; k++){//���εĹ����У�������������
		aux[k - l] = a[k];
	}

	i = l;
	j = mid + 1;
	for (k = l; k <= r; k++)
	{
		if (i>mid)//�������ֵ�Ѿ�ȫ���������
		{
			a[k] = aux[j - l];
			j++;
		}
		else if (j>r)//�������ֵ�Ѿ�ȫ���������
		{
			a[k] = aux[i - l];
			i++;
		}

		//����������������˽��жԱ�
		else if (aux[i - l]>aux[j - l])
		{
			a[k] = aux[j - l];
			j++;
		}
		else//��֤�鲢������ȶ���
		{
			a[k] = aux[i - l];
			i++;
		}
	}
}

//�鲢���򡪡�������
void MergeSort(int a[], int l, int r)
{
	if (l >= r)
		return;

	int mid = l + (r - l) / 2;

	MergeSort(a, l, mid);
	MergeSort(a, mid + 1, r);
	merge(a, l, r, mid);
}

int main(){
	int i;
	int arr[] = { 8, 4, 5, 7, 1, 3, 6, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);

	MergeSort(arr, 0, len-1);

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}

