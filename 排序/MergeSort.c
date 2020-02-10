#include <stdio.h>
#include <stdlib.h>

//归并排序——治
void merge(int a[], int l, int r, int mid)
{
	int aux[8] = { 0 };
	int i, j, k;

	for (k = l; k <= r; k++){//在治的过程中，对数组做拷贝
		aux[k - l] = a[k];
	}

	i = l;
	j = mid + 1;
	for (k = l; k <= r; k++)
	{
		if (i>mid)//左数组的值已经全部排列完毕
		{
			a[k] = aux[j - l];
			j++;
		}
		else if (j>r)//右数组的值已经全部排列完毕
		{
			a[k] = aux[i - l];
			i++;
		}

		//左右两个数组最左端进行对比
		else if (aux[i - l]>aux[j - l])
		{
			a[k] = aux[j - l];
			j++;
		}
		else//保证归并排序的稳定性
		{
			a[k] = aux[i - l];
			i++;
		}
	}
}

//归并排序————分
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

