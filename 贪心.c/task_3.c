//

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
	int i, n;
	int num[20] = { 0 };
	int sum = 0;

	printf("�����밶���˵������ʹ��ĳ��أ�");
	scanf("%d", &n);
	printf("������ÿ���˵����أ�");
	for (i = 0; i < num; i++){
		scanf("%d", num + i);
	}
	bubble(num, i);	//���˵�������С��������



	system("pause");
	return 0;
}