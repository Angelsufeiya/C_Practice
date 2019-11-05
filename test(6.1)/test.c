#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int main() {
//	//代码1
//	int num = 0;
//	scanf("%d", &num);
//	//int arr[num] = { 0 };//数组的括号内不应该写成变量
//
//	//代码2
//	int* ptr = NULL;
//	ptr = (int*)malloc(num*sizeof(int));
//	if (NULL != ptr)//判断ptr指针是否为空
//	{
//		int i = 0;
//		for (i = 0; i<num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//释放ptr所指向的动态内存（释放前和释放后，ptr所指向的地址相同，只是释放后变得无效）
//	ptr = NULL;//是否有必要?		这个是要指向空的，因为free释放之后它还是指向那块空间，所以要置空
//
//	return 0;
//}

//int main() {
//	int *p = calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		//使用空间
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int *p = (int *)malloc(10 * sizeof(int));//原来的10个内存空间
////在使用过程中发现p长度不够，需要扩展成20个内存空间
////循环的方法
//int *q = (int *)malloc(20 * sizeof(int));
//for (int i = 0; i < 10; i++)
//{
//	q[i] = p[i];
//}
//free(p);
//p = q;
//q = NULL;
//
////realloc()函数
//p = (int *)realloc(p, 20 * sizeof(int));


//int main() {
//	int *ptr = malloc(100);
//	if (ptr != NULL){
//		//业务处理 
//	}
//	else{
//		exit(EXIT_FAILURE);
//	}
//	//扩展容量
//
//	//代码1
//	ptr = realloc(ptr, 1000);//这样可以吗?(如果申请失败会如何?)
//	//这样申请是有很大弊端的，假设申请失败，之前的数据也会消失
//	//代码2
//	int*p = NULL;
//	p = realloc(ptr, 1000); 
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//业务处理 
//	free(ptr); 
//	return 0;
//}

void test() {
	int *p = (int *)malloc(INT_MAX / 4);
	*p = 20;//如果p的值是NULL，就会有问题
	printf("%d", *p);
	free(p);
}
int main(){
	test();
	return 0;
}