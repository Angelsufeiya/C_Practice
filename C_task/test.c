#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

int OneCount(unsigned int n){
	int count = 0;
	while (n){
		if (n & 1)
			count++;
		n = n >> 1;
	}
	return count;
}

int main(){
	unsigned int input;

	printf("请输入一个数：");
	scanf("%d", &input);
	printf("这个数中1的个数为：%d个", OneCount(input));
	system("pause");
	return 0;
}

int main_2(){
	int num, i;
	int num1 = 0, num2 = 1;
	scanf("%d", &i);
	if (i == 0)
		printf("0\n");
	else if (i == 1)
		printf("1\n");
	else
	{
		for (; i >= 2; i--){
			num = num1 + num2;
			num2 = num1;
			num1 = num;
		}
		printf("%d", num);
	}
	return 0;
}

int main_1(){
	int i, j, input;
	int arr[ROW][COL] = { 0 };

	printf("请输入%d行%d列数组\n", ROW, COL);
	for (i = 0; i < ROW; i++){
		for (j = 0; j < COL; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("数组中是否含有整数:");
	scanf("%d", &input);
	i = 0;
	while (i < ROW &&j >= 0){
		if (input == arr[i][j - 1]){
			printf("数组中有这个整数\n");
			break;
		}
		else if (input > arr[i][j - 1])
			i++;
		else if (input < arr[i][j - 1])
			j--; 
		}
	if (i >= ROW || j < 0){
		printf("数组中没有这个整数\n");
	}
	system("pause");
	return 0;
}


int main_0(){
	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
	int *q[4], k;

	for (k = 0; k < 4; k++){
		q[k] = &a[k * 3];
	}
	printf("%d\n", q[3][1]);
	printf("%d\n", q[3]);
	system("pause");
	return 0;
}