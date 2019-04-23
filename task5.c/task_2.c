#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[], int k, int left, int right){
	int mid = 0;
	
	while (left <= right){
		mid = left + (right - left) / 2;
		if (arr[mid] < k){
			left = mid + 1;
		}
		else if (arr[mid] > k){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 5;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = 0;

	ret = binary_search(arr, k, left, right);
	if (-1 == ret){
		printf("数组中未找到想要数字!\n");
	}
	else{
		printf("恭喜你，找到了!下标为：%d\n", ret);
	}
	system("pause");
	return 0;
}