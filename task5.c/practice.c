#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

/*
��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);
���ܣ���v[0]<=v[1]<=....<=v[n-1]�������в���x��	*/


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)�����������ܴ�С
	//sizeof(arr[0])������Ԫ�صĴ�С
	//sz ���������ĳ���
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
			printf("�ҵ��ˣ��±�Ϊ: %d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");

	system("pause");
	return 0;
}



/*���ֲ��Һ�����һ�ַ�ʽ��*/  
//��һ�ַ�ʽ���ڵڶ��ַ�ʽ����һ�ַ�ʽ���Կ�������������һ����Χ�ڲ��ң��ڶ���ȷ��������������в���

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
	//sizeof(arr)�����������ܴ�С
	//sizeof(arr[0])������Ԫ�صĴ�С
	//sz ���������ĳ���
	int k = 4;
	int right = sz - 1;

	int ret = binary_search(arr, k, left, right);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
	}

	system("pause");
	return 0;
}



/*���ֲ��Һ����ڶ��ַ�ʽ*/

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
	//���ö��ֲ��Һ�����

	int ret = binary_search(arr, k, sz);
	//�����ڴ��ε�ʱ�򴫵��������������������������һ��Ԫ�صĵ�ַ��
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
	}

	system("pause");
	return 0;
}