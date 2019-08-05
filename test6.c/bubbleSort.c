#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//√∞≈›≈≈–Ú

void bubbleSort(int arr[], int sz){
	int i, j ,tmp;
	for (i = 0; i <= sz - 1; i++){	//√∞≈›µƒÃÀ ˝
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++){
			if (arr[j]>arr[j + 1]){
				flag = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)
			break;
	}
}

void printArr(int arr[], int sz){
	int i;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	printArr(arr, sz);
	bubbleSort(arr, sz);
	printArr(arr, sz);

	system("pause");
	return 0;
}