#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

int main(){
	int i, j, input;
	int arr[ROW][COL] = { 0 };

	printf("������%d��%d������\n", ROW, COL);
	for (i = 0; i < ROW; i++){
		for (j = 0; j < COL; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("�������Ƿ�������:");
	scanf("%d", &input);
	i = 0;
	while (i < ROW &&j >= 0){
		if (input == arr[i][j - 1]){
			printf("���������������\n");
			break;
		}
		else if (input > arr[i][j - 1])
			i++;
		else if (input < arr[i][j - 1])
			j--; 
		}
	if (i >= ROW || j < 0){
		printf("������û���������\n");
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