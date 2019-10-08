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
	//%d是输出控制符，d 表示是十进制，后面的 i 是输出参数
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

#if 0
int main(){
	int a = -10;
	unsigned int b = 5;
	if (a + b > 0){
		printf(">0\n");//程序执行
	}
	else{
		printf("<0\n");
	}
	return 0;
}
#endif

#if 0
int main(){
	char a = 258;
	printf("%d\n", a);//输出2
	return 0;
}
#endif

#if 0
int main(){
	char a = 0x80;
	unsigned char b = 0x80;
	unsigned int c = a;
	int d = a;

	printf("a = %d, a = %u\n", a, a);
	printf("b = %d, b = %u\n", b, b);
	printf("c = %d, c = %u\n", c, c);
	printf("d = %d, d = %u\n", d, d);

	system("pause");
	return 0;
}
#endif


int check_sys()
{
	int i = 1;
	return (*(char *)&i);
}
int main() {
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}