#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1

int main(){
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