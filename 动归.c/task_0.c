#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main0(){
	int a[10][10] = { 0 };
	int x, y;
	int x1, y1;
	int i, j;

	printf("���������������:");
	scanf("%d%d", &x, &y);
	printf("���������ӵ����꣺");
	scanf("%d%d", &x1, &y1);
	for (i = 1; i <= x; i++){
		for (j = 1; j <= y; j++){
			if (i == x1 && j == y1){
				continue;
			}
			if (i == 1 && j == 1){
				a[i][j] = 1;
			}
			else{
				a[i][j] = a[i - 1][j] + a[i][j - 1];
			}
		}
	}
	printf("���� %d�ֲ�ͬ��·��\n", a[x][y]);

	system("pause");
	return 0;
}