#if 0
#include <stdio.h>

void print_arr1(int arr[3][5], int row, int col)
{
	int i, j;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col)
{
	int i, j;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	print_arr1(arr, 3, 5);
	//������arr����ʾ��Ԫ�صĵ�ַ 
	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ�� 
	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ 
	//��������ָ��������
	print_arr2(arr, 3, 5);

	return 0;
}
#endif

#if 0
#include <stdio.h>

void test(int arr[])//ok
{}
void test(int arr[10])//ok
{}
void test(int *arr)//ok
{}
void test2(int *arr[20])//ok
{}
void test2(int **arr)//ok
{}
int main()
{
	int arr[10] = { 0 };
	int *arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}
#endif
#if 0
void test(int arr[3][5])//ok 
{}
void test(int arr[][])//��OK
{}
void test(int arr[][5])//ok
{}
//�ܽ�:��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣
void test(int *arr)//��ok
{}
void test(int* arr[5])//��ok
{}
void test(int(*arr)[5])//ok
{}
void test(int **arr)//��ok
{}
int main() {
	int arr[3][5] = { 0 };
	test(arr);
	return 0;
}
#endif
