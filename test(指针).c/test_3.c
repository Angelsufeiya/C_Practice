#include<stdio.h>
#include<string.h>
int main3(){
	//һά����

	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));		//16�ֽ�(int[4])
	//printf("%d\n", sizeof(a + 0));	//4(int *)
	//printf("%d\n", sizeof(*a));		//4(int)
	//printf("%d\n", sizeof(a + 1));	//4(int *)
	//printf("%d\n", sizeof(a[1]));	//4(int)
	//printf("%d\n", sizeof(&a));		//4(int[4] *)
	//printf("%d\n", sizeof(*&a));	//16(int[4])
	//printf("%d\n", sizeof(&a + 1));	//4(int[4] *)
	//printf("%d\n", sizeof(&a[0]));	//4(int *)
	//printf("%d\n", sizeof(&a[0] + 1));//4(int *)

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//�ַ�����
	//printf("%d\n", sizeof(arr));	//6(char[6])
	//printf("%d\n", sizeof(arr + 0));//4(char *)
	//printf("%d\n", sizeof(*arr));	//1(char)
	//printf("%d\n", sizeof(arr[1]));	//1(char)
	//printf("%d\n", sizeof(&arr));	//4(arr[6] *)
	//printf("%d\n", sizeof(&arr + 1));//4(arr[6] *)
	//printf("%d\n", sizeof(&arr[0] + 1));//4(char *)

	//printf("%d\n", strlen(arr));	//��ȷ����ֵ
	//printf("%d\n", strlen(arr + 0));//��ȷ����ֵ
	//printf("%d\n", strlen(*arr));	//'a'
	//printf("%d\n", strlen(arr[1]));	//'b'
	//printf("%d\n", strlen(&arr));	//��ȷ����ֵ
	//printf("%d\n", strlen(&arr + 1));//��ȷ����ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//��ȷ����ֵ

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
	////printf("%d\n", strlen(*arr));	//�� 'a'(char)
	////printf("%d\n", strlen(arr[1]));//�� (char)
	////printf("%d\n", strlen(&arr));	//6 ����(char *)
	////printf("%d\n", strlen(&arr + 1));//��ȷ����ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//5

	char *p = "abcdef";
	//printf("%d\n", sizeof(p));		//4(char *)
	//printf("%d\n", sizeof(p + 1));	//4(char *)
	//printf("%d\n", sizeof(*p));		//1(char)
	//printf("%d\n", sizeof(p[0]));	//1(char)
	//printf("%d\n", sizeof(&p));		//4(char * *)
	//printf("%d\n", sizeof(&p + 1));	//4(char * *��
	//printf("%d\n", sizeof(&p[0] + 1));//4��char *)

	printf("%d\n", strlen(p));		//6
	printf("%d\n", strlen(p + 1));	//5
	//printf("%d\n", strlen(*p));		//'a' (char)
	//printf("%d\n", strlen(p[0]));	//'a' (char)
	//printf("%d\n", strlen(&p));		//���ǣ�char *)
	//printf("%d\n", strlen(&p + 1));	//��ȷ����ֵ
	printf("%d\n", strlen(&p[0] + 1));//5

	//��ά����

	//int a[3][4] = { 0 };

	//printf("%d\n", sizeof(a));			//48��int [3][4])
	//printf("%d\n", sizeof(a[0][0]));	//4��int)
	//printf("%d\n", sizeof(a[0]));		//16(int [4])
	//printf("%d\n", sizeof(a[0] + 1));	//4 (int *)
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 (int)
	//printf("%d\n", sizeof(a + 1));		//4 (int[4] *)
	//printf("%d\n", sizeof(*(a + 1)));	//16(int[4])
	//printf("%d\n", sizeof(&a[0] + 1));	//4 (int *��
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 (int [4])
	//printf("%d\n", sizeof(*a));			//16(int[4])
	//printf("%d\n", sizeof(a[3]));		//16(int[4])

	return 0;
}