#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//ʵ��һ�������ж�year�ǲ������ꡣ 

void judgeLeapYear(year){
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		printf("%d������\n", year);
	else
		printf("%d��������\n", y ear);
}

int main(){
	int year = 0;
	scanf("%4d", &year);//%4d:ֻҪǰ4����
	judgeLeapYear(year);
	system("pause");
	return 0;
}