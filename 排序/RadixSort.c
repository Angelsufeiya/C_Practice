#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//得到最大数为几位数
int get_max_digit(int array[], int n)
{
	int digit = 0, max = array[0];
	int i;

	for (i = 1; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	while (max)
	{
		digit++;
		max /= 10;
	}
	return digit;
}

//基数排序
void RadixSort(int array[], int n)
{
	//创建临时数组
	int *tmp = (int *)malloc(sizeof(int)*n);
	//位数（决定了排序趟数）
	int digit = get_max_digit(array, n);
	//计数桶
	int count[10];
	int r, i, d;
	for (r = 1; r <= digit; r++)
	{
		//重置计数桶
		memset(count, 0, 10 * sizeof(int));
		//把数据存储到临时数组
		memcpy(tmp, array, n*sizeof(int));
		d = i = 1;

		while (i < r)
		{
			i++;
			d *= 10;
		}
		//统计每个桶中的记录数
		for (i = 0; i < n; i++)
			count[(array[i] / d) % 10]++;
		//将tmp中的位置依次分配给每个桶
		for (i = 1; i < 10; i++)
			count[i] += count[i - 1];
		//由后往前，将临时数组的内容复制到array中
		for (i = n - 1; i >= 0; i--)
			array[--count[(tmp[i] / d) % 10]] = tmp[i];
	}
}

//打印数组
void print(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 53, 542, 3, 63, 14, 214, 154, 748, 616 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("原序列为：");
	print(arr, n);
	printf("基数排序为：");
	RadixSort(arr, n);
	print(arr, n);

	system("pause");
	return 0;
}