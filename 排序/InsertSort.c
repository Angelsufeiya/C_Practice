#include <stdio.h>
#include <stdlib.h>

void BlnInsertSort(int a[], int len){
	int i, j, temp;
	int low, high, mid;

	for (i = 1; i < len; i++)
	{
		temp = a[i];//��Ҫ�����Ԫ�ؿ���һ��
			
		low = 0, high = i - 1;
		while (low <= high)	//�ڣۣ죮������ݡ���Ѱ�Ҳ����λ��
		{
			mid = (low + high) / 2;  //�۰�
			if (a[mid] >= temp)
			{
				high = mid - 1;    //���ڵͰ���
			}
			else{
				low = mid + 1;     //���ڸ߰��� 
			}
		}
		for (j = i - 1; j >= mid ; --j)
		{
			a[j + 1] = a[j];   //��¼����
		}
		a[j + 1] = temp;
	}
}

int main(){

	int i;
	int a[10] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70 };
	BlnInsertSort(a, 10);

	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);

	system("pause");
	return 0;
}

int main_0()
{
	int i, j;
	int temp;
	int a[] = { 900, 2, 3, -58, 34, 76, 32, 43, 56, -70 };
	int n = sizeof(a) / sizeof(a[0]);
	for (i = 1; i < n; i++){
		temp = a[i];
		for (j = i - 1; j >= 0; j--){
			//������temp��������ƶ�һ��
			if (a[j]>temp){
				a[j + 1] = a[j];//��¼j��ֵҲ����tempҪ�����λ��
			}
			else{
				break;
			}
		}
		a[j + 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}

