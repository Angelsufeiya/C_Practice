#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�

int main(){
	int i, input;
	char num[34] = { 0 };

	printf("������һ������ʮ���ƣ���");
	scanf("%d", &input);

	for (i = 31; i >= 0; i -= 2){	//ż��λ
		putchar((input >> i & 1) + '0');
	}
	putchar('\n');
	for (i = 30; i >= 0; i -= 2){	//����λ
		putchar((input >> i & 1) + '0');
	}
	putchar('\n');
	
	//int tmp = input;
	//for (i = 30; i >= 0; i -= 2, input /= 4){//ż��λ
	//	num[i / 2] = input % 2 + '0';
	//}
	//puts(num);
	//input = tmp / 2;
	//for (i = 31; i >= 0; i -= 2, input /= 4){//����λ
	//	num[i / 2] = input % 2 + '0';
	//}
	//puts(num);

	for (i = 31; i >= 0; i--, input /= 2){
		num[i] = input % 2 + '0'; 
	}

	for (i = 0; i <= 31; i += 2){	//ż��λ
		putchar(num[i]);
	}
	putchar('\n'); 
	for (i = 1; i <= 31; i += 2){	//����λ
		putchar(num[i]);
	}

	system("pause");
	return 0;
}