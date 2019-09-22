//现在有n个人要过河，河边有很多船，每个船最多载2人，穿的承重为100kg。过河的船数是多少？

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
	int i, j;
	int sum = 0, count = 0;

	printf("请输入岸边人的数量和船的承重：");
	scanf("%d%d", &num, &size);
	printf("请输入每个人的体重：");
	for (i = 0; i < num; i++){
		scanf("%d", weight + i); 
	}
	bubble(weight, num);	//将人的体重由小到大排序

	for (i = 0, j = num - 1; i < j; j--){
		if (weight[i] + weight[j] <= size){
			i++;
		}
		count++;
	}
	printf("过河的船数右 %d条\n", count);

	system("pause");
	return 0;
}