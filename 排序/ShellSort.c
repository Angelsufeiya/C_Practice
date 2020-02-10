#include <stdio.h>
#include <stdlib.h>

void shellSort(int arr[], int length) {
	int i, j, tmp;
	//增量计算,计算间隔
	int gap = length / 3 + 1;
	while (gap >= 1) {
		for (i = gap; i<length; i++) {
			tmp = arr[i];
			j = i - gap;
			while (j >= 0 && arr[j] > tmp) {
				arr[j + gap] = arr[j];
				j -= gap;
			}
			arr[j + gap] = tmp;
		}
		if (gap == 1) { 
			break; 
		}
		gap = gap / 3 + 1;
	}
}

int main(){
	int i;
	int arr[] = { 70, 30, 40, 10, 80, 20, 90, 100, 75, 60, 45 };
	int len = sizeof(arr) / sizeof(arr[0]);
	
	shellSort(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}