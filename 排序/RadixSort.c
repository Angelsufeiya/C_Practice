#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�õ������Ϊ��λ��
int get_max_digit(int array[], int n)
{
	int digit = 0, max = array[0];
	int i;

	for (i = 1; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	while (max)
	{
		digit++;
		max /= 10;
	}
	return digit;
}

//��������
void RadixSort(int array[], int n)
{
	//������ʱ����
	int *tmp = (int *)malloc(sizeof(int)*n);
	//λ��������������������
	int digit = get_max_digit(array, n);
	//����Ͱ
	int count[10];
	int r, i, d;
	for (r = 1; r <= digit; r++)
	{
		//���ü���Ͱ
		memset(count, 0, 10 * sizeof(int));
		//�����ݴ洢����ʱ����
		memcpy(tmp, array, n*sizeof(int));
		d = i = 1;

		while (i < r)
		{
			i++;
			d *= 10;
		}
		//ͳ��ÿ��Ͱ�еļ�¼��
		for (i = 0; i < n; i++)
			count[(array[i] / d) % 10]++;
		//��tmp�е�λ�����η����ÿ��Ͱ
		for (i = 1; i < 10; i++)
			count[i] += count[i - 1];
		//�ɺ���ǰ������ʱ��������ݸ��Ƶ�array��
		for (i = n - 1; i >= 0; i--)
			array[--count[(tmp[i] / d) % 10]] = tmp[i];
	}
}

//��ӡ����
void print(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 53, 542, 3, 63, 14, 214, 154, 748, 616 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("ԭ����Ϊ��");
	print(arr, n);
	printf("��������Ϊ��");
	RadixSort(arr, n);
	print(arr, n);

	system("pause");
	return 0;
}