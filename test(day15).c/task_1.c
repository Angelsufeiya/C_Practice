//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(){
	int money, value, n;
	int cover = 0, sum = 0;

	printf("��������ӵ�ж���Ǯ,һƿ��ˮ����Ԫ�Ͷ��ٸ���ƿ�ܻ�һƿ��ˮ��");
	scanf("%d%d%d", &money, &value, &n);
	cover = money / value;//�ʼ�������ˮ��
	sum = cover;//ͳ�ƺ���ˮ��ƿ��
	
	while (cover >= n) {
		sum += cover / n;//ͳ�ƺ���ˮ��ƿ��
		cover = cover / n + cover % n;//��ƿ����
	}

	if (cover == n - 1){
		printf("������������ˣ��ܺ�%dƿ\n", sum);
		printf("����������ˣ����ܺ�%dƿ\n", sum + 1);
	}
	else{
		printf("�����ܲ������ˣ�ֻ�ܺ�%dƿ\n", sum);
	}

	system("pause");
	return 0;
}