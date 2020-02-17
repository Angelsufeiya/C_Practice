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

void quicksort2(int * a, int left, int right){
	if (left > right)
		return;
	int key = a[left];
	int begin = left;
	int end = right;
	while (begin<end){
		while (a[end]>key && begin<end){
			end--;
		}
		a[begin] = a[end];
		while (a[begin]<key && begin<end){
			begin++;
		}
		a[end] = a[begin];
	}
	a[end] = key;
	quicksort2(a, left, end - 1);//继续处理左边的，这里是一个递归的过程
	quicksort2(a, end + 1, right);//继续处理右边的 ，这里是一个递归的过程
}

void Swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void quicksort3(int * a, int left, int right){
	if (left > right)
		return;
	int key = a[left];
	int cur = left + 1;
	int prev = left;
	while (cur <= right){
		if (a[cur]<key && ++prev != cur){
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	Swap(&a[prev], &a[left]);//交换数据时，传的是实际数据的地址，不能用key代替。
	quicksort3(a, left, prev - 1);//继续处理左边的，这里是一个递归的过程
	quicksort3(a, prev + 1, right);//继续处理右边的 ，这里是一个递归的过程
}

int main() {
	//读入数据
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//	scanf("%d", &a[i]);

	int i;
	int arr[] = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 };
	int num = sizeof(arr) / sizeof(arr[0]);
	//quicksort(arr, 0, num-1); //快速排序调用（hoare法）
	//quicksort2(arr, 0, num - 1);//快速排序调用（挖坑法）
	quicksort3(arr, 0, num - 1);//快速排序调用（双指针法）
	printf("快速排序后的结果为：");

	for (i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}