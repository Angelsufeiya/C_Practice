#include<stdio.h>

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中
//所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。


int main1(){
	int num[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0, j = sizeof(num) / sizeof(num[0]) - 1;
	int tmp;

	while (num[i++] % 2 && i <= j);
	while (num[j--] % 2 == 0 && j >= i);
	while (i - 1 <= j + 1){	//全奇数、全偶数被拦住
		tmp = num[i - 1];
		num[i - 1] = num[j + 1];
		num[j + 1] = tmp;

		while (num[i++] % 2);
		while (num[j--] % 2 == 0);
	}
	for (i = 0; i < 10; i++){
		printf("%d ", num[i]);
	}

	return 0;
}

int __main(){
	int num[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0, j = sizeof(num) / sizeof(num[0]) - 1;
	int tmp;

	while (1){
		while (num[i] % 2){
			i++;
		}
		while (num[j] % 2 == 0){
			j--;
		}
		if (i >= j){
			break;
		}
			tmp = num[i];
			num[i] = num[j];
			num[j] = tmp;
	}
	for (i = 0; i < 10; i++){
		printf("%d ", num[i]);
	}

	return 0;
}

int _main(){
	int num[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int odd[10] = { 0 }, even[10] = { 0 };
	int count_odd = 0, count_even = 0;
	int i;

	for (i = 0; i < 10; i++){
		if (num[i] % 2){
			odd[count_odd++] = num[i];
		}
		else{
			even[count_even++] = num[i];
		}
	}
	for (i = 0; i < count_odd; i++){
		num[i] = odd[i];
	}
	for (i = 0; i < count_even; i++){
		num[count_odd + i] = even[i];
	}
	for (i = 0; i < 10; i++){
		printf("%d ", num[i]);
	}

	return 0;
}
