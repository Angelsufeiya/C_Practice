#include <stdio.h>
#include <stdlib.h>


#if 0
int main(){
	int i = 10;
	int j = 20;

	printf("%d %d", i, j);
	printf("i = %d j = %d", i, j);
	printf("%d\n", i);
	printf("%p", &i);
	//%d��������Ʒ���d ��ʾ��ʮ���ƣ������ i ���������
	printf("%x\n", i);
	printf("%X\n", i);
	printf("%#x\n", i);
	printf("%#X\n", i);
	printf("%%d\n");
	printf("\\\n");
	printf("\"\"\n");
	printf("hello word!\n");

	system("pause");
	return 0;
}
#endif

int main(){
	int a = -10;
	unsigned int b = 5;
	if (a + b > 0){
		printf(">0\n");//����ִ��
	}
	else{
		printf("<0\n");
	}
	return 0;
}