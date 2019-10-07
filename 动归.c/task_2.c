//动归算法之0_1背包问题（P1048 采药）

#define _CRT_SECURE_NO_WARNINGS
#define MAX(a, b) ( (a) > (b) ? (a) : (b))

#include<stdio.h>

#if 0
//二维数组解法
int main(){
	int data[101][1001] = { 0 };
	int size, n;
	int weight[101] = { 0 };
	int value[101] = { 0 };
	int i, j;

	scanf("%d%d", &size, &n);//背包大小，物品种类（决定了表格的大小）
	
	for (i = 1; i <= n; i++){
		scanf("%d%d", &weight[i], &value[i]);
	}
	for (i = 1; i <= n; i++){
		for (j = 1; j <= size; j++){
			if (j < weight[i]){
				data[i][j] = data[i - 1][j];
			}
			else{
				data[i][j] = MAX(data[i - 1][j], data[i - 1][j - weight[i]] + value[i]);
			}
		}
	}
	printf("%d", data[n][size]);

	return 0;
}
#else
//一维数组解法
int main(){
	int data[1001] = { 0 };
	int size, n;
	int weight[101] = { 0 };
	int value[101] = { 0 };
	int i, j;

	scanf("%d%d", &size, &n);//背包大小，物品种类（决定了表格的大小）

	for (i = 1; i <= n; i++){
		scanf("%d%d", weight + i, value + i);//arr[i] = *(arr+i) 前面是地址里的内容，后面是地址
	}
	for (i = 1; i <= n; i++){
		for (j = size; j >= weight[i]; j--){
		//for (j = weight[i]; j <= size; j++){//完全背包只需更改这一行代码
			data[j] = MAX(data[j], data[j - weight[i]] + value[i]);
		}
	}
	printf("%d", data[size]);

	return 0;
}
#endif