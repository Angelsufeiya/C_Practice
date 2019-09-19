#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {
	char data[1000];	//一千位的高精
	int len;	//数字有多长
}HighAcc;

void dealNumber(HighAcc *h){
	int start = 0, end = strlen(h->data) - 1;
	char tmp;

	h->len = end + 1;
	for (; start <= end; start++, end--){
		tmp = h->data[start];
		h->data[start] = h->data[end] - '0';
		h->data[end] = tmp - '0';
	}
}

void printNumber(HighAcc h){
	int i;
	for (i = 0; i < h.len; i++){
		putchar(h.data[i] + '0');
	}
}

int main(){
	HighAcc num1, num2, sum;

	scanf("%s%s", num1.data, num2.data);

	dealNumber(&num1);
	dealNumber(&num2);

	//int maxlen = num1.len >= num2.len ? num1.len : num2.len;

	//for (int i = 0; i < maxlen; i++){

	//}

	printNumber(num1);
	putchar('\n');
	printNumber(num2);

	system("pause");
	return 0;
}