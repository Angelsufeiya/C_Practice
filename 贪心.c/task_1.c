//��������(̰�ģ���������һ��������ȥ��һ���鱦�꣬��������Щ�����д���С���������İ���ֻ��װ��20�����Ʒ��
//������������Ʒ���ֱ�������2�5�7�10�12��������������ܷ��¼�����Ʒ��

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
	int i, sum = 0;

	printf("��������Ʒ�������ͱ�����С��");
	scanf("%d%d", &num, &size);
	printf("������ÿ����Ʒ������:");
	for (i = 0; i < num; i++){
		scanf("%d", weight + i);
	}
	bubble(weight, num);	//����Ʒ��������С��������
	for (i = 0; sum + weight[i] <= size && i < num; i++){
		sum += weight[i];
	}
	printf("�����ܷ��µ��������Ϊ %d��\n", i);

	system("pause");
	return 0;
}