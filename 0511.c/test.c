#include<stdio.h>
#include<stdlib.h>

#if 0
int main(){
	int a = 5, b = 7;
	int max = (a + b + abs(a - b))/2;	//得到大数
	int min = (a + b - abs(a - b))/2;	//得到小数

	printf("大数为%d\n小数为%d\n", max, min);

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
	n = strlen(a);//strlen是求字符串的实际长度（不包括\0)
	m = strlen(b);
	printf("%d,%d", n, m);

	system("pause");
	return 0;
}