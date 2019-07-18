#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//写一个函数判断一年是不是闰年

int judge_leap_year(int num){
	if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
		return 1;
	else
		return 0;
}

	//以上为优化代码
	/*if (num % 100 == 0){
		if (num % 400 == 0){
		return 1;
		}
		else{
		return 0;
		}
		}
		else if(num % 4 == 0){
		return 1;
		}
		else{
		return 0;
		}
}*/

int main(){
	int num = 0;

	//用来检验函数的正确性

	//for (num = 1000; num <= 2000; num++){
	//	if (judge_leap_year(num) == 1){
	//		printf("%d ", num);
	//	}
	//}

	scanf("%d", &num);
	if (0 == judge_leap_year(num)){
		printf("这一年不是闰年");
	}
	else{
		printf("这一年是闰年");
	}

	system("pause");
	return 0;
}