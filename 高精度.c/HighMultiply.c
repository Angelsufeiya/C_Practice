#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//结构体重命名
typedef struct {
	char data[1000];//一千位的高精
	int len;		//数字有多长
}HighAcc;

//数字逆序存储(数组从左到右乘）
void dealNumber(HighAcc *h){
	int start = 0, end = strlen(h->data) - 1;
	char tmp;

	h->len = end + 1;
	for (; start <= end; start++, end--){
		tmp = h->data[start];
		h->data[start] = h->data[end] - '0';//为了将字符转化为数字
		h->data[end] = tmp - '0';
	}
}

//数子再逆序打印（看起来就是顺序）
void printNumber(HighAcc h){
	int i;
	for (i = h.len - 1; i >= 0; i--){
		putchar(h.data[i] + '0');	//将数字转化为字符
	}
}

//高精度乘法
HighAcc mul(HighAcc m_num1, HighAcc m_num2){
	HighAcc sum = { 0 };
	int i, j, tmp;
	
	if ((m_num1.len == 1 && m_num1.data[0] == 0) || (m_num2.len == 1 && m_num2.data[0] == 0)){
		sum.len = 1;
		return sum;
	}

	for (i = 0; i < m_num1.len; i++){
		for (j = 0; j < m_num2.len; j++){
			tmp = m_num1.data[i] * m_num2.data[j] + sum.data[i + j];
			sum.data[i + j] = tmp % 10;
			sum.data[i + j + 1] += tmp / 10;
		}
	}
	sum.len = m_num1.len + m_num2.len - !sum.data[m_num1.len + m_num2.len - 1];//得到sum 的长度
	return sum;
}

int main(){
	HighAcc num1 = { 0 };
	HighAcc num2 = { 0 };
	HighAcc sum;

	scanf("%s%s", num1.data, num2.data);

	dealNumber(&num1);
	dealNumber(&num2);

	sum = mul(num1, num2);

	printNumber(sum);
	putchar('\n');

	system("pause");
	return 0;
}