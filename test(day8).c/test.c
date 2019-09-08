#include <stdio.h>
#include <stdlib.h>

//将1，2，3，……，9共9个数分成组，分别组成3个3位数，且使这三个三位数构成1：2：3的比例，
//试求出所有满足条件的3个3位数

int judge(int a, int  b, int  c) {
	int i = 0;

	i |= 1 << a % 10;
	i |= 1 << a / 10 % 10;
	i |= 1 << a / 100;

	i |= 1 << b % 10;
	i |= 1 << b / 10 % 10;
	i |= 1 << b / 100;

	i |= 1 << c % 10;
	i |= 1 << c / 10 % 10;
	i |= 1 << c / 100;

	return i == 0x3fe;
}

int main10(){
	int a, b, c;
	for (a = 123; a < 329; a++){
		for (b = 246; b < 658; b++){
			for (c = 369; c < 987; c++){
				if (judge(a, b, c) && b == 2 * a &&c == 3 * a){
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}

	system("pause");
	return 0;
}

