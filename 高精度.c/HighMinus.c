#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//结构体重命名
typedef struct {
	char data[1000];//一千位的高精
	int len;		//数字长度
}HighAcc;

void inverse(HighAcc *h){
	int start = 0, end = strlen(h->data) - 1;
	char tmp;

	h->len = end + 1;
	for (; start <= end; start++, end--){	//逆序数组
		tmp = h->data[start];
		h->data[start] = h->data[end] - '0';//为了将字符转化为数字
		h->data[end] = tmp - '0';
	}
}

void dealNumber(HighAcc *a, HighAcc *b){
	HighAcc tmp = { 0 };
	a->len = strlen(a->data);
	b->len = strlen(b->data);

	if ((a->len < b->len) || (a->len == b->len) && strcmp(a->data, b->data) < 0){//数组a小于b
		inverse(a);
		inverse(b);
		tmp = *a;
		*a = *b;
		*b = tmp;
		putchar('-');
	}
	else{
		inverse(a);
		inverse(b);
	}
}

// 高精减算法
HighAcc minus(HighAcc m_num1, HighAcc m_num2){ //已将num1处理为大数
	HighAcc sum = { 0 };
	int i;
	int count = 0;

	for (i = 0; i < m_num1.len; i++){
		 m_num1.data[i] -= m_num2.data[i];
		if (m_num1.data[i] < 0){
			m_num1.data[i + 1] -= 1;
			m_num1.data[i] += 10;
		}
		sum.data[i] = m_num1.data[i];
	}
	while ((sum.data[--i] == 0)){
		m_num1.len--;//算sum的长度
	}
	sum.len = m_num1.len;

	return sum;
}


//数字再逆序打印（这样打印出来后，看起来就是顺序）
void printNumber(HighAcc h){
	int i;
	for (i = h.len - 1; i >= 0; i--){
		putchar(h.data[i] + '0');	//将数字转化为字符
	}
}

int main(){
	HighAcc num1 = { 0 };
	HighAcc num2 = { 0 };
	HighAcc sum;

	scanf("%s%s", num1.data, num2.data);

	dealNumber(&num1, &num2);

	sum = minus(num1, num2);

	printNumber(sum);
	putchar('\n');

	system("pause");
	return 0;
}