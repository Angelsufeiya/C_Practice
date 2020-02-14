#include<stdio.h>
#include<stdlib.h>

//注：由于数组从0开始计算序号，也就是二叉堆的根节点序号为0，
//因此序号为i的左右子节点的序号分别为2i+1和2i+2

//构建大顶堆
void HeapAdjustDown(int *arr, int start, int end)
{

	int temp = arr[start];		//保存当前节点
	int i = 2 * start + 1;		//该节点的左孩子在数组中的位置序号
	while (i <= end)
	{
		//找出左右孩子中最大的那个
		if (i + 1 <= end && arr[i + 1]>arr[i])
			i++;
		//如果符合堆的定义，则不用调整位置
		if (arr[i] <= temp)
			break;
		//最大的子节点向上移动，替换掉其父节点
		arr[start] = arr[i];
		start = i;
		i = 2 * start + 1;
	}
	//如果子节点向上移动，将被替换掉的父节点重新被赋值
	arr[start] = temp;
}

//堆排序后的顺序为从小到大,因此需要建立最大堆
void HeapSort(int *arr, int len)
{
	int i;

	//第一个非叶子节点的位置序号为len/2-1
	for (i = len / 2 - 1; i >= 0; i--)
		HeapAdjustDown(arr, i, len - 1);
	for (i = len - 1; i>0; i--)
	{
		//堆顶元素和最后一个元素交换位置，这样最后的一个位置保存的是最大的数，
		//每次循环依次将次大的数值在放进其前面一个位置，这样得到的顺序就是从小到大
		int temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;

		//将arr[0...i-1]重新调整为最大堆
		HeapAdjustDown(arr, 0, i - 1);
	}
}

int main()
{
	int i;
	int arr[] = { 80, 30, 90, 40, 10, 20, 60, 50, 70 };
	int num = sizeof(arr) / sizeof(arr[0]);
	//printf("请输入排序的元素的个数：");
	//scanf("%d", &num);

	//int i;
	//int *arr = (int *)malloc(num*sizeof(int));
	//printf("请依次输入这%d个元素（必须为整数）：", num);
	//for (i = 0; i<num; i++)
	//	scanf("%d", arr + i);

	HeapSort(arr, num);
	printf("堆排序后的顺序：");
	for (i = 0; i<num; i++)
		printf("%d ", arr[i]);
	printf("\n");

	system("pause");
	return 0;
}