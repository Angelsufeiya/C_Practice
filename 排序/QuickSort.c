#include <stdio.h>
#include <stdlib.h>

//int a[101], n;//定义全局变量，这两个变量需要在子函数中使用

void quicksort(int * a, int left, int right) {
	int i, j, t, temp;
	if (left > right)
		return;
	temp = a[left]; //temp中存的就是基准数
	i = left;
	j = right;

	while (i != j) { //顺序很重要，要先从右边开始找
		while (a[j] >= temp && i < j)//符合条件，往左继续找
			j--;
		while (a[i] <= temp && i < j)//符合条件，往右继续找
			i++;
		if (i < j)//交换两个数在数组中的位置
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	//最终将基准数归位
	a[left] = a[i];
	a[i] = temp;
	quicksort(a, left, i - 1);//继续处理左边的，这里是一个递归的过程
	quicksort(a, i + 1, right);//继续处理右边的 ，这里是一个递归的过程
}

int main() {
	//读入数据
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//	scanf("%d", &a[i]);

	int i;
	int arr[] = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 };
	int num = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, num-1); //快速排序调用
	printf("快速排序后的结果为：");

	for (i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}