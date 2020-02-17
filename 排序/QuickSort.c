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

void quicksort2(int * a, int left, int right){
	if (left > right)
		return;
	int key = a[left];
	int begin = left;
	int end = right;
	while (begin<end){
		while (a[end]>key && begin<end){
			end--;
		}
		a[begin] = a[end];
		while (a[begin]<key && begin<end){
			begin++;
		}
		a[end] = a[begin];
	}
	a[end] = key;
	quicksort2(a, left, end - 1);//����������ߵģ�������һ���ݹ�Ĺ���
	quicksort2(a, end + 1, right);//���������ұߵ� ��������һ���ݹ�Ĺ���
}

void Swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void quicksort3(int * a, int left, int right){
	if (left > right)
		return;
	int key = a[left];
	int cur = left + 1;
	int prev = left;
	while (cur <= right){
		if (a[cur]<key && ++prev != cur){
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	Swap(&a[prev], &a[left]);//��������ʱ��������ʵ�����ݵĵ�ַ��������key���档
	quicksort3(a, left, prev - 1);//����������ߵģ�������һ���ݹ�Ĺ���
	quicksort3(a, prev + 1, right);//���������ұߵ� ��������һ���ݹ�Ĺ���
}

int main() {
	//��������
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//	scanf("%d", &a[i]);

	int i;
	int arr[] = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 };
	int num = sizeof(arr) / sizeof(arr[0]);
	//quicksort(arr, 0, num-1); //����������ã�hoare����
	//quicksort2(arr, 0, num - 1);//����������ã��ڿӷ���
	quicksort3(arr, 0, num - 1);//����������ã�˫ָ�뷨��
	printf("���������Ľ��Ϊ��");

	for (i = 0; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}