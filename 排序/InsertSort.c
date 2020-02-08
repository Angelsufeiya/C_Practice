#include <stdio.h>
#include <stdlib.h>

void BlnInsertSort(int a[], int len){
	int i, j, temp;
	int low, high, mid;

	for (i = 1; i < len; i++)
	{
		temp = a[i];//将要插入的元素拷贝一份
			
		low = 0, high = i - 1;
		while (low <= high)	//在［ｌ．．．ｈ］　中寻找插入的位置
		{
			mid = (low + high) / 2;  //折半
			if (a[mid] >= temp)
			{
				high = mid - 1;    //插在低半区
			}
			else{
				low = mid + 1;     //插在高半区 
			}
		}
		for (j = i - 1; j >= mid ; --j)
		{
			a[j + 1] = a[j];   //记录后移
		}
		a[j + 1] = temp;
	}
}

int main(){

	int i;
	int a[10] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70 };
	BlnInsertSort(a, 10);

	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);

	system("pause");
	return 0;
}

int main_0()
{
	int i, j;
	int temp;
	int a[] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70 };
	int n = sizeof(a) / sizeof(a[0]);
	for (i = 1; i < n; i++){
		temp = a[i];
		for (j = i - 1; j >= 0; j--){
			//将大于temp的数向后移动一步
			if (a[j]>temp){
				a[j + 1] = a[j];//记录j的值也就是temp要插入的位置
			}
			else{
				break;
			}
		}
		a[j + 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}

