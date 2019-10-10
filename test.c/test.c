//数据的存储

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

#if 0

int check_sys0()
{
	int i = 1;
	return (*(char *)&i);//小端输出1，大端输出0
}

int check_sys() {
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}

//检测出计算机为小端模式（数据的地位存在低地址中，高位存在高地址中）
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
#endif

#if 0
int main() {
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为:%d\n", n); // 9
	printf("*pFloat的值为:%f\n", *pFloat);// 0.000000

	*pFloat = 9.0; //                        正   3+127=130    1001.0 = 1.001 * 2^3 
	printf("num的值为:%d\n", n); //1091567616(0    10000010    001 0000 0000 0000 0000 0000)
	printf("*pFloat的值为:%f\n", *pFloat);//9.000000

	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	char a = -1;		//11111111（-1）
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);//-1，-1，255
	return 0;
}
#endif
#if 0
int main()
{
	char a = -128;//10000000
	printf("%u\n", a);//输出无符号整型（unsiged int)4294967168(1111 1111 1111 1111 1111 1111 1000 0000)
						//unsigend long int是无符号整数类型，能表示的整数范围是0~4294967295
	return 0;
}
#endif
#if 0
int main()
{
	char a = 128;//128表示为1000 0000，这里发生溢出，因为第一位为1，为符号位，表示负数，即-128
	printf("%u\n", a);//4294967168(1111 1111 1111 1111 1111 1111 1000 0000)

	int i = -20;//1111 1111 1111 1111 1111 1111 1110 1100‬
	unsigned int j = 10;// 0000 0000 0000 0000 0000 0000 0000 1010
	//int 与unsigned int参与运算或者比较大小时，int 均转为unsigned int型。
	printf("%d\n", i + j);// -10
	printf("%u\n", i + j);// 4294967286(1111 1111 1111 1111 1111 1111 1111 0110‬)
	return 0;
}

#endif

#if 0
int main(){
	unsigned int i;//无符号数一直大于等于0
	for (i = 9; i >= 0; i--)
	{
		printf("%d\n", i);//输出 0后，从-1(1111 1111 1111 1111 1111 1111 1111 1111)开始递减
		printf("%u\n", i);//输出 0后，从4294967295(1111 1111 1111 1111 1111 1111 1111 1111)开始递减
	}
	return 0;
}
#endif

#if 1
int main()
{
	char a[1000];//取值范围00000000~11111111(0~127,-128~-1)
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;//a[127] = -128;a[128] = 127; a[129] = 126
	}
	printf("%d", strlen(a));//a[255] = 0
	return 0;
}
#endif
#if 0
unsigned char i = 0;//取值范围0~255，超过255又回到0
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	return 0;
}
#endif