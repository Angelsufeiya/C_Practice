//�����㷨֮0_1�������⣨P1048 ��ҩ��

#define _CRT_SECURE_NO_WARNINGS
#define MAX(a, b) ( (a) > (b) ? (a) : (b))

#include<stdio.h>

#if 0
//��ά����ⷨ
int main(){
	int data[101][1001] = { 0 };
	int size, n;
	int weight[101] = { 0 };
	int value[101] = { 0 };
	int i, j;

	scanf("%d%d", &size, &n);//������С����Ʒ���ࣨ�����˱��Ĵ�С��
	
	for (i = 1; i <= n; i++){
		scanf("%d%d", &weight[i], &value[i]);
	}
	for (i = 1; i <= n; i++){
		for (j = 1; j <= size; j++){
			if (j < weight[i]){
				data[i][j] = data[i - 1][j];
			}
			else{
				data[i][j] = MAX(data[i - 1][j], data[i - 1][j - weight[i]] + value[i]);
			}
		}
	}
	printf("%d", data[n][size]);

	return 0;
}
#else
//һά����ⷨ
int main(){
	int data[1001] = { 0 };
	int size, n;
	int weight[101] = { 0 };
	int value[101] = { 0 };
	int i, j;

	scanf("%d%d", &size, &n);//������С����Ʒ���ࣨ�����˱��Ĵ�С��

	for (i = 1; i <= n; i++){
		scanf("%d%d", weight + i, value + i);//arr[i] = *(arr+i) ǰ���ǵ�ַ������ݣ������ǵ�ַ
	}
	for (i = 1; i <= n; i++){
		for (j = size; j >= weight[i]; j--){
		//for (j = weight[i]; j <= size; j++){//��ȫ����ֻ�������һ�д���
			data[j] = MAX(data[j], data[j - weight[i]] + value[i]);
		}
	}
	printf("%d", data[size]);

	return 0;
}
#endif