//背包问题(贪心）：现在有一个贼，他去了一家珠宝店，他发现这些东西有大有小，但是他的包里只能装下20斤的物品，
//现在有五种物品，分别重量是2斤，5斤，7斤，10斤，12斤。问这个背包最多能放下几件物品。

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void bubble(int data[], int n){	//冒泡排序(代码最简易的排序）
	int i, j, tmp;

	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1 - i; j++){
			if (data[j] > data[j + 1]){
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}

int main(){
	int num, size;
	int weight[20] = { 0 };
	int i, sum = 0;

	printf("请输入物品的数量和背包大小：");
	scanf("%d%d", &num, &size);
	printf("请输入每个物品的重量:");
	for (i = 0; i < num; i++){
		scanf("%d", weight + i);
	}
	bubble(weight, num);	//将物品的重量由小到大排序
	for (i = 0; sum + weight[i] <= size && i < num; i++){
		sum += weight[i];
	}
	printf("背包能放下的最大数量为 %d个\n", i);

	system("pause");
	return 0;
}