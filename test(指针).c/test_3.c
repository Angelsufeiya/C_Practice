#include<stdio.h>
#include<string.h>
int main3(){
	//一维数组

	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));		//16字节(int[4])
	//printf("%d\n", sizeof(a + 0));	//4(int *)
	//printf("%d\n", sizeof(*a));		//4(int)
	//printf("%d\n", sizeof(a + 1));	//4(int *)
	//printf("%d\n", sizeof(a[1]));	//4(int)
	//printf("%d\n", sizeof(&a));		//4(int[4] *)
	//printf("%d\n", sizeof(*&a));	//16(int[4])
	//printf("%d\n", sizeof(&a + 1));	//4(int[4] *)
	//printf("%d\n", sizeof(&a[0]));	//4(int *)
	//printf("%d\n", sizeof(&a[0] + 1));//4(int *)

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//字符数组
	//printf("%d\n", sizeof(arr));	//6(char[6])
	//printf("%d\n", sizeof(arr + 0));//4(char *)
	//printf("%d\n", sizeof(*arr));	//1(char)
	//printf("%d\n", sizeof(arr[1]));	//1(char)
	//printf("%d\n", sizeof(&arr));	//4(arr[6] *)
	//printf("%d\n", sizeof(&arr + 1));//4(arr[6] *)
	//printf("%d\n", sizeof(&arr[0] + 1));//4(char *)

	//printf("%d\n", strlen(arr));	//不确定的值
	//printf("%d\n", strlen(arr + 0));//不确定的值
	//printf("%d\n", strlen(*arr));	//'a'
	//printf("%d\n", strlen(arr[1]));	//'b'
	//printf("%d\n", strlen(&arr));	//不确定的值
	//printf("%d\n", strlen(&arr + 1));//不确定的值
	//printf("%d\n", strlen(&arr[0] + 1));//不确定的值

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));	//7(char[7])
	//printf("%d\n", sizeof(arr + 0));//4(char *)
	//printf("%d\n", sizeof(*arr));	//1(char)
	//printf("%d\n", sizeof(arr[1]));	//1(char)
	//printf("%d\n", sizeof(&arr));	//4(char[7] *)
	//printf("%d\n", sizeof(&arr + 1));//4(char[7] *)
	//printf("%d\n", sizeof(&arr[0] + 1));//4(char *)

	//printf("%d\n", strlen(arr));	//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));	//是 'a'(char)
	////printf("%d\n", strlen(arr[1]));//是 (char)
	////printf("%d\n", strlen(&arr));	//6 不是(char *)
	////printf("%d\n", strlen(&arr + 1));//不确定的值
	//printf("%d\n", strlen(&arr[0] + 1));//5

	char *p = "abcdef";
	//printf("%d\n", sizeof(p));		//4(char *)
	//printf("%d\n", sizeof(p + 1));	//4(char *)
	//printf("%d\n", sizeof(*p));		//1(char)
	//printf("%d\n", sizeof(p[0]));	//1(char)
	//printf("%d\n", sizeof(&p));		//4(char * *)
	//printf("%d\n", sizeof(&p + 1));	//4(char * *）
	//printf("%d\n", sizeof(&p[0] + 1));//4（char *)

	printf("%d\n", strlen(p));		//6
	printf("%d\n", strlen(p + 1));	//5
	//printf("%d\n", strlen(*p));		//'a' (char)
	//printf("%d\n", strlen(p[0]));	//'a' (char)
	//printf("%d\n", strlen(&p));		//不是（char *)
	//printf("%d\n", strlen(&p + 1));	//不确定的值
	printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组

	//int a[3][4] = { 0 };

	//printf("%d\n", sizeof(a));			//48（int [3][4])
	//printf("%d\n", sizeof(a[0][0]));	//4（int)
	//printf("%d\n", sizeof(a[0]));		//16(int [4])
	//printf("%d\n", sizeof(a[0] + 1));	//4 (int *)
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 (int)
	//printf("%d\n", sizeof(a + 1));		//4 (int[4] *)
	//printf("%d\n", sizeof(*(a + 1)));	//16(int[4])
	//printf("%d\n", sizeof(&a[0] + 1));	//4 (int *）
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 (int [4])
	//printf("%d\n", sizeof(*a));			//16(int[4])
	//printf("%d\n", sizeof(a[3]));		//16(int[4])

	return 0;
}