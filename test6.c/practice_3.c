#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//写一个函数，实现整形有序数组的二分查找

int binSearch(int left, int right, int arr[], int k){
	while (left <= right){
		int mid = left + (right - left) / 2;
		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}


int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 6;
	int ret = 0;
	ret = binSearch(left, right, arr, k);
	if (ret == -1){
		printf("找不到\n");
	}
	else{
		printf("找到了，下标是：%d\n", ret);
	}

	system("pause");
	return 0;
}