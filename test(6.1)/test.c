#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int main() {
//	//����1
//	int num = 0;
//	scanf("%d", &num);
//	//int arr[num] = { 0 };//����������ڲ�Ӧ��д�ɱ���
//
//	//����2
//	int* ptr = NULL;
//	ptr = (int*)malloc(num*sizeof(int));
//	if (NULL != ptr)//�ж�ptrָ���Ƿ�Ϊ��
//	{
//		int i = 0;
//		for (i = 0; i<num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//�ͷ�ptr��ָ��Ķ�̬�ڴ棨�ͷ�ǰ���ͷź�ptr��ָ��ĵ�ַ��ͬ��ֻ���ͷź�����Ч��
//	ptr = NULL;//�Ƿ��б�Ҫ?		�����Ҫָ��յģ���Ϊfree�ͷ�֮��������ָ���ǿ�ռ䣬����Ҫ�ÿ�
//
//	return 0;
//}

//int main() {
//	int *p = calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		//ʹ�ÿռ�
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int *p = (int *)malloc(10 * sizeof(int));//ԭ����10���ڴ�ռ�
////��ʹ�ù����з���p���Ȳ�������Ҫ��չ��20���ڴ�ռ�
////ѭ���ķ���
//int *q = (int *)malloc(20 * sizeof(int));
//for (int i = 0; i < 10; i++)
//{
//	q[i] = p[i];
//}
//free(p);
//p = q;
//q = NULL;
//
////realloc()����
//p = (int *)realloc(p, 20 * sizeof(int));


//int main() {
//	int *ptr = malloc(100);
//	if (ptr != NULL){
//		//ҵ���� 
//	}
//	else{
//		exit(EXIT_FAILURE);
//	}
//	//��չ����
//
//	//����1
//	ptr = realloc(ptr, 1000);//����������?(�������ʧ�ܻ����?)
//	//�����������кܴ�׶˵ģ���������ʧ�ܣ�֮ǰ������Ҳ����ʧ
//	//����2
//	int*p = NULL;
//	p = realloc(ptr, 1000); 
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//ҵ���� 
//	free(ptr); 
//	return 0;
//}

void test() {
	int *p = (int *)malloc(INT_MAX / 4);
	*p = 20;//���p��ֵ��NULL���ͻ�������
	printf("%d", *p);
	free(p);
}
int main(){
	test();
	return 0;
}