#include<stdio.h>
#include<stdlib.h>

#if 0
int main(){
	int a = 5, b = 7;
	int max = (a + b + abs(a - b))/2;	//�õ�����
	int min = (a + b - abs(a - b))/2;	//�õ�С��

	printf("����Ϊ%d\nС��Ϊ%d\n", max, min);

	system("pause");
	return 0;
}
#endif

int main(){
	char a[] = "abc\012abc";
	char b[] = "abc\0aba";
	int n = sizeof(a);
	int m = sizeof(b);

	printf("%d,%d\n", n, m);
	n = strlen(a);//strlen�����ַ�����ʵ�ʳ��ȣ�������\0)
	m = strlen(b);
	printf("%d,%d", n, m);

	system("pause");
	return 0;
}