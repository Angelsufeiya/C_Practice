// ����Func2��ʱ�临�Ӷ�? N
void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}
	int M = 10;
	while (M--)
	{
		++count;
	}
	printf("%d\n", count);
}

// ����Func3��ʱ�临�Ӷ�? M+N
void Func3(int N, int M) {
	int count = 0;
	for (int k = 0; k < M; ++k)
	{
		++count;
	}
	for (int k = 0; k < N; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}


// ����Func4��ʱ�临�Ӷ�? 1
void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

// ����strchr��ʱ�临�Ӷ�? N
const char * strchr(const char * str, int character);


// ����BubbleSort��ʱ�临�Ӷ�? n^2
void BubbleSort(int* a, int n) {
	int end, i;
	assert(a);
	for (end = n; end > 0; --end)
	{
		int exchange = 0;
		for (i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	} 
}

// ����BinarySearch��ʱ�临�Ӷ�? �����1  ���log2n(2Ϊ������nΪ������
//ʱ�临�Ӷ�һ�㿴�
int BinarySearch(int* a, int n, int x) {
	assert(a);
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid;
		else
			return mid;
	}
	return -1;
}


// ����׳˵ݹ�Factorial��ʱ�临�Ӷ�?  ���������ݹ���N�Σ�ʱ�临�Ӷ�ΪO(N)��
long long Factorial(int N)
{
	return N < 2 ? N : Factorial(N - 1)*N; 
}


// ����쳲������ݹ�Fibonacci��ʱ�临�Ӷ�? ���������ݹ���2^N�Σ�ʱ�临�Ӷ�ΪO(2^N)
long long Fibonacci(int N)
{
	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}