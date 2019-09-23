//现在有n堆石子，每堆石子的个数不同，现在将n堆石子合并成一堆石子，
//每次合并两堆石子，合并过程中会计下石子个数，请问，石子数最低和最大分别是多少？

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void bubble1(int data[], int n){	//冒泡排序(由小到大排序）
	int i, j, tmp;

	for (i = 0; i < n - 1; i++){
		for (j = i; j < n - 1; j++){
			if (data[j] > data[j + 1]){
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}

void bubble2(int data[], int n){	//冒泡排序(由大到小排序）
	int i, j, tmp;

	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1; j++){
			if (data[j] < data[j + 1]){
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}

int main(){
	int i, n;
	int num[20] = { 0 };
	int sum = 0;

	printf("请输入有多少堆石子：");
	scanf("%d", &n);
	printf("请输入每堆石子中的个数：");
	for (i = 0; i < n; i++){
		scanf("%d", num + i);
	}
	for (i = 0; i < n - 1; i++){
		bubble1(num + i, n - i);
		num[i + 1] = num[i] + num[i + 1];
		sum += num[i + 1];
	}
	printf("石子数最小为 %d\n", sum);

	//for (i = 0; i < n - 1; i++){
	//	bubble2(num + i, n - i);
	//	sum += num[i] + num[i + 1];
	//	num[i + 1] = sum;
	//}
	//printf("石子数最大为 %d\n", sum);

	system("pause");
	return 0;
}