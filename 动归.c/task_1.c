#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main1(){
	int a[5][5] = { { 0, 0, 0, 0, 0 }, 
					{ 0, 5, 18, 4, 20 },
					{ 0, 22, 15, 9, 10 }, 
					{ 0, 14, 16, 12, 21 }, 
					{ 0, 19, 8, 11, 6 } };
	int i, j;
	
	for (i = 1; i <= 4; i++){
		for (j = 1; j <= 4; j++){
			if (a[i-1][j] > a[i][j-1]){
				a[i][j] += a[i-1][j];
			}
			else{
				a[i][j] += a[i][j - 1];
			}
		}
	}
	printf("数字最大为%d\n", a[4][4]);

	system("pause");
	return 0;
}