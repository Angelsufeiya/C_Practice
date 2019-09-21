#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ṹ��������
typedef struct {
	char data[1000];//һǧλ�ĸ߾�
	int len;		//�����ж೤
}HighAcc;

//��������洢(��������ҳˣ�
void dealNumber(HighAcc *h){
	int start = 0, end = strlen(h->data) - 1;
	char tmp;

	h->len = end + 1;
	for (; start <= end; start++, end--){
		tmp = h->data[start];
		h->data[start] = h->data[end] - '0';//Ϊ�˽��ַ�ת��Ϊ����
		h->data[end] = tmp - '0';
	}
}

//�����������ӡ������������˳��
void printNumber(HighAcc h){
	int i;
	for (i = h.len - 1; i >= 0; i--){
		putchar(h.data[i] + '0');	//������ת��Ϊ�ַ�
	}
}

//�߾��ȳ˷�
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
	sum.len = m_num1.len + m_num2.len - !sum.data[m_num1.len + m_num2.len - 1];//�õ�sum �ĳ���
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