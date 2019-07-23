#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

void print_mul(n){
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++){
			printf("%2d*%2d=%-2d ", j, i, i*j);
			//%2d：表示至少为2的宽度打印出来
			//%02d：表示至少为2的宽度打印出来，前面缺少的位补0
			//%-2d：表示至少为2的宽度打印出来，左对齐
		}
		printf("\n");
	}
}

int main(){
	int n = 0;
	scanf("%d", &n);
	print_mul(n);

	system("pause");
	return 0;
}
