//

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
	int i, n;
	int num[20] = { 0 };
	int sum = 0;

	printf("请输入岸边人的数量和船的承重：");
	scanf("%d", &n);
	printf("请输入每个人的体重：");
	for (i = 0; i < num; i++){
		scanf("%d", num + i);
	}
	bubble(num, i);	//将人的体重由小到大排序



	system("pause");
	return 0;
}