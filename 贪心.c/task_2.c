//������n����Ҫ���ӣ��ӱ��кܶബ��ÿ���������2�ˣ����ĳ���Ϊ100kg�����ӵĴ����Ƕ��٣�

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void bubble(int data[], int n){	//ð������(��������׵�����
	int i, j, tmp;

	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1 - i; j++){
			if (data[j] > data[j + 1]){
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}

int main(){
	int num, size;
	int weight[20] = { 0 };
	int i, j;
	int sum = 0, count = 0;

	printf("�����밶���˵������ʹ��ĳ��أ�");
	scanf("%d%d", &num, &size);
	printf("������ÿ���˵����أ�");
	for (i = 0; i < num; i++){
		scanf("%d", weight + i); 
	}
	bubble(weight, num);	//���˵�������С��������

	for (i = 0, j = num - 1; i < j; j--){
		if (weight[i] + weight[j] <= size){
			i++;
		}
		count++;
	}
	printf("���ӵĴ����� %d��\n", count);

	system("pause");
	return 0;
}