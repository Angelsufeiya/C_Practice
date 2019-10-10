#include<stdio.h>
int main(){
	//int a[] = { 1, 2, 3, 4 };	//一维数组
	//printf("%d\n", sizeof(a));		//16(int[4])
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
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	return 0;
}
