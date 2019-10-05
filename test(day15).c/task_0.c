//一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。

#include<stdio.h>
#include<stdlib.h>

void findNum(int * src, int n, int * pnum1, int * pnum2){
	int i, pos;
	int sum = 0;
	int num1 = 0, num2 = 0;

	for (i = 0; i < n; i++){
		sum ^= src[i];
	}
	//判断是1（按位寻找）的最低位
	for (pos = 0; !(sum & (1 << pos)); pos++){
		//不需要循环体
	}
	for (i = 0; i < n; i++){
		if (src[i] & (1 << pos)){
			num1 ^= src[i];
		}
		else{
			num2 ^= src[i];
		}
	}

	*pnum1 = num1;
	*pnum2 = num2;
}

int main0(){
	int arr[10] = { 2, 6, 8, 3, 10, 3, 2, 12, 8, 6 };
	int num1, num2;

	findNum(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
	printf("%d %d\n", num1, num2);

	system("pause");
	return 0;
}