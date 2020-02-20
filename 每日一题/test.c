//����:Fibonacci����
//Fibonacci��������������� : 
//F[0] = 0 , F[1] = 1
//for each i �� 2 : F[i] = F[i - 1] + F[i - 2]
//��ˣ�Fibonacci���о����� : 0, 1, 1, 2, 3, 5, 8, 13, ...��
//��Fibonacci�����е������ǳ�ΪFibonacci����
//����һ ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX - 1����X + 1��
//���ڸ���һ����N������ ��Ҫ���ٲ����Ա�ΪFibonacci����
//�������� :
//����Ϊһ��������N(1 �� N �� 1, 000, 000) 
//������� : 
//���һ����С�Ĳ�����ΪFibonacci��
//ʾ��1:
//����
//15
//���
//2
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

int fib(int n){
	if (n < 2){
		return 1;
	}
	else{
		return fib(n - 1) + fib(n - 2);
	}
}
int main_0(){
	int input = 0;
	int n = 2;
	scanf("%d", &input);
	while (1){
		if (input > fib(n - 1) && input <= fib(n)){
			printf("%d\n", input - fib(n - 1) > fib(n) - input ? fib(n) - input : input - fib(n - 1));
			break;
		}
		else {
			n++;
		}
	}
	return 0;
}

int main__0() {
	int num = 0;
	scanf("%d", &num);
	int f1 = 0, f2 = 1, f3 = f1 + f2;
	while (1)
	{
		if (f2 == num)
		{
			printf("%d\n", 0);
			break;
		}
		else if (f2 > num)
		{
			if (abs(f2 - num) > abs(f1 - num))
			{
				printf("%d\n", abs(f1 - num));
			}
			else
			{
				printf("%d\n", abs(f2 - num));
			}
			break;
		}
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
	}
	return 0;
}

//��дһ��������������һ���޷�������������������Ʊ��ʽ������λ��Ϊ ��1�� �ĸ���

int OneCountBinary(unsigned int n){
	int count = 0;
	while(n){
		if (n & 1){
			++count;
		}
		n = n >> 1;
	}
	return count;
}

int main___0(){
	int input;
	scanf("%d", &input);
	printf("%d", OneCountBinary(input));

	return 0;
}

//��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
//��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
//����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���

void reverseString(char* str, int size){
	int i;
	for (i = 0; i < size / 2; i++){
		char tmp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
	}
}

int main____0(){
	char str[] = "hello";
	int len = strlen(str);
	
	reverseString(str, len);
	printf("%s", str);

	return 0;
}

//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
//��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
//��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��

void quickSort(int * a, int left, int right){
	int i, j, tmp, t;
	if (left > right){
		return;
	}
	tmp = a[left];
	i = left;
	j = right;
	while (i != j){
		while (a[j] >= tmp && i < j)
			--j;
		while (a[i] <= tmp && i < j)
			++i;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	a[left] = a[j];
	a[j] = tmp;
	quickSort(a, left, j - 1);
	quickSort(a, j + 1, right);
}

void quickSort_0(int * a, int left, int right){
	if (left > right)
		return;
	int key = a[left];
	int begin = left;
	int end = right;

	while (begin != end){
		while (begin < end && a[end] >= key)
			--end;
		a[begin] = a[end];
		while (begin < end && a[begin] <= key)
			++begin;
		a[end] = a[begin];
	}
	a[begin] = key;
	quickSort(a, left, end - 1);
	quickSort(a, end + 1, right);
}

int checkIsMoreThanHalf(int * arr, int result, int len){
	int i;
	int count = 0;
	
	for (i = 0; i < len; i++){
		if (arr[i] == result)
			++count;
	}
	if (count >(len - 1) / 2)
		return 1;
	else
		return 0;
}

int checkMoreThanHalf(int * arr){
	int len = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, len - 1);
	int mid = len / 2;
	int result = arr[mid];
	if (!checkIsMoreThanHalf(arr, result, len))
	{
		result = 0;
	}
	return result;
}

int MAX_Arry(int* arr, int sz)
{
	int MAX = arr[0];
	int sum = arr[0];
	int i = 1;

	//��Ŀ������������������Ҳ�и�������������������
	if (arr == NULL || sz <= 1)
		return 0;
	for (i = 1; i < sz; i++)
	{
		if (sum < 0)
			sum = arr[i];
		else
		{
			sum += arr[i];
		}
		if (sum > MAX)
			MAX = sum;
	}
	return MAX; 
}
int main() {
	int arr[] = { 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", MAX_Arry(arr, len));
	return 0;
}