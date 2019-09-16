#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。

int main(){
	int i, input;
	char num[34] = { 0 };

	printf("请输入一个数（十进制）：");
	scanf("%d", &input);

	for (i = 31; i >= 0; i -= 2){	//偶数位
		putchar((input >> i & 1) + '0');
	}
	putchar('\n');
	for (i = 30; i >= 0; i -= 2){	//奇数位
		putchar((input >> i & 1) + '0');
	}
	putchar('\n');
	
	//int tmp = input;
	//for (i = 30; i >= 0; i -= 2, input /= 4){//偶数位
	//	num[i / 2] = input % 2 + '0';
	//}
	//puts(num);
	//input = tmp / 2;
	//for (i = 31; i >= 0; i -= 2, input /= 4){//奇数位
	//	num[i / 2] = input % 2 + '0';
	//}
	//puts(num);

	for (i = 31; i >= 0; i--, input /= 2){
		num[i] = input % 2 + '0'; 
	}

	for (i = 0; i <= 31; i += 2){	//偶数位
		putchar(num[i]);
	}
	putchar('\n'); 
	for (i = 1; i <= 31; i += 2){	//奇数位
		putchar(num[i]);
	}

	system("pause");
	return 0;
}