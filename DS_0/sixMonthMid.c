// 计算Func2的时间复杂度? N
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

// 计算Func3的时间复杂度? M+N
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


// 计算Func4的时间复杂度? 1
void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

// 计算strchr的时间复杂度? N
const char * strchr(const char * str, int character);


// 计算BubbleSort的时间复杂度? n^2
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

// 计算BinarySearch的时间复杂度? 最好是1  最坏是log2n(2为底数，n为对数）
//时间复杂度一般看最坏
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


// 计算阶乘递归Factorial的时间复杂度?  基本操作递归了N次，时间复杂度为O(N)。
long long Factorial(int N)
{
	return N < 2 ? N : Factorial(N - 1)*N; 
}


// 计算斐波那契递归Fibonacci的时间复杂度? 基本操作递归了2^N次，时间复杂度为O(2^N)
long long Fibonacci(int N)
{
	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}