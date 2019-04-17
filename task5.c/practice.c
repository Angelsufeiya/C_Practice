#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

/*
在一个有序数组中查找具体的某个数字n。编写int binsearch(int x,int v[],int n);
功能：在v[0]<=v[1]<=....<=v[n-1]的数组中查找x。	*/


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)算的是数组的总大小
	//sizeof(arr[0])是数组元素的大小
	//sz 算的是数组的长度
	int k = 9;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标为: %d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不道\n");

	system("pause");
	return 0;
}



/*二分查找函数第一种方式：*/  
//第一种方式优于第二种方式：第一种方式可以控制在这个数组的一定范围内查找；第二种确定是在这个数组中查找

int binary_search(int arr[], int k, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)算的是数组的总大小
	//sizeof(arr[0])是数组元素的大小
	//sz 算的是数组的长度
	int k = 4;
	int right = sz - 1;

	int ret = binary_search(arr, k, left, right);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}

	system("pause");
	return 0;
}



/*二分查找函数第二种方式*/

int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 4;
	//调用二分查找函数。

	int ret = binary_search(arr, k, sz);
	//数组在传参的时候传的是数组名，数组名即是数组第一个元素的地址。
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}

	system("pause");
	return 0;
}