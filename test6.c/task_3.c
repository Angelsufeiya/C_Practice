#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//实现一个函数判断year是不是润年。 

void judgeLeapYear(year){
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n", y ear);
}

int main(){
	int year = 0;
	scanf("%4d", &year);//%4d:只要前4个数
	judgeLeapYear(year);
	system("pause");
	return 0;
}