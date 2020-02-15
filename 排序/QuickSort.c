#include <stdio.h>
#include <stdlib.h>

//int a[101], n;//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ��

void quicksort(int * a, int left, int right) {
	int i, j, t, temp;
	if (left > right)
		return;
	temp = a[left]; //temp�д�ľ��ǻ�׼��
	i = left;
	j = right;

	while (i != j) { //˳�����Ҫ��Ҫ�ȴ��ұ߿�ʼ��
		while (a[j] >= temp && i < j)//�������������������
			j--;
		while (a[i] <= temp && i < j)//�������������Ҽ�����
			i++;
		if (i < j)//�����������������е�λ��
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	//���ս���׼����λ
	a[left] = a[i];
	a[i] = temp;
	quicksort(a, left, i - 1);//����������ߵģ�������һ���ݹ�Ĺ���
	quicksort(a, i + 1, right);//���������ұߵ� ��������һ���ݹ�Ĺ���
}

int main() {
	//��������
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//	scanf("%d", &a[i]);

	int i;
	int arr[] = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 };
	int num = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, num-1); //�����������
	printf("���������Ľ��Ϊ��");

	for (i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}