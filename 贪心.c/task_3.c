//������n��ʯ�ӣ�ÿ��ʯ�ӵĸ�����ͬ�����ڽ�n��ʯ�Ӻϲ���һ��ʯ�ӣ�
//ÿ�κϲ�����ʯ�ӣ��ϲ������л����ʯ�Ӹ��������ʣ�ʯ������ͺ����ֱ��Ƕ��٣�

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void bubble1(int data[], int n){	//ð������(��С��������
	int i, j, tmp;

	for (i = 0; i < n - 1; i++){
		for (j = i; j < n - 1; j++){
			if (data[j] > data[j + 1]){
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}

void bubble2(int data[], int n){	//ð������(�ɴ�С����
	int i, j, tmp;

	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1; j++){
			if (data[j] < data[j + 1]){
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

	printf("�������ж��ٶ�ʯ�ӣ�");
	scanf("%d", &n);
	printf("������ÿ��ʯ���еĸ�����");
	for (i = 0; i < n; i++){
		scanf("%d", num + i);
	}
	for (i = 0; i < n - 1; i++){
		bubble1(num + i, n - i);
		num[i + 1] = num[i] + num[i + 1];
		sum += num[i + 1];
	}
	printf("ʯ������СΪ %d\n", sum);

	//for (i = 0; i < n - 1; i++){
	//	bubble2(num + i, n - i);
	//	sum += num[i] + num[i + 1];
	//	num[i + 1] = sum;
	//}
	//printf("ʯ�������Ϊ %d\n", sum);

	system("pause");
	return 0;
}