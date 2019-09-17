#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1

void prinfArray(int * arr, int n){
	int i;

	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

//一维数组操作

int _main(){
	int input = 0;
	int data[30] = { 0 };
	int i, j;

	printf("请输入你要打印的杨辉三角的行数：");
	scanf("%d", &input);
	
	data[0] = 1;
	puts("1");
	for (i = 1; i < input; i++){
		data[i] = 1;

		for (j = i - 1; j > 0; j--){
			data[j] += data[j - 1];
		}
		data[0] = 1;

		prinfArray(data, i + 1);
	}

	system("pause");
	return 0;
}

//二维数组操作

int main2(){
	int input;
	int data[30][30] = { 0 };
	int i, j;
	data[0][0] = 1;

	printf("请输入你要打印的杨辉三角的行数：");
	scanf("%d", &input);

	for (i = 0; i < input; i++){
		data[i][0] = 1;
		for (j = 1; j < i; j++){
			data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
		}
		data[i][j] = 1;
	}
	for (i = 0; i < input; i++){
		for (j = 0; j <= i; j++){
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}