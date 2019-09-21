#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ṹ��������
typedef struct {
	char data[1000];//һǧλ�ĸ߾�
	int len;		//���ֳ���
}HighAcc;

void inverse(HighAcc *h){
	int start = 0, end = strlen(h->data) - 1;
	char tmp;

	h->len = end + 1;
	for (; start <= end; start++, end--){	//��������
		tmp = h->data[start];
		h->data[start] = h->data[end] - '0';//Ϊ�˽��ַ�ת��Ϊ����
		h->data[end] = tmp - '0';
	}
}

void dealNumber(HighAcc *a, HighAcc *b){
	HighAcc tmp = { 0 };
	a->len = strlen(a->data);
	b->len = strlen(b->data);

	if ((a->len < b->len) || (a->len == b->len) && strcmp(a->data, b->data) < 0){//����aС��b
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

// �߾����㷨
HighAcc minus(HighAcc m_num1, HighAcc m_num2){ //�ѽ�num1����Ϊ����
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
		m_num1.len--;//��sum�ĳ���
	}
	sum.len = m_num1.len;

	return sum;
}


//�����������ӡ��������ӡ�����󣬿���������˳��
void printNumber(HighAcc h){
	int i;
	for (i = h.len - 1; i >= 0; i--){
		putchar(h.data[i] + '0');	//������ת��Ϊ�ַ�
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